// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Maths.Math4d

// ============================================================
// RVA: 0x1493768 | Atlas.Maths.Math4d.NearestPointOnLineSegment
// ============================================================

float Atlas_Maths_Math4d__NearestPointOnLineSegment
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,float param_7,float param_8)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float in_stack_00000020;
  
  in_stack_00000020 =
       ((param_4 - param_8) * fStack000000000000001c +
       (param_3 - param_7) * fStack0000000000000018 +
       (param_1 - param_5) * fStack0000000000000010 + (param_2 - param_6) * fStack0000000000000014)
       * in_stack_00000020;
  iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(in_stack_00000020,0);
  fVar3 = 1.0;
  if (in_stack_00000020 <= 1.0 && iVar1 == 0) {
    fVar3 = in_stack_00000020;
  }
  iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar3,0);
  fVar2 = 0.0;
  if (iVar1 == 0 && 0.0 <= fVar3) {
    fVar2 = fVar3;
  }
  return param_5 + fStack0000000000000010 * fVar2;
}



// ============================================================
// RVA: 0x1493858 | Atlas.Maths.Math4d.Cross
// ============================================================

float Atlas_Maths_Math4d__Cross
                (undefined1 param_1 [16],float param_2,float param_3,undefined1 param_4 [16],
                float param_5,float param_6)

{
  return param_2 * param_6 - param_3 * param_5;
}



// ============================================================
// RVA: 0x1493884 | Atlas.Maths.Math4d.Cross
// ============================================================

float Atlas_Maths_Math4d__Cross
                (undefined1 param_1 [16],float param_2,float param_3,undefined1 param_4 [16],
                undefined1 param_5 [16],float param_6,float param_7)

{
  return param_2 * param_7 - param_3 * param_6;
}



// ============================================================
// RVA: 0x14938b0 | Atlas.Maths.Math4d.Cross
// ============================================================

float Atlas_Maths_Math4d__Cross
                (undefined1 param_1 [16],float param_2,float param_3,undefined1 param_4 [16],
                undefined1 param_5 [16],float param_6,float param_7)

{
  return param_2 * param_7 - param_3 * param_6;
}



// ============================================================
// RVA: 0x14938dc | Atlas.Maths.Math4d.Float4ToVector3
// ============================================================

void Atlas_Maths_Math4d__Float4ToVector3(void)

{
  return;
}



// ============================================================
// RVA: 0x14938e0 | Atlas.Maths.Math4d.Vector3ToFloat4
// ============================================================

void Atlas_Maths_Math4d__Vector3ToFloat4(void)

{
  return;
}



// ============================================================
// RVA: 0x14938e8 | Atlas.Maths.Math4d..cctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Maths_Math4d___cctor(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000003eb49b1 & 1) == 0) {
    func_0x00f78a20(0x3d232d8);
    bRam0000000003eb49b1 = 1;
  }
  uVar1 = _UNK_033f8440;
  puVar2 = *(undefined8 **)(/*Atlas.Maths.Math4d_TypeInfo*/ lRam0000000003d232d8 + 0xb8);
  puVar2[1] = _UNK_033f8448;
  *puVar2 = uVar1;
  return;
}



