// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.SplashBehaviour

// ============================================================
// RVA: 0x150014c | Atlas.SplashBehaviour.Start
// ============================================================

/* WARNING: Possible PIC construction at 0x0150039c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015003d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015003a0) */
/* WARNING: Removing unreachable block (ram,0x015003a4) */
/* WARNING: Removing unreachable block (ram,0x015003c4) */
/* WARNING: Removing unreachable block (ram,0x015003dc) */
/* WARNING: Removing unreachable block (ram,0x015003e0) */
/* WARNING: Removing unreachable block (ram,0x015003fc) */
/* WARNING: Removing unreachable block (ram,0x01500418) */
/* WARNING: Removing unreachable block (ram,0x0150042c) */
/* WARNING: Removing unreachable block (ram,0x0150043c) */
/* WARNING: Removing unreachable block (ram,0x01500444) */
/* WARNING: Removing unreachable block (ram,0x01500460) */
/* WARNING: Removing unreachable block (ram,0x01500474) */
/* WARNING: Removing unreachable block (ram,0x01500480) */
/* WARNING: Removing unreachable block (ram,0x01500494) */
/* WARNING: Removing unreachable block (ram,0x015004a4) */
/* WARNING: Removing unreachable block (ram,0x015004a8) */
/* WARNING: Removing unreachable block (ram,0x015004b0) */
/* WARNING: Removing unreachable block (ram,0x015004cc) */
/* WARNING: Removing unreachable block (ram,0x015004e0) */
/* WARNING: Removing unreachable block (ram,0x015004ec) */
/* WARNING: Removing unreachable block (ram,0x01500500) */
/* WARNING: Removing unreachable block (ram,0x01500510) */
/* WARNING: Removing unreachable block (ram,0x01500514) */
/* WARNING: Removing unreachable block (ram,0x0150051c) */
/* WARNING: Removing unreachable block (ram,0x0150053c) */
/* WARNING: Removing unreachable block (ram,0x0150067c) */
/* WARNING: Removing unreachable block (ram,0x01500550) */
/* WARNING: Removing unreachable block (ram,0x0150055c) */
/* WARNING: Removing unreachable block (ram,0x01500594) */
/* WARNING: Removing unreachable block (ram,0x015005a4) */
/* WARNING: Removing unreachable block (ram,0x015005b8) */
/* WARNING: Removing unreachable block (ram,0x015005ec) */
/* WARNING: Removing unreachable block (ram,0x01500610) */
/* WARNING: Removing unreachable block (ram,0x01500618) */
/* WARNING: Removing unreachable block (ram,0x0150061c) */
/* WARNING: Removing unreachable block (ram,0x01500630) */
/* WARNING: Removing unreachable block (ram,0x0150063c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_SplashBehaviour__Start(undefined1 param_1 [16],float param_2,undefined8 param_3)

{
  float fVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  int extraout_w1;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined4 unaff_w23;
  undefined4 uVar13;
  ulong uVar15;
  undefined8 unaff_x25;
  undefined1 uVar16;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar17;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 uVar18;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 uVar19;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  float fVar20;
  undefined4 unaff_s10;
  ulong uVar21;
  float unaff_s11;
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  uint uStack_1f4;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uVar14;
  
  if ((bRam0000000003eb4ce4 & 1) == 0) {
    func_0x00f78a20(0x3d28fa0);
    bRam0000000003eb4ce4 = 1;
  }
  uVar5 = func_0x00f78aec(/*Atlas.SplashBehaviour.<Start>d__28_TypeInfo*/ uRam0000000003d28fa0);
  puVar10 = (undefined8 *)0x0;
  /*Atlas.SplashBehaviour.<Start>d__28$$.ctor*/ func_0x0156afc4(uVar5,0);
  if (uVar5 != 0) {
    *(undefined8 *)(uVar5 + 0x20) = param_3;
    return uVar5;
  }
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb4ce5 & 1) == 0) {
    func_0x00f78a20(0x3d29708);
    func_0x00f78a20(0x3d29710);
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d5d358);
    func_0x00f78a20(0x3d5d360);
    func_0x00f78a20(0x3d5d368);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d25740);
    func_0x00f78a20(0x3d7c7e0);
    func_0x00f78a20(0x3d70500);
    func_0x00f78a20(0x3d66020);
    func_0x00f78a20(0x3d7c698);
    bRam0000000003eb4ce5 = 1;
  }
  uStack_88 = 0;
  if (*(long *)(lVar6 + 0x18) == 0) {
code_r0x01500670:
    uVar13 = unaff_w23;
    func_0x00f78af4();
    uVar7 = func_0x00f78b24();
    auVar23 = func_0x00f78ac0(uVar7,0);
    uVar16 = extraout_b0;
    uVar17 = extraout_var;
    uVar18 = extraout_var_01;
    uVar19 = extraout_var_03;
  }
  else {
    /*UnityEngine.Video.VideoPlayer$$set_audioOutputMode*/ func_0x032fbc10(*(long *)(lVar6 + 0x18),0,0);
    lVar12 = *(long *)(lVar6 + 0x18);
    uVar7 = func_0x00f78aec(/*UnityEngine.Video.VideoPlayer.EventHandler_TypeInfo*/ uRam0000000003d29710);
    puVar10 = puRam0000000003d5d360;
    /*UnityEngine.Video.VideoPlayer.EventHandler$$.ctor*/ func_0x032fce7c(uVar7,lVar6,puRam0000000003d5d360,0);
    if (lVar12 == 0) goto code_r0x01500670;
    unaff_w23 = 0x3d5d000;
    uVar13 = 0x3d5d000;
    /*UnityEngine.Video.VideoPlayer$$add_prepareCompleted*/ func_0x032fbc60(lVar12,uVar7,0);
    lVar12 = *(long *)(lVar6 + 0x18);
    uVar7 = func_0x00f78aec(/*UnityEngine.Video.VideoPlayer.ErrorEventHandler_TypeInfo*/ uRam0000000003d29708);
    puVar10 = puRam0000000003d5d358;
    /*UnityEngine.Video.VideoPlayer.ErrorEventHandler$$.ctor*/ func_0x032fce04(uVar7,lVar6,puRam0000000003d5d358,0);
    if (lVar12 == 0) goto code_r0x01500670;
    puVar10 = (undefined8 *)0x0;
    /*UnityEngine.Video.VideoPlayer$$add_errorReceived*/ func_0x032fbda0(lVar12,uVar7);
    if (*(long *)(lVar6 + 0x18) == 0) goto code_r0x01500670;
    puVar10 = (undefined8 *)0x0;
    /*UnityEngine.Video.VideoPlayer$$set_clip*/ func_0x032fba00(*(long *)(lVar6 + 0x18),0);
    if (*(long *)(lVar6 + 0x20) == 0) goto code_r0x01500670;
    puVar10 = (undefined8 *)0x0;
    /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar6 + 0x20),0);
    if (*(long *)(lVar6 + 0x30) == 0) goto code_r0x01500670;
    /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar6 + 0x30),0,0);
    iVar3 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
    auVar23._8_4_ = iVar3;
    auVar23._0_8_ = lVar6;
    iVar4 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
    param_2 = (float)iVar4;
    fVar20 = (float)iVar3 / param_2;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = uStack_88 & 0xffffffff00000000;
    puVar10 = &uStack_98;
    uVar16 = SUB41(fVar20,0);
    uVar17 = (undefined1)((uint)fVar20 >> 8);
    uVar18 = (undefined1)((uint)fVar20 >> 0x10);
    uVar19 = (undefined1)((uint)fVar20 >> 0x18);
  }
  puVar11 = puVar10;
  if ((bRam0000000003eb4ce6 & 1) == 0) {
    func_0x00f78a20(0x3d33768);
    func_0x00f78a20(0x3d33770);
    func_0x00f78a20(0x3d33778);
    func_0x00f78a20(0x3d3da48);
    bRam0000000003eb4ce6 = 1;
  }
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar6 = *(long *)(auVar23._0_8_ + 0x48);
  if (lVar6 == 0) {
    auVar22 = func_0x00f78af4();
    if (auVar22._8_4_ != 1) {
      auVar23 = __Unwind_Resume();
      uVar5 = auVar23._0_8_;
      if ((bRam0000000003eb4ce7 & 1) == 0) {
        func_0x00f78a20(0x3d33768);
        func_0x00f78a20(0x3d33770);
        func_0x00f78a20(0x3d33778);
        func_0x00f78a20(0x3d3da48);
        bRam0000000003eb4ce7 = 1;
      }
      uStack_1d0 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      if (*(long *)(uVar5 + 0x48) == 0) {
        func_0x00f78af4();
        if (extraout_w1 == 1) {
          plVar9 = (long *)___cxa_begin_catch();
          lVar6 = *plVar9;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<SplashBehaviour.VideoData>$$Dispose*/ func_0x01f84e4c(&uStack_1f0,uRam0000000003d33768);
          if (lVar6 == 0) goto code_r0x0150093c;
          func_0x00f78ac0(lVar6,0);
        }
        uVar5 = __Unwind_Resume();
        return uVar5;
      }
      /*System.Collections.Generic.List<SplashBehaviour.VideoData>$$GetEnumerator*/ func_0x025a05d8(&uStack_1f0,*(long *)(uVar5 + 0x48),uRam0000000003d3da48);
      uStack_1f4 = 0;
      uVar21 = 0;
      uVar5 = 0;
      uVar14 = 0;
      unaff_x25 = 0;
      unaff_s11 = 0.0;
      iVar3 = 0x7fffffff;
      while( true ) {
        uVar13 = (undefined4)uVar14;
        unaff_s10 = (undefined4)uVar21;
        uVar8 = /*System.Collections.Generic.List.Enumerator<SplashBehaviour.VideoData>$$MoveNext*/ func_0x01f84e50(&uStack_1f0,uRam0000000003d33770);
        uVar2 = uStack_1d0;
        uVar7 = uStack_1e0;
        if ((uVar8 & 1) == 0) break;
        uVar15 = uStack_1d8 & 0xffffffff;
        fVar20 = uStack_1d8._4_4_;
        fVar1 = (float)uStack_1d0;
        uVar8 = uStack_1d0 >> 0x20;
        iVar4 = /*UnityEngine.Mathf$$Abs*/ func_0x0323cc74((int)uStack_1d8 - auVar23._8_4_,0);
        if (ABS(fVar20 / fVar1 -
                (float)CONCAT13(extraout_var_04,
                                CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00))))
            < param_2 && iVar4 < iVar3) {
          uStack_1f4 = 1;
          uVar21 = uVar2 & 0xffffffff;
          uVar5 = uVar8;
          uVar14 = uVar15;
          unaff_x25 = uVar7;
          unaff_s11 = fVar20;
          iVar3 = iVar4;
        }
      }
      /*System.Collections.Generic.List.Enumerator<SplashBehaviour.VideoData>$$Dispose*/ func_0x01f84e4c(&uStack_1f0,uRam0000000003d33768);
code_r0x0150093c:
      *puVar11 = unaff_x25;
      *(undefined4 *)(puVar11 + 1) = uVar13;
      *(float *)((long)puVar11 + 0xc) = unaff_s11;
      *(undefined4 *)(puVar11 + 2) = unaff_s10;
      *(int *)((long)puVar11 + 0x14) = (int)uVar5;
      return (ulong)(uStack_1f4 & 1);
    }
    func_0x032ff158(auVar22._0_8_,auVar22._8_8_,&uStack_120);
  }
  else {
    /*System.Collections.Generic.List<SplashBehaviour.VideoData>$$GetEnumerator*/ func_0x025a05d8(&uStack_120,lVar6,uRam0000000003d3da48);
    fVar20 = _UNK_033f7d80;
    do {
      do {
        uVar5 = /*System.Collections.Generic.List.Enumerator<SplashBehaviour.VideoData>$$MoveNext*/ func_0x01f84e50(&uStack_120,uRam0000000003d33770);
        if ((uVar5 & 1) == 0) {
          iVar3 = 0x61;
          goto code_r0x01500790;
        }
      } while ((int)uStack_108 != auVar23._8_4_);
    } while (fVar20 <= ABS(uStack_108._4_4_ / (float)uStack_100 -
                           (float)CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)))));
    *puVar10 = uStack_110;
    *(int *)(puVar10 + 1) = auVar23._8_4_;
    *(float *)((long)puVar10 + 0xc) = uStack_108._4_4_;
    *(float *)(puVar10 + 2) = (float)uStack_100;
    *(undefined4 *)((long)puVar10 + 0x14) = uStack_100._4_4_;
    iVar3 = 0x6a;
code_r0x01500790:
    /*System.Collections.Generic.List.Enumerator<SplashBehaviour.VideoData>$$Dispose*/ func_0x01f84e4c(&uStack_120,uRam0000000003d33768);
    if (iVar3 == 0x6a) {
      return uVar5;
    }
  }
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  return 0;
}



// ============================================================
// RVA: 0x15001c0 | Atlas.SplashBehaviour.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x0150039c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015003d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015003a0) */
/* WARNING: Removing unreachable block (ram,0x015003a4) */
/* WARNING: Removing unreachable block (ram,0x015003c4) */
/* WARNING: Removing unreachable block (ram,0x015003dc) */
/* WARNING: Removing unreachable block (ram,0x015003e0) */
/* WARNING: Removing unreachable block (ram,0x015003fc) */
/* WARNING: Removing unreachable block (ram,0x01500418) */
/* WARNING: Removing unreachable block (ram,0x0150042c) */
/* WARNING: Removing unreachable block (ram,0x0150043c) */
/* WARNING: Removing unreachable block (ram,0x01500444) */
/* WARNING: Removing unreachable block (ram,0x01500460) */
/* WARNING: Removing unreachable block (ram,0x01500474) */
/* WARNING: Removing unreachable block (ram,0x01500480) */
/* WARNING: Removing unreachable block (ram,0x01500494) */
/* WARNING: Removing unreachable block (ram,0x015004a4) */
/* WARNING: Removing unreachable block (ram,0x015004a8) */
/* WARNING: Removing unreachable block (ram,0x015004b0) */
/* WARNING: Removing unreachable block (ram,0x015004cc) */
/* WARNING: Removing unreachable block (ram,0x015004e0) */
/* WARNING: Removing unreachable block (ram,0x015004ec) */
/* WARNING: Removing unreachable block (ram,0x01500500) */
/* WARNING: Removing unreachable block (ram,0x01500510) */
/* WARNING: Removing unreachable block (ram,0x01500514) */
/* WARNING: Removing unreachable block (ram,0x0150051c) */
/* WARNING: Removing unreachable block (ram,0x0150053c) */
/* WARNING: Removing unreachable block (ram,0x0150067c) */
/* WARNING: Removing unreachable block (ram,0x01500550) */
/* WARNING: Removing unreachable block (ram,0x0150055c) */
/* WARNING: Removing unreachable block (ram,0x01500594) */
/* WARNING: Removing unreachable block (ram,0x015005a4) */
/* WARNING: Removing unreachable block (ram,0x015005b8) */
/* WARNING: Removing unreachable block (ram,0x015005ec) */
/* WARNING: Removing unreachable block (ram,0x01500610) */
/* WARNING: Removing unreachable block (ram,0x01500618) */
/* WARNING: Removing unreachable block (ram,0x0150061c) */
/* WARNING: Removing unreachable block (ram,0x01500630) */
/* WARNING: Removing unreachable block (ram,0x0150063c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_SplashBehaviour__Init
                (undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4,
                undefined8 *param_5)

{
  float fVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  int extraout_w1;
  undefined8 *puVar9;
  long lVar10;
  undefined4 unaff_w23;
  undefined4 uVar11;
  ulong uVar13;
  undefined8 unaff_x25;
  undefined1 uVar14;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar15;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 uVar16;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 uVar17;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  float fVar18;
  undefined4 unaff_s10;
  ulong uVar19;
  float unaff_s11;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  uint uStack_1c4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uVar12;
  
  if ((bRam0000000003eb4ce5 & 1) == 0) {
    func_0x00f78a20(0x3d29708);
    func_0x00f78a20(0x3d29710);
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d5d358);
    func_0x00f78a20(0x3d5d360);
    func_0x00f78a20(0x3d5d368);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d25740);
    func_0x00f78a20(0x3d7c7e0);
    func_0x00f78a20(0x3d70500);
    func_0x00f78a20(0x3d66020);
    func_0x00f78a20(0x3d7c698);
    bRam0000000003eb4ce5 = 1;
  }
  uStack_58 = 0;
  if (*(long *)(param_3 + 0x18) == 0) {
LAB_01500670:
    uVar11 = unaff_w23;
    func_0x00f78af4();
    uVar5 = func_0x00f78b24();
    auVar21 = func_0x00f78ac0(uVar5,0);
    iVar3 = auVar21._8_4_;
    param_3 = auVar21._0_8_;
    uVar14 = extraout_b0;
    uVar15 = extraout_var;
    uVar16 = extraout_var_01;
    uVar17 = extraout_var_03;
  }
  else {
    /*UnityEngine.Video.VideoPlayer$$set_audioOutputMode*/ func_0x032fbc10(*(long *)(param_3 + 0x18),0,0);
    lVar10 = *(long *)(param_3 + 0x18);
    uVar5 = func_0x00f78aec(/*UnityEngine.Video.VideoPlayer.EventHandler_TypeInfo*/ uRam0000000003d29710);
    param_5 = puRam0000000003d5d360;
    /*UnityEngine.Video.VideoPlayer.EventHandler$$.ctor*/ func_0x032fce7c(uVar5,param_3,puRam0000000003d5d360,0);
    if (lVar10 == 0) goto LAB_01500670;
    unaff_w23 = 0x3d5d000;
    uVar11 = 0x3d5d000;
    /*UnityEngine.Video.VideoPlayer$$add_prepareCompleted*/ func_0x032fbc60(lVar10,uVar5,0);
    lVar10 = *(long *)(param_3 + 0x18);
    uVar5 = func_0x00f78aec(/*UnityEngine.Video.VideoPlayer.ErrorEventHandler_TypeInfo*/ uRam0000000003d29708);
    param_5 = puRam0000000003d5d358;
    /*UnityEngine.Video.VideoPlayer.ErrorEventHandler$$.ctor*/ func_0x032fce04(uVar5,param_3,puRam0000000003d5d358,0);
    if (lVar10 == 0) goto LAB_01500670;
    param_5 = (undefined8 *)0x0;
    /*UnityEngine.Video.VideoPlayer$$add_errorReceived*/ func_0x032fbda0(lVar10,uVar5);
    if (*(long *)(param_3 + 0x18) == 0) goto LAB_01500670;
    param_5 = (undefined8 *)0x0;
    /*UnityEngine.Video.VideoPlayer$$set_clip*/ func_0x032fba00(*(long *)(param_3 + 0x18),0);
    if (*(long *)(param_3 + 0x20) == 0) goto LAB_01500670;
    param_5 = (undefined8 *)0x0;
    /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(param_3 + 0x20),0);
    if (*(long *)(param_3 + 0x30) == 0) goto LAB_01500670;
    /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(param_3 + 0x30),0,0);
    iVar3 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
    iVar4 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
    param_2 = (float)iVar4;
    fVar18 = (float)iVar3 / param_2;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = uStack_58 & 0xffffffff00000000;
    param_5 = &uStack_68;
    uVar14 = SUB41(fVar18,0);
    uVar15 = (undefined1)((uint)fVar18 >> 8);
    uVar16 = (undefined1)((uint)fVar18 >> 0x10);
    uVar17 = (undefined1)((uint)fVar18 >> 0x18);
  }
  puVar9 = param_5;
  if ((bRam0000000003eb4ce6 & 1) == 0) {
    func_0x00f78a20(0x3d33768);
    func_0x00f78a20(0x3d33770);
    func_0x00f78a20(0x3d33778);
    func_0x00f78a20(0x3d3da48);
    bRam0000000003eb4ce6 = 1;
  }
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (*(long *)(param_3 + 0x48) == 0) {
    auVar20 = func_0x00f78af4();
    if (auVar20._8_4_ != 1) {
      auVar21 = __Unwind_Resume();
      uVar6 = auVar21._0_8_;
      if ((bRam0000000003eb4ce7 & 1) == 0) {
        func_0x00f78a20(0x3d33768);
        func_0x00f78a20(0x3d33770);
        func_0x00f78a20(0x3d33778);
        func_0x00f78a20(0x3d3da48);
        bRam0000000003eb4ce7 = 1;
      }
      uStack_1a0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      if (*(long *)(uVar6 + 0x48) == 0) {
        func_0x00f78af4();
        if (extraout_w1 == 1) {
          plVar8 = (long *)___cxa_begin_catch();
          lVar10 = *plVar8;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<SplashBehaviour.VideoData>$$Dispose*/ func_0x01f84e4c(&uStack_1c0,uRam0000000003d33768);
          if (lVar10 == 0) goto code_r0x0150093c;
          func_0x00f78ac0(lVar10,0);
        }
        uVar6 = __Unwind_Resume();
        return uVar6;
      }
      /*System.Collections.Generic.List<SplashBehaviour.VideoData>$$GetEnumerator*/ func_0x025a05d8(&uStack_1c0,*(long *)(uVar6 + 0x48),uRam0000000003d3da48);
      uStack_1c4 = 0;
      uVar19 = 0;
      uVar6 = 0;
      uVar12 = 0;
      unaff_x25 = 0;
      unaff_s11 = 0.0;
      iVar3 = 0x7fffffff;
      while( true ) {
        uVar11 = (undefined4)uVar12;
        unaff_s10 = (undefined4)uVar19;
        uVar7 = /*System.Collections.Generic.List.Enumerator<SplashBehaviour.VideoData>$$MoveNext*/ func_0x01f84e50(&uStack_1c0,uRam0000000003d33770);
        uVar2 = uStack_1a0;
        uVar5 = uStack_1b0;
        if ((uVar7 & 1) == 0) break;
        uVar13 = uStack_1a8 & 0xffffffff;
        fVar18 = uStack_1a8._4_4_;
        fVar1 = (float)uStack_1a0;
        uVar7 = uStack_1a0 >> 0x20;
        iVar4 = /*UnityEngine.Mathf$$Abs*/ func_0x0323cc74((int)uStack_1a8 - auVar21._8_4_,0);
        if (ABS(fVar18 / fVar1 -
                (float)CONCAT13(extraout_var_04,
                                CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00))))
            < param_2 && iVar4 < iVar3) {
          uStack_1c4 = 1;
          uVar19 = uVar2 & 0xffffffff;
          uVar6 = uVar7;
          uVar12 = uVar13;
          unaff_x25 = uVar5;
          unaff_s11 = fVar18;
          iVar3 = iVar4;
        }
      }
      /*System.Collections.Generic.List.Enumerator<SplashBehaviour.VideoData>$$Dispose*/ func_0x01f84e4c(&uStack_1c0,uRam0000000003d33768);
code_r0x0150093c:
      *puVar9 = unaff_x25;
      *(undefined4 *)(puVar9 + 1) = uVar11;
      *(float *)((long)puVar9 + 0xc) = unaff_s11;
      *(undefined4 *)(puVar9 + 2) = unaff_s10;
      *(int *)((long)puVar9 + 0x14) = (int)uVar6;
      return (ulong)(uStack_1c4 & 1);
    }
    func_0x032ff158(auVar20._0_8_,auVar20._8_8_,&uStack_f0);
  }
  else {
    /*System.Collections.Generic.List<SplashBehaviour.VideoData>$$GetEnumerator*/ func_0x025a05d8(&uStack_f0,*(long *)(param_3 + 0x48),uRam0000000003d3da48);
    fVar18 = _UNK_033f7d80;
    do {
      do {
        uVar6 = /*System.Collections.Generic.List.Enumerator<SplashBehaviour.VideoData>$$MoveNext*/ func_0x01f84e50(&uStack_f0,uRam0000000003d33770);
        if ((uVar6 & 1) == 0) {
          iVar3 = 0x61;
          goto code_r0x01500790;
        }
      } while ((int)uStack_d8 != iVar3);
    } while (fVar18 <= ABS(uStack_d8._4_4_ / (float)uStack_d0 -
                           (float)CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14)))));
    *param_5 = uStack_e0;
    *(int *)(param_5 + 1) = iVar3;
    *(float *)((long)param_5 + 0xc) = uStack_d8._4_4_;
    *(float *)(param_5 + 2) = (float)uStack_d0;
    *(undefined4 *)((long)param_5 + 0x14) = uStack_d0._4_4_;
    iVar3 = 0x6a;
code_r0x01500790:
    /*System.Collections.Generic.List.Enumerator<SplashBehaviour.VideoData>$$Dispose*/ func_0x01f84e4c(&uStack_f0,uRam0000000003d33768);
    if (iVar3 == 0x6a) {
      return uVar6;
    }
  }
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  return 0;
}



// ============================================================
// RVA: 0x1500688 | Atlas.SplashBehaviour.MatchVideoExact
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_SplashBehaviour__MatchVideoExact
                (float param_1,float param_2,long param_3,int param_4,undefined8 *param_5)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  int extraout_w1;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  undefined4 unaff_w23;
  ulong uVar12;
  ulong uVar13;
  undefined8 unaff_x25;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined4 unaff_s10;
  ulong uVar14;
  float unaff_s11;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  uint uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar9 = param_5;
  if ((bRam0000000003eb4ce6 & 1) == 0) {
    func_0x00f78a20(0x3d33768);
    func_0x00f78a20(0x3d33770);
    func_0x00f78a20(0x3d33778);
    func_0x00f78a20(0x3d3da48);
    bRam0000000003eb4ce6 = 1;
  }
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(long *)(param_3 + 0x48) == 0) {
    auVar15 = func_0x00f78af4();
    if (auVar15._8_4_ != 1) {
      auVar16 = __Unwind_Resume();
      uVar6 = auVar16._0_8_;
      if ((bRam0000000003eb4ce7 & 1) == 0) {
        func_0x00f78a20(0x3d33768);
        func_0x00f78a20(0x3d33770);
        func_0x00f78a20(0x3d33778);
        func_0x00f78a20(0x3d3da48);
        bRam0000000003eb4ce7 = 1;
      }
      uStack_130 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      if (*(long *)(uVar6 + 0x48) == 0) {
        func_0x00f78af4();
        if (extraout_w1 == 1) {
          plVar8 = (long *)___cxa_begin_catch();
          lVar11 = *plVar8;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<SplashBehaviour.VideoData>$$Dispose*/ func_0x01f84e4c(&uStack_150,uRam0000000003d33768);
          if (lVar11 == 0) goto code_r0x0150093c;
          func_0x00f78ac0(lVar11,0);
        }
        uVar6 = __Unwind_Resume();
        return uVar6;
      }
      /*System.Collections.Generic.List<SplashBehaviour.VideoData>$$GetEnumerator*/ func_0x025a05d8(&uStack_150,*(long *)(uVar6 + 0x48),uRam0000000003d3da48);
      uStack_154 = 0;
      uVar14 = 0;
      uVar6 = 0;
      uVar12 = 0;
      unaff_x25 = 0;
      unaff_s11 = 0.0;
      iVar10 = 0x7fffffff;
      while( true ) {
        unaff_s10 = (undefined4)uVar14;
        unaff_w23 = (undefined4)uVar12;
        uVar7 = /*System.Collections.Generic.List.Enumerator<SplashBehaviour.VideoData>$$MoveNext*/ func_0x01f84e50(&uStack_150,uRam0000000003d33770);
        uVar4 = uStack_130;
        uVar2 = uStack_140;
        if ((uVar7 & 1) == 0) break;
        uVar13 = uStack_138 & 0xffffffff;
        fVar1 = uStack_138._4_4_;
        fVar3 = (float)uStack_130;
        uVar7 = uStack_130 >> 0x20;
        iVar5 = /*UnityEngine.Mathf$$Abs*/ func_0x0323cc74((int)uStack_138 - auVar16._8_4_,0);
        if (ABS(fVar1 / fVar3 -
                (float)CONCAT13(extraout_var_01,
                                CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)))) <
            param_2 && iVar5 < iVar10) {
          uStack_154 = 1;
          uVar14 = uVar4 & 0xffffffff;
          uVar6 = uVar7;
          uVar12 = uVar13;
          unaff_x25 = uVar2;
          unaff_s11 = fVar1;
          iVar10 = iVar5;
        }
      }
      /*System.Collections.Generic.List.Enumerator<SplashBehaviour.VideoData>$$Dispose*/ func_0x01f84e4c(&uStack_150,uRam0000000003d33768);
code_r0x0150093c:
      *puVar9 = unaff_x25;
      *(undefined4 *)(puVar9 + 1) = unaff_w23;
      *(float *)((long)puVar9 + 0xc) = unaff_s11;
      *(undefined4 *)(puVar9 + 2) = unaff_s10;
      *(int *)((long)puVar9 + 0x14) = (int)uVar6;
      return (ulong)(uStack_154 & 1);
    }
    func_0x032ff158(auVar15._0_8_,auVar15._8_8_,&uStack_80);
  }
  else {
    /*System.Collections.Generic.List<SplashBehaviour.VideoData>$$GetEnumerator*/ func_0x025a05d8(&uStack_80,*(long *)(param_3 + 0x48),uRam0000000003d3da48);
    fVar1 = _UNK_033f7d80;
    do {
      do {
        uVar6 = /*System.Collections.Generic.List.Enumerator<SplashBehaviour.VideoData>$$MoveNext*/ func_0x01f84e50(&uStack_80,uRam0000000003d33770);
        if ((uVar6 & 1) == 0) {
          iVar10 = 0x61;
          goto LAB_01500790;
        }
      } while ((int)uStack_68 != param_4);
    } while (fVar1 <= ABS(uStack_68._4_4_ / (float)uStack_60 - param_1));
    *param_5 = uStack_70;
    *(int *)(param_5 + 1) = param_4;
    *(float *)((long)param_5 + 0xc) = uStack_68._4_4_;
    *(float *)(param_5 + 2) = (float)uStack_60;
    *(undefined4 *)((long)param_5 + 0x14) = uStack_60._4_4_;
    iVar10 = 0x6a;
LAB_01500790:
    /*System.Collections.Generic.List.Enumerator<SplashBehaviour.VideoData>$$Dispose*/ func_0x01f84e4c(&uStack_80,uRam0000000003d33768);
    if (iVar10 == 0x6a) {
      return uVar6;
    }
  }
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  return 0;
}



// ============================================================
// RVA: 0x15007f4 | Atlas.SplashBehaviour.MatchVideoClose
// ============================================================

ulong Atlas_SplashBehaviour__MatchVideoClose
                (float param_1,float param_2,ulong param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  int extraout_w1;
  long lVar9;
  undefined4 unaff_w23;
  ulong uVar10;
  undefined8 unaff_x25;
  int iVar11;
  undefined4 unaff_s10;
  ulong uVar12;
  float unaff_s11;
  uint uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  
  if ((bRam0000000003eb4ce7 & 1) == 0) {
    func_0x00f78a20(0x3d33768);
    func_0x00f78a20(0x3d33770);
    func_0x00f78a20(0x3d33778);
    func_0x00f78a20(0x3d3da48);
    bRam0000000003eb4ce7 = 1;
  }
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (*(long *)(param_3 + 0x48) != 0) {
    /*System.Collections.Generic.List<SplashBehaviour.VideoData>$$GetEnumerator*/ func_0x025a05d8(&uStack_c0,*(long *)(param_3 + 0x48),uRam0000000003d3da48);
    uStack_c4 = 0;
    uVar12 = 0;
    param_3 = 0;
    uVar8 = 0;
    unaff_x25 = 0;
    unaff_s11 = 0.0;
    iVar11 = 0x7fffffff;
    while( true ) {
      unaff_s10 = (undefined4)uVar12;
      unaff_w23 = (undefined4)uVar8;
      uVar6 = /*System.Collections.Generic.List.Enumerator<SplashBehaviour.VideoData>$$MoveNext*/ func_0x01f84e50(&uStack_c0,uRam0000000003d33770);
      uVar4 = uStack_a0;
      uVar1 = uStack_b0;
      if ((uVar6 & 1) == 0) break;
      uVar10 = uStack_a8 & 0xffffffff;
      fVar2 = uStack_a8._4_4_;
      fVar3 = (float)uStack_a0;
      uVar6 = uStack_a0 >> 0x20;
      iVar5 = /*UnityEngine.Mathf$$Abs*/ func_0x0323cc74((int)uStack_a8 - param_4,0);
      if (ABS(fVar2 / fVar3 - param_1) < param_2 && iVar5 < iVar11) {
        uStack_c4 = 1;
        uVar12 = uVar4 & 0xffffffff;
        param_3 = uVar6;
        uVar8 = uVar10;
        unaff_x25 = uVar1;
        unaff_s11 = fVar2;
        iVar11 = iVar5;
      }
    }
    /*System.Collections.Generic.List.Enumerator<SplashBehaviour.VideoData>$$Dispose*/ func_0x01f84e4c(&uStack_c0,uRam0000000003d33768);
code_r0x0150093c:
    *param_5 = unaff_x25;
    *(undefined4 *)(param_5 + 1) = unaff_w23;
    *(float *)((long)param_5 + 0xc) = unaff_s11;
    *(undefined4 *)(param_5 + 2) = unaff_s10;
    *(int *)((long)param_5 + 0x14) = (int)param_3;
    return (ulong)(uStack_c4 & 1);
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar7 = (long *)___cxa_begin_catch();
    lVar9 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<SplashBehaviour.VideoData>$$Dispose*/ func_0x01f84e4c(&uStack_c0,uRam0000000003d33768);
    if (lVar9 == 0) goto code_r0x0150093c;
    func_0x00f78ac0(lVar9,0);
  }
  uVar8 = __Unwind_Resume();
  return uVar8;
}



// ============================================================
// RVA: 0x15009c4 | Atlas.SplashBehaviour.Log
// ============================================================

void Atlas_SplashBehaviour__Log(void)

{
  return;
}



// ============================================================
// RVA: 0x15009c8 | Atlas.SplashBehaviour.PrepareVideoInternal
// ============================================================

/* WARNING: Possible PIC construction at 0x01501080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01500f2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01501084) */
/* WARNING: Removing unreachable block (ram,0x01501090) */
/* WARNING: Removing unreachable block (ram,0x01501098) */
/* WARNING: Removing unreachable block (ram,0x0150109c) */
/* WARNING: Removing unreachable block (ram,0x0325dfa4) */
/* WARNING: Removing unreachable block (ram,0x0325dfd4) */
/* WARNING: Removing unreachable block (ram,0x0325dfe8) */
/* WARNING: Removing unreachable block (ram,0x0325e00c) */
/* WARNING: Removing unreachable block (ram,0x0325e014) */
/* WARNING: Removing unreachable block (ram,0x0325e018) */
/* WARNING: Removing unreachable block (ram,0x01500f30) */
/* WARNING: Removing unreachable block (ram,0x01500f38) */
/* WARNING: Removing unreachable block (ram,0x01500f40) */
/* WARNING: Removing unreachable block (ram,0x01500f58) */
/* WARNING: Removing unreachable block (ram,0x01500f4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_SplashBehaviour__PrepareVideoInternal(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar13;
  undefined *puVar14;
  float extraout_s0;
  double dVar15;
  undefined8 uVar16;
  float fVar17;
  ulong unaff_d8;
  float fVar18;
  ulong unaff_d9;
  float fVar19;
  float fVar20;
  ulong unaff_d10;
  undefined8 unaff_d11;
  
  puVar2 = &stack0xffffffffffffffd0;
  puVar13 = &stack0xfffffffffffffff0;
  uVar12 = 0x3d28f98;
  if ((bRam0000000003eb4cef & 1) == 0) {
    func_0x00f78a20(0x3d28f98);
    bRam0000000003eb4cef = 1;
  }
  uVar6 = func_0x00f78aec(/*Atlas.SplashBehaviour.<PrepareVideoInternal>d__44_TypeInfo*/ uRam0000000003d28f98);
  /*Atlas.SplashBehaviour.<PrepareVideoInternal>d__44$$.ctor*/ func_0x0156ace8(uVar6,0,0);
  if (uVar6 != 0) {
    *(undefined8 *)(uVar6 + 0x20) = param_1;
    *(ulong *)(uVar6 + 0x28) = param_2;
    return uVar6;
  }
  puVar14 = &Atlas_SplashBehaviour__GetNextConfigIndex;
  uVar6 = func_0x00f78af4();
  uVar9 = 0;
code_r0x01500a40:
  puVar3 = puVar2 + -0x10;
  puVar4 = puVar2 + -0x10;
  *(undefined1 **)(puVar2 + -0x10) = puVar13;
  *(undefined **)(puVar2 + -8) = puVar14;
  lVar11 = *(long *)(uVar6 + 0x40);
  if (lVar11 != 0) {
    uVar6 = (ulong)*(uint *)(uVar6 + 0x54);
    while( true ) {
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar1;
      if ((int)*(uint *)(lVar11 + 0x18) <= (int)uVar1) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar1) break;
      if (*(char *)(lVar11 + (long)(int)uVar1 * 0x28 + 0x20) != '\0') {
        return uVar6;
      }
    }
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
  }
  puVar14 = &Atlas_SplashBehaviour__DeInit;
  uVar8 = func_0x00f78af4();
code_r0x01500a98:
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = uVar12;
  *(undefined8 *)(puVar3 + -0x28) = uVar9;
  *(undefined8 *)(puVar3 + -0x20) = param_1;
  *(ulong *)(puVar3 + -0x18) = param_2;
  *(undefined1 **)(puVar3 + -0x10) = puVar4;
  *(undefined **)(puVar3 + -8) = puVar14;
  uVar7 = 0x3eb4000;
  uVar6 = uVar8;
  if ((bRam0000000003eb4ce8 & 1) == 0) {
    func_0x00f78a20(0x3d43430);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d29708);
    func_0x00f78a20(0x3d29710);
    func_0x00f78a20(0x3d5d358);
    uVar6 = func_0x00f78a20(0x3d5d360);
    bRam0000000003eb4ce8 = 1;
  }
  if (*(long *)(uVar8 + 0x98) != 0) {
    uVar6 = /*UnityEngine.MonoBehaviour$$StopCoroutine*/ func_0x0324810c(uVar8,*(long *)(uVar8 + 0x98),0);
  }
  if (*(char *)(uVar8 + 0x7c) == '\0') goto code_r0x01500c20;
  if (*(long *)(uVar8 + 0x18) != 0) {
    iVar5 = /*UnityEngine.Video.VideoPlayer$$get_isPlaying*/ func_0x032fbb50(*(long *)(uVar8 + 0x18),0);
    if (iVar5 != 0) {
      if (*(long *)(uVar8 + 0x18) == 0) goto code_r0x01500c3c;
      /*UnityEngine.Video.VideoPlayer$$Stop*/ func_0x032fbb10(*(long *)(uVar8 + 0x18),0);
    }
    uVar12 = 0x3d5d360;
    uVar9 = *(undefined8 *)(uVar8 + 0x58);
    uVar16 = *(undefined8 *)(uVar8 + 0x70);
    uVar7 = *(undefined8 *)(uVar8 + 0x68);
    *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(uVar8 + 0x60);
    *(undefined8 *)(puVar3 + -0x80) = uVar9;
    *(undefined8 *)(puVar3 + -0x68) = uVar16;
    *(undefined8 *)(puVar3 + -0x70) = uVar7;
    if (((*(byte *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(puVar3 + -0x78);
    *(undefined8 *)(puVar3 + -0x60) = *(undefined8 *)(puVar3 + -0x80);
    *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)(puVar3 + -0x68);
    *(undefined8 *)(puVar3 + -0x50) = *(undefined8 *)(puVar3 + -0x70);
    /*UnityEngine.AddressableAssets.Addressables$$Release<VideoClip>*/ func_0x0171fcfc(puVar3 + -0x60,uRam0000000003d43430);
    lVar11 = *(long *)(uVar8 + 0x18);
    uVar9 = func_0x00f78aec(/*UnityEngine.Video.VideoPlayer.EventHandler_TypeInfo*/ uRam0000000003d29710);
    /*UnityEngine.Video.VideoPlayer.EventHandler$$.ctor*/ func_0x032fce7c(uVar9,uVar8,uRam0000000003d5d360,0);
    uVar7 = 0;
    if (lVar11 != 0) {
      uVar12 = 0x3d29000;
      unaff_x23 = 0x3d5d000;
      /*UnityEngine.Video.VideoPlayer$$remove_prepareCompleted*/ func_0x032fbd00(lVar11,uVar9,0);
      lVar11 = *(long *)(uVar8 + 0x18);
      uVar9 = func_0x00f78aec(/*UnityEngine.Video.VideoPlayer.ErrorEventHandler_TypeInfo*/ uRam0000000003d29708);
      /*UnityEngine.Video.VideoPlayer.ErrorEventHandler$$.ctor*/ func_0x032fce04(uVar9,uVar8,uRam0000000003d5d358,0);
      uVar7 = 0;
      if (lVar11 != 0) {
        uVar6 = /*UnityEngine.Video.VideoPlayer$$remove_errorReceived*/ func_0x032fbe40(lVar11,uVar9,0);
code_r0x01500c20:
        *(undefined8 *)(uVar8 + 0x50) = 0;
        return uVar6;
      }
    }
  }
code_r0x01500c3c:
  uVar6 = func_0x00f78af4();
  puVar2 = puVar3 + -0xd0;
  puVar4 = puVar3 + -0xd0;
  *(undefined8 *)(puVar3 + -0xc0) = unaff_d11;
  *(ulong *)(puVar3 + -0xb8) = unaff_d10;
  *(ulong *)(puVar3 + -0xb0) = unaff_d9;
  *(ulong *)(puVar3 + -0xa8) = unaff_d8;
  *(undefined8 *)(puVar3 + -0xa0) = uVar7;
  *(ulong *)(puVar3 + -0x98) = uVar8;
  *(undefined1 **)(puVar3 + -0x90) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x88) = &Atlas_SplashBehaviour__Update;
  puVar13 = puVar3 + -0x90;
  param_1 = 0x3eb4000;
  uVar8 = uVar6;
  if ((bRam0000000003eb4ce9 & 1) == 0) {
    func_0x00f78a20(0x3d712e8);
    func_0x00f78a20(0x3d76168);
    uVar8 = func_0x00f78a20(0x3d77a48);
    bRam0000000003eb4ce9 = 1;
  }
  *(undefined8 *)(puVar3 + -0xd0) = 0;
  *(undefined8 *)(puVar3 + -200) = 0;
  if (*(char *)(uVar6 + 0x7e) != '\0') {
    return uVar8;
  }
  if (*(char *)(uVar6 + 0x7d) != '\0') {
    puVar13 = *(undefined1 **)(puVar3 + -0x90);
    puVar14 = *(undefined **)(puVar3 + -0x88);
    param_1 = *(undefined8 *)(puVar3 + -0xa0);
    unaff_d9 = *(ulong *)(puVar3 + -0xb0);
    unaff_d8 = *(ulong *)(puVar3 + -0xa8);
    unaff_d11 = *(undefined8 *)(puVar3 + -0xc0);
    unaff_d10 = *(ulong *)(puVar3 + -0xb8);
    puVar4 = puVar3 + -0x80;
    uVar8 = uVar6;
    uVar6 = *(ulong *)(puVar3 + -0x98);
    goto code_r0x01500fdc;
  }
  uVar1 = *(uint *)(uVar6 + 0x54);
  if ((int)uVar1 < 0) {
code_r0x01500f60:
    param_1 = 0x3ca3000;
    if (cRam0000000003ca3500 == '\0') {
      func_0x00f78a20(0x3d22d90);
      cRam0000000003ca3500 = '\x01';
    }
    if (**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8) == 0) {
code_r0x01500fb4:
      fVar17 = *(float *)(uVar6 + 0x50);
      uVar8 = /*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
      *(float *)(uVar6 + 0x50) = fVar17 + extraout_s0;
      return uVar8;
    }
    lVar11 = *(long *)(**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8) + 0x158);
    if (lVar11 != 0) {
      iVar5 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_isPressed*/ func_0x02fdd6e8(lVar11,0);
      if (iVar5 != 0) {
        /*Atlas.SplashBehaviour$$TrySkip*/ func_0x01501540(uVar6);
      }
      goto code_r0x01500fb4;
    }
code_r0x01500fcc:
    func_0x00f78af4();
  }
  else {
    lVar11 = *(long *)(uVar6 + 0x40);
    if (lVar11 == 0) goto code_r0x01500fcc;
    if ((int)*(uint *)(lVar11 + 0x18) <= (int)uVar1) goto code_r0x01500f60;
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      if (*(char *)(lVar11 + (ulong)uVar1 * 0x28 + 0x34) == '\0') {
        lVar11 = lVar11 + (ulong)uVar1 * 0x28;
        fVar19 = *(float *)(lVar11 + 0x2c);
        unaff_d10 = (ulong)(uint)fVar19;
        fVar17 = *(float *)(lVar11 + 0x30);
        unaff_d8 = (ulong)(uint)fVar17;
        fVar18 = *(float *)(lVar11 + 0x28);
        unaff_d9 = (ulong)(uint)fVar18;
        /*Atlas.SplashBehaviour$$StartAudio*/ func_0x015010ec(uVar6,*(undefined8 *)(lVar11 + 0x40));
        lVar11 = *(long *)(uVar6 + 0x40);
        if (lVar11 != 0) {
          if (*(uint *)(lVar11 + 0x18) <= *(uint *)(uVar6 + 0x54)) goto code_r0x01500fd0;
          fVar18 = fVar18 + fVar17;
          unaff_d9 = (ulong)(uint)fVar18;
          fVar19 = fVar18 + fVar19;
          unaff_d8 = (ulong)(uint)fVar19;
          fVar20 = *(float *)(uVar6 + 0x50);
          unaff_d10 = (ulong)(uint)fVar20;
          fVar17 = *(float *)(lVar11 + (long)(int)*(uint *)(uVar6 + 0x54) * 0x28 + 0x28);
          if (fVar17 <= fVar20) {
            fVar17 = 1.0;
            if ((fVar18 <= fVar20) && (fVar17 = 0.0, fVar20 < fVar19)) {
              lVar11 = func_0x0001d34c();
              fVar17 = 1.0 - (fVar20 - fVar18) / *(float *)(lVar11 + 0xc);
            }
          }
          else {
            fVar17 = fVar20 / fVar17;
          }
          /*UnityEngine.Color$$.ctor*/ func_0x03222f84(0x3f800000,0x3f800000,0x3f800000,fVar17,puVar3 + -0xd0,0);
          plVar10 = *(long **)(uVar6 + 0x20);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x2a8))
                      (*(undefined4 *)(puVar3 + -0xd0),*(undefined4 *)(puVar3 + -0xcc),
                       *(undefined4 *)(puVar3 + -200),*(undefined4 *)(puVar3 + -0xc4),plVar10,
                       *(undefined8 *)(*plVar10 + 0x2b0));
            if (*(long *)(uVar6 + 0x20) != 0) {
              /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(uVar6 + 0x20),1,0);
              if (*(long *)(uVar6 + 0x30) != 0) {
                /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(uVar6 + 0x30),1,0);
                if (*(float *)(uVar6 + 0x50) < fVar19) goto code_r0x01500f60;
                goto code_r0x01500f28;
              }
            }
          }
        }
      }
      else if (*(int *)(uVar6 + 0x78) == 2) {
        if (*(long *)(uVar6 + 0x18) == 0) goto code_r0x01500fcc;
        dVar15 = (double)/*UnityEngine.Video.VideoPlayer$$get_time*/ func_0x032fbbd0(*(long *)(uVar6 + 0x18),0);
        fVar17 = (float)dVar15;
        unaff_d8 = (ulong)(uint)fVar17;
        if (ABS(fVar17 - *(float *)(uVar6 + 0x90)) < _UNK_033f8148) {
code_r0x01500e0c:
          iVar5 = *(int *)(uVar6 + 0x94) + 1;
          *(int *)(uVar6 + 0x94) = iVar5;
        }
        else {
          if (*(long *)(uVar6 + 0x18) == 0) goto code_r0x01500fcc;
          uVar8 = /*UnityEngine.Video.VideoPlayer$$get_isPaused*/ func_0x032fbb90(*(long *)(uVar6 + 0x18),0);
          if ((uVar8 & 1) != 0) goto code_r0x01500e0c;
          iVar5 = *(int *)(uVar6 + 0x94);
        }
        *(float *)(uVar6 + 0x90) = fVar17;
        if (iVar5 < 0xf) {
          param_1 = 0;
        }
        else {
          if (*(long *)(uVar6 + 0x18) == 0) goto code_r0x01500fcc;
          /*UnityEngine.Video.VideoPlayer$$Stop*/ func_0x032fbb10(*(long *)(uVar6 + 0x18),0);
          /*Atlas.SplashBehaviour$$DeInitAudio*/ func_0x01501218(uVar6);
          param_1 = 1;
        }
        if (*(long *)(uVar6 + 0x18) != 0) {
          iVar5 = /*UnityEngine.Video.VideoPlayer$$get_isPlaying*/ func_0x032fbb50(*(long *)(uVar6 + 0x18),0);
          if ((int)param_1 == 0 && iVar5 == 1) goto code_r0x01500f60;
          if (*(long *)(uVar6 + 0x18) != 0) goto code_r0x01500f14;
        }
      }
      else {
        if (*(int *)(uVar6 + 0x78) != 1) goto code_r0x01500f60;
        if (*(long *)(uVar6 + 0x18) != 0) {
          iVar5 = /*UnityEngine.Video.VideoPlayer$$get_isPrepared*/ func_0x032fba90(*(long *)(uVar6 + 0x18),0);
          if (iVar5 == 0) goto code_r0x01500f60;
          *(undefined4 *)(uVar6 + 0x78) = 2;
          if (*(long *)(uVar6 + 0x18) != 0) {
            /*UnityEngine.Video.VideoPlayer$$Play*/ func_0x032fbad0(*(long *)(uVar6 + 0x18),0);
            if (*(long *)(uVar6 + 0x40) != 0) {
              lVar11 = func_0x0001d34c(*(long *)(uVar6 + 0x40),(long)*(int *)(uVar6 + 0x54));
              /*Atlas.SplashBehaviour$$StartAudio*/ func_0x015010ec(uVar6,*(undefined8 *)(lVar11 + 0x20));
              goto code_r0x01500f60;
            }
          }
        }
      }
      goto code_r0x01500fcc;
    }
  }
code_r0x01500fd0:
  uVar7 = func_0x00f78b24();
  puVar14 = &Atlas_SplashBehaviour__FinishAndMoveToApplicationScene;
  uVar8 = func_0x00f78ac0(uVar7,0);
code_r0x01500fdc:
  puVar3 = puVar4 + -0x30;
  *(undefined8 *)(puVar4 + -0x30) = uVar12;
  *(undefined8 *)(puVar4 + -0x28) = uVar9;
  *(undefined8 *)(puVar4 + -0x20) = param_1;
  *(ulong *)(puVar4 + -0x18) = uVar6;
  *(undefined1 **)(puVar4 + -0x10) = puVar13;
  *(undefined **)(puVar4 + -8) = puVar14;
  puVar4 = puVar4 + -0x10;
  if ((bRam0000000003eb4cea & 1) == 0) {
    func_0x00f78a20(0x3d24720);
    func_0x00f78a20(0x3d69040);
    func_0x00f78a20(0x3d725e8);
    bRam0000000003eb4cea = 1;
  }
  param_1 = 0x3d24720;
  *(undefined1 *)(uVar8 + 0x7e) = 1;
  iVar5 = /*UnityEngine.PlayerPrefs$$GetInt*/ func_0x03250818(/*STR('SeenSplash')*/ uRam0000000003d725e8,0,0);
  if (iVar5 == 0) {
    /*UnityEngine.PlayerPrefs$$SetInt*/ func_0x03250708(/*STR('SeenSplash')*/ uRam0000000003d725e8,1,0);
    /*UnityEngine.PlayerPrefs$$Save*/ func_0x03250bb0(0);
  }
  uVar9 = 0x3d69040;
  /*Atlas.SplashBehaviour$$DeInitAudio*/ func_0x01501218(uVar8);
  puVar14 = &UNK_01501084;
  param_2 = uVar8;
  goto code_r0x01500a98;
code_r0x01500f14:
  /*UnityEngine.Video.VideoPlayer$$set_clip*/ func_0x032fba00(*(long *)(uVar6 + 0x18),0,0);
  *(undefined4 *)(uVar6 + 0x78) = 3;
code_r0x01500f28:
  puVar14 = &UNK_01500f30;
  param_2 = uVar6;
  goto code_r0x01500a40;
}



// ============================================================
// RVA: 0x1500a40 | Atlas.SplashBehaviour.GetNextConfigIndex
// ============================================================

/* WARNING: Possible PIC construction at 0x01501080: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01501084) */
/* WARNING: Removing unreachable block (ram,0x01501090) */
/* WARNING: Removing unreachable block (ram,0x01501098) */
/* WARNING: Removing unreachable block (ram,0x0150109c) */
/* WARNING: Removing unreachable block (ram,0x0325dfa4) */
/* WARNING: Removing unreachable block (ram,0x0325dfd4) */
/* WARNING: Removing unreachable block (ram,0x0325dfe8) */
/* WARNING: Removing unreachable block (ram,0x0325e00c) */
/* WARNING: Removing unreachable block (ram,0x0325e014) */
/* WARNING: Removing unreachable block (ram,0x0325e018) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_SplashBehaviour__GetNextConfigIndex(long param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar10;
  undefined *puVar11;
  float extraout_s0;
  double dVar12;
  undefined8 uVar13;
  float fVar14;
  ulong unaff_d8;
  float fVar15;
  ulong unaff_d9;
  float fVar16;
  float fVar17;
  ulong unaff_d10;
  undefined8 unaff_d11;
  
  puVar2 = &stack0xfffffffffffffff0;
  lVar9 = *(long *)(param_1 + 0x40);
  if (lVar9 != 0) {
    uVar4 = (ulong)*(uint *)(param_1 + 0x54);
    while( true ) {
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar1;
      if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar1) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar1) break;
      if (*(char *)(lVar9 + (long)(int)uVar1 * 0x28 + 0x20) != '\0') {
        return uVar4;
      }
    }
    uVar5 = func_0x00f78b24();
    func_0x00f78ac0(uVar5,0);
  }
  puVar11 = &Atlas_SplashBehaviour__DeInit;
  uVar4 = func_0x00f78af4();
  do {
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(ulong *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)(puVar2 + -8) = puVar11;
    uVar5 = 0x3eb4000;
    uVar6 = uVar4;
    if ((bRam0000000003eb4ce8 & 1) == 0) {
      func_0x00f78a20(0x3d43430);
      func_0x00f78a20(0x3d1fae0);
      func_0x00f78a20(0x3d29708);
      func_0x00f78a20(0x3d29710);
      func_0x00f78a20(0x3d5d358);
      uVar6 = func_0x00f78a20(0x3d5d360);
      bRam0000000003eb4ce8 = 1;
    }
    if (*(long *)(uVar4 + 0x98) != 0) {
      uVar6 = /*UnityEngine.MonoBehaviour$$StopCoroutine*/ func_0x0324810c(uVar4,*(long *)(uVar4 + 0x98),0);
    }
    if (*(char *)(uVar4 + 0x7c) == '\0') goto code_r0x01500c20;
    if (*(long *)(uVar4 + 0x18) != 0) {
      iVar3 = /*UnityEngine.Video.VideoPlayer$$get_isPlaying*/ func_0x032fbb50(*(long *)(uVar4 + 0x18),0);
      if (iVar3 != 0) {
        if (*(long *)(uVar4 + 0x18) == 0) goto code_r0x01500c3c;
        /*UnityEngine.Video.VideoPlayer$$Stop*/ func_0x032fbb10(*(long *)(uVar4 + 0x18),0);
      }
      unaff_x22 = 0x3d5d360;
      uVar5 = *(undefined8 *)(uVar4 + 0x58);
      uVar13 = *(undefined8 *)(uVar4 + 0x70);
      uVar8 = *(undefined8 *)(uVar4 + 0x68);
      *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(uVar4 + 0x60);
      *(undefined8 *)(puVar2 + -0x80) = uVar5;
      *(undefined8 *)(puVar2 + -0x68) = uVar13;
      *(undefined8 *)(puVar2 + -0x70) = uVar8;
      if (((*(byte *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)(puVar2 + -0x58) = *(undefined8 *)(puVar2 + -0x78);
      *(undefined8 *)(puVar2 + -0x60) = *(undefined8 *)(puVar2 + -0x80);
      *(undefined8 *)(puVar2 + -0x48) = *(undefined8 *)(puVar2 + -0x68);
      *(undefined8 *)(puVar2 + -0x50) = *(undefined8 *)(puVar2 + -0x70);
      /*UnityEngine.AddressableAssets.Addressables$$Release<VideoClip>*/ func_0x0171fcfc(puVar2 + -0x60,uRam0000000003d43430);
      lVar9 = *(long *)(uVar4 + 0x18);
      unaff_x21 = func_0x00f78aec(/*UnityEngine.Video.VideoPlayer.EventHandler_TypeInfo*/ uRam0000000003d29710);
      /*UnityEngine.Video.VideoPlayer.EventHandler$$.ctor*/ func_0x032fce7c(unaff_x21,uVar4,uRam0000000003d5d360,0);
      uVar5 = 0;
      if (lVar9 != 0) {
        unaff_x22 = 0x3d29000;
        unaff_x23 = 0x3d5d000;
        /*UnityEngine.Video.VideoPlayer$$remove_prepareCompleted*/ func_0x032fbd00(lVar9,unaff_x21,0);
        lVar9 = *(long *)(uVar4 + 0x18);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Video.VideoPlayer.ErrorEventHandler_TypeInfo*/ uRam0000000003d29708);
        /*UnityEngine.Video.VideoPlayer.ErrorEventHandler$$.ctor*/ func_0x032fce04(unaff_x21,uVar4,uRam0000000003d5d358,0);
        uVar5 = 0;
        if (lVar9 != 0) {
          uVar6 = /*UnityEngine.Video.VideoPlayer$$remove_errorReceived*/ func_0x032fbe40(lVar9,unaff_x21,0);
code_r0x01500c20:
          *(undefined8 *)(uVar4 + 0x50) = 0;
          return uVar6;
        }
      }
    }
code_r0x01500c3c:
    uVar6 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)(puVar2 + -0xd0);
    *(undefined8 *)(puVar2 + -0xc0) = unaff_d11;
    *(ulong *)(puVar2 + -0xb8) = unaff_d10;
    *(ulong *)(puVar2 + -0xb0) = unaff_d9;
    *(ulong *)(puVar2 + -0xa8) = unaff_d8;
    *(undefined8 *)(puVar2 + -0xa0) = uVar5;
    *(ulong *)(puVar2 + -0x98) = uVar4;
    *(undefined1 **)(puVar2 + -0x90) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x88) = &Atlas_SplashBehaviour__Update;
    puVar10 = puVar2 + -0x90;
    uVar5 = 0x3eb4000;
    uVar4 = uVar6;
    if ((bRam0000000003eb4ce9 & 1) == 0) {
      func_0x00f78a20(0x3d712e8);
      func_0x00f78a20(0x3d76168);
      uVar4 = func_0x00f78a20(0x3d77a48);
      bRam0000000003eb4ce9 = 1;
    }
    *(undefined8 *)(puVar2 + -0xd0) = 0;
    *(undefined8 *)(puVar2 + -200) = 0;
    if (*(char *)(uVar6 + 0x7e) != '\0') {
      return uVar4;
    }
    if (*(char *)(uVar6 + 0x7d) == '\0') {
      uVar1 = *(uint *)(uVar6 + 0x54);
      if ((int)uVar1 < 0) {
code_r0x01500f60:
        uVar5 = 0x3ca3000;
        if (cRam0000000003ca3500 == '\0') {
          func_0x00f78a20(0x3d22d90);
          cRam0000000003ca3500 = '\x01';
        }
        if (**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8) == 0) {
code_r0x01500fb4:
          fVar14 = *(float *)(uVar6 + 0x50);
          uVar4 = /*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
          *(float *)(uVar6 + 0x50) = fVar14 + extraout_s0;
          return uVar4;
        }
        lVar9 = *(long *)(**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8) + 0x158);
        if (lVar9 != 0) {
          iVar3 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_isPressed*/ func_0x02fdd6e8(lVar9,0);
          if (iVar3 != 0) {
            /*Atlas.SplashBehaviour$$TrySkip*/ func_0x01501540(uVar6);
          }
          goto code_r0x01500fb4;
        }
code_r0x01500fcc:
        func_0x00f78af4();
      }
      else {
        lVar9 = *(long *)(uVar6 + 0x40);
        if (lVar9 == 0) goto code_r0x01500fcc;
        if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar1) goto code_r0x01500f60;
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          if (*(char *)(lVar9 + (ulong)uVar1 * 0x28 + 0x34) == '\0') {
            lVar9 = lVar9 + (ulong)uVar1 * 0x28;
            fVar16 = *(float *)(lVar9 + 0x2c);
            unaff_d10 = (ulong)(uint)fVar16;
            fVar14 = *(float *)(lVar9 + 0x30);
            unaff_d8 = (ulong)(uint)fVar14;
            fVar15 = *(float *)(lVar9 + 0x28);
            unaff_d9 = (ulong)(uint)fVar15;
            /*Atlas.SplashBehaviour$$StartAudio*/ func_0x015010ec(uVar6,*(undefined8 *)(lVar9 + 0x40));
            lVar9 = *(long *)(uVar6 + 0x40);
            if (lVar9 != 0) {
              if (*(uint *)(lVar9 + 0x18) <= *(uint *)(uVar6 + 0x54)) goto code_r0x01500fd0;
              fVar15 = fVar15 + fVar14;
              unaff_d9 = (ulong)(uint)fVar15;
              fVar16 = fVar15 + fVar16;
              unaff_d8 = (ulong)(uint)fVar16;
              fVar17 = *(float *)(uVar6 + 0x50);
              unaff_d10 = (ulong)(uint)fVar17;
              fVar14 = *(float *)(lVar9 + (long)(int)*(uint *)(uVar6 + 0x54) * 0x28 + 0x28);
              if (fVar14 <= fVar17) {
                fVar14 = 1.0;
                if ((fVar15 <= fVar17) && (fVar14 = 0.0, fVar17 < fVar16)) {
                  lVar9 = func_0x0001d34c();
                  fVar14 = 1.0 - (fVar17 - fVar15) / *(float *)(lVar9 + 0xc);
                }
              }
              else {
                fVar14 = fVar17 / fVar14;
              }
              /*UnityEngine.Color$$.ctor*/ func_0x03222f84(0x3f800000,0x3f800000,0x3f800000,fVar14,puVar2 + -0xd0,0);
              plVar7 = *(long **)(uVar6 + 0x20);
              if (plVar7 != (long *)0x0) {
                (**(code **)(*plVar7 + 0x2a8))
                          (*(undefined4 *)(puVar2 + -0xd0),*(undefined4 *)(puVar2 + -0xcc),
                           *(undefined4 *)(puVar2 + -200),*(undefined4 *)(puVar2 + -0xc4),plVar7,
                           *(undefined8 *)(*plVar7 + 0x2b0));
                if (*(long *)(uVar6 + 0x20) != 0) {
                  /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(uVar6 + 0x20),1,0);
                  if (*(long *)(uVar6 + 0x30) != 0) {
                    /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(uVar6 + 0x30),1,0);
                    if (*(float *)(uVar6 + 0x50) < fVar16) goto code_r0x01500f60;
                    goto code_r0x01500f28;
                  }
                }
              }
            }
          }
          else if (*(int *)(uVar6 + 0x78) == 2) {
            if (*(long *)(uVar6 + 0x18) != 0) {
              dVar12 = (double)/*UnityEngine.Video.VideoPlayer$$get_time*/ func_0x032fbbd0(*(long *)(uVar6 + 0x18),0);
              fVar14 = (float)dVar12;
              unaff_d8 = (ulong)(uint)fVar14;
              if (ABS(fVar14 - *(float *)(uVar6 + 0x90)) < _UNK_033f8148) {
code_r0x01500e0c:
                iVar3 = *(int *)(uVar6 + 0x94) + 1;
                *(int *)(uVar6 + 0x94) = iVar3;
              }
              else {
                if (*(long *)(uVar6 + 0x18) == 0) goto code_r0x01500fcc;
                uVar4 = /*UnityEngine.Video.VideoPlayer$$get_isPaused*/ func_0x032fbb90(*(long *)(uVar6 + 0x18),0);
                if ((uVar4 & 1) != 0) goto code_r0x01500e0c;
                iVar3 = *(int *)(uVar6 + 0x94);
              }
              *(float *)(uVar6 + 0x90) = fVar14;
              if (iVar3 < 0xf) {
                uVar5 = 0;
              }
              else {
                if (*(long *)(uVar6 + 0x18) == 0) goto code_r0x01500fcc;
                /*UnityEngine.Video.VideoPlayer$$Stop*/ func_0x032fbb10(*(long *)(uVar6 + 0x18),0);
                /*Atlas.SplashBehaviour$$DeInitAudio*/ func_0x01501218(uVar6);
                uVar5 = 1;
              }
              if (*(long *)(uVar6 + 0x18) != 0) {
                iVar3 = /*UnityEngine.Video.VideoPlayer$$get_isPlaying*/ func_0x032fbb50(*(long *)(uVar6 + 0x18),0);
                if ((int)uVar5 == 0 && iVar3 == 1) goto code_r0x01500f60;
                if (*(long *)(uVar6 + 0x18) != 0) {
                  /*UnityEngine.Video.VideoPlayer$$set_clip*/ func_0x032fba00(*(long *)(uVar6 + 0x18),0,0);
                  *(undefined4 *)(uVar6 + 0x78) = 3;
code_r0x01500f28:
                  iVar3 = Atlas_SplashBehaviour__GetNextConfigIndex(uVar6);
                  *(int *)(uVar6 + 0x54) = iVar3;
                  if (-1 < iVar3) {
                    if (*(long *)(uVar6 + 0x40) == 0) goto code_r0x01500fcc;
                    if (iVar3 < *(int *)(*(long *)(uVar6 + 0x40) + 0x18)) {
                      /*Atlas.SplashBehaviour$$StartConfig*/ func_0x01501268(uVar6);
                      goto code_r0x01500f60;
                    }
                  }
                  *(undefined1 *)(uVar6 + 0x7d) = 1;
                  goto code_r0x01500f60;
                }
              }
            }
          }
          else {
            if (*(int *)(uVar6 + 0x78) != 1) goto code_r0x01500f60;
            if (*(long *)(uVar6 + 0x18) != 0) {
              iVar3 = /*UnityEngine.Video.VideoPlayer$$get_isPrepared*/ func_0x032fba90(*(long *)(uVar6 + 0x18),0);
              if (iVar3 == 0) goto code_r0x01500f60;
              *(undefined4 *)(uVar6 + 0x78) = 2;
              if (*(long *)(uVar6 + 0x18) != 0) {
                /*UnityEngine.Video.VideoPlayer$$Play*/ func_0x032fbad0(*(long *)(uVar6 + 0x18),0);
                if (*(long *)(uVar6 + 0x40) != 0) {
                  lVar9 = func_0x0001d34c(*(long *)(uVar6 + 0x40),(long)*(int *)(uVar6 + 0x54));
                  /*Atlas.SplashBehaviour$$StartAudio*/ func_0x015010ec(uVar6,*(undefined8 *)(lVar9 + 0x20));
                  goto code_r0x01500f60;
                }
              }
            }
          }
          goto code_r0x01500fcc;
        }
      }
code_r0x01500fd0:
      uVar8 = func_0x00f78b24();
      puVar11 = &Atlas_SplashBehaviour__FinishAndMoveToApplicationScene;
      uVar4 = func_0x00f78ac0(uVar8,0);
    }
    else {
      puVar10 = *(undefined1 **)(puVar2 + -0x90);
      puVar11 = *(undefined **)(puVar2 + -0x88);
      uVar5 = *(undefined8 *)(puVar2 + -0xa0);
      unaff_d9 = *(ulong *)(puVar2 + -0xb0);
      unaff_d8 = *(ulong *)(puVar2 + -0xa8);
      unaff_d11 = *(undefined8 *)(puVar2 + -0xc0);
      unaff_d10 = *(ulong *)(puVar2 + -0xb8);
      register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x80);
      uVar4 = uVar6;
      uVar6 = *(ulong *)(puVar2 + -0x98);
    }
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = uVar5;
    *(ulong *)((long)register0x00000008 + -0x18) = uVar6;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar10;
    *(undefined **)((long)register0x00000008 + -8) = puVar11;
    if ((bRam0000000003eb4cea & 1) == 0) {
      func_0x00f78a20(0x3d24720);
      func_0x00f78a20(0x3d69040);
      func_0x00f78a20(0x3d725e8);
      bRam0000000003eb4cea = 1;
    }
    unaff_x20 = 0x3d24720;
    *(undefined1 *)(uVar4 + 0x7e) = 1;
    iVar3 = /*UnityEngine.PlayerPrefs$$GetInt*/ func_0x03250818(/*STR('SeenSplash')*/ uRam0000000003d725e8,0,0);
    if (iVar3 == 0) {
      /*UnityEngine.PlayerPrefs$$SetInt*/ func_0x03250708(/*STR('SeenSplash')*/ uRam0000000003d725e8,1,0);
      /*UnityEngine.PlayerPrefs$$Save*/ func_0x03250bb0(0);
    }
    unaff_x21 = 0x3d69040;
    /*Atlas.SplashBehaviour$$DeInitAudio*/ func_0x01501218(uVar4);
    puVar11 = &UNK_01501084;
    unaff_x19 = uVar4;
  } while( true );
}



// ============================================================
// RVA: 0x1500a98 | Atlas.SplashBehaviour.DeInit
// ============================================================

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_SplashBehaviour__DeInit(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar10;
  undefined *puVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *******pppppppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &uStack_80;
  uVar7 = 0x3eb4000;
  if ((bRam0000000003eb4ce8 & 1) == 0) {
    func_0x00f78a20(0x3d43430);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d29708);
    func_0x00f78a20(0x3d29710);
    func_0x00f78a20(0x3d5d358);
    func_0x00f78a20(0x3d5d360);
    bRam0000000003eb4ce8 = 1;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    /*UnityEngine.MonoBehaviour$$StopCoroutine*/ func_0x0324810c(param_1,*(long *)(param_1 + 0x98),0);
  }
  if (*(char *)(param_1 + 0x7c) == '\0') goto LAB_01500c20;
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar3 = /*UnityEngine.Video.VideoPlayer$$get_isPlaying*/ func_0x032fbb50(*(long *)(param_1 + 0x18),0);
    if (iVar3 != 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_01500c3c;
      /*UnityEngine.Video.VideoPlayer$$Stop*/ func_0x032fbb10(*(long *)(param_1 + 0x18),0);
    }
    unaff_x22 = 0x3d5d360;
    uStack_78 = *(undefined8 *)(param_1 + 0x60);
    uStack_80 = *(undefined8 *)(param_1 + 0x58);
    uStack_68 = *(undefined8 *)(param_1 + 0x70);
    uStack_70 = *(undefined8 *)(param_1 + 0x68);
    if (((*(byte *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_58 = uStack_78;
    uStack_60 = uStack_80;
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    /*UnityEngine.AddressableAssets.Addressables$$Release<VideoClip>*/ func_0x0171fcfc(&uStack_60,uRam0000000003d43430);
    lVar8 = *(long *)(param_1 + 0x18);
    unaff_x21 = func_0x00f78aec(/*UnityEngine.Video.VideoPlayer.EventHandler_TypeInfo*/ uRam0000000003d29710);
    /*UnityEngine.Video.VideoPlayer.EventHandler$$.ctor*/ func_0x032fce7c(unaff_x21,param_1,uRam0000000003d5d360,0);
    uVar7 = 0;
    if (lVar8 != 0) {
      unaff_x22 = 0x3d29000;
      /*UnityEngine.Video.VideoPlayer$$remove_prepareCompleted*/ func_0x032fbd00(lVar8,unaff_x21,0);
      lVar8 = *(long *)(param_1 + 0x18);
      unaff_x21 = func_0x00f78aec(/*UnityEngine.Video.VideoPlayer.ErrorEventHandler_TypeInfo*/ uRam0000000003d29708);
      /*UnityEngine.Video.VideoPlayer.ErrorEventHandler$$.ctor*/ func_0x032fce04(unaff_x21,param_1,uRam0000000003d5d358,0);
      uVar7 = 0;
      if (lVar8 != 0) {
        /*UnityEngine.Video.VideoPlayer$$remove_errorReceived*/ func_0x032fbe40(lVar8,unaff_x21,0);
LAB_01500c20:
        *(undefined8 *)(param_1 + 0x50) = 0;
        return;
      }
    }
  }
LAB_01500c3c:
  lVar8 = func_0x00f78af4();
  puStack_88 = &Atlas_SplashBehaviour__Update;
  uVar9 = 0x3eb4000;
  pppppppuStack_90 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ce9 & 1) == 0) {
    func_0x00f78a20(0x3d712e8);
    func_0x00f78a20(0x3d76168);
    func_0x00f78a20(0x3d77a48);
    bRam0000000003eb4ce9 = 1;
  }
  uStack_d0 = 0;
  uStack_c8 = 0;
  if (*(char *)(lVar8 + 0x7e) != '\0') {
    return;
  }
  lVar6 = lVar8;
  pppppppuVar10 = pppppppuStack_90;
  puVar11 = puStack_88;
  if (*(char *)(lVar8 + 0x7d) != '\0') goto code_r0x01500fdc;
  uVar1 = *(uint *)(lVar8 + 0x54);
  if ((int)uVar1 < 0) {
code_r0x01500f60:
    uVar9 = 0x3ca3000;
    if (cRam0000000003ca3500 == '\0') {
      func_0x00f78a20(0x3d22d90);
      cRam0000000003ca3500 = '\x01';
    }
    if (**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8) == 0) {
code_r0x01500fb4:
      fVar14 = *(float *)(lVar8 + 0x50);
      fVar12 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
      *(float *)(lVar8 + 0x50) = fVar14 + fVar12;
      return;
    }
    lVar6 = *(long *)(**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8) + 0x158);
    if (lVar6 != 0) {
      iVar3 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_isPressed*/ func_0x02fdd6e8(lVar6,0);
      if (iVar3 != 0) {
        /*Atlas.SplashBehaviour$$TrySkip*/ func_0x01501540(lVar8);
      }
      goto code_r0x01500fb4;
    }
code_r0x01500fcc:
    func_0x00f78af4();
  }
  else {
    lVar6 = *(long *)(lVar8 + 0x40);
    if (lVar6 == 0) goto code_r0x01500fcc;
    if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar1) goto code_r0x01500f60;
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      if (*(char *)(lVar6 + (ulong)uVar1 * 0x28 + 0x34) == '\0') {
        lVar6 = lVar6 + (ulong)uVar1 * 0x28;
        fVar14 = *(float *)(lVar6 + 0x2c);
        fVar12 = *(float *)(lVar6 + 0x30);
        fVar15 = *(float *)(lVar6 + 0x28);
        /*Atlas.SplashBehaviour$$StartAudio*/ func_0x015010ec(lVar8,*(undefined8 *)(lVar6 + 0x40));
        lVar6 = *(long *)(lVar8 + 0x40);
        if (lVar6 != 0) {
          if (*(uint *)(lVar6 + 0x18) <= *(uint *)(lVar8 + 0x54)) goto code_r0x01500fd0;
          fVar15 = fVar15 + fVar12;
          fVar14 = fVar15 + fVar14;
          fVar16 = *(float *)(lVar8 + 0x50);
          fVar12 = *(float *)(lVar6 + (long)(int)*(uint *)(lVar8 + 0x54) * 0x28 + 0x28);
          if (fVar12 <= fVar16) {
            fVar12 = 1.0;
            if ((fVar15 <= fVar16) && (fVar12 = 0.0, fVar16 < fVar14)) {
              lVar6 = func_0x0001d34c();
              fVar12 = 1.0 - (fVar16 - fVar15) / *(float *)(lVar6 + 0xc);
            }
          }
          else {
            fVar12 = fVar16 / fVar12;
          }
          /*UnityEngine.Color$$.ctor*/ func_0x03222f84(0x3f800000,0x3f800000,0x3f800000,fVar12,&uStack_d0,0);
          plVar5 = *(long **)(lVar8 + 0x20);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x2a8))
                      (uStack_d0 & 0xffffffff,uStack_d0._4_4_,(undefined4)uStack_c8,uStack_c8._4_4_,
                       plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
            if (*(long *)(lVar8 + 0x20) != 0) {
              /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar8 + 0x20),1,0);
              if (*(long *)(lVar8 + 0x30) != 0) {
                /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar8 + 0x30),1,0);
                if (*(float *)(lVar8 + 0x50) < fVar14) goto code_r0x01500f60;
                goto code_r0x01500f28;
              }
            }
          }
        }
      }
      else if (*(int *)(lVar8 + 0x78) == 2) {
        if (*(long *)(lVar8 + 0x18) != 0) {
          dVar13 = (double)/*UnityEngine.Video.VideoPlayer$$get_time*/ func_0x032fbbd0(*(long *)(lVar8 + 0x18),0);
          if (ABS((float)dVar13 - *(float *)(lVar8 + 0x90)) < _UNK_033f8148) {
code_r0x01500e0c:
            iVar3 = *(int *)(lVar8 + 0x94) + 1;
            *(int *)(lVar8 + 0x94) = iVar3;
          }
          else {
            if (*(long *)(lVar8 + 0x18) == 0) goto code_r0x01500fcc;
            uVar4 = /*UnityEngine.Video.VideoPlayer$$get_isPaused*/ func_0x032fbb90(*(long *)(lVar8 + 0x18),0);
            if ((uVar4 & 1) != 0) goto code_r0x01500e0c;
            iVar3 = *(int *)(lVar8 + 0x94);
          }
          *(float *)(lVar8 + 0x90) = (float)dVar13;
          if (iVar3 < 0xf) {
            uVar9 = 0;
          }
          else {
            if (*(long *)(lVar8 + 0x18) == 0) goto code_r0x01500fcc;
            /*UnityEngine.Video.VideoPlayer$$Stop*/ func_0x032fbb10(*(long *)(lVar8 + 0x18),0);
            /*Atlas.SplashBehaviour$$DeInitAudio*/ func_0x01501218(lVar8);
            uVar9 = 1;
          }
          if (*(long *)(lVar8 + 0x18) != 0) {
            iVar3 = /*UnityEngine.Video.VideoPlayer$$get_isPlaying*/ func_0x032fbb50(*(long *)(lVar8 + 0x18),0);
            if ((int)uVar9 == 0 && iVar3 == 1) goto code_r0x01500f60;
            if (*(long *)(lVar8 + 0x18) != 0) {
              /*UnityEngine.Video.VideoPlayer$$set_clip*/ func_0x032fba00(*(long *)(lVar8 + 0x18),0,0);
              *(undefined4 *)(lVar8 + 0x78) = 3;
code_r0x01500f28:
              iVar3 = Atlas_SplashBehaviour__GetNextConfigIndex(lVar8);
              *(int *)(lVar8 + 0x54) = iVar3;
              if (-1 < iVar3) {
                if (*(long *)(lVar8 + 0x40) == 0) goto code_r0x01500fcc;
                if (iVar3 < *(int *)(*(long *)(lVar8 + 0x40) + 0x18)) {
                  /*Atlas.SplashBehaviour$$StartConfig*/ func_0x01501268(lVar8);
                  goto code_r0x01500f60;
                }
              }
              *(undefined1 *)(lVar8 + 0x7d) = 1;
              goto code_r0x01500f60;
            }
          }
        }
      }
      else {
        if (*(int *)(lVar8 + 0x78) != 1) goto code_r0x01500f60;
        if (*(long *)(lVar8 + 0x18) != 0) {
          iVar3 = /*UnityEngine.Video.VideoPlayer$$get_isPrepared*/ func_0x032fba90(*(long *)(lVar8 + 0x18),0);
          if (iVar3 == 0) goto code_r0x01500f60;
          *(undefined4 *)(lVar8 + 0x78) = 2;
          if (*(long *)(lVar8 + 0x18) != 0) {
            /*UnityEngine.Video.VideoPlayer$$Play*/ func_0x032fbad0(*(long *)(lVar8 + 0x18),0);
            if (*(long *)(lVar8 + 0x40) != 0) {
              lVar6 = func_0x0001d34c(*(long *)(lVar8 + 0x40),(long)*(int *)(lVar8 + 0x54));
              /*Atlas.SplashBehaviour$$StartAudio*/ func_0x015010ec(lVar8,*(undefined8 *)(lVar6 + 0x20));
              goto code_r0x01500f60;
            }
          }
        }
      }
      goto code_r0x01500fcc;
    }
  }
code_r0x01500fd0:
  uVar7 = func_0x00f78b24();
  lVar6 = func_0x00f78ac0(uVar7,0);
  puVar2 = &uStack_d0;
  param_1 = lVar8;
  uVar7 = uVar9;
  pppppppuVar10 = &pppppppuStack_90;
  puVar11 = &Atlas_SplashBehaviour__FinishAndMoveToApplicationScene;
code_r0x01500fdc:
  *(undefined8 *)((long)puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)((long)puVar2 + -0x20) = uVar7;
  *(long *)((long)puVar2 + -0x18) = param_1;
  *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar10;
  *(undefined **)((long)puVar2 + -8) = puVar11;
  if ((bRam0000000003eb4cea & 1) == 0) {
    func_0x00f78a20(0x3d24720);
    func_0x00f78a20(0x3d69040);
    func_0x00f78a20(0x3d725e8);
    bRam0000000003eb4cea = 1;
  }
  *(undefined1 *)(lVar6 + 0x7e) = 1;
  iVar3 = /*UnityEngine.PlayerPrefs$$GetInt*/ func_0x03250818(/*STR('SeenSplash')*/ uRam0000000003d725e8,0,0);
  if (iVar3 == 0) {
    /*UnityEngine.PlayerPrefs$$SetInt*/ func_0x03250708(/*STR('SeenSplash')*/ uRam0000000003d725e8,1,0);
    /*UnityEngine.PlayerPrefs$$Save*/ func_0x03250bb0(0);
  }
  /*Atlas.SplashBehaviour$$DeInitAudio*/ func_0x01501218(lVar6);
  Atlas_SplashBehaviour__DeInit(lVar6);
  if (((*(ushort *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*STR('Application')*/ uRam0000000003d69040;
  *(undefined8 *)((long)puVar2 + -0x30) = *(undefined8 *)((long)puVar2 + -0x30);
  *(undefined8 *)((long)puVar2 + -0x28) = *(undefined8 *)((long)puVar2 + -0x28);
  *(undefined8 *)((long)puVar2 + -0x20) = *(undefined8 *)((long)puVar2 + -0x20);
  *(undefined8 *)((long)puVar2 + -0x18) = *(undefined8 *)((long)puVar2 + -0x18);
  *(undefined8 *)((long)puVar2 + -0x10) = *(undefined8 *)((long)puVar2 + -0x10);
  *(undefined8 *)((long)puVar2 + -8) = *(undefined8 *)((long)puVar2 + -8);
  if ((bRam0000000003ec0c33 & 1) == 0) {
    func_0x00f78a20(0x3d24720,0,0);
    bRam0000000003ec0c33 = 1;
  }
  *(undefined8 *)((long)puVar2 + -0x38) = 0;
  /*UnityEngine.SceneManagement.LoadSceneParameters$$.ctor*/ func_0x03236b3c((undefined1 *)((long)puVar2 + -0x38),0,0);
  uVar9 = *(undefined8 *)((long)puVar2 + -0x38);
  if (((*(ushort *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.SceneManagement.SceneManager$$LoadScene*/ func_0x0325e038(uVar7,uVar9);
  return;
}



// ============================================================
// RVA: 0x1500c40 | Atlas.SplashBehaviour.Update
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_SplashBehaviour__Update(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  double dVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar8 = 0x3eb4000;
  if ((bRam0000000003eb4ce9 & 1) == 0) {
    func_0x00f78a20(0x3d712e8);
    func_0x00f78a20(0x3d76168);
    func_0x00f78a20(0x3d77a48);
    bRam0000000003eb4ce9 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  if (*(char *)(param_1 + 0x7e) != '\0') {
    return;
  }
  lVar7 = param_1;
  if (*(char *)(param_1 + 0x7d) != '\0') goto code_r0x01500fdc;
  uVar2 = *(uint *)(param_1 + 0x54);
  if ((int)uVar2 < 0) {
code_r0x01500f60:
    uVar8 = 0x3ca3000;
    if (cRam0000000003ca3500 == '\0') {
      func_0x00f78a20(0x3d22d90);
      cRam0000000003ca3500 = '\x01';
    }
    if (**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8) == 0) {
code_r0x01500fb4:
      fVar11 = *(float *)(param_1 + 0x50);
      fVar10 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
      *(float *)(param_1 + 0x50) = fVar11 + fVar10;
      return;
    }
    lVar7 = *(long *)(**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8) + 0x158);
    if (lVar7 != 0) {
      iVar4 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_isPressed*/ func_0x02fdd6e8(lVar7,0);
      if (iVar4 != 0) {
        /*Atlas.SplashBehaviour$$TrySkip*/ func_0x01501540(param_1);
      }
      goto code_r0x01500fb4;
    }
code_r0x01500fcc:
    func_0x00f78af4();
  }
  else {
    lVar7 = *(long *)(param_1 + 0x40);
    if (lVar7 == 0) goto code_r0x01500fcc;
    if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar2) goto code_r0x01500f60;
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      if (*(char *)(lVar7 + (ulong)uVar2 * 0x28 + 0x34) == '\0') {
        lVar7 = lVar7 + (ulong)uVar2 * 0x28;
        fVar11 = *(float *)(lVar7 + 0x2c);
        fVar10 = *(float *)(lVar7 + 0x30);
        fVar12 = *(float *)(lVar7 + 0x28);
        /*Atlas.SplashBehaviour$$StartAudio*/ func_0x015010ec(param_1,*(undefined8 *)(lVar7 + 0x40));
        lVar7 = *(long *)(param_1 + 0x40);
        if (lVar7 != 0) {
          if (*(uint *)(lVar7 + 0x18) <= *(uint *)(param_1 + 0x54)) goto code_r0x01500fd0;
          fVar12 = fVar12 + fVar10;
          fVar11 = fVar12 + fVar11;
          fVar13 = *(float *)(param_1 + 0x50);
          fVar10 = *(float *)(lVar7 + (long)(int)*(uint *)(param_1 + 0x54) * 0x28 + 0x28);
          if (fVar10 <= fVar13) {
            fVar10 = 1.0;
            if ((fVar12 <= fVar13) && (fVar10 = 0.0, fVar13 < fVar11)) {
              lVar7 = func_0x0001d34c();
              fVar10 = 1.0 - (fVar13 - fVar12) / *(float *)(lVar7 + 0xc);
            }
          }
          else {
            fVar10 = fVar13 / fVar10;
          }
          /*UnityEngine.Color$$.ctor*/ func_0x03222f84(0x3f800000,0x3f800000,0x3f800000,fVar10,&uStack_50,0);
          plVar6 = *(long **)(param_1 + 0x20);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x2a8))
                      ((undefined4)uStack_50,uStack_50._4_4_,(undefined4)uStack_48,uStack_48._4_4_,
                       plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
            if (*(long *)(param_1 + 0x20) != 0) {
              /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(param_1 + 0x20),1,0);
              if (*(long *)(param_1 + 0x30) != 0) {
                /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(param_1 + 0x30),1,0);
                if (*(float *)(param_1 + 0x50) < fVar11) goto code_r0x01500f60;
                goto code_r0x01500f28;
              }
            }
          }
        }
      }
      else if (*(int *)(param_1 + 0x78) == 2) {
        if (*(long *)(param_1 + 0x18) != 0) {
          dVar3 = (double)/*UnityEngine.Video.VideoPlayer$$get_time*/ func_0x032fbbd0(*(long *)(param_1 + 0x18),0);
          if (ABS((float)dVar3 - *(float *)(param_1 + 0x90)) < _UNK_033f8148) {
code_r0x01500e0c:
            iVar4 = *(int *)(param_1 + 0x94) + 1;
            *(int *)(param_1 + 0x94) = iVar4;
          }
          else {
            if (*(long *)(param_1 + 0x18) == 0) goto code_r0x01500fcc;
            uVar5 = /*UnityEngine.Video.VideoPlayer$$get_isPaused*/ func_0x032fbb90(*(long *)(param_1 + 0x18),0);
            if ((uVar5 & 1) != 0) goto code_r0x01500e0c;
            iVar4 = *(int *)(param_1 + 0x94);
          }
          *(float *)(param_1 + 0x90) = (float)dVar3;
          if (iVar4 < 0xf) {
            uVar8 = 0;
          }
          else {
            if (*(long *)(param_1 + 0x18) == 0) goto code_r0x01500fcc;
            /*UnityEngine.Video.VideoPlayer$$Stop*/ func_0x032fbb10(*(long *)(param_1 + 0x18),0);
            /*Atlas.SplashBehaviour$$DeInitAudio*/ func_0x01501218(param_1);
            uVar8 = 1;
          }
          if (*(long *)(param_1 + 0x18) != 0) {
            iVar4 = /*UnityEngine.Video.VideoPlayer$$get_isPlaying*/ func_0x032fbb50(*(long *)(param_1 + 0x18),0);
            if ((int)uVar8 == 0 && iVar4 == 1) goto code_r0x01500f60;
            if (*(long *)(param_1 + 0x18) != 0) {
              /*UnityEngine.Video.VideoPlayer$$set_clip*/ func_0x032fba00(*(long *)(param_1 + 0x18),0,0);
              *(undefined4 *)(param_1 + 0x78) = 3;
code_r0x01500f28:
              iVar4 = Atlas_SplashBehaviour__GetNextConfigIndex(param_1);
              *(int *)(param_1 + 0x54) = iVar4;
              if (-1 < iVar4) {
                if (*(long *)(param_1 + 0x40) == 0) goto code_r0x01500fcc;
                if (iVar4 < *(int *)(*(long *)(param_1 + 0x40) + 0x18)) {
                  /*Atlas.SplashBehaviour$$StartConfig*/ func_0x01501268(param_1);
                  goto code_r0x01500f60;
                }
              }
              *(undefined1 *)(param_1 + 0x7d) = 1;
              goto code_r0x01500f60;
            }
          }
        }
      }
      else {
        if (*(int *)(param_1 + 0x78) != 1) goto code_r0x01500f60;
        if (*(long *)(param_1 + 0x18) != 0) {
          iVar4 = /*UnityEngine.Video.VideoPlayer$$get_isPrepared*/ func_0x032fba90(*(long *)(param_1 + 0x18),0);
          if (iVar4 == 0) goto code_r0x01500f60;
          *(undefined4 *)(param_1 + 0x78) = 2;
          if (*(long *)(param_1 + 0x18) != 0) {
            /*UnityEngine.Video.VideoPlayer$$Play*/ func_0x032fbad0(*(long *)(param_1 + 0x18),0);
            if (*(long *)(param_1 + 0x40) != 0) {
              lVar7 = func_0x0001d34c(*(long *)(param_1 + 0x40),(long)*(int *)(param_1 + 0x54));
              /*Atlas.SplashBehaviour$$StartAudio*/ func_0x015010ec(param_1,*(undefined8 *)(lVar7 + 0x20));
              goto code_r0x01500f60;
            }
          }
        }
      }
      goto code_r0x01500fcc;
    }
  }
code_r0x01500fd0:
  uVar9 = func_0x00f78b24();
  unaff_x30 = &Atlas_SplashBehaviour__FinishAndMoveToApplicationScene;
  lVar7 = func_0x00f78ac0(uVar9,0);
  register0x00000008 = (BADSPACEBASE *)&uStack_50;
  unaff_x19 = param_1;
  unaff_x20 = uVar8;
  unaff_x29 = puVar1;
code_r0x01500fdc:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb4cea & 1) == 0) {
    func_0x00f78a20(0x3d24720);
    func_0x00f78a20(0x3d69040);
    func_0x00f78a20(0x3d725e8);
    bRam0000000003eb4cea = 1;
  }
  *(undefined1 *)(lVar7 + 0x7e) = 1;
  iVar4 = /*UnityEngine.PlayerPrefs$$GetInt*/ func_0x03250818(/*STR('SeenSplash')*/ uRam0000000003d725e8,0,0);
  if (iVar4 == 0) {
    /*UnityEngine.PlayerPrefs$$SetInt*/ func_0x03250708(/*STR('SeenSplash')*/ uRam0000000003d725e8,1,0);
    /*UnityEngine.PlayerPrefs$$Save*/ func_0x03250bb0(0);
  }
  /*Atlas.SplashBehaviour$$DeInitAudio*/ func_0x01501218(lVar7);
  Atlas_SplashBehaviour__DeInit(lVar7);
  if (((*(ushort *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = /*STR('Application')*/ uRam0000000003d69040;
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  if ((bRam0000000003ec0c33 & 1) == 0) {
    func_0x00f78a20(0x3d24720,0,0);
    bRam0000000003ec0c33 = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
  /*UnityEngine.SceneManagement.LoadSceneParameters$$.ctor*/ func_0x03236b3c((undefined1 *)((long)register0x00000008 + -0x38),0,0);
  uVar9 = *(undefined8 *)((long)register0x00000008 + -0x38);
  if (((*(ushort *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.SceneManagement.SceneManager$$LoadScene*/ func_0x0325e038(uVar8,uVar9);
  return;
}



// ============================================================
// RVA: 0x1500fdc | Atlas.SplashBehaviour.FinishAndMoveToApplicationScene
// ============================================================

void Atlas_SplashBehaviour__FinishAndMoveToApplicationScene(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4cea & 1) == 0) {
    func_0x00f78a20(0x3d24720);
    func_0x00f78a20(0x3d69040);
    func_0x00f78a20(0x3d725e8);
    bRam0000000003eb4cea = 1;
  }
  *(undefined1 *)(param_1 + 0x7e) = 1;
  iVar3 = /*UnityEngine.PlayerPrefs$$GetInt*/ func_0x03250818(/*STR('SeenSplash')*/ uRam0000000003d725e8,0,0);
  if (iVar3 == 0) {
    /*UnityEngine.PlayerPrefs$$SetInt*/ func_0x03250708(/*STR('SeenSplash')*/ uRam0000000003d725e8,1,0);
    /*UnityEngine.PlayerPrefs$$Save*/ func_0x03250bb0(0);
  }
  /*Atlas.SplashBehaviour$$DeInitAudio*/ func_0x01501218(param_1);
  Atlas_SplashBehaviour__DeInit(param_1);
  if (((*(ushort *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*STR('Application')*/ uRam0000000003d69040;
  if ((bRam0000000003ec0c33 & 1) == 0) {
    func_0x00f78a20(0x3d24720,0,0);
    bRam0000000003ec0c33 = 1;
  }
  uStack_38 = 0;
  /*UnityEngine.SceneManagement.LoadSceneParameters$$.ctor*/ func_0x03236b3c(&uStack_38,0,0);
  uVar2 = uStack_38;
  if (((*(ushort *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.SceneManagement.SceneManager$$LoadScene*/ func_0x0325e038(uVar1,uVar2);
  return;
}



// ============================================================
// RVA: 0x15010b8 | Atlas.SplashBehaviour.IsIndexValid
// ============================================================

ulong Atlas_SplashBehaviour__IsIndexValid(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_48;
  
  if (param_2 < 0) {
    uVar3 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x40) == 0) {
      auVar7 = func_0x00f78af4();
      uVar6 = auVar7._8_8_;
      lVar4 = auVar7._0_8_;
      if ((bRam0000000003eb4cf0 & 1) == 0) {
        func_0x00f78a20(0x3d24568);
        func_0x00f78a20(0x3d65d08);
        bRam0000000003eb4cf0 = 1;
      }
      uVar3 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar6,*(undefined8 *)(lVar4 + 0x88),0);
      if ((int)uVar3 != 0) {
        lVar1 = lVar4 + 0x80;
        iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar1,0);
        if (iVar2 != 0) {
          /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(lVar1,1,0);
          /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(lVar1,0);
        }
        uVar3 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar6,/*STR('')*/ uRam0000000003d65d08,0);
        if ((int)uVar3 != 0) {
          if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uStack_48 = /*FMODUnity.RuntimeManager$$get_CoreSystem*/ func_0x016e83cc(0);
          /*FMOD.System$$mixerSuspend*/ func_0x016f4298(&uStack_48,0);
          uVar5 = /*FMODUnity.RuntimeManager$$CreateInstance*/ func_0x016e24f4(uVar6,0);
          *(undefined8 *)(lVar4 + 0x80) = uVar5;
          uStack_48 = /*FMODUnity.RuntimeManager$$get_CoreSystem*/ func_0x016e83cc(0);
          /*FMOD.System$$mixerResume*/ func_0x016f42a4(&uStack_48,0);
          uVar3 = /*FMOD.Studio.EventInstance$$start*/ func_0x016dfb2c(lVar1,0);
          *(undefined8 *)(lVar4 + 0x88) = uVar6;
        }
      }
      return uVar3;
    }
    uVar3 = (ulong)(param_2 < *(int *)(*(long *)(param_1 + 0x40) + 0x18));
  }
  return uVar3;
}



// ============================================================
// RVA: 0x15010ec | Atlas.SplashBehaviour.StartAudio
// ============================================================

void Atlas_SplashBehaviour__StartAudio(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4cf0 & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4cf0 = 1;
  }
  iVar2 = /*System.String$$op_Inequality*/ func_0x029bd9d4(param_2,*(undefined8 *)(param_1 + 0x88),0);
  if (iVar2 != 0) {
    lVar1 = param_1 + 0x80;
    iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar1,0);
    if (iVar2 != 0) {
      /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(lVar1,1,0);
      /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(lVar1,0);
    }
    iVar2 = /*System.String$$op_Inequality*/ func_0x029bd9d4(param_2,/*STR('')*/ uRam0000000003d65d08,0);
    if (iVar2 != 0) {
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_38 = /*FMODUnity.RuntimeManager$$get_CoreSystem*/ func_0x016e83cc(0);
      /*FMOD.System$$mixerSuspend*/ func_0x016f4298(&uStack_38,0);
      uVar3 = /*FMODUnity.RuntimeManager$$CreateInstance*/ func_0x016e24f4(param_2,0);
      *(undefined8 *)(param_1 + 0x80) = uVar3;
      uStack_38 = /*FMODUnity.RuntimeManager$$get_CoreSystem*/ func_0x016e83cc(0);
      /*FMOD.System$$mixerResume*/ func_0x016f42a4(&uStack_38,0);
      /*FMOD.Studio.EventInstance$$start*/ func_0x016dfb2c(lVar1,0);
      *(undefined8 *)(param_1 + 0x88) = param_2;
    }
  }
  return;
}



// ============================================================
// RVA: 0x1501218 | Atlas.SplashBehaviour.DeInitAudio
// ============================================================

/* WARNING: Possible PIC construction at 0x01349cb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01349cb4) */
/* WARNING: Removing unreachable block (ram,0x01349cbc) */
/* WARNING: Removing unreachable block (ram,0x01349cd0) */
/* WARNING: Removing unreachable block (ram,0x01349cf0) */
/* WARNING: Removing unreachable block (ram,0x01349d20) */
/* WARNING: Removing unreachable block (ram,0x01349d08) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_SplashBehaviour__DeInitAudio
                (long param_1,undefined8 param_2,undefined8 param_3,char *param_4,dword *param_5,
                undefined4 *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  dword *pdVar7;
  undefined4 *puVar10;
  dword *pdVar11;
  dword *pdVar12;
  dword *pdVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  char *pcVar18;
  dword *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long alStack_1198 [2];
  undefined8 *puStack_1188;
  dword *pdStack_1180;
  dword *pdStack_1178;
  undefined8 uStack_1170;
  undefined8 uStack_1168;
  undefined8 *******pppppppuStack_1160;
  undefined *puStack_1158;
  undefined8 uStack_1048;
  long lStack_1040;
  undefined8 uStack_1038;
  undefined4 *puStack_1030;
  undefined8 uStack_1028;
  undefined8 *******pppppppuStack_1020;
  undefined *puStack_1018;
  long alStack_1010 [2];
  long alStack_1000 [32];
  long lStack_f00;
  undefined8 *******pppppppuStack_ea0;
  undefined *puStack_e98;
  long alStack_e88 [34];
  long lStack_d78;
  ulong uStack_d70;
  dword *pdStack_d68;
  dword *pdStack_d60;
  dword *pdStack_d58;
  undefined8 *******pppppppuStack_d50;
  undefined *puStack_d48;
  long lStack_d40;
  undefined8 uStack_d38;
  dword adStack_d28 [2];
  undefined8 uStack_d20;
  long lStack_d18;
  long lStack_c28;
  undefined8 *******pppppppuStack_bd0;
  undefined *puStack_bc8;
  long alStack_bc0 [33];
  long lStack_ab8;
  undefined8 *******pppppppuStack_a80;
  undefined *puStack_a78;
  long alStack_a68 [2];
  undefined8 *apuStack_a58 [32];
  long lStack_958;
  undefined8 uStack_950;
  dword *pdStack_948;
  undefined8 *puStack_940;
  ulong uStack_938;
  undefined4 *puStack_930;
  dword *pdStack_928;
  undefined1 *******pppppppuStack_920;
  undefined *puStack_918;
  long alStack_908 [2];
  undefined8 *apuStack_8f8 [32];
  long lStack_7f8;
  undefined8 uStack_7f0;
  dword *pdStack_7e8;
  undefined8 *puStack_7e0;
  ulong uStack_7d8;
  undefined8 *puStack_7d0;
  dword *pdStack_7c8;
  undefined1 ******ppppppuStack_7c0;
  undefined *puStack_7b8;
  long alStack_7b0 [33];
  long lStack_6a8;
  undefined8 *puStack_6a0;
  ulong uStack_698;
  dword *pdStack_690;
  dword *pdStack_688;
  undefined1 *****pppppuStack_680;
  undefined *puStack_678;
  long lStack_670;
  dword adStack_668 [2];
  undefined8 uStack_660;
  long lStack_658;
  long lStack_568;
  undefined1 ****ppppuStack_520;
  undefined *puStack_518;
  long alStack_510 [33];
  long lStack_408;
  undefined1 ***pppuStack_3e0;
  undefined *puStack_3d8;
  long alStack_3d0 [33];
  long lStack_2c8;
  undefined1 **ppuStack_2a0;
  undefined *puStack_298;
  long alStack_290 [33];
  long lStack_188;
  undefined1 *puStack_160;
  undefined *puStack_158;
  long alStack_148 [2];
  undefined8 auStack_138 [32];
  long lStack_38;
  byte *pbVar8;
  undefined4 *puVar9;
  
  puVar16 = (undefined8 *)(param_1 + 0x80);
  uVar6 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(puVar16,0);
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  pdVar13 = (dword *)0x0;
  /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(puVar16,1);
  pdVar7 = (dword *)*puVar16;
  lStack_38 = *(long *)PTR_03a5d648;
  alStack_148[1] = 0;
  uVar6 = func_0x01279100(pdVar7,alStack_148);
  if ((int)uVar6 == 0) {
    if ((*(byte *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) {
      uVar6 = 0x4b;
    }
    else {
      uVar6 = func_0x0127a71c(alStack_148 + 1);
      if ((int)uVar6 == 0) {
        pdVar13 = &MACH_HEADER.ncmds;
        uVar6 = func_0x012933e8(*(undefined8 *)(alStack_148[0] + 0x98),auStack_138);
        if ((int)uVar6 == 0) {
          puVar16 = (undefined8 *)CONCAT71(auStack_138[0]._1_7_,(undefined1)auStack_138[0]);
          *puVar16 = &UNK_03c7e380;
          *(undefined4 *)(puVar16 + 1) = 0x10;
          *(int *)((long)puVar16 + 0xc) = (int)pdVar7;
          uVar6 = func_0x01292948(*(undefined8 *)(alStack_148[0] + 0x98));
        }
      }
    }
  }
  func_0x0127a76c(alStack_148 + 1);
  if (((int)uVar6 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    auStack_138[0]._0_1_ = 0;
    param_4 = "EventInstance::release";
    param_5 = (dword *)auStack_138;
    func_0x013aa954(uVar6,0xd);
    pdVar13 = pdVar7;
  }
  if (*(long *)PTR_03a5d648 == lStack_38) {
    return uVar6;
  }
  auVar20 = ___stack_chk_fail();
  pbVar8 = auVar20._8_8_;
  pdVar7 = auVar20._0_8_;
  puStack_158 = &DAT_01348d10;
  lStack_188 = *(long *)PTR_03a5d648;
  puStack_160 = &stack0xfffffffffffffff0;
  if (pbVar8 == (byte *)0x0) {
    uVar6 = 0x1f;
code_r0x01348dd0:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d1a4(alStack_290 + 1,0x100,pbVar8);
      param_4 = "EventInstance::isVirtual";
      param_5 = (dword *)(alStack_290 + 1);
      func_0x013aa954(uVar6,0xd);
      pdVar13 = pdVar7;
    }
  }
  else {
    *pbVar8 = 0;
    alStack_290[1] = 0;
    alStack_290[2] = 0;
    alStack_290[3] = 0;
    uVar6 = func_0x01279100(pdVar7,alStack_290 + 2);
    if ((((int)uVar6 == 0) &&
        (uVar6 = func_0x0127a71c(alStack_290 + 1,alStack_290[2]), (int)uVar6 == 0)) &&
       (uVar6 = func_0x01279164(pdVar7,alStack_290), (int)uVar6 == 0)) {
      alStack_290[3] = 0;
      if (alStack_290[0] != 0) {
        alStack_290[3] = alStack_290[0] + -8;
      }
      bVar14 = 0;
      if (*(long *)(alStack_290[3] + 0x10) != 0) {
        bVar14 = *(byte *)(*(long *)(alStack_290[3] + 0x10) + 0x2b0) >> 4 & 1;
      }
      uVar6 = 0;
      *pbVar8 = bVar14;
    }
    func_0x0127a76c(alStack_290 + 1);
    if ((int)uVar6 != 0) goto code_r0x01348dd0;
  }
  if (*(long *)PTR_03a5d648 == lStack_188) {
    return uVar6;
  }
  auVar20 = ___stack_chk_fail();
  pdVar7 = auVar20._0_8_;
  puStack_298 = &DAT_01348e44;
  lStack_2c8 = *(long *)PTR_03a5d648;
  alStack_3d0[1] = 0;
  alStack_3d0[2] = 0;
  alStack_3d0[3] = 0;
  ppuStack_2a0 = &puStack_160;
  uVar6 = func_0x01279100(pdVar7,alStack_3d0 + 2);
  if ((((int)uVar6 == 0) &&
      (uVar6 = func_0x0127a71c(alStack_3d0 + 1,alStack_3d0[2]), (int)uVar6 == 0)) &&
     (uVar6 = func_0x01279164(pdVar7,alStack_3d0), (int)uVar6 == 0)) {
    alStack_3d0[3] = 0;
    if (alStack_3d0[0] != 0) {
      alStack_3d0[3] = alStack_3d0[0] + -8;
    }
    *(long *)(alStack_3d0[3] + 0x30) = auVar20._8_8_;
  }
  func_0x0127a76c(alStack_3d0 + 1);
  if (((int)uVar6 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135d2d4(alStack_3d0 + 1,0x100,auVar20._8_8_);
    param_4 = "EventInstance::setUserData";
    param_5 = (dword *)(alStack_3d0 + 1);
    func_0x013aa954(uVar6,0xd);
    pdVar13 = pdVar7;
  }
  if (*(long *)PTR_03a5d648 == lStack_2c8) {
    return uVar6;
  }
  auVar20 = ___stack_chk_fail();
  puVar16 = auVar20._8_8_;
  pdVar7 = auVar20._0_8_;
  puStack_3d8 = &DAT_01348f4c;
  lStack_408 = *(long *)PTR_03a5d648;
  pppuStack_3e0 = &ppuStack_2a0;
  if (puVar16 == (undefined8 *)0x0) {
    uVar6 = 0x1f;
code_r0x01348ff8:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4(alStack_510 + 1,0x100,puVar16);
      param_4 = "EventInstance::getUserData";
      param_5 = (dword *)(alStack_510 + 1);
      func_0x013aa954(uVar6,0xd);
      pdVar13 = pdVar7;
    }
  }
  else {
    *puVar16 = 0;
    alStack_510[1] = 0;
    alStack_510[2] = 0;
    alStack_510[3] = 0;
    uVar6 = func_0x01279100(pdVar7,alStack_510 + 2);
    if ((((int)uVar6 == 0) &&
        (uVar6 = func_0x0127a71c(alStack_510 + 1,alStack_510[2]), (int)uVar6 == 0)) &&
       (uVar6 = func_0x01279164(pdVar7,alStack_510), (int)uVar6 == 0)) {
      alStack_510[3] = 0;
      if (alStack_510[0] != 0) {
        alStack_510[3] = alStack_510[0] + -8;
      }
      *puVar16 = *(undefined8 *)(alStack_510[3] + 0x30);
    }
    func_0x0127a76c(alStack_510 + 1);
    if ((int)uVar6 != 0) goto code_r0x01348ff8;
  }
  if (*(long *)PTR_03a5d648 == lStack_408) {
    return uVar6;
  }
  auVar20 = ___stack_chk_fail();
  puVar16 = auVar20._8_8_;
  pdVar11 = auVar20._0_8_;
  puStack_518 = &DAT_0134906c;
  lStack_568 = *(long *)PTR_03a5d648;
  adStack_668[0] = 0;
  adStack_668[1] = 0;
  uStack_660 = 0;
  lStack_658 = 0;
  pdVar7 = pdVar13;
  ppppuStack_520 = &pppuStack_3e0;
  uVar6 = func_0x01279100(pdVar11,adStack_668 + 2);
  if ((((int)uVar6 == 0) && (uVar6 = func_0x0127a71c(adStack_668,uStack_660), (int)uVar6 == 0)) &&
     (uVar6 = func_0x01279164(pdVar11,&lStack_670), (int)uVar6 == 0)) {
    lStack_658 = 0;
    if (lStack_670 != 0) {
      lStack_658 = lStack_670 + -8;
    }
    *(undefined8 **)(lStack_658 + 0x78) = puVar16;
    uVar15 = 0;
    if (puVar16 != (undefined8 *)0x0) {
      uVar15 = SUB84(pdVar13,0);
    }
    *(undefined4 *)(lStack_658 + 0x74) = uVar15;
  }
  func_0x0127a76c(adStack_668);
  if (((int)uVar6 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    unaff_x23 = adStack_668;
    unaff_x24 = 0x100;
    iVar2 = func_0x0135d2d4(adStack_668,0x100,puVar16);
    puVar16 = (undefined8 *)(long)iVar2;
    iVar2 = func_0x0135ce6c((long)unaff_x23 + (long)puVar16,0x100 - iVar2,", ");
    func_0x0135cce0((long)unaff_x23 + (long)puVar16 + (long)iVar2,
                    0x100 - (int)((long)puVar16 + (long)iVar2),pdVar13);
    param_4 = "EventInstance::setCallback";
    param_5 = adStack_668;
    pdVar7 = pdVar11;
    func_0x013aa954(uVar6,0xd);
  }
  if (*(long *)PTR_03a5d648 == lStack_568) {
    return uVar6;
  }
  auVar20 = ___stack_chk_fail();
  puVar17 = auVar20._8_8_;
  pdVar12 = auVar20._0_8_;
  puStack_678 = &DAT_013491cc;
  lStack_6a8 = *(long *)PTR_03a5d648;
  puStack_6a0 = puVar16;
  uStack_698 = uVar6;
  pdStack_690 = pdVar13;
  pdStack_688 = pdVar11;
  pppppuStack_680 = &ppppuStack_520;
  if (puVar17 == (undefined8 *)0x0) {
    uVar6 = 0x1f;
code_r0x0134927c:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4(alStack_7b0 + 1,0x100,puVar17);
      param_4 = "EventInstance::getMemoryUsage";
      param_5 = (dword *)(alStack_7b0 + 1);
      pdVar7 = pdVar12;
      func_0x013aa954(uVar6,0xd);
    }
  }
  else {
    *(undefined4 *)(puVar17 + 1) = 0;
    *puVar17 = 0;
    alStack_7b0[1] = 0;
    alStack_7b0[2] = 0;
    alStack_7b0[3] = 0;
    uVar6 = func_0x01279100(pdVar12,alStack_7b0 + 2);
    if ((((int)uVar6 == 0) &&
        (uVar6 = func_0x0127a71c(alStack_7b0 + 1,alStack_7b0[2]), (int)uVar6 == 0)) &&
       (uVar6 = func_0x01279164(pdVar12,alStack_7b0), (int)uVar6 == 0)) {
      alStack_7b0[3] = 0;
      if (alStack_7b0[0] != 0) {
        alStack_7b0[3] = alStack_7b0[0] + -8;
      }
      uVar6 = func_0x012957f8(alStack_7b0[3],puVar17);
    }
    func_0x0127a76c(alStack_7b0 + 1);
    if ((int)uVar6 != 0) goto code_r0x0134927c;
  }
  if (*(long *)PTR_03a5d648 == lStack_6a8) {
    return uVar6;
  }
  auVar21 = ___stack_chk_fail();
  puVar9 = auVar21._8_8_;
  pdVar13 = auVar21._0_8_;
  puStack_7b8 = &DAT_013492f0;
  lStack_7f8 = *(long *)PTR_03a5d648;
  uStack_7f0 = unaff_x24;
  pdStack_7e8 = unaff_x23;
  puStack_7e0 = puVar16;
  uStack_7d8 = uVar6;
  ppppppuStack_7c0 = &pppppuStack_680;
  if (puVar9 == (undefined4 *)0x0) {
    uVar6 = 0x1f;
code_r0x013493d8:
    puStack_7d0 = auVar20._8_8_;
    pdStack_7c8 = auVar20._0_8_;
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4(apuStack_8f8,0x100,puVar9);
      param_4 = "Bank::getSampleLoadingState";
      param_5 = (dword *)apuStack_8f8;
      pdVar7 = pdVar13;
      func_0x013aa954(uVar6,0x11);
      auVar20._8_8_ = puStack_7d0;
      auVar20._0_8_ = pdStack_7c8;
    }
  }
  else {
    *puVar9 = 1;
    alStack_908[1] = 0;
    puStack_7d0 = puVar17;
    pdStack_7c8 = pdVar12;
    uVar6 = func_0x01279100(pdVar13,alStack_908);
    if ((int)uVar6 == 0) {
      if ((*(byte *)(alStack_908[0] + 0x24) >> 1 & 1) == 0) {
        uVar6 = 0x4b;
      }
      else {
        uVar6 = func_0x0127a71c(alStack_908 + 1);
        if ((int)uVar6 == 0) {
          unaff_x23 = &MACH_HEADER.flags;
          pdVar7 = &MACH_HEADER.flags;
          uVar6 = func_0x012933e8(*(undefined8 *)(alStack_908[0] + 0x98),apuStack_8f8);
          if ((int)uVar6 == 0) {
            *apuStack_8f8[0] = &UNK_03c7d0c0;
            *(undefined4 *)(apuStack_8f8[0] + 1) = 0x18;
            *(int *)((long)apuStack_8f8[0] + 0xc) = auVar21._0_4_;
            uVar6 = func_0x01292948(*(undefined8 *)(alStack_908[0] + 0x98),apuStack_8f8[0]);
            puVar16 = apuStack_8f8[0];
            if ((int)uVar6 == 0) {
              *puVar9 = *(undefined4 *)(apuStack_8f8[0] + 2);
            }
          }
        }
      }
    }
    func_0x0127a76c(alStack_908 + 1);
    auVar20._8_8_ = puStack_7d0;
    auVar20._0_8_ = pdStack_7c8;
    if ((int)uVar6 != 0) goto code_r0x013493d8;
  }
  puStack_7d0 = auVar20._8_8_;
  pdStack_7c8 = auVar20._0_8_;
  if (*(long *)PTR_03a5d648 == lStack_7f8) {
    return uVar6;
  }
  auVar20 = ___stack_chk_fail();
  puVar10 = auVar20._8_8_;
  pdVar11 = auVar20._0_8_;
  puStack_918 = &DAT_01349450;
  lStack_958 = *(long *)PTR_03a5d648;
  uStack_950 = unaff_x24;
  pdStack_948 = unaff_x23;
  puStack_940 = puVar16;
  uStack_938 = uVar6;
  pppppppuStack_920 = &ppppppuStack_7c0;
  if (puVar10 == (undefined4 *)0x0) {
    uVar6 = 0x1f;
code_r0x01349550:
    puStack_930 = auVar21._8_8_;
    pdStack_928 = auVar21._0_8_;
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4(apuStack_a58,0x100,puVar10);
      param_4 = "Bank::getLoadingState";
      param_5 = (dword *)apuStack_a58;
      func_0x013aa954(uVar6,0x11);
      auVar21._8_8_ = puStack_930;
      auVar21._0_8_ = pdStack_928;
      pdVar7 = pdVar11;
    }
  }
  else {
    *puVar10 = 1;
    alStack_a68[1] = 0;
    puStack_930 = puVar9;
    pdStack_928 = pdVar13;
    uVar6 = func_0x01279100(pdVar11,alStack_a68);
    if ((int)uVar6 == 0) {
      if ((*(byte *)(alStack_a68[0] + 0x24) >> 1 & 1) == 0) {
        uVar6 = 0x4b;
      }
      else {
        uVar6 = func_0x0127a71c(alStack_a68 + 1);
        if ((int)uVar6 == 0) {
          pdVar7 = &MACH_HEADER.flags;
          uVar6 = func_0x012933e8(*(undefined8 *)(alStack_a68[0] + 0x98),apuStack_a58);
          if ((int)uVar6 == 0) {
            *apuStack_a58[0] = &UNK_03c7d048;
            *(undefined4 *)(apuStack_a58[0] + 1) = 0x18;
            *(int *)((long)apuStack_a58[0] + 0xc) = auVar20._0_4_;
            uVar6 = func_0x01292948(*(undefined8 *)(alStack_a68[0] + 0x98),apuStack_a58[0]);
            if ((int)uVar6 == 0) {
              *puVar10 = *(undefined4 *)(apuStack_a58[0] + 2);
              if (*(int *)(apuStack_a58[0] + 2) == 4) {
                uVar6 = (ulong)*(uint *)((long)apuStack_a58[0] + 0x14);
              }
              else {
                uVar6 = 0;
              }
            }
          }
        }
      }
    }
    func_0x0127a76c(alStack_a68 + 1);
    auVar21._8_8_ = puStack_930;
    auVar21._0_8_ = pdStack_928;
    if ((int)uVar6 != 0) goto code_r0x01349550;
  }
  puStack_930 = auVar21._8_8_;
  pdStack_928 = auVar21._0_8_;
  if (*(long *)PTR_03a5d648 == lStack_958) {
    return uVar6;
  }
  auVar20 = ___stack_chk_fail();
  puVar16 = auVar20._8_8_;
  pdVar13 = auVar20._0_8_;
  puStack_a78 = &DAT_013495c8;
  lStack_ab8 = *(long *)PTR_03a5d648;
  pppppppuStack_a80 = &pppppppuStack_920;
  if (puVar16 == (undefined8 *)0x0) {
    uVar6 = 0x1f;
code_r0x013496a0:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d254(alStack_bc0 + 1,0x100,puVar16);
      param_4 = "Bank::getID";
      param_5 = (dword *)(alStack_bc0 + 1);
      func_0x013aa954(uVar6,0x11);
      pdVar7 = pdVar13;
    }
  }
  else {
    alStack_bc0[1] = 0;
    alStack_bc0[2] = 0;
    alStack_bc0[3] = 0;
    uVar6 = func_0x01279100(pdVar13,alStack_bc0 + 2);
    puVar17 = puVar16;
    if ((((int)uVar6 == 0) &&
        (uVar6 = func_0x0127a71c(alStack_bc0 + 1,alStack_bc0[2]), (int)uVar6 == 0)) &&
       (uVar6 = func_0x01279164(pdVar13,alStack_bc0), (int)uVar6 == 0)) {
      alStack_bc0[3] = alStack_bc0[0];
      if (*(int *)(alStack_bc0[0] + 0x34) == 0) {
        uVar6 = 0;
        uVar19 = *(undefined8 *)(*(long *)(alStack_bc0[0] + 0x18) + 0x10);
        puVar16[1] = *(undefined8 *)(*(long *)(alStack_bc0[0] + 0x18) + 0x18);
        *puVar16 = uVar19;
        puVar17 = (undefined8 *)0x0;
      }
      else {
        uVar6 = 0x2e;
      }
    }
    func_0x0127a76c(alStack_bc0 + 1);
    if (puVar17 != (undefined8 *)0x0) {
      *puVar17 = 0;
      puVar17[1] = 0;
    }
    if ((int)uVar6 != 0) goto code_r0x013496a0;
  }
  if (*(long *)PTR_03a5d648 == lStack_ab8) {
    return uVar6;
  }
  auVar20 = ___stack_chk_fail();
  pdVar11 = auVar20._8_8_;
  pdVar13 = auVar20._0_8_;
  puStack_bc8 = &DAT_01349718;
  lStack_c28 = *(long *)PTR_03a5d648;
  if (pdVar11 != (dword *)0x0) {
    *(char *)pdVar11 = '\0';
  }
  if ((dword *)param_4 != (dword *)0x0) {
    *(dword *)param_4 = 0;
  }
  uVar6 = 0x1f;
  pdVar12 = pdVar7;
  pcVar18 = param_4;
  pppppppuStack_bd0 = &pppppppuStack_a80;
  if (((int)pdVar7 < 0) || (pdVar11 == (dword *)0x0 && (int)pdVar7 != 0)) {
code_r0x013497f4:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      iVar2 = func_0x0135ce6c(adStack_d28,0x100,pdVar11);
      iVar3 = func_0x0135ce6c((long)adStack_d28 + (long)iVar2,0x100 - iVar2,", ");
      lVar4 = (long)iVar2 + (long)iVar3;
      iVar3 = (int)lVar4;
      iVar2 = func_0x0135cc94((long)adStack_d28 + lVar4,0x100 - iVar3,pdVar7);
      uVar1 = iVar3 + iVar2;
      pdVar7 = (dword *)(ulong)uVar1;
      iVar2 = func_0x0135ce6c((long)adStack_d28 + (long)(int)uVar1,0x100 - uVar1,", ");
      func_0x0135d05c((long)adStack_d28 + (long)(int)(uVar1 + iVar2),0x100 - (uVar1 + iVar2),param_4
                     );
      pcVar18 = "Bank::getPath";
      param_5 = adStack_d28;
      pdVar12 = pdVar13;
      func_0x013aa954(uVar6,0x11,pdVar13);
    }
  }
  else {
    adStack_d28[0] = 0;
    adStack_d28[1] = 0;
    uStack_d20 = 0;
    lStack_d18 = 0;
    uVar6 = func_0x01279100(pdVar13,&uStack_d20);
    if (((int)uVar6 == 0) &&
       ((uVar6 = func_0x0127a71c(adStack_d28,uStack_d20), (int)uVar6 == 0 &&
        (uVar6 = func_0x01279164(pdVar13,&lStack_d40), (int)uVar6 == 0)))) {
      lStack_d18 = lStack_d40;
      if (*(int *)(lStack_d40 + 0x34) == 0) {
        uStack_d38 = *(undefined8 *)(*(long *)(lStack_d40 + 0x18) + 0x18);
        lStack_d40 = *(long *)(*(long *)(lStack_d40 + 0x18) + 0x10);
        pdVar12 = pdVar11;
        pcVar18 = (char *)pdVar7;
        param_5 = (dword *)param_4;
        uVar6 = func_0x013145c8(uStack_d20,&lStack_d40,pdVar11);
      }
      else {
        uVar6 = 0x2e;
      }
    }
    func_0x0127a76c(adStack_d28);
    if ((int)uVar6 != 0) goto code_r0x013497f4;
  }
  if (*(long *)PTR_03a5d648 == lStack_c28) {
    return uVar6;
  }
  auVar20 = ___stack_chk_fail();
  puVar9 = auVar20._8_8_;
  pdVar11 = auVar20._0_8_;
  puStack_d48 = &DAT_01349900;
  lStack_d78 = *(long *)PTR_03a5d648;
  uStack_d70 = uVar6;
  pdStack_d68 = pdVar7;
  pdStack_d60 = (dword *)param_4;
  pdStack_d58 = pdVar13;
  pppppppuStack_d50 = &pppppppuStack_bd0;
  if (puVar9 == (undefined4 *)0x0) {
    uVar6 = 0x1f;
code_r0x013499c8:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d05c(alStack_e88 + 2,0x100,puVar9);
      pcVar18 = "Bank::getStringCount";
      param_5 = (dword *)(alStack_e88 + 2);
      func_0x013aa954(uVar6,0x11,pdVar11);
      pdVar12 = pdVar11;
    }
  }
  else {
    *puVar9 = 0;
    alStack_e88[1] = 0;
    uVar6 = func_0x01279100(pdVar11,alStack_e88);
    if ((int)uVar6 == 0) {
      if ((*(byte *)(alStack_e88[0] + 0x24) >> 1 & 1) == 0) {
        uVar6 = 0x4b;
      }
      else {
        uVar6 = func_0x0127a71c(alStack_e88 + 1);
        if (((int)uVar6 == 0) && (uVar6 = func_0x01279164(pdVar11,alStack_e88 + 2), (int)uVar6 == 0)
           ) {
          if (*(int *)(alStack_e88[2] + 0x34) == 0) {
            lVar4 = *(long *)(*(long *)(alStack_e88[2] + 0x18) + 0x2c8);
            uVar15 = 0;
            if (lVar4 != 0) {
              uVar15 = *(undefined4 *)(lVar4 + 0x18);
            }
            uVar6 = 0;
            *puVar9 = uVar15;
          }
          else {
            uVar6 = 0x2e;
          }
        }
      }
    }
    func_0x0127a76c(alStack_e88 + 1);
    if ((int)uVar6 != 0) goto code_r0x013499c8;
  }
  if (*(long *)PTR_03a5d648 == lStack_d78) {
    return uVar6;
  }
  auVar20 = ___stack_chk_fail();
  uVar19 = auVar20._0_8_;
  puStack_e98 = &DAT_01349a3c;
  lStack_f00 = *(long *)PTR_03a5d648;
  if ((dword *)pcVar18 != (dword *)0x0) {
    *pcVar18 = '\0';
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  uVar6 = 0x1f;
  pppppppuStack_ea0 = &pppppppuStack_d50;
  if ((-1 < (int)param_5) && ((dword *)pcVar18 != (dword *)0x0 || (int)param_5 == 0)) {
    alStack_1010[1] = 0;
    uVar6 = func_0x01279100(uVar19,alStack_1010);
    if ((int)uVar6 == 0) {
      if ((*(byte *)(alStack_1010[0] + 0x24) >> 1 & 1) == 0) {
        uVar6 = 0x4b;
      }
      else {
        uVar6 = func_0x0127a71c(alStack_1010 + 1);
        if (((int)uVar6 == 0) && (uVar6 = func_0x01279164(uVar19,alStack_1000), (int)uVar6 == 0)) {
          if (*(int *)(alStack_1000[0] + 0x34) == 0) {
            lVar4 = *(long *)(*(long *)(alStack_1000[0] + 0x18) + 0x2c8);
            if (lVar4 == 0) {
              uVar6 = 0x1f;
            }
            else {
              uVar6 = func_0x012472b8(lVar4,auVar20._8_8_,pdVar12,pcVar18,param_5,param_6);
            }
          }
          else {
            uVar6 = 0x2e;
          }
        }
      }
    }
    func_0x0127a76c(alStack_1010 + 1);
    if ((int)uVar6 == 0) goto code_r0x01349c18;
  }
  if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
    unaff_x27 = 0x100;
    iVar2 = func_0x0135cc94(alStack_1000,0x100,auVar20._8_8_);
    iVar3 = func_0x0135ce6c((long)alStack_1000 + (long)iVar2,0x100 - iVar2,", ");
    unaff_x28 = (long)iVar2 + (long)iVar3;
    iVar2 = func_0x0135d254((long)alStack_1000 + unaff_x28,0x100 - (int)unaff_x28,pdVar12);
    iVar2 = (int)unaff_x28 + iVar2;
    iVar3 = func_0x0135ce6c((long)alStack_1000 + (long)iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x0135ce6c((long)alStack_1000 + (long)iVar2,0x100 - iVar2,pcVar18);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x0135ce6c((long)alStack_1000 + (long)iVar2,0x100 - iVar2,", ");
    uVar1 = iVar2 + iVar3;
    pcVar18 = (char *)(ulong)uVar1;
    iVar2 = func_0x0135cc94((long)alStack_1000 + (long)(int)uVar1,0x100 - uVar1,param_5);
    uVar1 = uVar1 + iVar2;
    param_5 = (dword *)(ulong)uVar1;
    iVar2 = func_0x0135ce6c((long)alStack_1000 + (long)(int)uVar1,0x100 - uVar1,", ");
    func_0x0135d05c((long)alStack_1000 + (long)(int)(uVar1 + iVar2),0x100 - (uVar1 + iVar2),param_6)
    ;
    func_0x013aa954(uVar6,0x11,uVar19,"Bank::getStringInfo",alStack_1000);
  }
code_r0x01349c18:
  if (*(long *)PTR_03a5d648 != lStack_f00) {
    uVar5 = ___stack_chk_fail();
    puStack_1018 = &DAT_01349c88;
    pppppppuStack_1160 = &pppppppuStack_1020;
    uStack_1048 = *(undefined8 *)PTR_03a5d648;
    puStack_1158 = &UNK_01349cb4;
    alStack_1198[1] = 0;
    pdStack_1180 = (dword *)pcVar18;
    pdStack_1178 = param_5;
    uStack_1170 = uVar5;
    uStack_1168 = uVar19;
    lStack_1040 = unaff_x28;
    uStack_1038 = unaff_x27;
    puStack_1030 = param_6;
    uStack_1028 = uVar19;
    pppppppuStack_1020 = &pppppppuStack_ea0;
    uVar6 = func_0x01279100(uVar5,alStack_1198);
    if ((int)uVar6 == 0) {
      if ((*(byte *)(alStack_1198[0] + 0x24) >> 1 & 1) == 0) {
        uVar6 = 0x4b;
      }
      else {
        uVar6 = func_0x0127a71c(alStack_1198 + 1);
        if (((int)uVar6 == 0) &&
           (uVar6 = func_0x012933e8(*(undefined8 *)(alStack_1198[0] + 0x98),&puStack_1188,0x10),
           (int)uVar6 == 0)) {
          *puStack_1188 = &UNK_03c7d228;
          *(undefined4 *)(puStack_1188 + 1) = 0x10;
          *(int *)((long)puStack_1188 + 0xc) = (int)uVar5;
          uVar6 = func_0x01292948(*(undefined8 *)(alStack_1198[0] + 0x98));
        }
      }
    }
    func_0x0127a76c(alStack_1198 + 1);
    return uVar6;
  }
  return uVar6;
}



// ============================================================
// RVA: 0x1501268 | Atlas.SplashBehaviour.StartConfig
// ============================================================

long Atlas_SplashBehaviour__StartConfig
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if ((bRam0000000003eb4ceb & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d72d08);
    bRam0000000003eb4ceb = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uVar1 = *(uint *)(param_5 + 0x54);
  if ((int)uVar1 < 0) {
    *(undefined4 *)(param_5 + 0x50) = 0;
    return 0;
  }
  lVar6 = *(long *)(param_5 + 0x40);
  if (lVar6 != 0) {
    uVar2 = *(uint *)(lVar6 + 0x18);
    *(undefined4 *)(param_5 + 0x50) = 0;
    if ((int)uVar2 <= (int)uVar1) {
      return 0;
    }
    if (uVar2 <= uVar1) goto LAB_01501528;
    if (*(char *)(lVar6 + (ulong)uVar1 * 0x28 + 0x34) == '\0') {
      uVar5 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
      lVar6 = *(long *)(param_5 + 0x40);
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) <= *(uint *)(param_5 + 0x54)) goto LAB_01501528;
        fVar10 = (float)(int)uVar5;
        fVar11 = *(float *)(param_5 + 0x28) * fVar10;
        lVar6 = /*Atlas.SplashBehaviour$$GetMaxHeightSprite*/ func_0x015015f4(fVar11,uVar5,
                                *(undefined8 *)
                                 (lVar6 + (long)(int)*(uint *)(param_5 + 0x54) * 0x28 + 0x38));
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar6,0,0);
        if ((int)uVar5 != 0) {
          lVar6 = *(long *)(param_5 + 0x40);
          if (lVar6 == 0) goto LAB_01501524;
          if (*(uint *)(lVar6 + 0x18) <= *(uint *)(param_5 + 0x54)) goto LAB_01501528;
          lVar6 = /*Atlas.SplashBehaviour$$GetMinHeightSprite*/ func_0x015016cc(uVar5,*(undefined8 *)
                                         (lVar6 + (long)(int)*(uint *)(param_5 + 0x54) * 0x28 + 0x38
                                         ));
        }
        if (lVar6 != 0) {
          uStack_50 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar6,0);
          fStack_4c = fVar10;
          uStack_48 = param_3;
          uStack_44 = param_4;
          fVar10 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_50,0);
          if (fVar11 < fVar10) {
            fVar10 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_50,0);
            fVar7 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(&uStack_50,0);
            /*UnityEngine.Rect$$set_width*/ func_0x0325356c(fVar7 * (fVar11 / fVar10),&uStack_50,0);
            fVar7 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_50,0);
            /*UnityEngine.Rect$$set_height*/ func_0x0325357c((fVar11 / fVar10) * fVar7,&uStack_50,0);
          }
          if (*(long *)(param_5 + 0x20) != 0) {
            lVar3 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(param_5 + 0x20),0);
            uVar8 = /*UnityEngine.Rect$$get_width*/ func_0x03253564(&uStack_50,0);
            uVar9 = /*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_50,0);
            if (lVar3 != 0) {
              /*UnityEngine.RectTransform$$set_sizeDelta*/ func_0x03254e54(uVar8,uVar9,lVar3,0);
              /*UnityEngine.Color$$.ctor*/ func_0x03222f84(0x3f800000,0x3f800000,0x3f800000,0,&uStack_60,0);
              plVar4 = *(long **)(param_5 + 0x20);
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x2a8))
                          ((undefined4)uStack_60,uStack_60._4_4_,(undefined4)uStack_58,
                           uStack_58._4_4_,plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
                if (*(long *)(param_5 + 0x20) != 0) {
                  /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(param_5 + 0x20),lVar6,0);
                  if (*(long *)(param_5 + 0x20) != 0) {
                    /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(param_5 + 0x20),1,0);
                    if (*(long *)(param_5 + 0x30) != 0) {
                      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(param_5 + 0x30),1,0);
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else if (*(long *)(param_5 + 0x20) != 0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(param_5 + 0x20),0,0);
      if (*(long *)(param_5 + 0x30) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(param_5 + 0x30),0,0);
        return 1;
      }
    }
  }
LAB_01501524:
  func_0x00f78af4();
LAB_01501528:
  uVar5 = func_0x00f78b24();
  lVar6 = func_0x00f78ac0(uVar5,0);
  *(undefined1 *)(lVar6 + 0x7d) = 1;
  return lVar6;
}



// ============================================================
// RVA: 0x1501534 | Atlas.SplashBehaviour.RequestExit
// ============================================================

void Atlas_SplashBehaviour__RequestExit(long param_1)

{
  *(undefined1 *)(param_1 + 0x7d) = 1;
  return;
}



// ============================================================
// RVA: 0x1501540 | Atlas.SplashBehaviour.TrySkip
// ============================================================

ulong Atlas_SplashBehaviour__TrySkip(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte *extraout_x1;
  long lVar4;
  
  if ((bRam0000000003eb4cec & 1) == 0) {
    func_0x00f78a20(0x3d725e8);
    bRam0000000003eb4cec = 1;
  }
  uVar2 = /*UnityEngine.PlayerPrefs$$GetInt*/ func_0x03250818(/*STR('SeenSplash')*/ uRam0000000003d725e8,0,0);
  if ((int)uVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x54);
    if (-1 < (int)uVar1) {
      lVar4 = *(long *)(param_1 + 0x40);
      if (lVar4 == 0) {
        func_0x00f78af4();
LAB_015015e0:
        uVar3 = func_0x00f78b24();
        func_0x00f78ac0(uVar3,0);
        return (ulong)*extraout_x1;
      }
      if ((int)uVar1 < (int)*(uint *)(lVar4 + 0x18)) {
        if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_015015e0;
        if (*(char *)(lVar4 + (ulong)uVar1 * 0x28 + 0x35) != '\0') {
          *(undefined1 *)(param_1 + 0x7d) = 1;
        }
      }
    }
  }
  return uVar2;
}



// ============================================================
// RVA: 0x15015ec | Atlas.SplashBehaviour.ShouldInclude
// ============================================================

undefined1 Atlas_SplashBehaviour__ShouldInclude(undefined8 param_1,undefined1 *param_2)

{
  return *param_2;
}



// ============================================================
// RVA: 0x15015f4 | Atlas.SplashBehaviour.GetMaxHeightSprite
// ============================================================

long Atlas_SplashBehaviour__GetMaxHeightSprite
               (float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,long param_6,long param_7)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  uint uVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  uint uVar9;
  ulong unaff_x22;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar13 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0;
  if (param_6 != 0) {
    uVar7 = *(uint *)(param_6 + 0x18);
    if ((int)uVar7 < 1) {
      lVar8 = 0;
    }
    else {
      unaff_d8 = (ulong)(uint)param_1;
      unaff_x22 = 0;
      unaff_d9 = 0xff7fffff;
      unaff_x20 = 0;
      do {
        uVar9 = (uint)unaff_x22;
        unaff_x19 = param_6;
        if (uVar7 <= uVar9) goto LAB_015016c0;
        unaff_x21 = *(long *)(param_6 + (long)(int)uVar9 * 8 + 0x20);
        if (unaff_x21 == 0) goto LAB_015016bc;
        uVar10 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(unaff_x21,0);
        uStack_50 = CONCAT44(param_2,uVar10);
        uStack_48 = CONCAT44(param_4,param_3);
        fVar11 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_50,0);
        lVar8 = unaff_x21;
        uVar2 = (ulong)(uint)fVar11;
        if (param_1 < fVar11 || fVar11 <= (float)unaff_d9) {
          lVar8 = unaff_x20;
          uVar2 = unaff_d9;
        }
        unaff_d9 = uVar2;
        unaff_x22 = (ulong)(uVar9 + 1);
        uVar7 = *(uint *)(param_6 + 0x18);
        unaff_x20 = lVar8;
      } while ((int)(uVar9 + 1) < (int)uVar7);
    }
    return lVar8;
  }
LAB_015016bc:
  func_0x00f78af4();
LAB_015016c0:
  uVar3 = func_0x00f78b24();
  func_0x00f78ac0(uVar3,0);
  puStack_58 = &Atlas_SplashBehaviour__GetMinHeightSprite;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = unaff_d9;
  uStack_88 = unaff_d8;
  uStack_80 = unaff_x22;
  lStack_78 = unaff_x21;
  lStack_70 = unaff_x20;
  lStack_68 = unaff_x19;
  puStack_60 = &stack0xfffffffffffffff0;
  if (extraout_x1 == 0) {
code_r0x01501780:
    func_0x00f78af4();
code_r0x01501784:
    uVar3 = func_0x00f78b24();
    func_0x00f78ac0(uVar3,0);
    if ((bRam0000000003eb4ced & 1) == 0) {
      func_0x00f78a20(0x3d70b98);
      bRam0000000003eb4ced = 1;
    }
    if ((extraout_x1_00 != 0) && (lVar8 = /*UnityEngine.Video.VideoPlayer$$get_clip*/ func_0x032fb9c0(extraout_x1_00,0), lVar8 != 0)) {
      lVar4 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar8,0);
      lVar8 = /*STR('OnPrepareCompleted: ')*/ lRam0000000003d70b98;
      if ((bRam0000000003eb9467 & 1) == 0) {
        func_0x00f78a20(0x3d24dd0,lVar4,0);
        bRam0000000003eb9467 = 1;
      }
      if ((lVar8 == 0) || (iVar1 = *(int *)(lVar8 + 0x10), iVar1 == 0)) {
        if ((lVar4 == 0) || (lVar8 = lVar4, *(int *)(lVar4 + 0x10) == 0)) {
          lVar8 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
      }
      else if ((lVar4 != 0) && (*(int *)(lVar4 + 0x10) != 0)) {
        lVar5 = func_0x00f834ac(*(int *)(lVar4 + 0x10) + iVar1);
        /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar5,0,lVar8);
        /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar5,iVar1,lVar4);
        lVar8 = lVar5;
      }
      return lVar8;
    }
    func_0x00f78af4();
    if ((bRam0000000003eb4cee & 1) == 0) {
      func_0x00f78a20(0x3d66070);
      func_0x00f78a20(0x3d70b48);
      bRam0000000003eb4cee = 1;
    }
    if (extraout_x1_01 == 0) {
      lVar8 = func_0x00f78af4();
      if ((bRam0000000003eb4cf1 & 1) == 0) {
        func_0x00f78a20(0x3d65d08);
        bRam0000000003eb4cf1 = 1;
      }
      *(undefined4 *)(lVar8 + 0x28) = 0x3f4ccccd;
      *(undefined4 *)(lVar8 + 0x54) = 0xffffffff;
      *(undefined8 *)(lVar8 + 0x88) = /*STR('')*/ uRam0000000003d65d08;
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return lVar8;
    }
    lVar4 = /*UnityEngine.Video.VideoPlayer$$get_url*/ func_0x032fb980(extraout_x1_01,0);
    lVar5 = /*STR('OnErrorReceived: URL: ')*/ lRam0000000003d70b48;
    lVar8 = /*STR(' Error MSG: ')*/ lRam0000000003d66070;
    if ((bRam0000000003eb9469 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb9469 = 1;
    }
    if ((((lVar5 == 0) && (lVar4 == 0)) && (lVar8 == 0)) && (param_7 == 0)) {
      lVar6 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    else {
      if (lVar5 == 0) {
        lVar5 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      }
      if (lVar4 == 0) {
        lVar4 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      }
      if (lVar8 == 0) {
        lVar8 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      }
      if (param_7 == 0) {
        param_7 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      }
      if (((lVar5 == 0) || (lVar4 == 0)) || ((lVar8 == 0 || (param_7 == 0)))) {
        auVar13 = func_0x00f78af4();
        lVar8 = auVar13._8_8_;
        lVar4 = auVar13._0_8_;
        if ((bRam0000000003eb93dc & 1) == 0) {
          func_0x00f78a20(0x3d65ed8);
          bRam0000000003eb93dc = 1;
        }
        lVar5 = /*STR(' ')*/ lRam0000000003d65ed8;
        if (lVar8 == 0) {
          return lVar4;
        }
        if ((bRam0000000003eb9468 & 1) == 0) {
          func_0x00f78a20(0x3d24dd0);
          bRam0000000003eb9468 = 1;
        }
        if (((lVar4 == 0) && (lVar5 == 0)) && (lVar8 == 0)) {
          lVar6 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        else {
          if (lVar4 == 0) {
            lVar4 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
          }
          if (lVar5 == 0) {
            lVar5 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
          }
          if (lVar8 == 0) {
            lVar8 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
          }
          if (((lVar4 == 0) || (lVar5 == 0)) || (lVar8 == 0)) {
            lVar8 = func_0x00f78af4();
            return lVar8;
          }
          lVar6 = func_0x00f834ac(*(int *)(lVar5 + 0x10) + *(int *)(lVar4 + 0x10) +
                                  *(int *)(lVar8 + 0x10));
          /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar6,0,lVar4);
          /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar6,*(undefined4 *)(lVar4 + 0x10),lVar5);
          /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar6,*(int *)(lVar5 + 0x10) + *(int *)(lVar4 + 0x10),lVar8);
        }
        return lVar6;
      }
      lVar6 = func_0x00f834ac(*(int *)(lVar4 + 0x10) + *(int *)(lVar5 + 0x10) +
                              *(int *)(lVar8 + 0x10) + *(int *)(param_7 + 0x10));
      /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar6,0,lVar5);
      /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar6,*(undefined4 *)(lVar5 + 0x10),lVar4);
      /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar6,*(int *)(lVar4 + 0x10) + *(int *)(lVar5 + 0x10),lVar8);
      /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar6,*(int *)(lVar4 + 0x10) + *(int *)(lVar5 + 0x10) + *(int *)(lVar8 + 0x10)
                      ,param_7);
    }
    return lVar6;
  }
  uVar7 = *(uint *)(extraout_x1 + 0x18);
  if ((int)uVar7 < 1) {
    lVar8 = 0;
  }
  else {
    uVar9 = 0;
    fVar11 = 3.4028235e+38;
    lVar4 = 0;
    do {
      if (uVar7 <= uVar9) goto code_r0x01501784;
      lVar8 = *(long *)(extraout_x1 + (long)(int)uVar9 * 8 + 0x20);
      if (lVar8 == 0) goto code_r0x01501780;
      uVar10 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar8,0);
      uStack_a0 = CONCAT44(param_2,uVar10);
      uStack_98 = CONCAT44(param_4,param_3);
      fVar12 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_a0,0);
      if (fVar11 <= fVar12) {
        lVar8 = lVar4;
        fVar12 = fVar11;
      }
      fVar11 = fVar12;
      uVar9 = uVar9 + 1;
      uVar7 = *(uint *)(extraout_x1 + 0x18);
      lVar4 = lVar8;
    } while ((int)uVar9 < (int)uVar7);
  }
  return lVar8;
}



// ============================================================
// RVA: 0x15016cc | Atlas.SplashBehaviour.GetMinHeightSprite
// ============================================================

long Atlas_SplashBehaviour__GetMinHeightSprite
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,long param_6,long param_7)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x1;
  long extraout_x1_00;
  uint uVar6;
  float fVar7;
  long lVar8;
  uint uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0;
  if (param_6 == 0) {
LAB_01501780:
    func_0x00f78af4();
LAB_01501784:
    uVar2 = func_0x00f78b24();
    func_0x00f78ac0(uVar2,0);
    if ((bRam0000000003eb4ced & 1) == 0) {
      func_0x00f78a20(0x3d70b98);
      bRam0000000003eb4ced = 1;
    }
    if ((extraout_x1 != 0) && (lVar8 = /*UnityEngine.Video.VideoPlayer$$get_clip*/ func_0x032fb9c0(extraout_x1,0), lVar8 != 0)) {
      lVar3 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar8,0);
      lVar8 = /*STR('OnPrepareCompleted: ')*/ lRam0000000003d70b98;
      if ((bRam0000000003eb9467 & 1) == 0) {
        func_0x00f78a20(0x3d24dd0,lVar3,0);
        bRam0000000003eb9467 = 1;
      }
      if ((lVar8 == 0) || (iVar1 = *(int *)(lVar8 + 0x10), iVar1 == 0)) {
        if ((lVar3 == 0) || (lVar8 = lVar3, *(int *)(lVar3 + 0x10) == 0)) {
          lVar8 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
      }
      else if ((lVar3 != 0) && (*(int *)(lVar3 + 0x10) != 0)) {
        lVar4 = func_0x00f834ac(*(int *)(lVar3 + 0x10) + iVar1);
        /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar4,0,lVar8);
        /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar4,iVar1,lVar3);
        lVar8 = lVar4;
      }
      return lVar8;
    }
    func_0x00f78af4();
    if ((bRam0000000003eb4cee & 1) == 0) {
      func_0x00f78a20(0x3d66070);
      func_0x00f78a20(0x3d70b48);
      bRam0000000003eb4cee = 1;
    }
    if (extraout_x1_00 != 0) {
      lVar3 = /*UnityEngine.Video.VideoPlayer$$get_url*/ func_0x032fb980(extraout_x1_00,0);
      lVar4 = /*STR('OnErrorReceived: URL: ')*/ lRam0000000003d70b48;
      lVar8 = /*STR(' Error MSG: ')*/ lRam0000000003d66070;
      if ((bRam0000000003eb9469 & 1) == 0) {
        func_0x00f78a20(0x3d24dd0);
        bRam0000000003eb9469 = 1;
      }
      if ((((lVar4 == 0) && (lVar3 == 0)) && (lVar8 == 0)) && (param_7 == 0)) {
        lVar5 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      }
      else {
        if (lVar4 == 0) {
          lVar4 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (lVar3 == 0) {
          lVar3 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (lVar8 == 0) {
          lVar8 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (param_7 == 0) {
          param_7 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (((lVar4 == 0) || (lVar3 == 0)) || ((lVar8 == 0 || (param_7 == 0)))) {
          auVar12 = func_0x00f78af4();
          lVar8 = auVar12._8_8_;
          lVar3 = auVar12._0_8_;
          if ((bRam0000000003eb93dc & 1) == 0) {
            func_0x00f78a20(0x3d65ed8);
            bRam0000000003eb93dc = 1;
          }
          lVar4 = /*STR(' ')*/ lRam0000000003d65ed8;
          if (lVar8 == 0) {
            return lVar3;
          }
          if ((bRam0000000003eb9468 & 1) == 0) {
            func_0x00f78a20(0x3d24dd0);
            bRam0000000003eb9468 = 1;
          }
          if (((lVar3 == 0) && (lVar4 == 0)) && (lVar8 == 0)) {
            lVar5 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
          }
          else {
            if (lVar3 == 0) {
              lVar3 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            }
            if (lVar4 == 0) {
              lVar4 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            }
            if (lVar8 == 0) {
              lVar8 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            }
            if (((lVar3 == 0) || (lVar4 == 0)) || (lVar8 == 0)) {
              lVar8 = func_0x00f78af4();
              return lVar8;
            }
            lVar5 = func_0x00f834ac(*(int *)(lVar4 + 0x10) + *(int *)(lVar3 + 0x10) +
                                    *(int *)(lVar8 + 0x10));
            /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar5,0,lVar3);
            /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar5,*(undefined4 *)(lVar3 + 0x10),lVar4);
            /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar5,*(int *)(lVar4 + 0x10) + *(int *)(lVar3 + 0x10),lVar8);
          }
          return lVar5;
        }
        lVar5 = func_0x00f834ac(*(int *)(lVar3 + 0x10) + *(int *)(lVar4 + 0x10) +
                                *(int *)(lVar8 + 0x10) + *(int *)(param_7 + 0x10));
        /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar5,0,lVar4);
        /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar5,*(undefined4 *)(lVar4 + 0x10),lVar3);
        /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar5,*(int *)(lVar3 + 0x10) + *(int *)(lVar4 + 0x10),lVar8);
        /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar5,*(int *)(lVar3 + 0x10) + *(int *)(lVar4 + 0x10) +
                              *(int *)(lVar8 + 0x10),param_7);
      }
      return lVar5;
    }
    lVar8 = func_0x00f78af4();
    if ((bRam0000000003eb4cf1 & 1) == 0) {
      func_0x00f78a20(0x3d65d08);
      bRam0000000003eb4cf1 = 1;
    }
    *(undefined4 *)(lVar8 + 0x28) = 0x3f4ccccd;
    *(undefined4 *)(lVar8 + 0x54) = 0xffffffff;
    *(undefined8 *)(lVar8 + 0x88) = /*STR('')*/ uRam0000000003d65d08;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar8;
  }
  uVar6 = *(uint *)(param_6 + 0x18);
  if ((int)uVar6 < 1) {
    lVar8 = 0;
  }
  else {
    uVar9 = 0;
    fVar7 = 3.4028235e+38;
    lVar3 = 0;
    do {
      if (uVar6 <= uVar9) goto LAB_01501784;
      lVar8 = *(long *)(param_6 + (long)(int)uVar9 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01501780;
      uVar10 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar8,0);
      uStack_50 = CONCAT44(param_2,uVar10);
      uStack_48 = CONCAT44(param_4,param_3);
      fVar11 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_50,0);
      if (fVar7 <= fVar11) {
        lVar8 = lVar3;
        fVar11 = fVar7;
      }
      fVar7 = fVar11;
      uVar9 = uVar9 + 1;
      uVar6 = *(uint *)(param_6 + 0x18);
      lVar3 = lVar8;
    } while ((int)uVar9 < (int)uVar6);
  }
  return lVar8;
}



// ============================================================
// RVA: 0x1501790 | Atlas.SplashBehaviour.OnPrepareCompleted
// ============================================================

long Atlas_SplashBehaviour__OnPrepareCompleted(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x1;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4ced & 1) == 0) {
    func_0x00f78a20(0x3d70b98);
    bRam0000000003eb4ced = 1;
  }
  if ((param_2 != 0) && (lVar2 = /*UnityEngine.Video.VideoPlayer$$get_clip*/ func_0x032fb9c0(param_2,0), lVar2 != 0)) {
    lVar3 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar2,0);
    lVar2 = /*STR('OnPrepareCompleted: ')*/ lRam0000000003d70b98;
    if ((bRam0000000003eb9467 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0,lVar3,0);
      bRam0000000003eb9467 = 1;
    }
    if ((lVar2 == 0) || (iVar1 = *(int *)(lVar2 + 0x10), iVar1 == 0)) {
      if ((lVar3 == 0) || (lVar2 = lVar3, *(int *)(lVar3 + 0x10) == 0)) {
        lVar2 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      }
    }
    else if ((lVar3 != 0) && (*(int *)(lVar3 + 0x10) != 0)) {
      lVar4 = func_0x00f834ac(*(int *)(lVar3 + 0x10) + iVar1);
      /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar4,0,lVar2);
      /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar4,iVar1,lVar3);
      lVar2 = lVar4;
    }
    return lVar2;
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4cee & 1) == 0) {
    func_0x00f78a20(0x3d66070);
    func_0x00f78a20(0x3d70b48);
    bRam0000000003eb4cee = 1;
  }
  if (extraout_x1 != 0) {
    lVar3 = /*UnityEngine.Video.VideoPlayer$$get_url*/ func_0x032fb980(extraout_x1,0);
    lVar4 = /*STR('OnErrorReceived: URL: ')*/ lRam0000000003d70b48;
    lVar2 = /*STR(' Error MSG: ')*/ lRam0000000003d66070;
    if ((bRam0000000003eb9469 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb9469 = 1;
    }
    if ((((lVar4 == 0) && (lVar3 == 0)) && (lVar2 == 0)) && (param_3 == 0)) {
      lVar5 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    else {
      if (lVar4 == 0) {
        lVar4 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      }
      if (lVar3 == 0) {
        lVar3 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      }
      if (lVar2 == 0) {
        lVar2 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      }
      if (param_3 == 0) {
        param_3 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      }
      if (((lVar4 == 0) || (lVar3 == 0)) || ((lVar2 == 0 || (param_3 == 0)))) {
        auVar6 = func_0x00f78af4();
        lVar2 = auVar6._8_8_;
        lVar3 = auVar6._0_8_;
        if ((bRam0000000003eb93dc & 1) == 0) {
          func_0x00f78a20(0x3d65ed8);
          bRam0000000003eb93dc = 1;
        }
        lVar4 = /*STR(' ')*/ lRam0000000003d65ed8;
        if (lVar2 == 0) {
          return lVar3;
        }
        if ((bRam0000000003eb9468 & 1) == 0) {
          func_0x00f78a20(0x3d24dd0);
          bRam0000000003eb9468 = 1;
        }
        if (((lVar3 == 0) && (lVar4 == 0)) && (lVar2 == 0)) {
          lVar5 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        else {
          if (lVar3 == 0) {
            lVar3 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
          }
          if (lVar4 == 0) {
            lVar4 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
          }
          if (lVar2 == 0) {
            lVar2 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
          }
          if (((lVar3 == 0) || (lVar4 == 0)) || (lVar2 == 0)) {
            lVar2 = func_0x00f78af4();
            return lVar2;
          }
          lVar5 = func_0x00f834ac(*(int *)(lVar4 + 0x10) + *(int *)(lVar3 + 0x10) +
                                  *(int *)(lVar2 + 0x10));
          /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar5,0,lVar3);
          /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar5,*(undefined4 *)(lVar3 + 0x10),lVar4);
          /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar5,*(int *)(lVar4 + 0x10) + *(int *)(lVar3 + 0x10),lVar2);
        }
        return lVar5;
      }
      lVar5 = func_0x00f834ac(*(int *)(lVar3 + 0x10) + *(int *)(lVar4 + 0x10) +
                              *(int *)(lVar2 + 0x10) + *(int *)(param_3 + 0x10));
      /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar5,0,lVar4);
      /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar5,*(undefined4 *)(lVar4 + 0x10),lVar3);
      /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar5,*(int *)(lVar3 + 0x10) + *(int *)(lVar4 + 0x10),lVar2);
      /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar5,*(int *)(lVar3 + 0x10) + *(int *)(lVar4 + 0x10) + *(int *)(lVar2 + 0x10)
                      ,param_3);
    }
    return lVar5;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4cf1 & 1) == 0) {
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4cf1 = 1;
  }
  *(undefined4 *)(lVar2 + 0x28) = 0x3f4ccccd;
  *(undefined4 *)(lVar2 + 0x54) = 0xffffffff;
  *(undefined8 *)(lVar2 + 0x88) = /*STR('')*/ uRam0000000003d65d08;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar2;
}



// ============================================================
// RVA: 0x1501800 | Atlas.SplashBehaviour.OnErrorReceived
// ============================================================

long Atlas_SplashBehaviour__OnErrorReceived(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4cee & 1) == 0) {
    func_0x00f78a20(0x3d66070);
    func_0x00f78a20(0x3d70b48);
    bRam0000000003eb4cee = 1;
  }
  if (param_2 == 0) {
    lVar2 = func_0x00f78af4();
    if ((bRam0000000003eb4cf1 & 1) == 0) {
      func_0x00f78a20(0x3d65d08);
      bRam0000000003eb4cf1 = 1;
    }
    *(undefined4 *)(lVar2 + 0x28) = 0x3f4ccccd;
    *(undefined4 *)(lVar2 + 0x54) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0x88) = /*STR('')*/ uRam0000000003d65d08;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar2;
  }
  lVar1 = /*UnityEngine.Video.VideoPlayer$$get_url*/ func_0x032fb980(param_2,0);
  lVar4 = /*STR('OnErrorReceived: URL: ')*/ lRam0000000003d70b48;
  lVar2 = /*STR(' Error MSG: ')*/ lRam0000000003d66070;
  if ((bRam0000000003eb9469 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9469 = 1;
  }
  if ((((lVar4 == 0) && (lVar1 == 0)) && (lVar2 == 0)) && (param_3 == 0)) {
    lVar3 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  else {
    if (lVar4 == 0) {
      lVar4 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (lVar1 == 0) {
      lVar1 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (lVar2 == 0) {
      lVar2 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (param_3 == 0) {
      param_3 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (((lVar4 == 0) || (lVar1 == 0)) || ((lVar2 == 0 || (param_3 == 0)))) {
      auVar5 = func_0x00f78af4();
      lVar2 = auVar5._8_8_;
      lVar1 = auVar5._0_8_;
      if ((bRam0000000003eb93dc & 1) == 0) {
        func_0x00f78a20(0x3d65ed8);
        bRam0000000003eb93dc = 1;
      }
      lVar4 = /*STR(' ')*/ lRam0000000003d65ed8;
      if (lVar2 == 0) {
        return lVar1;
      }
      if ((bRam0000000003eb9468 & 1) == 0) {
        func_0x00f78a20(0x3d24dd0);
        bRam0000000003eb9468 = 1;
      }
      if (((lVar1 == 0) && (lVar4 == 0)) && (lVar2 == 0)) {
        lVar3 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      }
      else {
        if (lVar1 == 0) {
          lVar1 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (lVar4 == 0) {
          lVar4 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (lVar2 == 0) {
          lVar2 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (((lVar1 == 0) || (lVar4 == 0)) || (lVar2 == 0)) {
          lVar2 = func_0x00f78af4();
          return lVar2;
        }
        lVar3 = func_0x00f834ac(*(int *)(lVar4 + 0x10) + *(int *)(lVar1 + 0x10) +
                                *(int *)(lVar2 + 0x10));
        /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar3,0,lVar1);
        /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar3,*(undefined4 *)(lVar1 + 0x10),lVar4);
        /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar3,*(int *)(lVar4 + 0x10) + *(int *)(lVar1 + 0x10),lVar2);
      }
      return lVar3;
    }
    lVar3 = func_0x00f834ac(*(int *)(lVar1 + 0x10) + *(int *)(lVar4 + 0x10) + *(int *)(lVar2 + 0x10)
                            + *(int *)(param_3 + 0x10));
    /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar3,0,lVar4);
    /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar3,*(undefined4 *)(lVar4 + 0x10),lVar1);
    /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar3,*(int *)(lVar1 + 0x10) + *(int *)(lVar4 + 0x10),lVar2);
    /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar3,*(int *)(lVar1 + 0x10) + *(int *)(lVar4 + 0x10) + *(int *)(lVar2 + 0x10),
                    param_3);
  }
  return lVar3;
}



// ============================================================
// RVA: 0x150188c | Atlas.SplashBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_SplashBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb4cf1 & 1) == 0) {
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4cf1 = 1;
  }
  *(undefined4 *)(param_1 + 0x28) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x88) = /*STR('')*/ uRam0000000003d65d08;
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



