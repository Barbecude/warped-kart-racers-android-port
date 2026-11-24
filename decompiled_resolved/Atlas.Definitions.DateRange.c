// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.DateRange

// ============================================================
// RVA: 0x1578910 | Atlas.Definitions.DateRange.IsDateTimeWithinRange
// ============================================================

ulong Atlas_Definitions_DateRange__IsDateTimeWithinRange(long *param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb5081 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb5081 = 1;
  }
  if (*param_1 != 0) {
    uVar1 = Atlas_Definitions_Date__GetDateTime();
    if (param_1[1] != 0) {
      uVar2 = Atlas_Definitions_Date__GetDateTime();
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*System.DateTime$$op_LessThanOrEqual*/ func_0x02a8fb18(uVar1,param_2,0);
      if ((int)uVar3 != 0) {
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return (ulong)((param_2 & 0x3fffffffffffffff) < (uVar2 & 0x3fffffffffffffff));
      }
      return uVar3;
    }
  }
  auVar6 = func_0x00f78af4();
  if ((bRam0000000003eb5082 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb5082 = 1;
  }
  if (*auVar6._0_8_ != 0) {
    uVar2 = Atlas_Definitions_Date__GetDateTime();
    if (((auVar6._0_8_[1] != 0) &&
        (uVar1 = Atlas_Definitions_Date__GetDateTime(), auVar6._8_8_ != 0)) &&
       (uVar4 = Atlas_Definitions_Date__GetDateTime(auVar6._8_8_), param_3 != 0)) {
      uVar3 = Atlas_Definitions_Date__GetDateTime(param_3);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*System.DateTime$$op_LessThanOrEqual*/ func_0x02a8fb18(uVar4,uVar1,0);
      if ((int)uVar5 != 0) {
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return (ulong)((uVar2 & 0x3fffffffffffffff) <= (uVar3 & 0x3fffffffffffffff));
      }
      return uVar5;
    }
  }
  uVar2 = func_0x00f78af4();
  return uVar2;
}



// ============================================================
// RVA: 0x15789e4 | Atlas.Definitions.DateRange.DoesDateRangeOverlap
// ============================================================

ulong Atlas_Definitions_DateRange__DoesDateRangeOverlap(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((bRam0000000003eb5082 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb5082 = 1;
  }
  if (*param_1 != 0) {
    uVar1 = Atlas_Definitions_Date__GetDateTime();
    if (((param_1[1] != 0) && (uVar2 = Atlas_Definitions_Date__GetDateTime(), param_2 != 0)) &&
       (uVar3 = Atlas_Definitions_Date__GetDateTime(param_2), param_3 != 0)) {
      uVar4 = Atlas_Definitions_Date__GetDateTime(param_3);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*System.DateTime$$op_LessThanOrEqual*/ func_0x02a8fb18(uVar3,uVar2,0);
      if ((int)uVar5 != 0) {
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return (ulong)((uVar1 & 0x3fffffffffffffff) <= (uVar4 & 0x3fffffffffffffff));
      }
      return uVar5;
    }
  }
  uVar1 = func_0x00f78af4();
  return uVar1;
}



