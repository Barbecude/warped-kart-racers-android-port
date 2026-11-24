// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.UITweener

// ============================================================
// RVA: 0x2f8a9a8 | Core.UI2.UITweener.RunTweenAnimationInGroups
// ============================================================

undefined4
Core_UI2_UITweener__RunTweenAnimationInGroups
          (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined8 *puVar1;
  float fVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  if ((bRam0000000003ebc69b & 1) == 0) {
    func_0x00f78a20(0x3d536f8);
    func_0x00f78a20(0x3d330d8);
    func_0x00f78a20(0x3d330e0);
    func_0x00f78a20(0x3d330e8);
    func_0x00f78a20(0x3d3c650);
    func_0x00f78a20(0x3d3c658);
    func_0x00f78a20(0x3d3b8c0);
    func_0x00f78a20(0x3d3c660);
    func_0x00f78a20(0x3d3b8c8);
    func_0x00f78a20(0x3d3b8d0);
    func_0x00f78a20(0x3d3b8d8);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69b = 1;
  }
  uStack_c0 = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  uStack_d0 = 0;
  lStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (((*(byte *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x10);
  if (lVar6 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(lVar6,uRam0000000003d3c658);
    if (param_5 == 0) {
      if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (param_2 == 0) goto LAB_02f8af08;
      /*UnityEngine.Component$$GetComponentsInChildren<UITweenLeaf>*/ func_0x018394e8(param_2,1,*(undefined8 *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x10),
                      uRam0000000003d536f8);
    }
    else {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a0,param_5,uRam0000000003d3c660);
      lStack_b8 = lStack_98;
      uStack_c0 = uStack_a0;
      uStack_b0 = uStack_90;
      while (uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c0,uRam0000000003d330e0), uVar3 = uStack_b0,
            (uVar7 & 1) != 0) {
        if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar6 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x10);
        if (lVar6 == 0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x2f8ab88);
          (*pcVar4)();
        }
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar6,uVar3,uRam0000000003d3c650);
      }
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c0,uRam0000000003d330d8);
    }
    if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_5 = /*Core.UI2.UITweener$$PlanTweensForLeaves*/ func_0x02f8f6b8(*(undefined8 *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x10));
    /*Core.UI2.UITweener$$CalculateTweenDurationsAndDependencies*/ func_0x02f8fb10(param_1,param_5);
    lVar6 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x20);
    if (lVar6 != 0) {
      /*System.Collections.Generic.List<PlannedTweenData>$$Clear*/ func_0x02434d74(lVar6,uRam0000000003d3b8c0);
      lVar6 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8);
      Core_UI2_TweenTopologicalSort__Sort
                (*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x20),param_5,
                 *(undefined8 *)(lVar6 + 0x18));
      uVar7 = 0;
      uVar9 = 0;
      lVar6 = 0x20;
      while( true ) {
        if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar8 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x20);
        if (lVar8 == 0) break;
        if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar7) {
code_r0x02f8ae0c:
          if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar6 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8);
          lVar8 = *(long *)(lVar6 + 0x28);
          if (lVar8 != 0) {
            if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
              func_0x00f78ad0();
              lVar6 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8);
            }
            Core_UI2_TweenAnimPlannedCallback__Invoke(lVar8,*(undefined8 *)(lVar6 + 0x20),param_5);
          }
          if ((int)param_5 < 1) goto code_r0x02f8aeb8;
          uVar7 = 0;
          param_5 = param_5 & 0xffffffff;
          lVar6 = 0x20;
          goto code_r0x02f8ae70;
        }
        if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar8 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x20);
          if (lVar8 == 0) break;
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x10) + lVar6);
        uStack_118 = puVar1[1];
        uStack_120 = *puVar1;
        uStack_108 = puVar1[3];
        uStack_110 = puVar1[2];
        uStack_100 = puVar1[4];
        iVar5 = Core_UI2_PlannedTweenData__get_IsValid(&uStack_120);
        if (iVar5 == 0) goto code_r0x02f8ae0c;
        if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar8 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x20);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x10) + lVar6);
        lStack_e8 = puVar1[1];
        uStack_f0 = *puVar1;
        uStack_d8 = puVar1[3];
        uStack_e0 = puVar1[2];
        uStack_d0 = puVar1[4];
        if (lStack_e8 != 0) {
          if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          Core_UI2_PlannedTweenData__CalculateDependencyAnimDuration
                    (&uStack_f0,*(undefined8 *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 8),
                     *(undefined8 *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x18));
          fVar2 = (float)uStack_d0;
          /*Core.UI2.UITweener$$PlayTweenAnimOnLeaves*/ func_0x02f8fca4(uStack_d0 & 0xffffffff,lStack_e8,uStack_e0,uStack_d8 & 0xffffffff,param_3,
                          0);
          uVar9 = /*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(uVar9,fVar2 + uStack_d8._4_4_,0);
          lVar8 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x20);
          if (lVar8 == 0) break;
          lStack_98 = lStack_e8;
          uStack_a0 = uStack_f0;
          uStack_88 = uStack_d8;
          uStack_90 = uStack_e0;
          uStack_80 = uStack_d0;
          /*System.Collections.Generic.List<PlannedTweenData>$$set_Item*/ func_0x024346ac(lVar8,uVar7,&uStack_a0,uRam0000000003d3b8d8);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x28;
      }
    }
  }
LAB_02f8af08:
  func_0x00f78af4();
code_r0x02f8af0c:
  uVar7 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar7,0);
    __Unwind_Resume();
    uVar7 = param_5;
  } while( true );
code_r0x02f8ae70:
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar8 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 8);
  if (lVar8 == 0) goto LAB_02f8af08;
  if (*(uint *)(lVar8 + 0x18) <= uVar7) goto code_r0x02f8af0c;
  *(undefined8 *)(lVar8 + lVar6) = 0;
  uVar7 = uVar7 + 1;
  lVar6 = lVar6 + 0x28;
  if (param_5 == uVar7) {
code_r0x02f8aeb8:
    if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*Core.UI2.UITweener$$TryCreateOnCompleteVirtualTween*/ func_0x02f8ffa0(uVar9,param_4,param_2);
    return uVar9;
  }
  goto code_r0x02f8ae70;
}



// ============================================================
// RVA: 0x2f8ebf0 | Core.UI2.UITweener.NotifyTweenPhaseStarted
// ============================================================

void Core_UI2_UITweener__NotifyTweenPhaseStarted(undefined4 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  undefined1 auStack_7c [16];
  undefined4 uStack_6c;
  long lStack_68;
  
  if ((bRam0000000003ebc696 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc696 = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar8 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x30);
  if (lVar8 == 0) {
    return;
  }
  lStack_68 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  uStack_6c = param_1;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    if (iVar4 == 0) {
      if (plVar1 == (long *)0x0) {
        (*pcVar14)(auStack_7c,param_2,lVar10);
      }
      else {
        if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x02f83534;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        uVar2 = uStack_6c;
        if (iVar4 == 0) {
          uVar3 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *plVar1 + (ulong)uVar3 * 0x10;
            (**(code **)(lVar10 + 0x138))(plVar1,uStack_6c,param_2,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x02f8355c;
          }
          lVar10 = func_0x00f78a48(lVar10);
          uVar2 = uStack_6c;
          lVar11 = *plVar1;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar3) * 0x10 + 0x138)
                ;
                goto code_r0x02f83634;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar3);
code_r0x02f83634:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
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
                  goto code_r0x02f83604;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(plVar1);
code_r0x02f83604:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(plVar1,uVar2,param_2,puVar7);
      }
    }
    else if (*(char *)(lVar10 + 0x4a) == '\x02') {
      (*pcVar14)(uStack_6c,param_2,lVar10);
    }
    else {
code_r0x02f83534:
      (*pcVar14)(plVar1,uStack_6c,param_2,lVar10);
    }
code_r0x02f8355c:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f8f2d8 | Core.UI2.UITweener.add_OnTweensPlanned
// ============================================================

/* WARNING: Possible PIC construction at 0x02f8f8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fc0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fc68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fdb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f90068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f901a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f9063c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8fdb8) */
/* WARNING: Removing unreachable block (ram,0x02f8fdbc) */
/* WARNING: Removing unreachable block (ram,0x02f8fdc8) */
/* WARNING: Removing unreachable block (ram,0x02f8fe48) */
/* WARNING: Removing unreachable block (ram,0x02f8fdd8) */
/* WARNING: Removing unreachable block (ram,0x02f8fde8) */
/* WARNING: Removing unreachable block (ram,0x02f8fc10) */
/* WARNING: Removing unreachable block (ram,0x02f8fc6c) */
/* WARNING: Removing unreachable block (ram,0x02f8fc14) */
/* WARNING: Removing unreachable block (ram,0x02f8fc28) */
/* WARNING: Removing unreachable block (ram,0x02f8fc30) */
/* WARNING: Removing unreachable block (ram,0x02f8fc38) */
/* WARNING: Removing unreachable block (ram,0x02f8fc44) */
/* WARNING: Removing unreachable block (ram,0x02f8fc50) */
/* WARNING: Removing unreachable block (ram,0x02f8f8a4) */
/* WARNING: Removing unreachable block (ram,0x02f8fa0c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa24) */
/* WARNING: Removing unreachable block (ram,0x02f8fa3c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa44) */
/* WARNING: Removing unreachable block (ram,0x02f8fa5c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa64) */
/* WARNING: Removing unreachable block (ram,0x02f8fa74) */
/* WARNING: Removing unreachable block (ram,0x02f8fa80) */
/* WARNING: Removing unreachable block (ram,0x02f8fa8c) */
/* WARNING: Removing unreachable block (ram,0x02f8f8ac) */
/* WARNING: Removing unreachable block (ram,0x02f8f8c4) */
/* WARNING: Removing unreachable block (ram,0x02f8f8cc) */
/* WARNING: Removing unreachable block (ram,0x02f8f8dc) */
/* WARNING: Removing unreachable block (ram,0x02f8f8e8) */
/* WARNING: Removing unreachable block (ram,0x02f8f8f4) */
/* WARNING: Removing unreachable block (ram,0x02f8f934) */
/* WARNING: Removing unreachable block (ram,0x02f8f93c) */
/* WARNING: Removing unreachable block (ram,0x02f8f944) */
/* WARNING: Removing unreachable block (ram,0x02f8f958) */
/* WARNING: Removing unreachable block (ram,0x02f8f95c) */
/* WARNING: Removing unreachable block (ram,0x02f8fb00) */
/* WARNING: Removing unreachable block (ram,0x02f8f974) */
/* WARNING: Removing unreachable block (ram,0x02f8f980) */
/* WARNING: Removing unreachable block (ram,0x02f8f99c) */
/* WARNING: Removing unreachable block (ram,0x02f8f9a4) */
/* WARNING: Removing unreachable block (ram,0x02f8f9b4) */
/* WARNING: Removing unreachable block (ram,0x02f8f9c0) */
/* WARNING: Removing unreachable block (ram,0x02f8f9cc) */
/* WARNING: Removing unreachable block (ram,0x02f8fa00) */
/* WARNING: Removing unreachable block (ram,0x02f9006c) */
/* WARNING: Removing unreachable block (ram,0x02f901c4) */
/* WARNING: Removing unreachable block (ram,0x02f90070) */
/* WARNING: Removing unreachable block (ram,0x02f90078) */
/* WARNING: Removing unreachable block (ram,0x02f9007c) */
/* WARNING: Removing unreachable block (ram,0x02f90198) */
/* WARNING: Removing unreachable block (ram,0x02f90080) */
/* WARNING: Removing unreachable block (ram,0x02f90094) */
/* WARNING: Removing unreachable block (ram,0x02f9009c) */
/* WARNING: Removing unreachable block (ram,0x02f900a4) */
/* WARNING: Removing unreachable block (ram,0x02f900b0) */
/* WARNING: Removing unreachable block (ram,0x02f900b8) */
/* WARNING: Removing unreachable block (ram,0x02f900c0) */
/* WARNING: Removing unreachable block (ram,0x02f900cc) */
/* WARNING: Removing unreachable block (ram,0x02f90110) */
/* WARNING: Removing unreachable block (ram,0x02f901a4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Core_UI2_UITweener__add_OnTweensPlanned
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 long *param_5)

{
  ushort uVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  long *plVar9;
  long lVar10;
  int iVar8;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *extraout_x1;
  undefined8 extraout_x1_00;
  uint extraout_w8;
  long lVar19;
  long lVar20;
  long extraout_x9;
  ulong uVar21;
  int *piVar22;
  uint uVar23;
  long *plVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined8 uVar27;
  uint uVar28;
  code *pcVar29;
  long **pplVar30;
  segment_command *unaff_x24;
  long lVar31;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar32;
  undefined *puVar33;
  float fVar34;
  ulong extraout_d0;
  undefined8 uVar35;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  undefined1 auStack_2a0 [4];
  int iStack_29c;
  long *plStack_298;
  long *plStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  segment_command *psStack_250;
  long *plStack_248;
  ulong uStack_240;
  long *plStack_238;
  long *plStack_230;
  long *plStack_228;
  undefined8 *******pppppppuStack_220;
  undefined *puStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 ******ppppppuStack_1b0;
  undefined *puStack_1a8;
  long lStack_168;
  undefined8 *****pppppuStack_110;
  undefined *puStack_108;
  undefined8 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003ebc697 & 1) == 0) {
    func_0x00f78a20(0x3d25420);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc697 = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar14 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x28);
  while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(plVar14,param_1,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*Core.UI2.TweenAnimPlannedCallback_TypeInfo*/ lRam0000000003d25420))) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    plVar11 = (long *)func_0x00ff0f44(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x28,plVar11,plVar14);
    bVar6 = plVar14 == plVar11;
    plVar14 = plVar11;
    if (bVar6) {
      return plVar11;
    }
  }
  uVar12 = func_0x00f78e5c(plVar11);
  puStack_48 = &Core_UI2_UITweener__remove_OnTweensPlanned;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003ebc698 & 1) == 0) {
    func_0x00f78a20(0x3d25420);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc698 = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar14 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x28);
  while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(plVar14,uVar12,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*Core.UI2.TweenAnimPlannedCallback_TypeInfo*/ lRam0000000003d25420))) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    plVar11 = (long *)func_0x00ff0f44(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x28,plVar11,plVar14);
    bVar6 = plVar14 == plVar11;
    plVar14 = plVar11;
    if (bVar6) {
      return plVar11;
    }
  }
  uVar12 = func_0x00f78e5c(plVar11);
  puStack_88 = &Core_UI2_UITweener__add_OnTweenPhaseStarted;
  ppuStack_90 = &puStack_50;
  if ((bRam0000000003ebc699 & 1) == 0) {
    func_0x00f78a20(0x3d25450);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc699 = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar14 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x30);
  while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(plVar14,uVar12,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*Core.UI2.TweenPhaseStartedCallback_TypeInfo*/ lRam0000000003d25450))) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    plVar11 = (long *)func_0x00ff0f44(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x30,plVar11,plVar14);
    bVar6 = plVar14 == plVar11;
    plVar14 = plVar11;
    if (bVar6) {
      return plVar11;
    }
  }
  uVar12 = func_0x00f78e5c(plVar11);
  puStack_c8 = &Core_UI2_UITweener__remove_OnTweenPhaseStarted;
  pppuStack_d0 = (undefined8 ***)&ppuStack_90;
  if ((bRam0000000003ebc69a & 1) == 0) {
    func_0x00f78a20(0x3d25450);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69a = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar14 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x30);
  while( true ) {
    plVar11 = (long *)0x0;
    plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(plVar14,uVar12);
    if ((plVar13 != (long *)0x0) && (*plVar13 != /*Core.UI2.TweenPhaseStartedCallback_TypeInfo*/ lRam0000000003d25450)) break;
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    plVar11 = (long *)func_0x00ff0f44(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x30,plVar13,plVar14);
    bVar6 = plVar14 == plVar11;
    plVar14 = plVar11;
    if (bVar6) {
      return plVar11;
    }
  }
  plVar14 = (long *)func_0x00f78e5c(plVar13);
  puStack_108 = &Core_UI2_UITweener__PlanTweensForLeaves;
  lStack_168 = *(long *)PTR_03a5d648;
  pppppuStack_110 = (undefined8 *****)&pppuStack_d0;
  if ((bRam0000000003ebc69c & 1) == 0) {
    func_0x00f78a20(0x3d579d0);
    func_0x00f78a20(0x3d1cff8);
    func_0x00f78a20(0x3d1d4f8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d1f598);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69c = 1;
  }
  ppppppuStack_1b0 = &pppppuStack_110;
  if (plVar14 != (long *)0x0) {
    unaff_x27 = (long *)0x0;
    unaff_x25 = 0x3d1cff8;
    unaff_x26 = 0x3d1d4f8;
    plVar16 = (long *)0x3d579d0;
    unaff_x28 = 0x3d23990;
    do {
      lVar19 = *plVar14;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == /*System.Collections.Generic.ICollection<UITweenLeaf>_TypeInfo*/ lRam0000000003d1cff8) {
            puVar15 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
            goto code_r0x02f8f7c0;
          }
          piVar22 = piVar22 + 4;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      plVar11 = (long *)0x0;
      puVar15 = (undefined8 *)func_0x00fac1f0(plVar14);
code_r0x02f8f7c0:
      iVar8 = (*(code *)*puVar15)(plVar14,puVar15[1]);
      if (iVar8 <= (int)unaff_x27) {
        if (*(long *)PTR_03a5d648 == lStack_168) {
          return (long *)0x0;
        }
        goto code_r0x02f8fb0c;
      }
      lVar19 = *plVar14;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == /*System.Collections.Generic.IList<UITweenLeaf>_TypeInfo*/ lRam0000000003d1d4f8) {
            puVar15 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
            goto code_r0x02f8f820;
          }
          piVar22 = piVar22 + 4;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      puVar15 = (undefined8 *)func_0x00fac1f0(plVar14,/*System.Collections.Generic.IList<UITweenLeaf>_TypeInfo*/ lRam0000000003d1d4f8,0);
code_r0x02f8f820:
      plVar11 = (long *)puVar15[1];
      lVar19 = (*(code *)*puVar15)(plVar14,unaff_x27);
      plVar13 = plVar16;
      if ((lVar19 == 0) ||
         (lVar19 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar19,0), plVar13 = (long *)0x3d579d0, lVar19 == 0)) break;
      plVar11 = plRam0000000003d579d0;
      plVar13 = (long *)/*UnityEngine.GameObject$$GetComponentInParent<UITweenGroup>*/ func_0x0185d35c(lVar19,1);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar13,0);
      if (iVar8 != 0) goto code_r0x02f8f87c;
      unaff_x27 = (long *)(ulong)((int)unaff_x27 + 1);
    } while( true );
  }
  func_0x00f78af4();
  uVar12 = func_0x00f78b24();
  func_0x00f78ac0(uVar12,0);
  plVar16 = plVar13;
code_r0x02f8fb0c:
  auVar37 = ___stack_chk_fail();
  uVar26 = auVar37._8_8_;
  plVar13 = auVar37._0_8_;
  plVar4 = &lStack_210;
  plVar3 = &lStack_210;
  puStack_1a8 = &Core_UI2_UITweener__CalculateTweenDurationsAndDependencies;
  plVar14 = (long *)0x3ebc000;
  uVar21 = 0x3d25600;
  plVar9 = plVar11;
  if ((bRam0000000003ebc69d & 1) == 0) {
    func_0x00f78a20(0x3d3c520);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69d = 1;
    plVar9 = plVar11;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar11 = plVar16;
  if (*(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18) == 0) {
code_r0x02f8fc94:
    func_0x00f78af4();
  }
  else {
    plVar14 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18),
                                      uRam0000000003d3c520);
    if (auVar37._8_4_ < 1) {
      return plVar14;
    }
    plVar14 = (long *)0x0;
    plVar11 = &lStack_208;
    uVar26 = uVar26 & 0xffffffff;
    unaff_x24 = &segment_command_00000020;
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar19 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar19 == 0) goto code_r0x02f8fc94;
    if (*(int *)(lVar19 + 0x18) != 0) {
      lStack_208 = *(long *)(lVar19 + 0x28);
      lStack_210 = *(long *)(lVar19 + 0x20);
      auVar37._8_8_ = plVar13;
      auVar37._0_8_ = lStack_210;
      uStack_1f8 = *(undefined8 *)(lVar19 + 0x38);
      uStack_200 = *(undefined8 *)(lVar19 + 0x30);
      uStack_1f0 = *(undefined8 *)(lVar19 + 0x40);
      puVar33 = &UNK_02f8fc10;
      plVar16 = plVar11;
      goto code_r0x02f90330;
    }
  }
  uVar12 = func_0x00f78b24();
  plVar16 = (long *)func_0x00f78ac0(uVar12,0);
  puVar5 = auStack_2a0;
  plStack_248 = (long *)0x3d25600;
  puStack_218 = &Core_UI2_UITweener__PlayTweenAnimOnLeaves;
  pppppppuVar32 = &pppppppuStack_220;
  uVar21 = extraout_d0 & 0xffffffff;
  plVar24 = (long *)0x3ebc000;
  plVar17 = plVar16;
  plStack_268 = unaff_x27;
  uStack_260 = unaff_x26;
  uStack_258 = unaff_x25;
  psStack_250 = unaff_x24;
  uStack_240 = uVar26;
  plStack_238 = plVar11;
  plStack_230 = plVar14;
  plStack_228 = plVar13;
  pppppppuStack_220 = &ppppppuStack_1b0;
  if ((bRam0000000003ebc69f & 1) == 0) {
    func_0x00f78a20(0x3d51498);
    plVar17 = (long *)func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69f = 1;
  }
  iVar8 = (int)plVar9;
  if (iVar8 == 0) {
    if (param_5 == (long *)0x0) {
      return plVar17;
    }
    uVar12 = 0;
    plStack_268 = param_5;
    lVar19 = param_5[0xd];
    if (lVar19 == 0) {
      pplVar30 = &plStack_268;
      lVar31 = 1;
    }
    else {
      lVar31 = *(long *)(lVar19 + 0x18);
      if (lVar31 == 0) {
        return param_5;
      }
      pplVar30 = (long **)(lVar19 + 0x20);
    }
    lVar19 = 0;
    do {
      plVar11 = pplVar30[lVar19];
      pcVar29 = (code *)plVar11[2];
      plVar14 = (long *)plVar11[4];
      lVar20 = plVar11[5];
      if (*(short *)(lVar20 + 0x48) == -1) {
        func_0x00f78ad8(lVar20,uVar12);
      }
      iVar8 = func_0x00f78a4c(lVar20);
      if (iVar8 == 0) {
        if ((((plVar14 == (long *)0x0) || (*(short *)(lVar20 + 0x48) == -1)) ||
            ((*(byte *)(*plVar14 + 0x115) & 1) != 0)) || (param_5[3] == 0)) goto code_r0x016bb980;
        iVar8 = func_0x00f78a44(lVar20);
        iVar7 = func_0x00f78ec0(lVar20);
        if (iVar8 == 0) {
          uVar1 = *(ushort *)(lVar20 + 0x48);
          if (iVar7 == 0) {
            lVar20 = *plVar14 + (ulong)uVar1 * 0x10;
            auVar37 = (**(code **)(lVar20 + 0x138))(plVar14,*(undefined8 *)(lVar20 + 0x140));
            goto code_r0x016bb98c;
          }
          lVar20 = func_0x00f78a48(lVar20);
          lVar10 = *plVar14;
          uVar21 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == lVar20) {
                puVar15 = (undefined8 *)
                          (lVar10 + (long)(int)(*piVar22 + (uint)uVar1) * 0x10 + 0x138);
                goto code_r0x016bba50;
              }
              piVar22 = piVar22 + 4;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
          puVar15 = (undefined8 *)func_0x00fac1f0(plVar14,lVar20,(ulong)uVar1);
code_r0x016bba50:
          pcVar29 = (code *)*puVar15;
          puVar15 = (undefined8 *)puVar15[1];
        }
        else {
          if (iVar7 == 0) {
            uVar12 = *(undefined8 *)(*plVar14 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar10 = *plVar14;
            uVar21 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar21 != 0) {
              piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)(lVar20 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar20 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x016bba28;
                }
                piVar22 = piVar22 + 4;
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
            }
            lVar10 = func_0x00fac1f0(plVar14);
code_r0x016bba28:
            uVar12 = *(undefined8 *)(lVar10 + 8);
          }
          puVar15 = (undefined8 *)func_0x00f78acc(uVar12,lVar20);
          pcVar29 = (code *)*puVar15;
        }
        auVar37 = (*pcVar29)(plVar14,puVar15);
      }
      else if (*(char *)(lVar20 + 0x4a) == '\0') {
        auVar37 = (*pcVar29)(lVar20);
      }
      else {
code_r0x016bb980:
        auVar37 = (*pcVar29)(plVar14,lVar20);
      }
code_r0x016bb98c:
      uVar12 = auVar37._8_8_;
      lVar19 = lVar19 + 1;
      if (lVar19 == lVar31) {
        return auVar37._0_8_;
      }
    } while( true );
  }
  if (extraout_x1 != (long *)0x0) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] != 0) {
      if (*(int *)(*(long *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18) < (int)extraout_x1[3]) {
        return /*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600;
      }
      if (iVar8 < 1) {
        if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
          func_0x00f78ad0();
        }
        /*System.Array$$Sort<float, UITweenLeaf>*/ func_0x01804f30(*(undefined8 *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17],extraout_x1,0,plVar9,
                        uRam0000000003d51498);
        if ((float)extraout_d0 < 0.0) {
          if (plVar16 == (long *)0x0) goto code_r0x02f8ff9c;
          uVar21 = (ulong)*(uint *)(plVar16 + 3);
        }
        uVar23 = iVar8 - 1;
        plVar9 = (long *)(ulong)uVar23;
        if (iVar8 < 1) {
          if (plVar16 != (long *)0x0) goto code_r0x02f8fef8;
        }
        else if (plVar16 != (long *)0x0) {
          plVar24 = (long *)0x0;
          unaff_x24 = (segment_command *)(extraout_x1 + 4);
          do {
            if (*(uint *)(extraout_x1 + 3) <= (uint)plVar24) goto code_r0x02f8ff90;
            if (*(long *)(unaff_x24->segname + (long)plVar24 * 8 + -8) == 0) goto code_r0x02f8ff9c;
            Core_UI2_UITweenLeaf__PerformTweenAnimation
                      ((float)uVar21 + *(float *)((long)plVar16 + 0x44) * (float)(int)(uint)plVar24,
                       *(long *)(unaff_x24->segname + (long)plVar24 * 8 + -8),plVar16,param_4);
            plVar24 = (long *)((long)plVar24 + 1);
          } while (iVar8 != (int)plVar24);
code_r0x02f8fef8:
          fVar34 = (float)Core_UI2_UITweenAnimation__GetParam(_UNK_033f82c4,plVar16,0);
          if (*(uint *)(extraout_x1 + 3) <= uVar23) goto code_r0x02f8ff90;
          if (extraout_x1[(long)(int)uVar23 + 4] != 0) {
            fVar36 = *(float *)((long)plVar16 + 0x44);
            uVar12 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(extraout_x1[(long)(int)uVar23 + 4],0);
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
            }
            uVar21 = (ulong)(uint)((float)uVar21 + fVar34 + fVar36 * (float)(int)uVar23);
            plVar24 = plStack_228;
            plVar16 = plStack_230;
            plVar14 = plStack_238;
            param_4 = uStack_240;
            plVar9 = plStack_248;
            unaff_x24 = psStack_250;
            pppppppuVar32 = pppppppuStack_220;
            puVar33 = puStack_218;
            goto code_r0x02f8ffa0;
          }
        }
        goto code_r0x02f8ff9c;
      }
      iStack_29c = iVar8;
      plStack_298 = param_5;
      if ((extraout_x1[3] & 0xffffffffU) == 0) {
code_r0x02f8ff90:
        uVar12 = func_0x00f78b24();
        func_0x00f78ac0(uVar12,0);
        goto code_r0x02f8ff9c;
      }
      plVar24 = extraout_x1 + 4;
      unaff_x24 = (segment_command *)*plVar24;
      if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
         ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
        func_0x00f78ad0();
      }
      if (plVar16 == (long *)0x0) goto code_r0x02f8ff9c;
      auVar38._8_4_ = (int)plVar16[8];
      auVar38._0_8_ = unaff_x24;
      puVar33 = &UNK_02f8fdb8;
      goto code_r0x02f906e0;
    }
  }
code_r0x02f8ff9c:
  unaff_d8 = uVar21;
  uVar21 = func_0x00f78af4();
  plVar3 = (long *)auStack_2a0;
  uVar12 = extraout_x1_00;
  plVar14 = extraout_x1;
  puVar33 = &Core_UI2_UITweener__TryCreateOnCompleteVirtualTween;
code_r0x02f8ffa0:
  *(undefined8 *)((long)plVar3 + -0x50) = unaff_d9;
  *(ulong *)((long)plVar3 + -0x48) = unaff_d8;
  *(segment_command **)((long)plVar3 + -0x40) = unaff_x24;
  *(long **)((long)plVar3 + -0x38) = plVar9;
  *(ulong *)((long)plVar3 + -0x30) = param_4;
  *(long **)((long)plVar3 + -0x28) = plVar14;
  *(long **)((long)plVar3 + -0x20) = plVar16;
  *(long **)((long)plVar3 + -0x18) = plVar24;
  *(undefined8 ********)((long)plVar3 + -0x10) = pppppppuVar32;
  *(undefined **)((long)plVar3 + -8) = puVar33;
  if ((bRam0000000003ebc6a0 & 1) == 0) {
    func_0x00f78a20(uVar21,0x3d40f08,uVar12);
    func_0x00f78a20(0x3d1ea28);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6b0);
    func_0x00f78a20(0x3d5e700);
    func_0x00f78a20(0x3d5e868);
    func_0x00f78a20(0x3d64820);
    func_0x00f78a20(0x3d64828);
    func_0x00f78a20(0x3d294a0);
    func_0x00f78a20(0x3d29498);
    bRam0000000003ebc6a0 = 1;
  }
  plVar14 = (long *)func_0x00f78aec(/*Core.UI2.UITweener.<>c__DisplayClass20_0_TypeInfo*/ uRam0000000003d294a0);
  return plVar14;
code_r0x02f905e0:
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar14 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18);
  plVar11 = (long *)func_0x00f78aec(/*Core.UI2.TweenDependencyIndexPair_TypeInfo*/ uRam0000000003d25430);
  Core_UI2_TweenDependencyIndexPair___ctor(plVar11,plVar24,plVar16);
  if (plVar14 == (long *)0x0) goto code_r0x02f906d0;
  puVar33 = &UNK_02f90640;
  puVar2 = (undefined1 *)((long)plVar4 + -0xd0);
  plVar3 = plVar14;
  plVar13 = plVar11;
code_r0x02427110:
  *(long **)(puVar2 + -0x20) = plVar16;
  *(long **)(puVar2 + -0x18) = plVar24;
  *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar32;
  *(undefined **)(puVar2 + -8) = puVar33;
  lVar19 = plVar14[2];
  puVar15 = puRam0000000003d3c518;
  if (lVar19 == 0) {
code_r0x0242716c:
    plVar11 = plVar16;
    plVar14 = plVar24;
    plVar9 = (long *)func_0x00f78af4();
    lVar19 = extraout_x9;
    uVar23 = extraout_w8;
code_r0x02427170:
    *(uint *)(plVar14 + 3) = uVar23 + 1;
  }
  else {
    uVar23 = *(uint *)(plVar14 + 3);
    plVar9 = plVar14;
    if (uVar23 != *(uint *)(lVar19 + 0x18)) goto code_r0x02427170;
    puVar15 = *(undefined8 **)(*(long *)(puRam0000000003d3c518[3] + 0xc0) + 0x60);
    plVar9 = (long *)(*(code *)*puVar15)(plVar14,uVar23 + 1);
    lVar19 = plVar14[2];
    uVar23 = *(uint *)(plVar14 + 3);
    *(uint *)(plVar14 + 3) = uVar23 + 1;
    plVar24 = plVar14;
    plVar16 = plVar11;
    if (lVar19 == 0) goto code_r0x0242716c;
  }
  if (uVar23 < *(uint *)(lVar19 + 0x18)) {
    *(long **)(lVar19 + (long)(int)uVar23 * 8 + 0x20) = plVar11;
    *(int *)((long)plVar14 + 0x1c) = *(int *)((long)plVar14 + 0x1c) + 1;
    return plVar9;
  }
  uVar25 = func_0x00f78b24();
  auVar37 = func_0x00f78ac0(uVar25,0);
  lVar20 = auVar37._8_8_;
  lVar19 = auVar37._0_8_;
  *(long *)(puVar2 + -0x60) = lVar31;
  *(undefined8 *)(puVar2 + -0x58) = uVar12;
  *(long **)(puVar2 + -0x50) = plVar13;
  *(long **)(puVar2 + -0x48) = plVar3;
  *(long **)(puVar2 + -0x40) = plVar11;
  *(long **)(puVar2 + -0x38) = plVar14;
  *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x28) =
       &System_Collections_Generic_List_object___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar15[3] + 0xc0) + 0x48))(lVar20,0x14);
  if (lVar19 != 0) {
    pcVar29 = (code *)**(undefined8 **)(*(long *)(puVar15[3] + 0xc0) + 0x28);
    lVar31 = *(long *)(*(long *)(puVar15[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar31 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar31);
    }
    if (lVar20 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = func_0x00f78adc(lVar20,lVar31);
      if (lVar10 == 0) {
        func_0x00f78e5c(lVar20,lVar31);
        goto code_r0x0242734c;
      }
    }
    (*pcVar29)(lVar19,lVar10,*(undefined8 *)(*(long *)(puVar15[3] + 0xc0) + 0x28));
    iVar8 = (*(code *)**(undefined8 **)(*(long *)(puVar15[3] + 0xc0) + 0x68))(lVar19);
    return (long *)(ulong)(iVar8 - 1);
  }
  func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
  pcVar29 = (code *)SoftwareBreakpoint(1,0x2427350);
  (*pcVar29)();
code_r0x02f8f87c:
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)&stack0xfffffffffffffe20;
  puStack_1a8 = &UNK_02f8f8a4;
  if ((bRam0000000003ebc6a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc6a2 = 1;
  }
  plVar14 = (long *)0x0;
  uVar26 = 0x3d25600;
  uVar21 = 0x3d23990;
  unaff_x24 = &segment_command_00000020;
  while( true ) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar19 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar19 == 0) break;
    if ((long)*(int *)(lVar19 + 0x18) <= (long)plVar14) {
      return (long *)0xffffffff;
    }
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
      lVar19 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
      if (lVar19 == 0) break;
    }
    if ((long *)(ulong)*(uint *)(lVar19 + 0x18) <= plVar14) goto code_r0x02f90324;
    iVar8 = Core_UI2_PlannedTweenData__get_IsValid(unaff_x24->segname + lVar19 + -8);
    if (iVar8 == 0) {
      return (long *)0xffffffff;
    }
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar19 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar19 == 0) break;
    if ((long *)(ulong)*(uint *)(lVar19 + 0x18) <= plVar14) goto code_r0x02f90324;
    plVar16 = *(long **)(unaff_x24->segname + lVar19 + -8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar11 = (long *)0x0;
    uVar18 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar16,plVar13);
    if ((uVar18 & 1) != 0) {
      return plVar14;
    }
    plVar14 = (long *)((long)plVar14 + 1);
    unaff_x24 = (segment_command *)&unaff_x24->fileoff;
  }
  func_0x00f78af4();
code_r0x02f90324:
  uVar12 = func_0x00f78b24();
  puVar33 = &Core_UI2_UITweener__TryResolveTweenAnim;
  auVar37 = func_0x00f78ac0(uVar12,0);
code_r0x02f90330:
  plVar3 = auVar37._8_8_;
  puVar2 = (undefined1 *)((long)plVar4 + -0x40);
  *(segment_command **)((long)plVar4 + -0x40) = unaff_x24;
  *(ulong *)((long)plVar4 + -0x38) = uVar21;
  *(ulong *)((long)plVar4 + -0x30) = uVar26;
  *(long **)((long)plVar4 + -0x28) = plVar16;
  *(long **)((long)plVar4 + -0x20) = plVar14;
  *(long **)((long)plVar4 + -0x18) = plVar13;
  *(undefined8 ********)((long)plVar4 + -0x10) = &ppppppuStack_1b0;
  *(undefined **)((long)plVar4 + -8) = puVar33;
  if ((auVar37._0_8_ != 0) && (uVar26 = *(ulong *)(auVar37._0_8_ + 0x18), uVar26 != 0)) {
    uVar23 = *(uint *)(uVar26 + 0x18);
    plVar16 = (long *)(ulong)(0 < (int)uVar23);
    if (0 < (int)uVar23) {
      uVar21 = 0;
      do {
        uVar28 = (uint)uVar21;
        plVar13 = plVar11;
        if (uVar23 <= uVar28) goto code_r0x02f903d8;
        unaff_x24 = *(segment_command **)(uVar26 + (long)(int)uVar28 * 8 + 0x20);
        plVar14 = plVar3;
        if ((unaff_x24 == (segment_command *)0x0) || (*(long *)(unaff_x24->segname + 8) == 0))
        goto code_r0x02f903d4;
        iVar8 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(unaff_x24->segname + 8),plVar3,3,0);
        if (iVar8 != 0) goto code_r0x02f903b8;
        uVar28 = uVar28 + 1;
        uVar21 = (ulong)uVar28;
        uVar23 = *(uint *)(uVar26 + 0x18);
        plVar16 = (long *)(ulong)((int)uVar28 < (int)uVar23);
      } while ((int)uVar28 < (int)uVar23);
    }
    unaff_x24 = (segment_command *)0x0;
code_r0x02f903b8:
    *plVar11 = (long)unaff_x24;
    return plVar16;
  }
code_r0x02f903d4:
  plVar3 = plVar14;
  func_0x00f78af4();
code_r0x02f903d8:
  uVar12 = func_0x00f78b24();
  plVar24 = (long *)func_0x00f78ac0(uVar12,0);
  puVar5 = (undefined1 *)((long)plVar4 + -0xd0);
  *(undefined8 *)((long)plVar4 + -0xa0) = unaff_x28;
  *(long **)((long)plVar4 + -0x98) = unaff_x27;
  *(undefined8 *)((long)plVar4 + -0x90) = unaff_x26;
  *(undefined8 *)((long)plVar4 + -0x88) = unaff_x25;
  *(segment_command **)((long)plVar4 + -0x80) = unaff_x24;
  *(ulong *)((long)plVar4 + -0x78) = uVar21;
  *(ulong *)((long)plVar4 + -0x70) = uVar26;
  *(long **)((long)plVar4 + -0x68) = plVar16;
  *(long **)((long)plVar4 + -0x60) = plVar3;
  *(long **)((long)plVar4 + -0x58) = plVar13;
  *(undefined1 **)((long)plVar4 + -0x50) = (undefined1 *)((long)plVar4 + -0x10);
  *(undefined **)((long)plVar4 + -0x48) = &Core_UI2_UITweener__DiscoverDependencies;
  pppppppuVar32 = (undefined8 *******)((long)plVar4 + -0x50);
  plVar16 = (long *)0x3ebc000;
  uVar12 = 0x3d25600;
  if ((bRam0000000003ebc69e & 1) == 0) {
    func_0x00f78a20(0x3d3c518);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25430);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69e = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  lVar19 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
  if (lVar19 == 0) {
code_r0x02f906d0:
    func_0x00f78af4();
  }
  else {
    uVar23 = (uint)plVar24;
    if (uVar23 < *(uint *)(lVar19 + 0x18)) {
      lVar31 = (long)(int)uVar23;
      lVar19 = *(long *)(lVar19 + lVar31 * 0x28 + 0x28);
      if (lVar19 != 0) {
        uVar25 = *(undefined8 *)(lVar19 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar25,0);
        if (iVar8 != 0) {
          plVar16 = (long *)0x0;
          lVar19 = 0x20;
          do {
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
            }
            lVar20 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
            if (lVar20 == 0) goto code_r0x02f906d0;
            if ((long)*(int *)(lVar20 + 0x18) <= (long)plVar16) {
              return /*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600;
            }
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
              lVar20 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
              if (lVar20 == 0) goto code_r0x02f906d0;
            }
            if ((long *)(ulong)*(uint *)(lVar20 + 0x18) <= plVar16) goto code_r0x02f906d4;
            puVar15 = (undefined8 *)(lVar20 + lVar19);
            uVar25 = *puVar15;
            uVar35 = puVar15[3];
            uVar27 = puVar15[2];
            *(undefined8 *)((long)plVar4 + -200) = puVar15[1];
            *(undefined8 *)((long)plVar4 + -0xd0) = uVar25;
            *(undefined8 *)((long)plVar4 + -0xb8) = uVar35;
            *(undefined8 *)((long)plVar4 + -0xc0) = uVar27;
            *(undefined8 *)((long)plVar4 + -0xb0) = puVar15[4];
            plVar14 = (long *)Core_UI2_PlannedTweenData__get_IsValid
                                        ((undefined1 *)((long)plVar4 + -0xd0));
            if ((int)plVar14 == 0) {
              return plVar14;
            }
            if ((long *)((ulong)plVar24 & 0xffffffff) != plVar16) {
              uVar25 = *(undefined8 *)((long)plVar4 + -0xd0);
              if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
                 ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
                func_0x00f78ad0();
              }
              lVar20 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
              if (lVar20 == 0) goto code_r0x02f906d0;
              if (*(uint *)(lVar20 + 0x18) <= uVar23) goto code_r0x02f906d4;
              lVar20 = *(long *)(lVar20 + lVar31 * 0x28 + 0x28);
              if (lVar20 == 0) goto code_r0x02f906d0;
              uVar27 = *(undefined8 *)(lVar20 + 0x20);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar21 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar25,uVar27,0);
              if ((uVar21 & 1) == 0) goto code_r0x02f905e0;
            }
            plVar16 = (long *)((long)plVar16 + 1);
            lVar19 = lVar19 + 0x28;
          } while( true );
        }
        if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
          func_0x00f78ad0();
        }
        plVar14 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18);
        plVar11 = (long *)Core_UI2_TweenDependencyIndexPair__CreateEmpty(plVar24);
        plVar16 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          pppppppuVar32 = *(undefined8 ********)((long)plVar4 + -0x50);
          puVar33 = *(undefined **)((long)plVar4 + -0x48);
          plVar16 = *(long **)((long)plVar4 + -0x60);
          plVar24 = *(long **)((long)plVar4 + -0x58);
          plVar13 = *(long **)((long)plVar4 + -0x70);
          plVar3 = *(long **)((long)plVar4 + -0x68);
          lVar31 = *(long *)((long)plVar4 + -0x80);
          uVar12 = *(undefined8 *)((long)plVar4 + -0x78);
          goto code_r0x02427110;
        }
      }
      goto code_r0x02f906d0;
    }
  }
code_r0x02f906d4:
  uVar12 = func_0x00f78b24();
  puVar33 = &Core_UI2_UITweener__CalculateOrderRankingForLeaf;
  auVar38 = func_0x00f78ac0(uVar12,0);
code_r0x02f906e0:
  lVar19 = auVar38._0_8_;
  *(long **)(puVar5 + -0x20) = plVar16;
  *(long **)(puVar5 + -0x18) = plVar24;
  *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar32;
  *(undefined **)(puVar5 + -8) = puVar33;
  if ((lVar19 != 0) && (lVar31 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar19,0), lVar31 != 0)) {
    plVar14 = (long *)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar31,0);
    switch(auVar38._8_4_) {
    case 1:
      lVar19 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar19,0);
      if (lVar19 != 0) {
        plVar14 = (long *)/*UnityEngine.Transform$$GetSiblingIndex*/ func_0x03277144(lVar19,0);
        return plVar14;
      }
      goto code_r0x02f9078c;
    case 3:
      break;
    case 4:
      break;
    case 6:
    case 9:
      break;
    case 7:
      break;
    case 8:
    }
    return plVar14;
  }
code_r0x02f9078c:
  plVar14 = (long *)func_0x00f78af4();
  return plVar14;
}



// ============================================================
// RVA: 0x2f8f3d0 | Core.UI2.UITweener.remove_OnTweensPlanned
// ============================================================

/* WARNING: Possible PIC construction at 0x02f8f8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fc0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fc68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fdb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f90068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f901a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f9063c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8fdb8) */
/* WARNING: Removing unreachable block (ram,0x02f8fdbc) */
/* WARNING: Removing unreachable block (ram,0x02f8fdc8) */
/* WARNING: Removing unreachable block (ram,0x02f8fe48) */
/* WARNING: Removing unreachable block (ram,0x02f8fdd8) */
/* WARNING: Removing unreachable block (ram,0x02f8fde8) */
/* WARNING: Removing unreachable block (ram,0x02f8fc10) */
/* WARNING: Removing unreachable block (ram,0x02f8fc6c) */
/* WARNING: Removing unreachable block (ram,0x02f8fc14) */
/* WARNING: Removing unreachable block (ram,0x02f8fc28) */
/* WARNING: Removing unreachable block (ram,0x02f8fc30) */
/* WARNING: Removing unreachable block (ram,0x02f8fc38) */
/* WARNING: Removing unreachable block (ram,0x02f8fc44) */
/* WARNING: Removing unreachable block (ram,0x02f8fc50) */
/* WARNING: Removing unreachable block (ram,0x02f8f8a4) */
/* WARNING: Removing unreachable block (ram,0x02f8fa0c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa24) */
/* WARNING: Removing unreachable block (ram,0x02f8fa3c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa44) */
/* WARNING: Removing unreachable block (ram,0x02f8fa5c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa64) */
/* WARNING: Removing unreachable block (ram,0x02f8fa74) */
/* WARNING: Removing unreachable block (ram,0x02f8fa80) */
/* WARNING: Removing unreachable block (ram,0x02f8fa8c) */
/* WARNING: Removing unreachable block (ram,0x02f8f8ac) */
/* WARNING: Removing unreachable block (ram,0x02f8f8c4) */
/* WARNING: Removing unreachable block (ram,0x02f8f8cc) */
/* WARNING: Removing unreachable block (ram,0x02f8f8dc) */
/* WARNING: Removing unreachable block (ram,0x02f8f8e8) */
/* WARNING: Removing unreachable block (ram,0x02f8f8f4) */
/* WARNING: Removing unreachable block (ram,0x02f8f934) */
/* WARNING: Removing unreachable block (ram,0x02f8f93c) */
/* WARNING: Removing unreachable block (ram,0x02f8f944) */
/* WARNING: Removing unreachable block (ram,0x02f8f958) */
/* WARNING: Removing unreachable block (ram,0x02f8f95c) */
/* WARNING: Removing unreachable block (ram,0x02f8fb00) */
/* WARNING: Removing unreachable block (ram,0x02f8f974) */
/* WARNING: Removing unreachable block (ram,0x02f8f980) */
/* WARNING: Removing unreachable block (ram,0x02f8f99c) */
/* WARNING: Removing unreachable block (ram,0x02f8f9a4) */
/* WARNING: Removing unreachable block (ram,0x02f8f9b4) */
/* WARNING: Removing unreachable block (ram,0x02f8f9c0) */
/* WARNING: Removing unreachable block (ram,0x02f8f9cc) */
/* WARNING: Removing unreachable block (ram,0x02f8fa00) */
/* WARNING: Removing unreachable block (ram,0x02f9006c) */
/* WARNING: Removing unreachable block (ram,0x02f901c4) */
/* WARNING: Removing unreachable block (ram,0x02f90070) */
/* WARNING: Removing unreachable block (ram,0x02f90078) */
/* WARNING: Removing unreachable block (ram,0x02f9007c) */
/* WARNING: Removing unreachable block (ram,0x02f90198) */
/* WARNING: Removing unreachable block (ram,0x02f90080) */
/* WARNING: Removing unreachable block (ram,0x02f90094) */
/* WARNING: Removing unreachable block (ram,0x02f9009c) */
/* WARNING: Removing unreachable block (ram,0x02f900a4) */
/* WARNING: Removing unreachable block (ram,0x02f900b0) */
/* WARNING: Removing unreachable block (ram,0x02f900b8) */
/* WARNING: Removing unreachable block (ram,0x02f900c0) */
/* WARNING: Removing unreachable block (ram,0x02f900cc) */
/* WARNING: Removing unreachable block (ram,0x02f90110) */
/* WARNING: Removing unreachable block (ram,0x02f901a4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Core_UI2_UITweener__remove_OnTweensPlanned
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 long *param_5)

{
  ushort uVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  long *plVar9;
  long lVar10;
  int iVar8;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *extraout_x1;
  undefined8 extraout_x1_00;
  uint extraout_w8;
  long lVar19;
  long lVar20;
  long extraout_x9;
  ulong uVar21;
  int *piVar22;
  uint uVar23;
  long *plVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined8 uVar27;
  uint uVar28;
  code *pcVar29;
  long **pplVar30;
  segment_command *unaff_x24;
  long lVar31;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar32;
  undefined *puVar33;
  float fVar34;
  ulong extraout_d0;
  undefined8 uVar35;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  undefined1 auStack_260 [4];
  int iStack_25c;
  long *plStack_258;
  long *plStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  segment_command *psStack_210;
  long *plStack_208;
  ulong uStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 ******ppppppuStack_170;
  undefined *puStack_168;
  long lStack_128;
  undefined8 *****pppppuStack_d0;
  undefined *puStack_c8;
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003ebc698 & 1) == 0) {
    func_0x00f78a20(0x3d25420);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc698 = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar14 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x28);
  while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(plVar14,param_1,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*Core.UI2.TweenAnimPlannedCallback_TypeInfo*/ lRam0000000003d25420))) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    plVar11 = (long *)func_0x00ff0f44(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x28,plVar11,plVar14);
    bVar6 = plVar14 == plVar11;
    plVar14 = plVar11;
    if (bVar6) {
      return plVar11;
    }
  }
  uVar12 = func_0x00f78e5c(plVar11);
  puStack_48 = &Core_UI2_UITweener__add_OnTweenPhaseStarted;
  puStack_50 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003ebc699 & 1) == 0) {
    func_0x00f78a20(0x3d25450);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc699 = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar14 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x30);
  while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(plVar14,uVar12,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*Core.UI2.TweenPhaseStartedCallback_TypeInfo*/ lRam0000000003d25450))) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    plVar11 = (long *)func_0x00ff0f44(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x30,plVar11,plVar14);
    bVar6 = plVar14 == plVar11;
    plVar14 = plVar11;
    if (bVar6) {
      return plVar11;
    }
  }
  uVar12 = func_0x00f78e5c(plVar11);
  puStack_88 = &Core_UI2_UITweener__remove_OnTweenPhaseStarted;
  pppuStack_90 = (undefined8 ***)&puStack_50;
  if ((bRam0000000003ebc69a & 1) == 0) {
    func_0x00f78a20(0x3d25450);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69a = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar14 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x30);
  while( true ) {
    plVar11 = (long *)0x0;
    plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(plVar14,uVar12);
    if ((plVar13 != (long *)0x0) && (*plVar13 != /*Core.UI2.TweenPhaseStartedCallback_TypeInfo*/ lRam0000000003d25450)) break;
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    plVar11 = (long *)func_0x00ff0f44(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x30,plVar13,plVar14);
    bVar6 = plVar14 == plVar11;
    plVar14 = plVar11;
    if (bVar6) {
      return plVar11;
    }
  }
  plVar14 = (long *)func_0x00f78e5c(plVar13);
  puStack_c8 = &Core_UI2_UITweener__PlanTweensForLeaves;
  lStack_128 = *(long *)PTR_03a5d648;
  pppppuStack_d0 = (undefined8 *****)&pppuStack_90;
  if ((bRam0000000003ebc69c & 1) == 0) {
    func_0x00f78a20(0x3d579d0);
    func_0x00f78a20(0x3d1cff8);
    func_0x00f78a20(0x3d1d4f8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d1f598);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69c = 1;
  }
  ppppppuStack_170 = &pppppuStack_d0;
  if (plVar14 != (long *)0x0) {
    unaff_x27 = (long *)0x0;
    unaff_x25 = 0x3d1cff8;
    unaff_x26 = 0x3d1d4f8;
    plVar16 = (long *)0x3d579d0;
    unaff_x28 = 0x3d23990;
    do {
      lVar19 = *plVar14;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == /*System.Collections.Generic.ICollection<UITweenLeaf>_TypeInfo*/ lRam0000000003d1cff8) {
            puVar15 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
            goto code_r0x02f8f7c0;
          }
          piVar22 = piVar22 + 4;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      plVar11 = (long *)0x0;
      puVar15 = (undefined8 *)func_0x00fac1f0(plVar14);
code_r0x02f8f7c0:
      iVar8 = (*(code *)*puVar15)(plVar14,puVar15[1]);
      if (iVar8 <= (int)unaff_x27) {
        if (*(long *)PTR_03a5d648 == lStack_128) {
          return (long *)0x0;
        }
        goto code_r0x02f8fb0c;
      }
      lVar19 = *plVar14;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == /*System.Collections.Generic.IList<UITweenLeaf>_TypeInfo*/ lRam0000000003d1d4f8) {
            puVar15 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
            goto code_r0x02f8f820;
          }
          piVar22 = piVar22 + 4;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      puVar15 = (undefined8 *)func_0x00fac1f0(plVar14,/*System.Collections.Generic.IList<UITweenLeaf>_TypeInfo*/ lRam0000000003d1d4f8,0);
code_r0x02f8f820:
      plVar11 = (long *)puVar15[1];
      lVar19 = (*(code *)*puVar15)(plVar14,unaff_x27);
      plVar13 = plVar16;
      if ((lVar19 == 0) ||
         (lVar19 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar19,0), plVar13 = (long *)0x3d579d0, lVar19 == 0)) break;
      plVar11 = plRam0000000003d579d0;
      plVar13 = (long *)/*UnityEngine.GameObject$$GetComponentInParent<UITweenGroup>*/ func_0x0185d35c(lVar19,1);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar13,0);
      if (iVar8 != 0) goto code_r0x02f8f87c;
      unaff_x27 = (long *)(ulong)((int)unaff_x27 + 1);
    } while( true );
  }
  func_0x00f78af4();
  uVar12 = func_0x00f78b24();
  func_0x00f78ac0(uVar12,0);
  plVar16 = plVar13;
code_r0x02f8fb0c:
  auVar37 = ___stack_chk_fail();
  uVar26 = auVar37._8_8_;
  plVar13 = auVar37._0_8_;
  plVar4 = &lStack_1d0;
  plVar3 = &lStack_1d0;
  puStack_168 = &Core_UI2_UITweener__CalculateTweenDurationsAndDependencies;
  plVar14 = (long *)0x3ebc000;
  uVar21 = 0x3d25600;
  plVar9 = plVar11;
  if ((bRam0000000003ebc69d & 1) == 0) {
    func_0x00f78a20(0x3d3c520);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69d = 1;
    plVar9 = plVar11;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar11 = plVar16;
  if (*(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18) == 0) {
code_r0x02f8fc94:
    func_0x00f78af4();
  }
  else {
    plVar14 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18),
                                      uRam0000000003d3c520);
    if (auVar37._8_4_ < 1) {
      return plVar14;
    }
    plVar14 = (long *)0x0;
    plVar11 = &lStack_1c8;
    uVar26 = uVar26 & 0xffffffff;
    unaff_x24 = &segment_command_00000020;
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar19 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar19 == 0) goto code_r0x02f8fc94;
    if (*(int *)(lVar19 + 0x18) != 0) {
      lStack_1c8 = *(long *)(lVar19 + 0x28);
      lStack_1d0 = *(long *)(lVar19 + 0x20);
      auVar37._8_8_ = plVar13;
      auVar37._0_8_ = lStack_1d0;
      uStack_1b8 = *(undefined8 *)(lVar19 + 0x38);
      uStack_1c0 = *(undefined8 *)(lVar19 + 0x30);
      uStack_1b0 = *(undefined8 *)(lVar19 + 0x40);
      puVar33 = &UNK_02f8fc10;
      plVar16 = plVar11;
      goto code_r0x02f90330;
    }
  }
  uVar12 = func_0x00f78b24();
  plVar16 = (long *)func_0x00f78ac0(uVar12,0);
  puVar5 = auStack_260;
  plStack_208 = (long *)0x3d25600;
  puStack_1d8 = &Core_UI2_UITweener__PlayTweenAnimOnLeaves;
  pppppppuVar32 = &pppppppuStack_1e0;
  uVar21 = extraout_d0 & 0xffffffff;
  plVar24 = (long *)0x3ebc000;
  plVar17 = plVar16;
  plStack_228 = unaff_x27;
  uStack_220 = unaff_x26;
  uStack_218 = unaff_x25;
  psStack_210 = unaff_x24;
  uStack_200 = uVar26;
  plStack_1f8 = plVar11;
  plStack_1f0 = plVar14;
  plStack_1e8 = plVar13;
  pppppppuStack_1e0 = &ppppppuStack_170;
  if ((bRam0000000003ebc69f & 1) == 0) {
    func_0x00f78a20(0x3d51498);
    plVar17 = (long *)func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69f = 1;
  }
  iVar8 = (int)plVar9;
  if (iVar8 == 0) {
    if (param_5 == (long *)0x0) {
      return plVar17;
    }
    uVar12 = 0;
    plStack_228 = param_5;
    lVar19 = param_5[0xd];
    if (lVar19 == 0) {
      pplVar30 = &plStack_228;
      lVar31 = 1;
    }
    else {
      lVar31 = *(long *)(lVar19 + 0x18);
      if (lVar31 == 0) {
        return param_5;
      }
      pplVar30 = (long **)(lVar19 + 0x20);
    }
    lVar19 = 0;
    do {
      plVar11 = pplVar30[lVar19];
      pcVar29 = (code *)plVar11[2];
      plVar14 = (long *)plVar11[4];
      lVar20 = plVar11[5];
      if (*(short *)(lVar20 + 0x48) == -1) {
        func_0x00f78ad8(lVar20,uVar12);
      }
      iVar8 = func_0x00f78a4c(lVar20);
      if (iVar8 == 0) {
        if ((((plVar14 == (long *)0x0) || (*(short *)(lVar20 + 0x48) == -1)) ||
            ((*(byte *)(*plVar14 + 0x115) & 1) != 0)) || (param_5[3] == 0)) goto code_r0x016bb980;
        iVar8 = func_0x00f78a44(lVar20);
        iVar7 = func_0x00f78ec0(lVar20);
        if (iVar8 == 0) {
          uVar1 = *(ushort *)(lVar20 + 0x48);
          if (iVar7 == 0) {
            lVar20 = *plVar14 + (ulong)uVar1 * 0x10;
            auVar37 = (**(code **)(lVar20 + 0x138))(plVar14,*(undefined8 *)(lVar20 + 0x140));
            goto code_r0x016bb98c;
          }
          lVar20 = func_0x00f78a48(lVar20);
          lVar10 = *plVar14;
          uVar21 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == lVar20) {
                puVar15 = (undefined8 *)
                          (lVar10 + (long)(int)(*piVar22 + (uint)uVar1) * 0x10 + 0x138);
                goto code_r0x016bba50;
              }
              piVar22 = piVar22 + 4;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
          puVar15 = (undefined8 *)func_0x00fac1f0(plVar14,lVar20,(ulong)uVar1);
code_r0x016bba50:
          pcVar29 = (code *)*puVar15;
          puVar15 = (undefined8 *)puVar15[1];
        }
        else {
          if (iVar7 == 0) {
            uVar12 = *(undefined8 *)(*plVar14 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar10 = *plVar14;
            uVar21 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar21 != 0) {
              piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)(lVar20 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar20 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x016bba28;
                }
                piVar22 = piVar22 + 4;
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
            }
            lVar10 = func_0x00fac1f0(plVar14);
code_r0x016bba28:
            uVar12 = *(undefined8 *)(lVar10 + 8);
          }
          puVar15 = (undefined8 *)func_0x00f78acc(uVar12,lVar20);
          pcVar29 = (code *)*puVar15;
        }
        auVar37 = (*pcVar29)(plVar14,puVar15);
      }
      else if (*(char *)(lVar20 + 0x4a) == '\0') {
        auVar37 = (*pcVar29)(lVar20);
      }
      else {
code_r0x016bb980:
        auVar37 = (*pcVar29)(plVar14,lVar20);
      }
code_r0x016bb98c:
      uVar12 = auVar37._8_8_;
      lVar19 = lVar19 + 1;
      if (lVar19 == lVar31) {
        return auVar37._0_8_;
      }
    } while( true );
  }
  if (extraout_x1 != (long *)0x0) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] != 0) {
      if (*(int *)(*(long *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18) < (int)extraout_x1[3]) {
        return /*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600;
      }
      if (iVar8 < 1) {
        if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
          func_0x00f78ad0();
        }
        /*System.Array$$Sort<float, UITweenLeaf>*/ func_0x01804f30(*(undefined8 *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17],extraout_x1,0,plVar9,
                        uRam0000000003d51498);
        if ((float)extraout_d0 < 0.0) {
          if (plVar16 == (long *)0x0) goto code_r0x02f8ff9c;
          uVar21 = (ulong)*(uint *)(plVar16 + 3);
        }
        uVar23 = iVar8 - 1;
        plVar9 = (long *)(ulong)uVar23;
        if (iVar8 < 1) {
          if (plVar16 != (long *)0x0) goto code_r0x02f8fef8;
        }
        else if (plVar16 != (long *)0x0) {
          plVar24 = (long *)0x0;
          unaff_x24 = (segment_command *)(extraout_x1 + 4);
          do {
            if (*(uint *)(extraout_x1 + 3) <= (uint)plVar24) goto code_r0x02f8ff90;
            if (*(long *)(unaff_x24->segname + (long)plVar24 * 8 + -8) == 0) goto code_r0x02f8ff9c;
            Core_UI2_UITweenLeaf__PerformTweenAnimation
                      ((float)uVar21 + *(float *)((long)plVar16 + 0x44) * (float)(int)(uint)plVar24,
                       *(long *)(unaff_x24->segname + (long)plVar24 * 8 + -8),plVar16,param_4);
            plVar24 = (long *)((long)plVar24 + 1);
          } while (iVar8 != (int)plVar24);
code_r0x02f8fef8:
          fVar34 = (float)Core_UI2_UITweenAnimation__GetParam(_UNK_033f82c4,plVar16,0);
          if (*(uint *)(extraout_x1 + 3) <= uVar23) goto code_r0x02f8ff90;
          if (extraout_x1[(long)(int)uVar23 + 4] != 0) {
            fVar36 = *(float *)((long)plVar16 + 0x44);
            uVar12 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(extraout_x1[(long)(int)uVar23 + 4],0);
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
            }
            uVar21 = (ulong)(uint)((float)uVar21 + fVar34 + fVar36 * (float)(int)uVar23);
            plVar24 = plStack_1e8;
            plVar16 = plStack_1f0;
            plVar14 = plStack_1f8;
            param_4 = uStack_200;
            plVar9 = plStack_208;
            unaff_x24 = psStack_210;
            pppppppuVar32 = pppppppuStack_1e0;
            puVar33 = puStack_1d8;
            goto code_r0x02f8ffa0;
          }
        }
        goto code_r0x02f8ff9c;
      }
      iStack_25c = iVar8;
      plStack_258 = param_5;
      if ((extraout_x1[3] & 0xffffffffU) == 0) {
code_r0x02f8ff90:
        uVar12 = func_0x00f78b24();
        func_0x00f78ac0(uVar12,0);
        goto code_r0x02f8ff9c;
      }
      plVar24 = extraout_x1 + 4;
      unaff_x24 = (segment_command *)*plVar24;
      if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
         ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
        func_0x00f78ad0();
      }
      if (plVar16 == (long *)0x0) goto code_r0x02f8ff9c;
      auVar38._8_4_ = (int)plVar16[8];
      auVar38._0_8_ = unaff_x24;
      puVar33 = &UNK_02f8fdb8;
      goto code_r0x02f906e0;
    }
  }
code_r0x02f8ff9c:
  unaff_d8 = uVar21;
  uVar21 = func_0x00f78af4();
  plVar3 = (long *)auStack_260;
  uVar12 = extraout_x1_00;
  plVar14 = extraout_x1;
  puVar33 = &Core_UI2_UITweener__TryCreateOnCompleteVirtualTween;
code_r0x02f8ffa0:
  *(undefined8 *)((long)plVar3 + -0x50) = unaff_d9;
  *(ulong *)((long)plVar3 + -0x48) = unaff_d8;
  *(segment_command **)((long)plVar3 + -0x40) = unaff_x24;
  *(long **)((long)plVar3 + -0x38) = plVar9;
  *(ulong *)((long)plVar3 + -0x30) = param_4;
  *(long **)((long)plVar3 + -0x28) = plVar14;
  *(long **)((long)plVar3 + -0x20) = plVar16;
  *(long **)((long)plVar3 + -0x18) = plVar24;
  *(undefined8 ********)((long)plVar3 + -0x10) = pppppppuVar32;
  *(undefined **)((long)plVar3 + -8) = puVar33;
  if ((bRam0000000003ebc6a0 & 1) == 0) {
    func_0x00f78a20(uVar21,0x3d40f08,uVar12);
    func_0x00f78a20(0x3d1ea28);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6b0);
    func_0x00f78a20(0x3d5e700);
    func_0x00f78a20(0x3d5e868);
    func_0x00f78a20(0x3d64820);
    func_0x00f78a20(0x3d64828);
    func_0x00f78a20(0x3d294a0);
    func_0x00f78a20(0x3d29498);
    bRam0000000003ebc6a0 = 1;
  }
  plVar14 = (long *)func_0x00f78aec(/*Core.UI2.UITweener.<>c__DisplayClass20_0_TypeInfo*/ uRam0000000003d294a0);
  return plVar14;
code_r0x02f905e0:
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar14 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18);
  plVar11 = (long *)func_0x00f78aec(/*Core.UI2.TweenDependencyIndexPair_TypeInfo*/ uRam0000000003d25430);
  Core_UI2_TweenDependencyIndexPair___ctor(plVar11,plVar24,plVar16);
  if (plVar14 == (long *)0x0) goto code_r0x02f906d0;
  puVar33 = &UNK_02f90640;
  puVar2 = (undefined1 *)((long)plVar4 + -0xd0);
  plVar3 = plVar14;
  plVar13 = plVar11;
code_r0x02427110:
  *(long **)(puVar2 + -0x20) = plVar16;
  *(long **)(puVar2 + -0x18) = plVar24;
  *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar32;
  *(undefined **)(puVar2 + -8) = puVar33;
  lVar19 = plVar14[2];
  puVar15 = puRam0000000003d3c518;
  if (lVar19 == 0) {
code_r0x0242716c:
    plVar11 = plVar16;
    plVar14 = plVar24;
    plVar9 = (long *)func_0x00f78af4();
    lVar19 = extraout_x9;
    uVar23 = extraout_w8;
code_r0x02427170:
    *(uint *)(plVar14 + 3) = uVar23 + 1;
  }
  else {
    uVar23 = *(uint *)(plVar14 + 3);
    plVar9 = plVar14;
    if (uVar23 != *(uint *)(lVar19 + 0x18)) goto code_r0x02427170;
    puVar15 = *(undefined8 **)(*(long *)(puRam0000000003d3c518[3] + 0xc0) + 0x60);
    plVar9 = (long *)(*(code *)*puVar15)(plVar14,uVar23 + 1);
    lVar19 = plVar14[2];
    uVar23 = *(uint *)(plVar14 + 3);
    *(uint *)(plVar14 + 3) = uVar23 + 1;
    plVar24 = plVar14;
    plVar16 = plVar11;
    if (lVar19 == 0) goto code_r0x0242716c;
  }
  if (uVar23 < *(uint *)(lVar19 + 0x18)) {
    *(long **)(lVar19 + (long)(int)uVar23 * 8 + 0x20) = plVar11;
    *(int *)((long)plVar14 + 0x1c) = *(int *)((long)plVar14 + 0x1c) + 1;
    return plVar9;
  }
  uVar25 = func_0x00f78b24();
  auVar37 = func_0x00f78ac0(uVar25,0);
  lVar20 = auVar37._8_8_;
  lVar19 = auVar37._0_8_;
  *(long *)(puVar2 + -0x60) = lVar31;
  *(undefined8 *)(puVar2 + -0x58) = uVar12;
  *(long **)(puVar2 + -0x50) = plVar13;
  *(long **)(puVar2 + -0x48) = plVar3;
  *(long **)(puVar2 + -0x40) = plVar11;
  *(long **)(puVar2 + -0x38) = plVar14;
  *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x28) =
       &System_Collections_Generic_List_object___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar15[3] + 0xc0) + 0x48))(lVar20,0x14);
  if (lVar19 != 0) {
    pcVar29 = (code *)**(undefined8 **)(*(long *)(puVar15[3] + 0xc0) + 0x28);
    lVar31 = *(long *)(*(long *)(puVar15[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar31 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar31);
    }
    if (lVar20 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = func_0x00f78adc(lVar20,lVar31);
      if (lVar10 == 0) {
        func_0x00f78e5c(lVar20,lVar31);
        goto code_r0x0242734c;
      }
    }
    (*pcVar29)(lVar19,lVar10,*(undefined8 *)(*(long *)(puVar15[3] + 0xc0) + 0x28));
    iVar8 = (*(code *)**(undefined8 **)(*(long *)(puVar15[3] + 0xc0) + 0x68))(lVar19);
    return (long *)(ulong)(iVar8 - 1);
  }
  func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
  pcVar29 = (code *)SoftwareBreakpoint(1,0x2427350);
  (*pcVar29)();
code_r0x02f8f87c:
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)&stack0xfffffffffffffe60;
  puStack_168 = &UNK_02f8f8a4;
  if ((bRam0000000003ebc6a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc6a2 = 1;
  }
  plVar14 = (long *)0x0;
  uVar26 = 0x3d25600;
  uVar21 = 0x3d23990;
  unaff_x24 = &segment_command_00000020;
  while( true ) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar19 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar19 == 0) break;
    if ((long)*(int *)(lVar19 + 0x18) <= (long)plVar14) {
      return (long *)0xffffffff;
    }
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
      lVar19 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
      if (lVar19 == 0) break;
    }
    if ((long *)(ulong)*(uint *)(lVar19 + 0x18) <= plVar14) goto code_r0x02f90324;
    iVar8 = Core_UI2_PlannedTweenData__get_IsValid(unaff_x24->segname + lVar19 + -8);
    if (iVar8 == 0) {
      return (long *)0xffffffff;
    }
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar19 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar19 == 0) break;
    if ((long *)(ulong)*(uint *)(lVar19 + 0x18) <= plVar14) goto code_r0x02f90324;
    plVar16 = *(long **)(unaff_x24->segname + lVar19 + -8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar11 = (long *)0x0;
    uVar18 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar16,plVar13);
    if ((uVar18 & 1) != 0) {
      return plVar14;
    }
    plVar14 = (long *)((long)plVar14 + 1);
    unaff_x24 = (segment_command *)&unaff_x24->fileoff;
  }
  func_0x00f78af4();
code_r0x02f90324:
  uVar12 = func_0x00f78b24();
  puVar33 = &Core_UI2_UITweener__TryResolveTweenAnim;
  auVar37 = func_0x00f78ac0(uVar12,0);
code_r0x02f90330:
  plVar3 = auVar37._8_8_;
  puVar2 = (undefined1 *)((long)plVar4 + -0x40);
  *(segment_command **)((long)plVar4 + -0x40) = unaff_x24;
  *(ulong *)((long)plVar4 + -0x38) = uVar21;
  *(ulong *)((long)plVar4 + -0x30) = uVar26;
  *(long **)((long)plVar4 + -0x28) = plVar16;
  *(long **)((long)plVar4 + -0x20) = plVar14;
  *(long **)((long)plVar4 + -0x18) = plVar13;
  *(undefined8 ********)((long)plVar4 + -0x10) = &ppppppuStack_170;
  *(undefined **)((long)plVar4 + -8) = puVar33;
  if ((auVar37._0_8_ != 0) && (uVar26 = *(ulong *)(auVar37._0_8_ + 0x18), uVar26 != 0)) {
    uVar23 = *(uint *)(uVar26 + 0x18);
    plVar16 = (long *)(ulong)(0 < (int)uVar23);
    if (0 < (int)uVar23) {
      uVar21 = 0;
      do {
        uVar28 = (uint)uVar21;
        plVar13 = plVar11;
        if (uVar23 <= uVar28) goto code_r0x02f903d8;
        unaff_x24 = *(segment_command **)(uVar26 + (long)(int)uVar28 * 8 + 0x20);
        plVar14 = plVar3;
        if ((unaff_x24 == (segment_command *)0x0) || (*(long *)(unaff_x24->segname + 8) == 0))
        goto code_r0x02f903d4;
        iVar8 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(unaff_x24->segname + 8),plVar3,3,0);
        if (iVar8 != 0) goto code_r0x02f903b8;
        uVar28 = uVar28 + 1;
        uVar21 = (ulong)uVar28;
        uVar23 = *(uint *)(uVar26 + 0x18);
        plVar16 = (long *)(ulong)((int)uVar28 < (int)uVar23);
      } while ((int)uVar28 < (int)uVar23);
    }
    unaff_x24 = (segment_command *)0x0;
code_r0x02f903b8:
    *plVar11 = (long)unaff_x24;
    return plVar16;
  }
code_r0x02f903d4:
  plVar3 = plVar14;
  func_0x00f78af4();
code_r0x02f903d8:
  uVar12 = func_0x00f78b24();
  plVar24 = (long *)func_0x00f78ac0(uVar12,0);
  puVar5 = (undefined1 *)((long)plVar4 + -0xd0);
  *(undefined8 *)((long)plVar4 + -0xa0) = unaff_x28;
  *(long **)((long)plVar4 + -0x98) = unaff_x27;
  *(undefined8 *)((long)plVar4 + -0x90) = unaff_x26;
  *(undefined8 *)((long)plVar4 + -0x88) = unaff_x25;
  *(segment_command **)((long)plVar4 + -0x80) = unaff_x24;
  *(ulong *)((long)plVar4 + -0x78) = uVar21;
  *(ulong *)((long)plVar4 + -0x70) = uVar26;
  *(long **)((long)plVar4 + -0x68) = plVar16;
  *(long **)((long)plVar4 + -0x60) = plVar3;
  *(long **)((long)plVar4 + -0x58) = plVar13;
  *(undefined1 **)((long)plVar4 + -0x50) = (undefined1 *)((long)plVar4 + -0x10);
  *(undefined **)((long)plVar4 + -0x48) = &Core_UI2_UITweener__DiscoverDependencies;
  pppppppuVar32 = (undefined8 *******)((long)plVar4 + -0x50);
  plVar16 = (long *)0x3ebc000;
  uVar12 = 0x3d25600;
  if ((bRam0000000003ebc69e & 1) == 0) {
    func_0x00f78a20(0x3d3c518);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25430);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69e = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  lVar19 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
  if (lVar19 == 0) {
code_r0x02f906d0:
    func_0x00f78af4();
  }
  else {
    uVar23 = (uint)plVar24;
    if (uVar23 < *(uint *)(lVar19 + 0x18)) {
      lVar31 = (long)(int)uVar23;
      lVar19 = *(long *)(lVar19 + lVar31 * 0x28 + 0x28);
      if (lVar19 != 0) {
        uVar25 = *(undefined8 *)(lVar19 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar25,0);
        if (iVar8 != 0) {
          plVar16 = (long *)0x0;
          lVar19 = 0x20;
          do {
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
            }
            lVar20 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
            if (lVar20 == 0) goto code_r0x02f906d0;
            if ((long)*(int *)(lVar20 + 0x18) <= (long)plVar16) {
              return /*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600;
            }
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
              lVar20 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
              if (lVar20 == 0) goto code_r0x02f906d0;
            }
            if ((long *)(ulong)*(uint *)(lVar20 + 0x18) <= plVar16) goto code_r0x02f906d4;
            puVar15 = (undefined8 *)(lVar20 + lVar19);
            uVar25 = *puVar15;
            uVar35 = puVar15[3];
            uVar27 = puVar15[2];
            *(undefined8 *)((long)plVar4 + -200) = puVar15[1];
            *(undefined8 *)((long)plVar4 + -0xd0) = uVar25;
            *(undefined8 *)((long)plVar4 + -0xb8) = uVar35;
            *(undefined8 *)((long)plVar4 + -0xc0) = uVar27;
            *(undefined8 *)((long)plVar4 + -0xb0) = puVar15[4];
            plVar14 = (long *)Core_UI2_PlannedTweenData__get_IsValid
                                        ((undefined1 *)((long)plVar4 + -0xd0));
            if ((int)plVar14 == 0) {
              return plVar14;
            }
            if ((long *)((ulong)plVar24 & 0xffffffff) != plVar16) {
              uVar25 = *(undefined8 *)((long)plVar4 + -0xd0);
              if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
                 ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
                func_0x00f78ad0();
              }
              lVar20 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
              if (lVar20 == 0) goto code_r0x02f906d0;
              if (*(uint *)(lVar20 + 0x18) <= uVar23) goto code_r0x02f906d4;
              lVar20 = *(long *)(lVar20 + lVar31 * 0x28 + 0x28);
              if (lVar20 == 0) goto code_r0x02f906d0;
              uVar27 = *(undefined8 *)(lVar20 + 0x20);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar21 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar25,uVar27,0);
              if ((uVar21 & 1) == 0) goto code_r0x02f905e0;
            }
            plVar16 = (long *)((long)plVar16 + 1);
            lVar19 = lVar19 + 0x28;
          } while( true );
        }
        if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
          func_0x00f78ad0();
        }
        plVar14 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18);
        plVar11 = (long *)Core_UI2_TweenDependencyIndexPair__CreateEmpty(plVar24);
        plVar16 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          pppppppuVar32 = *(undefined8 ********)((long)plVar4 + -0x50);
          puVar33 = *(undefined **)((long)plVar4 + -0x48);
          plVar16 = *(long **)((long)plVar4 + -0x60);
          plVar24 = *(long **)((long)plVar4 + -0x58);
          plVar13 = *(long **)((long)plVar4 + -0x70);
          plVar3 = *(long **)((long)plVar4 + -0x68);
          lVar31 = *(long *)((long)plVar4 + -0x80);
          uVar12 = *(undefined8 *)((long)plVar4 + -0x78);
          goto code_r0x02427110;
        }
      }
      goto code_r0x02f906d0;
    }
  }
code_r0x02f906d4:
  uVar12 = func_0x00f78b24();
  puVar33 = &Core_UI2_UITweener__CalculateOrderRankingForLeaf;
  auVar38 = func_0x00f78ac0(uVar12,0);
code_r0x02f906e0:
  lVar19 = auVar38._0_8_;
  *(long **)(puVar5 + -0x20) = plVar16;
  *(long **)(puVar5 + -0x18) = plVar24;
  *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar32;
  *(undefined **)(puVar5 + -8) = puVar33;
  if ((lVar19 != 0) && (lVar31 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar19,0), lVar31 != 0)) {
    plVar14 = (long *)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar31,0);
    switch(auVar38._8_4_) {
    case 1:
      lVar19 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar19,0);
      if (lVar19 != 0) {
        plVar14 = (long *)/*UnityEngine.Transform$$GetSiblingIndex*/ func_0x03277144(lVar19,0);
        return plVar14;
      }
      goto code_r0x02f9078c;
    case 3:
      break;
    case 4:
      break;
    case 6:
    case 9:
      break;
    case 7:
      break;
    case 8:
    }
    return plVar14;
  }
code_r0x02f9078c:
  plVar14 = (long *)func_0x00f78af4();
  return plVar14;
}



// ============================================================
// RVA: 0x2f8f4c8 | Core.UI2.UITweener.add_OnTweenPhaseStarted
// ============================================================

/* WARNING: Possible PIC construction at 0x02f8f8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fc0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fc68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fdb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f90068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f901a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f9063c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8fdb8) */
/* WARNING: Removing unreachable block (ram,0x02f8fdbc) */
/* WARNING: Removing unreachable block (ram,0x02f8fdc8) */
/* WARNING: Removing unreachable block (ram,0x02f8fe48) */
/* WARNING: Removing unreachable block (ram,0x02f8fdd8) */
/* WARNING: Removing unreachable block (ram,0x02f8fde8) */
/* WARNING: Removing unreachable block (ram,0x02f8fc10) */
/* WARNING: Removing unreachable block (ram,0x02f8fc6c) */
/* WARNING: Removing unreachable block (ram,0x02f8fc14) */
/* WARNING: Removing unreachable block (ram,0x02f8fc28) */
/* WARNING: Removing unreachable block (ram,0x02f8fc30) */
/* WARNING: Removing unreachable block (ram,0x02f8fc38) */
/* WARNING: Removing unreachable block (ram,0x02f8fc44) */
/* WARNING: Removing unreachable block (ram,0x02f8fc50) */
/* WARNING: Removing unreachable block (ram,0x02f8f8a4) */
/* WARNING: Removing unreachable block (ram,0x02f8fa0c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa24) */
/* WARNING: Removing unreachable block (ram,0x02f8fa3c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa44) */
/* WARNING: Removing unreachable block (ram,0x02f8fa5c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa64) */
/* WARNING: Removing unreachable block (ram,0x02f8fa74) */
/* WARNING: Removing unreachable block (ram,0x02f8fa80) */
/* WARNING: Removing unreachable block (ram,0x02f8fa8c) */
/* WARNING: Removing unreachable block (ram,0x02f8f8ac) */
/* WARNING: Removing unreachable block (ram,0x02f8f8c4) */
/* WARNING: Removing unreachable block (ram,0x02f8f8cc) */
/* WARNING: Removing unreachable block (ram,0x02f8f8dc) */
/* WARNING: Removing unreachable block (ram,0x02f8f8e8) */
/* WARNING: Removing unreachable block (ram,0x02f8f8f4) */
/* WARNING: Removing unreachable block (ram,0x02f8f934) */
/* WARNING: Removing unreachable block (ram,0x02f8f93c) */
/* WARNING: Removing unreachable block (ram,0x02f8f944) */
/* WARNING: Removing unreachable block (ram,0x02f8f958) */
/* WARNING: Removing unreachable block (ram,0x02f8f95c) */
/* WARNING: Removing unreachable block (ram,0x02f8fb00) */
/* WARNING: Removing unreachable block (ram,0x02f8f974) */
/* WARNING: Removing unreachable block (ram,0x02f8f980) */
/* WARNING: Removing unreachable block (ram,0x02f8f99c) */
/* WARNING: Removing unreachable block (ram,0x02f8f9a4) */
/* WARNING: Removing unreachable block (ram,0x02f8f9b4) */
/* WARNING: Removing unreachable block (ram,0x02f8f9c0) */
/* WARNING: Removing unreachable block (ram,0x02f8f9cc) */
/* WARNING: Removing unreachable block (ram,0x02f8fa00) */
/* WARNING: Removing unreachable block (ram,0x02f9006c) */
/* WARNING: Removing unreachable block (ram,0x02f901c4) */
/* WARNING: Removing unreachable block (ram,0x02f90070) */
/* WARNING: Removing unreachable block (ram,0x02f90078) */
/* WARNING: Removing unreachable block (ram,0x02f9007c) */
/* WARNING: Removing unreachable block (ram,0x02f90198) */
/* WARNING: Removing unreachable block (ram,0x02f90080) */
/* WARNING: Removing unreachable block (ram,0x02f90094) */
/* WARNING: Removing unreachable block (ram,0x02f9009c) */
/* WARNING: Removing unreachable block (ram,0x02f900a4) */
/* WARNING: Removing unreachable block (ram,0x02f900b0) */
/* WARNING: Removing unreachable block (ram,0x02f900b8) */
/* WARNING: Removing unreachable block (ram,0x02f900c0) */
/* WARNING: Removing unreachable block (ram,0x02f900cc) */
/* WARNING: Removing unreachable block (ram,0x02f90110) */
/* WARNING: Removing unreachable block (ram,0x02f901a4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Core_UI2_UITweener__add_OnTweenPhaseStarted
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 long *param_5)

{
  ushort uVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  long *plVar9;
  long lVar10;
  int iVar8;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *extraout_x1;
  undefined8 extraout_x1_00;
  uint extraout_w8;
  long lVar19;
  long lVar20;
  long extraout_x9;
  ulong uVar21;
  int *piVar22;
  uint uVar23;
  long *plVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined8 uVar27;
  uint uVar28;
  code *pcVar29;
  long **pplVar30;
  segment_command *unaff_x24;
  long lVar31;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar32;
  undefined *puVar33;
  float fVar34;
  ulong extraout_d0;
  undefined8 uVar35;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  undefined1 auStack_220 [4];
  int iStack_21c;
  long *plStack_218;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  segment_command *psStack_1d0;
  long *plStack_1c8;
  ulong uStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 ******ppppppuStack_130;
  undefined *puStack_128;
  long lStack_e8;
  undefined8 *****pppppuStack_90;
  undefined *puStack_88;
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003ebc699 & 1) == 0) {
    func_0x00f78a20(0x3d25450);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc699 = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar14 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x30);
  while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(plVar14,param_1,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*Core.UI2.TweenPhaseStartedCallback_TypeInfo*/ lRam0000000003d25450))) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    plVar11 = (long *)func_0x00ff0f44(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x30,plVar11,plVar14);
    bVar6 = plVar14 == plVar11;
    plVar14 = plVar11;
    if (bVar6) {
      return plVar11;
    }
  }
  uVar12 = func_0x00f78e5c(plVar11);
  puStack_48 = &Core_UI2_UITweener__remove_OnTweenPhaseStarted;
  pppuStack_50 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003ebc69a & 1) == 0) {
    func_0x00f78a20(0x3d25450);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69a = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar14 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x30);
  while( true ) {
    plVar11 = (long *)0x0;
    plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(plVar14,uVar12);
    if ((plVar13 != (long *)0x0) && (*plVar13 != /*Core.UI2.TweenPhaseStartedCallback_TypeInfo*/ lRam0000000003d25450)) break;
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    plVar11 = (long *)func_0x00ff0f44(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x30,plVar13,plVar14);
    bVar6 = plVar14 == plVar11;
    plVar14 = plVar11;
    if (bVar6) {
      return plVar11;
    }
  }
  plVar14 = (long *)func_0x00f78e5c(plVar13);
  puStack_88 = &Core_UI2_UITweener__PlanTweensForLeaves;
  lStack_e8 = *(long *)PTR_03a5d648;
  pppppuStack_90 = (undefined8 *****)&pppuStack_50;
  if ((bRam0000000003ebc69c & 1) == 0) {
    func_0x00f78a20(0x3d579d0);
    func_0x00f78a20(0x3d1cff8);
    func_0x00f78a20(0x3d1d4f8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d1f598);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69c = 1;
  }
  ppppppuStack_130 = &pppppuStack_90;
  if (plVar14 != (long *)0x0) {
    unaff_x27 = (long *)0x0;
    unaff_x25 = 0x3d1cff8;
    unaff_x26 = 0x3d1d4f8;
    plVar16 = (long *)0x3d579d0;
    unaff_x28 = 0x3d23990;
    do {
      lVar19 = *plVar14;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == /*System.Collections.Generic.ICollection<UITweenLeaf>_TypeInfo*/ lRam0000000003d1cff8) {
            puVar15 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
            goto code_r0x02f8f7c0;
          }
          piVar22 = piVar22 + 4;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      plVar11 = (long *)0x0;
      puVar15 = (undefined8 *)func_0x00fac1f0(plVar14);
code_r0x02f8f7c0:
      iVar8 = (*(code *)*puVar15)(plVar14,puVar15[1]);
      if (iVar8 <= (int)unaff_x27) {
        if (*(long *)PTR_03a5d648 == lStack_e8) {
          return (long *)0x0;
        }
        goto code_r0x02f8fb0c;
      }
      lVar19 = *plVar14;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == /*System.Collections.Generic.IList<UITweenLeaf>_TypeInfo*/ lRam0000000003d1d4f8) {
            puVar15 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
            goto code_r0x02f8f820;
          }
          piVar22 = piVar22 + 4;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      puVar15 = (undefined8 *)func_0x00fac1f0(plVar14,/*System.Collections.Generic.IList<UITweenLeaf>_TypeInfo*/ lRam0000000003d1d4f8,0);
code_r0x02f8f820:
      plVar11 = (long *)puVar15[1];
      lVar19 = (*(code *)*puVar15)(plVar14,unaff_x27);
      plVar13 = plVar16;
      if ((lVar19 == 0) ||
         (lVar19 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar19,0), plVar13 = (long *)0x3d579d0, lVar19 == 0)) break;
      plVar11 = plRam0000000003d579d0;
      plVar13 = (long *)/*UnityEngine.GameObject$$GetComponentInParent<UITweenGroup>*/ func_0x0185d35c(lVar19,1);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar13,0);
      if (iVar8 != 0) goto code_r0x02f8f87c;
      unaff_x27 = (long *)(ulong)((int)unaff_x27 + 1);
    } while( true );
  }
  func_0x00f78af4();
  uVar12 = func_0x00f78b24();
  func_0x00f78ac0(uVar12,0);
  plVar16 = plVar13;
code_r0x02f8fb0c:
  auVar37 = ___stack_chk_fail();
  uVar26 = auVar37._8_8_;
  plVar13 = auVar37._0_8_;
  plVar4 = &lStack_190;
  plVar3 = &lStack_190;
  puStack_128 = &Core_UI2_UITweener__CalculateTweenDurationsAndDependencies;
  plVar14 = (long *)0x3ebc000;
  uVar21 = 0x3d25600;
  plVar9 = plVar11;
  if ((bRam0000000003ebc69d & 1) == 0) {
    func_0x00f78a20(0x3d3c520);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69d = 1;
    plVar9 = plVar11;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar11 = plVar16;
  if (*(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18) == 0) {
code_r0x02f8fc94:
    func_0x00f78af4();
  }
  else {
    plVar14 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18),
                                      uRam0000000003d3c520);
    if (auVar37._8_4_ < 1) {
      return plVar14;
    }
    plVar14 = (long *)0x0;
    plVar11 = &lStack_188;
    uVar26 = uVar26 & 0xffffffff;
    unaff_x24 = &segment_command_00000020;
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar19 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar19 == 0) goto code_r0x02f8fc94;
    if (*(int *)(lVar19 + 0x18) != 0) {
      lStack_188 = *(long *)(lVar19 + 0x28);
      lStack_190 = *(long *)(lVar19 + 0x20);
      auVar37._8_8_ = plVar13;
      auVar37._0_8_ = lStack_190;
      uStack_178 = *(undefined8 *)(lVar19 + 0x38);
      uStack_180 = *(undefined8 *)(lVar19 + 0x30);
      uStack_170 = *(undefined8 *)(lVar19 + 0x40);
      puVar33 = &UNK_02f8fc10;
      plVar16 = plVar11;
      goto code_r0x02f90330;
    }
  }
  uVar12 = func_0x00f78b24();
  plVar16 = (long *)func_0x00f78ac0(uVar12,0);
  puVar5 = auStack_220;
  plStack_1c8 = (long *)0x3d25600;
  puStack_198 = &Core_UI2_UITweener__PlayTweenAnimOnLeaves;
  pppppppuVar32 = &pppppppuStack_1a0;
  uVar21 = extraout_d0 & 0xffffffff;
  plVar24 = (long *)0x3ebc000;
  plVar17 = plVar16;
  plStack_1e8 = unaff_x27;
  uStack_1e0 = unaff_x26;
  uStack_1d8 = unaff_x25;
  psStack_1d0 = unaff_x24;
  uStack_1c0 = uVar26;
  plStack_1b8 = plVar11;
  plStack_1b0 = plVar14;
  plStack_1a8 = plVar13;
  pppppppuStack_1a0 = &ppppppuStack_130;
  if ((bRam0000000003ebc69f & 1) == 0) {
    func_0x00f78a20(0x3d51498);
    plVar17 = (long *)func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69f = 1;
  }
  iVar8 = (int)plVar9;
  if (iVar8 == 0) {
    if (param_5 == (long *)0x0) {
      return plVar17;
    }
    uVar12 = 0;
    plStack_1e8 = param_5;
    lVar19 = param_5[0xd];
    if (lVar19 == 0) {
      pplVar30 = &plStack_1e8;
      lVar31 = 1;
    }
    else {
      lVar31 = *(long *)(lVar19 + 0x18);
      if (lVar31 == 0) {
        return param_5;
      }
      pplVar30 = (long **)(lVar19 + 0x20);
    }
    lVar19 = 0;
    do {
      plVar11 = pplVar30[lVar19];
      pcVar29 = (code *)plVar11[2];
      plVar14 = (long *)plVar11[4];
      lVar20 = plVar11[5];
      if (*(short *)(lVar20 + 0x48) == -1) {
        func_0x00f78ad8(lVar20,uVar12);
      }
      iVar8 = func_0x00f78a4c(lVar20);
      if (iVar8 == 0) {
        if ((((plVar14 == (long *)0x0) || (*(short *)(lVar20 + 0x48) == -1)) ||
            ((*(byte *)(*plVar14 + 0x115) & 1) != 0)) || (param_5[3] == 0)) goto code_r0x016bb980;
        iVar8 = func_0x00f78a44(lVar20);
        iVar7 = func_0x00f78ec0(lVar20);
        if (iVar8 == 0) {
          uVar1 = *(ushort *)(lVar20 + 0x48);
          if (iVar7 == 0) {
            lVar20 = *plVar14 + (ulong)uVar1 * 0x10;
            auVar37 = (**(code **)(lVar20 + 0x138))(plVar14,*(undefined8 *)(lVar20 + 0x140));
            goto code_r0x016bb98c;
          }
          lVar20 = func_0x00f78a48(lVar20);
          lVar10 = *plVar14;
          uVar21 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == lVar20) {
                puVar15 = (undefined8 *)
                          (lVar10 + (long)(int)(*piVar22 + (uint)uVar1) * 0x10 + 0x138);
                goto code_r0x016bba50;
              }
              piVar22 = piVar22 + 4;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
          puVar15 = (undefined8 *)func_0x00fac1f0(plVar14,lVar20,(ulong)uVar1);
code_r0x016bba50:
          pcVar29 = (code *)*puVar15;
          puVar15 = (undefined8 *)puVar15[1];
        }
        else {
          if (iVar7 == 0) {
            uVar12 = *(undefined8 *)(*plVar14 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar10 = *plVar14;
            uVar21 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar21 != 0) {
              piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)(lVar20 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar20 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x016bba28;
                }
                piVar22 = piVar22 + 4;
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
            }
            lVar10 = func_0x00fac1f0(plVar14);
code_r0x016bba28:
            uVar12 = *(undefined8 *)(lVar10 + 8);
          }
          puVar15 = (undefined8 *)func_0x00f78acc(uVar12,lVar20);
          pcVar29 = (code *)*puVar15;
        }
        auVar37 = (*pcVar29)(plVar14,puVar15);
      }
      else if (*(char *)(lVar20 + 0x4a) == '\0') {
        auVar37 = (*pcVar29)(lVar20);
      }
      else {
code_r0x016bb980:
        auVar37 = (*pcVar29)(plVar14,lVar20);
      }
code_r0x016bb98c:
      uVar12 = auVar37._8_8_;
      lVar19 = lVar19 + 1;
      if (lVar19 == lVar31) {
        return auVar37._0_8_;
      }
    } while( true );
  }
  if (extraout_x1 != (long *)0x0) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] != 0) {
      if (*(int *)(*(long *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18) < (int)extraout_x1[3]) {
        return /*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600;
      }
      if (iVar8 < 1) {
        if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
          func_0x00f78ad0();
        }
        /*System.Array$$Sort<float, UITweenLeaf>*/ func_0x01804f30(*(undefined8 *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17],extraout_x1,0,plVar9,
                        uRam0000000003d51498);
        if ((float)extraout_d0 < 0.0) {
          if (plVar16 == (long *)0x0) goto code_r0x02f8ff9c;
          uVar21 = (ulong)*(uint *)(plVar16 + 3);
        }
        uVar23 = iVar8 - 1;
        plVar9 = (long *)(ulong)uVar23;
        if (iVar8 < 1) {
          if (plVar16 != (long *)0x0) goto code_r0x02f8fef8;
        }
        else if (plVar16 != (long *)0x0) {
          plVar24 = (long *)0x0;
          unaff_x24 = (segment_command *)(extraout_x1 + 4);
          do {
            if (*(uint *)(extraout_x1 + 3) <= (uint)plVar24) goto code_r0x02f8ff90;
            if (*(long *)(unaff_x24->segname + (long)plVar24 * 8 + -8) == 0) goto code_r0x02f8ff9c;
            Core_UI2_UITweenLeaf__PerformTweenAnimation
                      ((float)uVar21 + *(float *)((long)plVar16 + 0x44) * (float)(int)(uint)plVar24,
                       *(long *)(unaff_x24->segname + (long)plVar24 * 8 + -8),plVar16,param_4);
            plVar24 = (long *)((long)plVar24 + 1);
          } while (iVar8 != (int)plVar24);
code_r0x02f8fef8:
          fVar34 = (float)Core_UI2_UITweenAnimation__GetParam(_UNK_033f82c4,plVar16,0);
          if (*(uint *)(extraout_x1 + 3) <= uVar23) goto code_r0x02f8ff90;
          if (extraout_x1[(long)(int)uVar23 + 4] != 0) {
            fVar36 = *(float *)((long)plVar16 + 0x44);
            uVar12 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(extraout_x1[(long)(int)uVar23 + 4],0);
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
            }
            uVar21 = (ulong)(uint)((float)uVar21 + fVar34 + fVar36 * (float)(int)uVar23);
            plVar24 = plStack_1a8;
            plVar16 = plStack_1b0;
            plVar14 = plStack_1b8;
            param_4 = uStack_1c0;
            plVar9 = plStack_1c8;
            unaff_x24 = psStack_1d0;
            pppppppuVar32 = pppppppuStack_1a0;
            puVar33 = puStack_198;
            goto code_r0x02f8ffa0;
          }
        }
        goto code_r0x02f8ff9c;
      }
      iStack_21c = iVar8;
      plStack_218 = param_5;
      if ((extraout_x1[3] & 0xffffffffU) == 0) {
code_r0x02f8ff90:
        uVar12 = func_0x00f78b24();
        func_0x00f78ac0(uVar12,0);
        goto code_r0x02f8ff9c;
      }
      plVar24 = extraout_x1 + 4;
      unaff_x24 = (segment_command *)*plVar24;
      if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
         ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
        func_0x00f78ad0();
      }
      if (plVar16 == (long *)0x0) goto code_r0x02f8ff9c;
      auVar38._8_4_ = (int)plVar16[8];
      auVar38._0_8_ = unaff_x24;
      puVar33 = &UNK_02f8fdb8;
      goto code_r0x02f906e0;
    }
  }
code_r0x02f8ff9c:
  unaff_d8 = uVar21;
  uVar21 = func_0x00f78af4();
  plVar3 = (long *)auStack_220;
  uVar12 = extraout_x1_00;
  plVar14 = extraout_x1;
  puVar33 = &Core_UI2_UITweener__TryCreateOnCompleteVirtualTween;
code_r0x02f8ffa0:
  *(undefined8 *)((long)plVar3 + -0x50) = unaff_d9;
  *(ulong *)((long)plVar3 + -0x48) = unaff_d8;
  *(segment_command **)((long)plVar3 + -0x40) = unaff_x24;
  *(long **)((long)plVar3 + -0x38) = plVar9;
  *(ulong *)((long)plVar3 + -0x30) = param_4;
  *(long **)((long)plVar3 + -0x28) = plVar14;
  *(long **)((long)plVar3 + -0x20) = plVar16;
  *(long **)((long)plVar3 + -0x18) = plVar24;
  *(undefined8 ********)((long)plVar3 + -0x10) = pppppppuVar32;
  *(undefined **)((long)plVar3 + -8) = puVar33;
  if ((bRam0000000003ebc6a0 & 1) == 0) {
    func_0x00f78a20(uVar21,0x3d40f08,uVar12);
    func_0x00f78a20(0x3d1ea28);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6b0);
    func_0x00f78a20(0x3d5e700);
    func_0x00f78a20(0x3d5e868);
    func_0x00f78a20(0x3d64820);
    func_0x00f78a20(0x3d64828);
    func_0x00f78a20(0x3d294a0);
    func_0x00f78a20(0x3d29498);
    bRam0000000003ebc6a0 = 1;
  }
  plVar14 = (long *)func_0x00f78aec(/*Core.UI2.UITweener.<>c__DisplayClass20_0_TypeInfo*/ uRam0000000003d294a0);
  return plVar14;
code_r0x02f905e0:
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar14 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18);
  plVar11 = (long *)func_0x00f78aec(/*Core.UI2.TweenDependencyIndexPair_TypeInfo*/ uRam0000000003d25430);
  Core_UI2_TweenDependencyIndexPair___ctor(plVar11,plVar24,plVar16);
  if (plVar14 == (long *)0x0) goto code_r0x02f906d0;
  puVar33 = &UNK_02f90640;
  puVar2 = (undefined1 *)((long)plVar4 + -0xd0);
  plVar3 = plVar14;
  plVar13 = plVar11;
code_r0x02427110:
  *(long **)(puVar2 + -0x20) = plVar16;
  *(long **)(puVar2 + -0x18) = plVar24;
  *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar32;
  *(undefined **)(puVar2 + -8) = puVar33;
  lVar19 = plVar14[2];
  puVar15 = puRam0000000003d3c518;
  if (lVar19 == 0) {
code_r0x0242716c:
    plVar11 = plVar16;
    plVar14 = plVar24;
    plVar9 = (long *)func_0x00f78af4();
    lVar19 = extraout_x9;
    uVar23 = extraout_w8;
code_r0x02427170:
    *(uint *)(plVar14 + 3) = uVar23 + 1;
  }
  else {
    uVar23 = *(uint *)(plVar14 + 3);
    plVar9 = plVar14;
    if (uVar23 != *(uint *)(lVar19 + 0x18)) goto code_r0x02427170;
    puVar15 = *(undefined8 **)(*(long *)(puRam0000000003d3c518[3] + 0xc0) + 0x60);
    plVar9 = (long *)(*(code *)*puVar15)(plVar14,uVar23 + 1);
    lVar19 = plVar14[2];
    uVar23 = *(uint *)(plVar14 + 3);
    *(uint *)(plVar14 + 3) = uVar23 + 1;
    plVar24 = plVar14;
    plVar16 = plVar11;
    if (lVar19 == 0) goto code_r0x0242716c;
  }
  if (uVar23 < *(uint *)(lVar19 + 0x18)) {
    *(long **)(lVar19 + (long)(int)uVar23 * 8 + 0x20) = plVar11;
    *(int *)((long)plVar14 + 0x1c) = *(int *)((long)plVar14 + 0x1c) + 1;
    return plVar9;
  }
  uVar25 = func_0x00f78b24();
  auVar37 = func_0x00f78ac0(uVar25,0);
  lVar20 = auVar37._8_8_;
  lVar19 = auVar37._0_8_;
  *(long *)(puVar2 + -0x60) = lVar31;
  *(undefined8 *)(puVar2 + -0x58) = uVar12;
  *(long **)(puVar2 + -0x50) = plVar13;
  *(long **)(puVar2 + -0x48) = plVar3;
  *(long **)(puVar2 + -0x40) = plVar11;
  *(long **)(puVar2 + -0x38) = plVar14;
  *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x28) =
       &System_Collections_Generic_List_object___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar15[3] + 0xc0) + 0x48))(lVar20,0x14);
  if (lVar19 != 0) {
    pcVar29 = (code *)**(undefined8 **)(*(long *)(puVar15[3] + 0xc0) + 0x28);
    lVar31 = *(long *)(*(long *)(puVar15[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar31 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar31);
    }
    if (lVar20 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = func_0x00f78adc(lVar20,lVar31);
      if (lVar10 == 0) {
        func_0x00f78e5c(lVar20,lVar31);
        goto code_r0x0242734c;
      }
    }
    (*pcVar29)(lVar19,lVar10,*(undefined8 *)(*(long *)(puVar15[3] + 0xc0) + 0x28));
    iVar8 = (*(code *)**(undefined8 **)(*(long *)(puVar15[3] + 0xc0) + 0x68))(lVar19);
    return (long *)(ulong)(iVar8 - 1);
  }
  func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
  pcVar29 = (code *)SoftwareBreakpoint(1,0x2427350);
  (*pcVar29)();
code_r0x02f8f87c:
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)&stack0xfffffffffffffea0;
  puStack_128 = &UNK_02f8f8a4;
  if ((bRam0000000003ebc6a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc6a2 = 1;
  }
  plVar14 = (long *)0x0;
  uVar26 = 0x3d25600;
  uVar21 = 0x3d23990;
  unaff_x24 = &segment_command_00000020;
  while( true ) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar19 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar19 == 0) break;
    if ((long)*(int *)(lVar19 + 0x18) <= (long)plVar14) {
      return (long *)0xffffffff;
    }
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
      lVar19 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
      if (lVar19 == 0) break;
    }
    if ((long *)(ulong)*(uint *)(lVar19 + 0x18) <= plVar14) goto code_r0x02f90324;
    iVar8 = Core_UI2_PlannedTweenData__get_IsValid(unaff_x24->segname + lVar19 + -8);
    if (iVar8 == 0) {
      return (long *)0xffffffff;
    }
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar19 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar19 == 0) break;
    if ((long *)(ulong)*(uint *)(lVar19 + 0x18) <= plVar14) goto code_r0x02f90324;
    plVar16 = *(long **)(unaff_x24->segname + lVar19 + -8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar11 = (long *)0x0;
    uVar18 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar16,plVar13);
    if ((uVar18 & 1) != 0) {
      return plVar14;
    }
    plVar14 = (long *)((long)plVar14 + 1);
    unaff_x24 = (segment_command *)&unaff_x24->fileoff;
  }
  func_0x00f78af4();
code_r0x02f90324:
  uVar12 = func_0x00f78b24();
  puVar33 = &Core_UI2_UITweener__TryResolveTweenAnim;
  auVar37 = func_0x00f78ac0(uVar12,0);
code_r0x02f90330:
  plVar3 = auVar37._8_8_;
  puVar2 = (undefined1 *)((long)plVar4 + -0x40);
  *(segment_command **)((long)plVar4 + -0x40) = unaff_x24;
  *(ulong *)((long)plVar4 + -0x38) = uVar21;
  *(ulong *)((long)plVar4 + -0x30) = uVar26;
  *(long **)((long)plVar4 + -0x28) = plVar16;
  *(long **)((long)plVar4 + -0x20) = plVar14;
  *(long **)((long)plVar4 + -0x18) = plVar13;
  *(undefined8 ********)((long)plVar4 + -0x10) = &ppppppuStack_130;
  *(undefined **)((long)plVar4 + -8) = puVar33;
  if ((auVar37._0_8_ != 0) && (uVar26 = *(ulong *)(auVar37._0_8_ + 0x18), uVar26 != 0)) {
    uVar23 = *(uint *)(uVar26 + 0x18);
    plVar16 = (long *)(ulong)(0 < (int)uVar23);
    if (0 < (int)uVar23) {
      uVar21 = 0;
      do {
        uVar28 = (uint)uVar21;
        plVar13 = plVar11;
        if (uVar23 <= uVar28) goto code_r0x02f903d8;
        unaff_x24 = *(segment_command **)(uVar26 + (long)(int)uVar28 * 8 + 0x20);
        plVar14 = plVar3;
        if ((unaff_x24 == (segment_command *)0x0) || (*(long *)(unaff_x24->segname + 8) == 0))
        goto code_r0x02f903d4;
        iVar8 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(unaff_x24->segname + 8),plVar3,3,0);
        if (iVar8 != 0) goto code_r0x02f903b8;
        uVar28 = uVar28 + 1;
        uVar21 = (ulong)uVar28;
        uVar23 = *(uint *)(uVar26 + 0x18);
        plVar16 = (long *)(ulong)((int)uVar28 < (int)uVar23);
      } while ((int)uVar28 < (int)uVar23);
    }
    unaff_x24 = (segment_command *)0x0;
code_r0x02f903b8:
    *plVar11 = (long)unaff_x24;
    return plVar16;
  }
code_r0x02f903d4:
  plVar3 = plVar14;
  func_0x00f78af4();
code_r0x02f903d8:
  uVar12 = func_0x00f78b24();
  plVar24 = (long *)func_0x00f78ac0(uVar12,0);
  puVar5 = (undefined1 *)((long)plVar4 + -0xd0);
  *(undefined8 *)((long)plVar4 + -0xa0) = unaff_x28;
  *(long **)((long)plVar4 + -0x98) = unaff_x27;
  *(undefined8 *)((long)plVar4 + -0x90) = unaff_x26;
  *(undefined8 *)((long)plVar4 + -0x88) = unaff_x25;
  *(segment_command **)((long)plVar4 + -0x80) = unaff_x24;
  *(ulong *)((long)plVar4 + -0x78) = uVar21;
  *(ulong *)((long)plVar4 + -0x70) = uVar26;
  *(long **)((long)plVar4 + -0x68) = plVar16;
  *(long **)((long)plVar4 + -0x60) = plVar3;
  *(long **)((long)plVar4 + -0x58) = plVar13;
  *(undefined1 **)((long)plVar4 + -0x50) = (undefined1 *)((long)plVar4 + -0x10);
  *(undefined **)((long)plVar4 + -0x48) = &Core_UI2_UITweener__DiscoverDependencies;
  pppppppuVar32 = (undefined8 *******)((long)plVar4 + -0x50);
  plVar16 = (long *)0x3ebc000;
  uVar12 = 0x3d25600;
  if ((bRam0000000003ebc69e & 1) == 0) {
    func_0x00f78a20(0x3d3c518);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25430);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69e = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  lVar19 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
  if (lVar19 == 0) {
code_r0x02f906d0:
    func_0x00f78af4();
  }
  else {
    uVar23 = (uint)plVar24;
    if (uVar23 < *(uint *)(lVar19 + 0x18)) {
      lVar31 = (long)(int)uVar23;
      lVar19 = *(long *)(lVar19 + lVar31 * 0x28 + 0x28);
      if (lVar19 != 0) {
        uVar25 = *(undefined8 *)(lVar19 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar25,0);
        if (iVar8 != 0) {
          plVar16 = (long *)0x0;
          lVar19 = 0x20;
          do {
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
            }
            lVar20 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
            if (lVar20 == 0) goto code_r0x02f906d0;
            if ((long)*(int *)(lVar20 + 0x18) <= (long)plVar16) {
              return /*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600;
            }
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
              lVar20 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
              if (lVar20 == 0) goto code_r0x02f906d0;
            }
            if ((long *)(ulong)*(uint *)(lVar20 + 0x18) <= plVar16) goto code_r0x02f906d4;
            puVar15 = (undefined8 *)(lVar20 + lVar19);
            uVar25 = *puVar15;
            uVar35 = puVar15[3];
            uVar27 = puVar15[2];
            *(undefined8 *)((long)plVar4 + -200) = puVar15[1];
            *(undefined8 *)((long)plVar4 + -0xd0) = uVar25;
            *(undefined8 *)((long)plVar4 + -0xb8) = uVar35;
            *(undefined8 *)((long)plVar4 + -0xc0) = uVar27;
            *(undefined8 *)((long)plVar4 + -0xb0) = puVar15[4];
            plVar14 = (long *)Core_UI2_PlannedTweenData__get_IsValid
                                        ((undefined1 *)((long)plVar4 + -0xd0));
            if ((int)plVar14 == 0) {
              return plVar14;
            }
            if ((long *)((ulong)plVar24 & 0xffffffff) != plVar16) {
              uVar25 = *(undefined8 *)((long)plVar4 + -0xd0);
              if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
                 ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
                func_0x00f78ad0();
              }
              lVar20 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
              if (lVar20 == 0) goto code_r0x02f906d0;
              if (*(uint *)(lVar20 + 0x18) <= uVar23) goto code_r0x02f906d4;
              lVar20 = *(long *)(lVar20 + lVar31 * 0x28 + 0x28);
              if (lVar20 == 0) goto code_r0x02f906d0;
              uVar27 = *(undefined8 *)(lVar20 + 0x20);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar21 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar25,uVar27,0);
              if ((uVar21 & 1) == 0) goto code_r0x02f905e0;
            }
            plVar16 = (long *)((long)plVar16 + 1);
            lVar19 = lVar19 + 0x28;
          } while( true );
        }
        if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
          func_0x00f78ad0();
        }
        plVar14 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18);
        plVar11 = (long *)Core_UI2_TweenDependencyIndexPair__CreateEmpty(plVar24);
        plVar16 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          pppppppuVar32 = *(undefined8 ********)((long)plVar4 + -0x50);
          puVar33 = *(undefined **)((long)plVar4 + -0x48);
          plVar16 = *(long **)((long)plVar4 + -0x60);
          plVar24 = *(long **)((long)plVar4 + -0x58);
          plVar13 = *(long **)((long)plVar4 + -0x70);
          plVar3 = *(long **)((long)plVar4 + -0x68);
          lVar31 = *(long *)((long)plVar4 + -0x80);
          uVar12 = *(undefined8 *)((long)plVar4 + -0x78);
          goto code_r0x02427110;
        }
      }
      goto code_r0x02f906d0;
    }
  }
code_r0x02f906d4:
  uVar12 = func_0x00f78b24();
  puVar33 = &Core_UI2_UITweener__CalculateOrderRankingForLeaf;
  auVar38 = func_0x00f78ac0(uVar12,0);
code_r0x02f906e0:
  lVar19 = auVar38._0_8_;
  *(long **)(puVar5 + -0x20) = plVar16;
  *(long **)(puVar5 + -0x18) = plVar24;
  *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar32;
  *(undefined **)(puVar5 + -8) = puVar33;
  if ((lVar19 != 0) && (lVar31 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar19,0), lVar31 != 0)) {
    plVar14 = (long *)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar31,0);
    switch(auVar38._8_4_) {
    case 1:
      lVar19 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar19,0);
      if (lVar19 != 0) {
        plVar14 = (long *)/*UnityEngine.Transform$$GetSiblingIndex*/ func_0x03277144(lVar19,0);
        return plVar14;
      }
      goto code_r0x02f9078c;
    case 3:
      break;
    case 4:
      break;
    case 6:
    case 9:
      break;
    case 7:
      break;
    case 8:
    }
    return plVar14;
  }
code_r0x02f9078c:
  plVar14 = (long *)func_0x00f78af4();
  return plVar14;
}



// ============================================================
// RVA: 0x2f8f5c0 | Core.UI2.UITweener.remove_OnTweenPhaseStarted
// ============================================================

/* WARNING: Possible PIC construction at 0x02f8f8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fc0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fc68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fdb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f90068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f901a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f9063c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8fdb8) */
/* WARNING: Removing unreachable block (ram,0x02f8fdbc) */
/* WARNING: Removing unreachable block (ram,0x02f8fdc8) */
/* WARNING: Removing unreachable block (ram,0x02f8fe48) */
/* WARNING: Removing unreachable block (ram,0x02f8fdd8) */
/* WARNING: Removing unreachable block (ram,0x02f8fde8) */
/* WARNING: Removing unreachable block (ram,0x02f8fc10) */
/* WARNING: Removing unreachable block (ram,0x02f8fc6c) */
/* WARNING: Removing unreachable block (ram,0x02f8fc14) */
/* WARNING: Removing unreachable block (ram,0x02f8fc28) */
/* WARNING: Removing unreachable block (ram,0x02f8fc30) */
/* WARNING: Removing unreachable block (ram,0x02f8fc38) */
/* WARNING: Removing unreachable block (ram,0x02f8fc44) */
/* WARNING: Removing unreachable block (ram,0x02f8fc50) */
/* WARNING: Removing unreachable block (ram,0x02f8f8a4) */
/* WARNING: Removing unreachable block (ram,0x02f8fa0c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa24) */
/* WARNING: Removing unreachable block (ram,0x02f8fa3c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa44) */
/* WARNING: Removing unreachable block (ram,0x02f8fa5c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa64) */
/* WARNING: Removing unreachable block (ram,0x02f8fa74) */
/* WARNING: Removing unreachable block (ram,0x02f8fa80) */
/* WARNING: Removing unreachable block (ram,0x02f8fa8c) */
/* WARNING: Removing unreachable block (ram,0x02f8f8ac) */
/* WARNING: Removing unreachable block (ram,0x02f8f8c4) */
/* WARNING: Removing unreachable block (ram,0x02f8f8cc) */
/* WARNING: Removing unreachable block (ram,0x02f8f8dc) */
/* WARNING: Removing unreachable block (ram,0x02f8f8e8) */
/* WARNING: Removing unreachable block (ram,0x02f8f8f4) */
/* WARNING: Removing unreachable block (ram,0x02f8f934) */
/* WARNING: Removing unreachable block (ram,0x02f8f93c) */
/* WARNING: Removing unreachable block (ram,0x02f8f944) */
/* WARNING: Removing unreachable block (ram,0x02f8f958) */
/* WARNING: Removing unreachable block (ram,0x02f8f95c) */
/* WARNING: Removing unreachable block (ram,0x02f8fb00) */
/* WARNING: Removing unreachable block (ram,0x02f8f974) */
/* WARNING: Removing unreachable block (ram,0x02f8f980) */
/* WARNING: Removing unreachable block (ram,0x02f8f99c) */
/* WARNING: Removing unreachable block (ram,0x02f8f9a4) */
/* WARNING: Removing unreachable block (ram,0x02f8f9b4) */
/* WARNING: Removing unreachable block (ram,0x02f8f9c0) */
/* WARNING: Removing unreachable block (ram,0x02f8f9cc) */
/* WARNING: Removing unreachable block (ram,0x02f8fa00) */
/* WARNING: Removing unreachable block (ram,0x02f9006c) */
/* WARNING: Removing unreachable block (ram,0x02f901c4) */
/* WARNING: Removing unreachable block (ram,0x02f90070) */
/* WARNING: Removing unreachable block (ram,0x02f90078) */
/* WARNING: Removing unreachable block (ram,0x02f9007c) */
/* WARNING: Removing unreachable block (ram,0x02f90198) */
/* WARNING: Removing unreachable block (ram,0x02f90080) */
/* WARNING: Removing unreachable block (ram,0x02f90094) */
/* WARNING: Removing unreachable block (ram,0x02f9009c) */
/* WARNING: Removing unreachable block (ram,0x02f900a4) */
/* WARNING: Removing unreachable block (ram,0x02f900b0) */
/* WARNING: Removing unreachable block (ram,0x02f900b8) */
/* WARNING: Removing unreachable block (ram,0x02f900c0) */
/* WARNING: Removing unreachable block (ram,0x02f900cc) */
/* WARNING: Removing unreachable block (ram,0x02f90110) */
/* WARNING: Removing unreachable block (ram,0x02f901a4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Core_UI2_UITweener__remove_OnTweenPhaseStarted
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 long *param_5)

{
  ushort uVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  long *plVar9;
  long lVar10;
  int iVar8;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar18;
  uint extraout_w8;
  long lVar19;
  long lVar20;
  long extraout_x9;
  ulong uVar21;
  int *piVar22;
  uint uVar23;
  long *plVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined8 uVar27;
  uint uVar28;
  code *pcVar29;
  long **pplVar30;
  segment_command *unaff_x24;
  long lVar31;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar32;
  undefined *puVar33;
  float fVar34;
  ulong extraout_d0;
  undefined8 uVar35;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  undefined1 auStack_1e0 [4];
  int iStack_1dc;
  long *plStack_1d8;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  segment_command *psStack_190;
  long *plStack_188;
  ulong uStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined8 *******pppppppuStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 ******ppppppuStack_f0;
  undefined *puStack_e8;
  long lStack_a8;
  undefined8 *****pppppuStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003ebc69a & 1) == 0) {
    func_0x00f78a20(0x3d25450);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69a = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar12 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x30);
  while( true ) {
    plVar18 = (long *)0x0;
    plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(plVar12,param_1);
    if ((plVar11 != (long *)0x0) && (*plVar11 != /*Core.UI2.TweenPhaseStartedCallback_TypeInfo*/ lRam0000000003d25450)) break;
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    plVar18 = (long *)func_0x00ff0f44(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x30,plVar11,plVar12);
    bVar6 = plVar12 == plVar18;
    plVar12 = plVar18;
    if (bVar6) {
      return plVar18;
    }
  }
  plVar12 = (long *)func_0x00f78e5c(plVar11);
  puStack_48 = &Core_UI2_UITweener__PlanTweensForLeaves;
  lStack_a8 = *(long *)PTR_03a5d648;
  pppppuStack_50 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003ebc69c & 1) == 0) {
    func_0x00f78a20(0x3d579d0);
    func_0x00f78a20(0x3d1cff8);
    func_0x00f78a20(0x3d1d4f8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d1f598);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69c = 1;
  }
  ppppppuStack_f0 = &pppppuStack_50;
  if (plVar12 != (long *)0x0) {
    unaff_x27 = (long *)0x0;
    unaff_x25 = 0x3d1cff8;
    unaff_x26 = 0x3d1d4f8;
    plVar15 = (long *)0x3d579d0;
    unaff_x28 = 0x3d23990;
    do {
      lVar19 = *plVar12;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == /*System.Collections.Generic.ICollection<UITweenLeaf>_TypeInfo*/ lRam0000000003d1cff8) {
            puVar13 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
            goto code_r0x02f8f7c0;
          }
          piVar22 = piVar22 + 4;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      plVar18 = (long *)0x0;
      puVar13 = (undefined8 *)func_0x00fac1f0(plVar12);
code_r0x02f8f7c0:
      iVar8 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if (iVar8 <= (int)unaff_x27) {
        if (*(long *)PTR_03a5d648 == lStack_a8) {
          return (long *)0x0;
        }
        goto code_r0x02f8fb0c;
      }
      lVar19 = *plVar12;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == /*System.Collections.Generic.IList<UITweenLeaf>_TypeInfo*/ lRam0000000003d1d4f8) {
            puVar13 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
            goto code_r0x02f8f820;
          }
          piVar22 = piVar22 + 4;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      puVar13 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.Generic.IList<UITweenLeaf>_TypeInfo*/ lRam0000000003d1d4f8,0);
code_r0x02f8f820:
      plVar18 = (long *)puVar13[1];
      lVar19 = (*(code *)*puVar13)(plVar12,unaff_x27);
      plVar11 = plVar15;
      if ((lVar19 == 0) ||
         (lVar19 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar19,0), plVar11 = (long *)0x3d579d0, lVar19 == 0)) break;
      plVar18 = plRam0000000003d579d0;
      plVar11 = (long *)/*UnityEngine.GameObject$$GetComponentInParent<UITweenGroup>*/ func_0x0185d35c(lVar19,1);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar11,0);
      if (iVar8 != 0) goto code_r0x02f8f87c;
      unaff_x27 = (long *)(ulong)((int)unaff_x27 + 1);
    } while( true );
  }
  func_0x00f78af4();
  uVar14 = func_0x00f78b24();
  func_0x00f78ac0(uVar14,0);
  plVar15 = plVar11;
code_r0x02f8fb0c:
  auVar37 = ___stack_chk_fail();
  uVar26 = auVar37._8_8_;
  plVar11 = auVar37._0_8_;
  plVar4 = &lStack_150;
  plVar3 = &lStack_150;
  puStack_e8 = &Core_UI2_UITweener__CalculateTweenDurationsAndDependencies;
  plVar12 = (long *)0x3ebc000;
  uVar21 = 0x3d25600;
  plVar9 = plVar18;
  if ((bRam0000000003ebc69d & 1) == 0) {
    func_0x00f78a20(0x3d3c520);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69d = 1;
    plVar9 = plVar18;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar18 = plVar15;
  if (*(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18) == 0) {
code_r0x02f8fc94:
    func_0x00f78af4();
  }
  else {
    plVar12 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18),
                                      uRam0000000003d3c520);
    if (auVar37._8_4_ < 1) {
      return plVar12;
    }
    plVar12 = (long *)0x0;
    plVar18 = &lStack_148;
    uVar26 = uVar26 & 0xffffffff;
    unaff_x24 = &segment_command_00000020;
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar19 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar19 == 0) goto code_r0x02f8fc94;
    if (*(int *)(lVar19 + 0x18) != 0) {
      lStack_148 = *(long *)(lVar19 + 0x28);
      lStack_150 = *(long *)(lVar19 + 0x20);
      auVar37._8_8_ = plVar11;
      auVar37._0_8_ = lStack_150;
      uStack_138 = *(undefined8 *)(lVar19 + 0x38);
      uStack_140 = *(undefined8 *)(lVar19 + 0x30);
      uStack_130 = *(undefined8 *)(lVar19 + 0x40);
      puVar33 = &UNK_02f8fc10;
      plVar15 = plVar18;
      goto code_r0x02f90330;
    }
  }
  uVar14 = func_0x00f78b24();
  plVar15 = (long *)func_0x00f78ac0(uVar14,0);
  puVar5 = auStack_1e0;
  plStack_188 = (long *)0x3d25600;
  puStack_158 = &Core_UI2_UITweener__PlayTweenAnimOnLeaves;
  pppppppuVar32 = &pppppppuStack_160;
  uVar21 = extraout_d0 & 0xffffffff;
  plVar24 = (long *)0x3ebc000;
  plVar16 = plVar15;
  plStack_1a8 = unaff_x27;
  uStack_1a0 = unaff_x26;
  uStack_198 = unaff_x25;
  psStack_190 = unaff_x24;
  uStack_180 = uVar26;
  plStack_178 = plVar18;
  plStack_170 = plVar12;
  plStack_168 = plVar11;
  pppppppuStack_160 = &ppppppuStack_f0;
  if ((bRam0000000003ebc69f & 1) == 0) {
    func_0x00f78a20(0x3d51498);
    plVar16 = (long *)func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69f = 1;
  }
  iVar8 = (int)plVar9;
  if (iVar8 == 0) {
    if (param_5 == (long *)0x0) {
      return plVar16;
    }
    uVar14 = 0;
    plStack_1a8 = param_5;
    lVar19 = param_5[0xd];
    if (lVar19 == 0) {
      pplVar30 = &plStack_1a8;
      lVar31 = 1;
    }
    else {
      lVar31 = *(long *)(lVar19 + 0x18);
      if (lVar31 == 0) {
        return param_5;
      }
      pplVar30 = (long **)(lVar19 + 0x20);
    }
    lVar19 = 0;
    do {
      plVar18 = pplVar30[lVar19];
      pcVar29 = (code *)plVar18[2];
      plVar12 = (long *)plVar18[4];
      lVar20 = plVar18[5];
      if (*(short *)(lVar20 + 0x48) == -1) {
        func_0x00f78ad8(lVar20,uVar14);
      }
      iVar8 = func_0x00f78a4c(lVar20);
      if (iVar8 == 0) {
        if ((((plVar12 == (long *)0x0) || (*(short *)(lVar20 + 0x48) == -1)) ||
            ((*(byte *)(*plVar12 + 0x115) & 1) != 0)) || (param_5[3] == 0)) goto code_r0x016bb980;
        iVar8 = func_0x00f78a44(lVar20);
        iVar7 = func_0x00f78ec0(lVar20);
        if (iVar8 == 0) {
          uVar1 = *(ushort *)(lVar20 + 0x48);
          if (iVar7 == 0) {
            lVar20 = *plVar12 + (ulong)uVar1 * 0x10;
            auVar37 = (**(code **)(lVar20 + 0x138))(plVar12,*(undefined8 *)(lVar20 + 0x140));
            goto code_r0x016bb98c;
          }
          lVar20 = func_0x00f78a48(lVar20);
          lVar10 = *plVar12;
          uVar21 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == lVar20) {
                puVar13 = (undefined8 *)
                          (lVar10 + (long)(int)(*piVar22 + (uint)uVar1) * 0x10 + 0x138);
                goto code_r0x016bba50;
              }
              piVar22 = piVar22 + 4;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
          puVar13 = (undefined8 *)func_0x00fac1f0(plVar12,lVar20,(ulong)uVar1);
code_r0x016bba50:
          pcVar29 = (code *)*puVar13;
          puVar13 = (undefined8 *)puVar13[1];
        }
        else {
          if (iVar7 == 0) {
            uVar14 = *(undefined8 *)(*plVar12 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar10 = *plVar12;
            uVar21 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar21 != 0) {
              piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)(lVar20 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar20 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x016bba28;
                }
                piVar22 = piVar22 + 4;
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
            }
            lVar10 = func_0x00fac1f0(plVar12);
code_r0x016bba28:
            uVar14 = *(undefined8 *)(lVar10 + 8);
          }
          puVar13 = (undefined8 *)func_0x00f78acc(uVar14,lVar20);
          pcVar29 = (code *)*puVar13;
        }
        auVar37 = (*pcVar29)(plVar12,puVar13);
      }
      else if (*(char *)(lVar20 + 0x4a) == '\0') {
        auVar37 = (*pcVar29)(lVar20);
      }
      else {
code_r0x016bb980:
        auVar37 = (*pcVar29)(plVar12,lVar20);
      }
code_r0x016bb98c:
      uVar14 = auVar37._8_8_;
      lVar19 = lVar19 + 1;
      if (lVar19 == lVar31) {
        return auVar37._0_8_;
      }
    } while( true );
  }
  if (extraout_x1 != (long *)0x0) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] != 0) {
      if (*(int *)(*(long *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18) < (int)extraout_x1[3]) {
        return /*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600;
      }
      if (iVar8 < 1) {
        if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
          func_0x00f78ad0();
        }
        /*System.Array$$Sort<float, UITweenLeaf>*/ func_0x01804f30(*(undefined8 *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17],extraout_x1,0,plVar9,
                        uRam0000000003d51498);
        if ((float)extraout_d0 < 0.0) {
          if (plVar15 == (long *)0x0) goto code_r0x02f8ff9c;
          uVar21 = (ulong)*(uint *)(plVar15 + 3);
        }
        uVar23 = iVar8 - 1;
        plVar9 = (long *)(ulong)uVar23;
        if (iVar8 < 1) {
          if (plVar15 != (long *)0x0) goto code_r0x02f8fef8;
        }
        else if (plVar15 != (long *)0x0) {
          plVar24 = (long *)0x0;
          unaff_x24 = (segment_command *)(extraout_x1 + 4);
          do {
            if (*(uint *)(extraout_x1 + 3) <= (uint)plVar24) goto code_r0x02f8ff90;
            if (*(long *)(unaff_x24->segname + (long)plVar24 * 8 + -8) == 0) goto code_r0x02f8ff9c;
            Core_UI2_UITweenLeaf__PerformTweenAnimation
                      ((float)uVar21 + *(float *)((long)plVar15 + 0x44) * (float)(int)(uint)plVar24,
                       *(long *)(unaff_x24->segname + (long)plVar24 * 8 + -8),plVar15,param_4);
            plVar24 = (long *)((long)plVar24 + 1);
          } while (iVar8 != (int)plVar24);
code_r0x02f8fef8:
          fVar34 = (float)Core_UI2_UITweenAnimation__GetParam(_UNK_033f82c4,plVar15,0);
          if (*(uint *)(extraout_x1 + 3) <= uVar23) goto code_r0x02f8ff90;
          if (extraout_x1[(long)(int)uVar23 + 4] != 0) {
            fVar36 = *(float *)((long)plVar15 + 0x44);
            uVar14 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(extraout_x1[(long)(int)uVar23 + 4],0);
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
            }
            uVar21 = (ulong)(uint)((float)uVar21 + fVar34 + fVar36 * (float)(int)uVar23);
            plVar24 = plStack_168;
            plVar15 = plStack_170;
            plVar12 = plStack_178;
            param_4 = uStack_180;
            plVar9 = plStack_188;
            unaff_x24 = psStack_190;
            pppppppuVar32 = pppppppuStack_160;
            puVar33 = puStack_158;
            goto code_r0x02f8ffa0;
          }
        }
        goto code_r0x02f8ff9c;
      }
      iStack_1dc = iVar8;
      plStack_1d8 = param_5;
      if ((extraout_x1[3] & 0xffffffffU) == 0) {
code_r0x02f8ff90:
        uVar14 = func_0x00f78b24();
        func_0x00f78ac0(uVar14,0);
        goto code_r0x02f8ff9c;
      }
      plVar24 = extraout_x1 + 4;
      unaff_x24 = (segment_command *)*plVar24;
      if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
         ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
        func_0x00f78ad0();
      }
      if (plVar15 == (long *)0x0) goto code_r0x02f8ff9c;
      auVar38._8_4_ = (int)plVar15[8];
      auVar38._0_8_ = unaff_x24;
      puVar33 = &UNK_02f8fdb8;
      goto code_r0x02f906e0;
    }
  }
code_r0x02f8ff9c:
  unaff_d8 = uVar21;
  uVar21 = func_0x00f78af4();
  plVar3 = (long *)auStack_1e0;
  uVar14 = extraout_x1_00;
  plVar12 = extraout_x1;
  puVar33 = &Core_UI2_UITweener__TryCreateOnCompleteVirtualTween;
code_r0x02f8ffa0:
  *(undefined8 *)((long)plVar3 + -0x50) = unaff_d9;
  *(ulong *)((long)plVar3 + -0x48) = unaff_d8;
  *(segment_command **)((long)plVar3 + -0x40) = unaff_x24;
  *(long **)((long)plVar3 + -0x38) = plVar9;
  *(ulong *)((long)plVar3 + -0x30) = param_4;
  *(long **)((long)plVar3 + -0x28) = plVar12;
  *(long **)((long)plVar3 + -0x20) = plVar15;
  *(long **)((long)plVar3 + -0x18) = plVar24;
  *(undefined8 ********)((long)plVar3 + -0x10) = pppppppuVar32;
  *(undefined **)((long)plVar3 + -8) = puVar33;
  if ((bRam0000000003ebc6a0 & 1) == 0) {
    func_0x00f78a20(uVar21,0x3d40f08,uVar14);
    func_0x00f78a20(0x3d1ea28);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6b0);
    func_0x00f78a20(0x3d5e700);
    func_0x00f78a20(0x3d5e868);
    func_0x00f78a20(0x3d64820);
    func_0x00f78a20(0x3d64828);
    func_0x00f78a20(0x3d294a0);
    func_0x00f78a20(0x3d29498);
    bRam0000000003ebc6a0 = 1;
  }
  plVar12 = (long *)func_0x00f78aec(/*Core.UI2.UITweener.<>c__DisplayClass20_0_TypeInfo*/ uRam0000000003d294a0);
  return plVar12;
code_r0x02f905e0:
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar12 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18);
  plVar18 = (long *)func_0x00f78aec(/*Core.UI2.TweenDependencyIndexPair_TypeInfo*/ uRam0000000003d25430);
  Core_UI2_TweenDependencyIndexPair___ctor(plVar18,plVar24,plVar15);
  if (plVar12 == (long *)0x0) goto code_r0x02f906d0;
  puVar33 = &UNK_02f90640;
  puVar2 = (undefined1 *)((long)plVar4 + -0xd0);
  plVar3 = plVar12;
  plVar11 = plVar18;
code_r0x02427110:
  *(long **)(puVar2 + -0x20) = plVar15;
  *(long **)(puVar2 + -0x18) = plVar24;
  *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar32;
  *(undefined **)(puVar2 + -8) = puVar33;
  lVar19 = plVar12[2];
  puVar13 = puRam0000000003d3c518;
  if (lVar19 == 0) {
code_r0x0242716c:
    plVar18 = plVar15;
    plVar12 = plVar24;
    plVar9 = (long *)func_0x00f78af4();
    lVar19 = extraout_x9;
    uVar23 = extraout_w8;
code_r0x02427170:
    *(uint *)(plVar12 + 3) = uVar23 + 1;
  }
  else {
    uVar23 = *(uint *)(plVar12 + 3);
    plVar9 = plVar12;
    if (uVar23 != *(uint *)(lVar19 + 0x18)) goto code_r0x02427170;
    puVar13 = *(undefined8 **)(*(long *)(puRam0000000003d3c518[3] + 0xc0) + 0x60);
    plVar9 = (long *)(*(code *)*puVar13)(plVar12,uVar23 + 1);
    lVar19 = plVar12[2];
    uVar23 = *(uint *)(plVar12 + 3);
    *(uint *)(plVar12 + 3) = uVar23 + 1;
    plVar24 = plVar12;
    plVar15 = plVar18;
    if (lVar19 == 0) goto code_r0x0242716c;
  }
  if (uVar23 < *(uint *)(lVar19 + 0x18)) {
    *(long **)(lVar19 + (long)(int)uVar23 * 8 + 0x20) = plVar18;
    *(int *)((long)plVar12 + 0x1c) = *(int *)((long)plVar12 + 0x1c) + 1;
    return plVar9;
  }
  uVar25 = func_0x00f78b24();
  auVar37 = func_0x00f78ac0(uVar25,0);
  lVar20 = auVar37._8_8_;
  lVar19 = auVar37._0_8_;
  *(long *)(puVar2 + -0x60) = lVar31;
  *(undefined8 *)(puVar2 + -0x58) = uVar14;
  *(long **)(puVar2 + -0x50) = plVar11;
  *(long **)(puVar2 + -0x48) = plVar3;
  *(long **)(puVar2 + -0x40) = plVar18;
  *(long **)(puVar2 + -0x38) = plVar12;
  *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x28) =
       &System_Collections_Generic_List_object___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar13[3] + 0xc0) + 0x48))(lVar20,0x14);
  if (lVar19 != 0) {
    pcVar29 = (code *)**(undefined8 **)(*(long *)(puVar13[3] + 0xc0) + 0x28);
    lVar31 = *(long *)(*(long *)(puVar13[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar31 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar31);
    }
    if (lVar20 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = func_0x00f78adc(lVar20,lVar31);
      if (lVar10 == 0) {
        func_0x00f78e5c(lVar20,lVar31);
        goto code_r0x0242734c;
      }
    }
    (*pcVar29)(lVar19,lVar10,*(undefined8 *)(*(long *)(puVar13[3] + 0xc0) + 0x28));
    iVar8 = (*(code *)**(undefined8 **)(*(long *)(puVar13[3] + 0xc0) + 0x68))(lVar19);
    return (long *)(ulong)(iVar8 - 1);
  }
  func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
  pcVar29 = (code *)SoftwareBreakpoint(1,0x2427350);
  (*pcVar29)();
code_r0x02f8f87c:
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)&stack0xfffffffffffffee0;
  puStack_e8 = &UNK_02f8f8a4;
  if ((bRam0000000003ebc6a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc6a2 = 1;
  }
  plVar12 = (long *)0x0;
  uVar26 = 0x3d25600;
  uVar21 = 0x3d23990;
  unaff_x24 = &segment_command_00000020;
  while( true ) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar19 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar19 == 0) break;
    if ((long)*(int *)(lVar19 + 0x18) <= (long)plVar12) {
      return (long *)0xffffffff;
    }
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
      lVar19 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
      if (lVar19 == 0) break;
    }
    if ((long *)(ulong)*(uint *)(lVar19 + 0x18) <= plVar12) goto code_r0x02f90324;
    iVar8 = Core_UI2_PlannedTweenData__get_IsValid(unaff_x24->segname + lVar19 + -8);
    if (iVar8 == 0) {
      return (long *)0xffffffff;
    }
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar19 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar19 == 0) break;
    if ((long *)(ulong)*(uint *)(lVar19 + 0x18) <= plVar12) goto code_r0x02f90324;
    plVar15 = *(long **)(unaff_x24->segname + lVar19 + -8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar18 = (long *)0x0;
    uVar17 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar15,plVar11);
    if ((uVar17 & 1) != 0) {
      return plVar12;
    }
    plVar12 = (long *)((long)plVar12 + 1);
    unaff_x24 = (segment_command *)&unaff_x24->fileoff;
  }
  func_0x00f78af4();
code_r0x02f90324:
  uVar14 = func_0x00f78b24();
  puVar33 = &Core_UI2_UITweener__TryResolveTweenAnim;
  auVar37 = func_0x00f78ac0(uVar14,0);
code_r0x02f90330:
  plVar3 = auVar37._8_8_;
  puVar2 = (undefined1 *)((long)plVar4 + -0x40);
  *(segment_command **)((long)plVar4 + -0x40) = unaff_x24;
  *(ulong *)((long)plVar4 + -0x38) = uVar21;
  *(ulong *)((long)plVar4 + -0x30) = uVar26;
  *(long **)((long)plVar4 + -0x28) = plVar15;
  *(long **)((long)plVar4 + -0x20) = plVar12;
  *(long **)((long)plVar4 + -0x18) = plVar11;
  *(undefined8 ********)((long)plVar4 + -0x10) = &ppppppuStack_f0;
  *(undefined **)((long)plVar4 + -8) = puVar33;
  if ((auVar37._0_8_ != 0) && (uVar26 = *(ulong *)(auVar37._0_8_ + 0x18), uVar26 != 0)) {
    uVar23 = *(uint *)(uVar26 + 0x18);
    plVar15 = (long *)(ulong)(0 < (int)uVar23);
    if (0 < (int)uVar23) {
      uVar21 = 0;
      do {
        uVar28 = (uint)uVar21;
        plVar11 = plVar18;
        if (uVar23 <= uVar28) goto code_r0x02f903d8;
        unaff_x24 = *(segment_command **)(uVar26 + (long)(int)uVar28 * 8 + 0x20);
        plVar12 = plVar3;
        if ((unaff_x24 == (segment_command *)0x0) || (*(long *)(unaff_x24->segname + 8) == 0))
        goto code_r0x02f903d4;
        iVar8 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(unaff_x24->segname + 8),plVar3,3,0);
        if (iVar8 != 0) goto code_r0x02f903b8;
        uVar28 = uVar28 + 1;
        uVar21 = (ulong)uVar28;
        uVar23 = *(uint *)(uVar26 + 0x18);
        plVar15 = (long *)(ulong)((int)uVar28 < (int)uVar23);
      } while ((int)uVar28 < (int)uVar23);
    }
    unaff_x24 = (segment_command *)0x0;
code_r0x02f903b8:
    *plVar18 = (long)unaff_x24;
    return plVar15;
  }
code_r0x02f903d4:
  plVar3 = plVar12;
  func_0x00f78af4();
code_r0x02f903d8:
  uVar14 = func_0x00f78b24();
  plVar24 = (long *)func_0x00f78ac0(uVar14,0);
  puVar5 = (undefined1 *)((long)plVar4 + -0xd0);
  *(undefined8 *)((long)plVar4 + -0xa0) = unaff_x28;
  *(long **)((long)plVar4 + -0x98) = unaff_x27;
  *(undefined8 *)((long)plVar4 + -0x90) = unaff_x26;
  *(undefined8 *)((long)plVar4 + -0x88) = unaff_x25;
  *(segment_command **)((long)plVar4 + -0x80) = unaff_x24;
  *(ulong *)((long)plVar4 + -0x78) = uVar21;
  *(ulong *)((long)plVar4 + -0x70) = uVar26;
  *(long **)((long)plVar4 + -0x68) = plVar15;
  *(long **)((long)plVar4 + -0x60) = plVar3;
  *(long **)((long)plVar4 + -0x58) = plVar11;
  *(undefined1 **)((long)plVar4 + -0x50) = (undefined1 *)((long)plVar4 + -0x10);
  *(undefined **)((long)plVar4 + -0x48) = &Core_UI2_UITweener__DiscoverDependencies;
  pppppppuVar32 = (undefined8 *******)((long)plVar4 + -0x50);
  plVar15 = (long *)0x3ebc000;
  uVar14 = 0x3d25600;
  if ((bRam0000000003ebc69e & 1) == 0) {
    func_0x00f78a20(0x3d3c518);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25430);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69e = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  lVar19 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
  if (lVar19 == 0) {
code_r0x02f906d0:
    func_0x00f78af4();
  }
  else {
    uVar23 = (uint)plVar24;
    if (uVar23 < *(uint *)(lVar19 + 0x18)) {
      lVar31 = (long)(int)uVar23;
      lVar19 = *(long *)(lVar19 + lVar31 * 0x28 + 0x28);
      if (lVar19 != 0) {
        uVar25 = *(undefined8 *)(lVar19 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar25,0);
        if (iVar8 != 0) {
          plVar15 = (long *)0x0;
          lVar19 = 0x20;
          do {
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
            }
            lVar20 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
            if (lVar20 == 0) goto code_r0x02f906d0;
            if ((long)*(int *)(lVar20 + 0x18) <= (long)plVar15) {
              return /*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600;
            }
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
              lVar20 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
              if (lVar20 == 0) goto code_r0x02f906d0;
            }
            if ((long *)(ulong)*(uint *)(lVar20 + 0x18) <= plVar15) goto code_r0x02f906d4;
            puVar13 = (undefined8 *)(lVar20 + lVar19);
            uVar25 = *puVar13;
            uVar35 = puVar13[3];
            uVar27 = puVar13[2];
            *(undefined8 *)((long)plVar4 + -200) = puVar13[1];
            *(undefined8 *)((long)plVar4 + -0xd0) = uVar25;
            *(undefined8 *)((long)plVar4 + -0xb8) = uVar35;
            *(undefined8 *)((long)plVar4 + -0xc0) = uVar27;
            *(undefined8 *)((long)plVar4 + -0xb0) = puVar13[4];
            plVar12 = (long *)Core_UI2_PlannedTweenData__get_IsValid
                                        ((undefined1 *)((long)plVar4 + -0xd0));
            if ((int)plVar12 == 0) {
              return plVar12;
            }
            if ((long *)((ulong)plVar24 & 0xffffffff) != plVar15) {
              uVar25 = *(undefined8 *)((long)plVar4 + -0xd0);
              if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
                 ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
                func_0x00f78ad0();
              }
              lVar20 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
              if (lVar20 == 0) goto code_r0x02f906d0;
              if (*(uint *)(lVar20 + 0x18) <= uVar23) goto code_r0x02f906d4;
              lVar20 = *(long *)(lVar20 + lVar31 * 0x28 + 0x28);
              if (lVar20 == 0) goto code_r0x02f906d0;
              uVar27 = *(undefined8 *)(lVar20 + 0x20);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar21 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar25,uVar27,0);
              if ((uVar21 & 1) == 0) goto code_r0x02f905e0;
            }
            plVar15 = (long *)((long)plVar15 + 1);
            lVar19 = lVar19 + 0x28;
          } while( true );
        }
        if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
          func_0x00f78ad0();
        }
        plVar12 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18);
        plVar18 = (long *)Core_UI2_TweenDependencyIndexPair__CreateEmpty(plVar24);
        plVar15 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          pppppppuVar32 = *(undefined8 ********)((long)plVar4 + -0x50);
          puVar33 = *(undefined **)((long)plVar4 + -0x48);
          plVar15 = *(long **)((long)plVar4 + -0x60);
          plVar24 = *(long **)((long)plVar4 + -0x58);
          plVar11 = *(long **)((long)plVar4 + -0x70);
          plVar3 = *(long **)((long)plVar4 + -0x68);
          lVar31 = *(long *)((long)plVar4 + -0x80);
          uVar14 = *(undefined8 *)((long)plVar4 + -0x78);
          goto code_r0x02427110;
        }
      }
      goto code_r0x02f906d0;
    }
  }
code_r0x02f906d4:
  uVar14 = func_0x00f78b24();
  puVar33 = &Core_UI2_UITweener__CalculateOrderRankingForLeaf;
  auVar38 = func_0x00f78ac0(uVar14,0);
code_r0x02f906e0:
  lVar19 = auVar38._0_8_;
  *(long **)(puVar5 + -0x20) = plVar15;
  *(long **)(puVar5 + -0x18) = plVar24;
  *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar32;
  *(undefined **)(puVar5 + -8) = puVar33;
  if ((lVar19 != 0) && (lVar31 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar19,0), lVar31 != 0)) {
    plVar12 = (long *)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar31,0);
    switch(auVar38._8_4_) {
    case 1:
      lVar19 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar19,0);
      if (lVar19 != 0) {
        plVar12 = (long *)/*UnityEngine.Transform$$GetSiblingIndex*/ func_0x03277144(lVar19,0);
        return plVar12;
      }
      goto code_r0x02f9078c;
    case 3:
      break;
    case 4:
      break;
    case 6:
    case 9:
      break;
    case 7:
      break;
    case 8:
    }
    return plVar12;
  }
code_r0x02f9078c:
  plVar12 = (long *)func_0x00f78af4();
  return plVar12;
}



// ============================================================
// RVA: 0x2f8f6b8 | Core.UI2.UITweener.PlanTweensForLeaves
// ============================================================

/* WARNING: Possible PIC construction at 0x02f8f8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fc0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fc68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fdb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f90068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f901a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f9063c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8fdb8) */
/* WARNING: Removing unreachable block (ram,0x02f8fdbc) */
/* WARNING: Removing unreachable block (ram,0x02f8fdc8) */
/* WARNING: Removing unreachable block (ram,0x02f8fe48) */
/* WARNING: Removing unreachable block (ram,0x02f8fdd8) */
/* WARNING: Removing unreachable block (ram,0x02f8fde8) */
/* WARNING: Removing unreachable block (ram,0x02f8fc10) */
/* WARNING: Removing unreachable block (ram,0x02f8fc6c) */
/* WARNING: Removing unreachable block (ram,0x02f8fc14) */
/* WARNING: Removing unreachable block (ram,0x02f8fc28) */
/* WARNING: Removing unreachable block (ram,0x02f8fc30) */
/* WARNING: Removing unreachable block (ram,0x02f8fc38) */
/* WARNING: Removing unreachable block (ram,0x02f8fc44) */
/* WARNING: Removing unreachable block (ram,0x02f8fc50) */
/* WARNING: Removing unreachable block (ram,0x02f8f8a4) */
/* WARNING: Removing unreachable block (ram,0x02f8fa0c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa24) */
/* WARNING: Removing unreachable block (ram,0x02f8fa3c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa44) */
/* WARNING: Removing unreachable block (ram,0x02f8fa5c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa64) */
/* WARNING: Removing unreachable block (ram,0x02f8fa74) */
/* WARNING: Removing unreachable block (ram,0x02f8fa80) */
/* WARNING: Removing unreachable block (ram,0x02f8fa8c) */
/* WARNING: Removing unreachable block (ram,0x02f8f8ac) */
/* WARNING: Removing unreachable block (ram,0x02f8f8c4) */
/* WARNING: Removing unreachable block (ram,0x02f8f8cc) */
/* WARNING: Removing unreachable block (ram,0x02f8f8dc) */
/* WARNING: Removing unreachable block (ram,0x02f8f8e8) */
/* WARNING: Removing unreachable block (ram,0x02f8f8f4) */
/* WARNING: Removing unreachable block (ram,0x02f8f934) */
/* WARNING: Removing unreachable block (ram,0x02f8f93c) */
/* WARNING: Removing unreachable block (ram,0x02f8f944) */
/* WARNING: Removing unreachable block (ram,0x02f8f958) */
/* WARNING: Removing unreachable block (ram,0x02f8f95c) */
/* WARNING: Removing unreachable block (ram,0x02f8fb00) */
/* WARNING: Removing unreachable block (ram,0x02f8f974) */
/* WARNING: Removing unreachable block (ram,0x02f8f980) */
/* WARNING: Removing unreachable block (ram,0x02f8f99c) */
/* WARNING: Removing unreachable block (ram,0x02f8f9a4) */
/* WARNING: Removing unreachable block (ram,0x02f8f9b4) */
/* WARNING: Removing unreachable block (ram,0x02f8f9c0) */
/* WARNING: Removing unreachable block (ram,0x02f8f9cc) */
/* WARNING: Removing unreachable block (ram,0x02f8fa00) */
/* WARNING: Removing unreachable block (ram,0x02f9006c) */
/* WARNING: Removing unreachable block (ram,0x02f901c4) */
/* WARNING: Removing unreachable block (ram,0x02f90070) */
/* WARNING: Removing unreachable block (ram,0x02f90078) */
/* WARNING: Removing unreachable block (ram,0x02f9007c) */
/* WARNING: Removing unreachable block (ram,0x02f90198) */
/* WARNING: Removing unreachable block (ram,0x02f90080) */
/* WARNING: Removing unreachable block (ram,0x02f90094) */
/* WARNING: Removing unreachable block (ram,0x02f9009c) */
/* WARNING: Removing unreachable block (ram,0x02f900a4) */
/* WARNING: Removing unreachable block (ram,0x02f900b0) */
/* WARNING: Removing unreachable block (ram,0x02f900b8) */
/* WARNING: Removing unreachable block (ram,0x02f900c0) */
/* WARNING: Removing unreachable block (ram,0x02f900cc) */
/* WARNING: Removing unreachable block (ram,0x02f90110) */
/* WARNING: Removing unreachable block (ram,0x02f901a4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Core_UI2_UITweener__PlanTweensForLeaves
                 (long *param_1,undefined8 param_2,long *param_3,ulong param_4,long *param_5)

{
  ushort uVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar8;
  int iVar7;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *extraout_x1;
  undefined8 extraout_x1_00;
  uint extraout_w8;
  long lVar15;
  long lVar16;
  long extraout_x9;
  ulong uVar17;
  int *piVar18;
  uint uVar19;
  long *plVar20;
  long *plVar21;
  undefined8 uVar22;
  long *unaff_x21;
  ulong uVar23;
  undefined8 uVar24;
  uint uVar25;
  code *pcVar26;
  long *plVar27;
  long **pplVar28;
  segment_command *unaff_x24;
  long lVar29;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar30;
  undefined *puVar31;
  float fVar32;
  ulong extraout_d0;
  undefined8 uVar33;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  undefined1 auStack_1a0 [4];
  int iStack_19c;
  long *plStack_198;
  long *plStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  segment_command *psStack_150;
  long *plStack_148;
  ulong uStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 *******pppppppuStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 ******ppppppuStack_b0;
  undefined *puStack_a8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR_03a5d648;
  if ((bRam0000000003ebc69c & 1) == 0) {
    func_0x00f78a20(0x3d579d0);
    func_0x00f78a20(0x3d1cff8);
    func_0x00f78a20(0x3d1d4f8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d1f598);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69c = 1;
  }
  ppppppuStack_b0 = (undefined8 ******)&stack0xfffffffffffffff0;
  if (param_1 != (long *)0x0) {
    unaff_x27 = (long *)0x0;
    unaff_x25 = 0x3d1cff8;
    unaff_x26 = 0x3d1d4f8;
    unaff_x21 = (long *)0x3d579d0;
    unaff_x28 = 0x3d23990;
    do {
      lVar15 = *param_1;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.ICollection<UITweenLeaf>_TypeInfo*/ lRam0000000003d1cff8) {
            puVar9 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_02f8f7c0;
          }
          piVar18 = piVar18 + 4;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      param_3 = (long *)0x0;
      puVar9 = (undefined8 *)func_0x00fac1f0(param_1);
LAB_02f8f7c0:
      iVar7 = (*(code *)*puVar9)(param_1,puVar9[1]);
      if (iVar7 <= (int)unaff_x27) {
        if (*(long *)PTR_03a5d648 == lStack_68) {
          return (long *)0x0;
        }
        goto code_r0x02f8fb0c;
      }
      lVar15 = *param_1;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IList<UITweenLeaf>_TypeInfo*/ lRam0000000003d1d4f8) {
            puVar9 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto code_r0x02f8f820;
          }
          piVar18 = piVar18 + 4;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      puVar9 = (undefined8 *)func_0x00fac1f0(param_1,/*System.Collections.Generic.IList<UITweenLeaf>_TypeInfo*/ lRam0000000003d1d4f8,0);
code_r0x02f8f820:
      param_3 = (long *)puVar9[1];
      lVar15 = (*(code *)*puVar9)(param_1,unaff_x27);
      if ((lVar15 == 0) || (lVar15 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar15,0), lVar15 == 0)) break;
      param_3 = plRam0000000003d579d0;
      plVar10 = (long *)/*UnityEngine.GameObject$$GetComponentInParent<UITweenGroup>*/ func_0x0185d35c(lVar15,1);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar10,0);
      if (iVar7 != 0) goto code_r0x02f8f87c;
      unaff_x27 = (long *)(ulong)((int)unaff_x27 + 1);
    } while( true );
  }
  func_0x00f78af4();
  uVar11 = func_0x00f78b24();
  func_0x00f78ac0(uVar11,0);
code_r0x02f8fb0c:
  auVar35 = ___stack_chk_fail();
  uVar23 = auVar35._8_8_;
  plVar10 = auVar35._0_8_;
  plVar4 = &lStack_110;
  plVar3 = &lStack_110;
  puStack_a8 = &Core_UI2_UITweener__CalculateTweenDurationsAndDependencies;
  plVar21 = (long *)0x3ebc000;
  uVar17 = 0x3d25600;
  plVar27 = param_3;
  if ((bRam0000000003ebc69d & 1) == 0) {
    func_0x00f78a20(0x3d3c520);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69d = 1;
    plVar27 = param_3;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  param_3 = unaff_x21;
  if (*(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18) == 0) {
code_r0x02f8fc94:
    func_0x00f78af4();
  }
  else {
    plVar21 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18),
                                      uRam0000000003d3c520);
    if (auVar35._8_4_ < 1) {
      return plVar21;
    }
    plVar21 = (long *)0x0;
    param_3 = &lStack_108;
    uVar23 = uVar23 & 0xffffffff;
    unaff_x24 = &segment_command_00000020;
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar15 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar15 == 0) goto code_r0x02f8fc94;
    if (*(int *)(lVar15 + 0x18) != 0) {
      lStack_108 = *(long *)(lVar15 + 0x28);
      lStack_110 = *(long *)(lVar15 + 0x20);
      auVar35._8_8_ = plVar10;
      auVar35._0_8_ = lStack_110;
      uStack_f8 = *(undefined8 *)(lVar15 + 0x38);
      uStack_100 = *(undefined8 *)(lVar15 + 0x30);
      uStack_f0 = *(undefined8 *)(lVar15 + 0x40);
      puVar31 = &UNK_02f8fc10;
      unaff_x21 = param_3;
      goto code_r0x02f90330;
    }
  }
  uVar11 = func_0x00f78b24();
  plVar12 = (long *)func_0x00f78ac0(uVar11,0);
  puVar5 = auStack_1a0;
  plStack_148 = (long *)0x3d25600;
  puStack_118 = &Core_UI2_UITweener__PlayTweenAnimOnLeaves;
  pppppppuVar30 = &pppppppuStack_120;
  uVar17 = extraout_d0 & 0xffffffff;
  plVar20 = (long *)0x3ebc000;
  plVar13 = plVar12;
  plStack_168 = unaff_x27;
  uStack_160 = unaff_x26;
  uStack_158 = unaff_x25;
  psStack_150 = unaff_x24;
  uStack_140 = uVar23;
  plStack_138 = param_3;
  plStack_130 = plVar21;
  plStack_128 = plVar10;
  pppppppuStack_120 = &ppppppuStack_b0;
  if ((bRam0000000003ebc69f & 1) == 0) {
    func_0x00f78a20(0x3d51498);
    plVar13 = (long *)func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69f = 1;
  }
  iVar7 = (int)plVar27;
  if (iVar7 == 0) {
    if (param_5 == (long *)0x0) {
      return plVar13;
    }
    uVar11 = 0;
    plStack_168 = param_5;
    lVar15 = param_5[0xd];
    if (lVar15 == 0) {
      pplVar28 = &plStack_168;
      lVar29 = 1;
    }
    else {
      lVar29 = *(long *)(lVar15 + 0x18);
      if (lVar29 == 0) {
        return param_5;
      }
      pplVar28 = (long **)(lVar15 + 0x20);
    }
    lVar15 = 0;
    do {
      plVar21 = pplVar28[lVar15];
      pcVar26 = (code *)plVar21[2];
      plVar10 = (long *)plVar21[4];
      lVar16 = plVar21[5];
      if (*(short *)(lVar16 + 0x48) == -1) {
        func_0x00f78ad8(lVar16,uVar11);
      }
      iVar7 = func_0x00f78a4c(lVar16);
      if (iVar7 == 0) {
        if ((((plVar10 == (long *)0x0) || (*(short *)(lVar16 + 0x48) == -1)) ||
            ((*(byte *)(*plVar10 + 0x115) & 1) != 0)) || (param_5[3] == 0)) goto code_r0x016bb980;
        iVar7 = func_0x00f78a44(lVar16);
        iVar6 = func_0x00f78ec0(lVar16);
        if (iVar7 == 0) {
          uVar1 = *(ushort *)(lVar16 + 0x48);
          if (iVar6 == 0) {
            lVar16 = *plVar10 + (ulong)uVar1 * 0x10;
            auVar35 = (**(code **)(lVar16 + 0x138))(plVar10,*(undefined8 *)(lVar16 + 0x140));
            goto code_r0x016bb98c;
          }
          lVar16 = func_0x00f78a48(lVar16);
          lVar8 = *plVar10;
          uVar17 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar16) {
                puVar9 = (undefined8 *)(lVar8 + (long)(int)(*piVar18 + (uint)uVar1) * 0x10 + 0x138);
                goto code_r0x016bba50;
              }
              piVar18 = piVar18 + 4;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar10,lVar16,(ulong)uVar1);
code_r0x016bba50:
          pcVar26 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar6 == 0) {
            uVar11 = *(undefined8 *)(*plVar10 + (ulong)*(ushort *)(lVar16 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar8 = *plVar10;
            uVar17 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)(lVar16 + 0x18)) {
                  lVar8 = lVar8 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar16 + 0x48)) * 0x10 +
                          0x138;
                  goto code_r0x016bba28;
                }
                piVar18 = piVar18 + 4;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
            lVar8 = func_0x00fac1f0(plVar10);
code_r0x016bba28:
            uVar11 = *(undefined8 *)(lVar8 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar11,lVar16);
          pcVar26 = (code *)*puVar9;
        }
        auVar35 = (*pcVar26)(plVar10,puVar9);
      }
      else if (*(char *)(lVar16 + 0x4a) == '\0') {
        auVar35 = (*pcVar26)(lVar16);
      }
      else {
code_r0x016bb980:
        auVar35 = (*pcVar26)(plVar10,lVar16);
      }
code_r0x016bb98c:
      uVar11 = auVar35._8_8_;
      lVar15 = lVar15 + 1;
      if (lVar15 == lVar29) {
        return auVar35._0_8_;
      }
    } while( true );
  }
  if (extraout_x1 != (long *)0x0) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] != 0) {
      if (*(int *)(*(long *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18) < (int)extraout_x1[3]) {
        return /*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600;
      }
      if (iVar7 < 1) {
        if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
          func_0x00f78ad0();
        }
        /*System.Array$$Sort<float, UITweenLeaf>*/ func_0x01804f30(*(undefined8 *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17],extraout_x1,0,plVar27,
                        uRam0000000003d51498);
        if ((float)extraout_d0 < 0.0) {
          if (plVar12 == (long *)0x0) goto code_r0x02f8ff9c;
          uVar17 = (ulong)*(uint *)(plVar12 + 3);
        }
        uVar19 = iVar7 - 1;
        plVar27 = (long *)(ulong)uVar19;
        if (iVar7 < 1) {
          if (plVar12 != (long *)0x0) goto code_r0x02f8fef8;
        }
        else if (plVar12 != (long *)0x0) {
          plVar20 = (long *)0x0;
          unaff_x24 = (segment_command *)(extraout_x1 + 4);
          do {
            if (*(uint *)(extraout_x1 + 3) <= (uint)plVar20) goto code_r0x02f8ff90;
            if (*(long *)(unaff_x24->segname + (long)plVar20 * 8 + -8) == 0) goto code_r0x02f8ff9c;
            Core_UI2_UITweenLeaf__PerformTweenAnimation
                      ((float)uVar17 + *(float *)((long)plVar12 + 0x44) * (float)(int)(uint)plVar20,
                       *(long *)(unaff_x24->segname + (long)plVar20 * 8 + -8),plVar12,param_4);
            plVar20 = (long *)((long)plVar20 + 1);
          } while (iVar7 != (int)plVar20);
code_r0x02f8fef8:
          fVar32 = (float)Core_UI2_UITweenAnimation__GetParam(_UNK_033f82c4,plVar12,0);
          if (*(uint *)(extraout_x1 + 3) <= uVar19) goto code_r0x02f8ff90;
          if (extraout_x1[(long)(int)uVar19 + 4] != 0) {
            fVar34 = *(float *)((long)plVar12 + 0x44);
            uVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(extraout_x1[(long)(int)uVar19 + 4],0);
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
            }
            uVar17 = (ulong)(uint)((float)uVar17 + fVar32 + fVar34 * (float)(int)uVar19);
            plVar20 = plStack_128;
            plVar12 = plStack_130;
            plVar10 = plStack_138;
            param_4 = uStack_140;
            plVar27 = plStack_148;
            unaff_x24 = psStack_150;
            pppppppuVar30 = pppppppuStack_120;
            puVar31 = puStack_118;
            goto code_r0x02f8ffa0;
          }
        }
        goto code_r0x02f8ff9c;
      }
      iStack_19c = iVar7;
      plStack_198 = param_5;
      if ((extraout_x1[3] & 0xffffffffU) == 0) {
code_r0x02f8ff90:
        uVar11 = func_0x00f78b24();
        func_0x00f78ac0(uVar11,0);
        goto code_r0x02f8ff9c;
      }
      plVar20 = extraout_x1 + 4;
      unaff_x24 = (segment_command *)*plVar20;
      if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
         ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
        func_0x00f78ad0();
      }
      if (plVar12 == (long *)0x0) goto code_r0x02f8ff9c;
      auVar36._8_4_ = (int)plVar12[8];
      auVar36._0_8_ = unaff_x24;
      puVar31 = &UNK_02f8fdb8;
      goto code_r0x02f906e0;
    }
  }
code_r0x02f8ff9c:
  unaff_d8 = uVar17;
  uVar17 = func_0x00f78af4();
  plVar3 = (long *)auStack_1a0;
  uVar11 = extraout_x1_00;
  plVar10 = extraout_x1;
  puVar31 = &Core_UI2_UITweener__TryCreateOnCompleteVirtualTween;
code_r0x02f8ffa0:
  *(undefined8 *)((long)plVar3 + -0x50) = unaff_d9;
  *(ulong *)((long)plVar3 + -0x48) = unaff_d8;
  *(segment_command **)((long)plVar3 + -0x40) = unaff_x24;
  *(long **)((long)plVar3 + -0x38) = plVar27;
  *(ulong *)((long)plVar3 + -0x30) = param_4;
  *(long **)((long)plVar3 + -0x28) = plVar10;
  *(long **)((long)plVar3 + -0x20) = plVar12;
  *(long **)((long)plVar3 + -0x18) = plVar20;
  *(undefined8 ********)((long)plVar3 + -0x10) = pppppppuVar30;
  *(undefined **)((long)plVar3 + -8) = puVar31;
  if ((bRam0000000003ebc6a0 & 1) == 0) {
    func_0x00f78a20(uVar17,0x3d40f08,uVar11);
    func_0x00f78a20(0x3d1ea28);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6b0);
    func_0x00f78a20(0x3d5e700);
    func_0x00f78a20(0x3d5e868);
    func_0x00f78a20(0x3d64820);
    func_0x00f78a20(0x3d64828);
    func_0x00f78a20(0x3d294a0);
    func_0x00f78a20(0x3d29498);
    bRam0000000003ebc6a0 = 1;
  }
  plVar10 = (long *)func_0x00f78aec(/*Core.UI2.UITweener.<>c__DisplayClass20_0_TypeInfo*/ uRam0000000003d294a0);
  return plVar10;
code_r0x02f905e0:
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar10 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18);
  plVar21 = (long *)func_0x00f78aec(/*Core.UI2.TweenDependencyIndexPair_TypeInfo*/ uRam0000000003d25430);
  Core_UI2_TweenDependencyIndexPair___ctor(plVar21,plVar20,plVar12);
  if (plVar10 == (long *)0x0) goto code_r0x02f906d0;
  puVar31 = &UNK_02f90640;
  puVar2 = (undefined1 *)((long)plVar4 + -0xd0);
  plVar27 = plVar10;
  plVar3 = plVar21;
code_r0x02427110:
  *(long **)(puVar2 + -0x20) = plVar12;
  *(long **)(puVar2 + -0x18) = plVar20;
  *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar30;
  *(undefined **)(puVar2 + -8) = puVar31;
  lVar15 = plVar10[2];
  puVar9 = puRam0000000003d3c518;
  if (lVar15 == 0) {
code_r0x0242716c:
    plVar21 = plVar12;
    plVar10 = plVar20;
    plVar13 = (long *)func_0x00f78af4();
    lVar15 = extraout_x9;
    uVar19 = extraout_w8;
code_r0x02427170:
    *(uint *)(plVar10 + 3) = uVar19 + 1;
  }
  else {
    uVar19 = *(uint *)(plVar10 + 3);
    plVar13 = plVar10;
    if (uVar19 != *(uint *)(lVar15 + 0x18)) goto code_r0x02427170;
    puVar9 = *(undefined8 **)(*(long *)(puRam0000000003d3c518[3] + 0xc0) + 0x60);
    plVar13 = (long *)(*(code *)*puVar9)(plVar10,uVar19 + 1);
    lVar15 = plVar10[2];
    uVar19 = *(uint *)(plVar10 + 3);
    *(uint *)(plVar10 + 3) = uVar19 + 1;
    plVar20 = plVar10;
    plVar12 = plVar21;
    if (lVar15 == 0) goto code_r0x0242716c;
  }
  if (uVar19 < *(uint *)(lVar15 + 0x18)) {
    *(long **)(lVar15 + (long)(int)uVar19 * 8 + 0x20) = plVar21;
    *(int *)((long)plVar10 + 0x1c) = *(int *)((long)plVar10 + 0x1c) + 1;
    return plVar13;
  }
  uVar22 = func_0x00f78b24();
  auVar35 = func_0x00f78ac0(uVar22,0);
  lVar16 = auVar35._8_8_;
  lVar15 = auVar35._0_8_;
  *(long *)(puVar2 + -0x60) = lVar29;
  *(undefined8 *)(puVar2 + -0x58) = uVar11;
  *(long **)(puVar2 + -0x50) = plVar3;
  *(long **)(puVar2 + -0x48) = plVar27;
  *(long **)(puVar2 + -0x40) = plVar21;
  *(long **)(puVar2 + -0x38) = plVar10;
  *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x28) =
       &System_Collections_Generic_List_object___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x48))(lVar16,0x14);
  if (lVar15 != 0) {
    pcVar26 = (code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x28);
    lVar29 = *(long *)(*(long *)(puVar9[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar29 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar29);
    }
    if (lVar16 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = func_0x00f78adc(lVar16,lVar29);
      if (lVar8 == 0) {
        func_0x00f78e5c(lVar16,lVar29);
        goto code_r0x0242734c;
      }
    }
    (*pcVar26)(lVar15,lVar8,*(undefined8 *)(*(long *)(puVar9[3] + 0xc0) + 0x28));
    iVar7 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x68))(lVar15);
    return (long *)(ulong)(iVar7 - 1);
  }
  func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
  pcVar26 = (code *)SoftwareBreakpoint(1,0x2427350);
  (*pcVar26)();
code_r0x02f8f87c:
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)&stack0xffffffffffffff20;
  puStack_a8 = &UNK_02f8f8a4;
  if ((bRam0000000003ebc6a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc6a2 = 1;
  }
  plVar21 = (long *)0x0;
  uVar23 = 0x3d25600;
  uVar17 = 0x3d23990;
  unaff_x24 = &segment_command_00000020;
  while( true ) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar15 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar15 == 0) break;
    if ((long)*(int *)(lVar15 + 0x18) <= (long)plVar21) {
      return (long *)0xffffffff;
    }
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
      lVar15 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
      if (lVar15 == 0) break;
    }
    if ((long *)(ulong)*(uint *)(lVar15 + 0x18) <= plVar21) goto code_r0x02f90324;
    iVar7 = Core_UI2_PlannedTweenData__get_IsValid(unaff_x24->segname + lVar15 + -8);
    if (iVar7 == 0) {
      return (long *)0xffffffff;
    }
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar15 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar15 == 0) break;
    if ((long *)(ulong)*(uint *)(lVar15 + 0x18) <= plVar21) goto code_r0x02f90324;
    unaff_x21 = *(long **)(unaff_x24->segname + lVar15 + -8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_3 = (long *)0x0;
    uVar14 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(unaff_x21,plVar10);
    if ((uVar14 & 1) != 0) {
      return plVar21;
    }
    plVar21 = (long *)((long)plVar21 + 1);
    unaff_x24 = (segment_command *)&unaff_x24->fileoff;
  }
  func_0x00f78af4();
code_r0x02f90324:
  uVar11 = func_0x00f78b24();
  puVar31 = &Core_UI2_UITweener__TryResolveTweenAnim;
  auVar35 = func_0x00f78ac0(uVar11,0);
code_r0x02f90330:
  plVar3 = auVar35._8_8_;
  puVar2 = (undefined1 *)((long)plVar4 + -0x40);
  *(segment_command **)((long)plVar4 + -0x40) = unaff_x24;
  *(ulong *)((long)plVar4 + -0x38) = uVar17;
  *(ulong *)((long)plVar4 + -0x30) = uVar23;
  *(long **)((long)plVar4 + -0x28) = unaff_x21;
  *(long **)((long)plVar4 + -0x20) = plVar21;
  *(long **)((long)plVar4 + -0x18) = plVar10;
  *(undefined8 ********)((long)plVar4 + -0x10) = &ppppppuStack_b0;
  *(undefined **)((long)plVar4 + -8) = puVar31;
  if ((auVar35._0_8_ != 0) && (uVar23 = *(ulong *)(auVar35._0_8_ + 0x18), uVar23 != 0)) {
    uVar19 = *(uint *)(uVar23 + 0x18);
    unaff_x21 = (long *)(ulong)(0 < (int)uVar19);
    if (0 < (int)uVar19) {
      uVar17 = 0;
      do {
        uVar25 = (uint)uVar17;
        plVar10 = param_3;
        if (uVar19 <= uVar25) goto code_r0x02f903d8;
        unaff_x24 = *(segment_command **)(uVar23 + (long)(int)uVar25 * 8 + 0x20);
        plVar21 = plVar3;
        if ((unaff_x24 == (segment_command *)0x0) || (*(long *)(unaff_x24->segname + 8) == 0))
        goto code_r0x02f903d4;
        iVar7 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(unaff_x24->segname + 8),plVar3,3,0);
        if (iVar7 != 0) goto code_r0x02f903b8;
        uVar25 = uVar25 + 1;
        uVar17 = (ulong)uVar25;
        uVar19 = *(uint *)(uVar23 + 0x18);
        unaff_x21 = (long *)(ulong)((int)uVar25 < (int)uVar19);
      } while ((int)uVar25 < (int)uVar19);
    }
    unaff_x24 = (segment_command *)0x0;
code_r0x02f903b8:
    *param_3 = (long)unaff_x24;
    return unaff_x21;
  }
code_r0x02f903d4:
  plVar3 = plVar21;
  func_0x00f78af4();
code_r0x02f903d8:
  uVar11 = func_0x00f78b24();
  plVar20 = (long *)func_0x00f78ac0(uVar11,0);
  puVar5 = (undefined1 *)((long)plVar4 + -0xd0);
  *(undefined8 *)((long)plVar4 + -0xa0) = unaff_x28;
  *(long **)((long)plVar4 + -0x98) = unaff_x27;
  *(undefined8 *)((long)plVar4 + -0x90) = unaff_x26;
  *(undefined8 *)((long)plVar4 + -0x88) = unaff_x25;
  *(segment_command **)((long)plVar4 + -0x80) = unaff_x24;
  *(ulong *)((long)plVar4 + -0x78) = uVar17;
  *(ulong *)((long)plVar4 + -0x70) = uVar23;
  *(long **)((long)plVar4 + -0x68) = unaff_x21;
  *(long **)((long)plVar4 + -0x60) = plVar3;
  *(long **)((long)plVar4 + -0x58) = plVar10;
  *(undefined1 **)((long)plVar4 + -0x50) = (undefined1 *)((long)plVar4 + -0x10);
  *(undefined **)((long)plVar4 + -0x48) = &Core_UI2_UITweener__DiscoverDependencies;
  pppppppuVar30 = (undefined8 *******)((long)plVar4 + -0x50);
  plVar12 = (long *)0x3ebc000;
  uVar11 = 0x3d25600;
  if ((bRam0000000003ebc69e & 1) == 0) {
    func_0x00f78a20(0x3d3c518);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25430);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69e = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  lVar15 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
  if (lVar15 == 0) {
code_r0x02f906d0:
    func_0x00f78af4();
  }
  else {
    uVar19 = (uint)plVar20;
    if (uVar19 < *(uint *)(lVar15 + 0x18)) {
      lVar29 = (long)(int)uVar19;
      lVar15 = *(long *)(lVar15 + lVar29 * 0x28 + 0x28);
      if (lVar15 != 0) {
        uVar22 = *(undefined8 *)(lVar15 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar22,0);
        if (iVar7 != 0) {
          plVar12 = (long *)0x0;
          lVar15 = 0x20;
          do {
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
            }
            lVar16 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
            if (lVar16 == 0) goto code_r0x02f906d0;
            if ((long)*(int *)(lVar16 + 0x18) <= (long)plVar12) {
              return /*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600;
            }
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
              lVar16 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
              if (lVar16 == 0) goto code_r0x02f906d0;
            }
            if ((long *)(ulong)*(uint *)(lVar16 + 0x18) <= plVar12) goto code_r0x02f906d4;
            puVar9 = (undefined8 *)(lVar16 + lVar15);
            uVar22 = *puVar9;
            uVar33 = puVar9[3];
            uVar24 = puVar9[2];
            *(undefined8 *)((long)plVar4 + -200) = puVar9[1];
            *(undefined8 *)((long)plVar4 + -0xd0) = uVar22;
            *(undefined8 *)((long)plVar4 + -0xb8) = uVar33;
            *(undefined8 *)((long)plVar4 + -0xc0) = uVar24;
            *(undefined8 *)((long)plVar4 + -0xb0) = puVar9[4];
            plVar10 = (long *)Core_UI2_PlannedTweenData__get_IsValid
                                        ((undefined1 *)((long)plVar4 + -0xd0));
            if ((int)plVar10 == 0) {
              return plVar10;
            }
            if ((long *)((ulong)plVar20 & 0xffffffff) != plVar12) {
              uVar22 = *(undefined8 *)((long)plVar4 + -0xd0);
              if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
                 ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
                func_0x00f78ad0();
              }
              lVar16 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
              if (lVar16 == 0) goto code_r0x02f906d0;
              if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x02f906d4;
              lVar16 = *(long *)(lVar16 + lVar29 * 0x28 + 0x28);
              if (lVar16 == 0) goto code_r0x02f906d0;
              uVar24 = *(undefined8 *)(lVar16 + 0x20);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar17 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar22,uVar24,0);
              if ((uVar17 & 1) == 0) goto code_r0x02f905e0;
            }
            plVar12 = (long *)((long)plVar12 + 1);
            lVar15 = lVar15 + 0x28;
          } while( true );
        }
        if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
          func_0x00f78ad0();
        }
        plVar10 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18);
        plVar21 = (long *)Core_UI2_TweenDependencyIndexPair__CreateEmpty(plVar20);
        plVar12 = (long *)0x0;
        if (plVar10 != (long *)0x0) {
          pppppppuVar30 = *(undefined8 ********)((long)plVar4 + -0x50);
          puVar31 = *(undefined **)((long)plVar4 + -0x48);
          plVar12 = *(long **)((long)plVar4 + -0x60);
          plVar20 = *(long **)((long)plVar4 + -0x58);
          plVar3 = *(long **)((long)plVar4 + -0x70);
          plVar27 = *(long **)((long)plVar4 + -0x68);
          lVar29 = *(long *)((long)plVar4 + -0x80);
          uVar11 = *(undefined8 *)((long)plVar4 + -0x78);
          goto code_r0x02427110;
        }
      }
      goto code_r0x02f906d0;
    }
  }
code_r0x02f906d4:
  uVar11 = func_0x00f78b24();
  puVar31 = &Core_UI2_UITweener__CalculateOrderRankingForLeaf;
  auVar36 = func_0x00f78ac0(uVar11,0);
code_r0x02f906e0:
  lVar15 = auVar36._0_8_;
  *(long **)(puVar5 + -0x20) = plVar12;
  *(long **)(puVar5 + -0x18) = plVar20;
  *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar30;
  *(undefined **)(puVar5 + -8) = puVar31;
  if ((lVar15 != 0) && (lVar29 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar15,0), lVar29 != 0)) {
    plVar10 = (long *)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar29,0);
    switch(auVar36._8_4_) {
    case 1:
      lVar15 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar15,0);
      if (lVar15 != 0) {
        plVar10 = (long *)/*UnityEngine.Transform$$GetSiblingIndex*/ func_0x03277144(lVar15,0);
        return plVar10;
      }
      goto code_r0x02f9078c;
    case 3:
      break;
    case 4:
      break;
    case 6:
    case 9:
      break;
    case 7:
      break;
    case 8:
    }
    return plVar10;
  }
code_r0x02f9078c:
  plVar10 = (long *)func_0x00f78af4();
  return plVar10;
}



// ============================================================
// RVA: 0x2f8fb10 | Core.UI2.UITweener.CalculateTweenDurationsAndDependencies
// ============================================================

/* WARNING: Possible PIC construction at 0x02f8fc0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fc68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fdb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f90068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f901a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f9063c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8fdb8) */
/* WARNING: Removing unreachable block (ram,0x02f8fdbc) */
/* WARNING: Removing unreachable block (ram,0x02f8fdc8) */
/* WARNING: Removing unreachable block (ram,0x02f8fe48) */
/* WARNING: Removing unreachable block (ram,0x02f8fdd8) */
/* WARNING: Removing unreachable block (ram,0x02f8fde8) */
/* WARNING: Removing unreachable block (ram,0x02f8fc10) */
/* WARNING: Removing unreachable block (ram,0x02f8fc6c) */
/* WARNING: Removing unreachable block (ram,0x02f8fc14) */
/* WARNING: Removing unreachable block (ram,0x02f8fc28) */
/* WARNING: Removing unreachable block (ram,0x02f8fc30) */
/* WARNING: Removing unreachable block (ram,0x02f8fc38) */
/* WARNING: Removing unreachable block (ram,0x02f8fc44) */
/* WARNING: Removing unreachable block (ram,0x02f8fc50) */
/* WARNING: Removing unreachable block (ram,0x02f9006c) */
/* WARNING: Removing unreachable block (ram,0x02f901c4) */
/* WARNING: Removing unreachable block (ram,0x02f901ec) */
/* WARNING: Removing unreachable block (ram,0x02f9020c) */
/* WARNING: Removing unreachable block (ram,0x02f90224) */
/* WARNING: Removing unreachable block (ram,0x02f90230) */
/* WARNING: Removing unreachable block (ram,0x02f90238) */
/* WARNING: Removing unreachable block (ram,0x02f90240) */
/* WARNING: Removing unreachable block (ram,0x02f9024c) */
/* WARNING: Removing unreachable block (ram,0x02f90258) */
/* WARNING: Removing unreachable block (ram,0x02f90260) */
/* WARNING: Removing unreachable block (ram,0x02f90268) */
/* WARNING: Removing unreachable block (ram,0x02f9027c) */
/* WARNING: Removing unreachable block (ram,0x02f90288) */
/* WARNING: Removing unreachable block (ram,0x02f90304) */
/* WARNING: Removing unreachable block (ram,0x02f90294) */
/* WARNING: Removing unreachable block (ram,0x02f902a0) */
/* WARNING: Removing unreachable block (ram,0x02f902a8) */
/* WARNING: Removing unreachable block (ram,0x02f902b0) */
/* WARNING: Removing unreachable block (ram,0x02f90320) */
/* WARNING: Removing unreachable block (ram,0x02f902bc) */
/* WARNING: Removing unreachable block (ram,0x02f90324) */
/* WARNING: Removing unreachable block (ram,0x02f902c8) */
/* WARNING: Removing unreachable block (ram,0x02f902d8) */
/* WARNING: Removing unreachable block (ram,0x02f902e0) */
/* WARNING: Removing unreachable block (ram,0x02f902e4) */
/* WARNING: Removing unreachable block (ram,0x02f90308) */
/* WARNING: Removing unreachable block (ram,0x02f902f8) */
/* WARNING: Removing unreachable block (ram,0x02f90070) */
/* WARNING: Removing unreachable block (ram,0x02f90078) */
/* WARNING: Removing unreachable block (ram,0x02f9007c) */
/* WARNING: Removing unreachable block (ram,0x02f90198) */
/* WARNING: Removing unreachable block (ram,0x02f90080) */
/* WARNING: Removing unreachable block (ram,0x02f90094) */
/* WARNING: Removing unreachable block (ram,0x02f9009c) */
/* WARNING: Removing unreachable block (ram,0x02f900a4) */
/* WARNING: Removing unreachable block (ram,0x02f900b0) */
/* WARNING: Removing unreachable block (ram,0x02f900b8) */
/* WARNING: Removing unreachable block (ram,0x02f900c0) */
/* WARNING: Removing unreachable block (ram,0x02f900cc) */
/* WARNING: Removing unreachable block (ram,0x02f90110) */
/* WARNING: Removing unreachable block (ram,0x02f901a4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Core_UI2_UITweener__CalculateTweenDurationsAndDependencies
                 (long *param_1,long *param_2,ulong param_3,long *param_4,long *param_5)

{
  ushort uVar1;
  segment_command **ppsVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar6;
  int iVar5;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar12;
  uint extraout_w8;
  long lVar13;
  long lVar14;
  long extraout_x9;
  int *piVar15;
  uint uVar16;
  long *plVar17;
  long *plVar18;
  long *unaff_x21;
  long lVar19;
  undefined8 uVar20;
  uint uVar21;
  code *pcVar22;
  undefined1 *puVar23;
  segment_command *unaff_x24;
  segment_command *psVar24;
  undefined8 *******pppppppuVar25;
  undefined8 *******pppppppuVar26;
  undefined *puVar27;
  float fVar28;
  ulong extraout_d0;
  ulong uVar29;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  segment_command *psStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar10 = &lStack_70;
  plVar18 = (long *)0x3ebc000;
  uVar29 = 0x3d25600;
  if ((bRam0000000003ebc69d & 1) == 0) {
    func_0x00f78a20(0x3d3c520);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69d = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plStack_88 = param_1;
  pppppppuStack_80 = (undefined8 *******)&stack0xfffffffffffffff0;
  if (*(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18) != 0) {
    plVar18 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18),
                                      uRam0000000003d3c520);
    if ((int)param_2 < 1) {
      return plVar18;
    }
    plVar18 = (long *)0x0;
    unaff_x21 = &lStack_68;
    param_2 = (long *)((ulong)param_2 & 0xffffffff);
    unaff_x24 = &segment_command_00000020;
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar13 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar13 == 0) goto LAB_02f8fc94;
    if (*(int *)(lVar13 + 0x18) == 0) goto LAB_02f8fc98;
    lStack_68 = *(long *)(lVar13 + 0x28);
    lStack_70 = *(long *)(lVar13 + 0x20);
    uStack_58 = *(undefined8 *)(lVar13 + 0x38);
    uStack_60 = *(undefined8 *)(lVar13 + 0x30);
    uStack_50 = *(undefined8 *)(lVar13 + 0x40);
    ppsVar2 = &psStack_b0;
    psStack_b0 = &segment_command_00000020;
    uStack_a8 = 0x3d25600;
    plStack_90 = (long *)0x0;
    puStack_78 = (undefined *)0x2f8fc10;
    pppppppuVar25 = &pppppppuStack_80;
    plVar10 = param_1;
    plVar9 = unaff_x21;
    plStack_a0 = param_2;
    plStack_98 = unaff_x21;
    if ((lStack_70 != 0) && (param_2 = *(long **)(lStack_70 + 0x18), param_2 != (long *)0x0)) {
      uVar16 = *(uint *)(param_2 + 3);
      plVar9 = (long *)(ulong)(0 < (int)uVar16);
      if (0 < (int)uVar16) {
        uVar29 = 0;
        do {
          uVar21 = (uint)uVar29;
          plVar10 = unaff_x21;
          if (uVar16 <= uVar21) goto code_r0x02f903d8;
          unaff_x24 = (segment_command *)param_2[(long)(int)uVar21 + 4];
          plVar18 = param_1;
          if ((unaff_x24 == (segment_command *)0x0) || (*(long *)(unaff_x24->segname + 8) == 0))
          goto code_r0x02f903d4;
          iVar5 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(unaff_x24->segname + 8),param_1,3,0);
          if (iVar5 != 0) {
            return plVar9;
          }
          uVar21 = uVar21 + 1;
          uVar29 = (ulong)uVar21;
          uVar16 = *(uint *)(param_2 + 3);
          plVar9 = (long *)(ulong)((int)uVar21 < (int)uVar16);
        } while ((int)uVar21 < (int)uVar16);
      }
      return plVar9;
    }
code_r0x02f903d4:
    param_1 = plVar18;
    func_0x00f78af4();
code_r0x02f903d8:
    uVar7 = func_0x00f78b24();
    plVar17 = (long *)func_0x00f78ac0(uVar7,0);
    puVar3 = &uStack_140;
    puVar27 = &Core_UI2_UITweener__DiscoverDependencies;
    pppppppuVar26 = (undefined8 *******)&stack0xffffffffffffff40;
    plVar8 = (long *)0x3ebc000;
    if ((bRam0000000003ebc69e & 1) == 0) {
      func_0x00f78a20(0x3d3c518);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d25430);
      func_0x00f78a20(0x3d25600);
      bRam0000000003ebc69e = 1;
    }
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar13 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar13 == 0) {
code_r0x02f906d0:
      func_0x00f78af4();
    }
    else {
      uVar16 = (uint)plVar17;
      if (uVar16 < *(uint *)(lVar13 + 0x18)) {
        psVar24 = (segment_command *)(long)(int)uVar16;
        lVar13 = *(long *)(lVar13 + (long)psVar24 * 0x28 + 0x28);
        if (lVar13 != 0) {
          uVar7 = *(undefined8 *)(lVar13 + 0x20);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar7,0);
          if (iVar5 != 0) {
            param_1 = (long *)0x0;
            lVar13 = 0x20;
            do {
              if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
                 ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
                func_0x00f78ad0();
              }
              lVar14 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
              plVar8 = param_1;
              if (lVar14 == 0) goto code_r0x02f906d0;
              if ((long)*(int *)(lVar14 + 0x18) <= (long)param_1) {
                return /*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600;
              }
              if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
                 ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
                func_0x00f78ad0();
                lVar14 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
                if (lVar14 == 0) goto code_r0x02f906d0;
              }
              if ((long *)(ulong)*(uint *)(lVar14 + 0x18) <= param_1) goto code_r0x02f906d4;
              puVar12 = (undefined8 *)(lVar14 + lVar13);
              uStack_138 = puVar12[1];
              uStack_140 = *puVar12;
              uStack_128 = puVar12[3];
              uStack_130 = puVar12[2];
              uStack_120 = puVar12[4];
              plVar10 = (long *)Core_UI2_PlannedTweenData__get_IsValid(&uStack_140);
              uVar7 = uStack_140;
              if ((int)plVar10 == 0) {
                return plVar10;
              }
              if ((long *)((ulong)plVar17 & 0xffffffff) != param_1) {
                if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
                   ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
                  func_0x00f78ad0();
                }
                lVar14 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
                if (lVar14 == 0) goto code_r0x02f906d0;
                if (*(uint *)(lVar14 + 0x18) <= uVar16) goto code_r0x02f906d4;
                lVar14 = *(long *)(lVar14 + (long)psVar24 * 0x28 + 0x28);
                if (lVar14 == 0) goto code_r0x02f906d0;
                uVar20 = *(undefined8 *)(lVar14 + 0x20);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar29 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,uVar20,0);
                if ((uVar29 & 1) == 0) goto code_r0x02f905e0;
              }
              param_1 = (long *)((long)param_1 + 1);
              lVar13 = lVar13 + 0x28;
            } while( true );
          }
          if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
             ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
            func_0x00f78ad0();
          }
          plVar18 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18);
          plVar11 = (long *)Core_UI2_TweenDependencyIndexPair__CreateEmpty(plVar17);
          plVar8 = (long *)0x0;
          if (plVar18 != (long *)0x0) goto code_r0x02427110;
        }
        goto code_r0x02f906d0;
      }
    }
code_r0x02f906d4:
    uVar7 = func_0x00f78b24();
    puVar27 = &Core_UI2_UITweener__CalculateOrderRankingForLeaf;
    auVar32 = func_0x00f78ac0(uVar7,0);
code_r0x02f906e0:
    lVar13 = auVar32._0_8_;
    *(long **)((long)puVar3 + -0x20) = plVar8;
    *(long **)((long)puVar3 + -0x18) = plVar17;
    *(undefined8 ********)((long)puVar3 + -0x10) = pppppppuVar26;
    *(undefined **)((long)puVar3 + -8) = puVar27;
    if ((lVar13 != 0) && (lVar14 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar13,0), lVar14 != 0)) {
      plVar10 = (long *)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar14,0);
      switch(auVar32._8_4_) {
      case 1:
        lVar13 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar13,0);
        if (lVar13 != 0) {
          plVar10 = (long *)/*UnityEngine.Transform$$GetSiblingIndex*/ func_0x03277144(lVar13,0);
          return plVar10;
        }
        goto code_r0x02f9078c;
      case 3:
        break;
      case 4:
        break;
      case 6:
      case 9:
        break;
      case 7:
        break;
      case 8:
      }
      return plVar10;
    }
code_r0x02f9078c:
    plVar10 = (long *)func_0x00f78af4();
    return plVar10;
  }
LAB_02f8fc94:
  func_0x00f78af4();
LAB_02f8fc98:
  uVar7 = func_0x00f78b24();
  plVar8 = (long *)func_0x00f78ac0(uVar7,0);
  puVar3 = (undefined8 *)&stack0xffffffffffffff00;
  uStack_a8 = 0x3d25600;
  puStack_78 = &Core_UI2_UITweener__PlayTweenAnimOnLeaves;
  pppppppuVar26 = &pppppppuStack_80;
  uVar29 = extraout_d0 & 0xffffffff;
  plVar17 = (long *)0x3ebc000;
  plVar9 = plVar8;
  psStack_b0 = unaff_x24;
  plStack_a0 = param_2;
  plStack_98 = unaff_x21;
  plStack_90 = plVar18;
  if ((bRam0000000003ebc69f & 1) == 0) {
    func_0x00f78a20(0x3d51498);
    plVar9 = (long *)func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69f = 1;
  }
  iVar5 = (int)param_3;
  if (iVar5 == 0) {
    if (param_5 == (long *)0x0) {
      return plVar9;
    }
    uVar7 = 0;
    lVar13 = param_5[0xd];
    if (lVar13 == 0) {
      puVar23 = &stack0xffffffffffffff38;
      lVar14 = 1;
    }
    else {
      lVar14 = *(long *)(lVar13 + 0x18);
      if (lVar14 == 0) {
        return param_5;
      }
      puVar23 = (undefined1 *)(lVar13 + 0x20);
    }
    lVar13 = 0;
    do {
      lVar19 = *(long *)(puVar23 + lVar13 * 8);
      pcVar22 = *(code **)(lVar19 + 0x10);
      plVar10 = *(long **)(lVar19 + 0x20);
      lVar19 = *(long *)(lVar19 + 0x28);
      if (*(short *)(lVar19 + 0x48) == -1) {
        func_0x00f78ad8(lVar19,uVar7);
      }
      iVar5 = func_0x00f78a4c(lVar19);
      if (iVar5 == 0) {
        if ((((plVar10 == (long *)0x0) || (*(short *)(lVar19 + 0x48) == -1)) ||
            ((*(byte *)(*plVar10 + 0x115) & 1) != 0)) || (param_5[3] == 0)) goto code_r0x016bb980;
        iVar5 = func_0x00f78a44(lVar19);
        iVar4 = func_0x00f78ec0(lVar19);
        if (iVar5 == 0) {
          uVar1 = *(ushort *)(lVar19 + 0x48);
          if (iVar4 == 0) {
            lVar19 = *plVar10 + (ulong)uVar1 * 0x10;
            auVar31 = (**(code **)(lVar19 + 0x138))(plVar10,*(undefined8 *)(lVar19 + 0x140));
            goto code_r0x016bb98c;
          }
          lVar19 = func_0x00f78a48(lVar19);
          lVar6 = *plVar10;
          uVar29 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar29 != 0) {
            piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar19) {
                puVar12 = (undefined8 *)(lVar6 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138)
                ;
                goto code_r0x016bba50;
              }
              piVar15 = piVar15 + 4;
              uVar29 = uVar29 - 1;
            } while (uVar29 != 0);
          }
          puVar12 = (undefined8 *)func_0x00fac1f0(plVar10,lVar19,(ulong)uVar1);
code_r0x016bba50:
          pcVar22 = (code *)*puVar12;
          puVar12 = (undefined8 *)puVar12[1];
        }
        else {
          if (iVar4 == 0) {
            uVar7 = *(undefined8 *)(*plVar10 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar6 = *plVar10;
            uVar29 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar29 != 0) {
              piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar19 + 0x18)) {
                  lVar6 = lVar6 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar19 + 0x48)) * 0x10 +
                          0x138;
                  goto code_r0x016bba28;
                }
                piVar15 = piVar15 + 4;
                uVar29 = uVar29 - 1;
              } while (uVar29 != 0);
            }
            lVar6 = func_0x00fac1f0(plVar10);
code_r0x016bba28:
            uVar7 = *(undefined8 *)(lVar6 + 8);
          }
          puVar12 = (undefined8 *)func_0x00f78acc(uVar7,lVar19);
          pcVar22 = (code *)*puVar12;
        }
        auVar31 = (*pcVar22)(plVar10,puVar12);
      }
      else if (*(char *)(lVar19 + 0x4a) == '\0') {
        auVar31 = (*pcVar22)(lVar19);
      }
      else {
code_r0x016bb980:
        auVar31 = (*pcVar22)(plVar10,lVar19);
      }
code_r0x016bb98c:
      uVar7 = auVar31._8_8_;
      lVar13 = lVar13 + 1;
      if (lVar13 == lVar14) {
        return auVar31._0_8_;
      }
    } while( true );
  }
  if (extraout_x1 != (long *)0x0) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] != 0) {
      if (*(int *)(*(long *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18) < (int)extraout_x1[3]) {
        return /*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600;
      }
      if (iVar5 < 1) {
        if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
          func_0x00f78ad0();
        }
        /*System.Array$$Sort<float, UITweenLeaf>*/ func_0x01804f30(*(undefined8 *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17],extraout_x1,0,param_3,
                        uRam0000000003d51498);
        if ((float)extraout_d0 < 0.0) {
          if (plVar8 == (long *)0x0) goto code_r0x02f8ff9c;
          uVar29 = (ulong)*(uint *)(plVar8 + 3);
        }
        uVar16 = iVar5 - 1;
        param_3 = (ulong)uVar16;
        if (iVar5 < 1) {
          if (plVar8 != (long *)0x0) goto code_r0x02f8fef8;
        }
        else if (plVar8 != (long *)0x0) {
          plVar17 = (long *)0x0;
          unaff_x24 = (segment_command *)(extraout_x1 + 4);
          do {
            if (*(uint *)(extraout_x1 + 3) <= (uint)plVar17) goto code_r0x02f8ff90;
            if (*(long *)(unaff_x24->segname + (long)plVar17 * 8 + -8) == 0) goto code_r0x02f8ff9c;
            Core_UI2_UITweenLeaf__PerformTweenAnimation
                      ((float)uVar29 + *(float *)((long)plVar8 + 0x44) * (float)(int)(uint)plVar17,
                       *(long *)(unaff_x24->segname + (long)plVar17 * 8 + -8),plVar8,param_4);
            plVar17 = (long *)((long)plVar17 + 1);
          } while (iVar5 != (int)plVar17);
code_r0x02f8fef8:
          fVar28 = (float)Core_UI2_UITweenAnimation__GetParam(_UNK_033f82c4,plVar8,0);
          if (*(uint *)(extraout_x1 + 3) <= uVar16) goto code_r0x02f8ff90;
          if (extraout_x1[(long)(int)uVar16 + 4] != 0) {
            fVar30 = *(float *)((long)plVar8 + 0x44);
            uVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(extraout_x1[(long)(int)uVar16 + 4],0);
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
            }
            uVar29 = (ulong)(uint)((float)uVar29 + fVar28 + fVar30 * (float)(int)uVar16);
            plVar17 = plStack_88;
            plVar8 = plStack_90;
            plVar18 = plStack_98;
            param_4 = plStack_a0;
            param_3 = uStack_a8;
            unaff_x24 = psStack_b0;
            pppppppuVar26 = pppppppuStack_80;
            puVar27 = puStack_78;
            goto code_r0x02f8ffa0;
          }
        }
      }
      else if ((extraout_x1[3] & 0xffffffffU) == 0) {
code_r0x02f8ff90:
        uVar7 = func_0x00f78b24();
        func_0x00f78ac0(uVar7,0);
      }
      else {
        plVar17 = extraout_x1 + 4;
        unaff_x24 = (segment_command *)*plVar17;
        if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
          func_0x00f78ad0();
        }
        if (plVar8 != (long *)0x0) {
          auVar32._8_4_ = (int)plVar8[8];
          auVar32._0_8_ = unaff_x24;
          puVar27 = &UNK_02f8fdb8;
          goto code_r0x02f906e0;
        }
      }
    }
  }
code_r0x02f8ff9c:
  unaff_d8 = uVar29;
  uVar29 = func_0x00f78af4();
  plVar10 = (long *)&stack0xffffffffffffff00;
  uVar7 = extraout_x1_00;
  plVar18 = extraout_x1;
  puVar27 = &Core_UI2_UITweener__TryCreateOnCompleteVirtualTween;
code_r0x02f8ffa0:
  *(undefined8 *)((long)plVar10 + -0x50) = unaff_d9;
  *(ulong *)((long)plVar10 + -0x48) = unaff_d8;
  *(segment_command **)((long)plVar10 + -0x40) = unaff_x24;
  *(ulong *)((long)plVar10 + -0x38) = param_3;
  *(long **)((long)plVar10 + -0x30) = param_4;
  *(long **)((long)plVar10 + -0x28) = plVar18;
  *(long **)((long)plVar10 + -0x20) = plVar8;
  *(long **)((long)plVar10 + -0x18) = plVar17;
  *(undefined8 ********)((long)plVar10 + -0x10) = pppppppuVar26;
  *(undefined **)((long)plVar10 + -8) = puVar27;
  if ((bRam0000000003ebc6a0 & 1) == 0) {
    func_0x00f78a20(uVar29,0x3d40f08,uVar7);
    func_0x00f78a20(0x3d1ea28);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6b0);
    func_0x00f78a20(0x3d5e700);
    func_0x00f78a20(0x3d5e868);
    func_0x00f78a20(0x3d64820);
    func_0x00f78a20(0x3d64828);
    func_0x00f78a20(0x3d294a0);
    func_0x00f78a20(0x3d29498);
    bRam0000000003ebc6a0 = 1;
  }
  plVar10 = (long *)func_0x00f78aec(/*Core.UI2.UITweener.<>c__DisplayClass20_0_TypeInfo*/ uRam0000000003d294a0);
  return plVar10;
code_r0x02f905e0:
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar18 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18);
  plVar11 = (long *)func_0x00f78aec(/*Core.UI2.TweenDependencyIndexPair_TypeInfo*/ uRam0000000003d25430);
  Core_UI2_TweenDependencyIndexPair___ctor(plVar11,plVar17,param_1);
  if (plVar18 == (long *)0x0) goto code_r0x02f906d0;
  puVar27 = &UNK_02f90640;
  ppsVar2 = (segment_command **)&uStack_140;
  plVar10 = plVar17;
  plVar9 = plVar18;
  param_2 = plVar11;
  uVar29 = 0x3d25600;
  unaff_x24 = psVar24;
  pppppppuVar25 = pppppppuVar26;
code_r0x02427110:
  *(long **)((long)ppsVar2 + -0x20) = param_1;
  *(long **)((long)ppsVar2 + -0x18) = plVar10;
  *(undefined8 ********)((long)ppsVar2 + -0x10) = pppppppuVar25;
  *(undefined **)((long)ppsVar2 + -8) = puVar27;
  lVar13 = plVar18[2];
  puVar12 = puRam0000000003d3c518;
  if (lVar13 == 0) {
code_r0x0242716c:
    plVar11 = param_1;
    plVar18 = plVar10;
    plVar17 = (long *)func_0x00f78af4();
    lVar13 = extraout_x9;
    uVar16 = extraout_w8;
code_r0x02427170:
    *(uint *)(plVar18 + 3) = uVar16 + 1;
  }
  else {
    uVar16 = *(uint *)(plVar18 + 3);
    plVar17 = plVar18;
    if (uVar16 != *(uint *)(lVar13 + 0x18)) goto code_r0x02427170;
    puVar12 = *(undefined8 **)(*(long *)(puRam0000000003d3c518[3] + 0xc0) + 0x60);
    plVar17 = (long *)(*(code *)*puVar12)(plVar18,uVar16 + 1);
    lVar13 = plVar18[2];
    uVar16 = *(uint *)(plVar18 + 3);
    *(uint *)(plVar18 + 3) = uVar16 + 1;
    plVar10 = plVar18;
    param_1 = plVar11;
    if (lVar13 == 0) goto code_r0x0242716c;
  }
  if (uVar16 < *(uint *)(lVar13 + 0x18)) {
    *(long **)(lVar13 + (long)(int)uVar16 * 8 + 0x20) = plVar11;
    *(int *)((long)plVar18 + 0x1c) = *(int *)((long)plVar18 + 0x1c) + 1;
    return plVar17;
  }
  uVar7 = func_0x00f78b24();
  auVar31 = func_0x00f78ac0(uVar7,0);
  lVar14 = auVar31._8_8_;
  lVar13 = auVar31._0_8_;
  *(segment_command **)((long)ppsVar2 + -0x60) = unaff_x24;
  *(ulong *)((long)ppsVar2 + -0x58) = uVar29;
  *(long **)((long)ppsVar2 + -0x50) = param_2;
  *(long **)((long)ppsVar2 + -0x48) = plVar9;
  *(long **)((long)ppsVar2 + -0x40) = plVar11;
  *(long **)((long)ppsVar2 + -0x38) = plVar18;
  *(undefined1 **)((long)ppsVar2 + -0x30) = (undefined1 *)((long)ppsVar2 + -0x10);
  *(undefined **)((long)ppsVar2 + -0x28) =
       &System_Collections_Generic_List_object___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x48))(lVar14,0x14);
  if (lVar13 == 0) {
    func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x2427350);
    (*pcVar22)();
  }
  pcVar22 = (code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x28);
  lVar19 = *(long *)(*(long *)(puVar12[3] + 0xc0) + 0x38);
  if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar19);
  }
  if (lVar14 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = func_0x00f78adc(lVar14,lVar19);
    if (lVar6 == 0) {
      func_0x00f78e5c(lVar14,lVar19);
      goto code_r0x0242734c;
    }
  }
  (*pcVar22)(lVar13,lVar6,*(undefined8 *)(*(long *)(puVar12[3] + 0xc0) + 0x28));
  iVar5 = (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x68))(lVar13);
  return (long *)(ulong)(iVar5 - 1);
}



// ============================================================
// RVA: 0x2f8fca4 | Core.UI2.UITweener.PlayTweenAnimOnLeaves
// ============================================================

/* WARNING: Possible PIC construction at 0x02f8fdb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f90068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f901a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f9063c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8fdb8) */
/* WARNING: Removing unreachable block (ram,0x02f8fdbc) */
/* WARNING: Removing unreachable block (ram,0x02f8fdc8) */
/* WARNING: Removing unreachable block (ram,0x02f8fe48) */
/* WARNING: Removing unreachable block (ram,0x02f8fdd8) */
/* WARNING: Removing unreachable block (ram,0x02f8fde8) */
/* WARNING: Removing unreachable block (ram,0x02f9006c) */
/* WARNING: Removing unreachable block (ram,0x02f901c4) */
/* WARNING: Removing unreachable block (ram,0x02f901ec) */
/* WARNING: Removing unreachable block (ram,0x02f9020c) */
/* WARNING: Removing unreachable block (ram,0x02f90224) */
/* WARNING: Removing unreachable block (ram,0x02f90230) */
/* WARNING: Removing unreachable block (ram,0x02f90238) */
/* WARNING: Removing unreachable block (ram,0x02f90240) */
/* WARNING: Removing unreachable block (ram,0x02f9024c) */
/* WARNING: Removing unreachable block (ram,0x02f90258) */
/* WARNING: Removing unreachable block (ram,0x02f90260) */
/* WARNING: Removing unreachable block (ram,0x02f90268) */
/* WARNING: Removing unreachable block (ram,0x02f9027c) */
/* WARNING: Removing unreachable block (ram,0x02f90288) */
/* WARNING: Removing unreachable block (ram,0x02f90304) */
/* WARNING: Removing unreachable block (ram,0x02f90294) */
/* WARNING: Removing unreachable block (ram,0x02f902a0) */
/* WARNING: Removing unreachable block (ram,0x02f902a8) */
/* WARNING: Removing unreachable block (ram,0x02f902b0) */
/* WARNING: Removing unreachable block (ram,0x02f90320) */
/* WARNING: Removing unreachable block (ram,0x02f902bc) */
/* WARNING: Removing unreachable block (ram,0x02f90324) */
/* WARNING: Removing unreachable block (ram,0x02f90348) */
/* WARNING: Removing unreachable block (ram,0x02f90350) */
/* WARNING: Removing unreachable block (ram,0x02f90368) */
/* WARNING: Removing unreachable block (ram,0x02f90370) */
/* WARNING: Removing unreachable block (ram,0x02f90378) */
/* WARNING: Removing unreachable block (ram,0x02f90384) */
/* WARNING: Removing unreachable block (ram,0x02f903d4) */
/* WARNING: Removing unreachable block (ram,0x02f903d8) */
/* WARNING: Removing unreachable block (ram,0x02f9041c) */
/* WARNING: Removing unreachable block (ram,0x02f90454) */
/* WARNING: Removing unreachable block (ram,0x02f90460) */
/* WARNING: Removing unreachable block (ram,0x02f90468) */
/* WARNING: Removing unreachable block (ram,0x02f90470) */
/* WARNING: Removing unreachable block (ram,0x02f9047c) */
/* WARNING: Removing unreachable block (ram,0x02f90488) */
/* WARNING: Removing unreachable block (ram,0x02f9049c) */
/* WARNING: Removing unreachable block (ram,0x02f904b4) */
/* WARNING: Removing unreachable block (ram,0x02f904bc) */
/* WARNING: Removing unreachable block (ram,0x02f904c0) */
/* WARNING: Removing unreachable block (ram,0x02f9064c) */
/* WARNING: Removing unreachable block (ram,0x02f90658) */
/* WARNING: Removing unreachable block (ram,0x02f90660) */
/* WARNING: Removing unreachable block (ram,0x02f90668) */
/* WARNING: Removing unreachable block (ram,0x02f9067c) */
/* WARNING: Removing unreachable block (ram,0x02f904d0) */
/* WARNING: Removing unreachable block (ram,0x02f904e0) */
/* WARNING: Removing unreachable block (ram,0x02f904ec) */
/* WARNING: Removing unreachable block (ram,0x02f904f4) */
/* WARNING: Removing unreachable block (ram,0x02f904fc) */
/* WARNING: Removing unreachable block (ram,0x02f90508) */
/* WARNING: Removing unreachable block (ram,0x02f90514) */
/* WARNING: Removing unreachable block (ram,0x02f9051c) */
/* WARNING: Removing unreachable block (ram,0x02f90524) */
/* WARNING: Removing unreachable block (ram,0x02f90538) */
/* WARNING: Removing unreachable block (ram,0x02f90544) */
/* WARNING: Removing unreachable block (ram,0x02f906b0) */
/* WARNING: Removing unreachable block (ram,0x02f90564) */
/* WARNING: Removing unreachable block (ram,0x02f9056c) */
/* WARNING: Removing unreachable block (ram,0x02f9057c) */
/* WARNING: Removing unreachable block (ram,0x02f90584) */
/* WARNING: Removing unreachable block (ram,0x02f9058c) */
/* WARNING: Removing unreachable block (ram,0x02f90598) */
/* WARNING: Removing unreachable block (ram,0x02f905a4) */
/* WARNING: Removing unreachable block (ram,0x02f905b0) */
/* WARNING: Removing unreachable block (ram,0x02f905c0) */
/* WARNING: Removing unreachable block (ram,0x02f905c8) */
/* WARNING: Removing unreachable block (ram,0x02f905cc) */
/* WARNING: Removing unreachable block (ram,0x02f90640) */
/* WARNING: Removing unreachable block (ram,0x02f905e0) */
/* WARNING: Removing unreachable block (ram,0x02f905ec) */
/* WARNING: Removing unreachable block (ram,0x02f905f4) */
/* WARNING: Removing unreachable block (ram,0x02f905fc) */
/* WARNING: Removing unreachable block (ram,0x02f906d0) */
/* WARNING: Removing unreachable block (ram,0x02f906d4) */
/* WARNING: Removing unreachable block (ram,0x02f90628) */
/* WARNING: Removing unreachable block (ram,0x02427110) */
/* WARNING: Removing unreachable block (ram,0x02427124) */
/* WARNING: Removing unreachable block (ram,0x0242713c) */
/* WARNING: Removing unreachable block (ram,0x0242716c) */
/* WARNING: Removing unreachable block (ram,0x02427170) */
/* WARNING: Removing unreachable block (ram,0x02427178) */
/* WARNING: Removing unreachable block (ram,0x024271a4) */
/* WARNING: Removing unreachable block (ram,0x02427284) */
/* WARNING: Removing unreachable block (ram,0x024271f0) */
/* WARNING: Removing unreachable block (ram,0x0242720c) */
/* WARNING: Removing unreachable block (ram,0x02427214) */
/* WARNING: Removing unreachable block (ram,0x0242723c) */
/* WARNING: Removing unreachable block (ram,0x02427218) */
/* WARNING: Removing unreachable block (ram,0x02427240) */
/* WARNING: Removing unreachable block (ram,0x0242722c) */
/* WARNING: Removing unreachable block (ram,0x0242734c) */
/* WARNING: Removing unreachable block (ram,0x02427184) */
/* WARNING: Removing unreachable block (ram,0x02f9038c) */
/* WARNING: Removing unreachable block (ram,0x02f903a0) */
/* WARNING: Removing unreachable block (ram,0x02f903b4) */
/* WARNING: Removing unreachable block (ram,0x02f903b8) */
/* WARNING: Removing unreachable block (ram,0x02f902c8) */
/* WARNING: Removing unreachable block (ram,0x02f902d8) */
/* WARNING: Removing unreachable block (ram,0x02f902e0) */
/* WARNING: Removing unreachable block (ram,0x02f902e4) */
/* WARNING: Removing unreachable block (ram,0x02f90308) */
/* WARNING: Removing unreachable block (ram,0x02f902f8) */
/* WARNING: Removing unreachable block (ram,0x02f90070) */
/* WARNING: Removing unreachable block (ram,0x02f90078) */
/* WARNING: Removing unreachable block (ram,0x02f9007c) */
/* WARNING: Removing unreachable block (ram,0x02f90198) */
/* WARNING: Removing unreachable block (ram,0x02f90080) */
/* WARNING: Removing unreachable block (ram,0x02f90094) */
/* WARNING: Removing unreachable block (ram,0x02f9009c) */
/* WARNING: Removing unreachable block (ram,0x02f900a4) */
/* WARNING: Removing unreachable block (ram,0x02f900b0) */
/* WARNING: Removing unreachable block (ram,0x02f900b8) */
/* WARNING: Removing unreachable block (ram,0x02f900c0) */
/* WARNING: Removing unreachable block (ram,0x02f900cc) */
/* WARNING: Removing unreachable block (ram,0x02f90110) */
/* WARNING: Removing unreachable block (ram,0x02f901a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Core_UI2_UITweener__PlayTweenAnimOnLeaves
          (undefined1 param_1 [16],float param_2,long param_3,long param_4,ulong param_5,
          undefined8 param_6,long param_7)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar8;
  undefined8 extraout_x1_03;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long *plVar13;
  long unaff_x20;
  long unaff_x21;
  code *pcVar14;
  undefined8 unaff_x22;
  ulong unaff_x23;
  undefined1 *puVar15;
  long unaff_x24;
  long lVar16;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float fVar18;
  undefined4 extraout_s0_05;
  float extraout_s0_06;
  undefined4 extraout_s0_07;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_07;
  undefined8 extraout_var_08;
  undefined8 extraout_var_09;
  undefined8 extraout_var_10;
  undefined8 extraout_var_11;
  undefined1 auVar19 [16];
  undefined4 uVar17;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined8 extraout_var_12;
  undefined8 extraout_var_13;
  undefined1 auVar21 [16];
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 uVar23;
  undefined8 extraout_var_14;
  undefined8 extraout_var_15;
  undefined1 auVar22 [16];
  undefined8 extraout_var_16;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float fVar24;
  undefined1 auStack_90 [4];
  int iStack_8c;
  long lStack_88;
  undefined1 auVar20 [16];
  
  uVar6 = param_1._8_8_;
  uVar17 = param_1._4_4_;
  fVar24 = param_1._0_4_;
  puVar15 = &stack0xfffffffffffffff0;
  uVar11 = (ulong)(uint)fVar24;
  plVar13 = (long *)0x3ebc000;
  fVar18 = fVar24;
  if ((bRam0000000003ebc69f & 1) == 0) {
    func_0x00f78a20(0x3d51498);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69f = 1;
    fVar18 = extraout_s0_03;
    uVar17 = extraout_var_03;
    uVar6 = extraout_var_12;
  }
  iVar3 = (int)param_5;
  if (iVar3 == 0) {
    if (param_7 == 0) {
LAB_02f8fe20:
      auVar21._4_4_ = uVar17;
      auVar21._0_4_ = fVar18;
      auVar21._8_8_ = uVar6;
      return auVar21;
    }
    uVar8 = 0;
    lVar16 = *(long *)(param_7 + 0x68);
    if (lVar16 == 0) {
      puVar15 = &stack0xffffffffffffffa8;
      lVar7 = 1;
    }
    else {
      lVar7 = *(long *)(lVar16 + 0x18);
      if (lVar7 == 0) goto code_r0x016bba60;
      puVar15 = (undefined1 *)(lVar16 + 0x20);
    }
    lVar16 = 0;
    do {
      lVar9 = *(long *)(puVar15 + lVar16 * 8);
      pcVar14 = *(code **)(lVar9 + 0x10);
      plVar13 = *(long **)(lVar9 + 0x20);
      lVar9 = *(long *)(lVar9 + 0x28);
      if (*(short *)(lVar9 + 0x48) == -1) {
        func_0x00f78ad8(lVar9,uVar8);
      }
      iVar3 = func_0x00f78a4c(lVar9);
      if (iVar3 == 0) {
        if ((((plVar13 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
            ((*(byte *)(*plVar13 + 0x115) & 1) != 0)) || (*(long *)(param_7 + 0x18) == 0))
        goto code_r0x016bb980;
        iVar3 = func_0x00f78a44(lVar9);
        iVar4 = func_0x00f78ec0(lVar9);
        if (iVar3 == 0) {
          uVar1 = *(ushort *)(lVar9 + 0x48);
          if (iVar4 == 0) {
            lVar9 = *plVar13 + (ulong)uVar1 * 0x10;
            (**(code **)(lVar9 + 0x138))(plVar13,*(undefined8 *)(lVar9 + 0x140));
            uVar8 = extraout_x1_01;
            fVar18 = extraout_s0_01;
            uVar17 = extraout_var_01;
            uVar6 = extraout_var_10;
            goto code_r0x016bb98c;
          }
          lVar9 = func_0x00f78a48(lVar9);
          lVar10 = *plVar13;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar9) {
                puVar5 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar1) * 0x10 + 0x138)
                ;
                goto code_r0x016bba50;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)func_0x00fac1f0(plVar13,lVar9,(ulong)uVar1);
code_r0x016bba50:
          pcVar14 = (code *)*puVar5;
          puVar5 = (undefined8 *)puVar5[1];
        }
        else {
          if (iVar4 == 0) {
            uVar6 = *(undefined8 *)(*plVar13 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar10 = *plVar13;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x016bba28;
                }
                piVar12 = piVar12 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            lVar10 = func_0x00fac1f0(plVar13);
code_r0x016bba28:
            uVar6 = *(undefined8 *)(lVar10 + 8);
          }
          puVar5 = (undefined8 *)func_0x00f78acc(uVar6,lVar9);
          pcVar14 = (code *)*puVar5;
        }
        (*pcVar14)(plVar13,puVar5);
        uVar8 = extraout_x1_02;
        fVar18 = extraout_s0_02;
        uVar17 = extraout_var_02;
        uVar6 = extraout_var_11;
      }
      else if (*(char *)(lVar9 + 0x4a) == '\0') {
        (*pcVar14)(lVar9);
        uVar8 = extraout_x1;
        fVar18 = extraout_s0;
        uVar17 = extraout_var;
        uVar6 = extraout_var_08;
      }
      else {
code_r0x016bb980:
        (*pcVar14)(plVar13,lVar9);
        uVar8 = extraout_x1_00;
        fVar18 = extraout_s0_00;
        uVar17 = extraout_var_00;
        uVar6 = extraout_var_09;
      }
code_r0x016bb98c:
      lVar16 = lVar16 + 1;
    } while (lVar16 != lVar7);
code_r0x016bba60:
    auVar19._4_4_ = uVar17;
    auVar19._0_4_ = fVar18;
    auVar19._8_8_ = uVar6;
    return auVar19;
  }
  lVar16 = unaff_x24;
  if (param_4 == 0) {
LAB_02f8ff9c:
    unaff_d8 = uVar11;
    unaff_x24 = lVar16;
    unaff_x23 = param_5;
    unaff_x19 = plVar13;
    unaff_x30 = &Core_UI2_UITweener__TryCreateOnCompleteVirtualTween;
    fVar18 = (float)func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)auStack_90;
    uVar6 = extraout_x1_03;
    unaff_x20 = param_3;
    unaff_x21 = param_4;
    unaff_x22 = param_6;
    unaff_x29 = puVar15;
  }
  else {
    if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
      func_0x00f78ad0();
      fVar18 = extraout_s0_04;
      uVar17 = extraout_var_04;
      uVar6 = extraout_var_13;
    }
    if (**(long **)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) == 0) goto LAB_02f8ff9c;
    if (*(int *)(**(long **)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x18) < (int)*(ulong *)(param_4 + 0x18))
    goto LAB_02f8fe20;
    if (0 < iVar3) {
      iStack_8c = iVar3;
      lStack_88 = param_7;
      if ((*(ulong *)(param_4 + 0x18) & 0xffffffff) == 0) {
LAB_02f8ff90:
        uVar6 = func_0x00f78b24();
        func_0x00f78ac0(uVar6,0);
        goto LAB_02f8ff9c;
      }
      lVar16 = *(long *)(param_4 + 0x20);
      if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar13 = (long *)(param_4 + 0x20);
      if (param_3 == 0) goto LAB_02f8ff9c;
      uVar17 = *(undefined4 *)(param_3 + 0x40);
      if ((lVar16 != 0) && (lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar16,0), lVar7 != 0)) {
        /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar7,0);
        fVar18 = extraout_s0_06;
        uVar23 = extraout_var_06;
        uVar6 = extraout_var_15;
        switch(uVar17) {
        case 1:
          lVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar16,0);
          if (lVar16 != 0) {
            iVar3 = /*UnityEngine.Transform$$GetSiblingIndex*/ func_0x03277144(lVar16,0);
            fVar18 = (float)iVar3;
            uVar23 = 0;
            uVar6 = 0;
            break;
          }
          goto code_r0x02f9078c;
        case 2:
        case 5:
          break;
        case 3:
          fVar18 = -extraout_s0_06;
          uVar23 = 0;
          uVar6 = 0;
          break;
        case 4:
          fVar18 = -param_2;
          uVar23 = 0;
          uVar6 = 0;
          break;
        case 6:
          param_2 = -param_2;
        case 9:
          fVar18 = param_2 - extraout_s0_06;
          uVar23 = 0;
          uVar6 = 0;
          break;
        case 7:
          fVar18 = extraout_s0_06 + param_2;
          uVar23 = 0;
          uVar6 = 0;
          break;
        case 8:
          fVar18 = extraout_s0_06 - param_2;
          uVar23 = 0;
          uVar6 = 0;
          break;
        default:
          fVar18 = 0.0;
          uVar23 = 0;
          uVar6 = 0;
        }
        auVar22._4_4_ = uVar23;
        auVar22._0_4_ = fVar18;
        auVar22._8_8_ = uVar6;
        return auVar22;
      }
code_r0x02f9078c:
      func_0x00f78af4();
      uVar17 = extraout_s0_07;
      uVar23 = extraout_var_07;
      uVar6 = extraout_var_16;
      goto code_r0x0294d018;
    }
    if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*System.Array$$Sort<float, UITweenLeaf>*/ func_0x01804f30(**(undefined8 **)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8),param_4,0,param_5,
                    uRam0000000003d51498);
    if (fVar24 < 0.0) {
      if (param_3 == 0) goto LAB_02f8ff9c;
      uVar11 = (ulong)*(uint *)(param_3 + 0x18);
    }
    uVar2 = iVar3 - 1;
    param_5 = (ulong)uVar2;
    if (iVar3 < 1) {
      if (param_3 != 0) goto code_r0x02f8fef8;
      goto LAB_02f8ff9c;
    }
    if (param_3 == 0) goto LAB_02f8ff9c;
    plVar13 = (long *)0x0;
    lVar16 = param_4 + 0x20;
    do {
      if (*(uint *)(param_4 + 0x18) <= (uint)plVar13) goto LAB_02f8ff90;
      lVar7 = *(long *)(lVar16 + (long)plVar13 * 8);
      if (lVar7 == 0) goto LAB_02f8ff9c;
      Core_UI2_UITweenLeaf__PerformTweenAnimation
                ((float)uVar11 + *(float *)(param_3 + 0x44) * (float)(int)(uint)plVar13,lVar7,
                 param_3,param_6);
      plVar13 = (long *)((long)plVar13 + 1);
    } while (iVar3 != (int)plVar13);
code_r0x02f8fef8:
    fVar18 = (float)Core_UI2_UITweenAnimation__GetParam(_UNK_033f82c4,param_3,0);
    if (*(uint *)(param_4 + 0x18) <= uVar2) goto LAB_02f8ff90;
    lVar7 = *(long *)(param_4 + (long)(int)uVar2 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_02f8ff9c;
    fVar24 = *(float *)(param_3 + 0x44);
    uVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
    if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    fVar18 = (float)uVar11 + fVar18 + fVar24 * (float)(int)uVar2;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0x48) = unaff_d8;
  *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003ebc6a0 & 1) == 0) {
    func_0x00f78a20(fVar18,0x3d40f08,uVar6);
    func_0x00f78a20(0x3d1ea28);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6b0);
    func_0x00f78a20(0x3d5e700);
    func_0x00f78a20(0x3d5e868);
    func_0x00f78a20(0x3d64820);
    func_0x00f78a20(0x3d64828);
    func_0x00f78a20(0x3d294a0);
    func_0x00f78a20(0x3d29498);
    bRam0000000003ebc6a0 = 1;
  }
  func_0x00f78aec(/*Core.UI2.UITweener.<>c__DisplayClass20_0_TypeInfo*/ uRam0000000003d294a0);
  uVar17 = extraout_s0_05;
  uVar23 = extraout_var_05;
  uVar6 = extraout_var_14;
code_r0x0294d018:
  auVar20._4_4_ = uVar23;
  auVar20._0_4_ = uVar17;
  auVar20._8_8_ = uVar6;
  return auVar20;
}



// ============================================================
// RVA: 0x2f8ffa0 | Core.UI2.UITweener.TryCreateOnCompleteVirtualTween
// ============================================================

/* WARNING: Possible PIC construction at 0x02f90068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f9063c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f9006c) */
/* WARNING: Removing unreachable block (ram,0x02f901c4) */
/* WARNING: Removing unreachable block (ram,0x02f901ec) */
/* WARNING: Removing unreachable block (ram,0x02f9020c) */
/* WARNING: Removing unreachable block (ram,0x02f90224) */
/* WARNING: Removing unreachable block (ram,0x02f90230) */
/* WARNING: Removing unreachable block (ram,0x02f90238) */
/* WARNING: Removing unreachable block (ram,0x02f90240) */
/* WARNING: Removing unreachable block (ram,0x02f9024c) */
/* WARNING: Removing unreachable block (ram,0x02f90258) */
/* WARNING: Removing unreachable block (ram,0x02f90260) */
/* WARNING: Removing unreachable block (ram,0x02f90268) */
/* WARNING: Removing unreachable block (ram,0x02f9027c) */
/* WARNING: Removing unreachable block (ram,0x02f90288) */
/* WARNING: Removing unreachable block (ram,0x02f90304) */
/* WARNING: Removing unreachable block (ram,0x02f90294) */
/* WARNING: Removing unreachable block (ram,0x02f902a0) */
/* WARNING: Removing unreachable block (ram,0x02f902a8) */
/* WARNING: Removing unreachable block (ram,0x02f902b0) */
/* WARNING: Removing unreachable block (ram,0x02f90320) */
/* WARNING: Removing unreachable block (ram,0x02f902bc) */
/* WARNING: Removing unreachable block (ram,0x02f90324) */
/* WARNING: Removing unreachable block (ram,0x02f90348) */
/* WARNING: Removing unreachable block (ram,0x02f90350) */
/* WARNING: Removing unreachable block (ram,0x02f90368) */
/* WARNING: Removing unreachable block (ram,0x02f90370) */
/* WARNING: Removing unreachable block (ram,0x02f90378) */
/* WARNING: Removing unreachable block (ram,0x02f90384) */
/* WARNING: Removing unreachable block (ram,0x02f903d4) */
/* WARNING: Removing unreachable block (ram,0x02f903d8) */
/* WARNING: Removing unreachable block (ram,0x02f9041c) */
/* WARNING: Removing unreachable block (ram,0x02f90454) */
/* WARNING: Removing unreachable block (ram,0x02f90460) */
/* WARNING: Removing unreachable block (ram,0x02f90468) */
/* WARNING: Removing unreachable block (ram,0x02f90470) */
/* WARNING: Removing unreachable block (ram,0x02f9047c) */
/* WARNING: Removing unreachable block (ram,0x02f90488) */
/* WARNING: Removing unreachable block (ram,0x02f9049c) */
/* WARNING: Removing unreachable block (ram,0x02f904b4) */
/* WARNING: Removing unreachable block (ram,0x02f904bc) */
/* WARNING: Removing unreachable block (ram,0x02f904c0) */
/* WARNING: Removing unreachable block (ram,0x02f9064c) */
/* WARNING: Removing unreachable block (ram,0x02f90658) */
/* WARNING: Removing unreachable block (ram,0x02f90660) */
/* WARNING: Removing unreachable block (ram,0x02f90668) */
/* WARNING: Removing unreachable block (ram,0x02f9067c) */
/* WARNING: Removing unreachable block (ram,0x02f904d0) */
/* WARNING: Removing unreachable block (ram,0x02f904e0) */
/* WARNING: Removing unreachable block (ram,0x02f904ec) */
/* WARNING: Removing unreachable block (ram,0x02f904f4) */
/* WARNING: Removing unreachable block (ram,0x02f904fc) */
/* WARNING: Removing unreachable block (ram,0x02f90508) */
/* WARNING: Removing unreachable block (ram,0x02f90514) */
/* WARNING: Removing unreachable block (ram,0x02f9051c) */
/* WARNING: Removing unreachable block (ram,0x02f90524) */
/* WARNING: Removing unreachable block (ram,0x02f90538) */
/* WARNING: Removing unreachable block (ram,0x02f90544) */
/* WARNING: Removing unreachable block (ram,0x02f906b0) */
/* WARNING: Removing unreachable block (ram,0x02f90564) */
/* WARNING: Removing unreachable block (ram,0x02f9056c) */
/* WARNING: Removing unreachable block (ram,0x02f9057c) */
/* WARNING: Removing unreachable block (ram,0x02f90584) */
/* WARNING: Removing unreachable block (ram,0x02f9058c) */
/* WARNING: Removing unreachable block (ram,0x02f90598) */
/* WARNING: Removing unreachable block (ram,0x02f905a4) */
/* WARNING: Removing unreachable block (ram,0x02f905b0) */
/* WARNING: Removing unreachable block (ram,0x02f905c0) */
/* WARNING: Removing unreachable block (ram,0x02f905c8) */
/* WARNING: Removing unreachable block (ram,0x02f905cc) */
/* WARNING: Removing unreachable block (ram,0x02f90640) */
/* WARNING: Removing unreachable block (ram,0x02f905e0) */
/* WARNING: Removing unreachable block (ram,0x02f905ec) */
/* WARNING: Removing unreachable block (ram,0x02f905f4) */
/* WARNING: Removing unreachable block (ram,0x02f905fc) */
/* WARNING: Removing unreachable block (ram,0x02f906d0) */
/* WARNING: Removing unreachable block (ram,0x02f906d4) */
/* WARNING: Removing unreachable block (ram,0x02f906f0) */
/* WARNING: Removing unreachable block (ram,0x02f90704) */
/* WARNING: Removing unreachable block (ram,0x02f90750) */
/* WARNING: Removing unreachable block (ram,0x02f90718) */
/* WARNING: Removing unreachable block (ram,0x02f9077c) */
/* WARNING: Removing unreachable block (ram,0x02f90774) */
/* WARNING: Removing unreachable block (ram,0x02f90768) */
/* WARNING: Removing unreachable block (ram,0x02f9076c) */
/* WARNING: Removing unreachable block (ram,0x02f90760) */
/* WARNING: Removing unreachable block (ram,0x02f90758) */
/* WARNING: Removing unreachable block (ram,0x02f90730) */
/* WARNING: Removing unreachable block (ram,0x02f9078c) */
/* WARNING: Removing unreachable block (ram,0x02f90740) */
/* WARNING: Removing unreachable block (ram,0x02f90780) */
/* WARNING: Removing unreachable block (ram,0x02f90628) */
/* WARNING: Removing unreachable block (ram,0x02427110) */
/* WARNING: Removing unreachable block (ram,0x02427124) */
/* WARNING: Removing unreachable block (ram,0x0242713c) */
/* WARNING: Removing unreachable block (ram,0x0242716c) */
/* WARNING: Removing unreachable block (ram,0x02427170) */
/* WARNING: Removing unreachable block (ram,0x02427178) */
/* WARNING: Removing unreachable block (ram,0x024271a4) */
/* WARNING: Removing unreachable block (ram,0x02427284) */
/* WARNING: Removing unreachable block (ram,0x024271f0) */
/* WARNING: Removing unreachable block (ram,0x0242720c) */
/* WARNING: Removing unreachable block (ram,0x02427214) */
/* WARNING: Removing unreachable block (ram,0x0242723c) */
/* WARNING: Removing unreachable block (ram,0x02427218) */
/* WARNING: Removing unreachable block (ram,0x02427240) */
/* WARNING: Removing unreachable block (ram,0x0242722c) */
/* WARNING: Removing unreachable block (ram,0x0242734c) */
/* WARNING: Removing unreachable block (ram,0x02427184) */
/* WARNING: Removing unreachable block (ram,0x02f9038c) */
/* WARNING: Removing unreachable block (ram,0x02f903a0) */
/* WARNING: Removing unreachable block (ram,0x02f903b4) */
/* WARNING: Removing unreachable block (ram,0x02f903b8) */
/* WARNING: Removing unreachable block (ram,0x02f902c8) */
/* WARNING: Removing unreachable block (ram,0x02f902d8) */
/* WARNING: Removing unreachable block (ram,0x02f902e0) */
/* WARNING: Removing unreachable block (ram,0x02f902e4) */
/* WARNING: Removing unreachable block (ram,0x02f90308) */
/* WARNING: Removing unreachable block (ram,0x02f902f8) */
/* WARNING: Removing unreachable block (ram,0x02f90070) */
/* WARNING: Removing unreachable block (ram,0x02f90078) */
/* WARNING: Removing unreachable block (ram,0x02f9007c) */
/* WARNING: Removing unreachable block (ram,0x02f90198) */
/* WARNING: Removing unreachable block (ram,0x02f90080) */
/* WARNING: Removing unreachable block (ram,0x02f90094) */
/* WARNING: Removing unreachable block (ram,0x02f9009c) */
/* WARNING: Removing unreachable block (ram,0x02f900a4) */
/* WARNING: Removing unreachable block (ram,0x02f900b0) */
/* WARNING: Removing unreachable block (ram,0x02f900b8) */
/* WARNING: Removing unreachable block (ram,0x02f900c0) */
/* WARNING: Removing unreachable block (ram,0x02f900cc) */
/* WARNING: Removing unreachable block (ram,0x02f90110) */
/* WARNING: Removing unreachable block (ram,0x02f901a4) */
/* WARNING: Recovered jumptable eliminated as dead code */

void Core_UI2_UITweener__TryCreateOnCompleteVirtualTween(void)

{
  if ((bRam0000000003ebc6a0 & 1) == 0) {
    func_0x00f78a20(0x3d40f08);
    func_0x00f78a20(0x3d1ea28);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6b0);
    func_0x00f78a20(0x3d5e700);
    func_0x00f78a20(0x3d5e868);
    func_0x00f78a20(0x3d64820);
    func_0x00f78a20(0x3d64828);
    func_0x00f78a20(0x3d294a0);
    func_0x00f78a20(0x3d29498);
    bRam0000000003ebc6a0 = 1;
  }
  func_0x00f78aec(/*Core.UI2.UITweener.<>c__DisplayClass20_0_TypeInfo*/ uRam0000000003d294a0);
  return;
}



// ============================================================
// RVA: 0x2f901c8 | Core.UI2.UITweener.TryFindTweenDataByGroup
// ============================================================

/* WARNING: Possible PIC construction at 0x02f9063c: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */

long * Core_UI2_UITweener__TryFindTweenDataByGroup(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint extraout_w8;
  long lVar8;
  long extraout_x9;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  long *unaff_x21;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  uint uVar16;
  code *pcVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 *******pppppppuVar21;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *******pppppppuStack_90;
  undefined *puStack_88;
  long alStack_80 [3];
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined8 ******ppppppuStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003ebc6a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc6a2 = 1;
  }
  plVar10 = (long *)0x0;
  plVar14 = (long *)0x3d25600;
  uVar18 = 0x3d23990;
  lVar19 = 0x20;
  while( true ) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar8 == 0) break;
    if ((long)*(int *)(lVar8 + 0x18) <= (long)plVar10) {
      return (long *)0xffffffff;
    }
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
      lVar8 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
      if (lVar8 == 0) break;
    }
    if ((long *)(ulong)*(uint *)(lVar8 + 0x18) <= plVar10) goto LAB_02f90324;
    iVar2 = Core_UI2_PlannedTweenData__get_IsValid(lVar8 + lVar19);
    if (iVar2 == 0) {
      return (long *)0xffffffff;
    }
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar8 == 0) break;
    if ((long *)(ulong)*(uint *)(lVar8 + 0x18) <= plVar10) goto LAB_02f90324;
    unaff_x21 = *(long **)(lVar8 + lVar19);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_3 = (long *)0x0;
    uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(unaff_x21,param_1);
    if ((uVar4 & 1) != 0) {
      return plVar10;
    }
    plVar10 = (long *)((long)plVar10 + 1);
    lVar19 = lVar19 + 0x28;
  }
  func_0x00f78af4();
LAB_02f90324:
  uVar5 = func_0x00f78b24();
  auVar23 = func_0x00f78ac0(uVar5,0);
  plVar11 = auVar23._8_8_;
  plVar1 = alStack_80;
  alStack_80[1] = 0x3d23990;
  alStack_80[2] = 0x3d25600;
  puStack_48 = &Core_UI2_UITweener__TryResolveTweenAnim;
  plVar12 = unaff_x21;
  alStack_80[0] = lVar19;
  plStack_68 = unaff_x21;
  plStack_60 = plVar10;
  plStack_58 = param_1;
  ppppppuStack_50 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((auVar23._0_8_ != 0) && (plVar14 = *(long **)(auVar23._0_8_ + 0x18), plVar14 != (long *)0x0))
  {
    uVar9 = *(uint *)(plVar14 + 3);
    plVar12 = (long *)(ulong)(0 < (int)uVar9);
    if (0 < (int)uVar9) {
      uVar18 = 0;
      do {
        uVar16 = (uint)uVar18;
        param_1 = param_3;
        if (uVar9 <= uVar16) goto code_r0x02f903d8;
        lVar19 = plVar14[(long)(int)uVar16 + 4];
        plVar10 = plVar11;
        if ((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) goto code_r0x02f903d4;
        iVar2 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(lVar19 + 0x10),plVar11,3,0);
        if (iVar2 != 0) goto code_r0x02f903b8;
        uVar16 = uVar16 + 1;
        uVar18 = (ulong)uVar16;
        uVar9 = *(uint *)(plVar14 + 3);
        plVar12 = (long *)(ulong)((int)uVar16 < (int)uVar9);
      } while ((int)uVar16 < (int)uVar9);
    }
    lVar19 = 0;
code_r0x02f903b8:
    *param_3 = lVar19;
    return plVar12;
  }
code_r0x02f903d4:
  plVar11 = plVar10;
  func_0x00f78af4();
code_r0x02f903d8:
  uVar5 = func_0x00f78b24();
  plVar10 = (long *)func_0x00f78ac0(uVar5,0);
  puStack_88 = &Core_UI2_UITweener__DiscoverDependencies;
  pppppppuStack_90 = &ppppppuStack_50;
  if ((bRam0000000003ebc69e & 1) == 0) {
    func_0x00f78a20(0x3d3c518);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25430);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69e = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  lVar8 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
  if (lVar8 == 0) {
code_r0x02f906d0:
    func_0x00f78af4();
  }
  else {
    uVar9 = (uint)plVar10;
    if (uVar9 < *(uint *)(lVar8 + 0x18)) {
      lVar20 = (long)(int)uVar9;
      lVar8 = *(long *)(lVar8 + lVar20 * 0x28 + 0x28);
      if (lVar8 != 0) {
        uVar5 = *(undefined8 *)(lVar8 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
        if (iVar2 != 0) {
          plVar11 = (long *)0x0;
          lVar19 = 0x20;
          do {
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
            }
            lVar8 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
            if (lVar8 == 0) goto code_r0x02f906d0;
            if ((long)*(int *)(lVar8 + 0x18) <= (long)plVar11) {
              return /*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600;
            }
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
              lVar8 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
              if (lVar8 == 0) goto code_r0x02f906d0;
            }
            if ((long *)(ulong)*(uint *)(lVar8 + 0x18) <= plVar11) goto code_r0x02f906d4;
            puVar7 = (undefined8 *)(lVar8 + lVar19);
            uStack_108 = puVar7[1];
            uStack_110 = *puVar7;
            uStack_f8 = puVar7[3];
            uStack_100 = puVar7[2];
            uStack_f0 = puVar7[4];
            plVar14 = (long *)Core_UI2_PlannedTweenData__get_IsValid(&uStack_110);
            uVar5 = uStack_110;
            if ((int)plVar14 == 0) {
              return plVar14;
            }
            if ((long *)((ulong)plVar10 & 0xffffffff) != plVar11) {
              if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
                 ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
                func_0x00f78ad0();
              }
              lVar8 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
              if (lVar8 == 0) goto code_r0x02f906d0;
              if (*(uint *)(lVar8 + 0x18) <= uVar9) goto code_r0x02f906d4;
              lVar8 = *(long *)(lVar8 + lVar20 * 0x28 + 0x28);
              if (lVar8 == 0) goto code_r0x02f906d0;
              uVar15 = *(undefined8 *)(lVar8 + 0x20);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar18 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,uVar15,0);
              if ((uVar18 & 1) == 0) goto code_r0x02f905e0;
            }
            plVar11 = (long *)((long)plVar11 + 1);
            lVar19 = lVar19 + 0x28;
          } while( true );
        }
        if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
          func_0x00f78ad0();
        }
        plVar13 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18);
        plVar6 = (long *)Core_UI2_TweenDependencyIndexPair__CreateEmpty(plVar10);
        pppppppuVar21 = pppppppuStack_90;
        puVar22 = puStack_88;
        if (plVar13 != (long *)0x0) goto code_r0x02427110;
      }
      goto code_r0x02f906d0;
    }
  }
code_r0x02f906d4:
  uVar5 = func_0x00f78b24();
  auVar24 = func_0x00f78ac0(uVar5,0);
  lVar19 = auVar24._0_8_;
  if ((lVar19 != 0) && (lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar19,0), lVar8 != 0)) {
    plVar14 = (long *)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0);
    switch(auVar24._8_4_) {
    case 1:
      lVar19 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar19,0);
      if (lVar19 == 0) goto System_Object___ctor;
      plVar14 = (long *)/*UnityEngine.Transform$$GetSiblingIndex*/ func_0x03277144(lVar19,0);
      break;
    case 3:
      break;
    case 4:
      break;
    case 6:
    case 9:
      break;
    case 7:
      break;
    case 8:
    }
    return plVar14;
  }
System_Object___ctor:
  plVar14 = (long *)func_0x00f78af4();
  return plVar14;
code_r0x02f905e0:
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar13 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18);
  plVar6 = (long *)func_0x00f78aec(/*Core.UI2.TweenDependencyIndexPair_TypeInfo*/ uRam0000000003d25430);
  Core_UI2_TweenDependencyIndexPair___ctor(plVar6,plVar10,plVar11);
  if (plVar13 == (long *)0x0) goto code_r0x02f906d0;
  plVar1 = &uStack_110;
  param_1 = plVar10;
  plVar12 = plVar13;
  plVar14 = plVar6;
  uVar18 = 0x3d25600;
  lVar19 = lVar20;
  pppppppuVar21 = &pppppppuStack_90;
  puVar22 = &UNK_02f90640;
code_r0x02427110:
  *(long **)((long)plVar1 + -0x20) = plVar11;
  *(long **)((long)plVar1 + -0x18) = param_1;
  *(undefined8 ********)((long)plVar1 + -0x10) = pppppppuVar21;
  *(undefined **)((long)plVar1 + -8) = puVar22;
  lVar8 = plVar13[2];
  puVar7 = puRam0000000003d3c518;
  if (lVar8 == 0) {
code_r0x0242716c:
    plVar6 = plVar11;
    plVar13 = param_1;
    plVar10 = (long *)func_0x00f78af4();
    lVar8 = extraout_x9;
    uVar9 = extraout_w8;
code_r0x02427170:
    *(uint *)(plVar13 + 3) = uVar9 + 1;
  }
  else {
    uVar9 = *(uint *)(plVar13 + 3);
    plVar10 = plVar13;
    if (uVar9 != *(uint *)(lVar8 + 0x18)) goto code_r0x02427170;
    puVar7 = *(undefined8 **)(*(long *)(puRam0000000003d3c518[3] + 0xc0) + 0x60);
    plVar10 = (long *)(*(code *)*puVar7)(plVar13,uVar9 + 1);
    lVar8 = plVar13[2];
    uVar9 = *(uint *)(plVar13 + 3);
    *(uint *)(plVar13 + 3) = uVar9 + 1;
    param_1 = plVar13;
    plVar11 = plVar6;
    if (lVar8 == 0) goto code_r0x0242716c;
  }
  if (uVar9 < *(uint *)(lVar8 + 0x18)) {
    *(long **)(lVar8 + (long)(int)uVar9 * 8 + 0x20) = plVar6;
    *(int *)((long)plVar13 + 0x1c) = *(int *)((long)plVar13 + 0x1c) + 1;
    return plVar10;
  }
  uVar5 = func_0x00f78b24();
  auVar23 = func_0x00f78ac0(uVar5,0);
  lVar20 = auVar23._8_8_;
  lVar8 = auVar23._0_8_;
  *(long *)((long)plVar1 + -0x60) = lVar19;
  *(ulong *)((long)plVar1 + -0x58) = uVar18;
  *(long **)((long)plVar1 + -0x50) = plVar14;
  *(long **)((long)plVar1 + -0x48) = plVar12;
  *(long **)((long)plVar1 + -0x40) = plVar6;
  *(long **)((long)plVar1 + -0x38) = plVar13;
  *(undefined1 **)((long)plVar1 + -0x30) = (undefined1 *)((long)plVar1 + -0x10);
  *(undefined **)((long)plVar1 + -0x28) =
       &System_Collections_Generic_List_object___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x48))(lVar20,0x14);
  if (lVar8 != 0) {
    pcVar17 = (code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x28);
    lVar19 = *(long *)(*(long *)(puVar7[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    if (lVar20 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = func_0x00f78adc(lVar20,lVar19);
      if (lVar3 == 0) {
        func_0x00f78e5c(lVar20,lVar19);
        goto code_r0x0242734c;
      }
    }
    (*pcVar17)(lVar8,lVar3,*(undefined8 *)(*(long *)(puVar7[3] + 0xc0) + 0x28));
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x68))(lVar8);
    return (long *)(ulong)(iVar2 - 1);
  }
  func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
  pcVar17 = (code *)SoftwareBreakpoint(1,0x2427350);
  (*pcVar17)();
}



// ============================================================
// RVA: 0x2f90330 | Core.UI2.UITweener.TryResolveTweenAnim
// ============================================================

/* WARNING: Possible PIC construction at 0x02f9063c: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */

long * Core_UI2_UITweener__TryResolveTweenAnim(long param_1,ulong param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint extraout_w8;
  long lVar9;
  long lVar10;
  long extraout_x9;
  uint uVar11;
  long *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  undefined8 uVar12;
  uint uVar13;
  code *pcVar14;
  ulong unaff_x23;
  long unaff_x24;
  long lVar15;
  undefined8 *******pppppppuVar16;
  undefined *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *******pppppppuStack_50;
  undefined *puStack_48;
  
  puVar1 = (undefined8 *)&stack0xffffffffffffffc0;
  if ((param_1 != 0) && (unaff_x22 = *(ulong *)(param_1 + 0x18), unaff_x22 != 0)) {
    uVar11 = *(uint *)(unaff_x22 + 0x18);
    unaff_x21 = (long *)(ulong)(0 < (int)uVar11);
    if (0 < (int)uVar11) {
      unaff_x23 = 0;
      do {
        uVar13 = (uint)unaff_x23;
        unaff_x19 = param_3;
        if (uVar11 <= uVar13) goto LAB_02f903d8;
        unaff_x24 = *(long *)(unaff_x22 + (long)(int)uVar13 * 8 + 0x20);
        unaff_x20 = param_2;
        if ((unaff_x24 == 0) || (*(long *)(unaff_x24 + 0x10) == 0)) goto LAB_02f903d4;
        iVar2 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(unaff_x24 + 0x10),param_2,3,0);
        if (iVar2 != 0) goto LAB_02f903b8;
        uVar13 = uVar13 + 1;
        unaff_x23 = (ulong)uVar13;
        uVar11 = *(uint *)(unaff_x22 + 0x18);
        unaff_x21 = (long *)(ulong)((int)uVar13 < (int)uVar11);
      } while ((int)uVar13 < (int)uVar11);
    }
    unaff_x24 = 0;
LAB_02f903b8:
    *param_3 = unaff_x24;
    return unaff_x21;
  }
LAB_02f903d4:
  param_2 = unaff_x20;
  func_0x00f78af4();
LAB_02f903d8:
  uVar4 = func_0x00f78b24();
  plVar5 = (long *)func_0x00f78ac0(uVar4,0);
  puStack_48 = &Core_UI2_UITweener__DiscoverDependencies;
  pppppppuStack_50 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003ebc69e & 1) == 0) {
    func_0x00f78a20(0x3d3c518);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25430);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69e = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  lVar9 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
  if (lVar9 == 0) {
code_r0x02f906d0:
    func_0x00f78af4();
  }
  else {
    uVar11 = (uint)plVar5;
    if (uVar11 < *(uint *)(lVar9 + 0x18)) {
      lVar15 = (long)(int)uVar11;
      lVar9 = *(long *)(lVar9 + lVar15 * 0x28 + 0x28);
      if (lVar9 != 0) {
        uVar4 = *(undefined8 *)(lVar9 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar4,0);
        if (iVar2 != 0) {
          param_2 = 0;
          lVar9 = 0x20;
          do {
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
            }
            lVar10 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
            if (lVar10 == 0) goto code_r0x02f906d0;
            if ((long)*(int *)(lVar10 + 0x18) <= (long)param_2) {
              return /*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600;
            }
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
              lVar10 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
              if (lVar10 == 0) goto code_r0x02f906d0;
            }
            if (*(uint *)(lVar10 + 0x18) <= param_2) goto code_r0x02f906d4;
            puVar1 = (undefined8 *)(lVar10 + lVar9);
            uStack_c8 = puVar1[1];
            uStack_d0 = *puVar1;
            uStack_b8 = puVar1[3];
            uStack_c0 = puVar1[2];
            uStack_b0 = puVar1[4];
            plVar6 = (long *)Core_UI2_PlannedTweenData__get_IsValid(&uStack_d0);
            uVar4 = uStack_d0;
            if ((int)plVar6 == 0) {
              return plVar6;
            }
            if (((ulong)plVar5 & 0xffffffff) != param_2) {
              if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
                 ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
                func_0x00f78ad0();
              }
              lVar10 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
              if (lVar10 == 0) goto code_r0x02f906d0;
              if (*(uint *)(lVar10 + 0x18) <= uVar11) goto code_r0x02f906d4;
              lVar10 = *(long *)(lVar10 + lVar15 * 0x28 + 0x28);
              if (lVar10 == 0) goto code_r0x02f906d0;
              uVar12 = *(undefined8 *)(lVar10 + 0x20);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,uVar12,0);
              if ((uVar7 & 1) == 0) goto code_r0x02f905e0;
            }
            param_2 = param_2 + 1;
            lVar9 = lVar9 + 0x28;
          } while( true );
        }
        if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
          func_0x00f78ad0();
        }
        plVar6 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18);
        uVar7 = Core_UI2_TweenDependencyIndexPair__CreateEmpty(plVar5);
        pppppppuVar16 = pppppppuStack_50;
        puVar17 = puStack_48;
        if (plVar6 != (long *)0x0) goto code_r0x02427110;
      }
      goto code_r0x02f906d0;
    }
  }
code_r0x02f906d4:
  uVar4 = func_0x00f78b24();
  auVar19 = func_0x00f78ac0(uVar4,0);
  lVar9 = auVar19._0_8_;
  if ((lVar9 != 0) && (lVar15 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0), lVar15 != 0)) {
    plVar5 = (long *)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar15,0);
    switch(auVar19._8_4_) {
    case 1:
      lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0);
      if (lVar9 == 0) goto System_Object___ctor;
      plVar5 = (long *)/*UnityEngine.Transform$$GetSiblingIndex*/ func_0x03277144(lVar9,0);
      break;
    case 3:
      break;
    case 4:
      break;
    case 6:
    case 9:
      break;
    case 7:
      break;
    case 8:
    }
    return plVar5;
  }
System_Object___ctor:
  plVar5 = (long *)func_0x00f78af4();
  return plVar5;
code_r0x02f905e0:
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18);
  uVar7 = func_0x00f78aec(/*Core.UI2.TweenDependencyIndexPair_TypeInfo*/ uRam0000000003d25430);
  Core_UI2_TweenDependencyIndexPair___ctor(uVar7,plVar5,param_2);
  if (plVar6 == (long *)0x0) goto code_r0x02f906d0;
  puVar1 = &uStack_d0;
  unaff_x19 = plVar5;
  unaff_x21 = plVar6;
  unaff_x22 = uVar7;
  unaff_x23 = 0x3d25600;
  unaff_x24 = lVar15;
  pppppppuVar16 = &pppppppuStack_50;
  puVar17 = &UNK_02f90640;
code_r0x02427110:
  *(ulong *)((long)puVar1 + -0x20) = param_2;
  *(long **)((long)puVar1 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)puVar1 + -0x10) = pppppppuVar16;
  *(undefined **)((long)puVar1 + -8) = puVar17;
  lVar9 = plVar6[2];
  puVar8 = puRam0000000003d3c518;
  if (lVar9 == 0) {
code_r0x0242716c:
    uVar7 = param_2;
    plVar6 = unaff_x19;
    plVar5 = (long *)func_0x00f78af4();
    lVar9 = extraout_x9;
    uVar11 = extraout_w8;
code_r0x02427170:
    *(uint *)(plVar6 + 3) = uVar11 + 1;
  }
  else {
    uVar11 = *(uint *)(plVar6 + 3);
    plVar5 = plVar6;
    if (uVar11 != *(uint *)(lVar9 + 0x18)) goto code_r0x02427170;
    puVar8 = *(undefined8 **)(*(long *)(puRam0000000003d3c518[3] + 0xc0) + 0x60);
    plVar5 = (long *)(*(code *)*puVar8)(plVar6,uVar11 + 1);
    lVar9 = plVar6[2];
    uVar11 = *(uint *)(plVar6 + 3);
    *(uint *)(plVar6 + 3) = uVar11 + 1;
    unaff_x19 = plVar6;
    param_2 = uVar7;
    if (lVar9 == 0) goto code_r0x0242716c;
  }
  if (uVar11 < *(uint *)(lVar9 + 0x18)) {
    *(ulong *)(lVar9 + (long)(int)uVar11 * 8 + 0x20) = uVar7;
    *(int *)((long)plVar6 + 0x1c) = *(int *)((long)plVar6 + 0x1c) + 1;
    return plVar5;
  }
  uVar4 = func_0x00f78b24();
  auVar18 = func_0x00f78ac0(uVar4,0);
  lVar15 = auVar18._8_8_;
  lVar9 = auVar18._0_8_;
  *(long *)((long)puVar1 + -0x60) = unaff_x24;
  *(ulong *)((long)puVar1 + -0x58) = unaff_x23;
  *(ulong *)((long)puVar1 + -0x50) = unaff_x22;
  *(long **)((long)puVar1 + -0x48) = unaff_x21;
  *(ulong *)((long)puVar1 + -0x40) = uVar7;
  *(long **)((long)puVar1 + -0x38) = plVar6;
  *(undefined1 **)((long)puVar1 + -0x30) = (undefined1 *)((long)puVar1 + -0x10);
  *(undefined **)((long)puVar1 + -0x28) =
       &System_Collections_Generic_List_object___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x48))(lVar15,0x14);
  if (lVar9 == 0) {
    func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x2427350);
    (*pcVar14)();
  }
  pcVar14 = (code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x28);
  lVar10 = *(long *)(*(long *)(puVar8[3] + 0xc0) + 0x38);
  if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar10);
  }
  if (lVar15 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = func_0x00f78adc(lVar15,lVar10);
    if (lVar3 == 0) {
      func_0x00f78e5c(lVar15,lVar10);
      goto code_r0x0242734c;
    }
  }
  (*pcVar14)(lVar9,lVar3,*(undefined8 *)(*(long *)(puVar8[3] + 0xc0) + 0x28));
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x68))(lVar9);
  return (long *)(ulong)(iVar2 - 1);
}



// ============================================================
// RVA: 0x2f903e4 | Core.UI2.UITweener.DiscoverDependencies
// ============================================================

/* WARNING: Possible PIC construction at 0x02f9063c: Changing call to branch */

ulong Core_UI2_UITweener__DiscoverDependencies(ulong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint extraout_w8;
  long lVar8;
  long lVar9;
  long extraout_x9;
  uint uVar10;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined8 uVar11;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 unaff_x23;
  long unaff_x24;
  long lVar14;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003ebc69e & 1) == 0) {
    func_0x00f78a20(0x3d3c518);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25430);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69e = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ uRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ uRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar8 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ uRam0000000003d25600 + 0xb8) + 8);
  if (lVar8 == 0) {
LAB_02f906d0:
    func_0x00f78af4();
  }
  else {
    uVar10 = (uint)param_1;
    if (uVar10 < *(uint *)(lVar8 + 0x18)) {
      lVar14 = (long)(int)uVar10;
      lVar8 = *(long *)(lVar8 + lVar14 * 0x28 + 0x28);
      if (lVar8 != 0) {
        uVar11 = *(undefined8 *)(lVar8 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar11,0);
        if (iVar2 != 0) {
          unaff_x20 = 0;
          lVar8 = 0x20;
          do {
            if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ uRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ uRam0000000003d25600 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar9 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ uRam0000000003d25600 + 0xb8) + 8);
            if (lVar9 == 0) goto LAB_02f906d0;
            if ((long)*(int *)(lVar9 + 0x18) <= (long)unaff_x20) {
              return /*Core.UI2.UITweener_TypeInfo*/ uRam0000000003d25600;
            }
            if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ uRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ uRam0000000003d25600 + 0xe0) == 0)) {
              func_0x00f78ad0();
              lVar9 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ uRam0000000003d25600 + 0xb8) + 8);
              if (lVar9 == 0) goto LAB_02f906d0;
            }
            if (*(uint *)(lVar9 + 0x18) <= unaff_x20) goto LAB_02f906d4;
            puVar7 = (undefined8 *)(lVar9 + lVar8);
            uStack_88 = puVar7[1];
            uStack_90 = *puVar7;
            uStack_78 = puVar7[3];
            uStack_80 = puVar7[2];
            uStack_70 = puVar7[4];
            uVar5 = Core_UI2_PlannedTweenData__get_IsValid(&uStack_90);
            uVar11 = uStack_90;
            if ((int)uVar5 == 0) {
              return uVar5;
            }
            if ((param_1 & 0xffffffff) != unaff_x20) {
              if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ uRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ uRam0000000003d25600 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar9 = *(long *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ uRam0000000003d25600 + 0xb8) + 8);
              if (lVar9 == 0) goto LAB_02f906d0;
              if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_02f906d4;
              lVar9 = *(long *)(lVar9 + lVar14 * 0x28 + 0x28);
              if (lVar9 == 0) goto LAB_02f906d0;
              uVar12 = *(undefined8 *)(lVar9 + 0x20);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,uVar12,0);
              if ((uVar5 & 1) == 0) goto code_r0x02f905e0;
            }
            unaff_x20 = unaff_x20 + 1;
            lVar8 = lVar8 + 0x28;
          } while( true );
        }
        if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ uRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ uRam0000000003d25600 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar5 = *(ulong *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ uRam0000000003d25600 + 0xb8) + 0x18);
        uVar6 = Core_UI2_TweenDependencyIndexPair__CreateEmpty(param_1);
        if (uVar5 != 0) goto code_r0x02427110;
      }
      goto LAB_02f906d0;
    }
  }
LAB_02f906d4:
  uVar11 = func_0x00f78b24();
  auVar16 = func_0x00f78ac0(uVar11,0);
  lVar8 = auVar16._0_8_;
  if ((lVar8 != 0) && (lVar14 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0), lVar14 != 0)) {
    uVar5 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar14,0);
    switch(auVar16._8_4_) {
    case 1:
      lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
      if (lVar8 == 0) goto System_Object___ctor;
      uVar5 = /*UnityEngine.Transform$$GetSiblingIndex*/ func_0x03277144(lVar8,0);
      break;
    case 3:
      break;
    case 4:
      break;
    case 6:
    case 9:
      break;
    case 7:
      break;
    case 8:
    }
    return uVar5;
  }
System_Object___ctor:
  uVar5 = func_0x00f78af4();
  return uVar5;
code_r0x02f905e0:
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ uRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ uRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = *(ulong *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ uRam0000000003d25600 + 0xb8) + 0x18);
  uVar6 = func_0x00f78aec(/*Core.UI2.TweenDependencyIndexPair_TypeInfo*/ uRam0000000003d25430);
  Core_UI2_TweenDependencyIndexPair___ctor(uVar6,param_1,unaff_x20);
  if (uVar5 == 0) goto LAB_02f906d0;
  unaff_x30 = 0x2f90640;
  register0x00000008 = (BADSPACEBASE *)&uStack_90;
  unaff_x19 = param_1;
  unaff_x21 = uVar5;
  unaff_x22 = uVar6;
  unaff_x23 = 0x3d25600;
  unaff_x24 = lVar14;
  unaff_x29 = puVar1;
code_r0x02427110:
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar8 = *(long *)(uVar5 + 0x10);
  puVar7 = puRam0000000003d3c518;
  if (lVar8 == 0) {
code_r0x0242716c:
    uVar6 = unaff_x20;
    uVar5 = unaff_x19;
    uVar3 = func_0x00f78af4();
    lVar8 = extraout_x9;
    uVar10 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar5 + 0x18) = uVar10 + 1;
  }
  else {
    uVar10 = *(uint *)(uVar5 + 0x18);
    uVar3 = uVar5;
    if (uVar10 != *(uint *)(lVar8 + 0x18)) goto code_r0x02427170;
    puVar7 = *(undefined8 **)(*(long *)(puRam0000000003d3c518[3] + 0xc0) + 0x60);
    uVar3 = (*(code *)*puVar7)(uVar5,uVar10 + 1);
    lVar8 = *(long *)(uVar5 + 0x10);
    uVar10 = *(uint *)(uVar5 + 0x18);
    *(uint *)(uVar5 + 0x18) = uVar10 + 1;
    unaff_x19 = uVar5;
    unaff_x20 = uVar6;
    if (lVar8 == 0) goto code_r0x0242716c;
  }
  if (uVar10 < *(uint *)(lVar8 + 0x18)) {
    *(ulong *)(lVar8 + (long)(int)uVar10 * 8 + 0x20) = uVar6;
    *(int *)(uVar5 + 0x1c) = *(int *)(uVar5 + 0x1c) + 1;
    return uVar3;
  }
  uVar11 = func_0x00f78b24();
  auVar15 = func_0x00f78ac0(uVar11,0);
  lVar14 = auVar15._8_8_;
  lVar8 = auVar15._0_8_;
  *(long *)((long)register0x00000008 + -0x60) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x50) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x48) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x40) = uVar6;
  *(ulong *)((long)register0x00000008 + -0x38) = uVar5;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x28) =
       &System_Collections_Generic_List_object___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x48))(lVar14,0x14);
  if (lVar8 == 0) {
    func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x2427350);
    (*pcVar13)();
  }
  pcVar13 = (code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x28);
  lVar9 = *(long *)(*(long *)(puVar7[3] + 0xc0) + 0x38);
  if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar9);
  }
  if (lVar14 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = func_0x00f78adc(lVar14,lVar9);
    if (lVar4 == 0) {
      func_0x00f78e5c(lVar14,lVar9);
      goto code_r0x0242734c;
    }
  }
  (*pcVar13)(lVar8,lVar4,*(undefined8 *)(*(long *)(puVar7[3] + 0xc0) + 0x28));
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x68))(lVar8);
  return (ulong)(iVar2 - 1);
}



// ============================================================
// RVA: 0x2f906e0 | Core.UI2.UITweener.CalculateOrderRankingForLeaf
// ============================================================

undefined1  [16]
Core_UI2_UITweener__CalculateOrderRankingForLeaf
          (undefined1 param_1 [16],float param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  float extraout_s0;
  float fVar3;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined1 auVar4 [16];
  undefined4 uVar6;
  undefined8 extraout_var_01;
  undefined8 uVar7;
  undefined1 auVar5 [16];
  undefined8 extraout_var_02;
  
  if ((param_3 != 0) && (lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_3,0), lVar2 != 0)) {
    /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar2,0);
    fVar3 = extraout_s0;
    uVar6 = extraout_var;
    uVar7 = extraout_var_01;
    switch(param_4) {
    case 1:
      lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_3,0);
      if (lVar2 == 0) goto LAB_02f9078c;
      iVar1 = /*UnityEngine.Transform$$GetSiblingIndex*/ func_0x03277144(lVar2,0);
      fVar3 = (float)iVar1;
      uVar6 = 0;
      uVar7 = 0;
      break;
    case 2:
    case 5:
      break;
    case 3:
      fVar3 = -extraout_s0;
      uVar6 = 0;
      uVar7 = 0;
      break;
    case 4:
      fVar3 = -param_2;
      uVar6 = 0;
      uVar7 = 0;
      break;
    case 6:
      param_2 = -param_2;
    case 9:
      fVar3 = param_2 - extraout_s0;
      uVar6 = 0;
      uVar7 = 0;
      break;
    case 7:
      fVar3 = extraout_s0 + param_2;
      uVar6 = 0;
      uVar7 = 0;
      break;
    case 8:
      fVar3 = extraout_s0 - param_2;
      uVar6 = 0;
      uVar7 = 0;
      break;
    default:
      fVar3 = 0.0;
      uVar6 = 0;
      uVar7 = 0;
    }
    auVar5._4_4_ = uVar6;
    auVar5._0_4_ = fVar3;
    auVar5._8_8_ = uVar7;
    return auVar5;
  }
LAB_02f9078c:
  func_0x00f78af4();
  auVar4._4_4_ = extraout_var_00;
  auVar4._0_4_ = extraout_s0_00;
  auVar4._8_8_ = extraout_var_02;
  return auVar4;
}



// ============================================================
// RVA: 0x2f90798 | Core.UI2.UITweener.CallAndSurfaceExceptions
// ============================================================

/* WARNING: Possible PIC construction at 0x02f90808: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f9080c) */

void Core_UI2_UITweener__CallAndSurfaceExceptions(long param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  code *pcVar12;
  undefined8 unaff_x22;
  long lVar13;
  undefined8 unaff_x23;
  undefined1 *puVar14;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar14 = &stack0xfffffffffffffff0;
  if ((bRam0000000003ebc6a1 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    bRam0000000003ebc6a1 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 8) == '\0') {
    if (param_1 == 0) {
      return;
    }
  }
  else {
    if (param_1 == 0) {
      return;
    }
    unaff_x30 = 0x2f9080c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_1;
    unaff_x20 = 0x3d20bc0;
    unaff_x21 = 0x3ebc000;
    unaff_x29 = puVar14;
  }
  uVar5 = 0;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(long *)((long)register0x00000008 + -0x58) = param_1;
  lVar7 = *(long *)(param_1 + 0x68);
  if (lVar7 == 0) {
    puVar14 = (undefined1 *)((long)register0x00000008 + -0x58);
    lVar13 = 1;
  }
  else {
    lVar13 = *(long *)(lVar7 + 0x18);
    if (lVar13 == 0) {
      return;
    }
    puVar14 = (undefined1 *)(lVar7 + 0x20);
  }
  lVar7 = 0;
  do {
    lVar8 = *(long *)(puVar14 + lVar7 * 8);
    pcVar12 = *(code **)(lVar8 + 0x10);
    plVar1 = *(long **)(lVar8 + 0x20);
    lVar8 = *(long *)(lVar8 + 0x28);
    if (*(short *)(lVar8 + 0x48) == -1) {
      func_0x00f78ad8(lVar8,uVar5);
    }
    iVar3 = func_0x00f78a4c(lVar8);
    if (iVar3 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar8 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(param_1 + 0x18) == 0))
      goto code_r0x016bb980;
      iVar3 = func_0x00f78a44(lVar8);
      iVar4 = func_0x00f78ec0(lVar8);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar8 + 0x48);
        if (iVar4 == 0) {
          lVar8 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar8 + 0x138))(plVar1,*(undefined8 *)(lVar8 + 0x140));
          uVar5 = extraout_x1_01;
          goto code_r0x016bb98c;
        }
        lVar8 = func_0x00f78a48(lVar8);
        lVar9 = *plVar1;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar6 = (undefined8 *)(lVar9 + (long)(int)(*piVar11 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x016bba50;
            }
            piVar11 = piVar11 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar1,lVar8,(ulong)uVar2);
code_r0x016bba50:
        pcVar12 = (code *)*puVar6;
        puVar6 = (undefined8 *)puVar6[1];
      }
      else {
        if (iVar4 == 0) {
          uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar8 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar9 = *plVar1;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)(lVar8 + 0x18)) {
                lVar9 = lVar9 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar8 + 0x48)) * 0x10 +
                        0x138;
                goto code_r0x016bba28;
              }
              piVar11 = piVar11 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          lVar9 = func_0x00fac1f0(plVar1);
code_r0x016bba28:
          uVar5 = *(undefined8 *)(lVar9 + 8);
        }
        puVar6 = (undefined8 *)func_0x00f78acc(uVar5,lVar8);
        pcVar12 = (code *)*puVar6;
      }
      (*pcVar12)(plVar1,puVar6);
      uVar5 = extraout_x1_02;
    }
    else if (*(char *)(lVar8 + 0x4a) == '\0') {
      (*pcVar12)(lVar8);
      uVar5 = extraout_x1;
    }
    else {
code_r0x016bb980:
      (*pcVar12)(plVar1,lVar8);
      uVar5 = extraout_x1_00;
    }
code_r0x016bb98c:
    lVar7 = lVar7 + 1;
    if (lVar7 == lVar13) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f908c8 | Core.UI2.UITweener.TweenDebugLog
// ============================================================

void Core_UI2_UITweener__TweenDebugLog(void)

{
  return;
}



// ============================================================
// RVA: 0x2f908cc | Core.UI2.UITweener..cctor
// ============================================================

void Core_UI2_UITweener___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003ebc6a3 & 1) == 0) {
    func_0x00f78a20(0x3d3c510);
    func_0x00f78a20(0x3d3c648);
    func_0x00f78a20(0x3d3b8a8);
    func_0x00f78a20(0x3d1dcc8);
    func_0x00f78a20(0x3d1df70);
    func_0x00f78a20(0x3d1df20);
    func_0x00f78a20(0x3d1f260);
    func_0x00f78a20(0x3d1f3d8);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc6a3 = 1;
  }
  uVar1 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,0x100);
  **(undefined8 **)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) = uVar1;
  uVar1 = func_0x00f78a34(/*Core.UI2.PlannedTweenData[]_TypeInfo*/ uRam0000000003d1f260,0x20);
  *(undefined8 *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 8) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<UITweenLeaf>_TypeInfo*/ uRam0000000003d1df70);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar1,0x200,uRam0000000003d3c648);
  *(undefined8 *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x10) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TweenDependencyIndexPair>_TypeInfo*/ uRam0000000003d1df20);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar1,0x20,uRam0000000003d3c510);
  *(undefined8 *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x18) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<PlannedTweenData>_TypeInfo*/ uRam0000000003d1dcc8);
  /*System.Collections.Generic.List<PlannedTweenData>$$.ctor*/ func_0x02433dd0(uVar1,0x20,uRam0000000003d3b8a8);
  *(undefined8 *)(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xb8) + 0x20) = uVar1;
  return;
}



