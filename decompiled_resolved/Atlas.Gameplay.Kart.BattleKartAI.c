// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.BattleKartAI

// ============================================================
// RVA: 0x153a874 | Atlas.Gameplay.Kart.BattleKartAI.get_ProcessedPathCorners
// ============================================================

undefined1  [16] Atlas_Gameplay_Kart_BattleKartAI__get_ProcessedPathCorners(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x158);
}



// ============================================================
// RVA: 0x153a880 | Atlas.Gameplay.Kart.BattleKartAI.get_CornersNum
// ============================================================

undefined4 Atlas_Gameplay_Kart_BattleKartAI__get_CornersNum(long param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x153a888 | Atlas.Gameplay.Kart.BattleKartAI.get_LookAheadPoint
// ============================================================

undefined4 Atlas_Gameplay_Kart_BattleKartAI__get_LookAheadPoint(long param_1)

{
  return *(undefined4 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x153a894 | Atlas.Gameplay.Kart.BattleKartAI.get_PathIndex
// ============================================================

undefined4 Atlas_Gameplay_Kart_BattleKartAI__get_PathIndex(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}



// ============================================================
// RVA: 0x153a89c | Atlas.Gameplay.Kart.BattleKartAI.get_CurrentPosAreaIndex
// ============================================================

undefined4 Atlas_Gameplay_Kart_BattleKartAI__get_CurrentPosAreaIndex(long param_1)

{
  return *(undefined4 *)(param_1 + 0xe0);
}



// ============================================================
// RVA: 0x153a8a4 | Atlas.Gameplay.Kart.BattleKartAI.GetKartAIDefinition
// ============================================================

undefined8 Atlas_Gameplay_Kart_BattleKartAI__GetKartAIDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x153a8ac | Atlas.Gameplay.Kart.BattleKartAI.Init
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_BattleKartAI__Init
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar6;
  undefined *unaff_x30;
  float fVar7;
  double dVar8;
  float fVar9;
  
  puVar2 = &stack0xffffffffffffffb0;
  puVar6 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4f07 & 1) == 0) {
    func_0x00f78a20(0x3d3ac88);
    func_0x00f78a20(0x3d3cdb8);
    func_0x00f78a20(0x3d1daa8);
    func_0x00f78a20(0x3d1e098);
    func_0x00f78a20(0x3d236b0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f07 = 1;
  }
  /*Atlas.Gameplay.Kart.KartAI$$Init*/ func_0x015b9f14(param_1,param_2,param_3,param_5,0);
  *(long *)(param_1 + 0x60) = param_4;
  if (param_4 != 0) {
    *(float *)(param_1 + 0xbc) = *(float *)(param_4 + 0x50) * *(float *)(param_4 + 0x50);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_4,0,0);
    if (iVar3 != 0) {
      if ((*(long *)(param_1 + 0x60) == 0) ||
         (lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 0x98), lVar4 == 0)) goto LAB_0153ac1c;
      /*Atlas.Gameplay.Kart.KartAIUsablesParameters$$Calculate*/ func_0x015bbbfc(lVar4,0);
    }
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x1d0), lVar4 != 0)) {
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar4 + 0x68);
      param_4 = func_0x00f78aec(/*UnityEngine.AI.NavMeshPath_TypeInfo*/ uRam0000000003d236b0);
      /*UnityEngine.AI.NavMeshPath$$.ctor*/ func_0x03207858(param_4,0);
      *(long *)(param_1 + 0x70) = param_4;
      fVar9 = _UNK_033f850c;
      if (*(long *)(param_1 + 0x60) != 0) {
        fVar7 = *(float *)(*(long *)(param_1 + 0x60) + 0x20);
        param_4 = 0x3ca3000;
        if (cRam0000000003ca3501 == '\0') {
          func_0x00f78a20(0x3d232c0);
          cRam0000000003ca3501 = '\x01';
        }
        param_5 = 0x3d232c0;
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        dVar8 = (double)_cos((double)((90.0 - fVar7) * fVar9));
        *(float *)(param_1 + 0xc4) = (float)dVar8;
        if (*(long *)(param_1 + 0x60) != 0) {
          fVar7 = *(float *)(*(long *)(param_1 + 0x60) + 0x24);
          if (cRam0000000003ca3501 == '\0') {
            func_0x00f78a20(0x3d232c0);
            cRam0000000003ca3501 = '\x01';
          }
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          dVar8 = (double)_cos((double)((90.0 - fVar7) * fVar9));
          *(float *)(param_1 + 200) = (float)dVar8;
          if (*(long *)(param_1 + 0x60) != 0) {
            fVar7 = *(float *)(*(long *)(param_1 + 0x60) + 0x3c);
            if (cRam0000000003ca3501 == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca3501 = '\x01';
            }
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            dVar8 = (double)_cos((double)((90.0 - fVar7) * fVar9));
            *(float *)(param_1 + 0xd0) = (float)dVar8;
            if (*(long *)(param_1 + 0x60) != 0) {
              fVar7 = *(float *)(*(long *)(param_1 + 0x60) + 0x38);
              if (cRam0000000003ca3501 == '\0') {
                func_0x00f78a20(0x3d232c0);
                cRam0000000003ca3501 = '\x01';
              }
              if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              dVar8 = (double)_cos((double)((90.0 - fVar7) * fVar9));
              *(float *)(param_1 + 0xcc) = (float)dVar8;
              lVar4 = *(long *)(param_1 + 0x60);
              if (lVar4 != 0) {
                fVar9 = *(float *)(lVar4 + 0x5c);
                *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(lVar4 + 0x28);
                *(float *)(param_1 + 0xd8) = fVar9 * fVar9;
                *(undefined4 *)(param_1 + 0x78) = 0;
                if (*(long *)(param_1 + 0x1e8) == 0) {
                  uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<BattleKartAI.IndexValuePair>_TypeInfo*/ uRam0000000003d1e098);
                  /*System.Collections.Generic.List<BattleKartAI.IndexValuePair>$$.ctor*/ func_0x024cab90(uVar5,3,uRam0000000003d3cdb8);
                  *(undefined8 *)(param_1 + 0x1e8) = uVar5;
                }
                *(undefined8 *)(param_1 + 0xe4) = 0xffffffffffffffff;
                *(undefined8 *)(param_1 + 0xdc) = 0xffffffffffffffff;
                uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<int>_TypeInfo*/ uRam0000000003d1daa8);
                /*System.Collections.Generic.List<int>$$.ctor*/ func_0x023db0e4(uVar5,10,uRam0000000003d3ac88);
                *(undefined8 *)(param_1 + 0x1d0) = uVar5;
                puVar2 = (undefined1 *)register0x00000008;
                lVar4 = param_1;
                param_1 = unaff_x19;
                param_3 = unaff_x22;
                puVar6 = unaff_x29;
                goto code_r0x0153ac20;
              }
            }
          }
        }
      }
    }
  }
LAB_0153ac1c:
  unaff_x21 = param_5;
  unaff_x20 = param_4;
  unaff_x30 = &Atlas_Gameplay_Kart_BattleKartAI__InitJob;
  lVar4 = func_0x00f78af4();
code_r0x0153ac20:
  *(undefined8 *)(puVar2 + -0x30) = param_3;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(long *)(puVar2 + -0x20) = unaff_x20;
  *(long *)(puVar2 + -0x18) = param_1;
  *(undefined1 **)(puVar2 + -0x10) = puVar6;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  if ((bRam0000000003eb4f08 & 1) == 0) {
    func_0x00f78a20(0x3d3e210);
    func_0x00f78a20(0x3d3e3d8);
    bRam0000000003eb4f08 = 1;
  }
  if (*(char *)(lVar4 + 0xec) == '\0') {
    *(undefined8 *)(lVar4 + 0xf8) = 0;
    *(undefined8 *)(lVar4 + 0xf0) = 0;
    *(undefined8 *)(lVar4 + 0x140) = 0;
    *(undefined8 *)(lVar4 + 0x128) = 0;
    *(undefined8 *)(lVar4 + 0x120) = 0;
    *(undefined8 *)(lVar4 + 0x138) = 0;
    *(undefined8 *)(lVar4 + 0x130) = 0;
    *(undefined8 *)(lVar4 + 0x108) = 0;
    *(undefined8 *)(lVar4 + 0x100) = 0;
    *(undefined8 *)(lVar4 + 0x118) = 0;
    *(undefined8 *)(lVar4 + 0x110) = 0;
    *(undefined8 *)(puVar2 + -0x40) = 0;
    *(undefined8 *)(puVar2 + -0x38) = 0;
    /*Unity.Collections.NativeArray<float4>$$.ctor*/ func_0x0260a6b4(puVar2 + -0x40,1,4,1,uRam0000000003d3e3d8);
    uVar5 = *(undefined8 *)(puVar2 + -0x40);
    *(undefined8 *)(lVar4 + 0x150) = *(undefined8 *)(puVar2 + -0x38);
    *(undefined8 *)(lVar4 + 0x148) = uVar5;
    *(undefined8 *)(puVar2 + -0x50) = 0;
    *(undefined8 *)(puVar2 + -0x48) = 0;
    /*Unity.Collections.NativeArray<float4>$$.ctor*/ func_0x0260a6b4(puVar2 + -0x50,0x32,4,1,uRam0000000003d3e3d8);
    uVar5 = *(undefined8 *)(puVar2 + -0x50);
    *(undefined8 *)(lVar4 + 0x170) = *(undefined8 *)(puVar2 + -0x48);
    *(undefined8 *)(lVar4 + 0x168) = uVar5;
    *(undefined8 *)(puVar2 + -0x60) = 0;
    *(undefined8 *)(puVar2 + -0x58) = 0;
    /*Unity.Collections.NativeArray<float4>$$.ctor*/ func_0x0260a6b4(puVar2 + -0x60,0x32,4,1,uRam0000000003d3e3d8);
    uVar5 = *(undefined8 *)(puVar2 + -0x60);
    *(undefined8 *)(lVar4 + 0x160) = *(undefined8 *)(puVar2 + -0x58);
    *(undefined8 *)(lVar4 + 0x158) = uVar5;
    *(undefined8 *)(puVar2 + -0x70) = 0;
    *(undefined8 *)(puVar2 + -0x68) = 0;
    /*Unity.Collections.NativeArray<int>$$.ctor*/ func_0x025eda58(puVar2 + -0x70,1,4,1,uRam0000000003d3e210);
    uVar5 = *(undefined8 *)(puVar2 + -0x70);
    uVar1 = *(undefined8 *)(puVar2 + -0x68);
    *(undefined8 *)(lVar4 + 0x178) = uVar5;
    *(undefined8 *)(lVar4 + 0x180) = uVar1;
    *(undefined8 *)(lVar4 + 0x100) = *(undefined8 *)(lVar4 + 0x158);
    *(undefined8 *)(lVar4 + 0x108) = *(undefined8 *)(lVar4 + 0x160);
    *(undefined8 *)(lVar4 + 0x140) = *(undefined8 *)(lVar4 + 0x150);
    *(undefined8 *)(lVar4 + 0x138) = *(undefined8 *)(lVar4 + 0x148);
    *(undefined8 *)(lVar4 + 0x1a0) = 0;
    *(undefined8 *)(lVar4 + 0x198) = 0;
    *(undefined8 *)(lVar4 + 400) = 0;
    *(undefined8 *)(lVar4 + 0x188) = 0;
    *(undefined8 *)(lVar4 + 0x1a8) = 0;
    *(undefined8 *)(lVar4 + 0x1b0) = *(undefined8 *)(lVar4 + 0x158);
    *(undefined8 *)(lVar4 + 0x1a0) = *(undefined8 *)(lVar4 + 0x170);
    *(undefined8 *)(lVar4 + 0x198) = *(undefined8 *)(lVar4 + 0x168);
    *(undefined8 *)(lVar4 + 0x1b8) = *(undefined8 *)(lVar4 + 0x160);
    *(undefined8 *)(lVar4 + 0x1c0) = uVar5;
    *(undefined8 *)(lVar4 + 0x1c8) = uVar1;
    *(undefined1 *)(lVar4 + 0xec) = 1;
  }
  return;
}



// ============================================================
// RVA: 0x153ac20 | Atlas.Gameplay.Kart.BattleKartAI.InitJob
// ============================================================

void Atlas_Gameplay_Kart_BattleKartAI__InitJob(long param_1)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4f08 & 1) == 0) {
    func_0x00f78a20(0x3d3e210);
    func_0x00f78a20(0x3d3e3d8);
    bRam0000000003eb4f08 = 1;
  }
  if (*(char *)(param_1 + 0xec) == '\0') {
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    /*Unity.Collections.NativeArray<float4>$$.ctor*/ func_0x0260a6b4(&uStack_40,1,4,1,uRam0000000003d3e3d8);
    *(undefined8 *)(param_1 + 0x150) = uStack_38;
    *(undefined8 *)(param_1 + 0x148) = uStack_40;
    uStack_50 = 0;
    uStack_48 = 0;
    /*Unity.Collections.NativeArray<float4>$$.ctor*/ func_0x0260a6b4(&uStack_50,0x32,4,1,uRam0000000003d3e3d8);
    *(undefined8 *)(param_1 + 0x170) = uStack_48;
    *(undefined8 *)(param_1 + 0x168) = uStack_50;
    uStack_60 = 0;
    uStack_58 = 0;
    /*Unity.Collections.NativeArray<float4>$$.ctor*/ func_0x0260a6b4(&uStack_60,0x32,4,1,uRam0000000003d3e3d8);
    *(undefined8 *)(param_1 + 0x160) = uStack_58;
    *(undefined8 *)(param_1 + 0x158) = uStack_60;
    uStack_70 = 0;
    uStack_68 = 0;
    /*Unity.Collections.NativeArray<int>$$.ctor*/ func_0x025eda58(&uStack_70,1,4,1,uRam0000000003d3e210);
    *(undefined8 *)(param_1 + 0x178) = uStack_70;
    *(undefined8 *)(param_1 + 0x180) = uStack_68;
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x1c0) = uStack_70;
    *(undefined8 *)(param_1 + 0x1c8) = uStack_68;
    *(undefined1 *)(param_1 + 0xec) = 1;
  }
  return;
}



// ============================================================
// RVA: 0x153ad70 | Atlas.Gameplay.Kart.BattleKartAI.PostInit
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_BattleKartAI__PostInit
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  code *UNRECOVERED_JUMPTABLE;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  
  puVar12 = &uStack_110;
  if ((bRam0000000003eb4f11 & 1) == 0) {
    func_0x00f78a20(0x3d3ac90);
    func_0x00f78a20(0x3d3aca0);
    func_0x00f78a20(0x3d3acd0);
    func_0x00f78a20(0x3d3c490);
    func_0x00f78a20(0x3d3acd8);
    func_0x00f78a20(0x3d3c498);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f11 = 1;
  }
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar11 = *(undefined8 *)(param_4 + 0x68);
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,0,0);
  if ((uVar6 & 1) == 0) {
    if (*(long *)(param_4 + 0x68) == 0) goto code_r0x0153b1ec;
    uVar11 = *(undefined8 *)(*(long *)(param_4 + 0x68) + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,0,0);
    if (iVar4 == 0) {
      if (*(long *)(param_4 + 0x68) == 0) {
code_r0x0153b1ec:
        lVar13 = func_0x00f78af4();
        fVar15 = _UNK_033f850c;
        if (*(long *)(lVar13 + 0x60) != 0) {
          fVar18 = *(float *)(*(long *)(lVar13 + 0x60) + 0x2c);
          if (cRam0000000003ca3501 == '\0') {
            func_0x00f78a20(0x3d232c0);
            cRam0000000003ca3501 = '\x01';
          }
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          dVar19 = (double)_cos((double)((90.0 - fVar18) * fVar15));
          *(float *)(lVar13 + 0xc4) = (float)dVar19;
          if (*(long *)(lVar13 + 0x60) != 0) {
            fVar18 = *(float *)(*(long *)(lVar13 + 0x60) + 0x30);
            if (cRam0000000003ca3501 == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca3501 = '\x01';
            }
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            dVar19 = (double)_cos((double)((90.0 - fVar18) * fVar15));
            *(float *)(lVar13 + 200) = (float)dVar19;
            if (*(long *)(lVar13 + 0x60) != 0) {
              *(undefined4 *)(lVar13 + 0xd4) = *(undefined4 *)(*(long *)(lVar13 + 0x60) + 0x34);
              return;
            }
          }
        }
        lVar13 = func_0x00f78af4();
        if ((bRam0000000003eb4f09 & 1) == 0) {
          func_0x00f78a20(0x3d3e218);
          func_0x00f78a20(0x3d3e3e0);
          bRam0000000003eb4f09 = 1;
        }
        if (*(char *)(lVar13 + 0xec) == '\0') {
          return;
        }
        /*Unity.Collections.NativeArray<float4>$$Dispose*/ func_0x0260ab0c(lVar13 + 0x148,uRam0000000003d3e3e0);
        /*Unity.Collections.NativeArray<float4>$$Dispose*/ func_0x0260ab0c(lVar13 + 0x168,uRam0000000003d3e3e0);
        /*Unity.Collections.NativeArray<float4>$$Dispose*/ func_0x0260ab0c(lVar13 + 0x158,uRam0000000003d3e3e0);
        lVar7 = *(long *)(lVar13 + 0x178);
        if (lVar7 == 0) {
          func_0x00f78a24(0x3d23998,uRam0000000003d3e218);
          uVar8 = func_0x00f78aec();
          uVar11 = func_0x00f78a24(0x3d73ae8);
          lVar13 = 0;
          /*System.ObjectDisposedException$$.ctor*/ func_0x029596a4(uVar8,uVar11);
        }
        else {
          iVar4 = *(int *)(lVar13 + 0x184);
          if (iVar4 != 0) {
            if (1 < iVar4) {
              /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$Free*/ func_0x03279ba4(lVar7,iVar4,0);
              *(undefined4 *)(lVar13 + 0x184) = 0;
            }
            *(long *)(lVar13 + 0x178) = 0;
            *(undefined4 *)(lVar13 + 0x180) = 0;
            return;
          }
          func_0x00f78a24(0x3d22a38);
          uVar8 = func_0x00f78aec();
          uVar11 = func_0x00f78a24(0x3d73ae0);
          lVar13 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar8,uVar11);
        }
        uVar11 = func_0x00f78a24(0x3d3e218);
        auVar25 = func_0x00f78ac0(uVar8,uVar11);
        uVar11 = *auVar25._0_8_;
        uVar8 = auVar25._0_8_[1];
        lVar14 = *(long *)(lVar13 + 0x18);
        uVar3 = *(ushort *)(lVar14 + 0x132);
        lVar7 = lVar14;
        if ((uVar3 & 1) == 0) {
          func_0x00fac028(lVar14);
          lVar7 = *(long *)(lVar13 + 0x18);
          uVar3 = *(ushort *)(lVar7 + 0x132);
        }
        UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar14 + 0xc0) + 0x20);
        if ((uVar3 & 1) == 0) {
          func_0x00fac028(lVar7);
        }
                    /* WARNING: Could not recover jumptable at 0x025edfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)
                  (auVar25._8_8_,uVar11,uVar8,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20));
        return;
      }
      lVar13 = *(long *)(*(long *)(param_4 + 0x68) + 0x28);
      if ((lVar13 != 0) && (0 < *(int *)(lVar13 + 0x18))) {
        if (*(long *)(param_4 + 0x1d0) != 0) {
          /*System.Collections.Generic.List<int>$$Clear*/ func_0x023dbfb4(*(long *)(param_4 + 0x1d0),uRam0000000003d3aca0);
          iVar4 = *(int *)(param_4 + 0xdc);
          iVar1 = *(int *)(param_4 + 0xe0);
          iVar2 = *(int *)(param_4 + 0xe4);
          iVar9 = *(int *)(lVar13 + 0x18);
          if (0 < iVar9) {
            iVar10 = 0;
            do {
              if ((((iVar4 < 0) || (iVar10 != *(int *)(param_4 + 0xdc))) &&
                  ((iVar1 < 0 || (iVar10 != *(int *)(param_4 + 0xe0))))) &&
                 ((iVar2 < 0 || (iVar10 != *(int *)(param_4 + 0xe4))))) {
                if (*(long *)(param_4 + 0x1d0) == 0) goto code_r0x0153b1ec;
                /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(*(long *)(param_4 + 0x1d0),iVar10,uRam0000000003d3ac90);
                iVar9 = *(int *)(lVar13 + 0x18);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar9);
          }
          lVar7 = *(long *)(param_4 + 0x1d0);
          if (lVar7 != 0) {
            if (*(int *)(lVar7 + 0x18) < 1) {
              if (-1 < iVar2) {
                /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar7,*(undefined4 *)(param_4 + 0xe4),uRam0000000003d3ac90);
              }
              if (-1 < iVar4) {
                lVar7 = *(long *)(param_4 + 0x1d0);
                if (lVar7 == 0) goto code_r0x0153b1ec;
                if (*(int *)(lVar7 + 0x18) < 1) {
                  /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar7,*(undefined4 *)(param_4 + 0xdc),uRam0000000003d3ac90);
                }
              }
              if (-1 < iVar1) {
                lVar7 = *(long *)(param_4 + 0x1d0);
                if (lVar7 == 0) goto code_r0x0153b1ec;
                if (*(int *)(lVar7 + 0x18) < 1) {
                  /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar7,*(undefined4 *)(param_4 + 0xe0),uRam0000000003d3ac90);
                }
              }
            }
            lVar7 = *(long *)(param_4 + 0x1d0);
            if (lVar7 != 0) {
              if (*(int *)(lVar7 + 0x18) < 1) {
                return;
              }
              uVar11 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(int *)(lVar7 + 0x18),0);
              uVar5 = (uint)uVar11;
              if (*(uint *)(lVar7 + 0x18) <= uVar5) {
                uVar11 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              uVar5 = *(uint *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar5 * 4 + 0x20);
              if (*(uint *)(lVar13 + 0x18) <= uVar5) {
                uVar11 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              if (*(long *)(param_4 + 0x68) != 0) {
                fVar15 = (float)/*BattleAIMapBoundsBehaviour$$RandomPointWithinTransform*/ func_0x01539584(uVar11,*(undefined8 *)
                                                        (*(long *)(lVar13 + 0x10) +
                                                         (long)(int)uVar5 * 8 + 0x20));
                *(undefined4 *)(param_4 + 0xe4) = *(undefined4 *)(param_4 + 0xe8);
                *(uint *)(param_4 + 0xe8) = uVar5;
                goto code_r0x0153aee4;
              }
            }
          }
        }
        goto code_r0x0153b1ec;
      }
      fVar15 = (float)/*BattleAIMapBoundsBehaviour$$RandomPointWithinBounds*/ func_0x0153973c();
      uVar5 = 6;
      do {
        if ((*(long *)(param_4 + 0x38) == 0) ||
           (lVar13 = *(long *)(*(long *)(param_4 + 0x38) + 0x10), lVar13 == 0))
        goto code_r0x0153b1ec;
        lVar13 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar13,0);
        fVar20 = *(float *)(lVar13 + 0x140);
        fVar23 = *(float *)(lVar13 + 0x144);
        fVar18 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar13 + 0x13c),0);
        if ((*(long *)(param_4 + 0x38) == 0) ||
           (lVar13 = *(long *)(*(long *)(param_4 + 0x38) + 0x10), lVar13 == 0))
        goto code_r0x0153b1ec;
        fVar18 = fVar15 - fVar18;
        fVar20 = param_2 - fVar20;
        fVar23 = param_3 - fVar23;
        lVar13 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar13,0);
        fVar21 = *(float *)(lVar13 + 0x11c);
        fVar24 = *(float *)(lVar13 + 0x120);
        fVar17 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar13 + 0x118),0);
        fVar22 = fVar23 * fVar24;
        if ((0.0 < fVar22 + fVar18 * fVar17 + fVar20 * fVar21) &&
           (fVar22 = *(float *)(param_4 + 0xd8),
           fVar22 <= fVar23 * fVar23 + fVar18 * fVar18 + fVar20 * fVar20)) break;
        if (*(long *)(param_4 + 0x68) == 0) goto code_r0x0153b1ec;
        fVar15 = (float)/*BattleAIMapBoundsBehaviour$$RandomPointWithinBounds*/ func_0x0153973c();
        uVar5 = uVar5 - 1;
        param_2 = fVar22;
        param_3 = fVar24;
      } while (1 < uVar5);
      puVar12 = &uStack_e0;
      goto code_r0x0153aee4;
    }
  }
  fVar15 = (float)/*UnityEngine.Random$$Range*/ func_0x03252854(0xc2960000,0x42960000,0);
  param_3 = (float)/*UnityEngine.Random$$Range*/ func_0x03252854(0xc2960000,0x42960000,0);
  iVar4 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,0x1e,0);
  param_2 = (float)iVar4;
  puVar12 = &uStack_b0;
code_r0x0153aee4:
  /*UnityEngine.AI.NavMesh$$SamplePosition*/ func_0x03207278(fVar15,param_2,param_3,0x42480000,puVar12,0xffffffff,0);
  /*UnityEngine.AI.NavMeshHit$$get_position*/ func_0x0320784c(puVar12,0);
  uVar16 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
  *(undefined4 *)(param_4 + 0x7c) = uVar16;
  *(float *)(param_4 + 0x80) = param_2;
  *(float *)(param_4 + 0x84) = param_3;
  return;
}



// ============================================================
// RVA: 0x153ad74 | Atlas.Gameplay.Kart.BattleKartAI.RandomizeTargetPoint
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_BattleKartAI__RandomizeTargetPoint
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  code *UNRECOVERED_JUMPTABLE;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  
  puVar12 = &uStack_110;
  if ((bRam0000000003eb4f11 & 1) == 0) {
    func_0x00f78a20(0x3d3ac90);
    func_0x00f78a20(0x3d3aca0);
    func_0x00f78a20(0x3d3acd0);
    func_0x00f78a20(0x3d3c490);
    func_0x00f78a20(0x3d3acd8);
    func_0x00f78a20(0x3d3c498);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f11 = 1;
  }
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar11 = *(undefined8 *)(param_4 + 0x68);
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,0,0);
  if ((uVar6 & 1) == 0) {
    if (*(long *)(param_4 + 0x68) == 0) goto LAB_0153b1ec;
    uVar11 = *(undefined8 *)(*(long *)(param_4 + 0x68) + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,0,0);
    if (iVar4 == 0) {
      if (*(long *)(param_4 + 0x68) == 0) {
LAB_0153b1ec:
        lVar13 = func_0x00f78af4();
        fVar15 = _UNK_033f850c;
        if (*(long *)(lVar13 + 0x60) != 0) {
          fVar18 = *(float *)(*(long *)(lVar13 + 0x60) + 0x2c);
          if (cRam0000000003ca3501 == '\0') {
            func_0x00f78a20(0x3d232c0);
            cRam0000000003ca3501 = '\x01';
          }
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          dVar19 = (double)_cos((double)((90.0 - fVar18) * fVar15));
          *(float *)(lVar13 + 0xc4) = (float)dVar19;
          if (*(long *)(lVar13 + 0x60) != 0) {
            fVar18 = *(float *)(*(long *)(lVar13 + 0x60) + 0x30);
            if (cRam0000000003ca3501 == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca3501 = '\x01';
            }
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            dVar19 = (double)_cos((double)((90.0 - fVar18) * fVar15));
            *(float *)(lVar13 + 200) = (float)dVar19;
            if (*(long *)(lVar13 + 0x60) != 0) {
              *(undefined4 *)(lVar13 + 0xd4) = *(undefined4 *)(*(long *)(lVar13 + 0x60) + 0x34);
              return;
            }
          }
        }
        lVar13 = func_0x00f78af4();
        if ((bRam0000000003eb4f09 & 1) == 0) {
          func_0x00f78a20(0x3d3e218);
          func_0x00f78a20(0x3d3e3e0);
          bRam0000000003eb4f09 = 1;
        }
        if (*(char *)(lVar13 + 0xec) == '\0') {
          return;
        }
        /*Unity.Collections.NativeArray<float4>$$Dispose*/ func_0x0260ab0c(lVar13 + 0x148,uRam0000000003d3e3e0);
        /*Unity.Collections.NativeArray<float4>$$Dispose*/ func_0x0260ab0c(lVar13 + 0x168,uRam0000000003d3e3e0);
        /*Unity.Collections.NativeArray<float4>$$Dispose*/ func_0x0260ab0c(lVar13 + 0x158,uRam0000000003d3e3e0);
        lVar7 = *(long *)(lVar13 + 0x178);
        if (lVar7 == 0) {
          func_0x00f78a24(0x3d23998,uRam0000000003d3e218);
          uVar8 = func_0x00f78aec();
          uVar11 = func_0x00f78a24(0x3d73ae8);
          lVar13 = 0;
          /*System.ObjectDisposedException$$.ctor*/ func_0x029596a4(uVar8,uVar11);
        }
        else {
          iVar4 = *(int *)(lVar13 + 0x184);
          if (iVar4 != 0) {
            if (1 < iVar4) {
              /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$Free*/ func_0x03279ba4(lVar7,iVar4,0);
              *(undefined4 *)(lVar13 + 0x184) = 0;
            }
            *(long *)(lVar13 + 0x178) = 0;
            *(undefined4 *)(lVar13 + 0x180) = 0;
            return;
          }
          func_0x00f78a24(0x3d22a38);
          uVar8 = func_0x00f78aec();
          uVar11 = func_0x00f78a24(0x3d73ae0);
          lVar13 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar8,uVar11);
        }
        uVar11 = func_0x00f78a24(0x3d3e218);
        auVar25 = func_0x00f78ac0(uVar8,uVar11);
        uVar11 = *auVar25._0_8_;
        uVar8 = auVar25._0_8_[1];
        lVar14 = *(long *)(lVar13 + 0x18);
        uVar3 = *(ushort *)(lVar14 + 0x132);
        lVar7 = lVar14;
        if ((uVar3 & 1) == 0) {
          func_0x00fac028(lVar14);
          lVar7 = *(long *)(lVar13 + 0x18);
          uVar3 = *(ushort *)(lVar7 + 0x132);
        }
        UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar14 + 0xc0) + 0x20);
        if ((uVar3 & 1) == 0) {
          func_0x00fac028(lVar7);
        }
                    /* WARNING: Could not recover jumptable at 0x025edfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)
                  (auVar25._8_8_,uVar11,uVar8,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20));
        return;
      }
      lVar13 = *(long *)(*(long *)(param_4 + 0x68) + 0x28);
      if ((lVar13 != 0) && (0 < *(int *)(lVar13 + 0x18))) {
        if (*(long *)(param_4 + 0x1d0) != 0) {
          /*System.Collections.Generic.List<int>$$Clear*/ func_0x023dbfb4(*(long *)(param_4 + 0x1d0),uRam0000000003d3aca0);
          iVar4 = *(int *)(param_4 + 0xdc);
          iVar1 = *(int *)(param_4 + 0xe0);
          iVar2 = *(int *)(param_4 + 0xe4);
          iVar9 = *(int *)(lVar13 + 0x18);
          if (0 < iVar9) {
            iVar10 = 0;
            do {
              if ((((iVar4 < 0) || (iVar10 != *(int *)(param_4 + 0xdc))) &&
                  ((iVar1 < 0 || (iVar10 != *(int *)(param_4 + 0xe0))))) &&
                 ((iVar2 < 0 || (iVar10 != *(int *)(param_4 + 0xe4))))) {
                if (*(long *)(param_4 + 0x1d0) == 0) goto LAB_0153b1ec;
                /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(*(long *)(param_4 + 0x1d0),iVar10,uRam0000000003d3ac90);
                iVar9 = *(int *)(lVar13 + 0x18);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar9);
          }
          lVar7 = *(long *)(param_4 + 0x1d0);
          if (lVar7 != 0) {
            if (*(int *)(lVar7 + 0x18) < 1) {
              if (-1 < iVar2) {
                /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar7,*(undefined4 *)(param_4 + 0xe4),uRam0000000003d3ac90);
              }
              if (-1 < iVar4) {
                lVar7 = *(long *)(param_4 + 0x1d0);
                if (lVar7 == 0) goto LAB_0153b1ec;
                if (*(int *)(lVar7 + 0x18) < 1) {
                  /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar7,*(undefined4 *)(param_4 + 0xdc),uRam0000000003d3ac90);
                }
              }
              if (-1 < iVar1) {
                lVar7 = *(long *)(param_4 + 0x1d0);
                if (lVar7 == 0) goto LAB_0153b1ec;
                if (*(int *)(lVar7 + 0x18) < 1) {
                  /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar7,*(undefined4 *)(param_4 + 0xe0),uRam0000000003d3ac90);
                }
              }
            }
            lVar7 = *(long *)(param_4 + 0x1d0);
            if (lVar7 != 0) {
              if (*(int *)(lVar7 + 0x18) < 1) {
                return;
              }
              uVar11 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(int *)(lVar7 + 0x18),0);
              uVar5 = (uint)uVar11;
              if (*(uint *)(lVar7 + 0x18) <= uVar5) {
                uVar11 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              uVar5 = *(uint *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar5 * 4 + 0x20);
              if (*(uint *)(lVar13 + 0x18) <= uVar5) {
                uVar11 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              if (*(long *)(param_4 + 0x68) != 0) {
                fVar15 = (float)/*BattleAIMapBoundsBehaviour$$RandomPointWithinTransform*/ func_0x01539584(uVar11,*(undefined8 *)
                                                        (*(long *)(lVar13 + 0x10) +
                                                         (long)(int)uVar5 * 8 + 0x20));
                *(undefined4 *)(param_4 + 0xe4) = *(undefined4 *)(param_4 + 0xe8);
                *(uint *)(param_4 + 0xe8) = uVar5;
                goto code_r0x0153aee4;
              }
            }
          }
        }
        goto LAB_0153b1ec;
      }
      fVar15 = (float)/*BattleAIMapBoundsBehaviour$$RandomPointWithinBounds*/ func_0x0153973c();
      uVar5 = 6;
      do {
        if ((*(long *)(param_4 + 0x38) == 0) ||
           (lVar13 = *(long *)(*(long *)(param_4 + 0x38) + 0x10), lVar13 == 0)) goto LAB_0153b1ec;
        lVar13 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar13,0);
        fVar20 = *(float *)(lVar13 + 0x140);
        fVar23 = *(float *)(lVar13 + 0x144);
        fVar18 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar13 + 0x13c),0);
        if ((*(long *)(param_4 + 0x38) == 0) ||
           (lVar13 = *(long *)(*(long *)(param_4 + 0x38) + 0x10), lVar13 == 0)) goto LAB_0153b1ec;
        fVar18 = fVar15 - fVar18;
        fVar20 = param_2 - fVar20;
        fVar23 = param_3 - fVar23;
        lVar13 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar13,0);
        fVar21 = *(float *)(lVar13 + 0x11c);
        fVar24 = *(float *)(lVar13 + 0x120);
        fVar17 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar13 + 0x118),0);
        fVar22 = fVar23 * fVar24;
        if ((0.0 < fVar22 + fVar18 * fVar17 + fVar20 * fVar21) &&
           (fVar22 = *(float *)(param_4 + 0xd8),
           fVar22 <= fVar23 * fVar23 + fVar18 * fVar18 + fVar20 * fVar20)) break;
        if (*(long *)(param_4 + 0x68) == 0) goto LAB_0153b1ec;
        fVar15 = (float)/*BattleAIMapBoundsBehaviour$$RandomPointWithinBounds*/ func_0x0153973c();
        uVar5 = uVar5 - 1;
        param_2 = fVar22;
        param_3 = fVar24;
      } while (1 < uVar5);
      puVar12 = &uStack_e0;
      goto code_r0x0153aee4;
    }
  }
  fVar15 = (float)/*UnityEngine.Random$$Range*/ func_0x03252854(0xc2960000,0x42960000,0);
  param_3 = (float)/*UnityEngine.Random$$Range*/ func_0x03252854(0xc2960000,0x42960000,0);
  iVar4 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,0x1e,0);
  param_2 = (float)iVar4;
  puVar12 = &uStack_b0;
code_r0x0153aee4:
  /*UnityEngine.AI.NavMesh$$SamplePosition*/ func_0x03207278(fVar15,param_2,param_3,0x42480000,puVar12,0xffffffff,0);
  /*UnityEngine.AI.NavMeshHit$$get_position*/ func_0x0320784c(puVar12,0);
  uVar16 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
  *(undefined4 *)(param_4 + 0x7c) = uVar16;
  *(float *)(param_4 + 0x80) = param_2;
  *(float *)(param_4 + 0x84) = param_3;
  return;
}



// ============================================================
// RVA: 0x153b1f0 | Atlas.Gameplay.Kart.BattleKartAI.OnFinishGame
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_BattleKartAI__OnFinishGame(long param_1)

{
  int iVar1;
  ushort uVar2;
  float fVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  long lVar8;
  float fVar9;
  double dVar10;
  undefined1 auVar11 [16];
  
  fVar3 = _UNK_033f850c;
  if (*(long *)(param_1 + 0x60) != 0) {
    fVar9 = *(float *)(*(long *)(param_1 + 0x60) + 0x2c);
    if (cRam0000000003ca3501 == '\0') {
      func_0x00f78a20(0x3d232c0);
      cRam0000000003ca3501 = '\x01';
    }
    if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    dVar10 = (double)_cos((double)((90.0 - fVar9) * fVar3));
    *(float *)(param_1 + 0xc4) = (float)dVar10;
    if (*(long *)(param_1 + 0x60) != 0) {
      fVar9 = *(float *)(*(long *)(param_1 + 0x60) + 0x30);
      if (cRam0000000003ca3501 == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca3501 = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      dVar10 = (double)_cos((double)((90.0 - fVar9) * fVar3));
      *(float *)(param_1 + 200) = (float)dVar10;
      if (*(long *)(param_1 + 0x60) != 0) {
        *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x34);
        return;
      }
    }
  }
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4f09 & 1) == 0) {
    func_0x00f78a20(0x3d3e218);
    func_0x00f78a20(0x3d3e3e0);
    bRam0000000003eb4f09 = 1;
  }
  if (*(char *)(lVar4 + 0xec) != '\0') {
    /*Unity.Collections.NativeArray<float4>$$Dispose*/ func_0x0260ab0c(lVar4 + 0x148,uRam0000000003d3e3e0);
    /*Unity.Collections.NativeArray<float4>$$Dispose*/ func_0x0260ab0c(lVar4 + 0x168,uRam0000000003d3e3e0);
    /*Unity.Collections.NativeArray<float4>$$Dispose*/ func_0x0260ab0c(lVar4 + 0x158,uRam0000000003d3e3e0);
    lVar5 = *(long *)(lVar4 + 0x178);
    if (lVar5 == 0) {
      func_0x00f78a24(0x3d23998,uRam0000000003d3e218);
      uVar6 = func_0x00f78aec();
      uVar7 = func_0x00f78a24(0x3d73ae8);
      lVar4 = 0;
      /*System.ObjectDisposedException$$.ctor*/ func_0x029596a4(uVar6,uVar7);
    }
    else {
      iVar1 = *(int *)(lVar4 + 0x184);
      if (iVar1 != 0) {
        if (1 < iVar1) {
          /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$Free*/ func_0x03279ba4(lVar5,iVar1,0);
          *(undefined4 *)(lVar4 + 0x184) = 0;
        }
        *(long *)(lVar4 + 0x178) = 0;
        *(undefined4 *)(lVar4 + 0x180) = 0;
        return;
      }
      func_0x00f78a24(0x3d22a38);
      uVar6 = func_0x00f78aec();
      uVar7 = func_0x00f78a24(0x3d73ae0);
      lVar4 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar6,uVar7);
    }
    uVar7 = func_0x00f78a24(0x3d3e218);
    auVar11 = func_0x00f78ac0(uVar6,uVar7);
    uVar7 = *auVar11._0_8_;
    uVar6 = auVar11._0_8_[1];
    lVar8 = *(long *)(lVar4 + 0x18);
    uVar2 = *(ushort *)(lVar8 + 0x132);
    lVar5 = lVar8;
    if ((uVar2 & 1) == 0) {
      func_0x00fac028(lVar8);
      lVar5 = *(long *)(lVar4 + 0x18);
      uVar2 = *(ushort *)(lVar5 + 0x132);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x20);
    if ((uVar2 & 1) == 0) {
      func_0x00fac028(lVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x025edfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar11._8_8_,uVar7,uVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20));
    return;
  }
  return;
}



// ============================================================
// RVA: 0x153b304 | Atlas.Gameplay.Kart.BattleKartAI.DeInitJob
// ============================================================

void Atlas_Gameplay_Kart_BattleKartAI__DeInitJob(long param_1)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003eb4f09 & 1) == 0) {
    func_0x00f78a20(0x3d3e218);
    func_0x00f78a20(0x3d3e3e0);
    bRam0000000003eb4f09 = 1;
  }
  if (*(char *)(param_1 + 0xec) != '\0') {
    /*Unity.Collections.NativeArray<float4>$$Dispose*/ func_0x0260ab0c(param_1 + 0x148,uRam0000000003d3e3e0);
    /*Unity.Collections.NativeArray<float4>$$Dispose*/ func_0x0260ab0c(param_1 + 0x168,uRam0000000003d3e3e0);
    /*Unity.Collections.NativeArray<float4>$$Dispose*/ func_0x0260ab0c(param_1 + 0x158,uRam0000000003d3e3e0);
    lVar3 = *(long *)(param_1 + 0x178);
    if (lVar3 == 0) {
      func_0x00f78a24(0x3d23998,uRam0000000003d3e218);
      uVar4 = func_0x00f78aec();
      uVar5 = func_0x00f78a24(0x3d73ae8);
      lVar3 = 0;
      /*System.ObjectDisposedException$$.ctor*/ func_0x029596a4(uVar4,uVar5);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x184);
      if (iVar1 != 0) {
        if (1 < iVar1) {
          /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$Free*/ func_0x03279ba4(lVar3,iVar1,0);
          *(undefined4 *)(param_1 + 0x184) = 0;
        }
        *(long *)(param_1 + 0x178) = 0;
        *(undefined4 *)(param_1 + 0x180) = 0;
        return;
      }
      func_0x00f78a24(0x3d22a38);
      uVar4 = func_0x00f78aec();
      uVar5 = func_0x00f78a24(0x3d73ae0);
      lVar3 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar4,uVar5);
    }
    uVar5 = func_0x00f78a24(0x3d3e218);
    auVar8 = func_0x00f78ac0(uVar4,uVar5);
    uVar5 = *auVar8._0_8_;
    uVar4 = auVar8._0_8_[1];
    lVar7 = *(long *)(lVar3 + 0x18);
    uVar2 = *(ushort *)(lVar7 + 0x132);
    lVar6 = lVar7;
    if ((uVar2 & 1) == 0) {
      func_0x00fac028(lVar7);
      lVar6 = *(long *)(lVar3 + 0x18);
      uVar2 = *(ushort *)(lVar6 + 0x132);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((uVar2 & 1) == 0) {
      func_0x00fac028(lVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x025edfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar8._8_8_,uVar5,uVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20));
    return;
  }
  return;
}



// ============================================================
// RVA: 0x153b3a8 | Atlas.Gameplay.Kart.BattleKartAI.DeInit
// ============================================================

void Atlas_Gameplay_Kart_BattleKartAI__DeInit(long param_1)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  /*Atlas.Gameplay.Kart.KartAI$$DeInit*/ func_0x015b9f24(param_1,0);
  if ((bRam0000000003eb4f09 & 1) == 0) {
    func_0x00f78a20(0x3d3e218);
    func_0x00f78a20(0x3d3e3e0);
    bRam0000000003eb4f09 = 1;
  }
  if (*(char *)(param_1 + 0xec) != '\0') {
    /*Unity.Collections.NativeArray<float4>$$Dispose*/ func_0x0260ab0c(param_1 + 0x148,uRam0000000003d3e3e0);
    /*Unity.Collections.NativeArray<float4>$$Dispose*/ func_0x0260ab0c(param_1 + 0x168,uRam0000000003d3e3e0);
    /*Unity.Collections.NativeArray<float4>$$Dispose*/ func_0x0260ab0c(param_1 + 0x158,uRam0000000003d3e3e0);
    lVar3 = *(long *)(param_1 + 0x178);
    if (lVar3 == 0) {
      func_0x00f78a24(0x3d23998,uRam0000000003d3e218);
      uVar4 = func_0x00f78aec();
      uVar5 = func_0x00f78a24(0x3d73ae8);
      lVar3 = 0;
      /*System.ObjectDisposedException$$.ctor*/ func_0x029596a4(uVar4,uVar5);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x184);
      if (iVar1 != 0) {
        if (1 < iVar1) {
          /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$Free*/ func_0x03279ba4(lVar3,iVar1,0);
          *(undefined4 *)(param_1 + 0x184) = 0;
        }
        *(long *)(param_1 + 0x178) = 0;
        *(undefined4 *)(param_1 + 0x180) = 0;
        return;
      }
      func_0x00f78a24(0x3d22a38);
      uVar4 = func_0x00f78aec();
      uVar5 = func_0x00f78a24(0x3d73ae0);
      lVar3 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar4,uVar5);
    }
    uVar5 = func_0x00f78a24(0x3d3e218);
    auVar8 = func_0x00f78ac0(uVar4,uVar5);
    uVar5 = *auVar8._0_8_;
    uVar4 = auVar8._0_8_[1];
    lVar7 = *(long *)(lVar3 + 0x18);
    uVar2 = *(ushort *)(lVar7 + 0x132);
    lVar6 = lVar7;
    if ((uVar2 & 1) == 0) {
      func_0x00fac028(lVar7);
      lVar6 = *(long *)(lVar3 + 0x18);
      uVar2 = *(ushort *)(lVar6 + 0x132);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((uVar2 & 1) == 0) {
      func_0x00fac028(lVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x025edfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar8._8_8_,uVar5,uVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20));
    return;
  }
  return;
}



// ============================================================
// RVA: 0x153b3d0 | Atlas.Gameplay.Kart.BattleKartAI.Update
// ============================================================

void Atlas_Gameplay_Kart_BattleKartAI__Update(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000003eb4f0a & 1) == 0) {
    func_0x00f78a20(0x3d22c68);
    bRam0000000003eb4f0a = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = **(undefined8 **)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar4,0);
  param_1[5] = param_1[3];
  param_1[4] = param_1[2];
  /*Atlas.Gameplay.Kart.KartAIInputData$$Reset*/ func_0x015bbbd8(param_1 + 2,0);
  *(undefined4 *)((long)param_1 + 0x14) = 0x3f800000;
  if (param_1[7] == 0) goto LAB_0153b574;
  /*Atlas.Gameplay.Kart.BattleKartAI$$UpdateAreaIndex*/ func_0x0153b670(param_1);
  /*Atlas.Gameplay.Kart.BattleKartAI$$UpdateCurrentNavState*/ func_0x0153b764(param_1);
  /*Atlas.Gameplay.Kart.BattleKartAI$$ApplyNavigationSteering*/ func_0x0153b8e0(param_1,param_2);
  if (param_1[0xc] == 0) {
    func_0x00f78af4();
    goto code_r0x0153b5e0;
  }
  /*Atlas.Gameplay.Kart.KartAI$$UpdateUseUsable*/ func_0x015ba000(param_1,param_2,*(undefined8 *)(param_1[0xc] + 0x98),0);
  lVar2 = param_1[7];
  if (lVar2 == 0) {
    func_0x00f78af4();
    goto code_r0x0153b5e0;
  }
  if (*(long *)(lVar2 + 0x90) == 0) {
    func_0x00f78af4();
    goto code_r0x0153b5e0;
  }
  if (*(char *)(*(long *)(lVar2 + 0x90) + 0x98) != '\0') {
    lVar3 = param_1[0xc];
    if (lVar3 == 0) {
      func_0x00f78af4();
      goto code_r0x0153b5e0;
    }
    if (*(char *)(lVar3 + 0x69) != '\0') {
      *(undefined2 *)((long)param_1 + 0x1c) = 0;
    }
    if (*(long *)(lVar2 + 0x10) == 0) {
      func_0x00f78af4();
      goto code_r0x0153b5e0;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + 0x60);
    if (lVar2 == 0) {
      func_0x00f78af4();
      goto code_r0x0153b5e0;
    }
    *(undefined4 *)(lVar2 + 0xd0) = *(undefined4 *)(lVar3 + 0x6c);
  }
  /*Atlas.Gameplay.Kart.KartAI$$ApplyHopping*/ func_0x015badb4(param_1,0);
  if (param_1[7] == 0) {
    func_0x00f78af4();
    goto code_r0x0153b5e0;
  }
  lVar2 = *(long *)(param_1[7] + 0x90);
  if (lVar2 == 0) {
    func_0x00f78af4();
    goto code_r0x0153b5e0;
  }
  if (*(char *)(lVar2 + 0x98) == '\0') {
LAB_0153b514:
    if (*(char *)((long)param_1 + 0x1c) == '\0') {
      if (param_1[0xc] == 0) {
        func_0x00f78af4();
code_r0x0153b5e0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x153b5e4);
        (*pcVar1)();
      }
      /*Atlas.Gameplay.Kart.KartAI$$ApplyHoppingUsables*/ func_0x015bb100(param_1,*(undefined8 *)(param_1[0xc] + 0x98),0);
      if (*(char *)((long)param_1 + 0x1c) == '\0') {
        if (param_1[0xc] == 0) {
          func_0x00f78af4();
          goto code_r0x0153b5e0;
        }
        /*Atlas.Gameplay.Kart.KartAI$$TryHopBoost*/ func_0x015bb030(*(undefined4 *)(param_1[0xc] + 0x4c),param_1,0);
      }
    }
  }
  else {
    if (param_1[0xc] == 0) {
      func_0x00f78af4();
      goto code_r0x0153b5e0;
    }
    if (*(char *)(param_1[0xc] + 0x68) == '\0') goto LAB_0153b514;
  }
  (**(code **)(*param_1 + 0x1f8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x200));
  /*Atlas.Gameplay.Kart.BattleKartAI$$UpdateStuckAI*/ func_0x0153bfd8(param_1,param_2);
LAB_0153b574:
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar4);
  return;
}



// ============================================================
// RVA: 0x153b670 | Atlas.Gameplay.Kart.BattleKartAI.UpdateAreaIndex
// ============================================================

/* WARNING: Possible PIC construction at 0x0153b854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153b988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153c1d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153b9ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0153b98c) */
/* WARNING: Removing unreachable block (ram,0x0153c1dc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_BattleKartAI__UpdateAreaIndex
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4)

{
  float *pfVar1;
  int iVar2;
  undefined1 auVar3 [16];
  ulong *puVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  int *piVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *******pppppppuVar19;
  undefined8 *******pppppppuVar20;
  undefined *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  ulong uStack_110;
  ulong uStack_108;
  long lStack_100;
  long *plStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined *puStack_d8;
  undefined8 *******pppppppuStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 *******pppppppuStack_40;
  undefined *puStack_38;
  long *plVar10;
  
  if ((bRam0000000003eb4f0d & 1) == 0) {
    func_0x00f78a20(0x3d3c490);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f0d = 1;
  }
  lVar16 = *(long *)(param_4 + 0x68);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar16,0,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if ((*(long *)(param_4 + 0x68) != 0) &&
     (lVar11 = *(long *)(*(long *)(param_4 + 0x68) + 0x28), lVar11 != 0)) {
    if (*(int *)(lVar11 + 0x18) < 1) {
      return;
    }
    if ((*(long *)(param_4 + 0x38) != 0) &&
       (lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x10), lVar11 != 0)) {
      lVar16 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar11,0);
      param_2 = (ulong)*(uint *)(lVar16 + 0x140);
      param_3 = (ulong)*(uint *)(lVar16 + 0x144);
      lVar11 = *(long *)(param_4 + 0x68);
      /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar16 + 0x13c),0);
      lVar16 = 0;
      if (lVar11 != 0) {
        iVar7 = /*BattleAIMapBoundsBehaviour$$GetNearestTargetAreaIndex*/ func_0x01539460(lVar11);
        if (*(int *)(param_4 + 0xe0) == iVar7) {
          return;
        }
        *(int *)(param_4 + 0xdc) = *(int *)(param_4 + 0xe0);
        *(int *)(param_4 + 0xe0) = iVar7;
        return;
      }
    }
  }
  lVar11 = func_0x00f78af4();
  auVar38._8_8_ = 0x3d23990;
  auVar38._0_8_ = lVar11;
  plVar5 = &lStack_50;
  puStack_38 = &Atlas_Gameplay_Kart_BattleKartAI__UpdateCurrentNavState;
  pppppppuVar20 = &pppppppuStack_40;
  lStack_50 = lVar16;
  lStack_48 = param_4;
  pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4f10 & 1) == 0) {
    func_0x00f78a20(0x3d3b848);
    bRam0000000003eb4f10 = 1;
  }
  lVar16 = *(long *)(lVar11 + 0x38);
  if (lVar16 == 0) {
    return;
  }
  if (*(long *)(lVar16 + 0x90) != 0) {
    if ((*(char *)(*(long *)(lVar16 + 0x90) + 0x98) != '\0') && (*(int *)(lVar11 + 0xb8) != 0)) {
code_r0x0153b898:
      plVar5 = (long *)&stack0xffffffffffffffd0;
      lVar12 = lStack_48;
      lVar16 = lStack_50;
      pppppppuVar20 = pppppppuStack_40;
      puVar21 = puStack_38;
code_r0x0153c800:
      *(long *)((long)plVar5 + -0x20) = lVar16;
      *(long *)((long)plVar5 + -0x18) = lVar12;
      *(undefined8 ********)((long)plVar5 + -0x10) = pppppppuVar20;
      *(undefined **)((long)plVar5 + -8) = puVar21;
      /*Atlas.Gameplay.Kart.BattleKartAI$$NextNavState*/ func_0x0153c82c();
      /*Atlas.Gameplay.Kart.BattleKartAI$$SetTargetPoint*/ func_0x0153c688(lVar11);
      puVar21 = *(undefined **)((long)plVar5 + -8);
      auVar39._8_8_ = *(undefined8 *)((long)plVar5 + -0x20);
      auVar39._0_8_ = *(undefined8 *)((long)plVar5 + -0x18);
      puVar4 = (ulong *)plVar5;
      pppppppuVar19 = *(undefined8 ********)((long)plVar5 + -0x10);
      goto code_r0x0153c38c;
    }
    if (*(long *)(lVar16 + 0x10) != 0) {
      lVar16 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(*(long *)(lVar16 + 0x10),0);
      iVar7 = *(int *)(lVar11 + 0xb8);
      if (iVar7 != 2) {
        if (iVar7 != 1) {
          if (iVar7 != 0) {
            return;
          }
          goto code_r0x0153b7fc;
        }
        if (*(long *)(lVar11 + 0x38) == 0) goto code_r0x0153b8dc;
        if (*(long *)(*(long *)(lVar11 + 0x38) + 0x38) != 0) {
          if (*(long *)(lVar11 + 0x30) != 0) {
            lVar12 = *(long *)(*(long *)(lVar11 + 0x30) + 0x1e8);
            if (lVar12 != 0) {
              lVar12 = *(long *)(lVar12 + 0x68);
              if (lVar12 == 0) goto code_r0x0153b8dc;
              if (*(int *)(lVar12 + 0x18) < 1) goto code_r0x0153b898;
            }
            if ((*(long *)(lVar11 + 0x38) != 0) &&
               (lVar12 = *(long *)(*(long *)(lVar11 + 0x38) + 0x38), lVar12 != 0)) {
              uVar8 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_HasUsableEquippedOrShuffling*/ func_0x015e1c24(lVar12,0);
              if ((uVar8 & 1) != 0) goto code_r0x0153b898;
              fVar22 = *(float *)(lVar11 + 0x7c) - *(float *)(lVar16 + 0x13c);
              param_3 = *(ulong *)(lVar11 + 0x80);
              fVar28 = (float)param_3 - (float)*(undefined8 *)(lVar16 + 0x140);
              fVar32 = (float)(param_3 >> 0x20) -
                       (float)((ulong)*(undefined8 *)(lVar16 + 0x140) >> 0x20);
              fVar22 = fVar32 * fVar32 + fVar22 * fVar22 + fVar28 * fVar28;
              fVar28 = *(float *)(lVar11 + 0xc0);
              goto code_r0x0153b82c;
            }
          }
          goto code_r0x0153b8dc;
        }
        puVar21 = &UNK_0153b858;
        lVar12 = lVar11;
        goto code_r0x0153c800;
      }
      if (*(long *)(lVar11 + 0x38) != 0) {
        if (*(long *)(*(long *)(lVar11 + 0x38) + 0x38) == 0) {
          /*Atlas.Gameplay.Kart.BattleKartAI$$NextNavStateAndRefreshTarget*/ func_0x0153c800(lVar11);
        }
code_r0x0153b7fc:
        fVar22 = *(float *)(lVar11 + 0x7c) - *(float *)(lVar16 + 0x13c);
        param_3 = *(ulong *)(lVar11 + 0x80);
        fVar28 = (float)param_3 - (float)*(undefined8 *)(lVar16 + 0x140);
        fVar32 = (float)(param_3 >> 0x20) - (float)((ulong)*(undefined8 *)(lVar16 + 0x140) >> 0x20);
        fVar22 = fVar32 * fVar32 + fVar22 * fVar22 + fVar28 * fVar28;
        fVar28 = *(float *)(lVar11 + 0xbc);
code_r0x0153b82c:
        param_2 = (ulong)(uint)fVar28;
        if (fVar28 <= fVar22) {
          return;
        }
        goto code_r0x0153b898;
      }
    }
  }
code_r0x0153b8dc:
  auVar38 = func_0x00f78af4();
  plVar18 = auVar38._8_8_;
  lVar16 = auVar38._0_8_;
  puVar4 = (ulong *)&stack0xffffffffffffff30;
  puStack_58 = &Atlas_Gameplay_Kart_BattleKartAI__ApplyNavigationSteering;
  pppppppuVar19 = &pppppppuStack_60;
  lVar11 = 0x3eb4000;
  pppppppuStack_60 = pppppppuVar20;
  if ((bRam0000000003eb4f0e & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d22cc8);
    bRam0000000003eb4f0e = 1;
  }
  if (*(long *)(lVar16 + 0x70) == 0) {
    return;
  }
  if (*(long *)(lVar16 + 0x38) == 0) {
    return;
  }
  lVar12 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
  if (lVar12 != 0) {
    lVar11 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar12,0);
    auVar39._8_8_ = lVar11;
    auVar39._0_8_ = lVar16;
    auVar3._8_8_ = lVar11;
    auVar3._0_8_ = lVar16;
    if (*(long *)(lVar16 + 0x70) != 0) {
      iVar7 = /*UnityEngine.AI.NavMeshPath$$get_status*/ func_0x03207ad8(*(long *)(lVar16 + 0x70),0);
      if (iVar7 != 0) {
        if (100 < *(int *)(lVar16 + 0xac)) {
          /*Atlas.Gameplay.Kart.BattleKartAI$$SetTargetPoint*/ func_0x0153c688(lVar16);
        }
        puVar21 = &UNK_0153b98c;
        puVar4 = (ulong *)&stack0xffffffffffffff30;
        auVar39 = auVar3;
        goto code_r0x0153c38c;
      }
      if (*(float *)(lVar16 + 0xa8) < 0.0) {
        puVar21 = &UNK_0153b9b0;
        goto code_r0x0153c38c;
      }
      if (*(long *)(lVar16 + 0x70) != 0) {
        iVar7 = /*UnityEngine.AI.NavMeshPath$$get_status*/ func_0x03207ad8(*(long *)(lVar16 + 0x70),0);
        if (iVar7 == 0) {
          *(undefined4 *)(lVar16 + 0xac) = 0;
        }
        fVar22 = *(float *)(lVar16 + 0x7c);
        fVar28 = *(float *)(lVar16 + 0x84);
        if ((*(long *)(lVar16 + 0x70) != 0) &&
           (iVar7 = *(int *)(lVar16 + 0x78) + -1, 0 < *(int *)(lVar16 + 0x78))) {
          iVar2 = *(int *)(lVar16 + 0xb0);
          pfVar1 = (float *)(*(long *)(lVar16 + 0x158) + (long)iVar2 * 0x10);
          fVar32 = *pfVar1 - *(float *)(lVar11 + 0x13c);
          uVar17 = *(undefined8 *)(pfVar1 + 1);
          fVar29 = (float)uVar17 - (float)*(undefined8 *)(lVar11 + 0x140);
          fVar33 = (float)((ulong)uVar17 >> 0x20) -
                   (float)((ulong)*(undefined8 *)(lVar11 + 0x140) >> 0x20);
          fVar23 = *(float *)(lVar16 + 0xbc);
          if (fVar33 * fVar33 + fVar32 * fVar32 + fVar29 * fVar29 <= fVar23) {
            if (iVar2 + 1 <= iVar7) {
              iVar7 = iVar2 + 1;
            }
            if (iVar7 < 1) {
              iVar7 = 0;
            }
            *(int *)(lVar16 + 0xb0) = iVar7;
          }
          if (*(char *)(lVar16 + 0xec) == '\0') {
            fVar32 = *(float *)(lVar16 + 0x80);
          }
          else {
            /*Atlas.Gameplay.Kart.BattleKartAI$$ComputeLookAhead*/ func_0x0153c6b8(lVar16);
            fVar22 = *(float *)(lVar16 + 0x88);
            fVar32 = *(float *)(lVar16 + 0x8c);
            fVar28 = *(float *)(lVar16 + 0x90);
            fVar29 = fVar22 - *(float *)(lVar11 + 0x13c);
            fVar33 = fVar32 - *(float *)(lVar11 + 0x140);
            fVar37 = fVar28 - *(float *)(lVar11 + 0x144);
            fVar23 = *(float *)(lVar16 + 0xbc);
            if (fVar37 * fVar37 + fVar29 * fVar29 + fVar33 * fVar33 <= fVar23) {
              iVar7 = *(int *)(lVar16 + 0x78) + -1;
              if (*(int *)(lVar16 + 0xb0) + 1 <= iVar7) {
                iVar7 = *(int *)(lVar16 + 0xb0) + 1;
              }
              if (iVar7 < 1) {
                iVar7 = 0;
              }
              *(int *)(lVar16 + 0xb0) = iVar7;
            }
          }
          fVar29 = *(float *)(lVar16 + 0x7c);
          fVar33 = *(float *)(lVar16 + 0x84);
          fVar32 = fVar32 - *(float *)(lVar16 + 0x80);
          if (((fVar28 - fVar33) * (fVar28 - fVar33) +
               (fVar22 - fVar29) * (fVar22 - fVar29) + fVar32 * fVar32 < fVar23) ||
             (*(char *)(lVar11 + 0x3f) != '\0')) {
            *(float *)(lVar16 + 0x88) = fVar29;
            *(float *)(lVar16 + 0x8c) = *(float *)(lVar16 + 0x80);
            *(float *)(lVar16 + 0x90) = fVar33;
            fVar22 = fVar29;
            fVar28 = fVar33;
          }
        }
        fVar32 = *(float *)(lVar11 + 0x13c);
        fVar23 = *(float *)(lVar11 + 0x144);
        unaff_x22 = 0x3ca3000;
        if (cRam0000000003ca34fc == '\0') {
          func_0x00f78a20(0x3d232c0);
          cRam0000000003ca34fc = '\x01';
        }
        fVar22 = fVar22 - fVar32;
        fVar28 = fVar28 - fVar23;
        lVar12 = 0x3d232c0;
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        fVar23 = SQRT(fVar28 * fVar28 + fVar22 * fVar22 + 0.0);
        fVar22 = fVar22 / fVar23;
        unaff_d9 = (ulong)(uint)fVar22;
        fVar32 = 0.0 / fVar23;
        fVar28 = fVar28 / fVar23;
        uVar8 = /*Core.Extensions.MathsExtensions$$IsNaN*/ func_0x01646840(fVar22,fVar32,fVar28,0);
        if ((uVar8 & 1) != 0) {
          return;
        }
        *(float *)(lVar16 + 0x50) = fVar22;
        *(float *)(lVar16 + 0x54) = fVar32;
        *(float *)(lVar16 + 0x58) = fVar28;
        fVar33 = *(float *)(lVar11 + 0x124);
        fVar29 = *(float *)(lVar11 + 300);
        if (cRam0000000003ca34fc == '\0') {
          func_0x00f78a20(0x3d232c0);
          cRam0000000003ca34fc = '\x01';
        }
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        fVar24 = fVar29 * fVar29 + fVar33 * fVar33 + 0.0;
        fVar35 = 1.0;
        fVar30 = 1.0 / SQRT(fVar24);
        fVar33 = fVar33 * fVar30;
        fVar37 = fVar30 * 0.0;
        fVar29 = fVar29 * fVar30;
        if (fVar24 <= 1.1754944e-38) {
          fVar29 = 0.0;
          fVar37 = 0.0;
          fVar33 = 0.0;
        }
        fVar29 = fVar28 * fVar29 + fVar22 * fVar33 + fVar32 * fVar37;
        fVar32 = fVar28 * *(float *)(lVar11 + 0x120) +
                 fVar22 * *(float *)(lVar11 + 0x118) + fVar32 * *(float *)(lVar11 + 0x11c);
        fVar28 = ABS(fVar29);
        unaff_d10 = (ulong)(uint)fVar28;
        fVar22 = fVar35;
        if (fVar29 == 0.0 || 0.0 > fVar29) {
          fVar22 = 0.0;
        }
        fVar33 = fVar35;
        if (0.0 <= fVar29) {
          fVar33 = 0.0;
        }
        fVar22 = fVar22 - fVar33;
        unaff_d11 = (ulong)(uint)fVar22;
        fVar29 = *(float *)(lVar16 + 0xc4);
        if ((fVar29 < fVar28) || (fVar32 < 0.0)) {
          fVar33 = (fVar28 - fVar29) / (*(float *)(lVar16 + 200) - fVar29);
          iVar7 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar33,0);
          fVar29 = fVar35;
          if (iVar7 == 0 && fVar33 <= 1.0) {
            fVar29 = fVar33;
          }
          unaff_d8 = (ulong)(uint)fVar29;
          iVar7 = /*System.Single$$IsNaN*/ func_0x029ba610(unaff_d8,0);
          fVar33 = 0.0;
          if (iVar7 == 0 && 0.0 <= fVar29) {
            fVar33 = fVar29;
          }
          if (0.0 <= fVar32) {
            fVar35 = fVar33;
          }
          *(float *)(lVar16 + 0x10) = fVar22 * fVar35;
          unaff_x23 = 0x3d232c0;
          if (plVar18 != (long *)0x0) {
            fVar33 = fVar22 * fVar35 - *(float *)(lVar16 + 0x20);
            unaff_d8 = (ulong)(uint)fVar33;
            fVar29 = *(float *)(lVar16 + 0xd4);
            unaff_d9 = (ulong)(uint)fVar29;
            lVar13 = *plVar18;
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar8 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                  puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                  goto code_r0x0153bd38;
                }
                piVar15 = piVar15 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar18,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x0153bd38:
            fVar37 = (float)(*(code *)*puVar9)(plVar18,puVar9[1]);
            fVar29 = fVar29 * fVar37;
            if (fVar29 < ABS(fVar33)) {
              fVar37 = 1.0;
              if (fVar33 == 0.0 || 0.0 > fVar33) {
                fVar37 = 0.0;
              }
              fVar35 = 1.0;
              if (0.0 <= fVar33) {
                fVar35 = 0.0;
              }
              *(float *)(lVar16 + 0x10) = (fVar37 - fVar35) * fVar29 + *(float *)(lVar16 + 0x20);
            }
            if (*(long *)(lVar16 + 0x60) != 0) {
              fVar29 = *(float *)(*(long *)(lVar16 + 0x60) + 0x40);
              bVar6 = fVar23 < fVar29;
              if ((fVar32 < 0.0) || (*(float *)(lVar16 + 0xcc) < fVar28)) {
                if ((fVar23 < fVar29) || (fVar32 < 0.0)) {
                  *(undefined1 *)(lVar16 + 0x1d) = 0;
                  *(undefined8 *)(lVar16 + 0x14) = _UNK_033f87e8;
                }
                else {
                  unaff_x23 = lVar12;
                  if (((*(long *)(lVar16 + 0x38) == 0) ||
                      (lVar13 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10), lVar13 == 0)) ||
                     (*(long *)(lVar13 + 0x60) == 0)) goto code_r0x0153bfd4;
                  plVar18 = *(long **)(lVar13 + 0x40);
                  uVar31 = *(undefined4 *)(lVar16 + 0x10);
                  uVar26 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$GetDriftSpeedMinModifier*/ func_0x015da990(*(long *)(lVar13 + 0x60),0);
                  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  iVar7 = /*Atlas.Gameplay.Kart.KartPhysics$$IsDriftingStateRequirementsMet*/ func_0x015d4ebc(uVar31,uVar26,plVar18,lVar11,0);
                  if ((iVar7 == 0) ||
                     (*(undefined1 *)(lVar16 + 0x1d) = 1, 0.0 < *(float *)(lVar11 + 100))) {
                    bVar6 = false;
                  }
                  else {
                    bVar6 = false;
                    *(undefined1 *)(lVar16 + 0x1c) = 1;
                  }
                }
              }
              if ((fVar32 < 0.0) || (fVar22 * *(float *)(lVar11 + 0x6c) < 0.0 || bVar6)) {
                *(undefined1 *)(lVar16 + 0x1d) = 0;
              }
              goto code_r0x0153be68;
            }
          }
        }
        else {
code_r0x0153be68:
          if (*(char *)(lVar16 + 0x1d) == '\0') {
            return;
          }
          if (*(float *)(lVar11 + 100) <= 0.0) {
            return;
          }
          fVar23 = *(float *)(lVar11 + 0x6c);
          unaff_d9 = (ulong)(uint)fVar23;
          fVar32 = *(float *)(lVar16 + 0xcc);
          if ((fVar28 < fVar32) || (fVar22 * fVar23 <= 0.0)) {
            if (fVar22 * fVar23 <= 0.0) {
              fVar28 = -fVar28;
            }
            unaff_d10 = 0;
            fVar28 = (fVar28 - fVar32) / (0.0 - fVar32);
            iVar7 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar28,0);
            fVar22 = 1.0;
            if (fVar28 <= 1.0 && iVar7 == 0) {
              fVar22 = fVar28;
            }
            unaff_d8 = (ulong)(uint)fVar22;
            iVar7 = /*System.Single$$IsNaN*/ func_0x029ba610(unaff_d8,0);
            fVar28 = 0.0;
            if (iVar7 == 0 && 0.0 <= fVar22) {
              fVar28 = fVar22;
            }
            unaff_x23 = lVar12;
            if (((*(long *)(lVar16 + 0x38) != 0) &&
                (lVar13 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10), lVar13 != 0)) &&
               (lVar13 = *(long *)(lVar13 + 0x40), lVar13 != 0)) {
              fVar22 = *(float *)(lVar13 + 0x88);
              fVar32 = *(float *)(lVar13 + 0x80);
              goto code_r0x0153bf90;
            }
          }
          else {
            fVar28 = (fVar28 - fVar32) / (*(float *)(lVar16 + 0xd0) - fVar32);
            iVar7 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar28,0);
            fVar22 = 1.0;
            if (iVar7 == 0 && fVar28 <= 1.0) {
              fVar22 = fVar28;
            }
            unaff_d8 = (ulong)(uint)fVar22;
            iVar7 = /*System.Single$$IsNaN*/ func_0x029ba610(unaff_d8,0);
            fVar28 = 0.0;
            if (iVar7 == 0 && 0.0 <= fVar22) {
              fVar28 = fVar22;
            }
            unaff_x23 = lVar12;
            if (((*(long *)(lVar16 + 0x38) != 0) &&
                (lVar13 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10), lVar13 != 0)) &&
               (lVar13 = *(long *)(lVar13 + 0x40), lVar13 != 0)) {
              fVar32 = *(float *)(lVar13 + 0x84);
              fVar22 = *(float *)(lVar13 + 0x88);
code_r0x0153bf90:
              *(float *)(lVar16 + 0x10) = fVar23 * (fVar22 + fVar28 * (fVar32 - fVar22));
              return;
            }
          }
        }
      }
    }
  }
code_r0x0153bfd4:
  auVar39 = func_0x00f78af4();
  plVar10 = auVar39._8_8_;
  lVar12 = auVar39._0_8_;
  puVar4 = &uStack_110;
  puStack_d8 = &Atlas_Gameplay_Kart_BattleKartAI__UpdateStuckAI;
  uStack_110 = unaff_d9;
  uStack_108 = unaff_d8;
  lStack_100 = unaff_x22;
  plStack_f8 = plVar18;
  lStack_f0 = lVar11;
  lStack_e8 = lVar16;
  pppppppuStack_e0 = pppppppuVar19;
  if ((bRam0000000003eb4f0c & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4f0c = 1;
  }
  if ((*(long *)(lVar12 + 0x38) == 0) ||
     (lVar16 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10), lVar16 == 0)) goto code_r0x0153c1e0;
  lVar16 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar16,0);
  if (_UNK_033f8140 <= *(float *)(lVar12 + 0x18)) {
code_r0x0153c110:
    *(undefined4 *)(lVar12 + 0x1d8) = 0;
  }
  else {
    if ((*(long *)(lVar12 + 0x60) == 0) || (plVar10 == (long *)0x0)) goto code_r0x0153c1e0;
    fVar22 = *(float *)(lVar12 + 0x1dc) - *(float *)(lVar16 + 0x13c);
    fVar28 = *(float *)(lVar12 + 0x1e0) - *(float *)(lVar16 + 0x140);
    fVar32 = *(float *)(lVar12 + 0x1e4) - *(float *)(lVar16 + 0x144);
    param_3 = (ulong)(uint)fVar32;
    fVar23 = *(float *)(*(long *)(lVar12 + 0x60) + 0x74);
    unaff_d9 = (ulong)(uint)fVar23;
    auVar38._8_8_ = 0x3d22618;
    auVar38._0_8_ = lVar12;
    lVar16 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar9 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
          goto code_r0x0153c0dc;
        }
        piVar15 = piVar15 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)func_0x00fac1f0(plVar10,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x0153c0dc:
    fVar29 = (float)(*(code *)*puVar9)(plVar10,puVar9[1]);
    if (fVar23 * fVar29 <= fVar32 * fVar32 + fVar22 * fVar22 + fVar28 * fVar28)
    goto code_r0x0153c110;
    if ((*(long *)(lVar12 + 0x38) == 0) ||
       (lVar16 = *(long *)(*(long *)(lVar12 + 0x38) + 0x20), lVar16 == 0)) goto code_r0x0153c1e0;
    uVar8 = /*Atlas.Gameplay.Kart.KartPhysicsInput$$get_IsFrozen*/ func_0x015dac7c(lVar16,0);
    if ((uVar8 & 1) != 0) goto code_r0x0153c110;
    fVar22 = *(float *)(lVar12 + 0x1d8);
    unaff_d8 = (ulong)(uint)fVar22;
    lVar16 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar9 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
          goto code_r0x0153c1a8;
        }
        piVar15 = piVar15 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)func_0x00fac1f0(plVar10,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x0153c1a8:
    fVar28 = (float)(*(code *)*puVar9)(plVar10,puVar9[1]);
    fVar22 = fVar22 + fVar28;
    *(float *)(lVar12 + 0x1d8) = fVar22;
    if (*(long *)(lVar12 + 0x60) == 0) goto code_r0x0153c1e0;
    fVar28 = *(float *)(*(long *)(lVar12 + 0x60) + 0x70);
    param_2 = (ulong)(uint)fVar28;
    if (fVar28 <= fVar22) {
      *(undefined4 *)(lVar12 + 0x1d8) = 0;
      puVar21 = &UNK_0153c1dc;
      pppppppuVar19 = &pppppppuStack_e0;
code_r0x0153c38c:
      while( true ) {
        lVar16 = auVar38._0_8_;
        uVar31 = (undefined4)param_3;
        uVar26 = (undefined4)param_2;
        *(ulong *)((long)puVar4 + -0x60) = unaff_d11;
        *(ulong *)((long)puVar4 + -0x58) = unaff_d10;
        *(ulong *)((long)puVar4 + -0x50) = unaff_d9;
        *(ulong *)((long)puVar4 + -0x48) = unaff_d8;
        *(long *)((long)puVar4 + -0x40) = unaff_x24;
        *(long *)((long)puVar4 + -0x38) = unaff_x23;
        *(long *)((long)puVar4 + -0x30) = unaff_x22;
        *(long *)((long)puVar4 + -0x28) = auVar38._8_8_;
        *(long *)((long)puVar4 + -0x20) = auVar39._8_8_;
        *(long *)((long)puVar4 + -0x18) = auVar39._0_8_;
        *(undefined8 ********)((long)puVar4 + -0x10) = pppppppuVar19;
        *(undefined **)((long)puVar4 + -8) = puVar21;
        pppppppuVar19 = (undefined8 *******)((long)puVar4 + -0x10);
        if ((bRam0000000003eb4f16 & 1) == 0) {
          func_0x00f78a20(0x3d57f78);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4f16 = 1;
        }
        if (*(long *)(lVar16 + 0x38) == 0) {
          return;
        }
        lVar11 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
        if (lVar11 == 0) break;
        lVar11 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar11,0);
        if (*(char *)(lVar11 + 0x3c) == '\0') {
          return;
        }
        uVar17 = *(undefined8 *)(lVar16 + 0x98);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0,0);
        if ((uVar8 & 1) == 0) {
          fVar22 = *(float *)(lVar16 + 0x7c);
        }
        else {
          if (*(long *)(lVar16 + 0x98) == 0) break;
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar16 + 0x98),0);
          fVar22 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
          *(float *)(lVar16 + 0x7c) = fVar22;
          *(undefined4 *)(lVar16 + 0x80) = uVar26;
          *(undefined4 *)(lVar16 + 0x84) = uVar31;
        }
        if (ABS(fVar22) == INFINITY) {
          return;
        }
        if ((*(long *)(lVar16 + 0x38) == 0) ||
           (lVar11 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10), lVar11 == 0)) break;
        lVar11 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar11,0);
        param_2 = (ulong)*(uint *)(lVar11 + 0x140);
        param_3 = (ulong)*(uint *)(lVar11 + 0x144);
        uVar25 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar11 + 0x13c),0);
        unaff_d8 = (ulong)uVar25;
        unaff_d9 = param_2 & 0xffffffff;
        unaff_d10 = param_3 & 0xffffffff;
        uVar31 = *(undefined4 *)(lVar16 + 0x80);
        uVar36 = *(undefined4 *)(lVar16 + 0x84);
        uVar26 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar16 + 0x7c),uVar31,uVar36,0);
        param_2 = param_2 & 0xffffffff;
        param_3 = param_3 & 0xffffffff;
        /*UnityEngine.AI.NavMesh$$CalculatePath*/ func_0x032070a8(uVar25,param_2,param_3,uVar26,uVar31,uVar36,0xffffffff,
                        *(undefined8 *)(lVar16 + 0x70),0);
        lVar11 = *(long *)(lVar16 + 0x60);
        if (*(int *)(lVar16 + 0xb8) == 2) {
          if (lVar11 == 0) break;
          puVar14 = (undefined4 *)(lVar11 + 100);
        }
        else {
          if (lVar11 == 0) break;
          puVar14 = (undefined4 *)(lVar11 + 0x60);
        }
        *(undefined4 *)(lVar16 + 0xa8) = *puVar14;
        *(undefined4 *)(lVar16 + 0xb0) = 0;
        if (*(long *)(lVar16 + 0x70) == 0) {
          return;
        }
        lVar11 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(*(long *)(lVar16 + 0x70),0);
        if (lVar11 == 0) break;
        if (*(long *)(lVar11 + 0x18) == 0) {
          return;
        }
        if (*(long *)(lVar16 + 0x70) == 0) break;
        iVar7 = /*UnityEngine.AI.NavMeshPath$$get_status*/ func_0x03207ad8(*(long *)(lVar16 + 0x70),0);
        if (iVar7 != 0) {
          return;
        }
        if ((*(long *)(lVar16 + 0x70) == 0) ||
           (lVar11 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(*(long *)(lVar16 + 0x70),0), lVar11 == 0)) break;
        *(int *)(lVar16 + 0x78) = (int)*(undefined8 *)(lVar11 + 0x18);
        lVar11 = *(long *)(lVar16 + 0x70);
        if (lVar11 == 0) break;
        uVar8 = 0;
        lVar12 = 0;
        unaff_x22 = 0;
        while( true ) {
          auVar39._8_8_ = uVar8;
          auVar39._0_8_ = lVar16;
          lVar11 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(lVar11,0);
          if (lVar11 == 0) goto code_r0x0153c5f4;
          if ((long)*(int *)(lVar11 + 0x18) <= (long)uVar8) goto code_r0x0153c5f8;
          if ((*(long *)(lVar16 + 0x70) == 0) ||
             (lVar11 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(*(long *)(lVar16 + 0x70),0), lVar11 == 0))
          goto code_r0x0153c5f4;
          if (*(uint *)(lVar11 + 0x18) <= uVar8) break;
          unaff_x23 = unaff_x22 + 0xc;
          unaff_x24 = lVar12 + 0x10;
          uVar8 = uVar8 + 1;
          lVar11 = lVar11 + unaff_x22;
          param_2 = (ulong)*(uint *)(lVar11 + 0x24);
          param_3 = (ulong)*(uint *)(lVar11 + 0x28);
          uVar26 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(*(undefined4 *)(lVar11 + 0x20),0);
          puVar14 = (undefined4 *)(*(long *)(lVar16 + 0x168) + lVar12);
          *puVar14 = uVar26;
          puVar14[1] = (int)param_2;
          puVar14[2] = (int)param_3;
          puVar14[3] = 0;
          lVar11 = *(long *)(lVar16 + 0x70);
          lVar12 = unaff_x24;
          unaff_x22 = unaff_x23;
          if (lVar11 == 0) goto code_r0x0153c5f4;
        }
        uVar17 = func_0x00f78b24();
        puVar21 = &Atlas_Gameplay_Kart_BattleKartAI__OnResetPosition;
        uVar17 = func_0x00f78ac0(uVar17,0);
        auVar38._8_8_ = lVar12;
        auVar38._0_8_ = uVar17;
        puVar4 = (ulong *)((long)puVar4 + -0xb0);
      }
code_r0x0153c5f4:
      func_0x00f78af4();
code_r0x0153c5f8:
      *(undefined8 *)(lVar16 + 0x188) = *(undefined8 *)(lVar16 + 0x7c);
      *(undefined4 *)(lVar16 + 400) = *(undefined4 *)(lVar16 + 0x84);
      *(undefined4 *)(lVar16 + 0x194) = 0;
      *(undefined4 *)(lVar16 + 0x1a8) = *(undefined4 *)(lVar16 + 0x78);
      *(undefined4 *)(lVar16 + 0x1ac) = *(undefined4 *)(lVar16 + 0xbc);
      uVar17 = *(undefined8 *)(lVar16 + 0x1a8);
      uVar34 = *(undefined8 *)(lVar16 + 0x1c0);
      uVar27 = *(undefined8 *)(lVar16 + 0x1b8);
      *(undefined8 *)((long)puVar4 + -0x88) = *(undefined8 *)(lVar16 + 0x1b0);
      *(undefined8 *)((long)puVar4 + -0x90) = uVar17;
      *(undefined8 *)((long)puVar4 + -0x78) = uVar34;
      *(undefined8 *)((long)puVar4 + -0x80) = uVar27;
      *(undefined8 *)((long)puVar4 + -0x70) = *(undefined8 *)(lVar16 + 0x1c8);
      uVar34 = *(undefined8 *)(lVar16 + 0x188);
      uVar27 = *(undefined8 *)(lVar16 + 0x1a0);
      uVar17 = *(undefined8 *)(lVar16 + 0x198);
      *(undefined8 *)((long)puVar4 + -0xa8) = *(undefined8 *)(lVar16 + 400);
      *(undefined8 *)((long)puVar4 + -0xb0) = uVar34;
      *(undefined8 *)((long)puVar4 + -0x98) = uVar27;
      *(undefined8 *)((long)puVar4 + -0xa0) = uVar17;
      /*Unity.Jobs.IJobExtensions$$Run<BattleAIProcessPathJob>*/ func_0x0185e4a0((undefined1 *)((long)puVar4 + -0xb0),uRam0000000003d57f78);
      *(undefined4 *)(lVar16 + 0x78) = **(undefined4 **)(lVar16 + 0x1c0);
      return;
    }
  }
  if ((*(long *)(lVar12 + 0x38) != 0) &&
     (lVar16 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10), lVar16 != 0)) {
    lVar16 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar16,0);
    uVar26 = *(undefined4 *)(lVar16 + 0x144);
    *(undefined8 *)(lVar12 + 0x1dc) = *(undefined8 *)(lVar16 + 0x13c);
    *(undefined4 *)(lVar12 + 0x1e4) = uVar26;
    return;
  }
code_r0x0153c1e0:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x153b764 | Atlas.Gameplay.Kart.BattleKartAI.UpdateCurrentNavState
// ============================================================

/* WARNING: Possible PIC construction at 0x0153b854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153b988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153c1d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153b9ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0153b98c) */
/* WARNING: Removing unreachable block (ram,0x0153c1dc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_BattleKartAI__UpdateCurrentNavState
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4)

{
  undefined8 ******ppppppuVar1;
  float *pfVar2;
  int iVar3;
  undefined1 auVar4 [16];
  ulong *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  int *piVar16;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 unaff_x21;
  long *plVar18;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 ******unaff_x29;
  undefined8 *******pppppppuVar19;
  undefined *unaff_x30;
  undefined *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined *puStack_a8;
  undefined8 ******ppppppuStack_30;
  undefined *puStack_28;
  long *plVar12;
  
  auVar37._8_8_ = unaff_x21;
  auVar37._0_8_ = param_4;
  ppppppuVar1 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4f10 & 1) == 0) {
    func_0x00f78a20(0x3d3b848);
    bRam0000000003eb4f10 = 1;
  }
  lVar13 = *(long *)(param_4 + 0x38);
  if (lVar13 == 0) {
    return;
  }
  if (*(long *)(lVar13 + 0x90) != 0) {
    if ((*(char *)(*(long *)(lVar13 + 0x90) + 0x98) != '\0') && (*(int *)(param_4 + 0xb8) != 0))
    goto code_r0x0153c800;
    if (*(long *)(lVar13 + 0x10) != 0) {
      lVar13 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(*(long *)(lVar13 + 0x10),0);
      iVar7 = *(int *)(param_4 + 0xb8);
      if (iVar7 == 2) {
        if (*(long *)(param_4 + 0x38) != 0) {
          if (*(long *)(*(long *)(param_4 + 0x38) + 0x38) == 0) {
            /*Atlas.Gameplay.Kart.BattleKartAI$$NextNavStateAndRefreshTarget*/ func_0x0153c800(param_4);
          }
LAB_0153b7fc:
          fVar21 = *(float *)(param_4 + 0x7c) - *(float *)(lVar13 + 0x13c);
          param_3 = *(ulong *)(param_4 + 0x80);
          fVar27 = (float)param_3 - (float)*(undefined8 *)(lVar13 + 0x140);
          fVar31 = (float)(param_3 >> 0x20) -
                   (float)((ulong)*(undefined8 *)(lVar13 + 0x140) >> 0x20);
          fVar21 = fVar31 * fVar31 + fVar21 * fVar21 + fVar27 * fVar27;
          fVar27 = *(float *)(param_4 + 0xbc);
code_r0x0153b82c:
          param_2 = (ulong)(uint)fVar27;
          if (fVar27 <= fVar21) {
            return;
          }
code_r0x0153c800:
          *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
          *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined8 *******)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
          /*Atlas.Gameplay.Kart.BattleKartAI$$NextNavState*/ func_0x0153c82c();
          /*Atlas.Gameplay.Kart.BattleKartAI$$SetTargetPoint*/ func_0x0153c688(param_4);
          puVar20 = *(undefined **)((long)register0x00000008 + -8);
          auVar38._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x20);
          auVar38._0_8_ = *(undefined8 *)((long)register0x00000008 + -0x18);
          puVar5 = (ulong *)register0x00000008;
          pppppppuVar19 = *(undefined8 ********)((long)register0x00000008 + -0x10);
          goto code_r0x0153c38c;
        }
      }
      else {
        if (iVar7 != 1) {
          if (iVar7 != 0) {
            return;
          }
          goto LAB_0153b7fc;
        }
        if (*(long *)(param_4 + 0x38) == 0) goto LAB_0153b8dc;
        if (*(long *)(*(long *)(param_4 + 0x38) + 0x38) == 0) {
          unaff_x30 = &UNK_0153b858;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
          unaff_x19 = param_4;
          unaff_x20 = lVar13;
          unaff_x29 = ppppppuVar1;
          goto code_r0x0153c800;
        }
        if (*(long *)(param_4 + 0x30) != 0) {
          lVar10 = *(long *)(*(long *)(param_4 + 0x30) + 0x1e8);
          if (lVar10 != 0) {
            lVar10 = *(long *)(lVar10 + 0x68);
            if (lVar10 == 0) goto LAB_0153b8dc;
            if (*(int *)(lVar10 + 0x18) < 1) goto code_r0x0153c800;
          }
          if ((*(long *)(param_4 + 0x38) != 0) &&
             (lVar10 = *(long *)(*(long *)(param_4 + 0x38) + 0x38), lVar10 != 0)) {
            uVar11 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_HasUsableEquippedOrShuffling*/ func_0x015e1c24(lVar10,0);
            if ((uVar11 & 1) != 0) goto code_r0x0153c800;
            fVar21 = *(float *)(param_4 + 0x7c) - *(float *)(lVar13 + 0x13c);
            param_3 = *(ulong *)(param_4 + 0x80);
            fVar27 = (float)param_3 - (float)*(undefined8 *)(lVar13 + 0x140);
            fVar31 = (float)(param_3 >> 0x20) -
                     (float)((ulong)*(undefined8 *)(lVar13 + 0x140) >> 0x20);
            fVar21 = fVar31 * fVar31 + fVar21 * fVar21 + fVar27 * fVar27;
            fVar27 = *(float *)(param_4 + 0xc0);
            goto code_r0x0153b82c;
          }
        }
      }
    }
  }
LAB_0153b8dc:
  auVar37 = func_0x00f78af4();
  plVar18 = auVar37._8_8_;
  lVar13 = auVar37._0_8_;
  puVar5 = (ulong *)&stack0xffffffffffffff60;
  puStack_28 = &Atlas_Gameplay_Kart_BattleKartAI__ApplyNavigationSteering;
  pppppppuVar19 = &ppppppuStack_30;
  lVar10 = 0x3eb4000;
  ppppppuStack_30 = ppppppuVar1;
  if ((bRam0000000003eb4f0e & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d22cc8);
    bRam0000000003eb4f0e = 1;
  }
  if (*(long *)(lVar13 + 0x70) == 0) {
    return;
  }
  if (*(long *)(lVar13 + 0x38) == 0) {
    return;
  }
  lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if (lVar8 != 0) {
    lVar10 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar8,0);
    auVar38._8_8_ = lVar10;
    auVar38._0_8_ = lVar13;
    auVar4._8_8_ = lVar10;
    auVar4._0_8_ = lVar13;
    if (*(long *)(lVar13 + 0x70) != 0) {
      iVar7 = /*UnityEngine.AI.NavMeshPath$$get_status*/ func_0x03207ad8(*(long *)(lVar13 + 0x70),0);
      if (iVar7 != 0) {
        if (100 < *(int *)(lVar13 + 0xac)) {
          /*Atlas.Gameplay.Kart.BattleKartAI$$SetTargetPoint*/ func_0x0153c688(lVar13);
        }
        puVar20 = &UNK_0153b98c;
        puVar5 = (ulong *)&stack0xffffffffffffff60;
        auVar38 = auVar4;
        goto code_r0x0153c38c;
      }
      if (*(float *)(lVar13 + 0xa8) < 0.0) {
        puVar20 = &UNK_0153b9b0;
        goto code_r0x0153c38c;
      }
      if (*(long *)(lVar13 + 0x70) != 0) {
        iVar7 = /*UnityEngine.AI.NavMeshPath$$get_status*/ func_0x03207ad8(*(long *)(lVar13 + 0x70),0);
        if (iVar7 == 0) {
          *(undefined4 *)(lVar13 + 0xac) = 0;
        }
        fVar21 = *(float *)(lVar13 + 0x7c);
        fVar27 = *(float *)(lVar13 + 0x84);
        if ((*(long *)(lVar13 + 0x70) != 0) &&
           (iVar7 = *(int *)(lVar13 + 0x78) + -1, 0 < *(int *)(lVar13 + 0x78))) {
          iVar3 = *(int *)(lVar13 + 0xb0);
          pfVar2 = (float *)(*(long *)(lVar13 + 0x158) + (long)iVar3 * 0x10);
          fVar31 = *pfVar2 - *(float *)(lVar10 + 0x13c);
          uVar17 = *(undefined8 *)(pfVar2 + 1);
          fVar28 = (float)uVar17 - (float)*(undefined8 *)(lVar10 + 0x140);
          fVar32 = (float)((ulong)uVar17 >> 0x20) -
                   (float)((ulong)*(undefined8 *)(lVar10 + 0x140) >> 0x20);
          fVar22 = *(float *)(lVar13 + 0xbc);
          if (fVar32 * fVar32 + fVar31 * fVar31 + fVar28 * fVar28 <= fVar22) {
            if (iVar3 + 1 <= iVar7) {
              iVar7 = iVar3 + 1;
            }
            if (iVar7 < 1) {
              iVar7 = 0;
            }
            *(int *)(lVar13 + 0xb0) = iVar7;
          }
          if (*(char *)(lVar13 + 0xec) == '\0') {
            fVar31 = *(float *)(lVar13 + 0x80);
          }
          else {
            /*Atlas.Gameplay.Kart.BattleKartAI$$ComputeLookAhead*/ func_0x0153c6b8(lVar13);
            fVar21 = *(float *)(lVar13 + 0x88);
            fVar31 = *(float *)(lVar13 + 0x8c);
            fVar27 = *(float *)(lVar13 + 0x90);
            fVar28 = fVar21 - *(float *)(lVar10 + 0x13c);
            fVar32 = fVar31 - *(float *)(lVar10 + 0x140);
            fVar36 = fVar27 - *(float *)(lVar10 + 0x144);
            fVar22 = *(float *)(lVar13 + 0xbc);
            if (fVar36 * fVar36 + fVar28 * fVar28 + fVar32 * fVar32 <= fVar22) {
              iVar7 = *(int *)(lVar13 + 0x78) + -1;
              if (*(int *)(lVar13 + 0xb0) + 1 <= iVar7) {
                iVar7 = *(int *)(lVar13 + 0xb0) + 1;
              }
              if (iVar7 < 1) {
                iVar7 = 0;
              }
              *(int *)(lVar13 + 0xb0) = iVar7;
            }
          }
          fVar28 = *(float *)(lVar13 + 0x7c);
          fVar32 = *(float *)(lVar13 + 0x84);
          fVar31 = fVar31 - *(float *)(lVar13 + 0x80);
          if (((fVar27 - fVar32) * (fVar27 - fVar32) +
               (fVar21 - fVar28) * (fVar21 - fVar28) + fVar31 * fVar31 < fVar22) ||
             (*(char *)(lVar10 + 0x3f) != '\0')) {
            *(float *)(lVar13 + 0x88) = fVar28;
            *(float *)(lVar13 + 0x8c) = *(float *)(lVar13 + 0x80);
            *(float *)(lVar13 + 0x90) = fVar32;
            fVar21 = fVar28;
            fVar27 = fVar32;
          }
        }
        fVar31 = *(float *)(lVar10 + 0x13c);
        fVar22 = *(float *)(lVar10 + 0x144);
        unaff_x22 = 0x3ca3000;
        if (cRam0000000003ca34fc == '\0') {
          func_0x00f78a20(0x3d232c0);
          cRam0000000003ca34fc = '\x01';
        }
        fVar21 = fVar21 - fVar31;
        fVar27 = fVar27 - fVar22;
        lVar8 = 0x3d232c0;
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        fVar22 = SQRT(fVar27 * fVar27 + fVar21 * fVar21 + 0.0);
        fVar21 = fVar21 / fVar22;
        unaff_d9 = (ulong)(uint)fVar21;
        fVar31 = 0.0 / fVar22;
        fVar27 = fVar27 / fVar22;
        uVar11 = /*Core.Extensions.MathsExtensions$$IsNaN*/ func_0x01646840(fVar21,fVar31,fVar27,0);
        if ((uVar11 & 1) != 0) {
          return;
        }
        *(float *)(lVar13 + 0x50) = fVar21;
        *(float *)(lVar13 + 0x54) = fVar31;
        *(float *)(lVar13 + 0x58) = fVar27;
        fVar32 = *(float *)(lVar10 + 0x124);
        fVar28 = *(float *)(lVar10 + 300);
        if (cRam0000000003ca34fc == '\0') {
          func_0x00f78a20(0x3d232c0);
          cRam0000000003ca34fc = '\x01';
        }
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        fVar23 = fVar28 * fVar28 + fVar32 * fVar32 + 0.0;
        fVar34 = 1.0;
        fVar29 = 1.0 / SQRT(fVar23);
        fVar32 = fVar32 * fVar29;
        fVar36 = fVar29 * 0.0;
        fVar28 = fVar28 * fVar29;
        if (fVar23 <= 1.1754944e-38) {
          fVar28 = 0.0;
          fVar36 = 0.0;
          fVar32 = 0.0;
        }
        fVar28 = fVar27 * fVar28 + fVar21 * fVar32 + fVar31 * fVar36;
        fVar31 = fVar27 * *(float *)(lVar10 + 0x120) +
                 fVar21 * *(float *)(lVar10 + 0x118) + fVar31 * *(float *)(lVar10 + 0x11c);
        fVar27 = ABS(fVar28);
        unaff_d10 = (ulong)(uint)fVar27;
        fVar21 = fVar34;
        if (fVar28 == 0.0 || 0.0 > fVar28) {
          fVar21 = 0.0;
        }
        fVar32 = fVar34;
        if (0.0 <= fVar28) {
          fVar32 = 0.0;
        }
        fVar21 = fVar21 - fVar32;
        unaff_d11 = (ulong)(uint)fVar21;
        fVar28 = *(float *)(lVar13 + 0xc4);
        if ((fVar28 < fVar27) || (fVar31 < 0.0)) {
          fVar32 = (fVar27 - fVar28) / (*(float *)(lVar13 + 200) - fVar28);
          iVar7 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar32,0);
          fVar28 = fVar34;
          if (iVar7 == 0 && fVar32 <= 1.0) {
            fVar28 = fVar32;
          }
          unaff_d8 = (ulong)(uint)fVar28;
          iVar7 = /*System.Single$$IsNaN*/ func_0x029ba610(unaff_d8,0);
          fVar32 = 0.0;
          if (iVar7 == 0 && 0.0 <= fVar28) {
            fVar32 = fVar28;
          }
          if (0.0 <= fVar31) {
            fVar34 = fVar32;
          }
          *(float *)(lVar13 + 0x10) = fVar21 * fVar34;
          unaff_x23 = 0x3d232c0;
          if (plVar18 != (long *)0x0) {
            fVar32 = fVar21 * fVar34 - *(float *)(lVar13 + 0x20);
            unaff_d8 = (ulong)(uint)fVar32;
            fVar28 = *(float *)(lVar13 + 0xd4);
            unaff_d9 = (ulong)(uint)fVar28;
            lVar14 = *plVar18;
            uVar11 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar11 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                  puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                  goto code_r0x0153bd38;
                }
                piVar16 = piVar16 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar18,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x0153bd38:
            fVar36 = (float)(*(code *)*puVar9)(plVar18,puVar9[1]);
            fVar28 = fVar28 * fVar36;
            if (fVar28 < ABS(fVar32)) {
              fVar36 = 1.0;
              if (fVar32 == 0.0 || 0.0 > fVar32) {
                fVar36 = 0.0;
              }
              fVar34 = 1.0;
              if (0.0 <= fVar32) {
                fVar34 = 0.0;
              }
              *(float *)(lVar13 + 0x10) = (fVar36 - fVar34) * fVar28 + *(float *)(lVar13 + 0x20);
            }
            if (*(long *)(lVar13 + 0x60) != 0) {
              fVar28 = *(float *)(*(long *)(lVar13 + 0x60) + 0x40);
              bVar6 = fVar22 < fVar28;
              if ((fVar31 < 0.0) || (*(float *)(lVar13 + 0xcc) < fVar27)) {
                if ((fVar22 < fVar28) || (fVar31 < 0.0)) {
                  *(undefined1 *)(lVar13 + 0x1d) = 0;
                  *(undefined8 *)(lVar13 + 0x14) = _UNK_033f87e8;
                }
                else {
                  unaff_x23 = lVar8;
                  if (((*(long *)(lVar13 + 0x38) == 0) ||
                      (lVar14 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10), lVar14 == 0)) ||
                     (*(long *)(lVar14 + 0x60) == 0)) goto code_r0x0153bfd4;
                  plVar18 = *(long **)(lVar14 + 0x40);
                  uVar30 = *(undefined4 *)(lVar13 + 0x10);
                  uVar25 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$GetDriftSpeedMinModifier*/ func_0x015da990(*(long *)(lVar14 + 0x60),0);
                  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  iVar7 = /*Atlas.Gameplay.Kart.KartPhysics$$IsDriftingStateRequirementsMet*/ func_0x015d4ebc(uVar30,uVar25,plVar18,lVar10,0);
                  if ((iVar7 == 0) ||
                     (*(undefined1 *)(lVar13 + 0x1d) = 1, 0.0 < *(float *)(lVar10 + 100))) {
                    bVar6 = false;
                  }
                  else {
                    bVar6 = false;
                    *(undefined1 *)(lVar13 + 0x1c) = 1;
                  }
                }
              }
              if ((fVar31 < 0.0) || (fVar21 * *(float *)(lVar10 + 0x6c) < 0.0 || bVar6)) {
                *(undefined1 *)(lVar13 + 0x1d) = 0;
              }
              goto code_r0x0153be68;
            }
          }
        }
        else {
code_r0x0153be68:
          if (*(char *)(lVar13 + 0x1d) == '\0') {
            return;
          }
          if (*(float *)(lVar10 + 100) <= 0.0) {
            return;
          }
          fVar22 = *(float *)(lVar10 + 0x6c);
          unaff_d9 = (ulong)(uint)fVar22;
          fVar31 = *(float *)(lVar13 + 0xcc);
          if ((fVar27 < fVar31) || (fVar21 * fVar22 <= 0.0)) {
            if (fVar21 * fVar22 <= 0.0) {
              fVar27 = -fVar27;
            }
            unaff_d10 = 0;
            fVar27 = (fVar27 - fVar31) / (0.0 - fVar31);
            iVar7 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar27,0);
            fVar21 = 1.0;
            if (fVar27 <= 1.0 && iVar7 == 0) {
              fVar21 = fVar27;
            }
            unaff_d8 = (ulong)(uint)fVar21;
            iVar7 = /*System.Single$$IsNaN*/ func_0x029ba610(unaff_d8,0);
            fVar27 = 0.0;
            if (iVar7 == 0 && 0.0 <= fVar21) {
              fVar27 = fVar21;
            }
            unaff_x23 = lVar8;
            if (((*(long *)(lVar13 + 0x38) != 0) &&
                (lVar14 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10), lVar14 != 0)) &&
               (lVar14 = *(long *)(lVar14 + 0x40), lVar14 != 0)) {
              fVar21 = *(float *)(lVar14 + 0x88);
              fVar31 = *(float *)(lVar14 + 0x80);
              goto code_r0x0153bf90;
            }
          }
          else {
            fVar27 = (fVar27 - fVar31) / (*(float *)(lVar13 + 0xd0) - fVar31);
            iVar7 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar27,0);
            fVar21 = 1.0;
            if (iVar7 == 0 && fVar27 <= 1.0) {
              fVar21 = fVar27;
            }
            unaff_d8 = (ulong)(uint)fVar21;
            iVar7 = /*System.Single$$IsNaN*/ func_0x029ba610(unaff_d8,0);
            fVar27 = 0.0;
            if (iVar7 == 0 && 0.0 <= fVar21) {
              fVar27 = fVar21;
            }
            unaff_x23 = lVar8;
            if (((*(long *)(lVar13 + 0x38) != 0) &&
                (lVar14 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10), lVar14 != 0)) &&
               (lVar14 = *(long *)(lVar14 + 0x40), lVar14 != 0)) {
              fVar31 = *(float *)(lVar14 + 0x84);
              fVar21 = *(float *)(lVar14 + 0x88);
code_r0x0153bf90:
              *(float *)(lVar13 + 0x10) = fVar22 * (fVar21 + fVar27 * (fVar31 - fVar21));
              return;
            }
          }
        }
      }
    }
  }
code_r0x0153bfd4:
  auVar38 = func_0x00f78af4();
  plVar12 = auVar38._8_8_;
  lVar8 = auVar38._0_8_;
  puVar5 = &uStack_e0;
  puStack_a8 = &Atlas_Gameplay_Kart_BattleKartAI__UpdateStuckAI;
  uStack_e0 = unaff_d9;
  uStack_d8 = unaff_d8;
  lStack_d0 = unaff_x22;
  plStack_c8 = plVar18;
  lStack_c0 = lVar10;
  lStack_b8 = lVar13;
  pppppppuStack_b0 = pppppppuVar19;
  if ((bRam0000000003eb4f0c & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4f0c = 1;
  }
  if ((*(long *)(lVar8 + 0x38) == 0) ||
     (lVar13 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10), lVar13 == 0)) goto code_r0x0153c1e0;
  lVar13 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar13,0);
  if (_UNK_033f8140 <= *(float *)(lVar8 + 0x18)) {
code_r0x0153c110:
    *(undefined4 *)(lVar8 + 0x1d8) = 0;
  }
  else {
    if ((*(long *)(lVar8 + 0x60) == 0) || (plVar12 == (long *)0x0)) goto code_r0x0153c1e0;
    fVar21 = *(float *)(lVar8 + 0x1dc) - *(float *)(lVar13 + 0x13c);
    fVar27 = *(float *)(lVar8 + 0x1e0) - *(float *)(lVar13 + 0x140);
    fVar31 = *(float *)(lVar8 + 0x1e4) - *(float *)(lVar13 + 0x144);
    param_3 = (ulong)(uint)fVar31;
    fVar22 = *(float *)(*(long *)(lVar8 + 0x60) + 0x74);
    unaff_d9 = (ulong)(uint)fVar22;
    auVar37._8_8_ = 0x3d22618;
    auVar37._0_8_ = lVar8;
    lVar13 = *plVar12;
    uVar11 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar11 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto code_r0x0153c0dc;
        }
        piVar16 = piVar16 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)func_0x00fac1f0(plVar12,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x0153c0dc:
    fVar28 = (float)(*(code *)*puVar9)(plVar12,puVar9[1]);
    if (fVar22 * fVar28 <= fVar31 * fVar31 + fVar21 * fVar21 + fVar27 * fVar27)
    goto code_r0x0153c110;
    if ((*(long *)(lVar8 + 0x38) == 0) ||
       (lVar13 = *(long *)(*(long *)(lVar8 + 0x38) + 0x20), lVar13 == 0)) goto code_r0x0153c1e0;
    uVar11 = /*Atlas.Gameplay.Kart.KartPhysicsInput$$get_IsFrozen*/ func_0x015dac7c(lVar13,0);
    if ((uVar11 & 1) != 0) goto code_r0x0153c110;
    fVar21 = *(float *)(lVar8 + 0x1d8);
    unaff_d8 = (ulong)(uint)fVar21;
    lVar13 = *plVar12;
    uVar11 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar11 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto code_r0x0153c1a8;
        }
        piVar16 = piVar16 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)func_0x00fac1f0(plVar12,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x0153c1a8:
    fVar27 = (float)(*(code *)*puVar9)(plVar12,puVar9[1]);
    fVar21 = fVar21 + fVar27;
    *(float *)(lVar8 + 0x1d8) = fVar21;
    if (*(long *)(lVar8 + 0x60) == 0) goto code_r0x0153c1e0;
    fVar27 = *(float *)(*(long *)(lVar8 + 0x60) + 0x70);
    param_2 = (ulong)(uint)fVar27;
    if (fVar27 <= fVar21) {
      *(undefined4 *)(lVar8 + 0x1d8) = 0;
      puVar20 = &UNK_0153c1dc;
      pppppppuVar19 = &pppppppuStack_b0;
code_r0x0153c38c:
      while( true ) {
        lVar13 = auVar37._0_8_;
        uVar30 = (undefined4)param_3;
        uVar25 = (undefined4)param_2;
        *(ulong *)((long)puVar5 + -0x60) = unaff_d11;
        *(ulong *)((long)puVar5 + -0x58) = unaff_d10;
        *(ulong *)((long)puVar5 + -0x50) = unaff_d9;
        *(ulong *)((long)puVar5 + -0x48) = unaff_d8;
        *(long *)((long)puVar5 + -0x40) = unaff_x24;
        *(long *)((long)puVar5 + -0x38) = unaff_x23;
        *(long *)((long)puVar5 + -0x30) = unaff_x22;
        *(long *)((long)puVar5 + -0x28) = auVar37._8_8_;
        *(long *)((long)puVar5 + -0x20) = auVar38._8_8_;
        *(long *)((long)puVar5 + -0x18) = auVar38._0_8_;
        *(undefined8 ********)((long)puVar5 + -0x10) = pppppppuVar19;
        *(undefined **)((long)puVar5 + -8) = puVar20;
        pppppppuVar19 = (undefined8 *******)((long)puVar5 + -0x10);
        if ((bRam0000000003eb4f16 & 1) == 0) {
          func_0x00f78a20(0x3d57f78);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4f16 = 1;
        }
        if (*(long *)(lVar13 + 0x38) == 0) {
          return;
        }
        lVar10 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
        if (lVar10 == 0) break;
        lVar10 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar10,0);
        if (*(char *)(lVar10 + 0x3c) == '\0') {
          return;
        }
        uVar17 = *(undefined8 *)(lVar13 + 0x98);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0,0);
        if ((uVar11 & 1) == 0) {
          fVar21 = *(float *)(lVar13 + 0x7c);
        }
        else {
          if (*(long *)(lVar13 + 0x98) == 0) break;
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar13 + 0x98),0);
          fVar21 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
          *(float *)(lVar13 + 0x7c) = fVar21;
          *(undefined4 *)(lVar13 + 0x80) = uVar25;
          *(undefined4 *)(lVar13 + 0x84) = uVar30;
        }
        if (ABS(fVar21) == INFINITY) {
          return;
        }
        if ((*(long *)(lVar13 + 0x38) == 0) ||
           (lVar10 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10), lVar10 == 0)) break;
        lVar10 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar10,0);
        param_2 = (ulong)*(uint *)(lVar10 + 0x140);
        param_3 = (ulong)*(uint *)(lVar10 + 0x144);
        uVar24 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar10 + 0x13c),0);
        unaff_d8 = (ulong)uVar24;
        unaff_d9 = param_2 & 0xffffffff;
        unaff_d10 = param_3 & 0xffffffff;
        uVar30 = *(undefined4 *)(lVar13 + 0x80);
        uVar35 = *(undefined4 *)(lVar13 + 0x84);
        uVar25 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar13 + 0x7c),uVar30,uVar35,0);
        param_2 = param_2 & 0xffffffff;
        param_3 = param_3 & 0xffffffff;
        /*UnityEngine.AI.NavMesh$$CalculatePath*/ func_0x032070a8(uVar24,param_2,param_3,uVar25,uVar30,uVar35,0xffffffff,
                        *(undefined8 *)(lVar13 + 0x70),0);
        lVar10 = *(long *)(lVar13 + 0x60);
        if (*(int *)(lVar13 + 0xb8) == 2) {
          if (lVar10 == 0) break;
          puVar15 = (undefined4 *)(lVar10 + 100);
        }
        else {
          if (lVar10 == 0) break;
          puVar15 = (undefined4 *)(lVar10 + 0x60);
        }
        *(undefined4 *)(lVar13 + 0xa8) = *puVar15;
        *(undefined4 *)(lVar13 + 0xb0) = 0;
        if (*(long *)(lVar13 + 0x70) == 0) {
          return;
        }
        lVar10 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(*(long *)(lVar13 + 0x70),0);
        if (lVar10 == 0) break;
        if (*(long *)(lVar10 + 0x18) == 0) {
          return;
        }
        if (*(long *)(lVar13 + 0x70) == 0) break;
        iVar7 = /*UnityEngine.AI.NavMeshPath$$get_status*/ func_0x03207ad8(*(long *)(lVar13 + 0x70),0);
        if (iVar7 != 0) {
          return;
        }
        if ((*(long *)(lVar13 + 0x70) == 0) ||
           (lVar10 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(*(long *)(lVar13 + 0x70),0), lVar10 == 0)) break;
        *(int *)(lVar13 + 0x78) = (int)*(undefined8 *)(lVar10 + 0x18);
        lVar10 = *(long *)(lVar13 + 0x70);
        if (lVar10 == 0) break;
        uVar11 = 0;
        lVar8 = 0;
        unaff_x22 = 0;
        while( true ) {
          auVar38._8_8_ = uVar11;
          auVar38._0_8_ = lVar13;
          lVar10 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(lVar10,0);
          if (lVar10 == 0) goto code_r0x0153c5f4;
          if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar11) goto code_r0x0153c5f8;
          if ((*(long *)(lVar13 + 0x70) == 0) ||
             (lVar10 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(*(long *)(lVar13 + 0x70),0), lVar10 == 0))
          goto code_r0x0153c5f4;
          if (*(uint *)(lVar10 + 0x18) <= uVar11) break;
          unaff_x23 = unaff_x22 + 0xc;
          unaff_x24 = lVar8 + 0x10;
          uVar11 = uVar11 + 1;
          lVar10 = lVar10 + unaff_x22;
          param_2 = (ulong)*(uint *)(lVar10 + 0x24);
          param_3 = (ulong)*(uint *)(lVar10 + 0x28);
          uVar25 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(*(undefined4 *)(lVar10 + 0x20),0);
          puVar15 = (undefined4 *)(*(long *)(lVar13 + 0x168) + lVar8);
          *puVar15 = uVar25;
          puVar15[1] = (int)param_2;
          puVar15[2] = (int)param_3;
          puVar15[3] = 0;
          lVar10 = *(long *)(lVar13 + 0x70);
          lVar8 = unaff_x24;
          unaff_x22 = unaff_x23;
          if (lVar10 == 0) goto code_r0x0153c5f4;
        }
        uVar17 = func_0x00f78b24();
        puVar20 = &Atlas_Gameplay_Kart_BattleKartAI__OnResetPosition;
        uVar17 = func_0x00f78ac0(uVar17,0);
        auVar37._8_8_ = lVar8;
        auVar37._0_8_ = uVar17;
        puVar5 = (ulong *)((long)puVar5 + -0xb0);
      }
code_r0x0153c5f4:
      func_0x00f78af4();
code_r0x0153c5f8:
      *(undefined8 *)(lVar13 + 0x188) = *(undefined8 *)(lVar13 + 0x7c);
      *(undefined4 *)(lVar13 + 400) = *(undefined4 *)(lVar13 + 0x84);
      *(undefined4 *)(lVar13 + 0x194) = 0;
      *(undefined4 *)(lVar13 + 0x1a8) = *(undefined4 *)(lVar13 + 0x78);
      *(undefined4 *)(lVar13 + 0x1ac) = *(undefined4 *)(lVar13 + 0xbc);
      uVar17 = *(undefined8 *)(lVar13 + 0x1a8);
      uVar33 = *(undefined8 *)(lVar13 + 0x1c0);
      uVar26 = *(undefined8 *)(lVar13 + 0x1b8);
      *(undefined8 *)((long)puVar5 + -0x88) = *(undefined8 *)(lVar13 + 0x1b0);
      *(undefined8 *)((long)puVar5 + -0x90) = uVar17;
      *(undefined8 *)((long)puVar5 + -0x78) = uVar33;
      *(undefined8 *)((long)puVar5 + -0x80) = uVar26;
      *(undefined8 *)((long)puVar5 + -0x70) = *(undefined8 *)(lVar13 + 0x1c8);
      uVar33 = *(undefined8 *)(lVar13 + 0x188);
      uVar26 = *(undefined8 *)(lVar13 + 0x1a0);
      uVar17 = *(undefined8 *)(lVar13 + 0x198);
      *(undefined8 *)((long)puVar5 + -0xa8) = *(undefined8 *)(lVar13 + 400);
      *(undefined8 *)((long)puVar5 + -0xb0) = uVar33;
      *(undefined8 *)((long)puVar5 + -0x98) = uVar26;
      *(undefined8 *)((long)puVar5 + -0xa0) = uVar17;
      /*Unity.Jobs.IJobExtensions$$Run<BattleAIProcessPathJob>*/ func_0x0185e4a0((undefined1 *)((long)puVar5 + -0xb0),uRam0000000003d57f78);
      *(undefined4 *)(lVar13 + 0x78) = **(undefined4 **)(lVar13 + 0x1c0);
      return;
    }
  }
  if ((*(long *)(lVar8 + 0x38) != 0) &&
     (lVar13 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10), lVar13 != 0)) {
    lVar13 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar13,0);
    uVar25 = *(undefined4 *)(lVar13 + 0x144);
    *(undefined8 *)(lVar8 + 0x1dc) = *(undefined8 *)(lVar13 + 0x13c);
    *(undefined4 *)(lVar8 + 0x1e4) = uVar25;
    return;
  }
code_r0x0153c1e0:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x153b8e0 | Atlas.Gameplay.Kart.BattleKartAI.ApplyNavigationSteering
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_BattleKartAI__ApplyNavigationSteering(long param_1,long *param_2)

{
  float *pfVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined1 auVar24 [16];
  
  if ((bRam0000000003eb4f0e & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d22cc8);
    bRam0000000003eb4f0e = 1;
  }
  if (*(long *)(param_1 + 0x70) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
  if (lVar5 != 0) {
    lVar5 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar5,0);
    if (*(long *)(param_1 + 0x70) != 0) {
      iVar4 = /*UnityEngine.AI.NavMeshPath$$get_status*/ func_0x03207ad8(*(long *)(param_1 + 0x70),0);
      if (iVar4 == 0) {
        if (*(float *)(param_1 + 0xa8) < 0.0) {
          /*Atlas.Gameplay.Kart.BattleKartAI$$TryGetPath*/ func_0x0153c38c(param_1);
        }
      }
      else {
        if (100 < *(int *)(param_1 + 0xac)) {
          /*Atlas.Gameplay.Kart.BattleKartAI$$SetTargetPoint*/ func_0x0153c688(param_1);
        }
        /*Atlas.Gameplay.Kart.BattleKartAI$$TryGetPath*/ func_0x0153c38c(param_1);
        *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
      }
      if (*(long *)(param_1 + 0x70) != 0) {
        iVar4 = /*UnityEngine.AI.NavMeshPath$$get_status*/ func_0x03207ad8(*(long *)(param_1 + 0x70),0);
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 0xac) = 0;
        }
        fVar21 = *(float *)(param_1 + 0x7c);
        fVar23 = *(float *)(param_1 + 0x84);
        if ((*(long *)(param_1 + 0x70) != 0) &&
           (iVar4 = *(int *)(param_1 + 0x78) + -1, 0 < *(int *)(param_1 + 0x78))) {
          iVar2 = *(int *)(param_1 + 0xb0);
          pfVar1 = (float *)(*(long *)(param_1 + 0x158) + (long)iVar2 * 0x10);
          fVar11 = *pfVar1 - *(float *)(lVar5 + 0x13c);
          uVar19 = *(undefined8 *)(pfVar1 + 1);
          fVar15 = (float)uVar19 - (float)*(undefined8 *)(lVar5 + 0x140);
          fVar17 = (float)((ulong)uVar19 >> 0x20) -
                   (float)((ulong)*(undefined8 *)(lVar5 + 0x140) >> 0x20);
          fVar12 = *(float *)(param_1 + 0xbc);
          if (fVar17 * fVar17 + fVar11 * fVar11 + fVar15 * fVar15 <= fVar12) {
            if (iVar2 + 1 <= iVar4) {
              iVar4 = iVar2 + 1;
            }
            if (iVar4 < 1) {
              iVar4 = 0;
            }
            *(int *)(param_1 + 0xb0) = iVar4;
          }
          if (*(char *)(param_1 + 0xec) == '\0') {
            fVar11 = *(float *)(param_1 + 0x80);
          }
          else {
            /*Atlas.Gameplay.Kart.BattleKartAI$$ComputeLookAhead*/ func_0x0153c6b8(param_1);
            fVar21 = *(float *)(param_1 + 0x88);
            fVar11 = *(float *)(param_1 + 0x8c);
            fVar23 = *(float *)(param_1 + 0x90);
            fVar15 = fVar21 - *(float *)(lVar5 + 0x13c);
            fVar17 = fVar11 - *(float *)(lVar5 + 0x140);
            fVar20 = fVar23 - *(float *)(lVar5 + 0x144);
            fVar12 = *(float *)(param_1 + 0xbc);
            if (fVar20 * fVar20 + fVar15 * fVar15 + fVar17 * fVar17 <= fVar12) {
              iVar4 = *(int *)(param_1 + 0x78) + -1;
              if (*(int *)(param_1 + 0xb0) + 1 <= iVar4) {
                iVar4 = *(int *)(param_1 + 0xb0) + 1;
              }
              if (iVar4 < 1) {
                iVar4 = 0;
              }
              *(int *)(param_1 + 0xb0) = iVar4;
            }
          }
          fVar15 = *(float *)(param_1 + 0x7c);
          fVar17 = *(float *)(param_1 + 0x84);
          fVar11 = fVar11 - *(float *)(param_1 + 0x80);
          if (((fVar23 - fVar17) * (fVar23 - fVar17) +
               (fVar21 - fVar15) * (fVar21 - fVar15) + fVar11 * fVar11 < fVar12) ||
             (*(char *)(lVar5 + 0x3f) != '\0')) {
            *(float *)(param_1 + 0x88) = fVar15;
            *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x80);
            *(float *)(param_1 + 0x90) = fVar17;
            fVar21 = fVar15;
            fVar23 = fVar17;
          }
        }
        fVar11 = *(float *)(lVar5 + 0x13c);
        fVar12 = *(float *)(lVar5 + 0x144);
        if (cRam0000000003ca34fc == '\0') {
          func_0x00f78a20(0x3d232c0);
          cRam0000000003ca34fc = '\x01';
        }
        fVar21 = fVar21 - fVar11;
        fVar23 = fVar23 - fVar12;
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        fVar12 = SQRT(fVar23 * fVar23 + fVar21 * fVar21 + 0.0);
        fVar21 = fVar21 / fVar12;
        fVar11 = 0.0 / fVar12;
        fVar23 = fVar23 / fVar12;
        uVar6 = /*Core.Extensions.MathsExtensions$$IsNaN*/ func_0x01646840(fVar21,fVar11,fVar23,0);
        if ((uVar6 & 1) != 0) {
          return;
        }
        *(float *)(param_1 + 0x50) = fVar21;
        *(float *)(param_1 + 0x54) = fVar11;
        *(float *)(param_1 + 0x58) = fVar23;
        fVar17 = *(float *)(lVar5 + 0x124);
        fVar15 = *(float *)(lVar5 + 300);
        if (cRam0000000003ca34fc == '\0') {
          func_0x00f78a20(0x3d232c0);
          cRam0000000003ca34fc = '\x01';
        }
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        fVar13 = fVar15 * fVar15 + fVar17 * fVar17 + 0.0;
        fVar18 = 1.0;
        fVar16 = 1.0 / SQRT(fVar13);
        fVar17 = fVar17 * fVar16;
        fVar20 = fVar16 * 0.0;
        fVar15 = fVar15 * fVar16;
        if (fVar13 <= 1.1754944e-38) {
          fVar15 = 0.0;
          fVar20 = 0.0;
          fVar17 = 0.0;
        }
        fVar15 = fVar23 * fVar15 + fVar21 * fVar17 + fVar11 * fVar20;
        fVar11 = fVar23 * *(float *)(lVar5 + 0x120) +
                 fVar21 * *(float *)(lVar5 + 0x118) + fVar11 * *(float *)(lVar5 + 0x11c);
        fVar23 = ABS(fVar15);
        fVar21 = fVar18;
        if (fVar15 == 0.0 || 0.0 > fVar15) {
          fVar21 = 0.0;
        }
        fVar17 = fVar18;
        if (0.0 <= fVar15) {
          fVar17 = 0.0;
        }
        fVar21 = fVar21 - fVar17;
        fVar15 = *(float *)(param_1 + 0xc4);
        if ((fVar15 < fVar23) || (fVar11 < 0.0)) {
          fVar17 = (fVar23 - fVar15) / (*(float *)(param_1 + 200) - fVar15);
          iVar4 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar17,0);
          fVar15 = fVar18;
          if (iVar4 == 0 && fVar17 <= 1.0) {
            fVar15 = fVar17;
          }
          iVar4 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar15,0);
          fVar17 = 0.0;
          if (iVar4 == 0 && 0.0 <= fVar15) {
            fVar17 = fVar15;
          }
          if (0.0 <= fVar11) {
            fVar18 = fVar17;
          }
          *(float *)(param_1 + 0x10) = fVar21 * fVar18;
          if (param_2 != (long *)0x0) {
            fVar17 = fVar21 * fVar18 - *(float *)(param_1 + 0x20);
            fVar15 = *(float *)(param_1 + 0xd4);
            lVar9 = *param_2;
            uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar6 != 0) {
              piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                  goto code_r0x0153bd38;
                }
                piVar10 = piVar10 + 4;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x0153bd38:
            fVar20 = (float)(*(code *)*puVar7)(param_2,puVar7[1]);
            fVar15 = fVar15 * fVar20;
            if (fVar15 < ABS(fVar17)) {
              fVar20 = 1.0;
              if (fVar17 == 0.0 || 0.0 > fVar17) {
                fVar20 = 0.0;
              }
              fVar18 = 1.0;
              if (0.0 <= fVar17) {
                fVar18 = 0.0;
              }
              *(float *)(param_1 + 0x10) = (fVar20 - fVar18) * fVar15 + *(float *)(param_1 + 0x20);
            }
            if (*(long *)(param_1 + 0x60) != 0) {
              fVar15 = *(float *)(*(long *)(param_1 + 0x60) + 0x40);
              bVar3 = fVar12 < fVar15;
              if ((fVar11 < 0.0) || (*(float *)(param_1 + 0xcc) < fVar23)) {
                if ((fVar12 < fVar15) || (fVar11 < 0.0)) {
                  *(undefined1 *)(param_1 + 0x1d) = 0;
                  *(undefined8 *)(param_1 + 0x14) = _UNK_033f87e8;
                }
                else {
                  if (((*(long *)(param_1 + 0x38) == 0) ||
                      (lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar9 == 0)) ||
                     (*(long *)(lVar9 + 0x60) == 0)) goto LAB_0153bfd4;
                  uVar19 = *(undefined8 *)(lVar9 + 0x40);
                  uVar22 = *(undefined4 *)(param_1 + 0x10);
                  uVar14 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$GetDriftSpeedMinModifier*/ func_0x015da990(*(long *)(lVar9 + 0x60),0);
                  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  iVar4 = /*Atlas.Gameplay.Kart.KartPhysics$$IsDriftingStateRequirementsMet*/ func_0x015d4ebc(uVar22,uVar14,uVar19,lVar5,0);
                  if ((iVar4 == 0) ||
                     (*(undefined1 *)(param_1 + 0x1d) = 1, 0.0 < *(float *)(lVar5 + 100))) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = false;
                    *(undefined1 *)(param_1 + 0x1c) = 1;
                  }
                }
              }
              if ((fVar11 < 0.0) || (fVar21 * *(float *)(lVar5 + 0x6c) < 0.0 || bVar3)) {
                *(undefined1 *)(param_1 + 0x1d) = 0;
              }
              goto code_r0x0153be68;
            }
          }
        }
        else {
code_r0x0153be68:
          if (*(char *)(param_1 + 0x1d) == '\0') {
            return;
          }
          if (*(float *)(lVar5 + 100) <= 0.0) {
            return;
          }
          fVar12 = *(float *)(lVar5 + 0x6c);
          fVar21 = fVar21 * fVar12;
          fVar11 = *(float *)(param_1 + 0xcc);
          if ((fVar23 < fVar11) || (fVar21 <= 0.0)) {
            if (fVar21 <= 0.0) {
              fVar23 = -fVar23;
            }
            fVar23 = (fVar23 - fVar11) / (0.0 - fVar11);
            iVar4 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar23,0);
            fVar21 = 1.0;
            if (fVar23 <= 1.0 && iVar4 == 0) {
              fVar21 = fVar23;
            }
            iVar4 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar21,0);
            fVar23 = 0.0;
            if (iVar4 == 0 && 0.0 <= fVar21) {
              fVar23 = fVar21;
            }
            if (((*(long *)(param_1 + 0x38) != 0) &&
                (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar5 != 0)) &&
               (lVar5 = *(long *)(lVar5 + 0x40), lVar5 != 0)) {
              fVar21 = *(float *)(lVar5 + 0x88);
              fVar11 = *(float *)(lVar5 + 0x80);
              goto code_r0x0153bf90;
            }
          }
          else {
            fVar23 = (fVar23 - fVar11) / (*(float *)(param_1 + 0xd0) - fVar11);
            iVar4 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar23,0);
            fVar21 = 1.0;
            if (iVar4 == 0 && fVar23 <= 1.0) {
              fVar21 = fVar23;
            }
            iVar4 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar21,0);
            fVar23 = 0.0;
            if (iVar4 == 0 && 0.0 <= fVar21) {
              fVar23 = fVar21;
            }
            if (((*(long *)(param_1 + 0x38) != 0) &&
                (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar5 != 0)) &&
               (lVar5 = *(long *)(lVar5 + 0x40), lVar5 != 0)) {
              fVar11 = *(float *)(lVar5 + 0x84);
              fVar21 = *(float *)(lVar5 + 0x88);
code_r0x0153bf90:
              *(float *)(param_1 + 0x10) = fVar12 * (fVar21 + fVar23 * (fVar11 - fVar21));
              return;
            }
          }
        }
      }
    }
  }
LAB_0153bfd4:
  auVar24 = func_0x00f78af4();
  plVar8 = auVar24._8_8_;
  lVar5 = auVar24._0_8_;
  if ((bRam0000000003eb4f0c & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4f0c = 1;
  }
  if ((*(long *)(lVar5 + 0x38) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10), lVar9 == 0)) goto code_r0x0153c1e0;
  lVar9 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar9,0);
  if (_UNK_033f8140 <= *(float *)(lVar5 + 0x18)) {
code_r0x0153c110:
    *(undefined4 *)(lVar5 + 0x1d8) = 0;
  }
  else {
    if ((*(long *)(lVar5 + 0x60) == 0) || (plVar8 == (long *)0x0)) goto code_r0x0153c1e0;
    fVar21 = *(float *)(lVar5 + 0x1dc) - *(float *)(lVar9 + 0x13c);
    fVar23 = *(float *)(lVar5 + 0x1e0) - *(float *)(lVar9 + 0x140);
    fVar11 = *(float *)(lVar5 + 0x1e4) - *(float *)(lVar9 + 0x144);
    fVar12 = *(float *)(*(long *)(lVar5 + 0x60) + 0x74);
    lVar9 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto code_r0x0153c0dc;
        }
        piVar10 = piVar10 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x0153c0dc:
    fVar15 = (float)(*(code *)*puVar7)(plVar8,puVar7[1]);
    if (fVar12 * fVar15 <= fVar11 * fVar11 + fVar21 * fVar21 + fVar23 * fVar23)
    goto code_r0x0153c110;
    if ((*(long *)(lVar5 + 0x38) == 0) ||
       (lVar9 = *(long *)(*(long *)(lVar5 + 0x38) + 0x20), lVar9 == 0)) goto code_r0x0153c1e0;
    uVar6 = /*Atlas.Gameplay.Kart.KartPhysicsInput$$get_IsFrozen*/ func_0x015dac7c(lVar9,0);
    if ((uVar6 & 1) != 0) goto code_r0x0153c110;
    fVar21 = *(float *)(lVar5 + 0x1d8);
    lVar9 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto code_r0x0153c1a8;
        }
        piVar10 = piVar10 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x0153c1a8:
    fVar23 = (float)(*(code *)*puVar7)(plVar8,puVar7[1]);
    fVar21 = fVar21 + fVar23;
    *(float *)(lVar5 + 0x1d8) = fVar21;
    if (*(long *)(lVar5 + 0x60) == 0) goto code_r0x0153c1e0;
    if (*(float *)(*(long *)(lVar5 + 0x60) + 0x70) <= fVar21) {
      *(undefined4 *)(lVar5 + 0x1d8) = 0;
      /*Atlas.Gameplay.Kart.BattleKartAI$$TryGetPath*/ func_0x0153c38c(lVar5);
    }
  }
  if ((*(long *)(lVar5 + 0x38) != 0) &&
     (lVar9 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10), lVar9 != 0)) {
    lVar9 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar9,0);
    uVar14 = *(undefined4 *)(lVar9 + 0x144);
    *(undefined8 *)(lVar5 + 0x1dc) = *(undefined8 *)(lVar9 + 0x13c);
    *(undefined4 *)(lVar5 + 0x1e4) = uVar14;
    return;
  }
code_r0x0153c1e0:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x153bfd8 | Atlas.Gameplay.Kart.BattleKartAI.UpdateStuckAI
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_BattleKartAI__UpdateStuckAI(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((bRam0000000003eb4f0c & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4f0c = 1;
  }
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar1 == 0)) goto LAB_0153c1e0;
  lVar1 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar1,0);
  if (_UNK_033f8140 <= *(float *)(param_1 + 0x18)) {
LAB_0153c110:
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  else {
    if ((*(long *)(param_1 + 0x60) == 0) || (param_2 == (long *)0x0)) goto LAB_0153c1e0;
    fVar5 = *(float *)(param_1 + 0x1dc) - *(float *)(lVar1 + 0x13c);
    fVar8 = *(float *)(param_1 + 0x1e0) - *(float *)(lVar1 + 0x140);
    fVar9 = *(float *)(param_1 + 0x1e4) - *(float *)(lVar1 + 0x144);
    fVar10 = *(float *)(*(long *)(param_1 + 0x60) + 0x74);
    lVar1 = *param_2;
    uVar3 = (ulong)*(ushort *)(lVar1 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0153c0dc;
        }
        piVar4 = piVar4 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_0153c0dc:
    fVar6 = (float)(*(code *)*puVar2)(param_2,puVar2[1]);
    if (fVar10 * fVar6 <= fVar9 * fVar9 + fVar5 * fVar5 + fVar8 * fVar8) goto LAB_0153c110;
    if ((*(long *)(param_1 + 0x38) == 0) ||
       (lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x20), lVar1 == 0)) goto LAB_0153c1e0;
    uVar3 = /*Atlas.Gameplay.Kart.KartPhysicsInput$$get_IsFrozen*/ func_0x015dac7c(lVar1,0);
    if ((uVar3 & 1) != 0) goto LAB_0153c110;
    fVar5 = *(float *)(param_1 + 0x1d8);
    lVar1 = *param_2;
    uVar3 = (ulong)*(ushort *)(lVar1 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
          goto code_r0x0153c1a8;
        }
        piVar4 = piVar4 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x0153c1a8:
    fVar8 = (float)(*(code *)*puVar2)(param_2,puVar2[1]);
    fVar5 = fVar5 + fVar8;
    *(float *)(param_1 + 0x1d8) = fVar5;
    if (*(long *)(param_1 + 0x60) == 0) goto LAB_0153c1e0;
    if (*(float *)(*(long *)(param_1 + 0x60) + 0x70) <= fVar5) {
      *(undefined4 *)(param_1 + 0x1d8) = 0;
      /*Atlas.Gameplay.Kart.BattleKartAI$$TryGetPath*/ func_0x0153c38c(param_1);
    }
  }
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar1 != 0)) {
    lVar1 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar1,0);
    uVar7 = *(undefined4 *)(lVar1 + 0x144);
    *(undefined8 *)(param_1 + 0x1dc) = *(undefined8 *)(lVar1 + 0x13c);
    *(undefined4 *)(param_1 + 0x1e4) = uVar7;
    return;
  }
LAB_0153c1e0:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x153c1e4 | Atlas.Gameplay.Kart.BattleKartAI.LateUpdate
// ============================================================

void Atlas_Gameplay_Kart_BattleKartAI__LateUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x153c1e8 | Atlas.Gameplay.Kart.BattleKartAI.UpdateTimers
// ============================================================

/* WARNING: Removing unreachable block (ram,0x015bab88) */
/* WARNING: Removing unreachable block (ram,0x015bab98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_BattleKartAI__UpdateTimers
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,long *param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined4 *puVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 uVar17;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined *puVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar35 [16];
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  int aiStack_178 [28];
  int iStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined1 *puVar4;
  
  if ((bRam0000000003eb4f0b & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4f0b = 1;
  }
  lVar13 = 0x3eb4000;
  if (param_5 == (long *)0x0) {
LAB_0153c388:
    puVar18 = &Atlas_Gameplay_Kart_BattleKartAI__TryGetPath;
    plVar12 = (long *)func_0x00f78af4();
    puVar1 = &stack0xffffffffffffffc0;
    puVar3 = (undefined1 *)register0x00000008;
    while( true ) {
      plVar9 = plVar12;
      puVar4 = puVar1;
      uVar27 = (undefined4)param_3;
      uVar6 = (undefined4)param_2;
      *(undefined8 *)(puVar4 + -0x60) = unaff_d11;
      *(ulong *)(puVar4 + -0x58) = unaff_d10;
      *(ulong *)(puVar4 + -0x50) = unaff_d9;
      *(ulong *)(puVar4 + -0x48) = unaff_d8;
      *(long *)(puVar4 + -0x40) = unaff_x24;
      *(long *)(puVar4 + -0x38) = unaff_x23;
      *(long *)(puVar4 + -0x30) = unaff_x22;
      *(long *)(puVar4 + -0x28) = lVar13;
      *(ulong *)(puVar4 + -0x20) = param_4;
      *(long **)(puVar4 + -0x18) = param_5;
      *(undefined1 **)(puVar4 + -0x10) = puVar3 + -0x10;
      *(undefined **)(puVar4 + -8) = puVar18;
      if ((bRam0000000003eb4f16 & 1) == 0) {
        func_0x00f78a20(0x3d57f78);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4f16 = 1;
      }
      if (plVar9[7] == 0) {
        return;
      }
      lVar13 = *(long *)(plVar9[7] + 0x10);
      if (lVar13 == 0) break;
      lVar13 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar13,0);
      if (*(char *)(lVar13 + 0x3c) == '\0') {
        return;
      }
      lVar13 = plVar9[0x13];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar15 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar13,0,0);
      if ((uVar15 & 1) == 0) {
        fVar32 = *(float *)((long)plVar9 + 0x7c);
      }
      else {
        if (plVar9[0x13] == 0) break;
        /*UnityEngine.Transform$$get_position*/ func_0x03274f20(plVar9[0x13],0);
        fVar32 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        *(float *)((long)plVar9 + 0x7c) = fVar32;
        *(undefined4 *)(plVar9 + 0x10) = uVar6;
        *(undefined4 *)((long)plVar9 + 0x84) = uVar27;
      }
      if (ABS(fVar32) == INFINITY) {
        return;
      }
      if ((plVar9[7] == 0) || (lVar13 = *(long *)(plVar9[7] + 0x10), lVar13 == 0)) break;
      lVar13 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar13,0);
      param_2 = (ulong)*(uint *)(lVar13 + 0x140);
      param_3 = (ulong)*(uint *)(lVar13 + 0x144);
      uVar20 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar13 + 0x13c),0);
      unaff_d8 = (ulong)uVar20;
      unaff_d9 = param_2 & 0xffffffff;
      unaff_d10 = param_3 & 0xffffffff;
      uVar27 = (undefined4)plVar9[0x10];
      uVar28 = *(undefined4 *)((long)plVar9 + 0x84);
      uVar6 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)((long)plVar9 + 0x7c),uVar27,uVar28,0);
      param_2 = param_2 & 0xffffffff;
      param_3 = param_3 & 0xffffffff;
      /*UnityEngine.AI.NavMesh$$CalculatePath*/ func_0x032070a8(uVar20,param_2,param_3,uVar6,uVar27,uVar28,0xffffffff,plVar9[0xe],0);
      lVar13 = plVar9[0xc];
      if ((int)plVar9[0x17] == 2) {
        if (lVar13 == 0) break;
        puVar14 = (undefined4 *)(lVar13 + 100);
      }
      else {
        if (lVar13 == 0) break;
        puVar14 = (undefined4 *)(lVar13 + 0x60);
      }
      *(undefined4 *)(plVar9 + 0x15) = *puVar14;
      *(undefined4 *)(plVar9 + 0x16) = 0;
      if (plVar9[0xe] == 0) {
        return;
      }
      lVar13 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(plVar9[0xe],0);
      if (lVar13 == 0) break;
      if (*(long *)(lVar13 + 0x18) == 0) {
        return;
      }
      if (plVar9[0xe] == 0) break;
      iVar5 = /*UnityEngine.AI.NavMeshPath$$get_status*/ func_0x03207ad8(plVar9[0xe],0);
      if (iVar5 != 0) {
        return;
      }
      if ((plVar9[0xe] == 0) || (lVar13 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(plVar9[0xe],0), lVar13 == 0)) break;
      *(int *)(plVar9 + 0xf) = (int)*(undefined8 *)(lVar13 + 0x18);
      lVar8 = plVar9[0xe];
      if (lVar8 == 0) break;
      param_4 = 0;
      lVar13 = 0;
      unaff_x22 = 0;
      while( true ) {
        lVar8 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(lVar8,0);
        if (lVar8 == 0) goto code_r0x0153c5f4;
        if ((long)*(int *)(lVar8 + 0x18) <= (long)param_4) goto code_r0x0153c5f8;
        if ((plVar9[0xe] == 0) || (lVar8 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(plVar9[0xe],0), lVar8 == 0))
        goto code_r0x0153c5f4;
        if (*(uint *)(lVar8 + 0x18) <= param_4) break;
        unaff_x23 = unaff_x22 + 0xc;
        unaff_x24 = lVar13 + 0x10;
        param_4 = param_4 + 1;
        lVar8 = lVar8 + unaff_x22;
        param_2 = (ulong)*(uint *)(lVar8 + 0x24);
        param_3 = (ulong)*(uint *)(lVar8 + 0x28);
        uVar6 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(*(undefined4 *)(lVar8 + 0x20),0);
        puVar14 = (undefined4 *)(plVar9[0x2d] + lVar13);
        *puVar14 = uVar6;
        puVar14[1] = (int)param_2;
        puVar14[2] = (int)param_3;
        puVar14[3] = 0;
        lVar8 = plVar9[0xe];
        lVar13 = unaff_x24;
        unaff_x22 = unaff_x23;
        if (lVar8 == 0) goto code_r0x0153c5f4;
      }
      uVar17 = func_0x00f78b24();
      puVar18 = &Atlas_Gameplay_Kart_BattleKartAI__OnResetPosition;
      plVar12 = (long *)func_0x00f78ac0(uVar17,0);
      puVar1 = puVar4 + -0xb0;
      param_5 = plVar9;
      puVar3 = puVar4;
    }
code_r0x0153c5f4:
    func_0x00f78af4();
code_r0x0153c5f8:
    plVar9[0x31] = *(long *)((long)plVar9 + 0x7c);
    *(undefined4 *)(plVar9 + 0x32) = *(undefined4 *)((long)plVar9 + 0x84);
    *(undefined4 *)((long)plVar9 + 0x194) = 0;
    *(int *)(plVar9 + 0x35) = (int)plVar9[0xf];
    *(undefined4 *)((long)plVar9 + 0x1ac) = *(undefined4 *)((long)plVar9 + 0xbc);
    lVar13 = plVar9[0x35];
    lVar10 = plVar9[0x38];
    lVar8 = plVar9[0x37];
    *(long *)(puVar4 + -0x88) = plVar9[0x36];
    *(long *)(puVar4 + -0x90) = lVar13;
    *(long *)(puVar4 + -0x78) = lVar10;
    *(long *)(puVar4 + -0x80) = lVar8;
    *(long *)(puVar4 + -0x70) = plVar9[0x39];
    lVar10 = plVar9[0x31];
    lVar8 = plVar9[0x34];
    lVar13 = plVar9[0x33];
    *(long *)(puVar4 + -0xa8) = plVar9[0x32];
    *(long *)(puVar4 + -0xb0) = lVar10;
    *(long *)(puVar4 + -0x98) = lVar8;
    *(long *)(puVar4 + -0xa0) = lVar13;
    /*Unity.Jobs.IJobExtensions$$Run<BattleAIProcessPathJob>*/ func_0x0185e4a0(puVar4 + -0xb0,uRam0000000003d57f78);
    *(undefined4 *)(plVar9 + 0xf) = *(undefined4 *)plVar9[0x38];
    return;
  }
  fVar32 = *(float *)(param_4 + 0xa8);
  unaff_d8 = (ulong)(uint)fVar32;
  lVar13 = *param_5;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
        puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_0153c280;
      }
      piVar16 = piVar16 + 4;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  puVar7 = (undefined8 *)func_0x00fac1f0(param_5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_0153c280:
  fVar19 = (float)(*(code *)*puVar7)(param_5,puVar7[1]);
  fVar32 = fVar32 - fVar19;
  param_2 = 0xbf800000;
  fVar19 = -1.0;
  if (0.0 <= fVar32) {
    fVar19 = fVar32;
  }
  *(float *)(param_4 + 0xa8) = fVar19;
  lVar13 = 0x3d22618;
  if ((*(long *)(param_4 + 0x38) == 0) ||
     (lVar8 = *(long *)(*(long *)(param_4 + 0x38) + 0x10), lVar8 == 0)) goto LAB_0153c388;
  lVar13 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar8,0);
  if (*(char *)(lVar13 + 0x3d) == '\0') {
code_r0x0153c2e0:
    if (_UNK_033f8140 < *(float *)(param_4 + 0xb4)) {
      *(undefined4 *)(param_4 + 0xa8) = 0xbf800000;
    }
    *(undefined4 *)(param_4 + 0xb4) = 0;
  }
  else {
    lVar13 = 0x3d22618;
    if ((*(long *)(param_4 + 0x38) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_4 + 0x38) + 0x10), lVar8 == 0)) goto LAB_0153c388;
    lVar13 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar8,0);
    if (*(char *)(lVar13 + 0x56) != '\0') goto code_r0x0153c2e0;
    fVar32 = *(float *)(param_4 + 0xb4);
    lVar13 = *param_5;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto code_r0x0153c354;
        }
        piVar16 = piVar16 + 4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(param_5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x0153c354:
    fVar19 = (float)(*(code *)*puVar7)(param_5,puVar7[1]);
    *(float *)(param_4 + 0xb4) = fVar32 + fVar19;
  }
  lVar13 = 0;
  if ((bRam0000000003eb52b0 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb52b0 = 1;
  }
  if (param_5 != (long *)0x0) {
    fVar32 = *(float *)(param_4 + 0x40);
    lVar13 = *param_5;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto code_r0x015b9fc8;
        }
        piVar16 = piVar16 + 4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(param_5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015b9fc8:
    fVar19 = (float)(*(code *)*puVar7)(param_5,puVar7[1]);
    fVar32 = fVar32 - fVar19;
    fVar19 = -1.0;
    if (0.0 <= fVar32) {
      fVar19 = fVar32;
    }
    *(float *)(param_4 + 0x40) = fVar19;
    return;
  }
  auVar35 = func_0x00f78af4();
  lVar8 = auVar35._0_8_;
  if ((bRam0000000003eb52b1 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d22c68);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb52b1 = 1;
  }
  uStack_100 = 0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  iStack_108 = 0;
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar17 = *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xb8) + 0x10);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar17,0);
  if (((0.0 < *(float *)(lVar8 + 0x40)) || (*(long *)(lVar8 + 0x38) == 0)) ||
     (lVar10 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38), lVar10 == 0)) {
    aiStack_178[0] = 0x479;
    iStack_108 = 1;
    goto code_r0x015ba44c;
  }
  uVar15 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar10,0);
  if ((((uVar15 & 1) == 0) || (*(long *)(lVar8 + 0x30) == 0)) ||
     (*(long *)(*(long *)(lVar8 + 0x30) + 0x130) == 0)) goto code_r0x015baa94;
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x00f78af4();
code_r0x015baba4:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x15baba8);
    (*pcVar2)();
  }
  lVar10 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if (lVar10 == 0) {
    func_0x00f78af4();
    goto code_r0x015baba4;
  }
  lVar10 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar10,0);
  fVar19 = *(float *)(lVar10 + 0x140);
  fVar29 = *(float *)(lVar10 + 0x144);
  fVar32 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar10 + 0x13c),0);
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x00f78af4();
    goto code_r0x015baba4;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015baba4;
  }
  lVar11 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CurHeldUsable*/ func_0x015e1b30(lVar11,0);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015baba4;
  }
  plVar12 = *(long **)(lVar11 + 0x30);
  if (plVar12 == (long *)0x0) {
    func_0x00f78af4();
    goto code_r0x015baba4;
  }
  uVar6 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
  switch(uVar6) {
  case 0:
    if (lVar13 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar33 = *(float *)(lVar13 + 0x10);
    iVar5 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
    fVar33 = fVar33 * 100.0;
    fVar34 = -fVar33;
    if (fVar33 != INFINITY) {
      fVar34 = fVar33;
    }
    if ((int)fVar34 <= iVar5) {
      uVar6 = *(undefined4 *)(lVar13 + 0x1c);
      break;
    }
    if (*(long *)(lVar8 + 0x30) == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    lVar11 = *(long *)(*(long *)(lVar8 + 0x30) + 0x130);
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar34 = *(float *)(lVar13 + 0x18);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_190,lVar11,uRam0000000003d3ae20);
    uStack_f8 = uStack_188;
    uStack_100 = uStack_190;
    lStack_f0 = lStack_180;
    do {
      do {
        do {
          uVar15 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_100,uRam0000000003d328d0);
          if ((uVar15 & 1) == 0) goto code_r0x015ba3dc;
        } while (lStack_f0 == *(long *)(lVar8 + 0x38));
        if (lStack_f0 == 0) {
          func_0x00f78af4();
          goto code_r0x015baba4;
        }
        if (*(long *)(lStack_f0 + 0x10) == 0) {
          func_0x00f78af4();
          goto code_r0x015baba4;
        }
        lVar11 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(*(long *)(lStack_f0 + 0x10),0);
        fVar33 = *(float *)(lVar11 + 0x140);
        fVar31 = *(float *)(lVar11 + 0x144);
        fVar21 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar11 + 0x13c),0);
        fVar24 = fVar33;
        fVar25 = fVar31;
        fVar22 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        fVar26 = fVar19;
        fVar30 = fVar29;
        fVar23 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(fVar32,0);
      } while (fVar34 * fVar34 <
               (fVar30 - fVar25) * (fVar30 - fVar25) +
               (fVar23 - fVar22) * (fVar23 - fVar22) + (fVar26 - fVar24) * (fVar26 - fVar24));
      fVar33 = fVar33 - fVar19;
      fVar31 = fVar31 - fVar29;
      fVar24 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(fVar21 - fVar32,0);
      if (cRam0000000003ca34fc == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca34fc = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar25 = fVar31 * fVar31 + fVar24 * fVar24 + fVar33 * fVar33;
      fVar26 = 1.0 / SQRT(fVar25);
      fVar24 = fVar24 * fVar26;
      fVar33 = fVar33 * fVar26;
      fVar31 = fVar31 * fVar26;
      if (fVar25 <= 1.1754944e-38) {
        fVar31 = 0.0;
        fVar33 = 0.0;
        fVar24 = 0.0;
      }
    } while (fVar31 * *(float *)(lVar10 + 0x120) +
             fVar24 * *(float *)(lVar10 + 0x118) + fVar33 * *(float *)(lVar10 + 0x11c) <=
             *(float *)(lVar13 + 0x70));
    if (((*(long *)(lVar8 + 0x38) != 0) &&
        (lVar10 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38), lVar10 != 0)) &&
       (iVar5 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar10,0), iVar5 != 0)) {
      *(undefined1 *)(lVar8 + 0x1e) = 1;
    }
code_r0x015ba3dc:
    aiStack_178[iStack_108] = 0x1c1;
    iStack_108 = iStack_108 + 1;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_100,uRam0000000003d328c8);
    if ((iStack_108 != 0) && (aiStack_178[iStack_108 + -1] == 0x1c1)) {
      iStack_108 = iStack_108 + -1;
    }
    uVar6 = *(undefined4 *)(lVar13 + 0x1c);
code_r0x015ba980:
    *(undefined4 *)(lVar8 + 0x40) = uVar6;
    aiStack_178[iStack_108] = 0x479;
    goto code_r0x015baaa4;
  case 1:
    if (lVar13 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar33 = *(float *)(lVar13 + 0x20);
    iVar5 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
    fVar33 = fVar33 * 100.0;
    fVar34 = -fVar33;
    if (fVar33 != INFINITY) {
      fVar34 = fVar33;
    }
    if (iVar5 < (int)fVar34) {
      if (*(long *)(lVar8 + 0x30) == 0) {
        func_0x00f78af4();
        goto code_r0x015baba4;
      }
      lVar11 = *(long *)(*(long *)(lVar8 + 0x30) + 0x130);
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x015baba4;
      }
      lVar11 = *(long *)(lVar11 + 0x10);
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x015baba4;
      }
      fVar34 = *(float *)(lVar13 + 0x2c);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_190,lVar11,uRam0000000003d3ae20);
      uStack_f8 = uStack_188;
      uStack_100 = uStack_190;
      lStack_f0 = lStack_180;
      do {
        do {
          do {
            uVar15 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_100,uRam0000000003d328d0);
            if ((uVar15 & 1) == 0) goto code_r0x015ba920;
          } while (lStack_f0 == *(long *)(lVar8 + 0x38));
          if (lStack_f0 == 0) {
            func_0x00f78af4();
            goto code_r0x015baba4;
          }
          if (*(long *)(lStack_f0 + 0x10) == 0) {
            func_0x00f78af4();
            goto code_r0x015baba4;
          }
          lVar11 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(*(long *)(lStack_f0 + 0x10),0);
          fVar33 = *(float *)(lVar11 + 0x140);
          fVar31 = *(float *)(lVar11 + 0x144);
          fVar21 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar11 + 0x13c),0);
          fVar24 = fVar33;
          fVar25 = fVar31;
          fVar22 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
          fVar26 = fVar19;
          fVar30 = fVar29;
          fVar23 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(fVar32,0);
        } while (fVar34 * fVar34 <
                 (fVar30 - fVar25) * (fVar30 - fVar25) +
                 (fVar23 - fVar22) * (fVar23 - fVar22) + (fVar26 - fVar24) * (fVar26 - fVar24));
        fVar33 = fVar33 - fVar19;
        fVar31 = fVar31 - fVar29;
        fVar24 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(fVar21 - fVar32,0);
        if (cRam0000000003ca34fc == '\0') {
          func_0x00f78a20(0x3d232c0);
          cRam0000000003ca34fc = '\x01';
        }
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        fVar25 = fVar31 * fVar31 + fVar24 * fVar24 + fVar33 * fVar33;
        fVar26 = 1.0 / SQRT(fVar25);
        fVar24 = fVar24 * fVar26;
        fVar33 = fVar33 * fVar26;
        fVar31 = fVar31 * fVar26;
        if (fVar25 <= 1.1754944e-38) {
          fVar31 = 0.0;
          fVar33 = 0.0;
          fVar24 = 0.0;
        }
      } while (fVar31 * *(float *)(lVar10 + 0x120) +
               fVar24 * *(float *)(lVar10 + 0x118) + fVar33 * *(float *)(lVar10 + 0x11c) <=
               *(float *)(lVar13 + 0x74));
      if (((*(long *)(lVar8 + 0x38) != 0) &&
          (lVar10 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38), lVar10 != 0)) &&
         (iVar5 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar10,0), iVar5 != 0)) {
        *(undefined1 *)(lVar8 + 0x1e) = 1;
      }
code_r0x015ba920:
      aiStack_178[iStack_108] = 0x38d;
      iStack_108 = iStack_108 + 1;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_100,uRam0000000003d328c8);
      if ((iStack_108 != 0) && (aiStack_178[iStack_108 + -1] == 0x38d)) {
        iStack_108 = iStack_108 + -1;
      }
      uVar6 = *(undefined4 *)(lVar13 + 0x24);
      goto code_r0x015ba980;
    }
    uVar6 = *(undefined4 *)(lVar13 + 0x24);
    break;
  case 2:
    if (lVar13 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar19 = *(float *)(lVar13 + 0x30);
    iVar5 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
    fVar19 = fVar19 * 100.0;
    fVar32 = -fVar19;
    if (fVar19 != INFINITY) {
      fVar32 = fVar19;
    }
    if (((iVar5 < (int)fVar32) && (*(long *)(lVar8 + 0x38) != 0)) &&
       ((lVar10 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38), lVar10 != 0 &&
        (iVar5 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar10,0), iVar5 != 0)))) {
      *(undefined1 *)(lVar8 + 0x1e) = 1;
    }
    uVar6 = *(undefined4 *)(lVar13 + 0x34);
    break;
  case 3:
    if (lVar13 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar19 = *(float *)(lVar13 + 0x38);
    iVar5 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
    fVar19 = fVar19 * 100.0;
    fVar32 = -fVar19;
    if (fVar19 != INFINITY) {
      fVar32 = fVar19;
    }
    if ((((iVar5 < (int)fVar32) && (*(long *)(lVar8 + 0x38) != 0)) &&
        (lVar10 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38), lVar10 != 0)) &&
       (iVar5 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar10,0), iVar5 != 0)) {
      *(undefined1 *)(lVar8 + 0x1e) = 1;
    }
    uVar6 = *(undefined4 *)(lVar13 + 0x3c);
    break;
  case 4:
    if (*(long *)(lVar8 + 0x38) == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    lVar10 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    lVar10 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar10,0);
    if (lVar13 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar32 = 0.0;
    if (*(float *)(lVar13 + 0x78) <
        (float)((ulong)*(undefined8 *)(lVar10 + 0x11c) >> 0x20) *
        (float)((ulong)*(undefined8 *)(lVar8 + 0x54) >> 0x20) +
        *(float *)(lVar10 + 0x118) * *(float *)(lVar8 + 0x50) +
        (float)*(undefined8 *)(lVar10 + 0x11c) * (float)*(undefined8 *)(lVar8 + 0x54)) {
      if (auVar35._8_8_ == 0) {
        func_0x00f78af4();
        goto code_r0x015baba4;
      }
      fVar32 = *(float *)(lVar8 + 0x48);
      fVar19 = (float)func_0x0001bd10(0,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,auVar35._8_8_);
      fVar32 = fVar32 + fVar19;
    }
    *(float *)(lVar8 + 0x48) = fVar32;
    if (*(float *)(lVar13 + 0x4c) <= fVar32) {
      fVar19 = *(float *)(lVar13 + 0x40);
      iVar5 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
      fVar19 = fVar19 * 100.0;
      fVar32 = -fVar19;
      if (fVar19 != INFINITY) {
        fVar32 = fVar19;
      }
      if ((int)fVar32 <= iVar5) {
        uVar6 = *(undefined4 *)(lVar13 + 0x44);
        break;
      }
      if (((*(long *)(lVar8 + 0x38) != 0) &&
          (lVar10 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38), lVar10 != 0)) &&
         (iVar5 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar10,0), iVar5 != 0)) {
        *(undefined1 *)(lVar8 + 0x1e) = 1;
      }
      *(undefined4 *)(lVar8 + 0x40) = *(undefined4 *)(lVar13 + 0x44);
      *(undefined4 *)(lVar8 + 0x48) = 0;
    }
    goto code_r0x015baa94;
  case 5:
    if (lVar13 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar19 = *(float *)(lVar13 + 0x50);
    iVar5 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
    fVar19 = fVar19 * 100.0;
    fVar32 = -fVar19;
    if (fVar19 != INFINITY) {
      fVar32 = fVar19;
    }
    if (((iVar5 < (int)fVar32) && (*(long *)(lVar8 + 0x38) != 0)) &&
       ((lVar10 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38), lVar10 != 0 &&
        (iVar5 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar10,0), iVar5 != 0)))) {
      *(undefined1 *)(lVar8 + 0x1e) = 1;
    }
    uVar6 = *(undefined4 *)(lVar13 + 0x54);
    break;
  case 6:
    if (lVar13 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar19 = *(float *)(lVar13 + 0x58);
    iVar5 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
    fVar19 = fVar19 * 100.0;
    fVar32 = -fVar19;
    if (fVar19 != INFINITY) {
      fVar32 = fVar19;
    }
    if ((((iVar5 < (int)fVar32) && (*(long *)(lVar8 + 0x38) != 0)) &&
        (lVar10 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38), lVar10 != 0)) &&
       (iVar5 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar10,0), iVar5 != 0)) {
      *(undefined1 *)(lVar8 + 0x1e) = 1;
    }
    uVar6 = *(undefined4 *)(lVar13 + 0x5c);
    break;
  case 7:
    if (lVar13 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar19 = *(float *)(lVar13 + 0x60);
    iVar5 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
    fVar19 = fVar19 * 100.0;
    fVar32 = -fVar19;
    if (fVar19 != INFINITY) {
      fVar32 = fVar19;
    }
    if (((iVar5 < (int)fVar32) && (*(long *)(lVar8 + 0x38) != 0)) &&
       ((lVar10 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38), lVar10 != 0 &&
        (iVar5 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar10,0), iVar5 != 0)))) {
      *(undefined1 *)(lVar8 + 0x1e) = 1;
    }
    uVar6 = *(undefined4 *)(lVar13 + 100);
    break;
  default:
    goto code_r0x015baa94;
  }
  *(undefined4 *)(lVar8 + 0x40) = uVar6;
code_r0x015baa94:
  aiStack_178[iStack_108] = 0x479;
code_r0x015baaa4:
  iStack_108 = iStack_108 + 1;
code_r0x015ba44c:
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar17,0);
  return;
}



// ============================================================
// RVA: 0x153c38c | Atlas.Gameplay.Kart.BattleKartAI.TryGetPath
// ============================================================

void Atlas_Gameplay_Kart_BattleKartAI__TryGetPath
               (undefined1 param_1 [16],ulong param_2,uint param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar6;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float fVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  undefined8 unaff_d11;
  
  while( true ) {
    lVar2 = param_4;
    uVar9 = (undefined4)param_2;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_d8;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if ((bRam0000000003eb4f16 & 1) == 0) {
      func_0x00f78a20(0x3d57f78);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4f16 = 1;
    }
    if (*(long *)(lVar2 + 0x38) == 0) {
      return;
    }
    lVar3 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if (lVar3 == 0) break;
    lVar3 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar3,0);
    if (*(char *)(lVar3 + 0x3c) == '\0') {
      return;
    }
    uVar6 = *(undefined8 *)(lVar2 + 0x98);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
    if ((uVar4 & 1) == 0) {
      fVar7 = *(float *)(lVar2 + 0x7c);
    }
    else {
      if (*(long *)(lVar2 + 0x98) == 0) break;
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar2 + 0x98),0);
      fVar7 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
      *(float *)(lVar2 + 0x7c) = fVar7;
      *(undefined4 *)(lVar2 + 0x80) = uVar9;
      *(uint *)(lVar2 + 0x84) = param_3;
    }
    if (ABS(fVar7) == INFINITY) {
      return;
    }
    if ((*(long *)(lVar2 + 0x38) == 0) ||
       (lVar3 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10), lVar3 == 0)) break;
    lVar3 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar3,0);
    param_2 = (ulong)*(uint *)(lVar3 + 0x140);
    param_3 = *(uint *)(lVar3 + 0x144);
    uVar8 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar3 + 0x13c),0);
    unaff_d8 = (ulong)uVar8;
    unaff_d9 = param_2 & 0xffffffff;
    unaff_d10 = (ulong)param_3;
    uVar11 = *(undefined4 *)(lVar2 + 0x80);
    uVar13 = *(undefined4 *)(lVar2 + 0x84);
    uVar9 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar2 + 0x7c),uVar11,uVar13,0);
    param_2 = param_2 & 0xffffffff;
    /*UnityEngine.AI.NavMesh$$CalculatePath*/ func_0x032070a8(uVar8,param_2,param_3,uVar9,uVar11,uVar13,0xffffffff,
                    *(undefined8 *)(lVar2 + 0x70),0);
    lVar3 = *(long *)(lVar2 + 0x60);
    if (*(int *)(lVar2 + 0xb8) == 2) {
      if (lVar3 == 0) break;
      puVar5 = (undefined4 *)(lVar3 + 100);
    }
    else {
      if (lVar3 == 0) break;
      puVar5 = (undefined4 *)(lVar3 + 0x60);
    }
    *(undefined4 *)(lVar2 + 0xa8) = *puVar5;
    *(undefined4 *)(lVar2 + 0xb0) = 0;
    if (*(long *)(lVar2 + 0x70) == 0) {
      return;
    }
    lVar3 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(*(long *)(lVar2 + 0x70),0);
    if (lVar3 == 0) break;
    if (*(long *)(lVar3 + 0x18) == 0) {
      return;
    }
    if (*(long *)(lVar2 + 0x70) == 0) break;
    iVar1 = /*UnityEngine.AI.NavMeshPath$$get_status*/ func_0x03207ad8(*(long *)(lVar2 + 0x70),0);
    if (iVar1 != 0) {
      return;
    }
    if ((*(long *)(lVar2 + 0x70) == 0) ||
       (lVar3 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(*(long *)(lVar2 + 0x70),0), lVar3 == 0)) break;
    *(int *)(lVar2 + 0x78) = (int)*(undefined8 *)(lVar3 + 0x18);
    lVar3 = *(long *)(lVar2 + 0x70);
    if (lVar3 == 0) break;
    unaff_x20 = 0;
    unaff_x21 = 0;
    unaff_x22 = 0;
    while( true ) {
      lVar3 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(lVar3,0);
      if (lVar3 == 0) goto LAB_0153c5f4;
      if ((long)*(int *)(lVar3 + 0x18) <= (long)unaff_x20) goto code_r0x0153c5f8;
      if ((*(long *)(lVar2 + 0x70) == 0) ||
         (lVar3 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(*(long *)(lVar2 + 0x70),0), lVar3 == 0)) goto LAB_0153c5f4;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x20) break;
      unaff_x23 = unaff_x22 + 0xc;
      unaff_x24 = unaff_x21 + 0x10;
      unaff_x20 = unaff_x20 + 1;
      lVar3 = lVar3 + unaff_x22;
      param_2 = (ulong)*(uint *)(lVar3 + 0x24);
      param_3 = *(uint *)(lVar3 + 0x28);
      uVar9 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(*(undefined4 *)(lVar3 + 0x20),0);
      puVar5 = (undefined4 *)(*(long *)(lVar2 + 0x168) + unaff_x21);
      *puVar5 = uVar9;
      puVar5[1] = (int)param_2;
      puVar5[2] = param_3;
      puVar5[3] = 0;
      lVar3 = *(long *)(lVar2 + 0x70);
      unaff_x21 = unaff_x24;
      unaff_x22 = unaff_x23;
      if (lVar3 == 0) goto LAB_0153c5f4;
    }
    uVar6 = func_0x00f78b24();
    unaff_x30 = &Atlas_Gameplay_Kart_BattleKartAI__OnResetPosition;
    param_4 = func_0x00f78ac0(uVar6,0);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
    unaff_x19 = lVar2;
  }
LAB_0153c5f4:
  func_0x00f78af4();
code_r0x0153c5f8:
  *(undefined8 *)(lVar2 + 0x188) = *(undefined8 *)(lVar2 + 0x7c);
  *(undefined4 *)(lVar2 + 400) = *(undefined4 *)(lVar2 + 0x84);
  *(undefined4 *)(lVar2 + 0x194) = 0;
  *(undefined4 *)(lVar2 + 0x1a8) = *(undefined4 *)(lVar2 + 0x78);
  *(undefined4 *)(lVar2 + 0x1ac) = *(undefined4 *)(lVar2 + 0xbc);
  uVar6 = *(undefined8 *)(lVar2 + 0x1a8);
  uVar12 = *(undefined8 *)(lVar2 + 0x1c0);
  uVar10 = *(undefined8 *)(lVar2 + 0x1b8);
  *(undefined8 *)((long)register0x00000008 + -0x88) = *(undefined8 *)(lVar2 + 0x1b0);
  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar6;
  *(undefined8 *)((long)register0x00000008 + -0x78) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x80) = uVar10;
  *(undefined8 *)((long)register0x00000008 + -0x70) = *(undefined8 *)(lVar2 + 0x1c8);
  uVar12 = *(undefined8 *)(lVar2 + 0x188);
  uVar10 = *(undefined8 *)(lVar2 + 0x1a0);
  uVar6 = *(undefined8 *)(lVar2 + 0x198);
  *(undefined8 *)((long)register0x00000008 + -0xa8) = *(undefined8 *)(lVar2 + 400);
  *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x98) = uVar10;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar6;
  /*Unity.Jobs.IJobExtensions$$Run<BattleAIProcessPathJob>*/ func_0x0185e4a0((undefined1 *)((long)register0x00000008 + -0xb0),uRam0000000003d57f78);
  *(undefined4 *)(lVar2 + 0x78) = **(undefined4 **)(lVar2 + 0x1c0);
  return;
}



// ============================================================
// RVA: 0x153c684 | Atlas.Gameplay.Kart.BattleKartAI.OnResetPosition
// ============================================================

void Atlas_Gameplay_Kart_BattleKartAI__OnResetPosition
               (undefined1 param_1 [16],ulong param_2,uint param_3,long param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  long unaff_x19;
  undefined8 uVar6;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  undefined8 unaff_d11;
  
  while( true ) {
    lVar4 = param_4;
    uVar9 = (undefined4)param_2;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_d8;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if ((bRam0000000003eb4f16 & 1) == 0) {
      func_0x00f78a20(0x3d57f78);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4f16 = 1;
    }
    if (*(long *)(lVar4 + 0x38) == 0) {
      return;
    }
    lVar2 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if (lVar2 == 0) break;
    lVar2 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar2,0);
    if (*(char *)(lVar2 + 0x3c) == '\0') {
      return;
    }
    uVar6 = *(undefined8 *)(lVar4 + 0x98);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
    if ((uVar3 & 1) == 0) {
      fVar7 = *(float *)(lVar4 + 0x7c);
    }
    else {
      if (*(long *)(lVar4 + 0x98) == 0) break;
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar4 + 0x98),0);
      fVar7 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
      *(float *)(lVar4 + 0x7c) = fVar7;
      *(undefined4 *)(lVar4 + 0x80) = uVar9;
      *(uint *)(lVar4 + 0x84) = param_3;
    }
    if (ABS(fVar7) == INFINITY) {
      return;
    }
    if ((*(long *)(lVar4 + 0x38) == 0) ||
       (lVar2 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10), lVar2 == 0)) break;
    lVar2 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar2,0);
    param_2 = (ulong)*(uint *)(lVar2 + 0x140);
    param_3 = *(uint *)(lVar2 + 0x144);
    uVar8 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar2 + 0x13c),0);
    unaff_d8 = (ulong)uVar8;
    unaff_d9 = param_2 & 0xffffffff;
    unaff_d10 = (ulong)param_3;
    uVar11 = *(undefined4 *)(lVar4 + 0x80);
    uVar13 = *(undefined4 *)(lVar4 + 0x84);
    uVar9 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar4 + 0x7c),uVar11,uVar13,0);
    param_2 = param_2 & 0xffffffff;
    /*UnityEngine.AI.NavMesh$$CalculatePath*/ func_0x032070a8(uVar8,param_2,param_3,uVar9,uVar11,uVar13,0xffffffff,
                    *(undefined8 *)(lVar4 + 0x70),0);
    lVar2 = *(long *)(lVar4 + 0x60);
    if (*(int *)(lVar4 + 0xb8) == 2) {
      if (lVar2 == 0) break;
      puVar5 = (undefined4 *)(lVar2 + 100);
    }
    else {
      if (lVar2 == 0) break;
      puVar5 = (undefined4 *)(lVar2 + 0x60);
    }
    *(undefined4 *)(lVar4 + 0xa8) = *puVar5;
    *(undefined4 *)(lVar4 + 0xb0) = 0;
    if (*(long *)(lVar4 + 0x70) == 0) {
      return;
    }
    lVar2 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(*(long *)(lVar4 + 0x70),0);
    if (lVar2 == 0) break;
    if (*(long *)(lVar2 + 0x18) == 0) {
      return;
    }
    if (*(long *)(lVar4 + 0x70) == 0) break;
    iVar1 = /*UnityEngine.AI.NavMeshPath$$get_status*/ func_0x03207ad8(*(long *)(lVar4 + 0x70),0);
    if (iVar1 != 0) {
      return;
    }
    if ((*(long *)(lVar4 + 0x70) == 0) ||
       (lVar2 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(*(long *)(lVar4 + 0x70),0), lVar2 == 0)) break;
    *(int *)(lVar4 + 0x78) = (int)*(undefined8 *)(lVar2 + 0x18);
    lVar2 = *(long *)(lVar4 + 0x70);
    if (lVar2 == 0) break;
    unaff_x20 = 0;
    unaff_x21 = 0;
    unaff_x22 = 0;
    while( true ) {
      lVar2 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(lVar2,0);
      if (lVar2 == 0) goto LAB_0153c5f4;
      if ((long)*(int *)(lVar2 + 0x18) <= (long)unaff_x20) goto code_r0x0153c5f8;
      if ((*(long *)(lVar4 + 0x70) == 0) ||
         (lVar2 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(*(long *)(lVar4 + 0x70),0), lVar2 == 0)) goto LAB_0153c5f4;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x20) break;
      unaff_x23 = unaff_x22 + 0xc;
      unaff_x24 = unaff_x21 + 0x10;
      unaff_x20 = unaff_x20 + 1;
      lVar2 = lVar2 + unaff_x22;
      param_2 = (ulong)*(uint *)(lVar2 + 0x24);
      param_3 = *(uint *)(lVar2 + 0x28);
      uVar9 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(*(undefined4 *)(lVar2 + 0x20),0);
      puVar5 = (undefined4 *)(*(long *)(lVar4 + 0x168) + unaff_x21);
      *puVar5 = uVar9;
      puVar5[1] = (int)param_2;
      puVar5[2] = param_3;
      puVar5[3] = 0;
      lVar2 = *(long *)(lVar4 + 0x70);
      unaff_x21 = unaff_x24;
      unaff_x22 = unaff_x23;
      if (lVar2 == 0) goto LAB_0153c5f4;
    }
    uVar6 = func_0x00f78b24();
    unaff_x30 = Atlas_Gameplay_Kart_BattleKartAI__OnResetPosition;
    param_4 = func_0x00f78ac0(uVar6,0);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
    unaff_x19 = lVar4;
  }
LAB_0153c5f4:
  func_0x00f78af4();
code_r0x0153c5f8:
  *(undefined8 *)(lVar4 + 0x188) = *(undefined8 *)(lVar4 + 0x7c);
  *(undefined4 *)(lVar4 + 400) = *(undefined4 *)(lVar4 + 0x84);
  *(undefined4 *)(lVar4 + 0x194) = 0;
  *(undefined4 *)(lVar4 + 0x1a8) = *(undefined4 *)(lVar4 + 0x78);
  *(undefined4 *)(lVar4 + 0x1ac) = *(undefined4 *)(lVar4 + 0xbc);
  uVar6 = *(undefined8 *)(lVar4 + 0x1a8);
  uVar12 = *(undefined8 *)(lVar4 + 0x1c0);
  uVar10 = *(undefined8 *)(lVar4 + 0x1b8);
  *(undefined8 *)((long)register0x00000008 + -0x88) = *(undefined8 *)(lVar4 + 0x1b0);
  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar6;
  *(undefined8 *)((long)register0x00000008 + -0x78) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x80) = uVar10;
  *(undefined8 *)((long)register0x00000008 + -0x70) = *(undefined8 *)(lVar4 + 0x1c8);
  uVar12 = *(undefined8 *)(lVar4 + 0x188);
  uVar10 = *(undefined8 *)(lVar4 + 0x1a0);
  uVar6 = *(undefined8 *)(lVar4 + 0x198);
  *(undefined8 *)((long)register0x00000008 + -0xa8) = *(undefined8 *)(lVar4 + 400);
  *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x98) = uVar10;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar6;
  /*Unity.Jobs.IJobExtensions$$Run<BattleAIProcessPathJob>*/ func_0x0185e4a0((undefined1 *)((long)register0x00000008 + -0xb0),uRam0000000003d57f78);
  *(undefined4 *)(lVar4 + 0x78) = **(undefined4 **)(lVar4 + 0x1c0);
  return;
}



// ============================================================
// RVA: 0x153c688 | Atlas.Gameplay.Kart.BattleKartAI.SetTargetPoint
// ============================================================

/* WARNING: Possible PIC construction at 0x0153cab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153caf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153cb38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153cb7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0153cb3c) */
/* WARNING: Removing unreachable block (ram,0x0153caf8) */
/* WARNING: Removing unreachable block (ram,0x0153cab4) */
/* WARNING: Removing unreachable block (ram,0x0153cabc) */
/* WARNING: Removing unreachable block (ram,0x0153cac8) */
/* WARNING: Removing unreachable block (ram,0x0153cb00) */
/* WARNING: Removing unreachable block (ram,0x0153cb0c) */
/* WARNING: Removing unreachable block (ram,0x0153cb44) */
/* WARNING: Removing unreachable block (ram,0x0153cb50) */
/* WARNING: Removing unreachable block (ram,0x0153cb54) */
/* WARNING: Removing unreachable block (ram,0x0153cb5c) */
/* WARNING: Removing unreachable block (ram,0x0153cb10) */
/* WARNING: Removing unreachable block (ram,0x0153cb18) */
/* WARNING: Removing unreachable block (ram,0x0153cacc) */
/* WARNING: Removing unreachable block (ram,0x0153cad4) */
/* WARNING: Removing unreachable block (ram,0x0153cb80) */
/* WARNING: Removing unreachable block (ram,0x0153cb88) */
/* WARNING: Removing unreachable block (ram,0x0153cb94) */
/* WARNING: Removing unreachable block (ram,0x0153cbb0) */
/* WARNING: Removing unreachable block (ram,0x0153cbb8) */
/* WARNING: Removing unreachable block (ram,0x0153cbc0) */
/* WARNING: Removing unreachable block (ram,0x0153cbd8) */
/* WARNING: Removing unreachable block (ram,0x0153cbe0) */
/* WARNING: Removing unreachable block (ram,0x0153cbf8) */
/* WARNING: Removing unreachable block (ram,0x0153cc00) */
/* WARNING: Removing unreachable block (ram,0x0153cc1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_BattleKartAI__SetTargetPoint
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,undefined8 param_5,
               long *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  code *UNRECOVERED_JUMPTABLE;
  int iVar14;
  long unaff_x19;
  int iVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long *unaff_x20;
  long *plVar18;
  long lVar19;
  ulong unaff_x21;
  long unaff_x22;
  ulong uVar20;
  ulong unaff_x23;
  long lVar21;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined8 unaff_d8;
  undefined4 uVar40;
  undefined8 unaff_d9;
  undefined4 uVar41;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined4 uVar42;
  undefined8 unaff_d15;
  undefined1 auVar43 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  
  *(undefined4 *)(param_4 + 0xac) = 0;
  *(undefined8 *)(param_4 + 0x98) = 0;
  *(undefined8 *)(param_4 + 0xa0) = 0;
  iVar7 = *(int *)(param_4 + 0xb8);
  lVar19 = param_4;
  if (iVar7 != 2) {
    if (iVar7 != 1) {
      if (iVar7 != 0) {
        return;
      }
      puVar17 = &uStack_110;
      if ((bRam0000000003eb4f11 & 1) == 0) {
        func_0x00f78a20(0x3d3ac90);
        func_0x00f78a20(0x3d3aca0);
        func_0x00f78a20(0x3d3acd0);
        func_0x00f78a20(0x3d3c490);
        func_0x00f78a20(0x3d3acd8);
        func_0x00f78a20(0x3d3c498);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4f11 = 1;
      }
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uVar16 = *(undefined8 *)(param_4 + 0x68);
      if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar16,0,0);
      if ((uVar9 & 1) == 0) {
        if (*(long *)(param_4 + 0x68) == 0) goto LAB_0153b1ec;
        uVar16 = *(undefined8 *)(*(long *)(param_4 + 0x68) + 0x18);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar16,0,0);
        if (iVar7 == 0) {
          if (*(long *)(param_4 + 0x68) == 0) {
LAB_0153b1ec:
            lVar19 = func_0x00f78af4();
            fVar23 = _UNK_033f850c;
            if (*(long *)(lVar19 + 0x60) != 0) {
              fVar26 = *(float *)(*(long *)(lVar19 + 0x60) + 0x2c);
              if (cRam0000000003ca3501 == '\0') {
                func_0x00f78a20(0x3d232c0);
                cRam0000000003ca3501 = '\x01';
              }
              if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              dVar28 = (double)_cos((double)((90.0 - fVar26) * fVar23));
              *(float *)(lVar19 + 0xc4) = (float)dVar28;
              if (*(long *)(lVar19 + 0x60) != 0) {
                fVar26 = *(float *)(*(long *)(lVar19 + 0x60) + 0x30);
                if (cRam0000000003ca3501 == '\0') {
                  func_0x00f78a20(0x3d232c0);
                  cRam0000000003ca3501 = '\x01';
                }
                if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                dVar28 = (double)_cos((double)((90.0 - fVar26) * fVar23));
                *(float *)(lVar19 + 200) = (float)dVar28;
                if (*(long *)(lVar19 + 0x60) != 0) {
                  *(undefined4 *)(lVar19 + 0xd4) = *(undefined4 *)(*(long *)(lVar19 + 0x60) + 0x34);
                  return;
                }
              }
            }
            lVar19 = func_0x00f78af4();
            if ((bRam0000000003eb4f09 & 1) == 0) {
              func_0x00f78a20(0x3d3e218);
              func_0x00f78a20(0x3d3e3e0);
              bRam0000000003eb4f09 = 1;
            }
            if (*(char *)(lVar19 + 0xec) == '\0') {
              return;
            }
            /*Unity.Collections.NativeArray<float4>$$Dispose*/ func_0x0260ab0c(lVar19 + 0x148,uRam0000000003d3e3e0);
            /*Unity.Collections.NativeArray<float4>$$Dispose*/ func_0x0260ab0c(lVar19 + 0x168,uRam0000000003d3e3e0);
            /*Unity.Collections.NativeArray<float4>$$Dispose*/ func_0x0260ab0c(lVar19 + 0x158,uRam0000000003d3e3e0);
            lVar10 = *(long *)(lVar19 + 0x178);
            if (lVar10 == 0) {
              func_0x00f78a24(0x3d23998,uRam0000000003d3e218);
              uVar12 = func_0x00f78aec();
              uVar16 = func_0x00f78a24(0x3d73ae8);
              lVar19 = 0;
              /*System.ObjectDisposedException$$.ctor*/ func_0x029596a4(uVar12,uVar16);
            }
            else {
              iVar7 = *(int *)(lVar19 + 0x184);
              if (iVar7 != 0) {
                if (1 < iVar7) {
                  /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$Free*/ func_0x03279ba4(lVar10,iVar7,0);
                  *(undefined4 *)(lVar19 + 0x184) = 0;
                }
                *(long *)(lVar19 + 0x178) = 0;
                *(undefined4 *)(lVar19 + 0x180) = 0;
                return;
              }
              func_0x00f78a24(0x3d22a38);
              uVar12 = func_0x00f78aec();
              uVar16 = func_0x00f78a24(0x3d73ae0);
              lVar19 = 0;
              /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,uVar16);
            }
            uVar16 = func_0x00f78a24(0x3d3e218);
            auVar43 = func_0x00f78ac0(uVar12,uVar16);
            uVar16 = *auVar43._0_8_;
            uVar12 = auVar43._0_8_[1];
            lVar21 = *(long *)(lVar19 + 0x18);
            uVar5 = *(ushort *)(lVar21 + 0x132);
            lVar10 = lVar21;
            if ((uVar5 & 1) == 0) {
              func_0x00fac028(lVar21);
              lVar10 = *(long *)(lVar19 + 0x18);
              uVar5 = *(ushort *)(lVar10 + 0x132);
            }
            UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar21 + 0xc0) + 0x20);
            if ((uVar5 & 1) == 0) {
              func_0x00fac028(lVar10);
            }
                    /* WARNING: Could not recover jumptable at 0x025edfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)
                      (auVar43._8_8_,uVar16,uVar12,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20))
            ;
            return;
          }
          lVar19 = *(long *)(*(long *)(param_4 + 0x68) + 0x28);
          if ((lVar19 != 0) && (0 < *(int *)(lVar19 + 0x18))) {
            if (*(long *)(param_4 + 0x1d0) != 0) {
              /*System.Collections.Generic.List<int>$$Clear*/ func_0x023dbfb4(*(long *)(param_4 + 0x1d0),uRam0000000003d3aca0);
              iVar7 = *(int *)(param_4 + 0xdc);
              iVar1 = *(int *)(param_4 + 0xe0);
              iVar2 = *(int *)(param_4 + 0xe4);
              iVar14 = *(int *)(lVar19 + 0x18);
              if (0 < iVar14) {
                iVar15 = 0;
                do {
                  if ((((iVar7 < 0) || (iVar15 != *(int *)(param_4 + 0xdc))) &&
                      ((iVar1 < 0 || (iVar15 != *(int *)(param_4 + 0xe0))))) &&
                     ((iVar2 < 0 || (iVar15 != *(int *)(param_4 + 0xe4))))) {
                    if (*(long *)(param_4 + 0x1d0) == 0) goto LAB_0153b1ec;
                    /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(*(long *)(param_4 + 0x1d0),iVar15,plRam0000000003d3ac90);
                    iVar14 = *(int *)(lVar19 + 0x18);
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < iVar14);
              }
              lVar10 = *(long *)(param_4 + 0x1d0);
              if (lVar10 != 0) {
                if (*(int *)(lVar10 + 0x18) < 1) {
                  if (-1 < iVar2) {
                    /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar10,*(undefined4 *)(param_4 + 0xe4),plRam0000000003d3ac90);
                  }
                  if (-1 < iVar7) {
                    lVar10 = *(long *)(param_4 + 0x1d0);
                    if (lVar10 == 0) goto LAB_0153b1ec;
                    if (*(int *)(lVar10 + 0x18) < 1) {
                      /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar10,*(undefined4 *)(param_4 + 0xdc),plRam0000000003d3ac90);
                    }
                  }
                  if (-1 < iVar1) {
                    lVar10 = *(long *)(param_4 + 0x1d0);
                    if (lVar10 == 0) goto LAB_0153b1ec;
                    if (*(int *)(lVar10 + 0x18) < 1) {
                      /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar10,*(undefined4 *)(param_4 + 0xe0),plRam0000000003d3ac90);
                    }
                  }
                }
                lVar10 = *(long *)(param_4 + 0x1d0);
                if (lVar10 != 0) {
                  if (*(int *)(lVar10 + 0x18) < 1) {
                    return;
                  }
                  uVar16 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(int *)(lVar10 + 0x18),0);
                  uVar8 = (uint)uVar16;
                  if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                    uVar16 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  uVar8 = *(uint *)(*(long *)(lVar10 + 0x10) + (long)(int)uVar8 * 4 + 0x20);
                  if (*(uint *)(lVar19 + 0x18) <= uVar8) {
                    uVar16 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  if (*(long *)(param_4 + 0x68) != 0) {
                    fVar23 = (float)/*BattleAIMapBoundsBehaviour$$RandomPointWithinTransform*/ func_0x01539584(uVar16,*(undefined8 *)
                                                            (*(long *)(lVar19 + 0x10) +
                                                             (long)(int)uVar8 * 8 + 0x20));
                    *(undefined4 *)(param_4 + 0xe4) = *(undefined4 *)(param_4 + 0xe8);
                    *(uint *)(param_4 + 0xe8) = uVar8;
                    goto code_r0x0153aee4;
                  }
                }
              }
            }
            goto LAB_0153b1ec;
          }
          fVar23 = (float)/*BattleAIMapBoundsBehaviour$$RandomPointWithinBounds*/ func_0x0153973c();
          uVar8 = 6;
          do {
            if ((*(long *)(param_4 + 0x38) == 0) ||
               (lVar19 = *(long *)(*(long *)(param_4 + 0x38) + 0x10), lVar19 == 0))
            goto LAB_0153b1ec;
            lVar19 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar19,0);
            fVar29 = *(float *)(lVar19 + 0x140);
            fVar34 = *(float *)(lVar19 + 0x144);
            fVar26 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar19 + 0x13c),0);
            if ((*(long *)(param_4 + 0x38) == 0) ||
               (lVar19 = *(long *)(*(long *)(param_4 + 0x38) + 0x10), lVar19 == 0))
            goto LAB_0153b1ec;
            fVar26 = fVar23 - fVar26;
            fVar29 = param_2 - fVar29;
            fVar34 = param_3 - fVar34;
            lVar19 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar19,0);
            fVar30 = *(float *)(lVar19 + 0x11c);
            fVar35 = *(float *)(lVar19 + 0x120);
            fVar25 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar19 + 0x118),0);
            fVar31 = fVar34 * fVar35;
            if ((0.0 < fVar31 + fVar26 * fVar25 + fVar29 * fVar30) &&
               (fVar31 = *(float *)(param_4 + 0xd8),
               fVar31 <= fVar34 * fVar34 + fVar26 * fVar26 + fVar29 * fVar29)) break;
            if (*(long *)(param_4 + 0x68) == 0) goto LAB_0153b1ec;
            fVar23 = (float)/*BattleAIMapBoundsBehaviour$$RandomPointWithinBounds*/ func_0x0153973c();
            uVar8 = uVar8 - 1;
            param_2 = fVar31;
            param_3 = fVar35;
          } while (1 < uVar8);
          puVar17 = &uStack_e0;
          goto code_r0x0153aee4;
        }
      }
      fVar23 = (float)/*UnityEngine.Random$$Range*/ func_0x03252854(0xc2960000,0x42960000,0);
      param_3 = (float)/*UnityEngine.Random$$Range*/ func_0x03252854(0xc2960000,0x42960000,0);
      iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,0x1e,0);
      param_2 = (float)iVar7;
      puVar17 = &uStack_b0;
code_r0x0153aee4:
      /*UnityEngine.AI.NavMesh$$SamplePosition*/ func_0x03207278(fVar23,param_2,param_3,0x42480000,puVar17,0xffffffff,0);
      /*UnityEngine.AI.NavMeshHit$$get_position*/ func_0x0320784c(puVar17,0);
      uVar24 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
      *(undefined4 *)(param_4 + 0x7c) = uVar24;
      *(float *)(param_4 + 0x80) = param_2;
      *(float *)(param_4 + 0x84) = param_3;
      return;
    }
    puVar6 = &stack0xffffffffffffffa0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x20 = (long *)0x3eb4000;
    if ((bRam0000000003eb4f12 & 1) == 0) {
      func_0x00f78a20(0x3d3ac90);
      func_0x00f78a20(0x3d3aca0);
      func_0x00f78a20(0x3d3acb8);
      func_0x00f78a20(0x3d3b848);
      func_0x00f78a20(0x3d3cdd0);
      func_0x00f78a20(0x3d3cdd8);
      func_0x00f78a20(0x3d3b850);
      bRam0000000003eb4f12 = 1;
    }
    if ((((*(long *)(param_4 + 0x38) == 0) || (*(long *)(param_4 + 0x30) == 0)) ||
        (unaff_x22 = *(long *)(*(long *)(param_4 + 0x30) + 0x1e8), unaff_x22 == 0)) ||
       ((*(long *)(unaff_x22 + 0x68) == 0 || (*(int *)(*(long *)(unaff_x22 + 0x68) + 0x18) < 1)))) {
      return;
    }
    if (*(long *)(param_4 + 0x1d0) != 0) {
      unaff_x20 = (long *)(param_4 + 0x1d0);
      /*System.Collections.Generic.List<int>$$Clear*/ func_0x023dbfb4(*(long *)(param_4 + 0x1d0),uRam0000000003d3aca0);
      uVar8 = *(uint *)(param_4 + 0xe0);
      unaff_x23 = (ulong)uVar8;
      unaff_x21 = (ulong)*(uint *)(param_4 + 0xe4);
      uVar3 = *(uint *)(param_4 + 0xdc);
      unaff_x24 = (ulong)uVar3;
      if (-1 < (int)*(uint *)(param_4 + 0xe4)) {
        if (*unaff_x20 == 0) goto code_r0x0153cc40;
        param_6 = plRam0000000003d3ac90;
        /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(*unaff_x20,unaff_x21);
      }
      if (-1 < (int)uVar3) {
        if (*unaff_x20 == 0) goto code_r0x0153cc40;
        param_6 = plRam0000000003d3ac90;
        /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(*unaff_x20,*(undefined4 *)(param_4 + 0xdc));
      }
      if (-1 < (int)uVar8) {
        if (*unaff_x20 == 0) goto code_r0x0153cc40;
        /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(*unaff_x20,*(undefined4 *)(param_4 + 0xe0),plRam0000000003d3ac90);
      }
      plVar13 = (long *)&stack0xffffffffffffffa8;
      puVar22 = &UNK_0153cab4;
      plVar18 = unaff_x20;
      goto code_r0x0153cf68;
    }
code_r0x0153cc40:
    unaff_x30 = &Atlas_Gameplay_Kart_BattleKartAI__SetTargetToOtherKart;
    lVar19 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
    unaff_x19 = param_4;
  }
  puVar6 = (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  plVar18 = (long *)0x3eb4000;
  unaff_x20 = param_6;
  if ((bRam0000000003eb4f14 & 1) == 0) {
    func_0x00f78a20(0x3d20058);
    func_0x00f78a20(0x3d3ac90);
    func_0x00f78a20(0x3d3aca0);
    func_0x00f78a20(0x3d3acb8);
    func_0x00f78a20(0x3d3cdd0);
    func_0x00f78a20(0x3d3ae38);
    func_0x00f78a20(0x3d3cdd8);
    bRam0000000003eb4f14 = 1;
    unaff_x20 = param_6;
  }
  if (*(long *)(lVar19 + 0x38) == 0) {
    return;
  }
  if (*(long *)(lVar19 + 0x30) == 0) {
    return;
  }
  if (*(long *)(*(long *)(lVar19 + 0x30) + 0x130) == 0) {
    return;
  }
  if (*(long *)(lVar19 + 0x1d0) == 0) {
code_r0x0153cf5c:
    func_0x00f78af4();
  }
  else {
    plVar18 = (long *)(lVar19 + 0x1d0);
    /*System.Collections.Generic.List<int>$$Clear*/ func_0x023dbfb4(*(long *)(lVar19 + 0x1d0),uRam0000000003d3aca0);
    uVar8 = *(uint *)(lVar19 + 0xe0);
    unaff_x23 = (ulong)uVar8;
    uVar3 = *(uint *)(lVar19 + 0xe4);
    unaff_x21 = (ulong)uVar3;
    uVar4 = *(uint *)(lVar19 + 0xdc);
    unaff_x24 = (ulong)uVar4;
    if (-1 < (int)uVar3) {
      if (*plVar18 == 0) goto code_r0x0153cf5c;
      unaff_x20 = plRam0000000003d3ac90;
      /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(*plVar18,unaff_x21);
    }
    if (-1 < (int)uVar4) {
      if (*plVar18 == 0) goto code_r0x0153cf5c;
      unaff_x20 = plRam0000000003d3ac90;
      /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(*plVar18,*(undefined4 *)(lVar19 + 0xdc));
    }
    if (-1 < (int)uVar8) {
      if (*plVar18 == 0) goto code_r0x0153cf5c;
      unaff_x20 = plRam0000000003d3ac90;
      /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(*plVar18,*(undefined4 *)(lVar19 + 0xe0));
    }
    if ((*(long *)(lVar19 + 0x30) == 0) ||
       (lVar10 = *(long *)(*(long *)(lVar19 + 0x30) + 0x130), lVar10 == 0)) goto code_r0x0153cf5c;
    unaff_x22 = *(long *)(lVar10 + 0x10);
    *(long *)((long)register0x00000008 + -0x58) = unaff_x22;
    unaff_x20 = plVar18;
    /*Atlas.Gameplay.Kart.BattleKartAI$$PopulateOtherKartIndexValueList*/ func_0x0153d484(lVar19,(undefined1 *)((long)register0x00000008 + -0x58));
    unaff_x25 = *(long *)(lVar19 + 0x1e8);
    if (unaff_x25 == 0) goto code_r0x0153cf5c;
    if ((*(int *)(unaff_x25 + 0x18) < 1) && (-1 < (int)uVar3)) {
      if (*plVar18 != 0) {
        /*System.Collections.Generic.List<int>$$Remove*/ func_0x023dd17c(*plVar18,*(undefined4 *)(lVar19 + 0xe4),uRam0000000003d3acb8);
        unaff_x20 = plVar18;
        /*Atlas.Gameplay.Kart.BattleKartAI$$PopulateOtherKartIndexValueList*/ func_0x0153d484(lVar19,(undefined1 *)((long)register0x00000008 + -0x58));
        unaff_x25 = *(long *)(lVar19 + 0x1e8);
        if (unaff_x25 != 0) goto code_r0x0153cddc;
      }
      goto code_r0x0153cf5c;
    }
code_r0x0153cddc:
    if ((*(int *)(unaff_x25 + 0x18) < 1) && (-1 < (int)uVar4)) {
      if (*plVar18 != 0) {
        /*System.Collections.Generic.List<int>$$Remove*/ func_0x023dd17c(*plVar18,*(undefined4 *)(lVar19 + 0xdc),uRam0000000003d3acb8);
        unaff_x20 = plVar18;
        /*Atlas.Gameplay.Kart.BattleKartAI$$PopulateOtherKartIndexValueList*/ func_0x0153d484(lVar19,(undefined1 *)((long)register0x00000008 + -0x58));
        unaff_x25 = *(long *)(lVar19 + 0x1e8);
        if (unaff_x25 != 0) goto code_r0x0153ce20;
      }
      goto code_r0x0153cf5c;
    }
code_r0x0153ce20:
    if ((*(int *)(unaff_x25 + 0x18) < 1) && (-1 < (int)uVar8)) {
      if (*plVar18 != 0) {
        /*System.Collections.Generic.List<int>$$Remove*/ func_0x023dd17c(*plVar18,*(undefined4 *)(lVar19 + 0xe0),uRam0000000003d3acb8);
        unaff_x20 = plVar18;
        /*Atlas.Gameplay.Kart.BattleKartAI$$PopulateOtherKartIndexValueList*/ func_0x0153d484(lVar19,(undefined1 *)((long)register0x00000008 + -0x58));
        unaff_x25 = *(long *)(lVar19 + 0x1e8);
        if (unaff_x25 != 0) goto code_r0x0153ce64;
      }
      goto code_r0x0153cf5c;
    }
code_r0x0153ce64:
    if (*(int *)(unaff_x25 + 0x18) < 1) {
      return;
    }
    unaff_x20 = (long *)0x0;
    plVar18 = (long *)/*UnityEngine.Random$$Range*/ func_0x032528a0(0);
    if (*(uint *)(unaff_x25 + 0x18) <= (uint)plVar18) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (unaff_x22 == 0) goto code_r0x0153cf5c;
    plVar18 = *(long **)(*(long *)(unaff_x25 + 0x10) + (long)(int)(uint)plVar18 * 8 + 0x20);
    if (*(uint *)(unaff_x22 + 0x18) <= (uint)plVar18) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar10 = *(long *)(*(long *)(unaff_x22 + 0x10) + (((long)plVar18 << 0x20) >> 0x1d) + 0x20);
    if (lVar10 == 0) goto code_r0x0153cf5c;
    plVar18 = *(long **)(lVar10 + 0x68);
    if (plVar18 == (long *)0x0) {
code_r0x0153cf08:
      if ((*(long *)(lVar10 + 0x10) != 0) &&
         (lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + 0x70), lVar10 != 0)) {
        uVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar10,0);
        *(undefined8 *)(lVar19 + 0x98) = uVar16;
        *(undefined4 *)(lVar19 + 0xe4) = *(undefined4 *)(lVar19 + 0xe8);
        if (plVar18 == (long *)0x0) {
          uVar24 = 0xffffffff;
        }
        else {
          uVar24 = (undefined4)plVar18[0x1c];
        }
        *(undefined4 *)(lVar19 + 0xe8) = uVar24;
        return;
      }
      goto code_r0x0153cf5c;
    }
    if ((*(byte *)(/*Atlas.Gameplay.Kart.BattleKartAI_TypeInfo*/ lRam0000000003d20058 + 300) <= *(byte *)(*plVar18 + 300)) &&
       (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.BattleKartAI_TypeInfo*/ lRam0000000003d20058 + 300) * 8 + -8)
        == /*Atlas.Gameplay.Kart.BattleKartAI_TypeInfo*/ lRam0000000003d20058)) goto code_r0x0153cf08;
  }
  puVar22 = &Atlas_Gameplay_Kart_BattleKartAI__PopulatePickupBoxIndexValueList;
  auVar43 = func_0x00f78e5c(plVar18);
  plVar13 = auVar43._8_8_;
  param_4 = auVar43._0_8_;
code_r0x0153cf68:
  *(undefined8 *)(puVar6 + -0xa0) = unaff_d15;
  *(undefined8 *)(puVar6 + -0x98) = unaff_d14;
  *(undefined8 *)(puVar6 + -0x90) = unaff_d13;
  *(undefined8 *)(puVar6 + -0x88) = unaff_d12;
  *(undefined8 *)(puVar6 + -0x80) = unaff_d11;
  *(undefined8 *)(puVar6 + -0x78) = unaff_d10;
  *(undefined8 *)(puVar6 + -0x70) = unaff_d9;
  *(undefined8 *)(puVar6 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar6 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar6 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
  *(long *)(puVar6 + -0x48) = unaff_x25;
  *(ulong *)(puVar6 + -0x40) = unaff_x24;
  *(ulong *)(puVar6 + -0x38) = unaff_x23;
  *(long *)(puVar6 + -0x30) = unaff_x22;
  *(ulong *)(puVar6 + -0x28) = unaff_x21;
  *(long **)(puVar6 + -0x20) = plVar18;
  *(long *)(puVar6 + -0x18) = lVar19;
  *(undefined1 **)(puVar6 + -0x10) = unaff_x29;
  *(undefined **)(puVar6 + -8) = puVar22;
  if ((bRam0000000003eb4f13 & 1) == 0) {
    func_0x00f78a20(0x3d327d8);
    func_0x00f78a20(0x3d327e0);
    func_0x00f78a20(0x3d327e8);
    func_0x00f78a20(0x3d3cdc0);
    func_0x00f78a20(0x3d3cdc8);
    func_0x00f78a20(0x3d3acb0);
    func_0x00f78a20(0x3d3b848);
    func_0x00f78a20(0x3d3cdd0);
    func_0x00f78a20(0x3d3cdd8);
    func_0x00f78a20(0x3d3b850);
    func_0x00f78a20(0x3d3cde0);
    bRam0000000003eb4f13 = 1;
  }
  *(undefined8 *)(puVar6 + -0xc0) = 0;
  *(undefined8 *)(puVar6 + -0xb8) = 0;
  *(undefined8 *)(puVar6 + -0xb0) = 0;
  *(undefined4 *)(puVar6 + -200) = 0;
  if (*(long *)(param_4 + 0x1e8) != 0) {
    /*System.Collections.Generic.List<BattleKartAI.IndexValuePair>$$Clear*/ func_0x024cba64(*(long *)(param_4 + 0x1e8),uRam0000000003d3cdc8);
    if ((*(long *)(param_4 + 0x38) != 0) &&
       (lVar19 = *(long *)(*(long *)(param_4 + 0x38) + 0x10), lVar19 != 0)) {
      lVar19 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar19,0);
      uVar32 = *(undefined4 *)(lVar19 + 0x140);
      uVar36 = *(undefined4 *)(lVar19 + 0x144);
      uVar24 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar19 + 0x13c),0);
      *(undefined4 *)(puVar6 + -0xf0) = uVar32;
      *(undefined4 *)(puVar6 + -0xec) = uVar24;
      *(undefined4 *)(puVar6 + -0xf4) = uVar36;
      if ((*(long *)(param_4 + 0x38) != 0) &&
         (lVar19 = *(long *)(*(long *)(param_4 + 0x38) + 0x10), lVar19 != 0)) {
        lVar19 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar19,0);
        uVar32 = *(undefined4 *)(lVar19 + 0x11c);
        uVar36 = *(undefined4 *)(lVar19 + 0x120);
        uVar24 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar19 + 0x118),0);
        lVar19 = *(long *)(param_4 + 0x60);
        if ((lVar19 != 0) && (lVar10 = *plVar13, lVar10 != 0)) {
          iVar7 = 0;
          uVar9 = 0;
          uVar39 = *(undefined4 *)(lVar19 + 0x80);
          uVar42 = *(undefined4 *)(lVar19 + 0x84);
          uVar41 = *(undefined4 *)(lVar19 + 0x78);
          uVar40 = *(undefined4 *)(lVar19 + 0x7c);
          uVar33 = uVar32;
          uVar37 = uVar36;
          do {
            if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar9) {
              return;
            }
            if (*(uint *)(lVar10 + 0x18) <= uVar9) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if (*unaff_x20 == 0) break;
            lVar19 = *(long *)(*(long *)(lVar10 + 0x10) + uVar9 * 8 + 0x20);
            /*System.Collections.Generic.List<int>$$GetEnumerator*/ func_0x023dc788(puVar6 + -0xe8,*unaff_x20,uRam0000000003d3acb0);
            *(undefined8 *)(puVar6 + -0xb8) = *(undefined8 *)(puVar6 + -0xe0);
            *(undefined8 *)(puVar6 + -0xc0) = *(undefined8 *)(puVar6 + -0xe8);
            *(undefined8 *)(puVar6 + -0xb0) = *(undefined8 *)(puVar6 + -0xd8);
            do {
              uVar11 = /*System.Collections.Generic.List.Enumerator<int>$$MoveNext*/ func_0x01f68c28(puVar6 + -0xc0,uRam0000000003d327e0);
              if ((uVar11 & 1) == 0) break;
              if (lVar19 == 0) {
                func_0x00f78af4();
                goto code_r0x0153d35c;
              }
            } while (*(int *)(lVar19 + 0x48) != *(int *)(puVar6 + -0xb0));
            *(undefined4 *)(puVar6 + (long)iVar7 * 4 + -0xd0) = 0x9e;
            iVar1 = *(int *)(puVar6 + -200);
            iVar7 = iVar1 + 1;
            *(int *)(puVar6 + -200) = iVar7;
            /*System.Collections.Generic.List.Enumerator<int>$$Dispose*/ func_0x01f68c24(puVar6 + -0xc0,uRam0000000003d327d8);
            if ((iVar7 != 0) && (*(int *)(puVar6 + (long)iVar1 * 4 + -0xd0) == 0x9e)) {
              *(int *)(puVar6 + -200) = iVar1;
              iVar7 = iVar1;
            }
            if ((uVar11 & 1) == 0) {
              if (((lVar19 == 0) || (*(long *)(lVar19 + 0x18) == 0)) ||
                 (lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar19 + 0x18),0), lVar10 == 0)) break;
              uVar27 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar10,0);
              if (*(long *)(lVar19 + 0x20) == 0) break;
              uVar38 = *(undefined4 *)(*(long *)(lVar19 + 0x20) + 0x50);
              *(undefined4 *)(puVar6 + -0x108) = uVar39;
              *(undefined4 *)(puVar6 + -0x104) = uVar42;
              *(undefined4 *)(puVar6 + -0x110) = uVar41;
              *(undefined4 *)(puVar6 + -0x10c) = uVar40;
              *(undefined4 *)(puVar6 + -0x118) = uVar37;
              *(undefined4 *)(puVar6 + -0x114) = uVar38;
              *(undefined4 *)(puVar6 + -0x120) = uVar27;
              *(undefined4 *)(puVar6 + -0x11c) = uVar33;
              uVar33 = *(undefined4 *)(puVar6 + -0xf0);
              uVar37 = *(undefined4 *)(puVar6 + -0xf4);
              fVar23 = (float)/*Atlas.Gameplay.Kart.BattleKartAI$$EvaluateWeight*/ func_0x0153d364(*(undefined4 *)(puVar6 + -0xec),uVar33,uVar37,uVar24,
                                              uVar32,uVar36);
              lVar19 = *(long *)(param_4 + 0x1e8);
              if (lVar19 == 0) break;
              uVar11 = (ulong)*(uint *)(lVar19 + 0x18);
              if ((int)*(uint *)(lVar19 + 0x18) < 3) {
                /*System.Collections.Generic.List<BattleKartAI.IndexValuePair>$$Add*/ func_0x024cb77c(lVar19,uVar9 | (ulong)(uint)fVar23 << 0x20,uRam0000000003d3cdc0);
              }
              else {
                uVar20 = 0;
                lVar10 = 0x24;
                do {
                  if ((uVar11 & 0xffffffff) <= uVar20) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  if (*(float *)(*(long *)(lVar19 + 0x10) + lVar10) < fVar23) {
                    lVar19 = *(long *)(param_4 + 0x1e8);
                    if (lVar19 == 0) goto code_r0x0153d358;
                    if (*(uint *)(lVar19 + 0x18) <= (uint)uVar20) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      lVar19 = *(long *)(param_4 + 0x1e8);
                      if (lVar19 == 0) goto code_r0x0153d358;
                    }
                    /*System.Collections.Generic.List<BattleKartAI.IndexValuePair>$$set_Item*/ func_0x024cb424(lVar19,uVar20,uVar9 | (ulong)(uint)fVar23 << 0x20,
                                    uRam0000000003d3cde0);
                    break;
                  }
                  lVar19 = *(long *)(param_4 + 0x1e8);
                  if (lVar19 == 0) goto code_r0x0153d358;
                  uVar20 = uVar20 + 1;
                  uVar11 = (ulong)*(int *)(lVar19 + 0x18);
                  lVar10 = lVar10 + 8;
                } while ((long)uVar20 < (long)uVar11);
              }
            }
            uVar9 = uVar9 + 1;
            lVar10 = *plVar13;
          } while (lVar10 != 0);
        }
      }
    }
  }
code_r0x0153d358:
  func_0x00f78af4();
code_r0x0153d35c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x153d360);
  (*UNRECOVERED_JUMPTABLE)();
}



// ============================================================
// RVA: 0x153c6b8 | Atlas.Gameplay.Kart.BattleKartAI.ComputeLookAhead
// ============================================================

void Atlas_Gameplay_Kart_BattleKartAI__ComputeLookAhead
               (undefined1 param_1 [16],undefined1 param_2 [16],uint param_3,long param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  undefined8 unaff_d11;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puVar3;
  
  puVar9 = (ulong *)0x3eb4000;
  if ((bRam0000000003eb4f0f & 1) == 0) {
    func_0x00f78a20(0x3d57f70);
    bRam0000000003eb4f0f = 1;
  }
  uVar15 = *(ulong *)(param_4 + 0x7c);
  *(ulong *)(param_4 + 0x88) = uVar15;
  *(undefined4 *)(param_4 + 0x90) = *(undefined4 *)(param_4 + 0x84);
  if (((*(char *)(param_4 + 0xec) == '\0') || (*(long *)(param_4 + 0x70) == 0)) ||
     (*(int *)(param_4 + 0x78) < 1)) {
    return;
  }
  if ((*(long *)(param_4 + 0x38) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_4 + 0x38) + 0x10), lVar6 != 0)) {
    puVar9 = (ulong *)(param_4 + 0x11c);
    lVar6 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar6,0);
    uVar12 = *(undefined4 *)(lVar6 + 0x144);
    uVar15 = *(ulong *)(lVar6 + 0x13c);
    *puVar9 = uVar15;
    *(undefined4 *)(param_4 + 0x124) = uVar12;
    *(undefined4 *)(param_4 + 0x128) = 0;
    if ((*(long *)(param_4 + 0x38) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_4 + 0x38) + 0x10), lVar6 != 0)) {
      puVar7 = (undefined4 *)/*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar6,0);
      uVar12 = *puVar7;
      uVar15 = *(ulong *)(param_4 + 0x7c);
      *(ulong *)(param_4 + 0xf0) = uVar15;
      *(undefined4 *)(param_4 + 0x118) = uVar12;
      *(undefined4 *)(param_4 + 0xf8) = *(undefined4 *)(param_4 + 0x84);
      *(undefined4 *)(param_4 + 0xfc) = 0;
      *(undefined4 *)(param_4 + 0x110) = *(undefined4 *)(param_4 + 0x78);
      *(undefined4 *)(param_4 + 0x114) = *(undefined4 *)(param_4 + 0xb0);
      if (*(long *)(param_4 + 0x60) != 0) {
        *(undefined8 *)(param_4 + 300) = *(undefined8 *)(*(long *)(param_4 + 0x60) + 0x54);
        uStack_58 = *(undefined8 *)(param_4 + 0x118);
        uStack_60 = *(undefined8 *)(param_4 + 0x110);
        uStack_48 = *(undefined8 *)(param_4 + 0x128);
        uStack_50 = *(undefined8 *)(param_4 + 0x120);
        uStack_38 = *(undefined8 *)(param_4 + 0x138);
        uStack_40 = *(undefined8 *)(param_4 + 0x130);
        uStack_30 = *(undefined8 *)(param_4 + 0x140);
        uStack_78 = *(undefined8 *)(param_4 + 0xf8);
        uStack_80 = *(undefined8 *)(param_4 + 0xf0);
        uStack_68 = *(undefined8 *)(param_4 + 0x108);
        uStack_70 = *(undefined8 *)(param_4 + 0x100);
        /*Unity.Jobs.IJobExtensions$$Run<BattleAIComputeJob>*/ func_0x0185e434(&uStack_80,uRam0000000003d57f70);
        uVar12 = *(undefined4 *)(*(undefined8 **)(param_4 + 0x138) + 1);
        *(undefined8 *)(param_4 + 0x88) = **(undefined8 **)(param_4 + 0x138);
        *(undefined4 *)(param_4 + 0x90) = uVar12;
        return;
      }
    }
  }
  lVar6 = func_0x00f78af4();
  pcStack_88 = (code *)&Atlas_Gameplay_Kart_BattleKartAI__NextNavStateAndRefreshTarget;
  /*Atlas.Gameplay.Kart.BattleKartAI$$NextNavState*/ func_0x0153c82c();
  Atlas_Gameplay_Kart_BattleKartAI__SetTargetPoint(lVar6);
  puVar1 = &uStack_80;
  puVar2 = (undefined1 *)register0x00000008;
  while( true ) {
    lVar5 = lVar6;
    puVar3 = (undefined1 *)puVar1;
    uVar12 = (undefined4)uVar15;
    *(undefined8 *)(puVar3 + -0x60) = unaff_d11;
    *(ulong *)(puVar3 + -0x58) = unaff_d10;
    *(ulong *)(puVar3 + -0x50) = unaff_d9;
    *(ulong *)(puVar3 + -0x48) = unaff_d8;
    *(long *)(puVar3 + -0x40) = unaff_x24;
    *(long *)(puVar3 + -0x38) = unaff_x23;
    *(long *)(puVar3 + -0x30) = unaff_x22;
    *(long *)(puVar3 + -0x28) = unaff_x21;
    *(ulong **)(puVar3 + -0x20) = puVar9;
    *(long *)(puVar3 + -0x18) = param_4;
    *(undefined1 **)(puVar3 + -0x10) = puVar2 + -0x10;
    *(code **)(puVar3 + -8) = pcStack_88;
    if ((bRam0000000003eb4f16 & 1) == 0) {
      func_0x00f78a20(0x3d57f78);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4f16 = 1;
    }
    if (*(long *)(lVar5 + 0x38) == 0) {
      return;
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if (lVar6 == 0) break;
    lVar6 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar6,0);
    if (*(char *)(lVar6 + 0x3c) == '\0') {
      return;
    }
    uVar8 = *(undefined8 *)(lVar5 + 0x98);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar15 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
    if ((uVar15 & 1) == 0) {
      fVar10 = *(float *)(lVar5 + 0x7c);
    }
    else {
      if (*(long *)(lVar5 + 0x98) == 0) break;
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar5 + 0x98),0);
      fVar10 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
      *(float *)(lVar5 + 0x7c) = fVar10;
      *(undefined4 *)(lVar5 + 0x80) = uVar12;
      *(uint *)(lVar5 + 0x84) = param_3;
    }
    if (ABS(fVar10) == INFINITY) {
      return;
    }
    if ((*(long *)(lVar5 + 0x38) == 0) ||
       (lVar6 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10), lVar6 == 0)) break;
    lVar6 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar6,0);
    uVar15 = (ulong)*(uint *)(lVar6 + 0x140);
    param_3 = *(uint *)(lVar6 + 0x144);
    uVar11 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar6 + 0x13c),0);
    unaff_d8 = (ulong)uVar11;
    unaff_d9 = uVar15 & 0xffffffff;
    unaff_d10 = (ulong)param_3;
    uVar14 = *(undefined4 *)(lVar5 + 0x80);
    uVar17 = *(undefined4 *)(lVar5 + 0x84);
    uVar12 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar5 + 0x7c),uVar14,uVar17,0);
    uVar15 = uVar15 & 0xffffffff;
    /*UnityEngine.AI.NavMesh$$CalculatePath*/ func_0x032070a8(uVar11,uVar15,param_3,uVar12,uVar14,uVar17,0xffffffff,
                    *(undefined8 *)(lVar5 + 0x70),0);
    lVar6 = *(long *)(lVar5 + 0x60);
    if (*(int *)(lVar5 + 0xb8) == 2) {
      if (lVar6 == 0) break;
      puVar7 = (undefined4 *)(lVar6 + 100);
    }
    else {
      if (lVar6 == 0) break;
      puVar7 = (undefined4 *)(lVar6 + 0x60);
    }
    *(undefined4 *)(lVar5 + 0xa8) = *puVar7;
    *(undefined4 *)(lVar5 + 0xb0) = 0;
    if (*(long *)(lVar5 + 0x70) == 0) {
      return;
    }
    lVar6 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(*(long *)(lVar5 + 0x70),0);
    if (lVar6 == 0) break;
    if (*(long *)(lVar6 + 0x18) == 0) {
      return;
    }
    if (*(long *)(lVar5 + 0x70) == 0) break;
    iVar4 = /*UnityEngine.AI.NavMeshPath$$get_status*/ func_0x03207ad8(*(long *)(lVar5 + 0x70),0);
    if (iVar4 != 0) {
      return;
    }
    if ((*(long *)(lVar5 + 0x70) == 0) ||
       (lVar6 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(*(long *)(lVar5 + 0x70),0), lVar6 == 0)) break;
    *(int *)(lVar5 + 0x78) = (int)*(undefined8 *)(lVar6 + 0x18);
    lVar6 = *(long *)(lVar5 + 0x70);
    if (lVar6 == 0) break;
    puVar9 = (ulong *)0x0;
    unaff_x21 = 0;
    unaff_x22 = 0;
    while( true ) {
      lVar6 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(lVar6,0);
      if (lVar6 == 0) goto LAB_0153c5f4;
      if ((long)*(int *)(lVar6 + 0x18) <= (long)puVar9) goto code_r0x0153c5f8;
      if ((*(long *)(lVar5 + 0x70) == 0) ||
         (lVar6 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(*(long *)(lVar5 + 0x70),0), lVar6 == 0)) goto LAB_0153c5f4;
      if ((ulong *)(ulong)*(uint *)(lVar6 + 0x18) <= puVar9) break;
      unaff_x23 = unaff_x22 + 0xc;
      unaff_x24 = unaff_x21 + 0x10;
      puVar9 = (ulong *)((long)puVar9 + 1);
      lVar6 = lVar6 + unaff_x22;
      uVar15 = (ulong)*(uint *)(lVar6 + 0x24);
      param_3 = *(uint *)(lVar6 + 0x28);
      uVar12 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(*(undefined4 *)(lVar6 + 0x20),0);
      puVar7 = (undefined4 *)(*(long *)(lVar5 + 0x168) + unaff_x21);
      *puVar7 = uVar12;
      puVar7[1] = (int)uVar15;
      puVar7[2] = param_3;
      puVar7[3] = 0;
      lVar6 = *(long *)(lVar5 + 0x70);
      unaff_x21 = unaff_x24;
      unaff_x22 = unaff_x23;
      if (lVar6 == 0) goto LAB_0153c5f4;
    }
    uVar8 = func_0x00f78b24();
    pcStack_88 = Atlas_Gameplay_Kart_BattleKartAI__OnResetPosition;
    lVar6 = func_0x00f78ac0(uVar8,0);
    puVar1 = (undefined8 *)(puVar3 + -0xb0);
    param_4 = lVar5;
    puVar2 = puVar3;
  }
LAB_0153c5f4:
  func_0x00f78af4();
code_r0x0153c5f8:
  *(undefined8 *)(lVar5 + 0x188) = *(undefined8 *)(lVar5 + 0x7c);
  *(undefined4 *)(lVar5 + 400) = *(undefined4 *)(lVar5 + 0x84);
  *(undefined4 *)(lVar5 + 0x194) = 0;
  *(undefined4 *)(lVar5 + 0x1a8) = *(undefined4 *)(lVar5 + 0x78);
  *(undefined4 *)(lVar5 + 0x1ac) = *(undefined4 *)(lVar5 + 0xbc);
  uVar8 = *(undefined8 *)(lVar5 + 0x1a8);
  uVar16 = *(undefined8 *)(lVar5 + 0x1c0);
  uVar13 = *(undefined8 *)(lVar5 + 0x1b8);
  *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(lVar5 + 0x1b0);
  *(undefined8 *)(puVar3 + -0x90) = uVar8;
  *(undefined8 *)(puVar3 + -0x78) = uVar16;
  *(undefined8 *)(puVar3 + -0x80) = uVar13;
  *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(lVar5 + 0x1c8);
  uVar16 = *(undefined8 *)(lVar5 + 0x188);
  uVar13 = *(undefined8 *)(lVar5 + 0x1a0);
  uVar8 = *(undefined8 *)(lVar5 + 0x198);
  *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(lVar5 + 400);
  *(undefined8 *)(puVar3 + -0xb0) = uVar16;
  *(undefined8 *)(puVar3 + -0x98) = uVar13;
  *(undefined8 *)(puVar3 + -0xa0) = uVar8;
  /*Unity.Jobs.IJobExtensions$$Run<BattleAIProcessPathJob>*/ func_0x0185e4a0(puVar3 + -0xb0,uRam0000000003d57f78);
  *(undefined4 *)(lVar5 + 0x78) = **(undefined4 **)(lVar5 + 0x1c0);
  return;
}



// ============================================================
// RVA: 0x153c800 | Atlas.Gameplay.Kart.BattleKartAI.NextNavStateAndRefreshTarget
// ============================================================

void Atlas_Gameplay_Kart_BattleKartAI__NextNavStateAndRefreshTarget
               (undefined1 param_1 [16],ulong param_2,uint param_3,long param_4)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long unaff_x19;
  undefined8 uVar7;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  undefined8 unaff_d11;
  
  /*Atlas.Gameplay.Kart.BattleKartAI$$NextNavState*/ func_0x0153c82c();
  Atlas_Gameplay_Kart_BattleKartAI__SetTargetPoint(param_4);
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    lVar3 = param_4;
    uVar10 = (undefined4)param_2;
    *(undefined8 *)(puVar1 + -0x60) = unaff_d11;
    *(ulong *)(puVar1 + -0x58) = unaff_d10;
    *(ulong *)(puVar1 + -0x50) = unaff_d9;
    *(ulong *)(puVar1 + -0x48) = unaff_d8;
    *(long *)(puVar1 + -0x40) = unaff_x24;
    *(long *)(puVar1 + -0x38) = unaff_x23;
    *(long *)(puVar1 + -0x30) = unaff_x22;
    *(long *)(puVar1 + -0x28) = unaff_x21;
    *(ulong *)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    if ((bRam0000000003eb4f16 & 1) == 0) {
      func_0x00f78a20(0x3d57f78);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4f16 = 1;
    }
    if (*(long *)(lVar3 + 0x38) == 0) {
      return;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if (lVar4 == 0) break;
    lVar4 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar4,0);
    if (*(char *)(lVar4 + 0x3c) == '\0') {
      return;
    }
    uVar7 = *(undefined8 *)(lVar3 + 0x98);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
    if ((uVar5 & 1) == 0) {
      fVar8 = *(float *)(lVar3 + 0x7c);
    }
    else {
      if (*(long *)(lVar3 + 0x98) == 0) break;
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar3 + 0x98),0);
      fVar8 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
      *(float *)(lVar3 + 0x7c) = fVar8;
      *(undefined4 *)(lVar3 + 0x80) = uVar10;
      *(uint *)(lVar3 + 0x84) = param_3;
    }
    if (ABS(fVar8) == INFINITY) {
      return;
    }
    if ((*(long *)(lVar3 + 0x38) == 0) ||
       (lVar4 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10), lVar4 == 0)) break;
    lVar4 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar4,0);
    param_2 = (ulong)*(uint *)(lVar4 + 0x140);
    param_3 = *(uint *)(lVar4 + 0x144);
    uVar9 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar4 + 0x13c),0);
    unaff_d8 = (ulong)uVar9;
    unaff_d9 = param_2 & 0xffffffff;
    unaff_d10 = (ulong)param_3;
    uVar12 = *(undefined4 *)(lVar3 + 0x80);
    uVar14 = *(undefined4 *)(lVar3 + 0x84);
    uVar10 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar3 + 0x7c),uVar12,uVar14,0);
    param_2 = param_2 & 0xffffffff;
    /*UnityEngine.AI.NavMesh$$CalculatePath*/ func_0x032070a8(uVar9,param_2,param_3,uVar10,uVar12,uVar14,0xffffffff,
                    *(undefined8 *)(lVar3 + 0x70),0);
    lVar4 = *(long *)(lVar3 + 0x60);
    if (*(int *)(lVar3 + 0xb8) == 2) {
      if (lVar4 == 0) break;
      puVar6 = (undefined4 *)(lVar4 + 100);
    }
    else {
      if (lVar4 == 0) break;
      puVar6 = (undefined4 *)(lVar4 + 0x60);
    }
    *(undefined4 *)(lVar3 + 0xa8) = *puVar6;
    *(undefined4 *)(lVar3 + 0xb0) = 0;
    if (*(long *)(lVar3 + 0x70) == 0) {
      return;
    }
    lVar4 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(*(long *)(lVar3 + 0x70),0);
    if (lVar4 == 0) break;
    if (*(long *)(lVar4 + 0x18) == 0) {
      return;
    }
    if (*(long *)(lVar3 + 0x70) == 0) break;
    iVar2 = /*UnityEngine.AI.NavMeshPath$$get_status*/ func_0x03207ad8(*(long *)(lVar3 + 0x70),0);
    if (iVar2 != 0) {
      return;
    }
    if ((*(long *)(lVar3 + 0x70) == 0) ||
       (lVar4 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(*(long *)(lVar3 + 0x70),0), lVar4 == 0)) break;
    *(int *)(lVar3 + 0x78) = (int)*(undefined8 *)(lVar4 + 0x18);
    lVar4 = *(long *)(lVar3 + 0x70);
    if (lVar4 == 0) break;
    unaff_x20 = 0;
    unaff_x21 = 0;
    unaff_x22 = 0;
    while( true ) {
      lVar4 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(lVar4,0);
      if (lVar4 == 0) goto LAB_0153c5f4;
      if ((long)*(int *)(lVar4 + 0x18) <= (long)unaff_x20) goto code_r0x0153c5f8;
      if ((*(long *)(lVar3 + 0x70) == 0) ||
         (lVar4 = /*UnityEngine.AI.NavMeshPath$$get_corners*/ func_0x03207a88(*(long *)(lVar3 + 0x70),0), lVar4 == 0)) goto LAB_0153c5f4;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x20) break;
      unaff_x23 = unaff_x22 + 0xc;
      unaff_x24 = unaff_x21 + 0x10;
      unaff_x20 = unaff_x20 + 1;
      lVar4 = lVar4 + unaff_x22;
      param_2 = (ulong)*(uint *)(lVar4 + 0x24);
      param_3 = *(uint *)(lVar4 + 0x28);
      uVar10 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(*(undefined4 *)(lVar4 + 0x20),0);
      puVar6 = (undefined4 *)(*(long *)(lVar3 + 0x168) + unaff_x21);
      *puVar6 = uVar10;
      puVar6[1] = (int)param_2;
      puVar6[2] = param_3;
      puVar6[3] = 0;
      lVar4 = *(long *)(lVar3 + 0x70);
      unaff_x21 = unaff_x24;
      unaff_x22 = unaff_x23;
      if (lVar4 == 0) goto LAB_0153c5f4;
    }
    uVar7 = func_0x00f78b24();
    unaff_x30 = Atlas_Gameplay_Kart_BattleKartAI__OnResetPosition;
    param_4 = func_0x00f78ac0(uVar7,0);
    puVar1 = puVar1 + -0xb0;
    unaff_x19 = lVar3;
  }
LAB_0153c5f4:
  func_0x00f78af4();
code_r0x0153c5f8:
  *(undefined8 *)(lVar3 + 0x188) = *(undefined8 *)(lVar3 + 0x7c);
  *(undefined4 *)(lVar3 + 400) = *(undefined4 *)(lVar3 + 0x84);
  *(undefined4 *)(lVar3 + 0x194) = 0;
  *(undefined4 *)(lVar3 + 0x1a8) = *(undefined4 *)(lVar3 + 0x78);
  *(undefined4 *)(lVar3 + 0x1ac) = *(undefined4 *)(lVar3 + 0xbc);
  uVar7 = *(undefined8 *)(lVar3 + 0x1a8);
  uVar13 = *(undefined8 *)(lVar3 + 0x1c0);
  uVar11 = *(undefined8 *)(lVar3 + 0x1b8);
  *(undefined8 *)(puVar1 + -0x88) = *(undefined8 *)(lVar3 + 0x1b0);
  *(undefined8 *)(puVar1 + -0x90) = uVar7;
  *(undefined8 *)(puVar1 + -0x78) = uVar13;
  *(undefined8 *)(puVar1 + -0x80) = uVar11;
  *(undefined8 *)(puVar1 + -0x70) = *(undefined8 *)(lVar3 + 0x1c8);
  uVar13 = *(undefined8 *)(lVar3 + 0x188);
  uVar11 = *(undefined8 *)(lVar3 + 0x1a0);
  uVar7 = *(undefined8 *)(lVar3 + 0x198);
  *(undefined8 *)(puVar1 + -0xa8) = *(undefined8 *)(lVar3 + 400);
  *(undefined8 *)(puVar1 + -0xb0) = uVar13;
  *(undefined8 *)(puVar1 + -0x98) = uVar11;
  *(undefined8 *)(puVar1 + -0xa0) = uVar7;
  /*Unity.Jobs.IJobExtensions$$Run<BattleAIProcessPathJob>*/ func_0x0185e4a0(puVar1 + -0xb0,uRam0000000003d57f78);
  *(undefined4 *)(lVar3 + 0x78) = **(undefined4 **)(lVar3 + 0x1c0);
  return;
}



// ============================================================
// RVA: 0x153c82c | Atlas.Gameplay.Kart.BattleKartAI.NextNavState
// ============================================================

void Atlas_Gameplay_Kart_BattleKartAI__NextNavState(long param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  
  lVar7 = *(long *)(param_1 + 0x38);
  if (lVar7 == 0) {
    return;
  }
  lVar4 = *(long *)(lVar7 + 0x38);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (*(long *)(lVar7 + 0x90) == 0) goto LAB_0153c954;
  if (*(char *)(*(long *)(lVar7 + 0x90) + 0x98) == '\0') {
    iVar3 = *(int *)(param_1 + 0xb8);
    if (iVar3 == 2) {
      if (lVar4 == 0) goto LAB_0153c954;
      uVar5 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_HasUsableEquippedOrShuffling*/ func_0x015e1c24(lVar4,0);
      if ((uVar5 & 1) != 0) {
        return;
      }
      iVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
      lVar7 = *(long *)(param_1 + 0x60);
    }
    else {
      if ((iVar3 != 1) && (iVar3 != 0)) {
        return;
      }
      if (lVar4 == 0) goto LAB_0153c954;
      iVar2 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_HasUsableEquippedOrShuffling*/ func_0x015e1c24(lVar4,0);
      iVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
      lVar7 = *(long *)(param_1 + 0x60);
      if (iVar2 != 0) {
        if (lVar7 != 0) {
          fVar8 = *(float *)(lVar7 + 0x48) * 100.0;
          fVar1 = -fVar8;
          if (fVar8 != INFINITY) {
            fVar1 = fVar8;
          }
          uVar6 = (uint)(iVar3 <= (int)fVar1) << 1;
          goto code_r0x0153c864;
        }
        goto LAB_0153c954;
      }
    }
    if (lVar7 == 0) {
LAB_0153c954:
      lVar7 = func_0x00f78af4();
      *(undefined4 *)(lVar7 + 0xac) = 0;
      *(undefined8 *)(lVar7 + 0x98) = 0;
      *(undefined8 *)(lVar7 + 0xa0) = 0;
      return;
    }
    fVar8 = *(float *)(lVar7 + 0x44) * 100.0;
    fVar1 = -fVar8;
    if (fVar8 != INFINITY) {
      fVar1 = fVar8;
    }
    uVar6 = (uint)(iVar3 <= (int)fVar1);
  }
  else {
    uVar6 = 0;
  }
code_r0x0153c864:
  *(uint *)(param_1 + 0xb8) = uVar6;
  return;
}



// ============================================================
// RVA: 0x153c958 | Atlas.Gameplay.Kart.BattleKartAI.ResetTrackingTargets
// ============================================================

void Atlas_Gameplay_Kart_BattleKartAI__ResetTrackingTargets(long param_1)

{
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}



// ============================================================
// RVA: 0x153c964 | Atlas.Gameplay.Kart.BattleKartAI.SetTargetToPickup
// ============================================================

/* WARNING: Possible PIC construction at 0x0153cab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153caf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153cb38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153cb7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0153cb3c) */
/* WARNING: Removing unreachable block (ram,0x0153caf8) */
/* WARNING: Removing unreachable block (ram,0x0153cab4) */
/* WARNING: Removing unreachable block (ram,0x0153cabc) */
/* WARNING: Removing unreachable block (ram,0x0153cac8) */
/* WARNING: Removing unreachable block (ram,0x0153cb00) */
/* WARNING: Removing unreachable block (ram,0x0153cb0c) */
/* WARNING: Removing unreachable block (ram,0x0153cb44) */
/* WARNING: Removing unreachable block (ram,0x0153cb50) */
/* WARNING: Removing unreachable block (ram,0x0153cb54) */
/* WARNING: Removing unreachable block (ram,0x0153cb5c) */
/* WARNING: Removing unreachable block (ram,0x0153cb10) */
/* WARNING: Removing unreachable block (ram,0x0153cb18) */
/* WARNING: Removing unreachable block (ram,0x0153cacc) */
/* WARNING: Removing unreachable block (ram,0x0153cad4) */
/* WARNING: Removing unreachable block (ram,0x0153cb80) */
/* WARNING: Removing unreachable block (ram,0x0153cb88) */
/* WARNING: Removing unreachable block (ram,0x0153cb94) */
/* WARNING: Removing unreachable block (ram,0x0153cbb0) */
/* WARNING: Removing unreachable block (ram,0x0153cbb8) */
/* WARNING: Removing unreachable block (ram,0x0153cbc0) */
/* WARNING: Removing unreachable block (ram,0x0153cbd8) */
/* WARNING: Removing unreachable block (ram,0x0153cbe0) */
/* WARNING: Removing unreachable block (ram,0x0153cbf8) */
/* WARNING: Removing unreachable block (ram,0x0153cc00) */
/* WARNING: Removing unreachable block (ram,0x0153cc1c) */

void Atlas_Gameplay_Kart_BattleKartAI__SetTargetToPickup
               (long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  ulong unaff_x21;
  long lVar14;
  ulong uVar15;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong uVar16;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar17;
  undefined8 unaff_x28;
  undefined8 ******ppppppuVar18;
  undefined *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined8 unaff_d8;
  undefined4 uVar29;
  undefined8 unaff_d9;
  undefined4 uVar30;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined4 uVar31;
  undefined8 unaff_d15;
  undefined1 auVar32 [16];
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined8 *****pppppuStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  puVar6 = auStack_60;
  if ((bRam0000000003eb4f12 & 1) == 0) {
    func_0x00f78a20(0x3d3ac90);
    func_0x00f78a20(0x3d3aca0);
    func_0x00f78a20(0x3d3acb8);
    func_0x00f78a20(0x3d3b848);
    func_0x00f78a20(0x3d3cdd0);
    func_0x00f78a20(0x3d3cdd8);
    func_0x00f78a20(0x3d3b850);
    bRam0000000003eb4f12 = 1;
  }
  if ((((*(long *)(param_1 + 0x38) == 0) || (*(long *)(param_1 + 0x30) == 0)) ||
      (lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 0x1e8), lVar14 == 0)) ||
     ((*(long *)(lVar14 + 0x68) == 0 || (*(int *)(*(long *)(lVar14 + 0x68) + 0x18) < 1)))) {
    return;
  }
  if (*(long *)(param_1 + 0x1d0) != 0) {
    plVar11 = (long *)(param_1 + 0x1d0);
    /*System.Collections.Generic.List<int>$$Clear*/ func_0x023dbfb4(*(long *)(param_1 + 0x1d0),uRam0000000003d3aca0);
    uVar1 = *(uint *)(param_1 + 0xe0);
    unaff_x23 = (ulong)uVar1;
    unaff_x21 = (ulong)*(uint *)(param_1 + 0xe4);
    uVar2 = *(uint *)(param_1 + 0xdc);
    unaff_x24 = (ulong)uVar2;
    if (-1 < (int)*(uint *)(param_1 + 0xe4)) {
      if (*plVar11 == 0) goto LAB_0153cc40;
      param_3 = plRam0000000003d3ac90;
      /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(*plVar11,unaff_x21);
    }
    if (-1 < (int)uVar2) {
      if (*plVar11 == 0) goto LAB_0153cc40;
      param_3 = plRam0000000003d3ac90;
      /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(*plVar11,*(undefined4 *)(param_1 + 0xdc));
    }
    if (-1 < (int)uVar1) {
      if (*plVar11 == 0) goto LAB_0153cc40;
      /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(*plVar11,*(undefined4 *)(param_1 + 0xe0),plRam0000000003d3ac90);
    }
    lStack_58 = *(long *)(lVar14 + 0x68);
    plVar10 = &lStack_58;
    puVar19 = (undefined *)0x153cab4;
    lVar7 = param_1;
    plVar13 = plVar11;
    ppppppuVar18 = (undefined8 ******)&stack0xfffffffffffffff0;
    goto code_r0x0153cf68;
  }
LAB_0153cc40:
  lVar7 = func_0x00f78af4();
  puVar6 = auStack_c0;
  puStack_68 = &Atlas_Gameplay_Kart_BattleKartAI__SetTargetToOtherKart;
  ppppppuVar18 = &pppppuStack_70;
  plVar13 = (long *)0x3eb4000;
  plVar11 = param_3;
  pppppuStack_70 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4f14 & 1) == 0) {
    func_0x00f78a20(0x3d20058);
    func_0x00f78a20(0x3d3ac90);
    func_0x00f78a20(0x3d3aca0);
    func_0x00f78a20(0x3d3acb8);
    func_0x00f78a20(0x3d3cdd0);
    func_0x00f78a20(0x3d3ae38);
    func_0x00f78a20(0x3d3cdd8);
    bRam0000000003eb4f14 = 1;
    plVar11 = param_3;
  }
  if (*(long *)(lVar7 + 0x38) == 0) {
    return;
  }
  if (*(long *)(lVar7 + 0x30) == 0) {
    return;
  }
  if (*(long *)(*(long *)(lVar7 + 0x30) + 0x130) == 0) {
    return;
  }
  if (*(long *)(lVar7 + 0x1d0) == 0) {
code_r0x0153cf5c:
    func_0x00f78af4();
  }
  else {
    plVar13 = (long *)(lVar7 + 0x1d0);
    /*System.Collections.Generic.List<int>$$Clear*/ func_0x023dbfb4(*(long *)(lVar7 + 0x1d0),uRam0000000003d3aca0);
    uVar1 = *(uint *)(lVar7 + 0xe0);
    unaff_x23 = (ulong)uVar1;
    uVar2 = *(uint *)(lVar7 + 0xe4);
    unaff_x21 = (ulong)uVar2;
    uVar3 = *(uint *)(lVar7 + 0xdc);
    unaff_x24 = (ulong)uVar3;
    if (-1 < (int)uVar2) {
      if (*plVar13 == 0) goto code_r0x0153cf5c;
      plVar11 = plRam0000000003d3ac90;
      /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(*plVar13,unaff_x21);
    }
    if (-1 < (int)uVar3) {
      if (*plVar13 == 0) goto code_r0x0153cf5c;
      plVar11 = plRam0000000003d3ac90;
      /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(*plVar13,*(undefined4 *)(lVar7 + 0xdc));
    }
    if (-1 < (int)uVar1) {
      if (*plVar13 == 0) goto code_r0x0153cf5c;
      plVar11 = plRam0000000003d3ac90;
      /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(*plVar13,*(undefined4 *)(lVar7 + 0xe0));
    }
    if ((*(long *)(lVar7 + 0x30) == 0) ||
       (lVar12 = *(long *)(*(long *)(lVar7 + 0x30) + 0x130), lVar12 == 0)) goto code_r0x0153cf5c;
    lVar14 = *(long *)(lVar12 + 0x10);
    plVar11 = plVar13;
    lStack_b8 = lVar14;
    /*Atlas.Gameplay.Kart.BattleKartAI$$PopulateOtherKartIndexValueList*/ func_0x0153d484(lVar7,&lStack_b8);
    unaff_x25 = *(long *)(lVar7 + 0x1e8);
    if (unaff_x25 == 0) goto code_r0x0153cf5c;
    if ((*(int *)(unaff_x25 + 0x18) < 1) && (-1 < (int)uVar2)) {
      if (*plVar13 != 0) {
        /*System.Collections.Generic.List<int>$$Remove*/ func_0x023dd17c(*plVar13,*(undefined4 *)(lVar7 + 0xe4),uRam0000000003d3acb8);
        plVar11 = plVar13;
        /*Atlas.Gameplay.Kart.BattleKartAI$$PopulateOtherKartIndexValueList*/ func_0x0153d484(lVar7,&lStack_b8);
        unaff_x25 = *(long *)(lVar7 + 0x1e8);
        if (unaff_x25 != 0) goto code_r0x0153cddc;
      }
      goto code_r0x0153cf5c;
    }
code_r0x0153cddc:
    if ((*(int *)(unaff_x25 + 0x18) < 1) && (-1 < (int)uVar3)) {
      if (*plVar13 != 0) {
        /*System.Collections.Generic.List<int>$$Remove*/ func_0x023dd17c(*plVar13,*(undefined4 *)(lVar7 + 0xdc),uRam0000000003d3acb8);
        plVar11 = plVar13;
        /*Atlas.Gameplay.Kart.BattleKartAI$$PopulateOtherKartIndexValueList*/ func_0x0153d484(lVar7,&lStack_b8);
        unaff_x25 = *(long *)(lVar7 + 0x1e8);
        if (unaff_x25 != 0) goto code_r0x0153ce20;
      }
      goto code_r0x0153cf5c;
    }
code_r0x0153ce20:
    if ((*(int *)(unaff_x25 + 0x18) < 1) && (-1 < (int)uVar1)) {
      if (*plVar13 != 0) {
        /*System.Collections.Generic.List<int>$$Remove*/ func_0x023dd17c(*plVar13,*(undefined4 *)(lVar7 + 0xe0),uRam0000000003d3acb8);
        plVar11 = plVar13;
        /*Atlas.Gameplay.Kart.BattleKartAI$$PopulateOtherKartIndexValueList*/ func_0x0153d484(lVar7,&lStack_b8);
        unaff_x25 = *(long *)(lVar7 + 0x1e8);
        if (unaff_x25 != 0) goto code_r0x0153ce64;
      }
      goto code_r0x0153cf5c;
    }
code_r0x0153ce64:
    if (*(int *)(unaff_x25 + 0x18) < 1) {
      return;
    }
    plVar11 = (long *)0x0;
    plVar13 = (long *)/*UnityEngine.Random$$Range*/ func_0x032528a0(0);
    if (*(uint *)(unaff_x25 + 0x18) <= (uint)plVar13) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (lVar14 == 0) goto code_r0x0153cf5c;
    plVar13 = *(long **)(*(long *)(unaff_x25 + 0x10) + (long)(int)(uint)plVar13 * 8 + 0x20);
    if (*(uint *)(lVar14 + 0x18) <= (uint)plVar13) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar12 = *(long *)(*(long *)(lVar14 + 0x10) + (((long)plVar13 << 0x20) >> 0x1d) + 0x20);
    if (lVar12 == 0) goto code_r0x0153cf5c;
    plVar13 = *(long **)(lVar12 + 0x68);
    if (plVar13 == (long *)0x0) {
code_r0x0153cf08:
      if ((*(long *)(lVar12 + 0x10) != 0) &&
         (lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + 0x70), lVar12 != 0)) {
        uVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar12,0);
        *(undefined8 *)(lVar7 + 0x98) = uVar8;
        *(undefined4 *)(lVar7 + 0xe4) = *(undefined4 *)(lVar7 + 0xe8);
        if (plVar13 == (long *)0x0) {
          uVar20 = 0xffffffff;
        }
        else {
          uVar20 = (undefined4)plVar13[0x1c];
        }
        *(undefined4 *)(lVar7 + 0xe8) = uVar20;
        return;
      }
      goto code_r0x0153cf5c;
    }
    if ((*(byte *)(/*Atlas.Gameplay.Kart.BattleKartAI_TypeInfo*/ lRam0000000003d20058 + 300) <= *(byte *)(*plVar13 + 300)) &&
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.BattleKartAI_TypeInfo*/ lRam0000000003d20058 + 300) * 8 + -8)
        == /*Atlas.Gameplay.Kart.BattleKartAI_TypeInfo*/ lRam0000000003d20058)) goto code_r0x0153cf08;
  }
  puVar19 = &Atlas_Gameplay_Kart_BattleKartAI__PopulatePickupBoxIndexValueList;
  auVar32 = func_0x00f78e5c(plVar13);
  plVar10 = auVar32._8_8_;
  param_1 = auVar32._0_8_;
code_r0x0153cf68:
  *(undefined8 *)(puVar6 + -0xa0) = unaff_d15;
  *(undefined8 *)(puVar6 + -0x98) = unaff_d14;
  *(undefined8 *)(puVar6 + -0x90) = unaff_d13;
  *(undefined8 *)(puVar6 + -0x88) = unaff_d12;
  *(undefined8 *)(puVar6 + -0x80) = unaff_d11;
  *(undefined8 *)(puVar6 + -0x78) = unaff_d10;
  *(undefined8 *)(puVar6 + -0x70) = unaff_d9;
  *(undefined8 *)(puVar6 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar6 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar6 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
  *(long *)(puVar6 + -0x48) = unaff_x25;
  *(ulong *)(puVar6 + -0x40) = unaff_x24;
  *(ulong *)(puVar6 + -0x38) = unaff_x23;
  *(long *)(puVar6 + -0x30) = lVar14;
  *(ulong *)(puVar6 + -0x28) = unaff_x21;
  *(long **)(puVar6 + -0x20) = plVar13;
  *(long *)(puVar6 + -0x18) = lVar7;
  *(undefined8 *******)(puVar6 + -0x10) = ppppppuVar18;
  *(undefined **)(puVar6 + -8) = puVar19;
  if ((bRam0000000003eb4f13 & 1) == 0) {
    func_0x00f78a20(0x3d327d8);
    func_0x00f78a20(0x3d327e0);
    func_0x00f78a20(0x3d327e8);
    func_0x00f78a20(0x3d3cdc0);
    func_0x00f78a20(0x3d3cdc8);
    func_0x00f78a20(0x3d3acb0);
    func_0x00f78a20(0x3d3b848);
    func_0x00f78a20(0x3d3cdd0);
    func_0x00f78a20(0x3d3cdd8);
    func_0x00f78a20(0x3d3b850);
    func_0x00f78a20(0x3d3cde0);
    bRam0000000003eb4f13 = 1;
  }
  *(undefined8 *)(puVar6 + -0xc0) = 0;
  *(undefined8 *)(puVar6 + -0xb8) = 0;
  *(undefined8 *)(puVar6 + -0xb0) = 0;
  *(undefined4 *)(puVar6 + -200) = 0;
  if (*(long *)(param_1 + 0x1e8) != 0) {
    /*System.Collections.Generic.List<BattleKartAI.IndexValuePair>$$Clear*/ func_0x024cba64(*(long *)(param_1 + 0x1e8),uRam0000000003d3cdc8);
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar14 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar14 != 0)) {
      lVar14 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar14,0);
      uVar23 = *(undefined4 *)(lVar14 + 0x140);
      uVar25 = *(undefined4 *)(lVar14 + 0x144);
      uVar20 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar14 + 0x13c),0);
      *(undefined4 *)(puVar6 + -0xf0) = uVar23;
      *(undefined4 *)(puVar6 + -0xec) = uVar20;
      *(undefined4 *)(puVar6 + -0xf4) = uVar25;
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (lVar14 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar14 != 0)) {
        lVar14 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar14,0);
        uVar23 = *(undefined4 *)(lVar14 + 0x11c);
        uVar25 = *(undefined4 *)(lVar14 + 0x120);
        uVar20 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar14 + 0x118),0);
        lVar14 = *(long *)(param_1 + 0x60);
        if ((lVar14 != 0) && (lVar7 = *plVar10, lVar7 != 0)) {
          iVar17 = 0;
          uVar16 = 0;
          uVar28 = *(undefined4 *)(lVar14 + 0x80);
          uVar31 = *(undefined4 *)(lVar14 + 0x84);
          uVar30 = *(undefined4 *)(lVar14 + 0x78);
          uVar29 = *(undefined4 *)(lVar14 + 0x7c);
          uVar24 = uVar23;
          uVar26 = uVar25;
          do {
            if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar16) {
              return;
            }
            if (*(uint *)(lVar7 + 0x18) <= uVar16) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if (*plVar11 == 0) break;
            lVar14 = *(long *)(*(long *)(lVar7 + 0x10) + uVar16 * 8 + 0x20);
            /*System.Collections.Generic.List<int>$$GetEnumerator*/ func_0x023dc788(puVar6 + -0xe8,*plVar11,uRam0000000003d3acb0);
            *(undefined8 *)(puVar6 + -0xb8) = *(undefined8 *)(puVar6 + -0xe0);
            *(undefined8 *)(puVar6 + -0xc0) = *(undefined8 *)(puVar6 + -0xe8);
            *(undefined8 *)(puVar6 + -0xb0) = *(undefined8 *)(puVar6 + -0xd8);
            do {
              uVar9 = /*System.Collections.Generic.List.Enumerator<int>$$MoveNext*/ func_0x01f68c28(puVar6 + -0xc0,uRam0000000003d327e0);
              if ((uVar9 & 1) == 0) break;
              if (lVar14 == 0) {
                func_0x00f78af4();
                goto code_r0x0153d35c;
              }
            } while (*(int *)(lVar14 + 0x48) != *(int *)(puVar6 + -0xb0));
            *(undefined4 *)(puVar6 + (long)iVar17 * 4 + -0xd0) = 0x9e;
            iVar4 = *(int *)(puVar6 + -200);
            iVar17 = iVar4 + 1;
            *(int *)(puVar6 + -200) = iVar17;
            /*System.Collections.Generic.List.Enumerator<int>$$Dispose*/ func_0x01f68c24(puVar6 + -0xc0,uRam0000000003d327d8);
            if ((iVar17 != 0) && (*(int *)(puVar6 + (long)iVar4 * 4 + -0xd0) == 0x9e)) {
              *(int *)(puVar6 + -200) = iVar4;
              iVar17 = iVar4;
            }
            if ((uVar9 & 1) == 0) {
              if (((lVar14 == 0) || (*(long *)(lVar14 + 0x18) == 0)) ||
                 (lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar14 + 0x18),0), lVar7 == 0)) break;
              uVar21 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar7,0);
              if (*(long *)(lVar14 + 0x20) == 0) break;
              uVar27 = *(undefined4 *)(*(long *)(lVar14 + 0x20) + 0x50);
              *(undefined4 *)(puVar6 + -0x108) = uVar28;
              *(undefined4 *)(puVar6 + -0x104) = uVar31;
              *(undefined4 *)(puVar6 + -0x110) = uVar30;
              *(undefined4 *)(puVar6 + -0x10c) = uVar29;
              *(undefined4 *)(puVar6 + -0x118) = uVar26;
              *(undefined4 *)(puVar6 + -0x114) = uVar27;
              *(undefined4 *)(puVar6 + -0x120) = uVar21;
              *(undefined4 *)(puVar6 + -0x11c) = uVar24;
              uVar24 = *(undefined4 *)(puVar6 + -0xf0);
              uVar26 = *(undefined4 *)(puVar6 + -0xf4);
              fVar22 = (float)/*Atlas.Gameplay.Kart.BattleKartAI$$EvaluateWeight*/ func_0x0153d364(*(undefined4 *)(puVar6 + -0xec),uVar24,uVar26,uVar20,
                                              uVar23,uVar25);
              lVar14 = *(long *)(param_1 + 0x1e8);
              if (lVar14 == 0) break;
              uVar9 = (ulong)*(uint *)(lVar14 + 0x18);
              if ((int)*(uint *)(lVar14 + 0x18) < 3) {
                /*System.Collections.Generic.List<BattleKartAI.IndexValuePair>$$Add*/ func_0x024cb77c(lVar14,uVar16 | (ulong)(uint)fVar22 << 0x20,uRam0000000003d3cdc0);
              }
              else {
                uVar15 = 0;
                lVar7 = 0x24;
                do {
                  if ((uVar9 & 0xffffffff) <= uVar15) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  if (*(float *)(*(long *)(lVar14 + 0x10) + lVar7) < fVar22) {
                    lVar14 = *(long *)(param_1 + 0x1e8);
                    if (lVar14 == 0) goto code_r0x0153d358;
                    if (*(uint *)(lVar14 + 0x18) <= (uint)uVar15) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      lVar14 = *(long *)(param_1 + 0x1e8);
                      if (lVar14 == 0) goto code_r0x0153d358;
                    }
                    /*System.Collections.Generic.List<BattleKartAI.IndexValuePair>$$set_Item*/ func_0x024cb424(lVar14,uVar15,uVar16 | (ulong)(uint)fVar22 << 0x20,
                                    uRam0000000003d3cde0);
                    break;
                  }
                  lVar14 = *(long *)(param_1 + 0x1e8);
                  if (lVar14 == 0) goto code_r0x0153d358;
                  uVar15 = uVar15 + 1;
                  uVar9 = (ulong)*(int *)(lVar14 + 0x18);
                  lVar7 = lVar7 + 8;
                } while ((long)uVar15 < (long)uVar9);
              }
            }
            uVar16 = uVar16 + 1;
            lVar7 = *plVar10;
          } while (lVar7 != 0);
        }
      }
    }
  }
code_r0x0153d358:
  func_0x00f78af4();
code_r0x0153d35c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x153d360);
  (*pcVar5)();
}



// ============================================================
// RVA: 0x153cc44 | Atlas.Gameplay.Kart.BattleKartAI.SetTargetToOtherKart
// ============================================================

void Atlas_Gameplay_Kart_BattleKartAI__SetTargetToOtherKart
               (long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  int aiStack_130 [4];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_58;
  
  plVar8 = (long *)0x3eb4000;
  if ((bRam0000000003eb4f14 & 1) == 0) {
    func_0x00f78a20(0x3d20058);
    func_0x00f78a20(0x3d3ac90);
    func_0x00f78a20(0x3d3aca0);
    func_0x00f78a20(0x3d3acb8);
    func_0x00f78a20(0x3d3cdd0);
    func_0x00f78a20(0x3d3ae38);
    func_0x00f78a20(0x3d3cdd8);
    bRam0000000003eb4f14 = 1;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  if (*(long *)(*(long *)(param_1 + 0x30) + 0x130) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x1d0) != 0) {
    plVar8 = (long *)(param_1 + 0x1d0);
    /*System.Collections.Generic.List<int>$$Clear*/ func_0x023dbfb4(*(long *)(param_1 + 0x1d0),uRam0000000003d3aca0);
    iVar12 = *(int *)(param_1 + 0xe0);
    iVar1 = *(int *)(param_1 + 0xe4);
    iVar2 = *(int *)(param_1 + 0xdc);
    if (-1 < iVar1) {
      if (*plVar8 == 0) goto LAB_0153cf5c;
      param_3 = plRam0000000003d3ac90;
      /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(*plVar8,iVar1);
    }
    if (-1 < iVar2) {
      if (*plVar8 == 0) goto LAB_0153cf5c;
      param_3 = plRam0000000003d3ac90;
      /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(*plVar8,*(undefined4 *)(param_1 + 0xdc));
    }
    if (-1 < iVar12) {
      if (*plVar8 == 0) goto LAB_0153cf5c;
      param_3 = plRam0000000003d3ac90;
      /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(*plVar8,*(undefined4 *)(param_1 + 0xe0));
    }
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 0x130), lVar7 != 0)) {
      lVar7 = *(long *)(lVar7 + 0x10);
      param_3 = plVar8;
      lStack_58 = lVar7;
      /*Atlas.Gameplay.Kart.BattleKartAI$$PopulateOtherKartIndexValueList*/ func_0x0153d484(param_1,&lStack_58);
      lVar11 = *(long *)(param_1 + 0x1e8);
      if (lVar11 != 0) {
        if ((*(int *)(lVar11 + 0x18) < 1) && (-1 < iVar1)) {
          if (*plVar8 != 0) {
            /*System.Collections.Generic.List<int>$$Remove*/ func_0x023dd17c(*plVar8,*(undefined4 *)(param_1 + 0xe4),uRam0000000003d3acb8);
            param_3 = plVar8;
            /*Atlas.Gameplay.Kart.BattleKartAI$$PopulateOtherKartIndexValueList*/ func_0x0153d484(param_1,&lStack_58);
            lVar11 = *(long *)(param_1 + 0x1e8);
            if (lVar11 != 0) goto LAB_0153cddc;
          }
        }
        else {
LAB_0153cddc:
          if ((*(int *)(lVar11 + 0x18) < 1) && (-1 < iVar2)) {
            if (*plVar8 != 0) {
              /*System.Collections.Generic.List<int>$$Remove*/ func_0x023dd17c(*plVar8,*(undefined4 *)(param_1 + 0xdc),uRam0000000003d3acb8);
              param_3 = plVar8;
              /*Atlas.Gameplay.Kart.BattleKartAI$$PopulateOtherKartIndexValueList*/ func_0x0153d484(param_1,&lStack_58);
              lVar11 = *(long *)(param_1 + 0x1e8);
              if (lVar11 != 0) goto LAB_0153ce20;
            }
          }
          else {
LAB_0153ce20:
            if ((*(int *)(lVar11 + 0x18) < 1) && (-1 < iVar12)) {
              if (*plVar8 != 0) {
                /*System.Collections.Generic.List<int>$$Remove*/ func_0x023dd17c(*plVar8,*(undefined4 *)(param_1 + 0xe0),uRam0000000003d3acb8);
                param_3 = plVar8;
                /*Atlas.Gameplay.Kart.BattleKartAI$$PopulateOtherKartIndexValueList*/ func_0x0153d484(param_1,&lStack_58);
                lVar11 = *(long *)(param_1 + 0x1e8);
                if (lVar11 != 0) goto LAB_0153ce64;
              }
            }
            else {
LAB_0153ce64:
              if (*(int *)(lVar11 + 0x18) < 1) {
                return;
              }
              param_3 = (long *)0x0;
              plVar8 = (long *)/*UnityEngine.Random$$Range*/ func_0x032528a0(0);
              if (*(uint *)(lVar11 + 0x18) <= (uint)plVar8) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              if (lVar7 != 0) {
                plVar8 = *(long **)(*(long *)(lVar11 + 0x10) + (long)(int)(uint)plVar8 * 8 + 0x20);
                if (*(uint *)(lVar7 + 0x18) <= (uint)plVar8) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (((long)plVar8 << 0x20) >> 0x1d) + 0x20)
                ;
                if (lVar7 != 0) {
                  plVar8 = *(long **)(lVar7 + 0x68);
                  if (plVar8 != (long *)0x0) {
                    if ((*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.BattleKartAI_TypeInfo*/ lRam0000000003d20058 + 300)) ||
                       (*(long *)(*(long *)(*plVar8 + 200) +
                                  (ulong)*(byte *)(/*Atlas.Gameplay.Kart.BattleKartAI_TypeInfo*/ lRam0000000003d20058 + 300) * 8 + -8) !=
                        /*Atlas.Gameplay.Kart.BattleKartAI_TypeInfo*/ lRam0000000003d20058)) goto LAB_0153cf60;
                  }
                  if ((*(long *)(lVar7 + 0x10) != 0) &&
                     (lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + 0x70), lVar7 != 0)) {
                    uVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
                    *(undefined8 *)(param_1 + 0x98) = uVar4;
                    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0xe8);
                    if (plVar8 == (long *)0x0) {
                      uVar13 = 0xffffffff;
                    }
                    else {
                      uVar13 = (undefined4)plVar8[0x1c];
                    }
                    *(undefined4 *)(param_1 + 0xe8) = uVar13;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0153cf5c:
  func_0x00f78af4();
LAB_0153cf60:
  auVar20 = func_0x00f78e5c(plVar8);
  lVar7 = auVar20._0_8_;
  if ((bRam0000000003eb4f13 & 1) == 0) {
    func_0x00f78a20(0x3d327d8);
    func_0x00f78a20(0x3d327e0);
    func_0x00f78a20(0x3d327e8);
    func_0x00f78a20(0x3d3cdc0);
    func_0x00f78a20(0x3d3cdc8);
    func_0x00f78a20(0x3d3acb0);
    func_0x00f78a20(0x3d3b848);
    func_0x00f78a20(0x3d3cdd0);
    func_0x00f78a20(0x3d3cdd8);
    func_0x00f78a20(0x3d3b850);
    func_0x00f78a20(0x3d3cde0);
    bRam0000000003eb4f13 = 1;
  }
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  aiStack_130[2] = 0;
  if (*(long *)(lVar7 + 0x1e8) != 0) {
    /*System.Collections.Generic.List<BattleKartAI.IndexValuePair>$$Clear*/ func_0x024cba64(*(long *)(lVar7 + 0x1e8),uRam0000000003d3cdc8);
    if ((*(long *)(lVar7 + 0x38) != 0) &&
       (lVar11 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10), lVar11 != 0)) {
      lVar11 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar11,0);
      uVar16 = *(undefined4 *)(lVar11 + 0x140);
      uVar18 = *(undefined4 *)(lVar11 + 0x144);
      uVar13 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar11 + 0x13c),0);
      if ((*(long *)(lVar7 + 0x38) != 0) &&
         (lVar11 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10), lVar11 != 0)) {
        lVar11 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar11,0);
        uVar17 = *(undefined4 *)(lVar11 + 0x11c);
        uVar19 = *(undefined4 *)(lVar11 + 0x120);
        uVar14 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar11 + 0x118),0);
        if ((*(long *)(lVar7 + 0x60) != 0) && (lVar11 = *auVar20._8_8_, lVar11 != 0)) {
          iVar12 = 0;
          uVar10 = 0;
          do {
            if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar10) {
              return;
            }
            if (*(uint *)(lVar11 + 0x18) <= uVar10) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if (*param_3 == 0) break;
            lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + uVar10 * 8 + 0x20);
            /*System.Collections.Generic.List<int>$$GetEnumerator*/ func_0x023dc788(&uStack_148,*param_3,uRam0000000003d3acb0);
            uStack_118 = uStack_140;
            uStack_120 = uStack_148;
            uStack_110 = uStack_138;
            do {
              uVar5 = /*System.Collections.Generic.List.Enumerator<int>$$MoveNext*/ func_0x01f68c28(&uStack_120,uRam0000000003d327e0);
              if ((uVar5 & 1) == 0) break;
              if (lVar11 == 0) {
                func_0x00f78af4();
                goto code_r0x0153d35c;
              }
            } while (*(int *)(lVar11 + 0x48) != (int)uStack_110);
            aiStack_130[iVar12] = 0x9e;
            iVar1 = aiStack_130[2];
            iVar12 = aiStack_130[2] + 1;
            aiStack_130[2] = iVar12;
            /*System.Collections.Generic.List.Enumerator<int>$$Dispose*/ func_0x01f68c24(&uStack_120,uRam0000000003d327d8);
            if ((iVar12 != 0) && (aiStack_130[iVar1] == 0x9e)) {
              iVar12 = iVar1;
              aiStack_130[2] = iVar1;
            }
            if ((uVar5 & 1) == 0) {
              if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x18) == 0)) ||
                  (lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar11 + 0x18),0), lVar6 == 0)) ||
                 (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar6,0), *(long *)(lVar11 + 0x20) == 0)) break;
              fVar15 = (float)/*Atlas.Gameplay.Kart.BattleKartAI$$EvaluateWeight*/ func_0x0153d364(uVar13,uVar16,uVar18,uVar14,uVar17,uVar19);
              lVar11 = *(long *)(lVar7 + 0x1e8);
              if (lVar11 == 0) break;
              uVar5 = (ulong)*(uint *)(lVar11 + 0x18);
              if ((int)*(uint *)(lVar11 + 0x18) < 3) {
                /*System.Collections.Generic.List<BattleKartAI.IndexValuePair>$$Add*/ func_0x024cb77c(lVar11,uVar10 | (ulong)(uint)fVar15 << 0x20,uRam0000000003d3cdc0);
              }
              else {
                uVar9 = 0;
                lVar6 = 0x24;
                do {
                  if ((uVar5 & 0xffffffff) <= uVar9) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  if (*(float *)(*(long *)(lVar11 + 0x10) + lVar6) < fVar15) {
                    lVar11 = *(long *)(lVar7 + 0x1e8);
                    if (lVar11 == 0) goto code_r0x0153d358;
                    if (*(uint *)(lVar11 + 0x18) <= (uint)uVar9) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      lVar11 = *(long *)(lVar7 + 0x1e8);
                      if (lVar11 == 0) goto code_r0x0153d358;
                    }
                    /*System.Collections.Generic.List<BattleKartAI.IndexValuePair>$$set_Item*/ func_0x024cb424(lVar11,uVar9,uVar10 | (ulong)(uint)fVar15 << 0x20,
                                    uRam0000000003d3cde0);
                    break;
                  }
                  lVar11 = *(long *)(lVar7 + 0x1e8);
                  if (lVar11 == 0) goto code_r0x0153d358;
                  uVar9 = uVar9 + 1;
                  uVar5 = (ulong)*(int *)(lVar11 + 0x18);
                  lVar6 = lVar6 + 8;
                } while ((long)uVar9 < (long)uVar5);
              }
            }
            uVar10 = uVar10 + 1;
            lVar11 = *auVar20._8_8_;
          } while (lVar11 != 0);
        }
      }
    }
  }
code_r0x0153d358:
  func_0x00f78af4();
code_r0x0153d35c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x153d360);
  (*pcVar3)();
}



// ============================================================
// RVA: 0x153cf68 | Atlas.Gameplay.Kart.BattleKartAI.PopulatePickupBoxIndexValueList
// ============================================================

void Atlas_Gameplay_Kart_BattleKartAI__PopulatePickupBoxIndexValueList
               (long param_1,long *param_2,long *param_3)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int aiStack_d0 [4];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  if ((bRam0000000003eb4f13 & 1) == 0) {
    func_0x00f78a20(0x3d327d8);
    func_0x00f78a20(0x3d327e0);
    func_0x00f78a20(0x3d327e8);
    func_0x00f78a20(0x3d3cdc0);
    func_0x00f78a20(0x3d3cdc8);
    func_0x00f78a20(0x3d3acb0);
    func_0x00f78a20(0x3d3b848);
    func_0x00f78a20(0x3d3cdd0);
    func_0x00f78a20(0x3d3cdd8);
    func_0x00f78a20(0x3d3b850);
    func_0x00f78a20(0x3d3cde0);
    bRam0000000003eb4f13 = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  aiStack_d0[2] = 0;
  if (*(long *)(param_1 + 0x1e8) != 0) {
    /*System.Collections.Generic.List<BattleKartAI.IndexValuePair>$$Clear*/ func_0x024cba64(*(long *)(param_1 + 0x1e8),uRam0000000003d3cdc8);
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar3 != 0)) {
      lVar3 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar3,0);
      uVar12 = *(undefined4 *)(lVar3 + 0x140);
      uVar14 = *(undefined4 *)(lVar3 + 0x144);
      uVar9 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar3 + 0x13c),0);
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar3 != 0)) {
        lVar3 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar3,0);
        uVar13 = *(undefined4 *)(lVar3 + 0x11c);
        uVar15 = *(undefined4 *)(lVar3 + 0x120);
        uVar10 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar3 + 0x118),0);
        if ((*(long *)(param_1 + 0x60) != 0) && (lVar3 = *param_2, lVar3 != 0)) {
          iVar8 = 0;
          uVar7 = 0;
          do {
            if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar7) {
              return;
            }
            if (*(uint *)(lVar3 + 0x18) <= uVar7) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if (*param_3 == 0) break;
            lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + uVar7 * 8 + 0x20);
            /*System.Collections.Generic.List<int>$$GetEnumerator*/ func_0x023dc788(&uStack_e8,*param_3,uRam0000000003d3acb0);
            uStack_b8 = uStack_e0;
            uStack_c0 = uStack_e8;
            uStack_b0 = uStack_d8;
            do {
              uVar4 = /*System.Collections.Generic.List.Enumerator<int>$$MoveNext*/ func_0x01f68c28(&uStack_c0,uRam0000000003d327e0);
              if ((uVar4 & 1) == 0) break;
              if (lVar3 == 0) {
                func_0x00f78af4();
                goto code_r0x0153d35c;
              }
            } while (*(int *)(lVar3 + 0x48) != (int)uStack_b0);
            aiStack_d0[iVar8] = 0x9e;
            iVar1 = aiStack_d0[2];
            iVar8 = aiStack_d0[2] + 1;
            aiStack_d0[2] = iVar8;
            /*System.Collections.Generic.List.Enumerator<int>$$Dispose*/ func_0x01f68c24(&uStack_c0,uRam0000000003d327d8);
            if ((iVar8 != 0) && (aiStack_d0[iVar1] == 0x9e)) {
              iVar8 = iVar1;
              aiStack_d0[2] = iVar1;
            }
            if ((uVar4 & 1) == 0) {
              if ((((lVar3 == 0) || (*(long *)(lVar3 + 0x18) == 0)) ||
                  (lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar3 + 0x18),0), lVar5 == 0)) ||
                 (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0), *(long *)(lVar3 + 0x20) == 0)) break;
              fVar11 = (float)/*Atlas.Gameplay.Kart.BattleKartAI$$EvaluateWeight*/ func_0x0153d364(uVar9,uVar12,uVar14,uVar10,uVar13,uVar15);
              lVar3 = *(long *)(param_1 + 0x1e8);
              if (lVar3 == 0) break;
              uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
              if ((int)*(uint *)(lVar3 + 0x18) < 3) {
                /*System.Collections.Generic.List<BattleKartAI.IndexValuePair>$$Add*/ func_0x024cb77c(lVar3,uVar7 | (ulong)(uint)fVar11 << 0x20,uRam0000000003d3cdc0);
              }
              else {
                uVar6 = 0;
                lVar5 = 0x24;
                do {
                  if ((uVar4 & 0xffffffff) <= uVar6) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  if (*(float *)(*(long *)(lVar3 + 0x10) + lVar5) < fVar11) {
                    lVar3 = *(long *)(param_1 + 0x1e8);
                    if (lVar3 == 0) goto LAB_0153d358;
                    if (*(uint *)(lVar3 + 0x18) <= (uint)uVar6) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      lVar3 = *(long *)(param_1 + 0x1e8);
                      if (lVar3 == 0) goto LAB_0153d358;
                    }
                    /*System.Collections.Generic.List<BattleKartAI.IndexValuePair>$$set_Item*/ func_0x024cb424(lVar3,uVar6,uVar7 | (ulong)(uint)fVar11 << 0x20,
                                    uRam0000000003d3cde0);
                    break;
                  }
                  lVar3 = *(long *)(param_1 + 0x1e8);
                  if (lVar3 == 0) goto LAB_0153d358;
                  uVar6 = uVar6 + 1;
                  uVar4 = (ulong)*(int *)(lVar3 + 0x18);
                  lVar5 = lVar5 + 8;
                } while ((long)uVar6 < (long)uVar4);
              }
            }
            uVar7 = uVar7 + 1;
            lVar3 = *param_2;
          } while (lVar3 != 0);
        }
      }
    }
  }
LAB_0153d358:
  func_0x00f78af4();
code_r0x0153d35c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x153d360);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x153d364 | Atlas.Gameplay.Kart.BattleKartAI.EvaluateWeight
// ============================================================

float Atlas_Gameplay_Kart_BattleKartAI__EvaluateWeight
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                )

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  
  fStack_60 = fStack0000000000000000 - param_1;
  fStack_58 = fStack0000000000000008 - param_3;
  fStack_5c = 0.0;
  uVar1 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(&fStack_60,0);
  /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(0x40a00000,0x42480000,uVar1,0);
  fVar2 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
  fVar4 = 0.0;
  /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(0,0x40a00000,ABS(fStack0000000000000004 - param_2),0);
  fVar3 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
  if (0.0 < param_6 * fStack_58 + param_4 * fStack_60 + param_5 * fStack_5c) {
    fVar4 = 1.0;
  }
  return fStack0000000000000018 * fStack000000000000000c +
         fStack0000000000000010 * (1.0 - fVar2) + fStack0000000000000014 * (1.0 - fVar3) +
         fStack000000000000001c * fVar4;
}



// ============================================================
// RVA: 0x153d484 | Atlas.Gameplay.Kart.BattleKartAI.PopulateOtherKartIndexValueList
// ============================================================

undefined1  [16]
Atlas_Gameplay_Kart_BattleKartAI__PopulateOtherKartIndexValueList
          (long param_1,long *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int aiStack_d0 [4];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  if ((bRam0000000003eb4f15 & 1) == 0) {
    func_0x00f78a20(0x3d20058);
    func_0x00f78a20(0x3d327d8);
    func_0x00f78a20(0x3d327e0);
    func_0x00f78a20(0x3d327e8);
    func_0x00f78a20(0x3d3cdc0);
    func_0x00f78a20(0x3d3cdc8);
    func_0x00f78a20(0x3d3acb0);
    func_0x00f78a20(0x3d3cdd0);
    func_0x00f78a20(0x3d3ae30);
    func_0x00f78a20(0x3d3ae38);
    func_0x00f78a20(0x3d3cdd8);
    func_0x00f78a20(0x3d3cde0);
    bRam0000000003eb4f15 = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  aiStack_d0[2] = 0;
  if (*(long *)(param_1 + 0x1e8) != 0) {
    /*System.Collections.Generic.List<BattleKartAI.IndexValuePair>$$Clear*/ func_0x024cba64(*(long *)(param_1 + 0x1e8),uRam0000000003d3cdc8);
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar3 != 0)) {
      lVar3 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar3,0);
      uVar15 = *(undefined4 *)(lVar3 + 0x140);
      uVar17 = *(undefined4 *)(lVar3 + 0x144);
      uVar10 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar3 + 0x13c),0);
      uVar16 = *(undefined4 *)(lVar3 + 0x11c);
      uVar18 = *(undefined4 *)(lVar3 + 0x120);
      auVar14 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar3 + 0x118),uVar16,uVar18,0);
      uVar11 = auVar14._0_4_;
      if ((*(long *)(param_1 + 0x60) != 0) && (lVar3 = *param_2, lVar3 != 0)) {
        uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
        if (0 < (int)*(uint *)(lVar3 + 0x18)) {
          uVar7 = 0;
          iVar9 = 0;
          do {
            if ((uVar5 & 0xffffffff) <= uVar7) {
              auVar14 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + uVar7 * 8 + 0x20);
            if (lVar3 != *(long *)(param_1 + 0x38)) {
              if (lVar3 == 0) goto LAB_0153d8ac;
              plVar4 = *(long **)(lVar3 + 0x68);
              if (plVar4 != (long *)0x0) {
                if ((*(byte *)(*plVar4 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.BattleKartAI_TypeInfo*/ lRam0000000003d20058 + 300)) ||
                   (*(long *)(*(long *)(*plVar4 + 200) +
                              (ulong)*(byte *)(/*Atlas.Gameplay.Kart.BattleKartAI_TypeInfo*/ lRam0000000003d20058 + 300) * 8 + -8) !=
                    /*Atlas.Gameplay.Kart.BattleKartAI_TypeInfo*/ lRam0000000003d20058)) goto LAB_0153d8b0;
                lVar8 = plVar4[0x1c];
                if (-1 < (int)lVar8) {
                  if (*param_3 == 0) goto LAB_0153d8ac;
                  /*System.Collections.Generic.List<int>$$GetEnumerator*/ func_0x023dc788(&uStack_e8,*param_3,uRam0000000003d3acb0);
                  uStack_b8 = uStack_e0;
                  uStack_c0 = uStack_e8;
                  uStack_b0 = uStack_d8;
                  do {
                    uVar2 = /*System.Collections.Generic.List.Enumerator<int>$$MoveNext*/ func_0x01f68c28(&uStack_c0,uRam0000000003d327e0);
                  } while (uVar2 != 0 && (int)lVar8 != (int)uStack_b0);
                  aiStack_d0[iVar9] = 0xc5;
                  iVar1 = aiStack_d0[2];
                  iVar9 = aiStack_d0[2] + 1;
                  aiStack_d0[2] = iVar9;
                  auVar14 = /*System.Collections.Generic.List.Enumerator<int>$$Dispose*/ func_0x01f68c24(&uStack_c0,uRam0000000003d327d8);
                  if ((iVar9 != 0) && (aiStack_d0[iVar1] == 0xc5)) {
                    iVar9 = iVar1;
                    aiStack_d0[2] = iVar1;
                  }
                  if ((uVar2 & 1) != 0) goto LAB_0153d844;
                }
              }
              if ((*(long *)(lVar3 + 0x90) == 0) || (*(long *)(lVar3 + 0x10) == 0))
              goto LAB_0153d8ac;
              lVar3 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(*(long *)(lVar3 + 0x10),0);
              /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar3 + 0x13c),0);
              fVar12 = (float)Atlas_Gameplay_Kart_BattleKartAI__EvaluateWeight
                                        (uVar10,uVar15,uVar17,uVar11,uVar16,uVar18);
              lVar3 = *(long *)(param_1 + 0x1e8);
              if (lVar3 == 0) goto LAB_0153d8ac;
              uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
              if ((int)*(uint *)(lVar3 + 0x18) < 3) {
                auVar14 = /*System.Collections.Generic.List<BattleKartAI.IndexValuePair>$$Add*/ func_0x024cb77c(lVar3,uVar7 | (ulong)(uint)fVar12 << 0x20,
                                          uRam0000000003d3cdc0);
              }
              else {
                uVar6 = 0;
                lVar8 = 0x24;
                do {
                  if ((uVar5 & 0xffffffff) <= uVar6) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  fVar13 = *(float *)(*(long *)(lVar3 + 0x10) + lVar8);
                  auVar14 = ZEXT416((uint)fVar13);
                  if (fVar13 < fVar12) {
                    lVar3 = *(long *)(param_1 + 0x1e8);
                    if (lVar3 == 0) goto LAB_0153d8ac;
                    if (*(uint *)(lVar3 + 0x18) <= (uint)uVar6) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      lVar3 = *(long *)(param_1 + 0x1e8);
                      if (lVar3 == 0) goto LAB_0153d8ac;
                    }
                    auVar14 = /*System.Collections.Generic.List<BattleKartAI.IndexValuePair>$$set_Item*/ func_0x024cb424(lVar3,uVar6,uVar7 | (ulong)(uint)fVar12 << 0x20,
                                              uRam0000000003d3cde0);
                    break;
                  }
                  lVar3 = *(long *)(param_1 + 0x1e8);
                  if (lVar3 == 0) goto LAB_0153d8ac;
                  uVar6 = uVar6 + 1;
                  uVar5 = (ulong)*(int *)(lVar3 + 0x18);
                  lVar8 = lVar8 + 8;
                } while ((long)uVar6 < (long)uVar5);
              }
            }
LAB_0153d844:
            lVar3 = *param_2;
            if (lVar3 == 0) goto LAB_0153d8ac;
            uVar7 = uVar7 + 1;
            uVar5 = (ulong)*(int *)(lVar3 + 0x18);
          } while ((long)uVar7 < (long)uVar5);
        }
        return auVar14;
      }
    }
  }
LAB_0153d8ac:
  func_0x00f78af4();
LAB_0153d8b0:
  func_0x00f78e5c();
  lVar3 = __Unwind_Resume();
  return ZEXT416(*(uint *)(lVar3 + 0xd8));
}



// ============================================================
// RVA: 0x153d8b8 | Atlas.Gameplay.Kart.BattleKartAI.get_MinDistToNextTargetSq
// ============================================================

undefined4 Atlas_Gameplay_Kart_BattleKartAI__get_MinDistToNextTargetSq(long param_1)

{
  return *(undefined4 *)(param_1 + 0xd8);
}



// ============================================================
// RVA: 0x153d8c0 | Atlas.Gameplay.Kart.BattleKartAI.set_MinDistToNextTargetSq
// ============================================================

void Atlas_Gameplay_Kart_BattleKartAI__set_MinDistToNextTargetSq(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xd8) = param_1;
  return;
}



// ============================================================
// RVA: 0x153d8c8 | Atlas.Gameplay.Kart.BattleKartAI..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] Atlas_Gameplay_Kart_BattleKartAI___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4f17 & 1) == 0) {
    func_0x00f78a20(0x3d22c68);
    func_0x00f78a20(0x3d3cdb8);
    func_0x00f78a20(0x3d1e098);
    bRam0000000003eb4f17 = 1;
  }
  uVar1 = _UNK_033f8820;
  *(undefined8 *)(param_1 + 0xc4) = _UNK_033f8828;
  *(undefined8 *)(param_1 + 0xbc) = uVar1;
  uVar1 = _UNK_033f8830;
  *(undefined8 *)(param_1 + 0xd4) = _UNK_033f8838;
  *(undefined8 *)(param_1 + 0xcc) = uVar1;
  *(undefined8 *)(param_1 + 0xdc) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe4) = 0xffffffffffffffff;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<BattleKartAI.IndexValuePair>_TypeInfo*/ uRam0000000003d1e098);
  /*System.Collections.Generic.List<BattleKartAI.IndexValuePair>$$.ctor*/ func_0x024cab90(uVar1,3,uRam0000000003d3cdb8);
  *(undefined8 *)(param_1 + 0x1e8) = uVar1;
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



