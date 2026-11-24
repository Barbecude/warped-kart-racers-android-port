// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.Date

// ============================================================
// RVA: 0x1578438 | Atlas.Definitions.Date.get_Day
// ============================================================

undefined4 Atlas_Definitions_Date__get_Day(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x1578440 | Atlas.Definitions.Date.get_Month
// ============================================================

undefined4 Atlas_Definitions_Date__get_Month(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ============================================================
// RVA: 0x1578448 | Atlas.Definitions.Date.get_Year
// ============================================================

undefined4 Atlas_Definitions_Date__get_Year(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1578450 | Atlas.Definitions.Date.get_Hour
// ============================================================

undefined4 Atlas_Definitions_Date__get_Hour(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ============================================================
// RVA: 0x1578458 | Atlas.Definitions.Date.get_Minute
// ============================================================

undefined4 Atlas_Definitions_Date__get_Minute(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1578460 | Atlas.Definitions.Date.get_Second
// ============================================================

undefined4 Atlas_Definitions_Date__get_Second(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// ============================================================
// RVA: 0x1578468 | Atlas.Definitions.Date..ctor
// ============================================================

void Atlas_Definitions_Date___ctor
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// ============================================================
// RVA: 0x15784b4 | Atlas.Definitions.Date..ctor
// ============================================================

void Atlas_Definitions_Date___ctor
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x1c) = param_5;
  *(undefined4 *)(param_1 + 0x20) = param_6;
  *(undefined4 *)(param_1 + 0x24) = param_7;
  return;
}



// ============================================================
// RVA: 0x157851c | Atlas.Definitions.Date.IsValidDate
// ============================================================

long Atlas_Definitions_Date__IsValidDate
               (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 unaff_x22;
  undefined8 uVar6;
  undefined1 auVar7 [12];
  undefined4 uStack_74;
  undefined8 uStack_70;
  long lStack_68;
  long *plStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined4 uStack_34;
  
  if ((bRam0000000003eb507f & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d67270);
    bRam0000000003eb507f = 1;
  }
  plVar1 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,5);
  uStack_34 = *(undefined4 *)(param_1 + 0x18);
  lVar2 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_34,0);
  lStack_68 = 0x3d1f498;
  if (plVar1 != (long *)0x0) {
    if ((lVar2 == 0) || (lVar3 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 != 0)
       ) {
      uVar5 = plVar1[3];
      if ((int)uVar5 != 0) {
        unaff_x22 = 0x3d67270;
        uVar6 = 0x3d67270;
        plVar1[4] = lVar2;
        if (/*STR('.')*/ lRam0000000003d67270 != 0) {
          lVar3 = func_0x00f78adc(/*STR('.')*/ lRam0000000003d67270,*(undefined8 *)(*plVar1 + 0x40));
          if (lVar3 == 0) goto LAB_01578700;
          uVar5 = plVar1[3];
        }
        if ((uVar5 & 0xfffffffe) != 0) {
          plVar1[5] = /*STR('.')*/ lRam0000000003d67270;
          uStack_34 = *(undefined4 *)(param_1 + 0x14);
          lVar2 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_34,0);
          if ((lVar2 != 0) &&
             (lVar3 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
          goto LAB_01578700;
          uVar5 = plVar1[3];
          if (2 < (uint)uVar5) {
            plVar1[6] = lVar2;
            unaff_x22 = uVar6;
            if (/*STR('.')*/ lRam0000000003d67270 != 0) {
              lVar3 = func_0x00f78adc(/*STR('.')*/ lRam0000000003d67270,*(undefined8 *)(*plVar1 + 0x40));
              if (lVar3 == 0) goto LAB_01578700;
              uVar5 = plVar1[3];
            }
            if ((uVar5 & 0xfffffffc) != 0) {
              plVar1[7] = /*STR('.')*/ lRam0000000003d67270;
              uStack_34 = *(undefined4 *)(param_1 + 0x10);
              lVar2 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_34,0);
              if ((lVar2 != 0) &&
                 (lVar3 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
              goto LAB_01578700;
              if (4 < *(uint *)(plVar1 + 3)) {
                plVar1[8] = lVar2;
                uVar6 = /*System.String$$Concat*/ func_0x029cfadc(plVar1,0);
                if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                lVar2 = /*System.DateTime$$TryParse*/ func_0x02a8f504(uVar6,param_1 + 0x28,0);
                return lVar2;
              }
            }
          }
        }
      }
      uVar6 = func_0x00f78b24();
    }
    else {
LAB_01578700:
      uVar6 = func_0x00f78b14();
    }
    func_0x00f78ac0(uVar6,0);
    lStack_68 = lVar2;
  }
  lVar2 = func_0x00f78af4();
  puStack_48 = &Atlas_Definitions_Date__GetDateTime;
  uStack_70 = unaff_x22;
  plStack_60 = plVar1;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5080 & 1) == 0) {
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d67270);
    bRam0000000003eb5080 = 1;
  }
  if (*(char *)(lVar2 + 0x30) == '\0') goto code_r0x015788b4;
  uVar5 = Atlas_Definitions_Date__IsValidDate(lVar2);
  if ((uVar5 & 1) != 0) {
    *(undefined1 *)(lVar2 + 0x30) = 0;
    goto code_r0x015788b4;
  }
  plVar1 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,5);
  uStack_74 = *(undefined4 *)(lVar2 + 0x18);
  lVar3 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_74,0);
  if (plVar1 == (long *)0x0) goto code_r0x015788e0;
  if ((lVar3 == 0) || (lVar4 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 != 0))
  {
    uVar5 = plVar1[3];
    if ((int)uVar5 != 0) {
      plVar1[4] = lVar3;
      if (/*STR('.')*/ lRam0000000003d67270 != 0) {
        lVar3 = func_0x00f78adc(/*STR('.')*/ lRam0000000003d67270,*(undefined8 *)(*plVar1 + 0x40));
        if (lVar3 == 0) goto code_r0x015788d4;
        uVar5 = plVar1[3];
      }
      if ((uVar5 & 0xfffffffe) != 0) {
        plVar1[5] = /*STR('.')*/ lRam0000000003d67270;
        uStack_74 = *(undefined4 *)(lVar2 + 0x14);
        lVar3 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_74,0);
        if ((lVar3 != 0) &&
           (lVar4 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
        goto code_r0x015788d4;
        uVar5 = plVar1[3];
        if (2 < (uint)uVar5) {
          plVar1[6] = lVar3;
          if (/*STR('.')*/ lRam0000000003d67270 != 0) {
            lVar3 = func_0x00f78adc(/*STR('.')*/ lRam0000000003d67270,*(undefined8 *)(*plVar1 + 0x40));
            if (lVar3 == 0) goto code_r0x015788d4;
            uVar5 = plVar1[3];
          }
          if ((uVar5 & 0xfffffffc) != 0) {
            plVar1[7] = /*STR('.')*/ lRam0000000003d67270;
            uStack_74 = *(undefined4 *)(lVar2 + 0x10);
            lVar3 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_74,0);
            if ((lVar3 != 0) &&
               (lVar4 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
            goto code_r0x015788d4;
            if (4 < *(uint *)(plVar1 + 3)) {
              plVar1[8] = lVar3;
              /*System.String$$Concat*/ func_0x029cfadc(plVar1,0);
code_r0x015788b4:
              return *(long *)(lVar2 + 0x28);
            }
          }
        }
      }
    }
    uVar6 = func_0x00f78b24();
  }
  else {
code_r0x015788d4:
    uVar6 = func_0x00f78b14();
  }
  func_0x00f78ac0(uVar6,0);
code_r0x015788e0:
  auVar7 = func_0x00f78af4();
  lVar2 = auVar7._0_8_;
  *(int *)(lVar2 + 0x10) = auVar7._8_4_;
  *(undefined4 *)(lVar2 + 0x14) = param_3;
  *(undefined4 *)(lVar2 + 0x18) = param_4;
  *(undefined1 *)(lVar2 + 0x30) = 1;
  return lVar2;
}



// ============================================================
// RVA: 0x1578710 | Atlas.Definitions.Date.GetDateTime
// ============================================================

long Atlas_Definitions_Date__GetDateTime
               (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [12];
  undefined4 uStack_34;
  
  if ((bRam0000000003eb5080 & 1) == 0) {
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d67270);
    bRam0000000003eb5080 = 1;
  }
  if (*(char *)(param_1 + 0x30) == '\0') goto LAB_015788b4;
  uVar1 = Atlas_Definitions_Date__IsValidDate(param_1);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x30) = 0;
    goto LAB_015788b4;
  }
  plVar2 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,5);
  uStack_34 = *(undefined4 *)(param_1 + 0x18);
  lVar3 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_34,0);
  if (plVar2 == (long *)0x0) goto code_r0x015788e0;
  if ((lVar3 == 0) || (lVar4 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 != 0))
  {
    uVar1 = plVar2[3];
    if ((int)uVar1 != 0) {
      plVar2[4] = lVar3;
      if (/*STR('.')*/ lRam0000000003d67270 != 0) {
        lVar3 = func_0x00f78adc(/*STR('.')*/ lRam0000000003d67270,*(undefined8 *)(*plVar2 + 0x40));
        if (lVar3 == 0) goto code_r0x015788d4;
        uVar1 = plVar2[3];
      }
      if ((uVar1 & 0xfffffffe) != 0) {
        plVar2[5] = /*STR('.')*/ lRam0000000003d67270;
        uStack_34 = *(undefined4 *)(param_1 + 0x14);
        lVar3 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_34,0);
        if ((lVar3 != 0) &&
           (lVar4 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto code_r0x015788d4;
        uVar1 = plVar2[3];
        if (2 < (uint)uVar1) {
          plVar2[6] = lVar3;
          if (/*STR('.')*/ lRam0000000003d67270 != 0) {
            lVar3 = func_0x00f78adc(/*STR('.')*/ lRam0000000003d67270,*(undefined8 *)(*plVar2 + 0x40));
            if (lVar3 == 0) goto code_r0x015788d4;
            uVar1 = plVar2[3];
          }
          if ((uVar1 & 0xfffffffc) != 0) {
            plVar2[7] = /*STR('.')*/ lRam0000000003d67270;
            uStack_34 = *(undefined4 *)(param_1 + 0x10);
            lVar3 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_34,0);
            if ((lVar3 != 0) &&
               (lVar4 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
            goto code_r0x015788d4;
            if (4 < *(uint *)(plVar2 + 3)) {
              plVar2[8] = lVar3;
              /*System.String$$Concat*/ func_0x029cfadc(plVar2,0);
LAB_015788b4:
              return *(long *)(param_1 + 0x28);
            }
          }
        }
      }
    }
    uVar5 = func_0x00f78b24();
  }
  else {
code_r0x015788d4:
    uVar5 = func_0x00f78b14();
  }
  func_0x00f78ac0(uVar5,0);
code_r0x015788e0:
  auVar6 = func_0x00f78af4();
  lVar3 = auVar6._0_8_;
  *(int *)(lVar3 + 0x10) = auVar6._8_4_;
  *(undefined4 *)(lVar3 + 0x14) = param_3;
  *(undefined4 *)(lVar3 + 0x18) = param_4;
  *(undefined1 *)(lVar3 + 0x30) = 1;
  return lVar3;
}



// ============================================================
// RVA: 0x15788e4 | Atlas.Definitions.Date.Set
// ============================================================

void Atlas_Definitions_Date__Set
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



// ============================================================
// RVA: 0x15788f8 | Atlas.Definitions.Date.Set
// ============================================================

void Atlas_Definitions_Date__Set
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x20) = param_5;
  *(undefined4 *)(param_1 + 0x24) = param_6;
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



