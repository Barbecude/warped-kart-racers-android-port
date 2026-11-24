// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.SupportEmail

// ============================================================
// RVA: 0x1506e2c | Atlas.SupportEmail.Send
// ============================================================

/* WARNING: Possible PIC construction at 0x01507264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150727c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150749c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029cf5a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029cf654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015075b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015075f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x029cf5a8) */
/* WARNING: Removing unreachable block (ram,0x015074a0) */
/* WARNING: Removing unreachable block (ram,0x015074a4) */
/* WARNING: Removing unreachable block (ram,0x015074c8) */
/* WARNING: Removing unreachable block (ram,0x01507280) */
/* WARNING: Removing unreachable block (ram,0x01507294) */
/* WARNING: Removing unreachable block (ram,0x015072a8) */
/* WARNING: Removing unreachable block (ram,0x015072b8) */
/* WARNING: Removing unreachable block (ram,0x015072c0) */
/* WARNING: Removing unreachable block (ram,0x015072cc) */
/* WARNING: Removing unreachable block (ram,0x015072e0) */
/* WARNING: Removing unreachable block (ram,0x015072e4) */
/* WARNING: Removing unreachable block (ram,0x015072ec) */
/* WARNING: Removing unreachable block (ram,0x01507300) */
/* WARNING: Removing unreachable block (ram,0x01507310) */
/* WARNING: Removing unreachable block (ram,0x01507314) */
/* WARNING: Removing unreachable block (ram,0x0150731c) */
/* WARNING: Removing unreachable block (ram,0x01507328) */
/* WARNING: Removing unreachable block (ram,0x0150733c) */
/* WARNING: Removing unreachable block (ram,0x01507340) */
/* WARNING: Removing unreachable block (ram,0x01507348) */
/* WARNING: Removing unreachable block (ram,0x0150735c) */
/* WARNING: Removing unreachable block (ram,0x0150736c) */
/* WARNING: Removing unreachable block (ram,0x01507370) */
/* WARNING: Removing unreachable block (ram,0x01507378) */
/* WARNING: Removing unreachable block (ram,0x01507384) */
/* WARNING: Removing unreachable block (ram,0x01507400) */
/* WARNING: Removing unreachable block (ram,0x01507398) */
/* WARNING: Removing unreachable block (ram,0x0150739c) */
/* WARNING: Removing unreachable block (ram,0x015073a4) */
/* WARNING: Removing unreachable block (ram,0x015073d4) */
/* WARNING: Removing unreachable block (ram,0x01507268) */
/* WARNING: Removing unreachable block (ram,0x029cf658) */
/* WARNING: Type propagation algorithm not settling */

undefined8 *****
Atlas_SupportEmail__Send
          (long param_1,long param_2,long param_3,undefined8 *******param_4,long param_5)

{
  int iVar1;
  undefined1 auVar2 [16];
  long lVar3;
  code *pcVar4;
  undefined8 *******pppppppuVar5;
  uint uVar6;
  uint uVar8;
  int iVar9;
  int iVar7;
  long lVar10;
  long lVar11;
  undefined8 ******ppppppuVar12;
  undefined8 uVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****pppppuVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  ushort *puVar21;
  undefined2 *puVar22;
  long lVar23;
  undefined8 *puVar24;
  ulong uVar25;
  int *piVar26;
  ulong uVar27;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  int aiStack_4c0 [202];
  undefined8 *****pppppuStack_198;
  undefined8 ******ppppppuStack_190;
  long lStack_188;
  undefined8 ******ppppppuStack_180;
  long lStack_178;
  undefined8 ******ppppppuStack_170;
  long lStack_168;
  undefined8 *******pppppppuStack_160;
  undefined *puStack_158;
  undefined8 *******pppppppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 ******ppppppuStack_110;
  undefined *puStack_108;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR_03a5d648;
  ppppppuVar12 = (undefined8 ******)0x3d24dd8;
  if ((bRam0000000003eb4d20 & 1) == 0) {
    func_0x00f78a20(0x3d21628);
    func_0x00f78a20(0x3d21940);
    func_0x00f78a20(0x3d24dd8);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d7c7e0);
    func_0x00f78a20(0x3d677f8);
    func_0x00f78a20(0x3d698a8);
    func_0x00f78a20(0x3d77ca8);
    func_0x00f78a20(0x3d68648);
    func_0x00f78a20(0x3d66860);
    func_0x00f78a20(0x3d67c70);
    func_0x00f78a20(0x3d6f2d8);
    func_0x00f78a20(0x3d67140);
    func_0x00f78a20(0x3d70148);
    func_0x00f78a20(0x3d68458);
    func_0x00f78a20(0x3d7a498);
    func_0x00f78a20(0x3d717b0);
    func_0x00f78a20(0x3d6f2d0);
    func_0x00f78a20(0x3d6f758);
    func_0x00f78a20(0x3d6f798);
    bRam0000000003eb4d20 = 1;
  }
  lVar10 = func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
  /*System.Text.StringBuilder$$.ctor*/ func_0x029d1794(lVar10,0x800,0);
  lVar11 = /*UnityEngine.iOS.Device$$get_systemVersion*/ func_0x0322ccd8(0);
  if (lVar11 == 0) {
LAB_015073f4:
    func_0x00f78af4();
    uVar13 = func_0x00f78b24();
    func_0x00f78ac0(uVar13,0);
    puVar29 = &Atlas_SupportEmail__EscapeURL;
    lVar11 = ___stack_chk_fail();
  }
  else {
    ppppppuVar12 = (undefined8 ******)/*System.String$$StartsWith*/ func_0x029ce8f8(lVar11,/*STR('14.')*/ uRam0000000003d677f8,0);
    if ((int)ppppppuVar12 != 0) {
      if (lVar10 == 0) goto LAB_015073f4;
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar10,/*STR('<html>')*/ uRam0000000003d68458,0);
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar10,0);
    }
    if ((param_1 == 0) || (uVar13 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(param_1,/*STR('MESSAGE_BODY_SUPPORT_EMAIL')*/ uRam0000000003d6f758,0), lVar10 == 0))
    goto LAB_015073f4;
    unaff_x26 = 0x3d67000;
    unaff_x27 = 0x3d69000;
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar10,uVar13,0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar10,0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar10,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar10,/*STR('------------')*/ uRam0000000003d67140,0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar10,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar10,/*STR('Build: ')*/ uRam0000000003d698a8,0);
    if (param_3 == 0) goto LAB_015073f4;
    unaff_x26 = 0x3d71000;
    uVar13 = /*ElectricSquare.Build.TeamCityBuildInfo$$get_DisplayChangelist*/ func_0x016cbb64(param_3,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar10,uVar13,0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar10,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar10,/*STR('Quality settings: ')*/ uRam0000000003d717b0,0);
    if (param_2 == 0) goto LAB_015073f4;
    param_3 = 0x3d6f000;
    /*System.Text.StringBuilder$$Append*/ func_0x029d385c(lVar10,*(undefined4 *)(param_2 + 0x18),0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar10,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar10,/*STR('Last session id: ')*/ uRam0000000003d6f2d8,0);
    if (param_5 == 0) goto LAB_015073f4;
    param_3 = 0x3d21000;
    unaff_x26 = 0x3d6f000;
    /*Atlas.Networking.Network$$GetLastSessionId*/ func_0x0149e458(&uStack_b0,param_5,0);
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    uStack_d8 = uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    uStack_d0 = uStack_90;
    uStack_b8 = uStack_78;
    uStack_c0 = uStack_80;
    uVar13 = func_0x00f78ae0(/*Unity.Collections.FixedString64Bytes_TypeInfo*/ uRam0000000003d21940,&uStack_f0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d3a18(lVar10,uVar13,0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar10,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar10,/*STR('Last network error: ')*/ uRam0000000003d6f2d0,0);
    if ((param_4 == (undefined8 *******)0x0) ||
       (pppppuVar14 = param_4[6], pppppuVar14 == (undefined8 *****)0x0)) goto LAB_015073f4;
    unaff_x27 = 0x3d70000;
    unaff_x28 = 0x3d7c000;
    param_4 = (undefined8 *******)0x3d77ca8;
    unaff_x26 = 0x3d6f798;
    param_3 = 0x3d1f498;
    uStack_f1 = (*(code *)(*pppppuVar14)[0x37])(pppppuVar14,(*pppppuVar14)[0x38]);
    uVar13 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_f1);
    /*System.Text.StringBuilder$$Append*/ func_0x029d3a18(lVar10,uVar13,0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar10,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar10,/*STR('Native resolution: ')*/ uRam0000000003d70148,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d385c(lVar10,*(undefined4 *)(param_2 + 0x74),0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar10,/*STR('x')*/ uRam0000000003d7c7e0,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d385c(lVar10,*(undefined4 *)(param_2 + 0x78),0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar10,0);
    uVar13 = /*Core.Settings.DeviceQualitySettings$$GenerateDeviceSpecsString*/ func_0x0168bb30(0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar10,uVar13,0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar10,0);
    if ((int)ppppppuVar12 != 0) {
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar10,/*STR('</html>')*/ uRam0000000003d67c70,0);
    }
    param_5 = /*STR('arcade-support@electricsquare.com')*/ lRam0000000003d77ca8;
    lVar11 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(param_1,/*STR('MESSAGE_TITLE_SUPPORT_EMAIL')*/ uRam0000000003d6f798,0);
    puVar29 = (undefined *)0x1507268;
  }
  lStack_120 = param_2;
  lStack_118 = param_1;
  ppppppuStack_110 = (undefined8 ******)&stack0xfffffffffffffff0;
  puStack_108 = puVar29;
  if ((bRam0000000003eb4d21 & 1) == 0) {
    func_0x00f78a20(0x3d667f0);
    func_0x00f78a20(0x3d66fb0);
    func_0x00f78a20(0x3d667d8);
    func_0x00f78a20(0x3d667e8);
    func_0x00f78a20(0x3d667e0);
    bRam0000000003eb4d21 = 1;
  }
  pppppuVar14 = (undefined8 *****)/*UnityEngine.Networking.UnityWebRequest$$EscapeURL*/ func_0x032f9f08(lVar11,0);
  lVar3 = /*STR('+')*/ lRam0000000003d66fb0;
  lVar23 = /*STR('%20')*/ lRam0000000003d667f0;
  pppppppuStack_150 = param_4;
  puStack_148 = (undefined *)lVar10;
  lStack_138 = lVar11;
  pppppppuStack_130 = &ppppppuStack_110;
  if (pppppuVar14 == (undefined8 *****)0x0) {
    lVar10 = func_0x00f78af4();
    uStack_140 = 0x3eb4000;
    puStack_128 = &Atlas_UI_SupportedInputIconsBehaviour__Init;
    /*Atlas.UI.SupportedInputIconsBehaviour$$SetRequirementsText*/ func_0x01507510();
    pppppppuVar5 = &pppppppuStack_150;
    if ((bRam0000000003eb4d22 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4d22 = 1;
    }
    uVar13 = *(undefined8 *)(lVar10 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar13,0);
    puVar29 = (undefined *)0x3d23990;
    pppppppuVar28 = &pppppppuStack_130;
    if (iVar7 == 0) {
      uVar13 = *(undefined8 *)(lVar10 + 0x28);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar13,0);
      if (iVar7 == 0) {
        uVar13 = *(undefined8 *)(lVar10 + 0x30);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar11 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar13,0);
        if ((int)lVar11 == 0) {
          return (undefined8 *****)lVar11;
        }
        lVar11 = *(long *)(lVar10 + 0x30);
        if (lVar11 == 0) goto code_r0x01507658;
        uVar16 = 0;
        pppppppuVar5 = (undefined8 *******)&lStack_120;
        lVar10 = lStack_138;
        uVar13 = uStack_140;
        puVar29 = puStack_148;
        param_4 = pppppppuStack_150;
        pppppppuVar28 = pppppppuStack_130;
        puVar30 = puStack_128;
      }
      else {
        lVar11 = *(long *)(lVar10 + 0x28);
        if (lVar11 == 0) {
code_r0x01507658:
          lVar11 = func_0x00f78af4();
          lStack_178 = 0x3d23990;
          puStack_158 = &Atlas_UI_SupportedInputIconsBehaviour___ctor;
          ppppppuStack_180 = param_4;
          ppppppuStack_170 = (undefined8 ******)uVar13;
          lStack_168 = lVar10;
          pppppppuStack_160 = &pppppppuStack_130;
          if ((bRam0000000003ebf1b8 & 1) == 0) {
            func_0x00f78a20(0x3d23990,0);
            bRam0000000003ebf1b8 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          return (undefined8 *****)lVar11;
        }
        uVar16 = 1;
        puVar30 = &UNK_015075fc;
      }
    }
    else {
      lVar11 = *(long *)(lVar10 + 0x20);
      if (lVar11 == 0) goto code_r0x01507658;
      uVar16 = 1;
      pppppppuVar5 = &pppppppuStack_150;
      puVar30 = &UNK_015075bc;
    }
    *(undefined8 ********)((long)pppppppuVar5 + -0x30) = param_4;
    *(undefined **)((long)pppppppuVar5 + -0x28) = puVar29;
    *(undefined8 *)((long)pppppppuVar5 + -0x20) = uVar13;
    *(long *)((long)pppppppuVar5 + -0x18) = lVar10;
    *(undefined8 ********)((long)pppppppuVar5 + -0x10) = pppppppuVar28;
    *(undefined **)((long)pppppppuVar5 + -8) = puVar30;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar10 = (*pcRam0000000003ebf4c0)(lVar11,uVar16);
    return (undefined8 *****)lVar10;
  }
  if (/*STR('+')*/ lRam0000000003d66fb0 == 0) {
    uStack_140 = 0x3eb4000;
    puStack_128 = &UNK_015074a0;
    func_0x00f78a24(0x3d1fcf0,0,/*STR('%20')*/ lRam0000000003d667f0,0);
    uVar13 = func_0x00f78aec();
    uVar16 = func_0x00f78a24(0x3d7ac78);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar13,uVar16,0);
    uVar16 = func_0x00f78a24(0x3d5db80);
    func_0x00f78ac0(uVar13,uVar16);
    pppppppuStack_160 = (undefined8 *******)0x3eb4000;
    puStack_148 = &System_Runtime_Remoting_SoapServices___cctor;
    ppppppuStack_170 = param_4;
    lStack_168 = lVar10;
    puStack_158 = (undefined *)uVar13;
    pppppppuStack_150 = &pppppppuStack_130;
    if ((bRam0000000003eb93e7 & 1) == 0) {
      func_0x00f78a20(0x3d21d68);
      func_0x00f78a20(0x3d24ad8);
      bRam0000000003eb93e7 = 1;
    }
    uVar13 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
    /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar13,0);
    **(undefined8 **)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) = uVar13;
    uVar13 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
    /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar13,0);
    *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 8) = uVar13;
    uVar13 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
    /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar13,0);
    *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 0x10) = uVar13;
    uVar13 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
    /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar13,0);
    *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 0x18) = uVar13;
    uVar13 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
    lVar10 = /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar13,0);
    *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 0x20) = uVar13;
    return (undefined8 *****)lVar10;
  }
  uStack_140 = 0x3eb4000;
  puStack_128 = &UNK_015074a0;
  if ((bRam0000000003eb947d & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb947d = 1;
  }
  if (lVar3 == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar16 = func_0x00f78aec();
    uVar13 = func_0x00f78a24(0x3d7ac78);
    puVar18 = (undefined8 *)0x0;
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar16,uVar13);
  }
  else {
    if (*(int *)(lVar3 + 0x10) != 0) {
      if (*(int *)(pppppuVar14 + 2) == 0) {
        return pppppuVar14;
      }
      if (lVar23 == 0) {
        lVar23 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      }
      lStack_188 = *(long *)PTR_03a5d648;
      ppppppuStack_180 = (undefined8 ******)unaff_x28;
      lStack_178 = unaff_x27;
      ppppppuStack_170 = (undefined8 ******)unaff_x26;
      lStack_168 = param_3;
      pppppppuStack_160 = (undefined8 *******)ppppppuVar12;
      puStack_158 = (undefined *)param_5;
      if ((bRam0000000003eb947e & 1) == 0) {
        func_0x00f78a20(0x3d5db90);
        bRam0000000003eb947e = 1;
      }
      if (lVar3 == 0) {
code_r0x029d0f60:
        func_0x00f78af4();
code_r0x029d0f64:
        ___stack_chk_fail();
      }
      else {
        iVar7 = *(int *)(pppppuVar14 + 2);
        if (iVar7 < *(int *)(lVar3 + 0x10)) goto code_r0x029d0f24;
        if (*(int *)(lVar3 + 0x10) == 1) {
          if (lVar23 == 0) goto code_r0x029d0f60;
          if (*(int *)(lVar23 + 0x10) != 1) {
            (*(code *)PTR_03a5d628)();
            _bzero(aiStack_4c0,800);
            goto code_r0x029d0dc8;
          }
          uVar13 = /*System.String$$get_Chars*/ func_0x029c5420(lVar3,0);
          uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(lVar23,0);
          if (*(long *)PTR_03a5d648 == lStack_188) {
            pppppuVar15 = pppppuVar14;
            if ((((uint)uVar13 != uVar8) && (iVar7 = *(int *)(pppppuVar14 + 2), iVar7 != 0)) &&
               (uVar6 = /*System.String$$IndexOfUnchecked*/ func_0x029d0624(pppppuVar14,uVar13,0,iVar7), uVar6 != 0xffffffff)) {
              if ((int)uVar6 < 4) {
                uVar6 = 0;
              }
              uVar27 = (ulong)uVar6;
              pppppuVar15 = (undefined8 *****)func_0x00f834ac(iVar7);
              if (pppppuVar15 == (undefined8 *****)0x0) {
                lVar10 = 0;
              }
              else {
                iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
                lVar10 = (long)pppppuVar15 + (long)iVar7;
              }
              if (uVar6 != 0) {
                /*System.String$$CharCopy*/ func_0x029d0c3c(lVar10,(long)pppppuVar14 + 0x14,uVar27);
              }
              lVar11 = uVar27 * 2;
              if (lVar11 + (long)*(int *)(pppppuVar14 + 2) * -2 != 0) {
                lVar23 = (long)*(int *)(pppppuVar14 + 2) * 2 + uVar27 * -2;
                puVar21 = (ushort *)(lVar11 + (long)pppppuVar14 + 0x14);
                puVar22 = (undefined2 *)(lVar11 + lVar10);
                do {
                  uVar6 = uVar8;
                  if ((uint)*puVar21 != (uint)uVar13) {
                    uVar6 = (uint)*puVar21;
                  }
                  *puVar22 = (short)uVar6;
                  lVar23 = lVar23 + -2;
                  puVar21 = puVar21 + 1;
                  puVar22 = puVar22 + 1;
                } while (lVar23 != 0);
              }
            }
            return pppppuVar15;
          }
          goto code_r0x029d0f64;
        }
        (*(code *)PTR_03a5d628)();
        _bzero(aiStack_4c0,800);
        if (lVar23 == 0) {
          lVar10 = 0;
        }
        else {
code_r0x029d0dc8:
          iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          lVar10 = lVar23 + iVar7;
          iVar7 = *(int *)(pppppuVar14 + 2);
        }
        if (iVar7 < 1) {
code_r0x029d0f24:
          if (*(long *)PTR_03a5d648 == lStack_188) {
            return pppppuVar14;
          }
          goto code_r0x029d0f64;
        }
        uVar27 = 0;
        iVar9 = 0;
        piVar26 = aiStack_4c0;
        do {
          iVar9 = /*System.String$$IndexOfUnchecked*/ func_0x029d07ac(pppppuVar14,lVar3,iVar9,iVar7 - iVar9);
          if (iVar9 < 0) break;
          if (uVar27 == 200) {
            pppppuVar14 = (undefined8 *****)/*System.String$$ReplaceFallback*/ func_0x029d104c(pppppuVar14,lVar3,lVar23,200);
            goto code_r0x029d0f24;
          }
          uVar27 = uVar27 + 1;
          *piVar26 = iVar9;
          iVar9 = *(int *)(lVar3 + 0x10) + iVar9;
          iVar7 = *(int *)(pppppuVar14 + 2);
          piVar26 = piVar26 + 1;
        } while (iVar9 < iVar7);
        if ((int)uVar27 == 0) goto code_r0x029d0f24;
        if (lVar23 == 0) {
          func_0x00f78af4();
          goto code_r0x029d1034;
        }
        lVar11 = (long)*(int *)(lVar23 + 0x10) - (long)*(int *)(lVar3 + 0x10);
        if (lVar11 != (int)lVar11) {
          uVar13 = func_0x00f78b08();
          func_0x00f78ac0(uVar13,uRam0000000003d5db90);
          goto code_r0x029d1034;
        }
        iVar7 = *(int *)(lVar23 + 0x10) - *(int *)(lVar3 + 0x10);
        lVar11 = (uVar27 & 0xffffffff) * (long)iVar7;
        if (lVar11 - (int)lVar11 == 0) {
          iVar7 = iVar7 * (int)uVar27;
          lVar11 = (long)*(int *)(pppppuVar14 + 2) + (long)iVar7;
          if (lVar11 == (int)lVar11) {
            ppppppuStack_190 = (undefined8 ******)pppppuVar14;
            pppppuVar15 = (undefined8 *****)func_0x00f834ac(iVar7 + *(int *)(pppppuVar14 + 2));
            pppppuStack_198 = pppppuVar15;
            if (pppppuVar15 == (undefined8 *****)0x0) {
              lVar11 = 0;
            }
            else {
              iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
              lVar11 = (long)pppppuVar15 + (long)iVar7;
            }
            iVar7 = 0;
            iVar9 = 0;
            piVar26 = aiStack_4c0;
            do {
              iVar1 = *piVar26;
              /*System.String$$CharCopy*/ func_0x029d0c3c(lVar11 + (long)iVar7 * 2,(long)pppppuVar14 + (long)iVar9 * 2 + 0x14,
                              iVar1 - iVar9);
              iVar7 = (iVar1 - iVar9) + iVar7;
              iVar9 = *(int *)(lVar3 + 0x10) + *piVar26;
              /*System.String$$CharCopy*/ func_0x029d0c3c(lVar11 + (long)iVar7 * 2,lVar10,*(undefined4 *)(lVar23 + 0x10));
              iVar7 = *(int *)(lVar23 + 0x10) + iVar7;
              uVar27 = uVar27 - 1;
              piVar26 = piVar26 + 1;
            } while (uVar27 != 0);
            /*System.String$$CharCopy*/ func_0x029d0c3c(lVar11 + (long)iVar7 * 2,(long)pppppuVar14 + (long)iVar9 * 2 + 0x14,
                            *(int *)(ppppppuStack_190 + 2) - iVar9);
            pppppuVar14 = pppppuStack_198;
            goto code_r0x029d0f24;
          }
        }
      }
      uVar13 = func_0x00f78b08();
      func_0x00f78ac0(uVar13,uRam0000000003d5db90);
code_r0x029d1034:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x29d1038);
      (*pcVar4)();
    }
    func_0x00f78a24(0x3d1fce8);
    uVar16 = func_0x00f78aec();
    uVar13 = func_0x00f78a24(0x3d7ac80);
    puVar18 = (undefined8 *)0x0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar16,uVar13);
  }
  uVar13 = func_0x00f78a24(0x3d5db88);
  auVar31 = func_0x00f78ac0(uVar16,uVar13);
  uVar27 = auVar31._8_8_;
  puVar24 = auVar31._0_8_;
  ppppppuStack_180 = (undefined8 ******)0x3eb9000;
  lStack_178 = lVar23;
  puStack_158 = &System_String__Remove;
  pppppppuVar5 = &pppppppuStack_160;
  uVar25 = 0x3eb9000;
  puVar19 = puVar18;
  ppppppuStack_190 = ppppppuVar12;
  lStack_188 = param_5;
  ppppppuStack_170 = (undefined8 ******)pppppuVar14;
  lStack_168 = uVar16;
  pppppppuStack_160 = &pppppppuStack_130;
  if ((bRam0000000003eb9463 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9463 = 1;
  }
  iVar7 = auVar31._8_4_;
  if (iVar7 < 0) {
    uVar13 = func_0x00f78a24(0x3d72d20);
    puVar18 = (undefined8 *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar13,0);
    func_0x00f78a24(0x3d1fcf8);
    uVar27 = func_0x00f78aec();
    uVar13 = 0x3d7b9d0;
  }
  else {
    iVar9 = (int)puVar18;
    if (iVar9 < 0) {
      uVar13 = 0x3d6b268;
    }
    else {
      if (iVar9 <= *(int *)(puVar24 + 2) - iVar7) {
        iVar9 = *(int *)(puVar24 + 2) - iVar9;
        if (iVar9 == 0) {
          return (undefined8 *****)**(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        lVar10 = func_0x00f834ac(iVar9);
        if (lVar10 != 0) {
          /*System.Buffer$$Memcpy*/ func_0x029426bc(lVar10 + 0x14,(undefined1 *)((long)puVar24 + 0x14),iVar7 << 1,0);
          /*System.Buffer$$Memcpy*/ func_0x029426bc(lVar10 + 0x14 + (uVar27 & 0xffffffff) * 2,
                          (undefined1 *)((long)puVar24 + 0x14) +
                          ((ulong)puVar18 & 0xffffffff) * 2 + (uVar27 & 0xffffffff) * 2,
                          (iVar9 - iVar7) * 2,0);
          return (undefined8 *****)lVar10;
        }
        goto code_r0x029cf498;
      }
      uVar13 = 0x3d6ddc0;
    }
    uVar13 = func_0x00f78a24(uVar13);
    puVar18 = (undefined8 *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar13,0);
    func_0x00f78a24(0x3d1fcf8);
    uVar27 = func_0x00f78aec();
    uVar13 = 0x3d78638;
  }
  uVar13 = func_0x00f78a24(uVar13);
  puVar19 = puVar18;
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar27,uVar13,puVar18,0);
  uVar13 = func_0x00f78a24(0x3d5db78);
  func_0x00f78ac0(uVar27,uVar13);
code_r0x029cf498:
  auVar2._8_8_ = puVar18;
  auVar2._0_8_ = uVar27;
  puVar29 = &System_String__FormatHelper;
  auVar31 = func_0x00f78af4();
  ppppppuVar12 = &ppppppuStack_190;
  do {
    lVar10 = auVar31._8_8_;
    *(ulong *)((long)ppppppuVar12 + -0x30) = uVar25;
    *(undefined8 **)((long)ppppppuVar12 + -0x28) = puVar24;
    *(undefined1 (*) [16])((long)ppppppuVar12 + -0x20) = auVar2;
    *(undefined8 ********)((long)ppppppuVar12 + -0x10) = pppppppuVar5;
    *(undefined **)((long)ppppppuVar12 + -8) = puVar29;
    if (lVar10 == 0) {
      func_0x00f78a24(0x3d1fcf0);
      uVar13 = func_0x00f78aec();
      auVar31._8_8_ = uVar13;
      auVar31._0_8_ = auVar2._0_8_;
      uVar16 = func_0x00f78a24(0x3d79450);
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar13,uVar16,0);
      uVar16 = func_0x00f78a24(0x3d5db10);
      func_0x00f78ac0(uVar13,uVar16);
    }
    else {
      uVar8 = *(uint *)(lVar10 + 0x10);
      uVar25 = (ulong)uVar8;
      iVar7 = /*System.ParamsArray$$get_Length*/ func_0x0296db4c(puVar19,0);
      lVar11 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(uVar8 + iVar7 * 8,0);
      puVar24 = puVar19;
      if (lVar11 != 0) {
        uVar13 = *puVar19;
        uVar17 = puVar19[3];
        uVar16 = puVar19[2];
        *(undefined8 *)((long)ppppppuVar12 + -0x48) = puVar19[1];
        *(undefined8 *)((long)ppppppuVar12 + -0x50) = uVar13;
        *(undefined8 *)((long)ppppppuVar12 + -0x38) = uVar17;
        *(undefined8 *)((long)ppppppuVar12 + -0x40) = uVar16;
        uVar13 = /*System.Text.StringBuilder$$AppendFormatHelper*/ func_0x029d3ccc(lVar11,auVar31._0_8_,lVar10,
                                 (undefined1 *)((long)ppppppuVar12 + -0x50),0);
        lVar10 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(uVar13,0);
        return (undefined8 *****)lVar10;
      }
    }
    auVar32 = func_0x00f78af4();
    uVar27 = auVar32._0_8_;
    auVar2._8_8_ = uVar27;
    auVar2._0_8_ = auVar31._0_8_;
    puVar19 = (undefined8 *)((long)ppppppuVar12 + -0xb0);
    *(undefined1 (*) [16])((long)ppppppuVar12 + -0x70) = auVar31;
    *(undefined1 **)((long)ppppppuVar12 + -0x60) = (undefined1 *)((long)ppppppuVar12 + -0x10);
    *(undefined **)((long)ppppppuVar12 + -0x58) = &System_String__Format;
    pppppppuVar5 = (undefined8 *******)((long)ppppppuVar12 + -0x60);
    if (auVar32._8_8_ == 0) {
      uVar13 = 0x3d79450;
      if (uVar27 != 0) {
        uVar13 = 0x3d77ce0;
      }
      uVar13 = func_0x00f78a24(uVar13);
      func_0x00f78a24(0x3d1fcf0);
      uVar16 = func_0x00f78aec();
      uVar20 = 0;
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar16,uVar13,0);
      uVar17 = func_0x00f78a24(0x3d5db00);
      auVar31 = func_0x00f78ac0(uVar16,uVar17);
      puVar19 = (undefined8 *)((long)ppppppuVar12 + -0x110);
      *(undefined8 *)((long)ppppppuVar12 + -0xd0) = uVar16;
      *(undefined8 *)((long)ppppppuVar12 + -200) = uVar13;
      *(undefined8 ********)((long)ppppppuVar12 + -0xc0) = pppppppuVar5;
      *(undefined **)((long)ppppppuVar12 + -0xb8) = &System_String__Format;
      pppppppuVar5 = (undefined8 *******)((long)ppppppuVar12 + -0xc0);
      *(undefined8 *)((long)ppppppuVar12 + -0xe8) = 0;
      *(undefined8 *)((long)ppppppuVar12 + -0xf0) = 0;
      *(undefined8 *)((long)ppppppuVar12 + -0xd8) = 0;
      *(undefined8 *)((long)ppppppuVar12 + -0xe0) = 0;
      /*System.ParamsArray$$.ctor*/ func_0x0296d94c((undefined1 *)((long)ppppppuVar12 + -0xf0),uVar20,0);
      *(undefined8 *)((long)ppppppuVar12 + -0x108) = *(undefined8 *)((long)ppppppuVar12 + -0xe8);
      *(undefined8 *)((long)ppppppuVar12 + -0x110) = *(undefined8 *)((long)ppppppuVar12 + -0xf0);
      *(undefined8 *)((long)ppppppuVar12 + -0xf8) = *(undefined8 *)((long)ppppppuVar12 + -0xd8);
      *(undefined8 *)((long)ppppppuVar12 + -0x100) = *(undefined8 *)((long)ppppppuVar12 + -0xe0);
      puVar29 = &UNK_029cf658;
      ppppppuVar12 = (undefined8 ******)((long)ppppppuVar12 + -0x110);
      auVar2 = auVar31;
    }
    else {
      *(undefined8 *)((long)ppppppuVar12 + -0x88) = 0;
      *(undefined8 *)((long)ppppppuVar12 + -0x90) = 0;
      *(undefined8 *)((long)ppppppuVar12 + -0x78) = 0;
      *(undefined8 *)((long)ppppppuVar12 + -0x80) = 0;
      /*System.ParamsArray$$.ctor*/ func_0x0296dae8((undefined1 *)((long)ppppppuVar12 + -0x90),auVar32._8_8_,0);
      *(undefined8 *)((long)ppppppuVar12 + -0xa8) = *(undefined8 *)((long)ppppppuVar12 + -0x88);
      *(undefined8 *)((long)ppppppuVar12 + -0xb0) = *(undefined8 *)((long)ppppppuVar12 + -0x90);
      *(undefined8 *)((long)ppppppuVar12 + -0x98) = *(undefined8 *)((long)ppppppuVar12 + -0x78);
      *(undefined8 *)((long)ppppppuVar12 + -0xa0) = *(undefined8 *)((long)ppppppuVar12 + -0x80);
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar27;
      auVar31 = auVar32 << 0x40;
      puVar29 = &UNK_029cf5a8;
      ppppppuVar12 = (undefined8 ******)((long)ppppppuVar12 + -0xb0);
    }
  } while( true );
}



// ============================================================
// RVA: 0x1507410 | Atlas.SupportEmail.EscapeURL
// ============================================================

/* WARNING: Possible PIC construction at 0x0150749c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029cf5a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029cf654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015075b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015075f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x029cf5a8) */
/* WARNING: Removing unreachable block (ram,0x015074a0) */
/* WARNING: Removing unreachable block (ram,0x015074a4) */
/* WARNING: Removing unreachable block (ram,0x015074c8) */
/* WARNING: Removing unreachable block (ram,0x029cf658) */

long Atlas_SupportEmail__EscapeURL(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar8;
  int iVar9;
  int iVar7;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  ushort *puVar18;
  long lVar19;
  undefined2 *puVar20;
  long lVar21;
  long lVar22;
  undefined8 unaff_x21;
  long lVar23;
  undefined8 *puVar24;
  undefined8 unaff_x22;
  ulong uVar25;
  int *piVar26;
  ulong uVar27;
  undefined8 ******ppppppuVar28;
  undefined *puVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int aiStack_3c0 [202];
  long lStack_98;
  undefined8 *****pppppuStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb4d21 & 1) == 0) {
    func_0x00f78a20(0x3d667f0);
    func_0x00f78a20(0x3d66fb0);
    func_0x00f78a20(0x3d667d8);
    func_0x00f78a20(0x3d667e8);
    func_0x00f78a20(0x3d667e0);
    bRam0000000003eb4d21 = 1;
  }
  lVar10 = /*UnityEngine.Networking.UnityWebRequest$$EscapeURL*/ func_0x032f9f08(param_1,0);
  lVar12 = /*STR('+')*/ lRam0000000003d66fb0;
  lVar23 = /*STR('%20')*/ lRam0000000003d667f0;
  pppppuStack_30 = (undefined8 *****)&stack0xfffffffffffffff0;
  if (lVar10 == 0) {
    lVar23 = func_0x00f78af4();
    puStack_28 = &Atlas_UI_SupportedInputIconsBehaviour__Init;
    /*Atlas.UI.SupportedInputIconsBehaviour$$SetRequirementsText*/ func_0x01507510();
    puVar5 = &stack0xffffffffffffffb0;
    if ((bRam0000000003eb4d22 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4d22 = 1;
    }
    uVar14 = *(undefined8 *)(lVar23 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar14,0);
    ppppppuVar28 = &pppppuStack_30;
    if (iVar7 == 0) {
      uVar14 = *(undefined8 *)(lVar23 + 0x28);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar14,0);
      if (iVar7 == 0) {
        uVar14 = *(undefined8 *)(lVar23 + 0x30);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar12 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar14,0);
        if ((int)lVar12 == 0) {
          return lVar12;
        }
        lVar12 = *(long *)(lVar23 + 0x30);
        if (lVar12 == 0) goto code_r0x01507658;
        uVar11 = 0;
        uVar14 = 0x3eb4000;
        puVar5 = &stack0xffffffffffffffe0;
        ppppppuVar28 = (undefined8 ******)pppppuStack_30;
        puVar29 = puStack_28;
      }
      else {
        lVar12 = *(long *)(lVar23 + 0x28);
        if (lVar12 == 0) {
code_r0x01507658:
          lVar23 = func_0x00f78af4();
          if ((bRam0000000003ebf1b8 & 1) == 0) {
            func_0x00f78a20(0x3d23990,0);
            bRam0000000003ebf1b8 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          return lVar23;
        }
        uVar11 = 1;
        param_1 = lVar23;
        unaff_x21 = 0x3d23990;
        puVar29 = &UNK_015075fc;
      }
    }
    else {
      lVar12 = *(long *)(lVar23 + 0x20);
      if (lVar12 == 0) goto code_r0x01507658;
      uVar11 = 1;
      puVar5 = &stack0xffffffffffffffb0;
      param_1 = lVar23;
      unaff_x21 = 0x3d23990;
      puVar29 = &UNK_015075bc;
    }
    *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar5 + -0x20) = uVar14;
    *(long *)(puVar5 + -0x18) = param_1;
    *(undefined8 *******)(puVar5 + -0x10) = ppppppuVar28;
    *(undefined **)(puVar5 + -8) = puVar29;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar23 = (*pcRam0000000003ebf4c0)(lVar12,uVar11);
    return lVar23;
  }
  if (/*STR('+')*/ lRam0000000003d66fb0 == 0) {
    puStack_28 = (undefined *)0x15074a0;
    func_0x00f78a24(0x3d1fcf0,0,/*STR('%20')*/ lRam0000000003d667f0,0);
    uVar14 = func_0x00f78aec();
    uVar11 = func_0x00f78a24(0x3d7ac78);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar14,uVar11,0);
    uVar11 = func_0x00f78a24(0x3d5db80);
    func_0x00f78ac0(uVar14,uVar11);
    if ((bRam0000000003eb93e7 & 1) == 0) {
      func_0x00f78a20(0x3d21d68);
      func_0x00f78a20(0x3d24ad8);
      bRam0000000003eb93e7 = 1;
    }
    uVar14 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
    /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar14,0);
    **(undefined8 **)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) = uVar14;
    uVar14 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
    /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar14,0);
    *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 8) = uVar14;
    uVar14 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
    /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar14,0);
    *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 0x10) = uVar14;
    uVar14 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
    /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar14,0);
    *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 0x18) = uVar14;
    uVar14 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
    lVar23 = /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar14,0);
    *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 0x20) = uVar14;
    return lVar23;
  }
  puStack_28 = (undefined *)0x15074a0;
  if ((bRam0000000003eb947d & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb947d = 1;
  }
  if (lVar12 == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar11 = func_0x00f78aec();
    uVar14 = func_0x00f78a24(0x3d7ac78);
    puVar15 = (undefined8 *)0x0;
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar11,uVar14);
  }
  else {
    if (*(int *)(lVar12 + 0x10) != 0) {
      if (*(int *)(lVar10 + 0x10) == 0) {
        return lVar10;
      }
      if (lVar23 == 0) {
        lVar23 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      }
      lVar19 = *(long *)PTR_03a5d648;
      if ((bRam0000000003eb947e & 1) == 0) {
        func_0x00f78a20(0x3d5db90);
        bRam0000000003eb947e = 1;
      }
      if (lVar12 == 0) {
code_r0x029d0f60:
        func_0x00f78af4();
code_r0x029d0f64:
        ___stack_chk_fail();
      }
      else {
        iVar7 = *(int *)(lVar10 + 0x10);
        if (iVar7 < *(int *)(lVar12 + 0x10)) goto code_r0x029d0f24;
        if (*(int *)(lVar12 + 0x10) == 1) {
          if (lVar23 == 0) goto code_r0x029d0f60;
          if (*(int *)(lVar23 + 0x10) != 1) {
            (*(code *)PTR_03a5d628)();
            _bzero(aiStack_3c0,800);
            goto code_r0x029d0dc8;
          }
          uVar14 = /*System.String$$get_Chars*/ func_0x029c5420(lVar12,0);
          uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(lVar23,0);
          if (*(long *)PTR_03a5d648 == lVar19) {
            lVar23 = lVar10;
            if ((((uint)uVar14 != uVar8) && (iVar7 = *(int *)(lVar10 + 0x10), iVar7 != 0)) &&
               (uVar6 = /*System.String$$IndexOfUnchecked*/ func_0x029d0624(lVar10,uVar14,0,iVar7), uVar6 != 0xffffffff)) {
              if ((int)uVar6 < 4) {
                uVar6 = 0;
              }
              uVar27 = (ulong)uVar6;
              lVar23 = func_0x00f834ac(iVar7);
              if (lVar23 == 0) {
                lVar12 = 0;
              }
              else {
                iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
                lVar12 = lVar23 + iVar7;
              }
              if (uVar6 != 0) {
                /*System.String$$CharCopy*/ func_0x029d0c3c(lVar12,lVar10 + 0x14,uVar27);
              }
              lVar19 = uVar27 * 2;
              if (lVar19 + (long)*(int *)(lVar10 + 0x10) * -2 != 0) {
                lVar21 = (long)*(int *)(lVar10 + 0x10) * 2 + uVar27 * -2;
                puVar18 = (ushort *)(lVar19 + lVar10 + 0x14);
                puVar20 = (undefined2 *)(lVar19 + lVar12);
                do {
                  uVar6 = uVar8;
                  if ((uint)*puVar18 != (uint)uVar14) {
                    uVar6 = (uint)*puVar18;
                  }
                  *puVar20 = (short)uVar6;
                  lVar21 = lVar21 + -2;
                  puVar18 = puVar18 + 1;
                  puVar20 = puVar20 + 1;
                } while (lVar21 != 0);
              }
            }
            return lVar23;
          }
          goto code_r0x029d0f64;
        }
        (*(code *)PTR_03a5d628)();
        _bzero(aiStack_3c0,800);
        if (lVar23 == 0) {
          lVar21 = 0;
        }
        else {
code_r0x029d0dc8:
          iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          lVar21 = lVar23 + iVar7;
          iVar7 = *(int *)(lVar10 + 0x10);
        }
        if (iVar7 < 1) {
code_r0x029d0f24:
          if (*(long *)PTR_03a5d648 == lVar19) {
            return lVar10;
          }
          goto code_r0x029d0f64;
        }
        uVar27 = 0;
        iVar9 = 0;
        piVar26 = aiStack_3c0;
        do {
          iVar9 = /*System.String$$IndexOfUnchecked*/ func_0x029d07ac(lVar10,lVar12,iVar9,iVar7 - iVar9);
          if (iVar9 < 0) break;
          if (uVar27 == 200) {
            lVar10 = /*System.String$$ReplaceFallback*/ func_0x029d104c(lVar10,lVar12,lVar23,200);
            goto code_r0x029d0f24;
          }
          uVar27 = uVar27 + 1;
          *piVar26 = iVar9;
          iVar9 = *(int *)(lVar12 + 0x10) + iVar9;
          iVar7 = *(int *)(lVar10 + 0x10);
          piVar26 = piVar26 + 1;
        } while (iVar9 < iVar7);
        if ((int)uVar27 == 0) goto code_r0x029d0f24;
        if (lVar23 == 0) {
          func_0x00f78af4();
          goto code_r0x029d1034;
        }
        lVar22 = (long)*(int *)(lVar23 + 0x10) - (long)*(int *)(lVar12 + 0x10);
        if (lVar22 != (int)lVar22) {
          uVar14 = func_0x00f78b08();
          func_0x00f78ac0(uVar14,uRam0000000003d5db90);
          goto code_r0x029d1034;
        }
        iVar7 = *(int *)(lVar23 + 0x10) - *(int *)(lVar12 + 0x10);
        lVar22 = (uVar27 & 0xffffffff) * (long)iVar7;
        if (lVar22 - (int)lVar22 == 0) {
          iVar7 = iVar7 * (int)uVar27;
          lVar22 = (long)*(int *)(lVar10 + 0x10) + (long)iVar7;
          if (lVar22 == (int)lVar22) {
            lVar22 = func_0x00f834ac(iVar7 + *(int *)(lVar10 + 0x10));
            lStack_98 = lVar22;
            if (lVar22 == 0) {
              lVar22 = 0;
            }
            else {
              iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
              lVar22 = lVar22 + iVar7;
            }
            iVar7 = 0;
            iVar9 = 0;
            piVar26 = aiStack_3c0;
            do {
              iVar1 = *piVar26;
              /*System.String$$CharCopy*/ func_0x029d0c3c(lVar22 + (long)iVar7 * 2,lVar10 + 0x14 + (long)iVar9 * 2,iVar1 - iVar9
                             );
              iVar7 = (iVar1 - iVar9) + iVar7;
              iVar9 = *(int *)(lVar12 + 0x10) + *piVar26;
              /*System.String$$CharCopy*/ func_0x029d0c3c(lVar22 + (long)iVar7 * 2,lVar21,*(undefined4 *)(lVar23 + 0x10));
              iVar7 = *(int *)(lVar23 + 0x10) + iVar7;
              uVar27 = uVar27 - 1;
              piVar26 = piVar26 + 1;
            } while (uVar27 != 0);
            /*System.String$$CharCopy*/ func_0x029d0c3c(lVar22 + (long)iVar7 * 2,lVar10 + 0x14 + (long)iVar9 * 2,
                            *(int *)(lVar10 + 0x10) - iVar9);
            lVar10 = lStack_98;
            goto code_r0x029d0f24;
          }
        }
      }
      uVar14 = func_0x00f78b08();
      func_0x00f78ac0(uVar14,uRam0000000003d5db90);
code_r0x029d1034:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x29d1038);
      (*pcVar3)();
    }
    func_0x00f78a24(0x3d1fce8);
    uVar11 = func_0x00f78aec();
    uVar14 = func_0x00f78a24(0x3d7ac80);
    puVar15 = (undefined8 *)0x0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar11,uVar14);
  }
  uVar14 = func_0x00f78a24(0x3d5db88);
  auVar30 = func_0x00f78ac0(uVar11,uVar14);
  uVar27 = auVar30._8_8_;
  puVar24 = auVar30._0_8_;
  puVar5 = &stack0xffffffffffffffa0;
  uVar25 = 0x3eb9000;
  puVar16 = puVar15;
  if ((bRam0000000003eb9463 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9463 = 1;
  }
  iVar7 = auVar30._8_4_;
  if (iVar7 < 0) {
    uVar14 = func_0x00f78a24(0x3d72d20);
    puVar15 = (undefined8 *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar14,0);
    func_0x00f78a24(0x3d1fcf8);
    uVar27 = func_0x00f78aec();
    uVar14 = 0x3d7b9d0;
  }
  else {
    iVar9 = (int)puVar15;
    if (iVar9 < 0) {
      uVar14 = 0x3d6b268;
    }
    else {
      if (iVar9 <= *(int *)(puVar24 + 2) - iVar7) {
        iVar9 = *(int *)(puVar24 + 2) - iVar9;
        if (iVar9 == 0) {
          return **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        lVar23 = func_0x00f834ac(iVar9);
        if (lVar23 != 0) {
          /*System.Buffer$$Memcpy*/ func_0x029426bc(lVar23 + 0x14,(undefined1 *)((long)puVar24 + 0x14),iVar7 << 1,0);
          /*System.Buffer$$Memcpy*/ func_0x029426bc(lVar23 + 0x14 + (uVar27 & 0xffffffff) * 2,
                          (undefined1 *)((long)puVar24 + 0x14) +
                          ((ulong)puVar15 & 0xffffffff) * 2 + (uVar27 & 0xffffffff) * 2,
                          (iVar9 - iVar7) * 2,0);
          return lVar23;
        }
        goto code_r0x029cf498;
      }
      uVar14 = 0x3d6ddc0;
    }
    uVar14 = func_0x00f78a24(uVar14);
    puVar15 = (undefined8 *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar14,0);
    func_0x00f78a24(0x3d1fcf8);
    uVar27 = func_0x00f78aec();
    uVar14 = 0x3d78638;
  }
  uVar14 = func_0x00f78a24(uVar14);
  puVar16 = puVar15;
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar27,uVar14,puVar15,0);
  uVar14 = func_0x00f78a24(0x3d5db78);
  func_0x00f78ac0(uVar27,uVar14);
code_r0x029cf498:
  auVar2._8_8_ = puVar15;
  auVar2._0_8_ = uVar27;
  puVar29 = &System_String__FormatHelper;
  auVar30 = func_0x00f78af4();
  puVar4 = &stack0xffffffffffffff70;
  do {
    lVar23 = auVar30._8_8_;
    *(ulong *)(puVar4 + -0x30) = uVar25;
    *(undefined8 **)(puVar4 + -0x28) = puVar24;
    *(undefined1 (*) [16])(puVar4 + -0x20) = auVar2;
    *(undefined1 **)(puVar4 + -0x10) = puVar5;
    *(undefined **)(puVar4 + -8) = puVar29;
    if (lVar23 == 0) {
      func_0x00f78a24(0x3d1fcf0);
      uVar14 = func_0x00f78aec();
      auVar30._8_8_ = uVar14;
      auVar30._0_8_ = auVar2._0_8_;
      uVar11 = func_0x00f78a24(0x3d79450);
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar14,uVar11,0);
      uVar11 = func_0x00f78a24(0x3d5db10);
      func_0x00f78ac0(uVar14,uVar11);
    }
    else {
      uVar8 = *(uint *)(lVar23 + 0x10);
      uVar25 = (ulong)uVar8;
      iVar7 = /*System.ParamsArray$$get_Length*/ func_0x0296db4c(puVar16,0);
      lVar12 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(uVar8 + iVar7 * 8,0);
      puVar24 = puVar16;
      if (lVar12 != 0) {
        uVar14 = *puVar16;
        uVar13 = puVar16[3];
        uVar11 = puVar16[2];
        *(undefined8 *)(puVar4 + -0x48) = puVar16[1];
        *(undefined8 *)(puVar4 + -0x50) = uVar14;
        *(undefined8 *)(puVar4 + -0x38) = uVar13;
        *(undefined8 *)(puVar4 + -0x40) = uVar11;
        uVar14 = /*System.Text.StringBuilder$$AppendFormatHelper*/ func_0x029d3ccc(lVar12,auVar30._0_8_,lVar23,puVar4 + -0x50,0);
        lVar23 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(uVar14,0);
        return lVar23;
      }
    }
    auVar31 = func_0x00f78af4();
    uVar27 = auVar31._0_8_;
    auVar2._8_8_ = uVar27;
    auVar2._0_8_ = auVar30._0_8_;
    puVar16 = (undefined8 *)(puVar4 + -0xb0);
    *(undefined1 (*) [16])(puVar4 + -0x70) = auVar30;
    *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -0x58) = &System_String__Format;
    puVar5 = puVar4 + -0x60;
    if (auVar31._8_8_ == 0) {
      uVar14 = 0x3d79450;
      if (uVar27 != 0) {
        uVar14 = 0x3d77ce0;
      }
      uVar14 = func_0x00f78a24(uVar14);
      func_0x00f78a24(0x3d1fcf0);
      uVar11 = func_0x00f78aec();
      uVar17 = 0;
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar11,uVar14,0);
      uVar13 = func_0x00f78a24(0x3d5db00);
      auVar30 = func_0x00f78ac0(uVar11,uVar13);
      puVar16 = (undefined8 *)(puVar4 + -0x110);
      *(undefined8 *)(puVar4 + -0xd0) = uVar11;
      *(undefined8 *)(puVar4 + -200) = uVar14;
      *(undefined1 **)(puVar4 + -0xc0) = puVar5;
      *(undefined **)(puVar4 + -0xb8) = &System_String__Format;
      puVar5 = puVar4 + -0xc0;
      *(undefined8 *)(puVar4 + -0xe8) = 0;
      *(undefined8 *)(puVar4 + -0xf0) = 0;
      *(undefined8 *)(puVar4 + -0xd8) = 0;
      *(undefined8 *)(puVar4 + -0xe0) = 0;
      /*System.ParamsArray$$.ctor*/ func_0x0296d94c(puVar4 + -0xf0,uVar17,0);
      *(undefined8 *)(puVar4 + -0x108) = *(undefined8 *)(puVar4 + -0xe8);
      *(undefined8 *)(puVar4 + -0x110) = *(undefined8 *)(puVar4 + -0xf0);
      *(undefined8 *)(puVar4 + -0xf8) = *(undefined8 *)(puVar4 + -0xd8);
      *(undefined8 *)(puVar4 + -0x100) = *(undefined8 *)(puVar4 + -0xe0);
      puVar29 = &UNK_029cf658;
      puVar4 = puVar4 + -0x110;
      auVar2 = auVar30;
    }
    else {
      *(undefined8 *)(puVar4 + -0x88) = 0;
      *(undefined8 *)(puVar4 + -0x90) = 0;
      *(undefined8 *)(puVar4 + -0x78) = 0;
      *(undefined8 *)(puVar4 + -0x80) = 0;
      /*System.ParamsArray$$.ctor*/ func_0x0296dae8(puVar4 + -0x90,auVar31._8_8_,0);
      *(undefined8 *)(puVar4 + -0xa8) = *(undefined8 *)(puVar4 + -0x88);
      *(undefined8 *)(puVar4 + -0xb0) = *(undefined8 *)(puVar4 + -0x90);
      *(undefined8 *)(puVar4 + -0x98) = *(undefined8 *)(puVar4 + -0x78);
      *(undefined8 *)(puVar4 + -0xa0) = *(undefined8 *)(puVar4 + -0x80);
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar27;
      auVar30 = auVar31 << 0x40;
      puVar29 = &UNK_029cf5a8;
      puVar4 = puVar4 + -0xb0;
    }
  } while( true );
}



