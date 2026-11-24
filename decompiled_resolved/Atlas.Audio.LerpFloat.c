// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Audio.LerpFloat

// ============================================================
// RVA: 0x1483bec | Atlas.Audio.LerpFloat.get_Changed
// ============================================================

bool Atlas_Audio_LerpFloat__get_Changed(long param_1)

{
  return *(float *)(param_1 + 0x20) != *(float *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x1483c00 | Atlas.Audio.LerpFloat.get_Difference
// ============================================================

float Atlas_Audio_LerpFloat__get_Difference(long param_1)

{
  return *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1483c10 | Atlas.Audio.LerpFloat.get_Value
// ============================================================

undefined4 Atlas_Audio_LerpFloat__get_Value(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x1483c18 | Atlas.Audio.LerpFloat..ctor
// ============================================================

void Atlas_Audio_LerpFloat___ctor
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  *(undefined4 *)(param_4 + 0x20) = 0xbf800000;
  /*System.Object$$.ctor*/ func_0x0294d018(param_4,0);
  *(undefined4 *)(param_4 + 0x10) = param_1;
  *(undefined4 *)(param_4 + 0x14) = param_2;
  *(undefined4 *)(param_4 + 0x18) = param_3;
  *(undefined4 *)(param_4 + 0x1c) = param_3;
  return;
}



// ============================================================
// RVA: 0x1483c68 | Atlas.Audio.LerpFloat.Tick
// ============================================================

long Atlas_Audio_LerpFloat__Tick(float param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_2 + 0x10);
  *(float *)(param_2 + 0x20) = fVar3;
  lVar1 = 0x1c;
  if (fVar3 <= *(float *)(param_2 + 0x14)) {
    lVar1 = 0x18;
  }
  uVar2 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar3,*(float *)(param_2 + 0x14),*(float *)(param_2 + lVar1) * param_1,0);
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  return param_2;
}



// ============================================================
// RVA: 0x1483cb8 | Atlas.Audio.LerpFloat.SetValue
// ============================================================

void Atlas_Audio_LerpFloat__SetValue(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x14) = param_1;
  return;
}



// ============================================================
// RVA: 0x1483cc0 | Atlas.Audio.LerpFloat.SetValueImmediate
// ============================================================

void Atlas_Audio_LerpFloat__SetValueImmediate(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  *(undefined4 *)(param_2 + 0x14) = param_1;
  return;
}



// ============================================================
// RVA: 0x1483cc8 | Atlas.Audio.LerpFloat.SetRate
// ============================================================

void Atlas_Audio_LerpFloat__SetRate(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x18) = param_1;
  *(undefined4 *)(param_3 + 0x1c) = param_2;
  return;
}



