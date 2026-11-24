// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.ReplicatorFloatCompression

// ============================================================
// RVA: 0x1681c28 | Core.Services.ReplicatorFloatCompression.QuantizeToByte
// ============================================================

uint Core_Services_ReplicatorFloatCompression__QuantizeToByte(float param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  if (param_2 < 0.0) {
    uVar1 = 0;
  }
  else {
    fVar2 = param_2;
    if (param_1 <= param_2) {
      fVar2 = param_1;
    }
    fVar3 = -param_2;
    if (-param_2 <= fVar2) {
      fVar3 = fVar2;
    }
    uVar1 = (uint)((fVar3 + param_2) / ((param_2 + param_2) / 255.0));
  }
  return uVar1 & 0xff;
}



// ============================================================
// RVA: 0x1681c7c | Core.Services.ReplicatorFloatCompression.QuantizeInternal
// ============================================================

int Core_Services_ReplicatorFloatCompression__QuantizeInternal
              (float param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  
  if (0.0 <= param_2) {
    fVar1 = param_2;
    if (param_1 <= param_2) {
      fVar1 = param_1;
    }
    fVar2 = -param_2;
    if (-param_2 <= fVar1) {
      fVar2 = fVar1;
    }
    return (int)((fVar2 + param_2) / ((param_2 + param_2) / (float)param_3));
  }
  return 0;
}



// ============================================================
// RVA: 0x1681cc8 | Core.Services.ReplicatorFloatCompression.DeQuantize
// ============================================================

float Core_Services_ReplicatorFloatCompression__DeQuantize(float param_1,uint param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((param_2 != 0x7f) && (0.0 <= param_1)) {
    fVar1 = ((param_1 + param_1) / 255.0) * (float)param_2 - param_1;
  }
  return fVar1;
}



// ============================================================
// RVA: 0x1681d00 | Core.Services.ReplicatorFloatCompression.DeQuantizeInternal
// ============================================================

float Core_Services_ReplicatorFloatCompression__DeQuantizeInternal
                (float param_1,uint param_2,int param_3)

{
  int iVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (0.0 <= param_1) {
    iVar1 = param_3;
    if (param_3 < 0) {
      iVar1 = param_3 + 1;
    }
    if ((ulong)param_2 != (long)(iVar1 >> 1)) {
      fVar2 = ((param_1 + param_1) / (float)param_3) * (float)param_2 - param_1;
    }
  }
  return fVar2;
}



// ============================================================
// RVA: 0x1681d44 | Core.Services.ReplicatorFloatCompression.QuantizeToUShort
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint Core_Services_ReplicatorFloatCompression__QuantizeToUShort(float param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  if (param_2 < 0.0) {
    uVar1 = 0;
  }
  else {
    fVar2 = param_2;
    if (param_1 <= param_2) {
      fVar2 = param_1;
    }
    fVar3 = -param_2;
    if (-param_2 <= fVar2) {
      fVar3 = fVar2;
    }
    uVar1 = (uint)((fVar3 + param_2) / ((param_2 + param_2) / _UNK_03408110));
  }
  return uVar1 & 0xffff;
}



// ============================================================
// RVA: 0x1681d98 | Core.Services.ReplicatorFloatCompression.DeQuantize
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float Core_Services_ReplicatorFloatCompression__DeQuantize(float param_1,uint param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((param_2 != 0x7fff) && (0.0 <= param_1)) {
    fVar1 = ((param_1 + param_1) / _UNK_03408110) * (float)param_2 - param_1;
  }
  return fVar1;
}



// ============================================================
// RVA: 0x1681dd4 | Core.Services.ReplicatorFloatCompression.QuantizeToUShort
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Core_Services_ReplicatorFloatCompression__QuantizeToUShort
                (float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar3;
  ulong uVar2;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  if (param_4 < 0.0) {
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
    fVar5 = -param_4;
    fVar6 = (param_4 + param_4) / _UNK_03408110;
    uVar4 = CONCAT44(param_1,param_2) ^
            (CONCAT44(param_1,param_2) ^ CONCAT44(param_4,param_4)) &
            CONCAT44(-(uint)(param_4 < param_1),-(uint)(param_4 < param_2));
    uVar4 = uVar4 ^ (uVar4 ^ CONCAT44(fVar5,fVar5)) &
                    CONCAT44(-(uint)((float)(uVar4 >> 0x20) < fVar5),-(uint)((float)uVar4 < fVar5));
    fVar1 = ((float)uVar4 + param_4) / fVar6;
    fVar3 = ((float)(uVar4 >> 0x20) + param_4) / fVar6;
    uVar2 = CONCAT44((int)fVar3,(int)fVar1) ^
            (CONCAT44((int)fVar3,(int)fVar1) ^ CONCAT44((int)fVar3,(int)fVar1)) &
            CONCAT44(-(uint)(fVar3 < 0.0),-(uint)(fVar1 < 0.0));
    fVar1 = param_4;
    if (param_3 <= param_4) {
      fVar1 = param_3;
    }
    if (fVar5 <= fVar1) {
      fVar5 = fVar1;
    }
    uVar4 = (ulong)(uint)(int)((fVar5 + param_4) / fVar6);
  }
  return (uVar2 & 0xffff) << 0x10 | uVar4 << 0x20 | uVar2 >> 0x20 & 0xffff;
}



// ============================================================
// RVA: 0x1681e78 | Core.Services.ReplicatorFloatCompression.DeQuantize
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float Core_Services_ReplicatorFloatCompression__DeQuantize(float param_1,ushort param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((param_2 != 0x7fff) && (fVar1 = 0.0, 0.0 <= param_1)) {
    fVar1 = ((param_1 + param_1) / _UNK_03408110) * (float)param_2 - param_1;
  }
  return fVar1;
}



// ============================================================
// RVA: 0x1681f2c | Core.Services.ReplicatorFloatCompression.QuantizeToUShort
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint Core_Services_ReplicatorFloatCompression__QuantizeToUShort
               (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  
  if (0.0 <= param_5) {
    fVar3 = param_5;
    if (param_1 <= param_5) {
      fVar3 = param_1;
    }
    fVar6 = -param_5;
    fVar1 = fVar6;
    if (fVar6 <= fVar3) {
      fVar1 = fVar3;
    }
    fVar7 = (param_5 + param_5) / 255.0;
    fVar3 = param_5;
    if (param_3 <= param_5) {
      fVar3 = param_3;
    }
    fVar2 = fVar6;
    if (fVar6 <= fVar3) {
      fVar2 = fVar3;
    }
    uVar5 = CONCAT44(param_2,param_4) ^
            (CONCAT44(param_2,param_4) ^ CONCAT44(param_5,param_5)) &
            CONCAT44(-(uint)(param_5 < param_2),-(uint)(param_5 < param_4));
    uVar5 = uVar5 ^ (uVar5 ^ CONCAT44(fVar6,fVar6)) &
                    CONCAT44(-(uint)((float)(uVar5 >> 0x20) < fVar6),-(uint)((float)uVar5 < fVar6));
    fVar3 = ((float)uVar5 + param_5) / fVar7;
    fVar6 = ((float)(uVar5 >> 0x20) + param_5) / fVar7;
    uVar4 = NEON_ushl(CONCAT44((int)fVar6,(int)fVar3) ^
                      (CONCAT44((int)fVar6,(int)fVar3) ^ CONCAT44((int)fVar6,(int)fVar3)) &
                      CONCAT44(-(uint)(fVar6 < 0.0),-(uint)(fVar3 < 0.0)),_UNK_03408118,4);
    return (uint)uVar4 | ((int)((fVar2 + param_5) / fVar7) & 0xffU) << 0x10 |
           (uint)((ulong)uVar4 >> 0x20) & 0xff00 | (int)((fVar1 + param_5) / fVar7) & 0xffU;
  }
  return 0;
}



// ============================================================
// RVA: 0x1682008 | Core.Services.ReplicatorFloatCompression.DeQuantize
// ============================================================

float Core_Services_ReplicatorFloatCompression__DeQuantize(float param_1,byte param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((param_2 != 0x7f) && (fVar1 = 0.0, 0.0 <= param_1)) {
    fVar1 = ((param_1 + param_1) / 255.0) * (float)param_2 - param_1;
  }
  return fVar1;
}



