// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.DebugVisualiser.IcoSphere

// ============================================================
// RVA: 0x154ad2c | Atlas.Gameplay.DebugVisualiser.IcoSphere.GetMiddlePoint
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_DebugVisualiser_IcoSphere__GetMiddlePoint
                (float param_1,ulong param_2,float param_3,uint param_4,uint param_5,long *param_6,
                long *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  float extraout_s0;
  float fVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  ulong uStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  int aiStack_158 [2];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  long alStack_118 [3];
  ulong uStack_80;
  float fStack_78;
  uint uStack_74;
  
  if ((bRam0000000003eb4f76 & 1) == 0) {
    func_0x00f78a20(0x3d2efc0);
    func_0x00f78a20(0x3d2eff8);
    func_0x00f78a20(0x3d3c7b8);
    func_0x00f78a20(0x3d3c7e0);
    func_0x00f78a20(0x3d3c7e8);
    bRam0000000003eb4f76 = 1;
  }
  uStack_74 = 0;
  uVar3 = param_4;
  if ((int)param_5 <= (int)param_4) {
    uVar3 = param_5;
  }
  uVar2 = param_4;
  if ((int)param_4 <= (int)param_5) {
    uVar2 = param_5;
  }
  if (*param_7 != 0) {
    lVar10 = ((ulong)uVar3 << 0x20) + (long)(int)uVar2;
    iVar6 = /*System.Collections.Generic.Dictionary<long, int>$$TryGetValue*/ func_0x01eaeb74(*param_7,lVar10,&uStack_74,uRam0000000003d2eff8);
    if (iVar6 != 0) {
      return (ulong)uStack_74;
    }
    lVar15 = *param_6;
    if (lVar15 != 0) {
      lVar13 = lVar15;
      if (*(uint *)(lVar15 + 0x18) <= param_4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar13 = *param_6;
      }
      if (lVar13 != 0) {
        lVar15 = *(long *)(lVar15 + 0x10) + (long)(int)param_4 * 0xc;
        uVar21 = *(undefined8 *)(lVar15 + 0x20);
        fVar22 = *(float *)(lVar15 + 0x28);
        lVar15 = lVar13;
        if (*(uint *)(lVar13 + 0x18) <= param_5) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar15 = *param_6;
        }
        lVar13 = *(long *)(lVar13 + 0x10) + (long)(int)param_5 * 0xc;
        fStack_78 = (fVar22 + *(float *)(lVar13 + 0x28)) * 0.5;
        uVar19 = *(undefined8 *)(lVar13 + 0x20);
        param_3 = 0.5;
        param_2 = CONCAT44(((float)((ulong)uVar21 >> 0x20) + (float)((ulong)uVar19 >> 0x20)) * 0.5,
                           ((float)uVar21 + (float)uVar19) * 0.5);
        uStack_80 = param_2;
        if (lVar15 != 0) {
          uVar3 = *(uint *)(lVar15 + 0x18);
          fVar22 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_80,0);
          param_2 = (ulong)(uint)((float)param_2 * param_1);
          param_3 = param_3 * param_1;
          /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar22 * param_1,param_2,lVar15,uRam0000000003d3c7b8);
          if (*param_7 != 0) {
            /*System.Collections.Generic.Dictionary<long, int>$$Add*/ func_0x01ead03c(*param_7,lVar10,(ulong)uVar3,uRam0000000003d2efc0);
            return (ulong)uVar3;
          }
        }
      }
    }
  }
  fVar22 = (float)param_2;
  iVar6 = func_0x00f78af4();
  if ((bRam0000000003eb4f77 & 1) == 0) {
    func_0x00f78a20(0x3d2efb0);
    func_0x00f78a20(0x3d1c3a0);
    func_0x00f78a20(0x3d33888);
    func_0x00f78a20(0x3d33890);
    func_0x00f78a20(0x3d33898);
    func_0x00f78a20(0x3d3c7b8);
    func_0x00f78a20(0x3d3df18);
    func_0x00f78a20(0x3d3ac90);
    func_0x00f78a20(0x3d3df20);
    func_0x00f78a20(0x3d3c7d8);
    func_0x00f78a20(0x3d3acc8);
    func_0x00f78a20(0x3d3ac78);
    func_0x00f78a20(0x3d3df10);
    func_0x00f78a20(0x3d3c7b0);
    func_0x00f78a20(0x3d3c7e0);
    func_0x00f78a20(0x3d3df28);
    func_0x00f78a20(0x3d3c7e8);
    func_0x00f78a20(0x3d3df30);
    func_0x00f78a20(0x3d1daa8);
    func_0x00f78a20(0x3d1dfa8);
    func_0x00f78a20(0x3d1e3f0);
    func_0x00f78a20(0x3d23388);
    func_0x00f78a20(0x3d1f5e0);
    bRam0000000003eb4f77 = 1;
  }
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  aiStack_158[1] = 0;
  lVar15 = func_0x00f78aec(/*System.Collections.Generic.List<Vector3>_TypeInfo*/ uRam0000000003d1dfa8);
  /*System.Collections.Generic.List<Vector3>$$.ctor*/ func_0x0248859c(lVar15,uRam0000000003d3c7b0);
  alStack_118[0] = lVar15;
  uVar21 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<long, int>_TypeInfo*/ uRam0000000003d1c3a0);
  /*System.Collections.Generic.Dictionary<long, int>$$.ctor*/ func_0x01eacb08(uVar21,uRam0000000003d2efb0);
  uStack_130 = _UNK_033f8888;
  uStack_128 = 0;
  uStack_120 = uVar21;
  fVar17 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_130,0);
  lVar10 = 0;
  if (lVar15 != 0) {
    param_3 = param_3 * extraout_s0;
    fVar22 = fVar22 * extraout_s0;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar17 * extraout_s0,fVar22,lVar15,uRam0000000003d3c7b8);
    uStack_130 = _UNK_033f8890;
    uStack_128 = 0;
    fVar17 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_130,0);
    fVar22 = fVar22 * extraout_s0;
    param_3 = param_3 * extraout_s0;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar17 * extraout_s0,fVar22,lVar15,uRam0000000003d3c7b8);
    uStack_130 = _UNK_033f8898;
    uStack_128 = 0;
    fVar17 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_130,0);
    fVar22 = fVar22 * extraout_s0;
    param_3 = param_3 * extraout_s0;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar17 * extraout_s0,fVar22,lVar15,uRam0000000003d3c7b8);
    uStack_130 = _UNK_033f88a0;
    uStack_128 = 0;
    fVar17 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_130,0);
    fVar22 = fVar22 * extraout_s0;
    param_3 = param_3 * extraout_s0;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar17 * extraout_s0,fVar22,lVar15,uRam0000000003d3c7b8);
    uVar19 = _UNK_033f8420;
    uStack_130 = _UNK_033f8420;
    uStack_128 = 0x3fcf1bbd;
    fVar17 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_130,0);
    fVar22 = fVar22 * extraout_s0;
    param_3 = param_3 * extraout_s0;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar17 * extraout_s0,fVar22,lVar15,uRam0000000003d3c7b8);
    uVar21 = _UNK_033f83a8;
    uStack_130 = _UNK_033f83a8;
    uStack_128 = 0x3fcf1bbd;
    fVar17 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_130,0);
    fVar22 = fVar22 * extraout_s0;
    param_3 = param_3 * extraout_s0;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar17 * extraout_s0,fVar22,lVar15,uRam0000000003d3c7b8);
    uStack_130 = uVar19;
    uStack_128 = 0xbfcf1bbd;
    fVar17 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_130,0);
    fVar22 = fVar22 * extraout_s0;
    param_3 = param_3 * extraout_s0;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar17 * extraout_s0,fVar22,lVar15,uRam0000000003d3c7b8);
    uStack_130 = uVar21;
    uStack_128 = 0xbfcf1bbd;
    fVar17 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_130,0);
    fVar22 = fVar22 * extraout_s0;
    param_3 = param_3 * extraout_s0;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar17 * extraout_s0,fVar22,lVar15,uRam0000000003d3c7b8);
    uVar21 = _UNK_033f88a8;
    uStack_130 = _UNK_033f88a8;
    uStack_128 = 0xbf800000;
    fVar17 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_130,0);
    fVar22 = fVar22 * extraout_s0;
    param_3 = param_3 * extraout_s0;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar17 * extraout_s0,fVar22,lVar15,uRam0000000003d3c7b8);
    uStack_130 = uVar21;
    uStack_128 = 0x3f800000;
    fVar17 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_130,0);
    fVar22 = fVar22 * extraout_s0;
    param_3 = param_3 * extraout_s0;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar17 * extraout_s0,fVar22,lVar15,uRam0000000003d3c7b8);
    uVar21 = _UNK_033f88b0;
    uStack_130 = _UNK_033f88b0;
    uStack_128 = 0xbf800000;
    fVar17 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_130,0);
    fVar22 = fVar22 * extraout_s0;
    param_3 = param_3 * extraout_s0;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar17 * extraout_s0,fVar22,lVar15,uRam0000000003d3c7b8);
    uStack_130 = uVar21;
    uStack_128 = 0x3f800000;
    fVar17 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_130,0);
    uVar20 = (ulong)(uint)(param_3 * extraout_s0);
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar17 * extraout_s0,fVar22 * extraout_s0,lVar15,uRam0000000003d3c7b8);
    lVar15 = func_0x00f78aec(/*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>_TypeInfo*/ uRam0000000003d1e3f0);
    /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$.ctor*/ func_0x025d04e8(lVar15,uRam0000000003d3df10);
    uStack_2a0 = 0;
    uStack_2a8 = 0;
    /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_2a8,0,0xb,5,0);
    lVar10 = lVar15;
    if (lVar15 != 0) {
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_2a8,uStack_2a0,uRam0000000003d3df18);
      uStack_160 = 0;
      uStack_168 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_168,0,5,1,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_168,uStack_160,uRam0000000003d3df18);
      uStack_170 = 0;
      uStack_178 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_178,0,1,7,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_178,uStack_170,uRam0000000003d3df18);
      uStack_180 = 0;
      uStack_188 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_188,0,7,10,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_188,uStack_180,uRam0000000003d3df18);
      uStack_190 = 0;
      uStack_198 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_198,0,10,0xb,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_198,uStack_190,uRam0000000003d3df18);
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_1a8,1,5,9,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_1a8,uStack_1a0,uRam0000000003d3df18);
      uStack_1b0 = 0;
      uStack_1b8 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_1b8,5,0xb,4,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_1b8,uStack_1b0,uRam0000000003d3df18);
      uStack_1c0 = 0;
      uStack_1c8 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_1c8,0xb,10,2,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_1c8,uStack_1c0,uRam0000000003d3df18);
      uStack_1d0 = 0;
      uStack_1d8 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_1d8,10,7,6,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_1d8,uStack_1d0,uRam0000000003d3df18);
      uStack_1e0 = 0;
      uStack_1e8 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_1e8,7,1,8,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_1e8,uStack_1e0,uRam0000000003d3df18);
      uStack_1f0 = 0;
      uStack_1f8 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_1f8,3,9,4,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_1f8,uStack_1f0,uRam0000000003d3df18);
      uStack_200 = 0;
      uStack_208 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_208,3,4,2,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_208,uStack_200,uRam0000000003d3df18);
      uStack_210 = 0;
      uStack_218 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_218,3,2,6,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_218,uStack_210,uRam0000000003d3df18);
      uStack_220 = 0;
      uStack_228 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_228,3,6,8,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_228,uStack_220,uRam0000000003d3df18);
      uStack_230 = 0;
      uStack_238 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_238,3,8,9,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_238,uStack_230,uRam0000000003d3df18);
      uStack_240 = 0;
      uStack_248 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_248,4,9,5,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_248,uStack_240,uRam0000000003d3df18);
      uStack_250 = 0;
      uStack_258 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_258,2,4,0xb,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_258,uStack_250,uRam0000000003d3df18);
      uStack_260 = 0;
      uStack_268 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_268,6,2,10,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_268,uStack_260,uRam0000000003d3df18);
      uStack_270 = 0;
      uStack_278 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_278,8,6,7,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_278,uStack_270,uRam0000000003d3df18);
      uStack_280 = 0;
      uStack_288 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_288,9,8,1,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_288,uStack_280,uRam0000000003d3df18);
      if (0 < iVar6) {
        iVar16 = 0;
        lVar13 = lVar15;
        do {
          lVar15 = func_0x00f78aec(/*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>_TypeInfo*/ uRam0000000003d1e3f0);
          /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$.ctor*/ func_0x025d04e8(lVar15,uRam0000000003d3df10);
          lVar10 = 0;
          if (lVar13 == 0) goto code_r0x0154bc1c;
          /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$GetEnumerator*/ func_0x025d1d28(&uStack_2a8,lVar13,uRam0000000003d3df20);
          uStack_148 = CONCAT44(uStack_29c,uStack_2a0);
          uStack_150 = uStack_2a8;
          uStack_138 = uStack_290;
          uStack_140 = uStack_298;
          while (uVar7 = /*System.Collections.Generic.List.Enumerator<DebugVisualiser.IcoSphere.TriangleIndices>$$MoveNext*/ func_0x01f87e08(&uStack_150,uRam0000000003d33890), (uVar7 & 1) != 0) {
            uVar7 = uStack_140 & 0xffffffff;
            uVar18 = uStack_140._4_4_;
            uVar11 = uStack_138 & 0xffffffff;
            uVar21 = Atlas_Gameplay_DebugVisualiser_IcoSphere__GetMiddlePoint
                               (extraout_s0,uVar7,uStack_140._4_4_,alStack_118,&uStack_120);
            uVar19 = Atlas_Gameplay_DebugVisualiser_IcoSphere__GetMiddlePoint
                               (extraout_s0,uVar18,uVar11,alStack_118,&uStack_120);
            uVar8 = Atlas_Gameplay_DebugVisualiser_IcoSphere__GetMiddlePoint
                              (extraout_s0,uVar11,uVar7,alStack_118,&uStack_120);
            uStack_2a0 = 0;
            uStack_2a8 = 0;
            /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_2a8,uVar7,uVar21,uVar8,0);
            if (lVar15 == 0) {
              func_0x00f78af4();
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x154bc3c);
              (*pcVar5)();
            }
            /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_2a8,uStack_2a0,uRam0000000003d3df18);
            uStack_160 = 0;
            uStack_168 = 0;
            /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_168,uVar18,uVar19,uVar21,0);
            /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_168,uStack_160,uRam0000000003d3df18);
            uStack_170 = 0;
            uStack_178 = 0;
            /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_178,uVar11,uVar8,uVar19,0);
            /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_178,uStack_170,uRam0000000003d3df18);
            uStack_180 = 0;
            uStack_188 = 0;
            /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_188,uVar21,uVar19,uVar8,0);
            /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar15,uStack_188,uStack_180,uRam0000000003d3df18);
          }
          aiStack_158[aiStack_158[1]] = 0x3f8;
          iVar4 = aiStack_158[1];
          iVar1 = aiStack_158[1] + 1;
          aiStack_158[1] = iVar1;
          /*System.Collections.Generic.List.Enumerator<DebugVisualiser.IcoSphere.TriangleIndices>$$Dispose*/ func_0x01f87e04(&uStack_150,uRam0000000003d33888);
          if ((iVar1 != 0) && (aiStack_158[iVar4] == 0x3f8)) {
            aiStack_158[1] = iVar4;
          }
          iVar16 = iVar16 + 1;
          lVar13 = lVar15;
        } while (iVar16 != iVar6);
      }
      uVar7 = func_0x00f78aec(/*UnityEngine.Mesh_TypeInfo*/ uRam0000000003d23388);
      /*UnityEngine.Mesh$$.ctor*/ func_0x0323f420(uVar7,0);
      lVar13 = alStack_118[0];
      lVar10 = lVar15;
      if ((alStack_118[0] != 0) &&
         (uVar21 = /*System.Collections.Generic.List<Vector3>$$ToArray*/ func_0x0248afac(alStack_118[0],uRam0000000003d3c7d8), uVar7 != 0)) {
        /*UnityEngine.Mesh$$set_vertices*/ func_0x03241d34(uVar7,uVar21,0);
        lVar9 = func_0x00f78aec(/*System.Collections.Generic.List<int>_TypeInfo*/ uRam0000000003d1daa8);
        /*System.Collections.Generic.List<int>$$.ctor*/ func_0x023db018(lVar9,uRam0000000003d3ac78);
        if (lVar15 != 0) {
          uVar11 = (ulong)*(uint *)(lVar15 + 0x18);
          if (0 < (int)*(uint *)(lVar15 + 0x18)) {
            lVar12 = 0;
            uVar14 = 0;
            do {
              if ((uVar11 & 0xffffffff) <= uVar14) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              if (lVar9 == 0) goto code_r0x0154bc1c;
              /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar9,*(undefined4 *)(*(long *)(lVar15 + 0x10) + lVar12 + 0x20),
                              uRam0000000003d3ac90);
              if (*(uint *)(lVar15 + 0x18) <= uVar14) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar9,*(undefined4 *)(*(long *)(lVar15 + 0x10) + lVar12 + 0x24),
                              uRam0000000003d3ac90);
              if (*(uint *)(lVar15 + 0x18) <= uVar14) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar9,*(undefined4 *)(*(long *)(lVar15 + 0x10) + lVar12 + 0x28),
                              uRam0000000003d3ac90);
              uVar14 = uVar14 + 1;
              uVar11 = (ulong)*(int *)(lVar15 + 0x18);
              lVar12 = lVar12 + 0xc;
            } while ((long)uVar14 < (long)uVar11);
          }
          if (lVar9 != 0) {
            uVar21 = /*System.Collections.Generic.List<int>$$ToArray*/ func_0x023dd918(lVar9,uRam0000000003d3acc8);
            /*UnityEngine.Mesh$$set_triangles*/ func_0x032448a4(uVar7,uVar21,0);
            lVar15 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,*(undefined4 *)(lVar13 + 0x18));
            lVar10 = 0x3d1f000;
            if (lVar15 != 0) {
              if (0 < *(int *)(lVar15 + 0x18)) {
                lVar10 = 0;
                uVar11 = 0;
                do {
                  if (*(uint *)(lVar13 + 0x18) <= uVar11) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar9 = *(long *)(lVar13 + 0x10) + lVar10;
                  uStack_128 = *(undefined4 *)(lVar9 + 0x28);
                  uVar21 = *(undefined8 *)(lVar9 + 0x20);
                  uStack_130 = uVar21;
                  uVar18 = /*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_130,0);
                  if (*(uint *)(lVar15 + 0x18) <= uVar11) goto code_r0x0154bc20;
                  lVar9 = lVar15 + lVar10;
                  *(undefined4 *)(lVar9 + 0x20) = uVar18;
                  *(int *)(lVar9 + 0x24) = (int)uVar21;
                  *(int *)(lVar9 + 0x28) = (int)uVar20;
                  uVar11 = uVar11 + 1;
                  lVar10 = lVar10 + 0xc;
                } while ((long)uVar11 < (long)*(int *)(lVar15 + 0x18));
              }
              /*UnityEngine.Mesh$$set_normals*/ func_0x03241df0(uVar7,lVar15,0);
              /*UnityEngine.Mesh$$RecalculateBounds*/ func_0x03246a70(uVar7,0);
              /*UnityEngine.Mesh$$RecalculateNormals*/ func_0x03246b7c(uVar7,0);
              return uVar7;
            }
          }
        }
      }
    }
  }
code_r0x0154bc1c:
  lVar15 = lVar10;
  func_0x00f78af4();
code_r0x0154bc20:
  lVar10 = func_0x00f78b24();
  do {
    func_0x00f78ac0(lVar10,0);
    __Unwind_Resume();
    lVar10 = lVar15;
  } while( true );
}



// ============================================================
// RVA: 0x154af04 | Atlas.Gameplay.DebugVisualiser.IcoSphere.Create
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Gameplay_DebugVisualiser_IcoSphere__Create
               (float param_1,float param_2,float param_3,int param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  ulong uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  int aiStack_d8 [2];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  long alStack_98 [3];
  
  if ((bRam0000000003eb4f77 & 1) == 0) {
    func_0x00f78a20(0x3d2efb0);
    func_0x00f78a20(0x3d1c3a0);
    func_0x00f78a20(0x3d33888);
    func_0x00f78a20(0x3d33890);
    func_0x00f78a20(0x3d33898);
    func_0x00f78a20(0x3d3c7b8);
    func_0x00f78a20(0x3d3df18);
    func_0x00f78a20(0x3d3ac90);
    func_0x00f78a20(0x3d3df20);
    func_0x00f78a20(0x3d3c7d8);
    func_0x00f78a20(0x3d3acc8);
    func_0x00f78a20(0x3d3ac78);
    func_0x00f78a20(0x3d3df10);
    func_0x00f78a20(0x3d3c7b0);
    func_0x00f78a20(0x3d3c7e0);
    func_0x00f78a20(0x3d3df28);
    func_0x00f78a20(0x3d3c7e8);
    func_0x00f78a20(0x3d3df30);
    func_0x00f78a20(0x3d1daa8);
    func_0x00f78a20(0x3d1dfa8);
    func_0x00f78a20(0x3d1e3f0);
    func_0x00f78a20(0x3d23388);
    func_0x00f78a20(0x3d1f5e0);
    bRam0000000003eb4f77 = 1;
  }
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  aiStack_d8[1] = 0;
  lVar4 = func_0x00f78aec(/*System.Collections.Generic.List<Vector3>_TypeInfo*/ uRam0000000003d1dfa8);
  /*System.Collections.Generic.List<Vector3>$$.ctor*/ func_0x0248859c(lVar4,uRam0000000003d3c7b0);
  alStack_98[0] = lVar4;
  uVar5 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<long, int>_TypeInfo*/ uRam0000000003d1c3a0);
  /*System.Collections.Generic.Dictionary<long, int>$$.ctor*/ func_0x01eacb08(uVar5,uRam0000000003d2efb0);
  uStack_b0 = _UNK_033f8888;
  uStack_a8 = 0;
  uStack_a0 = uVar5;
  fVar16 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_b0,0);
  lVar12 = 0;
  if (lVar4 != 0) {
    param_3 = param_3 * param_1;
    param_2 = param_2 * param_1;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar16 * param_1,param_2,lVar4,uRam0000000003d3c7b8);
    uStack_b0 = _UNK_033f8890;
    uStack_a8 = 0;
    fVar16 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_b0,0);
    param_2 = param_2 * param_1;
    param_3 = param_3 * param_1;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar16 * param_1,param_2,lVar4,uRam0000000003d3c7b8);
    uStack_b0 = _UNK_033f8898;
    uStack_a8 = 0;
    fVar16 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_b0,0);
    param_2 = param_2 * param_1;
    param_3 = param_3 * param_1;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar16 * param_1,param_2,lVar4,uRam0000000003d3c7b8);
    uStack_b0 = _UNK_033f88a0;
    uStack_a8 = 0;
    fVar16 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_b0,0);
    param_2 = param_2 * param_1;
    param_3 = param_3 * param_1;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar16 * param_1,param_2,lVar4,uRam0000000003d3c7b8);
    uVar7 = _UNK_033f8420;
    uStack_b0 = _UNK_033f8420;
    uStack_a8 = 0x3fcf1bbd;
    fVar16 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_b0,0);
    param_2 = param_2 * param_1;
    param_3 = param_3 * param_1;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar16 * param_1,param_2,lVar4,uRam0000000003d3c7b8);
    uVar5 = _UNK_033f83a8;
    uStack_b0 = _UNK_033f83a8;
    uStack_a8 = 0x3fcf1bbd;
    fVar16 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_b0,0);
    param_2 = param_2 * param_1;
    param_3 = param_3 * param_1;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar16 * param_1,param_2,lVar4,uRam0000000003d3c7b8);
    uStack_b0 = uVar7;
    uStack_a8 = 0xbfcf1bbd;
    fVar16 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_b0,0);
    param_2 = param_2 * param_1;
    param_3 = param_3 * param_1;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar16 * param_1,param_2,lVar4,uRam0000000003d3c7b8);
    uStack_b0 = uVar5;
    uStack_a8 = 0xbfcf1bbd;
    fVar16 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_b0,0);
    param_2 = param_2 * param_1;
    param_3 = param_3 * param_1;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar16 * param_1,param_2,lVar4,uRam0000000003d3c7b8);
    uVar5 = _UNK_033f88a8;
    uStack_b0 = _UNK_033f88a8;
    uStack_a8 = 0xbf800000;
    fVar16 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_b0,0);
    param_2 = param_2 * param_1;
    param_3 = param_3 * param_1;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar16 * param_1,param_2,lVar4,uRam0000000003d3c7b8);
    uStack_b0 = uVar5;
    uStack_a8 = 0x3f800000;
    fVar16 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_b0,0);
    param_2 = param_2 * param_1;
    param_3 = param_3 * param_1;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar16 * param_1,param_2,lVar4,uRam0000000003d3c7b8);
    uVar5 = _UNK_033f88b0;
    uStack_b0 = _UNK_033f88b0;
    uStack_a8 = 0xbf800000;
    fVar16 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_b0,0);
    param_2 = param_2 * param_1;
    param_3 = param_3 * param_1;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar16 * param_1,param_2,lVar4,uRam0000000003d3c7b8);
    uStack_b0 = uVar5;
    uStack_a8 = 0x3f800000;
    fVar16 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_b0,0);
    param_3 = param_3 * param_1;
    /*System.Collections.Generic.List<Vector3>$$Add*/ func_0x0248927c(fVar16 * param_1,param_2 * param_1,lVar4,uRam0000000003d3c7b8);
    lVar4 = func_0x00f78aec(/*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>_TypeInfo*/ uRam0000000003d1e3f0);
    /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$.ctor*/ func_0x025d04e8(lVar4,uRam0000000003d3df10);
    uStack_220 = 0;
    uStack_228 = 0;
    /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_228,0,0xb,5,0);
    lVar12 = lVar4;
    if (lVar4 != 0) {
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_228,uStack_220,uRam0000000003d3df18);
      uStack_e0 = 0;
      uStack_e8 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_e8,0,5,1,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_e8,uStack_e0,uRam0000000003d3df18);
      uStack_f0 = 0;
      uStack_f8 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_f8,0,1,7,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_f8,uStack_f0,uRam0000000003d3df18);
      uStack_100 = 0;
      uStack_108 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_108,0,7,10,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_108,uStack_100,uRam0000000003d3df18);
      uStack_110 = 0;
      uStack_118 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_118,0,10,0xb,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_118,uStack_110,uRam0000000003d3df18);
      uStack_120 = 0;
      uStack_128 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_128,1,5,9,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_128,uStack_120,uRam0000000003d3df18);
      uStack_130 = 0;
      uStack_138 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_138,5,0xb,4,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_138,uStack_130,uRam0000000003d3df18);
      uStack_140 = 0;
      uStack_148 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_148,0xb,10,2,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_148,uStack_140,uRam0000000003d3df18);
      uStack_150 = 0;
      uStack_158 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_158,10,7,6,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_158,uStack_150,uRam0000000003d3df18);
      uStack_160 = 0;
      uStack_168 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_168,7,1,8,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_168,uStack_160,uRam0000000003d3df18);
      uStack_170 = 0;
      uStack_178 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_178,3,9,4,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_178,uStack_170,uRam0000000003d3df18);
      uStack_180 = 0;
      uStack_188 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_188,3,4,2,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_188,uStack_180,uRam0000000003d3df18);
      uStack_190 = 0;
      uStack_198 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_198,3,2,6,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_198,uStack_190,uRam0000000003d3df18);
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_1a8,3,6,8,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_1a8,uStack_1a0,uRam0000000003d3df18);
      uStack_1b0 = 0;
      uStack_1b8 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_1b8,3,8,9,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_1b8,uStack_1b0,uRam0000000003d3df18);
      uStack_1c0 = 0;
      uStack_1c8 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_1c8,4,9,5,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_1c8,uStack_1c0,uRam0000000003d3df18);
      uStack_1d0 = 0;
      uStack_1d8 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_1d8,2,4,0xb,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_1d8,uStack_1d0,uRam0000000003d3df18);
      uStack_1e0 = 0;
      uStack_1e8 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_1e8,6,2,10,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_1e8,uStack_1e0,uRam0000000003d3df18);
      uStack_1f0 = 0;
      uStack_1f8 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_1f8,8,6,7,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_1f8,uStack_1f0,uRam0000000003d3df18);
      uStack_200 = 0;
      uStack_208 = 0;
      /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_208,9,8,1,0);
      /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_208,uStack_200,uRam0000000003d3df18);
      if (0 < param_4) {
        iVar15 = 0;
        lVar11 = lVar4;
        do {
          lVar4 = func_0x00f78aec(/*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>_TypeInfo*/ uRam0000000003d1e3f0);
          /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$.ctor*/ func_0x025d04e8(lVar4,uRam0000000003d3df10);
          lVar12 = 0;
          if (lVar11 == 0) goto LAB_0154bc1c;
          /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$GetEnumerator*/ func_0x025d1d28(&uStack_228,lVar11,uRam0000000003d3df20);
          uStack_c8 = CONCAT44(uStack_21c,uStack_220);
          uStack_d0 = uStack_228;
          uStack_b8 = uStack_210;
          uStack_c0 = uStack_218;
          while (uVar6 = /*System.Collections.Generic.List.Enumerator<DebugVisualiser.IcoSphere.TriangleIndices>$$MoveNext*/ func_0x01f87e08(&uStack_d0,uRam0000000003d33890), (uVar6 & 1) != 0) {
            uVar6 = uStack_c0 & 0xffffffff;
            uVar17 = uStack_c0._4_4_;
            uVar13 = uStack_b8 & 0xffffffff;
            uVar5 = Atlas_Gameplay_DebugVisualiser_IcoSphere__GetMiddlePoint
                              (param_1,uVar6,uStack_c0._4_4_,alStack_98,&uStack_a0);
            uVar7 = Atlas_Gameplay_DebugVisualiser_IcoSphere__GetMiddlePoint
                              (param_1,uVar17,uVar13,alStack_98,&uStack_a0);
            uVar8 = Atlas_Gameplay_DebugVisualiser_IcoSphere__GetMiddlePoint
                              (param_1,uVar13,uVar6,alStack_98,&uStack_a0);
            uStack_220 = 0;
            uStack_228 = 0;
            /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_228,uVar6,uVar5,uVar8,0);
            if (lVar4 == 0) {
              func_0x00f78af4();
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x154bc3c);
              (*pcVar3)();
            }
            /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_228,uStack_220,uRam0000000003d3df18);
            uStack_e0 = 0;
            uStack_e8 = 0;
            /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_e8,uVar17,uVar7,uVar5,0);
            /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_e8,uStack_e0,uRam0000000003d3df18);
            uStack_f0 = 0;
            uStack_f8 = 0;
            /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_f8,uVar13,uVar8,uVar7,0);
            /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_f8,uStack_f0,uRam0000000003d3df18);
            uStack_100 = 0;
            uStack_108 = 0;
            /*Atlas.Gameplay.DebugVisualiser.IcoSphere.TriangleIndices$$.ctor*/ func_0x0156ec48(&uStack_108,uVar5,uVar7,uVar8,0);
            /*System.Collections.Generic.List<DebugVisualiser.IcoSphere.TriangleIndices>$$Add*/ func_0x025d11cc(lVar4,uStack_108,uStack_100,uRam0000000003d3df18);
          }
          aiStack_d8[aiStack_d8[1]] = 0x3f8;
          iVar2 = aiStack_d8[1];
          iVar1 = aiStack_d8[1] + 1;
          aiStack_d8[1] = iVar1;
          /*System.Collections.Generic.List.Enumerator<DebugVisualiser.IcoSphere.TriangleIndices>$$Dispose*/ func_0x01f87e04(&uStack_d0,uRam0000000003d33888);
          if ((iVar1 != 0) && (aiStack_d8[iVar2] == 0x3f8)) {
            aiStack_d8[1] = iVar2;
          }
          iVar15 = iVar15 + 1;
          lVar11 = lVar4;
        } while (iVar15 != param_4);
      }
      lVar9 = func_0x00f78aec(/*UnityEngine.Mesh_TypeInfo*/ uRam0000000003d23388);
      /*UnityEngine.Mesh$$.ctor*/ func_0x0323f420(lVar9,0);
      lVar11 = alStack_98[0];
      lVar12 = lVar4;
      if ((alStack_98[0] != 0) &&
         (uVar5 = /*System.Collections.Generic.List<Vector3>$$ToArray*/ func_0x0248afac(alStack_98[0],uRam0000000003d3c7d8), lVar9 != 0)) {
        /*UnityEngine.Mesh$$set_vertices*/ func_0x03241d34(lVar9,uVar5,0);
        lVar10 = func_0x00f78aec(/*System.Collections.Generic.List<int>_TypeInfo*/ uRam0000000003d1daa8);
        /*System.Collections.Generic.List<int>$$.ctor*/ func_0x023db018(lVar10,uRam0000000003d3ac78);
        if (lVar4 != 0) {
          uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
          if (0 < (int)*(uint *)(lVar4 + 0x18)) {
            lVar14 = 0;
            uVar13 = 0;
            do {
              if ((uVar6 & 0xffffffff) <= uVar13) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              if (lVar10 == 0) goto LAB_0154bc1c;
              /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar10,*(undefined4 *)(*(long *)(lVar4 + 0x10) + lVar14 + 0x20),
                              uRam0000000003d3ac90);
              if (*(uint *)(lVar4 + 0x18) <= uVar13) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar10,*(undefined4 *)(*(long *)(lVar4 + 0x10) + lVar14 + 0x24),
                              uRam0000000003d3ac90);
              if (*(uint *)(lVar4 + 0x18) <= uVar13) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar10,*(undefined4 *)(*(long *)(lVar4 + 0x10) + lVar14 + 0x28),
                              uRam0000000003d3ac90);
              uVar13 = uVar13 + 1;
              uVar6 = (ulong)*(int *)(lVar4 + 0x18);
              lVar14 = lVar14 + 0xc;
            } while ((long)uVar13 < (long)uVar6);
          }
          if (lVar10 != 0) {
            uVar5 = /*System.Collections.Generic.List<int>$$ToArray*/ func_0x023dd918(lVar10,uRam0000000003d3acc8);
            /*UnityEngine.Mesh$$set_triangles*/ func_0x032448a4(lVar9,uVar5,0);
            lVar4 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,*(undefined4 *)(lVar11 + 0x18));
            lVar12 = 0x3d1f000;
            if (lVar4 != 0) {
              if (0 < *(int *)(lVar4 + 0x18)) {
                lVar12 = 0;
                uVar6 = 0;
                do {
                  if (*(uint *)(lVar11 + 0x18) <= uVar6) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar10 = *(long *)(lVar11 + 0x10) + lVar12;
                  uStack_a8 = *(undefined4 *)(lVar10 + 0x28);
                  uVar5 = *(undefined8 *)(lVar10 + 0x20);
                  uStack_b0 = uVar5;
                  uVar17 = /*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_b0,0);
                  if (*(uint *)(lVar4 + 0x18) <= uVar6) goto code_r0x0154bc20;
                  lVar10 = lVar4 + lVar12;
                  *(undefined4 *)(lVar10 + 0x20) = uVar17;
                  *(int *)(lVar10 + 0x24) = (int)uVar5;
                  *(float *)(lVar10 + 0x28) = param_3;
                  uVar6 = uVar6 + 1;
                  lVar12 = lVar12 + 0xc;
                } while ((long)uVar6 < (long)*(int *)(lVar4 + 0x18));
              }
              /*UnityEngine.Mesh$$set_normals*/ func_0x03241df0(lVar9,lVar4,0);
              /*UnityEngine.Mesh$$RecalculateBounds*/ func_0x03246a70(lVar9,0);
              /*UnityEngine.Mesh$$RecalculateNormals*/ func_0x03246b7c(lVar9,0);
              return lVar9;
            }
          }
        }
      }
    }
  }
LAB_0154bc1c:
  lVar4 = lVar12;
  func_0x00f78af4();
code_r0x0154bc20:
  lVar12 = func_0x00f78b24();
  do {
    func_0x00f78ac0(lVar12,0);
    __Unwind_Resume();
    lVar12 = lVar4;
  } while( true );
}



