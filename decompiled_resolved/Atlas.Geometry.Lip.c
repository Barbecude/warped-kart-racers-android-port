// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Geometry.Lip

// ============================================================
// RVA: 0x1486a9c | Atlas.Geometry.Lip.get_PolyLines
// ============================================================

undefined8 Atlas_Geometry_Lip__get_PolyLines(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x1486aa4 | Atlas.Geometry.Lip.get_UOffsets
// ============================================================

undefined8 Atlas_Geometry_Lip__get_UOffsets(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1486aac | Atlas.Geometry.Lip.Generate
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Geometry_Lip__Generate
               (float param_1,float param_2,float param_3,long param_4,undefined8 param_5,
               undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined1 *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if ((bRam0000000003eb4942 & 1) == 0) {
    func_0x00f78a20(0x3d21948);
    func_0x00f78a20(0x3d1f288);
    func_0x00f78a20(0x3d1f3d8);
    bRam0000000003eb4942 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  lVar2 = func_0x00f78aec(/*Atlas.Geometry.FixedWidthHeightSampler_TypeInfo*/ uRam0000000003d21948);
  Atlas_Geometry_FixedWidthHeightSampler___ctor(lVar2,0);
  if (lVar2 != 0) {
    fVar10 = param_2 * param_3;
    Atlas_Geometry_FixedWidthHeightSampler__Init(0,0,lVar2,0);
    /*Atlas.Geometry.PolyLine$$CreateProjectedPolyLineObjectSpace*/ func_0x014c1c90(&uStack_128,param_5,param_6,lVar2,0);
    uStack_88 = uStack_120;
    uStack_90 = uStack_128;
    uStack_80 = uStack_118;
    Atlas_Geometry_FixedWidthHeightSampler__Init
              (fVar10 * _UNK_033f83d0,param_2 * _UNK_033f83d4,lVar2,0);
    /*Atlas.Geometry.PolyLine$$CreateProjectedPolyLineWorldSpace*/ func_0x014c1a20(&uStack_140,&uStack_90,param_6,lVar2,0);
    uStack_a8 = uStack_138;
    uStack_b0 = uStack_140;
    uStack_a0 = uStack_130;
    Atlas_Geometry_FixedWidthHeightSampler__Init
              (fVar10 * _UNK_033f83d8,param_2 * _UNK_033f83dc,lVar2,0);
    /*Atlas.Geometry.PolyLine$$CreateProjectedPolyLineWorldSpace*/ func_0x014c1a20(&uStack_158,&uStack_90,param_6,lVar2,0);
    uStack_c8 = uStack_150;
    uStack_d0 = uStack_158;
    uStack_c0 = uStack_148;
    Atlas_Geometry_FixedWidthHeightSampler__Init
              (fVar10 * _UNK_033f83e0,param_2 * _UNK_033f83e4,lVar2,0);
    /*Atlas.Geometry.PolyLine$$CreateProjectedPolyLineWorldSpace*/ func_0x014c1a20(&uStack_170,&uStack_90,param_6,lVar2,0);
    uStack_e8 = uStack_168;
    uStack_f0 = uStack_170;
    uStack_e0 = uStack_160;
    Atlas_Geometry_FixedWidthHeightSampler__Init(param_1 * param_3,0,lVar2,0);
    /*Atlas.Geometry.PolyLine$$CreateProjectedPolyLineObjectSpace*/ func_0x014c1c90(&uStack_188,param_5,param_6,lVar2,0);
    uStack_108 = uStack_180;
    uStack_110 = uStack_188;
    uStack_100 = uStack_178;
    lVar3 = func_0x00f78a34(/*Atlas.Geometry.PolyLine[]_TypeInfo*/ uRam0000000003d1f288,5);
    *(long *)(param_4 + 0x10) = lVar3;
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(undefined8 *)(lVar3 + 0x28) = uStack_e8;
        *(undefined8 *)(lVar3 + 0x20) = uStack_f0;
        *(undefined8 *)(lVar3 + 0x30) = uStack_e0;
        lVar3 = *(long *)(param_4 + 0x10);
        if (lVar3 == 0) goto LAB_01486e78;
        if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar3 + 0x40) = uStack_c8;
          *(undefined8 *)(lVar3 + 0x38) = uStack_d0;
          *(undefined8 *)(lVar3 + 0x48) = uStack_c0;
          lVar3 = *(long *)(param_4 + 0x10);
          if (lVar3 == 0) goto LAB_01486e78;
          if (2 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x58) = uStack_a8;
            *(undefined8 *)(lVar3 + 0x50) = uStack_b0;
            *(undefined8 *)(lVar3 + 0x60) = uStack_a0;
            lVar3 = *(long *)(param_4 + 0x10);
            if (lVar3 == 0) goto LAB_01486e78;
            if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar3 + 0x78) = uStack_80;
              *(undefined8 *)(lVar3 + 0x70) = uStack_88;
              *(undefined8 *)(lVar3 + 0x68) = uStack_90;
              lVar3 = *(long *)(param_4 + 0x10);
              if (lVar3 == 0) goto LAB_01486e78;
              if (4 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x88) = uStack_108;
                *(undefined8 *)(lVar3 + 0x80) = uStack_110;
                *(undefined8 *)(lVar3 + 0x90) = uStack_100;
                lVar3 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,5);
                *(long *)(param_4 + 0x18) = lVar3;
                if (lVar3 == 0) goto LAB_01486e78;
                uVar1 = *(uint *)(lVar3 + 0x18);
                if ((((uVar1 != 0) && (*(undefined4 *)(lVar3 + 0x20) = 0, uVar1 != 1)) &&
                    (*(undefined4 *)(lVar3 + 0x24) = 0x3e19999a, 2 < uVar1)) &&
                   ((*(undefined4 *)(lVar3 + 0x28) = 0x3e4ccccd, uVar1 != 3 &&
                    (*(undefined4 *)(lVar3 + 0x2c) = 0x3e800000, 4 < uVar1)))) {
                  *(undefined4 *)(lVar3 + 0x30) = 0x3f800000;
                  if (param_3 < 0.0) {
                    /*System.Array$$Reverse*/ func_0x0292d370(*(undefined8 *)(param_4 + 0x10),0);
                    /*System.Array$$Reverse*/ func_0x0292d370(*(undefined8 *)(param_4 + 0x18),0);
                    lVar3 = *(long *)(param_4 + 0x18);
                    if (lVar3 == 0) goto LAB_01486e78;
                    uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
                    lVar7 = (long)(int)*(uint *)(lVar3 + 0x18);
                    if (lVar7 < 1) {
                      lVar7 = 0;
                    }
                    if (uVar5 == 1 || 0x100000000 < (long)(uVar5 << 0x20)) {
                      pfVar8 = (float *)(lVar3 + 0x20);
                      do {
                        if (uVar5 == 0) goto LAB_01486e6c;
                        *pfVar8 = 1.0 - *pfVar8;
                        uVar5 = uVar5 - 1;
                        lVar7 = lVar7 + -1;
                        pfVar8 = pfVar8 + 1;
                      } while (lVar7 != 0);
                    }
                  }
                  return;
                }
              }
            }
          }
        }
      }
LAB_01486e6c:
      uVar4 = func_0x00f78b24();
      func_0x00f78ac0(uVar4,0);
    }
  }
LAB_01486e78:
  lVar3 = func_0x00f78af4();
  puStack_198 = &Atlas_Geometry_Lip__DrawGizmos;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((lVar3 != 0) && (0 < (int)*(ulong *)(lVar3 + 0x18))) {
    uVar5 = 0;
    uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
    puVar9 = (undefined8 *)(lVar3 + 0x20);
    lStack_1c0 = lVar2;
    uStack_1b8 = param_5;
    uStack_1b0 = param_6;
    lStack_1a8 = param_4;
    puStack_1a0 = &stack0xfffffffffffffff0;
    do {
      if (uVar6 <= uVar5) {
        uVar4 = func_0x00f78b24();
        func_0x00f78ac0(uVar4,0);
        return;
      }
      uStack_1d8 = puVar9[1];
      uStack_1e0 = *puVar9;
      uStack_1d0 = puVar9[2];
      /*UnityEngine.Color$$get_green*/ func_0x03223580(0);
      /*Atlas.Geometry.PolyLine$$DrawGizmosLines*/ func_0x014c29f0(&uStack_1e0,0);
      uVar5 = uVar5 + 1;
      uVar6 = (ulong)*(uint *)(lVar3 + 0x18);
      puVar9 = puVar9 + 3;
    } while ((long)uVar5 < (long)(int)*(uint *)(lVar3 + 0x18));
  }
  return;
}



// ============================================================
// RVA: 0x1486e7c | Atlas.Geometry.Lip.DrawGizmos
// ============================================================

void Atlas_Geometry_Lip__DrawGizmos(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  if ((lVar3 != 0) && (0 < (int)*(ulong *)(lVar3 + 0x18))) {
    uVar4 = 0;
    uVar2 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
    puVar5 = (undefined8 *)(lVar3 + 0x20);
    do {
      if (uVar2 <= uVar4) {
        uVar1 = func_0x00f78b24();
        func_0x00f78ac0(uVar1,0);
        return;
      }
      uStack_48 = puVar5[1];
      uStack_50 = *puVar5;
      uStack_40 = puVar5[2];
      /*UnityEngine.Color$$get_green*/ func_0x03223580(0);
      /*Atlas.Geometry.PolyLine$$DrawGizmosLines*/ func_0x014c29f0(&uStack_50,0);
      uVar4 = uVar4 + 1;
      uVar2 = (ulong)*(uint *)(lVar3 + 0x18);
      puVar5 = puVar5 + 3;
    } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
  }
  return;
}



// ============================================================
// RVA: 0x1486f18 | Atlas.Geometry.Lip..ctor
// ============================================================

void Atlas_Geometry_Lip___ctor(void)

{
  return;
}



