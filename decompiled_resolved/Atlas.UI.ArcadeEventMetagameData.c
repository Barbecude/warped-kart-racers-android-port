// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.ArcadeEventMetagameData

// ============================================================
// RVA: 0x144d0d8 | Atlas.UI.ArcadeEventMetagameData..ctor
// ============================================================

void Atlas_UI_ArcadeEventMetagameData___ctor(long param_1,undefined8 param_2,undefined8 param_3)

{
  /*Atlas.UI.MetagameData$$.ctor*/ func_0x0148d648(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



// ============================================================
// RVA: 0x144d110 | Atlas.UI.ArcadeEventMetagameData.TryGetCurrentBest
// ============================================================

long Atlas_UI_ArcadeEventMetagameData__TryGetCurrentBest
               (long param_1,undefined8 *param_2,uint *param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined1 auVar9 [16];
  int iStack_44;
  
  puVar8 = param_3;
  if ((bRam0000000003eb4760 & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    func_0x00f78a20(0x3d2dc70);
    func_0x00f78a20(0x3d67120);
    bRam0000000003eb4760 = 1;
  }
  iStack_44 = 0;
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
      puVar8 = *(uint **)(param_1 + 0x18);
      if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar4 = /*Atlas.Arcade.ArcadeSave$$TryGetResult*/ func_0x01447e78(uVar3,uVar7,puVar8,&iStack_44);
      iVar1 = iStack_44;
      if ((int)lVar4 == 0) {
        uVar5 = 0;
        *param_2 = /*STR('-- -- --')*/ uRam0000000003d67120;
      }
      else {
        uVar3 = /*Atlas.UI.ArcadeEventMetagameData$$GetTimeFormattedString*/ func_0x0144ed24(lVar4,iStack_44);
        *param_2 = uVar3;
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 == 0) goto LAB_0144d258;
        if (*(int *)(lVar6 + 0x50) < iVar1) {
          if (*(int *)(lVar6 + 0x4c) < iVar1) {
            uVar5 = (uint)(iVar1 <= *(int *)(lVar6 + 0x48));
          }
          else {
            uVar5 = 2;
          }
        }
        else {
          uVar5 = 3;
        }
      }
      *param_3 = uVar5;
      return lVar4;
    }
  }
LAB_0144d258:
  auVar9 = func_0x00f78af4();
  *(long *)(auVar9._0_8_ + 0x58) = auVar9._8_8_;
  if (puVar8 != (uint *)0x0) {
    *(undefined1 *)(puVar8 + 0x3c) = 1;
    return auVar9._0_8_;
  }
  auVar9 = func_0x00f78af4();
  lVar4 = *auVar9._0_8_;
                    /* WARNING: Could not recover jumptable at 0x0144d288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar4 = (**(code **)(lVar4 + 0x1a8))(auVar9._0_8_,auVar9._8_8_,*(undefined8 *)(lVar4 + 0x1b0));
  return lVar4;
}



// ============================================================
// RVA: 0x144d6c0 | Atlas.UI.ArcadeEventMetagameData.GetMedal
// ============================================================

uint Atlas_UI_ArcadeEventMetagameData__GetMedal(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined1 auVar4 [12];
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x50) < param_2) {
      if (*(int *)(lVar3 + 0x4c) < param_2) {
        uVar1 = (uint)(param_2 <= *(int *)(lVar3 + 0x48));
      }
      else {
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 3;
    }
    return uVar1;
  }
  auVar4 = func_0x00f78af4();
  iVar2 = auVar4._8_4_;
  lVar3 = auVar4._0_8_;
  if (iVar2 == 3) {
    return *(uint *)(lVar3 + 0x50);
  }
  if (iVar2 == 2) {
    return *(uint *)(lVar3 + 0x4c);
  }
  if (iVar2 == 1) {
    return *(uint *)(lVar3 + 0x48);
  }
  return 0x7fffffff;
}



// ============================================================
// RVA: 0x144d748 | Atlas.UI.ArcadeEventMetagameData.GetTimeFormattedString
// ============================================================

dword * Atlas_UI_ArcadeEventMetagameData__GetTimeFormattedString
                  (undefined8 param_1,int param_2,long param_3)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  dword *pdVar5;
  dword *pdVar6;
  undefined8 *puVar7;
  int extraout_w1;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  if ((bRam0000000003eb475d & 1) == 0) {
    func_0x00f78a20(0x3d437d8);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d68498);
    func_0x00f78a20(0x3d7cca0);
    func_0x00f78a20(0x3d67968);
    bRam0000000003eb475d = 1;
  }
  iStack_64 = param_2 / 60000;
  uVar4 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_64);
  if (param_3 != 0) {
    /*System.Text.StringBuilder$$AppendFormat*/ func_0x029d3c70(param_3,/*STR('{0:D2}')*/ uRam0000000003d7cca0,uVar4,0);
    lVar11 = lRam0000000003d437d8;
    lVar10 = **(long **)(lRam0000000003d437d8 + 0x30);
    uVar1 = *(ushort *)(lVar10 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar10);
      uVar1 = *(ushort *)(lVar10 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar10 = **(long **)(lVar11 + 0x30);
      if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar10);
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        lVar10 = **(long **)(lVar11 + 0x30);
        if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar10);
        }
        func_0x00f78ad0(lVar10);
      }
    }
    lVar11 = **(long **)(lVar11 + 0x30);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    /*System.Text.StringBuilder$$AppendFormat*/ func_0x029d456c(param_3,/*STR(':')*/ uRam0000000003d67968,**(undefined8 **)(lVar11 + 0xb8),0);
    iStack_68 = (param_2 % 60000) / 1000;
    uVar4 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_68);
    /*System.Text.StringBuilder$$AppendFormat*/ func_0x029d3c70(param_3,/*STR('{0:D2}')*/ uRam0000000003d7cca0,uVar4,0);
    lVar11 = lRam0000000003d437d8;
    lVar10 = **(long **)(lRam0000000003d437d8 + 0x30);
    uVar1 = *(ushort *)(lVar10 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar10);
      uVar1 = *(ushort *)(lVar10 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar10 = **(long **)(lVar11 + 0x30);
      if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar10);
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        lVar10 = **(long **)(lVar11 + 0x30);
        if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar10);
        }
        func_0x00f78ad0(lVar10);
      }
    }
    lVar11 = **(long **)(lVar11 + 0x30);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    /*System.Text.StringBuilder$$AppendFormat*/ func_0x029d456c(param_3,/*STR('<size=80%>.')*/ uRam0000000003d68498,**(undefined8 **)(lVar11 + 0xb8),0);
    iStack_6c = ((param_2 % 60000) % 1000) / 10;
    uVar4 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_6c);
    pdVar5 = (dword *)/*System.Text.StringBuilder$$AppendFormat*/ func_0x029d3c70(param_3,/*STR('{0:D2}')*/ uRam0000000003d7cca0,uVar4,0);
    return pdVar5;
  }
  auVar17 = func_0x00f78af4();
  pdVar6 = auVar17._0_8_;
  pdVar5 = pdVar6;
  if ((bRam0000000003eb474d & 1) == 0) {
    func_0x00f78a20(0x3d57080);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d0a0);
    func_0x00f78a20(0x3d1d260);
    pdVar5 = (dword *)func_0x00f78a20(0x3d22180);
    bRam0000000003eb474d = 1;
  }
  if ((*(char *)((long)pdVar6 + 0x8d) != '\0') || (*(char *)((long)pdVar6 + 0x8f) != '\0')) {
    return pdVar5;
  }
  if ((*(long *)(pdVar6 + 0x1a) == 0) ||
     (lVar11 = *(long *)(*(long *)(pdVar6 + 0x1a) + 0x288), lVar11 == 0)) {
code_r0x0144dd18:
    func_0x00f78af4();
  }
  else {
    /*Atlas.UI.UIArcadeInProgressBehaviour$$StopAnimations*/ func_0x01512a80(lVar11,0);
    if ((*(long *)(pdVar6 + 4) == 0) ||
       ((lVar11 = *(long *)(*(long *)(pdVar6 + 4) + 0x40), lVar11 == 0 ||
        (plVar12 = *(long **)(lVar11 + 0x28), plVar12 == (long *)0x0)))) goto code_r0x0144dd18;
    lVar11 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
          goto code_r0x0144db00;
        }
        piVar9 = piVar9 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0,0);
code_r0x0144db00:
    plVar12 = (long *)(*(code *)*puVar7)(plVar12,puVar7[1]);
    if (plVar12 != (long *)0x0) {
      do {
        lVar11 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x0144db70;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0144db70:
        uVar8 = (*(code *)*puVar7)(plVar12,puVar7[1]);
        if ((uVar8 & 1) == 0) {
          lVar11 = 0;
          goto joined_r0x0144dc3c;
        }
        lVar11 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x0144dbcc;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260,0);
code_r0x0144dbcc:
        lVar11 = (*(code *)*puVar7)(plVar12,puVar7[1]);
        if (lVar11 == 0) {
          func_0x00f78af4();
          goto code_r0x0144dd20;
        }
        lVar10 = *(long *)(lVar11 + 0x10);
        if (lVar10 == 0) {
          func_0x00f78af4();
          goto code_r0x0144dd20;
        }
        plVar13 = *(long **)(pdVar6 + 8);
        uVar14 = *(undefined8 *)(lVar10 + 0x50);
        uVar4 = *(undefined8 *)(lVar10 + 0x48);
        uVar16 = *(undefined8 *)(lVar10 + 0x60);
        uVar15 = *(undefined8 *)(lVar10 + 0x58);
        Atlas_Gameplay_Player_GameContextPlayer__GetRaceProgress(lVar11,0);
        if (plVar13 == (long *)0x0) goto code_r0x0144dd00;
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_e8 = 0;
        uStack_d0 = uVar4;
        uStack_c8 = uVar14;
        uStack_c0 = uVar15;
        uStack_b8 = uVar16;
        (**(code **)(*plVar13 + 0x248))
                  (plVar13,&uStack_d0,0,auVar17._8_8_,&uStack_e8,*(undefined8 *)(*plVar13 + 0x250));
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x0144dd20:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x144dd24);
  (*pcVar2)();
joined_r0x0144dc3c:
  if (plVar12 != (long *)0x0) {
    lVar10 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto code_r0x0144dc94;
        }
        piVar9 = piVar9 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0144dc94:
    (*(code *)*puVar7)(plVar12,puVar7[1]);
  }
  if (lVar11 == 0) {
    *(undefined2 *)(pdVar6 + 0x23) = 0x100;
    *(char *)((long)pdVar6 + 0x8e) = auVar17[8];
    (**(code **)(*(long *)pdVar6 + 0x228))(pdVar6,*(undefined8 *)(*(long *)pdVar6 + 0x230));
    if ((*(long *)(pdVar6 + 4) != 0) &&
       (lVar11 = Atlas_Contexts_GameContextBase__GetGameModeState_GameContextBaseInProgressState_
                           (*(long *)(pdVar6 + 4),uRam0000000003d57080), lVar11 != 0)) {
      pdVar5 = (dword *)Atlas_Contexts_GameContextBaseInProgressState__NotifyGameContextFinished
                                  (lVar11,0);
      return pdVar5;
    }
    goto code_r0x0144dd18;
  }
  func_0x00f78ac0(lVar11,0);
  if (extraout_w1 != 1) {
    iVar3 = __Unwind_Resume();
    if (2 < iVar3 - 1U) {
      return &MACH_HEADER.filetype;
    }
    return (dword *)(ulong)*(uint *)(&UNK_033f8118 + (long)(int)(iVar3 - 1U) * 4);
  }
  plVar13 = (long *)___cxa_begin_catch();
  lVar11 = *plVar13;
  ___cxa_end_catch();
  goto joined_r0x0144dc3c;
code_r0x0144dd00:
  func_0x00f78af4();
  goto code_r0x0144dd20;
}



// ============================================================
// RVA: 0x144ec04 | Atlas.UI.ArcadeEventMetagameData.get_ID
// ============================================================

ulong Atlas_UI_ArcadeEventMetagameData__get_ID(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  int extraout_w1;
  undefined8 uVar5;
  undefined8 uVar6;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_44;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(ulong *)(*(long *)(param_1 + 0x10) + 0x18);
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb475b & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    func_0x00f78a20(0x3d2dc70);
    bRam0000000003eb475b = 1;
  }
  iStack_44 = 0;
  plVar2 = *(long **)(lVar1 + 0x10);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
    if (*(long *)(lVar1 + 0x10) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x20);
      uVar6 = *(undefined8 *)(lVar1 + 0x18);
      if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = /*Atlas.Arcade.ArcadeSave$$TryGetResult*/ func_0x01447e78(uVar3,uVar5,uVar6,&iStack_44);
      if ((int)uVar4 != 0) {
        lVar1 = *(long *)(lVar1 + 0x10);
        if (lVar1 == 0) goto code_r0x0144ed20;
        if (*(int *)(lVar1 + 0x50) < iStack_44) {
          if (*(int *)(lVar1 + 0x4c) < iStack_44) {
            uVar4 = (ulong)(iStack_44 <= *(int *)(lVar1 + 0x48));
          }
          else {
            uVar4 = 2;
          }
        }
        else {
          uVar4 = 3;
        }
      }
      return uVar4;
    }
  }
code_r0x0144ed20:
  func_0x00f78af4();
  if ((bRam0000000003eb475c & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d7ccc0);
    bRam0000000003eb475c = 1;
  }
  iStack_94 = extraout_w1 / 60000;
  uVar3 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_94);
  iStack_98 = (extraout_w1 % 60000) / 1000;
  uVar5 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_98);
  iStack_9c = ((extraout_w1 % 60000) % 1000) / 10;
  uVar6 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_9c);
  uVar4 = /*System.String$$Format*/ func_0x029bdf30(/*STR('{0:D2}:{1:D2}<size=80%>.{2:D2}')*/ uRam0000000003d7ccc0,uVar3,uVar5,uVar6,0);
  return uVar4;
}



// ============================================================
// RVA: 0x144ec24 | Atlas.UI.ArcadeEventMetagameData.GetCurrentMedal
// ============================================================

ulong Atlas_UI_ArcadeEventMetagameData__GetCurrentMedal(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  int extraout_w1;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_34;
  
  if ((bRam0000000003eb475b & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    func_0x00f78a20(0x3d2dc70);
    bRam0000000003eb475b = 1;
  }
  iStack_34 = 0;
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*Atlas.Arcade.ArcadeSave$$TryGetResult*/ func_0x01447e78(uVar2,uVar5,uVar6,&iStack_34);
      if ((int)uVar3 != 0) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 == 0) goto LAB_0144ed20;
        if (*(int *)(lVar4 + 0x50) < iStack_34) {
          if (*(int *)(lVar4 + 0x4c) < iStack_34) {
            uVar3 = (ulong)(iStack_34 <= *(int *)(lVar4 + 0x48));
          }
          else {
            uVar3 = 2;
          }
        }
        else {
          uVar3 = 3;
        }
      }
      return uVar3;
    }
  }
LAB_0144ed20:
  func_0x00f78af4();
  if ((bRam0000000003eb475c & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d7ccc0);
    bRam0000000003eb475c = 1;
  }
  iStack_84 = extraout_w1 / 60000;
  uVar2 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_84);
  iStack_88 = (extraout_w1 % 60000) / 1000;
  uVar5 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_88);
  iStack_8c = ((extraout_w1 % 60000) % 1000) / 10;
  uVar6 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_8c);
  uVar3 = /*System.String$$Format*/ func_0x029bdf30(/*STR('{0:D2}:{1:D2}<size=80%>.{2:D2}')*/ uRam0000000003d7ccc0,uVar2,uVar5,uVar6,0);
  return uVar3;
}



// ============================================================
// RVA: 0x144ed24 | Atlas.UI.ArcadeEventMetagameData.GetTimeFormattedString
// ============================================================

void Atlas_UI_ArcadeEventMetagameData__GetTimeFormattedString(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  if ((bRam0000000003eb475c & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d7ccc0);
    bRam0000000003eb475c = 1;
  }
  iStack_44 = param_2 / 60000;
  uVar1 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_44);
  iStack_48 = (param_2 % 60000) / 1000;
  uVar2 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_48);
  iStack_4c = ((param_2 % 60000) % 1000) / 10;
  uVar3 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_4c);
  /*System.String$$Format*/ func_0x029bdf30(/*STR('{0:D2}:{1:D2}<size=80%>.{2:D2}')*/ uRam0000000003d7ccc0,uVar1,uVar2,uVar3,0);
  return;
}



// ============================================================
// RVA: 0x144ee3c | Atlas.UI.ArcadeEventMetagameData.GetMedalThresholdString
// ============================================================

/* WARNING: Possible PIC construction at 0x029d2e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2cf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x029d2e58) */
/* WARNING: Removing unreachable block (ram,0x029d2cf4) */

dword * Atlas_UI_ArcadeEventMetagameData__GetMedalThresholdString
                  (long param_1,ulong param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 uVar8;
  int iVar9;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  dword *pdVar15;
  uint uVar10;
  undefined8 *puVar16;
  dword *pdVar17;
  int extraout_w1;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  int *piVar22;
  int iVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  ulong unaff_x22;
  ulong uVar27;
  ulong uVar28;
  ulong unaff_x23;
  long unaff_x24;
  undefined1 *puVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [12];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  int iStack_9c;
  int iStack_98;
  uint uStack_94;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar29 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb475e & 1) == 0) {
    func_0x00f78a20(0x3d67120);
    bRam0000000003eb475e = 1;
  }
  iVar9 = (int)param_2;
  if (iVar9 == 0) {
    return /*STR('-- -- --')*/ pdRam0000000003d67120;
  }
  lVar21 = *(long *)(param_1 + 0x10);
  if (lVar21 != 0) {
    if (iVar9 == 3) {
      iVar9 = *(int *)(lVar21 + 0x50);
    }
    else if (iVar9 == 2) {
      iVar9 = *(int *)(lVar21 + 0x4c);
    }
    else if (iVar9 == 1) {
      iVar9 = *(int *)(lVar21 + 0x48);
    }
    else {
      iVar9 = 0x7fffffff;
    }
    if ((bRam0000000003eb475c & 1) == 0) {
      func_0x00f78a20(0x3d22910);
      func_0x00f78a20(0x3d7ccc0);
      bRam0000000003eb475c = 1;
    }
    uStack_48._4_4_ = iVar9 / 60000;
    uVar12 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(long)&uStack_48 + 4);
    uStack_48 = CONCAT44(uStack_48._4_4_,(iVar9 % 60000) / 1000);
    uVar13 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_48);
    uStack_50 = CONCAT44(((iVar9 % 60000) % 1000) / 10,(undefined4)uStack_50);
    uVar14 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(long)&uStack_50 + 4);
    pdVar15 = (dword *)/*System.String$$Format*/ func_0x029bdf30(/*STR('{0:D2}:{1:D2}<size=80%>.{2:D2}')*/ uRam0000000003d7ccc0,uVar12,uVar13,uVar14,0);
    return pdVar15;
  }
  auVar34 = func_0x00f78af4();
  iVar9 = auVar34._8_4_;
  uStack_50 = param_1;
  uStack_48 = param_2;
  if ((bRam0000000003eb475f & 1) == 0) {
    func_0x00f78a20(0x3d67120);
    bRam0000000003eb475f = 1;
  }
  auVar32._8_8_ = /*STR('-- -- --')*/ pdRam0000000003d67120;
  auVar32._0_8_ = param_3;
  if (iVar9 == 0) {
    if (param_3 != 0) {
      uVar19 = 0;
      puVar30 = &Atlas_UI_ArcadeEventMetagameData__GetMedalThresholdString;
      uVar18 = 0x3eb4000;
      puVar6 = &stack0xffffffffffffffd0;
      uVar28 = uStack_48;
      lVar21 = uStack_50;
code_r0x029d2c70:
      do {
        lVar24 = auVar32._8_8_;
        pdVar15 = auVar32._0_8_;
        *(long *)(puVar6 + -0x40) = unaff_x24;
        *(ulong *)(puVar6 + -0x38) = unaff_x23;
        *(ulong *)(puVar6 + -0x30) = unaff_x22;
        *(ulong *)(puVar6 + -0x28) = uVar18;
        *(long *)(puVar6 + -0x20) = lVar21;
        *(ulong *)(puVar6 + -0x18) = uVar28;
        *(undefined1 **)(puVar6 + -0x10) = puVar29;
        *(undefined **)(puVar6 + -8) = puVar30;
        if (lVar24 == 0) {
          return pdVar15;
        }
        unaff_x23 = *(ulong *)(pdVar15 + 4);
        if (unaff_x23 == 0) {
          func_0x00f78af4();
          lVar24 = lVar21;
          uVar28 = uVar18;
          uVar27 = unaff_x22;
code_r0x029d2d74:
          uVar12 = func_0x00f78b24();
          puVar30 = &System_Text_StringBuilder__AppendHelper;
          auVar32 = func_0x00f78ac0(uVar12,0);
          uVar18 = uVar19;
          uVar20 = param_4;
        }
        else {
          uVar4 = pdVar15[8];
          unaff_x24 = (long)(int)uVar4;
          uVar2 = *(uint *)(lVar24 + 0x10);
          uVar28 = (ulong)uVar2;
          uVar10 = uVar2 + uVar4;
          uVar27 = (ulong)uVar10;
          if ((int)uVar10 < *(int *)(unaff_x23 + 0x18)) {
            if ((int)uVar2 < 3) {
              if ((int)uVar2 < 1) goto code_r0x029d2d54;
              uVar19 = 0;
              uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(lVar24,0);
              if (uVar4 < *(uint *)(unaff_x23 + 0x18)) {
                *(undefined2 *)(unaff_x23 + unaff_x24 * 2 + 0x20) = uVar8;
                if (uVar2 < 2) {
code_r0x029d2d54:
                  pdVar15[8] = uVar10;
                  return pdVar15;
                }
                uVar19 = 0;
                uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(lVar24,1);
                if (uVar4 + 1 < *(uint *)(unaff_x23 + 0x18)) {
                  *(undefined2 *)(unaff_x23 + (long)(int)(uVar4 + 1) * 2 + 0x20) = uVar8;
                  goto code_r0x029d2d54;
                }
              }
            }
            else {
              iVar9 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
              if (uVar4 < *(uint *)(unaff_x23 + 0x18)) {
                /*System.String$$wstrcpy*/ func_0x029cb054(unaff_x23 + unaff_x24 * 2 + 0x20,lVar24 + iVar9,uVar28,0);
                goto code_r0x029d2d54;
              }
            }
            goto code_r0x029d2d74;
          }
          puVar30 = &UNK_029d2cf4;
          uVar18 = uVar19;
          uVar20 = param_4;
        }
        lVar21 = auVar32._8_8_;
        pdVar17 = auVar32._0_8_;
        *(long *)(puVar6 + -0x60) = lVar24;
        *(dword **)(puVar6 + -0x58) = pdVar15;
        *(undefined1 **)(puVar6 + -0x50) = puVar6 + -0x10;
        *(undefined **)(puVar6 + -0x48) = puVar30;
        if (lVar21 != 0) {
          iVar9 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          lVar24 = lVar21 + iVar9;
          uVar20 = (ulong)*(uint *)(lVar21 + 0x10);
          puVar29 = *(undefined1 **)(puVar6 + -0x50);
          puVar30 = *(undefined **)(puVar6 + -0x48);
          puVar7 = puVar6 + -0x40;
          auVar33._8_8_ = uVar27;
          auVar33._0_8_ = *(undefined8 *)(puVar6 + -0x58);
          uVar19 = *(ulong *)(puVar6 + -0x60);
          uVar18 = uVar28;
code_r0x029d2b54:
          unaff_x22 = auVar33._8_8_;
          *(long *)(puVar7 + -0x40) = unaff_x24;
          *(ulong *)(puVar7 + -0x38) = unaff_x23;
          *(ulong *)(puVar7 + -0x30) = unaff_x22;
          *(ulong *)(puVar7 + -0x28) = uVar18;
          *(ulong *)(puVar7 + -0x20) = uVar19;
          *(long *)(puVar7 + -0x18) = auVar33._0_8_;
          *(undefined1 **)(puVar7 + -0x10) = puVar29;
          *(undefined **)(puVar7 + -8) = puVar30;
          puVar29 = puVar7 + -0x10;
          iVar9 = (int)uVar20;
          if (-1 < iVar9) {
            lVar21 = *(long *)(pdVar17 + 4);
            if (lVar21 != 0) {
              iVar23 = pdVar17[8];
              uVar10 = iVar23 + iVar9;
              unaff_x22 = (ulong)uVar10;
              if ((int)uVar10 <= *(int *)(lVar21 + 0x18)) goto code_r0x029d2be8;
              uVar2 = *(int *)(lVar21 + 0x18) - iVar23;
              unaff_x23 = (ulong)uVar2;
              if (0 < (int)uVar2) {
                /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar24,lVar21,iVar23,unaff_x23);
                uVar18 = uVar20;
                if (*(long *)(pdVar17 + 4) == 0) goto code_r0x029d2c08;
                pdVar17[8] = (int)*(undefined8 *)(*(long *)(pdVar17 + 4) + 0x18);
              }
              uVar10 = iVar9 - uVar2;
              uVar20 = (ulong)uVar10;
              /*System.Text.StringBuilder$$ExpandByABlock*/ func_0x029d27e8(pdVar17,uVar20);
              lVar21 = *(long *)(pdVar17 + 4);
              lVar24 = lVar24 + (long)(int)uVar2 * 2;
              iVar23 = 0;
code_r0x029d2be8:
              /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar24,lVar21,iVar23,uVar20);
              pdVar17[8] = uVar10;
              return pdVar17;
            }
code_r0x029d2c08:
            func_0x00f78af4();
          }
          uVar12 = func_0x00f78a24(0x3d6b268);
          uVar28 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar12,0);
          func_0x00f78a24(0x3d1fcf8);
          lVar21 = func_0x00f78aec();
          uVar12 = func_0x00f78a24(0x3d7c5c8);
          param_4 = 0;
          uVar19 = uVar28;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(lVar21,uVar12);
          uVar12 = func_0x00f78a24(0x3d5dbe8);
          puVar30 = &System_Text_StringBuilder__Append;
          auVar32 = func_0x00f78ac0(lVar21,uVar12);
          puVar6 = puVar7 + -0x40;
          goto code_r0x029d2c70;
        }
        auVar33 = func_0x00f78af4();
        unaff_x22 = auVar33._8_8_;
        pdVar17 = auVar33._0_8_;
        puVar7 = puVar6 + -0xa0;
        *(long *)(puVar6 + -0xa0) = unaff_x24;
        *(ulong *)(puVar6 + -0x98) = unaff_x23;
        *(ulong *)(puVar6 + -0x90) = uVar27;
        *(ulong *)(puVar6 + -0x88) = uVar28;
        *(long *)(puVar6 + -0x80) = lVar24;
        *(dword **)(puVar6 + -0x78) = pdVar15;
        *(undefined1 **)(puVar6 + -0x70) = puVar6 + -0x50;
        *(undefined **)(puVar6 + -0x68) = &System_Text_StringBuilder__Append;
        puVar29 = puVar6 + -0x70;
        unaff_x23 = 0x3eb9000;
        param_4 = uVar20;
        if ((bRam0000000003eb948a & 1) == 0) {
          func_0x00f78a20(0x3d208b0);
          bRam0000000003eb948a = 1;
        }
        iVar9 = (int)uVar18;
        if (iVar9 < 0) {
code_r0x029d2e7c:
          uVar12 = func_0x00f78a24(0x3d6de28);
          uVar13 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar12,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar20 = func_0x00f78aec();
          uVar12 = 0x3d7b9d0;
code_r0x029d2ee8:
          uVar12 = func_0x00f78a24(uVar12);
          param_4 = 0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar20,uVar12,uVar13);
          uVar12 = func_0x00f78a24(0x3d5dc00);
          func_0x00f78ac0(uVar20,uVar12);
        }
        else {
          iVar23 = (int)uVar20;
          if (iVar23 < 0) {
            uVar12 = func_0x00f78a24(0x3d75fa8);
            uVar13 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar12,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar20 = func_0x00f78aec();
            uVar12 = 0x3d78638;
            goto code_r0x029d2ee8;
          }
          if ((iVar23 == 0) && (*(char *)(*(long *)(/*System.CompatibilitySwitches_TypeInfo*/ lRam0000000003d208b0 + 0xb8) + 1) != '\0')) {
            return pdVar17;
          }
          if (unaff_x22 != 0) {
            if (iVar23 == 0) {
              return pdVar17;
            }
            if (iVar9 <= *(int *)(unaff_x22 + 0x10) - iVar23) {
              iVar9 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
              lVar24 = unaff_x22 + (uVar18 & 0xffffffff) * 2 + (long)iVar9;
              puVar30 = &UNK_029d2e58;
              uVar19 = uVar20;
              goto code_r0x029d2b54;
            }
            goto code_r0x029d2e7c;
          }
          if (iVar9 == 0 && iVar23 == 0) {
            return pdVar17;
          }
        }
        func_0x00f78a24(0x3d1fcf0);
        uVar12 = func_0x00f78aec();
        uVar13 = func_0x00f78a24(0x3d7c5a0);
        uVar19 = 0;
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar12,uVar13);
        uVar13 = func_0x00f78a24(0x3d5dc00);
        uVar13 = func_0x00f78ac0(uVar12,uVar13);
        *(ulong *)(puVar6 + -0xc0) = uVar20;
        *(undefined8 *)(puVar6 + -0xb8) = uVar12;
        *(undefined1 **)(puVar6 + -0xb0) = puVar29;
        *(undefined **)(puVar6 + -0xa8) = &System_Text_StringBuilder__AppendLine;
        uVar12 = /*System.Environment$$get_NewLine*/ func_0x02aca040(0);
        auVar32._8_8_ = uVar12;
        auVar32._0_8_ = uVar13;
        puVar29 = *(undefined1 **)(puVar6 + -0xb0);
        puVar30 = *(undefined **)(puVar6 + -0xa8);
        lVar21 = *(long *)(puVar6 + -0xc0);
        uVar28 = *(ulong *)(puVar6 + -0xb8);
        puVar6 = puVar6 + -0xa0;
      } while( true );
    }
  }
  else {
    lVar21 = *(long *)(auVar34._0_8_ + 0x10);
    if (lVar21 != 0) {
      if (iVar9 == 3) {
        uVar18 = (ulong)*(uint *)(lVar21 + 0x50);
      }
      else if (iVar9 == 2) {
        uVar18 = (ulong)*(uint *)(lVar21 + 0x4c);
      }
      else if (iVar9 == 1) {
        uVar18 = (ulong)*(uint *)(lVar21 + 0x48);
      }
      else {
        uVar18 = 0x7fffffff;
      }
      if ((bRam0000000003eb475d & 1) == 0) {
        func_0x00f78a20(0x3d437d8);
        func_0x00f78a20(0x3d22910);
        func_0x00f78a20(0x3d68498);
        func_0x00f78a20(0x3d7cca0);
        func_0x00f78a20(0x3d67968);
        bRam0000000003eb475d = 1;
      }
      uStack_94 = (int)uVar18 / 60000;
      uVar28 = (ulong)uStack_94;
      uVar12 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_94);
      if (param_3 != 0) {
        iVar9 = (int)uVar18 % 60000;
        /*System.Text.StringBuilder$$AppendFormat*/ func_0x029d3c70(param_3,/*STR('{0:D2}')*/ uRam0000000003d7cca0,uVar12,0);
        lVar21 = lRam0000000003d437d8;
        lVar24 = **(long **)(lRam0000000003d437d8 + 0x30);
        uVar3 = *(ushort *)(lVar24 + 0x132);
        if ((uVar3 & 1) == 0) {
          func_0x00fac028(lVar24);
          uVar3 = *(ushort *)(lVar24 + 0x132);
        }
        if ((uVar3 >> 10 & 1) != 0) {
          lVar24 = **(long **)(lVar21 + 0x30);
          if ((*(ushort *)(lVar24 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar24);
          }
          if (*(int *)(lVar24 + 0xe0) == 0) {
            lVar24 = **(long **)(lVar21 + 0x30);
            if ((*(ushort *)(lVar24 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar24);
            }
            func_0x00f78ad0(lVar24);
          }
        }
        lVar21 = **(long **)(lVar21 + 0x30);
        if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar21);
        }
        /*System.Text.StringBuilder$$AppendFormat*/ func_0x029d456c(param_3,/*STR(':')*/ uRam0000000003d67968,**(undefined8 **)(lVar21 + 0xb8),0);
        iStack_98 = iVar9 / 1000;
        uVar12 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_98);
        /*System.Text.StringBuilder$$AppendFormat*/ func_0x029d3c70(param_3,/*STR('{0:D2}')*/ uRam0000000003d7cca0,uVar12,0);
        lVar21 = lRam0000000003d437d8;
        lVar24 = **(long **)(lRam0000000003d437d8 + 0x30);
        uVar3 = *(ushort *)(lVar24 + 0x132);
        if ((uVar3 & 1) == 0) {
          func_0x00fac028(lVar24);
          uVar3 = *(ushort *)(lVar24 + 0x132);
        }
        if ((uVar3 >> 10 & 1) != 0) {
          lVar24 = **(long **)(lVar21 + 0x30);
          if ((*(ushort *)(lVar24 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar24);
          }
          if (*(int *)(lVar24 + 0xe0) == 0) {
            lVar24 = **(long **)(lVar21 + 0x30);
            if ((*(ushort *)(lVar24 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar24);
            }
            func_0x00f78ad0(lVar24);
          }
        }
        lVar21 = **(long **)(lVar21 + 0x30);
        if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar21);
        }
        /*System.Text.StringBuilder$$AppendFormat*/ func_0x029d456c(param_3,/*STR('<size=80%>.')*/ uRam0000000003d68498,**(undefined8 **)(lVar21 + 0xb8),0);
        iStack_9c = (iVar9 % 1000) / 10;
        uVar12 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_9c);
        pdVar15 = (dword *)/*System.Text.StringBuilder$$AppendFormat*/ func_0x029d3c70(param_3,/*STR('{0:D2}')*/ uRam0000000003d7cca0,uVar12,0);
        return pdVar15;
      }
      auVar32 = func_0x00f78af4();
      pdVar17 = auVar32._0_8_;
      uStack_d0 = 0x3eb4000;
      uStack_c8 = 0x3d22910;
      puStack_a8 = &Atlas_Arcade_ArcadeEvent__EndEvent;
      pdVar15 = pdVar17;
      uStack_d8 = uVar28;
      auStack_c0._0_8_ = uVar18;
      auStack_c0._8_8_ = param_3;
      puStack_b0 = &stack0xffffffffffffffc0;
      if ((bRam0000000003eb474d & 1) == 0) {
        func_0x00f78a20(0x3d57080);
        func_0x00f78a20(0x3d220f0);
        func_0x00f78a20(0x3d1d0a0);
        func_0x00f78a20(0x3d1d260);
        pdVar15 = (dword *)func_0x00f78a20(0x3d22180);
        bRam0000000003eb474d = 1;
      }
      if ((*(char *)((long)pdVar17 + 0x8d) != '\0') || (*(char *)((long)pdVar17 + 0x8f) != '\0')) {
        return pdVar15;
      }
      if ((*(long *)(pdVar17 + 0x1a) == 0) ||
         (lVar21 = *(long *)(*(long *)(pdVar17 + 0x1a) + 0x288), lVar21 == 0)) {
code_r0x0144dd18:
        func_0x00f78af4();
      }
      else {
        /*Atlas.UI.UIArcadeInProgressBehaviour$$StopAnimations*/ func_0x01512a80(lVar21,0);
        if ((*(long *)(pdVar17 + 4) == 0) ||
           ((lVar21 = *(long *)(*(long *)(pdVar17 + 4) + 0x40), lVar21 == 0 ||
            (plVar25 = *(long **)(lVar21 + 0x28), plVar25 == (long *)0x0)))) goto code_r0x0144dd18;
        lVar21 = *plVar25;
        uVar18 = (ulong)*(ushort *)(lVar21 + 0x12a);
        if (uVar18 != 0) {
          piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
              puVar11 = (undefined8 *)(lVar21 + (long)*piVar22 * 0x10 + 0x138);
              goto code_r0x0144db00;
            }
            piVar22 = piVar22 + 4;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        puVar11 = (undefined8 *)func_0x00fac1f0(plVar25,/*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0,0);
code_r0x0144db00:
        plVar25 = (long *)(*(code *)*puVar11)(plVar25,puVar11[1]);
        if (plVar25 != (long *)0x0) {
          do {
            lVar21 = *plVar25;
            uVar18 = (ulong)*(ushort *)(lVar21 + 0x12a);
            if (uVar18 != 0) {
              piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar11 = (undefined8 *)(lVar21 + (long)*piVar22 * 0x10 + 0x138);
                  goto code_r0x0144db70;
                }
                piVar22 = piVar22 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            puVar11 = (undefined8 *)func_0x00fac1f0(plVar25,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0144db70:
            uVar18 = (*(code *)*puVar11)(plVar25,puVar11[1]);
            if ((uVar18 & 1) == 0) {
              lVar21 = 0;
              goto joined_r0x0144dc3c;
            }
            lVar21 = *plVar25;
            uVar18 = (ulong)*(ushort *)(lVar21 + 0x12a);
            if (uVar18 != 0) {
              piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
                  puVar11 = (undefined8 *)(lVar21 + (long)*piVar22 * 0x10 + 0x138);
                  goto code_r0x0144dbcc;
                }
                piVar22 = piVar22 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            puVar11 = (undefined8 *)func_0x00fac1f0(plVar25,/*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260,0);
code_r0x0144dbcc:
            lVar21 = (*(code *)*puVar11)(plVar25,puVar11[1]);
            if (lVar21 == 0) {
              func_0x00f78af4();
              goto code_r0x0144dd20;
            }
            lVar24 = *(long *)(lVar21 + 0x10);
            if (lVar24 == 0) {
              func_0x00f78af4();
              goto code_r0x0144dd20;
            }
            plVar26 = *(long **)(pdVar17 + 8);
            uVar13 = *(undefined8 *)(lVar24 + 0x50);
            uVar12 = *(undefined8 *)(lVar24 + 0x48);
            uVar31 = *(undefined8 *)(lVar24 + 0x60);
            uVar14 = *(undefined8 *)(lVar24 + 0x58);
            Atlas_Gameplay_Player_GameContextPlayer__GetRaceProgress(lVar21,0);
            if (plVar26 == (long *)0x0) goto code_r0x0144dd00;
            uStack_110 = 0;
            uStack_108 = 0;
            uStack_118 = 0;
            uStack_100 = uVar12;
            uStack_f8 = uVar13;
            uStack_f0 = uVar14;
            uStack_e8 = uVar31;
            (**(code **)(*plVar26 + 0x248))
                      (plVar26,&uStack_100,0,auVar32._8_8_,&uStack_118,
                       *(undefined8 *)(*plVar26 + 0x250));
          } while( true );
        }
      }
      func_0x00f78af4();
code_r0x0144dd20:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x144dd24);
      (*pcVar5)();
    }
  }
  auVar32 = func_0x00f78af4();
  lVar21 = auVar32._0_8_;
  if ((bRam0000000003eb4761 & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    func_0x00f78a20(0x3d2dc70);
    bRam0000000003eb4761 = 1;
  }
  uStack_94 = 0;
  plVar25 = *(long **)(lVar21 + 0x10);
  if (plVar25 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar25 + 0x188))(plVar25,*(undefined8 *)(*plVar25 + 400));
    if (*(long *)(lVar21 + 0x10) != 0) {
      uVar14 = *(undefined8 *)(*(long *)(lVar21 + 0x10) + 0x20);
      uVar13 = *(undefined8 *)(lVar21 + 0x18);
      if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*Atlas.Arcade.ArcadeSave$$TryGetResult*/ func_0x01447e78(uVar12,uVar14,uVar13,&uStack_94);
      return (dword *)(ulong)(uVar10 ^ 1 | (uint)(auVar32._8_4_ < (int)uStack_94));
    }
  }
  auVar33 = func_0x00f78af4();
  lVar21 = auVar33._0_8_;
  uStack_d0 = 0x3eb4000;
  uStack_c8 = 0x3eb4000;
  puStack_a8 = &Atlas_UI_ArcadeEventRepresentationViewBehaviour__set_Data;
  puStack_b0 = &stack0xffffffffffffff90;
  auStack_c0 = auVar32;
  if ((bRam0000000003eb4762 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4762 = 1;
  }
  uVar18 = 0;
  uStack_d8 = (ulong)(uint)uStack_d8;
  *(long *)(lVar21 + 0x18) = auVar33._8_8_;
  do {
    lVar24 = *(long *)(lVar21 + 0x38);
    if (lVar24 == 0) goto code_r0x0144f278;
    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto code_r0x0144f27c;
    uVar12 = *(undefined8 *)(lVar24 + uVar18 * 8 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar28 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar12,0,0);
    if ((uVar28 & 1) != 0) {
      lVar24 = *(long *)(lVar21 + 0x38);
      if (lVar24 == 0) goto code_r0x0144f278;
      if (*(uint *)(lVar24 + 0x18) <= uVar18) goto code_r0x0144f27c;
      if (*(long *)(lVar21 + 0x18) == 0) goto code_r0x0144f278;
      plVar25 = *(long **)(lVar24 + uVar18 * 8 + 0x20);
      uVar12 = Atlas_UI_ArcadeEventMetagameData__GetMedalThresholdString
                         (*(long *)(lVar21 + 0x18),uVar18 + 1);
      if (plVar25 == (long *)0x0) goto code_r0x0144f278;
      (**(code **)(*plVar25 + 0x558))(plVar25,uVar12,*(undefined8 *)(*plVar25 + 0x560));
    }
    uVar18 = uVar18 + 1;
  } while (uVar18 != 3);
  uVar12 = *(undefined8 *)(lVar21 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar12,0,0);
  if (iVar9 != 0) {
    if (*(long *)(lVar21 + 0x18) == 0) goto code_r0x0144f278;
    lVar24 = *(long *)(lVar21 + 0x30);
    iVar9 = Atlas_UI_ArcadeEventMetagameData__GetCurrentMedal();
    if (iVar9 == 1) {
      puVar11 = (undefined8 *)(lVar21 + 0x50);
    }
    else if (iVar9 == 2) {
      puVar11 = (undefined8 *)(lVar21 + 0x48);
    }
    else if (iVar9 == 3) {
      puVar11 = (undefined8 *)(lVar21 + 0x40);
    }
    else {
      puVar11 = (undefined8 *)(lVar21 + 0x58);
    }
    if (lVar24 == 0) goto code_r0x0144f278;
    /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(lVar24,*puVar11,0);
  }
  uVar12 = *(undefined8 *)(lVar21 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  pdVar15 = (dword *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar12,0,0);
  if ((int)pdVar15 == 0) {
    return pdVar15;
  }
  if (*(long *)(lVar21 + 0x18) != 0) {
    Atlas_UI_ArcadeEventMetagameData__TryGetCurrentBest
              (*(long *)(lVar21 + 0x18),&stack0xffffffffffffff20,(long)&uStack_d8 + 4);
    plVar25 = *(long **)(lVar21 + 0x28);
    if (plVar25 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0144f260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pdVar15 = (dword *)(**(code **)(*plVar25 + 0x558))
                                   (plVar25,0,*(undefined8 *)(*plVar25 + 0x560));
      return pdVar15;
    }
  }
code_r0x0144f278:
  func_0x00f78af4();
code_r0x0144f27c:
  uVar12 = func_0x00f78b24();
  auVar34 = func_0x00f78ac0(uVar12,0);
  iVar9 = auVar34._8_4_;
  puVar16 = auVar34._0_8_;
  puVar11 = puVar16;
  if (iVar9 != 3) {
    puVar11 = puVar16 + 3;
  }
  puVar1 = puVar16 + 1;
  if (iVar9 != 2) {
    puVar1 = puVar11;
  }
  puVar11 = puVar16 + 2;
  if (iVar9 != 1) {
    puVar11 = puVar1;
  }
  return (dword *)*puVar11;
joined_r0x0144dc3c:
  if (plVar25 != (long *)0x0) {
    lVar24 = *plVar25;
    uVar18 = (ulong)*(ushort *)(lVar24 + 0x12a);
    if (uVar18 != 0) {
      piVar22 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar11 = (undefined8 *)(lVar24 + (long)*piVar22 * 0x10 + 0x138);
          goto code_r0x0144dc94;
        }
        piVar22 = piVar22 + 4;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    puVar11 = (undefined8 *)func_0x00fac1f0(plVar25,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0144dc94:
    (*(code *)*puVar11)(plVar25,puVar11[1]);
  }
  if (lVar21 == 0) {
    *(undefined2 *)(pdVar17 + 0x23) = 0x100;
    *(char *)((long)pdVar17 + 0x8e) = auVar32[8];
    (**(code **)(*(long *)pdVar17 + 0x228))(pdVar17,*(undefined8 *)(*(long *)pdVar17 + 0x230));
    if ((*(long *)(pdVar17 + 4) != 0) &&
       (lVar21 = Atlas_Contexts_GameContextBase__GetGameModeState_GameContextBaseInProgressState_
                           (*(long *)(pdVar17 + 4),uRam0000000003d57080), lVar21 != 0)) {
      pdVar15 = (dword *)Atlas_Contexts_GameContextBaseInProgressState__NotifyGameContextFinished
                                   (lVar21,0);
      return pdVar15;
    }
    goto code_r0x0144dd18;
  }
  func_0x00f78ac0(lVar21,0);
  if (extraout_w1 != 1) {
    iVar9 = __Unwind_Resume();
    if (2 < iVar9 - 1U) {
      return &MACH_HEADER.filetype;
    }
    return (dword *)(ulong)*(uint *)(&UNK_033f8118 + (long)(int)(iVar9 - 1U) * 4);
  }
  plVar26 = (long *)___cxa_begin_catch();
  lVar21 = *plVar26;
  ___cxa_end_catch();
  goto joined_r0x0144dc3c;
code_r0x0144dd00:
  func_0x00f78af4();
  goto code_r0x0144dd20;
}



// ============================================================
// RVA: 0x144eee4 | Atlas.UI.ArcadeEventMetagameData.GetMedalThresholdString
// ============================================================

/* WARNING: Possible PIC construction at 0x029d2e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2cf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x029d2e58) */
/* WARNING: Removing unreachable block (ram,0x029d2cf4) */

dword * Atlas_UI_ArcadeEventMetagameData__GetMedalThresholdString
                  (long param_1,int param_2,dword *param_3,ulong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 uVar8;
  int iVar9;
  undefined8 uVar11;
  dword *pdVar12;
  undefined8 *puVar14;
  int extraout_w1;
  uint uVar10;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  ulong unaff_x19;
  int iVar20;
  long lVar21;
  long unaff_x20;
  undefined8 uVar22;
  long *plVar23;
  ulong unaff_x21;
  long *plVar24;
  ulong unaff_x22;
  undefined8 uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar28;
  undefined *unaff_x30;
  undefined *puVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined1 *puStack_80;
  undefined *puStack_78;
  int iStack_6c;
  int iStack_68;
  uint uStack_64;
  dword *pdVar13;
  
  if ((bRam0000000003eb475f & 1) == 0) {
    func_0x00f78a20(0x3d67120);
    bRam0000000003eb475f = 1;
  }
  if (param_2 == 0) {
    if (param_3 != (dword *)0x0) {
      uVar16 = 0;
      puVar6 = (undefined1 *)register0x00000008;
      lVar18 = /*STR('-- -- --')*/ lRam0000000003d67120;
code_r0x029d2c70:
      do {
        auVar31._8_8_ = lVar18;
        auVar31._0_8_ = param_3;
        *(long *)(puVar6 + -0x40) = unaff_x24;
        *(ulong *)(puVar6 + -0x38) = unaff_x23;
        *(ulong *)(puVar6 + -0x30) = unaff_x22;
        *(ulong *)(puVar6 + -0x28) = unaff_x21;
        *(long *)(puVar6 + -0x20) = unaff_x20;
        *(ulong *)(puVar6 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar6 + -0x10) = unaff_x29;
        *(undefined **)(puVar6 + -8) = unaff_x30;
        if (lVar18 == 0) {
          return param_3;
        }
        unaff_x23 = *(ulong *)(param_3 + 4);
        if (unaff_x23 == 0) {
          func_0x00f78af4();
          lVar18 = unaff_x20;
          uVar27 = unaff_x21;
          uVar26 = unaff_x22;
code_r0x029d2d74:
          uVar11 = func_0x00f78b24();
          puVar29 = &System_Text_StringBuilder__AppendHelper;
          auVar31 = func_0x00f78ac0(uVar11,0);
          unaff_x21 = uVar16;
          uVar17 = param_4;
        }
        else {
          uVar4 = param_3[8];
          unaff_x24 = (long)(int)uVar4;
          uVar2 = *(uint *)(lVar18 + 0x10);
          uVar27 = (ulong)uVar2;
          uVar10 = uVar2 + uVar4;
          uVar26 = (ulong)uVar10;
          if ((int)uVar10 < *(int *)(unaff_x23 + 0x18)) {
            if ((int)uVar2 < 3) {
              if ((int)uVar2 < 1) goto code_r0x029d2d54;
              uVar16 = 0;
              uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(lVar18,0);
              if (uVar4 < *(uint *)(unaff_x23 + 0x18)) {
                *(undefined2 *)(unaff_x23 + unaff_x24 * 2 + 0x20) = uVar8;
                if (uVar2 < 2) {
code_r0x029d2d54:
                  param_3[8] = uVar10;
                  return param_3;
                }
                uVar16 = 0;
                uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(lVar18,1);
                if (uVar4 + 1 < *(uint *)(unaff_x23 + 0x18)) {
                  *(undefined2 *)(unaff_x23 + (long)(int)(uVar4 + 1) * 2 + 0x20) = uVar8;
                  goto code_r0x029d2d54;
                }
              }
            }
            else {
              iVar9 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
              if (uVar4 < *(uint *)(unaff_x23 + 0x18)) {
                /*System.String$$wstrcpy*/ func_0x029cb054(unaff_x23 + unaff_x24 * 2 + 0x20,lVar18 + iVar9,uVar27,0);
                goto code_r0x029d2d54;
              }
            }
            goto code_r0x029d2d74;
          }
          puVar29 = &UNK_029d2cf4;
          unaff_x21 = uVar16;
          uVar17 = param_4;
        }
        lVar21 = auVar31._8_8_;
        pdVar12 = auVar31._0_8_;
        *(long *)(puVar6 + -0x60) = lVar18;
        *(dword **)(puVar6 + -0x58) = param_3;
        *(undefined1 **)(puVar6 + -0x50) = puVar6 + -0x10;
        *(undefined **)(puVar6 + -0x48) = puVar29;
        if (lVar21 != 0) {
          iVar9 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          lVar18 = lVar21 + iVar9;
          uVar17 = (ulong)*(uint *)(lVar21 + 0x10);
          puVar28 = *(undefined1 **)(puVar6 + -0x50);
          puVar29 = *(undefined **)(puVar6 + -0x48);
          puVar7 = puVar6 + -0x40;
          auVar32._8_8_ = uVar26;
          auVar32._0_8_ = *(undefined8 *)(puVar6 + -0x58);
          uVar16 = *(ulong *)(puVar6 + -0x60);
          unaff_x21 = uVar27;
code_r0x029d2b54:
          unaff_x22 = auVar32._8_8_;
          *(long *)(puVar7 + -0x40) = unaff_x24;
          *(ulong *)(puVar7 + -0x38) = unaff_x23;
          *(ulong *)(puVar7 + -0x30) = unaff_x22;
          *(ulong *)(puVar7 + -0x28) = unaff_x21;
          *(ulong *)(puVar7 + -0x20) = uVar16;
          *(long *)(puVar7 + -0x18) = auVar32._0_8_;
          *(undefined1 **)(puVar7 + -0x10) = puVar28;
          *(undefined **)(puVar7 + -8) = puVar29;
          unaff_x29 = puVar7 + -0x10;
          iVar9 = (int)uVar17;
          if (-1 < iVar9) {
            lVar21 = *(long *)(pdVar12 + 4);
            if (lVar21 != 0) {
              iVar20 = pdVar12[8];
              uVar10 = iVar20 + iVar9;
              unaff_x22 = (ulong)uVar10;
              if ((int)uVar10 <= *(int *)(lVar21 + 0x18)) goto code_r0x029d2be8;
              uVar2 = *(int *)(lVar21 + 0x18) - iVar20;
              unaff_x23 = (ulong)uVar2;
              if (0 < (int)uVar2) {
                /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar18,lVar21,iVar20,unaff_x23);
                unaff_x21 = uVar17;
                if (*(long *)(pdVar12 + 4) == 0) goto code_r0x029d2c08;
                pdVar12[8] = (int)*(undefined8 *)(*(long *)(pdVar12 + 4) + 0x18);
              }
              uVar10 = iVar9 - uVar2;
              uVar17 = (ulong)uVar10;
              /*System.Text.StringBuilder$$ExpandByABlock*/ func_0x029d27e8(pdVar12,uVar17);
              lVar21 = *(long *)(pdVar12 + 4);
              lVar18 = lVar18 + (long)(int)uVar2 * 2;
              iVar20 = 0;
code_r0x029d2be8:
              /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar18,lVar21,iVar20,uVar17);
              pdVar12[8] = uVar10;
              return pdVar12;
            }
code_r0x029d2c08:
            func_0x00f78af4();
          }
          uVar11 = func_0x00f78a24(0x3d6b268);
          unaff_x19 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar11,0);
          func_0x00f78a24(0x3d1fcf8);
          unaff_x20 = func_0x00f78aec();
          uVar11 = func_0x00f78a24(0x3d7c5c8);
          param_4 = 0;
          uVar16 = unaff_x19;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(unaff_x20,uVar11);
          uVar11 = func_0x00f78a24(0x3d5dbe8);
          unaff_x30 = &System_Text_StringBuilder__Append;
          auVar31 = func_0x00f78ac0(unaff_x20,uVar11);
          lVar18 = auVar31._8_8_;
          param_3 = auVar31._0_8_;
          puVar6 = puVar7 + -0x40;
          goto code_r0x029d2c70;
        }
        auVar32 = func_0x00f78af4();
        unaff_x22 = auVar32._8_8_;
        pdVar12 = auVar32._0_8_;
        puVar7 = puVar6 + -0xa0;
        *(long *)(puVar6 + -0xa0) = unaff_x24;
        *(ulong *)(puVar6 + -0x98) = unaff_x23;
        *(ulong *)(puVar6 + -0x90) = uVar26;
        *(ulong *)(puVar6 + -0x88) = uVar27;
        *(long *)(puVar6 + -0x80) = lVar18;
        *(dword **)(puVar6 + -0x78) = param_3;
        *(undefined1 **)(puVar6 + -0x70) = puVar6 + -0x50;
        *(undefined **)(puVar6 + -0x68) = &System_Text_StringBuilder__Append;
        puVar28 = puVar6 + -0x70;
        unaff_x23 = 0x3eb9000;
        param_4 = uVar17;
        if ((bRam0000000003eb948a & 1) == 0) {
          func_0x00f78a20(0x3d208b0);
          bRam0000000003eb948a = 1;
        }
        iVar9 = (int)unaff_x21;
        if (iVar9 < 0) {
code_r0x029d2e7c:
          uVar11 = func_0x00f78a24(0x3d6de28);
          uVar22 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar11,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar17 = func_0x00f78aec();
          uVar11 = 0x3d7b9d0;
code_r0x029d2ee8:
          uVar11 = func_0x00f78a24(uVar11);
          param_4 = 0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar17,uVar11,uVar22);
          uVar11 = func_0x00f78a24(0x3d5dc00);
          func_0x00f78ac0(uVar17,uVar11);
        }
        else {
          iVar20 = (int)uVar17;
          if (iVar20 < 0) {
            uVar11 = func_0x00f78a24(0x3d75fa8);
            uVar22 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar11,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar17 = func_0x00f78aec();
            uVar11 = 0x3d78638;
            goto code_r0x029d2ee8;
          }
          if ((iVar20 == 0) && (*(char *)(*(long *)(/*System.CompatibilitySwitches_TypeInfo*/ lRam0000000003d208b0 + 0xb8) + 1) != '\0')) {
            return pdVar12;
          }
          if (unaff_x22 != 0) {
            if (iVar20 == 0) {
              return pdVar12;
            }
            if (iVar9 <= *(int *)(unaff_x22 + 0x10) - iVar20) {
              iVar9 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
              lVar18 = unaff_x22 + (unaff_x21 & 0xffffffff) * 2 + (long)iVar9;
              puVar29 = &UNK_029d2e58;
              uVar16 = uVar17;
              goto code_r0x029d2b54;
            }
            goto code_r0x029d2e7c;
          }
          if (iVar9 == 0 && iVar20 == 0) {
            return pdVar12;
          }
        }
        func_0x00f78a24(0x3d1fcf0);
        uVar11 = func_0x00f78aec();
        uVar22 = func_0x00f78a24(0x3d7c5a0);
        uVar16 = 0;
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar11,uVar22);
        uVar22 = func_0x00f78a24(0x3d5dc00);
        param_3 = (dword *)func_0x00f78ac0(uVar11,uVar22);
        *(ulong *)(puVar6 + -0xc0) = uVar17;
        *(undefined8 *)(puVar6 + -0xb8) = uVar11;
        *(undefined1 **)(puVar6 + -0xb0) = puVar28;
        *(undefined **)(puVar6 + -0xa8) = &System_Text_StringBuilder__AppendLine;
        lVar18 = /*System.Environment$$get_NewLine*/ func_0x02aca040(0);
        unaff_x29 = *(undefined1 **)(puVar6 + -0xb0);
        unaff_x30 = *(undefined **)(puVar6 + -0xa8);
        unaff_x20 = *(long *)(puVar6 + -0xc0);
        unaff_x19 = *(ulong *)(puVar6 + -0xb8);
        puVar6 = puVar6 + -0xa0;
      } while( true );
    }
  }
  else {
    lVar18 = *(long *)(param_1 + 0x10);
    if (lVar18 != 0) {
      if (param_2 == 3) {
        uVar16 = (ulong)*(uint *)(lVar18 + 0x50);
      }
      else if (param_2 == 2) {
        uVar16 = (ulong)*(uint *)(lVar18 + 0x4c);
      }
      else if (param_2 == 1) {
        uVar16 = (ulong)*(uint *)(lVar18 + 0x48);
      }
      else {
        uVar16 = 0x7fffffff;
      }
      if ((bRam0000000003eb475d & 1) == 0) {
        func_0x00f78a20(0x3d437d8);
        func_0x00f78a20(0x3d22910);
        func_0x00f78a20(0x3d68498);
        func_0x00f78a20(0x3d7cca0);
        func_0x00f78a20(0x3d67968);
        bRam0000000003eb475d = 1;
      }
      uStack_64 = (int)uVar16 / 60000;
      uVar27 = (ulong)uStack_64;
      uVar11 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_64);
      if (param_3 != (dword *)0x0) {
        iVar9 = (int)uVar16 % 60000;
        /*System.Text.StringBuilder$$AppendFormat*/ func_0x029d3c70(param_3,/*STR('{0:D2}')*/ uRam0000000003d7cca0,uVar11,0);
        lVar18 = lRam0000000003d437d8;
        lVar21 = **(long **)(lRam0000000003d437d8 + 0x30);
        uVar3 = *(ushort *)(lVar21 + 0x132);
        if ((uVar3 & 1) == 0) {
          func_0x00fac028(lVar21);
          uVar3 = *(ushort *)(lVar21 + 0x132);
        }
        if ((uVar3 >> 10 & 1) != 0) {
          lVar21 = **(long **)(lVar18 + 0x30);
          if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar21);
          }
          if (*(int *)(lVar21 + 0xe0) == 0) {
            lVar21 = **(long **)(lVar18 + 0x30);
            if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar21);
            }
            func_0x00f78ad0(lVar21);
          }
        }
        lVar18 = **(long **)(lVar18 + 0x30);
        if ((*(ushort *)(lVar18 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar18);
        }
        /*System.Text.StringBuilder$$AppendFormat*/ func_0x029d456c(param_3,/*STR(':')*/ uRam0000000003d67968,**(undefined8 **)(lVar18 + 0xb8),0);
        iStack_68 = iVar9 / 1000;
        uVar11 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_68);
        /*System.Text.StringBuilder$$AppendFormat*/ func_0x029d3c70(param_3,/*STR('{0:D2}')*/ uRam0000000003d7cca0,uVar11,0);
        lVar18 = lRam0000000003d437d8;
        lVar21 = **(long **)(lRam0000000003d437d8 + 0x30);
        uVar3 = *(ushort *)(lVar21 + 0x132);
        if ((uVar3 & 1) == 0) {
          func_0x00fac028(lVar21);
          uVar3 = *(ushort *)(lVar21 + 0x132);
        }
        if ((uVar3 >> 10 & 1) != 0) {
          lVar21 = **(long **)(lVar18 + 0x30);
          if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar21);
          }
          if (*(int *)(lVar21 + 0xe0) == 0) {
            lVar21 = **(long **)(lVar18 + 0x30);
            if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar21);
            }
            func_0x00f78ad0(lVar21);
          }
        }
        lVar18 = **(long **)(lVar18 + 0x30);
        if ((*(ushort *)(lVar18 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar18);
        }
        /*System.Text.StringBuilder$$AppendFormat*/ func_0x029d456c(param_3,/*STR('<size=80%>.')*/ uRam0000000003d68498,**(undefined8 **)(lVar18 + 0xb8),0);
        iStack_6c = (iVar9 % 1000) / 10;
        uVar11 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_6c);
        pdVar12 = (dword *)/*System.Text.StringBuilder$$AppendFormat*/ func_0x029d3c70(param_3,/*STR('{0:D2}')*/ uRam0000000003d7cca0,uVar11,0);
        return pdVar12;
      }
      auVar31 = func_0x00f78af4();
      pdVar13 = auVar31._0_8_;
      uStack_a0 = 0x3eb4000;
      uStack_98 = 0x3d22910;
      puStack_78 = &Atlas_Arcade_ArcadeEvent__EndEvent;
      pdVar12 = pdVar13;
      uStack_a8 = uVar27;
      auStack_90._0_8_ = uVar16;
      auStack_90._8_8_ = param_3;
      puStack_80 = &stack0xfffffffffffffff0;
      if ((bRam0000000003eb474d & 1) == 0) {
        func_0x00f78a20(0x3d57080);
        func_0x00f78a20(0x3d220f0);
        func_0x00f78a20(0x3d1d0a0);
        func_0x00f78a20(0x3d1d260);
        pdVar12 = (dword *)func_0x00f78a20(0x3d22180);
        bRam0000000003eb474d = 1;
      }
      if ((*(char *)((long)pdVar13 + 0x8d) != '\0') || (*(char *)((long)pdVar13 + 0x8f) != '\0')) {
        return pdVar12;
      }
      if ((*(long *)(pdVar13 + 0x1a) == 0) ||
         (lVar18 = *(long *)(*(long *)(pdVar13 + 0x1a) + 0x288), lVar18 == 0)) {
code_r0x0144dd18:
        func_0x00f78af4();
      }
      else {
        /*Atlas.UI.UIArcadeInProgressBehaviour$$StopAnimations*/ func_0x01512a80(lVar18,0);
        if ((*(long *)(pdVar13 + 4) == 0) ||
           ((lVar18 = *(long *)(*(long *)(pdVar13 + 4) + 0x40), lVar18 == 0 ||
            (plVar23 = *(long **)(lVar18 + 0x28), plVar23 == (long *)0x0)))) goto code_r0x0144dd18;
        lVar18 = *plVar23;
        uVar16 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar16 != 0) {
          piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
              puVar14 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
              goto code_r0x0144db00;
            }
            piVar19 = piVar19 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar14 = (undefined8 *)func_0x00fac1f0(plVar23,/*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0,0);
code_r0x0144db00:
        plVar23 = (long *)(*(code *)*puVar14)(plVar23,puVar14[1]);
        if (plVar23 != (long *)0x0) {
          do {
            lVar18 = *plVar23;
            uVar16 = (ulong)*(ushort *)(lVar18 + 0x12a);
            if (uVar16 != 0) {
              piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar14 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
                  goto code_r0x0144db70;
                }
                piVar19 = piVar19 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar14 = (undefined8 *)func_0x00fac1f0(plVar23,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0144db70:
            uVar16 = (*(code *)*puVar14)(plVar23,puVar14[1]);
            if ((uVar16 & 1) == 0) {
              lVar18 = 0;
              goto joined_r0x0144dc3c;
            }
            lVar18 = *plVar23;
            uVar16 = (ulong)*(ushort *)(lVar18 + 0x12a);
            if (uVar16 != 0) {
              piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
                  puVar14 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
                  goto code_r0x0144dbcc;
                }
                piVar19 = piVar19 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar14 = (undefined8 *)func_0x00fac1f0(plVar23,/*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260,0);
code_r0x0144dbcc:
            lVar18 = (*(code *)*puVar14)(plVar23,puVar14[1]);
            if (lVar18 == 0) {
              func_0x00f78af4();
              goto code_r0x0144dd20;
            }
            lVar21 = *(long *)(lVar18 + 0x10);
            if (lVar21 == 0) {
              func_0x00f78af4();
              goto code_r0x0144dd20;
            }
            plVar24 = *(long **)(pdVar13 + 8);
            uVar22 = *(undefined8 *)(lVar21 + 0x50);
            uVar11 = *(undefined8 *)(lVar21 + 0x48);
            uVar30 = *(undefined8 *)(lVar21 + 0x60);
            uVar25 = *(undefined8 *)(lVar21 + 0x58);
            Atlas_Gameplay_Player_GameContextPlayer__GetRaceProgress(lVar18,0);
            if (plVar24 == (long *)0x0) goto code_r0x0144dd00;
            uStack_e0 = 0;
            uStack_d8 = 0;
            uStack_e8 = 0;
            uStack_d0 = uVar11;
            uStack_c8 = uVar22;
            uStack_c0 = uVar25;
            uStack_b8 = uVar30;
            (**(code **)(*plVar24 + 0x248))
                      (plVar24,&uStack_d0,0,auVar31._8_8_,&uStack_e8,
                       *(undefined8 *)(*plVar24 + 0x250));
          } while( true );
        }
      }
      func_0x00f78af4();
code_r0x0144dd20:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x144dd24);
      (*pcVar5)();
    }
  }
  auVar31 = func_0x00f78af4();
  lVar18 = auVar31._0_8_;
  if ((bRam0000000003eb4761 & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    func_0x00f78a20(0x3d2dc70);
    bRam0000000003eb4761 = 1;
  }
  uStack_64 = 0;
  plVar23 = *(long **)(lVar18 + 0x10);
  if (plVar23 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar23 + 0x188))(plVar23,*(undefined8 *)(*plVar23 + 400));
    if (*(long *)(lVar18 + 0x10) != 0) {
      uVar25 = *(undefined8 *)(*(long *)(lVar18 + 0x10) + 0x20);
      uVar22 = *(undefined8 *)(lVar18 + 0x18);
      if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*Atlas.Arcade.ArcadeSave$$TryGetResult*/ func_0x01447e78(uVar11,uVar25,uVar22,&uStack_64);
      return (dword *)(ulong)(uVar10 ^ 1 | (uint)(auVar31._8_4_ < (int)uStack_64));
    }
  }
  auVar32 = func_0x00f78af4();
  lVar18 = auVar32._0_8_;
  uStack_a0 = 0x3eb4000;
  uStack_98 = 0x3eb4000;
  puStack_78 = &Atlas_UI_ArcadeEventRepresentationViewBehaviour__set_Data;
  puStack_80 = &stack0xffffffffffffffc0;
  auStack_90 = auVar31;
  if ((bRam0000000003eb4762 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4762 = 1;
  }
  uVar16 = 0;
  uStack_a8 = (ulong)(uint)uStack_a8;
  *(long *)(lVar18 + 0x18) = auVar32._8_8_;
  do {
    lVar21 = *(long *)(lVar18 + 0x38);
    if (lVar21 == 0) goto code_r0x0144f278;
    if (*(uint *)(lVar21 + 0x18) <= uVar16) goto code_r0x0144f27c;
    uVar11 = *(undefined8 *)(lVar21 + uVar16 * 8 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar27 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0,0);
    if ((uVar27 & 1) != 0) {
      lVar21 = *(long *)(lVar18 + 0x38);
      if (lVar21 == 0) goto code_r0x0144f278;
      if (*(uint *)(lVar21 + 0x18) <= uVar16) goto code_r0x0144f27c;
      if (*(long *)(lVar18 + 0x18) == 0) goto code_r0x0144f278;
      plVar23 = *(long **)(lVar21 + uVar16 * 8 + 0x20);
      uVar11 = Atlas_UI_ArcadeEventMetagameData__GetMedalThresholdString
                         (*(long *)(lVar18 + 0x18),uVar16 + 1);
      if (plVar23 == (long *)0x0) goto code_r0x0144f278;
      (**(code **)(*plVar23 + 0x558))(plVar23,uVar11,*(undefined8 *)(*plVar23 + 0x560));
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 != 3);
  uVar11 = *(undefined8 *)(lVar18 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0,0);
  if (iVar9 != 0) {
    if (*(long *)(lVar18 + 0x18) == 0) goto code_r0x0144f278;
    lVar21 = *(long *)(lVar18 + 0x30);
    iVar9 = Atlas_UI_ArcadeEventMetagameData__GetCurrentMedal();
    if (iVar9 == 1) {
      puVar14 = (undefined8 *)(lVar18 + 0x50);
    }
    else if (iVar9 == 2) {
      puVar14 = (undefined8 *)(lVar18 + 0x48);
    }
    else if (iVar9 == 3) {
      puVar14 = (undefined8 *)(lVar18 + 0x40);
    }
    else {
      puVar14 = (undefined8 *)(lVar18 + 0x58);
    }
    if (lVar21 == 0) goto code_r0x0144f278;
    /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(lVar21,*puVar14,0);
  }
  uVar11 = *(undefined8 *)(lVar18 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  pdVar12 = (dword *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0,0);
  if ((int)pdVar12 == 0) {
    return pdVar12;
  }
  if (*(long *)(lVar18 + 0x18) != 0) {
    Atlas_UI_ArcadeEventMetagameData__TryGetCurrentBest
              (*(long *)(lVar18 + 0x18),&stack0xffffffffffffff50,(long)&uStack_a8 + 4);
    plVar23 = *(long **)(lVar18 + 0x28);
    if (plVar23 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0144f260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pdVar12 = (dword *)(**(code **)(*plVar23 + 0x558))
                                   (plVar23,0,*(undefined8 *)(*plVar23 + 0x560));
      return pdVar12;
    }
  }
code_r0x0144f278:
  func_0x00f78af4();
code_r0x0144f27c:
  uVar11 = func_0x00f78b24();
  auVar33 = func_0x00f78ac0(uVar11,0);
  iVar9 = auVar33._8_4_;
  puVar15 = auVar33._0_8_;
  puVar14 = puVar15;
  if (iVar9 != 3) {
    puVar14 = puVar15 + 3;
  }
  puVar1 = puVar15 + 1;
  if (iVar9 != 2) {
    puVar1 = puVar14;
  }
  puVar14 = puVar15 + 2;
  if (iVar9 != 1) {
    puVar14 = puVar1;
  }
  return (dword *)*puVar14;
joined_r0x0144dc3c:
  if (plVar23 != (long *)0x0) {
    lVar21 = *plVar23;
    uVar16 = (ulong)*(ushort *)(lVar21 + 0x12a);
    if (uVar16 != 0) {
      piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar14 = (undefined8 *)(lVar21 + (long)*piVar19 * 0x10 + 0x138);
          goto code_r0x0144dc94;
        }
        piVar19 = piVar19 + 4;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    puVar14 = (undefined8 *)func_0x00fac1f0(plVar23,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0144dc94:
    (*(code *)*puVar14)(plVar23,puVar14[1]);
  }
  if (lVar18 == 0) {
    *(undefined2 *)(pdVar13 + 0x23) = 0x100;
    *(char *)((long)pdVar13 + 0x8e) = auVar31[8];
    (**(code **)(*(long *)pdVar13 + 0x228))(pdVar13,*(undefined8 *)(*(long *)pdVar13 + 0x230));
    if ((*(long *)(pdVar13 + 4) != 0) &&
       (lVar18 = Atlas_Contexts_GameContextBase__GetGameModeState_GameContextBaseInProgressState_
                           (*(long *)(pdVar13 + 4),uRam0000000003d57080), lVar18 != 0)) {
      pdVar12 = (dword *)Atlas_Contexts_GameContextBaseInProgressState__NotifyGameContextFinished
                                   (lVar18,0);
      return pdVar12;
    }
    goto code_r0x0144dd18;
  }
  func_0x00f78ac0(lVar18,0);
  if (extraout_w1 != 1) {
    iVar9 = __Unwind_Resume();
    if (2 < iVar9 - 1U) {
      return &MACH_HEADER.filetype;
    }
    return (dword *)(ulong)*(uint *)(&UNK_033f8118 + (long)(int)(iVar9 - 1U) * 4);
  }
  plVar24 = (long *)___cxa_begin_catch();
  lVar18 = *plVar24;
  ___cxa_end_catch();
  goto joined_r0x0144dc3c;
code_r0x0144dd00:
  func_0x00f78af4();
  goto code_r0x0144dd20;
}



// ============================================================
// RVA: 0x144efa0 | Atlas.UI.ArcadeEventMetagameData.IsResultBetterThanCurrentBest
// ============================================================

ulong Atlas_UI_ArcadeEventMetagameData__IsResultBetterThanCurrentBest(long param_1,int param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined8 uStack_80;
  undefined4 uStack_74;
  int iStack_34;
  
  if ((bRam0000000003eb4761 & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    func_0x00f78a20(0x3d2dc70);
    bRam0000000003eb4761 = 1;
  }
  iStack_34 = 0;
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*Atlas.Arcade.ArcadeSave$$TryGetResult*/ func_0x01447e78(uVar6,uVar14,uVar12,&iStack_34);
      return (ulong)(uVar3 ^ 1 | (uint)(param_2 < iStack_34));
    }
  }
  auVar15 = func_0x00f78af4();
  lVar7 = auVar15._0_8_;
  if ((bRam0000000003eb4762 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4762 = 1;
  }
  uVar13 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  *(long *)(lVar7 + 0x18) = auVar15._8_8_;
  do {
    lVar10 = *(long *)(lVar7 + 0x38);
    if (lVar10 == 0) goto code_r0x0144f278;
    if (*(uint *)(lVar10 + 0x18) <= uVar13) goto code_r0x0144f27c;
    uVar6 = *(undefined8 *)(lVar10 + uVar13 * 8 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
    if ((uVar8 & 1) != 0) {
      lVar10 = *(long *)(lVar7 + 0x38);
      if (lVar10 == 0) goto code_r0x0144f278;
      if (*(uint *)(lVar10 + 0x18) <= uVar13) goto code_r0x0144f27c;
      if (*(long *)(lVar7 + 0x18) == 0) goto code_r0x0144f278;
      plVar5 = *(long **)(lVar10 + uVar13 * 8 + 0x20);
      uVar6 = Atlas_UI_ArcadeEventMetagameData__GetMedalThresholdString
                        (*(long *)(lVar7 + 0x18),uVar13 + 1);
      if (plVar5 == (long *)0x0) goto code_r0x0144f278;
      (**(code **)(*plVar5 + 0x558))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x560));
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 != 3);
  uVar6 = *(undefined8 *)(lVar7 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if (iVar4 != 0) {
    if (*(long *)(lVar7 + 0x18) == 0) goto code_r0x0144f278;
    lVar10 = *(long *)(lVar7 + 0x30);
    iVar4 = Atlas_UI_ArcadeEventMetagameData__GetCurrentMedal();
    if (iVar4 == 1) {
      puVar11 = (undefined8 *)(lVar7 + 0x50);
    }
    else if (iVar4 == 2) {
      puVar11 = (undefined8 *)(lVar7 + 0x48);
    }
    else if (iVar4 == 3) {
      puVar11 = (undefined8 *)(lVar7 + 0x40);
    }
    else {
      puVar11 = (undefined8 *)(lVar7 + 0x58);
    }
    if (lVar10 == 0) goto code_r0x0144f278;
    /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(lVar10,*puVar11,0);
  }
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar13 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  if (*(long *)(lVar7 + 0x18) != 0) {
    Atlas_UI_ArcadeEventMetagameData__TryGetCurrentBest
              (*(long *)(lVar7 + 0x18),&uStack_80,&uStack_74);
    plVar5 = *(long **)(lVar7 + 0x28);
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0144f260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (**(code **)(*plVar5 + 0x558))(plVar5,uStack_80,*(undefined8 *)(*plVar5 + 0x560));
      return uVar13;
    }
  }
code_r0x0144f278:
  func_0x00f78af4();
code_r0x0144f27c:
  uVar6 = func_0x00f78b24();
  auVar16 = func_0x00f78ac0(uVar6,0);
  iVar4 = auVar16._8_4_;
  puVar9 = auVar16._0_8_;
  puVar2 = puVar9;
  if (iVar4 != 3) {
    puVar2 = puVar9 + 3;
  }
  puVar1 = puVar9 + 1;
  if (iVar4 != 2) {
    puVar1 = puVar2;
  }
  puVar2 = puVar9 + 2;
  if (iVar4 != 1) {
    puVar2 = puVar1;
  }
  return *puVar2;
}



