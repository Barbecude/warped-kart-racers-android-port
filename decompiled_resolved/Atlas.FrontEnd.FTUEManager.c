// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.FTUEManager

// ============================================================
// RVA: 0x1584350 | Atlas.FrontEnd.FTUEManager.set_SkipFTUE
// ============================================================

void Atlas_FrontEnd_FTUEManager__set_SkipFTUE(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x48) = param_2;
  return;
}



// ============================================================
// RVA: 0x1584358 | Atlas.FrontEnd.FTUEManager.Init
// ============================================================

/* WARNING: Removing unreachable block (ram,0x015848e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_FrontEnd_FTUEManager__Init
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *unaff_x21;
  undefined8 uVar11;
  long lStack_58;
  
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = param_5;
  *(undefined8 *)(param_1 + 0x30) = param_6;
  *(undefined8 *)(param_1 + 0x38) = param_7;
  *(undefined1 *)(param_1 + 0x49) = 1;
  if ((bRam0000000003eb50c8 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d55ae8);
    func_0x00f78a20(0x3d55e50);
    func_0x00f78a20(0x3d21830);
    func_0x00f78a20(0x3d21838);
    func_0x00f78a20(0x3d35770);
    func_0x00f78a20(0x3d1ca78);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d57560);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3a5c8);
    func_0x00f78a20(0x3d3a5d0);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d62d60);
    func_0x00f78a20(0x3d27520);
    func_0x00f78a20(0x3d6cba0);
    bRam0000000003eb50c8 = 1;
  }
  lStack_58 = 0;
  if (*(char *)(param_1 + 0x49) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x40),uRam0000000003d3a5d0);
    if (((*(ushort *)(/*Atlas.FrontEnd.FTUEManager_TypeInfo*/ lRam0000000003d21830 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.FrontEnd.FTUEManager_TypeInfo*/ lRam0000000003d21830 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar10 = **(long **)(/*Atlas.FrontEnd.FTUEManager_TypeInfo*/ lRam0000000003d21830 + 0xb8);
    if (lVar10 != 0) {
      if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
        unaff_x21 = (long *)0x0;
        plVar7 = (long *)(*(ulong *)(lVar10 + 0x18) & 0xffffffff);
        do {
          if (plVar7 <= unaff_x21) {
            uVar5 = func_0x00f78b24();
            func_0x00f78ac0(uVar5,0);
            goto code_r0x015848d8;
          }
          if ((*(long *)(param_1 + 0x10) == 0) ||
             (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar4 == 0))
          goto code_r0x015848b4;
          uVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar4,*(undefined8 *)(lVar10 + 0x20 + (long)unaff_x21 * 8),
                                  uRam0000000003d57280);
          /*Atlas.FrontEnd.FTUEManager$$MarkStageAsUnlocked*/ func_0x0158492c(param_1,uVar5,1);
          unaff_x21 = (long *)((long)unaff_x21 + 1);
          plVar7 = (long *)(ulong)*(uint *)(lVar10 + 0x18);
        } while ((long)unaff_x21 < (long)(int)*(uint *)(lVar10 + 0x18));
      }
      if (((*(long *)(param_1 + 0x10) != 0) &&
          (lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar10 != 0)) &&
         (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar10,&lStack_58,uRam0000000003d57560), lStack_58 != 0)) {
        plVar7 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_58,uRam0000000003d3fe40);
        if (plVar7 == (long *)0x0) {
code_r0x015848d8:
          func_0x00f78af4();
        }
        else {
code_r0x0158459c:
          lVar10 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                goto code_r0x015845e8;
              }
              piVar9 = piVar9 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x015845e8:
          uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
          if ((uVar8 & 1) == 0) {
            if (plVar7 == (long *)0x0) goto code_r0x01584748;
            lVar10 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar8 == 0) goto code_r0x01584720;
            piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto code_r0x01584708;
          }
          lVar10 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                goto code_r0x01584644;
              }
              piVar9 = piVar9 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01584644:
          unaff_x21 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
          if (unaff_x21 != (long *)0x0) {
            if ((*(byte *)(*unaff_x21 + 300) < *(byte *)(/*Atlas.Definitions.FTUEStageDefinition_TypeInfo*/ lRam0000000003d21838 + 300)) ||
               (*(long *)(*(long *)(*unaff_x21 + 200) +
                          (ulong)*(byte *)(/*Atlas.Definitions.FTUEStageDefinition_TypeInfo*/ lRam0000000003d21838 + 300) * 8 + -8) !=
                /*Atlas.Definitions.FTUEStageDefinition_TypeInfo*/ lRam0000000003d21838)) goto code_r0x015848b8;
          }
          if (*(long *)(param_1 + 0x40) != 0) {
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x40),unaff_x21,uRam0000000003d3a5c8);
            if ((*(char *)(param_1 + 0x48) == '\0') &&
               (uVar8 = /*Atlas.FrontEnd.FTUEManager$$IsStageUnlockedAndComplete*/ func_0x01584974(param_1,unaff_x21), (uVar8 & 1) != 0)) {
              /*Atlas.FrontEnd.FTUEManager$$MarkStageAsCompleted*/ func_0x01584a28(param_1,unaff_x21,1,0,1);
            }
            goto code_r0x0158459c;
          }
          func_0x00f78af4();
        }
        goto code_r0x015848dc;
      }
    }
  }
  goto code_r0x015848b4;
  while( true ) {
    piVar9 = piVar9 + 4;
    uVar8 = uVar8 - 1;
    if (uVar8 == 0) break;
code_r0x01584708:
    if (*(long *)(piVar9 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
      goto code_r0x0158473c;
    }
  }
code_r0x01584720:
  puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0158473c:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
code_r0x01584748:
  lVar10 = *(long *)(param_1 + 0x30);
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  unaff_x21 = (long *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_2_Items')*/ uRam0000000003d6cba0,0);
  bVar2 = /*Atlas.FrontEnd.FTUEManager$$IsStageUnlocked*/ func_0x01585534(param_1,unaff_x21);
  bVar3 = /*Atlas.FrontEnd.FTUEManager$$IsStageComplete*/ func_0x015855fc(param_1,unaff_x21);
  if (lVar10 != 0) {
    *(byte *)(lVar10 + 0xb8) = *(char *)(param_1 + 0x48) != '\0' | bVar2 & bVar3;
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    if (((*(ushort *)(/*Atlas.FrontEnd.FTUEManager.<>c_TypeInfo*/ lRam0000000003d27520 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.FrontEnd.FTUEManager.<>c_TypeInfo*/ lRam0000000003d27520 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar6 = *(undefined8 **)(/*Atlas.FrontEnd.FTUEManager.<>c_TypeInfo*/ lRam0000000003d27520 + 0xb8);
    lVar10 = puVar6[1];
    if (lVar10 == 0) {
      if (((*(ushort *)(/*Atlas.FrontEnd.FTUEManager.<>c_TypeInfo*/ lRam0000000003d27520 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.FrontEnd.FTUEManager.<>c_TypeInfo*/ lRam0000000003d27520 + 0xe0) == 0)) {
        func_0x00f78ad0();
        puVar6 = *(undefined8 **)(/*Atlas.FrontEnd.FTUEManager.<>c_TypeInfo*/ lRam0000000003d27520 + 0xb8);
      }
      uVar11 = *puVar6;
      lVar10 = func_0x00f78aec(/*System.Func<FTUEStageDefinition, int>_TypeInfo*/ uRam0000000003d1ca78);
      /*System.Func<object, int>$$.ctor*/ func_0x0217832c(lVar10,uVar11,uRam0000000003d62d60,uRam0000000003d35770);
      *(long *)(*(long *)(/*Atlas.FrontEnd.FTUEManager.<>c_TypeInfo*/ lRam0000000003d27520 + 0xb8) + 8) = lVar10;
    }
    uVar5 = /*System.Linq.Enumerable$$OrderBy<object, int>*/ func_0x0184f188(uVar5,lVar10,uRam0000000003d55ae8);
    uVar5 = /*System.Linq.Enumerable$$ToList<VolumeParameter>*/ func_0x01854f28(uVar5,uRam0000000003d55e50);
    *(undefined8 *)(param_1 + 0x40) = uVar5;
    return;
  }
code_r0x015848b4:
  func_0x00f78af4();
code_r0x015848b8:
  func_0x00f78e5c(unaff_x21);
code_r0x015848dc:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x15848e0);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1584370 | Atlas.FrontEnd.FTUEManager.Reset
// ============================================================

/* WARNING: Removing unreachable block (ram,0x015848e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_FrontEnd_FTUEManager__Reset(long param_1)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *unaff_x21;
  undefined8 uVar11;
  long lStack_58;
  
  if ((bRam0000000003eb50c8 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d55ae8);
    func_0x00f78a20(0x3d55e50);
    func_0x00f78a20(0x3d21830);
    func_0x00f78a20(0x3d21838);
    func_0x00f78a20(0x3d35770);
    func_0x00f78a20(0x3d1ca78);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d57560);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3a5c8);
    func_0x00f78a20(0x3d3a5d0);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d62d60);
    func_0x00f78a20(0x3d27520);
    func_0x00f78a20(0x3d6cba0);
    bRam0000000003eb50c8 = 1;
  }
  lStack_58 = 0;
  if (*(char *)(param_1 + 0x49) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x40),uRam0000000003d3a5d0);
    if (((*(ushort *)(/*Atlas.FrontEnd.FTUEManager_TypeInfo*/ lRam0000000003d21830 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.FrontEnd.FTUEManager_TypeInfo*/ lRam0000000003d21830 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar10 = **(long **)(/*Atlas.FrontEnd.FTUEManager_TypeInfo*/ lRam0000000003d21830 + 0xb8);
    if (lVar10 != 0) {
      if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
        unaff_x21 = (long *)0x0;
        plVar7 = (long *)(*(ulong *)(lVar10 + 0x18) & 0xffffffff);
        do {
          if (plVar7 <= unaff_x21) {
            uVar5 = func_0x00f78b24();
            func_0x00f78ac0(uVar5,0);
            goto LAB_015848d8;
          }
          if ((*(long *)(param_1 + 0x10) == 0) ||
             (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar4 == 0)) goto LAB_015848b4;
          uVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar4,*(undefined8 *)(lVar10 + 0x20 + (long)unaff_x21 * 8),
                                  uRam0000000003d57280);
          /*Atlas.FrontEnd.FTUEManager$$MarkStageAsUnlocked*/ func_0x0158492c(param_1,uVar5,1);
          unaff_x21 = (long *)((long)unaff_x21 + 1);
          plVar7 = (long *)(ulong)*(uint *)(lVar10 + 0x18);
        } while ((long)unaff_x21 < (long)(int)*(uint *)(lVar10 + 0x18));
      }
      if (((*(long *)(param_1 + 0x10) != 0) &&
          (lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar10 != 0)) &&
         (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar10,&lStack_58,uRam0000000003d57560), lStack_58 != 0)) {
        plVar7 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_58,uRam0000000003d3fe40);
        if (plVar7 == (long *)0x0) {
LAB_015848d8:
          func_0x00f78af4();
        }
        else {
code_r0x0158459c:
          lVar10 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_015845e8;
              }
              piVar9 = piVar9 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_015845e8:
          uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
          if ((uVar8 & 1) == 0) {
            if (plVar7 == (long *)0x0) goto code_r0x01584748;
            lVar10 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar8 == 0) goto code_r0x01584720;
            piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto code_r0x01584708;
          }
          lVar10 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                goto code_r0x01584644;
              }
              piVar9 = piVar9 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01584644:
          unaff_x21 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
          if (unaff_x21 != (long *)0x0) {
            if ((*(byte *)(*unaff_x21 + 300) < *(byte *)(/*Atlas.Definitions.FTUEStageDefinition_TypeInfo*/ lRam0000000003d21838 + 300)) ||
               (*(long *)(*(long *)(*unaff_x21 + 200) +
                          (ulong)*(byte *)(/*Atlas.Definitions.FTUEStageDefinition_TypeInfo*/ lRam0000000003d21838 + 300) * 8 + -8) !=
                /*Atlas.Definitions.FTUEStageDefinition_TypeInfo*/ lRam0000000003d21838)) goto code_r0x015848b8;
          }
          if (*(long *)(param_1 + 0x40) != 0) {
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x40),unaff_x21,uRam0000000003d3a5c8);
            if ((*(char *)(param_1 + 0x48) == '\0') &&
               (uVar8 = /*Atlas.FrontEnd.FTUEManager$$IsStageUnlockedAndComplete*/ func_0x01584974(param_1,unaff_x21), (uVar8 & 1) != 0)) {
              /*Atlas.FrontEnd.FTUEManager$$MarkStageAsCompleted*/ func_0x01584a28(param_1,unaff_x21,1,0,1);
            }
            goto code_r0x0158459c;
          }
          func_0x00f78af4();
        }
        goto code_r0x015848dc;
      }
    }
  }
  goto LAB_015848b4;
  while( true ) {
    piVar9 = piVar9 + 4;
    uVar8 = uVar8 - 1;
    if (uVar8 == 0) break;
code_r0x01584708:
    if (*(long *)(piVar9 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
      goto code_r0x0158473c;
    }
  }
code_r0x01584720:
  puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0158473c:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
code_r0x01584748:
  lVar10 = *(long *)(param_1 + 0x30);
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  unaff_x21 = (long *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_2_Items')*/ uRam0000000003d6cba0,0);
  bVar2 = /*Atlas.FrontEnd.FTUEManager$$IsStageUnlocked*/ func_0x01585534(param_1,unaff_x21);
  bVar3 = /*Atlas.FrontEnd.FTUEManager$$IsStageComplete*/ func_0x015855fc(param_1,unaff_x21);
  if (lVar10 != 0) {
    *(byte *)(lVar10 + 0xb8) = *(char *)(param_1 + 0x48) != '\0' | bVar2 & bVar3;
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    if (((*(ushort *)(/*Atlas.FrontEnd.FTUEManager.<>c_TypeInfo*/ lRam0000000003d27520 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.FrontEnd.FTUEManager.<>c_TypeInfo*/ lRam0000000003d27520 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar6 = *(undefined8 **)(/*Atlas.FrontEnd.FTUEManager.<>c_TypeInfo*/ lRam0000000003d27520 + 0xb8);
    lVar10 = puVar6[1];
    if (lVar10 == 0) {
      if (((*(ushort *)(/*Atlas.FrontEnd.FTUEManager.<>c_TypeInfo*/ lRam0000000003d27520 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.FrontEnd.FTUEManager.<>c_TypeInfo*/ lRam0000000003d27520 + 0xe0) == 0)) {
        func_0x00f78ad0();
        puVar6 = *(undefined8 **)(/*Atlas.FrontEnd.FTUEManager.<>c_TypeInfo*/ lRam0000000003d27520 + 0xb8);
      }
      uVar11 = *puVar6;
      lVar10 = func_0x00f78aec(/*System.Func<FTUEStageDefinition, int>_TypeInfo*/ uRam0000000003d1ca78);
      /*System.Func<object, int>$$.ctor*/ func_0x0217832c(lVar10,uVar11,uRam0000000003d62d60,uRam0000000003d35770);
      *(long *)(*(long *)(/*Atlas.FrontEnd.FTUEManager.<>c_TypeInfo*/ lRam0000000003d27520 + 0xb8) + 8) = lVar10;
    }
    uVar5 = /*System.Linq.Enumerable$$OrderBy<object, int>*/ func_0x0184f188(uVar5,lVar10,uRam0000000003d55ae8);
    uVar5 = /*System.Linq.Enumerable$$ToList<VolumeParameter>*/ func_0x01854f28(uVar5,uRam0000000003d55e50);
    *(undefined8 *)(param_1 + 0x40) = uVar5;
    return;
  }
LAB_015848b4:
  func_0x00f78af4();
code_r0x015848b8:
  func_0x00f78e5c(unaff_x21);
code_r0x015848dc:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x15848e0);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x158492c | Atlas.FrontEnd.FTUEManager.MarkStageAsUnlocked
// ============================================================

/* WARNING: Possible PIC construction at 0x01522088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01522104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015221c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01584ab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01584bd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01584ab4) */
/* WARNING: Removing unreachable block (ram,0x01584abc) */
/* WARNING: Removing unreachable block (ram,0x01584ae4) */
/* WARNING: Removing unreachable block (ram,0x01584aec) */
/* WARNING: Removing unreachable block (ram,0x01584b00) */
/* WARNING: Removing unreachable block (ram,0x01584b08) */
/* WARNING: Removing unreachable block (ram,0x01584b10) */
/* WARNING: Removing unreachable block (ram,0x01584b20) */
/* WARNING: Removing unreachable block (ram,0x01584b28) */
/* WARNING: Removing unreachable block (ram,0x01584b2c) */
/* WARNING: Removing unreachable block (ram,0x01584b34) */
/* WARNING: Removing unreachable block (ram,0x01584b3c) */
/* WARNING: Removing unreachable block (ram,0x01584b48) */
/* WARNING: Removing unreachable block (ram,0x01584b4c) */
/* WARNING: Removing unreachable block (ram,0x01584b54) */
/* WARNING: Removing unreachable block (ram,0x01584b5c) */
/* WARNING: Removing unreachable block (ram,0x01584b98) */
/* WARNING: Removing unreachable block (ram,0x01584ba0) */
/* WARNING: Removing unreachable block (ram,0x01584b68) */
/* WARNING: Removing unreachable block (ram,0x01584b70) */
/* WARNING: Removing unreachable block (ram,0x01584b94) */
/* WARNING: Removing unreachable block (ram,0x015221cc) */
/* WARNING: Removing unreachable block (ram,0x015221d0) */
/* WARNING: Removing unreachable block (ram,0x015221d8) */
/* WARNING: Removing unreachable block (ram,0x015221e8) */
/* WARNING: Removing unreachable block (ram,0x015221f0) */
/* WARNING: Removing unreachable block (ram,0x015221f4) */
/* WARNING: Removing unreachable block (ram,0x01522204) */
/* WARNING: Removing unreachable block (ram,0x01522220) */
/* WARNING: Removing unreachable block (ram,0x01522230) */
/* WARNING: Removing unreachable block (ram,0x01522238) */
/* WARNING: Removing unreachable block (ram,0x0152223c) */
/* WARNING: Removing unreachable block (ram,0x0152224c) */
/* WARNING: Removing unreachable block (ram,0x01522108) */
/* WARNING: Removing unreachable block (ram,0x0152210c) */
/* WARNING: Removing unreachable block (ram,0x01522114) */
/* WARNING: Removing unreachable block (ram,0x0152211c) */
/* WARNING: Removing unreachable block (ram,0x01522134) */
/* WARNING: Removing unreachable block (ram,0x0152213c) */
/* WARNING: Removing unreachable block (ram,0x0152208c) */
/* WARNING: Removing unreachable block (ram,0x01522090) */
/* WARNING: Removing unreachable block (ram,0x01522098) */
/* WARNING: Removing unreachable block (ram,0x015220a0) */
/* WARNING: Removing unreachable block (ram,0x015220b8) */
/* WARNING: Removing unreachable block (ram,0x015220c0) */
/* WARNING: Removing unreachable block (ram,0x01584bdc) */
/* WARNING: Removing unreachable block (ram,0x01584ba8) */
/* WARNING: Removing unreachable block (ram,0x01584bec) */
/* WARNING: Removing unreachable block (ram,0x01584bf4) */
/* WARNING: Removing unreachable block (ram,0x01584bfc) */
/* WARNING: Removing unreachable block (ram,0x01584c08) */
/* WARNING: Removing unreachable block (ram,0x01584c10) */
/* WARNING: Removing unreachable block (ram,0x01584c18) */
/* WARNING: Removing unreachable block (ram,0x01584c20) */
/* WARNING: Removing unreachable block (ram,0x01584bb4) */
/* WARNING: Removing unreachable block (ram,0x01584c58) */
/* WARNING: Removing unreachable block (ram,0x01584bbc) */
/* WARNING: Removing unreachable block (ram,0x01584be8) */

ulong Atlas_FrontEnd_FTUEManager__MarkStageAsUnlocked
                (long param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_a0 [16];
  long lStack_90;
  undefined8 uStack_88;
  long lVar12;
  
  auVar15._8_8_ = unaff_x20;
  auVar15._0_8_ = unaff_x19;
  lVar10 = *(long *)(param_1 + 0x18);
  if (param_3 == 0) {
    if ((param_2 != 0) && (lVar10 != 0)) {
      uVar14 = *(undefined8 *)(param_2 + 0x18);
      if ((bRam0000000003eb4e3c & 1) == 0) {
        func_0x00f78a20(0x3d33738,uVar14,0);
        func_0x00f78a20(0x3d33740);
        func_0x00f78a20(0x3d33748);
        func_0x00f78a20(0x3d3d950);
        func_0x00f78a20(0x3d3d958);
        bRam0000000003eb4e3c = 1;
      }
      if (((*(long *)(lVar10 + 0x20) == 0) ||
          (lVar8 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar10 + 0x20),0), lVar8 == 0)) ||
         (*(long *)(lVar8 + 0x38) == 0)) {
        func_0x00f78af4();
      }
      else {
        /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(auStack_a0,*(long *)(lVar8 + 0x38),uRam0000000003d3d950);
        do {
          uVar7 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&stack0xffffffffffffff90,uRam0000000003d33740);
          if ((uVar7 & 1) == 0) {
            iVar4 = 0x7a;
            goto code_r0x01522604;
          }
          if (lStack_90 == 0) {
            func_0x00f78af4();
            goto code_r0x01522678;
          }
          uVar9 = /*System.String$$Equals*/ func_0x029caa48(lStack_90,uVar14,4,0);
        } while ((uVar9 & 1) == 0);
        if (*(long *)(lVar10 + 0x20) != 0) {
          lVar8 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar10 + 0x20),0);
          if (lVar8 == 0) {
            func_0x00f78af4();
          }
          else if (*(long *)(lVar8 + 0x38) == 0) {
            func_0x00f78af4();
          }
          else {
            /*System.Collections.Generic.List<SaveData.UnlockedData>$$Remove*/ func_0x025933c8(*(long *)(lVar8 + 0x38),lStack_90,uStack_88,uRam0000000003d3d958);
            if (*(long *)(lVar10 + 0x20) == 0) {
              func_0x00f78af4();
            }
            else {
              /*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(*(long *)(lVar10 + 0x20),0);
              if (*(long *)(lVar10 + 0x20) != 0) {
                /*Atlas.Save.SaveManager$$StartSave*/ func_0x014eb4e0(*(long *)(lVar10 + 0x20),0);
                iVar4 = 0x7c;
code_r0x01522604:
                /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&stack0xffffffffffffff90,uRam0000000003d33738);
                if (iVar4 != 0x7c) {
                  uVar7 = 0;
                }
                return uVar7;
              }
              func_0x00f78af4();
            }
          }
          goto code_r0x01522678;
        }
      }
      func_0x00f78af4();
code_r0x01522678:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x152267c);
      (*pcVar2)();
    }
  }
  else if ((param_2 != 0) && (lVar10 != 0)) {
    auVar16._8_8_ = *(undefined8 *)(param_2 + 0x18);
    auVar16._0_8_ = lVar10;
    uVar14 = 1;
    puVar3 = (undefined1 *)register0x00000008;
    param_4 = unaff_x21;
    param_5 = unaff_x22;
    goto code_r0x01521f20;
  }
  auVar15 = func_0x00f78af4();
  lVar10 = auVar15._0_8_;
  if ((bRam0000000003eb50d3 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb50d3 = 1;
  }
  if (auVar15._8_8_ != 0) {
    uVar14 = *(undefined8 *)(auVar15._8_8_ + 0x18);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar14 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar14,0);
    uVar5 = /*Atlas.FrontEnd.FTUEManager$$IsStageUnlocked*/ func_0x01585534(lVar10,uVar14);
    uVar6 = /*Atlas.FrontEnd.FTUEManager$$IsStageComplete*/ func_0x015855fc(lVar10,uVar14);
    return (ulong)((uint)(*(char *)(lVar10 + 0x48) != '\0') | uVar5 & uVar6);
  }
  auVar15 = func_0x00f78af4();
  lVar10 = auVar15._8_8_;
  uVar9 = auVar15._0_8_;
  auVar15._8_8_ = uVar9;
  auVar15._0_8_ = lVar10;
  puVar3 = &stack0xffffffffffffff80;
  unaff_x29 = &stack0xffffffffffffffb0;
  uVar7 = uVar9;
  if ((bRam0000000003eb50cb & 1) == 0) {
    func_0x00f78a20(0x3d2dba8);
    func_0x00f78a20(0x3d2dc08);
    func_0x00f78a20(0x3d6cb20);
    uVar7 = func_0x00f78a20(0x3d77cb0);
    bRam0000000003eb50cb = 1;
  }
  if (param_3 != 0) {
    if ((lVar10 != 0) && (*(long *)(uVar9 + 0x18) != 0)) {
      auVar16._8_8_ = *(undefined8 *)(lVar10 + 0x18);
      auVar16._0_8_ = *(long *)(uVar9 + 0x18);
      uVar14 = 0;
      unaff_x30 = &UNK_01584ab4;
code_r0x01521f20:
      do {
        while( true ) {
          uVar11 = auVar16._8_8_;
          lVar10 = auVar16._0_8_;
          *(undefined8 *)(puVar3 + -0x30) = param_5;
          *(undefined8 *)(puVar3 + -0x28) = param_4;
          *(long *)(puVar3 + -0x20) = auVar15._8_8_;
          *(long *)(puVar3 + -0x18) = auVar15._0_8_;
          *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
          *(undefined **)(puVar3 + -8) = unaff_x30;
          param_5 = 0x3eb4000;
          uVar13 = uVar14;
          if ((bRam0000000003eb4e3b & 1) == 0) {
            func_0x00f78a20(0x3d3d940);
            bRam0000000003eb4e3b = 1;
          }
          uVar7 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar11,0);
          if (((uVar7 & 1) != 0) || (uVar7 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar10,uVar11), (uVar7 & 1) != 0)) {
            return 0;
          }
          uVar1 = 3;
          if ((int)uVar14 == 0) {
            uVar1 = 0;
          }
          if (((*(long *)(lVar10 + 0x20) != 0) &&
              (lVar8 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar10 + 0x20),0), lVar8 != 0)) &&
             (*(long *)(lVar8 + 0x38) != 0)) {
            uVar13 = uVar1;
            /*System.Collections.Generic.List<SaveData.UnlockedData>$$Add*/ func_0x02591ed4(*(long *)(lVar8 + 0x38),uVar11,uVar1,uRam0000000003d3d940);
            if (*(long *)(lVar10 + 0x20) != 0) {
              /*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(*(long *)(lVar10 + 0x20),0);
              return 1;
            }
          }
          auVar15 = func_0x00f78af4();
          lVar12 = auVar15._8_8_;
          lVar8 = auVar15._0_8_;
          *(undefined8 *)(puVar3 + -0x60) = 0x3eb4000;
          *(undefined8 *)(puVar3 + -0x58) = uVar1;
          *(undefined8 *)(puVar3 + -0x50) = uVar11;
          *(long *)(puVar3 + -0x48) = lVar10;
          *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
          *(undefined **)(puVar3 + -0x38) =
               &Atlas_Stats_UnlockManager__UpdateCampaignUnlocksAndUpdateSave;
          unaff_x29 = puVar3 + -0x40;
          param_4 = 0x3eb4000;
          uVar14 = uVar13;
          if ((bRam0000000003eb4e38 & 1) == 0) {
            func_0x00f78a20(0x3d21270);
            func_0x00f78a20(0x3d57398);
            func_0x00f78a20(0x3d257d8);
            func_0x00f78a20(0x3d69c18);
            bRam0000000003eb4e38 = 1;
            uVar14 = uVar13;
          }
          *(undefined8 *)(puVar3 + -0x68) = 0;
          iVar4 = /*Atlas.Stats.UnlockManager$$HaveAllCharactersBeenUnlockedForCampaign*/ func_0x01522278(lVar8,lVar12);
          if (iVar4 == 0) break;
          if (lVar12 == 0) {
code_r0x01522270:
            unaff_x30 = &Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock;
            auVar16 = func_0x00f78af4();
            puVar3 = puVar3 + -0x70;
          }
          else {
            *(undefined8 *)(puVar3 + -0x68) = *(undefined8 *)(lVar12 + 0x58);
            iVar4 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar3 + -0x68,0);
            if (iVar4 == 0) break;
            auVar16._8_8_ = *(undefined8 *)(lVar12 + 0x58);
            auVar16._0_8_ = lVar8;
            uVar14 = 1;
            unaff_x30 = &UNK_0152208c;
            puVar3 = puVar3 + -0x70;
          }
        }
        iVar4 = /*Atlas.Stats.UnlockManager$$HasCompletedAllChallengesForCampaign*/ func_0x01520e74(lVar8,lVar12);
        if (iVar4 == 0) {
code_r0x01522148:
          if (*(long *)(lVar8 + 0x20) == 0) goto code_r0x01522270;
          uVar14 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar8 + 0x20),0);
          auVar15._8_8_ = uVar14;
          auVar15._0_8_ = lVar8;
          if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = /*Atlas.Stats.UnlockManager$$HasCompletedRequiredChallengesForLeague*/ func_0x01520ec4(uVar14);
          if ((int)uVar7 == 0) {
            return uVar7;
          }
          param_4 = 0x3d21270;
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_5 = 0x3d69c18;
          uVar14 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
          auVar16._8_8_ = uVar14;
          auVar16._0_8_ = lVar8;
          uVar14 = 1;
          unaff_x30 = &UNK_015221cc;
          puVar3 = puVar3 + -0x70;
        }
        else {
          if (lVar12 == 0) goto code_r0x01522270;
          *(undefined8 *)(puVar3 + -0x68) = *(undefined8 *)(lVar12 + 0x60);
          iVar4 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar3 + -0x68,0);
          if (iVar4 == 0) goto code_r0x01522148;
          auVar16._8_8_ = *(undefined8 *)(lVar12 + 0x60);
          auVar16._0_8_ = lVar8;
          uVar14 = 1;
          unaff_x30 = &UNK_01522108;
          puVar3 = puVar3 + -0x70;
        }
      } while( true );
    }
    uVar7 = func_0x00f78af4();
  }
  return uVar7;
}



// ============================================================
// RVA: 0x1584974 | Atlas.FrontEnd.FTUEManager.IsStageUnlockedAndComplete
// ============================================================

/* WARNING: Possible PIC construction at 0x01584bd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01584bdc) */
/* WARNING: Removing unreachable block (ram,0x01584be8) */

ulong Atlas_FrontEnd_FTUEManager__IsStageUnlockedAndComplete
                (long param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined1 auVar15 [16];
  
  puVar13 = &stack0xfffffffffffffff0;
  uVar11 = 0x3eb5000;
  if ((bRam0000000003eb50d3 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb50d3 = 1;
  }
  if (param_2 != 0) {
    uVar11 = *(undefined8 *)(param_2 + 0x18);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
    uVar3 = /*Atlas.FrontEnd.FTUEManager$$IsStageUnlocked*/ func_0x01585534(param_1,uVar11);
    uVar4 = /*Atlas.FrontEnd.FTUEManager$$IsStageComplete*/ func_0x015855fc(param_1,uVar11);
    return (ulong)((uint)(*(char *)(param_1 + 0x48) != '\0') | uVar3 & uVar4);
  }
  puVar14 = &Atlas_FrontEnd_FTUEManager__MarkStageAsCompleted;
  auVar15 = func_0x00f78af4();
  uVar5 = auVar15._0_8_;
  puVar2 = &stack0xffffffffffffffd0;
  lVar7 = auVar15._8_8_;
  uVar6 = 0;
  do {
    uVar9 = param_3;
    lVar8 = lVar7;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = uVar11;
    *(ulong *)(puVar2 + -0x20) = uVar6;
    *(long *)(puVar2 + -0x18) = param_1;
    *(undefined1 **)(puVar2 + -0x10) = puVar13;
    *(undefined **)(puVar2 + -8) = puVar14;
    puVar13 = puVar2 + -0x10;
    unaff_x24 = 0x3eb5000;
    uVar6 = uVar5;
    if ((bRam0000000003eb50cb & 1) == 0) {
      func_0x00f78a20(0x3d2dba8);
      func_0x00f78a20(0x3d2dc08);
      func_0x00f78a20(0x3d6cb20);
      uVar6 = func_0x00f78a20(0x3d77cb0);
      bRam0000000003eb50cb = 1;
    }
    if ((int)uVar9 == 0) {
      return uVar6;
    }
    if ((lVar8 == 0) || (*(long *)(uVar5 + 0x18) == 0)) goto code_r0x01584c40;
    /*Atlas.Stats.UnlockManager$$AddUnlockedIfNotExist*/ func_0x01521f20(*(long *)(uVar5 + 0x18),*(undefined8 *)(lVar8 + 0x18),0,0);
    if (*(long *)(uVar5 + 0x18) == 0) goto code_r0x01584c40;
    /*Atlas.Stats.UnlockManager$$MarkUnlockSeen*/ func_0x015226dc(*(long *)(uVar5 + 0x18),*(undefined8 *)(lVar8 + 0x18),0);
    uVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar8 + 0x18),/*STR('FTUEStage_13_FinalEvent')*/ uRam0000000003d6cb20,0);
    if ((int)uVar6 != 0) {
      if (*(long *)(uVar5 + 0x28) == 0) goto code_r0x01584c40;
      uVar6 = /*Atlas.Stats.AchievementManager$$UnlockAchievement*/ func_0x014474c4(*(long *)(uVar5 + 0x28),/*STR('arcadeFTUX')*/ uRam0000000003d77cb0,0);
    }
    if (*(char *)(lVar8 + 0x68) != '\0') {
      if (*(long *)(uVar5 + 0x30) == 0) goto code_r0x01584c40;
      uVar6 = /*Atlas.Stats.DailyChallengeManager$$PollForChallengeRefresh*/ func_0x01574644(*(long *)(uVar5 + 0x30),0);
      if (*(long *)(uVar5 + 0x30) == 0) goto code_r0x01584c40;
      *(undefined1 *)(*(long *)(uVar5 + 0x30) + 0xb8) = 1;
    }
    if ((param_5 & 1) == 0) {
      if ((*(long *)(uVar5 + 0x38) == 0) ||
         (lVar7 = *(long *)(*(long *)(uVar5 + 0x38) + 0x48), lVar7 == 0)) goto code_r0x01584c40;
      uVar6 = /*Atlas.Analytics.AtlasAnalyticsEvents$$FTUEStageCompletedEvent*/ func_0x014558b8(lVar7,*(undefined8 *)(lVar8 + 0x18),0);
    }
    if ((param_4 & 1) != 0) {
code_r0x01584bec:
      lVar7 = *(long *)(lVar8 + 0x50);
      if (lVar7 == 0) {
        return uVar6;
      }
      uVar12 = 0;
      param_5 = 0x28;
      break;
    }
    lVar7 = *(long *)(lVar8 + 0x40);
    if (lVar7 != 0) {
      uVar12 = 0;
      uVar10 = 0x28;
      while ((long)uVar12 < (long)(int)*(uint *)(lVar7 + 0x18)) {
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto code_r0x01584c58;
        param_5 = uVar10 + 0x10;
        uVar12 = uVar12 + 1;
        uVar6 = Atlas_FrontEnd_FTUEManager__MarkStageAsUnlocked
                          (uVar5,*(undefined8 *)(lVar7 + uVar10),1);
        lVar7 = *(long *)(lVar8 + 0x40);
        uVar10 = param_5;
        if (lVar7 == 0) goto code_r0x01584c40;
      }
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    if (lVar7 == 0) goto code_r0x01584bec;
    uVar12 = 0;
    if (*(int *)(lVar7 + 0x18) < 1) goto code_r0x01584bec;
    if (*(int *)(lVar7 + 0x18) == 0) goto code_r0x01584c58;
    unaff_x22 = 0x38;
    uVar11 = 1;
    param_4 = 0;
    param_5 = 1;
    puVar14 = &UNK_01584bdc;
    puVar2 = puVar2 + -0x40;
    lVar7 = *(long *)(lVar7 + 0x28);
    param_3 = 1;
    param_1 = lVar8;
    uVar6 = uVar5;
    unaff_x23 = uVar9;
  } while( true );
  while( true ) {
    param_5 = param_5 + 0x10;
    uVar12 = (ulong)(uVar3 + 1);
    uVar6 = /*Atlas.Stats.UnlockManager$$AddUnlockedIfNotExist*/ func_0x01521f20(*(long *)(uVar5 + 0x18),*(undefined8 *)(*plVar1 + 0x18),1,0);
    lVar7 = *(long *)(lVar8 + 0x50);
    if (lVar7 == 0) break;
    uVar3 = (uint)uVar12;
    if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar3) {
      return uVar6;
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar3) {
code_r0x01584c58:
      uVar11 = func_0x00f78b24();
      auVar15 = func_0x00f78ac0(uVar11,0);
      *(ulong *)(puVar2 + -0x70) = param_5;
      *(ulong *)(puVar2 + -0x68) = uVar12;
      *(ulong *)(puVar2 + -0x60) = uVar5;
      *(long *)(puVar2 + -0x58) = lVar8;
      *(undefined1 **)(puVar2 + -0x50) = puVar13;
      *(undefined **)(puVar2 + -0x48) = &Atlas_FrontEnd_FTUEManager__IsStageUnlockedAndComplete;
      uVar3 = /*Atlas.FrontEnd.FTUEManager$$IsStageUnlocked*/ func_0x01585534();
      uVar4 = /*Atlas.FrontEnd.FTUEManager$$IsStageComplete*/ func_0x015855fc(auVar15._0_8_,auVar15._8_8_);
      return (ulong)((uint)(*(char *)(auVar15._0_8_ + 0x48) != '\0') | uVar3 & uVar4);
    }
    plVar1 = (long *)(lVar7 + param_5);
    if ((*plVar1 == 0) || (*(long *)(uVar5 + 0x18) == 0)) break;
  }
code_r0x01584c40:
  uVar6 = func_0x00f78af4();
  return uVar6;
}



// ============================================================
// RVA: 0x1584a28 | Atlas.FrontEnd.FTUEManager.MarkStageAsCompleted
// ============================================================

ulong Atlas_FrontEnd_FTUEManager__MarkStageAsCompleted
                (ulong param_1,long param_2,int param_3,ulong param_4,ulong param_5)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  uVar4 = param_1;
  if ((bRam0000000003eb50cb & 1) == 0) {
    func_0x00f78a20(0x3d2dba8);
    func_0x00f78a20(0x3d2dc08);
    func_0x00f78a20(0x3d6cb20);
    uVar4 = func_0x00f78a20(0x3d77cb0);
    bRam0000000003eb50cb = 1;
  }
  if (param_3 == 0) {
    return uVar4;
  }
  if ((param_2 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    /*Atlas.Stats.UnlockManager$$AddUnlockedIfNotExist*/ func_0x01521f20(*(long *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18),0,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      /*Atlas.Stats.UnlockManager$$MarkUnlockSeen*/ func_0x015226dc(*(long *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18),0);
      uVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(param_2 + 0x18),/*STR('FTUEStage_13_FinalEvent')*/ uRam0000000003d6cb20,0);
      if ((int)uVar4 != 0) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_01584c40;
        uVar4 = /*Atlas.Stats.AchievementManager$$UnlockAchievement*/ func_0x014474c4(*(long *)(param_1 + 0x28),/*STR('arcadeFTUX')*/ uRam0000000003d77cb0,0);
      }
      if (*(char *)(param_2 + 0x68) != '\0') {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_01584c40;
        uVar4 = /*Atlas.Stats.DailyChallengeManager$$PollForChallengeRefresh*/ func_0x01574644(*(long *)(param_1 + 0x30),0);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_01584c40;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + 0xb8) = 1;
      }
      if ((param_5 & 1) == 0) {
        if ((*(long *)(param_1 + 0x38) == 0) ||
           (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x48), lVar5 == 0)) goto LAB_01584c40;
        uVar4 = /*Atlas.Analytics.AtlasAnalyticsEvents$$FTUEStageCompletedEvent*/ func_0x014558b8(lVar5,*(undefined8 *)(param_2 + 0x18),0);
      }
      if ((param_4 & 1) == 0) {
        lVar5 = *(long *)(param_2 + 0x40);
        if (lVar5 != 0) {
          uVar7 = 0;
          lVar8 = 0x28;
          do {
            if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar7) goto LAB_01584b98;
            if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_01584c58;
            uVar7 = uVar7 + 1;
            uVar4 = Atlas_FrontEnd_FTUEManager__MarkStageAsUnlocked
                              (param_1,*(undefined8 *)(lVar5 + lVar8),1);
            lVar5 = *(long *)(param_2 + 0x40);
            lVar8 = lVar8 + 0x10;
          } while (lVar5 != 0);
          goto LAB_01584c40;
        }
LAB_01584b98:
        lVar5 = *(long *)(param_2 + 0x48);
        if (lVar5 != 0) {
          uVar7 = 0;
          lVar8 = 0x28;
          do {
            if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar7) goto LAB_01584bec;
            if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_01584c58;
            uVar7 = uVar7 + 1;
            uVar4 = Atlas_FrontEnd_FTUEManager__MarkStageAsCompleted
                              (param_1,*(undefined8 *)(lVar5 + lVar8),1,0,1);
            lVar5 = *(long *)(param_2 + 0x48);
            lVar8 = lVar8 + 0x10;
          } while (lVar5 != 0);
          goto LAB_01584c40;
        }
      }
LAB_01584bec:
      lVar5 = *(long *)(param_2 + 0x50);
      if (lVar5 == 0) {
        return uVar4;
      }
      uVar2 = 0;
      lVar8 = 0x28;
      do {
        if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar2) {
          return uVar4;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar2) {
LAB_01584c58:
          uVar6 = func_0x00f78b24();
          auVar9 = func_0x00f78ac0(uVar6,0);
          uVar2 = /*Atlas.FrontEnd.FTUEManager$$IsStageUnlocked*/ func_0x01585534();
          uVar3 = /*Atlas.FrontEnd.FTUEManager$$IsStageComplete*/ func_0x015855fc(auVar9._0_8_,auVar9._8_8_);
          return (ulong)((uint)(*(char *)(auVar9._0_8_ + 0x48) != '\0') | uVar2 & uVar3);
        }
        plVar1 = (long *)(lVar5 + lVar8);
        if ((*plVar1 == 0) || (*(long *)(param_1 + 0x18) == 0)) break;
        lVar8 = lVar8 + 0x10;
        uVar2 = uVar2 + 1;
        uVar4 = /*Atlas.Stats.UnlockManager$$AddUnlockedIfNotExist*/ func_0x01521f20(*(long *)(param_1 + 0x18),*(undefined8 *)(*plVar1 + 0x18),1,0);
        lVar5 = *(long *)(param_2 + 0x50);
      } while (lVar5 != 0);
    }
  }
LAB_01584c40:
  uVar4 = func_0x00f78af4();
  return uVar4;
}



// ============================================================
// RVA: 0x1584c64 | Atlas.FrontEnd.FTUEManager.IsStageUnlockedAndComplete
// ============================================================

uint Atlas_FrontEnd_FTUEManager__IsStageUnlockedAndComplete(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = /*Atlas.FrontEnd.FTUEManager$$IsStageUnlocked*/ func_0x01585534();
  uVar2 = /*Atlas.FrontEnd.FTUEManager$$IsStageComplete*/ func_0x015855fc(param_1,param_2);
  return (uint)(*(char *)(param_1 + 0x48) != '\0') | uVar1 & uVar2;
}



// ============================================================
// RVA: 0x1584cb4 | Atlas.FrontEnd.FTUEManager.DeInit
// ============================================================

void Atlas_FrontEnd_FTUEManager__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// ============================================================
// RVA: 0x1584cc0 | Atlas.FrontEnd.FTUEManager.GetCurrentStage
// ============================================================

ulong Atlas_FrontEnd_FTUEManager__GetCurrentStage(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  int extraout_w1;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  if ((bRam0000000003eb50c9 & 1) == 0) {
    func_0x00f78a20(0x3d32470);
    func_0x00f78a20(0x3d32478);
    func_0x00f78a20(0x3d32480);
    func_0x00f78a20(0x3d3a5d8);
    bRam0000000003eb50c9 = 1;
  }
  uVar5 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (*(char *)(param_1 + 0x48) == '\0') {
    if (*(long *)(param_1 + 0x40) == 0) {
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar4 = (long *)___cxa_begin_catch();
        param_1 = *plVar4;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d32470);
        if (param_1 == 0) {
          return 0;
        }
      }
      else {
        __Unwind_Resume();
      }
      auVar6 = func_0x00f78ac0(param_1,0);
      uVar1 = /*Atlas.FrontEnd.FTUEManager$$IsStageUnlocked*/ func_0x015854ac();
      uVar2 = /*Atlas.FrontEnd.FTUEManager$$IsStageComplete*/ func_0x01585574(auVar6._0_8_,auVar6._8_8_);
      return (ulong)(uVar1 & (uVar2 ^ 1));
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,*(long *)(param_1 + 0x40),uRam0000000003d3a5d8);
    do {
      uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d32478);
      uVar5 = uStack_38;
      if ((uVar3 & 1) == 0) {
        uVar5 = 0;
        break;
      }
      uVar1 = /*Atlas.FrontEnd.FTUEManager$$IsStageUnlocked*/ func_0x015854ac(param_1,uStack_38);
      uVar2 = /*Atlas.FrontEnd.FTUEManager$$IsStageComplete*/ func_0x01585574(param_1,uVar5);
    } while ((uVar1 & (uVar2 ^ 1) & 1) == 0);
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d32470);
  }
  return uVar5;
}



// ============================================================
// RVA: 0x1584e10 | Atlas.FrontEnd.FTUEManager.IsStageUnlockedButNotComplete
// ============================================================

uint Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = /*Atlas.FrontEnd.FTUEManager$$IsStageUnlocked*/ func_0x015854ac();
  uVar2 = /*Atlas.FrontEnd.FTUEManager$$IsStageComplete*/ func_0x01585574(param_1,param_2);
  return uVar1 & (uVar2 ^ 1);
}



// ============================================================
// RVA: 0x1584e54 | Atlas.FrontEnd.FTUEManager.MarkStageAsUnlocked
// ============================================================

/* WARNING: Possible PIC construction at 0x01522088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01522104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015221c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015849ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01584ab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01584c7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01584c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01585010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0158519c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015856a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015851a0) */
/* WARNING: Removing unreachable block (ram,0x015851b4) */
/* WARNING: Removing unreachable block (ram,0x015851b8) */
/* WARNING: Removing unreachable block (ram,0x015851bc) */
/* WARNING: Removing unreachable block (ram,0x015851c4) */
/* WARNING: Removing unreachable block (ram,0x015851f0) */
/* WARNING: Removing unreachable block (ram,0x01585204) */
/* WARNING: Removing unreachable block (ram,0x0158536c) */
/* WARNING: Removing unreachable block (ram,0x0158520c) */
/* WARNING: Removing unreachable block (ram,0x01585228) */
/* WARNING: Removing unreachable block (ram,0x01585230) */
/* WARNING: Removing unreachable block (ram,0x01585234) */
/* WARNING: Removing unreachable block (ram,0x01585248) */
/* WARNING: Removing unreachable block (ram,0x01585384) */
/* WARNING: Removing unreachable block (ram,0x0158525c) */
/* WARNING: Removing unreachable block (ram,0x01585278) */
/* WARNING: Removing unreachable block (ram,0x015852ac) */
/* WARNING: Removing unreachable block (ram,0x015852b4) */
/* WARNING: Removing unreachable block (ram,0x0158538c) */
/* WARNING: Removing unreachable block (ram,0x015853ec) */
/* WARNING: Removing unreachable block (ram,0x01585424) */
/* WARNING: Removing unreachable block (ram,0x015853f4) */
/* WARNING: Removing unreachable block (ram,0x01585428) */
/* WARNING: Removing unreachable block (ram,0x01585458) */
/* WARNING: Removing unreachable block (ram,0x0158546c) */
/* WARNING: Removing unreachable block (ram,0x01585474) */
/* WARNING: Removing unreachable block (ram,0x015854a8) */
/* WARNING: Removing unreachable block (ram,0x0158547c) */
/* WARNING: Removing unreachable block (ram,0x01585418) */
/* WARNING: Removing unreachable block (ram,0x015852bc) */
/* WARNING: Removing unreachable block (ram,0x015852d8) */
/* WARNING: Removing unreachable block (ram,0x015852e8) */
/* WARNING: Removing unreachable block (ram,0x01585374) */
/* WARNING: Removing unreachable block (ram,0x015852f0) */
/* WARNING: Removing unreachable block (ram,0x0158537c) */
/* WARNING: Removing unreachable block (ram,0x01585388) */
/* WARNING: Removing unreachable block (ram,0x01585308) */
/* WARNING: Removing unreachable block (ram,0x01585318) */
/* WARNING: Removing unreachable block (ram,0x0158531c) */
/* WARNING: Removing unreachable block (ram,0x01585350) */
/* WARNING: Removing unreachable block (ram,0x01585014) */
/* WARNING: Removing unreachable block (ram,0x01584c38) */
/* WARNING: Removing unreachable block (ram,0x01584c80) */
/* WARNING: Removing unreachable block (ram,0x01584ab4) */
/* WARNING: Removing unreachable block (ram,0x01584abc) */
/* WARNING: Removing unreachable block (ram,0x01584ae4) */
/* WARNING: Removing unreachable block (ram,0x01584aec) */
/* WARNING: Removing unreachable block (ram,0x01584b00) */
/* WARNING: Removing unreachable block (ram,0x01584b08) */
/* WARNING: Removing unreachable block (ram,0x01584b10) */
/* WARNING: Removing unreachable block (ram,0x01584b20) */
/* WARNING: Removing unreachable block (ram,0x01584b28) */
/* WARNING: Removing unreachable block (ram,0x01584b2c) */
/* WARNING: Removing unreachable block (ram,0x01584b34) */
/* WARNING: Removing unreachable block (ram,0x01584b3c) */
/* WARNING: Removing unreachable block (ram,0x01584b48) */
/* WARNING: Removing unreachable block (ram,0x01584b4c) */
/* WARNING: Removing unreachable block (ram,0x01584b54) */
/* WARNING: Removing unreachable block (ram,0x01584b5c) */
/* WARNING: Removing unreachable block (ram,0x01584b98) */
/* WARNING: Removing unreachable block (ram,0x01584ba0) */
/* WARNING: Removing unreachable block (ram,0x01584ba8) */
/* WARNING: Removing unreachable block (ram,0x01584bec) */
/* WARNING: Removing unreachable block (ram,0x01584bf4) */
/* WARNING: Removing unreachable block (ram,0x01584bfc) */
/* WARNING: Removing unreachable block (ram,0x01584c08) */
/* WARNING: Removing unreachable block (ram,0x01584c10) */
/* WARNING: Removing unreachable block (ram,0x01584c18) */
/* WARNING: Removing unreachable block (ram,0x01584c20) */
/* WARNING: Removing unreachable block (ram,0x01584bb4) */
/* WARNING: Removing unreachable block (ram,0x01584bbc) */
/* WARNING: Removing unreachable block (ram,0x01584be8) */
/* WARNING: Removing unreachable block (ram,0x01584b68) */
/* WARNING: Removing unreachable block (ram,0x01584c58) */
/* WARNING: Removing unreachable block (ram,0x01584b70) */
/* WARNING: Removing unreachable block (ram,0x01584b94) */
/* WARNING: Removing unreachable block (ram,0x015849f0) */
/* WARNING: Removing unreachable block (ram,0x015221cc) */
/* WARNING: Removing unreachable block (ram,0x015221d0) */
/* WARNING: Removing unreachable block (ram,0x015221d8) */
/* WARNING: Removing unreachable block (ram,0x015221e8) */
/* WARNING: Removing unreachable block (ram,0x015221f0) */
/* WARNING: Removing unreachable block (ram,0x015221f4) */
/* WARNING: Removing unreachable block (ram,0x01522204) */
/* WARNING: Removing unreachable block (ram,0x01522220) */
/* WARNING: Removing unreachable block (ram,0x01522230) */
/* WARNING: Removing unreachable block (ram,0x01522238) */
/* WARNING: Removing unreachable block (ram,0x0152223c) */
/* WARNING: Removing unreachable block (ram,0x0152224c) */
/* WARNING: Removing unreachable block (ram,0x01522108) */
/* WARNING: Removing unreachable block (ram,0x0152210c) */
/* WARNING: Removing unreachable block (ram,0x01522114) */
/* WARNING: Removing unreachable block (ram,0x0152211c) */
/* WARNING: Removing unreachable block (ram,0x01522134) */
/* WARNING: Removing unreachable block (ram,0x0152213c) */
/* WARNING: Removing unreachable block (ram,0x0152208c) */
/* WARNING: Removing unreachable block (ram,0x01522090) */
/* WARNING: Removing unreachable block (ram,0x01522098) */
/* WARNING: Removing unreachable block (ram,0x015220a0) */
/* WARNING: Removing unreachable block (ram,0x015220b8) */
/* WARNING: Removing unreachable block (ram,0x015220c0) */
/* WARNING: Removing unreachable block (ram,0x015856ac) */

ulong Atlas_FrontEnd_FTUEManager__MarkStageAsUnlocked
                (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  uint uVar10;
  int extraout_w1;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 ***pppuVar21;
  undefined1 *puVar22;
  undefined *puVar23;
  code *pcVar24;
  undefined *unaff_x30;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_180 [48];
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  
  auVar25._8_8_ = unaff_x19;
  auVar25._0_8_ = unaff_x20;
  puVar22 = &stack0xfffffffffffffff0;
  lVar13 = param_3;
  if ((bRam0000000003eb50ca & 1) == 0) {
    func_0x00f78a20(0x3d57280);
    bRam0000000003eb50ca = 1;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar14 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar14 == 0)) {
    auVar27 = func_0x00f78af4();
    unaff_x22 = auVar27._8_8_;
    lVar14 = auVar27._0_8_;
    pcVar24 = (code *)&Atlas_FrontEnd_FTUEManager__MarkStageAsCompleted;
    if ((bRam0000000003eb50cc & 1) == 0) {
      func_0x00f78a20(0x3d57280);
      bRam0000000003eb50cc = 1;
    }
    if ((*(long *)(lVar14 + 0x10) == 0) ||
       (lVar15 = *(long *)(*(long *)(lVar14 + 0x10) + 0x10), lVar15 == 0)) {
      lVar15 = func_0x00f78af4();
      puStack_78 = &Atlas_FrontEnd_FTUEManager__EvaluateStages;
      lStack_90 = lVar13;
      uStack_88 = param_4;
      puStack_80 = &stack0xffffffffffffffc0;
      if ((bRam0000000003eb50cd & 1) == 0) {
        uStack_a0 = unaff_x22;
        lStack_98 = lVar14;
        func_0x00f78a20(0x3d32470);
        func_0x00f78a20(0x3d32478);
        func_0x00f78a20(0x3d32480);
        func_0x00f78a20(0x3d3a5d8);
        auVar27._8_8_ = uStack_a0;
        auVar27._0_8_ = lStack_98;
        bRam0000000003eb50cd = 1;
      }
      uStack_a0 = auVar27._8_8_;
      lStack_98 = auVar27._0_8_;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      if (*(long *)(lVar15 + 0x40) == 0) {
        func_0x00f78af4();
        if (extraout_w1 == 1) {
          plVar16 = (long *)___cxa_begin_catch();
          lVar13 = *plVar16;
          ___cxa_end_catch();
          uVar11 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_b8,uRam0000000003eb5000);
          if (lVar13 == 0) {
            return uVar11;
          }
          func_0x00f78ac0(lVar13,0);
        }
        puVar23 = &Atlas_FrontEnd_FTUEManager__EvaluateStage;
        auVar28 = __Unwind_Resume();
      }
      else {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_b8,*(long *)(lVar15 + 0x40),uRam0000000003d3a5d8);
        uVar11 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_b8,uRam0000000003d32478);
        auVar28._8_8_ = uStack_a8;
        auVar28._0_8_ = lVar15;
        if ((uVar11 & 1) == 0) {
          uVar11 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_b8,uRam0000000003d32470);
          return uVar11;
        }
        puVar23 = &UNK_01585014;
      }
      puVar7 = auStack_180;
      pppuVar21 = &ppuStack_d0;
      ppuStack_d0 = &puStack_80;
      puStack_c8 = puVar23;
      if ((bRam0000000003eb50ce & 1) == 0) {
        func_0x00f78a20(0x3d2dbf0);
        func_0x00f78a20(0x3d2dbf8);
        func_0x00f78a20(0x3d337c8);
        func_0x00f78a20(0x3d33438);
        func_0x00f78a20(0x3d337d0);
        func_0x00f78a20(0x3d33440);
        func_0x00f78a20(0x3d337d8);
        func_0x00f78a20(0x3d33448);
        func_0x00f78a20(0x3d3d1b0);
        func_0x00f78a20(0x3d3dc70);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb50ce = 1;
      }
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_150 = 0;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(auVar28._8_8_,0,0);
      if ((uVar11 & 1) == 0) {
        puVar23 = &UNK_015851a0;
        auVar4 = auVar28;
        goto code_r0x015854ac;
      }
      return uVar11;
    }
    uVar19 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar15,unaff_x22,uRam0000000003d57280);
    auVar25._8_8_ = uVar19;
    auVar25._0_8_ = lVar14;
    param_5 = 0;
    unaff_x22 = 0x3eb5000;
    puVar6 = &stack0xffffffffffffffd0;
  }
  else {
    lVar14 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar14,param_2,uRam0000000003d57280);
    lVar13 = *(long *)(param_1 + 0x18);
    if ((int)param_3 == 0) {
      if ((lVar14 != 0) && (lVar13 != 0)) {
        uVar19 = *(undefined8 *)(lVar14 + 0x18);
        if ((bRam0000000003eb4e3c & 1) == 0) {
          func_0x00f78a20(0x3d33738,uVar19,0);
          func_0x00f78a20(0x3d33740);
          func_0x00f78a20(0x3d33748);
          func_0x00f78a20(0x3d3d950);
          func_0x00f78a20(0x3d3d958);
          bRam0000000003eb4e3c = 1;
        }
        puStack_78 = (undefined *)((ulong)puStack_78 & 0xffffffff00000000);
        if (((*(long *)(lVar13 + 0x20) == 0) ||
            (lVar14 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar13 + 0x20),0), lVar14 == 0)) ||
           (*(long *)(lVar14 + 0x38) == 0)) {
          func_0x00f78af4();
        }
        else {
          /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_a0,*(long *)(lVar14 + 0x38),uRam0000000003d3d950);
          do {
            uVar11 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&stack0xffffffffffffff90,uRam0000000003d33740);
            if ((uVar11 & 1) == 0) {
              uVar20 = 0x7a;
              goto code_r0x01522604;
            }
            if (lStack_90 == 0) {
              func_0x00f78af4();
              goto code_r0x01522678;
            }
            uVar12 = /*System.String$$Equals*/ func_0x029caa48(lStack_90,uVar19,4,0);
          } while ((uVar12 & 1) == 0);
          if (*(long *)(lVar13 + 0x20) != 0) {
            lVar14 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar13 + 0x20),0);
            if (lVar14 == 0) {
              func_0x00f78af4();
            }
            else if (*(long *)(lVar14 + 0x38) == 0) {
              func_0x00f78af4();
            }
            else {
              /*System.Collections.Generic.List<SaveData.UnlockedData>$$Remove*/ func_0x025933c8(*(long *)(lVar14 + 0x38),lStack_90,uStack_88,uRam0000000003d3d958);
              if (*(long *)(lVar13 + 0x20) == 0) {
                func_0x00f78af4();
              }
              else {
                /*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(*(long *)(lVar13 + 0x20),0);
                if (*(long *)(lVar13 + 0x20) != 0) {
                  /*Atlas.Save.SaveManager$$StartSave*/ func_0x014eb4e0(*(long *)(lVar13 + 0x20),0);
                  uVar20 = 0x7c;
code_r0x01522604:
                  puStack_80 = (undefined1 *)CONCAT44(puStack_80._4_4_,uVar20);
                  /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&stack0xffffffffffffff90,uRam0000000003d33738);
                  if ((int)puStack_80 != 0x7c) {
                    uVar11 = 0;
                  }
                  return uVar11;
                }
                func_0x00f78af4();
              }
            }
            goto code_r0x01522678;
          }
        }
        func_0x00f78af4();
code_r0x01522678:
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x152267c);
        (*pcVar24)();
      }
    }
    else if ((lVar14 != 0) && (lVar13 != 0)) {
      auVar26._8_8_ = *(undefined8 *)(lVar14 + 0x18);
      auVar26._0_8_ = lVar13;
      uVar19 = 1;
      puVar5 = (undefined1 *)register0x00000008;
      param_4 = unaff_x21;
      param_5 = unaff_x22;
      goto code_r0x01521f20;
    }
    auVar25 = func_0x00f78af4();
    lVar14 = auVar25._0_8_;
    puVar6 = &stack0xffffffffffffffc0;
    puVar22 = &stack0xffffffffffffffe0;
    param_2 = 0x3eb5000;
    lVar13 = param_3;
    if ((bRam0000000003eb50d3 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      bRam0000000003eb50d3 = 1;
      lVar13 = param_3;
    }
    if (auVar25._8_8_ != 0) {
      uVar19 = *(undefined8 *)(auVar25._8_8_ + 0x18);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar19 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar19,0);
      auVar29._8_8_ = uVar19;
      auVar29._0_8_ = lVar14;
      puVar23 = (undefined *)0x15849f0;
      puVar5 = &stack0xffffffffffffffc0;
      while( true ) {
        lVar13 = auVar29._0_8_;
        *(undefined8 *)(puVar5 + -0x20) = uVar19;
        *(long *)(puVar5 + -0x18) = lVar14;
        *(undefined1 **)(puVar5 + -0x10) = puVar22;
        *(undefined **)(puVar5 + -8) = puVar23;
        if (*(long *)(lVar13 + 0x18) != 0) {
          uVar10 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar13 + 0x18),auVar29._8_8_,0);
          return (ulong)(*(char *)(lVar13 + 0x48) != '\0' | uVar10);
        }
        auVar25 = func_0x00f78af4(0,auVar29._8_8_);
        uVar18 = auVar25._0_8_;
        puVar8 = puVar5 + -0x50;
        *(undefined8 *)(puVar5 + -0x50) = unaff_x22;
        *(undefined8 *)(puVar5 + -0x48) = param_2;
        *(undefined8 *)(puVar5 + -0x40) = uVar19;
        *(long *)(puVar5 + -0x38) = lVar13;
        *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
        *(undefined **)(puVar5 + -0x28) = &Atlas_FrontEnd_FTUEManager__IsStageComplete;
        puVar22 = puVar5 + -0x30;
        uVar19 = 0x3eb5000;
        if ((bRam0000000003eb50d1 & 1) == 0) {
          func_0x00f78a20(0x3d21270);
          bRam0000000003eb50d1 = 1;
        }
        if (auVar25._8_8_ == 0) {
          puVar23 = &Atlas_FrontEnd_FTUEManager__IsStageComplete;
          auVar30 = func_0x00f78af4();
          uVar17 = 0;
        }
        else {
          uVar19 = *(undefined8 *)(auVar25._8_8_ + 0x18);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar19 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar19,0);
          auVar30._8_8_ = uVar19;
          auVar30._0_8_ = uVar18;
          puVar22 = *(undefined1 **)(puVar5 + -0x30);
          puVar23 = *(undefined **)(puVar5 + -0x28);
          uVar17 = *(undefined8 *)(puVar5 + -0x40);
          uVar18 = *(undefined8 *)(puVar5 + -0x38);
          puVar8 = puVar5 + -0x20;
          unaff_x22 = *(undefined8 *)(puVar5 + -0x50);
          uVar19 = *(undefined8 *)(puVar5 + -0x48);
        }
        lVar13 = auVar30._0_8_;
        *(undefined8 *)(puVar8 + -0x20) = uVar17;
        *(undefined8 *)(puVar8 + -0x18) = uVar18;
        *(undefined1 **)(puVar8 + -0x10) = puVar22;
        *(undefined **)(puVar8 + -8) = puVar23;
        if (*(long *)(lVar13 + 0x18) != 0) break;
        auVar25 = func_0x00f78af4(0,auVar30._8_8_);
        lVar14 = auVar25._0_8_;
        puVar7 = puVar8 + -0x50;
        *(undefined8 *)(puVar8 + -0x50) = unaff_x22;
        *(undefined8 *)(puVar8 + -0x48) = uVar19;
        *(undefined8 *)(puVar8 + -0x40) = uVar17;
        *(long *)(puVar8 + -0x38) = lVar13;
        *(undefined1 **)(puVar8 + -0x30) = puVar8 + -0x10;
        *(undefined **)(puVar8 + -0x28) = &Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
        ;
        pppuVar21 = (undefined1 ***)(puVar8 + -0x30);
        if ((bRam0000000003eb50d2 & 1) == 0) {
          func_0x00f78a20(0x3d57280);
          bRam0000000003eb50d2 = 1;
        }
        if ((*(long *)(lVar14 + 0x10) == 0) ||
           (lVar13 = *(long *)(*(long *)(lVar14 + 0x10) + 0x10), lVar13 == 0)) {
          lVar13 = func_0x00f78af4();
          return (ulong)*(byte *)(lVar13 + 0x48);
        }
        uVar19 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar13,auVar25._8_8_,uRam0000000003d57280);
        auVar4._8_8_ = lVar14;
        auVar4._0_8_ = uVar19;
        auVar28._8_8_ = uVar19;
        auVar28._0_8_ = lVar14;
        puVar23 = &UNK_015856ac;
code_r0x015854ac:
        lVar14 = auVar28._0_8_;
        puVar5 = puVar7 + -0x30;
        *(undefined8 *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = 0x3eb5000;
        *(undefined1 (*) [16])(puVar7 + -0x20) = auVar4;
        *(undefined1 ****)(puVar7 + -0x10) = pppuVar21;
        *(undefined **)(puVar7 + -8) = puVar23;
        puVar22 = puVar7 + -0x10;
        param_2 = 0x3eb5000;
        if ((bRam0000000003eb50d0 & 1) == 0) {
          func_0x00f78a20(0x3d21270);
          bRam0000000003eb50d0 = 1;
        }
        if (auVar28._8_8_ == 0) {
          puVar23 = &Atlas_FrontEnd_FTUEManager__IsStageUnlocked;
          auVar29 = func_0x00f78af4();
          uVar19 = 0;
        }
        else {
          uVar19 = *(undefined8 *)(auVar28._8_8_ + 0x18);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar19 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar19,0);
          auVar29._8_8_ = uVar19;
          auVar29._0_8_ = lVar14;
          puVar22 = *(undefined1 **)(puVar7 + -0x10);
          puVar23 = *(undefined **)(puVar7 + -8);
          uVar19 = *(undefined8 *)(puVar7 + -0x20);
          lVar14 = *(long *)(puVar7 + -0x18);
          unaff_x22 = *(undefined8 *)(puVar7 + -0x30);
          param_2 = *(undefined8 *)(puVar7 + -0x28);
          puVar5 = puVar7;
        }
      }
      uVar10 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(lVar13 + 0x18),auVar30._8_8_,0);
      return (ulong)((uint)(*(char *)(lVar13 + 0x48) != '\0') | uVar10 ^ 1);
    }
    pcVar24 = Atlas_FrontEnd_FTUEManager__MarkStageAsCompleted;
    auVar25 = func_0x00f78af4();
    param_1 = 0;
    param_3 = lVar14;
  }
  puVar5 = puVar6 + -0x40;
  *(undefined8 *)(puVar6 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar6 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar6 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar6 + -0x28) = param_2;
  *(long *)(puVar6 + -0x20) = param_1;
  *(long *)(puVar6 + -0x18) = param_3;
  *(undefined1 **)(puVar6 + -0x10) = puVar22;
  *(code **)(puVar6 + -8) = pcVar24;
  unaff_x29 = puVar6 + -0x10;
  uVar11 = auVar25._0_8_;
  if ((bRam0000000003eb50cb & 1) == 0) {
    func_0x00f78a20(0x3d2dba8);
    func_0x00f78a20(0x3d2dc08);
    func_0x00f78a20(0x3d6cb20);
    uVar11 = func_0x00f78a20(0x3d77cb0);
    bRam0000000003eb50cb = 1;
  }
  if ((int)lVar13 != 0) {
    if ((auVar25._8_8_ != 0) && (lVar13 = *(long *)(auVar25._0_8_ + 0x18), lVar13 != 0)) {
      auVar26._8_8_ = *(undefined8 *)(auVar25._8_8_ + 0x18);
      auVar26._0_8_ = lVar13;
      uVar19 = 0;
      unaff_x30 = (undefined *)0x1584ab4;
code_r0x01521f20:
      do {
        while( true ) {
          uVar17 = auVar26._8_8_;
          lVar13 = auVar26._0_8_;
          *(undefined8 *)(puVar5 + -0x30) = param_5;
          *(undefined8 *)(puVar5 + -0x28) = param_4;
          *(undefined1 (*) [16])(puVar5 + -0x20) = auVar25;
          *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
          *(undefined **)(puVar5 + -8) = unaff_x30;
          param_5 = 0x3eb4000;
          uVar18 = uVar19;
          if ((bRam0000000003eb4e3b & 1) == 0) {
            func_0x00f78a20(0x3d3d940);
            bRam0000000003eb4e3b = 1;
          }
          uVar11 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar17,0);
          if (((uVar11 & 1) != 0) || (uVar11 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar13,uVar17), (uVar11 & 1) != 0)) {
            return 0;
          }
          uVar1 = 3;
          if ((int)uVar19 == 0) {
            uVar1 = 0;
          }
          if (((*(long *)(lVar13 + 0x20) != 0) &&
              (lVar14 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar13 + 0x20),0), lVar14 != 0)) &&
             (*(long *)(lVar14 + 0x38) != 0)) {
            uVar18 = uVar1;
            /*System.Collections.Generic.List<SaveData.UnlockedData>$$Add*/ func_0x02591ed4(*(long *)(lVar14 + 0x38),uVar17,uVar1,uRam0000000003d3d940);
            if (*(long *)(lVar13 + 0x20) != 0) {
              /*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(*(long *)(lVar13 + 0x20),0);
              return 1;
            }
          }
          auVar25 = func_0x00f78af4();
          lVar15 = auVar25._8_8_;
          lVar14 = auVar25._0_8_;
          auVar25._8_8_ = lVar14;
          auVar25._0_8_ = lVar15;
          auVar3._8_8_ = lVar14;
          auVar3._0_8_ = lVar15;
          auVar2._8_8_ = lVar14;
          auVar2._0_8_ = lVar15;
          *(undefined8 *)(puVar5 + -0x60) = 0x3eb4000;
          *(undefined8 *)(puVar5 + -0x58) = uVar1;
          *(undefined8 *)(puVar5 + -0x50) = uVar17;
          *(long *)(puVar5 + -0x48) = lVar13;
          *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
          *(undefined **)(puVar5 + -0x38) =
               &Atlas_Stats_UnlockManager__UpdateCampaignUnlocksAndUpdateSave;
          unaff_x29 = puVar5 + -0x40;
          param_4 = 0x3eb4000;
          uVar19 = uVar18;
          if ((bRam0000000003eb4e38 & 1) == 0) {
            func_0x00f78a20(0x3d21270);
            func_0x00f78a20(0x3d57398);
            func_0x00f78a20(0x3d257d8);
            func_0x00f78a20(0x3d69c18);
            bRam0000000003eb4e38 = 1;
            uVar19 = uVar18;
          }
          *(undefined8 *)(puVar5 + -0x68) = 0;
          iVar9 = /*Atlas.Stats.UnlockManager$$HaveAllCharactersBeenUnlockedForCampaign*/ func_0x01522278(lVar14,lVar15);
          if (iVar9 == 0) break;
          if (lVar15 == 0) {
code_r0x01522270:
            unaff_x30 = &Atlas_Stats_UnlockManager__UpdateSaveDataForUnlock;
            auVar26 = func_0x00f78af4();
            puVar5 = puVar5 + -0x70;
          }
          else {
            *(undefined8 *)(puVar5 + -0x68) = *(undefined8 *)(lVar15 + 0x58);
            iVar9 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar5 + -0x68,0);
            if (iVar9 == 0) break;
            auVar26._8_8_ = *(undefined8 *)(lVar15 + 0x58);
            auVar26._0_8_ = lVar14;
            uVar19 = 1;
            unaff_x30 = &UNK_0152208c;
            puVar5 = puVar5 + -0x70;
            auVar25 = auVar2;
          }
        }
        iVar9 = /*Atlas.Stats.UnlockManager$$HasCompletedAllChallengesForCampaign*/ func_0x01520e74(lVar14,lVar15);
        if (iVar9 == 0) {
code_r0x01522148:
          if (*(long *)(lVar14 + 0x20) == 0) goto code_r0x01522270;
          uVar19 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar14 + 0x20),0);
          auVar25._0_8_ = uVar19;
          if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = /*Atlas.Stats.UnlockManager$$HasCompletedRequiredChallengesForLeague*/ func_0x01520ec4(uVar19);
          if ((int)uVar11 == 0) {
            return uVar11;
          }
          param_4 = 0x3d21270;
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_5 = 0x3d69c18;
          uVar19 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
          auVar26._8_8_ = uVar19;
          auVar26._0_8_ = lVar14;
          uVar19 = 1;
          unaff_x30 = &UNK_015221cc;
          puVar5 = puVar5 + -0x70;
        }
        else {
          if (lVar15 == 0) goto code_r0x01522270;
          *(undefined8 *)(puVar5 + -0x68) = *(undefined8 *)(lVar15 + 0x60);
          iVar9 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar5 + -0x68,0);
          if (iVar9 == 0) goto code_r0x01522148;
          auVar26._8_8_ = *(undefined8 *)(lVar15 + 0x60);
          auVar26._0_8_ = lVar14;
          uVar19 = 1;
          unaff_x30 = &UNK_01522108;
          puVar5 = puVar5 + -0x70;
          auVar25 = auVar3;
        }
      } while( true );
    }
    uVar11 = func_0x00f78af4();
  }
  return uVar11;
}



// ============================================================
// RVA: 0x1584ed4 | Atlas.FrontEnd.FTUEManager.MarkStageAsCompleted
// ============================================================

/* WARNING: Possible PIC construction at 0x01584c7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01585010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0158519c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015856a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015851a0) */
/* WARNING: Removing unreachable block (ram,0x015851b4) */
/* WARNING: Removing unreachable block (ram,0x015851b8) */
/* WARNING: Removing unreachable block (ram,0x015851bc) */
/* WARNING: Removing unreachable block (ram,0x015851c4) */
/* WARNING: Removing unreachable block (ram,0x015851f0) */
/* WARNING: Removing unreachable block (ram,0x01585204) */
/* WARNING: Removing unreachable block (ram,0x0158536c) */
/* WARNING: Removing unreachable block (ram,0x0158520c) */
/* WARNING: Removing unreachable block (ram,0x01585228) */
/* WARNING: Removing unreachable block (ram,0x01585230) */
/* WARNING: Removing unreachable block (ram,0x01585234) */
/* WARNING: Removing unreachable block (ram,0x01585248) */
/* WARNING: Removing unreachable block (ram,0x01585384) */
/* WARNING: Removing unreachable block (ram,0x0158525c) */
/* WARNING: Removing unreachable block (ram,0x01585278) */
/* WARNING: Removing unreachable block (ram,0x015852ac) */
/* WARNING: Removing unreachable block (ram,0x015852b4) */
/* WARNING: Removing unreachable block (ram,0x0158538c) */
/* WARNING: Removing unreachable block (ram,0x015853ec) */
/* WARNING: Removing unreachable block (ram,0x01585424) */
/* WARNING: Removing unreachable block (ram,0x015853f4) */
/* WARNING: Removing unreachable block (ram,0x01585428) */
/* WARNING: Removing unreachable block (ram,0x01585458) */
/* WARNING: Removing unreachable block (ram,0x0158546c) */
/* WARNING: Removing unreachable block (ram,0x01585474) */
/* WARNING: Removing unreachable block (ram,0x015854a8) */
/* WARNING: Removing unreachable block (ram,0x0158547c) */
/* WARNING: Removing unreachable block (ram,0x01585418) */
/* WARNING: Removing unreachable block (ram,0x015852bc) */
/* WARNING: Removing unreachable block (ram,0x015852d8) */
/* WARNING: Removing unreachable block (ram,0x015852e8) */
/* WARNING: Removing unreachable block (ram,0x01585374) */
/* WARNING: Removing unreachable block (ram,0x015852f0) */
/* WARNING: Removing unreachable block (ram,0x0158537c) */
/* WARNING: Removing unreachable block (ram,0x01585388) */
/* WARNING: Removing unreachable block (ram,0x01585308) */
/* WARNING: Removing unreachable block (ram,0x01585318) */
/* WARNING: Removing unreachable block (ram,0x0158531c) */
/* WARNING: Removing unreachable block (ram,0x01585350) */
/* WARNING: Removing unreachable block (ram,0x01585014) */
/* WARNING: Removing unreachable block (ram,0x01584c80) */
/* WARNING: Removing unreachable block (ram,0x015856ac) */

ulong Atlas_FrontEnd_FTUEManager__MarkStageAsCompleted
                (ulong param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar6;
  int extraout_w1;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined1 ***pppuVar16;
  undefined1 **ppuVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_150 [48];
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  if ((bRam0000000003eb50cc & 1) == 0) {
    func_0x00f78a20(0x3d57280);
    bRam0000000003eb50cc = 1;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar9 == 0)) {
    lVar9 = func_0x00f78af4();
    pcStack_48 = (code *)&Atlas_FrontEnd_FTUEManager__EvaluateStages;
    lStack_70 = param_2;
    uStack_68 = param_1;
    uStack_60 = param_3;
    uStack_58 = param_4;
    puStack_50 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb50cd & 1) == 0) {
      func_0x00f78a20(0x3d32470);
      func_0x00f78a20(0x3d32478);
      func_0x00f78a20(0x3d32480);
      func_0x00f78a20(0x3d3a5d8);
      bRam0000000003eb50cd = 1;
    }
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    if (*(long *)(lVar9 + 0x40) == 0) {
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar11 = (long *)___cxa_begin_catch();
        lVar9 = *plVar11;
        ___cxa_end_catch();
        uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_88,uRam0000000003eb5000);
        if (lVar9 == 0) {
          return uVar7;
        }
        func_0x00f78ac0(lVar9,0);
      }
      puVar19 = &Atlas_FrontEnd_FTUEManager__EvaluateStage;
      auVar21 = __Unwind_Resume();
    }
    else {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_88,*(long *)(lVar9 + 0x40),uRam0000000003d3a5d8);
      uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_88,uRam0000000003d32478);
      auVar21._8_8_ = uStack_78;
      auVar21._0_8_ = lVar9;
      if ((uVar7 & 1) == 0) {
        uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_88,uRam0000000003d32470);
        return uVar7;
      }
      puVar19 = &UNK_01585014;
    }
    puVar3 = auStack_150;
    pppuVar16 = &ppuStack_a0;
    ppuStack_a0 = &puStack_50;
    puStack_98 = puVar19;
    if ((bRam0000000003eb50ce & 1) == 0) {
      func_0x00f78a20(0x3d2dbf0);
      func_0x00f78a20(0x3d2dbf8);
      func_0x00f78a20(0x3d337c8);
      func_0x00f78a20(0x3d33438);
      func_0x00f78a20(0x3d337d0);
      func_0x00f78a20(0x3d33440);
      func_0x00f78a20(0x3d337d8);
      func_0x00f78a20(0x3d33448);
      func_0x00f78a20(0x3d3d1b0);
      func_0x00f78a20(0x3d3dc70);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb50ce = 1;
    }
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(auVar21._8_8_,0,0);
    if ((uVar7 & 1) == 0) {
      puVar19 = &UNK_015851a0;
      auVar2 = auVar21;
      goto code_r0x015854ac;
    }
    return uVar7;
  }
  uVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar9,param_2,uRam0000000003d57280);
  param_2 = 0;
  uVar7 = param_1;
  if ((bRam0000000003eb50cb & 1) == 0) {
    func_0x00f78a20(0x3d2dba8);
    func_0x00f78a20(0x3d2dc08);
    func_0x00f78a20(0x3d6cb20);
    uVar7 = func_0x00f78a20(0x3d77cb0);
    bRam0000000003eb50cb = 1;
  }
  if ((int)param_3 == 0) {
    return uVar7;
  }
  if ((uVar10 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    /*Atlas.Stats.UnlockManager$$AddUnlockedIfNotExist*/ func_0x01521f20(*(long *)(param_1 + 0x18),*(undefined8 *)(uVar10 + 0x18),0,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      /*Atlas.Stats.UnlockManager$$MarkUnlockSeen*/ func_0x015226dc(*(long *)(param_1 + 0x18),*(undefined8 *)(uVar10 + 0x18),0);
      iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(uVar10 + 0x18),/*STR('FTUEStage_13_FinalEvent')*/ uRam0000000003d6cb20,0);
      if (iVar5 != 0) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_01584c40;
        /*Atlas.Stats.AchievementManager$$UnlockAchievement*/ func_0x014474c4(*(long *)(param_1 + 0x28),/*STR('arcadeFTUX')*/ uRam0000000003d77cb0,0);
      }
      if (*(char *)(uVar10 + 0x68) != '\0') {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_01584c40;
        /*Atlas.Stats.DailyChallengeManager$$PollForChallengeRefresh*/ func_0x01574644(*(long *)(param_1 + 0x30),0);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_01584c40;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + 0xb8) = 1;
      }
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 0x48), lVar9 != 0)) {
        uVar7 = /*Atlas.Analytics.AtlasAnalyticsEvents$$FTUEStageCompletedEvent*/ func_0x014558b8(lVar9,*(undefined8 *)(uVar10 + 0x18),0);
        if ((param_4 & 1) == 0) {
          lVar9 = *(long *)(uVar10 + 0x40);
          if (lVar9 != 0) {
            uVar14 = 0;
            lVar12 = 0x28;
            do {
              if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar14) goto LAB_01584b98;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_01584c58;
              param_2 = lVar12 + 0x10;
              uVar14 = uVar14 + 1;
              uVar7 = Atlas_FrontEnd_FTUEManager__MarkStageAsUnlocked
                                (param_1,*(undefined8 *)(lVar9 + lVar12),1);
              lVar9 = *(long *)(uVar10 + 0x40);
              lVar12 = param_2;
            } while (lVar9 != 0);
            goto LAB_01584c40;
          }
LAB_01584b98:
          lVar9 = *(long *)(uVar10 + 0x48);
          if (lVar9 != 0) {
            uVar14 = 0;
            lVar12 = 0x28;
            do {
              if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar14) goto LAB_01584bec;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_01584c58;
              param_2 = lVar12 + 0x10;
              uVar14 = uVar14 + 1;
              uVar7 = Atlas_FrontEnd_FTUEManager__MarkStageAsCompleted
                                (param_1,*(undefined8 *)(lVar9 + lVar12),1,0,1);
              lVar9 = *(long *)(uVar10 + 0x48);
              lVar12 = param_2;
            } while (lVar9 != 0);
            goto LAB_01584c40;
          }
        }
LAB_01584bec:
        lVar9 = *(long *)(uVar10 + 0x50);
        if (lVar9 == 0) {
          return uVar7;
        }
        uVar14 = 0;
        param_2 = 0x28;
        do {
          uVar6 = (uint)uVar14;
          if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar6) {
            return uVar7;
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar6) {
LAB_01584c58:
            uVar8 = func_0x00f78b24();
            auVar20 = func_0x00f78ac0(uVar8,0);
            pcStack_48 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedAndComplete;
            ppuVar17 = &puStack_50;
            puVar19 = (undefined *)0x1584c80;
            plVar11 = &lStack_70;
            lStack_70 = param_2;
            uStack_68 = uVar14;
            uStack_60 = param_1;
            uStack_58 = uVar10;
            puStack_50 = &stack0xfffffffffffffff0;
            auVar1 = auVar20;
            while( true ) {
              lVar9 = auVar20._0_8_;
              *(undefined1 (*) [16])((long)plVar11 + -0x20) = auVar1;
              *(undefined1 ***)((long)plVar11 + -0x10) = ppuVar17;
              *(undefined **)((long)plVar11 + -8) = puVar19;
              if (*(long *)(lVar9 + 0x18) != 0) {
                uVar6 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar9 + 0x18),auVar20._8_8_,0);
                return (ulong)(*(char *)(lVar9 + 0x48) != '\0' | uVar6);
              }
              auVar21 = func_0x00f78af4(0,auVar20._8_8_);
              uVar8 = auVar21._0_8_;
              puVar4 = (undefined1 *)((long)plVar11 + -0x50);
              *(long *)((long)plVar11 + -0x50) = param_2;
              *(ulong *)((long)plVar11 + -0x48) = uVar14;
              *(long *)((long)plVar11 + -0x40) = auVar1._0_8_;
              *(long *)((long)plVar11 + -0x38) = lVar9;
              *(undefined1 **)((long)plVar11 + -0x30) = (undefined1 *)((long)plVar11 + -0x10);
              *(undefined **)((long)plVar11 + -0x28) = &Atlas_FrontEnd_FTUEManager__IsStageComplete;
              puVar18 = (undefined1 *)((long)plVar11 + -0x30);
              uVar15 = 0x3eb5000;
              if ((bRam0000000003eb50d1 & 1) == 0) {
                func_0x00f78a20(0x3d21270);
                bRam0000000003eb50d1 = 1;
              }
              if (auVar21._8_8_ == 0) {
                puVar19 = &Atlas_FrontEnd_FTUEManager__IsStageComplete;
                auVar22 = func_0x00f78af4();
                uVar13 = 0;
              }
              else {
                uVar15 = *(undefined8 *)(auVar21._8_8_ + 0x18);
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar15 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar15,0);
                auVar22._8_8_ = uVar15;
                auVar22._0_8_ = uVar8;
                puVar18 = *(undefined1 **)((long)plVar11 + -0x30);
                puVar19 = *(undefined **)((long)plVar11 + -0x28);
                uVar13 = *(undefined8 *)((long)plVar11 + -0x40);
                uVar8 = *(undefined8 *)((long)plVar11 + -0x38);
                puVar4 = (undefined1 *)((long)plVar11 + -0x20);
                param_2 = *(long *)((long)plVar11 + -0x50);
                uVar15 = *(undefined8 *)((long)plVar11 + -0x48);
              }
              lVar9 = auVar22._0_8_;
              *(undefined8 *)(puVar4 + -0x20) = uVar13;
              *(undefined8 *)(puVar4 + -0x18) = uVar8;
              *(undefined1 **)(puVar4 + -0x10) = puVar18;
              *(undefined **)(puVar4 + -8) = puVar19;
              if (*(long *)(lVar9 + 0x18) != 0) break;
              auVar21 = func_0x00f78af4(0,auVar22._8_8_);
              lVar12 = auVar21._0_8_;
              puVar3 = puVar4 + -0x50;
              *(long *)(puVar4 + -0x50) = param_2;
              *(undefined8 *)(puVar4 + -0x48) = uVar15;
              *(undefined8 *)(puVar4 + -0x40) = uVar13;
              *(long *)(puVar4 + -0x38) = lVar9;
              *(undefined1 **)(puVar4 + -0x30) = puVar4 + -0x10;
              *(undefined **)(puVar4 + -0x28) =
                   &Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete;
              pppuVar16 = (undefined1 ***)(puVar4 + -0x30);
              if ((bRam0000000003eb50d2 & 1) == 0) {
                func_0x00f78a20(0x3d57280);
                bRam0000000003eb50d2 = 1;
              }
              if ((*(long *)(lVar12 + 0x10) == 0) ||
                 (lVar9 = *(long *)(*(long *)(lVar12 + 0x10) + 0x10), lVar9 == 0)) {
                lVar9 = func_0x00f78af4();
                return (ulong)*(byte *)(lVar9 + 0x48);
              }
              uVar8 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar9,auVar21._8_8_,uRam0000000003d57280);
              auVar2._8_8_ = lVar12;
              auVar2._0_8_ = uVar8;
              auVar21._8_8_ = uVar8;
              auVar21._0_8_ = lVar12;
              puVar19 = &UNK_015856ac;
code_r0x015854ac:
              plVar11 = (long *)(puVar3 + -0x30);
              *(long *)(puVar3 + -0x30) = param_2;
              *(undefined8 *)(puVar3 + -0x28) = 0x3eb5000;
              *(undefined1 (*) [16])(puVar3 + -0x20) = auVar2;
              *(undefined1 ****)(puVar3 + -0x10) = pppuVar16;
              *(undefined **)(puVar3 + -8) = puVar19;
              ppuVar17 = (undefined1 **)(puVar3 + -0x10);
              uVar14 = 0x3eb5000;
              if ((bRam0000000003eb50d0 & 1) == 0) {
                func_0x00f78a20(0x3d21270);
                bRam0000000003eb50d0 = 1;
              }
              if (auVar21._8_8_ == 0) {
                puVar19 = &Atlas_FrontEnd_FTUEManager__IsStageUnlocked;
                auVar20 = func_0x00f78af4();
                auVar1._8_8_ = 0;
                auVar1._0_8_ = auVar21._0_8_;
                auVar1 = auVar1 << 0x40;
              }
              else {
                uVar8 = *(undefined8 *)(auVar21._8_8_ + 0x18);
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar8,0);
                auVar20._8_8_ = uVar8;
                auVar20._0_8_ = auVar21._0_8_;
                ppuVar17 = *(undefined1 ***)(puVar3 + -0x10);
                puVar19 = *(undefined **)(puVar3 + -8);
                auVar1 = *(undefined1 (*) [16])(puVar3 + -0x20);
                param_2 = *(long *)(puVar3 + -0x30);
                uVar14 = *(ulong *)(puVar3 + -0x28);
                plVar11 = (long *)puVar3;
              }
            }
            uVar6 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(lVar9 + 0x18),auVar22._8_8_,0);
            return (ulong)((uint)(*(char *)(lVar9 + 0x48) != '\0') | uVar6 ^ 1);
          }
          plVar11 = (long *)(lVar9 + param_2);
          if ((*plVar11 == 0) || (*(long *)(param_1 + 0x18) == 0)) break;
          param_2 = param_2 + 0x10;
          uVar14 = (ulong)(uVar6 + 1);
          uVar7 = /*Atlas.Stats.UnlockManager$$AddUnlockedIfNotExist*/ func_0x01521f20(*(long *)(param_1 + 0x18),*(undefined8 *)(*plVar11 + 0x18),1,0);
          lVar9 = *(long *)(uVar10 + 0x50);
        } while (lVar9 != 0);
      }
    }
  }
LAB_01584c40:
  uVar7 = func_0x00f78af4();
  return uVar7;
}



// ============================================================
// RVA: 0x1584f68 | Atlas.FrontEnd.FTUEManager.EvaluateStages
// ============================================================

/* WARNING: Possible PIC construction at 0x01585010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0158519c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015856a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015851a0) */
/* WARNING: Removing unreachable block (ram,0x015851b4) */
/* WARNING: Removing unreachable block (ram,0x015851b8) */
/* WARNING: Removing unreachable block (ram,0x015851bc) */
/* WARNING: Removing unreachable block (ram,0x015851c4) */
/* WARNING: Removing unreachable block (ram,0x015851f0) */
/* WARNING: Removing unreachable block (ram,0x01585204) */
/* WARNING: Removing unreachable block (ram,0x0158536c) */
/* WARNING: Removing unreachable block (ram,0x0158520c) */
/* WARNING: Removing unreachable block (ram,0x01585228) */
/* WARNING: Removing unreachable block (ram,0x01585230) */
/* WARNING: Removing unreachable block (ram,0x01585234) */
/* WARNING: Removing unreachable block (ram,0x01585248) */
/* WARNING: Removing unreachable block (ram,0x01585384) */
/* WARNING: Removing unreachable block (ram,0x0158525c) */
/* WARNING: Removing unreachable block (ram,0x01585278) */
/* WARNING: Removing unreachable block (ram,0x015852ac) */
/* WARNING: Removing unreachable block (ram,0x015852b4) */
/* WARNING: Removing unreachable block (ram,0x0158538c) */
/* WARNING: Removing unreachable block (ram,0x015853ec) */
/* WARNING: Removing unreachable block (ram,0x01585424) */
/* WARNING: Removing unreachable block (ram,0x015853f4) */
/* WARNING: Removing unreachable block (ram,0x01585428) */
/* WARNING: Removing unreachable block (ram,0x01585458) */
/* WARNING: Removing unreachable block (ram,0x0158546c) */
/* WARNING: Removing unreachable block (ram,0x01585474) */
/* WARNING: Removing unreachable block (ram,0x015854a8) */
/* WARNING: Removing unreachable block (ram,0x0158547c) */
/* WARNING: Removing unreachable block (ram,0x01585418) */
/* WARNING: Removing unreachable block (ram,0x015852bc) */
/* WARNING: Removing unreachable block (ram,0x015852d8) */
/* WARNING: Removing unreachable block (ram,0x015852e8) */
/* WARNING: Removing unreachable block (ram,0x01585374) */
/* WARNING: Removing unreachable block (ram,0x015852f0) */
/* WARNING: Removing unreachable block (ram,0x0158537c) */
/* WARNING: Removing unreachable block (ram,0x01585388) */
/* WARNING: Removing unreachable block (ram,0x01585308) */
/* WARNING: Removing unreachable block (ram,0x01585318) */
/* WARNING: Removing unreachable block (ram,0x0158531c) */
/* WARNING: Removing unreachable block (ram,0x01585350) */
/* WARNING: Removing unreachable block (ram,0x01585014) */
/* WARNING: Removing unreachable block (ram,0x015856ac) */

ulong Atlas_FrontEnd_FTUEManager__EvaluateStages(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  int extraout_w1;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 unaff_x22;
  undefined1 **ppuVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_110 [48];
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000003eb50cd & 1) == 0) {
    func_0x00f78a20(0x3d32470);
    func_0x00f78a20(0x3d32478);
    func_0x00f78a20(0x3d32480);
    func_0x00f78a20(0x3d3a5d8);
    bRam0000000003eb50cd = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x40) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar6 = (long *)___cxa_begin_catch();
      lVar7 = *plVar6;
      ___cxa_end_catch();
      uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003eb5000);
      if (lVar7 == 0) {
        return uVar5;
      }
      func_0x00f78ac0(lVar7,0);
    }
    puVar15 = &Atlas_FrontEnd_FTUEManager__EvaluateStage;
    auVar16 = __Unwind_Resume();
    lVar7 = auVar16._8_8_;
    param_1 = auVar16._0_8_;
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,*(long *)(param_1 + 0x40),uRam0000000003d3a5d8);
    uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d32478);
    if ((uVar5 & 1) == 0) {
      uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d32470);
      return uVar5;
    }
    puVar15 = (undefined *)0x1585014;
    lVar7 = lStack_38;
  }
  puVar1 = auStack_110;
  ppuVar13 = &puStack_60;
  puStack_60 = &stack0xfffffffffffffff0;
  puStack_58 = puVar15;
  if ((bRam0000000003eb50ce & 1) == 0) {
    func_0x00f78a20(0x3d2dbf0);
    func_0x00f78a20(0x3d2dbf8);
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d33438);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d33440);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d33448);
    func_0x00f78a20(0x3d3d1b0);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50ce = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_e0 = 0;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar7,0,0);
  if ((uVar5 & 1) == 0) {
    puVar15 = &UNK_015851a0;
    lVar8 = lVar7;
    lVar10 = param_1;
    while( true ) {
      puVar2 = puVar1 + -0x30;
      *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar1 + -0x28) = 0x3eb5000;
      *(long *)(puVar1 + -0x20) = lVar10;
      *(long *)(puVar1 + -0x18) = lVar8;
      *(undefined1 ***)(puVar1 + -0x10) = ppuVar13;
      *(undefined **)(puVar1 + -8) = puVar15;
      puVar14 = puVar1 + -0x10;
      uVar12 = 0x3eb5000;
      if ((bRam0000000003eb50d0 & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        bRam0000000003eb50d0 = 1;
      }
      if (lVar7 == 0) {
        puVar15 = &Atlas_FrontEnd_FTUEManager__IsStageUnlocked;
        auVar16 = func_0x00f78af4();
        uVar11 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(lVar7 + 0x18);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar12 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar12,0);
        auVar16._8_8_ = uVar12;
        auVar16._0_8_ = param_1;
        puVar14 = *(undefined1 **)(puVar1 + -0x10);
        puVar15 = *(undefined **)(puVar1 + -8);
        uVar11 = *(undefined8 *)(puVar1 + -0x20);
        param_1 = *(long *)(puVar1 + -0x18);
        unaff_x22 = *(undefined8 *)(puVar1 + -0x30);
        uVar12 = *(undefined8 *)(puVar1 + -0x28);
        puVar2 = puVar1;
      }
      lVar7 = auVar16._0_8_;
      *(undefined8 *)(puVar2 + -0x20) = uVar11;
      *(long *)(puVar2 + -0x18) = param_1;
      *(undefined1 **)(puVar2 + -0x10) = puVar14;
      *(undefined **)(puVar2 + -8) = puVar15;
      if (*(long *)(lVar7 + 0x18) != 0) {
        uVar4 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar7 + 0x18),auVar16._8_8_,0);
        return (ulong)(*(char *)(lVar7 + 0x48) != '\0' | uVar4);
      }
      auVar16 = func_0x00f78af4(0,auVar16._8_8_);
      uVar9 = auVar16._0_8_;
      puVar3 = puVar2 + -0x50;
      *(undefined8 *)(puVar2 + -0x50) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x48) = uVar12;
      *(undefined8 *)(puVar2 + -0x40) = uVar11;
      *(long *)(puVar2 + -0x38) = lVar7;
      *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x28) = &Atlas_FrontEnd_FTUEManager__IsStageComplete;
      puVar14 = puVar2 + -0x30;
      uVar12 = 0x3eb5000;
      if ((bRam0000000003eb50d1 & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        bRam0000000003eb50d1 = 1;
      }
      if (auVar16._8_8_ == 0) {
        puVar15 = &Atlas_FrontEnd_FTUEManager__IsStageComplete;
        auVar17 = func_0x00f78af4();
        uVar11 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(auVar16._8_8_ + 0x18);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar12 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar12,0);
        auVar17._8_8_ = uVar12;
        auVar17._0_8_ = uVar9;
        puVar14 = *(undefined1 **)(puVar2 + -0x30);
        puVar15 = *(undefined **)(puVar2 + -0x28);
        uVar11 = *(undefined8 *)(puVar2 + -0x40);
        uVar9 = *(undefined8 *)(puVar2 + -0x38);
        puVar3 = puVar2 + -0x20;
        unaff_x22 = *(undefined8 *)(puVar2 + -0x50);
        uVar12 = *(undefined8 *)(puVar2 + -0x48);
      }
      lVar7 = auVar17._0_8_;
      *(undefined8 *)(puVar3 + -0x20) = uVar11;
      *(undefined8 *)(puVar3 + -0x18) = uVar9;
      *(undefined1 **)(puVar3 + -0x10) = puVar14;
      *(undefined **)(puVar3 + -8) = puVar15;
      if (*(long *)(lVar7 + 0x18) != 0) break;
      auVar16 = func_0x00f78af4(0,auVar17._8_8_);
      param_1 = auVar16._0_8_;
      puVar1 = puVar3 + -0x50;
      *(undefined8 *)(puVar3 + -0x50) = unaff_x22;
      *(undefined8 *)(puVar3 + -0x48) = uVar12;
      *(undefined8 *)(puVar3 + -0x40) = uVar11;
      *(long *)(puVar3 + -0x38) = lVar7;
      *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
      *(undefined **)(puVar3 + -0x28) = &Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete;
      ppuVar13 = (undefined1 **)(puVar3 + -0x30);
      if ((bRam0000000003eb50d2 & 1) == 0) {
        func_0x00f78a20(0x3d57280);
        bRam0000000003eb50d2 = 1;
      }
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar7 == 0)) {
        lVar7 = func_0x00f78af4();
        return (ulong)*(byte *)(lVar7 + 0x48);
      }
      lVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar7,auVar16._8_8_,uRam0000000003d57280);
      puVar15 = &UNK_015856ac;
      lVar8 = param_1;
      lVar10 = lVar7;
    }
    uVar4 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(lVar7 + 0x18),auVar17._8_8_,0);
    return (ulong)((uint)(*(char *)(lVar7 + 0x48) != '\0') | uVar4 ^ 1);
  }
  return uVar5;
}



// ============================================================
// RVA: 0x1585074 | Atlas.FrontEnd.FTUEManager.EvaluateStage
// ============================================================

/* WARNING: Possible PIC construction at 0x0158519c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015856a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015851a0) */
/* WARNING: Removing unreachable block (ram,0x015851b4) */
/* WARNING: Removing unreachable block (ram,0x015851b8) */
/* WARNING: Removing unreachable block (ram,0x015851bc) */
/* WARNING: Removing unreachable block (ram,0x015851c4) */
/* WARNING: Removing unreachable block (ram,0x015851f0) */
/* WARNING: Removing unreachable block (ram,0x01585204) */
/* WARNING: Removing unreachable block (ram,0x0158536c) */
/* WARNING: Removing unreachable block (ram,0x0158520c) */
/* WARNING: Removing unreachable block (ram,0x01585228) */
/* WARNING: Removing unreachable block (ram,0x01585230) */
/* WARNING: Removing unreachable block (ram,0x01585234) */
/* WARNING: Removing unreachable block (ram,0x01585248) */
/* WARNING: Removing unreachable block (ram,0x01585384) */
/* WARNING: Removing unreachable block (ram,0x0158525c) */
/* WARNING: Removing unreachable block (ram,0x01585278) */
/* WARNING: Removing unreachable block (ram,0x015852ac) */
/* WARNING: Removing unreachable block (ram,0x015852b4) */
/* WARNING: Removing unreachable block (ram,0x0158538c) */
/* WARNING: Removing unreachable block (ram,0x015853ec) */
/* WARNING: Removing unreachable block (ram,0x01585424) */
/* WARNING: Removing unreachable block (ram,0x015853f4) */
/* WARNING: Removing unreachable block (ram,0x01585428) */
/* WARNING: Removing unreachable block (ram,0x01585458) */
/* WARNING: Removing unreachable block (ram,0x0158546c) */
/* WARNING: Removing unreachable block (ram,0x01585474) */
/* WARNING: Removing unreachable block (ram,0x015854a8) */
/* WARNING: Removing unreachable block (ram,0x0158547c) */
/* WARNING: Removing unreachable block (ram,0x01585418) */
/* WARNING: Removing unreachable block (ram,0x015852bc) */
/* WARNING: Removing unreachable block (ram,0x015852d8) */
/* WARNING: Removing unreachable block (ram,0x015852e8) */
/* WARNING: Removing unreachable block (ram,0x01585374) */
/* WARNING: Removing unreachable block (ram,0x015852f0) */
/* WARNING: Removing unreachable block (ram,0x0158537c) */
/* WARNING: Removing unreachable block (ram,0x01585388) */
/* WARNING: Removing unreachable block (ram,0x01585308) */
/* WARNING: Removing unreachable block (ram,0x01585318) */
/* WARNING: Removing unreachable block (ram,0x0158531c) */
/* WARNING: Removing unreachable block (ram,0x01585350) */
/* WARNING: Removing unreachable block (ram,0x015856ac) */

ulong Atlas_FrontEnd_FTUEManager__EvaluateStage(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x22;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_c0 [48];
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar1 = auStack_c0;
  puVar11 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb50ce & 1) == 0) {
    func_0x00f78a20(0x3d2dbf0);
    func_0x00f78a20(0x3d2dbf8);
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d33438);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d33440);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d33448);
    func_0x00f78a20(0x3d3d1b0);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50ce = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_2,0,0);
  if ((uVar5 & 1) != 0) {
    return uVar5;
  }
  puVar12 = &UNK_015851a0;
  lVar6 = param_2;
  lVar8 = param_1;
  while( true ) {
    puVar2 = puVar1 + -0x30;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = 0x3eb5000;
    *(long *)(puVar1 + -0x20) = lVar8;
    *(long *)(puVar1 + -0x18) = lVar6;
    *(undefined1 **)(puVar1 + -0x10) = puVar11;
    *(undefined **)(puVar1 + -8) = puVar12;
    puVar11 = puVar1 + -0x10;
    uVar10 = 0x3eb5000;
    if ((bRam0000000003eb50d0 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      bRam0000000003eb50d0 = 1;
    }
    if (param_2 == 0) {
      puVar12 = &Atlas_FrontEnd_FTUEManager__IsStageUnlocked;
      auVar13 = func_0x00f78af4();
      uVar9 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_2 + 0x18);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar10,0);
      auVar13._8_8_ = uVar10;
      auVar13._0_8_ = param_1;
      puVar11 = *(undefined1 **)(puVar1 + -0x10);
      puVar12 = *(undefined **)(puVar1 + -8);
      uVar9 = *(undefined8 *)(puVar1 + -0x20);
      param_1 = *(long *)(puVar1 + -0x18);
      unaff_x22 = *(undefined8 *)(puVar1 + -0x30);
      uVar10 = *(undefined8 *)(puVar1 + -0x28);
      puVar2 = puVar1;
    }
    lVar6 = auVar13._0_8_;
    *(undefined8 *)(puVar2 + -0x20) = uVar9;
    *(long *)(puVar2 + -0x18) = param_1;
    *(undefined1 **)(puVar2 + -0x10) = puVar11;
    *(undefined **)(puVar2 + -8) = puVar12;
    if (*(long *)(lVar6 + 0x18) != 0) {
      uVar4 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar6 + 0x18),auVar13._8_8_,0);
      return (ulong)(*(char *)(lVar6 + 0x48) != '\0' | uVar4);
    }
    auVar13 = func_0x00f78af4(0,auVar13._8_8_);
    uVar7 = auVar13._0_8_;
    puVar3 = puVar2 + -0x50;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x48) = uVar10;
    *(undefined8 *)(puVar2 + -0x40) = uVar9;
    *(long *)(puVar2 + -0x38) = lVar6;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &Atlas_FrontEnd_FTUEManager__IsStageComplete;
    puVar11 = puVar2 + -0x30;
    uVar10 = 0x3eb5000;
    if ((bRam0000000003eb50d1 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      bRam0000000003eb50d1 = 1;
    }
    if (auVar13._8_8_ == 0) {
      puVar12 = &Atlas_FrontEnd_FTUEManager__IsStageComplete;
      auVar14 = func_0x00f78af4();
      uVar9 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(auVar13._8_8_ + 0x18);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar10,0);
      auVar14._8_8_ = uVar10;
      auVar14._0_8_ = uVar7;
      puVar11 = *(undefined1 **)(puVar2 + -0x30);
      puVar12 = *(undefined **)(puVar2 + -0x28);
      uVar9 = *(undefined8 *)(puVar2 + -0x40);
      uVar7 = *(undefined8 *)(puVar2 + -0x38);
      puVar3 = puVar2 + -0x20;
      unaff_x22 = *(undefined8 *)(puVar2 + -0x50);
      uVar10 = *(undefined8 *)(puVar2 + -0x48);
    }
    lVar6 = auVar14._0_8_;
    *(undefined8 *)(puVar3 + -0x20) = uVar9;
    *(undefined8 *)(puVar3 + -0x18) = uVar7;
    *(undefined1 **)(puVar3 + -0x10) = puVar11;
    *(undefined **)(puVar3 + -8) = puVar12;
    if (*(long *)(lVar6 + 0x18) != 0) break;
    auVar13 = func_0x00f78af4(0,auVar14._8_8_);
    param_1 = auVar13._0_8_;
    puVar1 = puVar3 + -0x50;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x48) = uVar10;
    *(undefined8 *)(puVar3 + -0x40) = uVar9;
    *(long *)(puVar3 + -0x38) = lVar6;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x28) = &Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete;
    puVar11 = puVar3 + -0x30;
    if ((bRam0000000003eb50d2 & 1) == 0) {
      func_0x00f78a20(0x3d57280);
      bRam0000000003eb50d2 = 1;
    }
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar6 == 0)) {
      lVar6 = func_0x00f78af4();
      return (ulong)*(byte *)(lVar6 + 0x48);
    }
    param_2 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,auVar13._8_8_,uRam0000000003d57280);
    puVar12 = &UNK_015856ac;
    lVar6 = param_1;
    lVar8 = param_2;
  }
  uVar4 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(lVar6 + 0x18),auVar14._8_8_,0);
  return (ulong)((uint)(*(char *)(lVar6 + 0x48) != '\0') | uVar4 ^ 1);
}



// ============================================================
// RVA: 0x1585434 | Atlas.FrontEnd.FTUEManager.EvaluateStage
// ============================================================

/* WARNING: Possible PIC construction at 0x0158519c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015856a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015851a0) */
/* WARNING: Removing unreachable block (ram,0x015851b4) */
/* WARNING: Removing unreachable block (ram,0x015851b8) */
/* WARNING: Removing unreachable block (ram,0x015851bc) */
/* WARNING: Removing unreachable block (ram,0x015851c4) */
/* WARNING: Removing unreachable block (ram,0x015851f0) */
/* WARNING: Removing unreachable block (ram,0x01585204) */
/* WARNING: Removing unreachable block (ram,0x0158536c) */
/* WARNING: Removing unreachable block (ram,0x0158520c) */
/* WARNING: Removing unreachable block (ram,0x01585228) */
/* WARNING: Removing unreachable block (ram,0x01585230) */
/* WARNING: Removing unreachable block (ram,0x01585234) */
/* WARNING: Removing unreachable block (ram,0x01585248) */
/* WARNING: Removing unreachable block (ram,0x01585384) */
/* WARNING: Removing unreachable block (ram,0x0158525c) */
/* WARNING: Removing unreachable block (ram,0x01585278) */
/* WARNING: Removing unreachable block (ram,0x015852ac) */
/* WARNING: Removing unreachable block (ram,0x015852b4) */
/* WARNING: Removing unreachable block (ram,0x0158538c) */
/* WARNING: Removing unreachable block (ram,0x015853ec) */
/* WARNING: Removing unreachable block (ram,0x01585424) */
/* WARNING: Removing unreachable block (ram,0x015853f4) */
/* WARNING: Removing unreachable block (ram,0x01585428) */
/* WARNING: Removing unreachable block (ram,0x01585418) */
/* WARNING: Removing unreachable block (ram,0x015852bc) */
/* WARNING: Removing unreachable block (ram,0x015852d8) */
/* WARNING: Removing unreachable block (ram,0x015852e8) */
/* WARNING: Removing unreachable block (ram,0x01585374) */
/* WARNING: Removing unreachable block (ram,0x015852f0) */
/* WARNING: Removing unreachable block (ram,0x0158537c) */
/* WARNING: Removing unreachable block (ram,0x01585388) */
/* WARNING: Removing unreachable block (ram,0x01585308) */
/* WARNING: Removing unreachable block (ram,0x01585318) */
/* WARNING: Removing unreachable block (ram,0x0158531c) */
/* WARNING: Removing unreachable block (ram,0x01585350) */
/* WARNING: Removing unreachable block (ram,0x015856ac) */

ulong Atlas_FrontEnd_FTUEManager__EvaluateStage(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_c0 [48];
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar1 = &stack0xffffffffffffffd0;
  puVar12 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb50cf & 1) == 0) {
    func_0x00f78a20(0x3d57280);
    bRam0000000003eb50cf = 1;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar6 == 0)) {
    puVar13 = &Atlas_FrontEnd_FTUEManager__IsStageUnlocked;
    auVar14 = func_0x00f78af4();
    lVar7 = auVar14._8_8_;
    lVar6 = auVar14._0_8_;
    lVar8 = param_1;
  }
  else {
    lVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,param_2,uRam0000000003d57280);
    puVar1 = auStack_c0;
    puVar12 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb50ce & 1) == 0) {
      func_0x00f78a20(0x3d2dbf0);
      func_0x00f78a20(0x3d2dbf8);
      func_0x00f78a20(0x3d337c8);
      func_0x00f78a20(0x3d33438);
      func_0x00f78a20(0x3d337d0);
      func_0x00f78a20(0x3d33440);
      func_0x00f78a20(0x3d337d8);
      func_0x00f78a20(0x3d33448);
      func_0x00f78a20(0x3d3d1b0);
      func_0x00f78a20(0x3d3dc70);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb50ce = 1;
    }
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar7,0,0);
    if ((uVar5 & 1) != 0) {
      return uVar5;
    }
    puVar13 = &UNK_015851a0;
    lVar6 = param_1;
    lVar8 = lVar7;
    param_2 = param_1;
  }
  while( true ) {
    puVar2 = puVar1 + -0x30;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = 0x3eb5000;
    *(long *)(puVar1 + -0x20) = param_2;
    *(long *)(puVar1 + -0x18) = lVar8;
    *(undefined1 **)(puVar1 + -0x10) = puVar12;
    *(undefined **)(puVar1 + -8) = puVar13;
    puVar12 = puVar1 + -0x10;
    uVar11 = 0x3eb5000;
    if ((bRam0000000003eb50d0 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      bRam0000000003eb50d0 = 1;
    }
    if (lVar7 == 0) {
      puVar13 = &Atlas_FrontEnd_FTUEManager__IsStageUnlocked;
      auVar14 = func_0x00f78af4();
      uVar10 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(lVar7 + 0x18);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
      auVar14._8_8_ = uVar11;
      auVar14._0_8_ = lVar6;
      puVar12 = *(undefined1 **)(puVar1 + -0x10);
      puVar13 = *(undefined **)(puVar1 + -8);
      uVar10 = *(undefined8 *)(puVar1 + -0x20);
      lVar6 = *(long *)(puVar1 + -0x18);
      unaff_x22 = *(undefined8 *)(puVar1 + -0x30);
      uVar11 = *(undefined8 *)(puVar1 + -0x28);
      puVar2 = puVar1;
    }
    lVar8 = auVar14._0_8_;
    *(undefined8 *)(puVar2 + -0x20) = uVar10;
    *(long *)(puVar2 + -0x18) = lVar6;
    *(undefined1 **)(puVar2 + -0x10) = puVar12;
    *(undefined **)(puVar2 + -8) = puVar13;
    if (*(long *)(lVar8 + 0x18) != 0) {
      uVar4 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar8 + 0x18),auVar14._8_8_,0);
      return (ulong)(*(char *)(lVar8 + 0x48) != '\0' | uVar4);
    }
    auVar14 = func_0x00f78af4(0,auVar14._8_8_);
    uVar9 = auVar14._0_8_;
    puVar3 = puVar2 + -0x50;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x48) = uVar11;
    *(undefined8 *)(puVar2 + -0x40) = uVar10;
    *(long *)(puVar2 + -0x38) = lVar8;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &Atlas_FrontEnd_FTUEManager__IsStageComplete;
    puVar12 = puVar2 + -0x30;
    uVar11 = 0x3eb5000;
    if ((bRam0000000003eb50d1 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      bRam0000000003eb50d1 = 1;
    }
    if (auVar14._8_8_ == 0) {
      puVar13 = &Atlas_FrontEnd_FTUEManager__IsStageComplete;
      auVar15 = func_0x00f78af4();
      uVar10 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(auVar14._8_8_ + 0x18);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
      auVar15._8_8_ = uVar11;
      auVar15._0_8_ = uVar9;
      puVar12 = *(undefined1 **)(puVar2 + -0x30);
      puVar13 = *(undefined **)(puVar2 + -0x28);
      uVar10 = *(undefined8 *)(puVar2 + -0x40);
      uVar9 = *(undefined8 *)(puVar2 + -0x38);
      puVar3 = puVar2 + -0x20;
      unaff_x22 = *(undefined8 *)(puVar2 + -0x50);
      uVar11 = *(undefined8 *)(puVar2 + -0x48);
    }
    lVar8 = auVar15._0_8_;
    *(undefined8 *)(puVar3 + -0x20) = uVar10;
    *(undefined8 *)(puVar3 + -0x18) = uVar9;
    *(undefined1 **)(puVar3 + -0x10) = puVar12;
    *(undefined **)(puVar3 + -8) = puVar13;
    if (*(long *)(lVar8 + 0x18) != 0) break;
    auVar14 = func_0x00f78af4(0,auVar15._8_8_);
    lVar6 = auVar14._0_8_;
    puVar1 = puVar3 + -0x50;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x48) = uVar11;
    *(undefined8 *)(puVar3 + -0x40) = uVar10;
    *(long *)(puVar3 + -0x38) = lVar8;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x28) = &Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete;
    puVar12 = puVar3 + -0x30;
    if ((bRam0000000003eb50d2 & 1) == 0) {
      func_0x00f78a20(0x3d57280);
      bRam0000000003eb50d2 = 1;
    }
    if ((*(long *)(lVar6 + 0x10) == 0) ||
       (lVar8 = *(long *)(*(long *)(lVar6 + 0x10) + 0x10), lVar8 == 0)) {
      lVar6 = func_0x00f78af4();
      return (ulong)*(byte *)(lVar6 + 0x48);
    }
    lVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar8,auVar14._8_8_,uRam0000000003d57280);
    puVar13 = &UNK_015856ac;
    lVar8 = lVar6;
    param_2 = lVar7;
  }
  uVar4 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(lVar8 + 0x18),auVar15._8_8_,0);
  return (ulong)((uint)(*(char *)(lVar8 + 0x48) != '\0') | uVar4 ^ 1);
}



// ============================================================
// RVA: 0x15854ac | Atlas.FrontEnd.FTUEManager.IsStageUnlocked
// ============================================================

/* WARNING: Possible PIC construction at 0x015856b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015856bc) */

uint Atlas_FrontEnd_FTUEManager__IsStageUnlocked(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar7;
  undefined8 unaff_x21;
  undefined8 uVar8;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar9;
  undefined *unaff_x30;
  undefined *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  puVar2 = &stack0xffffffffffffffd0;
  puVar9 = &stack0xfffffffffffffff0;
  uVar8 = 0x3eb5000;
  if ((bRam0000000003eb50d0 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb50d0 = 1;
  }
  if (param_2 == 0) {
    unaff_x30 = &Atlas_FrontEnd_FTUEManager__IsStageUnlocked;
    auVar11 = func_0x00f78af4();
    uVar4 = auVar11._8_8_;
    lVar6 = auVar11._0_8_;
    unaff_x20 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar8,0);
    puVar2 = (undefined1 *)register0x00000008;
    lVar6 = param_1;
    param_1 = unaff_x19;
    uVar8 = unaff_x21;
    puVar9 = unaff_x29;
  }
  puVar1 = puVar2 + -0x20;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(long *)(puVar2 + -0x18) = param_1;
  *(undefined1 **)(puVar2 + -0x10) = puVar9;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  puVar9 = puVar2 + -0x10;
  if (*(long *)(lVar6 + 0x18) != 0) {
    uVar3 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar6 + 0x18),uVar4,0);
    return *(char *)(lVar6 + 0x48) != '\0' | uVar3;
  }
  puVar10 = &Atlas_FrontEnd_FTUEManager__IsStageComplete;
  auVar11 = func_0x00f78af4(0,uVar4);
  while( true ) {
    uVar4 = auVar11._0_8_;
    puVar2 = puVar1 + -0x30;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = uVar8;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = lVar6;
    *(undefined1 **)(puVar1 + -0x10) = puVar9;
    *(undefined **)(puVar1 + -8) = puVar10;
    puVar9 = puVar1 + -0x10;
    uVar8 = 0x3eb5000;
    if ((bRam0000000003eb50d1 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      bRam0000000003eb50d1 = 1;
    }
    if (auVar11._8_8_ == 0) {
      puVar10 = &Atlas_FrontEnd_FTUEManager__IsStageComplete;
      auVar12 = func_0x00f78af4();
      uVar7 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(auVar11._8_8_ + 0x18);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar8,0);
      auVar12._8_8_ = uVar8;
      auVar12._0_8_ = uVar4;
      puVar9 = *(undefined1 **)(puVar1 + -0x10);
      puVar10 = *(undefined **)(puVar1 + -8);
      uVar7 = *(undefined8 *)(puVar1 + -0x20);
      uVar4 = *(undefined8 *)(puVar1 + -0x18);
      unaff_x22 = *(undefined8 *)(puVar1 + -0x30);
      uVar8 = *(undefined8 *)(puVar1 + -0x28);
      puVar2 = puVar1;
    }
    lVar5 = auVar12._0_8_;
    *(undefined8 *)(puVar2 + -0x20) = uVar7;
    *(undefined8 *)(puVar2 + -0x18) = uVar4;
    *(undefined1 **)(puVar2 + -0x10) = puVar9;
    *(undefined **)(puVar2 + -8) = puVar10;
    if (*(long *)(lVar5 + 0x18) != 0) break;
    auVar11 = func_0x00f78af4(0,auVar12._8_8_);
    lVar6 = auVar11._0_8_;
    puVar1 = puVar2 + -0x50;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x48) = uVar8;
    *(undefined8 *)(puVar2 + -0x40) = uVar7;
    *(long *)(puVar2 + -0x38) = lVar5;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete;
    puVar9 = puVar2 + -0x30;
    if ((bRam0000000003eb50d2 & 1) == 0) {
      func_0x00f78a20(0x3d57280);
      bRam0000000003eb50d2 = 1;
    }
    if ((*(long *)(lVar6 + 0x10) == 0) ||
       (lVar5 = *(long *)(*(long *)(lVar6 + 0x10) + 0x10), lVar5 == 0)) {
      lVar6 = func_0x00f78af4();
      return (uint)*(byte *)(lVar6 + 0x48);
    }
    unaff_x20 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,auVar11._8_8_,uRam0000000003d57280);
    auVar11._8_8_ = unaff_x20;
    auVar11._0_8_ = lVar6;
    uVar8 = Atlas_FrontEnd_FTUEManager__IsStageUnlocked(lVar6,unaff_x20);
    puVar10 = &UNK_015856bc;
  }
  uVar3 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(lVar5 + 0x18),auVar12._8_8_,0);
  return (uint)(*(char *)(lVar5 + 0x48) != '\0') | uVar3 ^ 1;
}



// ============================================================
// RVA: 0x1585534 | Atlas.FrontEnd.FTUEManager.IsStageUnlocked
// ============================================================

/* WARNING: Possible PIC construction at 0x015856b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015856bc) */

uint Atlas_FrontEnd_FTUEManager__IsStageUnlocked(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  undefined8 unaff_x21;
  undefined8 uVar7;
  undefined8 unaff_x22;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  puVar1 = &stack0xffffffffffffffe0;
  puVar8 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar3 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(param_1 + 0x18),param_2,0);
    return *(char *)(param_1 + 0x48) != '\0' | uVar3;
  }
  puVar9 = &Atlas_FrontEnd_FTUEManager__IsStageComplete;
  auVar10 = func_0x00f78af4();
  while( true ) {
    uVar4 = auVar10._0_8_;
    puVar2 = puVar1 + -0x30;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar8;
    *(undefined **)(puVar1 + -8) = puVar9;
    puVar8 = puVar1 + -0x10;
    uVar7 = 0x3eb5000;
    if ((bRam0000000003eb50d1 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      bRam0000000003eb50d1 = 1;
    }
    if (auVar10._8_8_ == 0) {
      puVar9 = &Atlas_FrontEnd_FTUEManager__IsStageComplete;
      auVar11 = func_0x00f78af4();
      uVar6 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(auVar10._8_8_ + 0x18);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar7,0);
      auVar11._8_8_ = uVar7;
      auVar11._0_8_ = uVar4;
      puVar8 = *(undefined1 **)(puVar1 + -0x10);
      puVar9 = *(undefined **)(puVar1 + -8);
      uVar6 = *(undefined8 *)(puVar1 + -0x20);
      uVar4 = *(undefined8 *)(puVar1 + -0x18);
      unaff_x22 = *(undefined8 *)(puVar1 + -0x30);
      uVar7 = *(undefined8 *)(puVar1 + -0x28);
      puVar2 = puVar1;
    }
    lVar5 = auVar11._0_8_;
    *(undefined8 *)(puVar2 + -0x20) = uVar6;
    *(undefined8 *)(puVar2 + -0x18) = uVar4;
    *(undefined1 **)(puVar2 + -0x10) = puVar8;
    *(undefined **)(puVar2 + -8) = puVar9;
    if (*(long *)(lVar5 + 0x18) != 0) break;
    auVar10 = func_0x00f78af4(0,auVar11._8_8_);
    param_1 = auVar10._0_8_;
    puVar1 = puVar2 + -0x50;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x48) = uVar7;
    *(undefined8 *)(puVar2 + -0x40) = uVar6;
    *(long *)(puVar2 + -0x38) = lVar5;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete;
    puVar8 = puVar2 + -0x30;
    if ((bRam0000000003eb50d2 & 1) == 0) {
      func_0x00f78a20(0x3d57280);
      bRam0000000003eb50d2 = 1;
    }
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar5 == 0)) {
      lVar5 = func_0x00f78af4();
      return (uint)*(byte *)(lVar5 + 0x48);
    }
    unaff_x20 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,auVar10._8_8_,uRam0000000003d57280);
    auVar10._8_8_ = unaff_x20;
    auVar10._0_8_ = param_1;
    unaff_x21 = Atlas_FrontEnd_FTUEManager__IsStageUnlocked(param_1,unaff_x20);
    puVar9 = &UNK_015856bc;
  }
  uVar3 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(lVar5 + 0x18),auVar11._8_8_,0);
  return (uint)(*(char *)(lVar5 + 0x48) != '\0') | uVar3 ^ 1;
}



// ============================================================
// RVA: 0x1585574 | Atlas.FrontEnd.FTUEManager.IsStageComplete
// ============================================================

uint Atlas_FrontEnd_FTUEManager__IsStageComplete(long param_1,long param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar7;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar8;
  undefined *unaff_x30;
  undefined1 auVar9 [16];
  
  puVar1 = &stack0xffffffffffffffd0;
  puVar8 = &stack0xfffffffffffffff0;
  uVar7 = 0x3eb5000;
  if ((bRam0000000003eb50d1 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb50d1 = 1;
  }
  if (param_2 == 0) {
    unaff_x30 = &Atlas_FrontEnd_FTUEManager__IsStageComplete;
    auVar9 = func_0x00f78af4();
    uVar4 = auVar9._8_8_;
    lVar6 = auVar9._0_8_;
    unaff_x20 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar7,0);
    puVar1 = (undefined1 *)register0x00000008;
    lVar6 = param_1;
    param_1 = unaff_x19;
    uVar7 = unaff_x21;
    puVar8 = unaff_x29;
  }
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(long *)(puVar1 + -0x18) = param_1;
  *(undefined1 **)(puVar1 + -0x10) = puVar8;
  *(undefined **)(puVar1 + -8) = unaff_x30;
  if (*(long *)(lVar6 + 0x18) != 0) {
    uVar2 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(lVar6 + 0x18),uVar4,0);
    return (uint)(*(char *)(lVar6 + 0x48) != '\0') | uVar2 ^ 1;
  }
  auVar9 = func_0x00f78af4(0,uVar4);
  lVar5 = auVar9._0_8_;
  *(undefined8 *)(puVar1 + -0x50) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x48) = uVar7;
  *(undefined8 *)(puVar1 + -0x40) = unaff_x20;
  *(long *)(puVar1 + -0x38) = lVar6;
  *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
  *(undefined **)(puVar1 + -0x28) = &Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete;
  if ((bRam0000000003eb50d2 & 1) == 0) {
    func_0x00f78a20(0x3d57280);
    bRam0000000003eb50d2 = 1;
  }
  if ((*(long *)(lVar5 + 0x10) != 0) &&
     (lVar6 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10), lVar6 != 0)) {
    uVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,auVar9._8_8_,uRam0000000003d57280);
    uVar2 = Atlas_FrontEnd_FTUEManager__IsStageUnlocked(lVar5,uVar7);
    uVar3 = Atlas_FrontEnd_FTUEManager__IsStageComplete(lVar5,uVar7);
    return uVar2 & (uVar3 ^ 1);
  }
  lVar6 = func_0x00f78af4();
  return (uint)*(byte *)(lVar6 + 0x48);
}



// ============================================================
// RVA: 0x15855fc | Atlas.FrontEnd.FTUEManager.IsStageComplete
// ============================================================

uint Atlas_FrontEnd_FTUEManager__IsStageComplete(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(param_1 + 0x18),param_2,0);
    return (uint)(*(char *)(param_1 + 0x48) != '\0') | uVar1 ^ 1;
  }
  auVar6 = func_0x00f78af4();
  lVar5 = auVar6._0_8_;
  if ((bRam0000000003eb50d2 & 1) == 0) {
    func_0x00f78a20(0x3d57280);
    bRam0000000003eb50d2 = 1;
  }
  if ((*(long *)(lVar5 + 0x10) != 0) &&
     (lVar3 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10), lVar3 != 0)) {
    uVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,auVar6._8_8_,uRam0000000003d57280);
    uVar1 = Atlas_FrontEnd_FTUEManager__IsStageUnlocked(lVar5,uVar4);
    uVar2 = Atlas_FrontEnd_FTUEManager__IsStageComplete(lVar5,uVar4);
    return uVar1 & (uVar2 ^ 1);
  }
  lVar5 = func_0x00f78af4();
  return (uint)*(byte *)(lVar5 + 0x48);
}



// ============================================================
// RVA: 0x1585640 | Atlas.FrontEnd.FTUEManager.IsStageUnlockedButNotComplete
// ============================================================

uint Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000003eb50d2 & 1) == 0) {
    func_0x00f78a20(0x3d57280);
    bRam0000000003eb50d2 = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar3 != 0)) {
    uVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,param_2,uRam0000000003d57280);
    uVar1 = Atlas_FrontEnd_FTUEManager__IsStageUnlocked(param_1,uVar4);
    uVar2 = Atlas_FrontEnd_FTUEManager__IsStageComplete(param_1,uVar4);
    return uVar1 & (uVar2 ^ 1);
  }
  lVar3 = func_0x00f78af4();
  return (uint)*(byte *)(lVar3 + 0x48);
}



// ============================================================
// RVA: 0x15856d8 | Atlas.FrontEnd.FTUEManager.ShouldSkipFTUE
// ============================================================

undefined1 Atlas_FrontEnd_FTUEManager__ShouldSkipFTUE(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x15856e0 | Atlas.FrontEnd.FTUEManager..ctor
// ============================================================

undefined1  [16] Atlas_FrontEnd_FTUEManager___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb50d4 & 1) == 0) {
    func_0x00f78a20(0x3d3a5c0);
    func_0x00f78a20(0x3d1d970);
    bRam0000000003eb50d4 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<FTUEStageDefinition>_TypeInfo*/ uRam0000000003d1d970);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3a5c0);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



// ============================================================
// RVA: 0x1585760 | Atlas.FrontEnd.FTUEManager..cctor
// ============================================================

undefined8 Atlas_FrontEnd_FTUEManager___cctor(void)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb50d5 & 1) == 0) {
    func_0x00f78a20(0x3d1ef00);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d21830);
    func_0x00f78a20(0x3d6cb58);
    bRam0000000003eb50d5 = 1;
  }
  lVar1 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,1);
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_1_Driving')*/ uRam0000000003d6cb58,0);
  if (lVar1 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(lVar1 + 0x18) != 0) {
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    **(long **)(/*Atlas.FrontEnd.FTUEManager_TypeInfo*/ lRam0000000003d21830 + 0xb8) = lVar1;
    return uVar2;
  }
  uVar2 = func_0x00f78b24();
  lVar1 = func_0x00f78ac0(uVar2,0);
  return *(undefined8 *)(lVar1 + 0x18);
}



