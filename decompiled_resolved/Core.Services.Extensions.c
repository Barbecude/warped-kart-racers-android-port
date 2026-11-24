// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Extensions

// ============================================================
// RVA: 0x1668710 | Core.Services.Extensions.ToStringSafe
// ============================================================

void Core_Services_Extensions__ToStringSafe(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  if ((bRam0000000003eb58ac & 1) == 0) {
    func_0x00f78a20(0x3d20b50);
    bRam0000000003eb58ac = 1;
  }
  if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
  /*System.DateTime$$ToString*/ func_0x02a8f388(&uStack_28,uVar1,0);
  return;
}



// ============================================================
// RVA: 0x166878c | Core.Services.Extensions.ToStringSafe
// ============================================================

void Core_Services_Extensions__ToStringSafe(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uStack_38 = param_1;
  if ((bRam0000000003eb58ad & 1) == 0) {
    func_0x00f78a20(0x3d20b50);
    bRam0000000003eb58ad = 1;
  }
  if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
  /*System.DateTime$$ToString*/ func_0x02a8f438(&uStack_38,param_2,uVar1,0);
  return;
}



// ============================================================
// RVA: 0x1668818 | Core.Services.Extensions.Print
// ============================================================

void Core_Services_Extensions__Print(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  uStack_38 = param_2;
  if ((bRam0000000003eb58ae & 1) == 0) {
    func_0x00f78a20(0x3d25628);
    func_0x00f78a20(0x3d7d130);
    bRam0000000003eb58ae = 1;
  }
  uVar1 = /*Core.Services.Player$$get_Id*/ func_0x0167e3f0(&uStack_40,0);
  uVar2 = /*Core.Services.Player$$get_DisplayName*/ func_0x0167e308(&uStack_40,0);
  uStack_44 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(&uStack_40,0);
  uVar3 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,&uStack_44);
  /*System.String$$Format*/ func_0x029bdf30(/*STR('{{Id={0} Name={1} SyncId={2}}}')*/ uRam0000000003d7d130,uVar1,uVar2,uVar3,0);
  return;
}



// ============================================================
// RVA: 0x16688d4 | Core.Services.Extensions.Print
// ============================================================

/* WARNING: Possible PIC construction at 0x016689bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016689c0) */

void Core_Services_Extensions__Print(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 *extraout_x8;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_1;
  uStack_48 = param_2;
  if ((bRam0000000003eb58af & 1) == 0) {
    func_0x00f78a20(0x3d3ebe8);
    func_0x00f78a20(0x3d3ebf0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d660f8);
    func_0x00f78a20(0x3d70570);
    func_0x00f78a20(0x3d660c8);
    func_0x00f78a20(0x3d7d0b0);
    func_0x00f78a20(0x3d76b68);
    bRam0000000003eb58af = 1;
  }
  lVar4 = 0x3d1f498;
  uVar9 = 0x3d3ebf0;
  uVar8 = 0x3d3ebf0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  lVar7 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  iVar1 = /*Core.Services.Group$$get_OtherMembersLength*/ func_0x01668ce8(&uStack_50);
  if (0 < iVar1) {
    plStack_b0 = (long *)0x0;
    puVar6 = &uStack_88;
    auVar12._8_4_ = 0;
    auVar12._0_8_ = &uStack_50;
    puVar10 = (undefined *)0x16689c0;
    goto code_r0x01668c10;
  }
  plVar2 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,7);
  plStack_b0 = (long *)0x3eb5000;
  if (plVar2 != (long *)0x0) {
    lVar4 = 0x3d7d0b0;
    if ((/*STR('{Id=')*/ lRam0000000003d7d0b0 == 0) ||
       (lVar3 = func_0x00f78adc(/*STR('{Id=')*/ lRam0000000003d7d0b0,*(undefined8 *)(*plVar2 + 0x40)), lVar3 != 0))
    {
      if ((int)plVar2[3] != 0) {
        plVar2[4] = /*STR('{Id=')*/ lRam0000000003d7d0b0;
        lVar4 = /*Core.Services.Group$$get_Id*/ func_0x01668d2c(&uStack_50);
        if ((lVar4 != 0) &&
           (lVar3 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
        goto LAB_01668c00;
        uVar5 = (uint)plVar2[3];
        if ((plVar2[3] & 0xfffffffeU) != 0) {
          plVar2[5] = lVar4;
          uVar9 = uVar8;
          if (/*STR(' Leader=')*/ lRam0000000003d660c8 != 0) {
            lVar3 = func_0x00f78adc(/*STR(' Leader=')*/ lRam0000000003d660c8,*(undefined8 *)(*plVar2 + 0x40));
            if (lVar3 == 0) goto LAB_01668c00;
            uVar5 = (uint)plVar2[3];
          }
          if (2 < uVar5) {
            plVar2[6] = /*STR(' Leader=')*/ lRam0000000003d660c8;
            /*Core.Services.Group$$get_Leader*/ func_0x01668d78(&uStack_88,&uStack_50);
            uStack_68 = uStack_80;
            uStack_70 = uStack_88;
            uStack_60 = uStack_78;
            lVar4 = /*STR('None')*/ lRam0000000003d70570;
            if ((uStack_78 & 0xff) != 0) {
              /*Core.Services.Group$$get_Leader*/ func_0x01668d78(&uStack_88,&uStack_50);
              uStack_68 = uStack_80;
              uStack_70 = uStack_88;
              uStack_60 = uStack_78;
              /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(&uStack_70,uRam0000000003d3ebf0);
              lVar4 = Core_Services_Extensions__Print();
            }
            if ((lVar4 != 0) &&
               (lVar3 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
            goto LAB_01668c00;
            uVar5 = (uint)plVar2[3];
            if ((plVar2[3] & 0xfffffffcU) != 0) {
              uVar9 = 0x3d660f8;
              plVar2[7] = lVar4;
              if (/*STR(' OtherMembers=[')*/ lRam0000000003d660f8 != 0) {
                lVar3 = func_0x00f78adc(/*STR(' OtherMembers=[')*/ lRam0000000003d660f8,*(undefined8 *)(*plVar2 + 0x40));
                if (lVar3 == 0) goto LAB_01668c00;
                uVar5 = (uint)plVar2[3];
              }
              if (4 < uVar5) {
                plVar2[8] = /*STR(' OtherMembers=[')*/ lRam0000000003d660f8;
                if (lVar7 != 0) {
                  lVar3 = func_0x00f78adc(lVar7,*(undefined8 *)(*plVar2 + 0x40));
                  if (lVar3 == 0) goto LAB_01668c00;
                  uVar5 = *(uint *)(plVar2 + 3);
                }
                if (5 < uVar5) {
                  lVar4 = 0x3d76b68;
                  plVar2[9] = lVar7;
                  if (/*STR(']}')*/ lRam0000000003d76b68 != 0) {
                    lVar3 = func_0x00f78adc(/*STR(']}')*/ lRam0000000003d76b68,*(undefined8 *)(*plVar2 + 0x40));
                    if (lVar3 == 0) goto LAB_01668c00;
                    uVar5 = *(uint *)(plVar2 + 3);
                  }
                  if (6 < uVar5) {
                    plVar2[10] = /*STR(']}')*/ lRam0000000003d76b68;
                    /*System.String$$Concat*/ func_0x029cfadc(plVar2,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      uVar8 = func_0x00f78b24();
    }
    else {
LAB_01668c00:
      uVar8 = func_0x00f78b14();
    }
    func_0x00f78ac0(uVar8,0);
    plStack_b0 = plVar2;
  }
  puVar10 = &Core_Services_Group__OtherMembers;
  auVar12 = func_0x00f78af4();
  puVar6 = extraout_x8;
code_r0x01668c10:
  lVar3 = auVar12._0_8_;
  uStack_c0 = uVar9;
  lStack_b8 = lVar4;
  lStack_a8 = lVar7;
  puStack_a0 = &stack0xfffffffffffffff0;
  puStack_98 = puVar10;
  if ((bRam0000000003eb58ca & 1) == 0) {
    func_0x00f78a20(0x3d3ebe0);
    bRam0000000003eb58ca = 1;
  }
  uVar9 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(lVar3,8,0);
  if ((int)uVar9 == 0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
  }
  else {
    uStack_d0 = 0;
    uStack_c8 = 0;
    iVar1 = /*FlatBuffers.Table$$__vector*/ func_0x016cf330(lVar3,uVar9,0);
    uVar9 = /*FlatBuffers.Table$$__indirect*/ func_0x016cf210(lVar3,iVar1 + auVar12._8_4_ * 4,0);
    auVar11 = /*Core.Services.Player$$__assign*/ func_0x0167d6bc(&uStack_d0,uVar9,*(undefined8 *)(lVar3 + 8),0);
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    /*System.Nullable<Player>$$.ctor*/ func_0x0265d8a4(puVar6,auVar11._0_8_,auVar11._8_8_,uRam0000000003d3ebe0);
  }
  return;
}



// ============================================================
// RVA: 0x1668e40 | Core.Services.Extensions.Print
// ============================================================

/* WARNING: Possible PIC construction at 0x01669338: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0166933c) */

void Core_Services_Extensions__Print(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_80 [7];
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  uStack_38 = param_2;
  if ((bRam0000000003eb58b0 & 1) == 0) {
    func_0x00f78a20(0x3d20260);
    func_0x00f78a20(0x3d23288);
    func_0x00f78a20(0x3d3ebf0);
    func_0x00f78a20(0x3d1f218);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d7d140);
    bRam0000000003eb58b0 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  lVar10 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  iVar3 = /*Core.Services.Match$$get_OtherPlayersLength*/ func_0x0167d6d0(&uStack_40,0);
  if (0 < iVar3) {
    iVar3 = 0;
    unaff_x22 = 0x3d3ebf0;
    do {
      /*Core.Services.Match$$OtherPlayers*/ func_0x0167d604(&uStack_78,&uStack_40,iVar3,0);
      uStack_60 = CONCAT71(uStack_77,uStack_78);
      uStack_58 = uStack_70;
      uStack_50 = uStack_68;
      /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(&uStack_60,uRam0000000003d3ebf0);
      uVar5 = Core_Services_Extensions__Print();
      lVar10 = /*System.String$$Concat*/ func_0x029bdb88(lVar10,uVar5,0);
      iVar3 = iVar3 + 1;
      iVar4 = /*Core.Services.Match$$get_OtherPlayersLength*/ func_0x0167d6d0(&uStack_40,0);
    } while (iVar3 < iVar4);
  }
  plVar6 = (long *)func_0x00f78a34(/*object[]_TypeInfo*/ uRam0000000003d1f218,4);
  lVar7 = /*Core.Services.Match$$get_Id*/ func_0x0167d4c8(&uStack_40,0);
  lVar8 = 0x3d1f218;
  if (plVar6 == (long *)0x0) goto LAB_016690a8;
  if ((lVar7 == 0) || (lVar8 = func_0x00f78adc(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 != 0))
  {
    if ((int)plVar6[3] != 0) {
      unaff_x22 = 0x3d23000;
      plVar6[4] = lVar7;
      uStack_78 = /*Core.Services.Match$$get_MatchType*/ func_0x0167d5b0(&uStack_40,0);
      lVar7 = func_0x00f78ae0(/*Core.Services.MatchType_TypeInfo*/ uRam0000000003d23288,&uStack_78);
      if ((lVar7 != 0) &&
         (lVar8 = func_0x00f78adc(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_0166909c;
      uVar9 = (uint)plVar6[3];
      if ((plVar6[3] & 0xfffffffeU) != 0) {
        plVar6[5] = lVar7;
        if (lVar10 != 0) {
          lVar8 = func_0x00f78adc(lVar10,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar8 == 0) goto LAB_0166909c;
          uVar9 = (uint)plVar6[3];
        }
        if (2 < uVar9) {
          lVar7 = 0x3d20000;
          plVar6[6] = lVar10;
          uStack_79 = /*Core.Services.Match$$get_Host*/ func_0x0167d714(&uStack_40,0);
          lVar10 = func_0x00f78ae0(/*bool_TypeInfo*/ uRam0000000003d20260,&uStack_79);
          if ((lVar10 != 0) &&
             (lVar8 = func_0x00f78adc(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
          goto LAB_0166909c;
          if ((*(uint *)(plVar6 + 3) & 0xfffffffc) != 0) {
            plVar6[7] = lVar10;
            /*System.String$$Format*/ func_0x029cf564(/*STR('{{Id={0} Type={1} OtherPlayers=[{2}] Host={3}}}')*/ uRam0000000003d7d140,plVar6,0);
            return;
          }
        }
      }
    }
    uVar5 = func_0x00f78b24();
  }
  else {
LAB_0166909c:
    uVar5 = func_0x00f78b14();
  }
  func_0x00f78ac0(uVar5,0);
  lVar8 = lVar7;
LAB_016690a8:
  puVar12 = &Core_Services_Extensions__Print;
  auVar14 = func_0x00f78af4();
  puVar1 = auStack_80;
  do {
    puVar11 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)(puVar1 + -0x50);
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(long *)(puVar1 + -0x28) = lVar8;
    *(long **)(puVar1 + -0x20) = plVar6;
    *(long *)(puVar1 + -0x18) = lVar10;
    *(undefined1 **)(puVar1 + -0x10) = puVar11;
    *(undefined **)(puVar1 + -8) = puVar12;
    *(undefined1 (*) [16])(puVar1 + -0x40) = auVar14;
    if ((bRam0000000003eb58b1 & 1) == 0) {
      func_0x00f78a20(0x3d20260);
      func_0x00f78a20(0x3d1f218);
      func_0x00f78a20(0x3d24a58);
      func_0x00f78a20(0x3d7d138);
      bRam0000000003eb58b1 = 1;
    }
    plVar6 = (long *)func_0x00f78a34(/*object[]_TypeInfo*/ uRam0000000003d1f218,4);
    lVar7 = Core_Services_Achievement__get_Id(puVar1 + -0x40);
    lVar10 = 0x3d1f218;
    if (plVar6 != (long *)0x0) {
      if ((lVar7 == 0) ||
         (lVar10 = func_0x00f78adc(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar10 != 0)) {
        if ((int)plVar6[3] != 0) {
          plVar6[4] = lVar7;
          lVar7 = Core_Services_Achievement__get_Title(puVar1 + -0x40);
          if ((lVar7 != 0) &&
             (lVar10 = func_0x00f78adc(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
          goto code_r0x01669254;
          if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
            lVar8 = 0x3d24000;
            plVar6[5] = lVar7;
            uVar13 = Core_Services_Achievement__get_PercentComplete(puVar1 + -0x40);
            *(undefined4 *)(puVar1 + -0x44) = uVar13;
            lVar7 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,puVar1 + -0x44);
            if ((lVar7 != 0) &&
               (lVar10 = func_0x00f78adc(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
            goto code_r0x01669254;
            if (2 < *(uint *)(plVar6 + 3)) {
              lVar8 = 0x3d20000;
              plVar6[6] = lVar7;
              uVar2 = Core_Services_Achievement__get_Completed(puVar1 + -0x40);
              puVar1[-0x45] = uVar2;
              lVar7 = func_0x00f78ae0(/*bool_TypeInfo*/ uRam0000000003d20260,puVar1 + -0x45);
              if ((lVar7 != 0) &&
                 (lVar10 = func_0x00f78adc(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
              goto code_r0x01669254;
              if ((*(uint *)(plVar6 + 3) & 0xfffffffc) != 0) {
                plVar6[7] = lVar7;
                /*System.String$$Format*/ func_0x029cf564(/*STR('{{Id={0} Title={1} {2}% Completed={3}}}')*/ uRam0000000003d7d138,plVar6,0);
                return;
              }
            }
          }
        }
        uVar5 = func_0x00f78b24();
      }
      else {
code_r0x01669254:
        uVar5 = func_0x00f78b14();
      }
      func_0x00f78ac0(uVar5,0);
      lVar10 = lVar7;
    }
    auVar14 = func_0x00f78af4();
    *(undefined8 *)(puVar1 + -0x90) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x88) = unaff_x23;
    *(undefined8 *)(puVar1 + -0x80) = unaff_x22;
    *(long *)(puVar1 + -0x78) = lVar8;
    *(long *)(puVar1 + -0x70) = lVar10;
    *(long **)(puVar1 + -0x68) = plVar6;
    *(undefined1 **)(puVar1 + -0x60) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x58) = &Core_Services_Extensions__Print;
    *(undefined1 (*) [16])(puVar1 + -0xa0) = auVar14;
    if ((bRam0000000003eb58b2 & 1) == 0) {
      func_0x00f78a20(0x3d3e590);
      func_0x00f78a20(0x3d24dd0);
      func_0x00f78a20(0x3d7d0a0);
      func_0x00f78a20(0x3d76b68);
      bRam0000000003eb58b2 = 1;
    }
    lVar8 = 0x3d7d0a0;
    unaff_x22 = 0x3d76b68;
    *(undefined8 *)(puVar1 + -0xc0) = 0;
    *(undefined8 *)(puVar1 + -0xb8) = 0;
    *(undefined8 *)(puVar1 + -0xb0) = 0;
    lVar10 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    iVar3 = Core_Services_Achievements__get_DataLength(puVar1 + -0xa0);
    if (iVar3 < 1) {
      /*System.String$$Concat*/ func_0x029be39c(/*STR('{Achievements=[')*/ uRam0000000003d7d0a0,lVar10,/*STR(']}')*/ uRam0000000003d76b68,0);
      return;
    }
    plVar6 = (long *)0x0;
    unaff_x23 = 0x3d3e590;
    Core_Services_Achievements__Data(puVar1 + -0xd8,puVar1 + -0xa0,0);
    *(undefined8 *)(puVar1 + -0xb8) = *(undefined8 *)(puVar1 + -0xd0);
    *(undefined8 *)(puVar1 + -0xc0) = *(undefined8 *)(puVar1 + -0xd8);
    *(undefined8 *)(puVar1 + -0xb0) = *(undefined8 *)(puVar1 + -200);
    auVar14 = /*System.Nullable<Achievement>$$get_Value*/ func_0x0261948c(puVar1 + -0xc0,uRam0000000003d3e590);
    puVar12 = &UNK_0166933c;
    puVar1 = puVar1 + -0xe0;
  } while( true );
}



// ============================================================
// RVA: 0x16690ac | Core.Services.Extensions.Print
// ============================================================

void Core_Services_Extensions__Print(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined1 uStack_45;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  uStack_38 = param_2;
  if ((bRam0000000003eb58b1 & 1) == 0) {
    func_0x00f78a20(0x3d20260);
    func_0x00f78a20(0x3d1f218);
    func_0x00f78a20(0x3d24a58);
    func_0x00f78a20(0x3d7d138);
    bRam0000000003eb58b1 = 1;
  }
  plVar3 = (long *)func_0x00f78a34(/*object[]_TypeInfo*/ uRam0000000003d1f218,4);
  lVar4 = Core_Services_Achievement__get_Id(&uStack_40);
  if (plVar3 == (long *)0x0) goto LAB_01669260;
  if ((lVar4 == 0) || (lVar5 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 != 0))
  {
    if ((int)plVar3[3] != 0) {
      plVar3[4] = lVar4;
      lVar4 = Core_Services_Achievement__get_Title(&uStack_40);
      if ((lVar4 != 0) &&
         (lVar5 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_01669254;
      if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
        plVar3[5] = lVar4;
        uStack_44 = Core_Services_Achievement__get_PercentComplete(&uStack_40);
        lVar4 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&uStack_44);
        if ((lVar4 != 0) &&
           (lVar5 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_01669254;
        if (2 < *(uint *)(plVar3 + 3)) {
          plVar3[6] = lVar4;
          uStack_45 = Core_Services_Achievement__get_Completed(&uStack_40);
          lVar4 = func_0x00f78ae0(/*bool_TypeInfo*/ uRam0000000003d20260,&uStack_45);
          if ((lVar4 != 0) &&
             (lVar5 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_01669254;
          if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
            plVar3[7] = lVar4;
            /*System.String$$Format*/ func_0x029cf564(/*STR('{{Id={0} Title={1} {2}% Completed={3}}}')*/ uRam0000000003d7d138,plVar3,0);
            return;
          }
        }
      }
    }
    uVar6 = func_0x00f78b24();
  }
  else {
LAB_01669254:
    uVar6 = func_0x00f78b14();
  }
  func_0x00f78ac0(uVar6,0);
LAB_01669260:
  auStack_a0 = func_0x00f78af4();
  if ((bRam0000000003eb58b2 & 1) == 0) {
    func_0x00f78a20(0x3d3e590);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d7d0a0);
    func_0x00f78a20(0x3d76b68);
    bRam0000000003eb58b2 = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uVar6 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  iVar1 = Core_Services_Achievements__get_DataLength(auStack_a0);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      Core_Services_Achievements__Data(&uStack_d8,auStack_a0,iVar1);
      uStack_b8 = uStack_d0;
      uStack_c0 = uStack_d8;
      uStack_b0 = uStack_c8;
      /*System.Nullable<Achievement>$$get_Value*/ func_0x0261948c(&uStack_c0,uRam0000000003d3e590);
      uVar7 = Core_Services_Extensions__Print();
      uVar6 = /*System.String$$Concat*/ func_0x029bdb88(uVar6,uVar7,0);
      iVar1 = iVar1 + 1;
      iVar2 = Core_Services_Achievements__get_DataLength(auStack_a0);
    } while (iVar1 < iVar2);
  }
  /*System.String$$Concat*/ func_0x029be39c(/*STR('{Achievements=[')*/ uRam0000000003d7d0a0,uVar6,/*STR(']}')*/ uRam0000000003d76b68,0);
  return;
}



// ============================================================
// RVA: 0x1669264 | Core.Services.Extensions.Print
// ============================================================

void Core_Services_Extensions__Print(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_1;
  uStack_48 = param_2;
  if ((bRam0000000003eb58b2 & 1) == 0) {
    func_0x00f78a20(0x3d3e590);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d7d0a0);
    func_0x00f78a20(0x3d76b68);
    bRam0000000003eb58b2 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uVar4 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  iVar1 = Core_Services_Achievements__get_DataLength(&uStack_50);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      Core_Services_Achievements__Data(&uStack_88,&uStack_50,iVar1);
      uStack_68 = uStack_80;
      uStack_70 = uStack_88;
      uStack_60 = uStack_78;
      /*System.Nullable<Achievement>$$get_Value*/ func_0x0261948c(&uStack_70,uRam0000000003d3e590);
      uVar3 = Core_Services_Extensions__Print();
      uVar4 = /*System.String$$Concat*/ func_0x029bdb88(uVar4,uVar3,0);
      iVar1 = iVar1 + 1;
      iVar2 = Core_Services_Achievements__get_DataLength(&uStack_50);
    } while (iVar1 < iVar2);
  }
  /*System.String$$Concat*/ func_0x029be39c(/*STR('{Achievements=[')*/ uRam0000000003d7d0a0,uVar4,/*STR(']}')*/ uRam0000000003d76b68,0);
  return;
}



// ============================================================
// RVA: 0x1669390 | Core.Services.Extensions.Print
// ============================================================

/* WARNING: Possible PIC construction at 0x01669424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01669470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016694c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cce10: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x016cce14) */
/* WARNING: Removing unreachable block (ram,0x016694c4) */
/* WARNING: Removing unreachable block (ram,0x016694ec) */
/* WARNING: Removing unreachable block (ram,0x01669500) */
/* WARNING: Removing unreachable block (ram,0x0166950c) */
/* WARNING: Removing unreachable block (ram,0x01669530) */
/* WARNING: Removing unreachable block (ram,0x01669544) */
/* WARNING: Removing unreachable block (ram,0x01669550) */
/* WARNING: Removing unreachable block (ram,0x01669564) */
/* WARNING: Removing unreachable block (ram,0x01669578) */
/* WARNING: Removing unreachable block (ram,0x01669584) */
/* WARNING: Removing unreachable block (ram,0x01669474) */
/* WARNING: Removing unreachable block (ram,0x0166948c) */
/* WARNING: Removing unreachable block (ram,0x016694a0) */
/* WARNING: Removing unreachable block (ram,0x016694ac) */
/* WARNING: Removing unreachable block (ram,0x01669428) */
/* WARNING: Removing unreachable block (ram,0x0166943c) */
/* WARNING: Removing unreachable block (ram,0x01669444) */
/* WARNING: Removing unreachable block (ram,0x016695bc) */
/* WARNING: Removing unreachable block (ram,0x01669458) */
/* WARNING: Removing unreachable block (ram,0x016695b4) */
/* WARNING: Removing unreachable block (ram,0x016695c0) */
/* WARNING: Removing unreachable block (ram,0x016695c8) */
/* WARNING: Removing unreachable block (ram,0x01669460) */
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

long Core_Services_Extensions__Print(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *extraout_x8;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_40 = param_1;
  lStack_38 = param_2;
  if ((bRam0000000003eb58b3 & 1) == 0) {
    func_0x00f78a20(0x3d3ebf0);
    func_0x00f78a20(0x3d1f218);
    func_0x00f78a20(0x3d25628);
    func_0x00f78a20(0x3d25638);
    func_0x00f78a20(0x3d7d160);
    bRam0000000003eb58b3 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_a8 = (undefined8 *)func_0x00f78a34(/*object[]_TypeInfo*/ uRam0000000003d1f218,5);
  puVar11 = &uStack_40;
  uStack_b0 = 0x3d25628;
  uStack_98 = 0x1669428;
  puStack_a0 = &stack0xfffffffffffffff0;
  lVar5 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(puVar11,10,0);
  if ((int)lVar5 == 0) {
    return lVar5;
  }
  if (lStack_38 == 0) {
    piVar6 = (int *)func_0x00f78af4();
    puStack_b8 = &Core_Services_LeaderboardScore__get_Value;
    iVar4 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar6,0xc,0);
    if (iVar4 == 0) {
      return 0;
    }
    lVar5 = *(long *)(piVar6 + 2);
    if (lVar5 == 0) {
      piVar6 = (int *)func_0x00f78af4();
      if ((bRam0000000003eb59c8 & 1) == 0) {
        func_0x00f78a20(0x3d3ebe0);
        bRam0000000003eb59c8 = 1;
      }
      lVar5 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar6,8,0);
      if ((int)lVar5 == 0) {
        *extraout_x8 = 0;
        extraout_x8[1] = 0;
        extraout_x8[2] = 0;
      }
      else {
        uStack_110 = 0;
        uStack_108 = 0;
        uVar8 = /*FlatBuffers.Table$$__indirect*/ func_0x016cf210(piVar6,*piVar6 + (int)lVar5,0);
        auVar15 = /*Core.Services.Player$$__assign*/ func_0x0167d6bc(&uStack_110,uVar8,*(undefined8 *)(piVar6 + 2),0);
        extraout_x8[1] = 0;
        extraout_x8[2] = 0;
        *extraout_x8 = 0;
        lVar5 = /*System.Nullable<Player>$$.ctor*/ func_0x0265d8a4(extraout_x8,auVar15._0_8_,auVar15._8_8_,uRam0000000003d3ebe0);
      }
      return lVar5;
    }
    uVar1 = *piVar6 + iVar4;
    ppuVar2 = (undefined1 **)&uStack_b0;
    uVar8 = 0x3d25628;
    uVar10 = 8;
  }
  else {
    uVar1 = (int)uStack_40 + (int)lVar5;
    ppuVar2 = &puStack_a0;
    uVar10 = 4;
    puStack_b8 = &UNK_016cce14;
    lVar5 = lStack_38;
    puVar11 = puStack_a8;
    uVar8 = uStack_b0;
  }
  auVar15._8_4_ = uVar1;
  auVar15._0_8_ = lVar5;
  auVar15._12_4_ = 0;
  *(undefined8 *)((long)ppuVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)ppuVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)ppuVar2 + -0x30) = unaff_x22;
  *(undefined8 *)((long)ppuVar2 + -0x28) = 0x3eb5000;
  *(undefined8 *)((long)ppuVar2 + -0x20) = uVar8;
  *(undefined8 **)((long)ppuVar2 + -0x18) = puVar11;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = &puStack_a0;
  *(undefined **)((long)ppuVar2 + -8) = puStack_b8;
  puVar13 = (undefined1 *)((long)ppuVar2 + -0x10);
  if ((bRam0000000003eb5cd0 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd0 = 1;
  }
  puVar14 = &UNK_016cc68c;
  puVar3 = (undefined1 *)((long)ppuVar2 + -0x40);
  uVar7 = (ulong)uVar1;
  uVar12 = uVar10;
  do {
    uVar9 = uVar10;
    lVar5 = auVar15._0_8_;
    *(ulong *)(puVar3 + -0x20) = uVar12;
    *(ulong *)(puVar3 + -0x18) = uVar7;
    *(undefined1 **)(puVar3 + -0x10) = puVar13;
    *(undefined **)(puVar3 + -8) = puVar14;
    if (auVar15._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar7 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar7,0);
      uVar8 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar7,uVar8);
    }
    else if (*(long *)(lVar5 + 0x10) != 0) {
      if (auVar15._8_4_ <= *(int *)(*(long *)(lVar5 + 0x10) + 0x18) - (int)uVar9) {
        return lVar5;
      }
      goto code_r0x016cc7d8;
    }
    auVar15 = func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x50) = 0x3d201a0;
    *(long *)(puVar3 + -0x48) = lVar5;
    *(ulong *)(puVar3 + -0x40) = uVar12;
    *(ulong *)(puVar3 + -0x38) = uVar7;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x28) = &FlatBuffers_ByteBuffer__PutSbyte;
    puVar13 = puVar3 + -0x30;
    puVar14 = &UNK_016cc834;
    puVar3 = puVar3 + -0x50;
    uVar10 = 1;
    uVar7 = uVar9;
    uVar12 = auVar15._8_8_;
  } while( true );
}



// ============================================================
// RVA: 0x16697e4 | Core.Services.Extensions.Print
// ============================================================

void Core_Services_Extensions__Print(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_1;
  uStack_48 = param_2;
  if ((bRam0000000003eb58b4 & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d3ead0);
    func_0x00f78a20(0x3d3eab8);
    func_0x00f78a20(0x3d3ead8);
    func_0x00f78a20(0x3d3eac0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d66050);
    func_0x00f78a20(0x3d66110);
    func_0x00f78a20(0x3d660d8);
    func_0x00f78a20(0x3d7d158);
    func_0x00f78a20(0x3d76b68);
    func_0x00f78a20(0x3d66060);
    bRam0000000003eb58b4 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar5 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  iVar1 = /*Core.Services.LeaderboardScores$$get_DataLength*/ func_0x01669bb8(&uStack_50);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      /*Core.Services.LeaderboardScores$$Data*/ func_0x01669b00(&uStack_a8,&uStack_50,iVar1);
      uStack_70 = CONCAT44(uStack_a4,uStack_a8);
      uStack_68 = uStack_a0;
      uStack_60 = uStack_98;
      /*System.Nullable<LeaderboardScore>$$get_Value*/ func_0x0265abc0(&uStack_70,uRam0000000003d3ead8);
      uVar3 = Core_Services_Extensions__Print();
      uVar5 = /*System.String$$Concat*/ func_0x029bdb88(uVar5,uVar3,0);
      iVar1 = iVar1 + 1;
      iVar2 = /*Core.Services.LeaderboardScores$$get_DataLength*/ func_0x01669bb8(&uStack_50);
    } while (iVar1 < iVar2);
  }
  uStack_a8 = /*Core.Services.LeaderboardScores$$get_MaxRange*/ func_0x01669bfc(&uStack_50);
  uVar3 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_a8);
  uVar3 = /*System.String$$Format*/ func_0x029bc688(/*STR('{{MaxRange={0}')*/ uRam0000000003d7d158,uVar3,0);
  /*Core.Services.LeaderboardScores$$get_CurrentOccurrence*/ func_0x01669c50(&uStack_90,&uStack_50);
  if ((char)uStack_80 != '\0') {
    /*Core.Services.LeaderboardScores$$get_CurrentOccurrence*/ func_0x01669c50(&uStack_a8,&uStack_50);
    uStack_90 = CONCAT44(uStack_a4,uStack_a8);
    uStack_88 = uStack_a0;
    uStack_80 = uStack_98;
    /*System.Nullable<LeaderboardOccurrence>$$get_Value*/ func_0x0265a604(&uStack_90,uRam0000000003d3eac0);
    uVar4 = /*Core.Services.Extensions$$Print*/ func_0x01669cf8();
    uVar3 = /*System.String$$Concat*/ func_0x029be39c(uVar3,/*STR(' CurrentOccurrence=')*/ uRam0000000003d66050,uVar4,0);
  }
  /*Core.Services.LeaderboardScores$$get_LocalPlayerScore*/ func_0x01669f14(&uStack_a8,&uStack_50);
  uStack_70 = CONCAT44(uStack_a4,uStack_a8);
  uStack_68 = uStack_a0;
  uStack_60 = uStack_98;
  if ((uStack_98 & 0xff) != 0) {
    /*Core.Services.LeaderboardScores$$get_LocalPlayerScore*/ func_0x01669f14(&uStack_a8,&uStack_50);
    uStack_70 = CONCAT44(uStack_a4,uStack_a8);
    uStack_68 = uStack_a0;
    uStack_60 = uStack_98;
    /*System.Nullable<LeaderboardScore>$$get_Value*/ func_0x0265abc0(&uStack_70,uRam0000000003d3ead8);
    uVar4 = Core_Services_Extensions__Print();
    uVar3 = /*System.String$$Concat*/ func_0x029be39c(uVar3,/*STR(' LocalPlayerScore=')*/ uRam0000000003d660d8,uVar4,0);
  }
  /*Core.Services.LeaderboardScores$$get_PreviousOccurrence*/ func_0x01669fbc(&uStack_a8,&uStack_50);
  uStack_90 = CONCAT44(uStack_a4,uStack_a8);
  uStack_88 = uStack_a0;
  uStack_80 = uStack_98;
  if ((uStack_98 & 0xff) != 0) {
    /*Core.Services.LeaderboardScores$$get_PreviousOccurrence*/ func_0x01669fbc(&uStack_a8,&uStack_50);
    uStack_90 = CONCAT44(uStack_a4,uStack_a8);
    uStack_88 = uStack_a0;
    uStack_80 = uStack_98;
    /*System.Nullable<LeaderboardOccurrence>$$get_Value*/ func_0x0265a604(&uStack_90,uRam0000000003d3eac0);
    uVar4 = /*Core.Services.Extensions$$Print*/ func_0x01669cf8();
    uVar3 = /*System.String$$Concat*/ func_0x029be39c(uVar3,/*STR(' PreviousOccurrence=')*/ uRam0000000003d66110,uVar4,0);
  }
  /*System.String$$Concat*/ func_0x029be818(uVar3,/*STR(' Data=[')*/ uRam0000000003d66060,uVar5,/*STR(']}')*/ uRam0000000003d76b68,0);
  return;
}



// ============================================================
// RVA: 0x1669cf8 | Core.Services.Extensions.Print
// ============================================================

void Core_Services_Extensions__Print(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong *extraout_x8;
  undefined1 auVar10 [16];
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  uStack_38 = param_2;
  if ((bRam0000000003eb58b8 & 1) == 0) {
    func_0x00f78a20(0x3d210a0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d7d0e0);
    func_0x00f78a20(0x3d66e70);
    func_0x00f78a20(0x3d66e68);
    bRam0000000003eb58b8 = 1;
  }
  plVar2 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,5);
  if (plVar2 == (long *)0x0) goto LAB_01669f10;
  if ((/*STR('{StartDate=')*/ lRam0000000003d7d0e0 == 0) ||
     (lVar3 = func_0x00f78adc(/*STR('{StartDate=')*/ lRam0000000003d7d0e0,*(undefined8 *)(*plVar2 + 0x40)), lVar3 != 0)) {
    if ((int)plVar2[3] != 0) {
      plVar2[4] = /*STR('{StartDate=')*/ lRam0000000003d7d0e0;
      uVar4 = /*Core.Services.LeaderboardOccurrence$$get_StartDate*/ func_0x0166a5b8(&uStack_40);
      if (((*(ushort *)(/*System.DateTimeOffset_TypeInfo*/ lRam0000000003d210a0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTimeOffset_TypeInfo*/ lRam0000000003d210a0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auStack_50 = /*System.DateTimeOffset$$FromUnixTimeSeconds*/ func_0x02a9a64c(uVar4,0);
      /*System.DateTimeOffset$$get_UtcDateTime*/ func_0x02a9a044(auStack_50,0);
      lVar3 = Core_Services_Extensions__ToStringSafe();
      if ((lVar3 != 0) &&
         (lVar5 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
      goto LAB_01669f04;
      uVar9 = (uint)plVar2[3];
      if ((plVar2[3] & 0xfffffffeU) != 0) {
        plVar2[5] = lVar3;
        if (/*STR('(UTC) NextStartDate=')*/ lRam0000000003d66e68 != 0) {
          lVar3 = func_0x00f78adc(/*STR('(UTC) NextStartDate=')*/ lRam0000000003d66e68,*(undefined8 *)(*plVar2 + 0x40));
          if (lVar3 == 0) goto LAB_01669f04;
          uVar9 = (uint)plVar2[3];
        }
        if (2 < uVar9) {
          plVar2[6] = /*STR('(UTC) NextStartDate=')*/ lRam0000000003d66e68;
          uVar4 = /*Core.Services.LeaderboardOccurrence$$get_NextStartDate*/ func_0x0166a610(&uStack_40);
          auVar10 = /*System.DateTimeOffset$$FromUnixTimeSeconds*/ func_0x02a9a64c(uVar4,0);
          auStack_50 = auVar10;
          /*System.DateTimeOffset$$get_UtcDateTime*/ func_0x02a9a044(auStack_50,0);
          lVar3 = Core_Services_Extensions__ToStringSafe();
          if ((lVar3 != 0) &&
             (lVar5 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
          goto LAB_01669f04;
          uVar9 = (uint)plVar2[3];
          if ((plVar2[3] & 0xfffffffcU) != 0) {
            plVar2[7] = lVar3;
            if (/*STR('(UTC)}')*/ lRam0000000003d66e70 != 0) {
              lVar3 = func_0x00f78adc(/*STR('(UTC)}')*/ lRam0000000003d66e70,*(undefined8 *)(*plVar2 + 0x40));
              if (lVar3 == 0) goto LAB_01669f04;
              uVar9 = (uint)plVar2[3];
            }
            if (4 < uVar9) {
              plVar2[8] = /*STR('(UTC)}')*/ lRam0000000003d66e70;
              /*System.String$$Concat*/ func_0x029cfadc(plVar2,0);
              return;
            }
          }
        }
      }
    }
    uVar4 = func_0x00f78b24();
  }
  else {
LAB_01669f04:
    uVar4 = func_0x00f78b14();
  }
  func_0x00f78ac0(uVar4,0);
LAB_01669f10:
  piVar6 = (int *)func_0x00f78af4();
  if ((bRam0000000003eb59cb & 1) == 0) {
    func_0x00f78a20(0x3d3eac8);
    bRam0000000003eb59cb = 1;
  }
  iVar1 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar6,8,0);
  if (iVar1 != 0) {
    uVar7 = /*FlatBuffers.Table$$__indirect*/ func_0x016cf210(piVar6,*piVar6 + iVar1,0);
    uVar8 = *(ulong *)(piVar6 + 2);
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    *extraout_x8 = 0;
    *(undefined1 *)(extraout_x8 + 2) = 1;
    *extraout_x8 = uVar7 & 0xffffffff;
    extraout_x8[1] = uVar8;
    return;
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  return;
}



// ============================================================
// RVA: 0x166a064 | Core.Services.Extensions.Print
// ============================================================

void Core_Services_Extensions__Print(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 auStack_f8 [2];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined4 uStack_58;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  uStack_38 = param_2;
  if ((bRam0000000003eb58b5 & 1) == 0) {
    func_0x00f78a20(0x3d20260);
    func_0x00f78a20(0x3d210a0);
    func_0x00f78a20(0x3d1f218);
    func_0x00f78a20(0x3d25628);
    func_0x00f78a20(0x3d7d128);
    bRam0000000003eb58b5 = 1;
  }
  uVar2 = /*Core.Services.SaveFile$$get_LastUpdatedAt*/ func_0x01684588(&uStack_40,0);
  if (((*(ushort *)(/*System.DateTimeOffset_TypeInfo*/ lRam0000000003d210a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTimeOffset_TypeInfo*/ lRam0000000003d210a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auStack_50 = /*System.DateTimeOffset$$FromUnixTimeSeconds*/ func_0x02a9a64c(uVar2,0);
  lVar3 = /*System.DateTimeOffset$$get_DateTime*/ func_0x02a99f8c(auStack_50,0);
  plVar4 = (long *)func_0x00f78a34(/*object[]_TypeInfo*/ uRam0000000003d1f218,5);
  uStack_51 = /*Core.Services.SaveFile$$get_Dirty*/ func_0x016844e0(&uStack_40,0);
  lVar5 = func_0x00f78ae0(/*bool_TypeInfo*/ uRam0000000003d20260,&uStack_51);
  lStack_88 = 0x3d1f218;
  if (plVar4 == (long *)0x0) goto LAB_0166a2c8;
  if ((lVar5 == 0) || (lVar6 = func_0x00f78adc(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 != 0))
  {
    if ((int)plVar4[3] != 0) {
      plVar4[4] = lVar5;
      uStack_52 = /*Core.Services.SaveFile$$get_Deleted*/ func_0x01684534(&uStack_40,0);
      lVar5 = func_0x00f78ae0(/*bool_TypeInfo*/ uRam0000000003d20260,&uStack_52);
      if ((lVar5 != 0) &&
         (lVar6 = func_0x00f78adc(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
      goto LAB_0166a2bc;
      if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
        plVar4[5] = lVar5;
        lVar3 = Core_Services_Extensions__ToStringSafe(lVar3);
        if ((lVar3 != 0) &&
           (lVar6 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
        goto LAB_0166a2bc;
        if (2 < *(uint *)(plVar4 + 3)) {
          plVar4[6] = lVar3;
          lVar3 = /*Core.Services.SaveFile$$get_DeviceName*/ func_0x016845e0(&uStack_40,0);
          if ((lVar3 != 0) &&
             (lVar6 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
          goto LAB_0166a2bc;
          if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
            lVar5 = 0x3d25000;
            plVar4[7] = lVar3;
            uStack_58 = /*Core.Services.SaveFile$$get_Size*/ func_0x016846c8(&uStack_40,0);
            lVar3 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,&uStack_58);
            if ((lVar3 != 0) &&
               (lVar6 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
            goto LAB_0166a2bc;
            if (4 < *(uint *)(plVar4 + 3)) {
              plVar4[8] = lVar3;
              /*System.String$$Format*/ func_0x029cf564(/*STR('{{Dirty={0} Deleted={1} LastUpdatedAt={2} DeviceName={3} Size={4} }}')*/ uRam0000000003d7d128,plVar4,0);
              return;
            }
          }
        }
      }
    }
    uVar2 = func_0x00f78b24();
  }
  else {
LAB_0166a2bc:
    uVar2 = func_0x00f78b14();
  }
  func_0x00f78ac0(uVar2,0);
  lStack_88 = lVar5;
LAB_0166a2c8:
  auStack_a0 = func_0x00f78af4();
  uStack_90 = 0x3d20260;
  puStack_68 = &Core_Services_Extensions__Print;
  lStack_80 = lVar3;
  plStack_78 = plVar4;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb58b6 & 1) == 0) {
    func_0x00f78a20(0x3d3ece8);
    func_0x00f78a20(0x3d3ecf0);
    func_0x00f78a20(0x3d25628);
    func_0x00f78a20(0x3d7d150);
    func_0x00f78a20(0x3d7d148);
    bRam0000000003eb58b6 = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  /*Core.Services.Save$$get_RemoteConflict*/ func_0x01684294(&uStack_c0,auStack_a0,0);
  cVar1 = (char)uStack_b0;
  auStack_f8[0] = /*Core.Services.Save$$get_Index*/ func_0x01684184(auStack_a0,0);
  if (cVar1 == '\0') {
    uVar2 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,auStack_f8);
    /*Core.Services.Save$$get_Local*/ func_0x016841d8(&uStack_e0,auStack_a0,0);
    uStack_b8 = uStack_d8;
    uStack_c0 = uStack_e0;
    uStack_b0 = uStack_d0;
    /*System.Nullable<SaveFile>$$get_Value*/ func_0x0266027c(&uStack_c0,uRam0000000003d3ecf0);
    uVar7 = Core_Services_Extensions__Print();
    /*System.String$$Format*/ func_0x029bcac4(/*STR('{{Index={0} Local={1}}}')*/ uRam0000000003d7d150,uVar2,uVar7,0);
  }
  else {
    uStack_c4 = auStack_f8[0];
    uVar2 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,&uStack_c4);
    /*Core.Services.Save$$get_Local*/ func_0x016841d8(&uStack_e0,auStack_a0,0);
    uStack_b8 = uStack_d8;
    uStack_c0 = uStack_e0;
    uStack_b0 = uStack_d0;
    /*System.Nullable<SaveFile>$$get_Value*/ func_0x0266027c(&uStack_c0,uRam0000000003d3ecf0);
    uVar7 = Core_Services_Extensions__Print();
    /*Core.Services.Save$$get_RemoteConflict*/ func_0x01684294(auStack_f8,auStack_a0,0);
    uStack_b8 = uStack_f0;
    uStack_b0 = uStack_e8;
    /*System.Nullable<SaveFile>$$get_Value*/ func_0x0266027c(&uStack_c0,uRam0000000003d3ecf0);
    uVar8 = Core_Services_Extensions__Print();
    /*System.String$$Format*/ func_0x029bdf30(/*STR('{{Index={0} Local={1} RemoteConflict={2}}}')*/ uRam0000000003d7d148,uVar2,uVar7,uVar8,0);
  }
  return;
}



// ============================================================
// RVA: 0x166a2cc | Core.Services.Extensions.Print
// ============================================================

void Core_Services_Extensions__Print(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 auStack_98 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  uStack_38 = param_2;
  if ((bRam0000000003eb58b6 & 1) == 0) {
    func_0x00f78a20(0x3d3ece8);
    func_0x00f78a20(0x3d3ecf0);
    func_0x00f78a20(0x3d25628);
    func_0x00f78a20(0x3d7d150);
    func_0x00f78a20(0x3d7d148);
    bRam0000000003eb58b6 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  /*Core.Services.Save$$get_RemoteConflict*/ func_0x01684294(&uStack_60,&uStack_40,0);
  cVar1 = (char)uStack_50;
  auStack_98[0] = /*Core.Services.Save$$get_Index*/ func_0x01684184(&uStack_40,0);
  if (cVar1 == '\0') {
    uVar2 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,auStack_98);
    /*Core.Services.Save$$get_Local*/ func_0x016841d8(&uStack_80,&uStack_40,0);
    uStack_58 = uStack_78;
    uStack_60 = uStack_80;
    uStack_50 = uStack_70;
    /*System.Nullable<SaveFile>$$get_Value*/ func_0x0266027c(&uStack_60,uRam0000000003d3ecf0);
    uVar3 = Core_Services_Extensions__Print();
    /*System.String$$Format*/ func_0x029bcac4(/*STR('{{Index={0} Local={1}}}')*/ uRam0000000003d7d150,uVar2,uVar3,0);
  }
  else {
    uStack_64 = auStack_98[0];
    uVar2 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,&uStack_64);
    /*Core.Services.Save$$get_Local*/ func_0x016841d8(&uStack_80,&uStack_40,0);
    uStack_58 = uStack_78;
    uStack_60 = uStack_80;
    uStack_50 = uStack_70;
    /*System.Nullable<SaveFile>$$get_Value*/ func_0x0266027c(&uStack_60,uRam0000000003d3ecf0);
    uVar3 = Core_Services_Extensions__Print();
    /*Core.Services.Save$$get_RemoteConflict*/ func_0x01684294(auStack_98,&uStack_40,0);
    uStack_58 = uStack_90;
    uStack_50 = uStack_88;
    /*System.Nullable<SaveFile>$$get_Value*/ func_0x0266027c(&uStack_60,uRam0000000003d3ecf0);
    uVar4 = Core_Services_Extensions__Print();
    /*System.String$$Format*/ func_0x029bdf30(/*STR('{{Index={0} Local={1} RemoteConflict={2}}}')*/ uRam0000000003d7d148,uVar2,uVar3,uVar4,0);
  }
  return;
}



// ============================================================
// RVA: 0x166a480 | Core.Services.Extensions.Print
// ============================================================

void Core_Services_Extensions__Print(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_1;
  uStack_48 = param_2;
  if ((bRam0000000003eb58b7 & 1) == 0) {
    func_0x00f78a20(0x3d3ecd8);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d7d0d0);
    func_0x00f78a20(0x3d76b68);
    bRam0000000003eb58b7 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uVar4 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  iVar1 = /*Core.Services.Saves$$get_DataLength*/ func_0x016849fc(&uStack_50,0);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      /*Core.Services.Saves$$Data*/ func_0x01684944(&uStack_88,&uStack_50,iVar1,0);
      uStack_68 = uStack_80;
      uStack_70 = uStack_88;
      uStack_60 = uStack_78;
      /*System.Nullable<Save>$$get_Value*/ func_0x0265fcc0(&uStack_70,uRam0000000003d3ecd8);
      uVar3 = Core_Services_Extensions__Print();
      uVar4 = /*System.String$$Concat*/ func_0x029bdb88(uVar4,uVar3,0);
      iVar1 = iVar1 + 1;
      iVar2 = /*Core.Services.Saves$$get_DataLength*/ func_0x016849fc(&uStack_50,0);
    } while (iVar1 < iVar2);
  }
  /*System.String$$Concat*/ func_0x029be39c(/*STR('{Saves=[')*/ uRam0000000003d7d0d0,uVar4,/*STR(']}')*/ uRam0000000003d76b68,0);
  return;
}



// ============================================================
// RVA: 0x166a668 | Core.Services.Extensions.Print
// ============================================================

void Core_Services_Extensions__Print(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  uStack_38 = param_2;
  if ((bRam0000000003eb58b9 & 1) == 0) {
    func_0x00f78a20(0x3d3eab8);
    func_0x00f78a20(0x3d3eac0);
    func_0x00f78a20(0x3d66050);
    func_0x00f78a20(0x3d7d1e0);
    func_0x00f78a20(0x3d7d0b0);
    func_0x00f78a20(0x3d66110);
    func_0x00f78a20(0x3d66150);
    bRam0000000003eb58b9 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uVar1 = /*Core.Services.Leaderboard$$get_Id*/ func_0x0166a834(&uStack_40);
  uVar2 = /*Core.Services.Leaderboard$$get_Title*/ func_0x0166a880(&uStack_40);
  uVar1 = /*System.String$$Concat*/ func_0x029be818(/*STR('{Id=')*/ uRam0000000003d7d0b0,uVar1,/*STR(' Title=')*/ uRam0000000003d66150,uVar2,0);
  /*Core.Services.Leaderboard$$get_CurrentOccurrence*/ func_0x0166a8cc(&uStack_60,&uStack_40);
  if ((char)uStack_50 != '\0') {
    /*Core.Services.Leaderboard$$get_CurrentOccurrence*/ func_0x0166a8cc(&uStack_78,&uStack_40);
    uStack_58 = uStack_70;
    uStack_60 = uStack_78;
    uStack_50 = uStack_68;
    /*System.Nullable<LeaderboardOccurrence>$$get_Value*/ func_0x0265a604(&uStack_60,uRam0000000003d3eac0);
    uVar2 = Core_Services_Extensions__Print();
    uVar1 = /*System.String$$Concat*/ func_0x029be39c(uVar1,/*STR(' CurrentOccurrence=')*/ uRam0000000003d66050,uVar2,0);
  }
  /*Core.Services.Leaderboard$$get_PreviousOccurrence*/ func_0x0166a974(&uStack_78,&uStack_40);
  uStack_58 = uStack_70;
  uStack_60 = uStack_78;
  uStack_50 = uStack_68;
  if ((uStack_68 & 0xff) != 0) {
    /*Core.Services.Leaderboard$$get_PreviousOccurrence*/ func_0x0166a974(&uStack_78,&uStack_40);
    uStack_58 = uStack_70;
    uStack_60 = uStack_78;
    uStack_50 = uStack_68;
    /*System.Nullable<LeaderboardOccurrence>$$get_Value*/ func_0x0265a604(&uStack_60,uRam0000000003d3eac0);
    uVar2 = Core_Services_Extensions__Print();
    uVar1 = /*System.String$$Concat*/ func_0x029be39c(uVar1,/*STR(' PreviousOccurrence=')*/ uRam0000000003d66110,uVar2,0);
  }
  /*System.String$$Concat*/ func_0x029bdb88(uVar1,/*STR('}')*/ uRam0000000003d7d1e0,0);
  return;
}



// ============================================================
// RVA: 0x166aa1c | Core.Services.Extensions.Print
// ============================================================

void Core_Services_Extensions__Print(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_1;
  uStack_48 = param_2;
  if ((bRam0000000003eb58ba & 1) == 0) {
    func_0x00f78a20(0x3d3eaf0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d7d0d8);
    func_0x00f78a20(0x3d76b68);
    bRam0000000003eb58ba = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uVar4 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  iVar1 = /*Core.Services.LeaderboardSets$$get_DataLength*/ func_0x0166aef8(&uStack_50);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      /*Core.Services.LeaderboardSets$$Data*/ func_0x0166ab48(&uStack_88,&uStack_50,iVar1);
      uStack_68 = uStack_80;
      uStack_70 = uStack_88;
      uStack_60 = uStack_78;
      /*System.Nullable<LeaderboardSet>$$get_Value*/ func_0x0265b738(&uStack_70,uRam0000000003d3eaf0);
      uVar3 = /*Core.Services.Extensions$$Print*/ func_0x0166ac00();
      uVar4 = /*System.String$$Concat*/ func_0x029bdb88(uVar4,uVar3,0);
      iVar1 = iVar1 + 1;
      iVar2 = /*Core.Services.LeaderboardSets$$get_DataLength*/ func_0x0166aef8(&uStack_50);
    } while (iVar1 < iVar2);
  }
  /*System.String$$Concat*/ func_0x029be39c(/*STR('{Sets=[')*/ uRam0000000003d7d0d8,uVar4,/*STR(']}')*/ uRam0000000003d76b68,0);
  return;
}



// ============================================================
// RVA: 0x166ac00 | Core.Services.Extensions.Print
// ============================================================

/* WARNING: Possible PIC construction at 0x016cf3cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016cf3d0) */
/* WARNING: Removing unreachable block (ram,0x016cf444) */
/* WARNING: Removing unreachable block (ram,0x016cf464) */
/* WARNING: Removing unreachable block (ram,0x016cf474) */
/* WARNING: Removing unreachable block (ram,0x016cf480) */
/* WARNING: Removing unreachable block (ram,0x016cf4ec) */
/* WARNING: Removing unreachable block (ram,0x016cf4f0) */
/* WARNING: Removing unreachable block (ram,0x016cf5a0) */
/* WARNING: Removing unreachable block (ram,0x016cf5b4) */
/* WARNING: Removing unreachable block (ram,0x016cf6ac) */
/* WARNING: Removing unreachable block (ram,0x016cf6e0) */
/* WARNING: Removing unreachable block (ram,0x016cf6f4) */
/* WARNING: Removing unreachable block (ram,0x016cf6f8) */
/* WARNING: Removing unreachable block (ram,0x016cf720) */
/* WARNING: Removing unreachable block (ram,0x016cf73c) */
/* WARNING: Removing unreachable block (ram,0x016cf744) */
/* WARNING: Removing unreachable block (ram,0x016cf748) */
/* WARNING: Removing unreachable block (ram,0x016cf760) */
/* WARNING: Removing unreachable block (ram,0x016cf770) */
/* WARNING: Removing unreachable block (ram,0x016cf7bc) */
/* WARNING: Removing unreachable block (ram,0x016cf7c8) */
/* WARNING: Removing unreachable block (ram,0x016cf788) */
/* WARNING: Removing unreachable block (ram,0x016cf794) */
/* WARNING: Removing unreachable block (ram,0x016cf7a0) */
/* WARNING: Removing unreachable block (ram,0x016cf7a4) */
/* WARNING: Removing unreachable block (ram,0x016cf5b8) */
/* WARNING: Removing unreachable block (ram,0x016cf624) */
/* WARNING: Removing unreachable block (ram,0x016cf62c) */
/* WARNING: Removing unreachable block (ram,0x016cf630) */
/* WARNING: Removing unreachable block (ram,0x016cf648) */
/* WARNING: Removing unreachable block (ram,0x016cf65c) */
/* WARNING: Removing unreachable block (ram,0x016cf680) */
/* WARNING: Removing unreachable block (ram,0x016cf690) */
/* WARNING: Removing unreachable block (ram,0x016cf694) */
/* WARNING: Removing unreachable block (ram,0x016cf494) */
/* WARNING: Removing unreachable block (ram,0x016cf4b4) */
/* WARNING: Removing unreachable block (ram,0x016cf4cc) */
/* WARNING: Removing unreachable block (ram,0x016cf3ec) */
/* WARNING: Removing unreachable block (ram,0x02616890) */

ulong Core_Services_Extensions__Print(undefined8 param_1,undefined8 param_2)

{
  long **pplVar1;
  int iVar2;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar3;
  uint uVar10;
  int *extraout_x8;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong unaff_x22;
  undefined1 **ppuVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long *plStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar12 = (long *)0x3eb5000;
  uStack_50 = param_1;
  uStack_48 = param_2;
  if ((bRam0000000003eb58bb & 1) == 0) {
    func_0x00f78a20(0x3d3eaa8);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d660d0);
    func_0x00f78a20(0x3d7d0b0);
    func_0x00f78a20(0x3d768b8);
    func_0x00f78a20(0x3d76b28);
    func_0x00f78a20(0x3d76b68);
    func_0x00f78a20(0x3d66150);
    bRam0000000003eb58bb = 1;
  }
  lVar7 = 0x3d1f498;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  lVar11 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  iVar2 = /*Core.Services.LeaderboardSet$$get_LeaderboardsLength*/ func_0x0166aff4(&uStack_50);
  if (0 < iVar2) {
    plVar12 = (long *)0x0;
    unaff_x22 = 0x3d3eaa8;
    do {
      /*Core.Services.LeaderboardSet$$Leaderboards*/ func_0x0166af3c(&uStack_88,&uStack_50,plVar12);
      uStack_68 = uStack_80;
      uStack_70 = uStack_88;
      uStack_60 = uStack_78;
      /*System.Nullable<Leaderboard>$$get_Value*/ func_0x0265a048(&uStack_70,uRam0000000003d3eaa8);
      uVar4 = Core_Services_Extensions__Print();
      lVar11 = /*System.String$$Concat*/ func_0x029be818(lVar11,/*STR('[')*/ uRam0000000003d768b8,uVar4,/*STR(']')*/ uRam0000000003d76b28,0);
      uVar10 = (int)plVar12 + 1;
      plVar12 = (long *)(ulong)uVar10;
      iVar2 = /*Core.Services.LeaderboardSet$$get_LeaderboardsLength*/ func_0x0166aff4(&uStack_50);
    } while ((int)uVar10 < iVar2);
  }
  plVar5 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,7);
  plStack_b0 = plVar12;
  if (plVar5 == (long *)0x0) goto LAB_0166aef4;
  lVar7 = 0x3d7d0b0;
  if ((/*STR('{Id=')*/ lRam0000000003d7d0b0 == 0) ||
     (lVar6 = func_0x00f78adc(/*STR('{Id=')*/ lRam0000000003d7d0b0,*(undefined8 *)(*plVar5 + 0x40)), lVar6 != 0)) {
    if ((int)plVar5[3] != 0) {
      plVar5[4] = /*STR('{Id=')*/ lRam0000000003d7d0b0;
      lVar7 = /*Core.Services.LeaderboardSet$$get_Id*/ func_0x0166b038(&uStack_50);
      if ((lVar7 != 0) &&
         (lVar6 = func_0x00f78adc(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
      goto LAB_0166aee8;
      uVar10 = (uint)plVar5[3];
      if ((plVar5[3] & 0xfffffffeU) != 0) {
        unaff_x22 = 0x3d66150;
        plVar5[5] = lVar7;
        if (/*STR(' Title=')*/ lRam0000000003d66150 != 0) {
          lVar6 = func_0x00f78adc(/*STR(' Title=')*/ lRam0000000003d66150,*(undefined8 *)(*plVar5 + 0x40));
          if (lVar6 == 0) goto LAB_0166aee8;
          uVar10 = (uint)plVar5[3];
        }
        if (2 < uVar10) {
          plVar5[6] = /*STR(' Title=')*/ lRam0000000003d66150;
          lVar7 = /*Core.Services.LeaderboardSet$$get_Title*/ func_0x0166b084(&uStack_50);
          if ((lVar7 != 0) &&
             (lVar6 = func_0x00f78adc(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
          goto LAB_0166aee8;
          uVar10 = (uint)plVar5[3];
          if ((plVar5[3] & 0xfffffffcU) != 0) {
            unaff_x22 = 0x3d660d0;
            plVar5[7] = lVar7;
            if (/*STR(' Leaderboards=[')*/ lRam0000000003d660d0 != 0) {
              lVar6 = func_0x00f78adc(/*STR(' Leaderboards=[')*/ lRam0000000003d660d0,*(undefined8 *)(*plVar5 + 0x40));
              if (lVar6 == 0) goto LAB_0166aee8;
              uVar10 = (uint)plVar5[3];
            }
            if (4 < uVar10) {
              plVar5[8] = /*STR(' Leaderboards=[')*/ lRam0000000003d660d0;
              if (lVar11 != 0) {
                lVar6 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar5 + 0x40));
                if (lVar6 == 0) goto LAB_0166aee8;
                uVar10 = *(uint *)(plVar5 + 3);
              }
              if (5 < uVar10) {
                lVar7 = 0x3d76b68;
                plVar5[9] = lVar11;
                if (/*STR(']}')*/ lRam0000000003d76b68 != 0) {
                  lVar6 = func_0x00f78adc(/*STR(']}')*/ lRam0000000003d76b68,*(undefined8 *)(*plVar5 + 0x40));
                  if (lVar6 == 0) goto LAB_0166aee8;
                  uVar10 = *(uint *)(plVar5 + 3);
                }
                if (6 < uVar10) {
                  plVar5[10] = /*STR(']}')*/ lRam0000000003d76b68;
                  uVar8 = /*System.String$$Concat*/ func_0x029cfadc(plVar5,0);
                  return uVar8;
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
LAB_0166aee8:
    uVar4 = func_0x00f78b14();
  }
  func_0x00f78ac0(uVar4,0);
  plStack_b0 = plVar5;
LAB_0166aef4:
  piVar9 = (int *)func_0x00f78af4();
  puStack_98 = &Core_Services_LeaderboardSets__get_DataLength;
  lStack_a8 = lVar11;
  puStack_a0 = &stack0xfffffffffffffff0;
  uVar8 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar9,4,0);
  if ((int)uVar8 == 0) {
    return uVar8;
  }
  ppuVar14 = &puStack_a0;
  plVar12 = plStack_b0;
  if (*(long *)(piVar9 + 2) != 0) {
    uVar10 = *piVar9 + (int)uVar8;
    plVar12 = (long *)(ulong)uVar10;
    iVar2 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(piVar9 + 2),plVar12,4);
    if (*(long *)(piVar9 + 2) != 0) {
      uVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(piVar9 + 2),uVar10 + iVar2,4);
      return uVar8;
    }
  }
  auVar17._8_8_ = lVar7;
  auVar17._0_8_ = plVar12;
  puVar15 = &FlatBuffers_Table____vector;
  auVar16 = func_0x00f78af4();
  pplVar1 = &plStack_b0;
  while( true ) {
    uVar13 = auVar17._8_8_;
    uVar4 = auVar17._0_8_;
    *(undefined8 *)((long)pplVar1 + -0x20) = uVar4;
    *(int **)((long)pplVar1 + -0x18) = piVar9;
    *(undefined1 ***)((long)pplVar1 + -0x10) = ppuVar14;
    *(undefined **)((long)pplVar1 + -8) = puVar15;
    lVar7 = *(long *)(auVar16._0_8_ + 2);
    if (lVar7 != 0) {
      iVar2 = *auVar16._0_8_ + auVar16._8_4_;
      iVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar7,iVar2,4);
      return (ulong)(iVar2 + iVar3 + 4);
    }
    auVar17 = func_0x00f78af4();
    *(ulong *)((long)pplVar1 + -0x50) = unaff_x22;
    *(undefined8 *)((long)pplVar1 + -0x48) = uVar13;
    *(undefined8 *)((long)pplVar1 + -0x40) = uVar4;
    *(int **)((long)pplVar1 + -0x38) = piVar9;
    *(undefined1 **)((long)pplVar1 + -0x30) = (undefined1 *)((long)pplVar1 + -0x10);
    *(undefined **)((long)pplVar1 + -0x28) = &FlatBuffers_Table____vector_as_arraysegment;
    ppuVar14 = (undefined1 **)((long)pplVar1 + -0x30);
    if ((bRam0000000003eb5cd9 & 1) == 0) {
      func_0x00f78a20(0x3d3e500);
      bRam0000000003eb5cd9 = 1;
    }
    unaff_x22 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(auVar17._0_8_,auVar17._8_8_);
    auVar16._8_8_ = unaff_x22;
    auVar16._0_8_ = auVar17._0_8_;
    if ((int)unaff_x22 == 0) break;
    puVar15 = &UNK_016cf3d0;
    pplVar1 = (long **)((long)pplVar1 + -0x50);
    piVar9 = extraout_x8;
  }
  extraout_x8[0] = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  extraout_x8[3] = 0;
  extraout_x8[4] = 0;
  extraout_x8[5] = 0;
  return unaff_x22;
}



