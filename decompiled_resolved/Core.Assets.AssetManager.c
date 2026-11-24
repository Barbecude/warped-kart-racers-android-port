// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Assets.AssetManager

// ============================================================
// RVA: 0x16340bc | Core.Assets.AssetManager.get_IsInited
// ============================================================

undefined1 Core_Assets_AssetManager__get_IsInited(long param_1)

{
  return *(undefined1 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x16340c4 | Core.Assets.AssetManager.Init
// ============================================================

long Core_Assets_AssetManager__Init(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb5677 & 1) == 0) {
    func_0x00f78a20(0x3d26938);
    bRam0000000003eb5677 = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.Assets.AssetManager.<Init>d__17_TypeInfo*/ uRam0000000003d26938);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  return lVar1;
}



// ============================================================
// RVA: 0x163415c | Core.Assets.AssetManager.DeInit
// ============================================================

long Core_Assets_AssetManager__DeInit(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb5678 & 1) == 0) {
    func_0x00f78a20(0x3d26930);
    bRam0000000003eb5678 = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.Assets.AssetManager.<DeInit>d__18_TypeInfo*/ uRam0000000003d26930);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  return lVar1;
}



// ============================================================
// RVA: 0x16341f4 | Core.Assets.AssetManager.Update
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0163492c) */
/* WARNING: Removing unreachable block (ram,0x01634944) */
/* WARNING: Removing unreachable block (ram,0x01634914) */

void Core_Assets_AssetManager__Update(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  int iVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  int iStack_178;
  undefined4 uStack_174;
  int aiStack_170 [4];
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
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
  
  if ((bRam0000000003eb5679 & 1) == 0) {
    func_0x00f78a20(0x3d1fda0);
    func_0x00f78a20(0x3d2c050);
    func_0x00f78a20(0x3d2be18);
    func_0x00f78a20(0x3d2bfa0);
    func_0x00f78a20(0x3d2e030);
    func_0x00f78a20(0x3d2fed0);
    func_0x00f78a20(0x3d34f28);
    func_0x00f78a20(0x3d32190);
    func_0x00f78a20(0x3d32168);
    func_0x00f78a20(0x3d34f30);
    func_0x00f78a20(0x3d32198);
    func_0x00f78a20(0x3d32180);
    func_0x00f78a20(0x3d321a0);
    func_0x00f78a20(0x3d34f38);
    func_0x00f78a20(0x3d32188);
    func_0x00f78a20(0x3d35c78);
    func_0x00f78a20(0x3d35c88);
    func_0x00f78a20(0x3d39d50);
    func_0x00f78a20(0x3d39d60);
    func_0x00f78a20(0x3d3ccd8);
    func_0x00f78a20(0x3d39d48);
    func_0x00f78a20(0x3d3cce0);
    func_0x00f78a20(0x3d3cce8);
    func_0x00f78a20(0x3d1d7d0);
    func_0x00f78a20(0x3d421d0);
    bRam0000000003eb5679 = 1;
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
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  aiStack_170[3] = 0;
  if (((*(ushort *)(/*Core.Assets.AssetManager_TypeInfo*/ lRam0000000003d1fda0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Assets.AssetManager_TypeInfo*/ lRam0000000003d1fda0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = **(undefined8 **)(/*Core.Assets.AssetManager_TypeInfo*/ lRam0000000003d1fda0 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar7,0);
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == 0) {
    func_0x00f78af4();
  }
  else {
    iVar10 = *(int *)(lVar12 + 0x18);
    if (iVar10 < 1) {
LAB_016345b0:
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x00f78af4();
      }
      else {
        lVar12 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, SchemaEntity>$$get_Values*/ func_0x01ed7608(*(long *)(param_1 + 0x30),uRam0000000003d2fed0);
        if (lVar12 == 0) {
          func_0x00f78af4();
        }
        else {
          /*System.Collections.Generic.Dictionary.ValueCollection<XmlQualifiedName, SchemaEntity>$$GetEnumerator*/ func_0x01ba1fec(&uStack_1f8,lVar12,uRam0000000003d421d0);
          uStack_110 = uStack_1e8;
          uStack_118 = uStack_1f0;
          uStack_120 = uStack_1f8;
          iVar10 = 0;
          while( true ) {
            do {
              do {
                uVar13 = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<XmlQualifiedName, SchemaEntity>$$MoveNext*/ func_0x01fd66d0(&uStack_120,uRam0000000003d34f30);
                uVar8 = uStack_110;
                if ((uVar13 & 1) == 0) {
                  aiStack_170[iVar10] = 0x22d;
                  aiStack_170[3] = aiStack_170[3] + 1;
                  /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<XmlQualifiedName, SchemaEntity>$$Dispose*/ func_0x01fd66cc(&uStack_120,uRam0000000003d34f28);
                  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar7,0);
                  return;
                }
                if (uStack_110 == 0) {
                  func_0x00f78af4();
                  goto code_r0x01634950;
                }
              } while (*(int *)(uStack_110 + 0x18) != 2);
              if (*(long *)(uStack_110 + 0x20) == 0) {
                func_0x00f78af4();
                goto code_r0x01634950;
              }
              iVar4 = *(int *)(*(long *)(uStack_110 + 0x20) + 0x20);
            } while (iVar4 <= *(int *)(uStack_110 + 0x1c));
            lVar12 = func_0x00f78aec(/*System.Collections.Generic.List<AssetManagerHandle>_TypeInfo*/ uRam0000000003d1d7d0);
            /*System.Collections.Generic.List<AssetManagerHandle>$$.ctor*/ func_0x0236ed70(lVar12,iVar4,uRam0000000003d39d48);
            if (*(long *)(uVar8 + 0x20) == 0) break;
            /*System.Collections.Generic.HashSet<AssetManagerHandle>$$GetEnumerator*/ func_0x021cf268(&uStack_1f8,*(long *)(uVar8 + 0x20),uRam0000000003d35c78);
            uStack_138 = uStack_1f0;
            uStack_140 = uStack_1f8;
            uStack_130 = uStack_1e8;
            while (uVar8 = /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$MoveNext*/ func_0x01f636e0(&uStack_140,uRam0000000003d32180), (uVar8 & 1) != 0) {
              if (*(long *)(param_1 + 0x18) == 0) {
                func_0x00f78af4();
                goto code_r0x01634950;
              }
              uVar8 = uStack_130 & 0xffffffff;
              /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(&uStack_1f8,*(long *)(param_1 + 0x18),uVar8,uRam0000000003d2e030);
              if (iStack_178 == 0) {
                if (lVar12 == 0) {
                  func_0x00f78af4();
                  goto code_r0x01634950;
                }
                /*System.Collections.Generic.List<AssetManagerHandle>$$Add*/ func_0x0236f95c(lVar12,uVar8,uRam0000000003d39d50);
              }
            }
            aiStack_170[iVar10] = 0x1ce;
            iVar4 = aiStack_170[3];
            iVar10 = aiStack_170[3] + 1;
            aiStack_170[3] = iVar10;
            /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f636dc(&uStack_140,uRam0000000003d32168);
            if (iVar10 == 0) {
              iVar10 = 0;
            }
            else if (aiStack_170[iVar4] == 0x1ce) {
              iVar10 = iVar4;
              aiStack_170[3] = iVar4;
            }
            if (lVar12 == 0) {
              func_0x00f78af4();
              goto code_r0x01634950;
            }
            /*System.Collections.Generic.List<AssetManagerHandle>$$GetEnumerator*/ func_0x0237041c(&uStack_1f8,lVar12,uRam0000000003d39d60);
            uStack_158 = uStack_1f0;
            uStack_160 = uStack_1f8;
            uStack_150 = uStack_1e8;
            while (uVar8 = /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$MoveNext*/ func_0x01f639a0(&uStack_160,uRam0000000003d32198), (uVar8 & 1) != 0) {
              /*Core.Assets.AssetManager$$ReleaseAsset*/ func_0x016353e4(param_1,uStack_150 & 0xffffffff);
            }
            aiStack_170[iVar10] = 0x203;
            iVar5 = aiStack_170[3];
            iVar4 = aiStack_170[3] + 1;
            aiStack_170[3] = iVar4;
            /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f6399c(&uStack_160,uRam0000000003d32190);
            iVar10 = 0;
            if ((iVar4 != 0) && (iVar10 = iVar4, aiStack_170[iVar5] == 0x203)) {
              iVar10 = iVar5;
              aiStack_170[3] = iVar5;
            }
          }
          func_0x00f78af4();
        }
      }
    }
    else {
      uVar11 = 0;
      do {
        if (*(uint *)(lVar12 + 0x18) <= uVar11) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(param_1 + 0x18) == 0) {
          func_0x00f78af4();
          goto code_r0x01634950;
        }
        lVar12 = *(long *)(lVar12 + 0x10) + (long)(int)uVar11 * 0x20;
        lVar2 = *(long *)(lVar12 + 0x28);
        lVar3 = *(long *)(lVar12 + 0x30);
        uVar13 = *(ulong *)(lVar12 + 0x38);
        uVar1 = *(undefined4 *)(lVar12 + 0x20);
        /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(&uStack_1f8,*(long *)(param_1 + 0x18),*(undefined4 *)(lVar12 + 0x24),
                        uRam0000000003d2e030);
        uStack_98 = uStack_190;
        uStack_a0 = uStack_198;
        uStack_88 = uStack_180;
        uStack_90 = uStack_188;
        uStack_80 = CONCAT44(uStack_174,iStack_178);
        uStack_d8 = uStack_1d0;
        uStack_e0 = uStack_1d8;
        uStack_c8 = uStack_1c0;
        uStack_d0 = uStack_1c8;
        uStack_b8 = uStack_1b0;
        uStack_c0 = uStack_1b8;
        uStack_a8 = uStack_1a0;
        uStack_b0 = uStack_1a8;
        uStack_f8 = uStack_1f0;
        uStack_100 = uStack_1f8;
        uStack_e8 = uStack_1e0;
        uStack_f0 = uStack_1e8;
        uVar8 = /*Core.Assets.AssetManager.Asset$$IsAddressableDone*/ func_0x01634a2c(&uStack_100);
        if ((uVar8 & 1) != 0) {
          if ((uVar13 & 0xff) == 0) {
            auVar14 = /*Core.Assets.AssetManager.Asset$$IsAddressableStatusSuceeded*/ func_0x01634ac0(&uStack_100);
            uVar9 = auVar14._8_8_;
            if ((auVar14._0_8_ & 1) == 0) {
              if (lVar3 != 0) {
                uVar9 = /*Core.Assets.AssetManager.Asset$$GetAddressableFailedMessage*/ func_0x01634ef4(&uStack_100);
                if (lVar3 == 0) {
                  func_0x00f78af4(uVar9,uVar9);
                  goto code_r0x01634950;
                }
                /*Core.Assets.AssetManager.AssetLoadFailedHandler$$Invoke*/ func_0x01634f9c(lVar3,uVar9,uStack_f8,uVar1);
                uVar9 = extraout_x1_00;
              }
            }
            else {
              if ((char)uStack_e8 == '\0') {
                if (uStack_e8._1_1_ == '\0') {
                  uVar9 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_e0,uRam0000000003d2bfa0);
                }
                else {
                  uVar9 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_c0,uRam0000000003d2c050);
                }
              }
              else {
                uVar9 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_a0,uRam0000000003d2be18);
              }
              if (lVar2 != 0) {
                if (lVar2 == 0) {
                  func_0x00f78af4(0,uVar9);
                  goto code_r0x01634950;
                }
                /*Core.Assets.AssetManager.AssetLoadSuccessHandler$$Invoke*/ func_0x01634b60(lVar2,uVar9,uStack_f8,uVar1);
                uVar9 = extraout_x1_01;
              }
            }
          }
          else {
            /*Core.Assets.AssetManager$$RemoveReference*/ func_0x01635330(param_1,uVar1);
            uVar9 = extraout_x1;
          }
          if (*(long *)(param_1 + 0x10) == 0) {
            func_0x00f78af4(0,uVar9);
            goto code_r0x01634950;
          }
          /*System.Collections.Generic.List<AssetManager.AssetRequest>$$RemoveAt*/ func_0x024b1784(*(long *)(param_1 + 0x10),uVar11,uRam0000000003d3ccd8);
          iVar10 = iVar10 + -1;
          uVar11 = uVar11 - 1;
        }
        uVar11 = uVar11 + 1;
        if (iVar10 <= (int)uVar11) goto LAB_016345b0;
        lVar12 = *(long *)(param_1 + 0x10);
      } while (lVar12 != 0);
      func_0x00f78af4();
    }
  }
code_r0x01634950:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1634954);
  (*pcVar6)();
}



// ============================================================
// RVA: 0x1635330 | Core.Assets.AssetManager.RemoveReference
// ============================================================

/* WARNING: Possible PIC construction at 0x01635710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01635714) */
/* WARNING: Removing unreachable block (ram,0x01635718) */
/* WARNING: Removing unreachable block (ram,0x0163577c) */
/* WARNING: Removing unreachable block (ram,0x01635750) */
/* WARNING: Removing unreachable block (ram,0x01ed77c0) */
/* WARNING: Removing unreachable block (ram,0x01ed77e8) */
/* WARNING: Removing unreachable block (ram,0x01ed7810) */
/* WARNING: Removing unreachable block (ram,0x01ed7828) */
/* WARNING: Removing unreachable block (ram,0x01ed784c) */
/* WARNING: Removing unreachable block (ram,0x01ed786c) */
/* WARNING: Removing unreachable block (ram,0x01ed7878) */
/* WARNING: Removing unreachable block (ram,0x01ed78b8) */
/* WARNING: Removing unreachable block (ram,0x01ed78bc) */
/* WARNING: Removing unreachable block (ram,0x01ed78e0) */
/* WARNING: Removing unreachable block (ram,0x01ed797c) */
/* WARNING: Removing unreachable block (ram,0x01ed7908) */
/* WARNING: Removing unreachable block (ram,0x01ed7928) */
/* WARNING: Removing unreachable block (ram,0x01ed7934) */
/* WARNING: Removing unreachable block (ram,0x01ed7994) */
/* WARNING: Removing unreachable block (ram,0x01ed7998) */
/* WARNING: Removing unreachable block (ram,0x01ed79bc) */
/* WARNING: Removing unreachable block (ram,0x01ed79c8) */
/* WARNING: Removing unreachable block (ram,0x01ed79d4) */
/* WARNING: Removing unreachable block (ram,0x01ed79e4) */
/* WARNING: Removing unreachable block (ram,0x01ed79ec) */
/* WARNING: Removing unreachable block (ram,0x01ed7a34) */
/* WARNING: Removing unreachable block (ram,0x01ed7a40) */
/* WARNING: Removing unreachable block (ram,0x01ed7a74) */
/* WARNING: Removing unreachable block (ram,0x01ed7b20) */
/* WARNING: Removing unreachable block (ram,0x01ed7b2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b34) */
/* WARNING: Removing unreachable block (ram,0x01ed7b3c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b40) */
/* WARNING: Removing unreachable block (ram,0x01ed7b48) */
/* WARNING: Removing unreachable block (ram,0x01ed7b50) */
/* WARNING: Removing unreachable block (ram,0x01ed7a94) */
/* WARNING: Removing unreachable block (ram,0x01ed7ab8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ac4) */
/* WARNING: Removing unreachable block (ram,0x01ed7acc) */
/* WARNING: Removing unreachable block (ram,0x01ed7ad8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae4) */
/* WARNING: Removing unreachable block (ram,0x01ed7b80) */
/* WARNING: Removing unreachable block (ram,0x01ed7b84) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb0) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bc8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bd0) */
/* WARNING: Removing unreachable block (ram,0x01ed7d50) */
/* WARNING: Removing unreachable block (ram,0x01ed7bfc) */
/* WARNING: Removing unreachable block (ram,0x01ed7c08) */
/* WARNING: Removing unreachable block (ram,0x01ed7c10) */
/* WARNING: Removing unreachable block (ram,0x01ed7c18) */
/* WARNING: Removing unreachable block (ram,0x01ed7c24) */
/* WARNING: Removing unreachable block (ram,0x01ed7c2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7c90) */
/* WARNING: Removing unreachable block (ram,0x01ed7c9c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d18) */
/* WARNING: Removing unreachable block (ram,0x01ed7d1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d80) */
/* WARNING: Removing unreachable block (ram,0x01ed7c54) */
/* WARNING: Removing unreachable block (ram,0x01ed7c64) */
/* WARNING: Removing unreachable block (ram,0x01ed7c74) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae8) */
/* WARNING: Removing unreachable block (ram,0x01ed7b68) */
/* WARNING: Removing unreachable block (ram,0x01ed7b08) */
/* WARNING: Removing unreachable block (ram,0x01ed7b0c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b60) */
/* WARNING: Removing unreachable block (ram,0x01ed7b6c) */
/* WARNING: Removing unreachable block (ram,0x01ed7a50) */
/* WARNING: Removing unreachable block (ram,0x01ed79f0) */
/* WARNING: Removing unreachable block (ram,0x01ed7a00) */
/* WARNING: Removing unreachable block (ram,0x01ed7a28) */
/* WARNING: Removing unreachable block (ram,0x01ed7938) */
/* WARNING: Removing unreachable block (ram,0x01ed7958) */
/* WARNING: Removing unreachable block (ram,0x01ed7980) */
/* WARNING: Removing unreachable block (ram,0x01ed787c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a4) */
/* WARNING: Removing unreachable block (ram,0x01ed789c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a8) */
/* WARNING: Removing unreachable block (ram,0x01ed77f8) */
/* WARNING: Removing unreachable block (ram,0x01ed77cc) */

void Core_Assets_AssetManager__RemoveReference(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  long lStack_108;
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
  undefined4 auStack_38 [2];
  
  if ((bRam0000000003eb568e & 1) == 0) {
    func_0x00f78a20(0x3d2dfa0);
    func_0x00f78a20(0x3d2dfb8);
    bRam0000000003eb568e = 1;
  }
  auStack_38[0] = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar1 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$TryGetValue*/ func_0x01e2e668(*(long *)(param_1 + 0x28),param_2,auStack_38,uRam0000000003d2dfb8);
    if (iVar1 == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$Remove*/ func_0x01e2e39c(*(long *)(param_1 + 0x28),param_2,uRam0000000003d2dfa0);
      /*Core.Assets.AssetManager$$RemoveAssetReference*/ func_0x016373f0(param_1,auStack_38[0]);
      return;
    }
  }
  auVar6 = func_0x00f78af4();
  lVar2 = auVar6._0_8_;
  if ((bRam0000000003eb5690 & 1) == 0) {
    func_0x00f78a20(0x3d433e8);
    func_0x00f78a20(0x3d43408);
    func_0x00f78a20(0x3d43420);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d2c050);
    func_0x00f78a20(0x3d2be18);
    func_0x00f78a20(0x3d2bfa0);
    func_0x00f78a20(0x3d2fac8);
    func_0x00f78a20(0x3d2e008);
    func_0x00f78a20(0x3d2fec0);
    func_0x00f78a20(0x3d2e020);
    func_0x00f78a20(0x3d35c80);
    bRam0000000003eb5690 = 1;
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
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_108 = 0;
  if (*(long *)(lVar2 + 0x18) == 0) goto code_r0x01635688;
  uVar4 = auVar6._8_8_ & 0xffffffff;
  iVar1 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(*(long *)(lVar2 + 0x18),uVar4,&uStack_100,uRam0000000003d2e020);
  if (iVar1 == 0) {
    return;
  }
  if (*(long *)(lVar2 + 0x30) == 0) goto code_r0x01635688;
  iVar1 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar2 + 0x30),uStack_f0,&lStack_108,uRam0000000003d2fec0);
  if (iVar1 == 0) {
    return;
  }
  if ((char)uStack_e8 == '\0') {
    if (uStack_e8._1_1_ == '\0') {
      uVar3 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_e0,uRam0000000003d2bfa0);
      if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
        iVar1 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
        puVar5 = (undefined8 *)0x3d43408;
        goto joined_r0x01635680;
      }
      puVar5 = (undefined8 *)0x3d43408;
    }
    else {
      uVar3 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_c0,uRam0000000003d2c050);
      if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) == 0) {
        puVar5 = (undefined8 *)0x3d43420;
      }
      else {
        iVar1 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
        puVar5 = (undefined8 *)0x3d43420;
joined_r0x01635680:
        if (iVar1 == 0) {
          func_0x00f78ad0();
        }
      }
    }
  }
  else {
    uVar3 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_a0,uRam0000000003d2be18);
    if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
      iVar1 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
      puVar5 = (undefined8 *)0x3d433e8;
      goto joined_r0x01635680;
    }
    puVar5 = (undefined8 *)0x3d433e8;
  }
  /*UnityEngine.AddressableAssets.Addressables$$Release<Sprite>*/ func_0x0171fc38(uVar3,*puVar5);
  if (*(long *)(lVar2 + 0x18) != 0) {
    /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$Remove*/ func_0x01e3174c(*(long *)(lVar2 + 0x18),uVar4,uRam0000000003d2e008);
    if (((*(long *)(lVar2 + 0x20) != 0) &&
        (/*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$Remove*/ func_0x01ec0ba4(*(long *)(lVar2 + 0x20),uStack_f8,uRam0000000003d2fac8), lStack_108 != 0))
       && (*(long *)(lStack_108 + 0x20) != 0)) {
      /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Remove*/ func_0x021cefec(*(long *)(lStack_108 + 0x20),uVar4,uRam0000000003d35c80);
      return;
    }
  }
code_r0x01635688:
  func_0x00f78af4();
  if ((bRam0000000003eb567a & 1) == 0) {
    func_0x00f78a20(0x3d26978);
    func_0x00f78a20(0x3d2feb0);
    func_0x00f78a20(0x3d35c68);
    func_0x00f78a20(0x3d1cdf8);
    bRam0000000003eb567a = 1;
  }
  func_0x00f78aec(/*Core.Assets.AssetManager.BucketInstance_TypeInfo*/ uRam0000000003d26978);
  return;
}



// ============================================================
// RVA: 0x16353e4 | Core.Assets.AssetManager.ReleaseAsset
// ============================================================

/* WARNING: Possible PIC construction at 0x01635710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01635714) */
/* WARNING: Removing unreachable block (ram,0x01635718) */
/* WARNING: Removing unreachable block (ram,0x0163577c) */
/* WARNING: Removing unreachable block (ram,0x01635750) */
/* WARNING: Removing unreachable block (ram,0x01ed77c0) */
/* WARNING: Removing unreachable block (ram,0x01ed77e8) */
/* WARNING: Removing unreachable block (ram,0x01ed7810) */
/* WARNING: Removing unreachable block (ram,0x01ed7828) */
/* WARNING: Removing unreachable block (ram,0x01ed784c) */
/* WARNING: Removing unreachable block (ram,0x01ed786c) */
/* WARNING: Removing unreachable block (ram,0x01ed7878) */
/* WARNING: Removing unreachable block (ram,0x01ed78b8) */
/* WARNING: Removing unreachable block (ram,0x01ed78bc) */
/* WARNING: Removing unreachable block (ram,0x01ed78e0) */
/* WARNING: Removing unreachable block (ram,0x01ed797c) */
/* WARNING: Removing unreachable block (ram,0x01ed7908) */
/* WARNING: Removing unreachable block (ram,0x01ed7928) */
/* WARNING: Removing unreachable block (ram,0x01ed7934) */
/* WARNING: Removing unreachable block (ram,0x01ed7994) */
/* WARNING: Removing unreachable block (ram,0x01ed7998) */
/* WARNING: Removing unreachable block (ram,0x01ed79bc) */
/* WARNING: Removing unreachable block (ram,0x01ed79c8) */
/* WARNING: Removing unreachable block (ram,0x01ed79d4) */
/* WARNING: Removing unreachable block (ram,0x01ed79e4) */
/* WARNING: Removing unreachable block (ram,0x01ed79ec) */
/* WARNING: Removing unreachable block (ram,0x01ed7a34) */
/* WARNING: Removing unreachable block (ram,0x01ed7a40) */
/* WARNING: Removing unreachable block (ram,0x01ed7a74) */
/* WARNING: Removing unreachable block (ram,0x01ed7b20) */
/* WARNING: Removing unreachable block (ram,0x01ed7b2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b34) */
/* WARNING: Removing unreachable block (ram,0x01ed7b3c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b40) */
/* WARNING: Removing unreachable block (ram,0x01ed7b48) */
/* WARNING: Removing unreachable block (ram,0x01ed7b50) */
/* WARNING: Removing unreachable block (ram,0x01ed7a94) */
/* WARNING: Removing unreachable block (ram,0x01ed7ab8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ac4) */
/* WARNING: Removing unreachable block (ram,0x01ed7acc) */
/* WARNING: Removing unreachable block (ram,0x01ed7ad8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae4) */
/* WARNING: Removing unreachable block (ram,0x01ed7b80) */
/* WARNING: Removing unreachable block (ram,0x01ed7b84) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb0) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bc8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bd0) */
/* WARNING: Removing unreachable block (ram,0x01ed7d50) */
/* WARNING: Removing unreachable block (ram,0x01ed7bfc) */
/* WARNING: Removing unreachable block (ram,0x01ed7c08) */
/* WARNING: Removing unreachable block (ram,0x01ed7c10) */
/* WARNING: Removing unreachable block (ram,0x01ed7c18) */
/* WARNING: Removing unreachable block (ram,0x01ed7c24) */
/* WARNING: Removing unreachable block (ram,0x01ed7c2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7c90) */
/* WARNING: Removing unreachable block (ram,0x01ed7c9c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d18) */
/* WARNING: Removing unreachable block (ram,0x01ed7d1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d80) */
/* WARNING: Removing unreachable block (ram,0x01ed7c54) */
/* WARNING: Removing unreachable block (ram,0x01ed7c64) */
/* WARNING: Removing unreachable block (ram,0x01ed7c74) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae8) */
/* WARNING: Removing unreachable block (ram,0x01ed7b68) */
/* WARNING: Removing unreachable block (ram,0x01ed7b08) */
/* WARNING: Removing unreachable block (ram,0x01ed7b0c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b60) */
/* WARNING: Removing unreachable block (ram,0x01ed7b6c) */
/* WARNING: Removing unreachable block (ram,0x01ed7a50) */
/* WARNING: Removing unreachable block (ram,0x01ed79f0) */
/* WARNING: Removing unreachable block (ram,0x01ed7a00) */
/* WARNING: Removing unreachable block (ram,0x01ed7a28) */
/* WARNING: Removing unreachable block (ram,0x01ed7938) */
/* WARNING: Removing unreachable block (ram,0x01ed7958) */
/* WARNING: Removing unreachable block (ram,0x01ed7980) */
/* WARNING: Removing unreachable block (ram,0x01ed787c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a4) */
/* WARNING: Removing unreachable block (ram,0x01ed789c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a8) */
/* WARNING: Removing unreachable block (ram,0x01ed77f8) */
/* WARNING: Removing unreachable block (ram,0x01ed77cc) */

void Core_Assets_AssetManager__ReleaseAsset(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lStack_c8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003eb5690 & 1) == 0) {
    func_0x00f78a20(0x3d433e8);
    func_0x00f78a20(0x3d43408);
    func_0x00f78a20(0x3d43420);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d2c050);
    func_0x00f78a20(0x3d2be18);
    func_0x00f78a20(0x3d2bfa0);
    func_0x00f78a20(0x3d2fac8);
    func_0x00f78a20(0x3d2e008);
    func_0x00f78a20(0x3d2fec0);
    func_0x00f78a20(0x3d2e020);
    func_0x00f78a20(0x3d35c80);
    bRam0000000003eb5690 = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lStack_c8 = 0;
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_01635688;
  iVar1 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(*(long *)(param_1 + 0x18),param_2,&uStack_c0,uRam0000000003d2e020);
  if (iVar1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_01635688;
  iVar1 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(param_1 + 0x30),uStack_b0,&lStack_c8,uRam0000000003d2fec0);
  if (iVar1 == 0) {
    return;
  }
  if ((char)uStack_a8 == '\0') {
    if (uStack_a8._1_1_ == '\0') {
      uVar2 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_a0,uRam0000000003d2bfa0);
      if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
        iVar1 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
        puVar3 = (undefined8 *)0x3d43408;
        goto joined_r0x01635680;
      }
      puVar3 = (undefined8 *)0x3d43408;
    }
    else {
      uVar2 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_80,uRam0000000003d2c050);
      if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) == 0) {
        puVar3 = (undefined8 *)0x3d43420;
      }
      else {
        iVar1 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
        puVar3 = (undefined8 *)0x3d43420;
joined_r0x01635680:
        if (iVar1 == 0) {
          func_0x00f78ad0();
        }
      }
    }
  }
  else {
    uVar2 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_60,uRam0000000003d2be18);
    if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
      iVar1 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
      puVar3 = (undefined8 *)0x3d433e8;
      goto joined_r0x01635680;
    }
    puVar3 = (undefined8 *)0x3d433e8;
  }
  /*UnityEngine.AddressableAssets.Addressables$$Release<Sprite>*/ func_0x0171fc38(uVar2,*puVar3);
  if (*(long *)(param_1 + 0x18) != 0) {
    /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$Remove*/ func_0x01e3174c(*(long *)(param_1 + 0x18),param_2,uRam0000000003d2e008);
    if (((*(long *)(param_1 + 0x20) != 0) &&
        (/*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$Remove*/ func_0x01ec0ba4(*(long *)(param_1 + 0x20),uStack_b8,uRam0000000003d2fac8), lStack_c8 != 0))
       && (*(long *)(lStack_c8 + 0x20) != 0)) {
      /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Remove*/ func_0x021cefec(*(long *)(lStack_c8 + 0x20),param_2,uRam0000000003d35c80);
      return;
    }
  }
LAB_01635688:
  func_0x00f78af4();
  if ((bRam0000000003eb567a & 1) == 0) {
    func_0x00f78a20(0x3d26978);
    func_0x00f78a20(0x3d2feb0);
    func_0x00f78a20(0x3d35c68);
    func_0x00f78a20(0x3d1cdf8);
    bRam0000000003eb567a = 1;
  }
  func_0x00f78aec(/*Core.Assets.AssetManager.BucketInstance_TypeInfo*/ uRam0000000003d26978);
  return;
}



// ============================================================
// RVA: 0x163568c | Core.Assets.AssetManager.AddAssetBucket
// ============================================================

/* WARNING: Possible PIC construction at 0x01635710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01635714) */
/* WARNING: Removing unreachable block (ram,0x01635718) */
/* WARNING: Removing unreachable block (ram,0x0163577c) */
/* WARNING: Removing unreachable block (ram,0x01635750) */
/* WARNING: Removing unreachable block (ram,0x01ed77c0) */
/* WARNING: Removing unreachable block (ram,0x01ed77e8) */
/* WARNING: Removing unreachable block (ram,0x01ed7810) */
/* WARNING: Removing unreachable block (ram,0x01ed7828) */
/* WARNING: Removing unreachable block (ram,0x01ed784c) */
/* WARNING: Removing unreachable block (ram,0x01ed786c) */
/* WARNING: Removing unreachable block (ram,0x01ed7878) */
/* WARNING: Removing unreachable block (ram,0x01ed78b8) */
/* WARNING: Removing unreachable block (ram,0x01ed78bc) */
/* WARNING: Removing unreachable block (ram,0x01ed78e0) */
/* WARNING: Removing unreachable block (ram,0x01ed797c) */
/* WARNING: Removing unreachable block (ram,0x01ed7908) */
/* WARNING: Removing unreachable block (ram,0x01ed7928) */
/* WARNING: Removing unreachable block (ram,0x01ed7934) */
/* WARNING: Removing unreachable block (ram,0x01ed7994) */
/* WARNING: Removing unreachable block (ram,0x01ed7998) */
/* WARNING: Removing unreachable block (ram,0x01ed79bc) */
/* WARNING: Removing unreachable block (ram,0x01ed79c8) */
/* WARNING: Removing unreachable block (ram,0x01ed79d4) */
/* WARNING: Removing unreachable block (ram,0x01ed79e4) */
/* WARNING: Removing unreachable block (ram,0x01ed79ec) */
/* WARNING: Removing unreachable block (ram,0x01ed7a34) */
/* WARNING: Removing unreachable block (ram,0x01ed7a40) */
/* WARNING: Removing unreachable block (ram,0x01ed7a74) */
/* WARNING: Removing unreachable block (ram,0x01ed7b20) */
/* WARNING: Removing unreachable block (ram,0x01ed7b2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b34) */
/* WARNING: Removing unreachable block (ram,0x01ed7b3c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b40) */
/* WARNING: Removing unreachable block (ram,0x01ed7b48) */
/* WARNING: Removing unreachable block (ram,0x01ed7b50) */
/* WARNING: Removing unreachable block (ram,0x01ed7a94) */
/* WARNING: Removing unreachable block (ram,0x01ed7ab8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ac4) */
/* WARNING: Removing unreachable block (ram,0x01ed7acc) */
/* WARNING: Removing unreachable block (ram,0x01ed7ad8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae4) */
/* WARNING: Removing unreachable block (ram,0x01ed7b80) */
/* WARNING: Removing unreachable block (ram,0x01ed7b84) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb0) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bc8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bd0) */
/* WARNING: Removing unreachable block (ram,0x01ed7d50) */
/* WARNING: Removing unreachable block (ram,0x01ed7bfc) */
/* WARNING: Removing unreachable block (ram,0x01ed7c08) */
/* WARNING: Removing unreachable block (ram,0x01ed7c10) */
/* WARNING: Removing unreachable block (ram,0x01ed7c18) */
/* WARNING: Removing unreachable block (ram,0x01ed7c24) */
/* WARNING: Removing unreachable block (ram,0x01ed7c2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7c90) */
/* WARNING: Removing unreachable block (ram,0x01ed7c9c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d18) */
/* WARNING: Removing unreachable block (ram,0x01ed7d1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d80) */
/* WARNING: Removing unreachable block (ram,0x01ed7c54) */
/* WARNING: Removing unreachable block (ram,0x01ed7c64) */
/* WARNING: Removing unreachable block (ram,0x01ed7c74) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae8) */
/* WARNING: Removing unreachable block (ram,0x01ed7b68) */
/* WARNING: Removing unreachable block (ram,0x01ed7b08) */
/* WARNING: Removing unreachable block (ram,0x01ed7b0c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b60) */
/* WARNING: Removing unreachable block (ram,0x01ed7b6c) */
/* WARNING: Removing unreachable block (ram,0x01ed7a50) */
/* WARNING: Removing unreachable block (ram,0x01ed79f0) */
/* WARNING: Removing unreachable block (ram,0x01ed7a00) */
/* WARNING: Removing unreachable block (ram,0x01ed7a28) */
/* WARNING: Removing unreachable block (ram,0x01ed7938) */
/* WARNING: Removing unreachable block (ram,0x01ed7958) */
/* WARNING: Removing unreachable block (ram,0x01ed7980) */
/* WARNING: Removing unreachable block (ram,0x01ed787c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a4) */
/* WARNING: Removing unreachable block (ram,0x01ed789c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a8) */
/* WARNING: Removing unreachable block (ram,0x01ed77f8) */
/* WARNING: Removing unreachable block (ram,0x01ed77cc) */

void Core_Assets_AssetManager__AddAssetBucket(void)

{
  if ((bRam0000000003eb567a & 1) == 0) {
    func_0x00f78a20(0x3d26978);
    func_0x00f78a20(0x3d2feb0);
    func_0x00f78a20(0x3d35c68);
    func_0x00f78a20(0x3d1cdf8);
    bRam0000000003eb567a = 1;
  }
  func_0x00f78aec(/*Core.Assets.AssetManager.BucketInstance_TypeInfo*/ uRam0000000003d26978);
  return;
}



// ============================================================
// RVA: 0x1635788 | Core.Assets.AssetManager.RemoveAssetBucket
// ============================================================

/* WARNING: Possible PIC construction at 0x016357c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01635960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01635d90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01635964) */
/* WARNING: Removing unreachable block (ram,0x01635968) */
/* WARNING: Removing unreachable block (ram,0x01635970) */
/* WARNING: Removing unreachable block (ram,0x01635978) */
/* WARNING: Removing unreachable block (ram,0x016359ac) */
/* WARNING: Removing unreachable block (ram,0x016359b8) */
/* WARNING: Removing unreachable block (ram,0x01635a00) */
/* WARNING: Removing unreachable block (ram,0x01635b24) */
/* WARNING: Removing unreachable block (ram,0x01635a18) */
/* WARNING: Removing unreachable block (ram,0x01635c0c) */
/* WARNING: Removing unreachable block (ram,0x01635a20) */
/* WARNING: Removing unreachable block (ram,0x01635a44) */
/* WARNING: Removing unreachable block (ram,0x01635a94) */
/* WARNING: Removing unreachable block (ram,0x01635c14) */
/* WARNING: Removing unreachable block (ram,0x01635ac8) */
/* WARNING: Removing unreachable block (ram,0x01635ad0) */
/* WARNING: Removing unreachable block (ram,0x01635ae4) */
/* WARNING: Removing unreachable block (ram,0x01635a54) */
/* WARNING: Removing unreachable block (ram,0x01635a64) */
/* WARNING: Removing unreachable block (ram,0x01635a6c) */
/* WARNING: Removing unreachable block (ram,0x01635a70) */
/* WARNING: Removing unreachable block (ram,0x01635a7c) */
/* WARNING: Removing unreachable block (ram,0x01635af4) */
/* WARNING: Removing unreachable block (ram,0x01635c20) */
/* WARNING: Removing unreachable block (ram,0x01635a80) */
/* WARNING: Removing unreachable block (ram,0x016357cc) */
/* WARNING: Removing unreachable block (ram,0x016357f4) */
/* WARNING: Removing unreachable block (ram,0x016357d4) */
/* WARNING: Removing unreachable block (ram,0x01ed90e4) */
/* WARNING: Removing unreachable block (ram,0x01ed910c) */
/* WARNING: Removing unreachable block (ram,0x01ed9118) */
/* WARNING: Removing unreachable block (ram,0x01ed9120) */
/* WARNING: Removing unreachable block (ram,0x01ed913c) */
/* WARNING: Removing unreachable block (ram,0x01ed9144) */
/* WARNING: Removing unreachable block (ram,0x01ed9150) */
/* WARNING: Removing unreachable block (ram,0x01ed9158) */
/* WARNING: Removing unreachable block (ram,0x01ed9184) */
/* WARNING: Removing unreachable block (ram,0x01ed9164) */
/* WARNING: Removing unreachable block (ram,0x01ed9170) */
/* WARNING: Removing unreachable block (ram,0x01ed9194) */
/* WARNING: Removing unreachable block (ram,0x01ed91ac) */
/* WARNING: Removing unreachable block (ram,0x01ed91b4) */
/* WARNING: Removing unreachable block (ram,0x01ed91c4) */
/* WARNING: Removing unreachable block (ram,0x01ed91d0) */
/* WARNING: Removing unreachable block (ram,0x01ed91e0) */
/* WARNING: Removing unreachable block (ram,0x01ed91e4) */
/* WARNING: Removing unreachable block (ram,0x01ed91f4) */
/* WARNING: Removing unreachable block (ram,0x01ed9208) */
/* WARNING: Removing unreachable block (ram,0x01ed9210) */
/* WARNING: Removing unreachable block (ram,0x01ed9230) */
/* WARNING: Removing unreachable block (ram,0x01ed9238) */
/* WARNING: Removing unreachable block (ram,0x01ed9244) */
/* WARNING: Removing unreachable block (ram,0x01ed924c) */
/* WARNING: Removing unreachable block (ram,0x01ed9278) */
/* WARNING: Removing unreachable block (ram,0x01ed9258) */
/* WARNING: Removing unreachable block (ram,0x01ed9264) */
/* WARNING: Removing unreachable block (ram,0x01ed9284) */
/* WARNING: Removing unreachable block (ram,0x01ed92e4) */
/* WARNING: Removing unreachable block (ram,0x01ed9320) */
/* WARNING: Removing unreachable block (ram,0x01ed9328) */
/* WARNING: Removing unreachable block (ram,0x01ed9338) */
/* WARNING: Removing unreachable block (ram,0x01ed9340) */
/* WARNING: Removing unreachable block (ram,0x01ed934c) */
/* WARNING: Removing unreachable block (ram,0x01ed92e8) */
/* WARNING: Removing unreachable block (ram,0x01ed92f0) */
/* WARNING: Removing unreachable block (ram,0x01ed92fc) */
/* WARNING: Removing unreachable block (ram,0x01ed9304) */
/* WARNING: Removing unreachable block (ram,0x01ed9360) */
/* WARNING: Removing unreachable block (ram,0x01ed9368) */
/* WARNING: Removing unreachable block (ram,0x01ed9388) */
/* WARNING: Removing unreachable block (ram,0x01ed9394) */
/* WARNING: Removing unreachable block (ram,0x01ed929c) */
/* WARNING: Removing unreachable block (ram,0x01ed93c0) */
/* WARNING: Removing unreachable block (ram,0x01ed92a4) */
/* WARNING: Removing unreachable block (ram,0x01ed93c4) */
/* WARNING: Removing unreachable block (ram,0x01ed93d0) */
/* WARNING: Removing unreachable block (ram,0x01ed92b0) */
/* WARNING: Removing unreachable block (ram,0x01ed92c0) */
/* WARNING: Removing unreachable block (ram,0x01ed92c4) */
/* WARNING: Removing unreachable block (ram,0x01635d94) */
/* WARNING: Removing unreachable block (ram,0x01635d98) */
/* WARNING: Removing unreachable block (ram,0x01635db0) */
/* WARNING: Removing unreachable block (ram,0x01635db8) */
/* WARNING: Removing unreachable block (ram,0x01635e70) */
/* WARNING: Removing unreachable block (ram,0x01635dd4) */
/* WARNING: Removing unreachable block (ram,0x01635ddc) */
/* WARNING: Removing unreachable block (ram,0x01635e1c) */
/* WARNING: Removing unreachable block (ram,0x01635e94) */
/* WARNING: Removing unreachable block (ram,0x01635ea8) */
/* WARNING: Removing unreachable block (ram,0x01635ed0) */
/* WARNING: Removing unreachable block (ram,0x01635ef0) */
/* WARNING: Removing unreachable block (ram,0x01635ef8) */
/* WARNING: Removing unreachable block (ram,0x01635da8) */
/* WARNING: Removing unreachable block (ram,0x01635f0c) */

ulong Core_Assets_AssetManager__RemoveAssetBucket
                (long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  int extraout_w1;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *extraout_x8;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long unaff_x22;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 **ppuVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  undefined8 auStack_120 [5];
  int aiStack_f8 [4];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb567b & 1) == 0) {
    func_0x00f78a20(0x3d2feb8);
    bRam0000000003eb567b = 1;
  }
  puVar5 = auStack_120;
  uStack_38 = 0x16357cc;
  ppuVar17 = &puStack_40;
  plVar15 = (long *)0x3eb5000;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5682 & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    func_0x00f78a20(0x3d2df80);
    func_0x00f78a20(0x3d2fec0);
    func_0x00f78a20(0x3d32190);
    func_0x00f78a20(0x3d32168);
    func_0x00f78a20(0x3d339f0);
    func_0x00f78a20(0x3d339f8);
    func_0x00f78a20(0x3d32198);
    func_0x00f78a20(0x3d32180);
    func_0x00f78a20(0x3d321a0);
    func_0x00f78a20(0x3d32188);
    func_0x00f78a20(0x3d33a28);
    func_0x00f78a20(0x3d35c78);
    func_0x00f78a20(0x3d35c88);
    func_0x00f78a20(0x3d391b8);
    func_0x00f78a20(0x3d391c0);
    func_0x00f78a20(0x3d39d50);
    func_0x00f78a20(0x3d39d60);
    func_0x00f78a20(0x3d39d48);
    func_0x00f78a20(0x3d1d7d0);
    bRam0000000003eb5682 = 1;
  }
  uStack_98 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  aiStack_f8[3] = 0;
  lVar14 = param_1[6];
  if (lVar14 == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar7 = (long *)___cxa_begin_catch();
      unaff_x22 = *plVar7;
      ___cxa_end_catch();
      /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f636dc(&uStack_b0,uRam0000000003d32168);
      if (unaff_x22 == 0) {
        if ((int)unaff_x24 != 0) {
          uVar6 = (int)unaff_x24 - 1;
          if (aiStack_f8[(int)uVar6] == 0x9f) {
            unaff_x24 = (ulong)uVar6;
            aiStack_f8[3] = uVar6;
          }
        }
        /*System.Collections.Generic.List<AssetManagerHandle>$$GetEnumerator*/ func_0x0237041c(&uStack_e8,0x3eb5000,uRam0000000003d39d60);
        while (uVar9 = /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$MoveNext*/ func_0x01f639a0(&uStack_e8,uRam0000000003d32198), (uVar9 & 1) != 0) {
          Core_Assets_AssetManager__RemoveReference(param_1,uStack_d8 & 0xffffffff);
        }
        aiStack_f8[(int)unaff_x24] = 0xd3;
        aiStack_f8[3] = aiStack_f8[3] + 1;
        /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f6399c(&uStack_e8,uRam0000000003d32190);
        uVar9 = /*Core.Assets.AssetManager$$PurgeUnreferencedAssets*/ func_0x016366f0(param_1,auStack_120[0]);
        return uVar9;
      }
      func_0x00f78ac0(unaff_x22,0);
    }
    puVar18 = &Core_Assets_AssetManager__RequestAsset;
    auVar19 = __Unwind_Resume();
    plVar11 = (long *)0x0;
    puVar4 = auStack_120;
    plVar13 = plVar15;
    plVar16 = (long *)0x3eb5000;
    plVar7 = param_2;
    while( true ) {
      param_2 = param_3;
      uVar8 = auVar19._8_8_;
      plVar15 = auVar19._0_8_;
      plVar10 = (long *)0x0;
      puVar5 = (undefined8 *)((long)puVar4 + -0x180);
      *(undefined8 *)((long)puVar4 + -0x60) = unaff_x28;
      *(undefined8 *)((long)puVar4 + -0x58) = unaff_x27;
      *(undefined8 *)((long)puVar4 + -0x50) = unaff_x26;
      *(undefined8 *)((long)puVar4 + -0x48) = unaff_x25;
      *(ulong *)((long)puVar4 + -0x40) = unaff_x24;
      *(long **)((long)puVar4 + -0x38) = plVar7;
      *(long *)((long)puVar4 + -0x30) = unaff_x22;
      *(long **)((long)puVar4 + -0x28) = plVar16;
      *(long **)((long)puVar4 + -0x20) = param_1;
      *(long **)((long)puVar4 + -0x18) = plVar13;
      *(undefined1 ***)((long)puVar4 + -0x10) = ppuVar17;
      *(undefined **)((long)puVar4 + -8) = puVar18;
      ppuVar17 = (undefined1 **)((long)puVar4 + -0x10);
      unaff_x26 = 0x3eb5000;
      param_1 = plVar11;
      plVar13 = param_2;
      if ((bRam0000000003eb567e & 1) == 0) {
        func_0x00f78a20(0x3d2fec0);
        func_0x00f78a20(0x3d2fad0);
        func_0x00f78a20(0x3d2e030);
        func_0x00f78a20(0x3d2dfd0);
        func_0x00f78a20(0x3d2e038);
        func_0x00f78a20(0x3d35c70);
        func_0x00f78a20(0x3d3ccc0);
        bRam0000000003eb567e = 1;
      }
      *(undefined8 *)((long)puVar4 + -0xf8) = 0;
      *(undefined4 *)((long)puVar4 + -0x100) = 0;
      lVar14 = plVar15[6];
      if (lVar14 != 0) break;
      auVar19 = func_0x00f78af4();
      plVar7 = auVar19._8_8_;
      unaff_x22 = auVar19._0_8_;
      *(undefined8 *)((long)puVar4 + -0x1c0) = 0;
      *(long **)((long)puVar4 + -0x1b8) = param_2;
      *(long **)((long)puVar4 + -0x1b0) = plVar11;
      *(long **)((long)puVar4 + -0x1a8) = param_4;
      *(long **)((long)puVar4 + -0x1a0) = param_5;
      *(long **)((long)puVar4 + -0x198) = plVar15;
      *(undefined1 ***)((long)puVar4 + -400) = ppuVar17;
      *(undefined **)((long)puVar4 + -0x188) = &Core_Assets_AssetManager__RequestAsset;
      ppuVar17 = (undefined1 **)((long)puVar4 + -400);
      unaff_x24 = 0x3eb5000;
      param_3 = plVar10;
      param_4 = param_1;
      param_5 = plVar13;
      if ((bRam0000000003eb567c & 1) == 0) {
        func_0x00f78a20(0x3d24dd0);
        bRam0000000003eb567c = 1;
      }
      unaff_x25 = uVar8;
      if (plVar7 == (long *)0x0) {
        func_0x00f78af4();
        plVar15 = extraout_x8;
code_r0x01635fe4:
        puVar18 = &Core_Assets_AssetManager__RequestSpriteAsset;
        auVar19 = func_0x00f78e5c(plVar15);
        plVar11 = (long *)((long)&MACH_HEADER.magic + 1);
        puVar4 = (undefined8 *)((long)puVar4 + -0x1c0);
        plVar16 = plVar10;
      }
      else {
        plVar15 = (long *)(**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
        auVar19._8_8_ = plVar15;
        auVar19._0_8_ = unaff_x22;
        if ((plVar15 != (long *)0x0) && (*plVar15 != /*string_TypeInfo*/ lRam0000000003d24dd0)) goto code_r0x01635fe4;
        plVar11 = (long *)0x0;
        ppuVar17 = *(undefined1 ***)((long)puVar4 + -400);
        puVar18 = *(undefined **)((long)puVar4 + -0x188);
        puVar1 = (undefined8 *)((long)puVar4 + -0x1a0);
        puVar2 = (undefined8 *)((long)puVar4 + -0x198);
        unaff_x22 = *(long *)((long)puVar4 + -0x1b0);
        puVar3 = (undefined8 *)((long)puVar4 + -0x1a8);
        unaff_x24 = *(ulong *)((long)puVar4 + -0x1c0);
        plVar7 = *(long **)((long)puVar4 + -0x1b8);
        puVar4 = (undefined8 *)((long)puVar4 + -0x180);
        param_3 = plVar10;
        param_4 = param_1;
        param_5 = plVar13;
        plVar13 = (long *)*puVar2;
        param_1 = (long *)*puVar1;
        plVar16 = (long *)*puVar3;
      }
    }
    puVar4 = (undefined8 *)((long)puVar4 + -0xf8);
    puVar18 = &UNK_01635d94;
  }
  else {
    puVar4 = &uStack_98;
    puVar18 = &UNK_01635964;
    param_5 = param_1;
  }
  *(long **)((long)puVar5 + -0x20) = param_5;
  *(long **)((long)puVar5 + -0x18) = plVar15;
  *(undefined1 ***)((long)puVar5 + -0x10) = ppuVar17;
  *(undefined **)((long)puVar5 + -8) = puVar18;
  lVar12 = lRam0000000003d2fec0;
  if (lVar14 != 0) {
    uVar6 = (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(lRam0000000003d2fec0 + 0x18) + 0xc0) + 0x40))
                      (lVar14,param_2);
    if ((int)uVar6 < 0) {
      *puVar4 = 0;
code_r0x01ed9474:
      return (ulong)(~uVar6 >> 0x1f);
    }
    lVar14 = *(long *)(lVar14 + 0x18);
    if (lVar14 != 0) {
      if (uVar6 < *(uint *)(lVar14 + 0x18)) {
        *puVar4 = *(undefined8 *)(lVar14 + (ulong)uVar6 * 0x18 + 0x30);
        goto code_r0x01ed9474;
      }
      goto code_r0x01ed948c;
    }
  }
  func_0x00f78af4();
code_r0x01ed948c:
  uVar8 = func_0x00f78b24();
  lVar14 = func_0x00f78ac0(uVar8,0);
  *(undefined1 **)((long)puVar5 + -0x30) = (undefined1 *)((long)puVar5 + -0x10);
  *(undefined **)((long)puVar5 + -0x28) =
       &System_Collections_Generic_Dictionary_object__object___TryAdd;
  if (lVar14 == 0) {
    func_0x00f78af4();
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x01ed94bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar12 + 0x18) + 0xc0) + 0x48))();
  return uVar9;
}



// ============================================================
// RVA: 0x16357f8 | Core.Assets.AssetManager.PurgeAllAssets
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01635c14) */

long * Core_Assets_AssetManager__PurgeAllAssets
                 (long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  long **pplVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  int extraout_w1;
  long *plVar14;
  long *plVar16;
  long *extraout_x8;
  long *plVar17;
  long *unaff_x21;
  ulong unaff_x22;
  ulong unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar18;
  undefined *puVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  uint uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  long *plVar15;
  
  puVar18 = &stack0xfffffffffffffff0;
  plVar17 = (long *)0x3eb5000;
  if ((bRam0000000003eb5682 & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    func_0x00f78a20(0x3d2df80);
    func_0x00f78a20(0x3d2fec0);
    func_0x00f78a20(0x3d32190);
    func_0x00f78a20(0x3d32168);
    func_0x00f78a20(0x3d339f0);
    func_0x00f78a20(0x3d339f8);
    func_0x00f78a20(0x3d32198);
    func_0x00f78a20(0x3d32180);
    func_0x00f78a20(0x3d321a0);
    func_0x00f78a20(0x3d32188);
    func_0x00f78a20(0x3d33a28);
    func_0x00f78a20(0x3d35c78);
    func_0x00f78a20(0x3d35c88);
    func_0x00f78a20(0x3d391b8);
    func_0x00f78a20(0x3d391c0);
    func_0x00f78a20(0x3d39d50);
    func_0x00f78a20(0x3d39d60);
    func_0x00f78a20(0x3d39d48);
    func_0x00f78a20(0x3d1d7d0);
    bRam0000000003eb5682 = 1;
  }
  lStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_bc = 0;
  if (param_1[6] == 0) goto LAB_01635c24;
  param_3 = &lStack_68;
  param_4 = plRam0000000003d2fec0;
  plVar8 = (long *)/*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(param_1[6],param_2);
  if ((int)plVar8 == 0) {
    return plVar8;
  }
  if (lStack_68 == 0) goto LAB_01635c24;
  if (*(long *)(lStack_68 + 0x20) == 0) goto LAB_01635c24;
  unaff_x22 = (ulong)*(uint *)(*(long *)(lStack_68 + 0x20) + 0x20);
  unaff_x21 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<AssetManagerHandle>_TypeInfo*/ uRam0000000003d1d7d0);
  param_3 = plRam0000000003d39d48;
  /*System.Collections.Generic.List<AssetManagerHandle>$$.ctor*/ func_0x0236ed70(unaff_x21,unaff_x22);
  if (lStack_68 == 0) goto LAB_01635c24;
  plStack_f0 = param_2;
  if (*(long *)(lStack_68 + 0x20) == 0) goto LAB_01635c24;
  /*System.Collections.Generic.HashSet<AssetManagerHandle>$$GetEnumerator*/ func_0x021cf268(&uStack_e8,*(long *)(lStack_68 + 0x20),uRam0000000003d35c78);
  uStack_78 = uStack_e0;
  uStack_80 = uStack_e8;
  uStack_70 = uStack_d8;
  unaff_x26 = 0x3d339f8;
  unaff_x27 = 0x3d1fdb0;
  unaff_x28 = 0x3d39d50;
  plVar17 = &lStack_c8;
  unaff_x25 = (long *)0x0;
  while( true ) {
    uVar9 = /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$MoveNext*/ func_0x01f636e0(&uStack_80,uRam0000000003d32180);
    if ((uVar9 & 1) == 0) break;
    if (param_1[5] == 0) {
      func_0x00f78af4();
code_r0x01635c20:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1635c24);
      (*pcVar5)();
    }
    iVar7 = (int)uStack_70;
    /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$GetEnumerator*/ func_0x01e2d0f8(&uStack_e8,param_1[5],uRam0000000003d2df80);
    uStack_98 = uStack_e0;
    uStack_a0 = uStack_e8;
    uStack_88 = uStack_d0;
    uStack_90 = uStack_d8;
    while (uVar10 = /*System.Collections.Generic.Dictionary.Enumerator<AssetManagerHandle, AssetManagerHandle>$$MoveNext*/ func_0x01fb7ce0(&uStack_a0,uRam0000000003d339f8), uVar9 = uStack_90,
          (uVar10 & 1) != 0) {
      if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (iVar7 == (int)(uVar9 >> 0x20)) {
        if (unaff_x21 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01635c20;
        }
        param_3 = plRam0000000003d39d50;
        /*System.Collections.Generic.List<AssetManagerHandle>$$Add*/ func_0x0236f95c(unaff_x21,uVar9 & 0xffffffff);
      }
    }
    unaff_x22 = 0;
    *(undefined4 *)((long)plVar17 + (long)(int)unaff_x25 * 4) = 0x86;
    uVar4 = uStack_bc;
    uVar1 = uStack_bc + 1;
    param_2 = (long *)(ulong)uVar1;
    uStack_bc = uVar1;
    /*System.Collections.Generic.Dictionary.Enumerator<AssetManagerHandle, AssetManagerHandle>$$Dispose*/ func_0x01fb7e4c(&uStack_a0,uRam0000000003d339f0);
    unaff_x25 = (long *)0x0;
    if ((uVar1 != 0) &&
       (unaff_x25 = param_2, *(int *)((long)plVar17 + (long)(int)uVar4 * 4) == 0x86)) {
      unaff_x25 = (long *)(ulong)uVar4;
      uStack_bc = uVar4;
    }
  }
  *(undefined4 *)((long)&lStack_c8 + (long)(int)unaff_x25 * 4) = 0x9f;
  uStack_bc = uStack_bc + 1;
  unaff_x24 = (ulong)uStack_bc;
  /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f636dc(&uStack_80,uRam0000000003d32168);
  do {
    if ((int)unaff_x24 != 0) {
      uVar1 = (int)unaff_x24 - 1;
      if (*(int *)((long)&lStack_c8 + (long)(int)uVar1 * 4) == 0x9f) {
        unaff_x24 = (ulong)uVar1;
        uStack_bc = uVar1;
      }
    }
    if (unaff_x21 != (long *)0x0) {
      /*System.Collections.Generic.List<AssetManagerHandle>$$GetEnumerator*/ func_0x0237041c(&uStack_b8,unaff_x21,uRam0000000003d39d60);
      while (uVar9 = /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$MoveNext*/ func_0x01f639a0(&uStack_b8,uRam0000000003d32198), (uVar9 & 1) != 0) {
        Core_Assets_AssetManager__RemoveReference(param_1,uStack_a8 & 0xffffffff);
      }
      *(undefined4 *)((long)&lStack_c8 + (long)(int)unaff_x24 * 4) = 0xd3;
      uStack_bc = uStack_bc + 1;
      /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f6399c(&uStack_b8,uRam0000000003d32190);
      plVar17 = (long *)/*Core.Assets.AssetManager$$PurgeUnreferencedAssets*/ func_0x016366f0(param_1,plStack_f0);
      return plVar17;
    }
LAB_01635c24:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01635cac;
    puVar11 = (ulong *)___cxa_begin_catch();
    unaff_x22 = *puVar11;
    ___cxa_end_catch();
    /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f636dc(&uStack_80,uRam0000000003d32168);
  } while (unaff_x22 == 0);
  func_0x00f78ac0(unaff_x22,0);
code_r0x01635cac:
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = unaff_x22;
  puVar19 = &Core_Assets_AssetManager__RequestAsset;
  auVar20 = __Unwind_Resume();
  plVar8 = (long *)0x0;
  pplVar6 = &plStack_f0;
Core_Assets_AssetManager__RequestAsset:
  do {
    plVar14 = auVar20._8_8_;
    lVar12 = auVar20._0_8_;
    plVar16 = (long *)0x0;
    *(undefined8 *)((long)pplVar6 + -0x60) = unaff_x28;
    *(undefined8 *)((long)pplVar6 + -0x58) = unaff_x27;
    *(undefined8 *)((long)pplVar6 + -0x50) = unaff_x26;
    *(long **)((long)pplVar6 + -0x48) = unaff_x25;
    *(ulong *)((long)pplVar6 + -0x40) = unaff_x24;
    *(long *)((long)pplVar6 + -0x38) = auVar21._8_8_;
    *(long *)((long)pplVar6 + -0x30) = auVar21._0_8_;
    *(long **)((long)pplVar6 + -0x28) = unaff_x21;
    *(long **)((long)pplVar6 + -0x20) = param_1;
    *(long **)((long)pplVar6 + -0x18) = plVar17;
    *(undefined1 **)((long)pplVar6 + -0x10) = puVar18;
    *(undefined **)((long)pplVar6 + -8) = puVar19;
    unaff_x26 = 0x3eb5000;
    param_1 = plVar8;
    plVar17 = param_3;
    if ((bRam0000000003eb567e & 1) == 0) {
      func_0x00f78a20(0x3d2fec0);
      func_0x00f78a20(0x3d2fad0);
      func_0x00f78a20(0x3d2e030);
      func_0x00f78a20(0x3d2dfd0);
      func_0x00f78a20(0x3d2e038);
      func_0x00f78a20(0x3d35c70);
      func_0x00f78a20(0x3d3ccc0);
      bRam0000000003eb567e = 1;
    }
    *(undefined8 *)((long)pplVar6 + -0xf8) = 0;
    *(undefined4 *)((long)pplVar6 + -0x100) = 0;
    if (*(long *)(lVar12 + 0x30) != 0) {
      plVar16 = (long *)((long)pplVar6 + -0xf8);
      param_1 = plRam0000000003d2fec0;
      iVar7 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar12 + 0x30),param_3);
      if ((iVar7 == 0) || (uVar9 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(plVar14,0), (uVar9 & 1) != 0)) {
        return (long *)0x0;
      }
      if (*(long *)(lVar12 + 0x20) != 0) {
        plVar16 = (long *)((long)pplVar6 + -0x100);
        param_1 = plRam0000000003d2fad0;
        uVar9 = /*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$TryGetValue*/ func_0x01ec0ed8(*(long *)(lVar12 + 0x20),plVar14);
        if ((uVar9 & 1) == 0) {
          param_1 = (long *)0x0;
          plVar16 = param_3;
          /*Core.Assets.AssetManager$$AddAsset*/ func_0x016360d4((undefined1 *)((long)pplVar6 + -0xf0),lVar12,plVar14);
          uVar3 = *(undefined4 *)((long)pplVar6 + -0xf0);
          *(undefined4 *)((long)pplVar6 + -0x100) = uVar3;
          plVar17 = plVar8;
code_r0x01635e94:
          uVar1 = *(uint *)(lVar12 + 0x38);
          plVar8 = (long *)(ulong)uVar1;
          *(uint *)(lVar12 + 0x38) = uVar1 + 1;
          lVar13 = *(long *)(lVar12 + 0x10);
          if (lVar13 != 0) {
            *(uint *)((long)pplVar6 + -0xf0) = uVar1;
            *(undefined4 *)((long)pplVar6 + -0xec) = uVar3;
            *(long **)((long)pplVar6 + -0xe8) = param_4;
            *(long **)((long)pplVar6 + -0xe0) = param_5;
            *(undefined8 *)((long)pplVar6 + -0xd8) = 0;
            plVar16 = plRam0000000003d3ccc0;
            /*System.Collections.Generic.List<AssetManager.AssetRequest>$$Add*/ func_0x024afe2c(lVar13,(undefined1 *)((long)pplVar6 + -0xf0));
            if (*(long *)(lVar12 + 0x28) != 0) {
              plVar16 = (long *)(ulong)*(uint *)((long)pplVar6 + -0x100);
              param_1 = plRam0000000003d2dfd0;
              /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$set_Item*/ func_0x01e2cb1c(*(long *)(lVar12 + 0x28),plVar8);
              if ((*(long *)((long)pplVar6 + -0xf8) != 0) &&
                 (lVar13 = *(long *)(*(long *)((long)pplVar6 + -0xf8) + 0x20), lVar13 != 0)) {
                /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Add*/ func_0x021cf8ec(lVar13,*(undefined4 *)((long)pplVar6 + -0x100),uRam0000000003d35c70)
                ;
                return plVar8;
              }
            }
          }
        }
        else if (*(long *)(lVar12 + 0x18) != 0) {
          plVar16 = plRam0000000003d2e030;
          /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c((undefined1 *)((long)pplVar6 + -0xf0),*(long *)(lVar12 + 0x18),
                          *(undefined4 *)((long)pplVar6 + -0x100));
          *(undefined8 *)((long)pplVar6 + -0x138) = *(undefined8 *)((long)pplVar6 + -0xa8);
          *(undefined8 *)((long)pplVar6 + -0x140) = *(undefined8 *)((long)pplVar6 + -0xb0);
          *(undefined8 *)((long)pplVar6 + -0x128) = *(undefined8 *)((long)pplVar6 + -0x98);
          *(undefined8 *)((long)pplVar6 + -0x130) = *(undefined8 *)((long)pplVar6 + -0xa0);
          *(undefined8 *)((long)pplVar6 + -0x118) = *(undefined8 *)((long)pplVar6 + -0x88);
          *(undefined8 *)((long)pplVar6 + -0x120) = *(undefined8 *)((long)pplVar6 + -0x90);
          *(undefined8 *)((long)pplVar6 + -0x108) = *(undefined8 *)((long)pplVar6 + -0x78);
          *(undefined8 *)((long)pplVar6 + -0x110) = *(undefined8 *)((long)pplVar6 + -0x80);
          *(undefined8 *)((long)pplVar6 + -0x178) = *(undefined8 *)((long)pplVar6 + -0xe8);
          *(undefined8 *)((long)pplVar6 + -0x180) = *(undefined8 *)((long)pplVar6 + -0xf0);
          *(undefined8 *)((long)pplVar6 + -0x168) = *(undefined8 *)((long)pplVar6 + -0xd8);
          *(undefined8 *)((long)pplVar6 + -0x170) = *(undefined8 *)((long)pplVar6 + -0xe0);
          *(undefined8 *)((long)pplVar6 + -0x158) = *(undefined8 *)((long)pplVar6 + -200);
          *(undefined8 *)((long)pplVar6 + -0x160) = *(undefined8 *)((long)pplVar6 + -0xd0);
          *(undefined8 *)((long)pplVar6 + -0x148) = *(undefined8 *)((long)pplVar6 + -0xb8);
          *(undefined8 *)((long)pplVar6 + -0x150) = *(undefined8 *)((long)pplVar6 + -0xc0);
          lVar13 = *(long *)(lVar12 + 0x18);
          if (lVar13 != 0) {
            *(undefined8 *)((long)pplVar6 + -0xa8) = *(undefined8 *)((long)pplVar6 + -0x138);
            *(undefined8 *)((long)pplVar6 + -0xb0) = *(undefined8 *)((long)pplVar6 + -0x140);
            *(undefined8 *)((long)pplVar6 + -0x98) = *(undefined8 *)((long)pplVar6 + -0x128);
            *(undefined8 *)((long)pplVar6 + -0xa0) = *(undefined8 *)((long)pplVar6 + -0x130);
            *(undefined8 *)((long)pplVar6 + -0x88) = *(undefined8 *)((long)pplVar6 + -0x118);
            *(undefined8 *)((long)pplVar6 + -0x90) = *(undefined8 *)((long)pplVar6 + -0x120);
            *(undefined8 *)((long)pplVar6 + -0x78) = *(undefined8 *)((long)pplVar6 + -0x108);
            *(undefined8 *)((long)pplVar6 + -0x80) = *(undefined8 *)((long)pplVar6 + -0x110);
            *(undefined8 *)((long)pplVar6 + -0xe8) = *(undefined8 *)((long)pplVar6 + -0x178);
            *(undefined8 *)((long)pplVar6 + -0xf0) = *(undefined8 *)((long)pplVar6 + -0x180);
            *(undefined8 *)((long)pplVar6 + -0xd8) = *(undefined8 *)((long)pplVar6 + -0x168);
            *(undefined8 *)((long)pplVar6 + -0xe0) = *(undefined8 *)((long)pplVar6 + -0x170);
            *(undefined8 *)((long)pplVar6 + -200) = *(undefined8 *)((long)pplVar6 + -0x158);
            *(undefined8 *)((long)pplVar6 + -0xd0) = *(undefined8 *)((long)pplVar6 + -0x160);
            *(undefined8 *)((long)pplVar6 + -0xb8) = *(undefined8 *)((long)pplVar6 + -0x148);
            *(undefined8 *)((long)pplVar6 + -0xc0) = *(undefined8 *)((long)pplVar6 + -0x150);
            *(int *)((long)pplVar6 + -0x70) = *(int *)((long)pplVar6 + -0x70) + 1;
            *(undefined4 *)((long)pplVar6 + -0x6c) = *(undefined4 *)((long)pplVar6 + -0x6c);
            plVar16 = (long *)((long)pplVar6 + -0xf0);
            param_1 = plRam0000000003d2e038;
            /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$set_Item*/ func_0x01e2fae4(lVar13,*(undefined4 *)((long)pplVar6 + -0x100));
            uVar3 = *(undefined4 *)((long)pplVar6 + -0x100);
            goto code_r0x01635e94;
          }
        }
      }
    }
    auVar21 = func_0x00f78af4();
    plVar15 = auVar21._8_8_;
    *(undefined8 *)((long)pplVar6 + -0x1c0) = 0;
    *(long **)((long)pplVar6 + -0x1b8) = param_3;
    *(long **)((long)pplVar6 + -0x1b0) = plVar8;
    *(long **)((long)pplVar6 + -0x1a8) = param_4;
    *(long **)((long)pplVar6 + -0x1a0) = param_5;
    *(long *)((long)pplVar6 + -0x198) = lVar12;
    *(undefined1 **)((long)pplVar6 + -400) = (undefined1 *)((long)pplVar6 + -0x10);
    *(undefined **)((long)pplVar6 + -0x188) = &Core_Assets_AssetManager__RequestAsset;
    puVar18 = (undefined1 *)((long)pplVar6 + -400);
    unaff_x24 = 0x3eb5000;
    param_3 = plVar16;
    param_4 = param_1;
    param_5 = plVar17;
    if ((bRam0000000003eb567c & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb567c = 1;
    }
    unaff_x25 = plVar14;
    if (plVar15 == (long *)0x0) {
      func_0x00f78af4();
      plVar8 = extraout_x8;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar15 + 0x198))(plVar15,*(undefined8 *)(*plVar15 + 0x1a0));
      auVar20._8_8_ = plVar8;
      auVar20._0_8_ = auVar21._0_8_;
      if ((plVar8 == (long *)0x0) || (*plVar8 == /*string_TypeInfo*/ lRam0000000003d24dd0)) {
        plVar8 = (long *)0x0;
        puVar18 = *(undefined1 **)((long)pplVar6 + -400);
        puVar19 = *(undefined **)((long)pplVar6 + -0x188);
        plVar14 = (long *)((long)pplVar6 + -0x1a0);
        plVar15 = (long *)((long)pplVar6 + -0x198);
        plVar2 = (long *)((long)pplVar6 + -0x1a8);
        unaff_x24 = *(ulong *)((long)pplVar6 + -0x1c0);
        auVar21._8_8_ = *(undefined8 *)((long)pplVar6 + -0x1b8);
        auVar21._0_8_ = *(undefined8 *)((long)pplVar6 + -0x1b0);
        pplVar6 = (long **)((long)pplVar6 + -0x180);
        param_3 = plVar16;
        param_4 = param_1;
        param_5 = plVar17;
        plVar17 = (long *)*plVar15;
        param_1 = (long *)*plVar14;
        unaff_x21 = (long *)*plVar2;
        goto Core_Assets_AssetManager__RequestAsset;
      }
    }
    puVar19 = &Core_Assets_AssetManager__RequestSpriteAsset;
    auVar20 = func_0x00f78e5c(plVar8);
    plVar8 = (long *)((long)&MACH_HEADER.magic + 1);
    pplVar6 = (long **)((long)pplVar6 + -0x1c0);
    unaff_x21 = plVar16;
  } while( true );
}



// ============================================================
// RVA: 0x1635cb0 | Core.Assets.AssetManager.RequestAsset
// ============================================================

undefined1 *
Core_Assets_AssetManager__RequestAsset
          (undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
          undefined1 *param_5)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long *extraout_x8;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = param_1;
  auVar14._8_8_ = unaff_x23;
  auVar14._0_8_ = unaff_x22;
  puVar13 = (undefined1 *)0x0;
  puVar5 = (undefined1 *)register0x00000008;
Core_Assets_AssetManager__RequestAsset:
  do {
    uVar11 = auVar15._8_8_;
    lVar7 = auVar15._0_8_;
    puVar12 = (undefined1 *)0x0;
    *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
    *(long *)(puVar5 + -0x38) = auVar14._8_8_;
    *(long *)(puVar5 + -0x30) = auVar14._0_8_;
    *(undefined1 **)(puVar5 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar5 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
    *(undefined **)(puVar5 + -8) = unaff_x30;
    unaff_x26 = 0x3eb5000;
    unaff_x20 = puVar13;
    unaff_x19 = param_3;
    if ((bRam0000000003eb567e & 1) == 0) {
      func_0x00f78a20(0x3d2fec0);
      func_0x00f78a20(0x3d2fad0);
      func_0x00f78a20(0x3d2e030);
      func_0x00f78a20(0x3d2dfd0);
      func_0x00f78a20(0x3d2e038);
      func_0x00f78a20(0x3d35c70);
      func_0x00f78a20(0x3d3ccc0);
      bRam0000000003eb567e = 1;
    }
    *(undefined8 *)(puVar5 + -0xf8) = 0;
    *(undefined4 *)(puVar5 + -0x100) = 0;
    if (*(long *)(lVar7 + 0x30) != 0) {
      puVar12 = puVar5 + -0xf8;
      unaff_x20 = puRam0000000003d2fec0;
      iVar6 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar7 + 0x30),param_3);
      if ((iVar6 == 0) || (uVar8 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar11,0), (uVar8 & 1) != 0)) {
        return (undefined1 *)0x0;
      }
      if (*(long *)(lVar7 + 0x20) != 0) {
        puVar12 = puVar5 + -0x100;
        unaff_x20 = puRam0000000003d2fad0;
        uVar8 = /*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$TryGetValue*/ func_0x01ec0ed8(*(long *)(lVar7 + 0x20),uVar11);
        if ((uVar8 & 1) == 0) {
          unaff_x20 = (undefined1 *)0x0;
          puVar12 = param_3;
          /*Core.Assets.AssetManager$$AddAsset*/ func_0x016360d4(puVar5 + -0xf0,lVar7,uVar11);
          uVar3 = *(undefined4 *)(puVar5 + -0xf0);
          *(undefined4 *)(puVar5 + -0x100) = uVar3;
          unaff_x19 = puVar13;
code_r0x01635e94:
          uVar4 = *(uint *)(lVar7 + 0x38);
          puVar13 = (undefined1 *)(ulong)uVar4;
          *(uint *)(lVar7 + 0x38) = uVar4 + 1;
          lVar9 = *(long *)(lVar7 + 0x10);
          if (lVar9 != 0) {
            *(uint *)(puVar5 + -0xf0) = uVar4;
            *(undefined4 *)(puVar5 + -0xec) = uVar3;
            *(undefined1 **)(puVar5 + -0xe8) = param_4;
            *(undefined1 **)(puVar5 + -0xe0) = param_5;
            *(undefined8 *)(puVar5 + -0xd8) = 0;
            puVar12 = puRam0000000003d3ccc0;
            /*System.Collections.Generic.List<AssetManager.AssetRequest>$$Add*/ func_0x024afe2c(lVar9,puVar5 + -0xf0);
            if (*(long *)(lVar7 + 0x28) != 0) {
              puVar12 = (undefined1 *)(ulong)*(uint *)(puVar5 + -0x100);
              unaff_x20 = puRam0000000003d2dfd0;
              /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$set_Item*/ func_0x01e2cb1c(*(long *)(lVar7 + 0x28),puVar13);
              if ((*(long *)(puVar5 + -0xf8) != 0) &&
                 (lVar9 = *(long *)(*(long *)(puVar5 + -0xf8) + 0x20), lVar9 != 0)) {
                /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Add*/ func_0x021cf8ec(lVar9,*(undefined4 *)(puVar5 + -0x100),uRam0000000003d35c70);
                return puVar13;
              }
            }
          }
        }
        else if (*(long *)(lVar7 + 0x18) != 0) {
          puVar12 = puRam0000000003d2e030;
          /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(puVar5 + -0xf0,*(long *)(lVar7 + 0x18),*(undefined4 *)(puVar5 + -0x100));
          *(undefined8 *)(puVar5 + -0x138) = *(undefined8 *)(puVar5 + -0xa8);
          *(undefined8 *)(puVar5 + -0x140) = *(undefined8 *)(puVar5 + -0xb0);
          *(undefined8 *)(puVar5 + -0x128) = *(undefined8 *)(puVar5 + -0x98);
          *(undefined8 *)(puVar5 + -0x130) = *(undefined8 *)(puVar5 + -0xa0);
          *(undefined8 *)(puVar5 + -0x118) = *(undefined8 *)(puVar5 + -0x88);
          *(undefined8 *)(puVar5 + -0x120) = *(undefined8 *)(puVar5 + -0x90);
          *(undefined8 *)(puVar5 + -0x108) = *(undefined8 *)(puVar5 + -0x78);
          *(undefined8 *)(puVar5 + -0x110) = *(undefined8 *)(puVar5 + -0x80);
          *(undefined8 *)(puVar5 + -0x178) = *(undefined8 *)(puVar5 + -0xe8);
          *(undefined8 *)(puVar5 + -0x180) = *(undefined8 *)(puVar5 + -0xf0);
          *(undefined8 *)(puVar5 + -0x168) = *(undefined8 *)(puVar5 + -0xd8);
          *(undefined8 *)(puVar5 + -0x170) = *(undefined8 *)(puVar5 + -0xe0);
          *(undefined8 *)(puVar5 + -0x158) = *(undefined8 *)(puVar5 + -200);
          *(undefined8 *)(puVar5 + -0x160) = *(undefined8 *)(puVar5 + -0xd0);
          *(undefined8 *)(puVar5 + -0x148) = *(undefined8 *)(puVar5 + -0xb8);
          *(undefined8 *)(puVar5 + -0x150) = *(undefined8 *)(puVar5 + -0xc0);
          lVar9 = *(long *)(lVar7 + 0x18);
          if (lVar9 != 0) {
            *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)(puVar5 + -0x138);
            *(undefined8 *)(puVar5 + -0xb0) = *(undefined8 *)(puVar5 + -0x140);
            *(undefined8 *)(puVar5 + -0x98) = *(undefined8 *)(puVar5 + -0x128);
            *(undefined8 *)(puVar5 + -0xa0) = *(undefined8 *)(puVar5 + -0x130);
            *(undefined8 *)(puVar5 + -0x88) = *(undefined8 *)(puVar5 + -0x118);
            *(undefined8 *)(puVar5 + -0x90) = *(undefined8 *)(puVar5 + -0x120);
            *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x108);
            *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x110);
            *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(puVar5 + -0x178);
            *(undefined8 *)(puVar5 + -0xf0) = *(undefined8 *)(puVar5 + -0x180);
            *(undefined8 *)(puVar5 + -0xd8) = *(undefined8 *)(puVar5 + -0x168);
            *(undefined8 *)(puVar5 + -0xe0) = *(undefined8 *)(puVar5 + -0x170);
            *(undefined8 *)(puVar5 + -200) = *(undefined8 *)(puVar5 + -0x158);
            *(undefined8 *)(puVar5 + -0xd0) = *(undefined8 *)(puVar5 + -0x160);
            *(undefined8 *)(puVar5 + -0xb8) = *(undefined8 *)(puVar5 + -0x148);
            *(undefined8 *)(puVar5 + -0xc0) = *(undefined8 *)(puVar5 + -0x150);
            *(int *)(puVar5 + -0x70) = *(int *)(puVar5 + -0x70) + 1;
            *(undefined4 *)(puVar5 + -0x6c) = *(undefined4 *)(puVar5 + -0x6c);
            puVar12 = puVar5 + -0xf0;
            unaff_x20 = puRam0000000003d2e038;
            /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$set_Item*/ func_0x01e2fae4(lVar9,*(undefined4 *)(puVar5 + -0x100));
            uVar3 = *(undefined4 *)(puVar5 + -0x100);
            goto code_r0x01635e94;
          }
        }
      }
    }
    auVar14 = func_0x00f78af4();
    plVar10 = auVar14._8_8_;
    *(undefined8 *)(puVar5 + -0x1c0) = 0;
    *(undefined1 **)(puVar5 + -0x1b8) = param_3;
    *(undefined1 **)(puVar5 + -0x1b0) = puVar13;
    *(undefined1 **)(puVar5 + -0x1a8) = param_4;
    *(undefined1 **)(puVar5 + -0x1a0) = param_5;
    *(long *)(puVar5 + -0x198) = lVar7;
    *(undefined1 **)(puVar5 + -400) = puVar5 + -0x10;
    *(undefined **)(puVar5 + -0x188) = &Core_Assets_AssetManager__RequestAsset;
    unaff_x29 = puVar5 + -400;
    unaff_x24 = 0x3eb5000;
    param_3 = puVar12;
    param_4 = unaff_x20;
    param_5 = unaff_x19;
    if ((bRam0000000003eb567c & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb567c = 1;
    }
    unaff_x25 = uVar11;
    if (plVar10 == (long *)0x0) {
      func_0x00f78af4();
      plVar10 = extraout_x8;
code_r0x01635fe4:
      unaff_x30 = &Core_Assets_AssetManager__RequestSpriteAsset;
      auVar15 = func_0x00f78e5c(plVar10);
      puVar13 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      puVar5 = puVar5 + -0x1c0;
      unaff_x21 = puVar12;
      goto Core_Assets_AssetManager__RequestAsset;
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x198))(plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
    auVar15._8_8_ = plVar10;
    auVar15._0_8_ = auVar14._0_8_;
    if ((plVar10 != (long *)0x0) && (*plVar10 != /*string_TypeInfo*/ lRam0000000003d24dd0)) goto code_r0x01635fe4;
    puVar13 = (undefined1 *)0x0;
    unaff_x29 = *(undefined1 **)(puVar5 + -400);
    unaff_x30 = *(undefined **)(puVar5 + -0x188);
    plVar10 = (long *)(puVar5 + -0x1a0);
    plVar1 = (long *)(puVar5 + -0x198);
    plVar2 = (long *)(puVar5 + -0x1a8);
    unaff_x24 = *(undefined8 *)(puVar5 + -0x1c0);
    auVar14._8_8_ = *(undefined8 *)(puVar5 + -0x1b8);
    auVar14._0_8_ = *(undefined8 *)(puVar5 + -0x1b0);
    puVar5 = puVar5 + -0x180;
    param_3 = puVar12;
    param_4 = unaff_x20;
    param_5 = unaff_x19;
    unaff_x19 = (undefined1 *)*plVar1;
    unaff_x20 = (undefined1 *)*plVar10;
    unaff_x21 = (undefined1 *)*plVar2;
  } while( true );
}



// ============================================================
// RVA: 0x1635cc8 | Core.Assets.AssetManager.RequestAsset
// ============================================================

undefined1 *
Core_Assets_AssetManager__RequestAsset
          (undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
          undefined1 *param_5,undefined1 *param_6,undefined1 *param_7)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *extraout_x8;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = param_1;
  auVar11._8_8_ = unaff_x23;
  auVar11._0_8_ = unaff_x22;
code_r0x01635cc8:
  do {
    uVar10 = auVar12._8_8_;
    lVar6 = auVar12._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = auVar11._8_8_;
    *(long *)((long)register0x00000008 + -0x30) = auVar11._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x26 = 0x3eb5000;
    unaff_x21 = param_3;
    unaff_x20 = param_4;
    unaff_x19 = param_5;
    if ((bRam0000000003eb567e & 1) == 0) {
      func_0x00f78a20(0x3d2fec0);
      func_0x00f78a20(0x3d2fad0);
      func_0x00f78a20(0x3d2e030);
      func_0x00f78a20(0x3d2dfd0);
      func_0x00f78a20(0x3d2e038);
      func_0x00f78a20(0x3d35c70);
      func_0x00f78a20(0x3d3ccc0);
      bRam0000000003eb567e = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x100) = 0;
    if (*(long *)(lVar6 + 0x30) != 0) {
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xf8);
      unaff_x20 = puRam0000000003d2fec0;
      iVar5 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar6 + 0x30),param_5);
      if ((iVar5 == 0) || (uVar7 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar10,0), (uVar7 & 1) != 0)) {
        return (undefined1 *)0x0;
      }
      if (*(long *)(lVar6 + 0x20) != 0) {
        unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x100);
        unaff_x20 = puRam0000000003d2fad0;
        uVar7 = /*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$TryGetValue*/ func_0x01ec0ed8(*(long *)(lVar6 + 0x20),uVar10);
        if ((uVar7 & 1) == 0) {
          unaff_x21 = param_5;
          unaff_x20 = param_3;
          /*Core.Assets.AssetManager$$AddAsset*/ func_0x016360d4((undefined1 *)((long)register0x00000008 + -0xf0),lVar6,uVar10);
          uVar3 = *(undefined4 *)((long)register0x00000008 + -0xf0);
          *(undefined4 *)((long)register0x00000008 + -0x100) = uVar3;
          unaff_x19 = param_4;
code_r0x01635e94:
          uVar4 = *(uint *)(lVar6 + 0x38);
          param_4 = (undefined1 *)(ulong)uVar4;
          *(uint *)(lVar6 + 0x38) = uVar4 + 1;
          lVar8 = *(long *)(lVar6 + 0x10);
          if (lVar8 != 0) {
            *(uint *)((long)register0x00000008 + -0xf0) = uVar4;
            *(undefined4 *)((long)register0x00000008 + -0xec) = uVar3;
            *(undefined1 **)((long)register0x00000008 + -0xe8) = param_6;
            *(undefined1 **)((long)register0x00000008 + -0xe0) = param_7;
            *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
            unaff_x21 = puRam0000000003d3ccc0;
            /*System.Collections.Generic.List<AssetManager.AssetRequest>$$Add*/ func_0x024afe2c(lVar8,(undefined1 *)((long)register0x00000008 + -0xf0));
            if (*(long *)(lVar6 + 0x28) != 0) {
              unaff_x21 = (undefined1 *)(ulong)*(uint *)((long)register0x00000008 + -0x100);
              unaff_x20 = puRam0000000003d2dfd0;
              /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$set_Item*/ func_0x01e2cb1c(*(long *)(lVar6 + 0x28),param_4);
              if ((*(long *)((long)register0x00000008 + -0xf8) != 0) &&
                 (lVar8 = *(long *)(*(long *)((long)register0x00000008 + -0xf8) + 0x20), lVar8 != 0)
                 ) {
                /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Add*/ func_0x021cf8ec(lVar8,*(undefined4 *)((long)register0x00000008 + -0x100),
                                uRam0000000003d35c70);
                return param_4;
              }
            }
          }
        }
        else if (*(long *)(lVar6 + 0x18) != 0) {
          unaff_x21 = puRam0000000003d2e030;
          /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c((undefined1 *)((long)register0x00000008 + -0xf0),*(long *)(lVar6 + 0x18),
                          *(undefined4 *)((long)register0x00000008 + -0x100));
          *(undefined8 *)((long)register0x00000008 + -0x138) =
               *(undefined8 *)((long)register0x00000008 + -0xa8);
          *(undefined8 *)((long)register0x00000008 + -0x140) =
               *(undefined8 *)((long)register0x00000008 + -0xb0);
          *(undefined8 *)((long)register0x00000008 + -0x128) =
               *(undefined8 *)((long)register0x00000008 + -0x98);
          *(undefined8 *)((long)register0x00000008 + -0x130) =
               *(undefined8 *)((long)register0x00000008 + -0xa0);
          *(undefined8 *)((long)register0x00000008 + -0x118) =
               *(undefined8 *)((long)register0x00000008 + -0x88);
          *(undefined8 *)((long)register0x00000008 + -0x120) =
               *(undefined8 *)((long)register0x00000008 + -0x90);
          *(undefined8 *)((long)register0x00000008 + -0x108) =
               *(undefined8 *)((long)register0x00000008 + -0x78);
          *(undefined8 *)((long)register0x00000008 + -0x110) =
               *(undefined8 *)((long)register0x00000008 + -0x80);
          *(undefined8 *)((long)register0x00000008 + -0x178) =
               *(undefined8 *)((long)register0x00000008 + -0xe8);
          *(undefined8 *)((long)register0x00000008 + -0x180) =
               *(undefined8 *)((long)register0x00000008 + -0xf0);
          *(undefined8 *)((long)register0x00000008 + -0x168) =
               *(undefined8 *)((long)register0x00000008 + -0xd8);
          *(undefined8 *)((long)register0x00000008 + -0x170) =
               *(undefined8 *)((long)register0x00000008 + -0xe0);
          *(undefined8 *)((long)register0x00000008 + -0x158) =
               *(undefined8 *)((long)register0x00000008 + -200);
          *(undefined8 *)((long)register0x00000008 + -0x160) =
               *(undefined8 *)((long)register0x00000008 + -0xd0);
          *(undefined8 *)((long)register0x00000008 + -0x148) =
               *(undefined8 *)((long)register0x00000008 + -0xb8);
          *(undefined8 *)((long)register0x00000008 + -0x150) =
               *(undefined8 *)((long)register0x00000008 + -0xc0);
          lVar8 = *(long *)(lVar6 + 0x18);
          if (lVar8 != 0) {
            *(undefined8 *)((long)register0x00000008 + -0xa8) =
                 *(undefined8 *)((long)register0x00000008 + -0x138);
            *(undefined8 *)((long)register0x00000008 + -0xb0) =
                 *(undefined8 *)((long)register0x00000008 + -0x140);
            *(undefined8 *)((long)register0x00000008 + -0x98) =
                 *(undefined8 *)((long)register0x00000008 + -0x128);
            *(undefined8 *)((long)register0x00000008 + -0xa0) =
                 *(undefined8 *)((long)register0x00000008 + -0x130);
            *(undefined8 *)((long)register0x00000008 + -0x88) =
                 *(undefined8 *)((long)register0x00000008 + -0x118);
            *(undefined8 *)((long)register0x00000008 + -0x90) =
                 *(undefined8 *)((long)register0x00000008 + -0x120);
            *(undefined8 *)((long)register0x00000008 + -0x78) =
                 *(undefined8 *)((long)register0x00000008 + -0x108);
            *(undefined8 *)((long)register0x00000008 + -0x80) =
                 *(undefined8 *)((long)register0x00000008 + -0x110);
            *(undefined8 *)((long)register0x00000008 + -0xe8) =
                 *(undefined8 *)((long)register0x00000008 + -0x178);
            *(undefined8 *)((long)register0x00000008 + -0xf0) =
                 *(undefined8 *)((long)register0x00000008 + -0x180);
            *(undefined8 *)((long)register0x00000008 + -0xd8) =
                 *(undefined8 *)((long)register0x00000008 + -0x168);
            *(undefined8 *)((long)register0x00000008 + -0xe0) =
                 *(undefined8 *)((long)register0x00000008 + -0x170);
            *(undefined8 *)((long)register0x00000008 + -200) =
                 *(undefined8 *)((long)register0x00000008 + -0x158);
            *(undefined8 *)((long)register0x00000008 + -0xd0) =
                 *(undefined8 *)((long)register0x00000008 + -0x160);
            *(undefined8 *)((long)register0x00000008 + -0xb8) =
                 *(undefined8 *)((long)register0x00000008 + -0x148);
            *(undefined8 *)((long)register0x00000008 + -0xc0) =
                 *(undefined8 *)((long)register0x00000008 + -0x150);
            *(int *)((long)register0x00000008 + -0x70) =
                 *(int *)((long)register0x00000008 + -0x70) + 1;
            *(undefined4 *)((long)register0x00000008 + -0x6c) =
                 *(undefined4 *)((long)register0x00000008 + -0x6c);
            unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xf0);
            unaff_x20 = puRam0000000003d2e038;
            /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$set_Item*/ func_0x01e2fae4(lVar8,*(undefined4 *)((long)register0x00000008 + -0x100));
            uVar3 = *(undefined4 *)((long)register0x00000008 + -0x100);
            goto code_r0x01635e94;
          }
        }
      }
    }
    auVar11 = func_0x00f78af4();
    plVar9 = auVar11._8_8_;
    *(undefined1 **)((long)register0x00000008 + -0x1c0) = param_3;
    *(undefined1 **)((long)register0x00000008 + -0x1b8) = param_5;
    *(undefined1 **)((long)register0x00000008 + -0x1b0) = param_4;
    *(undefined1 **)((long)register0x00000008 + -0x1a8) = param_6;
    *(undefined1 **)((long)register0x00000008 + -0x1a0) = param_7;
    *(long *)((long)register0x00000008 + -0x198) = lVar6;
    *(undefined1 **)((long)register0x00000008 + -400) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x188) = &Core_Assets_AssetManager__RequestAsset;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -400);
    unaff_x24 = 0x3eb5000;
    param_5 = unaff_x21;
    param_6 = unaff_x20;
    param_7 = unaff_x19;
    if ((bRam0000000003eb567c & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb567c = 1;
    }
    unaff_x25 = uVar10;
    if (plVar9 == (long *)0x0) {
      func_0x00f78af4();
      plVar9 = extraout_x8;
code_r0x01635fe4:
      unaff_x30 = &Core_Assets_AssetManager__RequestSpriteAsset;
      auVar12 = func_0x00f78e5c(plVar9);
      param_3 = (undefined1 *)0x0;
      param_4 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x1c0);
      goto code_r0x01635cc8;
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
    auVar12._8_8_ = plVar9;
    auVar12._0_8_ = auVar11._0_8_;
    if ((plVar9 != (long *)0x0) && (*plVar9 != /*string_TypeInfo*/ lRam0000000003d24dd0)) goto code_r0x01635fe4;
    param_3 = (undefined1 *)0x0;
    param_4 = (undefined1 *)0x0;
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -400);
    unaff_x30 = *(undefined **)((long)register0x00000008 + -0x188);
    plVar9 = (long *)((long)register0x00000008 + -0x1a0);
    plVar1 = (long *)((long)register0x00000008 + -0x198);
    plVar2 = (long *)((long)register0x00000008 + -0x1a8);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x1c0);
    auVar11._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x1b8);
    auVar11._0_8_ = *(undefined8 *)((long)register0x00000008 + -0x1b0);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x180);
    param_5 = unaff_x21;
    param_6 = unaff_x20;
    param_7 = unaff_x19;
    unaff_x19 = (undefined1 *)*plVar1;
    unaff_x20 = (undefined1 *)*plVar9;
    unaff_x21 = (undefined1 *)*plVar2;
  } while( true );
}



// ============================================================
// RVA: 0x1635f34 | Core.Assets.AssetManager.RequestAsset
// ============================================================

undefined1 *
Core_Assets_AssetManager__RequestAsset
          (undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
          undefined1 *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *extraout_x8;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *puVar10;
  undefined1 *unaff_x21;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar11;
  undefined8 unaff_x25;
  undefined8 uVar12;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar13;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  auVar16._8_8_ = unaff_x25;
  auVar16._0_8_ = unaff_x19;
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = param_1;
  do {
    uVar12 = auVar16._8_8_;
    plVar8 = auVar15._8_8_;
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = auVar16._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar13 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar11 = 0x3eb5000;
    unaff_x23 = param_3;
    unaff_x21 = param_4;
    unaff_x20 = param_5;
    if ((bRam0000000003eb567c & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb567c = 1;
    }
    if (plVar8 == (long *)0x0) {
      func_0x00f78af4();
      plVar8 = extraout_x8;
LAB_01635fe4:
      puVar14 = &Core_Assets_AssetManager__RequestSpriteAsset;
      auVar16 = func_0x00f78e5c(plVar8);
      unaff_x22 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      puVar10 = param_3;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(*plVar8 + 0x1a0));
      auVar16._8_8_ = plVar8;
      auVar16._0_8_ = auVar15._0_8_;
      if ((plVar8 != (long *)0x0) && (*plVar8 != /*string_TypeInfo*/ lRam0000000003d24dd0)) goto LAB_01635fe4;
      unaff_x22 = (undefined1 *)0x0;
      puVar13 = *(undefined1 **)((long)register0x00000008 + -0x10);
      puVar14 = *(undefined **)((long)register0x00000008 + -8);
      uVar11 = *(undefined8 *)((long)register0x00000008 + -0x40);
      auVar15._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x38);
      auVar15._0_8_ = *(undefined8 *)((long)register0x00000008 + -0x30);
      puVar3 = (undefined1 *)register0x00000008;
      unaff_x23 = param_3;
      unaff_x21 = param_4;
      unaff_x20 = param_5;
      param_5 = *(undefined1 **)((long)register0x00000008 + -0x18);
      param_4 = *(undefined1 **)((long)register0x00000008 + -0x20);
      puVar10 = *(undefined1 **)((long)register0x00000008 + -0x28);
    }
    uVar9 = auVar16._8_8_;
    lVar7 = auVar16._0_8_;
    param_3 = (undefined1 *)0x0;
    register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x180);
    *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar3 + -0x48) = uVar12;
    *(undefined8 *)(puVar3 + -0x40) = uVar11;
    *(long *)(puVar3 + -0x38) = auVar15._8_8_;
    *(long *)(puVar3 + -0x30) = auVar15._0_8_;
    *(undefined1 **)(puVar3 + -0x28) = puVar10;
    *(undefined1 **)(puVar3 + -0x20) = param_4;
    *(undefined1 **)(puVar3 + -0x18) = param_5;
    *(undefined1 **)(puVar3 + -0x10) = puVar13;
    *(undefined **)(puVar3 + -8) = puVar14;
    unaff_x29 = puVar3 + -0x10;
    unaff_x24 = 0;
    unaff_x26 = 0x3eb5000;
    param_4 = unaff_x22;
    param_5 = unaff_x23;
    if ((bRam0000000003eb567e & 1) == 0) {
      func_0x00f78a20(0x3d2fec0);
      func_0x00f78a20(0x3d2fad0);
      func_0x00f78a20(0x3d2e030);
      func_0x00f78a20(0x3d2dfd0);
      func_0x00f78a20(0x3d2e038);
      func_0x00f78a20(0x3d35c70);
      func_0x00f78a20(0x3d3ccc0);
      bRam0000000003eb567e = 1;
    }
    *(undefined8 *)(puVar3 + -0xf8) = 0;
    *(undefined4 *)(puVar3 + -0x100) = 0;
    if (*(long *)(lVar7 + 0x30) != 0) {
      param_3 = puVar3 + -0xf8;
      param_4 = puRam0000000003d2fec0;
      iVar4 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar7 + 0x30),unaff_x23);
      if ((iVar4 == 0) || (uVar5 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar9,0), (uVar5 & 1) != 0)) {
        return (undefined1 *)0x0;
      }
      if (*(long *)(lVar7 + 0x20) != 0) {
        param_3 = puVar3 + -0x100;
        param_4 = puRam0000000003d2fad0;
        uVar5 = /*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$TryGetValue*/ func_0x01ec0ed8(*(long *)(lVar7 + 0x20),uVar9);
        if ((uVar5 & 1) == 0) {
          param_4 = (undefined1 *)0x0;
          param_3 = unaff_x23;
          /*Core.Assets.AssetManager$$AddAsset*/ func_0x016360d4(puVar3 + -0xf0,lVar7,uVar9);
          uVar1 = *(undefined4 *)(puVar3 + -0xf0);
          *(undefined4 *)(puVar3 + -0x100) = uVar1;
          param_5 = unaff_x22;
code_r0x01635e94:
          uVar2 = *(uint *)(lVar7 + 0x38);
          unaff_x22 = (undefined1 *)(ulong)uVar2;
          *(uint *)(lVar7 + 0x38) = uVar2 + 1;
          lVar6 = *(long *)(lVar7 + 0x10);
          if (lVar6 != 0) {
            *(uint *)(puVar3 + -0xf0) = uVar2;
            *(undefined4 *)(puVar3 + -0xec) = uVar1;
            *(undefined1 **)(puVar3 + -0xe8) = unaff_x21;
            *(undefined1 **)(puVar3 + -0xe0) = unaff_x20;
            *(undefined8 *)(puVar3 + -0xd8) = 0;
            param_3 = puRam0000000003d3ccc0;
            /*System.Collections.Generic.List<AssetManager.AssetRequest>$$Add*/ func_0x024afe2c(lVar6,puVar3 + -0xf0);
            if (*(long *)(lVar7 + 0x28) != 0) {
              param_3 = (undefined1 *)(ulong)*(uint *)(puVar3 + -0x100);
              param_4 = puRam0000000003d2dfd0;
              /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$set_Item*/ func_0x01e2cb1c(*(long *)(lVar7 + 0x28),unaff_x22);
              if ((*(long *)(puVar3 + -0xf8) != 0) &&
                 (lVar7 = *(long *)(*(long *)(puVar3 + -0xf8) + 0x20), lVar7 != 0)) {
                /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Add*/ func_0x021cf8ec(lVar7,*(undefined4 *)(puVar3 + -0x100),uRam0000000003d35c70);
                return unaff_x22;
              }
            }
          }
        }
        else if (*(long *)(lVar7 + 0x18) != 0) {
          param_3 = puRam0000000003d2e030;
          /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(puVar3 + -0xf0,*(long *)(lVar7 + 0x18),*(undefined4 *)(puVar3 + -0x100));
          *(undefined8 *)(puVar3 + -0x138) = *(undefined8 *)(puVar3 + -0xa8);
          *(undefined8 *)(puVar3 + -0x140) = *(undefined8 *)(puVar3 + -0xb0);
          *(undefined8 *)(puVar3 + -0x128) = *(undefined8 *)(puVar3 + -0x98);
          *(undefined8 *)(puVar3 + -0x130) = *(undefined8 *)(puVar3 + -0xa0);
          *(undefined8 *)(puVar3 + -0x118) = *(undefined8 *)(puVar3 + -0x88);
          *(undefined8 *)(puVar3 + -0x120) = *(undefined8 *)(puVar3 + -0x90);
          *(undefined8 *)(puVar3 + -0x108) = *(undefined8 *)(puVar3 + -0x78);
          *(undefined8 *)(puVar3 + -0x110) = *(undefined8 *)(puVar3 + -0x80);
          *(undefined8 *)(puVar3 + -0x178) = *(undefined8 *)(puVar3 + -0xe8);
          *(undefined8 *)(puVar3 + -0x180) = *(undefined8 *)(puVar3 + -0xf0);
          *(undefined8 *)(puVar3 + -0x168) = *(undefined8 *)(puVar3 + -0xd8);
          *(undefined8 *)(puVar3 + -0x170) = *(undefined8 *)(puVar3 + -0xe0);
          *(undefined8 *)(puVar3 + -0x158) = *(undefined8 *)(puVar3 + -200);
          *(undefined8 *)(puVar3 + -0x160) = *(undefined8 *)(puVar3 + -0xd0);
          *(undefined8 *)(puVar3 + -0x148) = *(undefined8 *)(puVar3 + -0xb8);
          *(undefined8 *)(puVar3 + -0x150) = *(undefined8 *)(puVar3 + -0xc0);
          lVar6 = *(long *)(lVar7 + 0x18);
          if (lVar6 != 0) {
            *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0x138);
            *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0x140);
            *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(puVar3 + -0x128);
            *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0x130);
            *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(puVar3 + -0x118);
            *(undefined8 *)(puVar3 + -0x90) = *(undefined8 *)(puVar3 + -0x120);
            *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x108);
            *(undefined8 *)(puVar3 + -0x80) = *(undefined8 *)(puVar3 + -0x110);
            *(undefined8 *)(puVar3 + -0xe8) = *(undefined8 *)(puVar3 + -0x178);
            *(undefined8 *)(puVar3 + -0xf0) = *(undefined8 *)(puVar3 + -0x180);
            *(undefined8 *)(puVar3 + -0xd8) = *(undefined8 *)(puVar3 + -0x168);
            *(undefined8 *)(puVar3 + -0xe0) = *(undefined8 *)(puVar3 + -0x170);
            *(undefined8 *)(puVar3 + -200) = *(undefined8 *)(puVar3 + -0x158);
            *(undefined8 *)(puVar3 + -0xd0) = *(undefined8 *)(puVar3 + -0x160);
            *(undefined8 *)(puVar3 + -0xb8) = *(undefined8 *)(puVar3 + -0x148);
            *(undefined8 *)(puVar3 + -0xc0) = *(undefined8 *)(puVar3 + -0x150);
            *(int *)(puVar3 + -0x70) = *(int *)(puVar3 + -0x70) + 1;
            *(undefined4 *)(puVar3 + -0x6c) = *(undefined4 *)(puVar3 + -0x6c);
            param_3 = puVar3 + -0xf0;
            param_4 = puRam0000000003d2e038;
            /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$set_Item*/ func_0x01e2fae4(lVar6,*(undefined4 *)(puVar3 + -0x100));
            uVar1 = *(undefined4 *)(puVar3 + -0x100);
            goto code_r0x01635e94;
          }
        }
      }
    }
    unaff_x30 = Core_Assets_AssetManager__RequestAsset;
    auVar15 = func_0x00f78af4();
  } while( true );
}



// ============================================================
// RVA: 0x1635fec | Core.Assets.AssetManager.RequestSpriteAsset
// ============================================================

undefined1 *
Core_Assets_AssetManager__RequestSpriteAsset
          (undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
          undefined1 *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long *extraout_x8;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar12;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar13;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = param_1;
  auVar14._8_8_ = unaff_x23;
  auVar14._0_8_ = unaff_x22;
  do {
    puVar12 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    puVar3 = (undefined1 *)register0x00000008;
    uVar13 = unaff_x25;
Core_Assets_AssetManager__RequestAsset:
    unaff_x25 = auVar15._8_8_;
    lVar5 = auVar15._0_8_;
    puVar9 = (undefined1 *)0x0;
    *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar3 + -0x48) = uVar13;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(long *)(puVar3 + -0x38) = auVar14._8_8_;
    *(long *)(puVar3 + -0x30) = auVar14._0_8_;
    *(undefined1 **)(puVar3 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(code **)(puVar3 + -8) = unaff_x30;
    unaff_x26 = 0x3eb5000;
    puVar10 = puVar12;
    puVar11 = param_3;
    if ((bRam0000000003eb567e & 1) == 0) {
      func_0x00f78a20(0x3d2fec0);
      func_0x00f78a20(0x3d2fad0);
      func_0x00f78a20(0x3d2e030);
      func_0x00f78a20(0x3d2dfd0);
      func_0x00f78a20(0x3d2e038);
      func_0x00f78a20(0x3d35c70);
      func_0x00f78a20(0x3d3ccc0);
      bRam0000000003eb567e = 1;
    }
    *(undefined8 *)(puVar3 + -0xf8) = 0;
    *(undefined4 *)(puVar3 + -0x100) = 0;
    if (*(long *)(lVar5 + 0x30) != 0) {
      puVar9 = puVar3 + -0xf8;
      puVar10 = puRam0000000003d2fec0;
      iVar4 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar5 + 0x30),param_3);
      if ((iVar4 == 0) || (uVar6 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(unaff_x25,0), (uVar6 & 1) != 0)) {
        return (undefined1 *)0x0;
      }
      if (*(long *)(lVar5 + 0x20) != 0) {
        puVar9 = puVar3 + -0x100;
        puVar10 = puRam0000000003d2fad0;
        uVar6 = /*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$TryGetValue*/ func_0x01ec0ed8(*(long *)(lVar5 + 0x20),unaff_x25);
        if ((uVar6 & 1) == 0) {
          puVar10 = (undefined1 *)0x0;
          puVar9 = param_3;
          /*Core.Assets.AssetManager$$AddAsset*/ func_0x016360d4(puVar3 + -0xf0,lVar5,unaff_x25);
          uVar1 = *(undefined4 *)(puVar3 + -0xf0);
          *(undefined4 *)(puVar3 + -0x100) = uVar1;
          puVar11 = puVar12;
code_r0x01635e94:
          uVar2 = *(uint *)(lVar5 + 0x38);
          puVar12 = (undefined1 *)(ulong)uVar2;
          *(uint *)(lVar5 + 0x38) = uVar2 + 1;
          lVar7 = *(long *)(lVar5 + 0x10);
          if (lVar7 != 0) {
            *(uint *)(puVar3 + -0xf0) = uVar2;
            *(undefined4 *)(puVar3 + -0xec) = uVar1;
            *(undefined1 **)(puVar3 + -0xe8) = param_4;
            *(undefined1 **)(puVar3 + -0xe0) = param_5;
            *(undefined8 *)(puVar3 + -0xd8) = 0;
            puVar9 = puRam0000000003d3ccc0;
            /*System.Collections.Generic.List<AssetManager.AssetRequest>$$Add*/ func_0x024afe2c(lVar7,puVar3 + -0xf0);
            if (*(long *)(lVar5 + 0x28) != 0) {
              puVar9 = (undefined1 *)(ulong)*(uint *)(puVar3 + -0x100);
              puVar10 = puRam0000000003d2dfd0;
              /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$set_Item*/ func_0x01e2cb1c(*(long *)(lVar5 + 0x28),puVar12);
              if ((*(long *)(puVar3 + -0xf8) != 0) &&
                 (lVar7 = *(long *)(*(long *)(puVar3 + -0xf8) + 0x20), lVar7 != 0)) {
                /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Add*/ func_0x021cf8ec(lVar7,*(undefined4 *)(puVar3 + -0x100),uRam0000000003d35c70);
                return puVar12;
              }
            }
          }
        }
        else if (*(long *)(lVar5 + 0x18) != 0) {
          puVar9 = puRam0000000003d2e030;
          /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(puVar3 + -0xf0,*(long *)(lVar5 + 0x18),*(undefined4 *)(puVar3 + -0x100));
          *(undefined8 *)(puVar3 + -0x138) = *(undefined8 *)(puVar3 + -0xa8);
          *(undefined8 *)(puVar3 + -0x140) = *(undefined8 *)(puVar3 + -0xb0);
          *(undefined8 *)(puVar3 + -0x128) = *(undefined8 *)(puVar3 + -0x98);
          *(undefined8 *)(puVar3 + -0x130) = *(undefined8 *)(puVar3 + -0xa0);
          *(undefined8 *)(puVar3 + -0x118) = *(undefined8 *)(puVar3 + -0x88);
          *(undefined8 *)(puVar3 + -0x120) = *(undefined8 *)(puVar3 + -0x90);
          *(undefined8 *)(puVar3 + -0x108) = *(undefined8 *)(puVar3 + -0x78);
          *(undefined8 *)(puVar3 + -0x110) = *(undefined8 *)(puVar3 + -0x80);
          *(undefined8 *)(puVar3 + -0x178) = *(undefined8 *)(puVar3 + -0xe8);
          *(undefined8 *)(puVar3 + -0x180) = *(undefined8 *)(puVar3 + -0xf0);
          *(undefined8 *)(puVar3 + -0x168) = *(undefined8 *)(puVar3 + -0xd8);
          *(undefined8 *)(puVar3 + -0x170) = *(undefined8 *)(puVar3 + -0xe0);
          *(undefined8 *)(puVar3 + -0x158) = *(undefined8 *)(puVar3 + -200);
          *(undefined8 *)(puVar3 + -0x160) = *(undefined8 *)(puVar3 + -0xd0);
          *(undefined8 *)(puVar3 + -0x148) = *(undefined8 *)(puVar3 + -0xb8);
          *(undefined8 *)(puVar3 + -0x150) = *(undefined8 *)(puVar3 + -0xc0);
          lVar7 = *(long *)(lVar5 + 0x18);
          if (lVar7 != 0) {
            *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0x138);
            *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0x140);
            *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(puVar3 + -0x128);
            *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0x130);
            *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(puVar3 + -0x118);
            *(undefined8 *)(puVar3 + -0x90) = *(undefined8 *)(puVar3 + -0x120);
            *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x108);
            *(undefined8 *)(puVar3 + -0x80) = *(undefined8 *)(puVar3 + -0x110);
            *(undefined8 *)(puVar3 + -0xe8) = *(undefined8 *)(puVar3 + -0x178);
            *(undefined8 *)(puVar3 + -0xf0) = *(undefined8 *)(puVar3 + -0x180);
            *(undefined8 *)(puVar3 + -0xd8) = *(undefined8 *)(puVar3 + -0x168);
            *(undefined8 *)(puVar3 + -0xe0) = *(undefined8 *)(puVar3 + -0x170);
            *(undefined8 *)(puVar3 + -200) = *(undefined8 *)(puVar3 + -0x158);
            *(undefined8 *)(puVar3 + -0xd0) = *(undefined8 *)(puVar3 + -0x160);
            *(undefined8 *)(puVar3 + -0xb8) = *(undefined8 *)(puVar3 + -0x148);
            *(undefined8 *)(puVar3 + -0xc0) = *(undefined8 *)(puVar3 + -0x150);
            *(int *)(puVar3 + -0x70) = *(int *)(puVar3 + -0x70) + 1;
            *(undefined4 *)(puVar3 + -0x6c) = *(undefined4 *)(puVar3 + -0x6c);
            puVar9 = puVar3 + -0xf0;
            puVar10 = puRam0000000003d2e038;
            /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$set_Item*/ func_0x01e2fae4(lVar7,*(undefined4 *)(puVar3 + -0x100));
            uVar1 = *(undefined4 *)(puVar3 + -0x100);
            goto code_r0x01635e94;
          }
        }
      }
    }
    auVar14 = func_0x00f78af4();
    plVar8 = auVar14._8_8_;
    register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x1c0);
    *(undefined8 *)(puVar3 + -0x1c0) = 0;
    *(undefined1 **)(puVar3 + -0x1b8) = param_3;
    *(undefined1 **)(puVar3 + -0x1b0) = puVar12;
    *(undefined1 **)(puVar3 + -0x1a8) = param_4;
    *(undefined1 **)(puVar3 + -0x1a0) = param_5;
    *(long *)(puVar3 + -0x198) = lVar5;
    *(undefined1 **)(puVar3 + -400) = puVar3 + -0x10;
    *(code **)(puVar3 + -0x188) = Core_Assets_AssetManager__RequestAsset;
    unaff_x29 = puVar3 + -400;
    unaff_x24 = 0x3eb5000;
    param_3 = puVar9;
    param_4 = puVar10;
    param_5 = puVar11;
    if ((bRam0000000003eb567c & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb567c = 1;
    }
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(*plVar8 + 0x1a0));
      auVar15._8_8_ = plVar8;
      auVar15._0_8_ = auVar14._0_8_;
      if ((plVar8 != (long *)0x0) && (*plVar8 != /*string_TypeInfo*/ lRam0000000003d24dd0)) goto LAB_01635fe4;
      puVar12 = (undefined1 *)0x0;
      unaff_x29 = *(undefined1 **)(puVar3 + -400);
      unaff_x30 = *(code **)(puVar3 + -0x188);
      unaff_x20 = *(undefined1 **)(puVar3 + -0x1a0);
      unaff_x19 = *(undefined1 **)(puVar3 + -0x198);
      unaff_x21 = *(undefined1 **)(puVar3 + -0x1a8);
      unaff_x24 = *(undefined8 *)(puVar3 + -0x1c0);
      auVar14._8_8_ = *(undefined8 *)(puVar3 + -0x1b8);
      auVar14._0_8_ = *(undefined8 *)(puVar3 + -0x1b0);
      puVar3 = puVar3 + -0x180;
      param_3 = puVar9;
      param_4 = puVar10;
      param_5 = puVar11;
      uVar13 = unaff_x25;
      goto Core_Assets_AssetManager__RequestAsset;
    }
    func_0x00f78af4();
    plVar8 = extraout_x8;
LAB_01635fe4:
    unaff_x30 = Core_Assets_AssetManager__RequestSpriteAsset;
    auVar15 = func_0x00f78e5c(plVar8);
    unaff_x19 = puVar11;
    unaff_x20 = puVar10;
    unaff_x21 = puVar9;
  } while( true );
}



// ============================================================
// RVA: 0x1636004 | Core.Assets.AssetManager.RequestSpriteAsset
// ============================================================

undefined1 *
Core_Assets_AssetManager__RequestSpriteAsset
          (long param_1,long *param_2,undefined1 *param_3,undefined1 *param_4,undefined1 *param_5)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar15;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar16;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar17;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long *plVar10;
  
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = param_1;
  auVar19._8_8_ = unaff_x23;
  auVar19._0_8_ = unaff_x22;
  puVar5 = &stack0xffffffffffffffc0;
  puVar17 = &stack0xfffffffffffffff0;
  uVar16 = 0x3eb5000;
  puVar11 = param_3;
  puVar13 = param_4;
  puVar14 = param_5;
  if ((bRam0000000003eb567d & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb567d = 1;
  }
  if (param_2 == (long *)0x0) {
    func_0x00f78af4();
    plVar9 = extraout_x8_00;
  }
  else {
    plVar9 = (long *)(**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
    if ((plVar9 == (long *)0x0) || (*plVar9 == /*string_TypeInfo*/ lRam0000000003d24dd0)) {
      puVar12 = (undefined1 *)0x0;
      puVar15 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      puVar5 = (undefined1 *)register0x00000008;
      puVar11 = param_3;
      puVar13 = param_4;
      puVar14 = param_5;
      param_5 = unaff_x19;
      param_4 = unaff_x20;
      param_3 = unaff_x21;
      uVar16 = unaff_x24;
      puVar17 = unaff_x29;
      auVar18 = auVar19;
      goto Core_Assets_AssetManager__RequestAsset;
    }
  }
  unaff_x30 = (code *)&Core_Assets_AssetManager__RequestMultipleAssets;
  auVar19 = func_0x00f78e5c(plVar9);
  param_1 = auVar19._0_8_;
  puVar12 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  puVar15 = (undefined1 *)0x0;
  plVar9 = auVar19._8_8_;
Core_Assets_AssetManager__RequestAsset:
  do {
    *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
    *(long **)(puVar5 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar5 + -0x40) = uVar16;
    *(long *)(puVar5 + -0x38) = auVar18._8_8_;
    *(long *)(puVar5 + -0x30) = auVar18._0_8_;
    *(undefined1 **)(puVar5 + -0x28) = param_3;
    *(undefined1 **)(puVar5 + -0x20) = param_4;
    *(undefined1 **)(puVar5 + -0x18) = param_5;
    *(undefined1 **)(puVar5 + -0x10) = puVar17;
    *(code **)(puVar5 + -8) = unaff_x30;
    unaff_x26 = 0x3eb5000;
    param_3 = puVar12;
    param_4 = puVar15;
    param_5 = puVar11;
    if ((bRam0000000003eb567e & 1) == 0) {
      func_0x00f78a20(0x3d2fec0);
      func_0x00f78a20(0x3d2fad0);
      func_0x00f78a20(0x3d2e030);
      func_0x00f78a20(0x3d2dfd0);
      func_0x00f78a20(0x3d2e038);
      func_0x00f78a20(0x3d35c70);
      func_0x00f78a20(0x3d3ccc0);
      bRam0000000003eb567e = 1;
    }
    *(undefined8 *)(puVar5 + -0xf8) = 0;
    *(undefined4 *)(puVar5 + -0x100) = 0;
    if (*(long *)(param_1 + 0x30) != 0) {
      param_3 = puVar5 + -0xf8;
      param_4 = puRam0000000003d2fec0;
      iVar6 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(param_1 + 0x30),puVar11);
      if ((iVar6 == 0) || (uVar7 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(plVar9,0), (uVar7 & 1) != 0)) {
        return (undefined1 *)0x0;
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        param_3 = puVar5 + -0x100;
        param_4 = puRam0000000003d2fad0;
        uVar7 = /*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$TryGetValue*/ func_0x01ec0ed8(*(long *)(param_1 + 0x20),plVar9);
        if ((uVar7 & 1) == 0) {
          param_3 = puVar11;
          param_4 = puVar12;
          /*Core.Assets.AssetManager$$AddAsset*/ func_0x016360d4(puVar5 + -0xf0,param_1,plVar9);
          uVar3 = *(undefined4 *)(puVar5 + -0xf0);
          *(undefined4 *)(puVar5 + -0x100) = uVar3;
          param_5 = puVar15;
code_r0x01635e94:
          uVar4 = *(uint *)(param_1 + 0x38);
          puVar15 = (undefined1 *)(ulong)uVar4;
          *(uint *)(param_1 + 0x38) = uVar4 + 1;
          lVar8 = *(long *)(param_1 + 0x10);
          if (lVar8 != 0) {
            *(uint *)(puVar5 + -0xf0) = uVar4;
            *(undefined4 *)(puVar5 + -0xec) = uVar3;
            *(undefined1 **)(puVar5 + -0xe8) = puVar13;
            *(undefined1 **)(puVar5 + -0xe0) = puVar14;
            *(undefined8 *)(puVar5 + -0xd8) = 0;
            param_3 = puRam0000000003d3ccc0;
            /*System.Collections.Generic.List<AssetManager.AssetRequest>$$Add*/ func_0x024afe2c(lVar8,puVar5 + -0xf0);
            if (*(long *)(param_1 + 0x28) != 0) {
              param_3 = (undefined1 *)(ulong)*(uint *)(puVar5 + -0x100);
              param_4 = puRam0000000003d2dfd0;
              /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$set_Item*/ func_0x01e2cb1c(*(long *)(param_1 + 0x28),puVar15);
              if ((*(long *)(puVar5 + -0xf8) != 0) &&
                 (lVar8 = *(long *)(*(long *)(puVar5 + -0xf8) + 0x20), lVar8 != 0)) {
                /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Add*/ func_0x021cf8ec(lVar8,*(undefined4 *)(puVar5 + -0x100),uRam0000000003d35c70);
                return puVar15;
              }
            }
          }
        }
        else if (*(long *)(param_1 + 0x18) != 0) {
          param_3 = puRam0000000003d2e030;
          /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(puVar5 + -0xf0,*(long *)(param_1 + 0x18),*(undefined4 *)(puVar5 + -0x100))
          ;
          *(undefined8 *)(puVar5 + -0x138) = *(undefined8 *)(puVar5 + -0xa8);
          *(undefined8 *)(puVar5 + -0x140) = *(undefined8 *)(puVar5 + -0xb0);
          *(undefined8 *)(puVar5 + -0x128) = *(undefined8 *)(puVar5 + -0x98);
          *(undefined8 *)(puVar5 + -0x130) = *(undefined8 *)(puVar5 + -0xa0);
          *(undefined8 *)(puVar5 + -0x118) = *(undefined8 *)(puVar5 + -0x88);
          *(undefined8 *)(puVar5 + -0x120) = *(undefined8 *)(puVar5 + -0x90);
          *(undefined8 *)(puVar5 + -0x108) = *(undefined8 *)(puVar5 + -0x78);
          *(undefined8 *)(puVar5 + -0x110) = *(undefined8 *)(puVar5 + -0x80);
          *(undefined8 *)(puVar5 + -0x178) = *(undefined8 *)(puVar5 + -0xe8);
          *(undefined8 *)(puVar5 + -0x180) = *(undefined8 *)(puVar5 + -0xf0);
          *(undefined8 *)(puVar5 + -0x168) = *(undefined8 *)(puVar5 + -0xd8);
          *(undefined8 *)(puVar5 + -0x170) = *(undefined8 *)(puVar5 + -0xe0);
          *(undefined8 *)(puVar5 + -0x158) = *(undefined8 *)(puVar5 + -200);
          *(undefined8 *)(puVar5 + -0x160) = *(undefined8 *)(puVar5 + -0xd0);
          *(undefined8 *)(puVar5 + -0x148) = *(undefined8 *)(puVar5 + -0xb8);
          *(undefined8 *)(puVar5 + -0x150) = *(undefined8 *)(puVar5 + -0xc0);
          lVar8 = *(long *)(param_1 + 0x18);
          if (lVar8 != 0) {
            *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)(puVar5 + -0x138);
            *(undefined8 *)(puVar5 + -0xb0) = *(undefined8 *)(puVar5 + -0x140);
            *(undefined8 *)(puVar5 + -0x98) = *(undefined8 *)(puVar5 + -0x128);
            *(undefined8 *)(puVar5 + -0xa0) = *(undefined8 *)(puVar5 + -0x130);
            *(undefined8 *)(puVar5 + -0x88) = *(undefined8 *)(puVar5 + -0x118);
            *(undefined8 *)(puVar5 + -0x90) = *(undefined8 *)(puVar5 + -0x120);
            *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x108);
            *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x110);
            *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(puVar5 + -0x178);
            *(undefined8 *)(puVar5 + -0xf0) = *(undefined8 *)(puVar5 + -0x180);
            *(undefined8 *)(puVar5 + -0xd8) = *(undefined8 *)(puVar5 + -0x168);
            *(undefined8 *)(puVar5 + -0xe0) = *(undefined8 *)(puVar5 + -0x170);
            *(undefined8 *)(puVar5 + -200) = *(undefined8 *)(puVar5 + -0x158);
            *(undefined8 *)(puVar5 + -0xd0) = *(undefined8 *)(puVar5 + -0x160);
            *(undefined8 *)(puVar5 + -0xb8) = *(undefined8 *)(puVar5 + -0x148);
            *(undefined8 *)(puVar5 + -0xc0) = *(undefined8 *)(puVar5 + -0x150);
            *(int *)(puVar5 + -0x70) = *(int *)(puVar5 + -0x70) + 1;
            *(undefined4 *)(puVar5 + -0x6c) = *(undefined4 *)(puVar5 + -0x6c);
            param_3 = puVar5 + -0xf0;
            param_4 = puRam0000000003d2e038;
            /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$set_Item*/ func_0x01e2fae4(lVar8,*(undefined4 *)(puVar5 + -0x100));
            uVar3 = *(undefined4 *)(puVar5 + -0x100);
            goto code_r0x01635e94;
          }
        }
      }
    }
    auVar18 = func_0x00f78af4();
    plVar10 = auVar18._8_8_;
    lVar8 = auVar18._0_8_;
    *(undefined1 **)(puVar5 + -0x1c0) = puVar12;
    *(undefined1 **)(puVar5 + -0x1b8) = puVar11;
    *(undefined1 **)(puVar5 + -0x1b0) = puVar15;
    *(undefined1 **)(puVar5 + -0x1a8) = puVar13;
    *(undefined1 **)(puVar5 + -0x1a0) = puVar14;
    *(long *)(puVar5 + -0x198) = param_1;
    *(undefined1 **)(puVar5 + -400) = puVar5 + -0x10;
    *(code **)(puVar5 + -0x188) = Core_Assets_AssetManager__RequestAsset;
    puVar17 = puVar5 + -400;
    uVar16 = 0x3eb5000;
    puVar11 = param_3;
    puVar13 = param_4;
    puVar14 = param_5;
    if ((bRam0000000003eb567c & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb567c = 1;
    }
    unaff_x25 = plVar9;
    if (plVar10 == (long *)0x0) {
      func_0x00f78af4();
      plVar9 = extraout_x8;
LAB_01635fe4:
      unaff_x30 = Core_Assets_AssetManager__RequestSpriteAsset;
      auVar19 = func_0x00f78e5c(plVar9);
      param_1 = auVar19._0_8_;
      puVar12 = (undefined1 *)0x0;
      puVar15 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      puVar5 = puVar5 + -0x1c0;
      plVar9 = auVar19._8_8_;
      goto Core_Assets_AssetManager__RequestAsset;
    }
    plVar9 = (long *)(**(code **)(*plVar10 + 0x198))(plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
    if ((plVar9 != (long *)0x0) && (*plVar9 != /*string_TypeInfo*/ lRam0000000003d24dd0)) goto LAB_01635fe4;
    puVar12 = (undefined1 *)0x0;
    puVar15 = (undefined1 *)0x0;
    puVar17 = *(undefined1 **)(puVar5 + -400);
    unaff_x30 = *(code **)(puVar5 + -0x188);
    plVar10 = (long *)(puVar5 + -0x1a0);
    plVar1 = (long *)(puVar5 + -0x198);
    plVar2 = (long *)(puVar5 + -0x1a8);
    uVar16 = *(undefined8 *)(puVar5 + -0x1c0);
    auVar18._8_8_ = *(undefined8 *)(puVar5 + -0x1b8);
    auVar18._0_8_ = *(undefined8 *)(puVar5 + -0x1b0);
    puVar5 = puVar5 + -0x180;
    param_1 = lVar8;
    puVar11 = param_3;
    puVar13 = param_4;
    puVar14 = param_5;
    param_5 = (undefined1 *)*plVar1;
    param_4 = (undefined1 *)*plVar10;
    param_3 = (undefined1 *)*plVar2;
  } while( true );
}



// ============================================================
// RVA: 0x16360bc | Core.Assets.AssetManager.RequestMultipleAssets
// ============================================================

undefined1 *
Core_Assets_AssetManager__RequestMultipleAssets
          (undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
          undefined1 *param_5)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long *extraout_x8;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = param_1;
  auVar14._8_8_ = unaff_x23;
  auVar14._0_8_ = unaff_x22;
  puVar12 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  puVar13 = (undefined1 *)0x0;
  puVar5 = (undefined1 *)register0x00000008;
Core_Assets_AssetManager__RequestAsset:
  do {
    uVar11 = auVar15._8_8_;
    lVar7 = auVar15._0_8_;
    *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
    *(long *)(puVar5 + -0x38) = auVar14._8_8_;
    *(long *)(puVar5 + -0x30) = auVar14._0_8_;
    *(undefined1 **)(puVar5 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar5 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
    *(code **)(puVar5 + -8) = unaff_x30;
    unaff_x26 = 0x3eb5000;
    unaff_x21 = puVar12;
    unaff_x20 = puVar13;
    unaff_x19 = param_3;
    if ((bRam0000000003eb567e & 1) == 0) {
      func_0x00f78a20(0x3d2fec0);
      func_0x00f78a20(0x3d2fad0);
      func_0x00f78a20(0x3d2e030);
      func_0x00f78a20(0x3d2dfd0);
      func_0x00f78a20(0x3d2e038);
      func_0x00f78a20(0x3d35c70);
      func_0x00f78a20(0x3d3ccc0);
      bRam0000000003eb567e = 1;
    }
    *(undefined8 *)(puVar5 + -0xf8) = 0;
    *(undefined4 *)(puVar5 + -0x100) = 0;
    if (*(long *)(lVar7 + 0x30) != 0) {
      unaff_x21 = puVar5 + -0xf8;
      unaff_x20 = puRam0000000003d2fec0;
      iVar6 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar7 + 0x30),param_3);
      if ((iVar6 == 0) || (uVar8 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar11,0), (uVar8 & 1) != 0)) {
        return (undefined1 *)0x0;
      }
      if (*(long *)(lVar7 + 0x20) != 0) {
        unaff_x21 = puVar5 + -0x100;
        unaff_x20 = puRam0000000003d2fad0;
        uVar8 = /*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$TryGetValue*/ func_0x01ec0ed8(*(long *)(lVar7 + 0x20),uVar11);
        if ((uVar8 & 1) == 0) {
          unaff_x21 = param_3;
          unaff_x20 = puVar12;
          /*Core.Assets.AssetManager$$AddAsset*/ func_0x016360d4(puVar5 + -0xf0,lVar7,uVar11);
          uVar3 = *(undefined4 *)(puVar5 + -0xf0);
          *(undefined4 *)(puVar5 + -0x100) = uVar3;
          unaff_x19 = puVar13;
code_r0x01635e94:
          uVar4 = *(uint *)(lVar7 + 0x38);
          puVar13 = (undefined1 *)(ulong)uVar4;
          *(uint *)(lVar7 + 0x38) = uVar4 + 1;
          lVar9 = *(long *)(lVar7 + 0x10);
          if (lVar9 != 0) {
            *(uint *)(puVar5 + -0xf0) = uVar4;
            *(undefined4 *)(puVar5 + -0xec) = uVar3;
            *(undefined1 **)(puVar5 + -0xe8) = param_4;
            *(undefined1 **)(puVar5 + -0xe0) = param_5;
            *(undefined8 *)(puVar5 + -0xd8) = 0;
            unaff_x21 = puRam0000000003d3ccc0;
            /*System.Collections.Generic.List<AssetManager.AssetRequest>$$Add*/ func_0x024afe2c(lVar9,puVar5 + -0xf0);
            if (*(long *)(lVar7 + 0x28) != 0) {
              unaff_x21 = (undefined1 *)(ulong)*(uint *)(puVar5 + -0x100);
              unaff_x20 = puRam0000000003d2dfd0;
              /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$set_Item*/ func_0x01e2cb1c(*(long *)(lVar7 + 0x28),puVar13);
              if ((*(long *)(puVar5 + -0xf8) != 0) &&
                 (lVar9 = *(long *)(*(long *)(puVar5 + -0xf8) + 0x20), lVar9 != 0)) {
                /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Add*/ func_0x021cf8ec(lVar9,*(undefined4 *)(puVar5 + -0x100),uRam0000000003d35c70);
                return puVar13;
              }
            }
          }
        }
        else if (*(long *)(lVar7 + 0x18) != 0) {
          unaff_x21 = puRam0000000003d2e030;
          /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(puVar5 + -0xf0,*(long *)(lVar7 + 0x18),*(undefined4 *)(puVar5 + -0x100));
          *(undefined8 *)(puVar5 + -0x138) = *(undefined8 *)(puVar5 + -0xa8);
          *(undefined8 *)(puVar5 + -0x140) = *(undefined8 *)(puVar5 + -0xb0);
          *(undefined8 *)(puVar5 + -0x128) = *(undefined8 *)(puVar5 + -0x98);
          *(undefined8 *)(puVar5 + -0x130) = *(undefined8 *)(puVar5 + -0xa0);
          *(undefined8 *)(puVar5 + -0x118) = *(undefined8 *)(puVar5 + -0x88);
          *(undefined8 *)(puVar5 + -0x120) = *(undefined8 *)(puVar5 + -0x90);
          *(undefined8 *)(puVar5 + -0x108) = *(undefined8 *)(puVar5 + -0x78);
          *(undefined8 *)(puVar5 + -0x110) = *(undefined8 *)(puVar5 + -0x80);
          *(undefined8 *)(puVar5 + -0x178) = *(undefined8 *)(puVar5 + -0xe8);
          *(undefined8 *)(puVar5 + -0x180) = *(undefined8 *)(puVar5 + -0xf0);
          *(undefined8 *)(puVar5 + -0x168) = *(undefined8 *)(puVar5 + -0xd8);
          *(undefined8 *)(puVar5 + -0x170) = *(undefined8 *)(puVar5 + -0xe0);
          *(undefined8 *)(puVar5 + -0x158) = *(undefined8 *)(puVar5 + -200);
          *(undefined8 *)(puVar5 + -0x160) = *(undefined8 *)(puVar5 + -0xd0);
          *(undefined8 *)(puVar5 + -0x148) = *(undefined8 *)(puVar5 + -0xb8);
          *(undefined8 *)(puVar5 + -0x150) = *(undefined8 *)(puVar5 + -0xc0);
          lVar9 = *(long *)(lVar7 + 0x18);
          if (lVar9 != 0) {
            *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)(puVar5 + -0x138);
            *(undefined8 *)(puVar5 + -0xb0) = *(undefined8 *)(puVar5 + -0x140);
            *(undefined8 *)(puVar5 + -0x98) = *(undefined8 *)(puVar5 + -0x128);
            *(undefined8 *)(puVar5 + -0xa0) = *(undefined8 *)(puVar5 + -0x130);
            *(undefined8 *)(puVar5 + -0x88) = *(undefined8 *)(puVar5 + -0x118);
            *(undefined8 *)(puVar5 + -0x90) = *(undefined8 *)(puVar5 + -0x120);
            *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x108);
            *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x110);
            *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(puVar5 + -0x178);
            *(undefined8 *)(puVar5 + -0xf0) = *(undefined8 *)(puVar5 + -0x180);
            *(undefined8 *)(puVar5 + -0xd8) = *(undefined8 *)(puVar5 + -0x168);
            *(undefined8 *)(puVar5 + -0xe0) = *(undefined8 *)(puVar5 + -0x170);
            *(undefined8 *)(puVar5 + -200) = *(undefined8 *)(puVar5 + -0x158);
            *(undefined8 *)(puVar5 + -0xd0) = *(undefined8 *)(puVar5 + -0x160);
            *(undefined8 *)(puVar5 + -0xb8) = *(undefined8 *)(puVar5 + -0x148);
            *(undefined8 *)(puVar5 + -0xc0) = *(undefined8 *)(puVar5 + -0x150);
            *(int *)(puVar5 + -0x70) = *(int *)(puVar5 + -0x70) + 1;
            *(undefined4 *)(puVar5 + -0x6c) = *(undefined4 *)(puVar5 + -0x6c);
            unaff_x21 = puVar5 + -0xf0;
            unaff_x20 = puRam0000000003d2e038;
            /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$set_Item*/ func_0x01e2fae4(lVar9,*(undefined4 *)(puVar5 + -0x100));
            uVar3 = *(undefined4 *)(puVar5 + -0x100);
            goto code_r0x01635e94;
          }
        }
      }
    }
    auVar14 = func_0x00f78af4();
    plVar10 = auVar14._8_8_;
    *(undefined1 **)(puVar5 + -0x1c0) = puVar12;
    *(undefined1 **)(puVar5 + -0x1b8) = param_3;
    *(undefined1 **)(puVar5 + -0x1b0) = puVar13;
    *(undefined1 **)(puVar5 + -0x1a8) = param_4;
    *(undefined1 **)(puVar5 + -0x1a0) = param_5;
    *(long *)(puVar5 + -0x198) = lVar7;
    *(undefined1 **)(puVar5 + -400) = puVar5 + -0x10;
    *(code **)(puVar5 + -0x188) = Core_Assets_AssetManager__RequestAsset;
    unaff_x29 = puVar5 + -400;
    unaff_x24 = 0x3eb5000;
    param_3 = unaff_x21;
    param_4 = unaff_x20;
    param_5 = unaff_x19;
    if ((bRam0000000003eb567c & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb567c = 1;
    }
    unaff_x25 = uVar11;
    if (plVar10 == (long *)0x0) {
      func_0x00f78af4();
      plVar10 = extraout_x8;
LAB_01635fe4:
      unaff_x30 = Core_Assets_AssetManager__RequestSpriteAsset;
      auVar15 = func_0x00f78e5c(plVar10);
      puVar12 = (undefined1 *)0x0;
      puVar13 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      puVar5 = puVar5 + -0x1c0;
      goto Core_Assets_AssetManager__RequestAsset;
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x198))(plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
    auVar15._8_8_ = plVar10;
    auVar15._0_8_ = auVar14._0_8_;
    if ((plVar10 != (long *)0x0) && (*plVar10 != /*string_TypeInfo*/ lRam0000000003d24dd0)) goto LAB_01635fe4;
    puVar12 = (undefined1 *)0x0;
    puVar13 = (undefined1 *)0x0;
    unaff_x29 = *(undefined1 **)(puVar5 + -400);
    unaff_x30 = *(code **)(puVar5 + -0x188);
    plVar10 = (long *)(puVar5 + -0x1a0);
    plVar1 = (long *)(puVar5 + -0x198);
    plVar2 = (long *)(puVar5 + -0x1a8);
    unaff_x24 = *(undefined8 *)(puVar5 + -0x1c0);
    auVar14._8_8_ = *(undefined8 *)(puVar5 + -0x1b8);
    auVar14._0_8_ = *(undefined8 *)(puVar5 + -0x1b0);
    puVar5 = puVar5 + -0x180;
    param_3 = unaff_x21;
    param_4 = unaff_x20;
    param_5 = unaff_x19;
    unaff_x19 = (undefined1 *)*plVar1;
    unaff_x20 = (undefined1 *)*plVar10;
    unaff_x21 = (undefined1 *)*plVar2;
  } while( true );
}



// ============================================================
// RVA: 0x16360d4 | Core.Assets.AssetManager.AddAsset
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Core_Assets_AssetManager__AddAsset
                (ulong *param_1,long param_2,ulong param_3,ulong param_4,int param_5,int param_6)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined1 uStack_158;
  undefined1 uStack_157;
  undefined8 uStack_156;
  undefined8 uStack_14e;
  undefined8 uStack_146;
  undefined8 uStack_13e;
  undefined8 uStack_136;
  undefined8 uStack_12e;
  undefined8 uStack_126;
  undefined8 uStack_11e;
  undefined8 uStack_116;
  undefined8 uStack_10e;
  undefined8 uStack_106;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  ulong uStack_f0;
  undefined4 uStack_e8;
  undefined2 uStack_e4;
  undefined8 uStack_e2;
  undefined2 uStack_da;
  undefined6 uStack_d8;
  undefined2 uStack_d2;
  undefined6 uStack_d0;
  undefined2 uStack_ca;
  undefined6 uStack_c8;
  undefined2 uStack_c2;
  undefined6 uStack_c0;
  undefined2 uStack_ba;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  undefined6 uStack_b0;
  undefined2 uStack_aa;
  undefined6 uStack_a8;
  undefined2 uStack_a2;
  undefined6 uStack_a0;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  undefined2 uStack_92;
  undefined6 uStack_90;
  undefined2 uStack_8a;
  undefined6 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb568d & 1) == 0) {
    func_0x00f78a20(0x3d433b0);
    func_0x00f78a20(0x3d433c0);
    func_0x00f78a20(0x3d433d8);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d2e038);
    func_0x00f78a20(0x3d2fad8);
    bRam0000000003eb568d = 1;
  }
  uStack_e4 = 0;
  uStack_e8 = 0;
  uVar6 = (ulong)*(uint *)(param_2 + 0x38);
  *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) + 1;
  uStack_da = 0;
  uStack_d8 = 0;
  uStack_e2._0_2_ = 0;
  uStack_e2._2_6_ = 0;
  uStack_ca = 0;
  uStack_c8 = 0;
  uStack_d2 = 0;
  uStack_d0 = 0;
  uStack_ba = 0;
  uStack_b8 = 0;
  uStack_c2 = 0;
  uStack_c0 = 0;
  uStack_aa = 0;
  uStack_a8 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_9a = 0;
  uStack_98 = 0;
  uStack_a2 = 0;
  uStack_a0 = 0;
  uStack_8a = 0;
  uStack_88 = 0;
  uStack_92 = 0;
  uStack_90 = 0;
  uVar2 = *(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132);
  if (param_5 == 0) {
    if (param_6 == 0) {
      puVar7 = &uStack_e2;
      if (((uVar2 >> 10 & 1) != 0) && (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.AddressableAssets.Addressables$$LoadAssetAsync<StatAchievementConfig>*/ func_0x0171f06c(&uStack_1d0,param_3,uRam0000000003d433b0);
      uStack_190 = uStack_1d0;
      uStack_188 = uStack_1c8;
      uStack_180 = uStack_1c0;
      uStack_178 = uStack_1b8;
    }
    else {
      puVar7 = (undefined8 *)&uStack_c2;
      if (((uVar2 >> 10 & 1) != 0) && (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.AddressableAssets.Addressables$$LoadAssetAsync<StatAchievementConfig>*/ func_0x0171f06c(&uStack_1b0,param_3,uRam0000000003d433c0);
      uStack_190 = uStack_1b0;
      uStack_188 = uStack_1a8;
      uStack_180 = uStack_1a0;
      uStack_178 = uStack_198;
    }
  }
  else {
    puVar7 = (undefined8 *)&uStack_a2;
    if (((uVar2 >> 10 & 1) != 0) && (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.AddressableAssets.Addressables$$LoadAssetsAsync<Object>*/ func_0x0171f52c(&uStack_190,param_3,0,uRam0000000003d433d8);
  }
  puVar7[1] = uStack_188;
  *puVar7 = uStack_190;
  puVar7[3] = uStack_178;
  puVar7[2] = uStack_180;
  if (*(long *)(param_2 + 0x20) != 0) {
    /*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$set_Item*/ func_0x01ebf268(*(long *)(param_2 + 0x20),param_3,uVar6,uRam0000000003d2fad8);
    uVar3 = _UNK_033f8410;
    if (*(long *)(param_2 + 0x18) != 0) {
      uStack_11e = CONCAT26(uStack_aa,uStack_b0);
      uStack_126 = CONCAT26(uStack_b2,uStack_b8);
      uStack_10e = CONCAT26(uStack_9a,uStack_a0);
      uStack_116 = CONCAT26(uStack_a2,uStack_a8);
      uStack_106 = CONCAT26(uStack_92,uStack_98);
      uStack_fe = uStack_90;
      uStack_f8 = uStack_8a;
      uStack_f6 = uStack_88;
      uStack_14e = CONCAT26(uStack_da,uStack_e2._2_6_);
      uStack_156 = CONCAT26((undefined2)uStack_e2,CONCAT24(uStack_e4,uStack_e8));
      uStack_13e = CONCAT26(uStack_ca,uStack_d0);
      uStack_146 = CONCAT26(uStack_d2,uStack_d8);
      uStack_12e = CONCAT26(uStack_ba,uStack_c0);
      uStack_136 = CONCAT26(uStack_c2,uStack_c8);
      uStack_f0 = _UNK_033f8410;
      uStack_170 = uVar6;
      uStack_168 = param_3;
      uStack_160 = param_4;
      uStack_158 = (char)param_5;
      uStack_157 = (char)param_6;
      uVar4 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$set_Item*/ func_0x01e2fae4(*(long *)(param_2 + 0x18),uVar6,&uStack_170,uRam0000000003d2e038);
      *param_1 = uVar6;
      param_1[1] = param_3;
      param_1[2] = param_4;
      *(char *)(param_1 + 3) = (char)param_5;
      *(char *)((long)param_1 + 0x19) = (char)param_6;
      *(ulong *)((long)param_1 + 0x52) = CONCAT26(uStack_aa,uStack_b0);
      *(ulong *)((long)param_1 + 0x4a) = CONCAT26(uStack_b2,uStack_b8);
      *(ulong *)((long)param_1 + 0x62) = CONCAT26(uStack_9a,uStack_a0);
      *(ulong *)((long)param_1 + 0x5a) = CONCAT26(uStack_a2,uStack_a8);
      *(ulong *)((long)param_1 + 0x72) = CONCAT26(uStack_8a,uStack_90);
      *(ulong *)((long)param_1 + 0x6a) = CONCAT26(uStack_92,uStack_98);
      param_1[0xf] = CONCAT62(uStack_88,uStack_8a);
      *(ulong *)((long)param_1 + 0x22) = CONCAT26(uStack_da,uStack_e2._2_6_);
      *(ulong *)((long)param_1 + 0x1a) =
           CONCAT26((undefined2)uStack_e2,CONCAT24(uStack_e4,uStack_e8));
      *(ulong *)((long)param_1 + 0x32) = CONCAT26(uStack_ca,uStack_d0);
      *(ulong *)((long)param_1 + 0x2a) = CONCAT26(uStack_d2,uStack_d8);
      *(ulong *)((long)param_1 + 0x42) = CONCAT26(uStack_ba,uStack_c0);
      *(ulong *)((long)param_1 + 0x3a) = CONCAT26(uStack_c2,uStack_c8);
      param_1[0x10] = uVar3;
      if (*(long *)PTR_03a5d648 == lStack_80) {
        return uVar4;
      }
      goto code_r0x0163638c;
    }
  }
  func_0x00f78af4();
code_r0x0163638c:
  lVar5 = ___stack_chk_fail();
  uVar1 = *(uint *)(lVar5 + 0x38);
  *(uint *)(lVar5 + 0x38) = uVar1 + 1;
  return (ulong)uVar1;
}



// ============================================================
// RVA: 0x1636390 | Core.Assets.AssetManager.GetNextHandle
// ============================================================

int Core_Assets_AssetManager__GetNextHandle(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar1 + 1;
  return iVar1;
}



// ============================================================
// RVA: 0x16363a4 | Core.Assets.AssetManager.Release
// ============================================================

/* WARNING: Possible PIC construction at 0x01635710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01635714) */
/* WARNING: Removing unreachable block (ram,0x01635718) */
/* WARNING: Removing unreachable block (ram,0x0163577c) */
/* WARNING: Removing unreachable block (ram,0x01635750) */
/* WARNING: Removing unreachable block (ram,0x01ed77c0) */
/* WARNING: Removing unreachable block (ram,0x01ed77e8) */
/* WARNING: Removing unreachable block (ram,0x01ed7810) */
/* WARNING: Removing unreachable block (ram,0x01ed7828) */
/* WARNING: Removing unreachable block (ram,0x01ed784c) */
/* WARNING: Removing unreachable block (ram,0x01ed786c) */
/* WARNING: Removing unreachable block (ram,0x01ed7878) */
/* WARNING: Removing unreachable block (ram,0x01ed78b8) */
/* WARNING: Removing unreachable block (ram,0x01ed78bc) */
/* WARNING: Removing unreachable block (ram,0x01ed78e0) */
/* WARNING: Removing unreachable block (ram,0x01ed797c) */
/* WARNING: Removing unreachable block (ram,0x01ed7908) */
/* WARNING: Removing unreachable block (ram,0x01ed7928) */
/* WARNING: Removing unreachable block (ram,0x01ed7934) */
/* WARNING: Removing unreachable block (ram,0x01ed7994) */
/* WARNING: Removing unreachable block (ram,0x01ed7998) */
/* WARNING: Removing unreachable block (ram,0x01ed79bc) */
/* WARNING: Removing unreachable block (ram,0x01ed79c8) */
/* WARNING: Removing unreachable block (ram,0x01ed79d4) */
/* WARNING: Removing unreachable block (ram,0x01ed79e4) */
/* WARNING: Removing unreachable block (ram,0x01ed79ec) */
/* WARNING: Removing unreachable block (ram,0x01ed7a34) */
/* WARNING: Removing unreachable block (ram,0x01ed7a40) */
/* WARNING: Removing unreachable block (ram,0x01ed7a74) */
/* WARNING: Removing unreachable block (ram,0x01ed7b20) */
/* WARNING: Removing unreachable block (ram,0x01ed7b2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b34) */
/* WARNING: Removing unreachable block (ram,0x01ed7b3c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b40) */
/* WARNING: Removing unreachable block (ram,0x01ed7b48) */
/* WARNING: Removing unreachable block (ram,0x01ed7b50) */
/* WARNING: Removing unreachable block (ram,0x01ed7a94) */
/* WARNING: Removing unreachable block (ram,0x01ed7ab8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ac4) */
/* WARNING: Removing unreachable block (ram,0x01ed7acc) */
/* WARNING: Removing unreachable block (ram,0x01ed7ad8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae4) */
/* WARNING: Removing unreachable block (ram,0x01ed7b80) */
/* WARNING: Removing unreachable block (ram,0x01ed7b84) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb0) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bc8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bd0) */
/* WARNING: Removing unreachable block (ram,0x01ed7d50) */
/* WARNING: Removing unreachable block (ram,0x01ed7bfc) */
/* WARNING: Removing unreachable block (ram,0x01ed7c08) */
/* WARNING: Removing unreachable block (ram,0x01ed7c10) */
/* WARNING: Removing unreachable block (ram,0x01ed7c18) */
/* WARNING: Removing unreachable block (ram,0x01ed7c24) */
/* WARNING: Removing unreachable block (ram,0x01ed7c2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7c90) */
/* WARNING: Removing unreachable block (ram,0x01ed7c9c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d18) */
/* WARNING: Removing unreachable block (ram,0x01ed7d1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d80) */
/* WARNING: Removing unreachable block (ram,0x01ed7c54) */
/* WARNING: Removing unreachable block (ram,0x01ed7c64) */
/* WARNING: Removing unreachable block (ram,0x01ed7c74) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae8) */
/* WARNING: Removing unreachable block (ram,0x01ed7b68) */
/* WARNING: Removing unreachable block (ram,0x01ed7b08) */
/* WARNING: Removing unreachable block (ram,0x01ed7b0c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b60) */
/* WARNING: Removing unreachable block (ram,0x01ed7b6c) */
/* WARNING: Removing unreachable block (ram,0x01ed7a50) */
/* WARNING: Removing unreachable block (ram,0x01ed79f0) */
/* WARNING: Removing unreachable block (ram,0x01ed7a00) */
/* WARNING: Removing unreachable block (ram,0x01ed7a28) */
/* WARNING: Removing unreachable block (ram,0x01ed7938) */
/* WARNING: Removing unreachable block (ram,0x01ed7958) */
/* WARNING: Removing unreachable block (ram,0x01ed7980) */
/* WARNING: Removing unreachable block (ram,0x01ed787c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a4) */
/* WARNING: Removing unreachable block (ram,0x01ed789c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a8) */
/* WARNING: Removing unreachable block (ram,0x01ed77f8) */
/* WARNING: Removing unreachable block (ram,0x01ed77cc) */

ulong Core_Assets_AssetManager__Release(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  int extraout_w1;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 auVar10 [16];
  long lStack_108;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
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
  undefined4 uStack_78;
  undefined3 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb567f & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    func_0x00f78a20(0x3d2e030);
    func_0x00f78a20(0x3d2dfc8);
    func_0x00f78a20(0x3d3cce0);
    func_0x00f78a20(0x3d3cce8);
    func_0x00f78a20(0x3d3ccf0);
    bRam0000000003eb567f = 1;
  }
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
LAB_016364d0:
    func_0x00f78af4();
  }
  else {
    iVar3 = *(int *)(lVar9 + 0x18);
    if (0 < iVar3) {
      uVar7 = 0;
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar9 = *(long *)(lVar9 + 0x10) + (long)(int)uVar7 * 0x20;
        uVar1 = *(uint *)(lVar9 + 0x20);
        uStack_68 = *(undefined8 *)(lVar9 + 0x2c);
        uStack_70 = *(undefined8 *)(lVar9 + 0x24);
        uStack_60 = CONCAT44(uStack_60._4_4_,*(undefined4 *)(lVar9 + 0x34));
        uStack_78._0_3_ = (undefined3)*(undefined4 *)(lVar9 + 0x39);
        uStack_78._3_1_ = (undefined1)*(undefined4 *)(lVar9 + 0x3c);
        uStack_74 = (undefined3)((uint)*(undefined4 *)(lVar9 + 0x3c) >> 8);
        if (((*(byte *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (uVar1 == param_2) {
          if (*(long *)(param_1 + 0x10) != 0) {
            uStack_f4 = (undefined4)uStack_68;
            uStack_f0 = (undefined4)((ulong)uStack_68 >> 0x20);
            uStack_fc = (undefined4)uStack_70;
            uStack_f8 = (undefined4)((ulong)uStack_70 >> 0x20);
            uStack_ec = (undefined4)uStack_60;
            uStack_e8._0_5_ = CONCAT41(uStack_78,1);
            uStack_e8 = CONCAT44(CONCAT31(uStack_74,uStack_78._3_1_),(undefined4)uStack_e8);
            uStack_100 = param_2;
            /*System.Collections.Generic.List<AssetManager.AssetRequest>$$set_Item*/ func_0x024afabc(*(long *)(param_1 + 0x10),uVar7,&uStack_100,uRam0000000003d3ccf0);
            if (*(long *)(param_1 + 0x28) != 0) {
              lVar9 = *(long *)(param_1 + 0x18);
              uVar2 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$get_Item*/ func_0x01e2ca80(*(long *)(param_1 + 0x28),param_2,uRam0000000003d2dfc8);
              param_1 = 0;
              if (lVar9 != 0) {
                uVar6 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(&uStack_100,lVar9,uVar2,uRam0000000003d2e030);
                if (*(long *)PTR_03a5d648 == lStack_58) {
                  return uVar6;
                }
                goto LAB_016365d0;
              }
            }
          }
          break;
        }
        if (iVar3 - 1U == uVar7) goto LAB_016364d4;
        lVar9 = *(long *)(param_1 + 0x10);
        uVar7 = uVar7 + 1;
      } while (lVar9 != 0);
      goto LAB_016364d0;
    }
  }
LAB_016364d4:
  if (*(long *)PTR_03a5d648 != lStack_58) {
LAB_016365d0:
    iVar3 = ___stack_chk_fail();
    return (ulong)(iVar3 == extraout_w1);
  }
  uVar6 = (ulong)param_2;
  if ((bRam0000000003eb568e & 1) == 0) {
    func_0x00f78a20(0x3d2dfa0);
    func_0x00f78a20(0x3d2dfb8);
    bRam0000000003eb568e = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar4 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$TryGetValue*/ func_0x01e2e668(*(long *)(param_1 + 0x28),uVar6,&stack0xffffffffffffffc8,
                            uRam0000000003d2dfb8);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$Remove*/ func_0x01e2e39c(*(long *)(param_1 + 0x28),uVar6,uRam0000000003d2dfa0);
      uVar6 = /*Core.Assets.AssetManager$$RemoveAssetReference*/ func_0x016373f0(param_1,0);
      return uVar6;
    }
  }
  auVar10 = func_0x00f78af4();
  lVar9 = auVar10._0_8_;
  uStack_68 = 0x3eb5000;
  uStack_60 = uVar6;
  lStack_58 = param_1;
  if ((bRam0000000003eb5690 & 1) == 0) {
    func_0x00f78a20(0x3d433e8);
    func_0x00f78a20(0x3d43408);
    func_0x00f78a20(0x3d43420);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d2c050);
    func_0x00f78a20(0x3d2be18);
    func_0x00f78a20(0x3d2bfa0);
    func_0x00f78a20(0x3d2fac8);
    func_0x00f78a20(0x3d2e008);
    func_0x00f78a20(0x3d2fec0);
    func_0x00f78a20(0x3d2e020);
    func_0x00f78a20(0x3d35c80);
    bRam0000000003eb5690 = 1;
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
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  lStack_108 = 0;
  if (*(long *)(lVar9 + 0x18) == 0) goto LAB_01635688;
  uVar4 = auVar10._8_8_ & 0xffffffff;
  uVar6 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(*(long *)(lVar9 + 0x18),uVar4,&uStack_100,uRam0000000003d2e020);
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  if (*(long *)(lVar9 + 0x30) == 0) goto LAB_01635688;
  uVar6 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar9 + 0x30),CONCAT44(uStack_ec,uStack_f0),&lStack_108,
                          uRam0000000003d2fec0);
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  if ((char)uStack_e8 == '\0') {
    if (uStack_e8._1_1_ == '\0') {
      uVar5 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_e0,uRam0000000003d2bfa0);
      if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
        iVar3 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
        puVar8 = (undefined8 *)0x3d43408;
        goto joined_r0x01635680;
      }
      puVar8 = (undefined8 *)0x3d43408;
    }
    else {
      uVar5 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_c0,uRam0000000003d2c050);
      if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) == 0) {
        puVar8 = (undefined8 *)0x3d43420;
      }
      else {
        iVar3 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
        puVar8 = (undefined8 *)0x3d43420;
joined_r0x01635680:
        if (iVar3 == 0) {
          func_0x00f78ad0();
        }
      }
    }
  }
  else {
    uVar5 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_a0,uRam0000000003d2be18);
    if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
      iVar3 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
      puVar8 = (undefined8 *)0x3d433e8;
      goto joined_r0x01635680;
    }
    puVar8 = (undefined8 *)0x3d433e8;
  }
  /*UnityEngine.AddressableAssets.Addressables$$Release<Sprite>*/ func_0x0171fc38(uVar5,*puVar8);
  if (*(long *)(lVar9 + 0x18) != 0) {
    /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$Remove*/ func_0x01e3174c(*(long *)(lVar9 + 0x18),uVar4,uRam0000000003d2e008);
    if (((*(long *)(lVar9 + 0x20) != 0) &&
        (/*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$Remove*/ func_0x01ec0ba4(*(long *)(lVar9 + 0x20),CONCAT44(uStack_f4,uStack_f8),uRam0000000003d2fac8)
        , lStack_108 != 0)) && (*(long *)(lStack_108 + 0x20) != 0)) {
      uVar6 = /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Remove*/ func_0x021cefec(*(long *)(lStack_108 + 0x20),uVar4,uRam0000000003d35c80);
      return uVar6;
    }
  }
LAB_01635688:
  func_0x00f78af4();
  if ((bRam0000000003eb567a & 1) == 0) {
    func_0x00f78a20(0x3d26978);
    func_0x00f78a20(0x3d2feb0);
    func_0x00f78a20(0x3d35c68);
    func_0x00f78a20(0x3d1cdf8);
    bRam0000000003eb567a = 1;
  }
  uVar6 = func_0x00f78aec(/*Core.Assets.AssetManager.BucketInstance_TypeInfo*/ uRam0000000003d26978);
  return uVar6;
}



// ============================================================
// RVA: 0x16365e0 | Core.Assets.AssetManager.Release
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x16366f0 | Core.Assets.AssetManager.PurgeUnreferencedAssets
// ============================================================

uint Core_Assets_AssetManager__PurgeUnreferencedAssets(long param_1,long param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  int extraout_w1;
  int extraout_w1_00;
  uint uVar6;
  long lVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined4 uStack_128;
  int iStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  long lStack_58;
  
  if ((bRam0000000003eb5681 & 1) == 0) {
    func_0x00f78a20(0x3d2fec0);
    func_0x00f78a20(0x3d2e020);
    func_0x00f78a20(0x3d32190);
    func_0x00f78a20(0x3d32168);
    func_0x00f78a20(0x3d32198);
    func_0x00f78a20(0x3d32180);
    func_0x00f78a20(0x3d321a0);
    func_0x00f78a20(0x3d32188);
    func_0x00f78a20(0x3d35c78);
    func_0x00f78a20(0x3d35c88);
    func_0x00f78a20(0x3d39d50);
    func_0x00f78a20(0x3d39d60);
    func_0x00f78a20(0x3d39d48);
    func_0x00f78a20(0x3d1d7d0);
    bRam0000000003eb5681 = 1;
  }
  lStack_58 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  iStack_120 = 0;
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_016369bc;
  iVar3 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(param_1 + 0x30),param_2,&lStack_58,uRam0000000003d2fec0);
  if (iVar3 == 0) {
    return 0;
  }
  if (lStack_58 == 0) goto LAB_016369bc;
  if (*(long *)(lStack_58 + 0x20) == 0) goto LAB_016369bc;
  uVar1 = *(undefined4 *)(*(long *)(lStack_58 + 0x20) + 0x20);
  param_2 = func_0x00f78aec(/*System.Collections.Generic.List<AssetManagerHandle>_TypeInfo*/ uRam0000000003d1d7d0);
  /*System.Collections.Generic.List<AssetManagerHandle>$$.ctor*/ func_0x0236ed70(param_2,uVar1,uRam0000000003d39d48);
  if (lStack_58 == 0) goto LAB_016369bc;
  if (*(long *)(lStack_58 + 0x20) == 0) goto LAB_016369bc;
  /*System.Collections.Generic.HashSet<AssetManagerHandle>$$GetEnumerator*/ func_0x021cf268(&uStack_140,*(long *)(lStack_58 + 0x20),uRam0000000003d35c78);
  uStack_68 = uStack_138;
  uStack_70 = uStack_140;
  uStack_60 = uStack_130;
  while (uVar4 = /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$MoveNext*/ func_0x01f636e0(&uStack_70,uRam0000000003d32180), (uVar4 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x00f78af4();
      goto code_r0x016369b8;
    }
    uVar4 = uStack_60 & 0xffffffff;
    iVar3 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(*(long *)(param_1 + 0x18),uVar4,&uStack_100,uRam0000000003d2e020);
    if (iVar3 != 0 && (int)uStack_80 < 1) {
      if (param_2 == 0) {
        func_0x00f78af4();
code_r0x016369b8:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x16369bc);
        (*pcVar2)();
      }
      /*System.Collections.Generic.List<AssetManagerHandle>$$Add*/ func_0x0236f95c(param_2,uVar4,uRam0000000003d39d50);
    }
  }
  /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f636dc(&uStack_70,uRam0000000003d32168);
  iStack_120 = 0;
  do {
    if (param_2 != 0) {
      /*System.Collections.Generic.List<AssetManagerHandle>$$GetEnumerator*/ func_0x0237041c(&uStack_118,param_2,uRam0000000003d39d60);
      uVar6 = 0;
      while (uVar4 = /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$MoveNext*/ func_0x01f639a0(&uStack_118,uRam0000000003d32198), (uVar4 & 1) != 0) {
        Core_Assets_AssetManager__ReleaseAsset(param_1,uStack_108 & 0xffffffff);
        uVar6 = uVar6 + 1;
      }
      iStack_120 = iStack_120 + 1;
      uStack_128 = 0xb0;
      /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f6399c(&uStack_118,uRam0000000003d32190);
      return uVar6;
    }
LAB_016369bc:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01636a40;
    plVar5 = (long *)___cxa_begin_catch();
    lVar7 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f636dc(&uStack_70,uRam0000000003d32168);
  } while (lVar7 == 0);
  func_0x00f78ac0(lVar7,0);
code_r0x01636a40:
  iVar3 = __Unwind_Resume();
  return (uint)(iVar3 != extraout_w1_00);
}



// ============================================================
// RVA: 0x1636a50 | Core.Assets.AssetManager.TryGetLoadedAsset
// ============================================================

/* WARNING: Possible PIC construction at 0x01636d24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01636d28) */
/* WARNING: Removing unreachable block (ram,0x01636d30) */

undefined8
Core_Assets_AssetManager__TryGetLoadedAsset(long param_1,ulong param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 auStack_38 [2];
  
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = param_1;
  puVar7 = param_3;
  if ((bRam0000000003eb5683 & 1) == 0) {
    func_0x00f78a20(0x3d2c040);
    func_0x00f78a20(0x3d2bf90);
    func_0x00f78a20(0x3d2c050);
    func_0x00f78a20(0x3d2bfa0);
    func_0x00f78a20(0x3d2dfb8);
    func_0x00f78a20(0x3d2e020);
    bRam0000000003eb5683 = 1;
  }
  auStack_38[0] = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (*(long *)(param_1 + 0x28) == 0) {
LAB_01636bd0:
    puVar11 = &Core_Assets_AssetManager__TryGetLoadedMultipleAssets;
    auVar12 = func_0x00f78af4();
    puVar2 = &uStack_c0;
    do {
      auVar1 = auVar12;
      puVar8 = puVar7;
      puVar10 = (undefined1 *)((long)register0x00000008 + -0x10);
      register0x00000008 = (BADSPACEBASE *)((long)puVar2 + -0xc0);
      *(undefined8 *)((long)puVar2 + -0x30) = 0x3eb5000;
      *(long *)((long)puVar2 + -0x28) = auVar13._8_8_;
      *(long *)((long)puVar2 + -0x20) = auVar13._0_8_;
      *(undefined8 **)((long)puVar2 + -0x18) = param_3;
      *(undefined1 **)((long)puVar2 + -0x10) = puVar10;
      *(undefined **)((long)puVar2 + -8) = puVar11;
      if ((bRam0000000003eb5684 & 1) == 0) {
        func_0x00f78a20(0x3d2bf90);
        func_0x00f78a20(0x3d2be18);
        func_0x00f78a20(0x3d2dfb8);
        func_0x00f78a20(0x3d2e020);
        bRam0000000003eb5684 = 1;
      }
      *(undefined4 *)((long)puVar2 + -0x38) = 0;
      *(undefined8 *)((long)puVar2 + -0x40) = 0;
      *(undefined8 *)((long)puVar2 + -0x58) = 0;
      *(undefined8 *)((long)puVar2 + -0x60) = 0;
      *(undefined8 *)((long)puVar2 + -0x48) = 0;
      *(undefined8 *)((long)puVar2 + -0x50) = 0;
      *(undefined8 *)((long)puVar2 + -0x78) = 0;
      *(undefined8 *)((long)puVar2 + -0x80) = 0;
      *(undefined8 *)((long)puVar2 + -0x68) = 0;
      *(undefined8 *)((long)puVar2 + -0x70) = 0;
      *(undefined8 *)((long)puVar2 + -0x98) = 0;
      *(undefined8 *)((long)puVar2 + -0xa0) = 0;
      *(undefined8 *)((long)puVar2 + -0x88) = 0;
      *(undefined8 *)((long)puVar2 + -0x90) = 0;
      *(undefined8 *)((long)puVar2 + -0xb8) = 0;
      *(undefined8 *)((long)puVar2 + -0xc0) = 0;
      *(undefined8 *)((long)puVar2 + -0xa8) = 0;
      *(undefined8 *)((long)puVar2 + -0xb0) = 0;
      lVar6 = *(long *)(auVar1._0_8_ + 0x28);
      if (lVar6 != 0) {
        iVar3 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$TryGetValue*/ func_0x01e2e668(lVar6,auVar1._8_8_ & 0xffffffff,(undefined1 *)((long)puVar2 + -0x38)
                                ,uRam0000000003d2dfb8);
        if (iVar3 == 0) goto code_r0x01636ce4;
        lVar6 = *(long *)(auVar1._0_8_ + 0x18);
        if (lVar6 != 0) {
          iVar3 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(lVar6,*(undefined4 *)((long)puVar2 + -0x38),
                                  (undefined1 *)((long)puVar2 + -0xc0),uRam0000000003d2e020);
          if ((iVar3 == 0 || *(char *)((long)puVar2 + -0xa8) == '\0') ||
             (iVar3 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<Sprite>$$get_IsDone*/ func_0x01b57080((undefined1 *)((long)puVar2 + -0xa0),uRam0000000003d2bf90),
             iVar3 == 0)) {
code_r0x01636ce4:
            uVar5 = 0;
            uVar9 = 0;
          }
          else {
            uVar5 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0((undefined1 *)((long)puVar2 + -0x60),uRam0000000003d2be18);
            uVar9 = 1;
          }
          *puVar8 = uVar5;
          return uVar9;
        }
      }
      auVar13 = func_0x00f78af4();
      *(undefined1 **)((long)puVar2 + -0xd0) = (undefined1 *)((long)puVar2 + -0x10);
      *(undefined **)((long)puVar2 + -200) = &Core_Assets_AssetManager__GetLoadedMultipleAssets;
      *(undefined8 *)((long)puVar2 + -0xd8) = 0;
      auVar12._8_8_ = auVar13._8_8_ & 0xffffffff;
      auVar12._0_8_ = auVar13._0_8_;
      puVar7 = (undefined8 *)((long)puVar2 + -0xd8);
      puVar11 = &UNK_01636d28;
      puVar2 = (undefined8 *)((long)puVar2 + -0xe0);
      param_3 = puVar8;
      auVar13 = auVar1;
    } while( true );
  }
  puVar7 = (undefined8 *)auStack_38;
  iVar3 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$TryGetValue*/ func_0x01e2e668(*(long *)(param_1 + 0x28),param_2 & 0xffffffff,puVar7,uRam0000000003d2dfb8
                         );
  if (iVar3 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_01636bd0;
    iVar3 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(*(long *)(param_1 + 0x18),auStack_38[0],&uStack_c0,uRam0000000003d2e020)
    ;
    if (iVar3 != 0 && (char)uStack_a8 == '\0') {
      if (uStack_a8._1_1_ == '\0') {
        puVar7 = &uStack_a0;
        iVar3 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<Sprite>$$get_IsDone*/ func_0x01b57080(puVar7,uRam0000000003d2bf90);
        if (iVar3 != 0) {
          puVar2 = (undefined8 *)0x3d2bfa0;
          goto LAB_01636b98;
        }
      }
      else {
        puVar7 = &uStack_80;
        uVar4 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<Sprite>$$get_IsDone*/ func_0x01b57080(puVar7,uRam0000000003d2c040);
        if ((uVar4 & 1) != 0) {
          puVar2 = (undefined8 *)0x3d2c050;
LAB_01636b98:
          uVar5 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(puVar7,*puVar2);
          uVar9 = 1;
          goto code_r0x01636bb4;
        }
      }
    }
  }
  uVar5 = 0;
  uVar9 = 0;
code_r0x01636bb4:
  *param_3 = uVar5;
  return uVar9;
}



// ============================================================
// RVA: 0x1636bd4 | Core.Assets.AssetManager.TryGetLoadedMultipleAssets
// ============================================================

undefined8
Core_Assets_AssetManager__TryGetLoadedMultipleAssets
          (long param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 auStack_38 [2];
  
  if ((bRam0000000003eb5684 & 1) == 0) {
    func_0x00f78a20(0x3d2bf90);
    func_0x00f78a20(0x3d2be18);
    func_0x00f78a20(0x3d2dfb8);
    func_0x00f78a20(0x3d2e020);
    bRam0000000003eb5684 = 1;
  }
  auStack_38[0] = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (*(long *)(param_1 + 0x28) == 0) {
LAB_01636d08:
    auVar4 = func_0x00f78af4();
    puStack_c8 = &Core_Assets_AssetManager__GetLoadedMultipleAssets;
    uStack_d8 = 0;
    puStack_d0 = &stack0xfffffffffffffff0;
    iVar1 = Core_Assets_AssetManager__TryGetLoadedMultipleAssets
                      (auVar4._0_8_,auVar4._8_8_ & 0xffffffff,&uStack_d8);
    if (iVar1 == 0) {
      uStack_d8 = 0;
    }
    return uStack_d8;
  }
  iVar1 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$TryGetValue*/ func_0x01e2e668(*(long *)(param_1 + 0x28),param_2,auStack_38,uRam0000000003d2dfb8);
  if (iVar1 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_01636d08;
    iVar1 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(*(long *)(param_1 + 0x18),auStack_38[0],&uStack_c0,uRam0000000003d2e020)
    ;
    if ((iVar1 != 0 && (char)uStack_a8 != '\0') &&
       (iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<Sprite>$$get_IsDone*/ func_0x01b57080(&uStack_a0,uRam0000000003d2bf90), iVar1 != 0)) {
      uVar2 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_60,uRam0000000003d2be18);
      uVar3 = 1;
      goto LAB_01636cec;
    }
  }
  uVar2 = 0;
  uVar3 = 0;
LAB_01636cec:
  *param_3 = uVar2;
  return uVar3;
}



// ============================================================
// RVA: 0x1636d0c | Core.Assets.AssetManager.GetLoadedMultipleAssets
// ============================================================

undefined8 Core_Assets_AssetManager__GetLoadedMultipleAssets(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  iVar1 = Core_Assets_AssetManager__TryGetLoadedMultipleAssets(param_1,param_2,&uStack_18);
  if (iVar1 == 0) {
    uStack_18 = 0;
  }
  return uStack_18;
}



// ============================================================
// RVA: 0x1636d40 | Core.Assets.AssetManager.HasAssetFinishedLoading
// ============================================================

long Core_Assets_AssetManager__HasAssetFinishedLoading(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 auStack_38 [2];
  
  if ((bRam0000000003eb5685 & 1) == 0) {
    func_0x00f78a20(0x3d2dfb8);
    func_0x00f78a20(0x3d2e020);
    bRam0000000003eb5685 = 1;
  }
  auStack_38[0] = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$TryGetValue*/ func_0x01e2e668(*(long *)(param_1 + 0x28),param_2,auStack_38,uRam0000000003d2dfb8);
    if ((int)lVar1 != 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_01636e08;
      lVar1 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(*(long *)(param_1 + 0x18),auStack_38[0],&uStack_c0,
                              uRam0000000003d2e020);
      if ((int)lVar1 != 0) {
        lVar1 = /*Core.Assets.AssetManager.Asset$$IsAddressableDone*/ func_0x01634a2c(&uStack_c0);
      }
    }
    return lVar1;
  }
LAB_01636e08:
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003eb5686 & 1) == 0) {
    func_0x00f78a20(0x3d26940);
    bRam0000000003eb5686 = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.Assets.AssetManager.<WaitForAllAssetsToLoad>d__40_TypeInfo*/ uRam0000000003d26940);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  return lVar1;
}



// ============================================================
// RVA: 0x1636e0c | Core.Assets.AssetManager.WaitForAllAssetsToLoad
// ============================================================

long Core_Assets_AssetManager__WaitForAllAssetsToLoad(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb5686 & 1) == 0) {
    func_0x00f78a20(0x3d26940);
    bRam0000000003eb5686 = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.Assets.AssetManager.<WaitForAllAssetsToLoad>d__40_TypeInfo*/ uRam0000000003d26940);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  return lVar1;
}



// ============================================================
// RVA: 0x1636ea4 | Core.Assets.AssetManager.WaitForAllAssetsToLoad
// ============================================================

long Core_Assets_AssetManager__WaitForAllAssetsToLoad(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((bRam0000000003eb5687 & 1) == 0) {
    func_0x00f78a20(0x3d26948);
    bRam0000000003eb5687 = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.Assets.AssetManager.<WaitForAllAssetsToLoad>d__41_TypeInfo*/ uRam0000000003d26948);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  return lVar1;
}



// ============================================================
// RVA: 0x1636f40 | Core.Assets.AssetManager.WaitForAsset
// ============================================================

long Core_Assets_AssetManager__WaitForAsset(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  
  if ((bRam0000000003eb5688 & 1) == 0) {
    func_0x00f78a20(0x3d26950);
    bRam0000000003eb5688 = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.Assets.AssetManager.<WaitForAsset>d__42_TypeInfo*/ uRam0000000003d26950);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined4 *)(lVar1 + 0x28) = param_2;
  return lVar1;
}



// ============================================================
// RVA: 0x1636fe0 | Core.Assets.AssetManager.CancelAllLoadingAssets
// ============================================================

int Core_Assets_AssetManager__CancelAllLoadingAssets(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *unaff_x24;
  undefined3 uStack_a4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined4 uStack_67;
  undefined3 uStack_63;
  
  iVar2 = 0x3eb5000;
  if ((bRam0000000003eb5689 & 1) == 0) {
    func_0x00f78a20(0x3d3ccc8);
    func_0x00f78a20(0x3d3cce0);
    func_0x00f78a20(0x3d3cce8);
    func_0x00f78a20(0x3d3ccf0);
    bRam0000000003eb5689 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    lVar5 = 0;
    uVar3 = 0;
    iVar2 = 0;
    unaff_x24 = (undefined8 *)0x3d3ccc8;
    do {
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar3) goto LAB_0163711c;
      if (*(uint *)(lVar4 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar1 = *(long *)(lVar4 + 0x10) + lVar5;
      if (*(char *)(lVar1 + 0x38) == '\0') {
        if (*(long *)(param_1 + 0x10) == 0) break;
        iVar2 = iVar2 + 1;
        uStack_78 = *(undefined8 *)(lVar1 + 0x28);
        uStack_80 = *(undefined8 *)(lVar1 + 0x20);
        uStack_70 = *(undefined8 *)(lVar1 + 0x30);
        uStack_a4 = (undefined3)((uint)*(undefined4 *)(lVar1 + 0x3c) >> 8);
        uStack_67 = *(undefined4 *)(lVar1 + 0x39);
        uStack_68 = 1;
        uStack_63 = uStack_a4;
        /*System.Collections.Generic.List<AssetManager.AssetRequest>$$set_Item*/ func_0x024afabc(*(long *)(param_1 + 0x10),uVar3,&uStack_80,uRam0000000003d3ccf0);
      }
      uVar3 = uVar3 + 1;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar5 = lVar5 + 0x20;
    } while (lVar4 != 0);
  }
  func_0x00f78af4();
LAB_0163711c:
  /*System.Collections.Generic.List<AssetManager.AssetRequest>$$Clear*/ func_0x024b0144(lVar4,*unaff_x24);
  return iVar2;
}



// ============================================================
// RVA: 0x163714c | Core.Assets.AssetManager.WaitForAssets
// ============================================================

long Core_Assets_AssetManager__WaitForAssets(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((bRam0000000003eb568a & 1) == 0) {
    func_0x00f78a20(0x3d26958);
    bRam0000000003eb568a = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.Assets.AssetManager.<WaitForAssets>d__44_TypeInfo*/ uRam0000000003d26958);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  return lVar1;
}



// ============================================================
// RVA: 0x16371e8 | Core.Assets.AssetManager.AreAssetsLoading
// ============================================================

ulong Core_Assets_AssetManager__AreAssetsLoading(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  int extraout_w1;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 **ppuStack_150;
  undefined *puStack_148;
  undefined1 auStack_138 [16];
  long lStack_128;
  int iStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb568b & 1) == 0) {
    func_0x00f78a20(0x3d3cce0);
    bRam0000000003eb568b = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    return (ulong)(0 < *(int *)(*(long *)(param_1 + 0x10) + 0x18));
  }
  auVar10 = func_0x00f78af4();
  lVar9 = auVar10._8_8_;
  lVar3 = auVar10._0_8_;
  puStack_28 = &Core_Assets_AssetManager__AreAssetsLoading;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb568c & 1) == 0) {
    func_0x00f78a20(0x3d2e030);
    func_0x00f78a20(0x3d332a0);
    func_0x00f78a20(0x3d332a8);
    func_0x00f78a20(0x3d332b0);
    func_0x00f78a20(0x3d3ccd0);
    bRam0000000003eb568c = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  if (*(long *)(lVar3 + 0x10) != 0) {
    /*System.Collections.Generic.List<AssetManager.AssetRequest>$$GetEnumerator*/ func_0x024b0998(&uStack_a0,*(long *)(lVar3 + 0x10),uRam0000000003d3ccd0);
    do {
      uVar4 = /*System.Collections.Generic.List.Enumerator<AssetManager.AssetRequest>$$MoveNext*/ func_0x01f78e50(&uStack_a0,uRam0000000003d332a8);
      if ((uVar4 & 1) == 0) {
        iStack_b0 = 0x52;
        goto code_r0x0163734c;
      }
      if (*(long *)(lVar3 + 0x18) == 0) {
        func_0x00f78af4();
code_r0x0163739c:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x16373a0);
        (*pcVar2)();
      }
      /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(auStack_138,*(long *)(lVar3 + 0x18),uStack_90._4_4_,uRam0000000003d2e030);
      if (lStack_128 == 0) {
        func_0x00f78af4();
        goto code_r0x0163739c;
      }
      uVar5 = /*System.String$$Equals*/ func_0x029caa48(lStack_128,lVar9,4,0);
    } while ((uVar5 & 1) == 0);
    iStack_b0 = 0x54;
code_r0x0163734c:
    /*System.Collections.Generic.List.Enumerator<AssetManager.AssetRequest>$$Dispose*/ func_0x01f78e4c(&uStack_a0,uRam0000000003d332a0);
    if (iStack_b0 != 0x54) {
      uVar4 = 0;
    }
    return uVar4;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    lVar9 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<AssetManager.AssetRequest>$$Dispose*/ func_0x01f78e4c(&uStack_a0,uRam0000000003eb5000);
    if (lVar9 == 0) {
      return 0;
    }
  }
  else {
    __Unwind_Resume();
  }
  auVar10 = func_0x00f78ac0(lVar9,0);
  lVar7 = auVar10._0_8_;
  uStack_170 = 0x3eb5000;
  puStack_148 = &Core_Assets_AssetManager__RemoveAssetReference;
  puStack_168 = &uStack_a0;
  lStack_160 = lVar3;
  lStack_158 = lVar9;
  ppuStack_150 = &puStack_30;
  if ((bRam0000000003eb568f & 1) == 0) {
    func_0x00f78a20(0x3d2fec0);
    func_0x00f78a20(0x3d2e020);
    func_0x00f78a20(0x3d2e038);
    bRam0000000003eb568f = 1;
  }
  uStack_210 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_288 = 0;
  lStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_298 = 0;
  if (*(long *)(lVar7 + 0x18) == 0) {
code_r0x01637544:
    auVar10 = func_0x00f78af4();
    lVar3 = auVar10._8_8_;
    if ((bRam0000000003eb5691 & 1) == 0) {
      func_0x00f78a20(0x3d51ba8);
      func_0x00f78a20(0x3d51ba0);
      func_0x00f78a20(0x3d51bb0);
      bRam0000000003eb5691 = 1;
    }
    if ((*(char *)(lVar3 + 0x18) == '\0') || ((char)param_3[3] == '\0')) {
      if ((*(char *)(lVar3 + 0x19) == '\0') || (*(char *)((long)param_3 + 0x19) == '\0')) {
        uStack_2f8 = *(undefined8 *)(lVar3 + 0x28);
        uStack_300 = *(undefined8 *)(lVar3 + 0x20);
        uStack_2e8 = *(undefined8 *)(lVar3 + 0x38);
        uStack_2f0 = *(undefined8 *)(lVar3 + 0x30);
        lStack_318 = param_3[5];
        lStack_320 = param_3[4];
        lStack_308 = param_3[7];
        lStack_310 = param_3[6];
        uVar8 = uRam0000000003d51ba0;
      }
      else {
        uStack_2f8 = *(undefined8 *)(lVar3 + 0x48);
        uStack_300 = *(undefined8 *)(lVar3 + 0x40);
        uStack_2e8 = *(undefined8 *)(lVar3 + 0x58);
        uStack_2f0 = *(undefined8 *)(lVar3 + 0x50);
        lStack_318 = param_3[9];
        lStack_320 = param_3[8];
        lStack_308 = param_3[0xb];
        lStack_310 = param_3[10];
        uVar8 = uRam0000000003d51bb0;
      }
      uVar4 = /*Core.Assets.AssetManager$$AreAddressableHandlesEqual<Sprite>*/ func_0x01818168(auVar10._0_8_,&uStack_300,&lStack_320,uVar8);
    }
    else {
      uStack_2f8 = *(undefined8 *)(lVar3 + 0x68);
      uStack_300 = *(undefined8 *)(lVar3 + 0x60);
      uStack_2e8 = *(undefined8 *)(lVar3 + 0x78);
      uStack_2f0 = *(undefined8 *)(lVar3 + 0x70);
      lStack_318 = param_3[0xd];
      lStack_320 = param_3[0xc];
      lStack_308 = param_3[0xf];
      lStack_310 = param_3[0xe];
      uVar4 = /*Core.Assets.AssetManager$$AreAddressableHandlesEqual<Object>*/ func_0x01818244(auVar10._0_8_,&uStack_300,&lStack_320,uRam0000000003d51ba8);
    }
    return uVar4;
  }
  uVar5 = auVar10._8_8_ & 0xffffffff;
  param_3 = &lStack_290;
  uVar4 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(*(long *)(lVar7 + 0x18),uVar5,param_3,uRam0000000003d2e020);
  if ((int)uVar4 != 0) {
    if (*(long *)(lVar7 + 0x30) == 0) goto code_r0x01637544;
    param_3 = &lStack_298;
    uVar4 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar7 + 0x30),uStack_280,param_3,uRam0000000003d2fec0);
    if ((int)uVar4 != 0) {
      iVar1 = (int)uStack_210 + -1;
      uStack_210 = CONCAT44(uStack_210._4_4_,iVar1);
      if (iVar1 == 0) {
        if (lStack_298 == 0) goto code_r0x01637544;
        if (*(int *)(lStack_298 + 0x18) == 0) {
          uVar4 = Core_Assets_AssetManager__ReleaseAsset(lVar7,uVar5);
          return uVar4;
        }
      }
      else if (iVar1 < 0) {
        return uVar4;
      }
      if (*(long *)(lVar7 + 0x18) == 0) goto code_r0x01637544;
      uStack_198 = uStack_228;
      uStack_1a0 = uStack_230;
      uStack_188 = uStack_218;
      uStack_190 = uStack_220;
      uStack_180 = uStack_210;
      uStack_1d8 = uStack_268;
      uStack_1e0 = uStack_270;
      uStack_1c8 = uStack_258;
      uStack_1d0 = uStack_260;
      uStack_1b8 = uStack_248;
      uStack_1c0 = uStack_250;
      uStack_1a8 = uStack_238;
      uStack_1b0 = uStack_240;
      uStack_1f8 = uStack_288;
      lStack_200 = lStack_290;
      uStack_1e8 = uStack_278;
      uStack_1f0 = uStack_280;
      uVar4 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$set_Item*/ func_0x01e2fae4(*(long *)(lVar7 + 0x18),uVar5,&lStack_200,uRam0000000003d2e038);
    }
  }
  return uVar4;
}



// ============================================================
// RVA: 0x163723c | Core.Assets.AssetManager.AreAssetsLoading
// ============================================================

ulong Core_Assets_AssetManager__AreAssetsLoading(long param_1,long param_2,long *param_3)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  int extraout_w1;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  undefined *puStack_128;
  undefined1 auStack_118 [16];
  long lStack_108;
  int iStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb568c & 1) == 0) {
    func_0x00f78a20(0x3d2e030);
    func_0x00f78a20(0x3d332a0);
    func_0x00f78a20(0x3d332a8);
    func_0x00f78a20(0x3d332b0);
    func_0x00f78a20(0x3d3ccd0);
    bRam0000000003eb568c = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    /*System.Collections.Generic.List<AssetManager.AssetRequest>$$GetEnumerator*/ func_0x024b0998(&uStack_80,*(long *)(param_1 + 0x10),uRam0000000003d3ccd0);
    do {
      uVar3 = /*System.Collections.Generic.List.Enumerator<AssetManager.AssetRequest>$$MoveNext*/ func_0x01f78e50(&uStack_80,uRam0000000003d332a8);
      if ((uVar3 & 1) == 0) {
        iStack_90 = 0x52;
        goto LAB_0163734c;
      }
      if (*(long *)(param_1 + 0x18) == 0) {
        func_0x00f78af4();
code_r0x0163739c:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x16373a0);
        (*pcVar2)();
      }
      /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(auStack_118,*(long *)(param_1 + 0x18),uStack_70._4_4_,uRam0000000003d2e030);
      if (lStack_108 == 0) {
        func_0x00f78af4();
        goto code_r0x0163739c;
      }
      uVar4 = /*System.String$$Equals*/ func_0x029caa48(lStack_108,param_2,4,0);
    } while ((uVar4 & 1) == 0);
    iStack_90 = 0x54;
LAB_0163734c:
    /*System.Collections.Generic.List.Enumerator<AssetManager.AssetRequest>$$Dispose*/ func_0x01f78e4c(&uStack_80,uRam0000000003d332a0);
    if (iStack_90 != 0x54) {
      uVar3 = 0;
    }
    return uVar3;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    param_2 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<AssetManager.AssetRequest>$$Dispose*/ func_0x01f78e4c(&uStack_80,uRam0000000003eb5000);
    if (param_2 == 0) {
      return 0;
    }
  }
  else {
    __Unwind_Resume();
  }
  auVar8 = func_0x00f78ac0(param_2,0);
  lVar6 = auVar8._0_8_;
  uStack_150 = 0x3eb5000;
  puStack_128 = &Core_Assets_AssetManager__RemoveAssetReference;
  puStack_148 = &uStack_80;
  lStack_140 = param_1;
  lStack_138 = param_2;
  puStack_130 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb568f & 1) == 0) {
    func_0x00f78a20(0x3d2fec0);
    func_0x00f78a20(0x3d2e020);
    func_0x00f78a20(0x3d2e038);
    bRam0000000003eb568f = 1;
  }
  uStack_1f0 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_268 = 0;
  lStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  lStack_278 = 0;
  if (*(long *)(lVar6 + 0x18) == 0) {
code_r0x01637544:
    auVar8 = func_0x00f78af4();
    lVar6 = auVar8._8_8_;
    if ((bRam0000000003eb5691 & 1) == 0) {
      func_0x00f78a20(0x3d51ba8);
      func_0x00f78a20(0x3d51ba0);
      func_0x00f78a20(0x3d51bb0);
      bRam0000000003eb5691 = 1;
    }
    if ((*(char *)(lVar6 + 0x18) == '\0') || ((char)param_3[3] == '\0')) {
      if ((*(char *)(lVar6 + 0x19) == '\0') || (*(char *)((long)param_3 + 0x19) == '\0')) {
        uStack_2d8 = *(undefined8 *)(lVar6 + 0x28);
        uStack_2e0 = *(undefined8 *)(lVar6 + 0x20);
        uStack_2c8 = *(undefined8 *)(lVar6 + 0x38);
        uStack_2d0 = *(undefined8 *)(lVar6 + 0x30);
        lStack_2f8 = param_3[5];
        lStack_300 = param_3[4];
        lStack_2e8 = param_3[7];
        lStack_2f0 = param_3[6];
        uVar7 = uRam0000000003d51ba0;
      }
      else {
        uStack_2d8 = *(undefined8 *)(lVar6 + 0x48);
        uStack_2e0 = *(undefined8 *)(lVar6 + 0x40);
        uStack_2c8 = *(undefined8 *)(lVar6 + 0x58);
        uStack_2d0 = *(undefined8 *)(lVar6 + 0x50);
        lStack_2f8 = param_3[9];
        lStack_300 = param_3[8];
        lStack_2e8 = param_3[0xb];
        lStack_2f0 = param_3[10];
        uVar7 = uRam0000000003d51bb0;
      }
      uVar3 = /*Core.Assets.AssetManager$$AreAddressableHandlesEqual<Sprite>*/ func_0x01818168(auVar8._0_8_,&uStack_2e0,&lStack_300,uVar7);
    }
    else {
      uStack_2d8 = *(undefined8 *)(lVar6 + 0x68);
      uStack_2e0 = *(undefined8 *)(lVar6 + 0x60);
      uStack_2c8 = *(undefined8 *)(lVar6 + 0x78);
      uStack_2d0 = *(undefined8 *)(lVar6 + 0x70);
      lStack_2f8 = param_3[0xd];
      lStack_300 = param_3[0xc];
      lStack_2e8 = param_3[0xf];
      lStack_2f0 = param_3[0xe];
      uVar3 = /*Core.Assets.AssetManager$$AreAddressableHandlesEqual<Object>*/ func_0x01818244(auVar8._0_8_,&uStack_2e0,&lStack_300,uRam0000000003d51ba8);
    }
    return uVar3;
  }
  uVar4 = auVar8._8_8_ & 0xffffffff;
  param_3 = &lStack_270;
  uVar3 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(*(long *)(lVar6 + 0x18),uVar4,param_3,uRam0000000003d2e020);
  if ((int)uVar3 != 0) {
    if (*(long *)(lVar6 + 0x30) == 0) goto code_r0x01637544;
    param_3 = &lStack_278;
    uVar3 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar6 + 0x30),uStack_260,param_3,uRam0000000003d2fec0);
    if ((int)uVar3 != 0) {
      iVar1 = (int)uStack_1f0 + -1;
      uStack_1f0 = CONCAT44(uStack_1f0._4_4_,iVar1);
      if (iVar1 == 0) {
        if (lStack_278 == 0) goto code_r0x01637544;
        if (*(int *)(lStack_278 + 0x18) == 0) {
          uVar3 = Core_Assets_AssetManager__ReleaseAsset(lVar6,uVar4);
          return uVar3;
        }
      }
      else if (iVar1 < 0) {
        return uVar3;
      }
      if (*(long *)(lVar6 + 0x18) == 0) goto code_r0x01637544;
      uStack_178 = uStack_208;
      uStack_180 = uStack_210;
      uStack_168 = uStack_1f8;
      uStack_170 = uStack_200;
      uStack_160 = uStack_1f0;
      uStack_1b8 = uStack_248;
      uStack_1c0 = uStack_250;
      uStack_1a8 = uStack_238;
      uStack_1b0 = uStack_240;
      uStack_198 = uStack_228;
      uStack_1a0 = uStack_230;
      uStack_188 = uStack_218;
      uStack_190 = uStack_220;
      uStack_1d8 = uStack_268;
      lStack_1e0 = lStack_270;
      uStack_1c8 = uStack_258;
      uStack_1d0 = uStack_260;
      uVar3 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$set_Item*/ func_0x01e2fae4(*(long *)(lVar6 + 0x18),uVar4,&lStack_1e0,uRam0000000003d2e038);
    }
  }
  return uVar3;
}



// ============================================================
// RVA: 0x16373f0 | Core.Assets.AssetManager.RemoveAssetReference
// ============================================================

void Core_Assets_AssetManager__RemoveAssetReference(long param_1,undefined4 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_158;
  long lStack_150;
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
  long lStack_c0;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003eb568f & 1) == 0) {
    func_0x00f78a20(0x3d2fec0);
    func_0x00f78a20(0x3d2e020);
    func_0x00f78a20(0x3d2e038);
    bRam0000000003eb568f = 1;
  }
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  lStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_158 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    param_3 = &lStack_150;
    iVar1 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(*(long *)(param_1 + 0x18),param_2,param_3,uRam0000000003d2e020);
    if (iVar1 != 0) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_01637544;
      param_3 = &lStack_158;
      iVar1 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(param_1 + 0x30),uStack_140,param_3,uRam0000000003d2fec0);
      if (iVar1 != 0) {
        iVar1 = (int)uStack_d0 + -1;
        uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar1);
        if (iVar1 == 0) {
          if (lStack_158 == 0) goto LAB_01637544;
          if (*(int *)(lStack_158 + 0x18) == 0) {
            Core_Assets_AssetManager__ReleaseAsset(param_1,param_2);
            return;
          }
        }
        else if (iVar1 < 0) {
          return;
        }
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_01637544;
        uStack_58 = uStack_e8;
        uStack_60 = uStack_f0;
        uStack_48 = uStack_d8;
        uStack_50 = uStack_e0;
        uStack_40 = uStack_d0;
        uStack_98 = uStack_128;
        uStack_a0 = uStack_130;
        uStack_88 = uStack_118;
        uStack_90 = uStack_120;
        uStack_78 = uStack_108;
        uStack_80 = uStack_110;
        uStack_68 = uStack_f8;
        uStack_70 = uStack_100;
        uStack_b8 = uStack_148;
        lStack_c0 = lStack_150;
        uStack_a8 = uStack_138;
        uStack_b0 = uStack_140;
        /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$set_Item*/ func_0x01e2fae4(*(long *)(param_1 + 0x18),param_2,&lStack_c0,uRam0000000003d2e038);
      }
    }
    return;
  }
LAB_01637544:
  auVar4 = func_0x00f78af4();
  lVar2 = auVar4._8_8_;
  if ((bRam0000000003eb5691 & 1) == 0) {
    func_0x00f78a20(0x3d51ba8);
    func_0x00f78a20(0x3d51ba0);
    func_0x00f78a20(0x3d51bb0);
    bRam0000000003eb5691 = 1;
  }
  if ((*(char *)(lVar2 + 0x18) == '\0') || ((char)param_3[3] == '\0')) {
    if ((*(char *)(lVar2 + 0x19) == '\0') || (*(char *)((long)param_3 + 0x19) == '\0')) {
      uStack_1b8 = *(undefined8 *)(lVar2 + 0x28);
      uStack_1c0 = *(undefined8 *)(lVar2 + 0x20);
      uStack_1a8 = *(undefined8 *)(lVar2 + 0x38);
      uStack_1b0 = *(undefined8 *)(lVar2 + 0x30);
      lStack_1d8 = param_3[5];
      lStack_1e0 = param_3[4];
      lStack_1c8 = param_3[7];
      lStack_1d0 = param_3[6];
      uVar3 = uRam0000000003d51ba0;
    }
    else {
      uStack_1b8 = *(undefined8 *)(lVar2 + 0x48);
      uStack_1c0 = *(undefined8 *)(lVar2 + 0x40);
      uStack_1a8 = *(undefined8 *)(lVar2 + 0x58);
      uStack_1b0 = *(undefined8 *)(lVar2 + 0x50);
      lStack_1d8 = param_3[9];
      lStack_1e0 = param_3[8];
      lStack_1c8 = param_3[0xb];
      lStack_1d0 = param_3[10];
      uVar3 = uRam0000000003d51bb0;
    }
    /*Core.Assets.AssetManager$$AreAddressableHandlesEqual<Sprite>*/ func_0x01818168(auVar4._0_8_,&uStack_1c0,&lStack_1e0,uVar3);
  }
  else {
    uStack_1b8 = *(undefined8 *)(lVar2 + 0x68);
    uStack_1c0 = *(undefined8 *)(lVar2 + 0x60);
    uStack_1a8 = *(undefined8 *)(lVar2 + 0x78);
    uStack_1b0 = *(undefined8 *)(lVar2 + 0x70);
    lStack_1d8 = param_3[0xd];
    lStack_1e0 = param_3[0xc];
    lStack_1c8 = param_3[0xf];
    lStack_1d0 = param_3[0xe];
    /*Core.Assets.AssetManager$$AreAddressableHandlesEqual<Object>*/ func_0x01818244(auVar4._0_8_,&uStack_1c0,&lStack_1e0,uRam0000000003d51ba8);
  }
  return;
}



// ============================================================
// RVA: 0x1637548 | Core.Assets.AssetManager.AreAssetsEqual
// ============================================================

void Core_Assets_AssetManager__AreAssetsEqual(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb5691 & 1) == 0) {
    func_0x00f78a20(0x3d51ba8);
    func_0x00f78a20(0x3d51ba0);
    func_0x00f78a20(0x3d51bb0);
    bRam0000000003eb5691 = 1;
  }
  if ((*(char *)(param_2 + 0x18) == '\0') || (*(char *)(param_3 + 0x18) == '\0')) {
    if ((*(char *)(param_2 + 0x19) == '\0') || (*(char *)(param_3 + 0x19) == '\0')) {
      uStack_58 = *(undefined8 *)(param_2 + 0x28);
      uStack_60 = *(undefined8 *)(param_2 + 0x20);
      uStack_48 = *(undefined8 *)(param_2 + 0x38);
      uStack_50 = *(undefined8 *)(param_2 + 0x30);
      uStack_78 = *(undefined8 *)(param_3 + 0x28);
      uStack_80 = *(undefined8 *)(param_3 + 0x20);
      uStack_68 = *(undefined8 *)(param_3 + 0x38);
      uStack_70 = *(undefined8 *)(param_3 + 0x30);
      uVar1 = uRam0000000003d51ba0;
    }
    else {
      uStack_58 = *(undefined8 *)(param_2 + 0x48);
      uStack_60 = *(undefined8 *)(param_2 + 0x40);
      uStack_48 = *(undefined8 *)(param_2 + 0x58);
      uStack_50 = *(undefined8 *)(param_2 + 0x50);
      uStack_78 = *(undefined8 *)(param_3 + 0x48);
      uStack_80 = *(undefined8 *)(param_3 + 0x40);
      uStack_68 = *(undefined8 *)(param_3 + 0x58);
      uStack_70 = *(undefined8 *)(param_3 + 0x50);
      uVar1 = uRam0000000003d51bb0;
    }
    /*Core.Assets.AssetManager$$AreAddressableHandlesEqual<Sprite>*/ func_0x01818168(param_1,&uStack_60,&uStack_80,uVar1);
  }
  else {
    uStack_58 = *(undefined8 *)(param_2 + 0x68);
    uStack_60 = *(undefined8 *)(param_2 + 0x60);
    uStack_48 = *(undefined8 *)(param_2 + 0x78);
    uStack_50 = *(undefined8 *)(param_2 + 0x70);
    uStack_78 = *(undefined8 *)(param_3 + 0x68);
    uStack_80 = *(undefined8 *)(param_3 + 0x60);
    uStack_68 = *(undefined8 *)(param_3 + 0x78);
    uStack_70 = *(undefined8 *)(param_3 + 0x70);
    /*Core.Assets.AssetManager$$AreAddressableHandlesEqual<Object>*/ func_0x01818244(param_1,&uStack_60,&uStack_80,uRam0000000003d51ba8);
  }
  return;
}



// ============================================================
// RVA: 0x163773c | Core.Assets.AssetManager.LogDebugMessage
// ============================================================

void Core_Assets_AssetManager__LogDebugMessage(void)

{
  return;
}



// ============================================================
// RVA: 0x1637740 | Core.Assets.AssetManager..ctor
// ============================================================

void Core_Assets_AssetManager___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1637748 | Core.Assets.AssetManager..cctor
// ============================================================

void Core_Assets_AssetManager___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5692 & 1) == 0) {
    func_0x00f78a20(0x3d1fda0);
    func_0x00f78a20(0x3d692c8);
    bRam0000000003eb5692 = 1;
  }
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('AssetManager.Update()')*/ uRam0000000003d692c8,1,0,0,0);
  **(undefined8 **)(/*Core.Assets.AssetManager_TypeInfo*/ lRam0000000003d1fda0 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1818168 | Core.Assets.AssetManager.AreAddressableHandlesEqual<Object>
// ============================================================

uint Core_Assets_AssetManager__AreAddressableHandlesEqual_Object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000003eb62ce & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb62ce = 1;
  }
  iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<TextAsset>$$IsValid*/ func_0x01b5716c(param_2,**(undefined8 **)(param_4 + 0x30));
  if ((iVar1 != 0) &&
     (iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<TextAsset>$$IsValid*/ func_0x01b5716c(param_3,**(undefined8 **)(param_4 + 0x30)), iVar1 != 0)) {
    lVar3 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(param_2,*(undefined8 *)(*(long *)(param_4 + 0x30) + 8));
    lVar4 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(param_3,*(undefined8 *)(*(long *)(param_4 + 0x30) + 8));
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003ec027b & 1) == 0) {
      func_0x00f78a20(0x3d23990,lVar4,0);
      bRam0000000003ec027b = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003ec021b & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003ec021b = 1;
    }
    if (lVar3 == 0 && lVar4 == 0) {
      uVar2 = 1;
    }
    else {
      if (lVar4 == 0) {
        lVar4 = lVar3;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
      }
      else {
        if (lVar3 != 0) {
          return (uint)(lVar3 == lVar4);
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
      }
      uVar2 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar4);
      uVar2 = uVar2 ^ 1;
    }
    return uVar2;
  }
  return 0;
}



// ============================================================
// RVA: 0x1818168 | Core.Assets.AssetManager.AreAddressableHandlesEqual<Sprite>
// ============================================================

uint Core_Assets_AssetManager__AreAddressableHandlesEqual_Object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000003eb62ce & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb62ce = 1;
  }
  iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<TextAsset>$$IsValid*/ func_0x01b5716c(param_2,**(undefined8 **)(param_4 + 0x30));
  if ((iVar1 != 0) &&
     (iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<TextAsset>$$IsValid*/ func_0x01b5716c(param_3,**(undefined8 **)(param_4 + 0x30)), iVar1 != 0)) {
    lVar3 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(param_2,*(undefined8 *)(*(long *)(param_4 + 0x30) + 8));
    lVar4 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(param_3,*(undefined8 *)(*(long *)(param_4 + 0x30) + 8));
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003ec027b & 1) == 0) {
      func_0x00f78a20(0x3d23990,lVar4,0);
      bRam0000000003ec027b = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003ec021b & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003ec021b = 1;
    }
    if (lVar3 == 0 && lVar4 == 0) {
      uVar2 = 1;
    }
    else {
      if (lVar4 == 0) {
        lVar4 = lVar3;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
      }
      else {
        if (lVar3 != 0) {
          return (uint)(lVar3 == lVar4);
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
      }
      uVar2 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar4);
      uVar2 = uVar2 ^ 1;
    }
    return uVar2;
  }
  return 0;
}



// ============================================================
// RVA: 0x1818168 | Core.Assets.AssetManager.AreAddressableHandlesEqual<object>
// ============================================================

uint Core_Assets_AssetManager__AreAddressableHandlesEqual_Object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000003eb62ce & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb62ce = 1;
  }
  iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<TextAsset>$$IsValid*/ func_0x01b5716c(param_2,**(undefined8 **)(param_4 + 0x30));
  if ((iVar1 != 0) &&
     (iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<TextAsset>$$IsValid*/ func_0x01b5716c(param_3,**(undefined8 **)(param_4 + 0x30)), iVar1 != 0)) {
    lVar3 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(param_2,*(undefined8 *)(*(long *)(param_4 + 0x30) + 8));
    lVar4 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(param_3,*(undefined8 *)(*(long *)(param_4 + 0x30) + 8));
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003ec027b & 1) == 0) {
      func_0x00f78a20(0x3d23990,lVar4,0);
      bRam0000000003ec027b = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003ec021b & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003ec021b = 1;
    }
    if (lVar3 == 0 && lVar4 == 0) {
      uVar2 = 1;
    }
    else {
      if (lVar4 == 0) {
        lVar4 = lVar3;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
      }
      else {
        if (lVar3 != 0) {
          return (uint)(lVar3 == lVar4);
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
      }
      uVar2 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar4);
      uVar2 = uVar2 ^ 1;
    }
    return uVar2;
  }
  return 0;
}



// ============================================================
// RVA: 0x1818244 | Core.Assets.AssetManager.AreAddressableHandlesEqual<Object>
// ============================================================

ulong Core_Assets_AssetManager__AreAddressableHandlesEqual_Object_
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  int unaff_w23;
  long lVar9;
  
  iVar8 = 0x3eb6000;
  if ((bRam0000000003eb62cf & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb62cf = 1;
  }
  uVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<TextAsset>$$IsValid*/ func_0x01b5716c(param_2,**(undefined8 **)(param_4 + 0x30));
  if (((int)uVar1 != 0) &&
     (uVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<TextAsset>$$IsValid*/ func_0x01b5716c(param_3,**(undefined8 **)(param_4 + 0x30)), (int)uVar1 != 0)) {
    plVar2 = (long *)/*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(param_2,*(undefined8 *)(*(long *)(param_4 + 0x30) + 8));
    if (plVar2 != (long *)0x0) {
      iVar8 = 0;
      do {
        lVar9 = *(long *)(*(long *)(param_4 + 0x30) + 0x20);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar6 = *plVar2;
        uVar1 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar1 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar9) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0181833c;
            }
            piVar7 = piVar7 + 4;
            uVar1 = uVar1 - 1;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,lVar9,0);
LAB_0181833c:
        unaff_w23 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if (unaff_w23 <= iVar8) goto code_r0x018184c0;
        plVar2 = (long *)/*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(param_2,*(undefined8 *)(*(long *)(param_4 + 0x30) + 8));
        if (plVar2 == (long *)0x0) break;
        lVar9 = *(long *)(*(long *)(param_4 + 0x30) + 0x10);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar6 = *plVar2;
        uVar1 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar1 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar9) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto code_r0x018183d0;
            }
            piVar7 = piVar7 + 4;
            uVar1 = uVar1 - 1;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,lVar9,0);
code_r0x018183d0:
        uVar4 = (*(code *)*puVar3)(plVar2,iVar8,puVar3[1]);
        plVar2 = (long *)/*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(param_3,*(undefined8 *)(*(long *)(param_4 + 0x30) + 8));
        if (plVar2 == (long *)0x0) break;
        lVar9 = *(long *)(*(long *)(param_4 + 0x30) + 0x10);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar6 = *plVar2;
        uVar1 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar1 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar9) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto code_r0x01818460;
            }
            piVar7 = piVar7 + 4;
            uVar1 = uVar1 - 1;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,lVar9,0);
code_r0x01818460:
        uVar5 = (*(code *)*puVar3)(plVar2,iVar8,puVar3[1]);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,uVar5,0);
        if ((uVar1 & 1) != 0) goto code_r0x018184c0;
        iVar8 = iVar8 + 1;
        plVar2 = (long *)/*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(param_2,*(undefined8 *)(*(long *)(param_4 + 0x30) + 8));
        unaff_w23 = 0;
      } while (plVar2 != (long *)0x0);
    }
    func_0x00f78af4();
code_r0x018184c0:
    uVar1 = (ulong)(unaff_w23 <= iVar8);
  }
  return uVar1;
}



// ============================================================
// RVA: 0x1818244 | Core.Assets.AssetManager.AreAddressableHandlesEqual<object>
// ============================================================

ulong Core_Assets_AssetManager__AreAddressableHandlesEqual_Object_
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  int unaff_w23;
  long lVar9;
  
  iVar8 = 0x3eb6000;
  if ((bRam0000000003eb62cf & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb62cf = 1;
  }
  uVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<TextAsset>$$IsValid*/ func_0x01b5716c(param_2,**(undefined8 **)(param_4 + 0x30));
  if (((int)uVar1 != 0) &&
     (uVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<TextAsset>$$IsValid*/ func_0x01b5716c(param_3,**(undefined8 **)(param_4 + 0x30)), (int)uVar1 != 0)) {
    plVar2 = (long *)/*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(param_2,*(undefined8 *)(*(long *)(param_4 + 0x30) + 8));
    if (plVar2 != (long *)0x0) {
      iVar8 = 0;
      do {
        lVar9 = *(long *)(*(long *)(param_4 + 0x30) + 0x20);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar6 = *plVar2;
        uVar1 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar1 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar9) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0181833c;
            }
            piVar7 = piVar7 + 4;
            uVar1 = uVar1 - 1;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,lVar9,0);
LAB_0181833c:
        unaff_w23 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if (unaff_w23 <= iVar8) goto code_r0x018184c0;
        plVar2 = (long *)/*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(param_2,*(undefined8 *)(*(long *)(param_4 + 0x30) + 8));
        if (plVar2 == (long *)0x0) break;
        lVar9 = *(long *)(*(long *)(param_4 + 0x30) + 0x10);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar6 = *plVar2;
        uVar1 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar1 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar9) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto code_r0x018183d0;
            }
            piVar7 = piVar7 + 4;
            uVar1 = uVar1 - 1;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,lVar9,0);
code_r0x018183d0:
        uVar4 = (*(code *)*puVar3)(plVar2,iVar8,puVar3[1]);
        plVar2 = (long *)/*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(param_3,*(undefined8 *)(*(long *)(param_4 + 0x30) + 8));
        if (plVar2 == (long *)0x0) break;
        lVar9 = *(long *)(*(long *)(param_4 + 0x30) + 0x10);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar6 = *plVar2;
        uVar1 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar1 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar9) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto code_r0x01818460;
            }
            piVar7 = piVar7 + 4;
            uVar1 = uVar1 - 1;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,lVar9,0);
code_r0x01818460:
        uVar5 = (*(code *)*puVar3)(plVar2,iVar8,puVar3[1]);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,uVar5,0);
        if ((uVar1 & 1) != 0) goto code_r0x018184c0;
        iVar8 = iVar8 + 1;
        plVar2 = (long *)/*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(param_2,*(undefined8 *)(*(long *)(param_4 + 0x30) + 8));
        unaff_w23 = 0;
      } while (plVar2 != (long *)0x0);
    }
    func_0x00f78af4();
code_r0x018184c0:
    uVar1 = (ulong)(unaff_w23 <= iVar8);
  }
  return uVar1;
}



// ============================================================
// RVA: 0x18184e4 | Core.Assets.AssetManager.EditorVerifyAssetType<object>
// ============================================================

/* WARNING: Type propagation algorithm not settling */

long Core_Assets_AssetManager__EditorVerifyAssetType_object_
               (long param_1,ulong param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long **pplVar10;
  long **pplVar11;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  ulong unaff_x24;
  undefined1 auVar15 [16];
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long *plStack_330;
  long *plStack_328;
  long lStack_320;
  undefined1 *******pppppppuStack_310;
  undefined *puStack_308;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  long lStack_278;
  long lStack_270;
  undefined1 ******ppppppuStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined1 *****pppppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  ulong uStack_1d8;
  long lStack_1d0;
  long **pplStack_1c8;
  undefined1 ****ppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  ulong uStack_198;
  long lStack_190;
  long **pplStack_188;
  undefined1 ***pppuStack_180;
  undefined *puStack_178;
  long *plStack_168;
  undefined1 **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 auStack_48 [2];
  
  if ((bRam0000000003eb62d0 & 1) == 0) {
    func_0x00f78a20(0x3d2dfb8);
    func_0x00f78a20(0x3d2e020);
    func_0x00f78a20(0x3d19e60);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb62d0 = 1;
  }
  lVar4 = 0x3d19e60;
  auStack_48[0] = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uVar14 = **(undefined8 **)(param_3 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
  uVar2 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*UnityEngine.Sprite_var*/ uRam0000000003d19e60,0);
  pplVar10 = (long **)0x0;
  lVar3 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar14,uVar2);
  if ((int)lVar3 == 0) {
    return lVar3;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    pplVar10 = (long **)auStack_48;
    param_4 = lRam0000000003d2dfb8;
    lVar3 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$TryGetValue*/ func_0x01e2e668(*(long *)(param_1 + 0x28),param_2 & 0xffffffff);
    if ((int)lVar3 == 0) {
      return lVar3;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar4 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(*(long *)(param_1 + 0x18),auStack_48[0],&uStack_d0,
                              uRam0000000003d2e020);
      return lVar4;
    }
  }
  auVar15 = func_0x00f78af4();
  uStack_100 = 0x3d25458;
  puStack_d8 = &Core_Assets_AssetManager__GetLoadedAsset_Sprite_;
  uStack_108 = 0;
  uStack_f8 = uVar14;
  uStack_f0 = param_2;
  lStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  if (auVar15._0_8_ != 0) {
    iVar1 = Core_Assets_AssetManager__TryGetLoadedAsset
                      (auVar15._0_8_,auVar15._8_8_ & 0xffffffff,&uStack_108,0);
    uVar14 = uStack_108;
    if (iVar1 != 0) {
      lVar4 = *pplVar10[6];
      if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar4);
      }
      lVar4 = func_0x00f78adc(uVar14,lVar4);
      lVar3 = *pplVar10[6];
      if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar3);
      }
      if (lVar4 != 0) {
        lVar5 = func_0x00f78adc(lVar4,lVar3);
        if (lVar5 != 0) {
          return lVar5;
        }
        func_0x00f78e5c(lVar4,lVar3);
      }
    }
    return 0;
  }
  auVar15 = func_0x00f78af4();
  uVar12 = auVar15._8_8_;
  puStack_118 = &Core_Assets_AssetManager__GetLoadedMultipleAssets_Shader_;
  pplVar11 = pplVar10;
  ppuStack_120 = &puStack_e0;
  if ((bRam0000000003eb62d1 & 1) == 0) {
    func_0x00f78a20(0x3d1cf80);
    func_0x00f78a20(0x3d1d498);
    bRam0000000003eb62d1 = 1;
  }
  plStack_168 = (long *)0x0;
  lVar3 = 0;
  plVar9 = (long *)0x3eb6000;
  if (auVar15._0_8_ != 0) {
    pplVar11 = &plStack_168;
    param_4 = 0;
    iVar1 = Core_Assets_AssetManager__TryGetLoadedMultipleAssets(auVar15._0_8_,uVar12 & 0xffffffff);
    plVar8 = plStack_168;
    if (iVar1 == 0) {
      return 0;
    }
    lVar3 = 0;
    if (plStack_168 != (long *)0x0) {
      lVar3 = *plStack_168;
      uVar12 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.ICollection<Object>_TypeInfo*/ lRam0000000003d1cf80) {
            puVar6 = (undefined8 *)(lVar3 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018187b8;
          }
          piVar13 = piVar13 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      pplVar11 = (long **)0x0;
      puVar6 = (undefined8 *)func_0x00fac1f0(plStack_168);
code_r0x018187b8:
      uVar7 = (*(code *)*puVar6)(plVar8,puVar6[1]);
      lVar3 = *pplVar10[6];
      if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar3);
      }
      lVar3 = func_0x00f78a34(lVar3,uVar7);
      if ((int)uVar7 < 1) {
        return lVar3;
      }
      uVar12 = 0;
      unaff_x24 = uVar7 & 0xffffffff;
      while (plVar9 = plStack_168, plStack_168 != (long *)0x0) {
        lVar5 = *plStack_168;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IList<Object>_TypeInfo*/ lRam0000000003d1d498) {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x0181885c;
            }
            piVar13 = piVar13 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plStack_168,/*System.Collections.Generic.IList<Object>_TypeInfo*/ lRam0000000003d1d498,0);
code_r0x0181885c:
        pplVar11 = (long **)puVar6[1];
        plVar8 = (long *)(*(code *)*puVar6)(plVar9,uVar12);
        if (lVar3 == 0) break;
        lVar4 = pplVar10[6][1];
        if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar4);
        }
        if (plVar8 == (long *)0x0) {
          lVar5 = 0;
        }
        else {
          lVar5 = func_0x00f78adc(plVar8,lVar4);
          if (lVar5 == 0) goto code_r0x018188f8;
        }
        if (*(uint *)(lVar3 + 0x18) <= uVar12) goto code_r0x018188ec;
        *(long *)(lVar3 + uVar12 * 8 + 0x20) = lVar5;
        uVar12 = uVar12 + 1;
        if (uVar12 == unaff_x24) {
          return lVar3;
        }
      }
    }
  }
  plVar8 = plVar9;
  func_0x00f78af4();
code_r0x018188ec:
  uVar14 = func_0x00f78b24();
  func_0x00f78ac0(uVar14,0);
code_r0x018188f8:
  auVar15 = func_0x00f78e5c(plVar8,lVar4);
  puStack_178 = &Core_Assets_AssetManager__TryGetLoadedAsset_object_;
  uStack_1a8 = 0;
  plStack_1a0 = plVar8;
  uStack_198 = uVar12;
  lStack_190 = lVar3;
  pplStack_188 = pplVar10;
  pppuStack_180 = &ppuStack_120;
  if (auVar15._0_8_ == 0) {
    func_0x00f78af4();
code_r0x018189c0:
    lVar5 = func_0x00f78e5c(uVar12,lVar3);
    puStack_1b8 = &UnityEngine_AddressableAssets_AssetReference__CreateFailedOperation_object_;
    uStack_1f0 = unaff_x24;
    lStack_1e8 = lVar4;
    plStack_1e0 = plVar8;
    uStack_1d8 = uVar12;
    lStack_1d0 = lVar3;
    pplStack_1c8 = pplVar10;
    ppppuStack_1c0 = &pppuStack_180;
    if ((bRam0000000003eb62d2 & 1) == 0) {
      func_0x00f78a20(0x3d1fae0);
      func_0x00f78a20(0x3d216d0);
      func_0x00f78a20(0x3d69448);
      bRam0000000003eb62d2 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.AddressableAssets.Addressables$$InitializeAsync*/ func_0x02fb39a0(&uStack_210,0);
    lVar4 = /*UnityEngine.AddressableAssets.Addressables$$get_ResourceManager*/ func_0x02fb2018(0);
    plVar9 = (long *)func_0x00f78aec(/*System.Exception_TypeInfo*/ uRam0000000003d216d0);
    /*System.Exception$$.ctor*/ func_0x02acc6e8(plVar9,/*STR('Attempting to load an asset reference that has no asset assigned to it.')*/ uRam0000000003d69448,0);
    if ((plVar9 != (long *)0x0) &&
       (uVar14 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400)), lVar4 != 0))
    {
      lVar4 = (**(code **)**(undefined8 **)(lVar5 + 0x30))(&uStack_210,lVar4,0,uVar14);
      extraout_x8[1] = uStack_208;
      *extraout_x8 = uStack_210;
      extraout_x8[3] = uStack_1f8;
      extraout_x8[2] = uStack_200;
      return lVar4;
    }
    auVar15 = func_0x00f78af4();
    plVar8 = auVar15._0_8_;
    puStack_218 = &UnityEngine_AddressableAssets_AssetReference__LoadAsset_object_;
    lStack_230 = lVar5;
    pppppuStack_220 = &ppppuStack_1c0;
    if (plVar8 != (long *)0x0) {
      puVar6 = (undefined8 *)
               func_0x00f78acc(*(undefined8 *)
                                (*plVar8 + (ulong)*(ushort *)
                                                   (**(long **)(auVar15._8_8_ + 0x30) + 0x48) * 0x10
                                + 0x140));
      lVar4 = (*(code *)*puVar6)(&uStack_250,plVar8,puVar6);
      extraout_x8_00[1] = uStack_248;
      *extraout_x8_00 = uStack_250;
      extraout_x8_00[3] = uStack_238;
      extraout_x8_00[2] = uStack_240;
      return lVar4;
    }
    auVar15 = func_0x00f78af4();
    lVar3 = auVar15._8_8_;
    plVar8 = auVar15._0_8_;
    puStack_258 = &UnityEngine_AddressableAssets_AssetReference__LoadAssetAsync_VideoClip_;
    plStack_280 = plVar9;
    lStack_278 = lVar4;
    lStack_270 = lVar5;
    ppppppuStack_260 = &pppppuStack_220;
    if ((bRam0000000003eb62d3 & 1) == 0) {
      func_0x00f78a20(0x3d1fae0);
      func_0x00f78a20(0x3d210d8);
      func_0x00f78a20(0x3d69440);
      bRam0000000003eb62d3 = 1;
    }
    plVar9 = plVar8 + 5;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle$$IsValid*/ func_0x03171fec(plVar9,0);
    if (iVar1 == 0) {
      if (plVar8 == (long *)0x0) {
        auVar15 = func_0x00f78af4();
        lVar4 = auVar15._0_8_;
        puStack_308 = &
                      UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__Convert_object_
        ;
        plStack_330 = plVar8;
        plStack_328 = plVar9;
        lStack_320 = lVar3;
        pppppppuStack_310 = &ppppppuStack_260;
        uVar14 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle$$get_InternalOp*/ func_0x03171c60(lVar4,0);
        uStack_348 = 0;
        uStack_350 = 0;
        uStack_338 = 0;
        uStack_340 = 0;
        lVar4 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object>$$.ctor*/ func_0x01b564a4(&uStack_350,uVar14,*(undefined4 *)(lVar4 + 8),
                                *(undefined8 *)(lVar4 + 0x10),
                                *(undefined8 *)(*(long *)(auVar15._8_8_ + 0x30) + 8));
        extraout_x8_02[1] = uStack_348;
        *extraout_x8_02 = uStack_350;
        extraout_x8_02[3] = uStack_338;
        extraout_x8_02[2] = uStack_340;
        return lVar4;
      }
      uVar14 = (**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(*plVar8 + 0x1a0));
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      (**(code **)**(undefined8 **)(lVar3 + 0x30))(&uStack_2c0,uVar14);
      uStack_298 = uStack_2b8;
      uStack_2a0 = uStack_2c0;
      uStack_288 = uStack_2a8;
      uStack_290 = uStack_2b0;
      uStack_2d8 = uStack_2b8;
      uStack_2e0 = uStack_2c0;
      uStack_2c8 = uStack_2a8;
      uStack_2d0 = uStack_2b0;
      lVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))
                        (&lStack_2f8,&uStack_2e0,*(undefined8 *)(*(long *)(lVar3 + 0x30) + 8));
      plVar8[6] = lStack_2f0;
      *plVar9 = lStack_2f8;
      plVar8[7] = lStack_2e8;
    }
    else {
      if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar4 = /*UnityEngine.Debug$$LogError*/ func_0x0322b788(/*STR('Attempting to load AssetReference that has already been loaded. Handle is exposed through getter OperationHandle')*/ uRam0000000003d69440,0);
    }
    extraout_x8_01[1] = uStack_298;
    *extraout_x8_01 = uStack_2a0;
    extraout_x8_01[3] = uStack_288;
    extraout_x8_01[2] = uStack_290;
    return lVar4;
  }
  iVar1 = Core_Assets_AssetManager__TryGetLoadedAsset
                    (auVar15._0_8_,auVar15._8_8_ & 0xffffffff,&uStack_1a8,0);
  uVar14 = uStack_1a8;
  if (iVar1 != 0) {
    plVar8 = (long *)**(undefined8 **)(param_4 + 0x30);
    if ((*(ushort *)((long)plVar8 + 0x132) & 1) == 0) {
      func_0x00fac028(plVar8);
    }
    uVar12 = func_0x00f78adc(uVar14,plVar8);
    lVar3 = **(long **)(param_4 + 0x30);
    if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar3);
    }
    if (uVar12 != 0) {
      plVar9 = (long *)func_0x00f78adc(uVar12,lVar3);
      pplVar10 = pplVar11;
      if (plVar9 != (long *)0x0) {
        *pplVar11 = plVar9;
        return 1;
      }
      goto code_r0x018189c0;
    }
  }
  *pplVar11 = (long *)0x0;
  return 0;
}



// ============================================================
// RVA: 0x1818628 | Core.Assets.AssetManager.GetLoadedAsset<GameObject>
// ============================================================

long Core_Assets_AssetManager__GetLoadedAsset_GameObject_
               (long param_1,undefined4 param_2,long **param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long **pplVar8;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long unaff_x23;
  ulong unaff_x24;
  undefined1 auVar13 [16];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  long *plStack_258;
  long lStack_250;
  undefined1 ******ppppppuStack_240;
  undefined *puStack_238;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined1 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined1 ****ppppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  long lStack_118;
  long *plStack_110;
  ulong uStack_108;
  long lStack_100;
  long **pplStack_f8;
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_d8;
  long *plStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long **pplStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  long *plStack_98;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  if (param_1 != 0) {
    iVar1 = Core_Assets_AssetManager__TryGetLoadedAsset(param_1,param_2,&uStack_38,0);
    uVar7 = uStack_38;
    if (iVar1 != 0) {
      lVar12 = *param_3[6];
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
      }
      lVar12 = func_0x00f78adc(uVar7,lVar12);
      lVar11 = *param_3[6];
      if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar11);
      }
      if (lVar12 != 0) {
        lVar2 = func_0x00f78adc(lVar12,lVar11);
        if (lVar2 != 0) {
          return lVar2;
        }
        func_0x00f78e5c(lVar12,lVar11);
      }
    }
    return 0;
  }
  auVar13 = func_0x00f78af4();
  uVar9 = auVar13._8_8_;
  puStack_48 = &Core_Assets_AssetManager__GetLoadedMultipleAssets_Shader_;
  pplVar8 = param_3;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb62d1 & 1) == 0) {
    func_0x00f78a20(0x3d1cf80);
    func_0x00f78a20(0x3d1d498);
    bRam0000000003eb62d1 = 1;
  }
  plStack_98 = (long *)0x0;
  lVar12 = 0;
  plVar6 = (long *)0x3eb6000;
  if (auVar13._0_8_ != 0) {
    pplVar8 = &plStack_98;
    param_4 = 0;
    iVar1 = Core_Assets_AssetManager__TryGetLoadedMultipleAssets(auVar13._0_8_,uVar9 & 0xffffffff);
    plVar5 = plStack_98;
    if (iVar1 == 0) {
      return 0;
    }
    lVar12 = 0;
    if (plStack_98 != (long *)0x0) {
      lVar12 = *plStack_98;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.ICollection<Object>_TypeInfo*/ lRam0000000003d1cf80) {
            puVar3 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x018187b8;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      pplVar8 = (long **)0x0;
      puVar3 = (undefined8 *)func_0x00fac1f0(plStack_98);
code_r0x018187b8:
      uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      lVar12 = *param_3[6];
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
      }
      lVar12 = func_0x00f78a34(lVar12,uVar4);
      if ((int)uVar4 < 1) {
        return lVar12;
      }
      uVar9 = 0;
      unaff_x24 = uVar4 & 0xffffffff;
      while (plVar6 = plStack_98, plStack_98 != (long *)0x0) {
        lVar11 = *plStack_98;
        uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.IList<Object>_TypeInfo*/ lRam0000000003d1d498) {
              puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x0181885c;
            }
            piVar10 = piVar10 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plStack_98,/*System.Collections.Generic.IList<Object>_TypeInfo*/ lRam0000000003d1d498,0);
code_r0x0181885c:
        pplVar8 = (long **)puVar3[1];
        plVar5 = (long *)(*(code *)*puVar3)(plVar6,uVar9);
        if (lVar12 == 0) break;
        unaff_x23 = param_3[6][1];
        if ((*(ushort *)(unaff_x23 + 0x132) & 1) == 0) {
          func_0x00fac028(unaff_x23);
        }
        if (plVar5 == (long *)0x0) {
          lVar11 = 0;
        }
        else {
          lVar11 = func_0x00f78adc(plVar5,unaff_x23);
          if (lVar11 == 0) goto code_r0x018188f8;
        }
        if (*(uint *)(lVar12 + 0x18) <= uVar9) goto code_r0x018188ec;
        *(long *)(lVar12 + uVar9 * 8 + 0x20) = lVar11;
        uVar9 = uVar9 + 1;
        if (uVar9 == unaff_x24) {
          return lVar12;
        }
      }
    }
  }
  plVar5 = plVar6;
  func_0x00f78af4();
code_r0x018188ec:
  uVar7 = func_0x00f78b24();
  func_0x00f78ac0(uVar7,0);
code_r0x018188f8:
  auVar13 = func_0x00f78e5c(plVar5,unaff_x23);
  puStack_a8 = &Core_Assets_AssetManager__TryGetLoadedAsset_object_;
  uStack_d8 = 0;
  plStack_d0 = plVar5;
  uStack_c8 = uVar9;
  lStack_c0 = lVar12;
  pplStack_b8 = param_3;
  ppuStack_b0 = &puStack_50;
  if (auVar13._0_8_ == 0) {
    func_0x00f78af4();
code_r0x018189c0:
    lVar11 = func_0x00f78e5c(uVar9,lVar12);
    puStack_e8 = &UnityEngine_AddressableAssets_AssetReference__CreateFailedOperation_object_;
    uStack_120 = unaff_x24;
    lStack_118 = unaff_x23;
    plStack_110 = plVar5;
    uStack_108 = uVar9;
    lStack_100 = lVar12;
    pplStack_f8 = param_3;
    pppuStack_f0 = &ppuStack_b0;
    if ((bRam0000000003eb62d2 & 1) == 0) {
      func_0x00f78a20(0x3d1fae0);
      func_0x00f78a20(0x3d216d0);
      func_0x00f78a20(0x3d69448);
      bRam0000000003eb62d2 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.AddressableAssets.Addressables$$InitializeAsync*/ func_0x02fb39a0(&uStack_140,0);
    lVar12 = /*UnityEngine.AddressableAssets.Addressables$$get_ResourceManager*/ func_0x02fb2018(0);
    plVar6 = (long *)func_0x00f78aec(/*System.Exception_TypeInfo*/ uRam0000000003d216d0);
    /*System.Exception$$.ctor*/ func_0x02acc6e8(plVar6,/*STR('Attempting to load an asset reference that has no asset assigned to it.')*/ uRam0000000003d69448,0);
    if ((plVar6 != (long *)0x0) &&
       (uVar7 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400)), lVar12 != 0))
    {
      lVar12 = (**(code **)**(undefined8 **)(lVar11 + 0x30))(&uStack_140,lVar12,0,uVar7);
      extraout_x8[1] = uStack_138;
      *extraout_x8 = uStack_140;
      extraout_x8[3] = uStack_128;
      extraout_x8[2] = uStack_130;
      return lVar12;
    }
    auVar13 = func_0x00f78af4();
    plVar5 = auVar13._0_8_;
    puStack_148 = &UnityEngine_AddressableAssets_AssetReference__LoadAsset_object_;
    lStack_160 = lVar11;
    ppppuStack_150 = &pppuStack_f0;
    if (plVar5 != (long *)0x0) {
      puVar3 = (undefined8 *)
               func_0x00f78acc(*(undefined8 *)
                                (*plVar5 + (ulong)*(ushort *)
                                                   (**(long **)(auVar13._8_8_ + 0x30) + 0x48) * 0x10
                                + 0x140));
      lVar12 = (*(code *)*puVar3)(&uStack_180,plVar5,puVar3);
      extraout_x8_00[1] = uStack_178;
      *extraout_x8_00 = uStack_180;
      extraout_x8_00[3] = uStack_168;
      extraout_x8_00[2] = uStack_170;
      return lVar12;
    }
    auVar13 = func_0x00f78af4();
    lVar2 = auVar13._8_8_;
    plVar5 = auVar13._0_8_;
    puStack_188 = &UnityEngine_AddressableAssets_AssetReference__LoadAssetAsync_VideoClip_;
    plStack_1b0 = plVar6;
    lStack_1a8 = lVar12;
    lStack_1a0 = lVar11;
    pppppuStack_190 = &ppppuStack_150;
    if ((bRam0000000003eb62d3 & 1) == 0) {
      func_0x00f78a20(0x3d1fae0);
      func_0x00f78a20(0x3d210d8);
      func_0x00f78a20(0x3d69440);
      bRam0000000003eb62d3 = 1;
    }
    plVar6 = plVar5 + 5;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle$$IsValid*/ func_0x03171fec(plVar6,0);
    if (iVar1 == 0) {
      if (plVar5 == (long *)0x0) {
        auVar13 = func_0x00f78af4();
        lVar12 = auVar13._0_8_;
        puStack_238 = &
                      UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__Convert_object_
        ;
        plStack_260 = plVar5;
        plStack_258 = plVar6;
        lStack_250 = lVar2;
        ppppppuStack_240 = &pppppuStack_190;
        uVar7 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle$$get_InternalOp*/ func_0x03171c60(lVar12,0);
        uStack_278 = 0;
        uStack_280 = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        lVar12 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object>$$.ctor*/ func_0x01b564a4(&uStack_280,uVar7,*(undefined4 *)(lVar12 + 8),
                                 *(undefined8 *)(lVar12 + 0x10),
                                 *(undefined8 *)(*(long *)(auVar13._8_8_ + 0x30) + 8));
        extraout_x8_02[1] = uStack_278;
        *extraout_x8_02 = uStack_280;
        extraout_x8_02[3] = uStack_268;
        extraout_x8_02[2] = uStack_270;
        return lVar12;
      }
      uVar7 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      (**(code **)**(undefined8 **)(lVar2 + 0x30))(&uStack_1f0,uVar7);
      uStack_1c8 = uStack_1e8;
      uStack_1d0 = uStack_1f0;
      uStack_1b8 = uStack_1d8;
      uStack_1c0 = uStack_1e0;
      uStack_208 = uStack_1e8;
      uStack_210 = uStack_1f0;
      uStack_1f8 = uStack_1d8;
      uStack_200 = uStack_1e0;
      lVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 8))
                         (&lStack_228,&uStack_210,*(undefined8 *)(*(long *)(lVar2 + 0x30) + 8));
      plVar5[6] = lStack_220;
      *plVar6 = lStack_228;
      plVar5[7] = lStack_218;
    }
    else {
      if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar12 = /*UnityEngine.Debug$$LogError*/ func_0x0322b788(/*STR('Attempting to load AssetReference that has already been loaded. Handle is exposed through getter OperationHandle')*/ uRam0000000003d69440,0);
    }
    extraout_x8_01[1] = uStack_1c8;
    *extraout_x8_01 = uStack_1d0;
    extraout_x8_01[3] = uStack_1b8;
    extraout_x8_01[2] = uStack_1c0;
    return lVar12;
  }
  iVar1 = Core_Assets_AssetManager__TryGetLoadedAsset
                    (auVar13._0_8_,auVar13._8_8_ & 0xffffffff,&uStack_d8,0);
  uVar7 = uStack_d8;
  if (iVar1 != 0) {
    plVar5 = (long *)**(undefined8 **)(param_4 + 0x30);
    if ((*(ushort *)((long)plVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(plVar5);
    }
    uVar9 = func_0x00f78adc(uVar7,plVar5);
    lVar12 = **(long **)(param_4 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    if (uVar9 != 0) {
      plVar6 = (long *)func_0x00f78adc(uVar9,lVar12);
      param_3 = pplVar8;
      if (plVar6 != (long *)0x0) {
        *pplVar8 = plVar6;
        return 1;
      }
      goto code_r0x018189c0;
    }
  }
  *pplVar8 = (long *)0x0;
  return 0;
}



// ============================================================
// RVA: 0x1818628 | Core.Assets.AssetManager.GetLoadedAsset<Sprite>
// ============================================================

long Core_Assets_AssetManager__GetLoadedAsset_GameObject_
               (long param_1,undefined4 param_2,long **param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long **pplVar8;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long unaff_x23;
  ulong unaff_x24;
  undefined1 auVar13 [16];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  long *plStack_258;
  long lStack_250;
  undefined1 ******ppppppuStack_240;
  undefined *puStack_238;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined1 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined1 ****ppppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  long lStack_118;
  long *plStack_110;
  ulong uStack_108;
  long lStack_100;
  long **pplStack_f8;
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_d8;
  long *plStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long **pplStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  long *plStack_98;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  if (param_1 != 0) {
    iVar1 = Core_Assets_AssetManager__TryGetLoadedAsset(param_1,param_2,&uStack_38,0);
    uVar7 = uStack_38;
    if (iVar1 != 0) {
      lVar12 = *param_3[6];
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
      }
      lVar12 = func_0x00f78adc(uVar7,lVar12);
      lVar11 = *param_3[6];
      if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar11);
      }
      if (lVar12 != 0) {
        lVar2 = func_0x00f78adc(lVar12,lVar11);
        if (lVar2 != 0) {
          return lVar2;
        }
        func_0x00f78e5c(lVar12,lVar11);
      }
    }
    return 0;
  }
  auVar13 = func_0x00f78af4();
  uVar9 = auVar13._8_8_;
  puStack_48 = &Core_Assets_AssetManager__GetLoadedMultipleAssets_Shader_;
  pplVar8 = param_3;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb62d1 & 1) == 0) {
    func_0x00f78a20(0x3d1cf80);
    func_0x00f78a20(0x3d1d498);
    bRam0000000003eb62d1 = 1;
  }
  plStack_98 = (long *)0x0;
  lVar12 = 0;
  plVar6 = (long *)0x3eb6000;
  if (auVar13._0_8_ != 0) {
    pplVar8 = &plStack_98;
    param_4 = 0;
    iVar1 = Core_Assets_AssetManager__TryGetLoadedMultipleAssets(auVar13._0_8_,uVar9 & 0xffffffff);
    plVar5 = plStack_98;
    if (iVar1 == 0) {
      return 0;
    }
    lVar12 = 0;
    if (plStack_98 != (long *)0x0) {
      lVar12 = *plStack_98;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.ICollection<Object>_TypeInfo*/ lRam0000000003d1cf80) {
            puVar3 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x018187b8;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      pplVar8 = (long **)0x0;
      puVar3 = (undefined8 *)func_0x00fac1f0(plStack_98);
code_r0x018187b8:
      uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      lVar12 = *param_3[6];
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
      }
      lVar12 = func_0x00f78a34(lVar12,uVar4);
      if ((int)uVar4 < 1) {
        return lVar12;
      }
      uVar9 = 0;
      unaff_x24 = uVar4 & 0xffffffff;
      while (plVar6 = plStack_98, plStack_98 != (long *)0x0) {
        lVar11 = *plStack_98;
        uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.IList<Object>_TypeInfo*/ lRam0000000003d1d498) {
              puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x0181885c;
            }
            piVar10 = piVar10 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plStack_98,/*System.Collections.Generic.IList<Object>_TypeInfo*/ lRam0000000003d1d498,0);
code_r0x0181885c:
        pplVar8 = (long **)puVar3[1];
        plVar5 = (long *)(*(code *)*puVar3)(plVar6,uVar9);
        if (lVar12 == 0) break;
        unaff_x23 = param_3[6][1];
        if ((*(ushort *)(unaff_x23 + 0x132) & 1) == 0) {
          func_0x00fac028(unaff_x23);
        }
        if (plVar5 == (long *)0x0) {
          lVar11 = 0;
        }
        else {
          lVar11 = func_0x00f78adc(plVar5,unaff_x23);
          if (lVar11 == 0) goto code_r0x018188f8;
        }
        if (*(uint *)(lVar12 + 0x18) <= uVar9) goto code_r0x018188ec;
        *(long *)(lVar12 + uVar9 * 8 + 0x20) = lVar11;
        uVar9 = uVar9 + 1;
        if (uVar9 == unaff_x24) {
          return lVar12;
        }
      }
    }
  }
  plVar5 = plVar6;
  func_0x00f78af4();
code_r0x018188ec:
  uVar7 = func_0x00f78b24();
  func_0x00f78ac0(uVar7,0);
code_r0x018188f8:
  auVar13 = func_0x00f78e5c(plVar5,unaff_x23);
  puStack_a8 = &Core_Assets_AssetManager__TryGetLoadedAsset_object_;
  uStack_d8 = 0;
  plStack_d0 = plVar5;
  uStack_c8 = uVar9;
  lStack_c0 = lVar12;
  pplStack_b8 = param_3;
  ppuStack_b0 = &puStack_50;
  if (auVar13._0_8_ == 0) {
    func_0x00f78af4();
code_r0x018189c0:
    lVar11 = func_0x00f78e5c(uVar9,lVar12);
    puStack_e8 = &UnityEngine_AddressableAssets_AssetReference__CreateFailedOperation_object_;
    uStack_120 = unaff_x24;
    lStack_118 = unaff_x23;
    plStack_110 = plVar5;
    uStack_108 = uVar9;
    lStack_100 = lVar12;
    pplStack_f8 = param_3;
    pppuStack_f0 = &ppuStack_b0;
    if ((bRam0000000003eb62d2 & 1) == 0) {
      func_0x00f78a20(0x3d1fae0);
      func_0x00f78a20(0x3d216d0);
      func_0x00f78a20(0x3d69448);
      bRam0000000003eb62d2 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.AddressableAssets.Addressables$$InitializeAsync*/ func_0x02fb39a0(&uStack_140,0);
    lVar12 = /*UnityEngine.AddressableAssets.Addressables$$get_ResourceManager*/ func_0x02fb2018(0);
    plVar6 = (long *)func_0x00f78aec(/*System.Exception_TypeInfo*/ uRam0000000003d216d0);
    /*System.Exception$$.ctor*/ func_0x02acc6e8(plVar6,/*STR('Attempting to load an asset reference that has no asset assigned to it.')*/ uRam0000000003d69448,0);
    if ((plVar6 != (long *)0x0) &&
       (uVar7 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400)), lVar12 != 0))
    {
      lVar12 = (**(code **)**(undefined8 **)(lVar11 + 0x30))(&uStack_140,lVar12,0,uVar7);
      extraout_x8[1] = uStack_138;
      *extraout_x8 = uStack_140;
      extraout_x8[3] = uStack_128;
      extraout_x8[2] = uStack_130;
      return lVar12;
    }
    auVar13 = func_0x00f78af4();
    plVar5 = auVar13._0_8_;
    puStack_148 = &UnityEngine_AddressableAssets_AssetReference__LoadAsset_object_;
    lStack_160 = lVar11;
    ppppuStack_150 = &pppuStack_f0;
    if (plVar5 != (long *)0x0) {
      puVar3 = (undefined8 *)
               func_0x00f78acc(*(undefined8 *)
                                (*plVar5 + (ulong)*(ushort *)
                                                   (**(long **)(auVar13._8_8_ + 0x30) + 0x48) * 0x10
                                + 0x140));
      lVar12 = (*(code *)*puVar3)(&uStack_180,plVar5,puVar3);
      extraout_x8_00[1] = uStack_178;
      *extraout_x8_00 = uStack_180;
      extraout_x8_00[3] = uStack_168;
      extraout_x8_00[2] = uStack_170;
      return lVar12;
    }
    auVar13 = func_0x00f78af4();
    lVar2 = auVar13._8_8_;
    plVar5 = auVar13._0_8_;
    puStack_188 = &UnityEngine_AddressableAssets_AssetReference__LoadAssetAsync_VideoClip_;
    plStack_1b0 = plVar6;
    lStack_1a8 = lVar12;
    lStack_1a0 = lVar11;
    pppppuStack_190 = &ppppuStack_150;
    if ((bRam0000000003eb62d3 & 1) == 0) {
      func_0x00f78a20(0x3d1fae0);
      func_0x00f78a20(0x3d210d8);
      func_0x00f78a20(0x3d69440);
      bRam0000000003eb62d3 = 1;
    }
    plVar6 = plVar5 + 5;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle$$IsValid*/ func_0x03171fec(plVar6,0);
    if (iVar1 == 0) {
      if (plVar5 == (long *)0x0) {
        auVar13 = func_0x00f78af4();
        lVar12 = auVar13._0_8_;
        puStack_238 = &
                      UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__Convert_object_
        ;
        plStack_260 = plVar5;
        plStack_258 = plVar6;
        lStack_250 = lVar2;
        ppppppuStack_240 = &pppppuStack_190;
        uVar7 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle$$get_InternalOp*/ func_0x03171c60(lVar12,0);
        uStack_278 = 0;
        uStack_280 = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        lVar12 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object>$$.ctor*/ func_0x01b564a4(&uStack_280,uVar7,*(undefined4 *)(lVar12 + 8),
                                 *(undefined8 *)(lVar12 + 0x10),
                                 *(undefined8 *)(*(long *)(auVar13._8_8_ + 0x30) + 8));
        extraout_x8_02[1] = uStack_278;
        *extraout_x8_02 = uStack_280;
        extraout_x8_02[3] = uStack_268;
        extraout_x8_02[2] = uStack_270;
        return lVar12;
      }
      uVar7 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      (**(code **)**(undefined8 **)(lVar2 + 0x30))(&uStack_1f0,uVar7);
      uStack_1c8 = uStack_1e8;
      uStack_1d0 = uStack_1f0;
      uStack_1b8 = uStack_1d8;
      uStack_1c0 = uStack_1e0;
      uStack_208 = uStack_1e8;
      uStack_210 = uStack_1f0;
      uStack_1f8 = uStack_1d8;
      uStack_200 = uStack_1e0;
      lVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 8))
                         (&lStack_228,&uStack_210,*(undefined8 *)(*(long *)(lVar2 + 0x30) + 8));
      plVar5[6] = lStack_220;
      *plVar6 = lStack_228;
      plVar5[7] = lStack_218;
    }
    else {
      if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar12 = /*UnityEngine.Debug$$LogError*/ func_0x0322b788(/*STR('Attempting to load AssetReference that has already been loaded. Handle is exposed through getter OperationHandle')*/ uRam0000000003d69440,0);
    }
    extraout_x8_01[1] = uStack_1c8;
    *extraout_x8_01 = uStack_1d0;
    extraout_x8_01[3] = uStack_1b8;
    extraout_x8_01[2] = uStack_1c0;
    return lVar12;
  }
  iVar1 = Core_Assets_AssetManager__TryGetLoadedAsset
                    (auVar13._0_8_,auVar13._8_8_ & 0xffffffff,&uStack_d8,0);
  uVar7 = uStack_d8;
  if (iVar1 != 0) {
    plVar5 = (long *)**(undefined8 **)(param_4 + 0x30);
    if ((*(ushort *)((long)plVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(plVar5);
    }
    uVar9 = func_0x00f78adc(uVar7,plVar5);
    lVar12 = **(long **)(param_4 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    if (uVar9 != 0) {
      plVar6 = (long *)func_0x00f78adc(uVar9,lVar12);
      param_3 = pplVar8;
      if (plVar6 != (long *)0x0) {
        *pplVar8 = plVar6;
        return 1;
      }
      goto code_r0x018189c0;
    }
  }
  *pplVar8 = (long *)0x0;
  return 0;
}



// ============================================================
// RVA: 0x1818628 | Core.Assets.AssetManager.GetLoadedAsset<object>
// ============================================================

long Core_Assets_AssetManager__GetLoadedAsset_GameObject_
               (long param_1,undefined4 param_2,long **param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long **pplVar8;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long unaff_x23;
  ulong unaff_x24;
  undefined1 auVar13 [16];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  long *plStack_258;
  long lStack_250;
  undefined1 ******ppppppuStack_240;
  undefined *puStack_238;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined1 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined1 ****ppppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  long lStack_118;
  long *plStack_110;
  ulong uStack_108;
  long lStack_100;
  long **pplStack_f8;
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_d8;
  long *plStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long **pplStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  long *plStack_98;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  if (param_1 != 0) {
    iVar1 = Core_Assets_AssetManager__TryGetLoadedAsset(param_1,param_2,&uStack_38,0);
    uVar7 = uStack_38;
    if (iVar1 != 0) {
      lVar12 = *param_3[6];
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
      }
      lVar12 = func_0x00f78adc(uVar7,lVar12);
      lVar11 = *param_3[6];
      if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar11);
      }
      if (lVar12 != 0) {
        lVar2 = func_0x00f78adc(lVar12,lVar11);
        if (lVar2 != 0) {
          return lVar2;
        }
        func_0x00f78e5c(lVar12,lVar11);
      }
    }
    return 0;
  }
  auVar13 = func_0x00f78af4();
  uVar9 = auVar13._8_8_;
  puStack_48 = &Core_Assets_AssetManager__GetLoadedMultipleAssets_Shader_;
  pplVar8 = param_3;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb62d1 & 1) == 0) {
    func_0x00f78a20(0x3d1cf80);
    func_0x00f78a20(0x3d1d498);
    bRam0000000003eb62d1 = 1;
  }
  plStack_98 = (long *)0x0;
  lVar12 = 0;
  plVar6 = (long *)0x3eb6000;
  if (auVar13._0_8_ != 0) {
    pplVar8 = &plStack_98;
    param_4 = 0;
    iVar1 = Core_Assets_AssetManager__TryGetLoadedMultipleAssets(auVar13._0_8_,uVar9 & 0xffffffff);
    plVar5 = plStack_98;
    if (iVar1 == 0) {
      return 0;
    }
    lVar12 = 0;
    if (plStack_98 != (long *)0x0) {
      lVar12 = *plStack_98;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.ICollection<Object>_TypeInfo*/ lRam0000000003d1cf80) {
            puVar3 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x018187b8;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      pplVar8 = (long **)0x0;
      puVar3 = (undefined8 *)func_0x00fac1f0(plStack_98);
code_r0x018187b8:
      uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      lVar12 = *param_3[6];
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
      }
      lVar12 = func_0x00f78a34(lVar12,uVar4);
      if ((int)uVar4 < 1) {
        return lVar12;
      }
      uVar9 = 0;
      unaff_x24 = uVar4 & 0xffffffff;
      while (plVar6 = plStack_98, plStack_98 != (long *)0x0) {
        lVar11 = *plStack_98;
        uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.IList<Object>_TypeInfo*/ lRam0000000003d1d498) {
              puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x0181885c;
            }
            piVar10 = piVar10 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plStack_98,/*System.Collections.Generic.IList<Object>_TypeInfo*/ lRam0000000003d1d498,0);
code_r0x0181885c:
        pplVar8 = (long **)puVar3[1];
        plVar5 = (long *)(*(code *)*puVar3)(plVar6,uVar9);
        if (lVar12 == 0) break;
        unaff_x23 = param_3[6][1];
        if ((*(ushort *)(unaff_x23 + 0x132) & 1) == 0) {
          func_0x00fac028(unaff_x23);
        }
        if (plVar5 == (long *)0x0) {
          lVar11 = 0;
        }
        else {
          lVar11 = func_0x00f78adc(plVar5,unaff_x23);
          if (lVar11 == 0) goto code_r0x018188f8;
        }
        if (*(uint *)(lVar12 + 0x18) <= uVar9) goto code_r0x018188ec;
        *(long *)(lVar12 + uVar9 * 8 + 0x20) = lVar11;
        uVar9 = uVar9 + 1;
        if (uVar9 == unaff_x24) {
          return lVar12;
        }
      }
    }
  }
  plVar5 = plVar6;
  func_0x00f78af4();
code_r0x018188ec:
  uVar7 = func_0x00f78b24();
  func_0x00f78ac0(uVar7,0);
code_r0x018188f8:
  auVar13 = func_0x00f78e5c(plVar5,unaff_x23);
  puStack_a8 = &Core_Assets_AssetManager__TryGetLoadedAsset_object_;
  uStack_d8 = 0;
  plStack_d0 = plVar5;
  uStack_c8 = uVar9;
  lStack_c0 = lVar12;
  pplStack_b8 = param_3;
  ppuStack_b0 = &puStack_50;
  if (auVar13._0_8_ == 0) {
    func_0x00f78af4();
code_r0x018189c0:
    lVar11 = func_0x00f78e5c(uVar9,lVar12);
    puStack_e8 = &UnityEngine_AddressableAssets_AssetReference__CreateFailedOperation_object_;
    uStack_120 = unaff_x24;
    lStack_118 = unaff_x23;
    plStack_110 = plVar5;
    uStack_108 = uVar9;
    lStack_100 = lVar12;
    pplStack_f8 = param_3;
    pppuStack_f0 = &ppuStack_b0;
    if ((bRam0000000003eb62d2 & 1) == 0) {
      func_0x00f78a20(0x3d1fae0);
      func_0x00f78a20(0x3d216d0);
      func_0x00f78a20(0x3d69448);
      bRam0000000003eb62d2 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.AddressableAssets.Addressables$$InitializeAsync*/ func_0x02fb39a0(&uStack_140,0);
    lVar12 = /*UnityEngine.AddressableAssets.Addressables$$get_ResourceManager*/ func_0x02fb2018(0);
    plVar6 = (long *)func_0x00f78aec(/*System.Exception_TypeInfo*/ uRam0000000003d216d0);
    /*System.Exception$$.ctor*/ func_0x02acc6e8(plVar6,/*STR('Attempting to load an asset reference that has no asset assigned to it.')*/ uRam0000000003d69448,0);
    if ((plVar6 != (long *)0x0) &&
       (uVar7 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400)), lVar12 != 0))
    {
      lVar12 = (**(code **)**(undefined8 **)(lVar11 + 0x30))(&uStack_140,lVar12,0,uVar7);
      extraout_x8[1] = uStack_138;
      *extraout_x8 = uStack_140;
      extraout_x8[3] = uStack_128;
      extraout_x8[2] = uStack_130;
      return lVar12;
    }
    auVar13 = func_0x00f78af4();
    plVar5 = auVar13._0_8_;
    puStack_148 = &UnityEngine_AddressableAssets_AssetReference__LoadAsset_object_;
    lStack_160 = lVar11;
    ppppuStack_150 = &pppuStack_f0;
    if (plVar5 != (long *)0x0) {
      puVar3 = (undefined8 *)
               func_0x00f78acc(*(undefined8 *)
                                (*plVar5 + (ulong)*(ushort *)
                                                   (**(long **)(auVar13._8_8_ + 0x30) + 0x48) * 0x10
                                + 0x140));
      lVar12 = (*(code *)*puVar3)(&uStack_180,plVar5,puVar3);
      extraout_x8_00[1] = uStack_178;
      *extraout_x8_00 = uStack_180;
      extraout_x8_00[3] = uStack_168;
      extraout_x8_00[2] = uStack_170;
      return lVar12;
    }
    auVar13 = func_0x00f78af4();
    lVar2 = auVar13._8_8_;
    plVar5 = auVar13._0_8_;
    puStack_188 = &UnityEngine_AddressableAssets_AssetReference__LoadAssetAsync_VideoClip_;
    plStack_1b0 = plVar6;
    lStack_1a8 = lVar12;
    lStack_1a0 = lVar11;
    pppppuStack_190 = &ppppuStack_150;
    if ((bRam0000000003eb62d3 & 1) == 0) {
      func_0x00f78a20(0x3d1fae0);
      func_0x00f78a20(0x3d210d8);
      func_0x00f78a20(0x3d69440);
      bRam0000000003eb62d3 = 1;
    }
    plVar6 = plVar5 + 5;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle$$IsValid*/ func_0x03171fec(plVar6,0);
    if (iVar1 == 0) {
      if (plVar5 == (long *)0x0) {
        auVar13 = func_0x00f78af4();
        lVar12 = auVar13._0_8_;
        puStack_238 = &
                      UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__Convert_object_
        ;
        plStack_260 = plVar5;
        plStack_258 = plVar6;
        lStack_250 = lVar2;
        ppppppuStack_240 = &pppppuStack_190;
        uVar7 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle$$get_InternalOp*/ func_0x03171c60(lVar12,0);
        uStack_278 = 0;
        uStack_280 = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        lVar12 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object>$$.ctor*/ func_0x01b564a4(&uStack_280,uVar7,*(undefined4 *)(lVar12 + 8),
                                 *(undefined8 *)(lVar12 + 0x10),
                                 *(undefined8 *)(*(long *)(auVar13._8_8_ + 0x30) + 8));
        extraout_x8_02[1] = uStack_278;
        *extraout_x8_02 = uStack_280;
        extraout_x8_02[3] = uStack_268;
        extraout_x8_02[2] = uStack_270;
        return lVar12;
      }
      uVar7 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      (**(code **)**(undefined8 **)(lVar2 + 0x30))(&uStack_1f0,uVar7);
      uStack_1c8 = uStack_1e8;
      uStack_1d0 = uStack_1f0;
      uStack_1b8 = uStack_1d8;
      uStack_1c0 = uStack_1e0;
      uStack_208 = uStack_1e8;
      uStack_210 = uStack_1f0;
      uStack_1f8 = uStack_1d8;
      uStack_200 = uStack_1e0;
      lVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 8))
                         (&lStack_228,&uStack_210,*(undefined8 *)(*(long *)(lVar2 + 0x30) + 8));
      plVar5[6] = lStack_220;
      *plVar6 = lStack_228;
      plVar5[7] = lStack_218;
    }
    else {
      if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar12 = /*UnityEngine.Debug$$LogError*/ func_0x0322b788(/*STR('Attempting to load AssetReference that has already been loaded. Handle is exposed through getter OperationHandle')*/ uRam0000000003d69440,0);
    }
    extraout_x8_01[1] = uStack_1c8;
    *extraout_x8_01 = uStack_1d0;
    extraout_x8_01[3] = uStack_1b8;
    extraout_x8_01[2] = uStack_1c0;
    return lVar12;
  }
  iVar1 = Core_Assets_AssetManager__TryGetLoadedAsset
                    (auVar13._0_8_,auVar13._8_8_ & 0xffffffff,&uStack_d8,0);
  uVar7 = uStack_d8;
  if (iVar1 != 0) {
    plVar5 = (long *)**(undefined8 **)(param_4 + 0x30);
    if ((*(ushort *)((long)plVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(plVar5);
    }
    uVar9 = func_0x00f78adc(uVar7,plVar5);
    lVar12 = **(long **)(param_4 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    if (uVar9 != 0) {
      plVar6 = (long *)func_0x00f78adc(uVar9,lVar12);
      param_3 = pplVar8;
      if (plVar6 != (long *)0x0) {
        *pplVar8 = plVar6;
        return 1;
      }
      goto code_r0x018189c0;
    }
  }
  *pplVar8 = (long *)0x0;
  return 0;
}



// ============================================================
// RVA: 0x18186e4 | Core.Assets.AssetManager.GetLoadedMultipleAssets<Shader>
// ============================================================

long Core_Assets_AssetManager__GetLoadedMultipleAssets_Shader_
               (long param_1,ulong param_2,long **param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long **pplVar7;
  long lVar8;
  long lVar9;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  ulong uVar10;
  int *piVar11;
  long unaff_x23;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  long *plStack_218;
  long lStack_210;
  undefined1 *****pppppuStack_200;
  undefined *puStack_1f8;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  long lStack_168;
  long lStack_160;
  undefined1 ****ppppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined1 ***pppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long *plStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long **pplStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  long *plStack_90;
  ulong uStack_88;
  long lStack_80;
  long **pplStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  long *plStack_58;
  
  pplVar7 = param_3;
  if ((bRam0000000003eb62d1 & 1) == 0) {
    func_0x00f78a20(0x3d1cf80);
    func_0x00f78a20(0x3d1d498);
    bRam0000000003eb62d1 = 1;
  }
  plStack_58 = (long *)0x0;
  lVar8 = 0;
  plVar4 = (long *)0x3eb6000;
  if (param_1 != 0) {
    pplVar7 = &plStack_58;
    param_4 = 0;
    iVar1 = Core_Assets_AssetManager__TryGetLoadedMultipleAssets(param_1,param_2 & 0xffffffff);
    plVar3 = plStack_58;
    if (iVar1 == 0) {
      return 0;
    }
    lVar8 = 0;
    if (plStack_58 != (long *)0x0) {
      lVar8 = *plStack_58;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.ICollection<Object>_TypeInfo*/ lRam0000000003d1cf80) {
            puVar2 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_018187b8;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      pplVar7 = (long **)0x0;
      puVar2 = (undefined8 *)func_0x00fac1f0(plStack_58);
LAB_018187b8:
      uVar10 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      lVar8 = *param_3[6];
      if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar8);
      }
      lVar8 = func_0x00f78a34(lVar8,uVar10);
      if ((int)uVar10 < 1) {
        return lVar8;
      }
      param_2 = 0;
      unaff_x24 = uVar10 & 0xffffffff;
      while (plVar4 = plStack_58, plStack_58 != (long *)0x0) {
        lVar9 = *plStack_58;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IList<Object>_TypeInfo*/ lRam0000000003d1d498) {
              puVar2 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x0181885c;
            }
            piVar11 = piVar11 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar2 = (undefined8 *)func_0x00fac1f0(plStack_58,/*System.Collections.Generic.IList<Object>_TypeInfo*/ lRam0000000003d1d498,0);
code_r0x0181885c:
        pplVar7 = (long **)puVar2[1];
        plVar3 = (long *)(*(code *)*puVar2)(plVar4,param_2);
        if (lVar8 == 0) break;
        unaff_x23 = param_3[6][1];
        if ((*(ushort *)(unaff_x23 + 0x132) & 1) == 0) {
          func_0x00fac028(unaff_x23);
        }
        if (plVar3 == (long *)0x0) {
          lVar9 = 0;
        }
        else {
          lVar9 = func_0x00f78adc(plVar3,unaff_x23);
          if (lVar9 == 0) goto code_r0x018188f8;
        }
        if (*(uint *)(lVar8 + 0x18) <= param_2) goto code_r0x018188ec;
        *(long *)(lVar8 + param_2 * 8 + 0x20) = lVar9;
        param_2 = param_2 + 1;
        if (param_2 == unaff_x24) {
          return lVar8;
        }
      }
    }
  }
  plVar3 = plVar4;
  func_0x00f78af4();
code_r0x018188ec:
  uVar5 = func_0x00f78b24();
  func_0x00f78ac0(uVar5,0);
code_r0x018188f8:
  auVar12 = func_0x00f78e5c(plVar3,unaff_x23);
  puStack_68 = &Core_Assets_AssetManager__TryGetLoadedAsset_object_;
  uStack_98 = 0;
  plStack_90 = plVar3;
  uStack_88 = param_2;
  lStack_80 = lVar8;
  pplStack_78 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  if (auVar12._0_8_ != 0) {
    iVar1 = Core_Assets_AssetManager__TryGetLoadedAsset
                      (auVar12._0_8_,auVar12._8_8_ & 0xffffffff,&uStack_98,0);
    uVar5 = uStack_98;
    if (iVar1 != 0) {
      plVar3 = (long *)**(undefined8 **)(param_4 + 0x30);
      if ((*(ushort *)((long)plVar3 + 0x132) & 1) == 0) {
        func_0x00fac028(plVar3);
      }
      param_2 = func_0x00f78adc(uVar5,plVar3);
      lVar8 = **(long **)(param_4 + 0x30);
      if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar8);
      }
      if (param_2 != 0) {
        plVar4 = (long *)func_0x00f78adc(param_2,lVar8);
        param_3 = pplVar7;
        if (plVar4 != (long *)0x0) {
          *pplVar7 = plVar4;
          return 1;
        }
        goto code_r0x018189c0;
      }
    }
    *pplVar7 = (long *)0x0;
    return 0;
  }
  func_0x00f78af4();
code_r0x018189c0:
  lVar9 = func_0x00f78e5c(param_2,lVar8);
  puStack_a8 = &UnityEngine_AddressableAssets_AssetReference__CreateFailedOperation_object_;
  uStack_e0 = unaff_x24;
  lStack_d8 = unaff_x23;
  plStack_d0 = plVar3;
  uStack_c8 = param_2;
  lStack_c0 = lVar8;
  pplStack_b8 = param_3;
  ppuStack_b0 = &puStack_70;
  if ((bRam0000000003eb62d2 & 1) == 0) {
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d216d0);
    func_0x00f78a20(0x3d69448);
    bRam0000000003eb62d2 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.AddressableAssets.Addressables$$InitializeAsync*/ func_0x02fb39a0(&uStack_100,0);
  lVar8 = /*UnityEngine.AddressableAssets.Addressables$$get_ResourceManager*/ func_0x02fb2018(0);
  plVar4 = (long *)func_0x00f78aec(/*System.Exception_TypeInfo*/ uRam0000000003d216d0);
  /*System.Exception$$.ctor*/ func_0x02acc6e8(plVar4,/*STR('Attempting to load an asset reference that has no asset assigned to it.')*/ uRam0000000003d69448,0);
  if ((plVar4 != (long *)0x0) &&
     (uVar5 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400)), lVar8 != 0)) {
    lVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x30))(&uStack_100,lVar8,0,uVar5);
    extraout_x8[1] = uStack_f8;
    *extraout_x8 = uStack_100;
    extraout_x8[3] = uStack_e8;
    extraout_x8[2] = uStack_f0;
    return lVar8;
  }
  auVar12 = func_0x00f78af4();
  plVar3 = auVar12._0_8_;
  puStack_108 = &UnityEngine_AddressableAssets_AssetReference__LoadAsset_object_;
  lStack_120 = lVar9;
  pppuStack_110 = &ppuStack_b0;
  if (plVar3 != (long *)0x0) {
    puVar2 = (undefined8 *)
             func_0x00f78acc(*(undefined8 *)
                              (*plVar3 + (ulong)*(ushort *)
                                                 (**(long **)(auVar12._8_8_ + 0x30) + 0x48) * 0x10 +
                              0x140));
    lVar8 = (*(code *)*puVar2)(&uStack_140,plVar3,puVar2);
    extraout_x8_00[1] = uStack_138;
    *extraout_x8_00 = uStack_140;
    extraout_x8_00[3] = uStack_128;
    extraout_x8_00[2] = uStack_130;
    return lVar8;
  }
  auVar12 = func_0x00f78af4();
  lVar6 = auVar12._8_8_;
  plVar3 = auVar12._0_8_;
  puStack_148 = &UnityEngine_AddressableAssets_AssetReference__LoadAssetAsync_VideoClip_;
  plStack_170 = plVar4;
  lStack_168 = lVar8;
  lStack_160 = lVar9;
  ppppuStack_150 = &pppuStack_110;
  if ((bRam0000000003eb62d3 & 1) == 0) {
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d69440);
    bRam0000000003eb62d3 = 1;
  }
  plVar4 = plVar3 + 5;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle$$IsValid*/ func_0x03171fec(plVar4,0);
  if (iVar1 == 0) {
    if (plVar3 == (long *)0x0) {
      auVar12 = func_0x00f78af4();
      lVar8 = auVar12._0_8_;
      puStack_1f8 = &
                    UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__Convert_object_
      ;
      plStack_220 = plVar3;
      plStack_218 = plVar4;
      lStack_210 = lVar6;
      pppppuStack_200 = &ppppuStack_150;
      uVar5 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle$$get_InternalOp*/ func_0x03171c60(lVar8,0);
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      lVar8 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object>$$.ctor*/ func_0x01b564a4(&uStack_240,uVar5,*(undefined4 *)(lVar8 + 8),
                              *(undefined8 *)(lVar8 + 0x10),
                              *(undefined8 *)(*(long *)(auVar12._8_8_ + 0x30) + 8));
      extraout_x8_02[1] = uStack_238;
      *extraout_x8_02 = uStack_240;
      extraout_x8_02[3] = uStack_228;
      extraout_x8_02[2] = uStack_230;
      return lVar8;
    }
    uVar5 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
    if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    (**(code **)**(undefined8 **)(lVar6 + 0x30))(&uStack_1b0,uVar5);
    uStack_188 = uStack_1a8;
    uStack_190 = uStack_1b0;
    uStack_178 = uStack_198;
    uStack_180 = uStack_1a0;
    uStack_1c8 = uStack_1a8;
    uStack_1d0 = uStack_1b0;
    uStack_1b8 = uStack_198;
    uStack_1c0 = uStack_1a0;
    lVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 8))
                      (&lStack_1e8,&uStack_1d0,*(undefined8 *)(*(long *)(lVar6 + 0x30) + 8));
    plVar3[6] = lStack_1e0;
    *plVar4 = lStack_1e8;
    plVar3[7] = lStack_1d8;
  }
  else {
    if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = /*UnityEngine.Debug$$LogError*/ func_0x0322b788(/*STR('Attempting to load AssetReference that has already been loaded. Handle is exposed through getter OperationHandle')*/ uRam0000000003d69440,0);
  }
  extraout_x8_01[1] = uStack_188;
  *extraout_x8_01 = uStack_190;
  extraout_x8_01[3] = uStack_178;
  extraout_x8_01[2] = uStack_180;
  return lVar8;
}



// ============================================================
// RVA: 0x18186e4 | Core.Assets.AssetManager.GetLoadedMultipleAssets<object>
// ============================================================

long Core_Assets_AssetManager__GetLoadedMultipleAssets_Shader_
               (long param_1,ulong param_2,long **param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long **pplVar7;
  long lVar8;
  long lVar9;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  ulong uVar10;
  int *piVar11;
  long unaff_x23;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  long *plStack_218;
  long lStack_210;
  undefined1 *****pppppuStack_200;
  undefined *puStack_1f8;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  long lStack_168;
  long lStack_160;
  undefined1 ****ppppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined1 ***pppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long *plStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long **pplStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  long *plStack_90;
  ulong uStack_88;
  long lStack_80;
  long **pplStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  long *plStack_58;
  
  pplVar7 = param_3;
  if ((bRam0000000003eb62d1 & 1) == 0) {
    func_0x00f78a20(0x3d1cf80);
    func_0x00f78a20(0x3d1d498);
    bRam0000000003eb62d1 = 1;
  }
  plStack_58 = (long *)0x0;
  lVar8 = 0;
  plVar4 = (long *)0x3eb6000;
  if (param_1 != 0) {
    pplVar7 = &plStack_58;
    param_4 = 0;
    iVar1 = Core_Assets_AssetManager__TryGetLoadedMultipleAssets(param_1,param_2 & 0xffffffff);
    plVar3 = plStack_58;
    if (iVar1 == 0) {
      return 0;
    }
    lVar8 = 0;
    if (plStack_58 != (long *)0x0) {
      lVar8 = *plStack_58;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.ICollection<Object>_TypeInfo*/ lRam0000000003d1cf80) {
            puVar2 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_018187b8;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      pplVar7 = (long **)0x0;
      puVar2 = (undefined8 *)func_0x00fac1f0(plStack_58);
LAB_018187b8:
      uVar10 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      lVar8 = *param_3[6];
      if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar8);
      }
      lVar8 = func_0x00f78a34(lVar8,uVar10);
      if ((int)uVar10 < 1) {
        return lVar8;
      }
      param_2 = 0;
      unaff_x24 = uVar10 & 0xffffffff;
      while (plVar4 = plStack_58, plStack_58 != (long *)0x0) {
        lVar9 = *plStack_58;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IList<Object>_TypeInfo*/ lRam0000000003d1d498) {
              puVar2 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x0181885c;
            }
            piVar11 = piVar11 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar2 = (undefined8 *)func_0x00fac1f0(plStack_58,/*System.Collections.Generic.IList<Object>_TypeInfo*/ lRam0000000003d1d498,0);
code_r0x0181885c:
        pplVar7 = (long **)puVar2[1];
        plVar3 = (long *)(*(code *)*puVar2)(plVar4,param_2);
        if (lVar8 == 0) break;
        unaff_x23 = param_3[6][1];
        if ((*(ushort *)(unaff_x23 + 0x132) & 1) == 0) {
          func_0x00fac028(unaff_x23);
        }
        if (plVar3 == (long *)0x0) {
          lVar9 = 0;
        }
        else {
          lVar9 = func_0x00f78adc(plVar3,unaff_x23);
          if (lVar9 == 0) goto code_r0x018188f8;
        }
        if (*(uint *)(lVar8 + 0x18) <= param_2) goto code_r0x018188ec;
        *(long *)(lVar8 + param_2 * 8 + 0x20) = lVar9;
        param_2 = param_2 + 1;
        if (param_2 == unaff_x24) {
          return lVar8;
        }
      }
    }
  }
  plVar3 = plVar4;
  func_0x00f78af4();
code_r0x018188ec:
  uVar5 = func_0x00f78b24();
  func_0x00f78ac0(uVar5,0);
code_r0x018188f8:
  auVar12 = func_0x00f78e5c(plVar3,unaff_x23);
  puStack_68 = &Core_Assets_AssetManager__TryGetLoadedAsset_object_;
  uStack_98 = 0;
  plStack_90 = plVar3;
  uStack_88 = param_2;
  lStack_80 = lVar8;
  pplStack_78 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  if (auVar12._0_8_ != 0) {
    iVar1 = Core_Assets_AssetManager__TryGetLoadedAsset
                      (auVar12._0_8_,auVar12._8_8_ & 0xffffffff,&uStack_98,0);
    uVar5 = uStack_98;
    if (iVar1 != 0) {
      plVar3 = (long *)**(undefined8 **)(param_4 + 0x30);
      if ((*(ushort *)((long)plVar3 + 0x132) & 1) == 0) {
        func_0x00fac028(plVar3);
      }
      param_2 = func_0x00f78adc(uVar5,plVar3);
      lVar8 = **(long **)(param_4 + 0x30);
      if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar8);
      }
      if (param_2 != 0) {
        plVar4 = (long *)func_0x00f78adc(param_2,lVar8);
        param_3 = pplVar7;
        if (plVar4 != (long *)0x0) {
          *pplVar7 = plVar4;
          return 1;
        }
        goto code_r0x018189c0;
      }
    }
    *pplVar7 = (long *)0x0;
    return 0;
  }
  func_0x00f78af4();
code_r0x018189c0:
  lVar9 = func_0x00f78e5c(param_2,lVar8);
  puStack_a8 = &UnityEngine_AddressableAssets_AssetReference__CreateFailedOperation_object_;
  uStack_e0 = unaff_x24;
  lStack_d8 = unaff_x23;
  plStack_d0 = plVar3;
  uStack_c8 = param_2;
  lStack_c0 = lVar8;
  pplStack_b8 = param_3;
  ppuStack_b0 = &puStack_70;
  if ((bRam0000000003eb62d2 & 1) == 0) {
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d216d0);
    func_0x00f78a20(0x3d69448);
    bRam0000000003eb62d2 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.AddressableAssets.Addressables$$InitializeAsync*/ func_0x02fb39a0(&uStack_100,0);
  lVar8 = /*UnityEngine.AddressableAssets.Addressables$$get_ResourceManager*/ func_0x02fb2018(0);
  plVar4 = (long *)func_0x00f78aec(/*System.Exception_TypeInfo*/ uRam0000000003d216d0);
  /*System.Exception$$.ctor*/ func_0x02acc6e8(plVar4,/*STR('Attempting to load an asset reference that has no asset assigned to it.')*/ uRam0000000003d69448,0);
  if ((plVar4 != (long *)0x0) &&
     (uVar5 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400)), lVar8 != 0)) {
    lVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x30))(&uStack_100,lVar8,0,uVar5);
    extraout_x8[1] = uStack_f8;
    *extraout_x8 = uStack_100;
    extraout_x8[3] = uStack_e8;
    extraout_x8[2] = uStack_f0;
    return lVar8;
  }
  auVar12 = func_0x00f78af4();
  plVar3 = auVar12._0_8_;
  puStack_108 = &UnityEngine_AddressableAssets_AssetReference__LoadAsset_object_;
  lStack_120 = lVar9;
  pppuStack_110 = &ppuStack_b0;
  if (plVar3 != (long *)0x0) {
    puVar2 = (undefined8 *)
             func_0x00f78acc(*(undefined8 *)
                              (*plVar3 + (ulong)*(ushort *)
                                                 (**(long **)(auVar12._8_8_ + 0x30) + 0x48) * 0x10 +
                              0x140));
    lVar8 = (*(code *)*puVar2)(&uStack_140,plVar3,puVar2);
    extraout_x8_00[1] = uStack_138;
    *extraout_x8_00 = uStack_140;
    extraout_x8_00[3] = uStack_128;
    extraout_x8_00[2] = uStack_130;
    return lVar8;
  }
  auVar12 = func_0x00f78af4();
  lVar6 = auVar12._8_8_;
  plVar3 = auVar12._0_8_;
  puStack_148 = &UnityEngine_AddressableAssets_AssetReference__LoadAssetAsync_VideoClip_;
  plStack_170 = plVar4;
  lStack_168 = lVar8;
  lStack_160 = lVar9;
  ppppuStack_150 = &pppuStack_110;
  if ((bRam0000000003eb62d3 & 1) == 0) {
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d69440);
    bRam0000000003eb62d3 = 1;
  }
  plVar4 = plVar3 + 5;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle$$IsValid*/ func_0x03171fec(plVar4,0);
  if (iVar1 == 0) {
    if (plVar3 == (long *)0x0) {
      auVar12 = func_0x00f78af4();
      lVar8 = auVar12._0_8_;
      puStack_1f8 = &
                    UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__Convert_object_
      ;
      plStack_220 = plVar3;
      plStack_218 = plVar4;
      lStack_210 = lVar6;
      pppppuStack_200 = &ppppuStack_150;
      uVar5 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle$$get_InternalOp*/ func_0x03171c60(lVar8,0);
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      lVar8 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object>$$.ctor*/ func_0x01b564a4(&uStack_240,uVar5,*(undefined4 *)(lVar8 + 8),
                              *(undefined8 *)(lVar8 + 0x10),
                              *(undefined8 *)(*(long *)(auVar12._8_8_ + 0x30) + 8));
      extraout_x8_02[1] = uStack_238;
      *extraout_x8_02 = uStack_240;
      extraout_x8_02[3] = uStack_228;
      extraout_x8_02[2] = uStack_230;
      return lVar8;
    }
    uVar5 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
    if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    (**(code **)**(undefined8 **)(lVar6 + 0x30))(&uStack_1b0,uVar5);
    uStack_188 = uStack_1a8;
    uStack_190 = uStack_1b0;
    uStack_178 = uStack_198;
    uStack_180 = uStack_1a0;
    uStack_1c8 = uStack_1a8;
    uStack_1d0 = uStack_1b0;
    uStack_1b8 = uStack_198;
    uStack_1c0 = uStack_1a0;
    lVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 8))
                      (&lStack_1e8,&uStack_1d0,*(undefined8 *)(*(long *)(lVar6 + 0x30) + 8));
    plVar3[6] = lStack_1e0;
    *plVar4 = lStack_1e8;
    plVar3[7] = lStack_1d8;
  }
  else {
    if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = /*UnityEngine.Debug$$LogError*/ func_0x0322b788(/*STR('Attempting to load AssetReference that has already been loaded. Handle is exposed through getter OperationHandle')*/ uRam0000000003d69440,0);
  }
  extraout_x8_01[1] = uStack_188;
  *extraout_x8_01 = uStack_190;
  extraout_x8_01[3] = uStack_178;
  extraout_x8_01[2] = uStack_180;
  return lVar8;
}



// ============================================================
// RVA: 0x1818904 | Core.Assets.AssetManager.TryGetLoadedAsset<GameObject>
// ============================================================

undefined8
Core_Assets_AssetManager__TryGetLoadedAsset_GameObject_
          (long param_1,undefined4 param_2,long *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long lStack_1b0;
  undefined8 ***pppuStack_1a0;
  undefined *puStack_198;
  long lStack_188;
  long lStack_180;
  long lStack_178;
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
  long *plStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  if (param_1 == 0) {
    func_0x00f78af4();
LAB_018189c0:
    lVar8 = func_0x00f78e5c(unaff_x21,unaff_x20);
    puStack_48 = &UnityEngine_AddressableAssets_AssetReference__CreateFailedOperation_object_;
    puStack_50 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb62d2 & 1) == 0) {
      func_0x00f78a20(0x3d1fae0);
      func_0x00f78a20(0x3d216d0);
      func_0x00f78a20(0x3d69448);
      bRam0000000003eb62d2 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.AddressableAssets.Addressables$$InitializeAsync*/ func_0x02fb39a0(&uStack_a0,0);
    lVar2 = /*UnityEngine.AddressableAssets.Addressables$$get_ResourceManager*/ func_0x02fb2018(0);
    plVar3 = (long *)func_0x00f78aec(/*System.Exception_TypeInfo*/ uRam0000000003d216d0);
    /*System.Exception$$.ctor*/ func_0x02acc6e8(plVar3,/*STR('Attempting to load an asset reference that has no asset assigned to it.')*/ uRam0000000003d69448,0);
    if ((plVar3 != (long *)0x0) &&
       (uVar4 = (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400)), lVar2 != 0))
    {
      uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x30))(&uStack_a0,lVar2,0,uVar4);
      extraout_x8[1] = uStack_98;
      *extraout_x8 = uStack_a0;
      extraout_x8[3] = uStack_88;
      extraout_x8[2] = uStack_90;
      return uVar4;
    }
    auVar9 = func_0x00f78af4();
    plVar5 = auVar9._0_8_;
    puStack_a8 = &UnityEngine_AddressableAssets_AssetReference__LoadAsset_object_;
    lStack_c0 = lVar8;
    ppuStack_b0 = &puStack_50;
    if (plVar5 != (long *)0x0) {
      puVar6 = (undefined8 *)
               func_0x00f78acc(*(undefined8 *)
                                (*plVar5 + (ulong)*(ushort *)
                                                   (**(long **)(auVar9._8_8_ + 0x30) + 0x48) * 0x10
                                + 0x140));
      uVar4 = (*(code *)*puVar6)(&uStack_e0,plVar5,puVar6);
      extraout_x8_00[1] = uStack_d8;
      *extraout_x8_00 = uStack_e0;
      extraout_x8_00[3] = uStack_c8;
      extraout_x8_00[2] = uStack_d0;
      return uVar4;
    }
    auVar9 = func_0x00f78af4();
    lVar7 = auVar9._8_8_;
    plVar5 = auVar9._0_8_;
    puStack_e8 = &UnityEngine_AddressableAssets_AssetReference__LoadAssetAsync_VideoClip_;
    plStack_110 = plVar3;
    lStack_108 = lVar2;
    lStack_100 = lVar8;
    pppuStack_f0 = &ppuStack_b0;
    if ((bRam0000000003eb62d3 & 1) == 0) {
      func_0x00f78a20(0x3d1fae0);
      func_0x00f78a20(0x3d210d8);
      func_0x00f78a20(0x3d69440);
      bRam0000000003eb62d3 = 1;
    }
    plVar3 = plVar5 + 5;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle$$IsValid*/ func_0x03171fec(plVar3,0);
    if (iVar1 == 0) {
      if (plVar5 == (long *)0x0) {
        auVar9 = func_0x00f78af4();
        lVar8 = auVar9._0_8_;
        puStack_198 = &
                      UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__Convert_object_
        ;
        plStack_1c0 = plVar5;
        plStack_1b8 = plVar3;
        lStack_1b0 = lVar7;
        pppuStack_1a0 = &pppuStack_f0;
        uVar4 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle$$get_InternalOp*/ func_0x03171c60(lVar8,0);
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uVar4 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object>$$.ctor*/ func_0x01b564a4(&uStack_1e0,uVar4,*(undefined4 *)(lVar8 + 8),
                                *(undefined8 *)(lVar8 + 0x10),
                                *(undefined8 *)(*(long *)(auVar9._8_8_ + 0x30) + 8));
        extraout_x8_02[1] = uStack_1d8;
        *extraout_x8_02 = uStack_1e0;
        extraout_x8_02[3] = uStack_1c8;
        extraout_x8_02[2] = uStack_1d0;
        return uVar4;
      }
      uVar4 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      (**(code **)**(undefined8 **)(lVar7 + 0x30))(&uStack_150,uVar4);
      uStack_128 = uStack_148;
      uStack_130 = uStack_150;
      uStack_118 = uStack_138;
      uStack_120 = uStack_140;
      uStack_168 = uStack_148;
      uStack_170 = uStack_150;
      uStack_158 = uStack_138;
      uStack_160 = uStack_140;
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8))
                        (&lStack_188,&uStack_170,*(undefined8 *)(*(long *)(lVar7 + 0x30) + 8));
      plVar5[6] = lStack_180;
      *plVar3 = lStack_188;
      plVar5[7] = lStack_178;
    }
    else {
      if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = /*UnityEngine.Debug$$LogError*/ func_0x0322b788(/*STR('Attempting to load AssetReference that has already been loaded. Handle is exposed through getter OperationHandle')*/ uRam0000000003d69440,0);
    }
    extraout_x8_01[1] = uStack_128;
    *extraout_x8_01 = uStack_130;
    extraout_x8_01[3] = uStack_118;
    extraout_x8_01[2] = uStack_120;
    return uVar4;
  }
  iVar1 = Core_Assets_AssetManager__TryGetLoadedAsset(param_1,param_2,&uStack_38,0);
  uVar4 = uStack_38;
  if (iVar1 != 0) {
    lVar8 = **(long **)(param_4 + 0x30);
    if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar8);
    }
    unaff_x21 = func_0x00f78adc(uVar4,lVar8);
    unaff_x20 = **(long **)(param_4 + 0x30);
    if ((*(ushort *)(unaff_x20 + 0x132) & 1) == 0) {
      func_0x00fac028(unaff_x20);
    }
    if (unaff_x21 != 0) {
      lVar8 = func_0x00f78adc(unaff_x21,unaff_x20);
      if (lVar8 != 0) {
        *param_3 = lVar8;
        return 1;
      }
      goto LAB_018189c0;
    }
  }
  *param_3 = 0;
  return 0;
}



// ============================================================
// RVA: 0x1818904 | Core.Assets.AssetManager.TryGetLoadedAsset<object>
// ============================================================

undefined8
Core_Assets_AssetManager__TryGetLoadedAsset_GameObject_
          (long param_1,undefined4 param_2,long *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long lStack_1b0;
  undefined8 ***pppuStack_1a0;
  undefined *puStack_198;
  long lStack_188;
  long lStack_180;
  long lStack_178;
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
  long *plStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  if (param_1 == 0) {
    func_0x00f78af4();
LAB_018189c0:
    lVar8 = func_0x00f78e5c(unaff_x21,unaff_x20);
    puStack_48 = &UnityEngine_AddressableAssets_AssetReference__CreateFailedOperation_object_;
    puStack_50 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb62d2 & 1) == 0) {
      func_0x00f78a20(0x3d1fae0);
      func_0x00f78a20(0x3d216d0);
      func_0x00f78a20(0x3d69448);
      bRam0000000003eb62d2 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.AddressableAssets.Addressables$$InitializeAsync*/ func_0x02fb39a0(&uStack_a0,0);
    lVar2 = /*UnityEngine.AddressableAssets.Addressables$$get_ResourceManager*/ func_0x02fb2018(0);
    plVar3 = (long *)func_0x00f78aec(/*System.Exception_TypeInfo*/ uRam0000000003d216d0);
    /*System.Exception$$.ctor*/ func_0x02acc6e8(plVar3,/*STR('Attempting to load an asset reference that has no asset assigned to it.')*/ uRam0000000003d69448,0);
    if ((plVar3 != (long *)0x0) &&
       (uVar4 = (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400)), lVar2 != 0))
    {
      uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x30))(&uStack_a0,lVar2,0,uVar4);
      extraout_x8[1] = uStack_98;
      *extraout_x8 = uStack_a0;
      extraout_x8[3] = uStack_88;
      extraout_x8[2] = uStack_90;
      return uVar4;
    }
    auVar9 = func_0x00f78af4();
    plVar5 = auVar9._0_8_;
    puStack_a8 = &UnityEngine_AddressableAssets_AssetReference__LoadAsset_object_;
    lStack_c0 = lVar8;
    ppuStack_b0 = &puStack_50;
    if (plVar5 != (long *)0x0) {
      puVar6 = (undefined8 *)
               func_0x00f78acc(*(undefined8 *)
                                (*plVar5 + (ulong)*(ushort *)
                                                   (**(long **)(auVar9._8_8_ + 0x30) + 0x48) * 0x10
                                + 0x140));
      uVar4 = (*(code *)*puVar6)(&uStack_e0,plVar5,puVar6);
      extraout_x8_00[1] = uStack_d8;
      *extraout_x8_00 = uStack_e0;
      extraout_x8_00[3] = uStack_c8;
      extraout_x8_00[2] = uStack_d0;
      return uVar4;
    }
    auVar9 = func_0x00f78af4();
    lVar7 = auVar9._8_8_;
    plVar5 = auVar9._0_8_;
    puStack_e8 = &UnityEngine_AddressableAssets_AssetReference__LoadAssetAsync_VideoClip_;
    plStack_110 = plVar3;
    lStack_108 = lVar2;
    lStack_100 = lVar8;
    pppuStack_f0 = &ppuStack_b0;
    if ((bRam0000000003eb62d3 & 1) == 0) {
      func_0x00f78a20(0x3d1fae0);
      func_0x00f78a20(0x3d210d8);
      func_0x00f78a20(0x3d69440);
      bRam0000000003eb62d3 = 1;
    }
    plVar3 = plVar5 + 5;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle$$IsValid*/ func_0x03171fec(plVar3,0);
    if (iVar1 == 0) {
      if (plVar5 == (long *)0x0) {
        auVar9 = func_0x00f78af4();
        lVar8 = auVar9._0_8_;
        puStack_198 = &
                      UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__Convert_object_
        ;
        plStack_1c0 = plVar5;
        plStack_1b8 = plVar3;
        lStack_1b0 = lVar7;
        pppuStack_1a0 = &pppuStack_f0;
        uVar4 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle$$get_InternalOp*/ func_0x03171c60(lVar8,0);
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uVar4 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object>$$.ctor*/ func_0x01b564a4(&uStack_1e0,uVar4,*(undefined4 *)(lVar8 + 8),
                                *(undefined8 *)(lVar8 + 0x10),
                                *(undefined8 *)(*(long *)(auVar9._8_8_ + 0x30) + 8));
        extraout_x8_02[1] = uStack_1d8;
        *extraout_x8_02 = uStack_1e0;
        extraout_x8_02[3] = uStack_1c8;
        extraout_x8_02[2] = uStack_1d0;
        return uVar4;
      }
      uVar4 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      (**(code **)**(undefined8 **)(lVar7 + 0x30))(&uStack_150,uVar4);
      uStack_128 = uStack_148;
      uStack_130 = uStack_150;
      uStack_118 = uStack_138;
      uStack_120 = uStack_140;
      uStack_168 = uStack_148;
      uStack_170 = uStack_150;
      uStack_158 = uStack_138;
      uStack_160 = uStack_140;
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8))
                        (&lStack_188,&uStack_170,*(undefined8 *)(*(long *)(lVar7 + 0x30) + 8));
      plVar5[6] = lStack_180;
      *plVar3 = lStack_188;
      plVar5[7] = lStack_178;
    }
    else {
      if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = /*UnityEngine.Debug$$LogError*/ func_0x0322b788(/*STR('Attempting to load AssetReference that has already been loaded. Handle is exposed through getter OperationHandle')*/ uRam0000000003d69440,0);
    }
    extraout_x8_01[1] = uStack_128;
    *extraout_x8_01 = uStack_130;
    extraout_x8_01[3] = uStack_118;
    extraout_x8_01[2] = uStack_120;
    return uVar4;
  }
  iVar1 = Core_Assets_AssetManager__TryGetLoadedAsset(param_1,param_2,&uStack_38,0);
  uVar4 = uStack_38;
  if (iVar1 != 0) {
    lVar8 = **(long **)(param_4 + 0x30);
    if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar8);
    }
    unaff_x21 = func_0x00f78adc(uVar4,lVar8);
    unaff_x20 = **(long **)(param_4 + 0x30);
    if ((*(ushort *)(unaff_x20 + 0x132) & 1) == 0) {
      func_0x00fac028(unaff_x20);
    }
    if (unaff_x21 != 0) {
      lVar8 = func_0x00f78adc(unaff_x21,unaff_x20);
      if (lVar8 != 0) {
        *param_3 = lVar8;
        return 1;
      }
      goto LAB_018189c0;
    }
  }
  *param_3 = 0;
  return 0;
}



