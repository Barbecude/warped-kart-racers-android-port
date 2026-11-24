// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.FTUE.BaseLayerToolTipManager

// ============================================================
// RVA: 0x1536fe0 | Atlas.Gameplay.FTUE.BaseLayerToolTipManager.Init
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1536fec | Atlas.Gameplay.FTUE.BaseLayerToolTipManager.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x01537040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015371e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153734c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015371e8) */
/* WARNING: Removing unreachable block (ram,0x015371f0) */
/* WARNING: Removing unreachable block (ram,0x01537044) */
/* WARNING: Removing unreachable block (ram,0x01537350) */
/* WARNING: Removing unreachable block (ram,0x01537358) */
/* WARNING: Removing unreachable block (ram,0x01537364) */
/* WARNING: Removing unreachable block (ram,0x0153736c) */
/* WARNING: Removing unreachable block (ram,0x01537394) */
/* WARNING: Removing unreachable block (ram,0x015373a0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */

void Atlas_Gameplay_FTUE_BaseLayerToolTipManager__DeInit(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  int iVar11;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******pppppppuVar12;
  undefined *puVar13;
  float extraout_s0;
  float fVar14;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar15 [16];
  undefined8 ******ppppppuStack_30;
  undefined *puStack_28;
  
  pppppppuVar12 = (undefined8 *******)&stack0xfffffffffffffff0;
  uVar9 = 0x3eb4000;
  if ((bRam0000000003eb4ed3 & 1) == 0) {
    func_0x00f78a20(0x3d3e190);
    bRam0000000003eb4ed3 = 1;
  }
  /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(param_1,0);
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    lVar7 = func_0x00f78af4();
    puVar4 = &stack0xffffffffffffffb0;
    ppppppuStack_30 = pppppppuVar12;
    puStack_28 = &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__Update;
    pppppppuVar12 = &ppppppuStack_30;
    uVar10 = 0x3eb4000;
    if ((bRam0000000003eb4ed4 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      bRam0000000003eb4ed4 = 1;
    }
    if ((*(float *)(lVar7 + 0x30) <= 0.0) ||
       (fVar14 = *(float *)(lVar7 + 0x30) - extraout_s0, *(float *)(lVar7 + 0x30) = fVar14,
       0.0 < fVar14)) {
      return;
    }
    if (*(long *)(lVar7 + 0x18) == 0) {
      puVar13 = &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__QueueToolTip;
      lVar6 = func_0x00f78af4();
      unaff_d8 = (ulong)(uint)extraout_s0;
    }
    else {
      if (*(int *)(*(long *)(lVar7 + 0x18) + 0x18) <= *(int *)(lVar7 + 0x34)) {
        uVar9 = 0x3eb4000;
        puVar3 = &stack0xffffffffffffffe0;
        pppppppuVar12 = (undefined8 *******)ppppppuStack_30;
        puVar13 = puStack_28;
        goto code_r0x0153722c;
      }
      uVar10 = 0x3eb4000;
      puVar4 = &stack0xffffffffffffffe0;
      lVar6 = lVar7;
      lVar7 = param_1;
      pppppppuVar12 = (undefined8 *******)ppppppuStack_30;
      puVar13 = puStack_28;
    }
    do {
      puVar3 = puVar4 + -0x40;
      *(undefined8 *)(puVar4 + -0x40) = unaff_d9;
      *(ulong *)(puVar4 + -0x38) = unaff_d8;
      *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
      *(long *)(puVar4 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar4 + -0x20) = uVar10;
      *(long *)(puVar4 + -0x18) = lVar7;
      *(undefined8 ********)(puVar4 + -0x10) = pppppppuVar12;
      *(undefined **)(puVar4 + -8) = puVar13;
      pppppppuVar12 = (undefined8 *******)(puVar4 + -0x10);
      if ((bRam0000000003eb4ed6 & 1) == 0) {
        func_0x00f78a20(0x3d3cd60);
        func_0x00f78a20(0x3d3cd68);
        func_0x00f78a20(0x3d3e188);
        func_0x00f78a20(0x3d3e190);
        func_0x00f78a20(0x3d717f0);
        bRam0000000003eb4ed6 = 1;
      }
      uVar9 = *(ulong *)(lVar6 + 0x18);
      param_1 = lVar6;
      if (uVar9 != 0) {
        uVar2 = *(uint *)(lVar6 + 0x34);
        unaff_x21 = (long)(int)uVar2;
        if ((int)*(uint *)(uVar9 + 0x18) <= (int)uVar2) {
          return;
        }
        if (*(uint *)(uVar9 + 0x18) <= uVar2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar8 = *(long *)(uVar9 + 0x10) + unaff_x21 * 0x18;
        lVar7 = *(long *)(lVar8 + 0x28);
        unaff_d8 = (ulong)*(uint *)(lVar8 + 0x30);
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar8 + 0x20);
        if (lVar7 != 0) {
          *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar7 + 0x28);
          uVar9 = /*Atlas.UI.ToolTipManager.ToolTipData$$Copy*/ func_0x0156b4ec(lVar7,0);
          uVar10 = /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$GetCurrentToolTipLocalisationKey*/ func_0x0153744c(lVar6);
          if (uVar9 != 0) {
            *(undefined8 *)(uVar9 + 0x28) = uVar10;
            lVar6 = *(long *)(lVar6 + 0x10);
            if (lVar6 != 0) {
              puVar13 = &UNK_015371e8;
              puVar5 = puVar4 + -0x40;
              goto code_r0x025e0480;
            }
          }
        }
      }
      lVar7 = func_0x00f78af4();
      puVar13 = &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__HideCurrentModal;
code_r0x0153722c:
      *(ulong *)(puVar3 + -0x20) = uVar9;
      *(long *)(puVar3 + -0x18) = param_1;
      *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar12;
      *(undefined **)(puVar3 + -8) = puVar13;
      if ((bRam0000000003eb4ed9 & 1) == 0) {
        func_0x00f78a20(0x3d3e190);
        func_0x00f78a20(0x3d75d18);
        bRam0000000003eb4ed9 = 1;
      }
      *(undefined8 *)(lVar7 + 0x28) = 0;
      *(undefined8 *)(lVar7 + 0x30) = 0xbf800000;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(undefined8 *)(lVar7 + 0x20) = 0;
      lVar6 = *(long *)(lVar7 + 0x10);
      if (lVar6 != 0) {
        pppppppuVar12 = *(undefined8 ********)(puVar3 + -0x10);
        puVar13 = *(undefined **)(puVar3 + -8);
        uVar9 = *(ulong *)(puVar3 + -0x20);
        param_1 = *(long *)(puVar3 + -0x18);
        puVar5 = puVar3;
        goto code_r0x025e0480;
      }
      param_1 = func_0x00f78af4();
      if (*(float *)(param_1 + 0x30) <= 0.0) {
        return;
      }
      puVar5 = puVar3 + -0x50;
      *(undefined8 *)(puVar3 + -0x50) = unaff_x22;
      *(long *)(puVar3 + -0x48) = unaff_x21;
      *(undefined8 *)(puVar3 + -0x40) = 0x3eb4000;
      *(long *)(puVar3 + -0x38) = lVar7;
      *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
      *(undefined **)(puVar3 + -0x28) =
           &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__OnInputFamilyChanged;
      pppppppuVar12 = (undefined8 *******)(puVar3 + -0x30);
      if ((bRam0000000003eb4ed8 & 1) == 0) {
        func_0x00f78a20(0x3d3cd60);
        func_0x00f78a20(0x3d3cd68);
        func_0x00f78a20(0x3d3e188);
        func_0x00f78a20(0x3d3e190);
        func_0x00f78a20(0x3d6df50);
        bRam0000000003eb4ed8 = 1;
      }
      uVar2 = *(int *)(param_1 + 0x34) - 1;
      uVar9 = (ulong)uVar2;
      if ((int)uVar2 < 0) {
        return;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        if (*(int *)(*(long *)(param_1 + 0x18) + 0x18) <= (int)uVar2) {
          return;
        }
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 != 0) {
          puVar13 = &UNK_01537350;
          goto code_r0x025e0480;
        }
      }
      auVar15 = func_0x00f78af4();
      lVar7 = auVar15._8_8_;
      lVar6 = auVar15._0_8_;
      *(undefined8 *)(puVar3 + -0x80) = unaff_x22;
      *(long *)(puVar3 + -0x78) = unaff_x21;
      *(ulong *)(puVar3 + -0x70) = uVar9;
      *(long *)(puVar3 + -0x68) = param_1;
      *(undefined8 ********)(puVar3 + -0x60) = pppppppuVar12;
      *(undefined **)(puVar3 + -0x58) =
           &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__SetCurrentToolTipSequence;
      if ((bRam0000000003eb4ed5 & 1) == 0) {
        func_0x00f78a20(0x3d3cd60);
        bRam0000000003eb4ed5 = 1;
      }
      if ((lVar7 == 0) || (*(int *)(lVar7 + 0x18) == 0)) {
        return;
      }
      *(long *)(lVar6 + 0x18) = lVar7;
      *(undefined4 *)(lVar6 + 0x34) = 0;
      pppppppuVar12 = *(undefined8 ********)(puVar3 + -0x60);
      puVar13 = *(undefined **)(puVar3 + -0x58);
      uVar10 = *(undefined8 *)(puVar3 + -0x70);
      lVar7 = *(long *)(puVar3 + -0x68);
      puVar4 = puVar3 + -0x50;
      unaff_x22 = *(undefined8 *)(puVar3 + -0x80);
      unaff_x21 = *(long *)(puVar3 + -0x78);
    } while( true );
  }
  puVar13 = (undefined *)0x1537044;
  puVar5 = &stack0xffffffffffffffe0;
code_r0x025e0480:
  lVar7 = lRam0000000003d3e190;
  *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
  *(long *)(puVar5 + -0x28) = unaff_x21;
  *(ulong *)(puVar5 + -0x20) = uVar9;
  *(long *)(puVar5 + -0x18) = param_1;
  *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar12;
  *(undefined **)(puVar5 + -8) = puVar13;
  if ((bRam0000000003eb8330 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    func_0x00f78a20(0x3d6bd58);
    bRam0000000003eb8330 = 1;
  }
  if (lVar6 != 0) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 8))
              (lVar6,/*STR('DismissAllQueuedAndShowing')*/ uRam0000000003d6bd58);
    if (*(long *)(lVar6 + 0x40) != 0) {
      lVar7 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0x10))(lVar6);
      if ((lVar7 == 0) || (*(long *)(lVar7 + 0x68) == 0)) goto code_r0x025e05fc;
      /*ModalBehaviour$$Dismiss*/ func_0x01496e90(*(long *)(lVar7 + 0x68),1,0);
      *(undefined8 *)(lVar6 + 0x40) = 0;
    }
    lVar7 = *(long *)(lVar6 + 0x38);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) + -1 < 0) {
        return;
      }
      iVar11 = *(int *)(lVar7 + 0x18) + -2;
      do {
        uVar2 = iVar11 + 1;
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          lVar1 = *(long *)(lVar7 + 0x10) + (ulong)uVar2 * 8;
          lVar8 = lVar7;
        }
        else {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar8 = *(long *)(lVar6 + 0x38);
          if (lVar8 == 0) break;
          lVar1 = *(long *)(lVar7 + 0x10) + (ulong)uVar2 * 8;
        }
        lVar7 = *(long *)(lVar1 + 0x20);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar8,uVar2,uRam0000000003d3b350);
        if (lVar7 == 0) break;
        lVar7 = *(long *)(lVar7 + 0x18);
        if (lVar7 != 0) {
          if (lVar7 == 0) break;
          /*UnityEngine.Events.UnityAction$$Invoke*/ func_0x03277c60(lVar7,0);
        }
        if (iVar11 < 0) {
          return;
        }
        lVar7 = *(long *)(lVar6 + 0x38);
        iVar11 = iVar11 + -1;
      } while (lVar7 != 0);
    }
  }
code_r0x025e05fc:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1537058 | Atlas.Gameplay.FTUE.BaseLayerToolTipManager.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x015371e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153734c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015371e8) */
/* WARNING: Removing unreachable block (ram,0x015371f0) */
/* WARNING: Removing unreachable block (ram,0x01537350) */
/* WARNING: Removing unreachable block (ram,0x01537358) */
/* WARNING: Removing unreachable block (ram,0x01537364) */
/* WARNING: Removing unreachable block (ram,0x0153736c) */
/* WARNING: Removing unreachable block (ram,0x01537394) */
/* WARNING: Removing unreachable block (ram,0x015373a0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */

void Atlas_Gameplay_FTUE_BaseLayerToolTipManager__Update(float param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  int iVar11;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar12;
  float fVar13;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar14 [16];
  
  puVar6 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ed4 & 1) == 0) {
    func_0x00f78a20(0x3d3cd60);
    bRam0000000003eb4ed4 = 1;
  }
  if ((*(float *)(param_2 + 0x30) <= 0.0) ||
     (fVar13 = *(float *)(param_2 + 0x30) - param_1, *(float *)(param_2 + 0x30) = fVar13,
     0.0 < fVar13)) {
    return;
  }
  if (*(long *)(param_2 + 0x18) == 0) {
    unaff_x30 = &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__QueueToolTip;
    lVar9 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_2;
    unaff_x20 = 0x3eb4000;
    unaff_x29 = puVar6;
    unaff_d8 = (ulong)(uint)param_1;
  }
  else {
    lVar9 = param_2;
    if (*(int *)(*(long *)(param_2 + 0x18) + 0x18) <= *(int *)(param_2 + 0x34))
    goto code_r0x0153722c;
  }
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if ((bRam0000000003eb4ed6 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      func_0x00f78a20(0x3d3cd68);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d3e190);
      func_0x00f78a20(0x3d717f0);
      bRam0000000003eb4ed6 = 1;
    }
    unaff_x20 = *(ulong *)(lVar9 + 0x18);
    if (unaff_x20 != 0) break;
code_r0x01537228:
    unaff_x30 = &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__HideCurrentModal;
    param_2 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    unaff_x19 = lVar9;
code_r0x0153722c:
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb4ed9 & 1) == 0) {
      func_0x00f78a20(0x3d3e190);
      func_0x00f78a20(0x3d75d18);
      bRam0000000003eb4ed9 = 1;
    }
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0xbf800000;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    lVar8 = *(long *)(param_2 + 0x10);
    if (lVar8 != 0) {
      unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
      puVar12 = *(undefined **)((long)register0x00000008 + -8);
      unaff_x20 = *(ulong *)((long)register0x00000008 + -0x20);
      lVar9 = *(long *)((long)register0x00000008 + -0x18);
      puVar6 = (undefined1 *)register0x00000008;
      goto code_r0x025e0480;
    }
    lVar9 = func_0x00f78af4();
    if (*(float *)(lVar9 + 0x30) <= 0.0) {
      return;
    }
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x50);
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x48) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0x3eb4000;
    *(long *)((long)register0x00000008 + -0x38) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x28) =
         &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__OnInputFamilyChanged;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x30);
    if ((bRam0000000003eb4ed8 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      func_0x00f78a20(0x3d3cd68);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d3e190);
      func_0x00f78a20(0x3d6df50);
      bRam0000000003eb4ed8 = 1;
    }
    uVar5 = *(int *)(lVar9 + 0x34) - 1;
    unaff_x20 = (ulong)uVar5;
    if ((int)uVar5 < 0) {
      return;
    }
    if (*(long *)(lVar9 + 0x18) != 0) {
      if (*(int *)(*(long *)(lVar9 + 0x18) + 0x18) <= (int)uVar5) {
        return;
      }
      lVar8 = *(long *)(lVar9 + 0x10);
      if (lVar8 != 0) {
        puVar12 = &UNK_01537350;
        goto code_r0x025e0480;
      }
    }
    auVar14 = func_0x00f78af4();
    lVar10 = auVar14._8_8_;
    lVar8 = auVar14._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x78) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x68) = lVar9;
    *(undefined1 **)((long)register0x00000008 + -0x60) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -0x58) =
         &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__SetCurrentToolTipSequence;
    if ((bRam0000000003eb4ed5 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      bRam0000000003eb4ed5 = 1;
    }
    if ((lVar10 == 0) || (*(int *)(lVar10 + 0x18) == 0)) {
      return;
    }
    *(long *)(lVar8 + 0x18) = lVar10;
    *(undefined4 *)(lVar8 + 0x34) = 0;
    plVar1 = (long *)((long)register0x00000008 + -0x60);
    unaff_x30 = *(undefined **)((long)register0x00000008 + -0x58);
    puVar2 = (ulong *)((long)register0x00000008 + -0x70);
    plVar4 = (long *)((long)register0x00000008 + -0x68);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x21 = *(long *)((long)register0x00000008 + -0x78);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    lVar9 = lVar8;
    unaff_x19 = *plVar4;
    unaff_x20 = *puVar2;
    unaff_x29 = (undefined1 *)*plVar1;
  }
  uVar5 = *(uint *)(lVar9 + 0x34);
  unaff_x21 = (long)(int)uVar5;
  if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)uVar5) {
    return;
  }
  if (*(uint *)(unaff_x20 + 0x18) <= uVar5) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar10 = *(long *)(unaff_x20 + 0x10) + unaff_x21 * 0x18;
  lVar8 = *(long *)(lVar10 + 0x28);
  unaff_d8 = (ulong)*(uint *)(lVar10 + 0x30);
  *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(lVar10 + 0x20);
  if (lVar8 == 0) goto code_r0x01537228;
  *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar8 + 0x28);
  unaff_x20 = /*Atlas.UI.ToolTipManager.ToolTipData$$Copy*/ func_0x0156b4ec(lVar8,0);
  uVar7 = /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$GetCurrentToolTipLocalisationKey*/ func_0x0153744c(lVar9);
  if (unaff_x20 == 0) goto code_r0x01537228;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar7;
  lVar8 = *(long *)(lVar9 + 0x10);
  if (lVar8 == 0) goto code_r0x01537228;
  puVar12 = &UNK_015371e8;
  puVar6 = (undefined1 *)((long)register0x00000008 + -0x40);
code_r0x025e0480:
  lVar10 = lRam0000000003d3e190;
  *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar6 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar6 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar6 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar6 + -0x30) = unaff_x22;
  *(long *)(puVar6 + -0x28) = unaff_x21;
  *(ulong *)(puVar6 + -0x20) = unaff_x20;
  *(long *)(puVar6 + -0x18) = lVar9;
  *(undefined1 **)(puVar6 + -0x10) = unaff_x29;
  *(undefined **)(puVar6 + -8) = puVar12;
  if ((bRam0000000003eb8330 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    func_0x00f78a20(0x3d6bd58);
    bRam0000000003eb8330 = 1;
  }
  if (lVar8 != 0) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar10 + 0x18) + 0xc0) + 8))
              (lVar8,/*STR('DismissAllQueuedAndShowing')*/ uRam0000000003d6bd58);
    if (*(long *)(lVar8 + 0x40) != 0) {
      lVar9 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar10 + 0x18) + 0xc0) + 0x10))(lVar8)
      ;
      if ((lVar9 == 0) || (*(long *)(lVar9 + 0x68) == 0)) goto code_r0x025e05fc;
      /*ModalBehaviour$$Dismiss*/ func_0x01496e90(*(long *)(lVar9 + 0x68),1,0);
      *(undefined8 *)(lVar8 + 0x40) = 0;
    }
    lVar9 = *(long *)(lVar8 + 0x38);
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x18) + -1 < 0) {
        return;
      }
      iVar11 = *(int *)(lVar9 + 0x18) + -2;
      do {
        uVar5 = iVar11 + 1;
        if (uVar5 < *(uint *)(lVar9 + 0x18)) {
          lVar3 = *(long *)(lVar9 + 0x10) + (ulong)uVar5 * 8;
          lVar10 = lVar9;
        }
        else {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar10 = *(long *)(lVar8 + 0x38);
          if (lVar10 == 0) break;
          lVar3 = *(long *)(lVar9 + 0x10) + (ulong)uVar5 * 8;
        }
        lVar9 = *(long *)(lVar3 + 0x20);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar10,uVar5,uRam0000000003d3b350);
        if (lVar9 == 0) break;
        lVar9 = *(long *)(lVar9 + 0x18);
        if (lVar9 != 0) {
          if (lVar9 == 0) break;
          /*UnityEngine.Events.UnityAction$$Invoke*/ func_0x03277c60(lVar9,0);
        }
        if (iVar11 < 0) {
          return;
        }
        lVar9 = *(long *)(lVar8 + 0x38);
        iVar11 = iVar11 + -1;
      } while (lVar9 != 0);
    }
  }
code_r0x025e05fc:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x15370fc | Atlas.Gameplay.FTUE.BaseLayerToolTipManager.QueueToolTip
// ============================================================

/* WARNING: Possible PIC construction at 0x015371e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153734c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015371e8) */
/* WARNING: Removing unreachable block (ram,0x015371f0) */
/* WARNING: Removing unreachable block (ram,0x01537350) */
/* WARNING: Removing unreachable block (ram,0x01537358) */
/* WARNING: Removing unreachable block (ram,0x01537364) */
/* WARNING: Removing unreachable block (ram,0x0153736c) */
/* WARNING: Removing unreachable block (ram,0x01537394) */
/* WARNING: Removing unreachable block (ram,0x015373a0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */

void Atlas_Gameplay_FTUE_BaseLayerToolTipManager__QueueToolTip(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  ulong uVar8;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  int iVar9;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined1 *puVar10;
  undefined8 unaff_x30;
  undefined *puVar11;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar12 [16];
  
  while( true ) {
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x10);
    if ((bRam0000000003eb4ed6 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      func_0x00f78a20(0x3d3cd68);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d3e190);
      func_0x00f78a20(0x3d717f0);
      bRam0000000003eb4ed6 = 1;
    }
    uVar8 = *(ulong *)(param_1 + 0x18);
    if (uVar8 != 0) break;
LAB_01537228:
    lVar6 = func_0x00f78af4();
    *(ulong *)((long)register0x00000008 + -0x60) = uVar8;
    *(long *)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) = puVar10;
    *(undefined **)((long)register0x00000008 + -0x48) =
         &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__HideCurrentModal;
    if ((bRam0000000003eb4ed9 & 1) == 0) {
      func_0x00f78a20(0x3d3e190);
      func_0x00f78a20(0x3d75d18);
      bRam0000000003eb4ed9 = 1;
    }
    *(undefined8 *)(lVar6 + 0x28) = 0;
    *(undefined8 *)(lVar6 + 0x30) = 0xbf800000;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0;
    lVar5 = *(long *)(lVar6 + 0x10);
    if (lVar5 != 0) {
      puVar10 = *(undefined1 **)((long)register0x00000008 + -0x50);
      puVar11 = *(undefined **)((long)register0x00000008 + -0x48);
      puVar3 = (undefined1 *)((long)register0x00000008 + -0x40);
      uVar8 = *(ulong *)((long)register0x00000008 + -0x60);
      lVar7 = *(long *)((long)register0x00000008 + -0x58);
      goto code_r0x025e0480;
    }
    lVar7 = func_0x00f78af4();
    if (*(float *)(lVar7 + 0x30) <= 0.0) {
      return;
    }
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x88) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3eb4000;
    *(long *)((long)register0x00000008 + -0x78) = lVar6;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x50);
    *(undefined **)((long)register0x00000008 + -0x68) =
         &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__OnInputFamilyChanged;
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x70);
    if ((bRam0000000003eb4ed8 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      func_0x00f78a20(0x3d3cd68);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d3e190);
      func_0x00f78a20(0x3d6df50);
      bRam0000000003eb4ed8 = 1;
    }
    uVar2 = *(int *)(lVar7 + 0x34) - 1;
    uVar8 = (ulong)uVar2;
    if ((int)uVar2 < 0) {
      return;
    }
    if (*(long *)(lVar7 + 0x18) != 0) {
      if (*(int *)(*(long *)(lVar7 + 0x18) + 0x18) <= (int)uVar2) {
        return;
      }
      lVar5 = *(long *)(lVar7 + 0x10);
      if (lVar5 != 0) {
        puVar11 = &UNK_01537350;
        goto code_r0x025e0480;
      }
    }
    auVar12 = func_0x00f78af4();
    lVar5 = auVar12._8_8_;
    param_1 = auVar12._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x22;
    *(long *)((long)register0x00000008 + -0xb8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xb0) = uVar8;
    *(long *)((long)register0x00000008 + -0xa8) = lVar7;
    *(undefined1 **)((long)register0x00000008 + -0xa0) = puVar10;
    *(undefined **)((long)register0x00000008 + -0x98) =
         &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__SetCurrentToolTipSequence;
    if ((bRam0000000003eb4ed5 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      bRam0000000003eb4ed5 = 1;
    }
    if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) == 0)) {
      return;
    }
    *(long *)(param_1 + 0x18) = lVar5;
    *(undefined4 *)(param_1 + 0x34) = 0;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0xa0);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x98);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0xc0);
    unaff_x21 = *(long *)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  }
  uVar2 = *(uint *)(param_1 + 0x34);
  unaff_x21 = (long)(int)uVar2;
  if ((int)*(uint *)(uVar8 + 0x18) <= (int)uVar2) {
    return;
  }
  if (*(uint *)(uVar8 + 0x18) <= uVar2) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar7 = *(long *)(uVar8 + 0x10) + unaff_x21 * 0x18;
  lVar5 = *(long *)(lVar7 + 0x28);
  unaff_d8 = (ulong)*(uint *)(lVar7 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar7 + 0x20);
  if (lVar5 == 0) goto LAB_01537228;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar5 + 0x28);
  uVar8 = /*Atlas.UI.ToolTipManager.ToolTipData$$Copy*/ func_0x0156b4ec(lVar5,0);
  uVar4 = /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$GetCurrentToolTipLocalisationKey*/ func_0x0153744c(param_1);
  if (uVar8 == 0) goto LAB_01537228;
  *(undefined8 *)(uVar8 + 0x28) = uVar4;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) goto LAB_01537228;
  puVar11 = (undefined *)0x15371e8;
  lVar7 = param_1;
code_r0x025e0480:
  lVar6 = lRam0000000003d3e190;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(long *)(puVar3 + -0x28) = unaff_x21;
  *(ulong *)(puVar3 + -0x20) = uVar8;
  *(long *)(puVar3 + -0x18) = lVar7;
  *(undefined1 **)(puVar3 + -0x10) = puVar10;
  *(undefined **)(puVar3 + -8) = puVar11;
  if ((bRam0000000003eb8330 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    func_0x00f78a20(0x3d6bd58);
    bRam0000000003eb8330 = 1;
  }
  if (lVar5 != 0) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 8))
              (lVar5,/*STR('DismissAllQueuedAndShowing')*/ uRam0000000003d6bd58);
    if (*(long *)(lVar5 + 0x40) != 0) {
      lVar7 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0x10))(lVar5);
      if ((lVar7 == 0) || (*(long *)(lVar7 + 0x68) == 0)) goto code_r0x025e05fc;
      /*ModalBehaviour$$Dismiss*/ func_0x01496e90(*(long *)(lVar7 + 0x68),1,0);
      *(undefined8 *)(lVar5 + 0x40) = 0;
    }
    lVar7 = *(long *)(lVar5 + 0x38);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) + -1 < 0) {
        return;
      }
      iVar9 = *(int *)(lVar7 + 0x18) + -2;
      do {
        uVar2 = iVar9 + 1;
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          lVar1 = *(long *)(lVar7 + 0x10) + (ulong)uVar2 * 8;
          lVar6 = lVar7;
        }
        else {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar6 = *(long *)(lVar5 + 0x38);
          if (lVar6 == 0) break;
          lVar1 = *(long *)(lVar7 + 0x10) + (ulong)uVar2 * 8;
        }
        lVar7 = *(long *)(lVar1 + 0x20);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar6,uVar2,uRam0000000003d3b350);
        if (lVar7 == 0) break;
        lVar7 = *(long *)(lVar7 + 0x18);
        if (lVar7 != 0) {
          if (lVar7 == 0) break;
          /*UnityEngine.Events.UnityAction$$Invoke*/ func_0x03277c60(lVar7,0);
        }
        if (iVar9 < 0) {
          return;
        }
        lVar7 = *(long *)(lVar5 + 0x38);
        iVar9 = iVar9 + -1;
      } while (lVar7 != 0);
    }
  }
code_r0x025e05fc:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x153722c | Atlas.Gameplay.FTUE.BaseLayerToolTipManager.HideCurrentModal
// ============================================================

/* WARNING: Possible PIC construction at 0x0153734c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015371e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01537350) */
/* WARNING: Removing unreachable block (ram,0x01537358) */
/* WARNING: Removing unreachable block (ram,0x01537364) */
/* WARNING: Removing unreachable block (ram,0x0153736c) */
/* WARNING: Removing unreachable block (ram,0x01537394) */
/* WARNING: Removing unreachable block (ram,0x015373a0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */
/* WARNING: Removing unreachable block (ram,0x015371e8) */
/* WARNING: Removing unreachable block (ram,0x015371f0) */

void Atlas_Gameplay_FTUE_BaseLayerToolTipManager__HideCurrentModal(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  int iVar8;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined *puVar9;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar10 [16];
  
  do {
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb4ed9 & 1) == 0) {
      func_0x00f78a20(0x3d3e190);
      func_0x00f78a20(0x3d75d18);
      bRam0000000003eb4ed9 = 1;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0xbf800000;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 != 0) {
      unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
      puVar9 = *(undefined **)((long)register0x00000008 + -8);
      unaff_x20 = *(ulong *)((long)register0x00000008 + -0x20);
      puVar3 = (undefined1 *)register0x00000008;
      unaff_x19 = *(long *)((long)register0x00000008 + -0x18);
      goto code_r0x025e0480;
    }
    lVar6 = func_0x00f78af4();
    if (*(float *)(lVar6 + 0x30) <= 0.0) {
      return;
    }
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x50);
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x48) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0x3eb4000;
    *(long *)((long)register0x00000008 + -0x38) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x28) =
         &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__OnInputFamilyChanged;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x30);
    if ((bRam0000000003eb4ed8 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      func_0x00f78a20(0x3d3cd68);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d3e190);
      func_0x00f78a20(0x3d6df50);
      bRam0000000003eb4ed8 = 1;
    }
    uVar2 = *(int *)(lVar6 + 0x34) - 1;
    unaff_x20 = (ulong)uVar2;
    if ((int)uVar2 < 0) {
      return;
    }
    if (*(long *)(lVar6 + 0x18) != 0) {
      if (*(int *)(*(long *)(lVar6 + 0x18) + 0x18) <= (int)uVar2) {
        return;
      }
      lVar5 = *(long *)(lVar6 + 0x10);
      if (lVar5 != 0) {
        puVar9 = &UNK_01537350;
        unaff_x19 = lVar6;
        goto code_r0x025e0480;
      }
    }
    auVar10 = func_0x00f78af4();
    lVar5 = auVar10._8_8_;
    unaff_x19 = auVar10._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x78) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x68) = lVar6;
    *(undefined1 **)((long)register0x00000008 + -0x60) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -0x58) =
         &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__SetCurrentToolTipSequence;
    if ((bRam0000000003eb4ed5 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      bRam0000000003eb4ed5 = 1;
    }
    if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) == 0)) {
      return;
    }
    *(long *)(unaff_x19 + 0x18) = lVar5;
    *(undefined4 *)(unaff_x19 + 0x34) = 0;
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x21 = *(long *)((long)register0x00000008 + -0x78);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x88) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x78) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x68);
    *(undefined8 *)((long)register0x00000008 + -0x60) =
         *(undefined8 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    if ((bRam0000000003eb4ed6 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      func_0x00f78a20(0x3d3cd68);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d3e190);
      func_0x00f78a20(0x3d717f0);
      bRam0000000003eb4ed6 = 1;
    }
    unaff_x20 = *(ulong *)(unaff_x19 + 0x18);
    if (unaff_x20 != 0) {
      uVar2 = *(uint *)(unaff_x19 + 0x34);
      unaff_x21 = (long)(int)uVar2;
      if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)uVar2) {
        return;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar6 = *(long *)(unaff_x20 + 0x10) + unaff_x21 * 0x18;
      lVar5 = *(long *)(lVar6 + 0x28);
      unaff_d8 = (ulong)*(uint *)(lVar6 + 0x30);
      *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(lVar6 + 0x20);
      if (lVar5 != 0) {
        *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(lVar5 + 0x28);
        unaff_x20 = /*Atlas.UI.ToolTipManager.ToolTipData$$Copy*/ func_0x0156b4ec(lVar5,0);
        uVar4 = /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$GetCurrentToolTipLocalisationKey*/ func_0x0153744c(unaff_x19);
        if (unaff_x20 != 0) {
          *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
          lVar5 = *(long *)(unaff_x19 + 0x10);
          if (lVar5 != 0) break;
        }
      }
    }
    unaff_x30 = Atlas_Gameplay_FTUE_BaseLayerToolTipManager__HideCurrentModal;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  } while( true );
  puVar9 = (undefined *)0x15371e8;
code_r0x025e0480:
  lVar6 = lRam0000000003d3e190;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(long *)(puVar3 + -0x28) = unaff_x21;
  *(ulong *)(puVar3 + -0x20) = unaff_x20;
  *(long *)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
  *(undefined **)(puVar3 + -8) = puVar9;
  if ((bRam0000000003eb8330 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    func_0x00f78a20(0x3d6bd58);
    bRam0000000003eb8330 = 1;
  }
  if (lVar5 != 0) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 8))
              (lVar5,/*STR('DismissAllQueuedAndShowing')*/ uRam0000000003d6bd58);
    if (*(long *)(lVar5 + 0x40) != 0) {
      lVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0x10))(lVar5);
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0x68) == 0)) goto code_r0x025e05fc;
      /*ModalBehaviour$$Dismiss*/ func_0x01496e90(*(long *)(lVar6 + 0x68),1,0);
      *(undefined8 *)(lVar5 + 0x40) = 0;
    }
    lVar6 = *(long *)(lVar5 + 0x38);
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) + -1 < 0) {
        return;
      }
      iVar8 = *(int *)(lVar6 + 0x18) + -2;
      do {
        uVar2 = iVar8 + 1;
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          lVar1 = *(long *)(lVar6 + 0x10) + (ulong)uVar2 * 8;
          lVar7 = lVar6;
        }
        else {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar7 = *(long *)(lVar5 + 0x38);
          if (lVar7 == 0) break;
          lVar1 = *(long *)(lVar6 + 0x10) + (ulong)uVar2 * 8;
        }
        lVar6 = *(long *)(lVar1 + 0x20);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar7,uVar2,uRam0000000003d3b350);
        if (lVar6 == 0) break;
        lVar6 = *(long *)(lVar6 + 0x18);
        if (lVar6 != 0) {
          if (lVar6 == 0) break;
          /*UnityEngine.Events.UnityAction$$Invoke*/ func_0x03277c60(lVar6,0);
        }
        if (iVar8 < 0) {
          return;
        }
        lVar6 = *(long *)(lVar5 + 0x38);
        iVar8 = iVar8 + -1;
      } while (lVar6 != 0);
    }
  }
code_r0x025e05fc:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x153729c | Atlas.Gameplay.FTUE.BaseLayerToolTipManager.OnInputFamilyChanged
// ============================================================

/* WARNING: Possible PIC construction at 0x0153734c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015371e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01537350) */
/* WARNING: Removing unreachable block (ram,0x01537358) */
/* WARNING: Removing unreachable block (ram,0x01537364) */
/* WARNING: Removing unreachable block (ram,0x0153736c) */
/* WARNING: Removing unreachable block (ram,0x01537394) */
/* WARNING: Removing unreachable block (ram,0x015373a0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */
/* WARNING: Removing unreachable block (ram,0x015371e8) */
/* WARNING: Removing unreachable block (ram,0x015371f0) */

void Atlas_Gameplay_FTUE_BaseLayerToolTipManager__OnInputFamilyChanged(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong uVar8;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  int iVar9;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar10;
  code *unaff_x30;
  undefined *puVar11;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar12 [16];
  
  while( true ) {
    if (*(float *)(param_1 + 0x30) <= 0.0) {
      return;
    }
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x10);
    if ((bRam0000000003eb4ed8 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      func_0x00f78a20(0x3d3cd68);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d3e190);
      func_0x00f78a20(0x3d6df50);
      bRam0000000003eb4ed8 = 1;
    }
    uVar2 = *(int *)(param_1 + 0x34) - 1;
    uVar8 = (ulong)uVar2;
    if ((int)uVar2 < 0) {
      return;
    }
    if (*(long *)(param_1 + 0x18) != 0) break;
code_r0x015373d0:
    auVar12 = func_0x00f78af4();
    lVar5 = auVar12._8_8_;
    lVar6 = auVar12._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x50) = uVar8;
    *(long *)((long)register0x00000008 + -0x48) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x40) = puVar10;
    *(undefined **)((long)register0x00000008 + -0x38) =
         &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__SetCurrentToolTipSequence;
    if ((bRam0000000003eb4ed5 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      bRam0000000003eb4ed5 = 1;
    }
    if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) == 0)) {
      return;
    }
    *(long *)(lVar6 + 0x18) = lVar5;
    *(undefined4 *)(lVar6 + 0x34) = 0;
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x21 = *(long *)((long)register0x00000008 + -0x58);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x50) =
         *(undefined8 *)((long)register0x00000008 + -0x50);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)((long)register0x00000008 + -0x38);
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x40);
    if ((bRam0000000003eb4ed6 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      func_0x00f78a20(0x3d3cd68);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d3e190);
      func_0x00f78a20(0x3d717f0);
      bRam0000000003eb4ed6 = 1;
    }
    uVar8 = *(ulong *)(lVar6 + 0x18);
    if (uVar8 != 0) {
      uVar2 = *(uint *)(lVar6 + 0x34);
      unaff_x21 = (long)(int)uVar2;
      if ((int)*(uint *)(uVar8 + 0x18) <= (int)uVar2) {
        return;
      }
      if (*(uint *)(uVar8 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(uVar8 + 0x10) + unaff_x21 * 0x18;
      lVar5 = *(long *)(lVar7 + 0x28);
      unaff_d8 = (ulong)*(uint *)(lVar7 + 0x30);
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar7 + 0x20);
      if (lVar5 != 0) {
        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar5 + 0x28);
        uVar8 = /*Atlas.UI.ToolTipManager.ToolTipData$$Copy*/ func_0x0156b4ec(lVar5,0);
        uVar4 = /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$GetCurrentToolTipLocalisationKey*/ func_0x0153744c(lVar6);
        if (uVar8 != 0) {
          *(undefined8 *)(uVar8 + 0x28) = uVar4;
          lVar5 = *(long *)(lVar6 + 0x10);
          if (lVar5 != 0) {
            puVar11 = (undefined *)0x15371e8;
            goto code_r0x025e0480;
          }
        }
      }
    }
    unaff_x19 = func_0x00f78af4();
    *(ulong *)((long)register0x00000008 + -0x90) = uVar8;
    *(long *)((long)register0x00000008 + -0x88) = lVar6;
    *(undefined1 **)((long)register0x00000008 + -0x80) = puVar10;
    *(code **)((long)register0x00000008 + -0x78) =
         Atlas_Gameplay_FTUE_BaseLayerToolTipManager__HideCurrentModal;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x80);
    unaff_x20 = 0x3eb4000;
    if ((bRam0000000003eb4ed9 & 1) == 0) {
      func_0x00f78a20(0x3d3e190);
      func_0x00f78a20(0x3d75d18);
      bRam0000000003eb4ed9 = 1;
    }
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
    *(undefined8 *)(unaff_x19 + 0x30) = 0xbf800000;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 != 0) {
      puVar10 = *(undefined1 **)((long)register0x00000008 + -0x80);
      puVar11 = *(undefined **)((long)register0x00000008 + -0x78);
      puVar3 = (undefined1 *)((long)register0x00000008 + -0x70);
      uVar8 = *(ulong *)((long)register0x00000008 + -0x90);
      lVar6 = *(long *)((long)register0x00000008 + -0x88);
      goto code_r0x025e0480;
    }
    unaff_x30 = Atlas_Gameplay_FTUE_BaseLayerToolTipManager__OnInputFamilyChanged;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x18) <= (int)uVar2) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) goto code_r0x015373d0;
  puVar11 = &UNK_01537350;
  lVar6 = param_1;
code_r0x025e0480:
  lVar7 = lRam0000000003d3e190;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(long *)(puVar3 + -0x28) = unaff_x21;
  *(ulong *)(puVar3 + -0x20) = uVar8;
  *(long *)(puVar3 + -0x18) = lVar6;
  *(undefined1 **)(puVar3 + -0x10) = puVar10;
  *(undefined **)(puVar3 + -8) = puVar11;
  if ((bRam0000000003eb8330 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    func_0x00f78a20(0x3d6bd58);
    bRam0000000003eb8330 = 1;
  }
  if (lVar5 != 0) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 8))
              (lVar5,/*STR('DismissAllQueuedAndShowing')*/ uRam0000000003d6bd58);
    if (*(long *)(lVar5 + 0x40) != 0) {
      lVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0x10))(lVar5);
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0x68) == 0)) goto code_r0x025e05fc;
      /*ModalBehaviour$$Dismiss*/ func_0x01496e90(*(long *)(lVar6 + 0x68),1,0);
      *(undefined8 *)(lVar5 + 0x40) = 0;
    }
    lVar6 = *(long *)(lVar5 + 0x38);
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) + -1 < 0) {
        return;
      }
      iVar9 = *(int *)(lVar6 + 0x18) + -2;
      do {
        uVar2 = iVar9 + 1;
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          lVar1 = *(long *)(lVar6 + 0x10) + (ulong)uVar2 * 8;
          lVar7 = lVar6;
        }
        else {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar7 = *(long *)(lVar5 + 0x38);
          if (lVar7 == 0) break;
          lVar1 = *(long *)(lVar6 + 0x10) + (ulong)uVar2 * 8;
        }
        lVar6 = *(long *)(lVar1 + 0x20);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar7,uVar2,uRam0000000003d3b350);
        if (lVar6 == 0) break;
        lVar6 = *(long *)(lVar6 + 0x18);
        if (lVar6 != 0) {
          if (lVar6 == 0) break;
          /*UnityEngine.Events.UnityAction$$Invoke*/ func_0x03277c60(lVar6,0);
        }
        if (iVar9 < 0) {
          return;
        }
        lVar6 = *(long *)(lVar5 + 0x38);
        iVar9 = iVar9 + -1;
      } while (lVar6 != 0);
    }
  }
code_r0x025e05fc:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x15372b0 | Atlas.Gameplay.FTUE.BaseLayerToolTipManager.ChangeCurrentToolTipLocKey
// ============================================================

/* WARNING: Possible PIC construction at 0x0153734c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015371e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01537350) */
/* WARNING: Removing unreachable block (ram,0x01537358) */
/* WARNING: Removing unreachable block (ram,0x01537364) */
/* WARNING: Removing unreachable block (ram,0x0153736c) */
/* WARNING: Removing unreachable block (ram,0x01537394) */
/* WARNING: Removing unreachable block (ram,0x015373a0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */
/* WARNING: Removing unreachable block (ram,0x015371e8) */
/* WARNING: Removing unreachable block (ram,0x015371f0) */

void Atlas_Gameplay_FTUE_BaseLayerToolTipManager__ChangeCurrentToolTipLocKey(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong uVar8;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  int iVar9;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar10;
  code *unaff_x30;
  undefined8 uVar11;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar12 [16];
  
  puVar4 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar3 = puVar4 + -0x30;
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(long *)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
    *(long *)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
    *(code **)(puVar4 + -8) = unaff_x30;
    puVar10 = puVar4 + -0x10;
    if ((bRam0000000003eb4ed8 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      func_0x00f78a20(0x3d3cd68);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d3e190);
      func_0x00f78a20(0x3d6df50);
      bRam0000000003eb4ed8 = 1;
    }
    uVar2 = *(int *)(param_1 + 0x34) - 1;
    uVar8 = (ulong)uVar2;
    if ((int)uVar2 < 0) {
      return;
    }
    if (*(long *)(param_1 + 0x18) != 0) break;
LAB_015373d0:
    auVar12 = func_0x00f78af4();
    lVar5 = auVar12._8_8_;
    lVar6 = auVar12._0_8_;
    *(undefined8 *)(puVar4 + -0x60) = unaff_x22;
    *(long *)(puVar4 + -0x58) = unaff_x21;
    *(ulong *)(puVar4 + -0x50) = uVar8;
    *(long *)(puVar4 + -0x48) = param_1;
    *(undefined1 **)(puVar4 + -0x40) = puVar10;
    *(undefined **)(puVar4 + -0x38) =
         &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__SetCurrentToolTipSequence;
    if ((bRam0000000003eb4ed5 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      bRam0000000003eb4ed5 = 1;
    }
    if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) == 0)) {
      return;
    }
    *(long *)(lVar6 + 0x18) = lVar5;
    *(undefined4 *)(lVar6 + 0x34) = 0;
    unaff_x22 = *(undefined8 *)(puVar4 + -0x60);
    unaff_x21 = *(long *)(puVar4 + -0x58);
    puVar3 = puVar4 + -0x70;
    *(undefined8 *)(puVar4 + -0x70) = unaff_d9;
    *(ulong *)(puVar4 + -0x68) = unaff_d8;
    *(undefined8 *)(puVar4 + -0x60) = unaff_x22;
    *(long *)(puVar4 + -0x58) = unaff_x21;
    *(undefined8 *)(puVar4 + -0x50) = *(undefined8 *)(puVar4 + -0x50);
    *(undefined8 *)(puVar4 + -0x48) = *(undefined8 *)(puVar4 + -0x48);
    *(undefined8 *)(puVar4 + -0x40) = *(undefined8 *)(puVar4 + -0x40);
    *(undefined8 *)(puVar4 + -0x38) = *(undefined8 *)(puVar4 + -0x38);
    puVar10 = puVar4 + -0x40;
    if ((bRam0000000003eb4ed6 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      func_0x00f78a20(0x3d3cd68);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d3e190);
      func_0x00f78a20(0x3d717f0);
      bRam0000000003eb4ed6 = 1;
    }
    uVar8 = *(ulong *)(lVar6 + 0x18);
    if (uVar8 != 0) {
      uVar2 = *(uint *)(lVar6 + 0x34);
      unaff_x21 = (long)(int)uVar2;
      if ((int)*(uint *)(uVar8 + 0x18) <= (int)uVar2) {
        return;
      }
      if (*(uint *)(uVar8 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(uVar8 + 0x10) + unaff_x21 * 0x18;
      lVar5 = *(long *)(lVar7 + 0x28);
      unaff_d8 = (ulong)*(uint *)(lVar7 + 0x30);
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar7 + 0x20);
      if (lVar5 != 0) {
        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar5 + 0x28);
        uVar8 = /*Atlas.UI.ToolTipManager.ToolTipData$$Copy*/ func_0x0156b4ec(lVar5,0);
        uVar11 = /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$GetCurrentToolTipLocalisationKey*/ func_0x0153744c(lVar6);
        if (uVar8 != 0) {
          *(undefined8 *)(uVar8 + 0x28) = uVar11;
          lVar5 = *(long *)(lVar6 + 0x10);
          if (lVar5 != 0) {
            uVar11 = 0x15371e8;
            goto code_r0x025e0480;
          }
        }
      }
    }
    unaff_x19 = func_0x00f78af4();
    *(ulong *)(puVar4 + -0x90) = uVar8;
    *(long *)(puVar4 + -0x88) = lVar6;
    *(undefined1 **)(puVar4 + -0x80) = puVar10;
    *(code **)(puVar4 + -0x78) = Atlas_Gameplay_FTUE_BaseLayerToolTipManager__HideCurrentModal;
    unaff_x29 = puVar4 + -0x80;
    unaff_x20 = 0x3eb4000;
    if ((bRam0000000003eb4ed9 & 1) == 0) {
      func_0x00f78a20(0x3d3e190);
      func_0x00f78a20(0x3d75d18);
      bRam0000000003eb4ed9 = 1;
    }
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
    *(undefined8 *)(unaff_x19 + 0x30) = 0xbf800000;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 != 0) {
      puVar10 = *(undefined1 **)(puVar4 + -0x80);
      uVar11 = *(undefined8 *)(puVar4 + -0x78);
      puVar3 = puVar4 + -0x70;
      uVar8 = *(ulong *)(puVar4 + -0x90);
      lVar6 = *(long *)(puVar4 + -0x88);
      goto code_r0x025e0480;
    }
    unaff_x30 = Atlas_Gameplay_FTUE_BaseLayerToolTipManager__OnInputFamilyChanged;
    param_1 = func_0x00f78af4();
    puVar4 = puVar4 + -0x90;
    if (*(float *)(param_1 + 0x30) <= 0.0) {
      return;
    }
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x18) <= (int)uVar2) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) goto LAB_015373d0;
  uVar11 = 0x1537350;
  lVar6 = param_1;
code_r0x025e0480:
  lVar7 = lRam0000000003d3e190;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(long *)(puVar3 + -0x28) = unaff_x21;
  *(ulong *)(puVar3 + -0x20) = uVar8;
  *(long *)(puVar3 + -0x18) = lVar6;
  *(undefined1 **)(puVar3 + -0x10) = puVar10;
  *(undefined8 *)(puVar3 + -8) = uVar11;
  if ((bRam0000000003eb8330 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    func_0x00f78a20(0x3d6bd58);
    bRam0000000003eb8330 = 1;
  }
  if (lVar5 != 0) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 8))
              (lVar5,/*STR('DismissAllQueuedAndShowing')*/ uRam0000000003d6bd58);
    if (*(long *)(lVar5 + 0x40) != 0) {
      lVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0x10))(lVar5);
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0x68) == 0)) goto code_r0x025e05fc;
      /*ModalBehaviour$$Dismiss*/ func_0x01496e90(*(long *)(lVar6 + 0x68),1,0);
      *(undefined8 *)(lVar5 + 0x40) = 0;
    }
    lVar6 = *(long *)(lVar5 + 0x38);
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) + -1 < 0) {
        return;
      }
      iVar9 = *(int *)(lVar6 + 0x18) + -2;
      do {
        uVar2 = iVar9 + 1;
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          lVar1 = *(long *)(lVar6 + 0x10) + (ulong)uVar2 * 8;
          lVar7 = lVar6;
        }
        else {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar7 = *(long *)(lVar5 + 0x38);
          if (lVar7 == 0) break;
          lVar1 = *(long *)(lVar6 + 0x10) + (ulong)uVar2 * 8;
        }
        lVar6 = *(long *)(lVar1 + 0x20);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar7,uVar2,uRam0000000003d3b350);
        if (lVar6 == 0) break;
        lVar6 = *(long *)(lVar6 + 0x18);
        if (lVar6 != 0) {
          if (lVar6 == 0) break;
          /*UnityEngine.Events.UnityAction$$Invoke*/ func_0x03277c60(lVar6,0);
        }
        if (iVar9 < 0) {
          return;
        }
        lVar6 = *(long *)(lVar5 + 0x38);
        iVar9 = iVar9 + -1;
      } while (lVar6 != 0);
    }
  }
code_r0x025e05fc:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x15373d4 | Atlas.Gameplay.FTUE.BaseLayerToolTipManager.SetCurrentToolTipSequence
// ============================================================

/* WARNING: Possible PIC construction at 0x015371e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153734c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015371e8) */
/* WARNING: Removing unreachable block (ram,0x015371f0) */
/* WARNING: Removing unreachable block (ram,0x01537350) */
/* WARNING: Removing unreachable block (ram,0x01537358) */
/* WARNING: Removing unreachable block (ram,0x01537364) */
/* WARNING: Removing unreachable block (ram,0x0153736c) */
/* WARNING: Removing unreachable block (ram,0x01537394) */
/* WARNING: Removing unreachable block (ram,0x015373a0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */

void Atlas_Gameplay_FTUE_BaseLayerToolTipManager__SetCurrentToolTipSequence
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  int iVar8;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar9 [16];
  
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  do {
    lVar5 = auVar9._8_8_;
    lVar6 = auVar9._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb4ed5 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      bRam0000000003eb4ed5 = 1;
    }
    if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) == 0)) {
      return;
    }
    *(long *)(lVar6 + 0x18) = lVar5;
    *(undefined4 *)(lVar6 + 0x34) = 0;
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(long *)((long)register0x00000008 + -0x28);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if ((bRam0000000003eb4ed6 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      func_0x00f78a20(0x3d3cd68);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d3e190);
      func_0x00f78a20(0x3d717f0);
      bRam0000000003eb4ed6 = 1;
    }
    unaff_x20 = *(ulong *)(lVar6 + 0x18);
    if (unaff_x20 != 0) {
      uVar2 = *(uint *)(lVar6 + 0x34);
      unaff_x21 = (long)(int)uVar2;
      if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)uVar2) {
        return;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(unaff_x20 + 0x10) + unaff_x21 * 0x18;
      lVar5 = *(long *)(lVar7 + 0x28);
      unaff_d8 = (ulong)*(uint *)(lVar7 + 0x30);
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar7 + 0x20);
      if (lVar5 != 0) {
        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar5 + 0x28);
        unaff_x20 = /*Atlas.UI.ToolTipManager.ToolTipData$$Copy*/ func_0x0156b4ec(lVar5,0);
        uVar4 = /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$GetCurrentToolTipLocalisationKey*/ func_0x0153744c(lVar6);
        if (unaff_x20 != 0) {
          *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
          lVar5 = *(long *)(lVar6 + 0x10);
          if (lVar5 != 0) {
            uVar4 = 0x15371e8;
            unaff_x19 = lVar6;
            goto code_r0x025e0480;
          }
        }
      }
    }
    lVar7 = func_0x00f78af4();
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x58) = lVar6;
    *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x29;
    *(code **)((long)register0x00000008 + -0x48) =
         Atlas_Gameplay_FTUE_BaseLayerToolTipManager__HideCurrentModal;
    if ((bRam0000000003eb4ed9 & 1) == 0) {
      func_0x00f78a20(0x3d3e190);
      func_0x00f78a20(0x3d75d18);
      bRam0000000003eb4ed9 = 1;
    }
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(undefined8 *)(lVar7 + 0x30) = 0xbf800000;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined8 *)(lVar7 + 0x20) = 0;
    lVar5 = *(long *)(lVar7 + 0x10);
    if (lVar5 != 0) {
      unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x50);
      uVar4 = *(undefined8 *)((long)register0x00000008 + -0x48);
      puVar3 = (undefined1 *)((long)register0x00000008 + -0x40);
      unaff_x20 = *(ulong *)((long)register0x00000008 + -0x60);
      unaff_x19 = *(long *)((long)register0x00000008 + -0x58);
      goto code_r0x025e0480;
    }
    unaff_x19 = func_0x00f78af4();
    if (*(float *)(unaff_x19 + 0x30) <= 0.0) {
      return;
    }
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x88) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3eb4000;
    *(long *)((long)register0x00000008 + -0x78) = lVar7;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x50);
    *(code **)((long)register0x00000008 + -0x68) =
         Atlas_Gameplay_FTUE_BaseLayerToolTipManager__OnInputFamilyChanged;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x70);
    if ((bRam0000000003eb4ed8 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      func_0x00f78a20(0x3d3cd68);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d3e190);
      func_0x00f78a20(0x3d6df50);
      bRam0000000003eb4ed8 = 1;
    }
    uVar2 = *(int *)(unaff_x19 + 0x34) - 1;
    unaff_x20 = (ulong)uVar2;
    if ((int)uVar2 < 0) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x18) + 0x18) <= (int)uVar2) {
        return;
      }
      lVar5 = *(long *)(unaff_x19 + 0x10);
      if (lVar5 != 0) break;
    }
    unaff_x30 = Atlas_Gameplay_FTUE_BaseLayerToolTipManager__SetCurrentToolTipSequence;
    auVar9 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  } while( true );
  uVar4 = 0x1537350;
code_r0x025e0480:
  lVar6 = lRam0000000003d3e190;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(long *)(puVar3 + -0x28) = unaff_x21;
  *(ulong *)(puVar3 + -0x20) = unaff_x20;
  *(long *)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar3 + -8) = uVar4;
  if ((bRam0000000003eb8330 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    func_0x00f78a20(0x3d6bd58);
    bRam0000000003eb8330 = 1;
  }
  if (lVar5 != 0) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 8))
              (lVar5,/*STR('DismissAllQueuedAndShowing')*/ uRam0000000003d6bd58);
    if (*(long *)(lVar5 + 0x40) != 0) {
      lVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0x10))(lVar5);
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0x68) == 0)) goto code_r0x025e05fc;
      /*ModalBehaviour$$Dismiss*/ func_0x01496e90(*(long *)(lVar6 + 0x68),1,0);
      *(undefined8 *)(lVar5 + 0x40) = 0;
    }
    lVar6 = *(long *)(lVar5 + 0x38);
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) + -1 < 0) {
        return;
      }
      iVar8 = *(int *)(lVar6 + 0x18) + -2;
      do {
        uVar2 = iVar8 + 1;
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          lVar1 = *(long *)(lVar6 + 0x10) + (ulong)uVar2 * 8;
          lVar7 = lVar6;
        }
        else {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar7 = *(long *)(lVar5 + 0x38);
          if (lVar7 == 0) break;
          lVar1 = *(long *)(lVar6 + 0x10) + (ulong)uVar2 * 8;
        }
        lVar6 = *(long *)(lVar1 + 0x20);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar7,uVar2,uRam0000000003d3b350);
        if (lVar6 == 0) break;
        lVar6 = *(long *)(lVar6 + 0x18);
        if (lVar6 != 0) {
          if (lVar6 == 0) break;
          /*UnityEngine.Events.UnityAction$$Invoke*/ func_0x03277c60(lVar6,0);
        }
        if (iVar8 < 0) {
          return;
        }
        lVar6 = *(long *)(lVar5 + 0x38);
        iVar8 = iVar8 + -1;
      } while (lVar6 != 0);
    }
  }
code_r0x025e05fc:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1537444 | Atlas.Gameplay.FTUE.BaseLayerToolTipManager.OnExitInProgressState
// ============================================================

/* WARNING: Possible PIC construction at 0x0153734c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015371e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01537350) */
/* WARNING: Removing unreachable block (ram,0x01537358) */
/* WARNING: Removing unreachable block (ram,0x01537364) */
/* WARNING: Removing unreachable block (ram,0x0153736c) */
/* WARNING: Removing unreachable block (ram,0x01537394) */
/* WARNING: Removing unreachable block (ram,0x015373a0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */
/* WARNING: Removing unreachable block (ram,0x015371e8) */
/* WARNING: Removing unreachable block (ram,0x015371f0) */

void Atlas_Gameplay_FTUE_BaseLayerToolTipManager__OnExitInProgressState(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  int iVar8;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 uVar9;
  code *unaff_x30;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar10 [16];
  
  puVar3 = (undefined1 *)register0x00000008;
  do {
    *(ulong *)(puVar3 + -0x20) = unaff_x20;
    *(long *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(code **)(puVar3 + -8) = unaff_x30;
    if ((bRam0000000003eb4ed9 & 1) == 0) {
      func_0x00f78a20(0x3d3e190);
      func_0x00f78a20(0x3d75d18);
      bRam0000000003eb4ed9 = 1;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0xbf800000;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 != 0) {
      unaff_x29 = *(undefined1 **)(puVar3 + -0x10);
      uVar9 = *(undefined8 *)(puVar3 + -8);
      unaff_x20 = *(ulong *)(puVar3 + -0x20);
      puVar4 = puVar3;
      unaff_x19 = *(long *)(puVar3 + -0x18);
      goto code_r0x025e0480;
    }
    lVar6 = func_0x00f78af4();
    if (*(float *)(lVar6 + 0x30) <= 0.0) {
      return;
    }
    puVar4 = puVar3 + -0x50;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x22;
    *(long *)(puVar3 + -0x48) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x40) = 0x3eb4000;
    *(long *)(puVar3 + -0x38) = param_1;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(code **)(puVar3 + -0x28) = Atlas_Gameplay_FTUE_BaseLayerToolTipManager__OnInputFamilyChanged;
    unaff_x29 = puVar3 + -0x30;
    if ((bRam0000000003eb4ed8 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      func_0x00f78a20(0x3d3cd68);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d3e190);
      func_0x00f78a20(0x3d6df50);
      bRam0000000003eb4ed8 = 1;
    }
    uVar2 = *(int *)(lVar6 + 0x34) - 1;
    unaff_x20 = (ulong)uVar2;
    if ((int)uVar2 < 0) {
      return;
    }
    if (*(long *)(lVar6 + 0x18) != 0) {
      if (*(int *)(*(long *)(lVar6 + 0x18) + 0x18) <= (int)uVar2) {
        return;
      }
      lVar5 = *(long *)(lVar6 + 0x10);
      if (lVar5 != 0) {
        uVar9 = 0x1537350;
        unaff_x19 = lVar6;
        goto code_r0x025e0480;
      }
    }
    auVar10 = func_0x00f78af4();
    lVar5 = auVar10._8_8_;
    unaff_x19 = auVar10._0_8_;
    *(undefined8 *)(puVar3 + -0x80) = unaff_x22;
    *(long *)(puVar3 + -0x78) = unaff_x21;
    *(ulong *)(puVar3 + -0x70) = unaff_x20;
    *(long *)(puVar3 + -0x68) = lVar6;
    *(undefined1 **)(puVar3 + -0x60) = unaff_x29;
    *(code **)(puVar3 + -0x58) =
         Atlas_Gameplay_FTUE_BaseLayerToolTipManager__SetCurrentToolTipSequence;
    if ((bRam0000000003eb4ed5 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      bRam0000000003eb4ed5 = 1;
    }
    if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) == 0)) {
      return;
    }
    *(long *)(unaff_x19 + 0x18) = lVar5;
    *(undefined4 *)(unaff_x19 + 0x34) = 0;
    unaff_x22 = *(undefined8 *)(puVar3 + -0x80);
    unaff_x21 = *(long *)(puVar3 + -0x78);
    puVar4 = puVar3 + -0x90;
    *(undefined8 *)(puVar3 + -0x90) = unaff_d9;
    *(ulong *)(puVar3 + -0x88) = unaff_d8;
    *(undefined8 *)(puVar3 + -0x80) = unaff_x22;
    *(long *)(puVar3 + -0x78) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(puVar3 + -0x70);
    *(undefined8 *)(puVar3 + -0x68) = *(undefined8 *)(puVar3 + -0x68);
    *(undefined8 *)(puVar3 + -0x60) = *(undefined8 *)(puVar3 + -0x60);
    *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(puVar3 + -0x58);
    unaff_x29 = puVar3 + -0x60;
    if ((bRam0000000003eb4ed6 & 1) == 0) {
      func_0x00f78a20(0x3d3cd60);
      func_0x00f78a20(0x3d3cd68);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d3e190);
      func_0x00f78a20(0x3d717f0);
      bRam0000000003eb4ed6 = 1;
    }
    unaff_x20 = *(ulong *)(unaff_x19 + 0x18);
    if (unaff_x20 != 0) {
      uVar2 = *(uint *)(unaff_x19 + 0x34);
      unaff_x21 = (long)(int)uVar2;
      if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)uVar2) {
        return;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar6 = *(long *)(unaff_x20 + 0x10) + unaff_x21 * 0x18;
      lVar5 = *(long *)(lVar6 + 0x28);
      unaff_d8 = (ulong)*(uint *)(lVar6 + 0x30);
      *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(lVar6 + 0x20);
      if (lVar5 != 0) {
        *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(lVar5 + 0x28);
        unaff_x20 = /*Atlas.UI.ToolTipManager.ToolTipData$$Copy*/ func_0x0156b4ec(lVar5,0);
        uVar9 = /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$GetCurrentToolTipLocalisationKey*/ func_0x0153744c(unaff_x19);
        if (unaff_x20 != 0) {
          *(undefined8 *)(unaff_x20 + 0x28) = uVar9;
          lVar5 = *(long *)(unaff_x19 + 0x10);
          if (lVar5 != 0) break;
        }
      }
    }
    unaff_x30 = Atlas_Gameplay_FTUE_BaseLayerToolTipManager__HideCurrentModal;
    param_1 = func_0x00f78af4();
    puVar3 = puVar3 + -0x90;
  } while( true );
  uVar9 = 0x15371e8;
code_r0x025e0480:
  lVar6 = lRam0000000003d3e190;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(long *)(puVar4 + -0x28) = unaff_x21;
  *(ulong *)(puVar4 + -0x20) = unaff_x20;
  *(long *)(puVar4 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar4 + -8) = uVar9;
  if ((bRam0000000003eb8330 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    func_0x00f78a20(0x3d6bd58);
    bRam0000000003eb8330 = 1;
  }
  if (lVar5 != 0) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 8))
              (lVar5,/*STR('DismissAllQueuedAndShowing')*/ uRam0000000003d6bd58);
    if (*(long *)(lVar5 + 0x40) != 0) {
      lVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0x10))(lVar5);
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0x68) == 0)) goto code_r0x025e05fc;
      /*ModalBehaviour$$Dismiss*/ func_0x01496e90(*(long *)(lVar6 + 0x68),1,0);
      *(undefined8 *)(lVar5 + 0x40) = 0;
    }
    lVar6 = *(long *)(lVar5 + 0x38);
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) + -1 < 0) {
        return;
      }
      iVar8 = *(int *)(lVar6 + 0x18) + -2;
      do {
        uVar2 = iVar8 + 1;
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          lVar1 = *(long *)(lVar6 + 0x10) + (ulong)uVar2 * 8;
          lVar7 = lVar6;
        }
        else {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar7 = *(long *)(lVar5 + 0x38);
          if (lVar7 == 0) break;
          lVar1 = *(long *)(lVar6 + 0x10) + (ulong)uVar2 * 8;
        }
        lVar6 = *(long *)(lVar1 + 0x20);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar7,uVar2,uRam0000000003d3b350);
        if (lVar6 == 0) break;
        lVar6 = *(long *)(lVar6 + 0x18);
        if (lVar6 != 0) {
          if (lVar6 == 0) break;
          /*UnityEngine.Events.UnityAction$$Invoke*/ func_0x03277c60(lVar6,0);
        }
        if (iVar8 < 0) {
          return;
        }
        lVar6 = *(long *)(lVar5 + 0x38);
        iVar8 = iVar8 + -1;
      } while (lVar6 != 0);
    }
  }
code_r0x025e05fc:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1537448 | Atlas.Gameplay.FTUE.BaseLayerToolTipManager.DebugLog
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerToolTipManager__DebugLog(void)

{
  return;
}



// ============================================================
// RVA: 0x153744c | Atlas.Gameplay.FTUE.BaseLayerToolTipManager.GetCurrentToolTipLocalisationKey
// ============================================================

undefined8
Atlas_Gameplay_FTUE_BaseLayerToolTipManager__GetCurrentToolTipLocalisationKey(long param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4ed7 & 1) == 0) {
    func_0x00f78a20(0x3d332d0);
    func_0x00f78a20(0x3d332d8);
    func_0x00f78a20(0x3d332e0);
    func_0x00f78a20(0x3d22820);
    func_0x00f78a20(0x3d3cd28);
    func_0x00f78a20(0x3d6b130);
    func_0x00f78a20(0x3d6cfc8);
    bRam0000000003eb4ed7 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if (*(long *)(param_1 + 0x28) == 0) {
    func_0x00f78af4();
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.ControllerFamilyLocKeyPair>$$GetEnumerator*/ func_0x024b8d2c(&uStack_50,*(long *)(param_1 + 0x28),uRam0000000003d3cd28);
    do {
      uVar3 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ControllerFamilyLocKeyPair>$$MoveNext*/ func_0x01f79540(&uStack_50,uRam0000000003d332d8);
      uVar7 = uStack_40;
      if ((uVar3 & 1) == 0) {
        uVar7 = 0;
        iStack_70 = 0x70;
        goto LAB_015375b8;
      }
      uStack_58 = uStack_38;
      uStack_60 = uStack_40;
      iVar2 = /*Core.Input.InputManager$$get_CurrentInputFamily*/ func_0x01649514(0);
    } while (iVar2 != (int)uVar7);
    plVar4 = (long *)func_0x00f78ae0(/*Core.Input.InputFamily_TypeInfo*/ uRam0000000003d22820,&uStack_60);
    if (plVar4 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      puVar5 = (undefined4 *)func_0x00f78ae4(plVar4);
      uStack_60 = CONCAT44(uStack_60._4_4_,*puVar5);
      /*System.String$$Concat*/ func_0x029bdb88(/*STR('Found key for ')*/ uRam0000000003d6cfc8,uVar6,0);
      iStack_70 = 0x7d;
      uVar6 = uStack_58;
      uVar7 = uStack_58;
LAB_015375b8:
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.ControllerFamilyLocKeyPair>$$Dispose*/ func_0x01f7953c(&uStack_50,uRam0000000003d332d0);
      if (iStack_70 != 0x7d) {
        uVar7 = uVar6;
      }
      return uVar7;
    }
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x15375f4);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1537638 | Atlas.Gameplay.FTUE.BaseLayerToolTipManager..ctor
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerToolTipManager___ctor(void)

{
  return;
}



