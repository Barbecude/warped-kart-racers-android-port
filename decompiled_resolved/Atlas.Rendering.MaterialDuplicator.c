// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Rendering.MaterialDuplicator

// ============================================================
// RVA: 0x1491bf8 | Atlas.Rendering.MaterialDuplicator.get_DuplicateMaterialList
// ============================================================

undefined8 Atlas_Rendering_MaterialDuplicator__get_DuplicateMaterialList(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1491c00 | Atlas.Rendering.MaterialDuplicator.get_MaterialPairs
// ============================================================

undefined8 Atlas_Rendering_MaterialDuplicator__get_MaterialPairs(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x1491c08 | Atlas.Rendering.MaterialDuplicator.Init
// ============================================================

void Atlas_Rendering_MaterialDuplicator__Init
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb49a2 & 1) == 0) {
    func_0x00f78a20(0x3d3b190);
    func_0x00f78a20(0x3d3d4b8);
    func_0x00f78a20(0x3d3bba8);
    func_0x00f78a20(0x3d1dba8);
    func_0x00f78a20(0x3d1dd58);
    func_0x00f78a20(0x3d1e210);
    bRam0000000003eb49a2 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<MaterialDuplicator.MaterialPair>_TypeInfo*/ uRam0000000003d1e210);
  /*System.Collections.Generic.List<MaterialDuplicator.MaterialPair>$$.ctor*/ func_0x0254ef50(uVar1,param_2,uRam0000000003d3d4b8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<Material>_TypeInfo*/ uRam0000000003d1dba8);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar1,param_2,uRam0000000003d3b190);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<Renderer>_TypeInfo*/ uRam0000000003d1dd58);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar1,param_3,uRam0000000003d3bba8);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<Material>_TypeInfo*/ uRam0000000003d1dba8);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar1,param_4,uRam0000000003d3b190);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1491d4c | Atlas.Rendering.MaterialDuplicator.DeInit
// ============================================================

void Atlas_Rendering_MaterialDuplicator__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// ============================================================
// RVA: 0x1491d58 | Atlas.Rendering.MaterialDuplicator.Clear
// ============================================================

/* WARNING: Possible PIC construction at 0x01491fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01492064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01491fcc) */
/* WARNING: Removing unreachable block (ram,0x01491fd0) */
/* WARNING: Removing unreachable block (ram,0x01491fe8) */
/* WARNING: Removing unreachable block (ram,0x01492068) */
/* WARNING: Removing unreachable block (ram,0x0149206c) */
/* WARNING: Removing unreachable block (ram,0x01492164) */
/* WARNING: Removing unreachable block (ram,0x01492088) */
/* WARNING: Removing unreachable block (ram,0x01492094) */
/* WARNING: Removing unreachable block (ram,0x01491fec) */
/* WARNING: Removing unreachable block (ram,0x014920a4) */
/* WARNING: Removing unreachable block (ram,0x014920a8) */
/* WARNING: Removing unreachable block (ram,0x014920c8) */
/* WARNING: Removing unreachable block (ram,0x014920b0) */
/* WARNING: Removing unreachable block (ram,0x01491ff8) */
/* WARNING: Removing unreachable block (ram,0x01492000) */
/* WARNING: Removing unreachable block (ram,0x01492008) */
/* WARNING: Removing unreachable block (ram,0x01492020) */
/* WARNING: Removing unreachable block (ram,0x01492028) */
/* WARNING: Removing unreachable block (ram,0x0149202c) */
/* WARNING: Removing unreachable block (ram,0x0149205c) */
/* WARNING: Removing unreachable block (ram,0x01492040) */
/* WARNING: Removing unreachable block (ram,0x0149215c) */
/* WARNING: Removing unreachable block (ram,0x01492048) */
/* WARNING: Removing unreachable block (ram,0x014920a0) */
/* WARNING: Removing unreachable block (ram,0x01492154) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Rendering_MaterialDuplicator__Clear
                (long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long lVar19;
  undefined8 unaff_x24;
  undefined8 uVar20;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar21;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined8 *******pppppppuStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb49a3 & 1) == 0) {
    func_0x00f78a20(0x3d3d4c8);
    func_0x00f78a20(0x3d3b1a8);
    bRam0000000003eb49a3 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x18),uRam0000000003d3b1a8);
    uVar5 = *(ulong *)(param_1 + 0x10);
    if (uVar5 != 0) {
      uVar12 = uVar5;
      if (0 < *(int *)(uVar5 + 0x18)) {
        uVar12 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar5 + 0x10),0,*(int *)(uVar5 + 0x18),0);
        *(undefined4 *)(uVar5 + 0x18) = 0;
      }
      *(int *)(uVar5 + 0x1c) = *(int *)(uVar5 + 0x1c) + 1;
      return uVar12;
    }
  }
  auVar23 = func_0x00f78af4();
  lVar6 = auVar23._0_8_;
  puVar2 = &stack0xffffffffffffffa0;
  puStack_28 = &Atlas_Rendering_MaterialDuplicator__DuplicateRendererMaterial;
  pppppppuVar21 = &pppppppuStack_30;
  uVar20 = 0x3eb4000;
  lVar15 = param_3;
  uVar10 = param_4;
  lVar18 = param_5;
  pppppppuStack_30 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb49a4 & 1) == 0) {
    func_0x00f78a20(0x3d57a18);
    bRam0000000003eb49a4 = 1;
  }
  if (auVar23._8_8_ == 0) {
    puVar22 = &Atlas_Rendering_MaterialDuplicator__DuplicateRendererMaterial;
    auVar23 = func_0x00f78af4();
    unaff_x23 = 0;
  }
  else {
    /*UnityEngine.GameObject$$GetComponentsInChildren<Renderer>*/ func_0x0185d724(auVar23._8_8_,1,*(undefined8 *)(lVar6 + 0x20),uRam0000000003d57a18);
    auVar23._8_8_ = *(undefined8 *)(lVar6 + 0x20);
    auVar23._0_8_ = lVar6;
    puVar2 = &stack0xffffffffffffffe0;
    lVar15 = param_3;
    uVar10 = param_4;
    lVar18 = param_5;
    param_5 = param_1;
    param_4 = 0x3eb4000;
    param_3 = unaff_x21;
    lVar6 = unaff_x22;
    uVar20 = unaff_x24;
    pppppppuVar21 = pppppppuStack_30;
    puVar22 = puStack_28;
  }
  lVar19 = auVar23._8_8_;
  lVar16 = auVar23._0_8_;
  *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar2 + -0x40) = uVar20;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(long *)(puVar2 + -0x30) = lVar6;
  *(long *)(puVar2 + -0x28) = param_3;
  *(undefined8 *)(puVar2 + -0x20) = param_4;
  *(long *)(puVar2 + -0x18) = param_5;
  *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar21;
  *(undefined **)(puVar2 + -8) = puVar22;
  *(undefined8 *)(puVar2 + -0xa0) = uVar10;
  lVar6 = lVar15;
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
  if (lVar19 == 0) goto code_r0x0149217c;
  param_3 = 0x3d32e30;
  unaff_x27 = 0x3d23990;
  unaff_x28 = 0x3d3b1c0;
  unaff_x26 = 0x3d3b1e0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar2 + -0x98,lVar19,uRam0000000003d3bbb8);
  *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0x90);
  *(undefined8 *)(puVar2 + -0x80) = *(undefined8 *)(puVar2 + -0x98);
  *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0x88);
  uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar2 + -0x80,uRam0000000003d32e30);
  if ((uVar5 & 1) != 0) {
    lVar19 = *(long *)(puVar2 + -0x70);
    if (lVar19 == 0) {
      func_0x00f78af4();
    }
    else {
      lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar19,0);
      if (lVar6 != 0) {
        lVar7 = /*UnityEngine.GameObject$$get_tag*/ func_0x0322f10c(lVar6,0);
        lVar6 = *(long *)(puVar2 + -0xa0);
        puVar22 = &UNK_01491fcc;
        goto code_r0x01492204;
      }
      func_0x00f78af4();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x149217c);
    (*pcVar1)();
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x80,uRam0000000003d32e28);
  do {
    if (*(long *)(lVar16 + 0x20) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar16 + 0x20),uRam0000000003d3bbb0);
      if (*(long *)(lVar16 + 0x28) != 0) {
        uVar5 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar16 + 0x28),uRam0000000003d3b1a8);
        return uVar5;
      }
    }
code_r0x0149217c:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01492200;
    plVar8 = (long *)___cxa_begin_catch();
    lVar18 = *plVar8;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x80,uRam0000000003d32e28);
  } while (lVar18 == 0);
  func_0x00f78ac0(lVar18,0);
code_r0x01492200:
  puVar22 = &Atlas_Rendering_MaterialDuplicator__ShouldSkipBasedOnTag;
  __Unwind_Resume();
  lVar7 = extraout_x1;
code_r0x01492204:
  *(undefined1 **)(puVar2 + -0xb0) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0xa8) = puVar22;
  if (lVar6 == 0) {
    uVar5 = 0;
  }
  else {
    if (lVar7 == 0) {
      auVar23 = func_0x00f78af4();
      plVar8 = auVar23._8_8_;
      *(undefined8 *)(puVar2 + -0x100) = unaff_x26;
      *(undefined8 *)(puVar2 + -0xf8) = unaff_x25;
      *(undefined8 *)(puVar2 + -0xf0) = 0x3eb4000;
      *(long *)(puVar2 + -0xe8) = lVar19;
      *(long *)(puVar2 + -0xe0) = lVar15;
      *(long *)(puVar2 + -0xd8) = param_3;
      *(long *)(puVar2 + -0xd0) = lVar18;
      *(long *)(puVar2 + -200) = lVar16;
      *(undefined1 **)(puVar2 + -0xc0) = puVar2 + -0xb0;
      *(undefined **)(puVar2 + -0xb8) =
           &Atlas_Rendering_MaterialDuplicator__DoesMaterialUseShaderInList;
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
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.Generic.IEnumerable<Shader>_TypeInfo*/ lRam0000000003d1d148) {
            puVar9 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x01492314;
          }
          piVar17 = piVar17 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      lVar6 = 0;
      puVar9 = (undefined8 *)func_0x00fac1f0(plVar8);
code_r0x01492314:
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
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar9 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x0149238c;
            }
            piVar17 = piVar17 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        lVar6 = 0;
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8);
code_r0x0149238c:
        uVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar5 & 1) == 0) {
          uVar10 = 0;
          *(undefined4 *)(puVar2 + -0x110) = 0x3b;
          *(undefined4 *)(puVar2 + -0x108) = 1;
          goto joined_r0x0149247c;
        }
        lVar15 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar5 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.Generic.IEnumerator<Shader>_TypeInfo*/ lRam0000000003d1d348) {
              puVar9 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x014923e8;
            }
            piVar17 = piVar17 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.Generic.IEnumerator<Shader>_TypeInfo*/ lRam0000000003d1d348,0);
code_r0x014923e8:
        uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if (auVar23._0_8_ == 0) {
          func_0x00f78af4();
          goto code_r0x01492530;
        }
        uVar20 = /*UnityEngine.Material$$get_shader*/ func_0x03237cdc(auVar23._0_8_,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar6 = 0;
        uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar20,uVar10);
      } while ((uVar5 & 1) == 0);
      uVar10 = 1;
      *(undefined4 *)(puVar2 + -0x110) = 0x3d;
      *(undefined4 *)(puVar2 + -0x108) = 1;
joined_r0x0149247c:
      lVar18 = 0;
      lVar15 = 0;
      uVar20 = 0;
      do {
        if (plVar8 != (long *)0x0) {
          lVar16 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar5 != 0) {
            piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar9 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x014924d4;
              }
              piVar17 = piVar17 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          lVar6 = 0;
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8);
code_r0x014924d4:
          (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
        if (lVar18 == 0) {
          if ((int)uVar20 != 0) {
            return 0;
          }
          uVar3 = (uint)uVar10;
          if (*(int *)(puVar2 + lVar15 * 4 + -0x110) != 0x3d) {
            uVar3 = 0;
          }
          return (ulong)uVar3;
        }
        func_0x00f78ac0(lVar18,0);
        iVar14 = (int)lVar6;
        if (extraout_w1_00 != 1) goto code_r0x01492580;
        plVar11 = (long *)___cxa_begin_catch();
        lVar18 = *plVar11;
        ___cxa_end_catch();
        uVar10 = 0;
        lVar15 = -1;
        uVar20 = 1;
      } while( true );
    }
    uVar3 = /*System.String$$Equals*/ func_0x029bab9c(lVar7,lVar6,0);
    uVar5 = (ulong)(uVar3 ^ 1);
  }
  return uVar5;
code_r0x01492580:
  auVar23 = __Unwind_Resume();
  uVar13 = auVar23._8_8_;
  lVar6 = auVar23._0_8_;
  *(undefined8 *)(puVar2 + -0x170) = unaff_x28;
  *(undefined8 *)(puVar2 + -0x168) = unaff_x27;
  *(undefined8 *)(puVar2 + -0x160) = unaff_x26;
  *(undefined8 *)(puVar2 + -0x158) = 0x3d23990;
  *(undefined8 *)(puVar2 + -0x150) = 0x3d1d348;
  *(undefined8 *)(puVar2 + -0x148) = uVar20;
  *(long *)(puVar2 + -0x140) = lVar15;
  *(undefined8 *)(puVar2 + -0x138) = uVar10;
  *(long *)(puVar2 + -0x130) = lVar18;
  *(long **)(puVar2 + -0x128) = plVar8;
  *(undefined1 **)(puVar2 + -0x120) = puVar2 + -0xc0;
  *(undefined **)(puVar2 + -0x118) = &Atlas_Rendering_MaterialDuplicator__GetCachedOrDuplicate;
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
  lVar15 = *(long *)(lVar6 + 0x10);
  if (lVar15 != 0) {
    lVar18 = 0;
    uVar3 = 0;
    do {
      if ((int)*(uint *)(lVar15 + 0x18) <= (int)uVar3) goto code_r0x014926a4;
      if (*(uint *)(lVar15 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(lVar15 + 0x10) + lVar18;
      uVar5 = *(ulong *)(lVar15 + 0x20);
      uVar10 = *(undefined8 *)(lVar15 + 0x28);
      uVar12 = *(ulong *)(lVar15 + 0x30);
      uVar20 = *(undefined8 *)(lVar15 + 0x38);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar10,uVar13,0);
      if (iVar4 != 0 && (int)uVar20 == iVar14) {
        lVar15 = *(long *)(lVar6 + 0x10);
        if (lVar15 != 0) {
          *(ulong *)(puVar2 + -400) = (ulong)((int)uVar5 + 1) | uVar5 & 0xffffffff00000000;
          *(undefined8 *)(puVar2 + -0x188) = uVar10;
          *(ulong *)(puVar2 + -0x180) = uVar12;
          *(undefined8 *)(puVar2 + -0x178) = uVar20;
          /*System.Collections.Generic.List<MaterialDuplicator.MaterialPair>$$set_Item*/ func_0x0254f814(lVar15,uVar3,puVar2 + -400,uRam0000000003d3d4e8);
          return uVar12;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar15 = *(long *)(lVar6 + 0x10);
      lVar18 = lVar18 + 0x20;
    } while (lVar15 != 0);
  }
  do {
    do {
      func_0x00f78af4();
code_r0x014926a4:
      uVar5 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
      /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar5,uVar13,0);
      lVar15 = *(long *)(lVar6 + 0x10);
    } while (lVar15 == 0);
    *(undefined8 *)(puVar2 + -400) = _UNK_033f8410;
    *(undefined8 *)(puVar2 + -0x188) = uVar13;
    *(ulong *)(puVar2 + -0x180) = uVar5;
    *(int *)(puVar2 + -0x178) = iVar14;
    *(undefined4 *)(puVar2 + -0x174) = 0;
    /*System.Collections.Generic.List<MaterialDuplicator.MaterialPair>$$Add*/ func_0x0254fb84(lVar15,puVar2 + -400,uRam0000000003d3d4c0);
  } while (*(long *)(lVar6 + 0x18) == 0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar6 + 0x18),uVar5,uRam0000000003d3b198);
  return uVar5;
}



// ============================================================
// RVA: 0x1491dd0 | Atlas.Rendering.MaterialDuplicator.DuplicateRendererMaterial
// ============================================================

/* WARNING: Possible PIC construction at 0x01491fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01492064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01491fcc) */
/* WARNING: Removing unreachable block (ram,0x01491fd0) */
/* WARNING: Removing unreachable block (ram,0x01491fe8) */
/* WARNING: Removing unreachable block (ram,0x01492068) */
/* WARNING: Removing unreachable block (ram,0x0149206c) */
/* WARNING: Removing unreachable block (ram,0x01492164) */
/* WARNING: Removing unreachable block (ram,0x01492088) */
/* WARNING: Removing unreachable block (ram,0x01492094) */
/* WARNING: Removing unreachable block (ram,0x01491fec) */
/* WARNING: Removing unreachable block (ram,0x014920a4) */
/* WARNING: Removing unreachable block (ram,0x014920a8) */
/* WARNING: Removing unreachable block (ram,0x014920c8) */
/* WARNING: Removing unreachable block (ram,0x014920b0) */
/* WARNING: Removing unreachable block (ram,0x01491ff8) */
/* WARNING: Removing unreachable block (ram,0x01492000) */
/* WARNING: Removing unreachable block (ram,0x01492008) */
/* WARNING: Removing unreachable block (ram,0x01492020) */
/* WARNING: Removing unreachable block (ram,0x01492028) */
/* WARNING: Removing unreachable block (ram,0x0149202c) */
/* WARNING: Removing unreachable block (ram,0x0149205c) */
/* WARNING: Removing unreachable block (ram,0x01492040) */
/* WARNING: Removing unreachable block (ram,0x0149215c) */
/* WARNING: Removing unreachable block (ram,0x01492048) */
/* WARNING: Removing unreachable block (ram,0x014920a0) */
/* WARNING: Removing unreachable block (ram,0x01492154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Rendering_MaterialDuplicator__DuplicateRendererMaterial
                (long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  int extraout_w1;
  int extraout_w1_00;
  long lVar13;
  long extraout_x1;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar19;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar20;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar21;
  undefined *unaff_x30;
  undefined *puVar22;
  undefined1 auVar23 [16];
  
  puVar3 = &stack0xffffffffffffffc0;
  puVar21 = &stack0xfffffffffffffff0;
  uVar20 = 0x3eb4000;
  lVar16 = param_3;
  uVar11 = param_4;
  lVar19 = param_5;
  if ((bRam0000000003eb49a4 & 1) == 0) {
    func_0x00f78a20(0x3d57a18);
    bRam0000000003eb49a4 = 1;
  }
  if (param_2 == 0) {
    unaff_x30 = &Atlas_Rendering_MaterialDuplicator__DuplicateRendererMaterial;
    auVar23 = func_0x00f78af4();
    lVar13 = auVar23._8_8_;
    lVar17 = auVar23._0_8_;
    unaff_x23 = 0;
  }
  else {
    /*UnityEngine.GameObject$$GetComponentsInChildren<Renderer>*/ func_0x0185d724(param_2,1,*(undefined8 *)(param_1 + 0x20),uRam0000000003d57a18);
    lVar13 = *(long *)(param_1 + 0x20);
    puVar3 = (undefined1 *)register0x00000008;
    lVar17 = param_1;
    lVar16 = param_3;
    uVar11 = param_4;
    lVar19 = param_5;
    param_5 = unaff_x19;
    param_4 = unaff_x20;
    param_3 = unaff_x21;
    param_1 = unaff_x22;
    uVar20 = unaff_x24;
    puVar21 = unaff_x29;
  }
  *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = uVar20;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(long *)(puVar3 + -0x30) = param_1;
  *(long *)(puVar3 + -0x28) = param_3;
  *(undefined8 *)(puVar3 + -0x20) = param_4;
  *(long *)(puVar3 + -0x18) = param_5;
  *(undefined1 **)(puVar3 + -0x10) = puVar21;
  *(undefined **)(puVar3 + -8) = unaff_x30;
  *(undefined8 *)(puVar3 + -0xa0) = uVar11;
  lVar7 = lVar16;
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
  *(undefined8 *)(puVar3 + -0x80) = 0;
  *(undefined8 *)(puVar3 + -0x78) = 0;
  *(undefined8 *)(puVar3 + -0x70) = 0;
  if (lVar13 == 0) goto code_r0x0149217c;
  param_3 = 0x3d32e30;
  unaff_x27 = 0x3d23990;
  unaff_x28 = 0x3d3b1c0;
  unaff_x26 = 0x3d3b1e0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar3 + -0x98,lVar13,uRam0000000003d3bbb8);
  *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x90);
  *(undefined8 *)(puVar3 + -0x80) = *(undefined8 *)(puVar3 + -0x98);
  *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(puVar3 + -0x88);
  uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar3 + -0x80,uRam0000000003d32e30);
  if ((uVar6 & 1) != 0) {
    lVar13 = *(long *)(puVar3 + -0x70);
    if (lVar13 == 0) {
      func_0x00f78af4();
    }
    else {
      lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar13,0);
      if (lVar7 != 0) {
        lVar8 = /*UnityEngine.GameObject$$get_tag*/ func_0x0322f10c(lVar7,0);
        lVar7 = *(long *)(puVar3 + -0xa0);
        puVar22 = &UNK_01491fcc;
        goto code_r0x01492204;
      }
      func_0x00f78af4();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x149217c);
    (*pcVar2)();
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar3 + -0x80,uRam0000000003d32e28);
  do {
    if (*(long *)(lVar17 + 0x20) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar17 + 0x20),uRam0000000003d3bbb0);
      if (*(long *)(lVar17 + 0x28) != 0) {
        uVar6 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar17 + 0x28),uRam0000000003d3b1a8);
        return uVar6;
      }
    }
code_r0x0149217c:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01492200;
    plVar9 = (long *)___cxa_begin_catch();
    lVar19 = *plVar9;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar3 + -0x80,uRam0000000003d32e28);
  } while (lVar19 == 0);
  func_0x00f78ac0(lVar19,0);
code_r0x01492200:
  puVar22 = &Atlas_Rendering_MaterialDuplicator__ShouldSkipBasedOnTag;
  __Unwind_Resume();
  lVar8 = extraout_x1;
code_r0x01492204:
  *(undefined1 **)(puVar3 + -0xb0) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0xa8) = puVar22;
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    if (lVar8 == 0) {
      auVar23 = func_0x00f78af4();
      plVar9 = auVar23._8_8_;
      *(undefined8 *)(puVar3 + -0x100) = unaff_x26;
      *(undefined8 *)(puVar3 + -0xf8) = unaff_x25;
      *(undefined8 *)(puVar3 + -0xf0) = 0x3eb4000;
      *(long *)(puVar3 + -0xe8) = lVar13;
      *(long *)(puVar3 + -0xe0) = lVar16;
      *(long *)(puVar3 + -0xd8) = param_3;
      *(long *)(puVar3 + -0xd0) = lVar19;
      *(long *)(puVar3 + -200) = lVar17;
      *(undefined1 **)(puVar3 + -0xc0) = puVar3 + -0xb0;
      *(undefined **)(puVar3 + -0xb8) =
           &Atlas_Rendering_MaterialDuplicator__DoesMaterialUseShaderInList;
      if ((bRam0000000003eb49a8 & 1) == 0) {
        func_0x00f78a20(0x3d220f0);
        func_0x00f78a20(0x3d1d148);
        func_0x00f78a20(0x3d1d348);
        func_0x00f78a20(0x3d22180);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb49a8 = 1;
      }
      *(undefined4 *)(puVar3 + -0x108) = 0;
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
            goto code_r0x01492314;
          }
          piVar18 = piVar18 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      lVar7 = 0;
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x01492314:
      plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (plVar9 == (long *)0x0) {
        func_0x00f78af4();
code_r0x01492530:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1492534);
        (*pcVar2)();
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
        lVar7 = 0;
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x0149238c:
        uVar6 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar6 & 1) == 0) {
          uVar11 = 0;
          *(undefined4 *)(puVar3 + -0x110) = 0x3b;
          *(undefined4 *)(puVar3 + -0x108) = 1;
          goto joined_r0x0149247c;
        }
        lVar16 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar6 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<Shader>_TypeInfo*/ lRam0000000003d1d348) {
              puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
              goto code_r0x014923e8;
            }
            piVar18 = piVar18 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerator<Shader>_TypeInfo*/ lRam0000000003d1d348,0);
code_r0x014923e8:
        uVar11 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if (auVar23._0_8_ == 0) {
          func_0x00f78af4();
          goto code_r0x01492530;
        }
        uVar20 = /*UnityEngine.Material$$get_shader*/ func_0x03237cdc(auVar23._0_8_,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar7 = 0;
        uVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar20,uVar11);
      } while ((uVar6 & 1) == 0);
      uVar11 = 1;
      *(undefined4 *)(puVar3 + -0x110) = 0x3d;
      *(undefined4 *)(puVar3 + -0x108) = 1;
joined_r0x0149247c:
      lVar19 = 0;
      lVar16 = 0;
      uVar20 = 0;
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
          lVar7 = 0;
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x014924d4:
          (*(code *)*puVar10)(plVar9,puVar10[1]);
        }
        if (lVar19 == 0) {
          if ((int)uVar20 != 0) {
            return 0;
          }
          uVar4 = (uint)uVar11;
          if (*(int *)(puVar3 + lVar16 * 4 + -0x110) != 0x3d) {
            uVar4 = 0;
          }
          return (ulong)uVar4;
        }
        func_0x00f78ac0(lVar19,0);
        iVar15 = (int)lVar7;
        if (extraout_w1_00 != 1) goto code_r0x01492580;
        plVar12 = (long *)___cxa_begin_catch();
        lVar19 = *plVar12;
        ___cxa_end_catch();
        uVar11 = 0;
        lVar16 = -1;
        uVar20 = 1;
      } while( true );
    }
    uVar4 = /*System.String$$Equals*/ func_0x029bab9c(lVar8,lVar7,0);
    uVar6 = (ulong)(uVar4 ^ 1);
  }
  return uVar6;
code_r0x01492580:
  auVar23 = __Unwind_Resume();
  uVar14 = auVar23._8_8_;
  lVar17 = auVar23._0_8_;
  *(undefined8 *)(puVar3 + -0x170) = unaff_x28;
  *(undefined8 *)(puVar3 + -0x168) = unaff_x27;
  *(undefined8 *)(puVar3 + -0x160) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x158) = 0x3d23990;
  *(undefined8 *)(puVar3 + -0x150) = 0x3d1d348;
  *(undefined8 *)(puVar3 + -0x148) = uVar20;
  *(long *)(puVar3 + -0x140) = lVar16;
  *(undefined8 *)(puVar3 + -0x138) = uVar11;
  *(long *)(puVar3 + -0x130) = lVar19;
  *(long **)(puVar3 + -0x128) = plVar9;
  *(undefined1 **)(puVar3 + -0x120) = puVar3 + -0xc0;
  *(undefined **)(puVar3 + -0x118) = &Atlas_Rendering_MaterialDuplicator__GetCachedOrDuplicate;
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
  lVar16 = *(long *)(lVar17 + 0x10);
  if (lVar16 != 0) {
    lVar19 = 0;
    uVar4 = 0;
    do {
      if ((int)*(uint *)(lVar16 + 0x18) <= (int)uVar4) goto code_r0x014926a4;
      if (*(uint *)(lVar16 + 0x18) <= uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(lVar16 + 0x10) + lVar19;
      uVar6 = *(ulong *)(lVar16 + 0x20);
      uVar11 = *(undefined8 *)(lVar16 + 0x28);
      uVar1 = *(ulong *)(lVar16 + 0x30);
      uVar20 = *(undefined8 *)(lVar16 + 0x38);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,uVar14,0);
      if (iVar5 != 0 && (int)uVar20 == iVar15) {
        lVar16 = *(long *)(lVar17 + 0x10);
        if (lVar16 != 0) {
          *(ulong *)(puVar3 + -400) = (ulong)((int)uVar6 + 1) | uVar6 & 0xffffffff00000000;
          *(undefined8 *)(puVar3 + -0x188) = uVar11;
          *(ulong *)(puVar3 + -0x180) = uVar1;
          *(undefined8 *)(puVar3 + -0x178) = uVar20;
          /*System.Collections.Generic.List<MaterialDuplicator.MaterialPair>$$set_Item*/ func_0x0254f814(lVar16,uVar4,puVar3 + -400,uRam0000000003d3d4e8);
          return uVar1;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      lVar16 = *(long *)(lVar17 + 0x10);
      lVar19 = lVar19 + 0x20;
    } while (lVar16 != 0);
  }
  do {
    do {
      func_0x00f78af4();
code_r0x014926a4:
      uVar6 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
      /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar6,uVar14,0);
      lVar16 = *(long *)(lVar17 + 0x10);
    } while (lVar16 == 0);
    *(undefined8 *)(puVar3 + -400) = _UNK_033f8410;
    *(undefined8 *)(puVar3 + -0x188) = uVar14;
    *(ulong *)(puVar3 + -0x180) = uVar6;
    *(int *)(puVar3 + -0x178) = iVar15;
    *(undefined4 *)(puVar3 + -0x174) = 0;
    /*System.Collections.Generic.List<MaterialDuplicator.MaterialPair>$$Add*/ func_0x0254fb84(lVar16,puVar3 + -400,uRam0000000003d3d4c0);
  } while (*(long *)(lVar17 + 0x18) == 0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar17 + 0x18),uVar6,uRam0000000003d3b198);
  return uVar6;
}



// ============================================================
// RVA: 0x1491e64 | Atlas.Rendering.MaterialDuplicator.DuplicateRendererMaterial
// ============================================================

/* WARNING: Possible PIC construction at 0x01491fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01492064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01491fcc) */
/* WARNING: Removing unreachable block (ram,0x01491fd0) */
/* WARNING: Removing unreachable block (ram,0x01491fe8) */
/* WARNING: Removing unreachable block (ram,0x01492068) */
/* WARNING: Removing unreachable block (ram,0x0149206c) */
/* WARNING: Removing unreachable block (ram,0x01492164) */
/* WARNING: Removing unreachable block (ram,0x01492088) */
/* WARNING: Removing unreachable block (ram,0x01492094) */
/* WARNING: Removing unreachable block (ram,0x01491fec) */
/* WARNING: Removing unreachable block (ram,0x014920a4) */
/* WARNING: Removing unreachable block (ram,0x014920a8) */
/* WARNING: Removing unreachable block (ram,0x014920c8) */
/* WARNING: Removing unreachable block (ram,0x014920b0) */
/* WARNING: Removing unreachable block (ram,0x01491ff8) */
/* WARNING: Removing unreachable block (ram,0x01492000) */
/* WARNING: Removing unreachable block (ram,0x01492008) */
/* WARNING: Removing unreachable block (ram,0x01492020) */
/* WARNING: Removing unreachable block (ram,0x01492028) */
/* WARNING: Removing unreachable block (ram,0x0149202c) */
/* WARNING: Removing unreachable block (ram,0x0149205c) */
/* WARNING: Removing unreachable block (ram,0x01492040) */
/* WARNING: Removing unreachable block (ram,0x0149215c) */
/* WARNING: Removing unreachable block (ram,0x01492048) */
/* WARNING: Removing unreachable block (ram,0x014920a0) */
/* WARNING: Removing unreachable block (ram,0x01492154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Rendering_MaterialDuplicator__DuplicateRendererMaterial
                (long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  uint uVar16;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined *puVar17;
  undefined1 auVar18 [16];
  ulong uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long *plStack_128;
  undefined1 **ppuStack_120;
  undefined *puStack_118;
  int aiStack_110 [4];
  undefined8 uStack_100;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_a0 = param_4;
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
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  if (param_2 == 0) goto LAB_0149217c;
  unaff_x27 = 0x3d23990;
  unaff_x28 = 0x3d3b1c0;
  unaff_x26 = 0x3d3b1e0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,param_2,uRam0000000003d3bbb8);
  uStack_78 = uStack_90;
  uStack_80 = uStack_98;
  lStack_70 = lStack_88;
  uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d32e30);
  if ((uVar5 & 1) != 0) {
    if (lStack_70 == 0) {
      func_0x00f78af4();
    }
    else {
      lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lStack_70,0);
      if (lVar6 != 0) {
        lVar6 = /*UnityEngine.GameObject$$get_tag*/ func_0x0322f10c(lVar6,0);
        puVar17 = (undefined *)0x1491fcc;
        param_3 = lStack_a0;
        goto code_r0x01492204;
      }
      func_0x00f78af4();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x149217c);
    (*pcVar2)();
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32e28);
  do {
    if (*(long *)(param_1 + 0x20) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x20),uRam0000000003d3bbb0);
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar5 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x28),uRam0000000003d3b1a8);
        return uVar5;
      }
    }
LAB_0149217c:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01492200;
    plVar7 = (long *)___cxa_begin_catch();
    lVar6 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32e28);
  } while (lVar6 == 0);
  func_0x00f78ac0(lVar6,0);
code_r0x01492200:
  puVar17 = &Atlas_Rendering_MaterialDuplicator__ShouldSkipBasedOnTag;
  __Unwind_Resume();
  lVar6 = extraout_x1;
code_r0x01492204:
  if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    puStack_b0 = &stack0xfffffffffffffff0;
    puStack_a8 = puVar17;
    if (lVar6 == 0) {
      auVar18 = func_0x00f78af4();
      plVar7 = auVar18._8_8_;
      puStack_b8 = &Atlas_Rendering_MaterialDuplicator__DoesMaterialUseShaderInList;
      uStack_100 = unaff_x26;
      puStack_c0 = (undefined1 *)&puStack_b0;
      if ((bRam0000000003eb49a8 & 1) == 0) {
        puStack_c0 = (undefined1 *)&puStack_b0;
        func_0x00f78a20(0x3d220f0);
        func_0x00f78a20(0x3d1d148);
        func_0x00f78a20(0x3d1d348);
        func_0x00f78a20(0x3d22180);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb49a8 = 1;
      }
      aiStack_110[2] = 0;
      if (plVar7 == (long *)0x0) {
        return 1;
      }
      lVar6 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar5 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == /*System.Collections.Generic.IEnumerable<Shader>_TypeInfo*/ lRam0000000003d1d148) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x01492314;
          }
          piVar14 = piVar14 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      param_3 = 0;
      puVar8 = (undefined8 *)func_0x00fac1f0(plVar7);
code_r0x01492314:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (plVar7 == (long *)0x0) {
        func_0x00f78af4();
code_r0x01492530:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1492534);
        (*pcVar2)();
      }
      do {
        lVar6 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar5 != 0) {
          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
              goto code_r0x0149238c;
            }
            piVar14 = piVar14 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        param_3 = 0;
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar7);
code_r0x0149238c:
        uVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar5 & 1) == 0) {
          uVar9 = 0;
          aiStack_110[0] = 0x3b;
          goto joined_r0x0149247c;
        }
        lVar6 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar5 != 0) {
          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == /*System.Collections.Generic.IEnumerator<Shader>_TypeInfo*/ lRam0000000003d1d348) {
              puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
              goto code_r0x014923e8;
            }
            piVar14 = piVar14 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.Generic.IEnumerator<Shader>_TypeInfo*/ lRam0000000003d1d348,0);
code_r0x014923e8:
        uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if (auVar18._0_8_ == 0) {
          func_0x00f78af4();
          goto code_r0x01492530;
        }
        uVar10 = /*UnityEngine.Material$$get_shader*/ func_0x03237cdc(auVar18._0_8_,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        param_3 = 0;
        uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar10,uVar9);
      } while ((uVar5 & 1) == 0);
      uVar9 = 1;
      aiStack_110[0] = 0x3d;
joined_r0x0149247c:
      aiStack_110[2] = 1;
      lVar15 = 0;
      lVar6 = 0;
      uVar10 = 0;
      do {
        if (plVar7 != (long *)0x0) {
          lVar13 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar5 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar8 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                goto code_r0x014924d4;
              }
              piVar14 = piVar14 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          param_3 = 0;
          puVar8 = (undefined8 *)func_0x00fac1f0(plVar7);
code_r0x014924d4:
          (*(code *)*puVar8)(plVar7,puVar8[1]);
        }
        if (lVar15 == 0) {
          if ((int)uVar10 != 0) {
            return 0;
          }
          uVar3 = (uint)uVar9;
          if (aiStack_110[lVar6] != 0x3d) {
            uVar3 = 0;
          }
          return (ulong)uVar3;
        }
        func_0x00f78ac0(lVar15,0);
        uVar3 = (uint)param_3;
        if (extraout_w1_00 != 1) goto code_r0x01492580;
        plVar11 = (long *)___cxa_begin_catch();
        lVar15 = *plVar11;
        ___cxa_end_catch();
        uVar9 = 0;
        lVar6 = -1;
        uVar10 = 1;
      } while( true );
    }
    uVar3 = /*System.String$$Equals*/ func_0x029bab9c(lVar6,param_3,0);
    uVar5 = (ulong)(uVar3 ^ 1);
  }
  return uVar5;
code_r0x01492580:
  auVar18 = __Unwind_Resume();
  uVar12 = auVar18._8_8_;
  lVar13 = auVar18._0_8_;
  uStack_158 = 0x3d23990;
  uStack_150 = 0x3d1d348;
  puStack_118 = &Atlas_Rendering_MaterialDuplicator__GetCachedOrDuplicate;
  uStack_170 = unaff_x28;
  uStack_168 = unaff_x27;
  uStack_160 = unaff_x26;
  uStack_148 = uVar10;
  lStack_140 = lVar6;
  uStack_138 = uVar9;
  lStack_130 = lVar15;
  plStack_128 = plVar7;
  ppuStack_120 = &puStack_c0;
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
  lVar6 = *(long *)(lVar13 + 0x10);
  if (lVar6 != 0) {
    lVar15 = 0;
    uVar16 = 0;
    do {
      if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar16) goto code_r0x014926a4;
      if (*(uint *)(lVar6 + 0x18) <= uVar16) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar6 = *(long *)(lVar6 + 0x10) + lVar15;
      uVar5 = *(ulong *)(lVar6 + 0x20);
      uVar9 = *(undefined8 *)(lVar6 + 0x28);
      uVar1 = *(ulong *)(lVar6 + 0x30);
      uVar10 = *(undefined8 *)(lVar6 + 0x38);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,uVar12,0);
      if (iVar4 != 0 && (uint)uVar10 == uVar3) {
        if (*(long *)(lVar13 + 0x10) != 0) {
          uStack_190 = (ulong)((int)uVar5 + 1) | uVar5 & 0xffffffff00000000;
          uStack_188 = uVar9;
          uStack_180 = uVar1;
          uStack_178 = uVar10;
          /*System.Collections.Generic.List<MaterialDuplicator.MaterialPair>$$set_Item*/ func_0x0254f814(*(long *)(lVar13 + 0x10),uVar16,&uStack_190,uRam0000000003d3d4e8);
          return uVar1;
        }
        break;
      }
      uVar16 = uVar16 + 1;
      lVar6 = *(long *)(lVar13 + 0x10);
      lVar15 = lVar15 + 0x20;
    } while (lVar6 != 0);
  }
  do {
    do {
      func_0x00f78af4();
code_r0x014926a4:
      uVar5 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
      /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar5,uVar12,0);
    } while (*(long *)(lVar13 + 0x10) == 0);
    uStack_190 = _UNK_033f8410;
    uStack_178 = (ulong)uVar3;
    uStack_188 = uVar12;
    uStack_180 = uVar5;
    /*System.Collections.Generic.List<MaterialDuplicator.MaterialPair>$$Add*/ func_0x0254fb84(*(long *)(lVar13 + 0x10),&uStack_190,uRam0000000003d3d4c0);
  } while (*(long *)(lVar13 + 0x18) == 0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar13 + 0x18),uVar5,uRam0000000003d3b198);
  return uVar5;
}



// ============================================================
// RVA: 0x1492204 | Atlas.Rendering.MaterialDuplicator.ShouldSkipBasedOnTag
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Rendering_MaterialDuplicator__ShouldSkipBasedOnTag
                (undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  bool bVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  int extraout_w1;
  long lVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  ulong uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  int aiStack_70 [4];
  
  if (param_3 == 0) {
    uVar7 = 0;
  }
  else {
    if (param_2 == 0) {
      auVar18 = func_0x00f78af4();
      plVar9 = auVar18._8_8_;
      if ((bRam0000000003eb49a8 & 1) == 0) {
        func_0x00f78a20(0x3d220f0);
        func_0x00f78a20(0x3d1d148);
        func_0x00f78a20(0x3d1d348);
        func_0x00f78a20(0x3d22180);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb49a8 = 1;
      }
      aiStack_70[2] = 0;
      if (plVar9 == (long *)0x0) {
        return 1;
      }
      lVar13 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerable<Shader>_TypeInfo*/ lRam0000000003d1d148) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto code_r0x01492314;
          }
          piVar15 = piVar15 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      param_3 = 0;
      puVar8 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x01492314:
      plVar9 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
      if (plVar9 == (long *)0x0) {
        func_0x00f78af4();
code_r0x01492530:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1492534);
        (*pcVar4)();
      }
      do {
        lVar13 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto code_r0x0149238c;
            }
            piVar15 = piVar15 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        param_3 = 0;
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x0149238c:
        uVar7 = (*(code *)*puVar8)(plVar9,puVar8[1]);
        if ((uVar7 & 1) == 0) {
          uVar5 = 0;
          aiStack_70[0] = 0x3b;
          goto joined_r0x0149247c;
        }
        lVar13 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerator<Shader>_TypeInfo*/ lRam0000000003d1d348) {
              puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto code_r0x014923e8;
            }
            piVar15 = piVar15 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerator<Shader>_TypeInfo*/ lRam0000000003d1d348,0);
code_r0x014923e8:
        uVar10 = (*(code *)*puVar8)(plVar9,puVar8[1]);
        if (auVar18._0_8_ == 0) {
          func_0x00f78af4();
          goto code_r0x01492530;
        }
        uVar11 = /*UnityEngine.Material$$get_shader*/ func_0x03237cdc(auVar18._0_8_,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        param_3 = 0;
        uVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,uVar10);
      } while ((uVar7 & 1) == 0);
      uVar5 = 1;
      aiStack_70[0] = 0x3d;
joined_r0x0149247c:
      bVar3 = false;
      aiStack_70[2] = 1;
      lVar16 = 0;
      lVar13 = 0;
      do {
        if (plVar9 != (long *)0x0) {
          lVar14 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar8 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto code_r0x014924d4;
              }
              piVar15 = piVar15 + 4;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          param_3 = 0;
          puVar8 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x014924d4:
          (*(code *)*puVar8)(plVar9,puVar8[1]);
        }
        if (lVar16 == 0) {
          if (bVar3) {
            return 0;
          }
          if (aiStack_70[lVar13] != 0x3d) {
            uVar5 = 0;
          }
          return (ulong)uVar5;
        }
        func_0x00f78ac0(lVar16,0);
        uVar5 = (uint)param_3;
        if (extraout_w1 != 1) goto code_r0x01492580;
        plVar12 = (long *)___cxa_begin_catch();
        lVar16 = *plVar12;
        ___cxa_end_catch();
        uVar5 = 0;
        lVar13 = -1;
        bVar3 = true;
      } while( true );
    }
    uVar5 = /*System.String$$Equals*/ func_0x029bab9c(param_2,param_3,0);
    uVar7 = (ulong)(uVar5 ^ 1);
  }
  return uVar7;
code_r0x01492580:
  auVar18 = __Unwind_Resume();
  uVar10 = auVar18._8_8_;
  lVar13 = auVar18._0_8_;
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
  lVar16 = *(long *)(lVar13 + 0x10);
  if (lVar16 != 0) {
    lVar14 = 0;
    uVar17 = 0;
    do {
      if ((int)*(uint *)(lVar16 + 0x18) <= (int)uVar17) goto code_r0x014926a4;
      if (*(uint *)(lVar16 + 0x18) <= uVar17) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(lVar16 + 0x10) + lVar14;
      uVar7 = *(ulong *)(lVar16 + 0x20);
      uVar11 = *(undefined8 *)(lVar16 + 0x28);
      uVar1 = *(ulong *)(lVar16 + 0x30);
      uVar2 = *(undefined8 *)(lVar16 + 0x38);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,uVar10,0);
      if (iVar6 != 0 && (uint)uVar2 == uVar5) {
        if (*(long *)(lVar13 + 0x10) != 0) {
          uStack_f0 = (ulong)((int)uVar7 + 1) | uVar7 & 0xffffffff00000000;
          uStack_e8 = uVar11;
          uStack_e0 = uVar1;
          uStack_d8 = uVar2;
          /*System.Collections.Generic.List<MaterialDuplicator.MaterialPair>$$set_Item*/ func_0x0254f814(*(long *)(lVar13 + 0x10),uVar17,&uStack_f0,uRam0000000003d3d4e8);
          return uVar1;
        }
        break;
      }
      uVar17 = uVar17 + 1;
      lVar16 = *(long *)(lVar13 + 0x10);
      lVar14 = lVar14 + 0x20;
    } while (lVar16 != 0);
  }
  do {
    do {
      func_0x00f78af4();
code_r0x014926a4:
      uVar7 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
      /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar7,uVar10,0);
    } while (*(long *)(lVar13 + 0x10) == 0);
    uStack_f0 = _UNK_033f8410;
    uStack_d8 = (ulong)uVar5;
    uStack_e8 = uVar10;
    uStack_e0 = uVar7;
    /*System.Collections.Generic.List<MaterialDuplicator.MaterialPair>$$Add*/ func_0x0254fb84(*(long *)(lVar13 + 0x10),&uStack_f0,uRam0000000003d3d4c0);
  } while (*(long *)(lVar13 + 0x18) == 0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar13 + 0x18),uVar7,uRam0000000003d3b198);
  return uVar7;
}



// ============================================================
// RVA: 0x149223c | Atlas.Rendering.MaterialDuplicator.DoesMaterialUseShaderInList
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Rendering_MaterialDuplicator__DoesMaterialUseShaderInList
                (long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  int extraout_w1;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  ulong uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  int aiStack_60 [4];
  
  if ((bRam0000000003eb49a8 & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d148);
    func_0x00f78a20(0x3d1d348);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb49a8 = 1;
  }
  aiStack_60[2] = 0;
  if (param_2 == (long *)0x0) {
    return 1;
  }
  lVar12 = *param_2;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerable<Shader>_TypeInfo*/ lRam0000000003d1d148) {
        puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_01492314;
      }
      piVar15 = piVar15 + 4;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  param_3 = 0;
  puVar6 = (undefined8 *)func_0x00fac1f0(param_2);
LAB_01492314:
  plVar7 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
  if (plVar7 == (long *)0x0) {
    func_0x00f78af4();
code_r0x01492530:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1492534);
    (*pcVar4)();
  }
  do {
    lVar12 = *plVar7;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto code_r0x0149238c;
        }
        piVar15 = piVar15 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    param_3 = 0;
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7);
code_r0x0149238c:
    uVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar14 & 1) == 0) {
      uVar11 = 0;
      aiStack_60[0] = 0x3b;
      goto joined_r0x0149247c;
    }
    lVar12 = *plVar7;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerator<Shader>_TypeInfo*/ lRam0000000003d1d348) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto code_r0x014923e8;
        }
        piVar15 = piVar15 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.Generic.IEnumerator<Shader>_TypeInfo*/ lRam0000000003d1d348,0);
code_r0x014923e8:
    uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if (param_1 == 0) {
      func_0x00f78af4();
      goto code_r0x01492530;
    }
    uVar9 = /*UnityEngine.Material$$get_shader*/ func_0x03237cdc(param_1,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_3 = 0;
    uVar14 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,uVar8);
  } while ((uVar14 & 1) == 0);
  uVar11 = 1;
  aiStack_60[0] = 0x3d;
joined_r0x0149247c:
  bVar3 = false;
  aiStack_60[2] = 1;
  lVar16 = 0;
  lVar12 = 0;
  do {
    if (plVar7 != (long *)0x0) {
      lVar13 = *plVar7;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto code_r0x014924d4;
          }
          piVar15 = piVar15 + 4;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      param_3 = 0;
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7);
code_r0x014924d4:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
    }
    if (lVar16 == 0) {
      if (bVar3) {
        return 0;
      }
      if (aiStack_60[lVar12] != 0x3d) {
        uVar11 = 0;
      }
      return (ulong)uVar11;
    }
    func_0x00f78ac0(lVar16,0);
    uVar11 = (uint)param_3;
    if (extraout_w1 != 1) break;
    plVar10 = (long *)___cxa_begin_catch();
    lVar16 = *plVar10;
    ___cxa_end_catch();
    uVar11 = 0;
    lVar12 = -1;
    bVar3 = true;
  } while( true );
  auVar18 = __Unwind_Resume();
  uVar8 = auVar18._8_8_;
  lVar12 = auVar18._0_8_;
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
  lVar16 = *(long *)(lVar12 + 0x10);
  if (lVar16 != 0) {
    lVar13 = 0;
    uVar17 = 0;
    do {
      if ((int)*(uint *)(lVar16 + 0x18) <= (int)uVar17) goto code_r0x014926a4;
      if (*(uint *)(lVar16 + 0x18) <= uVar17) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(lVar16 + 0x10) + lVar13;
      uVar14 = *(ulong *)(lVar16 + 0x20);
      uVar9 = *(undefined8 *)(lVar16 + 0x28);
      uVar1 = *(ulong *)(lVar16 + 0x30);
      uVar2 = *(undefined8 *)(lVar16 + 0x38);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,uVar8,0);
      if (iVar5 != 0 && (uint)uVar2 == uVar11) {
        if (*(long *)(lVar12 + 0x10) != 0) {
          uStack_e0 = (ulong)((int)uVar14 + 1) | uVar14 & 0xffffffff00000000;
          uStack_d8 = uVar9;
          uStack_d0 = uVar1;
          uStack_c8 = uVar2;
          /*System.Collections.Generic.List<MaterialDuplicator.MaterialPair>$$set_Item*/ func_0x0254f814(*(long *)(lVar12 + 0x10),uVar17,&uStack_e0,uRam0000000003d3d4e8);
          return uVar1;
        }
        break;
      }
      uVar17 = uVar17 + 1;
      lVar16 = *(long *)(lVar12 + 0x10);
      lVar13 = lVar13 + 0x20;
    } while (lVar16 != 0);
  }
  do {
    do {
      func_0x00f78af4();
code_r0x014926a4:
      uVar14 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
      /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar14,uVar8,0);
    } while (*(long *)(lVar12 + 0x10) == 0);
    uStack_e0 = _UNK_033f8410;
    uStack_c8 = (ulong)uVar11;
    uStack_d8 = uVar8;
    uStack_d0 = uVar14;
    /*System.Collections.Generic.List<MaterialDuplicator.MaterialPair>$$Add*/ func_0x0254fb84(*(long *)(lVar12 + 0x10),&uStack_e0,uRam0000000003d3d4c0);
  } while (*(long *)(lVar12 + 0x18) == 0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar12 + 0x18),uVar14,uRam0000000003d3b198);
  return uVar14;
}



// ============================================================
// RVA: 0x1492584 | Atlas.Rendering.MaterialDuplicator.GetCachedOrDuplicate
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Atlas_Rendering_MaterialDuplicator__GetCachedOrDuplicate
          (long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
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
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    lVar8 = 0;
    uVar7 = 0;
    do {
      if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar7) goto LAB_014926a4;
      if (*(uint *)(lVar6 + 0x18) <= uVar7) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar6 = *(long *)(lVar6 + 0x10) + lVar8;
      uVar1 = *(ulong *)(lVar6 + 0x20);
      uVar2 = *(undefined8 *)(lVar6 + 0x28);
      uVar5 = *(undefined8 *)(lVar6 + 0x30);
      uVar3 = *(undefined8 *)(lVar6 + 0x38);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar2,param_2,0);
      if (iVar4 != 0 && (uint)uVar3 == param_3) {
        if (*(long *)(param_1 + 0x10) != 0) {
          uStack_80 = (ulong)((int)uVar1 + 1) | uVar1 & 0xffffffff00000000;
          uStack_78 = uVar2;
          uStack_70 = uVar5;
          uStack_68 = uVar3;
          /*System.Collections.Generic.List<MaterialDuplicator.MaterialPair>$$set_Item*/ func_0x0254f814(*(long *)(param_1 + 0x10),uVar7,&uStack_80,uRam0000000003d3d4e8);
          return uVar5;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar8 = lVar8 + 0x20;
    } while (lVar6 != 0);
  }
  do {
    do {
      func_0x00f78af4();
LAB_014926a4:
      uVar5 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
      /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar5,param_2,0);
    } while (*(long *)(param_1 + 0x10) == 0);
    uStack_80 = _UNK_033f8410;
    uStack_68 = (ulong)param_3;
    uStack_78 = param_2;
    uStack_70 = uVar5;
    /*System.Collections.Generic.List<MaterialDuplicator.MaterialPair>$$Add*/ func_0x0254fb84(*(long *)(param_1 + 0x10),&uStack_80,uRam0000000003d3d4c0);
  } while (*(long *)(param_1 + 0x18) == 0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x18),uVar5,uRam0000000003d3b198);
  return uVar5;
}



// ============================================================
// RVA: 0x149276c | Atlas.Rendering.MaterialDuplicator.RemoveDuplicatedMaterials
// ============================================================

void Atlas_Rendering_MaterialDuplicator__RemoveDuplicatedMaterials
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  int extraout_w1;
  long lVar12;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  int iStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb49a6 & 1) == 0) {
    func_0x00f78a20(0x3d32e28);
    func_0x00f78a20(0x3d32e30);
    func_0x00f78a20(0x3d32e38);
    func_0x00f78a20(0x3d57a18);
    func_0x00f78a20(0x3d3b1a8);
    func_0x00f78a20(0x3d3bbb0);
    func_0x00f78a20(0x3d3bbb8);
    func_0x00f78a20(0x3d3d4d0);
    func_0x00f78a20(0x3d3b1b8);
    func_0x00f78a20(0x3d3b1d0);
    func_0x00f78a20(0x3d3d4d8);
    func_0x00f78a20(0x3d3b1d8);
    func_0x00f78a20(0x3d3d4e0);
    func_0x00f78a20(0x3d3d4e8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb49a6 = 1;
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_01492b90;
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x18) == 0) goto LAB_01492b28;
  if (param_2 == 0) goto LAB_01492b90;
  /*UnityEngine.GameObject$$GetComponentsInChildren<Renderer>*/ func_0x0185d724(param_2,1,*(undefined8 *)(param_1 + 0x20),uRam0000000003d57a18);
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_01492b90;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&iStack_98,*(long *)(param_1 + 0x20),uRam0000000003d3bbb8);
  uStack_b0 = CONCAT44(uStack_94,iStack_98);
  uStack_a8 = uStack_90;
  lStack_a0 = lStack_88;
  while (uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_b0,uRam0000000003d32e30), lVar12 = lStack_a0,
        (uVar7 & 1) != 0) {
    if (lStack_a0 == 0) {
      func_0x00f78af4();
      goto code_r0x01492b8c;
    }
    lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lStack_a0,0);
    if (lVar8 == 0) {
      func_0x00f78af4();
      goto code_r0x01492b8c;
    }
    uVar9 = /*UnityEngine.GameObject$$get_tag*/ func_0x0322f10c(lVar8,0);
    uVar7 = Atlas_Rendering_MaterialDuplicator__ShouldSkipBasedOnTag(uVar9,uVar9,param_4);
    if ((uVar7 & 1) == 0) {
      /*UnityEngine.Renderer$$GetSharedMaterials*/ func_0x0325bfc4(lVar12,*(undefined8 *)(param_1 + 0x28),0);
      lVar12 = *(long *)(param_1 + 0x28);
      if (lVar12 == 0) {
LAB_01492adc:
        func_0x00f78af4();
code_r0x01492b8c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1492b90);
        (*pcVar4)();
      }
      uVar7 = 0;
      while ((long)uVar7 < (long)(int)*(uint *)(lVar12 + 0x18)) {
        if (*(uint *)(lVar12 + 0x18) <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar9 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + uVar7 * 8 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar9,0,0);
        if (((uVar10 & 1) != 0) &&
           (iVar6 = Atlas_Rendering_MaterialDuplicator__DoesMaterialUseShaderInList(uVar9,param_3),
           iVar6 != 0)) {
          lVar12 = *(long *)(param_1 + 0x10);
          if (lVar12 == 0) {
LAB_01492b60:
            func_0x00f78af4();
            goto code_r0x01492b8c;
          }
          lVar8 = 0;
          uVar10 = 0;
          while ((long)uVar10 < (long)(int)*(uint *)(lVar12 + 0x18)) {
            if (*(uint *)(lVar12 + 0x18) <= uVar10) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar12 = *(long *)(lVar12 + 0x10) + lVar8;
            iVar6 = *(int *)(lVar12 + 0x20);
            uStack_78 = *(undefined8 *)(lVar12 + 0x24);
            uStack_70 = *(undefined4 *)(lVar12 + 0x2c);
            lVar1 = *(long *)(lVar12 + 0x30);
            uVar2 = *(undefined8 *)(lVar12 + 0x38);
            if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            bVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar1,uVar9,0);
            uVar3 = uRam0000000003d3d4e8;
            if ((bVar5 & (int)uVar2 == param_5) != 0) {
              iVar6 = iVar6 + -1;
              if (iVar6 == 0) {
                if (*(long *)(param_1 + 0x18) == 0) {
                  func_0x00f78af4();
                  goto code_r0x01492b8c;
                }
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(*(long *)(param_1 + 0x18),uVar9,uRam0000000003d3b1b8);
                if (*(long *)(param_1 + 0x10) == 0) {
                  func_0x00f78af4();
                  goto code_r0x01492b8c;
                }
                /*System.Collections.Generic.List<MaterialDuplicator.MaterialPair>$$RemoveAt*/ func_0x025514dc(*(long *)(param_1 + 0x10),uVar10,uRam0000000003d3d4d0);
                break;
              }
              lVar12 = *(long *)(param_1 + 0x10);
              if (lVar12 == 0) {
                func_0x00f78af4();
                goto code_r0x01492b8c;
              }
              *(undefined8 *)((ulong)&iStack_98 | 4) = uStack_78;
              *(undefined4 *)((undefined8 *)((ulong)&iStack_98 | 4) + 1) = uStack_70;
              iStack_98 = iVar6;
              lStack_88 = lVar1;
              uStack_80 = uVar2;
              /*System.Collections.Generic.List<MaterialDuplicator.MaterialPair>$$set_Item*/ func_0x0254f814(lVar12,uVar10,&iStack_98,uVar3);
            }
            uVar10 = uVar10 + 1;
            lVar12 = *(long *)(param_1 + 0x10);
            lVar8 = lVar8 + 0x20;
            if (lVar12 == 0) goto LAB_01492b60;
          }
        }
        uVar7 = uVar7 + 1;
        lVar12 = *(long *)(param_1 + 0x28);
        if (lVar12 == 0) goto LAB_01492adc;
      }
    }
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_b0,uRam0000000003d32e28);
  do {
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_01492b90:
      func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x20),uRam0000000003d3bbb0);
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_01492b90;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x28),uRam0000000003d3b1a8);
LAB_01492b28:
      if (*(long *)PTR_03a5d648 == lStack_68) {
        return;
      }
    }
    ___stack_chk_fail();
    if (extraout_w1 != 1) goto code_r0x01492c24;
    plVar11 = (long *)___cxa_begin_catch();
    lVar12 = *plVar11;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_b0,uRam0000000003d32e28);
  } while (lVar12 == 0);
  func_0x00f78ac0(lVar12,0);
code_r0x01492c24:
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x1492c28 | Atlas.Rendering.MaterialDuplicator..ctor
// ============================================================

void Atlas_Rendering_MaterialDuplicator___ctor(void)

{
  return;
}



