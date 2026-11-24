// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Lighting.LightVolumeBehaviour

// ============================================================
// RVA: 0x1484028 | Atlas.Lighting.LightVolumeBehaviour.get_VolumeType
// ============================================================

undefined4 Atlas_Lighting_LightVolumeBehaviour__get_VolumeType(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1484030 | Atlas.Lighting.LightVolumeBehaviour.get_VolumeShape
// ============================================================

undefined4 Atlas_Lighting_LightVolumeBehaviour__get_VolumeShape(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ============================================================
// RVA: 0x1484038 | Atlas.Lighting.LightVolumeBehaviour.get_LowTone
// ============================================================

undefined4 Atlas_Lighting_LightVolumeBehaviour__get_LowTone(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x1484044 | Atlas.Lighting.LightVolumeBehaviour.get_MidTone
// ============================================================

undefined4 Atlas_Lighting_LightVolumeBehaviour__get_MidTone(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x1484050 | Atlas.Lighting.LightVolumeBehaviour.get_HighTone
// ============================================================

undefined4 Atlas_Lighting_LightVolumeBehaviour__get_HighTone(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x148405c | Atlas.Lighting.LightVolumeBehaviour.get_BlendDistance
// ============================================================

undefined4 Atlas_Lighting_LightVolumeBehaviour__get_BlendDistance(long param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



// ============================================================
// RVA: 0x1484064 | Atlas.Lighting.LightVolumeBehaviour.GenerateLightVolume
// ============================================================

/* WARNING: Possible PIC construction at 0x01484120: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01484124) */
/* WARNING: Removing unreachable block (ram,0x014841b0) */
/* WARNING: Removing unreachable block (ram,0x014841c0) */
/* WARNING: Removing unreachable block (ram,0x014841ec) */
/* WARNING: Removing unreachable block (ram,0x01484218) */
/* WARNING: Removing unreachable block (ram,0x01484130) */
/* WARNING: Removing unreachable block (ram,0x01484144) */
/* WARNING: Removing unreachable block (ram,0x01484148) */
/* WARNING: Removing unreachable block (ram,0x01484154) */
/* WARNING: Removing unreachable block (ram,0x01484158) */
/* WARNING: Removing unreachable block (ram,0x01484164) */
/* WARNING: Removing unreachable block (ram,0x01484168) */
/* WARNING: Removing unreachable block (ram,0x01484174) */
/* WARNING: Removing unreachable block (ram,0x01484178) */
/* WARNING: Removing unreachable block (ram,0x01484250) */

void Atlas_Lighting_LightVolumeBehaviour__GenerateLightVolume(long param_1)

{
  long lVar1;
  undefined8 *extraout_x8;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  if ((bRam0000000003eb4931 & 1) == 0) {
    func_0x00f78a20(0x3d265e8);
    bRam0000000003eb4931 = 1;
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
  if (lVar1 != 0) {
    /*UnityEngine.Transform$$get_lossyScale*/ func_0x032772bc(lVar1,0);
    /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
    lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
    if (lVar1 != 0) {
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar1,0);
      /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
      puVar2 = &uStack_c0;
      goto code_r0x014842c8;
    }
  }
  param_1 = func_0x00f78af4();
  puVar2 = extraout_x8;
code_r0x014842c8:
  if ((bRam0000000003eb4932 & 1) == 0) {
    func_0x00f78a20(0x3d22f80);
    bRam0000000003eb4932 = 1;
  }
  uVar8 = *(undefined4 *)(param_1 + 0x60);
  if (((*(ushort *)(/*Atlas.Lighting.LightWorld_TypeInfo*/ lRam0000000003d22f80 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Lighting.LightWorld_TypeInfo*/ lRam0000000003d22f80 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  uVar6 = *(undefined4 *)(param_1 + 0x48);
  fVar7 = *(float *)(param_1 + 100);
  *puVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined4 *)(puVar2 + 1) = uVar6;
  *(undefined4 *)((long)puVar2 + 0xc) = 0x3f800000;
  puVar2[2] = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar2 + 3) = uVar5;
  *(undefined4 *)((long)puVar2 + 0x1c) = 0x3f800000;
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(puVar2 + 5) = uVar3;
  *(undefined4 *)((long)puVar2 + 0x2c) = uVar8;
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  puVar2[7] = *(undefined8 *)(param_1 + 0x58);
  puVar2[6] = uVar4;
  *(float *)(puVar2 + 8) = 1.0 / fVar7;
  return;
}



// ============================================================
// RVA: 0x14842c8 | Atlas.Lighting.LightVolumeBehaviour.GenerateLightVolumeParams
// ============================================================

void Atlas_Lighting_LightVolumeBehaviour__GenerateLightVolumeParams
               (undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  
  if ((bRam0000000003eb4932 & 1) == 0) {
    func_0x00f78a20(0x3d22f80);
    bRam0000000003eb4932 = 1;
  }
  uVar6 = *(undefined4 *)(param_2 + 0x60);
  if (((*(ushort *)(/*Atlas.Lighting.LightWorld_TypeInfo*/ lRam0000000003d22f80 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Lighting.LightWorld_TypeInfo*/ lRam0000000003d22f80 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x38);
  uVar4 = *(undefined4 *)(param_2 + 0x48);
  fVar5 = *(float *)(param_2 + 100);
  *param_1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 1) = uVar4;
  *(undefined4 *)((long)param_1 + 0xc) = 0x3f800000;
  param_1[2] = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x3f800000;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 5) = uVar1;
  *(undefined4 *)((long)param_1 + 0x2c) = uVar6;
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  param_1[7] = *(undefined8 *)(param_2 + 0x58);
  param_1[6] = uVar2;
  *(float *)(param_1 + 8) = 1.0 / fVar5;
  return;
}



// ============================================================
// RVA: 0x14843a0 | Atlas.Lighting.LightVolumeBehaviour.OnDrawGizmos
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Lighting_LightVolumeBehaviour__OnDrawGizmos
               (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,long param_5)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_5,0);
  fVar6 = param_3;
  if (lVar2 != 0) {
    fVar9 = param_2;
    uVar3 = /*UnityEngine.Transform$$get_lossyScale*/ func_0x032772bc(lVar2,0);
    uVar13 = *(undefined4 *)(param_5 + 0x30);
    uVar12 = *(undefined4 *)(param_5 + 0x34);
    uVar14 = *(undefined4 *)(param_5 + 0x38);
    param_2 = fVar9;
    if (*(int *)(param_5 + 0x1c) == 0) {
      lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_5,0);
      fVar6 = param_3;
      if (lVar2 != 0) {
        /*UnityEngine.Transform$$get_localToWorldMatrix*/ func_0x03276000(&uStack_a0,lVar2,0);
        uStack_d8 = uStack_98;
        uStack_e0 = uStack_a0;
        uStack_c8 = uStack_88;
        uStack_d0 = uStack_90;
        uStack_b8 = uStack_78;
        uStack_c0 = uStack_80;
        uStack_a8 = uStack_68;
        uStack_b0 = uStack_70;
        /*UnityEngine.Gizmos$$set_matrix*/ func_0x0322fc5c(&uStack_e0,0);
        uVar3 = uVar14;
        uVar10 = uVar12;
        /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(uVar13,uVar12,uVar14,0x3f000000,0);
        uVar7 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        uVar4 = uVar3;
        uVar11 = uVar10;
        uVar8 = /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
        /*UnityEngine.Gizmos$$DrawCube*/ func_0x0322fa44(uVar7,uVar10,uVar3,uVar8,uVar11,uVar4,0);
        /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(uVar13,uVar12,uVar14,_UNK_033f83c8,0);
        /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        /*UnityEngine.Gizmos$$DrawWireCube*/ func_0x0322f998(0);
        /*UnityEngine.Matrix4x4$$get_identity*/ func_0x0323e808(&uStack_120,0);
        uStack_158 = uStack_118;
        uStack_160 = uStack_120;
        uStack_148 = uStack_108;
        uStack_150 = uStack_110;
        uStack_138 = uStack_f8;
        uStack_140 = uStack_100;
        uStack_128 = uStack_e8;
        uStack_130 = uStack_f0;
        /*UnityEngine.Gizmos$$set_matrix*/ func_0x0322fc5c(&uStack_160,0);
        return;
      }
    }
    else {
      fVar6 = param_3;
      lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_5,0);
      if (lVar2 != 0) {
        uVar4 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar2,0);
        fVar5 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(uVar3,0);
        iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar9,0);
        if (iVar1 == 0 && fVar9 <= fVar5) {
          fVar5 = fVar9;
        }
        iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(param_3,0);
        if (iVar1 == 0 && param_3 <= fVar5) {
          fVar5 = param_3;
        }
        /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(uVar13,uVar12,uVar14,0x3f000000,0);
        /*UnityEngine.Gizmos$$DrawSphere*/ func_0x0322f8e8(uVar4,param_2,fVar6,fVar5,0);
        /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(uVar13,uVar12,uVar14,_UNK_033f83c8,0);
        fVar6 = *(float *)(param_5 + 100);
        if (pcRam0000000003ebf568 == (code *)0x0) {
          pcRam0000000003ebf568 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.Gizmos::DrawWireSphere_Injected(UnityEngine.Vector3&,System.Single)"
                                      );
        }
        (*pcRam0000000003ebf568)(fVar5 - fVar6,&stack0xffffffffffffffc0);
        return;
      }
    }
  }
  lVar2 = func_0x00f78af4();
  uVar3 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
  *(undefined4 *)(lVar2 + 0x20) = uVar3;
  *(float *)(lVar2 + 0x24) = param_2;
  *(float *)(lVar2 + 0x28) = fVar6;
  *(undefined4 *)(lVar2 + 0x2c) = param_4;
  uVar3 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
  *(undefined4 *)(lVar2 + 0x30) = uVar3;
  *(float *)(lVar2 + 0x34) = param_2;
  *(float *)(lVar2 + 0x38) = fVar6;
  *(undefined4 *)(lVar2 + 0x3c) = param_4;
  uVar3 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
  *(undefined4 *)(lVar2 + 0x40) = uVar3;
  *(float *)(lVar2 + 0x44) = param_2;
  *(float *)(lVar2 + 0x48) = fVar6;
  *(undefined4 *)(lVar2 + 0x4c) = param_4;
  uStack_1a0 = 0;
  uStack_198 = 0;
  /*UnityEngine.Color$$.ctor*/ func_0x03222f84(0,0,0,0x3f000000,&uStack_1a0,0);
  *(undefined8 *)(lVar2 + 0x58) = uStack_198;
  *(undefined8 *)(lVar2 + 0x50) = uStack_1a0;
  *(undefined8 *)(lVar2 + 0x60) = _UNK_033f80f8;
  /*UnityEngine.MonoBehaviour$$.ctor*/ func_0x03248424(lVar2,0);
  return;
}



// ============================================================
// RVA: 0x148463c | Atlas.Lighting.LightVolumeBehaviour..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Lighting_LightVolumeBehaviour___ctor
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
  *(undefined4 *)(param_5 + 0x20) = uVar1;
  *(undefined4 *)(param_5 + 0x24) = param_2;
  *(undefined4 *)(param_5 + 0x28) = param_3;
  *(undefined4 *)(param_5 + 0x2c) = param_4;
  uVar1 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
  *(undefined4 *)(param_5 + 0x30) = uVar1;
  *(undefined4 *)(param_5 + 0x34) = param_2;
  *(undefined4 *)(param_5 + 0x38) = param_3;
  *(undefined4 *)(param_5 + 0x3c) = param_4;
  uVar1 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
  *(undefined4 *)(param_5 + 0x40) = uVar1;
  *(undefined4 *)(param_5 + 0x44) = param_2;
  *(undefined4 *)(param_5 + 0x48) = param_3;
  *(undefined4 *)(param_5 + 0x4c) = param_4;
  uStack_30 = 0;
  uStack_28 = 0;
  /*UnityEngine.Color$$.ctor*/ func_0x03222f84(0,0,0,0x3f000000,&uStack_30,0);
  *(undefined8 *)(param_5 + 0x58) = uStack_28;
  *(undefined8 *)(param_5 + 0x50) = uStack_30;
  *(undefined8 *)(param_5 + 0x60) = _UNK_033f80f8;
  /*UnityEngine.MonoBehaviour$$.ctor*/ func_0x03248424(param_5,0);
  return;
}



