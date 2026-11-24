// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.NetworkTournament

// ============================================================
// RVA: 0x165e7d4 | Core.Networking.NetworkTournament.get_CurrentRound
// ============================================================

ulong Core_Networking_NetworkTournament__get_CurrentRound(long *param_1)

{
  ulong uVar1;
  
  if ((bRam0000000003eb585d & 1) == 0) {
    func_0x00f78a20(0x3d3b6c0);
    bRam0000000003eb585d = 1;
  }
  if (*param_1 != 0) {
    return (ulong)*(uint *)(*param_1 + 0x18);
  }
  uVar1 = func_0x00f78af4();
  return uVar1;
}



// ============================================================
// RVA: 0x165f86c | Core.Networking.NetworkTournament.ChangeSyncId
// ============================================================

/* WARNING: Possible PIC construction at 0x0165f894: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165f898) */

ulong Core_Networking_NetworkTournament__ChangeSyncId
                (ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                undefined4 param_5)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  ulong uStack_d0;
  undefined4 uStack_c8;
  ulong uStack_c0;
  undefined4 uStack_b8;
  ulong uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puStack_40 = &stack0xfffffffffffffff0;
  uVar6 = *(ulong *)(param_1 + 8);
  uStack_38 = 0x165f898;
  uVar11 = param_3;
  if ((bRam0000000003eb5861 & 1) == 0) {
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3b5d8);
    param_1 = func_0x00f78a20(0x3d3b5e0);
    bRam0000000003eb5861 = 1;
  }
  if (uVar6 != 0) {
    uVar2 = *(uint *)(uVar6 + 0x18);
    if (0 < (int)uVar2) {
      uVar11 = 0;
      do {
        uVar10 = (uint)uVar11;
        if (uVar2 <= uVar10) {
          param_1 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar9 = *(ulong *)(*(long *)(uVar6 + 0x10) + (long)(int)uVar10 * 0xc + 0x20);
        if ((int)uVar9 == (int)param_2) {
          uVar2 = *(uint *)(*(long *)(uVar6 + 0x10) + (long)(int)uVar10 * 0xc + 0x28);
          uVar7 = uVar9 & 0xffffffff00000000 | param_3 & 0xffffffff;
          uVar9 = uVar6;
          if (*(uint *)(uVar6 + 0x18) <= uVar10) {
            uVar9 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar8 = *(long *)(uVar6 + 0x10);
          if (lVar8 == 0) {
            func_0x00f78af4();
          }
          else if (uVar10 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar10 * 0xc;
            *(ulong *)(lVar8 + 0x20) = uVar7;
            *(uint *)(lVar8 + 0x28) = uVar2;
            *(int *)(uVar6 + 0x1c) = *(int *)(uVar6 + 0x1c) + 1;
            return uVar9;
          }
          uVar5 = func_0x00f78b24();
          auVar12 = func_0x00f78ac0(uVar5,0);
          lVar8 = *(long *)(auVar12._8_8_ + 0x18);
          uStack_90 = uVar11;
          uStack_88 = uVar7;
          ppuStack_80 = (undefined1 **)(ulong)uVar2;
          puStack_78 = (undefined *)uVar6;
          if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar8);
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x38);
          if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar8);
          }
          lVar8 = func_0x00f78adc(auVar12._0_8_,lVar8);
          if (lVar8 == 0) {
            if (auVar12._0_8_ == 0) {
              uStack_98 = (ulong)uStack_98._4_4_ << 0x20;
              uStack_a0 = 0;
              lVar8 = *(long *)(auVar12._8_8_ + 0x18);
              if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar8);
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x38);
              if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar8);
              }
              lVar8 = func_0x00f78ae0(lVar8,&uStack_a0);
              uVar11 = (ulong)(lVar8 == 0);
            }
            else {
              uVar11 = 0;
            }
          }
          else {
            uVar11 = 1;
          }
          return uVar11;
        }
        uVar11 = (ulong)(uVar10 + 1);
        uVar2 = *(uint *)(uVar6 + 0x18);
      } while ((int)(uVar10 + 1) < (int)uVar2);
    }
    return param_1;
  }
  auVar12 = func_0x00f78af4();
  uVar9 = auVar12._8_8_;
  uStack_a0 = 0x3eb5000;
  puStack_78 = &Core_Networking_NetworkTournament__ComparisonFunc;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b0 = uVar11;
  uStack_a8 = param_5;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = uVar6;
  ppuStack_80 = &puStack_40;
  if ((int)(uVar11 >> 0x20) == auVar12._12_4_) {
    iVar3 = /*Core.Networking.NetworkTournament$$GetScoreAwardedThisRound*/ func_0x01661070(auVar12._0_8_,uVar9,&uStack_c0);
    iVar4 = /*Core.Networking.NetworkTournament$$GetScoreAwardedThisRound*/ func_0x01661070(auVar12._0_8_,uVar11,&uStack_d0);
    uVar2 = 1;
    if (iVar3 != 0) {
      uVar2 = 0xffffffff;
    }
    if (iVar3 == 0) {
      return (ulong)uVar2;
    }
    if (iVar4 == 0) {
      return (ulong)uVar2;
    }
    puVar1 = &uStack_c0;
    uVar9 = uStack_d0;
  }
  else {
    puVar1 = &uStack_b0;
  }
  uVar11 = /*System.UInt32$$CompareTo*/ func_0x02a0b320((ulong)puVar1 | 4,uVar9 >> 0x20,0);
  return uVar11;
}



// ============================================================
// RVA: 0x1660f34 | Core.Networking.NetworkTournament.GetTotalNetworkScore
// ============================================================

/* WARNING: Possible PIC construction at 0x016613f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016613f4) */
/* WARNING: Removing unreachable block (ram,0x01661414) */
/* WARNING: Removing unreachable block (ram,0x0166141c) */
/* WARNING: Removing unreachable block (ram,0x01661420) */

ulong Core_Networking_NetworkTournament__GetTotalNetworkScore
                (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                undefined8 param_5)

{
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined *puVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int aiStack_70 [4];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar9 = param_3;
  if ((bRam0000000003eb585e & 1) == 0) {
    func_0x00f78a20(0x3d32b90);
    func_0x00f78a20(0x3d32b98);
    func_0x00f78a20(0x3d32ba0);
    func_0x00f78a20(0x3d3b5c0);
    bRam0000000003eb585e = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  *param_3 = 0;
  if (*(long *)(param_1 + 8) == 0) {
    auVar16 = func_0x00f78af4();
    if (auVar16._8_4_ != 1) {
      puVar14 = &Core_Networking_NetworkTournament__GetScoreAwardedThisRound;
      auVar16 = __Unwind_Resume();
      piVar2 = aiStack_70;
      while( true ) {
        *(undefined8 *)((long)piVar2 + -0x40) = unaff_x24;
        *(undefined8 *)((long)piVar2 + -0x38) = unaff_x23;
        *(undefined8 *)((long)piVar2 + -0x30) = 0x3eb5000;
        *(long *)((long)piVar2 + -0x28) = param_1;
        *(undefined8 *)((long)piVar2 + -0x20) = param_2;
        *(undefined8 **)((long)piVar2 + -0x18) = param_3;
        *(undefined1 **)((long)piVar2 + -0x10) = (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined **)((long)piVar2 + -8) = puVar14;
        if ((bRam0000000003eb585f & 1) == 0) {
          func_0x00f78a20(0x3d32b90);
          func_0x00f78a20(0x3d32b98);
          func_0x00f78a20(0x3d32ba0);
          func_0x00f78a20(0x3d3b5c0);
          bRam0000000003eb585f = 1;
        }
        *(undefined8 *)((long)piVar2 + -0x58) = 0;
        *(undefined8 *)((long)piVar2 + -0x60) = 0;
        *(undefined8 *)((long)piVar2 + -0x48) = 0;
        *(undefined8 *)((long)piVar2 + -0x50) = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        *puVar9 = 0;
        lVar4 = *(long *)(auVar16._0_8_ + 0x10);
        if (lVar4 != 0) break;
        auVar17 = func_0x00f78af4();
        if (auVar17._8_4_ == 1) {
          func_0x032ff7f4(auVar17._0_8_,auVar17._8_8_,(undefined1 *)((long)piVar2 + -0x60));
          return 0;
        }
        puVar5 = (undefined8 *)__Unwind_Resume();
        *(undefined8 *)((long)piVar2 + -0xb0) = unaff_x24;
        *(undefined8 *)((long)piVar2 + -0xa8) = unaff_x23;
        *(undefined8 *)((long)piVar2 + -0xa0) = 0x3eb5000;
        *(undefined1 (*) [16])((long)piVar2 + -0x98) = auVar16;
        *(undefined8 **)((long)piVar2 + -0x88) = puVar9;
        *(undefined1 **)((long)piVar2 + -0x80) = (undefined1 *)((long)piVar2 + -0x10);
        *(undefined **)((long)piVar2 + -0x78) = &Core_Networking_NetworkTournament__SortTotalScores;
        unaff_x24 = 0x3d1b938;
        unaff_x23 = 0x3d2cef8;
        if ((bRam0000000003eb5860 & 1) == 0) {
          func_0x00f78a20(0x3d2cef8);
          func_0x00f78a20(0x3d1b938);
          func_0x00f78a20(0x3d3b5c8);
          func_0x00f78a20(0x3d5ada0);
          func_0x00f78a20(0x3d237d8);
          bRam0000000003eb5860 = 1;
        }
        lVar4 = puVar5[1];
        uVar6 = *puVar5;
        uVar15 = puVar5[3];
        uVar7 = puVar5[2];
        *(undefined8 *)((long)piVar2 + -200) = puVar5[1];
        *(undefined8 *)((long)piVar2 + -0xd0) = uVar6;
        *(undefined8 *)((long)piVar2 + -0xb8) = uVar15;
        *(undefined8 *)((long)piVar2 + -0xc0) = uVar7;
        uVar6 = func_0x00f78ae0(/*Core.Networking.NetworkTournament_TypeInfo*/ uRam0000000003d237d8,(undefined1 *)((long)piVar2 + -0xd0));
        uVar7 = func_0x00f78aec(/*System.Comparison<NetworkScore>_TypeInfo*/ uRam0000000003d1b938);
        param_1 = lRam0000000003d5ada0;
        puVar9 = puRam0000000003d2cef8;
        /*System.Comparison<NetworkScore>$$.ctor*/ func_0x01db2004(uVar7,uVar6);
        if (lVar4 != 0) {
          uVar3 = /*System.Collections.Generic.List<NetworkScore>$$Sort*/ func_0x0241b1d4(lVar4,uVar7,uRam0000000003d3b5c8);
          return uVar3;
        }
        auVar16 = func_0x00f78af4();
        uVar8 = auVar16._8_8_;
        uVar3 = auVar16._0_8_;
        register0x00000008 = (BADSPACEBASE *)((long)piVar2 + -0x110);
        *(undefined8 *)((long)piVar2 + -0x110) = 0x3d1b938;
        *(undefined8 *)((long)piVar2 + -0x108) = 0x3d2cef8;
        *(undefined8 *)((long)piVar2 + -0x100) = 0x3d5ada0;
        *(undefined8 *)((long)piVar2 + -0xf8) = uVar6;
        *(undefined8 *)((long)piVar2 + -0xf0) = 0;
        *(undefined8 *)((long)piVar2 + -0xe8) = uVar7;
        *(undefined1 **)((long)piVar2 + -0xe0) = (undefined1 *)((long)piVar2 + -0x80);
        *(undefined **)((long)piVar2 + -0xd8) =
             &Core_Networking_NetworkTournament__ChangeSyncIdInList;
        param_3 = puVar9;
        if ((bRam0000000003eb5861 & 1) == 0) {
          func_0x00f78a20(0x3d3b5d0);
          func_0x00f78a20(0x3d3b5d8);
          uVar3 = func_0x00f78a20(0x3d3b5e0);
          bRam0000000003eb5861 = 1;
        }
        if (uVar8 != 0) {
          uVar1 = *(uint *)(uVar8 + 0x18);
          if (0 < (int)uVar1) {
            uVar13 = 0;
            do {
              uVar12 = (uint)uVar13;
              if (uVar1 <= uVar12) {
                uVar3 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              uVar11 = *(ulong *)(*(long *)(uVar8 + 0x10) + (long)(int)uVar12 * 0xc + 0x20);
              if ((int)uVar11 == (int)param_1) {
                uVar1 = *(uint *)(*(long *)(uVar8 + 0x10) + (long)(int)uVar12 * 0xc + 0x28);
                uVar11 = uVar11 & 0xffffffff00000000 | (ulong)puVar9 & 0xffffffff;
                *(undefined8 *)((long)piVar2 + -0x100) = *(undefined8 *)((long)piVar2 + -0x100);
                *(undefined8 *)((long)piVar2 + -0xf8) = *(undefined8 *)((long)piVar2 + -0xf8);
                *(undefined8 *)((long)piVar2 + -0xf0) = *(undefined8 *)((long)piVar2 + -0xf0);
                *(undefined8 *)((long)piVar2 + -0xe8) = *(undefined8 *)((long)piVar2 + -0xe8);
                *(undefined8 *)((long)piVar2 + -0xe0) = *(undefined8 *)((long)piVar2 + -0xe0);
                *(undefined8 *)((long)piVar2 + -0xd8) = *(undefined8 *)((long)piVar2 + -0xd8);
                uVar3 = uVar8;
                if (*(uint *)(uVar8 + 0x18) <= uVar12) {
                  uVar3 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                lVar4 = *(long *)(uVar8 + 0x10);
                if (lVar4 == 0) {
                  func_0x00f78af4();
                }
                else if (uVar12 < *(uint *)(lVar4 + 0x18)) {
                  lVar4 = lVar4 + (long)(int)uVar12 * 0xc;
                  *(ulong *)(lVar4 + 0x20) = uVar11;
                  *(uint *)(lVar4 + 0x28) = uVar1;
                  *(int *)(uVar8 + 0x1c) = *(int *)(uVar8 + 0x1c) + 1;
                  return uVar3;
                }
                uVar6 = func_0x00f78b24();
                auVar16 = func_0x00f78ac0(uVar6,0);
                *(ulong *)((long)piVar2 + -0x130) = uVar13;
                *(ulong *)((long)piVar2 + -0x128) = uVar11;
                *(ulong *)((long)piVar2 + -0x120) = (ulong)uVar1;
                *(ulong *)((long)piVar2 + -0x118) = uVar8;
                *(undefined1 **)((long)piVar2 + -0x110) = (undefined1 *)((long)piVar2 + -0xe0);
                *(undefined **)((long)piVar2 + -0x108) =
                     &System_Collections_Generic_List_NetworkScore___IsCompatibleObject;
                lVar4 = *(long *)(auVar16._8_8_ + 0x18);
                if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar4);
                }
                lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
                if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar4);
                }
                lVar4 = func_0x00f78adc(auVar16._0_8_,lVar4);
                if (lVar4 == 0) {
                  if (auVar16._0_8_ == 0) {
                    *(undefined4 *)((long)piVar2 + -0x138) = 0;
                    *(undefined8 *)((long)piVar2 + -0x140) = 0;
                    lVar4 = *(long *)(auVar16._8_8_ + 0x18);
                    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                      func_0x00fac028(lVar4);
                    }
                    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
                    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
                      func_0x00fac028(lVar4);
                    }
                    lVar4 = func_0x00f78ae0(lVar4,(undefined1 *)((long)piVar2 + -0x140));
                    uVar3 = (ulong)(lVar4 == 0);
                  }
                  else {
                    uVar3 = 0;
                  }
                }
                else {
                  uVar3 = 1;
                }
                return uVar3;
              }
              uVar13 = (ulong)(uVar12 + 1);
              uVar1 = *(uint *)(uVar8 + 0x18);
            } while ((int)(uVar12 + 1) < (int)uVar1);
          }
          return uVar3;
        }
        auVar16 = func_0x00f78af4();
        param_2 = auVar16._0_8_;
        *(undefined8 *)((long)piVar2 + -0x140) = 0x3eb5000;
        *(long *)((long)piVar2 + -0x138) = param_1;
        *(undefined8 **)((long)piVar2 + -0x130) = puVar9;
        *(undefined8 *)((long)piVar2 + -0x128) = 0;
        *(undefined1 **)((long)piVar2 + -0x120) = (undefined1 *)((long)piVar2 + -0xe0);
        *(undefined **)((long)piVar2 + -0x118) = &Core_Networking_NetworkTournament__ComparisonFunc;
        *(undefined8 **)((long)piVar2 + -0x150) = param_3;
        *(int *)((long)piVar2 + -0x148) = (int)param_5;
        *(undefined4 *)((long)piVar2 + -0x158) = 0;
        *(undefined8 *)((long)piVar2 + -0x160) = 0;
        *(undefined4 *)((long)piVar2 + -0x168) = 0;
        *(undefined8 *)((long)piVar2 + -0x170) = 0;
        if ((int)((ulong)param_3 >> 0x20) != auVar16._12_4_) {
          uVar3 = /*System.UInt32$$CompareTo*/ func_0x02a0b320((ulong)((long)piVar2 + -0x150) | 4,auVar16._8_8_ >> 0x20,0);
          return uVar3;
        }
        puVar9 = (undefined8 *)((long)piVar2 + -0x160);
        puVar14 = &UNK_016613f4;
        piVar2 = (int *)((long)piVar2 + -0x170);
      }
      /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044((undefined1 *)((long)piVar2 + -0x60),lVar4,uRam0000000003d3b5c0);
      do {
        uVar3 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84((undefined1 *)((long)piVar2 + -0x60),uRam0000000003d32b98);
        if ((uVar3 & 1) == 0) {
          uVar10 = 0x4a;
          goto code_r0x0166114c;
        }
      } while ((int)*(undefined8 *)((long)piVar2 + -0x50) != auVar16._8_4_);
      uVar10 = *(undefined4 *)((long)piVar2 + -0x48);
      *puVar9 = *(undefined8 *)((long)piVar2 + -0x50);
      *(undefined4 *)(puVar9 + 1) = uVar10;
      uVar10 = 0x4c;
code_r0x0166114c:
      *(undefined4 *)((long)piVar2 + -0x70) = uVar10;
      /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80((undefined1 *)((long)piVar2 + -0x60),uRam0000000003d32b90);
      if (*(int *)((long)piVar2 + -0x70) != 0x4c) {
        uVar3 = 0;
      }
      return uVar3;
    }
    func_0x032ff7a8(auVar16._0_8_,auVar16._8_8_,&uStack_60);
    uVar3 = 0;
  }
  else {
    /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(&uStack_60,*(long *)(param_1 + 8),uRam0000000003d3b5c0);
    do {
      uVar3 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(&uStack_60,uRam0000000003d32b98);
      if ((uVar3 & 1) == 0) {
        aiStack_70[0] = 0x4a;
        goto LAB_01661010;
      }
    } while ((int)uStack_50 != (int)param_2);
    *param_3 = uStack_50;
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_48;
    aiStack_70[0] = 0x4c;
LAB_01661010:
    /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_60,uRam0000000003d32b90);
    if (aiStack_70[0] != 0x4c) {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// ============================================================
// RVA: 0x1661070 | Core.Networking.NetworkTournament.GetScoreAwardedThisRound
// ============================================================

ulong Core_Networking_NetworkTournament__GetScoreAwardedThisRound
                (long param_1,int param_2,undefined8 *param_3,undefined8 param_4,undefined4 param_5)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  ulong uStack_170;
  undefined4 uStack_168;
  ulong uStack_160;
  undefined4 uStack_158;
  ulong uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined1 ***pppuStack_120;
  undefined *puStack_118;
  undefined1 ***pppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_80;
  undefined *puStack_78;
  int iStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb585f & 1) == 0) {
    func_0x00f78a20(0x3d32b90);
    func_0x00f78a20(0x3d32b98);
    func_0x00f78a20(0x3d32ba0);
    func_0x00f78a20(0x3d3b5c0);
    bRam0000000003eb585f = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  *param_3 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
    auVar16 = func_0x00f78af4();
    if (auVar16._8_4_ == 1) {
      func_0x032ff7f4(auVar16._0_8_,auVar16._8_8_,&uStack_60);
      return 0;
    }
    puVar6 = (undefined8 *)__Unwind_Resume();
    puStack_78 = &Core_Networking_NetworkTournament__SortTotalScores;
    puStack_80 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb5860 & 1) == 0) {
      func_0x00f78a20(0x3d2cef8);
      func_0x00f78a20(0x3d1b938);
      func_0x00f78a20(0x3d3b5c8);
      func_0x00f78a20(0x3d5ada0);
      func_0x00f78a20(0x3d237d8);
      bRam0000000003eb5860 = 1;
    }
    lVar13 = puVar6[1];
    uStack_c8 = puVar6[1];
    uStack_d0 = *puVar6;
    uStack_b8 = puVar6[3];
    uStack_c0 = puVar6[2];
    uVar7 = func_0x00f78ae0(/*Core.Networking.NetworkTournament_TypeInfo*/ uRam0000000003d237d8,&uStack_d0);
    uVar8 = func_0x00f78aec(/*System.Comparison<NetworkScore>_TypeInfo*/ uRam0000000003d1b938);
    uVar10 = uRam0000000003d5ada0;
    uVar5 = uRam0000000003d2cef8;
    /*System.Comparison<NetworkScore>$$.ctor*/ func_0x01db2004(uVar8,uVar7);
    if (lVar13 == 0) {
      auVar16 = func_0x00f78af4();
      uVar11 = auVar16._8_8_;
      uVar9 = auVar16._0_8_;
      pppuStack_110 = (undefined1 ***)0x3d1b938;
      puStack_108 = (undefined *)0x3d2cef8;
      uStack_100 = 0x3d5ada0;
      puStack_d8 = &Core_Networking_NetworkTournament__ChangeSyncIdInList;
      uVar15 = uVar5;
      uStack_f8 = uVar7;
      lStack_f0 = lVar13;
      uStack_e8 = uVar8;
      ppuStack_e0 = &puStack_80;
      if ((bRam0000000003eb5861 & 1) == 0) {
        func_0x00f78a20(0x3d3b5d0);
        func_0x00f78a20(0x3d3b5d8);
        uVar9 = func_0x00f78a20(0x3d3b5e0);
        bRam0000000003eb5861 = 1;
      }
      if (uVar11 == 0) {
        auVar16 = func_0x00f78af4();
        uVar9 = auVar16._8_8_;
        uStack_140 = 0x3eb5000;
        puStack_118 = &Core_Networking_NetworkTournament__ComparisonFunc;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_150 = uVar15;
        uStack_148 = param_5;
        uStack_138 = uVar10;
        uStack_130 = uVar5;
        uStack_128 = uVar11;
        pppuStack_120 = &ppuStack_e0;
        if ((int)(uVar15 >> 0x20) == auVar16._12_4_) {
          iVar3 = Core_Networking_NetworkTournament__GetScoreAwardedThisRound
                            (auVar16._0_8_,uVar9,&uStack_160);
          iVar4 = Core_Networking_NetworkTournament__GetScoreAwardedThisRound
                            (auVar16._0_8_,uVar15,&uStack_170);
          uVar2 = 1;
          if (iVar3 != 0) {
            uVar2 = 0xffffffff;
          }
          if (iVar3 == 0) {
            return (ulong)uVar2;
          }
          if (iVar4 == 0) {
            return (ulong)uVar2;
          }
          puVar1 = &uStack_160;
          uVar9 = uStack_170;
        }
        else {
          puVar1 = &uStack_150;
        }
        uVar5 = /*System.UInt32$$CompareTo*/ func_0x02a0b320((ulong)puVar1 | 4,uVar9 >> 0x20,0);
        return uVar5;
      }
      uVar2 = *(uint *)(uVar11 + 0x18);
      if (0 < (int)uVar2) {
        uVar15 = 0;
        do {
          uVar14 = (uint)uVar15;
          if (uVar2 <= uVar14) {
            uVar9 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar12 = *(ulong *)(*(long *)(uVar11 + 0x10) + (long)(int)uVar14 * 0xc + 0x20);
          if ((int)uVar12 == (int)uVar10) {
            uVar2 = *(uint *)(*(long *)(uVar11 + 0x10) + (long)(int)uVar14 * 0xc + 0x28);
            uVar9 = uVar12 & 0xffffffff00000000 | uVar5 & 0xffffffff;
            uVar5 = uVar11;
            if (*(uint *)(uVar11 + 0x18) <= uVar14) {
              uVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar13 = *(long *)(uVar11 + 0x10);
            if (lVar13 == 0) {
              func_0x00f78af4();
            }
            else if (uVar14 < *(uint *)(lVar13 + 0x18)) {
              lVar13 = lVar13 + (long)(int)uVar14 * 0xc;
              *(ulong *)(lVar13 + 0x20) = uVar9;
              *(uint *)(lVar13 + 0x28) = uVar2;
              *(int *)(uVar11 + 0x1c) = *(int *)(uVar11 + 0x1c) + 1;
              return uVar5;
            }
            uVar10 = func_0x00f78b24();
            auVar16 = func_0x00f78ac0(uVar10,0);
            puStack_108 = &System_Collections_Generic_List_NetworkScore___IsCompatibleObject;
            lVar13 = *(long *)(auVar16._8_8_ + 0x18);
            uStack_130 = uVar15;
            uStack_128 = uVar9;
            pppuStack_120 = (undefined1 ***)(ulong)uVar2;
            puStack_118 = (undefined *)uVar11;
            pppuStack_110 = &ppuStack_e0;
            if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar13);
            }
            lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x38);
            if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar13);
            }
            lVar13 = func_0x00f78adc(auVar16._0_8_,lVar13);
            if (lVar13 == 0) {
              if (auVar16._0_8_ == 0) {
                uStack_138 = (ulong)uStack_138._4_4_ << 0x20;
                uStack_140 = 0;
                lVar13 = *(long *)(auVar16._8_8_ + 0x18);
                if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar13);
                }
                lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x38);
                if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar13);
                }
                lVar13 = func_0x00f78ae0(lVar13,&uStack_140);
                uVar5 = (ulong)(lVar13 == 0);
              }
              else {
                uVar5 = 0;
              }
            }
            else {
              uVar5 = 1;
            }
            return uVar5;
          }
          uVar15 = (ulong)(uVar14 + 1);
          uVar2 = *(uint *)(uVar11 + 0x18);
        } while ((int)(uVar14 + 1) < (int)uVar2);
      }
      return uVar9;
    }
    uVar5 = /*System.Collections.Generic.List<NetworkScore>$$Sort*/ func_0x0241b1d4(lVar13,uVar8,uRam0000000003d3b5c8);
    return uVar5;
  }
  /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(&uStack_60,*(long *)(param_1 + 0x10),uRam0000000003d3b5c0);
  do {
    uVar5 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(&uStack_60,uRam0000000003d32b98);
    if ((uVar5 & 1) == 0) {
      iStack_70 = 0x4a;
      goto LAB_0166114c;
    }
  } while ((int)uStack_50 != param_2);
  *param_3 = uStack_50;
  *(undefined4 *)(param_3 + 1) = (undefined4)uStack_48;
  iStack_70 = 0x4c;
LAB_0166114c:
  /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_60,uRam0000000003d32b90);
  if (iStack_70 != 0x4c) {
    uVar5 = 0;
  }
  return uVar5;
}



// ============================================================
// RVA: 0x16611ac | Core.Networking.NetworkTournament.SortTotalScores
// ============================================================

ulong Core_Networking_NetworkTournament__SortTotalScores(undefined8 *param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 in_w4;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  ulong uStack_100;
  undefined4 uStack_f8;
  ulong uStack_f0;
  undefined4 uStack_e8;
  ulong uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb5860 & 1) == 0) {
    func_0x00f78a20(0x3d2cef8);
    func_0x00f78a20(0x3d1b938);
    func_0x00f78a20(0x3d3b5c8);
    func_0x00f78a20(0x3d5ada0);
    func_0x00f78a20(0x3d237d8);
    bRam0000000003eb5860 = 1;
  }
  lVar12 = param_1[1];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uVar5 = func_0x00f78ae0(/*Core.Networking.NetworkTournament_TypeInfo*/ uRam0000000003d237d8,&uStack_60);
  uVar6 = func_0x00f78aec(/*System.Comparison<NetworkScore>_TypeInfo*/ uRam0000000003d1b938);
  uVar9 = uRam0000000003d5ada0;
  uVar7 = uRam0000000003d2cef8;
  /*System.Comparison<NetworkScore>$$.ctor*/ func_0x01db2004(uVar6,uVar5);
  if (lVar12 != 0) {
    uVar7 = /*System.Collections.Generic.List<NetworkScore>$$Sort*/ func_0x0241b1d4(lVar12,uVar6,uRam0000000003d3b5c8);
    return uVar7;
  }
  auVar15 = func_0x00f78af4();
  uVar10 = auVar15._8_8_;
  uVar8 = auVar15._0_8_;
  ppuStack_a0 = (undefined1 **)0x3d1b938;
  puStack_98 = (undefined *)0x3d2cef8;
  uStack_90 = 0x3d5ada0;
  puStack_68 = &Core_Networking_NetworkTournament__ChangeSyncIdInList;
  uVar14 = uVar7;
  uStack_88 = uVar5;
  lStack_80 = lVar12;
  uStack_78 = uVar6;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5861 & 1) == 0) {
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3b5d8);
    uVar8 = func_0x00f78a20(0x3d3b5e0);
    bRam0000000003eb5861 = 1;
  }
  if (uVar10 == 0) {
    auVar15 = func_0x00f78af4();
    uVar8 = auVar15._8_8_;
    uStack_d0 = 0x3eb5000;
    puStack_a8 = &Core_Networking_NetworkTournament__ComparisonFunc;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e0 = uVar14;
    uStack_d8 = in_w4;
    uStack_c8 = uVar9;
    uStack_c0 = uVar7;
    uStack_b8 = uVar10;
    ppuStack_b0 = &puStack_70;
    if ((int)(uVar14 >> 0x20) == auVar15._12_4_) {
      iVar3 = Core_Networking_NetworkTournament__GetScoreAwardedThisRound
                        (auVar15._0_8_,uVar8,&uStack_f0);
      iVar4 = Core_Networking_NetworkTournament__GetScoreAwardedThisRound
                        (auVar15._0_8_,uVar14,&uStack_100);
      uVar2 = 1;
      if (iVar3 != 0) {
        uVar2 = 0xffffffff;
      }
      if (iVar3 == 0) {
        return (ulong)uVar2;
      }
      if (iVar4 == 0) {
        return (ulong)uVar2;
      }
      puVar1 = &uStack_f0;
      uVar8 = uStack_100;
    }
    else {
      puVar1 = &uStack_e0;
    }
    uVar7 = /*System.UInt32$$CompareTo*/ func_0x02a0b320((ulong)puVar1 | 4,uVar8 >> 0x20,0);
    return uVar7;
  }
  uVar2 = *(uint *)(uVar10 + 0x18);
  if (0 < (int)uVar2) {
    uVar14 = 0;
    do {
      uVar13 = (uint)uVar14;
      if (uVar2 <= uVar13) {
        uVar8 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar11 = *(ulong *)(*(long *)(uVar10 + 0x10) + (long)(int)uVar13 * 0xc + 0x20);
      if ((int)uVar11 == (int)uVar9) {
        uVar2 = *(uint *)(*(long *)(uVar10 + 0x10) + (long)(int)uVar13 * 0xc + 0x28);
        uVar8 = uVar11 & 0xffffffff00000000 | uVar7 & 0xffffffff;
        uVar7 = uVar10;
        if (*(uint *)(uVar10 + 0x18) <= uVar13) {
          uVar7 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar12 = *(long *)(uVar10 + 0x10);
        if (lVar12 == 0) {
          func_0x00f78af4();
        }
        else if (uVar13 < *(uint *)(lVar12 + 0x18)) {
          lVar12 = lVar12 + (long)(int)uVar13 * 0xc;
          *(ulong *)(lVar12 + 0x20) = uVar8;
          *(uint *)(lVar12 + 0x28) = uVar2;
          *(int *)(uVar10 + 0x1c) = *(int *)(uVar10 + 0x1c) + 1;
          return uVar7;
        }
        uVar9 = func_0x00f78b24();
        auVar15 = func_0x00f78ac0(uVar9,0);
        puStack_98 = &System_Collections_Generic_List_NetworkScore___IsCompatibleObject;
        lVar12 = *(long *)(auVar15._8_8_ + 0x18);
        uStack_c0 = uVar14;
        uStack_b8 = uVar8;
        ppuStack_b0 = (undefined1 **)(ulong)uVar2;
        puStack_a8 = (undefined *)uVar10;
        ppuStack_a0 = &puStack_70;
        if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar12);
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x38);
        if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar12);
        }
        lVar12 = func_0x00f78adc(auVar15._0_8_,lVar12);
        if (lVar12 == 0) {
          if (auVar15._0_8_ == 0) {
            uStack_c8 = (ulong)uStack_c8._4_4_ << 0x20;
            uStack_d0 = 0;
            lVar12 = *(long *)(auVar15._8_8_ + 0x18);
            if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar12);
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x38);
            if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar12);
            }
            lVar12 = func_0x00f78ae0(lVar12,&uStack_d0);
            uVar7 = (ulong)(lVar12 == 0);
          }
          else {
            uVar7 = 0;
          }
        }
        else {
          uVar7 = 1;
        }
        return uVar7;
      }
      uVar14 = (ulong)(uVar13 + 1);
      uVar2 = *(uint *)(uVar10 + 0x18);
    } while ((int)(uVar13 + 1) < (int)uVar2);
  }
  return uVar8;
}



// ============================================================
// RVA: 0x16612a8 | Core.Networking.NetworkTournament.ChangeSyncIdInList
// ============================================================

ulong Core_Networking_NetworkTournament__ChangeSyncIdInList
                (ulong param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined4 param_5)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  ulong uStack_a0;
  undefined4 uStack_98;
  ulong uStack_90;
  undefined4 uStack_88;
  ulong uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  uVar10 = param_4;
  if ((bRam0000000003eb5861 & 1) == 0) {
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3b5d8);
    param_1 = func_0x00f78a20(0x3d3b5e0);
    bRam0000000003eb5861 = 1;
  }
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_2 + 0x18);
    if (0 < (int)uVar2) {
      uVar10 = 0;
      do {
        uVar9 = (uint)uVar10;
        if (uVar2 <= uVar9) {
          param_1 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar8 = *(ulong *)(*(long *)(param_2 + 0x10) + (long)(int)uVar9 * 0xc + 0x20);
        if ((int)uVar8 == (int)param_3) {
          uVar2 = *(uint *)(*(long *)(param_2 + 0x10) + (long)(int)uVar9 * 0xc + 0x28);
          uVar6 = uVar8 & 0xffffffff00000000 | param_4 & 0xffffffff;
          uVar8 = param_2;
          if (*(uint *)(param_2 + 0x18) <= uVar9) {
            uVar8 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar7 = *(long *)(param_2 + 0x10);
          if (lVar7 == 0) {
            func_0x00f78af4();
          }
          else if (uVar9 < *(uint *)(lVar7 + 0x18)) {
            lVar7 = lVar7 + (long)(int)uVar9 * 0xc;
            *(ulong *)(lVar7 + 0x20) = uVar6;
            *(uint *)(lVar7 + 0x28) = uVar2;
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
            return uVar8;
          }
          uVar5 = func_0x00f78b24();
          auVar11 = func_0x00f78ac0(uVar5,0);
          lVar7 = *(long *)(auVar11._8_8_ + 0x18);
          uStack_60 = uVar10;
          uStack_58 = uVar6;
          puStack_50 = (undefined1 *)(ulong)uVar2;
          puStack_48 = (undefined *)param_2;
          if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar7);
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x38);
          if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar7);
          }
          lVar7 = func_0x00f78adc(auVar11._0_8_,lVar7);
          if (lVar7 == 0) {
            if (auVar11._0_8_ == 0) {
              uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
              uStack_70 = 0;
              lVar7 = *(long *)(auVar11._8_8_ + 0x18);
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar7);
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x38);
              if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar7);
              }
              lVar7 = func_0x00f78ae0(lVar7,&uStack_70);
              uVar10 = (ulong)(lVar7 == 0);
            }
            else {
              uVar10 = 0;
            }
          }
          else {
            uVar10 = 1;
          }
          return uVar10;
        }
        uVar10 = (ulong)(uVar9 + 1);
        uVar2 = *(uint *)(param_2 + 0x18);
      } while ((int)(uVar9 + 1) < (int)uVar2);
    }
    return param_1;
  }
  auVar11 = func_0x00f78af4();
  uVar8 = auVar11._8_8_;
  uStack_70 = 0x3eb5000;
  puStack_48 = &Core_Networking_NetworkTournament__ComparisonFunc;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_80 = uVar10;
  uStack_78 = param_5;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((int)(uVar10 >> 0x20) == auVar11._12_4_) {
    iVar3 = Core_Networking_NetworkTournament__GetScoreAwardedThisRound
                      (auVar11._0_8_,uVar8,&uStack_90);
    iVar4 = Core_Networking_NetworkTournament__GetScoreAwardedThisRound
                      (auVar11._0_8_,uVar10,&uStack_a0);
    uVar2 = 1;
    if (iVar3 != 0) {
      uVar2 = 0xffffffff;
    }
    if (iVar3 == 0) {
      return (ulong)uVar2;
    }
    if (iVar4 == 0) {
      return (ulong)uVar2;
    }
    puVar1 = &uStack_90;
    uVar8 = uStack_a0;
  }
  else {
    puVar1 = &uStack_80;
  }
  uVar10 = /*System.UInt32$$CompareTo*/ func_0x02a0b320((ulong)puVar1 | 4,uVar8 >> 0x20,0);
  return uVar10;
}



// ============================================================
// RVA: 0x16613a8 | Core.Networking.NetworkTournament.ComparisonFunc
// ============================================================

ulong Core_Networking_NetworkTournament__ComparisonFunc
                (undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                undefined4 param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_40 = param_4;
  uStack_38 = param_5;
  if ((int)((ulong)param_4 >> 0x20) == (int)(param_2 >> 0x20)) {
    iVar3 = Core_Networking_NetworkTournament__GetScoreAwardedThisRound(param_1,param_2,&uStack_50);
    iVar4 = Core_Networking_NetworkTournament__GetScoreAwardedThisRound(param_1,param_4,&uStack_60);
    uVar2 = 1;
    if (iVar3 != 0) {
      uVar2 = 0xffffffff;
    }
    if (iVar3 == 0) {
      return (ulong)uVar2;
    }
    if (iVar4 == 0) {
      return (ulong)uVar2;
    }
    puVar1 = &uStack_50;
    param_2 = uStack_60;
  }
  else {
    puVar1 = &uStack_40;
  }
  uVar5 = /*System.UInt32$$CompareTo*/ func_0x02a0b320((ulong)puVar1 | 4,param_2 >> 0x20,0);
  return uVar5;
}



