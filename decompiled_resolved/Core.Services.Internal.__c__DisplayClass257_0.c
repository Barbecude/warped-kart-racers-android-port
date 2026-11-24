// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Internal.<>c__DisplayClass257_0

// ============================================================
// RVA: 0x16884f8 | Core.Services.Internal.<>c__DisplayClass257_0..ctor
// ============================================================

void Core_Services_Internal___c__DisplayClass257_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1688500 | Core.Services.Internal.<>c__DisplayClass257_0.<SetIndex>b__0
// ============================================================

void Core_Services_Internal___c__DisplayClass257_0___SetIndex_b__0(undefined8 param_1)

{
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb5a37 & 1) == 0) {
    func_0x00f78a20(0x3d52118);
    bRam0000000003eb5a37 = 1;
  }
  auStack_58._8_8_ = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  auStack_58._0_8_ = 0;
  uStack_60 = 0;
  uStack_48 = param_1;
  auStack_70 = /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$Create*/ func_0x02f99564(0);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  auStack_58 = auStack_70;
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$Start<Internal.<>c__DisplayClass257_0.<<SetIndex>b__0>d>*/ func_0x0181e1e4(auStack_70,&uStack_60,uRam0000000003d52118);
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$get_Task*/ func_0x02f99570((ulong)&uStack_60 | 8,0);
  return;
}



