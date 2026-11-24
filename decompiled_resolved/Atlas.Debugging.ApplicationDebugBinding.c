// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Debugging.ApplicationDebugBinding

// ============================================================
// RVA: 0x144c7a4 | Atlas.Debugging.ApplicationDebugBinding.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x01641488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016415c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01641830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01641954: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01641834) */
/* WARNING: Removing unreachable block (ram,0x0164183c) */
/* WARNING: Removing unreachable block (ram,0x0164185c) */
/* WARNING: Removing unreachable block (ram,0x01641870) */
/* WARNING: Removing unreachable block (ram,0x016415c4) */
/* WARNING: Removing unreachable block (ram,0x016415c8) */
/* WARNING: Removing unreachable block (ram,0x016415ec) */
/* WARNING: Removing unreachable block (ram,0x016415f4) */
/* WARNING: Removing unreachable block (ram,0x01641608) */
/* WARNING: Removing unreachable block (ram,0x01641618) */
/* WARNING: Removing unreachable block (ram,0x01641620) */
/* WARNING: Removing unreachable block (ram,0x01641624) */
/* WARNING: Removing unreachable block (ram,0x0164162c) */
/* WARNING: Removing unreachable block (ram,0x0164166c) */
/* WARNING: Removing unreachable block (ram,0x01641680) */
/* WARNING: Removing unreachable block (ram,0x01641688) */
/* WARNING: Removing unreachable block (ram,0x01641698) */
/* WARNING: Removing unreachable block (ram,0x016416a0) */
/* WARNING: Removing unreachable block (ram,0x01641714) */
/* WARNING: Removing unreachable block (ram,0x01641760) */
/* WARNING: Removing unreachable block (ram,0x0164178c) */
/* WARNING: Removing unreachable block (ram,0x0164187c) */
/* WARNING: Removing unreachable block (ram,0x01641880) */
/* WARNING: Removing unreachable block (ram,0x016417b0) */
/* WARNING: Removing unreachable block (ram,0x016418a4) */
/* WARNING: Removing unreachable block (ram,0x016418a8) */
/* WARNING: Removing unreachable block (ram,0x016417b8) */
/* WARNING: Removing unreachable block (ram,0x016418ac) */
/* WARNING: Removing unreachable block (ram,0x016418e8) */
/* WARNING: Removing unreachable block (ram,0x01641938) */
/* WARNING: Removing unreachable block (ram,0x016416dc) */
/* WARNING: Removing unreachable block (ram,0x016416f4) */
/* WARNING: Removing unreachable block (ram,0x0164148c) */
/* WARNING: Removing unreachable block (ram,0x01641494) */
/* WARNING: Removing unreachable block (ram,0x016414b4) */
/* WARNING: Removing unreachable block (ram,0x016414c8) */
/* WARNING: Removing unreachable block (ram,0x01641958) */
/* WARNING: Removing unreachable block (ram,0x0164195c) */
/* WARNING: Removing unreachable block (ram,0x01641980) */
/* WARNING: Removing unreachable block (ram,0x01641988) */
/* WARNING: Removing unreachable block (ram,0x0164199c) */
/* WARNING: Removing unreachable block (ram,0x016419a8) */
/* WARNING: Removing unreachable block (ram,0x016419bc) */
/* WARNING: Removing unreachable block (ram,0x016419c4) */
/* WARNING: Removing unreachable block (ram,0x016419d4) */
/* WARNING: Removing unreachable block (ram,0x016419dc) */
/* WARNING: Removing unreachable block (ram,0x01641a4c) */
/* WARNING: Removing unreachable block (ram,0x01641a78) */
/* WARNING: Removing unreachable block (ram,0x01641a8c) */
/* WARNING: Removing unreachable block (ram,0x01641ab0) */
/* WARNING: Removing unreachable block (ram,0x01641ac8) */
/* WARNING: Removing unreachable block (ram,0x01641ad0) */
/* WARNING: Removing unreachable block (ram,0x01641af0) */
/* WARNING: Removing unreachable block (ram,0x01641b04) */
/* WARNING: Removing unreachable block (ram,0x01641b08) */
/* WARNING: Removing unreachable block (ram,0x01641b0c) */
/* WARNING: Removing unreachable block (ram,0x01641a18) */
/* WARNING: Removing unreachable block (ram,0x01641a30) */
/* WARNING: Removing unreachable block (ram,0x02951bc0) */
/* WARNING: Removing unreachable block (ram,0x02951bd4) */

long * Atlas_Debugging_ApplicationDebugBinding__Init
                 (long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 ***pppuVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ushort *puVar16;
  ushort *puVar17;
  undefined8 uVar18;
  uint uVar19;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  undefined8 *puVar20;
  long lVar21;
  undefined4 uVar22;
  undefined8 *puVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  ulong uVar27;
  undefined8 uVar28;
  long *plVar29;
  undefined1 *puVar30;
  undefined8 unaff_x23;
  int iVar31;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long lVar32;
  undefined8 unaff_x26;
  ushort *puVar33;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined *puVar34;
  float fVar35;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar36 [16];
  undefined1 auStack_2d0 [8];
  double dStack_2c8;
  long alStack_2c0 [17];
  uint uStack_234;
  undefined8 auStack_230 [2];
  uint uStack_21c;
  long lStack_218;
  uint auStack_20c [3];
  undefined8 auStack_200 [10];
  long alStack_1b0 [2];
  undefined1 auStack_1a0 [8];
  undefined8 uStack_198;
  undefined8 auStack_190 [4];
  long alStack_170 [8];
  long alStack_130 [2];
  undefined1 auStack_120 [12];
  uint uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 ***pppuStack_d0;
  undefined *puStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  long *plStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar28 = 0x3eb4000;
  uVar27 = param_3;
  if ((bRam0000000003eb4743 & 1) == 0) {
    func_0x00f78a20(0x3d436b8);
    func_0x00f78a20(0x3d436c0);
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3bf88);
    func_0x00f78a20(0x3d1de30);
    func_0x00f78a20(0x3d415a0);
    func_0x00f78a20(0x3d1eb00);
    func_0x00f78a20(0x3d41608);
    func_0x00f78a20(0x3d1eb40);
    func_0x00f78a20(0x3d677d8);
    func_0x00f78a20(0x3d678c8);
    func_0x00f78a20(0x3d71a50);
    func_0x00f78a20(0x3d74d90);
    func_0x00f78a20(0x3d67510);
    func_0x00f78a20(0x3d67910);
    func_0x00f78a20(0x3d67800);
    func_0x00f78a20(0x3d678a0);
    bRam0000000003eb4743 = 1;
  }
  uVar19 = (uint)uVar27;
  *(long *)(param_1 + 0x10) = param_2;
  *(ulong *)(param_1 + 0x18) = param_3;
  lVar10 = 0;
  if (param_2 != 0) {
    unaff_x23 = 0x3d43000;
    unaff_x24 = 0x3d41000;
    unaff_x25 = 0x3d71000;
    unaff_x26 = 0x3d1d000;
    unaff_x27 = 0x3d3b000;
    uVar26 = *(uint *)(param_2 + 0x3c);
    uVar28 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<int>_TypeInfo*/ uRam0000000003d1eb00);
    /*UnityEngine.Events.UnityAction<int>$$.ctor*/ func_0x01b7e498(uVar28,param_1,uRam0000000003d436c0,uRam0000000003d415a0);
    uStack_70 = 0;
    uStack_68 = 0;
    uVar11 = /*STR('Reboot Game')*/ uRam0000000003d71a50;
    lVar10 = param_1;
    /*Core.DebugMenu.DebugMenu$$AddButton*/ func_0x0163f880(0x41a00000,param_2,(ulong)uVar26,/*STR('Reboot Game')*/ uRam0000000003d71a50,1,uVar28,param_1,
                    0xffffffff,0xffffffff);
    param_6 = (undefined4)lVar10;
    uVar19 = (uint)uVar11;
    lVar10 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar10,uRam0000000003d3bf88);
    *(long *)(param_1 + 0x20) = lVar10;
    param_3 = (ulong)uVar26;
    if (lVar10 != 0) {
      uVar27 = 0x3d3bfa0;
      uVar11 = uRam0000000003d3bfa0;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar10,/*STR('0')*/ uRam0000000003d67510);
      uVar19 = (uint)uVar11;
      param_3 = 0x3d3bfa0;
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar11 = uRam0000000003d3bfa0;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x20),/*STR('16')*/ uRam0000000003d67800);
        uVar19 = (uint)uVar11;
        param_3 = uVar27;
        if (*(long *)(param_1 + 0x20) != 0) {
          uVar11 = uRam0000000003d3bfa0;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x20),/*STR('33')*/ uRam0000000003d678c8);
          uVar19 = (uint)uVar11;
          if (*(long *)(param_1 + 0x20) != 0) {
            uVar11 = uRam0000000003d3bfa0;
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x20),/*STR('50')*/ uRam0000000003d67910);
            uVar19 = (uint)uVar11;
            if (*(long *)(param_1 + 0x20) != 0) {
              uVar11 = uRam0000000003d3bfa0;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x20),/*STR('100')*/ uRam0000000003d677d8);
              uVar19 = (uint)uVar11;
              if (*(long *)(param_1 + 0x20) != 0) {
                uVar11 = uRam0000000003d3bfa0;
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x20),/*STR('200')*/ uRam0000000003d678a0);
                uVar19 = (uint)uVar11;
                lVar25 = *(long *)(param_1 + 0x10);
                lVar10 = 0;
                if (lVar25 != 0) {
                  uVar27 = (ulong)*(uint *)(lVar25 + 0x3c);
                  plVar29 = *(long **)(param_1 + 0x20);
                  uVar11 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<int, int>_TypeInfo*/ uRam0000000003d1eb40);
                  /*UnityEngine.Events.UnityAction<int, int>$$.ctor*/ func_0x01b7fe04(uVar11,param_1,uRam0000000003d436b8,uRam0000000003d41608);
                  uVar28 = /*STR('Throttle (ms)')*/ uRam0000000003d74d90;
                  if ((bRam0000000003eb5711 & 1) == 0) {
                    func_0x00f78a20(0x3d548e8);
                    func_0x00f78a20(0x3d21150);
                    func_0x00f78a20(0x3d6be98);
                    bRam0000000003eb5711 = 1;
                  }
                  uStack_70 = 0;
                  lStack_88 = 0;
                  lStack_90 = 0;
                  puStack_78 = (undefined *)0x0;
                  puStack_80 = (undefined1 *)0x0;
                  iVar9 = /*Core.DebugMenu.DebugMenu$$TryGetElementCopy*/ func_0x0163f14c(lVar25,uVar27,1,&lStack_90);
                  if (iVar9 != 0) {
                    if (puStack_80 == (undefined1 *)0x0) {
                      func_0x00f78af4();
                      puVar34 = &Core_DebugMenu_DebugMenu__ConfigureDropdown;
                      func_0x00f78e5c();
                      lVar10 = extraout_x1;
                    }
                    else {
                      fVar35 = (float)/*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(puStack_80,0);
                      auVar36 = /*Core.DebugMenu.DebugMenu$$InstantiateUIWithOptionalLabel*/ func_0x01640384(fVar35 + -6.0,0x42480000,0x41a00000,lVar25,6,
                                                /*STR('Dropdown')*/ uRam0000000003d6be98,uVar28);
                      uVar28 = auVar36._0_8_;
                      lVar10 = /*Core.DebugMenu.DebugMenu$$CreateElement<object>*/ func_0x01840b34(lVar25,6,uVar27,uVar28,auVar36._8_8_,param_1,
                                               uRam0000000003d548e8);
                      puVar34 = &UNK_0164148c;
                      param_1 = lVar10;
                    }
                    plStack_e0 = (long *)0x3eb5000;
                    uStack_b8 = 0;
                    uStack_d8 = uVar28;
                    pppuStack_d0 = (undefined1 ***)uVar27;
                    puStack_c8 = (undefined *)param_1;
                    plStack_c0 = (long *)lVar25;
                    plStack_b0 = plVar29;
                    puStack_a8 = (undefined *)uVar11;
                    ppuStack_a0 = (undefined1 **)&stack0xfffffffffffffff0;
                    puStack_98 = puVar34;
                    if ((bRam0000000003eb571b & 1) == 0) {
                      func_0x00f78a20(0x3d535b8,lVar10);
                      func_0x00f78a20(0x3d3c008);
                      func_0x00f78a20(0x3d62a38);
                      func_0x00f78a20(0x3d27098);
                      func_0x00f78a20(0x3d415a0);
                      func_0x00f78a20(0x3d1eb00);
                      func_0x00f78a20(0x3d416e0);
                      bRam0000000003eb571b = 1;
                    }
                    uStack_f0 = 0;
                    uStack_108 = 0;
                    uStack_110 = 0;
                    uStack_f8 = 0;
                    uStack_100 = 0;
                    plVar29 = (long *)func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<>c__DisplayClass82_0_TypeInfo*/ uRam0000000003d27098);
                    return plVar29;
                  }
                  return (long *)0xffffffff;
                }
              }
            }
          }
        }
      }
    }
  }
  lVar25 = func_0x00f78af4();
  puStack_78 = &Atlas_Debugging_ApplicationDebugBinding__DeInit;
  lStack_90 = lVar10;
  lStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4744 & 1) == 0) {
    func_0x00f78a20(0x3d3bfb8);
    bRam0000000003eb4744 = 1;
  }
  plVar29 = (long *)(lVar25 + 0x10);
  if (*plVar29 != 0) {
    uVar19 = 0;
    /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*plVar29,lVar25);
    if (*(long *)(lVar25 + 0x20) != 0) {
      plVar12 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar25 + 0x20),uRam0000000003d3bfb8);
      *plVar29 = 0;
      *(undefined8 *)(lVar25 + 0x18) = 0;
      return plVar12;
    }
  }
  lVar10 = func_0x00f78af4();
  puStack_98 = &Atlas_Debugging_ApplicationDebugBinding__ReBootGame;
  plVar12 = *(long **)(lVar10 + 0x18);
  ppuStack_a0 = &puStack_80;
  if (plVar12 != (long *)0x0) {
    if (*(char *)((long)plVar12 + 0x1c9) != '\0') {
      return plVar12;
    }
    *(undefined1 *)((long)plVar12 + 0x1c9) = 1;
    plStack_b0 = plVar29;
    puStack_a8 = (undefined *)lVar25;
    lVar10 = Atlas_ApplicationBehaviour__RebootGameCoroutine();
    plStack_e0 = plStack_b0;
    plStack_c0 = (long *)uVar28;
    uStack_b8 = param_3;
    if (lVar10 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar18 = func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar18,uVar11,0);
    }
    else {
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar27 = (*pcRam0000000003ec01d0)(plVar12);
      if ((uVar27 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar29 = (long *)(*pcRam0000000003ec01e0)(plVar12,lVar10);
        return plVar29;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar18 = func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar18,uVar11,0);
      plStack_e0 = plVar12;
      param_3 = 0x3ec0000;
    }
    uVar11 = func_0x00f78a24(0x3d5a8a8);
    auVar36 = func_0x00f78ac0(uVar18,uVar11);
    puStack_c8 = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    uStack_f0 = uVar28;
    uStack_e8 = param_3;
    uStack_d8 = uVar18;
    pppuStack_d0 = &ppuStack_a0;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar29 = (long *)(*pcRam0000000003ec01e0)(auVar36._0_8_,auVar36._8_8_);
    return plVar29;
  }
  lVar10 = func_0x00f78af4();
  puStack_a8 = &Atlas_Debugging_ApplicationDebugBinding__OnThrottleOptionChanged;
  pppuStack_d0 = (undefined1 ***)uVar28;
  puStack_c8 = (undefined *)param_3;
  plStack_c0 = plVar29;
  uStack_b8 = lVar25;
  plStack_b0 = (long *)&ppuStack_a0;
  if ((bRam0000000003eb4745 & 1) == 0) {
    plStack_b0 = (long *)&ppuStack_a0;
    func_0x00f78a20(0x3d3c008);
    bRam0000000003eb4745 = 1;
  }
  lVar10 = *(long *)(lVar10 + 0x20);
  if (lVar10 == 0) {
    plVar29 = (long *)func_0x00f78af4();
    return plVar29;
  }
  if (*(uint *)(lVar10 + 0x18) <= uVar19) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  puVar34 = puStack_c8;
  pppuVar7 = pppuStack_d0;
  uVar28 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + (long)(int)uVar19 * 8 + 0x20);
  uVar18 = /*System.Globalization.NumberFormatInfo$$get_CurrentInfo*/ func_0x02953c58(0,0);
  uVar11 = 7;
  uStack_e8 = *(ulong *)PTR_03a5d648;
  plStack_e0 = (long *)unaff_x24;
  uStack_d8 = unaff_x23;
  pppuStack_d0 = pppuVar7;
  puStack_c8 = puVar34;
  if ((bRam0000000003eb9044 & 1) == 0) {
    func_0x00f78a20(0x3d28460,7,uVar18,0);
    bRam0000000003eb9044 = 1;
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (((*(ushort *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  (*(code *)PTR_03a5d628)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460,(long)**(int **)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xb8));
  lVar10 = -(extraout_x1_00 + 0xfU & 0xfffffffffffffff0);
  puVar30 = auStack_120 + lVar10;
  _bzero(puVar30);
  /*System.Number.NumberBuffer$$.ctor*/ func_0x02a64c54(&uStack_110,puVar30,0);
  uStack_114 = 0;
  puVar23 = &uStack_110;
  /*System.Number$$StringToNumber*/ func_0x029516fc(uVar28,7,puVar23,uVar18,0);
  iVar9 = /*System.Number$$NumberToInt32*/ func_0x029512a8(&uStack_110,&uStack_114);
  if (iVar9 == 0) {
    uVar11 = func_0x00f78a24(0x3d76020);
    uVar11 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar11,0);
    func_0x00f78a24(0x3d23b00);
    uVar18 = func_0x00f78aec();
    puVar23 = (undefined8 *)0x0;
    /*System.OverflowException$$.ctor*/ func_0x029653d8(uVar18,uVar11);
    uVar13 = func_0x00f78a24(0x3d5afa0);
    plVar29 = (long *)func_0x00f78ac0(uVar18,uVar13);
  }
  else {
    plVar29 = (long *)(ulong)uStack_114;
    if (*(long *)PTR_03a5d648 == uStack_e8) {
      return plVar29;
    }
  }
  auVar36 = ___stack_chk_fail(plVar29);
  uVar14 = auVar36._8_8_;
  uVar13 = auVar36._0_8_;
  *(undefined8 *)((long)alStack_170 + lVar10 + 0x10) = unaff_x24;
  *(undefined8 *)((long)alStack_170 + lVar10 + 0x18) = 0x3eb9000;
  *(undefined1 **)((long)alStack_170 + lVar10 + 0x20) = puVar30;
  *(undefined8 *)((long)alStack_170 + lVar10 + 0x28) = uVar28;
  *(undefined8 *)((long)alStack_170 + lVar10 + 0x30) = uVar18;
  *(undefined8 *)((long)alStack_170 + lVar10 + 0x38) = uVar11;
  *(long ***)((long)alStack_130 + lVar10) = &plStack_b0;
  *(undefined **)((long)alStack_130 + lVar10 + 8) = &System_Number__ParseInt64;
  *(undefined8 *)((long)alStack_170 + lVar10 + 8) = *(undefined8 *)PTR_03a5d648;
  if ((bRam0000000003eb9045 & 1) == 0) {
    func_0x00f78a20(0x3d28460);
    bRam0000000003eb9045 = 1;
  }
  *(undefined8 *)((long)auStack_190 + lVar10 + 8) = 0;
  *(undefined8 *)((long)auStack_190 + lVar10) = 0;
  *(undefined8 *)((long)auStack_190 + lVar10 + 0x18) = 0;
  *(undefined8 *)((long)auStack_190 + lVar10 + 0x10) = 0;
  if (((*(ushort *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  (*(code *)PTR_03a5d628)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460,(long)**(int **)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xb8));
  puVar30 = auStack_1a0 + (lVar10 - (extraout_x1_01 + 0xfU & 0xfffffffffffffff0));
  _bzero(puVar30);
  /*System.Number.NumberBuffer$$.ctor*/ func_0x02a64c54((long)auStack_190 + lVar10,puVar30,0);
  *(undefined8 *)((long)&uStack_198 + lVar10) = 0;
  lVar25 = (long)auStack_190 + lVar10;
  lVar21 = 0;
  puVar20 = puVar23;
  /*System.Number$$StringToNumber*/ func_0x029516fc(uVar13,uVar14);
  if ((auVar36._8_4_ >> 9 & 1) == 0) {
    iVar9 = /*System.Number$$NumberToInt64*/ func_0x02951334((long)auStack_190 + lVar10,(long)&uStack_198 + lVar10);
    if (iVar9 == 0) goto code_r0x02951da0;
    plVar29 = *(long **)((long)&uStack_198 + lVar10);
code_r0x02951d70:
    if (*(long *)PTR_03a5d648 == *(long *)((long)alStack_170 + lVar10 + 8)) {
      return plVar29;
    }
  }
  else {
    *(undefined8 *)((long)alStack_170 + lVar10) = 0;
    uVar27 = /*System.Number$$HexNumberToUInt64*/ func_0x029511fc((long)auStack_190 + lVar10,(long)alStack_170 + lVar10);
    if ((uVar27 & 1) != 0) {
      plVar29 = *(long **)((long)alStack_170 + lVar10);
      goto code_r0x02951d70;
    }
code_r0x02951da0:
    uVar28 = func_0x00f78a24(0x3d76028);
    uVar14 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar28,0);
    func_0x00f78a24(0x3d23b00);
    puVar23 = (undefined8 *)func_0x00f78aec();
    lVar25 = 0;
    /*System.OverflowException$$.ctor*/ func_0x029653d8(puVar23,uVar14);
    uVar28 = func_0x00f78a24(0x3d5afa8);
    plVar29 = (long *)func_0x00f78ac0(puVar23,uVar28);
  }
  auVar36 = ___stack_chk_fail(plVar29);
  *(undefined8 *)(puVar30 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar30 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar30 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar30 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar30 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar30 + -0x38) = 0x3eb9000;
  *(undefined1 **)(puVar30 + -0x30) = puVar30;
  *(undefined8 *)(puVar30 + -0x28) = uVar13;
  *(undefined8 **)(puVar30 + -0x20) = puVar23;
  *(undefined8 *)(puVar30 + -0x18) = uVar14;
  *(long *)(puVar30 + -0x10) = (long)alStack_130 + lVar10;
  *(undefined **)(puVar30 + -8) = &System_Number__ParseNumber;
  *(undefined4 *)(puVar30 + -0x7c) = param_6;
  *(undefined8 **)(puVar30 + -0x78) = puVar20;
  *(undefined4 *)(lVar25 + 0x14) = 0;
  *(undefined1 *)(lVar25 + 0x18) = 0;
  uVar19 = auVar36._8_4_;
  if ((uVar19 >> 8 & 1) == 0) {
    if (lVar21 == 0) {
code_r0x0295237c:
      lVar10 = lVar25;
      auVar36 = func_0x00f78af4();
      lVar32 = auVar36._0_8_;
      *(undefined8 *)(puVar30 + -0xf0) = unaff_d9;
      *(undefined8 *)(puVar30 + -0xe8) = unaff_d8;
      *(long *)(puVar30 + -0xe0) = lVar21;
      *(undefined8 *)(puVar30 + -0xd8) = uVar13;
      *(long *)(puVar30 + -0xd0) = lVar25;
      *(undefined8 *)(puVar30 + -200) = uVar14;
      *(undefined1 **)(puVar30 + -0xc0) = puVar30 + -0x10;
      *(undefined **)(puVar30 + -0xb8) = &System_Number__ParseSingle;
      *(undefined8 *)(puVar30 + -0xf8) = *(undefined8 *)PTR_03a5d648;
      if ((bRam0000000003eb9046 & 1) == 0) {
        func_0x00f78a20(0x3d28460);
        bRam0000000003eb9046 = 1;
      }
      *(undefined8 *)(puVar30 + -0x118) = 0;
      *(undefined8 *)(puVar30 + -0x120) = 0;
      *(undefined8 *)(puVar30 + -0x108) = 0;
      *(undefined8 *)(puVar30 + -0x110) = 0;
      if (lVar32 == 0) {
        func_0x00f78a24(0x3d1fcf0);
        uVar28 = func_0x00f78aec();
        uVar11 = func_0x00f78a24(0x3d7c5a0);
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar28,uVar11,0);
        uVar11 = func_0x00f78a24(0x3d5afb0);
        func_0x00f78ac0(uVar28,uVar11);
        goto code_r0x029525d4;
      }
      if (((*(ushort *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      (*(code *)PTR_03a5d628)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460,(long)**(int **)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xb8));
      _bzero(puVar30 + (-0x130 - (extraout_x1_02 + 0xfU & 0xfffffffffffffff0)));
      /*System.Number.NumberBuffer$$.ctor*/ func_0x02a64c54(puVar30 + -0x120,
                      puVar30 + (-0x130 - (extraout_x1_02 + 0xfU & 0xfffffffffffffff0)),0);
      *(undefined8 *)(puVar30 + -0x128) = 0;
      uVar27 = /*System.Number$$TryStringToNumber*/ func_0x029532ec(lVar32,auVar36._8_8_,puVar30 + -0x120,0,lVar10,0);
      if ((uVar27 & 1) == 0) goto code_r0x029524ec;
      uVar28 = /*System.Number.NumberBuffer$$PackForNative*/ func_0x02a64c68(puVar30 + -0x120,0);
      uVar27 = func_0x00f86804(uVar28,puVar30 + -0x128);
      if (((uVar27 & 1) != 0) &&
         (plVar29 = (long *)/*System.Single$$IsInfinity*/ func_0x029ba5d4((float)*(double *)(puVar30 + -0x128),0),
         (int)plVar29 == 0)) goto code_r0x02952558;
      uVar28 = func_0x00f78a24(0x3d75fe8);
      lVar10 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar28,0);
      func_0x00f78a24(0x3d23b00);
      lVar32 = func_0x00f78aec();
      /*System.OverflowException$$.ctor*/ func_0x029653d8(lVar32,lVar10,0);
      do {
        uVar28 = func_0x00f78a24(0x3d5afb0);
        func_0x00f78ac0(lVar32,uVar28);
code_r0x029524ec:
        lVar25 = /*System.String$$Trim*/ func_0x029bab94(lVar32,0);
        if ((lVar10 == 0) || (lVar25 == 0)) {
code_r0x029525d4:
          func_0x00f78af4();
code_r0x029525d8:
          ___stack_chk_fail();
        }
        else {
          plVar29 = (long *)/*System.String$$Equals*/ func_0x029bab9c(lVar25,*(undefined8 *)(lVar10 + 0x70),0);
          if (((((ulong)plVar29 & 1) != 0) ||
              (plVar29 = (long *)/*System.String$$Equals*/ func_0x029bab9c(lVar25,*(undefined8 *)(lVar10 + 0x78),0),
              ((ulong)plVar29 & 1) != 0)) ||
             (plVar29 = (long *)/*System.String$$Equals*/ func_0x029bab9c(lVar25,*(undefined8 *)(lVar10 + 0x68),0),
             ((ulong)plVar29 & 1) != 0)) {
code_r0x02952558:
            if (*(long *)PTR_03a5d648 == *(long *)(puVar30 + -0xf8)) {
              return plVar29;
            }
            goto code_r0x029525d8;
          }
        }
        uVar28 = func_0x00f78a24(0x3d6df88);
        lVar10 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar28,0);
        func_0x00f78a24(0x3d219b8);
        lVar32 = func_0x00f78aec();
        /*System.FormatException$$.ctor*/ func_0x02ad68a8(lVar32,lVar10,0);
      } while( true );
    }
    *(undefined8 *)(puVar30 + -0xa8) = 0;
    *(undefined8 *)(puVar30 + -0xa0) = 0;
    lVar32 = 0;
    lVar10 = 0;
    puVar23 = (undefined8 *)(lVar21 + 0x38);
    puVar20 = (undefined8 *)(lVar21 + 0x40);
  }
  else {
    if (lVar21 == 0) goto code_r0x0295237c;
    lVar10 = *(long *)(lVar21 + 0x58);
    lVar32 = *(long *)(lVar21 + 0x60);
    puVar23 = (undefined8 *)(lVar21 + 0x50);
    puVar20 = (undefined8 *)(lVar21 + 0x48);
    uVar28 = *(undefined8 *)(lVar21 + 0x40);
    *(undefined8 *)(puVar30 + -0xa8) = *(undefined8 *)(lVar21 + 0x38);
    *(undefined8 *)(puVar30 + -0xa0) = uVar28;
  }
  uVar26 = 0;
  bVar6 = false;
  *(uint *)(puVar30 + -0x94) = uVar19 >> 8 & 1;
  uVar28 = *puVar20;
  *(undefined8 *)(puVar30 + -0x90) = *puVar23;
  *(undefined8 *)(puVar30 + -0x88) = uVar28;
  uVar24 = 0;
  if (*(long *)(puVar30 + -0x78) != 0) {
    uVar24 = uVar19 >> 9 & 1;
  }
  uVar22 = 0x32;
  if (*(long *)(puVar30 + -0x78) != 0) {
    uVar22 = 0x7fffffff;
  }
  *(uint *)(puVar30 + -0x6c) = uVar24;
  *(undefined4 *)(puVar30 + -0x68) = uVar22;
  *(long **)(puVar30 + -0xb0) = auVar36._0_8_;
  puVar33 = (ushort *)*auVar36._0_8_;
  do {
    bVar4 = false;
    bVar8 = false;
    bVar5 = false;
    uVar3 = *puVar33;
    if (((auVar36._8_8_ & 1) == 0) ||
       ((uVar3 != 0x20 && (ushort)(uVar3 - 0xe) < 0xfffc) &&
        (uVar3 == 0x20 || (ushort)(uVar3 - 0xe) != 0xfffb))) {
      uVar24 = uVar26 & 1;
      if (((uVar19 >> 2 & 1) != 0) && (uVar24 == 0)) {
code_r0x02951f04:
        lVar15 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar33,*(undefined8 *)(lVar21 + 0x28));
        if (lVar15 == 0) {
          lVar15 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar33,*(undefined8 *)(lVar21 + 0x30));
          if (lVar15 == 0) {
            uVar24 = 0;
            goto code_r0x02951f40;
          }
          uVar26 = uVar26 | 1;
          *(undefined1 *)(lVar25 + 0x18) = 1;
        }
        else {
          uVar26 = uVar26 | 1;
        }
        goto code_r0x02951f94;
      }
code_r0x02951f40:
      if (((uVar19 >> 4 & 1) == 0) || (uVar3 != 0x28 || uVar24 != 0)) goto code_r0x02951f60;
      uVar26 = uVar26 | 3;
      bVar6 = true;
      *(undefined1 *)(lVar25 + 0x18) = 1;
    }
    else if (((uVar26 & 0x21) == 1) && (*(int *)(lVar21 + 0xbc) != 2)) {
      if (((uVar19 >> 2 & 1) != 0) && ((uVar26 & 1) == 0)) goto code_r0x02951f04;
code_r0x02951f60:
      if (((lVar10 == 0) || (lVar15 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar33,lVar10), lVar15 == 0)) &&
         ((lVar32 == 0 || (lVar15 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar33,lVar32), lVar15 == 0)))) break;
      lVar32 = 0;
      lVar10 = 0;
      uVar26 = uVar26 | 0x20;
code_r0x02951f94:
      puVar33 = (ushort *)(lVar15 + -2);
    }
    puVar33 = puVar33 + 1;
  } while( true );
  *(undefined4 *)(puVar30 + -100) = 0;
  iVar9 = 0;
  iVar31 = *(int *)(puVar30 + -0x6c);
  do {
    uVar24 = (uint)uVar3;
    if (((uVar24 - 0x30 & 0xffff) < 10) ||
       ((((uVar19 >> 9 & 1) != 0 && (uVar24 - 0x41 < 0x26)) &&
        ((1L << ((ulong)(uVar24 - 0x41) & 0x3f) & 0x3f0000003fU) != 0)))) {
      bVar8 = bVar4;
      if (uVar24 != 0x30) {
        bVar8 = true;
      }
      if (bVar8 || iVar31 != 0) {
        if (iVar9 < *(int *)(puVar30 + -0x68)) {
          if (*(long *)(puVar30 + -0x78) == 0) {
            *(ushort *)(*(long *)(lVar25 + 8) + (long)iVar9 * 2) = uVar3;
            iVar9 = iVar9 + 1;
          }
          else {
            /*System.Text.StringBuilder$$Append*/ func_0x029d3800(*(long *)(puVar30 + -0x78),uVar24,0);
          }
          iVar2 = iVar9;
          if (uVar24 == 0x30 && *(int *)(puVar30 + -0x7c) == 0) {
            iVar2 = *(int *)(puVar30 + -100);
          }
          *(int *)(puVar30 + -100) = iVar2;
        }
        if (!bVar5) {
          *(int *)(lVar25 + 0x14) = *(int *)(lVar25 + 0x14) + 1;
        }
        bVar4 = true;
        bVar8 = true;
      }
      else {
        bVar8 = true;
        if (bVar5) {
          *(int *)(lVar25 + 0x14) = *(int *)(lVar25 + 0x14) + -1;
        }
      }
    }
    else {
      if ((((uVar19 >> 5 & 1) == 0) || (bVar5)) ||
         ((lVar15 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar33,*(undefined8 *)(puVar30 + -0x90)), lVar15 == 0 &&
          (((*(uint *)(puVar30 + -0x94) & (uint)((uVar26 & 0x20) == 0)) != 1 ||
           (lVar15 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar33,*(undefined8 *)(puVar30 + -0xa8)), lVar15 == 0)))))) {
        if (((uVar19 >> 6 & 1) == 0) ||
           (((!bVar8 || (bVar5)) ||
            ((lVar15 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar33,*(undefined8 *)(puVar30 + -0x88)), lVar15 == 0 &&
             (((*(uint *)(puVar30 + -0x94) & (uint)((uVar26 & 0x20) == 0)) != 1 ||
              (lVar15 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar33,*(undefined8 *)(puVar30 + -0xa0)), lVar15 == 0))))))
           )) goto code_r0x02952140;
      }
      else {
        bVar5 = true;
      }
      puVar33 = (ushort *)(lVar15 + -2);
      iVar31 = *(int *)(puVar30 + -0x6c);
    }
    puVar33 = puVar33 + 1;
    uVar3 = *puVar33;
  } while( true );
code_r0x02952324:
  if (9 < (uVar24 - 0x30 & 0xffff)) goto code_r0x02952354;
  goto code_r0x02952308;
code_r0x02952250:
  if (!bVar6) {
    puVar23 = *(undefined8 **)(puVar30 + -0xb0);
    if (!bVar4) {
      if ((*(uint *)(puVar30 + -0x7c) & 1) == 0) {
        *(undefined4 *)(lVar25 + 0x14) = 0;
      }
      if (!bVar5) {
        *(undefined1 *)(lVar25 + 0x18) = 0;
      }
    }
    plVar29 = (long *)((long)&MACH_HEADER.magic + 1);
    goto code_r0x02952280;
  }
  goto code_r0x02952278;
code_r0x02952140:
  iVar9 = *(int *)(puVar30 + -100);
  *(int *)(lVar25 + 0x10) = iVar9;
  if (*(long *)(puVar30 + -0x78) == 0) {
    *(undefined2 *)(*(long *)(lVar25 + 8) + (long)iVar9 * 2) = 0;
  }
  else {
    /*System.Text.StringBuilder$$Append*/ func_0x029d3800(*(long *)(puVar30 + -0x78),0,0);
  }
  if (bVar8) {
    if (((uVar24 | 0x20) == 0x65) && ((uVar19 >> 7 & 1) != 0)) {
      puVar17 = puVar33 + 1;
      uVar3 = *puVar17;
      puVar16 = (ushort *)/*System.Number$$MatchChars*/ func_0x029514c4(puVar17,*(undefined8 *)(lVar21 + 0x28));
      bVar8 = puVar16 == (ushort *)0x0;
      if ((puVar16 == (ushort *)0x0) &&
         (puVar16 = (ushort *)/*System.Number$$MatchChars*/ func_0x029514c4(puVar17,*(undefined8 *)(lVar21 + 0x30)),
         puVar16 == (ushort *)0x0)) {
        bVar8 = false;
      }
      else {
        puVar17 = puVar16;
        uVar3 = *puVar17;
      }
      uVar24 = (uint)uVar3;
      if (0xfff5 < (uVar24 - 0x3a & 0xffff)) {
        iVar9 = 0;
code_r0x02952308:
        iVar9 = iVar9 * 10 + uVar24 + -0x30;
        puVar17 = puVar17 + 1;
        uVar24 = (uint)*puVar17;
        if (iVar9 < 0x3e9) goto code_r0x02952324;
        uVar1 = uVar24 - 0x30 & 0xffff;
        while (uVar1 < 10) {
          puVar17 = puVar17 + 1;
          uVar24 = (uint)*puVar17;
          uVar1 = uVar24 - 0x30;
        }
        iVar9 = 9999;
code_r0x02952354:
        iVar31 = -iVar9;
        if (!bVar8) {
          iVar31 = iVar9;
        }
        *(int *)(lVar25 + 0x14) = *(int *)(lVar25 + 0x14) + iVar31;
        puVar33 = puVar17;
        goto code_r0x029521a0;
      }
      uVar24 = (uint)*puVar33;
    }
code_r0x029521a0:
    do {
      if (((uVar19 >> 1 & 1) == 0) || (uVar24 != 0x20 && (uVar24 - 0xe & 0xffff) < 0xfffb)) {
        if (((uVar19 >> 3 & 1) == 0) || ((uVar26 & 1) != 0)) {
code_r0x029521fc:
          if ((uVar24 == 0x29) && (bVar6)) {
            uVar26 = uVar26 & 0xfffffffd;
            bVar6 = false;
            goto code_r0x02952248;
          }
          if (((lVar10 == 0) || (lVar15 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar33,lVar10), lVar15 == 0)) &&
             ((lVar32 == 0 || (lVar15 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar33,lVar32), lVar15 == 0))))
          goto code_r0x02952250;
          lVar32 = 0;
          lVar10 = 0;
        }
        else {
          lVar15 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar33,*(undefined8 *)(lVar21 + 0x28));
          if (lVar15 == 0) {
            lVar15 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar33,*(undefined8 *)(lVar21 + 0x30));
            if (lVar15 == 0) goto code_r0x029521fc;
            uVar26 = uVar26 | 1;
            *(undefined1 *)(lVar25 + 0x18) = 1;
          }
          else {
            uVar26 = uVar26 | 1;
          }
        }
        puVar33 = (ushort *)(lVar15 + -2);
      }
code_r0x02952248:
      uVar24 = (uint)puVar33[1];
      puVar33 = puVar33 + 1;
    } while( true );
  }
code_r0x02952278:
  plVar29 = (long *)0x0;
  puVar23 = *(undefined8 **)(puVar30 + -0xb0);
code_r0x02952280:
  *puVar23 = puVar33;
  return plVar29;
}



// ============================================================
// RVA: 0x144ca90 | Atlas.Debugging.ApplicationDebugBinding.DeInit
// ============================================================

/* WARNING: Removing unreachable block (ram,0x02951bc0) */
/* WARNING: Removing unreachable block (ram,0x02951bd4) */

ulong Atlas_Debugging_ApplicationDebugBinding__DeInit
                (long param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ushort *puVar14;
  ushort *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uVar20;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  undefined8 *puVar21;
  long lVar22;
  undefined4 uVar23;
  undefined8 *puVar24;
  uint uVar25;
  long *plVar26;
  uint uVar27;
  undefined1 *puVar28;
  int iVar29;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long lVar30;
  undefined8 unaff_x26;
  ushort *puVar31;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long lVar32;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar33 [16];
  undefined1 auStack_260 [8];
  double dStack_258;
  long alStack_250 [17];
  uint uStack_1c4;
  undefined8 auStack_1c0 [2];
  uint uStack_1ac;
  long lStack_1a8;
  uint auStack_19c [3];
  undefined8 auStack_190 [10];
  long alStack_140 [2];
  undefined1 auStack_130 [8];
  ulong uStack_128;
  undefined8 auStack_120 [4];
  ulong auStack_100 [8];
  long alStack_c0 [2];
  undefined1 auStack_b0 [12];
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb4744 & 1) == 0) {
    func_0x00f78a20(0x3d3bfb8);
    bRam0000000003eb4744 = 1;
  }
  plVar26 = (long *)(param_1 + 0x10);
  if (*plVar26 != 0) {
    param_3 = 0;
    /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*plVar26,param_1);
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar9 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x20),uRam0000000003d3bfb8);
      *plVar26 = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      return uVar9;
    }
  }
  lVar10 = func_0x00f78af4();
  puStack_28 = &Atlas_Debugging_ApplicationDebugBinding__ReBootGame;
  uVar9 = *(ulong *)(lVar10 + 0x18);
  puStack_30 = &stack0xfffffffffffffff0;
  if (uVar9 != 0) {
    if (*(char *)(uVar9 + 0x1c9) != '\0') {
      return uVar9;
    }
    *(undefined1 *)(uVar9 + 0x1c9) = 1;
    plStack_40 = plVar26;
    puStack_38 = (undefined *)param_1;
    lVar10 = Atlas_ApplicationBehaviour__RebootGameCoroutine();
    if (lVar10 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar18 = func_0x00f78aec();
      uVar19 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar18,uVar19,0);
    }
    else {
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar17 = (*pcRam0000000003ec01d0)(uVar9);
      if ((uVar17 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (*pcRam0000000003ec01e0)(uVar9,lVar10);
        return uVar9;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar18 = func_0x00f78aec();
      uVar19 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar18,uVar19,0);
    }
    uVar19 = func_0x00f78a24(0x3d5a8a8);
    auVar33 = func_0x00f78ac0(uVar18,uVar19);
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*pcRam0000000003ec01e0)(auVar33._0_8_,auVar33._8_8_);
    return uVar9;
  }
  lVar10 = func_0x00f78af4();
  puStack_38 = &Atlas_Debugging_ApplicationDebugBinding__OnThrottleOptionChanged;
  plStack_40 = (long *)&puStack_30;
  if ((bRam0000000003eb4745 & 1) == 0) {
    plStack_40 = (long *)&puStack_30;
    func_0x00f78a20(0x3d3c008);
    bRam0000000003eb4745 = 1;
  }
  lVar10 = *(long *)(lVar10 + 0x20);
  if (lVar10 == 0) {
    uVar9 = func_0x00f78af4();
    return uVar9;
  }
  if (*(uint *)(lVar10 + 0x18) <= param_3) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  uVar19 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + (long)(int)param_3 * 8 + 0x20);
  uVar16 = /*System.Globalization.NumberFormatInfo$$get_CurrentInfo*/ func_0x02953c58(0,0);
  uVar18 = 7;
  lVar10 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb9044 & 1) == 0) {
    func_0x00f78a20(0x3d28460,7,uVar16,0);
    bRam0000000003eb9044 = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (((*(ushort *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  (*(code *)PTR_03a5d628)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460,(long)**(int **)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xb8));
  lVar32 = -(extraout_x1 + 0xfU & 0xfffffffffffffff0);
  puVar28 = auStack_b0 + lVar32;
  _bzero(puVar28);
  /*System.Number.NumberBuffer$$.ctor*/ func_0x02a64c54(&uStack_a0,puVar28,0);
  uStack_a4 = 0;
  puVar24 = &uStack_a0;
  /*System.Number$$StringToNumber*/ func_0x029516fc(uVar19,7,puVar24,uVar16,0);
  iVar8 = /*System.Number$$NumberToInt32*/ func_0x029512a8(&uStack_a0,&uStack_a4);
  if (iVar8 == 0) {
    uVar18 = func_0x00f78a24(0x3d76020);
    uVar18 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar18,0);
    func_0x00f78a24(0x3d23b00);
    uVar16 = func_0x00f78aec();
    puVar24 = (undefined8 *)0x0;
    /*System.OverflowException$$.ctor*/ func_0x029653d8(uVar16,uVar18);
    uVar11 = func_0x00f78a24(0x3d5afa0);
    uVar9 = func_0x00f78ac0(uVar16,uVar11);
  }
  else {
    uVar9 = (ulong)uStack_a4;
    if (*(long *)PTR_03a5d648 == lVar10) {
      return uVar9;
    }
  }
  auVar33 = ___stack_chk_fail(uVar9);
  uVar12 = auVar33._8_8_;
  uVar11 = auVar33._0_8_;
  *(undefined8 *)((long)auStack_100 + lVar32 + 0x10) = unaff_x24;
  *(undefined8 *)((long)auStack_100 + lVar32 + 0x18) = 0x3eb9000;
  *(undefined1 **)((long)auStack_100 + lVar32 + 0x20) = puVar28;
  *(undefined8 *)((long)auStack_100 + lVar32 + 0x28) = uVar19;
  *(undefined8 *)((long)auStack_100 + lVar32 + 0x30) = uVar16;
  *(undefined8 *)((long)auStack_100 + lVar32 + 0x38) = uVar18;
  *(long ***)((long)alStack_c0 + lVar32) = &plStack_40;
  *(undefined **)((long)alStack_c0 + lVar32 + 8) = &System_Number__ParseInt64;
  *(undefined8 *)((long)auStack_100 + lVar32 + 8) = *(undefined8 *)PTR_03a5d648;
  if ((bRam0000000003eb9045 & 1) == 0) {
    func_0x00f78a20(0x3d28460);
    bRam0000000003eb9045 = 1;
  }
  *(undefined8 *)((long)auStack_120 + lVar32 + 8) = 0;
  *(undefined8 *)((long)auStack_120 + lVar32) = 0;
  *(undefined8 *)((long)auStack_120 + lVar32 + 0x18) = 0;
  *(undefined8 *)((long)auStack_120 + lVar32 + 0x10) = 0;
  if (((*(ushort *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  (*(code *)PTR_03a5d628)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460,(long)**(int **)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xb8));
  puVar28 = auStack_130 + (lVar32 - (extraout_x1_00 + 0xfU & 0xfffffffffffffff0));
  _bzero(puVar28);
  /*System.Number.NumberBuffer$$.ctor*/ func_0x02a64c54((long)auStack_120 + lVar32,puVar28,0);
  *(undefined8 *)((long)&uStack_128 + lVar32) = 0;
  lVar10 = (long)auStack_120 + lVar32;
  lVar22 = 0;
  puVar21 = puVar24;
  /*System.Number$$StringToNumber*/ func_0x029516fc(uVar11,uVar12);
  if ((auVar33._8_4_ >> 9 & 1) == 0) {
    iVar8 = /*System.Number$$NumberToInt64*/ func_0x02951334((long)auStack_120 + lVar32,(long)&uStack_128 + lVar32);
    if (iVar8 != 0) {
      uVar9 = *(ulong *)((long)&uStack_128 + lVar32);
      goto code_r0x02951d70;
    }
code_r0x02951da0:
    uVar19 = func_0x00f78a24(0x3d76028);
    uVar12 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar19,0);
    func_0x00f78a24(0x3d23b00);
    puVar24 = (undefined8 *)func_0x00f78aec();
    lVar10 = 0;
    /*System.OverflowException$$.ctor*/ func_0x029653d8(puVar24,uVar12);
    uVar19 = func_0x00f78a24(0x3d5afa8);
    uVar9 = func_0x00f78ac0(puVar24,uVar19);
  }
  else {
    *(undefined8 *)((long)auStack_100 + lVar32) = 0;
    uVar9 = /*System.Number$$HexNumberToUInt64*/ func_0x029511fc((long)auStack_120 + lVar32,(long)auStack_100 + lVar32);
    if ((uVar9 & 1) == 0) goto code_r0x02951da0;
    uVar9 = *(ulong *)((long)auStack_100 + lVar32);
code_r0x02951d70:
    if (*(long *)PTR_03a5d648 == *(long *)((long)auStack_100 + lVar32 + 8)) {
      return uVar9;
    }
  }
  auVar33 = ___stack_chk_fail(uVar9);
  *(undefined8 *)(puVar28 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar28 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar28 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar28 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar28 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar28 + -0x38) = 0x3eb9000;
  *(undefined1 **)(puVar28 + -0x30) = puVar28;
  *(undefined8 *)(puVar28 + -0x28) = uVar11;
  *(undefined8 **)(puVar28 + -0x20) = puVar24;
  *(undefined8 *)(puVar28 + -0x18) = uVar12;
  *(long *)(puVar28 + -0x10) = (long)alStack_c0 + lVar32;
  *(undefined **)(puVar28 + -8) = &System_Number__ParseNumber;
  *(undefined4 *)(puVar28 + -0x7c) = param_6;
  *(undefined8 **)(puVar28 + -0x78) = puVar21;
  *(undefined4 *)(lVar10 + 0x14) = 0;
  *(undefined1 *)(lVar10 + 0x18) = 0;
  uVar20 = auVar33._8_4_;
  if ((uVar20 >> 8 & 1) == 0) {
    if (lVar22 == 0) {
code_r0x0295237c:
      lVar32 = lVar10;
      auVar33 = func_0x00f78af4();
      lVar30 = auVar33._0_8_;
      *(undefined8 *)(puVar28 + -0xf0) = unaff_d9;
      *(undefined8 *)(puVar28 + -0xe8) = unaff_d8;
      *(long *)(puVar28 + -0xe0) = lVar22;
      *(undefined8 *)(puVar28 + -0xd8) = uVar11;
      *(long *)(puVar28 + -0xd0) = lVar10;
      *(undefined8 *)(puVar28 + -200) = uVar12;
      *(undefined1 **)(puVar28 + -0xc0) = puVar28 + -0x10;
      *(undefined **)(puVar28 + -0xb8) = &System_Number__ParseSingle;
      *(undefined8 *)(puVar28 + -0xf8) = *(undefined8 *)PTR_03a5d648;
      if ((bRam0000000003eb9046 & 1) == 0) {
        func_0x00f78a20(0x3d28460);
        bRam0000000003eb9046 = 1;
      }
      *(undefined8 *)(puVar28 + -0x118) = 0;
      *(undefined8 *)(puVar28 + -0x120) = 0;
      *(undefined8 *)(puVar28 + -0x108) = 0;
      *(undefined8 *)(puVar28 + -0x110) = 0;
      if (lVar30 == 0) {
        func_0x00f78a24(0x3d1fcf0);
        uVar19 = func_0x00f78aec();
        uVar18 = func_0x00f78a24(0x3d7c5a0);
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar18,0);
        uVar18 = func_0x00f78a24(0x3d5afb0);
        func_0x00f78ac0(uVar19,uVar18);
        goto code_r0x029525d4;
      }
      if (((*(ushort *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      (*(code *)PTR_03a5d628)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460,(long)**(int **)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xb8));
      _bzero(puVar28 + (-0x130 - (extraout_x1_01 + 0xfU & 0xfffffffffffffff0)));
      /*System.Number.NumberBuffer$$.ctor*/ func_0x02a64c54(puVar28 + -0x120,
                      puVar28 + (-0x130 - (extraout_x1_01 + 0xfU & 0xfffffffffffffff0)),0);
      *(undefined8 *)(puVar28 + -0x128) = 0;
      uVar9 = /*System.Number$$TryStringToNumber*/ func_0x029532ec(lVar30,auVar33._8_8_,puVar28 + -0x120,0,lVar32,0);
      if ((uVar9 & 1) == 0) goto code_r0x029524ec;
      uVar19 = /*System.Number.NumberBuffer$$PackForNative*/ func_0x02a64c68(puVar28 + -0x120,0);
      uVar9 = func_0x00f86804(uVar19,puVar28 + -0x128);
      if (((uVar9 & 1) != 0) &&
         (uVar9 = /*System.Single$$IsInfinity*/ func_0x029ba5d4((float)*(double *)(puVar28 + -0x128),0), (int)uVar9 == 0))
      goto code_r0x02952558;
      uVar19 = func_0x00f78a24(0x3d75fe8);
      lVar32 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar19,0);
      func_0x00f78a24(0x3d23b00);
      lVar30 = func_0x00f78aec();
      /*System.OverflowException$$.ctor*/ func_0x029653d8(lVar30,lVar32,0);
      do {
        uVar19 = func_0x00f78a24(0x3d5afb0);
        func_0x00f78ac0(lVar30,uVar19);
code_r0x029524ec:
        lVar10 = /*System.String$$Trim*/ func_0x029bab94(lVar30,0);
        if ((lVar32 == 0) || (lVar10 == 0)) {
code_r0x029525d4:
          func_0x00f78af4();
code_r0x029525d8:
          ___stack_chk_fail();
        }
        else {
          uVar9 = /*System.String$$Equals*/ func_0x029bab9c(lVar10,*(undefined8 *)(lVar32 + 0x70),0);
          if ((((uVar9 & 1) != 0) ||
              (uVar9 = /*System.String$$Equals*/ func_0x029bab9c(lVar10,*(undefined8 *)(lVar32 + 0x78),0), (uVar9 & 1) != 0))
             || (uVar9 = /*System.String$$Equals*/ func_0x029bab9c(lVar10,*(undefined8 *)(lVar32 + 0x68),0), (uVar9 & 1) != 0)
             ) {
code_r0x02952558:
            if (*(long *)PTR_03a5d648 == *(long *)(puVar28 + -0xf8)) {
              return uVar9;
            }
            goto code_r0x029525d8;
          }
        }
        uVar19 = func_0x00f78a24(0x3d6df88);
        lVar32 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar19,0);
        func_0x00f78a24(0x3d219b8);
        lVar30 = func_0x00f78aec();
        /*System.FormatException$$.ctor*/ func_0x02ad68a8(lVar30,lVar32,0);
      } while( true );
    }
    *(undefined8 *)(puVar28 + -0xa8) = 0;
    *(undefined8 *)(puVar28 + -0xa0) = 0;
    lVar30 = 0;
    lVar32 = 0;
    puVar24 = (undefined8 *)(lVar22 + 0x38);
    puVar21 = (undefined8 *)(lVar22 + 0x40);
  }
  else {
    if (lVar22 == 0) goto code_r0x0295237c;
    lVar32 = *(long *)(lVar22 + 0x58);
    lVar30 = *(long *)(lVar22 + 0x60);
    puVar24 = (undefined8 *)(lVar22 + 0x50);
    puVar21 = (undefined8 *)(lVar22 + 0x48);
    uVar19 = *(undefined8 *)(lVar22 + 0x40);
    *(undefined8 *)(puVar28 + -0xa8) = *(undefined8 *)(lVar22 + 0x38);
    *(undefined8 *)(puVar28 + -0xa0) = uVar19;
  }
  uVar27 = 0;
  bVar6 = false;
  *(uint *)(puVar28 + -0x94) = uVar20 >> 8 & 1;
  uVar19 = *puVar21;
  *(undefined8 *)(puVar28 + -0x90) = *puVar24;
  *(undefined8 *)(puVar28 + -0x88) = uVar19;
  uVar25 = 0;
  if (*(long *)(puVar28 + -0x78) != 0) {
    uVar25 = uVar20 >> 9 & 1;
  }
  uVar23 = 0x32;
  if (*(long *)(puVar28 + -0x78) != 0) {
    uVar23 = 0x7fffffff;
  }
  *(uint *)(puVar28 + -0x6c) = uVar25;
  *(undefined4 *)(puVar28 + -0x68) = uVar23;
  *(long **)(puVar28 + -0xb0) = auVar33._0_8_;
  puVar31 = (ushort *)*auVar33._0_8_;
  do {
    bVar4 = false;
    bVar7 = false;
    bVar5 = false;
    uVar3 = *puVar31;
    if (((auVar33._8_8_ & 1) == 0) ||
       ((uVar3 != 0x20 && (ushort)(uVar3 - 0xe) < 0xfffc) &&
        (uVar3 == 0x20 || (ushort)(uVar3 - 0xe) != 0xfffb))) {
      uVar25 = uVar27 & 1;
      if (((uVar20 >> 2 & 1) != 0) && (uVar25 == 0)) {
code_r0x02951f04:
        lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar31,*(undefined8 *)(lVar22 + 0x28));
        if (lVar13 == 0) {
          lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar31,*(undefined8 *)(lVar22 + 0x30));
          if (lVar13 == 0) {
            uVar25 = 0;
            goto code_r0x02951f40;
          }
          uVar27 = uVar27 | 1;
          *(undefined1 *)(lVar10 + 0x18) = 1;
        }
        else {
          uVar27 = uVar27 | 1;
        }
        goto code_r0x02951f94;
      }
code_r0x02951f40:
      if (((uVar20 >> 4 & 1) == 0) || (uVar3 != 0x28 || uVar25 != 0)) goto code_r0x02951f60;
      uVar27 = uVar27 | 3;
      bVar6 = true;
      *(undefined1 *)(lVar10 + 0x18) = 1;
    }
    else if (((uVar27 & 0x21) == 1) && (*(int *)(lVar22 + 0xbc) != 2)) {
      if (((uVar20 >> 2 & 1) != 0) && ((uVar27 & 1) == 0)) goto code_r0x02951f04;
code_r0x02951f60:
      if (((lVar32 == 0) || (lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar31,lVar32), lVar13 == 0)) &&
         ((lVar30 == 0 || (lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar31,lVar30), lVar13 == 0)))) break;
      lVar30 = 0;
      lVar32 = 0;
      uVar27 = uVar27 | 0x20;
code_r0x02951f94:
      puVar31 = (ushort *)(lVar13 + -2);
    }
    puVar31 = puVar31 + 1;
  } while( true );
  *(undefined4 *)(puVar28 + -100) = 0;
  iVar8 = 0;
  iVar29 = *(int *)(puVar28 + -0x6c);
  do {
    uVar25 = (uint)uVar3;
    if (((uVar25 - 0x30 & 0xffff) < 10) ||
       ((((uVar20 >> 9 & 1) != 0 && (uVar25 - 0x41 < 0x26)) &&
        ((1L << ((ulong)(uVar25 - 0x41) & 0x3f) & 0x3f0000003fU) != 0)))) {
      bVar7 = bVar4;
      if (uVar25 != 0x30) {
        bVar7 = true;
      }
      if (bVar7 || iVar29 != 0) {
        if (iVar8 < *(int *)(puVar28 + -0x68)) {
          if (*(long *)(puVar28 + -0x78) == 0) {
            *(ushort *)(*(long *)(lVar10 + 8) + (long)iVar8 * 2) = uVar3;
            iVar8 = iVar8 + 1;
          }
          else {
            /*System.Text.StringBuilder$$Append*/ func_0x029d3800(*(long *)(puVar28 + -0x78),uVar25,0);
          }
          iVar2 = iVar8;
          if (uVar25 == 0x30 && *(int *)(puVar28 + -0x7c) == 0) {
            iVar2 = *(int *)(puVar28 + -100);
          }
          *(int *)(puVar28 + -100) = iVar2;
        }
        if (!bVar5) {
          *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
        }
        bVar4 = true;
        bVar7 = true;
      }
      else {
        bVar7 = true;
        if (bVar5) {
          *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + -1;
        }
      }
    }
    else {
      if ((((uVar20 >> 5 & 1) == 0) || (bVar5)) ||
         ((lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar31,*(undefined8 *)(puVar28 + -0x90)), lVar13 == 0 &&
          (((*(uint *)(puVar28 + -0x94) & (uint)((uVar27 & 0x20) == 0)) != 1 ||
           (lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar31,*(undefined8 *)(puVar28 + -0xa8)), lVar13 == 0)))))) {
        if (((uVar20 >> 6 & 1) == 0) ||
           (((!bVar7 || (bVar5)) ||
            ((lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar31,*(undefined8 *)(puVar28 + -0x88)), lVar13 == 0 &&
             (((*(uint *)(puVar28 + -0x94) & (uint)((uVar27 & 0x20) == 0)) != 1 ||
              (lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar31,*(undefined8 *)(puVar28 + -0xa0)), lVar13 == 0))))))
           )) goto code_r0x02952140;
      }
      else {
        bVar5 = true;
      }
      puVar31 = (ushort *)(lVar13 + -2);
      iVar29 = *(int *)(puVar28 + -0x6c);
    }
    puVar31 = puVar31 + 1;
    uVar3 = *puVar31;
  } while( true );
code_r0x02952324:
  if (9 < (uVar25 - 0x30 & 0xffff)) goto code_r0x02952354;
  goto code_r0x02952308;
code_r0x02952250:
  if (!bVar6) {
    puVar24 = *(undefined8 **)(puVar28 + -0xb0);
    if (!bVar4) {
      if ((*(uint *)(puVar28 + -0x7c) & 1) == 0) {
        *(undefined4 *)(lVar10 + 0x14) = 0;
      }
      if (!bVar5) {
        *(undefined1 *)(lVar10 + 0x18) = 0;
      }
    }
    uVar9 = 1;
    goto code_r0x02952280;
  }
  goto code_r0x02952278;
code_r0x02952140:
  iVar8 = *(int *)(puVar28 + -100);
  *(int *)(lVar10 + 0x10) = iVar8;
  if (*(long *)(puVar28 + -0x78) == 0) {
    *(undefined2 *)(*(long *)(lVar10 + 8) + (long)iVar8 * 2) = 0;
  }
  else {
    /*System.Text.StringBuilder$$Append*/ func_0x029d3800(*(long *)(puVar28 + -0x78),0,0);
  }
  if (bVar7) {
    if (((uVar25 | 0x20) == 0x65) && ((uVar20 >> 7 & 1) != 0)) {
      puVar15 = puVar31 + 1;
      uVar3 = *puVar15;
      puVar14 = (ushort *)/*System.Number$$MatchChars*/ func_0x029514c4(puVar15,*(undefined8 *)(lVar22 + 0x28));
      bVar7 = puVar14 == (ushort *)0x0;
      if ((puVar14 == (ushort *)0x0) &&
         (puVar14 = (ushort *)/*System.Number$$MatchChars*/ func_0x029514c4(puVar15,*(undefined8 *)(lVar22 + 0x30)),
         puVar14 == (ushort *)0x0)) {
        bVar7 = false;
      }
      else {
        puVar15 = puVar14;
        uVar3 = *puVar15;
      }
      uVar25 = (uint)uVar3;
      if (0xfff5 < (uVar25 - 0x3a & 0xffff)) {
        iVar8 = 0;
code_r0x02952308:
        iVar8 = iVar8 * 10 + uVar25 + -0x30;
        puVar15 = puVar15 + 1;
        uVar25 = (uint)*puVar15;
        if (iVar8 < 0x3e9) goto code_r0x02952324;
        uVar1 = uVar25 - 0x30 & 0xffff;
        while (uVar1 < 10) {
          puVar15 = puVar15 + 1;
          uVar25 = (uint)*puVar15;
          uVar1 = uVar25 - 0x30;
        }
        iVar8 = 9999;
code_r0x02952354:
        iVar29 = -iVar8;
        if (!bVar7) {
          iVar29 = iVar8;
        }
        *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + iVar29;
        puVar31 = puVar15;
        goto code_r0x029521a0;
      }
      uVar25 = (uint)*puVar31;
    }
code_r0x029521a0:
    do {
      if (((uVar20 >> 1 & 1) == 0) || (uVar25 != 0x20 && (uVar25 - 0xe & 0xffff) < 0xfffb)) {
        if (((uVar20 >> 3 & 1) == 0) || ((uVar27 & 1) != 0)) {
code_r0x029521fc:
          if ((uVar25 == 0x29) && (bVar6)) {
            uVar27 = uVar27 & 0xfffffffd;
            bVar6 = false;
            goto code_r0x02952248;
          }
          if (((lVar32 == 0) || (lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar31,lVar32), lVar13 == 0)) &&
             ((lVar30 == 0 || (lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar31,lVar30), lVar13 == 0))))
          goto code_r0x02952250;
          lVar30 = 0;
          lVar32 = 0;
        }
        else {
          lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar31,*(undefined8 *)(lVar22 + 0x28));
          if (lVar13 == 0) {
            lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar31,*(undefined8 *)(lVar22 + 0x30));
            if (lVar13 == 0) goto code_r0x029521fc;
            uVar27 = uVar27 | 1;
            *(undefined1 *)(lVar10 + 0x18) = 1;
          }
          else {
            uVar27 = uVar27 | 1;
          }
        }
        puVar31 = (ushort *)(lVar13 + -2);
      }
code_r0x02952248:
      uVar25 = (uint)puVar31[1];
      puVar31 = puVar31 + 1;
    } while( true );
  }
code_r0x02952278:
  uVar9 = 0;
  puVar24 = *(undefined8 **)(puVar28 + -0xb0);
code_r0x02952280:
  *puVar24 = puVar31;
  return uVar9;
}



// ============================================================
// RVA: 0x144cb04 | Atlas.Debugging.ApplicationDebugBinding.ReBootGame
// ============================================================

/* WARNING: Removing unreachable block (ram,0x02951bc0) */
/* WARNING: Removing unreachable block (ram,0x02951bd4) */

ulong Atlas_Debugging_ApplicationDebugBinding__ReBootGame
                (long param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ushort *puVar14;
  ushort *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uVar20;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  undefined8 *puVar21;
  long lVar22;
  undefined4 uVar23;
  undefined8 *puVar24;
  uint uVar25;
  uint uVar26;
  undefined1 *puVar27;
  int iVar28;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long lVar29;
  undefined8 unaff_x26;
  ushort *puVar30;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long lVar31;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar32 [16];
  undefined1 auStack_240 [8];
  double dStack_238;
  long alStack_230 [17];
  uint uStack_1a4;
  undefined8 auStack_1a0 [2];
  uint uStack_18c;
  long lStack_188;
  uint auStack_17c [3];
  undefined8 auStack_170 [10];
  long alStack_120 [2];
  undefined1 auStack_110 [8];
  ulong uStack_108;
  undefined8 auStack_100 [4];
  ulong auStack_e0 [8];
  long alStack_a0 [2];
  undefined1 auStack_90 [12];
  uint uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar10 = *(ulong *)(param_1 + 0x18);
  if (uVar10 != 0) {
    if (*(char *)(uVar10 + 0x1c9) != '\0') {
      return uVar10;
    }
    *(undefined1 *)(uVar10 + 0x1c9) = 1;
    lVar9 = Atlas_ApplicationBehaviour__RebootGameCoroutine();
    if (lVar9 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar18 = func_0x00f78aec();
      uVar19 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar18,uVar19,0);
    }
    else {
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar17 = (*pcRam0000000003ec01d0)(uVar10);
      if ((uVar17 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (*pcRam0000000003ec01e0)(uVar10,lVar9);
        return uVar10;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar18 = func_0x00f78aec();
      uVar19 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar18,uVar19,0);
    }
    uVar19 = func_0x00f78a24(0x3d5a8a8);
    auVar32 = func_0x00f78ac0(uVar18,uVar19);
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*pcRam0000000003ec01e0)(auVar32._0_8_,auVar32._8_8_);
    return uVar10;
  }
  lVar9 = func_0x00f78af4();
  if ((bRam0000000003eb4745 & 1) == 0) {
    func_0x00f78a20(0x3d3c008);
    bRam0000000003eb4745 = 1;
  }
  lVar9 = *(long *)(lVar9 + 0x20);
  if (lVar9 == 0) {
    uVar10 = func_0x00f78af4();
    return uVar10;
  }
  if (*(uint *)(lVar9 + 0x18) <= param_3) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  uVar19 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + (long)(int)param_3 * 8 + 0x20);
  uVar16 = /*System.Globalization.NumberFormatInfo$$get_CurrentInfo*/ func_0x02953c58(0,0);
  uVar18 = 7;
  lVar9 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb9044 & 1) == 0) {
    func_0x00f78a20(0x3d28460,7,uVar16,0);
    bRam0000000003eb9044 = 1;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (((*(ushort *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  (*(code *)PTR_03a5d628)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460,(long)**(int **)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xb8));
  lVar31 = -(extraout_x1 + 0xfU & 0xfffffffffffffff0);
  puVar27 = auStack_90 + lVar31;
  _bzero(puVar27);
  /*System.Number.NumberBuffer$$.ctor*/ func_0x02a64c54(&uStack_80,puVar27,0);
  uStack_84 = 0;
  puVar24 = &uStack_80;
  /*System.Number$$StringToNumber*/ func_0x029516fc(uVar19,7,puVar24,uVar16,0);
  iVar8 = /*System.Number$$NumberToInt32*/ func_0x029512a8(&uStack_80,&uStack_84);
  if (iVar8 == 0) {
    uVar18 = func_0x00f78a24(0x3d76020);
    uVar18 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar18,0);
    func_0x00f78a24(0x3d23b00);
    uVar16 = func_0x00f78aec();
    puVar24 = (undefined8 *)0x0;
    /*System.OverflowException$$.ctor*/ func_0x029653d8(uVar16,uVar18);
    uVar11 = func_0x00f78a24(0x3d5afa0);
    uVar10 = func_0x00f78ac0(uVar16,uVar11);
  }
  else {
    uVar10 = (ulong)uStack_84;
    if (*(long *)PTR_03a5d648 == lVar9) {
      return uVar10;
    }
  }
  auVar32 = ___stack_chk_fail(uVar10);
  uVar12 = auVar32._8_8_;
  uVar11 = auVar32._0_8_;
  *(undefined8 *)((long)auStack_e0 + lVar31 + 0x10) = unaff_x24;
  *(undefined8 *)((long)auStack_e0 + lVar31 + 0x18) = 0x3eb9000;
  *(undefined1 **)((long)auStack_e0 + lVar31 + 0x20) = puVar27;
  *(undefined8 *)((long)auStack_e0 + lVar31 + 0x28) = uVar19;
  *(undefined8 *)((long)auStack_e0 + lVar31 + 0x30) = uVar16;
  *(undefined8 *)((long)auStack_e0 + lVar31 + 0x38) = uVar18;
  *(undefined1 **)((long)alStack_a0 + lVar31) = &stack0xffffffffffffffe0;
  *(undefined **)((long)alStack_a0 + lVar31 + 8) = &System_Number__ParseInt64;
  *(undefined8 *)((long)auStack_e0 + lVar31 + 8) = *(undefined8 *)PTR_03a5d648;
  if ((bRam0000000003eb9045 & 1) == 0) {
    func_0x00f78a20(0x3d28460);
    bRam0000000003eb9045 = 1;
  }
  *(undefined8 *)((long)auStack_100 + lVar31 + 8) = 0;
  *(undefined8 *)((long)auStack_100 + lVar31) = 0;
  *(undefined8 *)((long)auStack_100 + lVar31 + 0x18) = 0;
  *(undefined8 *)((long)auStack_100 + lVar31 + 0x10) = 0;
  if (((*(ushort *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  (*(code *)PTR_03a5d628)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460,(long)**(int **)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xb8));
  puVar27 = auStack_110 + (lVar31 - (extraout_x1_00 + 0xfU & 0xfffffffffffffff0));
  _bzero(puVar27);
  /*System.Number.NumberBuffer$$.ctor*/ func_0x02a64c54((long)auStack_100 + lVar31,puVar27,0);
  *(undefined8 *)((long)&uStack_108 + lVar31) = 0;
  lVar9 = (long)auStack_100 + lVar31;
  lVar22 = 0;
  puVar21 = puVar24;
  /*System.Number$$StringToNumber*/ func_0x029516fc(uVar11,uVar12);
  if ((auVar32._8_4_ >> 9 & 1) == 0) {
    iVar8 = /*System.Number$$NumberToInt64*/ func_0x02951334((long)auStack_100 + lVar31,(long)&uStack_108 + lVar31);
    if (iVar8 != 0) {
      uVar10 = *(ulong *)((long)&uStack_108 + lVar31);
      goto code_r0x02951d70;
    }
code_r0x02951da0:
    uVar19 = func_0x00f78a24(0x3d76028);
    uVar12 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar19,0);
    func_0x00f78a24(0x3d23b00);
    puVar24 = (undefined8 *)func_0x00f78aec();
    lVar9 = 0;
    /*System.OverflowException$$.ctor*/ func_0x029653d8(puVar24,uVar12);
    uVar19 = func_0x00f78a24(0x3d5afa8);
    uVar10 = func_0x00f78ac0(puVar24,uVar19);
  }
  else {
    *(undefined8 *)((long)auStack_e0 + lVar31) = 0;
    uVar10 = /*System.Number$$HexNumberToUInt64*/ func_0x029511fc((long)auStack_100 + lVar31,(long)auStack_e0 + lVar31);
    if ((uVar10 & 1) == 0) goto code_r0x02951da0;
    uVar10 = *(ulong *)((long)auStack_e0 + lVar31);
code_r0x02951d70:
    if (*(long *)PTR_03a5d648 == *(long *)((long)auStack_e0 + lVar31 + 8)) {
      return uVar10;
    }
  }
  auVar32 = ___stack_chk_fail(uVar10);
  *(undefined8 *)(puVar27 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar27 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar27 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar27 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar27 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar27 + -0x38) = 0x3eb9000;
  *(undefined1 **)(puVar27 + -0x30) = puVar27;
  *(undefined8 *)(puVar27 + -0x28) = uVar11;
  *(undefined8 **)(puVar27 + -0x20) = puVar24;
  *(undefined8 *)(puVar27 + -0x18) = uVar12;
  *(long *)(puVar27 + -0x10) = (long)alStack_a0 + lVar31;
  *(undefined **)(puVar27 + -8) = &System_Number__ParseNumber;
  *(undefined4 *)(puVar27 + -0x7c) = param_6;
  *(undefined8 **)(puVar27 + -0x78) = puVar21;
  *(undefined4 *)(lVar9 + 0x14) = 0;
  *(undefined1 *)(lVar9 + 0x18) = 0;
  uVar20 = auVar32._8_4_;
  if ((uVar20 >> 8 & 1) == 0) {
    if (lVar22 == 0) {
code_r0x0295237c:
      lVar31 = lVar9;
      auVar32 = func_0x00f78af4();
      lVar29 = auVar32._0_8_;
      *(undefined8 *)(puVar27 + -0xf0) = unaff_d9;
      *(undefined8 *)(puVar27 + -0xe8) = unaff_d8;
      *(long *)(puVar27 + -0xe0) = lVar22;
      *(undefined8 *)(puVar27 + -0xd8) = uVar11;
      *(long *)(puVar27 + -0xd0) = lVar9;
      *(undefined8 *)(puVar27 + -200) = uVar12;
      *(undefined1 **)(puVar27 + -0xc0) = puVar27 + -0x10;
      *(undefined **)(puVar27 + -0xb8) = &System_Number__ParseSingle;
      *(undefined8 *)(puVar27 + -0xf8) = *(undefined8 *)PTR_03a5d648;
      if ((bRam0000000003eb9046 & 1) == 0) {
        func_0x00f78a20(0x3d28460);
        bRam0000000003eb9046 = 1;
      }
      *(undefined8 *)(puVar27 + -0x118) = 0;
      *(undefined8 *)(puVar27 + -0x120) = 0;
      *(undefined8 *)(puVar27 + -0x108) = 0;
      *(undefined8 *)(puVar27 + -0x110) = 0;
      if (lVar29 == 0) {
        func_0x00f78a24(0x3d1fcf0);
        uVar19 = func_0x00f78aec();
        uVar18 = func_0x00f78a24(0x3d7c5a0);
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar18,0);
        uVar18 = func_0x00f78a24(0x3d5afb0);
        func_0x00f78ac0(uVar19,uVar18);
        goto code_r0x029525d4;
      }
      if (((*(ushort *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      (*(code *)PTR_03a5d628)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460,(long)**(int **)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xb8));
      _bzero(puVar27 + (-0x130 - (extraout_x1_01 + 0xfU & 0xfffffffffffffff0)));
      /*System.Number.NumberBuffer$$.ctor*/ func_0x02a64c54(puVar27 + -0x120,
                      puVar27 + (-0x130 - (extraout_x1_01 + 0xfU & 0xfffffffffffffff0)),0);
      *(undefined8 *)(puVar27 + -0x128) = 0;
      uVar10 = /*System.Number$$TryStringToNumber*/ func_0x029532ec(lVar29,auVar32._8_8_,puVar27 + -0x120,0,lVar31,0);
      if ((uVar10 & 1) == 0) goto code_r0x029524ec;
      uVar19 = /*System.Number.NumberBuffer$$PackForNative*/ func_0x02a64c68(puVar27 + -0x120,0);
      uVar10 = func_0x00f86804(uVar19,puVar27 + -0x128);
      if (((uVar10 & 1) != 0) &&
         (uVar10 = /*System.Single$$IsInfinity*/ func_0x029ba5d4((float)*(double *)(puVar27 + -0x128),0), (int)uVar10 == 0))
      goto code_r0x02952558;
      uVar19 = func_0x00f78a24(0x3d75fe8);
      lVar31 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar19,0);
      func_0x00f78a24(0x3d23b00);
      lVar29 = func_0x00f78aec();
      /*System.OverflowException$$.ctor*/ func_0x029653d8(lVar29,lVar31,0);
      do {
        uVar19 = func_0x00f78a24(0x3d5afb0);
        func_0x00f78ac0(lVar29,uVar19);
code_r0x029524ec:
        lVar9 = /*System.String$$Trim*/ func_0x029bab94(lVar29,0);
        if ((lVar31 == 0) || (lVar9 == 0)) {
code_r0x029525d4:
          func_0x00f78af4();
code_r0x029525d8:
          ___stack_chk_fail();
        }
        else {
          uVar10 = /*System.String$$Equals*/ func_0x029bab9c(lVar9,*(undefined8 *)(lVar31 + 0x70),0);
          if ((((uVar10 & 1) != 0) ||
              (uVar10 = /*System.String$$Equals*/ func_0x029bab9c(lVar9,*(undefined8 *)(lVar31 + 0x78),0), (uVar10 & 1) != 0))
             || (uVar10 = /*System.String$$Equals*/ func_0x029bab9c(lVar9,*(undefined8 *)(lVar31 + 0x68),0), (uVar10 & 1) != 0
                )) {
code_r0x02952558:
            if (*(long *)PTR_03a5d648 == *(long *)(puVar27 + -0xf8)) {
              return uVar10;
            }
            goto code_r0x029525d8;
          }
        }
        uVar19 = func_0x00f78a24(0x3d6df88);
        lVar31 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar19,0);
        func_0x00f78a24(0x3d219b8);
        lVar29 = func_0x00f78aec();
        /*System.FormatException$$.ctor*/ func_0x02ad68a8(lVar29,lVar31,0);
      } while( true );
    }
    *(undefined8 *)(puVar27 + -0xa8) = 0;
    *(undefined8 *)(puVar27 + -0xa0) = 0;
    lVar29 = 0;
    lVar31 = 0;
    puVar24 = (undefined8 *)(lVar22 + 0x38);
    puVar21 = (undefined8 *)(lVar22 + 0x40);
  }
  else {
    if (lVar22 == 0) goto code_r0x0295237c;
    lVar31 = *(long *)(lVar22 + 0x58);
    lVar29 = *(long *)(lVar22 + 0x60);
    puVar24 = (undefined8 *)(lVar22 + 0x50);
    puVar21 = (undefined8 *)(lVar22 + 0x48);
    uVar19 = *(undefined8 *)(lVar22 + 0x40);
    *(undefined8 *)(puVar27 + -0xa8) = *(undefined8 *)(lVar22 + 0x38);
    *(undefined8 *)(puVar27 + -0xa0) = uVar19;
  }
  uVar26 = 0;
  bVar6 = false;
  *(uint *)(puVar27 + -0x94) = uVar20 >> 8 & 1;
  uVar19 = *puVar21;
  *(undefined8 *)(puVar27 + -0x90) = *puVar24;
  *(undefined8 *)(puVar27 + -0x88) = uVar19;
  uVar25 = 0;
  if (*(long *)(puVar27 + -0x78) != 0) {
    uVar25 = uVar20 >> 9 & 1;
  }
  uVar23 = 0x32;
  if (*(long *)(puVar27 + -0x78) != 0) {
    uVar23 = 0x7fffffff;
  }
  *(uint *)(puVar27 + -0x6c) = uVar25;
  *(undefined4 *)(puVar27 + -0x68) = uVar23;
  *(long **)(puVar27 + -0xb0) = auVar32._0_8_;
  puVar30 = (ushort *)*auVar32._0_8_;
  do {
    bVar4 = false;
    bVar7 = false;
    bVar5 = false;
    uVar3 = *puVar30;
    if (((auVar32._8_8_ & 1) == 0) ||
       ((uVar3 != 0x20 && (ushort)(uVar3 - 0xe) < 0xfffc) &&
        (uVar3 == 0x20 || (ushort)(uVar3 - 0xe) != 0xfffb))) {
      uVar25 = uVar26 & 1;
      if (((uVar20 >> 2 & 1) != 0) && (uVar25 == 0)) {
code_r0x02951f04:
        lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(lVar22 + 0x28));
        if (lVar13 == 0) {
          lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(lVar22 + 0x30));
          if (lVar13 == 0) {
            uVar25 = 0;
            goto code_r0x02951f40;
          }
          uVar26 = uVar26 | 1;
          *(undefined1 *)(lVar9 + 0x18) = 1;
        }
        else {
          uVar26 = uVar26 | 1;
        }
        goto code_r0x02951f94;
      }
code_r0x02951f40:
      if (((uVar20 >> 4 & 1) == 0) || (uVar3 != 0x28 || uVar25 != 0)) goto code_r0x02951f60;
      uVar26 = uVar26 | 3;
      bVar6 = true;
      *(undefined1 *)(lVar9 + 0x18) = 1;
    }
    else if (((uVar26 & 0x21) == 1) && (*(int *)(lVar22 + 0xbc) != 2)) {
      if (((uVar20 >> 2 & 1) != 0) && ((uVar26 & 1) == 0)) goto code_r0x02951f04;
code_r0x02951f60:
      if (((lVar31 == 0) || (lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,lVar31), lVar13 == 0)) &&
         ((lVar29 == 0 || (lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,lVar29), lVar13 == 0)))) break;
      lVar29 = 0;
      lVar31 = 0;
      uVar26 = uVar26 | 0x20;
code_r0x02951f94:
      puVar30 = (ushort *)(lVar13 + -2);
    }
    puVar30 = puVar30 + 1;
  } while( true );
  *(undefined4 *)(puVar27 + -100) = 0;
  iVar8 = 0;
  iVar28 = *(int *)(puVar27 + -0x6c);
  do {
    uVar25 = (uint)uVar3;
    if (((uVar25 - 0x30 & 0xffff) < 10) ||
       ((((uVar20 >> 9 & 1) != 0 && (uVar25 - 0x41 < 0x26)) &&
        ((1L << ((ulong)(uVar25 - 0x41) & 0x3f) & 0x3f0000003fU) != 0)))) {
      bVar7 = bVar4;
      if (uVar25 != 0x30) {
        bVar7 = true;
      }
      if (bVar7 || iVar28 != 0) {
        if (iVar8 < *(int *)(puVar27 + -0x68)) {
          if (*(long *)(puVar27 + -0x78) == 0) {
            *(ushort *)(*(long *)(lVar9 + 8) + (long)iVar8 * 2) = uVar3;
            iVar8 = iVar8 + 1;
          }
          else {
            /*System.Text.StringBuilder$$Append*/ func_0x029d3800(*(long *)(puVar27 + -0x78),uVar25,0);
          }
          iVar2 = iVar8;
          if (uVar25 == 0x30 && *(int *)(puVar27 + -0x7c) == 0) {
            iVar2 = *(int *)(puVar27 + -100);
          }
          *(int *)(puVar27 + -100) = iVar2;
        }
        if (!bVar5) {
          *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
        }
        bVar4 = true;
        bVar7 = true;
      }
      else {
        bVar7 = true;
        if (bVar5) {
          *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + -1;
        }
      }
    }
    else {
      if ((((uVar20 >> 5 & 1) == 0) || (bVar5)) ||
         ((lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(puVar27 + -0x90)), lVar13 == 0 &&
          (((*(uint *)(puVar27 + -0x94) & (uint)((uVar26 & 0x20) == 0)) != 1 ||
           (lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(puVar27 + -0xa8)), lVar13 == 0)))))) {
        if (((uVar20 >> 6 & 1) == 0) ||
           (((!bVar7 || (bVar5)) ||
            ((lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(puVar27 + -0x88)), lVar13 == 0 &&
             (((*(uint *)(puVar27 + -0x94) & (uint)((uVar26 & 0x20) == 0)) != 1 ||
              (lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(puVar27 + -0xa0)), lVar13 == 0))))))
           )) goto code_r0x02952140;
      }
      else {
        bVar5 = true;
      }
      puVar30 = (ushort *)(lVar13 + -2);
      iVar28 = *(int *)(puVar27 + -0x6c);
    }
    puVar30 = puVar30 + 1;
    uVar3 = *puVar30;
  } while( true );
code_r0x02952324:
  if (9 < (uVar25 - 0x30 & 0xffff)) goto code_r0x02952354;
  goto code_r0x02952308;
code_r0x02952250:
  if (!bVar6) {
    puVar24 = *(undefined8 **)(puVar27 + -0xb0);
    if (!bVar4) {
      if ((*(uint *)(puVar27 + -0x7c) & 1) == 0) {
        *(undefined4 *)(lVar9 + 0x14) = 0;
      }
      if (!bVar5) {
        *(undefined1 *)(lVar9 + 0x18) = 0;
      }
    }
    uVar10 = 1;
    goto code_r0x02952280;
  }
  goto code_r0x02952278;
code_r0x02952140:
  iVar8 = *(int *)(puVar27 + -100);
  *(int *)(lVar9 + 0x10) = iVar8;
  if (*(long *)(puVar27 + -0x78) == 0) {
    *(undefined2 *)(*(long *)(lVar9 + 8) + (long)iVar8 * 2) = 0;
  }
  else {
    /*System.Text.StringBuilder$$Append*/ func_0x029d3800(*(long *)(puVar27 + -0x78),0,0);
  }
  if (bVar7) {
    if (((uVar25 | 0x20) == 0x65) && ((uVar20 >> 7 & 1) != 0)) {
      puVar15 = puVar30 + 1;
      uVar3 = *puVar15;
      puVar14 = (ushort *)/*System.Number$$MatchChars*/ func_0x029514c4(puVar15,*(undefined8 *)(lVar22 + 0x28));
      bVar7 = puVar14 == (ushort *)0x0;
      if ((puVar14 == (ushort *)0x0) &&
         (puVar14 = (ushort *)/*System.Number$$MatchChars*/ func_0x029514c4(puVar15,*(undefined8 *)(lVar22 + 0x30)),
         puVar14 == (ushort *)0x0)) {
        bVar7 = false;
      }
      else {
        puVar15 = puVar14;
        uVar3 = *puVar15;
      }
      uVar25 = (uint)uVar3;
      if (0xfff5 < (uVar25 - 0x3a & 0xffff)) {
        iVar8 = 0;
code_r0x02952308:
        iVar8 = iVar8 * 10 + uVar25 + -0x30;
        puVar15 = puVar15 + 1;
        uVar25 = (uint)*puVar15;
        if (iVar8 < 0x3e9) goto code_r0x02952324;
        uVar1 = uVar25 - 0x30 & 0xffff;
        while (uVar1 < 10) {
          puVar15 = puVar15 + 1;
          uVar25 = (uint)*puVar15;
          uVar1 = uVar25 - 0x30;
        }
        iVar8 = 9999;
code_r0x02952354:
        iVar28 = -iVar8;
        if (!bVar7) {
          iVar28 = iVar8;
        }
        *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + iVar28;
        puVar30 = puVar15;
        goto code_r0x029521a0;
      }
      uVar25 = (uint)*puVar30;
    }
code_r0x029521a0:
    do {
      if (((uVar20 >> 1 & 1) == 0) || (uVar25 != 0x20 && (uVar25 - 0xe & 0xffff) < 0xfffb)) {
        if (((uVar20 >> 3 & 1) == 0) || ((uVar26 & 1) != 0)) {
code_r0x029521fc:
          if ((uVar25 == 0x29) && (bVar6)) {
            uVar26 = uVar26 & 0xfffffffd;
            bVar6 = false;
            goto code_r0x02952248;
          }
          if (((lVar31 == 0) || (lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,lVar31), lVar13 == 0)) &&
             ((lVar29 == 0 || (lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,lVar29), lVar13 == 0))))
          goto code_r0x02952250;
          lVar29 = 0;
          lVar31 = 0;
        }
        else {
          lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(lVar22 + 0x28));
          if (lVar13 == 0) {
            lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(lVar22 + 0x30));
            if (lVar13 == 0) goto code_r0x029521fc;
            uVar26 = uVar26 | 1;
            *(undefined1 *)(lVar9 + 0x18) = 1;
          }
          else {
            uVar26 = uVar26 | 1;
          }
        }
        puVar30 = (ushort *)(lVar13 + -2);
      }
code_r0x02952248:
      uVar25 = (uint)puVar30[1];
      puVar30 = puVar30 + 1;
    } while( true );
  }
code_r0x02952278:
  uVar10 = 0;
  puVar24 = *(undefined8 **)(puVar27 + -0xb0);
code_r0x02952280:
  *puVar24 = puVar30;
  return uVar10;
}



// ============================================================
// RVA: 0x144cb20 | Atlas.Debugging.ApplicationDebugBinding.OnThrottleOptionChanged
// ============================================================

/* WARNING: Removing unreachable block (ram,0x02951bc0) */
/* WARNING: Removing unreachable block (ram,0x02951bd4) */

ulong Atlas_Debugging_ApplicationDebugBinding__OnThrottleOptionChanged
                (long param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ushort *puVar14;
  ushort *puVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  undefined8 *puVar19;
  long lVar20;
  undefined4 uVar21;
  undefined8 *puVar22;
  uint uVar23;
  undefined8 uVar24;
  long lVar25;
  uint uVar26;
  undefined1 *puVar27;
  int iVar28;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long lVar29;
  undefined8 unaff_x26;
  ushort *puVar30;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar31 [16];
  undefined1 auStack_230 [8];
  double dStack_228;
  long alStack_220 [17];
  uint uStack_194;
  undefined8 auStack_190 [2];
  uint uStack_17c;
  long lStack_178;
  uint auStack_16c [3];
  undefined8 auStack_160 [10];
  long alStack_110 [2];
  undefined1 auStack_100 [8];
  ulong uStack_f8;
  undefined8 auStack_f0 [4];
  ulong auStack_d0 [8];
  long alStack_90 [2];
  undefined1 auStack_80 [12];
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  if ((bRam0000000003eb4745 & 1) == 0) {
    func_0x00f78a20(0x3d3c008);
    bRam0000000003eb4745 = 1;
  }
  lVar25 = *(long *)(param_1 + 0x20);
  if (lVar25 == 0) {
    uVar10 = func_0x00f78af4();
    return uVar10;
  }
  if (*(uint *)(lVar25 + 0x18) <= param_3) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar25 + 0x10) + (long)(int)param_3 * 8 + 0x20);
  uVar17 = /*System.Globalization.NumberFormatInfo$$get_CurrentInfo*/ func_0x02953c58(0,0);
  uVar24 = 7;
  lStack_48 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb9044 & 1) == 0) {
    func_0x00f78a20(0x3d28460,7,uVar17,0);
    bRam0000000003eb9044 = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (((*(ushort *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  (*(code *)PTR_03a5d628)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460,(long)**(int **)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xb8));
  lVar25 = -(extraout_x1 + 0xfU & 0xfffffffffffffff0);
  puVar27 = auStack_80 + lVar25;
  _bzero(puVar27);
  /*System.Number.NumberBuffer$$.ctor*/ func_0x02a64c54(&uStack_70,puVar27,0);
  uStack_74 = 0;
  puVar22 = &uStack_70;
  /*System.Number$$StringToNumber*/ func_0x029516fc(uVar9,7,puVar22,uVar17,0);
  iVar8 = /*System.Number$$NumberToInt32*/ func_0x029512a8(&uStack_70,&uStack_74);
  if (iVar8 == 0) {
    uVar24 = func_0x00f78a24(0x3d76020);
    uVar24 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar24,0);
    func_0x00f78a24(0x3d23b00);
    uVar17 = func_0x00f78aec();
    puVar22 = (undefined8 *)0x0;
    /*System.OverflowException$$.ctor*/ func_0x029653d8(uVar17,uVar24);
    uVar11 = func_0x00f78a24(0x3d5afa0);
    uVar10 = func_0x00f78ac0(uVar17,uVar11);
  }
  else {
    uVar10 = (ulong)uStack_74;
    if (*(long *)PTR_03a5d648 == lStack_48) {
      return uVar10;
    }
  }
  auVar31 = ___stack_chk_fail(uVar10);
  uVar12 = auVar31._8_8_;
  uVar11 = auVar31._0_8_;
  *(undefined8 *)((long)auStack_d0 + lVar25 + 0x10) = unaff_x24;
  *(undefined8 *)((long)auStack_d0 + lVar25 + 0x18) = 0x3eb9000;
  *(undefined1 **)((long)auStack_d0 + lVar25 + 0x20) = puVar27;
  *(undefined8 *)((long)auStack_d0 + lVar25 + 0x28) = uVar9;
  *(undefined8 *)((long)auStack_d0 + lVar25 + 0x30) = uVar17;
  *(undefined8 *)((long)auStack_d0 + lVar25 + 0x38) = uVar24;
  *(undefined1 **)((long)alStack_90 + lVar25) = &stack0xfffffffffffffff0;
  *(undefined **)((long)alStack_90 + lVar25 + 8) = &System_Number__ParseInt64;
  *(undefined8 *)((long)auStack_d0 + lVar25 + 8) = *(undefined8 *)PTR_03a5d648;
  if ((bRam0000000003eb9045 & 1) == 0) {
    func_0x00f78a20(0x3d28460);
    bRam0000000003eb9045 = 1;
  }
  *(undefined8 *)((long)auStack_f0 + lVar25 + 8) = 0;
  *(undefined8 *)((long)auStack_f0 + lVar25) = 0;
  *(undefined8 *)((long)auStack_f0 + lVar25 + 0x18) = 0;
  *(undefined8 *)((long)auStack_f0 + lVar25 + 0x10) = 0;
  if (((*(ushort *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  (*(code *)PTR_03a5d628)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460,(long)**(int **)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xb8));
  puVar27 = auStack_100 + (lVar25 - (extraout_x1_00 + 0xfU & 0xfffffffffffffff0));
  _bzero(puVar27);
  /*System.Number.NumberBuffer$$.ctor*/ func_0x02a64c54((long)auStack_f0 + lVar25,puVar27,0);
  *(undefined8 *)((long)&uStack_f8 + lVar25) = 0;
  lVar16 = (long)auStack_f0 + lVar25;
  lVar20 = 0;
  puVar19 = puVar22;
  /*System.Number$$StringToNumber*/ func_0x029516fc(uVar11,uVar12);
  if ((auVar31._8_4_ >> 9 & 1) == 0) {
    iVar8 = /*System.Number$$NumberToInt64*/ func_0x02951334((long)auStack_f0 + lVar25,(long)&uStack_f8 + lVar25);
    if (iVar8 != 0) {
      uVar10 = *(ulong *)((long)&uStack_f8 + lVar25);
      goto code_r0x02951d70;
    }
code_r0x02951da0:
    uVar9 = func_0x00f78a24(0x3d76028);
    uVar12 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar9,0);
    func_0x00f78a24(0x3d23b00);
    puVar22 = (undefined8 *)func_0x00f78aec();
    lVar16 = 0;
    /*System.OverflowException$$.ctor*/ func_0x029653d8(puVar22,uVar12);
    uVar9 = func_0x00f78a24(0x3d5afa8);
    uVar10 = func_0x00f78ac0(puVar22,uVar9);
  }
  else {
    *(undefined8 *)((long)auStack_d0 + lVar25) = 0;
    uVar10 = /*System.Number$$HexNumberToUInt64*/ func_0x029511fc((long)auStack_f0 + lVar25,(long)auStack_d0 + lVar25);
    if ((uVar10 & 1) == 0) goto code_r0x02951da0;
    uVar10 = *(ulong *)((long)auStack_d0 + lVar25);
code_r0x02951d70:
    if (*(long *)PTR_03a5d648 == *(long *)((long)auStack_d0 + lVar25 + 8)) {
      return uVar10;
    }
  }
  auVar31 = ___stack_chk_fail(uVar10);
  *(undefined8 *)(puVar27 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar27 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar27 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar27 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar27 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar27 + -0x38) = 0x3eb9000;
  *(undefined1 **)(puVar27 + -0x30) = puVar27;
  *(undefined8 *)(puVar27 + -0x28) = uVar11;
  *(undefined8 **)(puVar27 + -0x20) = puVar22;
  *(undefined8 *)(puVar27 + -0x18) = uVar12;
  *(long *)(puVar27 + -0x10) = (long)alStack_90 + lVar25;
  *(undefined **)(puVar27 + -8) = &System_Number__ParseNumber;
  *(undefined4 *)(puVar27 + -0x7c) = param_6;
  *(undefined8 **)(puVar27 + -0x78) = puVar19;
  *(undefined4 *)(lVar16 + 0x14) = 0;
  *(undefined1 *)(lVar16 + 0x18) = 0;
  uVar18 = auVar31._8_4_;
  if ((uVar18 >> 8 & 1) == 0) {
    if (lVar20 == 0) {
code_r0x0295237c:
      lVar25 = lVar16;
      auVar31 = func_0x00f78af4();
      lVar29 = auVar31._0_8_;
      *(undefined8 *)(puVar27 + -0xf0) = unaff_d9;
      *(undefined8 *)(puVar27 + -0xe8) = unaff_d8;
      *(long *)(puVar27 + -0xe0) = lVar20;
      *(undefined8 *)(puVar27 + -0xd8) = uVar11;
      *(long *)(puVar27 + -0xd0) = lVar16;
      *(undefined8 *)(puVar27 + -200) = uVar12;
      *(undefined1 **)(puVar27 + -0xc0) = puVar27 + -0x10;
      *(undefined **)(puVar27 + -0xb8) = &System_Number__ParseSingle;
      *(undefined8 *)(puVar27 + -0xf8) = *(undefined8 *)PTR_03a5d648;
      if ((bRam0000000003eb9046 & 1) == 0) {
        func_0x00f78a20(0x3d28460);
        bRam0000000003eb9046 = 1;
      }
      *(undefined8 *)(puVar27 + -0x118) = 0;
      *(undefined8 *)(puVar27 + -0x120) = 0;
      *(undefined8 *)(puVar27 + -0x108) = 0;
      *(undefined8 *)(puVar27 + -0x110) = 0;
      if (lVar29 == 0) {
        func_0x00f78a24(0x3d1fcf0);
        uVar9 = func_0x00f78aec();
        uVar24 = func_0x00f78a24(0x3d7c5a0);
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar9,uVar24,0);
        uVar24 = func_0x00f78a24(0x3d5afb0);
        func_0x00f78ac0(uVar9,uVar24);
        goto code_r0x029525d4;
      }
      if (((*(ushort *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      (*(code *)PTR_03a5d628)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460,(long)**(int **)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xb8));
      _bzero(puVar27 + (-0x130 - (extraout_x1_01 + 0xfU & 0xfffffffffffffff0)));
      /*System.Number.NumberBuffer$$.ctor*/ func_0x02a64c54(puVar27 + -0x120,
                      puVar27 + (-0x130 - (extraout_x1_01 + 0xfU & 0xfffffffffffffff0)),0);
      *(undefined8 *)(puVar27 + -0x128) = 0;
      uVar10 = /*System.Number$$TryStringToNumber*/ func_0x029532ec(lVar29,auVar31._8_8_,puVar27 + -0x120,0,lVar25,0);
      if ((uVar10 & 1) == 0) goto code_r0x029524ec;
      uVar9 = /*System.Number.NumberBuffer$$PackForNative*/ func_0x02a64c68(puVar27 + -0x120,0);
      uVar10 = func_0x00f86804(uVar9,puVar27 + -0x128);
      if (((uVar10 & 1) != 0) &&
         (uVar10 = /*System.Single$$IsInfinity*/ func_0x029ba5d4((float)*(double *)(puVar27 + -0x128),0), (int)uVar10 == 0))
      goto code_r0x02952558;
      uVar9 = func_0x00f78a24(0x3d75fe8);
      lVar25 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar9,0);
      func_0x00f78a24(0x3d23b00);
      lVar29 = func_0x00f78aec();
      /*System.OverflowException$$.ctor*/ func_0x029653d8(lVar29,lVar25,0);
      do {
        uVar9 = func_0x00f78a24(0x3d5afb0);
        func_0x00f78ac0(lVar29,uVar9);
code_r0x029524ec:
        lVar16 = /*System.String$$Trim*/ func_0x029bab94(lVar29,0);
        if ((lVar25 == 0) || (lVar16 == 0)) {
code_r0x029525d4:
          func_0x00f78af4();
code_r0x029525d8:
          ___stack_chk_fail();
        }
        else {
          uVar10 = /*System.String$$Equals*/ func_0x029bab9c(lVar16,*(undefined8 *)(lVar25 + 0x70),0);
          if ((((uVar10 & 1) != 0) ||
              (uVar10 = /*System.String$$Equals*/ func_0x029bab9c(lVar16,*(undefined8 *)(lVar25 + 0x78),0), (uVar10 & 1) != 0)
              ) || (uVar10 = /*System.String$$Equals*/ func_0x029bab9c(lVar16,*(undefined8 *)(lVar25 + 0x68),0),
                   (uVar10 & 1) != 0)) {
code_r0x02952558:
            if (*(long *)PTR_03a5d648 == *(long *)(puVar27 + -0xf8)) {
              return uVar10;
            }
            goto code_r0x029525d8;
          }
        }
        uVar9 = func_0x00f78a24(0x3d6df88);
        lVar25 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar9,0);
        func_0x00f78a24(0x3d219b8);
        lVar29 = func_0x00f78aec();
        /*System.FormatException$$.ctor*/ func_0x02ad68a8(lVar29,lVar25,0);
      } while( true );
    }
    *(undefined8 *)(puVar27 + -0xa8) = 0;
    *(undefined8 *)(puVar27 + -0xa0) = 0;
    lVar29 = 0;
    lVar25 = 0;
    puVar22 = (undefined8 *)(lVar20 + 0x38);
    puVar19 = (undefined8 *)(lVar20 + 0x40);
  }
  else {
    if (lVar20 == 0) goto code_r0x0295237c;
    lVar25 = *(long *)(lVar20 + 0x58);
    lVar29 = *(long *)(lVar20 + 0x60);
    puVar22 = (undefined8 *)(lVar20 + 0x50);
    puVar19 = (undefined8 *)(lVar20 + 0x48);
    uVar9 = *(undefined8 *)(lVar20 + 0x40);
    *(undefined8 *)(puVar27 + -0xa8) = *(undefined8 *)(lVar20 + 0x38);
    *(undefined8 *)(puVar27 + -0xa0) = uVar9;
  }
  uVar26 = 0;
  bVar6 = false;
  *(uint *)(puVar27 + -0x94) = uVar18 >> 8 & 1;
  uVar9 = *puVar19;
  *(undefined8 *)(puVar27 + -0x90) = *puVar22;
  *(undefined8 *)(puVar27 + -0x88) = uVar9;
  uVar23 = 0;
  if (*(long *)(puVar27 + -0x78) != 0) {
    uVar23 = uVar18 >> 9 & 1;
  }
  uVar21 = 0x32;
  if (*(long *)(puVar27 + -0x78) != 0) {
    uVar21 = 0x7fffffff;
  }
  *(uint *)(puVar27 + -0x6c) = uVar23;
  *(undefined4 *)(puVar27 + -0x68) = uVar21;
  *(long **)(puVar27 + -0xb0) = auVar31._0_8_;
  puVar30 = (ushort *)*auVar31._0_8_;
  do {
    bVar4 = false;
    bVar7 = false;
    bVar5 = false;
    uVar3 = *puVar30;
    if (((auVar31._8_8_ & 1) == 0) ||
       ((uVar3 != 0x20 && (ushort)(uVar3 - 0xe) < 0xfffc) &&
        (uVar3 == 0x20 || (ushort)(uVar3 - 0xe) != 0xfffb))) {
      uVar23 = uVar26 & 1;
      if (((uVar18 >> 2 & 1) != 0) && (uVar23 == 0)) {
code_r0x02951f04:
        lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(lVar20 + 0x28));
        if (lVar13 == 0) {
          lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(lVar20 + 0x30));
          if (lVar13 == 0) {
            uVar23 = 0;
            goto code_r0x02951f40;
          }
          uVar26 = uVar26 | 1;
          *(undefined1 *)(lVar16 + 0x18) = 1;
        }
        else {
          uVar26 = uVar26 | 1;
        }
        goto code_r0x02951f94;
      }
code_r0x02951f40:
      if (((uVar18 >> 4 & 1) == 0) || (uVar3 != 0x28 || uVar23 != 0)) goto code_r0x02951f60;
      uVar26 = uVar26 | 3;
      bVar6 = true;
      *(undefined1 *)(lVar16 + 0x18) = 1;
    }
    else if (((uVar26 & 0x21) == 1) && (*(int *)(lVar20 + 0xbc) != 2)) {
      if (((uVar18 >> 2 & 1) != 0) && ((uVar26 & 1) == 0)) goto code_r0x02951f04;
code_r0x02951f60:
      if (((lVar25 == 0) || (lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,lVar25), lVar13 == 0)) &&
         ((lVar29 == 0 || (lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,lVar29), lVar13 == 0)))) break;
      lVar29 = 0;
      lVar25 = 0;
      uVar26 = uVar26 | 0x20;
code_r0x02951f94:
      puVar30 = (ushort *)(lVar13 + -2);
    }
    puVar30 = puVar30 + 1;
  } while( true );
  *(undefined4 *)(puVar27 + -100) = 0;
  iVar8 = 0;
  iVar28 = *(int *)(puVar27 + -0x6c);
  do {
    uVar23 = (uint)uVar3;
    if (((uVar23 - 0x30 & 0xffff) < 10) ||
       ((((uVar18 >> 9 & 1) != 0 && (uVar23 - 0x41 < 0x26)) &&
        ((1L << ((ulong)(uVar23 - 0x41) & 0x3f) & 0x3f0000003fU) != 0)))) {
      bVar7 = bVar4;
      if (uVar23 != 0x30) {
        bVar7 = true;
      }
      if (bVar7 || iVar28 != 0) {
        if (iVar8 < *(int *)(puVar27 + -0x68)) {
          if (*(long *)(puVar27 + -0x78) == 0) {
            *(ushort *)(*(long *)(lVar16 + 8) + (long)iVar8 * 2) = uVar3;
            iVar8 = iVar8 + 1;
          }
          else {
            /*System.Text.StringBuilder$$Append*/ func_0x029d3800(*(long *)(puVar27 + -0x78),uVar23,0);
          }
          iVar2 = iVar8;
          if (uVar23 == 0x30 && *(int *)(puVar27 + -0x7c) == 0) {
            iVar2 = *(int *)(puVar27 + -100);
          }
          *(int *)(puVar27 + -100) = iVar2;
        }
        if (!bVar5) {
          *(int *)(lVar16 + 0x14) = *(int *)(lVar16 + 0x14) + 1;
        }
        bVar4 = true;
        bVar7 = true;
      }
      else {
        bVar7 = true;
        if (bVar5) {
          *(int *)(lVar16 + 0x14) = *(int *)(lVar16 + 0x14) + -1;
        }
      }
    }
    else {
      if ((((uVar18 >> 5 & 1) == 0) || (bVar5)) ||
         ((lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(puVar27 + -0x90)), lVar13 == 0 &&
          (((*(uint *)(puVar27 + -0x94) & (uint)((uVar26 & 0x20) == 0)) != 1 ||
           (lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(puVar27 + -0xa8)), lVar13 == 0)))))) {
        if (((uVar18 >> 6 & 1) == 0) ||
           (((!bVar7 || (bVar5)) ||
            ((lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(puVar27 + -0x88)), lVar13 == 0 &&
             (((*(uint *)(puVar27 + -0x94) & (uint)((uVar26 & 0x20) == 0)) != 1 ||
              (lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(puVar27 + -0xa0)), lVar13 == 0))))))
           )) goto code_r0x02952140;
      }
      else {
        bVar5 = true;
      }
      puVar30 = (ushort *)(lVar13 + -2);
      iVar28 = *(int *)(puVar27 + -0x6c);
    }
    puVar30 = puVar30 + 1;
    uVar3 = *puVar30;
  } while( true );
code_r0x02952324:
  if (9 < (uVar23 - 0x30 & 0xffff)) goto code_r0x02952354;
  goto code_r0x02952308;
code_r0x02952250:
  if (!bVar6) {
    puVar22 = *(undefined8 **)(puVar27 + -0xb0);
    if (!bVar4) {
      if ((*(uint *)(puVar27 + -0x7c) & 1) == 0) {
        *(undefined4 *)(lVar16 + 0x14) = 0;
      }
      if (!bVar5) {
        *(undefined1 *)(lVar16 + 0x18) = 0;
      }
    }
    uVar10 = 1;
    goto code_r0x02952280;
  }
  goto code_r0x02952278;
code_r0x02952140:
  iVar8 = *(int *)(puVar27 + -100);
  *(int *)(lVar16 + 0x10) = iVar8;
  if (*(long *)(puVar27 + -0x78) == 0) {
    *(undefined2 *)(*(long *)(lVar16 + 8) + (long)iVar8 * 2) = 0;
  }
  else {
    /*System.Text.StringBuilder$$Append*/ func_0x029d3800(*(long *)(puVar27 + -0x78),0,0);
  }
  if (bVar7) {
    if (((uVar23 | 0x20) == 0x65) && ((uVar18 >> 7 & 1) != 0)) {
      puVar15 = puVar30 + 1;
      uVar3 = *puVar15;
      puVar14 = (ushort *)/*System.Number$$MatchChars*/ func_0x029514c4(puVar15,*(undefined8 *)(lVar20 + 0x28));
      bVar7 = puVar14 == (ushort *)0x0;
      if ((puVar14 == (ushort *)0x0) &&
         (puVar14 = (ushort *)/*System.Number$$MatchChars*/ func_0x029514c4(puVar15,*(undefined8 *)(lVar20 + 0x30)),
         puVar14 == (ushort *)0x0)) {
        bVar7 = false;
      }
      else {
        puVar15 = puVar14;
        uVar3 = *puVar15;
      }
      uVar23 = (uint)uVar3;
      if (0xfff5 < (uVar23 - 0x3a & 0xffff)) {
        iVar8 = 0;
code_r0x02952308:
        iVar8 = iVar8 * 10 + uVar23 + -0x30;
        puVar15 = puVar15 + 1;
        uVar23 = (uint)*puVar15;
        if (iVar8 < 0x3e9) goto code_r0x02952324;
        uVar1 = uVar23 - 0x30 & 0xffff;
        while (uVar1 < 10) {
          puVar15 = puVar15 + 1;
          uVar23 = (uint)*puVar15;
          uVar1 = uVar23 - 0x30;
        }
        iVar8 = 9999;
code_r0x02952354:
        iVar28 = -iVar8;
        if (!bVar7) {
          iVar28 = iVar8;
        }
        *(int *)(lVar16 + 0x14) = *(int *)(lVar16 + 0x14) + iVar28;
        puVar30 = puVar15;
        goto code_r0x029521a0;
      }
      uVar23 = (uint)*puVar30;
    }
code_r0x029521a0:
    do {
      if (((uVar18 >> 1 & 1) == 0) || (uVar23 != 0x20 && (uVar23 - 0xe & 0xffff) < 0xfffb)) {
        if (((uVar18 >> 3 & 1) == 0) || ((uVar26 & 1) != 0)) {
code_r0x029521fc:
          if ((uVar23 == 0x29) && (bVar6)) {
            uVar26 = uVar26 & 0xfffffffd;
            bVar6 = false;
            goto code_r0x02952248;
          }
          if (((lVar25 == 0) || (lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,lVar25), lVar13 == 0)) &&
             ((lVar29 == 0 || (lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,lVar29), lVar13 == 0))))
          goto code_r0x02952250;
          lVar29 = 0;
          lVar25 = 0;
        }
        else {
          lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(lVar20 + 0x28));
          if (lVar13 == 0) {
            lVar13 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(lVar20 + 0x30));
            if (lVar13 == 0) goto code_r0x029521fc;
            uVar26 = uVar26 | 1;
            *(undefined1 *)(lVar16 + 0x18) = 1;
          }
          else {
            uVar26 = uVar26 | 1;
          }
        }
        puVar30 = (ushort *)(lVar13 + -2);
      }
code_r0x02952248:
      uVar23 = (uint)puVar30[1];
      puVar30 = puVar30 + 1;
    } while( true );
  }
code_r0x02952278:
  uVar10 = 0;
  puVar22 = *(undefined8 **)(puVar27 + -0xb0);
code_r0x02952280:
  *puVar22 = puVar30;
  return uVar10;
}



// ============================================================
// RVA: 0x144cb98 | Atlas.Debugging.ApplicationDebugBinding..ctor
// ============================================================

void Atlas_Debugging_ApplicationDebugBinding___ctor(void)

{
  return;
}



