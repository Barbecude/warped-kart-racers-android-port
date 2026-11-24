// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Internal.<>c__DisplayClass242_0<object>

// ============================================================
// RVA: 0x1b17748 | Core.Services.Internal.<>c__DisplayClass242_0<object>..ctor
// ============================================================

void Core_Services_Internal___c__DisplayClass242_0_object____ctor(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (param_1 != 0) {
    return;
  }
  auVar2 = func_0x00f78af4();
  lVar1 = auVar2._8_8_;
  uStack_50 = auVar2._0_8_;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_40 = 0;
  (**(code **)**(undefined8 **)(*(long *)(lVar1 + 0x18) + 0xc0))(&uStack_a8);
  uStack_58 = uStack_98;
  uStack_60 = uStack_a0;
  uStack_68 = uStack_a8;
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  uStack_80 = uStack_98;
  uStack_88 = uStack_a0;
  uStack_90 = uStack_a8;
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<object>$$Start<Internal.<>c__DisplayClass242_0.<<FinishRequestAndInvokeAsyncWithResult>b__0>d<object>>*/ func_0x0170d048(&uStack_90,&uStack_70,
                  *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x10));
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<Internal.HTTP.Response>$$get_Task*/ func_0x01cb1530((ulong)&uStack_70 | 8,
                  *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x18));
  return;
}



// ============================================================
// RVA: 0x1b17760 | Core.Services.Internal.<>c__DisplayClass242_0<object>.<FinishRequestAndInvokeAsyncWithResult>b__0
// ============================================================

void Core_Services_Internal___c__DisplayClass242_0_object____FinishRequestAndInvokeAsyncWithResult_b__0
               (undefined8 param_1,long param_2)

{
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_30 = 0;
  uStack_40 = param_1;
  (**(code **)**(undefined8 **)(*(long *)(param_2 + 0x18) + 0xc0))(&uStack_98);
  uStack_48 = uStack_88;
  uStack_50 = uStack_90;
  uStack_58 = uStack_98;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_70 = uStack_88;
  uStack_78 = uStack_90;
  uStack_80 = uStack_98;
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<object>$$Start<Internal.<>c__DisplayClass242_0.<<FinishRequestAndInvokeAsyncWithResult>b__0>d<object>>*/ func_0x0170d048(&uStack_80,&uStack_60,
                  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x10));
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<Internal.HTTP.Response>$$get_Task*/ func_0x01cb1530((ulong)&uStack_60 | 8,
                  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x18));
  return;
}



