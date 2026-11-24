// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Lighting.LightWorldMemberBehaviour

// ============================================================
// RVA: 0x14868c0 | Atlas.Lighting.LightWorldMemberBehaviour.get_IsDynamic
// ============================================================

undefined1 Atlas_Lighting_LightWorldMemberBehaviour__get_IsDynamic(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x14868c8 | Atlas.Lighting.LightWorldMemberBehaviour.get_DuplicatedMaterialsList
// ============================================================

undefined8 Atlas_Lighting_LightWorldMemberBehaviour__get_DuplicatedMaterialsList(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x14868d0 | Atlas.Lighting.LightWorldMemberBehaviour.GetLightWorldPosition
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Lighting_LightWorldMemberBehaviour__GetLightWorldPosition
                (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  long unaff_x21;
  undefined8 uVar20;
  long unaff_x22;
  long lVar21;
  undefined8 unaff_x23;
  long lVar22;
  uint uVar23;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 **ppuVar24;
  undefined1 auVar25 [16];
  undefined8 uStack_50;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
  if (lVar5 != 0) {
    /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0);
    uVar6 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
    return uVar6;
  }
  auVar25 = func_0x00f78af4();
  lVar5 = auVar25._8_8_;
  uVar12 = auVar25._0_8_;
  puStack_18 = &Atlas_Lighting_LightWorldMemberBehaviour__CreateDuplicatedMaterials;
  uVar6 = uVar12;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4940 & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d3b188);
    uVar6 = func_0x00f78a20(0x3d1dba8);
    bRam0000000003eb4940 = 1;
  }
  if (*(long *)(uVar12 + 0x20) != 0) {
    return uVar6;
  }
  uVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar12,0);
  if (lVar5 == 0) {
    lVar5 = func_0x00f78af4();
    if ((bRam0000000003eb4941 & 1) == 0) {
      func_0x00f78a20(0x3d3b1a8);
      bRam0000000003eb4941 = 1;
    }
    if (*(long *)(lVar5 + 0x20) != 0) {
      uVar6 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar5 + 0x20),uRam0000000003d3b1a8);
      *(undefined8 *)(lVar5 + 0x20) = 0;
      return uVar6;
    }
    uVar6 = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return uVar6;
  }
  uVar14 = 0;
  lVar15 = 0;
  Atlas_Rendering_MaterialDuplicator__DuplicateRendererMaterial(lVar5,uVar7,param_3,0,0,0);
  uVar20 = *(undefined8 *)(lVar5 + 0x18);
  uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<Material>_TypeInfo*/ uRam0000000003d1dba8);
  lVar16 = lRam0000000003d3b188;
  /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(uVar7,uVar20);
  *(undefined8 *)(uVar12 + 0x20) = uVar7;
  if ((bRam0000000003eb49a3 & 1) == 0) {
    func_0x00f78a20(0x3d3d4c8,0);
    func_0x00f78a20(0x3d3b1a8);
    bRam0000000003eb49a3 = 1;
  }
  if (*(long *)(lVar5 + 0x18) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar5 + 0x18),uRam0000000003d3b1a8);
    uVar6 = *(ulong *)(lVar5 + 0x10);
    if (uVar6 != 0) {
      uVar12 = uVar6;
      if (0 < *(int *)(uVar6 + 0x18)) {
        uVar12 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar6 + 0x10),0,*(int *)(uVar6 + 0x18),0);
        *(undefined4 *)(uVar6 + 0x18) = 0;
      }
      *(int *)(uVar6 + 0x1c) = *(int *)(uVar6 + 0x1c) + 1;
      return uVar12;
    }
  }
  auVar25 = func_0x00f78af4();
  lVar21 = auVar25._0_8_;
  puVar2 = &stack0xffffffffffffff90;
  uStack_50 = 0x3eb4000;
  ppuVar24 = (undefined1 **)&stack0xffffffffffffffc0;
  uVar20 = 0x3eb4000;
  lVar17 = lVar16;
  uVar7 = uVar14;
  lVar19 = lVar15;
  if ((bRam0000000003eb49a4 & 1) == 0) {
    func_0x00f78a20(0x3d57a18);
    bRam0000000003eb49a4 = 1;
  }
  if (auVar25._8_8_ == 0) {
    pcVar1 = Atlas_Rendering_MaterialDuplicator__DuplicateRendererMaterial;
    auVar25 = func_0x00f78af4();
    unaff_x23 = 0;
  }
  else {
    /*UnityEngine.GameObject$$GetComponentsInChildren<Renderer>*/ func_0x0185d724(auVar25._8_8_,1,*(undefined8 *)(lVar21 + 0x20),uRam0000000003d57a18);
    auVar25._8_8_ = *(undefined8 *)(lVar21 + 0x20);
    auVar25._0_8_ = lVar21;
    pcVar1 = Atlas_Rendering_MaterialDuplicator__DuplicateRendererMaterial;
    puVar2 = &stack0xffffffffffffffd0;
    lVar17 = lVar16;
    uVar7 = uVar14;
    lVar19 = lVar15;
    lVar15 = lVar5;
    uVar14 = uStack_50;
    lVar16 = unaff_x21;
    lVar21 = unaff_x22;
    uVar20 = unaff_x24;
    ppuVar24 = &puStack_20;
  }
  lVar22 = auVar25._8_8_;
  lVar8 = auVar25._0_8_;
  *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(long *)(puVar2 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar2 + -0x40) = uVar20;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(long *)(puVar2 + -0x30) = lVar21;
  *(long *)(puVar2 + -0x28) = lVar16;
  *(undefined8 *)(puVar2 + -0x20) = uVar14;
  *(long *)(puVar2 + -0x18) = lVar15;
  *(undefined1 ***)(puVar2 + -0x10) = ppuVar24;
  *(code **)(puVar2 + -8) = pcVar1;
  *(undefined8 *)(puVar2 + -0xa0) = uVar7;
  uVar6 = 0x3eb4000;
  lVar5 = lVar17;
  if ((bRam0000000003eb49a5 & 1) == 0) {
    func_0x00f78a20(0x3d32e28);
    func_0x00f78a20(0x3d32e30);
    func_0x00f78a20(0x3d32e38);
    func_0x00f78a20(0x3d3b1a8);
    func_0x00f78a20(0x3d3bbb0);
    func_0x00f78a20(0x3d3bbb8);
    func_0x00f78a20(0x3d3b1c0);
    func_0x00f78a20(0x3d3b1c8);
    func_0x00f78a20(0x3d3b1d0);
    func_0x00f78a20(0x3d3b1d8);
    func_0x00f78a20(0x3d3b1e0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb49a5 = 1;
  }
  *(undefined8 *)(puVar2 + -0x80) = 0;
  *(undefined8 *)(puVar2 + -0x78) = 0;
  *(undefined8 *)(puVar2 + -0x70) = 0;
  if (lVar22 == 0) goto LAB_0149217c;
  lVar16 = 0x3d32e30;
  unaff_x27 = 0x3d23990;
  unaff_x28 = 0x3d3b1c0;
  unaff_x26 = 0x3d3b1e0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar2 + -0x98,lVar22,uRam0000000003d3bbb8);
  *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0x90);
  *(undefined8 *)(puVar2 + -0x80) = *(undefined8 *)(puVar2 + -0x98);
  *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0x88);
  while (uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar2 + -0x80,uRam0000000003d32e30), (uVar12 & 1) != 0) {
    lVar22 = *(long *)(puVar2 + -0x70);
    if (lVar22 == 0) {
      func_0x00f78af4();
      goto code_r0x01492178;
    }
    lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar22,0);
    if (lVar5 == 0) {
      func_0x00f78af4();
      goto code_r0x01492178;
    }
    uVar7 = /*UnityEngine.GameObject$$get_tag*/ func_0x0322f10c(lVar5,0);
    lVar5 = *(long *)(puVar2 + -0xa0);
    uVar12 = Atlas_Rendering_MaterialDuplicator__ShouldSkipBasedOnTag(uVar7,uVar7);
    if ((uVar12 & 1) == 0) {
      lVar5 = 0;
      /*UnityEngine.Renderer$$GetSharedMaterials*/ func_0x0325bfc4(lVar22,*(undefined8 *)(lVar8 + 0x28));
      unaff_x25 = *(long *)(lVar8 + 0x28);
      if (unaff_x25 == 0) {
LAB_01492154:
        func_0x00f78af4();
code_r0x01492178:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x149217c);
        (*pcVar1)();
      }
      uVar6 = 0;
      while( true ) {
        uVar3 = *(uint *)(unaff_x25 + 0x18);
        uVar23 = (uint)uVar6;
        if ((int)uVar3 <= (int)uVar23) break;
        if (uVar3 <= uVar23) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar7 = *(undefined8 *)(*(long *)(unaff_x25 + 0x10) + (long)(int)uVar23 * 8 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar5 = 0;
        uVar12 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0);
        if ((uVar12 & 1) == 0) {
          uVar12 = Atlas_Rendering_MaterialDuplicator__DoesMaterialUseShaderInList(uVar7,lVar17);
          if ((uVar12 & 1) != 0) {
            lVar5 = Atlas_Rendering_MaterialDuplicator__GetCachedOrDuplicate(lVar8,uVar7,lVar19);
            if (*(long *)(lVar8 + 0x28) == 0) {
              func_0x00f78af4();
              goto code_r0x01492178;
            }
            /*System.Collections.Generic.List<RuntimeManager.AttachedInstance>$$set_Item*/ func_0x02426e68(*(long *)(lVar8 + 0x28),uVar6,lVar5,uRam0000000003d3b1e0);
          }
        }
        else {
          if (*(long *)(lVar8 + 0x28) == 0) {
            func_0x00f78af4();
            goto code_r0x01492178;
          }
          lVar5 = lRam0000000003d3b1c0;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar8 + 0x28),uVar6);
          uVar6 = (ulong)(uVar23 - 1);
        }
        uVar6 = (ulong)((int)uVar6 + 1);
        unaff_x25 = *(long *)(lVar8 + 0x28);
        if (unaff_x25 == 0) goto LAB_01492154;
      }
      if (uVar3 != 0) {
        if (uVar3 == 1) {
          lVar5 = 0;
          /*UnityEngine.Renderer$$set_sharedMaterial*/ func_0x0325bee4(lVar22,*(undefined8 *)(*(long *)(unaff_x25 + 0x10) + 0x20));
        }
        else {
          uVar7 = /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$ToArray*/ func_0x02428d84(unaff_x25,uRam0000000003d3b1c8);
          lVar5 = 0;
          /*UnityEngine.Renderer$$set_sharedMaterials*/ func_0x0325bf74(lVar22,uVar7);
        }
      }
    }
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x80,uRam0000000003d32e28);
  do {
    if (*(long *)(lVar8 + 0x20) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar8 + 0x20),uRam0000000003d3bbb0);
      if (*(long *)(lVar8 + 0x28) != 0) {
        uVar6 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar8 + 0x28),uRam0000000003d3b1a8);
        return uVar6;
      }
    }
LAB_0149217c:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01492200;
    plVar9 = (long *)___cxa_begin_catch();
    lVar19 = *plVar9;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x80,uRam0000000003d32e28);
  } while (lVar19 == 0);
  func_0x00f78ac0(lVar19,0);
code_r0x01492200:
  __Unwind_Resume();
  *(undefined1 **)(puVar2 + -0xb0) = puVar2 + -0x10;
  *(code **)(puVar2 + -0xa8) = Atlas_Rendering_MaterialDuplicator__ShouldSkipBasedOnTag;
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    if (extraout_x1 == 0) {
      auVar25 = func_0x00f78af4();
      plVar9 = auVar25._8_8_;
      *(undefined8 *)(puVar2 + -0x100) = unaff_x26;
      *(long *)(puVar2 + -0xf8) = unaff_x25;
      *(ulong *)(puVar2 + -0xf0) = uVar6;
      *(long *)(puVar2 + -0xe8) = lVar22;
      *(long *)(puVar2 + -0xe0) = lVar17;
      *(long *)(puVar2 + -0xd8) = lVar16;
      *(long *)(puVar2 + -0xd0) = lVar19;
      *(long *)(puVar2 + -200) = lVar8;
      *(undefined1 **)(puVar2 + -0xc0) = puVar2 + -0xb0;
      *(code **)(puVar2 + -0xb8) = Atlas_Rendering_MaterialDuplicator__DoesMaterialUseShaderInList;
      if ((bRam0000000003eb49a8 & 1) == 0) {
        func_0x00f78a20(0x3d220f0);
        func_0x00f78a20(0x3d1d148);
        func_0x00f78a20(0x3d1d348);
        func_0x00f78a20(0x3d22180);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb49a8 = 1;
      }
      *(undefined4 *)(puVar2 + -0x108) = 0;
      if (plVar9 == (long *)0x0) {
        return 1;
      }
      lVar16 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar6 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerable<Shader>_TypeInfo*/ lRam0000000003d1d148) {
            puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_01492314;
          }
          piVar18 = piVar18 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      lVar5 = 0;
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar9);
LAB_01492314:
      plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (plVar9 == (long *)0x0) {
        func_0x00f78af4();
code_r0x01492530:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1492534);
        (*pcVar1)();
      }
      do {
        lVar16 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar6 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
              goto code_r0x0149238c;
            }
            piVar18 = piVar18 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        lVar5 = 0;
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x0149238c:
        uVar6 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar6 & 1) == 0) {
          uVar7 = 0;
          *(undefined4 *)(puVar2 + -0x110) = 0x3b;
          *(undefined4 *)(puVar2 + -0x108) = 1;
          goto joined_r0x0149247c;
        }
        lVar5 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar6 != 0) {
          piVar18 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<Shader>_TypeInfo*/ lRam0000000003d1d348) {
              puVar10 = (undefined8 *)(lVar5 + (long)*piVar18 * 0x10 + 0x138);
              goto code_r0x014923e8;
            }
            piVar18 = piVar18 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerator<Shader>_TypeInfo*/ lRam0000000003d1d348,0);
code_r0x014923e8:
        uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if (auVar25._0_8_ == 0) {
          func_0x00f78af4();
          goto code_r0x01492530;
        }
        uVar14 = /*UnityEngine.Material$$get_shader*/ func_0x03237cdc(auVar25._0_8_,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar5 = 0;
        uVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar14,uVar7);
      } while ((uVar6 & 1) == 0);
      uVar7 = 1;
      *(undefined4 *)(puVar2 + -0x110) = 0x3d;
      *(undefined4 *)(puVar2 + -0x108) = 1;
joined_r0x0149247c:
      lVar15 = 0;
      lVar16 = 0;
      uVar14 = 0;
      do {
        if (plVar9 != (long *)0x0) {
          lVar17 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar6 != 0) {
            piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar10 = (undefined8 *)(lVar17 + (long)*piVar18 * 0x10 + 0x138);
                goto code_r0x014924d4;
              }
              piVar18 = piVar18 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          lVar5 = 0;
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x014924d4:
          (*(code *)*puVar10)(plVar9,puVar10[1]);
        }
        if (lVar15 == 0) {
          if ((int)uVar14 != 0) {
            return 0;
          }
          uVar3 = (uint)uVar7;
          if (*(int *)(puVar2 + lVar16 * 4 + -0x110) != 0x3d) {
            uVar3 = 0;
          }
          return (ulong)uVar3;
        }
        func_0x00f78ac0(lVar15,0);
        iVar13 = (int)lVar5;
        if (extraout_w1_00 != 1) goto code_r0x01492580;
        plVar11 = (long *)___cxa_begin_catch();
        lVar15 = *plVar11;
        ___cxa_end_catch();
        uVar7 = 0;
        lVar16 = -1;
        uVar14 = 1;
      } while( true );
    }
    uVar3 = /*System.String$$Equals*/ func_0x029bab9c(extraout_x1,lVar5,0);
    uVar6 = (ulong)(uVar3 ^ 1);
  }
  return uVar6;
code_r0x01492580:
  auVar25 = __Unwind_Resume();
  uVar20 = auVar25._8_8_;
  lVar5 = auVar25._0_8_;
  *(undefined8 *)(puVar2 + -0x170) = unaff_x28;
  *(undefined8 *)(puVar2 + -0x168) = unaff_x27;
  *(undefined8 *)(puVar2 + -0x160) = unaff_x26;
  *(undefined8 *)(puVar2 + -0x158) = 0x3d23990;
  *(undefined8 *)(puVar2 + -0x150) = 0x3d1d348;
  *(undefined8 *)(puVar2 + -0x148) = uVar14;
  *(long *)(puVar2 + -0x140) = lVar16;
  *(undefined8 *)(puVar2 + -0x138) = uVar7;
  *(long *)(puVar2 + -0x130) = lVar15;
  *(long **)(puVar2 + -0x128) = plVar9;
  *(undefined1 **)(puVar2 + -0x120) = puVar2 + -0xc0;
  *(code **)(puVar2 + -0x118) = Atlas_Rendering_MaterialDuplicator__GetCachedOrDuplicate;
  if ((bRam0000000003eb49a7 & 1) == 0) {
    func_0x00f78a20(0x3d3d4c0);
    func_0x00f78a20(0x3d3b198);
    func_0x00f78a20(0x3d3d4d8);
    func_0x00f78a20(0x3d3d4e0);
    func_0x00f78a20(0x3d3d4e8);
    func_0x00f78a20(0x3d23298);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb49a7 = 1;
  }
  lVar16 = *(long *)(lVar5 + 0x10);
  if (lVar16 != 0) {
    lVar15 = 0;
    uVar3 = 0;
    do {
      if ((int)*(uint *)(lVar16 + 0x18) <= (int)uVar3) goto LAB_014926a4;
      if (*(uint *)(lVar16 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(lVar16 + 0x10) + lVar15;
      uVar6 = *(ulong *)(lVar16 + 0x20);
      uVar7 = *(undefined8 *)(lVar16 + 0x28);
      uVar12 = *(ulong *)(lVar16 + 0x30);
      uVar14 = *(undefined8 *)(lVar16 + 0x38);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,uVar20,0);
      if (iVar4 != 0 && (int)uVar14 == iVar13) {
        lVar16 = *(long *)(lVar5 + 0x10);
        if (lVar16 != 0) {
          *(ulong *)(puVar2 + -400) = (ulong)((int)uVar6 + 1) | uVar6 & 0xffffffff00000000;
          *(undefined8 *)(puVar2 + -0x188) = uVar7;
          *(ulong *)(puVar2 + -0x180) = uVar12;
          *(undefined8 *)(puVar2 + -0x178) = uVar14;
          /*System.Collections.Generic.List<MaterialDuplicator.MaterialPair>$$set_Item*/ func_0x0254f814(lVar16,uVar3,puVar2 + -400,uRam0000000003d3d4e8);
          return uVar12;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar16 = *(long *)(lVar5 + 0x10);
      lVar15 = lVar15 + 0x20;
    } while (lVar16 != 0);
  }
  do {
    do {
      func_0x00f78af4();
LAB_014926a4:
      uVar6 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
      /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar6,uVar20,0);
      lVar16 = *(long *)(lVar5 + 0x10);
    } while (lVar16 == 0);
    *(undefined8 *)(puVar2 + -400) = _UNK_033f8410;
    *(undefined8 *)(puVar2 + -0x188) = uVar20;
    *(ulong *)(puVar2 + -0x180) = uVar6;
    *(int *)(puVar2 + -0x178) = iVar13;
    *(undefined4 *)(puVar2 + -0x174) = 0;
    /*System.Collections.Generic.List<MaterialDuplicator.MaterialPair>$$Add*/ func_0x0254fb84(lVar16,puVar2 + -400,uRam0000000003d3d4c0);
  } while (*(long *)(lVar5 + 0x18) == 0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar5 + 0x18),uVar6,uRam0000000003d3b198);
  return uVar6;
}



// ============================================================
// RVA: 0x1486904 | Atlas.Lighting.LightWorldMemberBehaviour.CreateDuplicatedMaterials
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Lighting_LightWorldMemberBehaviour__CreateDuplicatedMaterials
                (ulong param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  long unaff_x21;
  undefined8 uVar19;
  long unaff_x22;
  long lVar20;
  undefined8 unaff_x23;
  long lVar21;
  uint uVar22;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_40;
  
  uVar5 = param_1;
  if ((bRam0000000003eb4940 & 1) == 0) {
    func_0x00f78a20(0x3d3b188);
    uVar5 = func_0x00f78a20(0x3d1dba8);
    bRam0000000003eb4940 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    return uVar5;
  }
  uVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
  if (param_2 == 0) {
    lVar15 = func_0x00f78af4();
    if ((bRam0000000003eb4941 & 1) == 0) {
      func_0x00f78a20(0x3d3b1a8);
      bRam0000000003eb4941 = 1;
    }
    if (*(long *)(lVar15 + 0x20) != 0) {
      uVar5 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar15 + 0x20),uRam0000000003d3b1a8);
      *(undefined8 *)(lVar15 + 0x20) = 0;
      return uVar5;
    }
    uVar5 = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return uVar5;
  }
  uVar13 = 0;
  lVar14 = 0;
  Atlas_Rendering_MaterialDuplicator__DuplicateRendererMaterial(param_2,uVar6,param_3,0,0,0);
  uVar19 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<Material>_TypeInfo*/ uRam0000000003d1dba8);
  lVar15 = lRam0000000003d3b188;
  /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(uVar6,uVar19);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  if ((bRam0000000003eb49a3 & 1) == 0) {
    func_0x00f78a20(0x3d3d4c8,0);
    func_0x00f78a20(0x3d3b1a8);
    bRam0000000003eb49a3 = 1;
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_2 + 0x18),uRam0000000003d3b1a8);
    uVar5 = *(ulong *)(param_2 + 0x10);
    if (uVar5 != 0) {
      uVar11 = uVar5;
      if (0 < *(int *)(uVar5 + 0x18)) {
        uVar11 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar5 + 0x10),0,*(int *)(uVar5 + 0x18),0);
        *(undefined4 *)(uVar5 + 0x18) = 0;
      }
      *(int *)(uVar5 + 0x1c) = *(int *)(uVar5 + 0x1c) + 1;
      return uVar11;
    }
  }
  auVar24 = func_0x00f78af4();
  lVar20 = auVar24._0_8_;
  puVar2 = &stack0xffffffffffffffa0;
  uStack_40 = 0x3eb4000;
  puVar23 = &stack0xffffffffffffffd0;
  uVar19 = 0x3eb4000;
  lVar18 = lVar15;
  uVar6 = uVar13;
  lVar17 = lVar14;
  if ((bRam0000000003eb49a4 & 1) == 0) {
    func_0x00f78a20(0x3d57a18);
    bRam0000000003eb49a4 = 1;
  }
  if (auVar24._8_8_ == 0) {
    pcVar1 = Atlas_Rendering_MaterialDuplicator__DuplicateRendererMaterial;
    auVar24 = func_0x00f78af4();
    unaff_x23 = 0;
  }
  else {
    /*UnityEngine.GameObject$$GetComponentsInChildren<Renderer>*/ func_0x0185d724(auVar24._8_8_,1,*(undefined8 *)(lVar20 + 0x20),uRam0000000003d57a18);
    auVar24._8_8_ = *(undefined8 *)(lVar20 + 0x20);
    auVar24._0_8_ = lVar20;
    pcVar1 = Atlas_Rendering_MaterialDuplicator__DuplicateRendererMaterial;
    puVar2 = &stack0xffffffffffffffe0;
    lVar18 = lVar15;
    uVar6 = uVar13;
    lVar17 = lVar14;
    lVar14 = param_2;
    uVar13 = uStack_40;
    lVar15 = unaff_x21;
    lVar20 = unaff_x22;
    uVar19 = unaff_x24;
    puVar23 = &stack0xfffffffffffffff0;
  }
  lVar21 = auVar24._8_8_;
  lVar7 = auVar24._0_8_;
  *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(long *)(puVar2 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar2 + -0x40) = uVar19;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(long *)(puVar2 + -0x30) = lVar20;
  *(long *)(puVar2 + -0x28) = lVar15;
  *(undefined8 *)(puVar2 + -0x20) = uVar13;
  *(long *)(puVar2 + -0x18) = lVar14;
  *(undefined1 **)(puVar2 + -0x10) = puVar23;
  *(code **)(puVar2 + -8) = pcVar1;
  *(undefined8 *)(puVar2 + -0xa0) = uVar6;
  uVar5 = 0x3eb4000;
  lVar14 = lVar18;
  if ((bRam0000000003eb49a5 & 1) == 0) {
    func_0x00f78a20(0x3d32e28);
    func_0x00f78a20(0x3d32e30);
    func_0x00f78a20(0x3d32e38);
    func_0x00f78a20(0x3d3b1a8);
    func_0x00f78a20(0x3d3bbb0);
    func_0x00f78a20(0x3d3bbb8);
    func_0x00f78a20(0x3d3b1c0);
    func_0x00f78a20(0x3d3b1c8);
    func_0x00f78a20(0x3d3b1d0);
    func_0x00f78a20(0x3d3b1d8);
    func_0x00f78a20(0x3d3b1e0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb49a5 = 1;
  }
  *(undefined8 *)(puVar2 + -0x80) = 0;
  *(undefined8 *)(puVar2 + -0x78) = 0;
  *(undefined8 *)(puVar2 + -0x70) = 0;
  if (lVar21 == 0) goto LAB_0149217c;
  lVar15 = 0x3d32e30;
  unaff_x27 = 0x3d23990;
  unaff_x28 = 0x3d3b1c0;
  unaff_x26 = 0x3d3b1e0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar2 + -0x98,lVar21,uRam0000000003d3bbb8);
  *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0x90);
  *(undefined8 *)(puVar2 + -0x80) = *(undefined8 *)(puVar2 + -0x98);
  *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0x88);
  while (uVar11 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar2 + -0x80,uRam0000000003d32e30), (uVar11 & 1) != 0) {
    lVar21 = *(long *)(puVar2 + -0x70);
    if (lVar21 == 0) {
      func_0x00f78af4();
      goto code_r0x01492178;
    }
    lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar21,0);
    if (lVar14 == 0) {
      func_0x00f78af4();
      goto code_r0x01492178;
    }
    uVar6 = /*UnityEngine.GameObject$$get_tag*/ func_0x0322f10c(lVar14,0);
    lVar14 = *(long *)(puVar2 + -0xa0);
    uVar11 = Atlas_Rendering_MaterialDuplicator__ShouldSkipBasedOnTag(uVar6,uVar6);
    if ((uVar11 & 1) == 0) {
      lVar14 = 0;
      /*UnityEngine.Renderer$$GetSharedMaterials*/ func_0x0325bfc4(lVar21,*(undefined8 *)(lVar7 + 0x28));
      unaff_x25 = *(long *)(lVar7 + 0x28);
      if (unaff_x25 == 0) {
LAB_01492154:
        func_0x00f78af4();
code_r0x01492178:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x149217c);
        (*pcVar1)();
      }
      uVar5 = 0;
      while( true ) {
        uVar3 = *(uint *)(unaff_x25 + 0x18);
        uVar22 = (uint)uVar5;
        if ((int)uVar3 <= (int)uVar22) break;
        if (uVar3 <= uVar22) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar6 = *(undefined8 *)(*(long *)(unaff_x25 + 0x10) + (long)(int)uVar22 * 8 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar14 = 0;
        uVar11 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,0);
        if ((uVar11 & 1) == 0) {
          uVar11 = Atlas_Rendering_MaterialDuplicator__DoesMaterialUseShaderInList(uVar6,lVar18);
          if ((uVar11 & 1) != 0) {
            lVar14 = Atlas_Rendering_MaterialDuplicator__GetCachedOrDuplicate(lVar7,uVar6,lVar17);
            if (*(long *)(lVar7 + 0x28) == 0) {
              func_0x00f78af4();
              goto code_r0x01492178;
            }
            /*System.Collections.Generic.List<RuntimeManager.AttachedInstance>$$set_Item*/ func_0x02426e68(*(long *)(lVar7 + 0x28),uVar5,lVar14,uRam0000000003d3b1e0);
          }
        }
        else {
          if (*(long *)(lVar7 + 0x28) == 0) {
            func_0x00f78af4();
            goto code_r0x01492178;
          }
          lVar14 = lRam0000000003d3b1c0;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar7 + 0x28),uVar5);
          uVar5 = (ulong)(uVar22 - 1);
        }
        uVar5 = (ulong)((int)uVar5 + 1);
        unaff_x25 = *(long *)(lVar7 + 0x28);
        if (unaff_x25 == 0) goto LAB_01492154;
      }
      if (uVar3 != 0) {
        if (uVar3 == 1) {
          lVar14 = 0;
          /*UnityEngine.Renderer$$set_sharedMaterial*/ func_0x0325bee4(lVar21,*(undefined8 *)(*(long *)(unaff_x25 + 0x10) + 0x20));
        }
        else {
          uVar6 = /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$ToArray*/ func_0x02428d84(unaff_x25,uRam0000000003d3b1c8);
          lVar14 = 0;
          /*UnityEngine.Renderer$$set_sharedMaterials*/ func_0x0325bf74(lVar21,uVar6);
        }
      }
    }
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x80,uRam0000000003d32e28);
  do {
    if (*(long *)(lVar7 + 0x20) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar7 + 0x20),uRam0000000003d3bbb0);
      if (*(long *)(lVar7 + 0x28) != 0) {
        uVar5 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar7 + 0x28),uRam0000000003d3b1a8);
        return uVar5;
      }
    }
LAB_0149217c:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01492200;
    plVar8 = (long *)___cxa_begin_catch();
    lVar17 = *plVar8;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x80,uRam0000000003d32e28);
  } while (lVar17 == 0);
  func_0x00f78ac0(lVar17,0);
code_r0x01492200:
  __Unwind_Resume();
  *(undefined1 **)(puVar2 + -0xb0) = puVar2 + -0x10;
  *(code **)(puVar2 + -0xa8) = Atlas_Rendering_MaterialDuplicator__ShouldSkipBasedOnTag;
  if (lVar14 == 0) {
    uVar5 = 0;
  }
  else {
    if (extraout_x1 == 0) {
      auVar24 = func_0x00f78af4();
      plVar8 = auVar24._8_8_;
      *(undefined8 *)(puVar2 + -0x100) = unaff_x26;
      *(long *)(puVar2 + -0xf8) = unaff_x25;
      *(ulong *)(puVar2 + -0xf0) = uVar5;
      *(long *)(puVar2 + -0xe8) = lVar21;
      *(long *)(puVar2 + -0xe0) = lVar18;
      *(long *)(puVar2 + -0xd8) = lVar15;
      *(long *)(puVar2 + -0xd0) = lVar17;
      *(long *)(puVar2 + -200) = lVar7;
      *(undefined1 **)(puVar2 + -0xc0) = puVar2 + -0xb0;
      *(code **)(puVar2 + -0xb8) = Atlas_Rendering_MaterialDuplicator__DoesMaterialUseShaderInList;
      if ((bRam0000000003eb49a8 & 1) == 0) {
        func_0x00f78a20(0x3d220f0);
        func_0x00f78a20(0x3d1d148);
        func_0x00f78a20(0x3d1d348);
        func_0x00f78a20(0x3d22180);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb49a8 = 1;
      }
      *(undefined4 *)(puVar2 + -0x108) = 0;
      if (plVar8 == (long *)0x0) {
        return 1;
      }
      lVar15 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar5 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerable<Shader>_TypeInfo*/ lRam0000000003d1d148) {
            puVar9 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01492314;
          }
          piVar16 = piVar16 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      lVar14 = 0;
      puVar9 = (undefined8 *)func_0x00fac1f0(plVar8);
LAB_01492314:
      plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar8 == (long *)0x0) {
        func_0x00f78af4();
code_r0x01492530:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1492534);
        (*pcVar1)();
      }
      do {
        lVar15 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar5 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar9 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto code_r0x0149238c;
            }
            piVar16 = piVar16 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        lVar14 = 0;
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8);
code_r0x0149238c:
        uVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar5 & 1) == 0) {
          uVar6 = 0;
          *(undefined4 *)(puVar2 + -0x110) = 0x3b;
          *(undefined4 *)(puVar2 + -0x108) = 1;
          goto joined_r0x0149247c;
        }
        lVar15 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar5 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerator<Shader>_TypeInfo*/ lRam0000000003d1d348) {
              puVar9 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto code_r0x014923e8;
            }
            piVar16 = piVar16 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.Generic.IEnumerator<Shader>_TypeInfo*/ lRam0000000003d1d348,0);
code_r0x014923e8:
        uVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if (auVar24._0_8_ == 0) {
          func_0x00f78af4();
          goto code_r0x01492530;
        }
        uVar13 = /*UnityEngine.Material$$get_shader*/ func_0x03237cdc(auVar24._0_8_,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar14 = 0;
        uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar13,uVar6);
      } while ((uVar5 & 1) == 0);
      uVar6 = 1;
      *(undefined4 *)(puVar2 + -0x110) = 0x3d;
      *(undefined4 *)(puVar2 + -0x108) = 1;
joined_r0x0149247c:
      lVar18 = 0;
      lVar15 = 0;
      uVar13 = 0;
      do {
        if (plVar8 != (long *)0x0) {
          lVar17 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar5 != 0) {
            piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar9 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x014924d4;
              }
              piVar16 = piVar16 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          lVar14 = 0;
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8);
code_r0x014924d4:
          (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
        if (lVar18 == 0) {
          if ((int)uVar13 != 0) {
            return 0;
          }
          uVar3 = (uint)uVar6;
          if (*(int *)(puVar2 + lVar15 * 4 + -0x110) != 0x3d) {
            uVar3 = 0;
          }
          return (ulong)uVar3;
        }
        func_0x00f78ac0(lVar18,0);
        iVar12 = (int)lVar14;
        if (extraout_w1_00 != 1) goto code_r0x01492580;
        plVar10 = (long *)___cxa_begin_catch();
        lVar18 = *plVar10;
        ___cxa_end_catch();
        uVar6 = 0;
        lVar15 = -1;
        uVar13 = 1;
      } while( true );
    }
    uVar3 = /*System.String$$Equals*/ func_0x029bab9c(extraout_x1,lVar14,0);
    uVar5 = (ulong)(uVar3 ^ 1);
  }
  return uVar5;
code_r0x01492580:
  auVar24 = __Unwind_Resume();
  uVar19 = auVar24._8_8_;
  lVar14 = auVar24._0_8_;
  *(undefined8 *)(puVar2 + -0x170) = unaff_x28;
  *(undefined8 *)(puVar2 + -0x168) = unaff_x27;
  *(undefined8 *)(puVar2 + -0x160) = unaff_x26;
  *(undefined8 *)(puVar2 + -0x158) = 0x3d23990;
  *(undefined8 *)(puVar2 + -0x150) = 0x3d1d348;
  *(undefined8 *)(puVar2 + -0x148) = uVar13;
  *(long *)(puVar2 + -0x140) = lVar15;
  *(undefined8 *)(puVar2 + -0x138) = uVar6;
  *(long *)(puVar2 + -0x130) = lVar18;
  *(long **)(puVar2 + -0x128) = plVar8;
  *(undefined1 **)(puVar2 + -0x120) = puVar2 + -0xc0;
  *(code **)(puVar2 + -0x118) = Atlas_Rendering_MaterialDuplicator__GetCachedOrDuplicate;
  if ((bRam0000000003eb49a7 & 1) == 0) {
    func_0x00f78a20(0x3d3d4c0);
    func_0x00f78a20(0x3d3b198);
    func_0x00f78a20(0x3d3d4d8);
    func_0x00f78a20(0x3d3d4e0);
    func_0x00f78a20(0x3d3d4e8);
    func_0x00f78a20(0x3d23298);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb49a7 = 1;
  }
  lVar15 = *(long *)(lVar14 + 0x10);
  if (lVar15 != 0) {
    lVar18 = 0;
    uVar3 = 0;
    do {
      if ((int)*(uint *)(lVar15 + 0x18) <= (int)uVar3) goto LAB_014926a4;
      if (*(uint *)(lVar15 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(lVar15 + 0x10) + lVar18;
      uVar5 = *(ulong *)(lVar15 + 0x20);
      uVar6 = *(undefined8 *)(lVar15 + 0x28);
      uVar11 = *(ulong *)(lVar15 + 0x30);
      uVar13 = *(undefined8 *)(lVar15 + 0x38);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,uVar19,0);
      if (iVar4 != 0 && (int)uVar13 == iVar12) {
        lVar15 = *(long *)(lVar14 + 0x10);
        if (lVar15 != 0) {
          *(ulong *)(puVar2 + -400) = (ulong)((int)uVar5 + 1) | uVar5 & 0xffffffff00000000;
          *(undefined8 *)(puVar2 + -0x188) = uVar6;
          *(ulong *)(puVar2 + -0x180) = uVar11;
          *(undefined8 *)(puVar2 + -0x178) = uVar13;
          /*System.Collections.Generic.List<MaterialDuplicator.MaterialPair>$$set_Item*/ func_0x0254f814(lVar15,uVar3,puVar2 + -400,uRam0000000003d3d4e8);
          return uVar11;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar15 = *(long *)(lVar14 + 0x10);
      lVar18 = lVar18 + 0x20;
    } while (lVar15 != 0);
  }
  do {
    do {
      func_0x00f78af4();
LAB_014926a4:
      uVar5 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
      /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar5,uVar19,0);
      lVar15 = *(long *)(lVar14 + 0x10);
    } while (lVar15 == 0);
    *(undefined8 *)(puVar2 + -400) = _UNK_033f8410;
    *(undefined8 *)(puVar2 + -0x188) = uVar19;
    *(ulong *)(puVar2 + -0x180) = uVar5;
    *(int *)(puVar2 + -0x178) = iVar12;
    *(undefined4 *)(puVar2 + -0x174) = 0;
    /*System.Collections.Generic.List<MaterialDuplicator.MaterialPair>$$Add*/ func_0x0254fb84(lVar15,puVar2 + -400,uRam0000000003d3d4c0);
  } while (*(long *)(lVar14 + 0x18) == 0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar14 + 0x18),uVar5,uRam0000000003d3b198);
  return uVar5;
}



// ============================================================
// RVA: 0x14869dc | Atlas.Lighting.LightWorldMemberBehaviour.ReleaseDuplicatedMaterials
// ============================================================

undefined8 Atlas_Lighting_LightWorldMemberBehaviour__ReleaseDuplicatedMaterials(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4941 & 1) == 0) {
    func_0x00f78a20(0x3d3b1a8);
    bRam0000000003eb4941 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x20),uRam0000000003d3b1a8);
    *(undefined8 *)(param_1 + 0x20) = 0;
    return uVar1;
  }
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



// ============================================================
// RVA: 0x1486a38 | Atlas.Lighting.LightWorldMemberBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Lighting_LightWorldMemberBehaviour___ctor(ulong param_1)

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



