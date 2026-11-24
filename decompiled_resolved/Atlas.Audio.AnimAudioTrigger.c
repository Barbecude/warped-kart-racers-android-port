// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Audio.AnimAudioTrigger

// ============================================================
// RVA: 0x1448a40 | Atlas.Audio.AnimAudioTrigger.PlayAudio
// ============================================================

ulong Atlas_Audio_AnimAudioTrigger__PlayAudio(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return uVar1;
  }
  uVar1 = /*UnityEngine.Behaviour$$get_isActiveAndEnabled*/ func_0x0321a980(*(long *)(param_1 + 0x18),0);
  if (((int)uVar1 != 0) && (lVar4 = *(long *)(param_1 + 0x18), lVar4 != 0)) {
    uVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
    if ((bRam0000000003eb4876 & 1) == 0) {
      func_0x00f78a20(0x3d1ff30,uVar2,0);
      func_0x00f78a20(0x3d65d08);
      bRam0000000003eb4876 = 1;
    }
    uVar1 = *(ulong *)(lVar4 + 0xb0);
    if (uVar1 == 0) {
      uVar3 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*(undefined8 *)(lVar4 + 0x48),/*STR('')*/ uRam0000000003d65d08,0);
      if ((uVar3 & 1) == 0) {
        uVar1 = *(ulong *)(lVar4 + 0xb0);
      }
      else {
        uVar5 = *(undefined8 *)(lVar4 + 0x48);
        uVar1 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
        uVar3 = /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar1,uVar5,0,0,0);
        *(ulong *)(lVar4 + 0xb0) = uVar1;
      }
      if (uVar1 == 0) {
        return uVar3;
      }
    }
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar1,uVar2,0);
    return uVar1;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x1448aa0 | Atlas.Audio.AnimAudioTrigger..ctor
// ============================================================

undefined1  [16] Atlas_Audio_AnimAudioTrigger___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
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



