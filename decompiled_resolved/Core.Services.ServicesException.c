// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.ServicesException

// ============================================================
// RVA: 0x1684c5c | Core.Services.ServicesException.get_Code
// ============================================================

long Core_Services_ServicesException__get_Code(long param_1)

{
  return (long)*(char *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x1684c64 | Core.Services.ServicesException.set_Code
// ============================================================

void Core_Services_ServicesException__set_Code(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x88) = param_2;
  return;
}



// ============================================================
// RVA: 0x1684c6c | Core.Services.ServicesException..ctor
// ============================================================

void Core_Services_ServicesException___ctor(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5a15 & 1) == 0) {
    func_0x00f78a20(0x3d216d0);
    bRam0000000003eb5a15 = 1;
  }
  uVar1 = /*Core.Services.ServicesException$$GetMessage*/ func_0x01684cf4(param_2);
  if (((*(ushort *)(/*System.Exception_TypeInfo*/ lRam0000000003d216d0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Exception_TypeInfo*/ lRam0000000003d216d0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*System.Exception$$.ctor*/ func_0x02acc6e8(param_1,uVar1,0);
  *(char *)(param_1 + 0x88) = (char)param_2;
  return;
}



// ============================================================
// RVA: 0x1684cf4 | Core.Services.ServicesException.GetMessage
// ============================================================

void Core_Services_ServicesException__GetMessage(undefined1 param_1)

{
  undefined8 uVar1;
  undefined1 uStack_31;
  
  if ((bRam0000000003eb5a16 & 1) == 0) {
    func_0x00f78a20(0x3d21628);
    func_0x00f78a20(0x3d72718);
    bRam0000000003eb5a16 = 1;
  }
  uStack_31 = param_1;
  uVar1 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_31);
  /*System.String$$Format*/ func_0x029bc688(/*STR('Services error: {0}')*/ uRam0000000003d72718,uVar1,0);
  return;
}



// ============================================================
// RVA: 0x1684d7c | Core.Services.ServicesException.ToString
// ============================================================

void Core_Services_ServicesException__ToString(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 uStack_31;
  
  uVar1 = *(undefined1 *)(param_1 + 0x88);
  if ((bRam0000000003eb5a16 & 1) == 0) {
    func_0x00f78a20(0x3d21628);
    func_0x00f78a20(0x3d72718);
    bRam0000000003eb5a16 = 1;
  }
  uStack_31 = uVar1;
  uVar2 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_31);
  /*System.String$$Format*/ func_0x029bc688(/*STR('Services error: {0}')*/ uRam0000000003d72718,uVar2,0);
  return;
}



