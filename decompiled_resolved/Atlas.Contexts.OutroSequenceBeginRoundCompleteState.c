// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.OutroSequenceBeginRoundCompleteState

// ============================================================
// RVA: 0x14b48bc | Atlas.Contexts.OutroSequenceBeginRoundCompleteState.get_CameraHoldTime
// ============================================================

undefined4 Atlas_Contexts_OutroSequenceBeginRoundCompleteState__get_CameraHoldTime(long param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



// ============================================================
// RVA: 0x14b48c4 | Atlas.Contexts.OutroSequenceBeginRoundCompleteState.set_CameraHoldTime
// ============================================================

void Atlas_Contexts_OutroSequenceBeginRoundCompleteState__set_CameraHoldTime
               (undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x7c) = param_1;
  return;
}



// ============================================================
// RVA: 0x14b48cc | Atlas.Contexts.OutroSequenceBeginRoundCompleteState.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x014b4ae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014b4ae4) */
/* WARNING: Removing unreachable block (ram,0x014b4aec) */
/* WARNING: Removing unreachable block (ram,0x014b4af4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Contexts_OutroSequenceBeginRoundCompleteState__Init
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5,undefined8 param_6)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  long lStack_a0;
  long lStack_98;
  
  *(long *)(param_4 + 0x90) = param_5;
  *(undefined8 *)(param_4 + 0xb0) = param_6;
  if (param_5 != 0) {
    lVar8 = *(long *)(param_5 + 0x140);
    *(long *)(param_4 + 0x88) = lVar8;
    if (((lVar8 != 0) && (*(long *)(lVar8 + 0x10) != 0)) &&
       (lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + 0x20), lVar8 != 0)) {
      uVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
      *(undefined8 *)(param_4 + 0xa8) = uVar5;
      return;
    }
  }
  lVar8 = func_0x00f78af4();
  *(undefined1 *)(lVar8 + 0xa0) = 0;
  if ((*(long *)(lVar8 + 0x90) != 0) &&
     (lVar6 = *(long *)(*(long *)(lVar8 + 0x90) + 0x40), lVar6 != 0)) {
    uVar5 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalHumanPlayer*/ func_0x0159aaf0(lVar6,0);
    *(undefined8 *)(lVar8 + 0x98) = uVar5;
    *(undefined4 *)(lVar8 + 0x80) = *(undefined4 *)(lVar8 + 0x7c);
    return;
  }
  auVar18 = func_0x00f78af4();
  plVar15 = auVar18._8_8_;
  lVar8 = auVar18._0_8_;
  if ((bRam0000000003eb4ab0 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ab0 = 1;
  }
  if (*(char *)(lVar8 + 0xa0) != '\0') {
    if (*(char *)(lVar8 + 0x78) == '\0') {
      return;
    }
    lVar8 = *(long *)(lVar8 + 0x60);
    if (lVar8 == 0) {
      return;
    }
    uVar5 = 0;
    lStack_98 = lVar8;
    lVar6 = *(long *)(lVar8 + 0x68);
    if (lVar6 == 0) {
      plVar15 = &lStack_98;
      lVar14 = 1;
    }
    else {
      lVar14 = *(long *)(lVar6 + 0x18);
      if (lVar14 == 0) {
        return;
      }
      plVar15 = (long *)(lVar6 + 0x20);
    }
    lVar6 = 0;
    do {
      lVar9 = plVar15[lVar6];
      pcVar13 = *(code **)(lVar9 + 0x10);
      plVar1 = *(long **)(lVar9 + 0x20);
      lVar9 = *(long *)(lVar9 + 0x28);
      if (*(short *)(lVar9 + 0x48) == -1) {
        func_0x00f78ad8(lVar9,uVar5);
      }
      iVar3 = func_0x00f78a4c(lVar9);
      if (iVar3 == 0) {
        if (((plVar1 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
           (((*(byte *)(*plVar1 + 0x115) & 1) != 0 || (*(long *)(lVar8 + 0x18) == 0))))
        goto code_r0x02924d98;
        iVar3 = func_0x00f78a44(lVar9);
        iVar4 = func_0x00f78ec0(lVar9);
        if (iVar3 == 0) {
          uVar2 = *(ushort *)(lVar9 + 0x48);
          if (iVar4 == 0) {
            lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
            uVar5 = extraout_x1_01;
            goto code_r0x02924da4;
          }
          lVar9 = func_0x00f78a48(lVar9);
          lVar10 = *plVar1;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar9) {
                puVar7 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x02924e68;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x02924e68:
          pcVar13 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar4 == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar10 = *plVar1;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x02924e40;
                }
                piVar12 = piVar12 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            lVar10 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
            uVar5 = *(undefined8 *)(lVar10 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar5,lVar9);
          pcVar13 = (code *)*puVar7;
        }
        (*pcVar13)(plVar1,puVar7);
        uVar5 = extraout_x1_02;
      }
      else if (*(char *)(lVar9 + 0x4a) == '\0') {
        (*pcVar13)(lVar9);
        uVar5 = extraout_x1;
      }
      else {
code_r0x02924d98:
        (*pcVar13)(plVar1,lVar9);
        uVar5 = extraout_x1_00;
      }
code_r0x02924da4:
      lVar6 = lVar6 + 1;
      if (lVar6 == lVar14) {
        return;
      }
    } while( true );
  }
  lVar6 = 0;
  if (plVar15 != (long *)0x0) {
    fVar17 = *(float *)(lVar8 + 0x80);
    lVar6 = *plVar15;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x014b4a38;
        }
        piVar12 = piVar12 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar15,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014b4a38:
    fVar16 = (float)(*(code *)*puVar7)(plVar15,puVar7[1]);
    fVar17 = fVar17 - fVar16;
    *(float *)(lVar8 + 0x80) = fVar17;
    if (0.0 <= fVar17) {
      return;
    }
    if (*(long *)(lVar8 + 0xb0) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(*(long *)(lVar8 + 0xb0) + 0x18);
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0,0);
    if (iVar3 != 0) {
      if (lVar6 == 0) goto code_r0x014b4b1c;
      /*Atlas.Gameplay.VirtualCamera$$StopTracking*/ func_0x0152835c(lVar6,0);
    }
    if (((*(long *)(lVar8 + 0x88) != 0) &&
        (lVar14 = *(long *)(*(long *)(lVar8 + 0x88) + 0x10), lVar14 != 0)) &&
       (lVar14 = *(long *)(lVar14 + 0x30), lVar14 != 0)) {
      /*Atlas.Gameplay.VirtualCamera$$StartTracking*/ func_0x01528348(_UNK_033f813c,lVar14,lVar6,0);
      auVar18._8_8_ = lVar8 + 0x98;
      auVar18._0_8_ = lVar8;
      goto code_r0x014b4b20;
    }
  }
code_r0x014b4b1c:
  auVar18 = func_0x00f78af4();
code_r0x014b4b20:
  lStack_a0 = lVar6;
  lStack_98 = lVar8;
  if ((*auVar18._8_8_ != 0) && (lVar8 = *(long *)(*auVar18._8_8_ + 0x10), lVar8 != 0)) {
    lVar6 = *(long *)(auVar18._0_8_ + 0xa8);
    lVar8 = Atlas_Gameplay_Kart_KartComposite__get_KartPhysicsRootObject(lVar8,0);
    if ((lVar8 != 0) && (uVar5 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar8,0), lVar6 != 0)) {
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar6,uVar5,0,0);
      lVar8 = *(long *)(auVar18._0_8_ + 0xa8);
      uStack_b0 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      if (lVar8 != 0) {
        uStack_ac = param_2;
        uStack_a8 = param_3;
        if (pcRam0000000003ec1960 == (code *)0x0) {
          pcRam0000000003ec1960 =
               (code *)func_0x00f789d4("UnityEngine.Transform::set_localPosition_Injected(UnityEngine.Vector3&)"
                                       ,0);
        }
        (*pcRam0000000003ec1960)(lVar8,&uStack_b0);
        return;
      }
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14b4920 | Atlas.Contexts.OutroSequenceBeginRoundCompleteState.OnEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x014b4ae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014b4ae4) */
/* WARNING: Removing unreachable block (ram,0x014b4aec) */
/* WARNING: Removing unreachable block (ram,0x014b4af4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Contexts_OutroSequenceBeginRoundCompleteState__OnEnter
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  long lStack_80;
  long lStack_78;
  
  *(undefined1 *)(param_4 + 0xa0) = 0;
  if ((*(long *)(param_4 + 0x90) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_4 + 0x90) + 0x40), lVar5 != 0)) {
    uVar6 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalHumanPlayer*/ func_0x0159aaf0(lVar5,0);
    *(undefined8 *)(param_4 + 0x98) = uVar6;
    *(undefined4 *)(param_4 + 0x80) = *(undefined4 *)(param_4 + 0x7c);
    return;
  }
  auVar18 = func_0x00f78af4();
  plVar15 = auVar18._8_8_;
  lVar5 = auVar18._0_8_;
  if ((bRam0000000003eb4ab0 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ab0 = 1;
  }
  if (*(char *)(lVar5 + 0xa0) != '\0') {
    if (*(char *)(lVar5 + 0x78) == '\0') {
      return;
    }
    lVar5 = *(long *)(lVar5 + 0x60);
    if (lVar5 == 0) {
      return;
    }
    uVar6 = 0;
    lStack_78 = lVar5;
    lVar8 = *(long *)(lVar5 + 0x68);
    if (lVar8 == 0) {
      plVar15 = &lStack_78;
      lVar14 = 1;
    }
    else {
      lVar14 = *(long *)(lVar8 + 0x18);
      if (lVar14 == 0) {
        return;
      }
      plVar15 = (long *)(lVar8 + 0x20);
    }
    lVar8 = 0;
    do {
      lVar9 = plVar15[lVar8];
      pcVar13 = *(code **)(lVar9 + 0x10);
      plVar1 = *(long **)(lVar9 + 0x20);
      lVar9 = *(long *)(lVar9 + 0x28);
      if (*(short *)(lVar9 + 0x48) == -1) {
        func_0x00f78ad8(lVar9,uVar6);
      }
      iVar3 = func_0x00f78a4c(lVar9);
      if (iVar3 == 0) {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar5 + 0x18) == 0))
        goto code_r0x02924d98;
        iVar3 = func_0x00f78a44(lVar9);
        iVar4 = func_0x00f78ec0(lVar9);
        if (iVar3 == 0) {
          uVar2 = *(ushort *)(lVar9 + 0x48);
          if (iVar4 == 0) {
            lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
            uVar6 = extraout_x1_01;
            goto code_r0x02924da4;
          }
          lVar9 = func_0x00f78a48(lVar9);
          lVar10 = *plVar1;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar9) {
                puVar7 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x02924e68;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x02924e68:
          pcVar13 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar4 == 0) {
            uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar10 = *plVar1;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x02924e40;
                }
                piVar12 = piVar12 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            lVar10 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
            uVar6 = *(undefined8 *)(lVar10 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar9);
          pcVar13 = (code *)*puVar7;
        }
        (*pcVar13)(plVar1,puVar7);
        uVar6 = extraout_x1_02;
      }
      else if (*(char *)(lVar9 + 0x4a) == '\0') {
        (*pcVar13)(lVar9);
        uVar6 = extraout_x1;
      }
      else {
code_r0x02924d98:
        (*pcVar13)(plVar1,lVar9);
        uVar6 = extraout_x1_00;
      }
code_r0x02924da4:
      lVar8 = lVar8 + 1;
      if (lVar8 == lVar14) {
        return;
      }
    } while( true );
  }
  lVar8 = 0;
  if (plVar15 != (long *)0x0) {
    fVar17 = *(float *)(lVar5 + 0x80);
    lVar8 = *plVar15;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x014b4a38;
        }
        piVar12 = piVar12 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar15,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014b4a38:
    fVar16 = (float)(*(code *)*puVar7)(plVar15,puVar7[1]);
    fVar17 = fVar17 - fVar16;
    *(float *)(lVar5 + 0x80) = fVar17;
    if (0.0 <= fVar17) {
      return;
    }
    if (*(long *)(lVar5 + 0xb0) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(*(long *)(lVar5 + 0xb0) + 0x18);
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
    if (iVar3 != 0) {
      if (lVar8 == 0) goto code_r0x014b4b1c;
      /*Atlas.Gameplay.VirtualCamera$$StopTracking*/ func_0x0152835c(lVar8,0);
    }
    if (((*(long *)(lVar5 + 0x88) != 0) &&
        (lVar14 = *(long *)(*(long *)(lVar5 + 0x88) + 0x10), lVar14 != 0)) &&
       (lVar14 = *(long *)(lVar14 + 0x30), lVar14 != 0)) {
      /*Atlas.Gameplay.VirtualCamera$$StartTracking*/ func_0x01528348(_UNK_033f813c,lVar14,lVar8,0);
      auVar18._8_8_ = lVar5 + 0x98;
      auVar18._0_8_ = lVar5;
      goto code_r0x014b4b20;
    }
  }
code_r0x014b4b1c:
  auVar18 = func_0x00f78af4();
code_r0x014b4b20:
  lStack_80 = lVar8;
  lStack_78 = lVar5;
  if ((*auVar18._8_8_ != 0) && (lVar5 = *(long *)(*auVar18._8_8_ + 0x10), lVar5 != 0)) {
    lVar8 = *(long *)(auVar18._0_8_ + 0xa8);
    lVar5 = Atlas_Gameplay_Kart_KartComposite__get_KartPhysicsRootObject(lVar5,0);
    if ((lVar5 != 0) && (uVar6 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar5,0), lVar8 != 0)) {
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar8,uVar6,0,0);
      lVar5 = *(long *)(auVar18._0_8_ + 0xa8);
      uStack_90 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      if (lVar5 != 0) {
        uStack_8c = param_2;
        uStack_88 = param_3;
        if (pcRam0000000003ec1960 == (code *)0x0) {
          pcRam0000000003ec1960 =
               (code *)func_0x00f789d4("UnityEngine.Transform::set_localPosition_Injected(UnityEngine.Vector3&)"
                                       ,0);
        }
        (*pcRam0000000003ec1960)(lVar5,&uStack_90);
        return;
      }
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14b4968 | Atlas.Contexts.OutroSequenceBeginRoundCompleteState.OnUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x014b4ae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014b4ae4) */
/* WARNING: Removing unreachable block (ram,0x014b4aec) */
/* WARNING: Removing unreachable block (ram,0x014b4af4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Contexts_OutroSequenceBeginRoundCompleteState__OnUpdate
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long *param_5)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  long lStack_60;
  long lStack_58;
  
  if ((bRam0000000003eb4ab0 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ab0 = 1;
  }
  if (*(char *)(param_4 + 0xa0) != '\0') {
    if (*(char *)(param_4 + 0x78) == '\0') {
      return;
    }
    lVar6 = *(long *)(param_4 + 0x60);
    if (lVar6 == 0) {
      return;
    }
    uVar8 = 0;
    lStack_58 = lVar6;
    lVar9 = *(long *)(lVar6 + 0x68);
    if (lVar9 == 0) {
      plVar7 = &lStack_58;
      lVar15 = 1;
    }
    else {
      lVar15 = *(long *)(lVar9 + 0x18);
      if (lVar15 == 0) {
        return;
      }
      plVar7 = (long *)(lVar9 + 0x20);
    }
    lVar9 = 0;
    do {
      lVar10 = plVar7[lVar9];
      pcVar14 = *(code **)(lVar10 + 0x10);
      plVar1 = *(long **)(lVar10 + 0x20);
      lVar10 = *(long *)(lVar10 + 0x28);
      if (*(short *)(lVar10 + 0x48) == -1) {
        func_0x00f78ad8(lVar10,uVar8);
      }
      iVar3 = func_0x00f78a4c(lVar10);
      if (iVar3 == 0) {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar10 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar6 + 0x18) == 0))
        goto code_r0x02924d98;
        iVar3 = func_0x00f78a44(lVar10);
        iVar4 = func_0x00f78ec0(lVar10);
        if (iVar3 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar4 == 0) {
            lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(plVar1,*(undefined8 *)(lVar10 + 0x140));
            uVar8 = extraout_x1_01;
            goto code_r0x02924da4;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *plVar1;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar5 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x02924e68;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar5 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x02924e68:
          pcVar14 = (code *)*puVar5;
          puVar5 = (undefined8 *)puVar5[1];
        }
        else {
          if (iVar4 == 0) {
            uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02924e40;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
            uVar8 = *(undefined8 *)(lVar11 + 8);
          }
          puVar5 = (undefined8 *)func_0x00f78acc(uVar8,lVar10);
          pcVar14 = (code *)*puVar5;
        }
        (*pcVar14)(plVar1,puVar5);
        uVar8 = extraout_x1_02;
      }
      else if (*(char *)(lVar10 + 0x4a) == '\0') {
        (*pcVar14)(lVar10);
        uVar8 = extraout_x1;
      }
      else {
code_r0x02924d98:
        (*pcVar14)(plVar1,lVar10);
        uVar8 = extraout_x1_00;
      }
code_r0x02924da4:
      lVar9 = lVar9 + 1;
      if (lVar9 == lVar15) {
        return;
      }
    } while( true );
  }
  lVar6 = 0;
  if (param_5 != (long *)0x0) {
    fVar17 = *(float *)(param_4 + 0x80);
    lVar6 = *param_5;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x014b4a38;
        }
        piVar13 = piVar13 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)func_0x00fac1f0(param_5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014b4a38:
    fVar16 = (float)(*(code *)*puVar5)(param_5,puVar5[1]);
    fVar17 = fVar17 - fVar16;
    *(float *)(param_4 + 0x80) = fVar17;
    if (0.0 <= fVar17) {
      return;
    }
    if (*(long *)(param_4 + 0xb0) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(*(long *)(param_4 + 0xb0) + 0x18);
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0,0);
    if (iVar3 != 0) {
      if (lVar6 == 0) goto code_r0x014b4b1c;
      /*Atlas.Gameplay.VirtualCamera$$StopTracking*/ func_0x0152835c(lVar6,0);
    }
    if (((*(long *)(param_4 + 0x88) != 0) &&
        (lVar9 = *(long *)(*(long *)(param_4 + 0x88) + 0x10), lVar9 != 0)) &&
       (lVar9 = *(long *)(lVar9 + 0x30), lVar9 != 0)) {
      /*Atlas.Gameplay.VirtualCamera$$StartTracking*/ func_0x01528348(_UNK_033f813c,lVar9,lVar6,0);
      plVar7 = (long *)(param_4 + 0x98);
      lVar9 = param_4;
      goto code_r0x014b4b20;
    }
  }
code_r0x014b4b1c:
  auVar18 = func_0x00f78af4();
  plVar7 = auVar18._8_8_;
  lVar9 = auVar18._0_8_;
code_r0x014b4b20:
  lStack_60 = lVar6;
  lStack_58 = param_4;
  if ((*plVar7 != 0) && (lVar6 = *(long *)(*plVar7 + 0x10), lVar6 != 0)) {
    lVar15 = *(long *)(lVar9 + 0xa8);
    lVar6 = Atlas_Gameplay_Kart_KartComposite__get_KartPhysicsRootObject(lVar6,0);
    if ((lVar6 != 0) && (uVar8 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar6,0), lVar15 != 0)) {
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar15,uVar8,0,0);
      lVar6 = *(long *)(lVar9 + 0xa8);
      uStack_70 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      if (lVar6 != 0) {
        uStack_6c = param_2;
        uStack_68 = param_3;
        if (pcRam0000000003ec1960 == (code *)0x0) {
          pcRam0000000003ec1960 =
               (code *)func_0x00f789d4("UnityEngine.Transform::set_localPosition_Injected(UnityEngine.Vector3&)"
                                       ,0);
        }
        (*pcRam0000000003ec1960)(lVar6,&uStack_70);
        return;
      }
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14b4b20 | Atlas.Contexts.OutroSequenceBeginRoundCompleteState.SwitchCameraFocus
// ============================================================

void Atlas_Contexts_OutroSequenceBeginRoundCompleteState__SwitchCameraFocus
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long *param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if ((*param_5 != 0) && (lVar1 = *(long *)(*param_5 + 0x10), lVar1 != 0)) {
    lVar3 = *(long *)(param_4 + 0xa8);
    lVar1 = Atlas_Gameplay_Kart_KartComposite__get_KartPhysicsRootObject(lVar1,0);
    if ((lVar1 != 0) && (uVar2 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar1,0), lVar3 != 0)) {
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar3,uVar2,0,0);
      lVar1 = *(long *)(param_4 + 0xa8);
      uStack_30 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      if (lVar1 != 0) {
        uStack_2c = param_2;
        uStack_28 = param_3;
        if (pcRam0000000003ec1960 == (code *)0x0) {
          pcRam0000000003ec1960 =
               (code *)func_0x00f789d4("UnityEngine.Transform::set_localPosition_Injected(UnityEngine.Vector3&)"
                                       ,0);
        }
        (*pcRam0000000003ec1960)(lVar1,&uStack_30);
        return;
      }
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14b4b98 | Atlas.Contexts.OutroSequenceBeginRoundCompleteState.OnExit
// ============================================================

void Atlas_Contexts_OutroSequenceBeginRoundCompleteState__OnExit(void)

{
  return;
}



// ============================================================
// RVA: 0x14b4b9c | Atlas.Contexts.OutroSequenceBeginRoundCompleteState.OnDeInit
// ============================================================

void Atlas_Contexts_OutroSequenceBeginRoundCompleteState__OnDeInit(void)

{
  return;
}



// ============================================================
// RVA: 0x14b4ba0 | Atlas.Contexts.OutroSequenceBeginRoundCompleteState..ctor
// ============================================================

void Atlas_Contexts_OutroSequenceBeginRoundCompleteState___ctor(void)

{
  return;
}



