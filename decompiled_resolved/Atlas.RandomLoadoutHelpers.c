// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.RandomLoadoutHelpers

// ============================================================
// RVA: 0x14ddcb8 | Atlas.RandomLoadoutHelpers.GetCharacterRandomPool
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14de0d4 | Atlas.RandomLoadoutHelpers.GenerateRandomList
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014df6ac) */

long Atlas_RandomLoadoutHelpers__GenerateRandomList
               (long *param_1,long *param_2,long *param_3,long *param_4,ulong param_5,long param_6)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  int extraout_w1;
  long *extraout_x1;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long extraout_x8;
  ulong uVar14;
  int *piVar15;
  bool bVar16;
  undefined8 uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  long *plStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  undefined *puStack_178;
  long *plStack_170;
  long *plStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  int aiStack_108 [5];
  int iStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long alStack_78 [3];
  
  plStack_168 = param_1;
  lStack_160 = param_6;
  if ((bRam0000000003eb4bd3 & 1) == 0) {
    func_0x00f78a20(0x3d43848);
    func_0x00f78a20(0x3d1fd98);
    func_0x00f78a20(0x3d32f80);
    func_0x00f78a20(0x3d328e0);
    func_0x00f78a20(0x3d328e8);
    func_0x00f78a20(0x3d32f88);
    func_0x00f78a20(0x3d328f0);
    func_0x00f78a20(0x3d32f90);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d57520);
    func_0x00f78a20(0x3d57538);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57570);
    func_0x00f78a20(0x3d57588);
    func_0x00f78a20(0x3d575c0);
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d5a090);
    func_0x00f78a20(0x3d22ff0);
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3bfc0);
    func_0x00f78a20(0x3d3ae60);
    func_0x00f78a20(0x3d3bfd0);
    func_0x00f78a20(0x3d3ae68);
    func_0x00f78a20(0x3d3a4c0);
    func_0x00f78a20(0x3d3a4a0);
    func_0x00f78a20(0x3d3bf98);
    func_0x00f78a20(0x3d3a4c8);
    func_0x00f78a20(0x3d3a4d0);
    func_0x00f78a20(0x3d1de30);
    func_0x00f78a20(0x3d1d930);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3f410);
    func_0x00f78a20(0x3d3f4e8);
    func_0x00f78a20(0x3d1e650);
    func_0x00f78a20(0x3d1e580);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d3fe48);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d63aa0);
    func_0x00f78a20(0x3d63aa8);
    func_0x00f78a20(0x3d63ab0);
    func_0x00f78a20(0x3d63ab8);
    func_0x00f78a20(0x3d63ac0);
    func_0x00f78a20(0x3d63ac8);
    func_0x00f78a20(0x3d63ad0);
    func_0x00f78a20(0x3d63ad8);
    func_0x00f78a20(0x3d63ae0);
    func_0x00f78a20(0x3d63ae8);
    func_0x00f78a20(0x3d287e0);
    func_0x00f78a20(0x3d25b48);
    bRam0000000003eb4bd3 = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  lStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  iStack_f4 = 0;
  uVar19 = param_5 & 0xffffffff;
  alStack_78[0] = 0;
  switch(uVar19) {
  case 0:
    if ((*plStack_168 == 0) || (lVar5 = *(long *)(*plStack_168 + 0x10), lVar5 == 0)) {
code_r0x014df4c0:
      func_0x00f78af4();
      plVar8 = extraout_x1;
      lVar11 = extraout_x8;
code_r0x014df4c4:
      func_0x00f78e5c(plVar8,lVar11);
code_r0x014df588:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x14df58c);
      (*pcVar1)();
    }
    puVar7 = (undefined8 *)0x3d57550;
    break;
  case 1:
    if ((*plStack_168 == 0) || (lVar5 = *(long *)(*plStack_168 + 0x10), lVar5 == 0))
    goto code_r0x014df4c0;
    puVar7 = (undefined8 *)0x3d57588;
    break;
  case 2:
    if ((*plStack_168 == 0) || (lVar5 = *(long *)(*plStack_168 + 0x10), lVar5 == 0))
    goto code_r0x014df4c0;
    puVar7 = (undefined8 *)0x3d57570;
    break;
  case 3:
    if ((*plStack_168 == 0) || (lVar5 = *(long *)(*plStack_168 + 0x10), lVar5 == 0))
    goto code_r0x014df4c0;
    puVar7 = (undefined8 *)0x3d57520;
    break;
  case 4:
    if ((*plStack_168 == 0) || (lVar5 = *(long *)(*plStack_168 + 0x10), lVar5 == 0))
    goto code_r0x014df4c0;
    puVar7 = (undefined8 *)0x3d575c0;
    break;
  case 5:
    if ((*plStack_168 == 0) || (lVar5 = *(long *)(*plStack_168 + 0x10), lVar5 == 0))
    goto code_r0x014df4c0;
    puVar7 = (undefined8 *)0x3d57538;
    break;
  default:
    bVar16 = true;
    goto code_r0x014de4b8;
  }
  /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar5,alStack_78,*puVar7);
  bVar16 = false;
code_r0x014de4b8:
  lVar5 = func_0x00f78aec(/*System.Collections.Generic.List<DefinitionID>_TypeInfo*/ uRam0000000003d1d930);
  /*System.Collections.Generic.List<DefinitionID>$$.ctor*/ func_0x023c5214(lVar5,0x20,uRam0000000003d3a4a0);
  if (((bVar16) || (alStack_78[0] == 0)) ||
     (iVar2 = /*System.Collections.ObjectModel.ReadOnlyCollection<VolumeParameter>$$get_Count*/ func_0x027bcb60(alStack_78[0],uRam0000000003d3fe48), iVar2 < 1)) {
    return lVar5;
  }
  if (alStack_78[0] != 0) {
    plStack_170 = param_3;
    plVar6 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(alStack_78[0],uRam0000000003d3fe40);
    if (plVar6 != (long *)0x0) {
      do {
        lVar10 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
              goto code_r0x014de57c;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014de57c:
        uVar14 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar14 & 1) == 0) {
          lVar11 = 0;
          lVar20 = 0;
          lVar10 = 1;
          aiStack_108[0] = 0x2f2;
          iStack_f4 = 1;
          if (plVar6 == (long *)0x0) goto code_r0x014ded88;
code_r0x014ded20:
          lVar12 = *plVar6;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                goto code_r0x014ded7c;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014ded7c:
          (*(code *)*puVar7)(plVar6,puVar7[1]);
code_r0x014ded88:
          if (lVar20 != 0) goto code_r0x014df6b0;
          if ((int)lVar11 == 0) {
            lVar11 = lVar10 + -1;
            if (aiStack_108[lVar11] == 0x2f2) {
              iStack_f4 = (int)lVar11;
              lVar10 = lVar11;
            }
          }
          else {
            lVar10 = 0;
          }
          if (lVar5 == 0) goto code_r0x014df4c0;
          iVar2 = (int)lVar10;
          if (0 < *(int *)(lVar5 + 0x18)) goto code_r0x014dedc8;
          if (alStack_78[0] == 0) goto code_r0x014df4c0;
          plVar6 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(alStack_78[0],uRam0000000003d3fe40);
          if (plVar6 != (long *)0x0) {
            do {
              lVar11 = *plVar6;
              uVar19 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar19 != 0) {
                piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                    puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                    goto code_r0x014deeb0;
                  }
                  piVar15 = piVar15 + 4;
                  uVar19 = uVar19 - 1;
                } while (uVar19 != 0);
              }
              puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014deeb0:
              uVar19 = (*(code *)*puVar7)(plVar6,puVar7[1]);
              if ((uVar19 & 1) == 0) goto code_r0x014df460;
              lVar11 = *plVar6;
              uVar19 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar19 != 0) {
                piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                    puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                    goto code_r0x014def0c;
                  }
                  piVar15 = piVar15 + 4;
                  uVar19 = uVar19 - 1;
                } while (uVar19 != 0);
              }
              puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x014def0c:
              plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
              if (plVar8 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x014df588;
              }
              lVar11 = *plVar8;
              uVar19 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar19 != 0) {
                piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                    puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                    goto code_r0x014def6c;
                  }
                  piVar15 = piVar15 + 4;
                  uVar19 = uVar19 - 1;
                } while (uVar19 != 0);
              }
              puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x014def6c:
              uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
              /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar5,uVar9,uRam0000000003d3a4a8);
            } while( true );
          }
          func_0x00f78af4();
          goto code_r0x014df588;
        }
        lVar10 = func_0x00f78aec(/*Atlas.RandomLoadoutHelpers.<>c__DisplayClass4_0_TypeInfo*/ uRam0000000003d287e0);
        /*Atlas.RandomLoadoutHelpers.<>c__DisplayClass4_0$$.ctor*/ func_0x01563e14(lVar10,0);
        lVar11 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto code_r0x014de5fc;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x014de5fc:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (lVar10 == 0) {
          func_0x00f78af4();
          goto code_r0x014df588;
        }
        *(long **)(lVar10 + 0x10) = plVar8;
        switch(uVar19) {
        case 0:
          lVar11 = *param_4;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar14 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0,0);
          if ((uVar14 & 1) == 0) {
code_r0x014dea14:
            iVar2 = -1;
          }
          else {
            if (*param_4 == 0) {
              func_0x00f78af4();
              goto code_r0x014df588;
            }
            uVar17 = *(undefined8 *)(*param_4 + 0x20);
            uVar9 = func_0x00f78aec(/*System.Predicate<LoadoutSetDefinition.LoadoutConfigSet>_TypeInfo*/ uRam0000000003d1e650);
            /*System.Predicate<LoadoutSetDefinition.LoadoutConfigSet>$$.ctor*/ func_0x02720210(uVar9,lVar10,uRam0000000003d63aa0,uRam0000000003d3f4e8);
            iVar2 = /*System.Array$$FindIndex<LoadoutSetDefinition.LoadoutConfigSet>*/ func_0x017243f4(uVar17,uVar9,uRam0000000003d43848);
          }
          break;
        case 1:
          lVar11 = *param_4;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar14 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0,0);
          if ((uVar14 & 1) == 0) {
            iVar2 = -1;
          }
          else {
            if (*param_4 == 0) {
              func_0x00f78af4();
              goto code_r0x014df588;
            }
            uVar17 = *(undefined8 *)(*param_4 + 0x20);
            uVar9 = func_0x00f78aec(/*System.Predicate<LoadoutSetDefinition.LoadoutConfigSet>_TypeInfo*/ uRam0000000003d1e650);
            /*System.Predicate<LoadoutSetDefinition.LoadoutConfigSet>$$.ctor*/ func_0x02720210(uVar9,lVar10,uRam0000000003d63aa8,uRam0000000003d3f4e8);
            iVar2 = /*System.Array$$FindIndex<LoadoutSetDefinition.LoadoutConfigSet>*/ func_0x017243f4(uVar17,uVar9,uRam0000000003d43848);
          }
          if ((lStack_160 != 0) && (iVar2 < 0)) {
            uVar9 = func_0x00f78aec(/*System.Predicate<KartLoadout>_TypeInfo*/ uRam0000000003d1e580);
            /*System.Predicate<KartLoadout>$$.ctor*/ func_0x02705798(uVar9,lVar10,uRam0000000003d63ab0,uRam0000000003d3f410);
            iVar2 = /*System.Collections.Generic.List<KartLoadout>$$FindIndex*/ func_0x023ef544(lStack_160,uVar9,uRam0000000003d3ae60);
          }
          break;
        case 2:
          lVar11 = *param_4;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar14 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0,0);
          if ((uVar14 & 1) == 0) {
            iVar2 = -1;
          }
          else {
            if (*param_4 == 0) {
              func_0x00f78af4();
              goto code_r0x014df588;
            }
            uVar17 = *(undefined8 *)(*param_4 + 0x20);
            uVar9 = func_0x00f78aec(/*System.Predicate<LoadoutSetDefinition.LoadoutConfigSet>_TypeInfo*/ uRam0000000003d1e650);
            /*System.Predicate<LoadoutSetDefinition.LoadoutConfigSet>$$.ctor*/ func_0x02720210(uVar9,lVar10,uRam0000000003d63ab8,uRam0000000003d3f4e8);
            iVar2 = /*System.Array$$FindIndex<LoadoutSetDefinition.LoadoutConfigSet>*/ func_0x017243f4(uVar17,uVar9,uRam0000000003d43848);
          }
          if ((lStack_160 != 0) && (iVar2 < 0)) {
            uVar9 = func_0x00f78aec(/*System.Predicate<KartLoadout>_TypeInfo*/ uRam0000000003d1e580);
            /*System.Predicate<KartLoadout>$$.ctor*/ func_0x02705798(uVar9,lVar10,uRam0000000003d63ac0,uRam0000000003d3f410);
            iVar2 = /*System.Collections.Generic.List<KartLoadout>$$FindIndex*/ func_0x023ef544(lStack_160,uVar9,uRam0000000003d3ae60);
          }
          break;
        case 3:
          lVar11 = *param_4;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar14 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0,0);
          if ((uVar14 & 1) == 0) {
            iVar2 = -1;
          }
          else {
            if (*param_4 == 0) {
              func_0x00f78af4();
              goto code_r0x014df588;
            }
            uVar17 = *(undefined8 *)(*param_4 + 0x20);
            uVar9 = func_0x00f78aec(/*System.Predicate<LoadoutSetDefinition.LoadoutConfigSet>_TypeInfo*/ uRam0000000003d1e650);
            /*System.Predicate<LoadoutSetDefinition.LoadoutConfigSet>$$.ctor*/ func_0x02720210(uVar9,lVar10,uRam0000000003d63ac8,uRam0000000003d3f4e8);
            iVar2 = /*System.Array$$FindIndex<LoadoutSetDefinition.LoadoutConfigSet>*/ func_0x017243f4(uVar17,uVar9,uRam0000000003d43848);
          }
          if ((lStack_160 != 0) && (iVar2 < 0)) {
            uVar9 = func_0x00f78aec(/*System.Predicate<KartLoadout>_TypeInfo*/ uRam0000000003d1e580);
            /*System.Predicate<KartLoadout>$$.ctor*/ func_0x02705798(uVar9,lVar10,uRam0000000003d63ad0,uRam0000000003d3f410);
            iVar2 = /*System.Collections.Generic.List<KartLoadout>$$FindIndex*/ func_0x023ef544(lStack_160,uVar9,uRam0000000003d3ae60);
          }
          break;
        case 4:
          lVar11 = *param_4;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar14 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0,0);
          if ((uVar14 & 1) == 0) {
            iVar2 = -1;
          }
          else {
            if (*param_4 == 0) {
              func_0x00f78af4();
              goto code_r0x014df588;
            }
            uVar17 = *(undefined8 *)(*param_4 + 0x20);
            uVar9 = func_0x00f78aec(/*System.Predicate<LoadoutSetDefinition.LoadoutConfigSet>_TypeInfo*/ uRam0000000003d1e650);
            /*System.Predicate<LoadoutSetDefinition.LoadoutConfigSet>$$.ctor*/ func_0x02720210(uVar9,lVar10,uRam0000000003d63ad8,uRam0000000003d3f4e8);
            iVar2 = /*System.Array$$FindIndex<LoadoutSetDefinition.LoadoutConfigSet>*/ func_0x017243f4(uVar17,uVar9,uRam0000000003d43848);
          }
          if ((lStack_160 != 0) && (iVar2 < 0)) {
            uVar9 = func_0x00f78aec(/*System.Predicate<KartLoadout>_TypeInfo*/ uRam0000000003d1e580);
            /*System.Predicate<KartLoadout>$$.ctor*/ func_0x02705798(uVar9,lVar10,uRam0000000003d63ae0,uRam0000000003d3f410);
            iVar2 = /*System.Collections.Generic.List<KartLoadout>$$FindIndex*/ func_0x023ef544(lStack_160,uVar9,uRam0000000003d3ae60);
          }
          plVar8 = *(long **)(lVar10 + 0x10);
          if (plVar8 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014df588;
          }
          if ((*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300)) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8
                       + -8) != /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) {
            func_0x00f78e5c();
            goto code_r0x014df588;
          }
          if ((char)plVar8[0xe] != '\0') {
            iVar2 = 0;
          }
          break;
        case 5:
          lVar11 = *param_4;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar14 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0,0);
          if ((uVar14 & 1) == 0) goto code_r0x014dea14;
          if (*param_4 == 0) {
            func_0x00f78af4();
          }
          else {
            uVar17 = *(undefined8 *)(*param_4 + 0x20);
            uVar9 = func_0x00f78aec(/*System.Predicate<LoadoutSetDefinition.LoadoutConfigSet>_TypeInfo*/ uRam0000000003d1e650);
            /*System.Predicate<LoadoutSetDefinition.LoadoutConfigSet>$$.ctor*/ func_0x02720210(uVar9,lVar10,uRam0000000003d63ae8,uRam0000000003d3f4e8);
            iVar2 = /*System.Array$$FindIndex<LoadoutSetDefinition.LoadoutConfigSet>*/ func_0x017243f4(uVar17,uVar9,uRam0000000003d43848);
            plVar8 = *(long **)(lVar10 + 0x10);
            if (plVar8 == (long *)0x0) {
              func_0x00f78af4();
            }
            else {
              lVar20 = *plStack_170;
              lVar11 = *plVar8;
              uVar14 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                    puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                    goto code_r0x014decd0;
                  }
                  piVar15 = piVar15 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x014decd0:
              uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
              if (lVar20 != 0) {
                iVar3 = Atlas_Stats_UnlockManager__IsUnlocked(lVar20,uVar9,0);
                if (iVar3 == 0) {
                  iVar2 = 0;
                }
                if ((uint)param_5 < 6) break;
                goto code_r0x014dec38;
              }
              func_0x00f78af4(uVar9,uVar9);
            }
          }
          goto code_r0x014df588;
        default:
          goto code_r0x014dec40;
        }
        if (*param_2 == 0) {
          func_0x00f78af4();
          goto code_r0x014df588;
        }
        plVar8 = *(long **)(lVar10 + 0x10);
        if (plVar8 != (long *)0x0) {
          lVar11 = /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98;
          if ((*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300)) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8
                       + -8) != /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98)) goto code_r0x014df4c4;
        }
        uVar14 = Atlas_Stats_SeasonsManager__IsContentAvailable(*param_2,plVar8,0);
        if ((uVar14 & 1) != 0) {
code_r0x014dec38:
          if (iVar2 < 0) {
            plVar8 = *(long **)(lVar10 + 0x10);
code_r0x014dec40:
            if (plVar8 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014df588;
            }
            lVar10 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                  puVar7 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                  goto code_r0x014dec98;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x014dec98:
            uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
            if (lVar5 == 0) {
              func_0x00f78af4(uVar9,uVar9);
              goto code_r0x014df588;
            }
            /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar5,uVar9,uRam0000000003d3a4a8);
          }
        }
      } while( true );
    }
    func_0x00f78af4();
    goto code_r0x014df588;
  }
  goto code_r0x014df4c0;
code_r0x014df460:
  aiStack_108[(int)lVar10] = 0x32d;
  iVar3 = iStack_f4;
  iVar2 = iStack_f4 + 1;
  iStack_f4 = iVar2;
  if (plVar6 != (long *)0x0) {
    func_0x0001cfec(0,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,plVar6);
  }
  if ((iVar2 != 0) && (aiStack_108[iVar3] == 0x32d)) {
    iVar2 = iVar3;
    iStack_f4 = iVar3;
  }
code_r0x014dedc8:
  if (((*(ushort *)(/*Core.Extensions.ListExtensions_TypeInfo*/ lRam0000000003d22ff0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Extensions.ListExtensions_TypeInfo*/ lRam0000000003d22ff0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*Core.Extensions.ListExtensions$$Shuffle<DefinitionID>*/ func_0x01874140(lVar5,uRam0000000003d5a090);
  if ((int)param_5 != 0) {
    return lVar5;
  }
  param_5 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(param_5,0x14,uRam0000000003d3bf98);
  if (lStack_160 == 0) goto code_r0x014df4c0;
  uVar9 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  /*System.Collections.Generic.List<KartLoadout>$$GetEnumerator*/ func_0x023ef80c(&uStack_158,lStack_160,uRam0000000003d3ae68);
  uStack_a8 = uStack_130;
  uStack_b0 = uStack_138;
  uStack_98 = uStack_120;
  uStack_a0 = uStack_128;
  uStack_88 = uStack_110;
  uStack_90 = uStack_118;
  uStack_c8 = uStack_150;
  uStack_d0 = uStack_158;
  uStack_b8 = uStack_140;
  lStack_c0 = lStack_148;
  while (uVar19 = /*System.Collections.Generic.List.Enumerator<KartLoadout>$$MoveNext*/ func_0x01f6ac90(&uStack_d0,uRam0000000003d328e8), lVar10 = lStack_c0,
        (uVar19 & 1) != 0) {
    lStack_d8 = lStack_c0;
    uVar19 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&lStack_d8,0);
    if ((uVar19 & 1) != 0) {
      if (*plStack_168 == 0) {
        func_0x00f78af4();
        goto code_r0x014df588;
      }
      lVar11 = *(long *)(*plStack_168 + 0x10);
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x014df588;
      }
      lVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,lVar10,uRam0000000003d57270);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar19 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
      if ((uVar19 & 1) != 0) {
        if (lVar10 == 0) {
          func_0x00f78af4();
          goto code_r0x014df588;
        }
        iVar3 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar10 + 0x70),0);
        lVar11 = 0x18;
        if (iVar3 == 0) {
          lVar11 = 0x70;
        }
        uVar9 = *(undefined8 *)(lVar10 + lVar11);
      }
      uVar19 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar9,0);
      if ((uVar19 & 1) == 0) {
        if (param_5 == 0) {
          func_0x00f78af4();
          goto code_r0x014df588;
        }
        uVar19 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(param_5,uVar9,uRam0000000003d3bfc0);
        if ((uVar19 & 1) == 0) {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(param_5,uVar9,uRam0000000003d3bfa0);
        }
      }
    }
  }
  aiStack_108[iVar2] = 0x3fa;
  iVar3 = iStack_f4;
  iVar2 = iStack_f4 + 1;
  iStack_f4 = iVar2;
  /*System.Collections.Generic.List.Enumerator<KartLoadout>$$Dispose*/ func_0x01f6ac8c(&uStack_d0,uRam0000000003d328e0);
  if ((iVar2 != 0) && (aiStack_108[iVar3] == 0x3fa)) {
    iVar2 = iVar3;
    iStack_f4 = iVar3;
  }
  lVar11 = *param_4;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0,0);
  if (iVar3 != 0) {
    if ((*param_4 == 0) || (plVar6 = *(long **)(*param_4 + 0x20), plVar6 == (long *)0x0))
    goto code_r0x014df4c0;
    if (0 < (int)plVar6[3]) {
      uVar14 = 0;
      uVar13 = plVar6[3] & 0xffffffff;
      plVar8 = plVar6 + 4;
      uVar19 = 0x70;
      while (uVar14 < uVar13) {
        lVar11 = *plVar8;
        lStack_d8 = lVar11;
        iVar3 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&lStack_d8,0);
        if (iVar3 != 0) {
          if ((*plStack_168 == 0) || (lVar10 = *(long *)(*plStack_168 + 0x10), lVar10 == 0))
          goto code_r0x014df4c0;
          param_4 = (long *)**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
          lVar11 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,lVar11,uRam0000000003d57270);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0,0);
          if (iVar3 != 0) {
            if (lVar11 == 0) goto code_r0x014df4c0;
            iVar3 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar11 + 0x70),0);
            lVar10 = 0x18;
            if (iVar3 == 0) {
              lVar10 = 0x70;
            }
            param_4 = *(long **)(lVar11 + lVar10);
          }
          uVar13 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_4,0);
          if ((uVar13 & 1) == 0) {
            if (param_5 == 0) goto code_r0x014df4c0;
            uVar13 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(param_5,param_4,uRam0000000003d3bfc0);
            if ((uVar13 & 1) == 0) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(param_5,param_4,uRam0000000003d3bfa0);
            }
          }
        }
        uVar14 = uVar14 + 1;
        uVar13 = (ulong)*(uint *)(plVar6 + 3);
        plVar8 = plVar8 + 0xd;
        if ((long)(int)*(uint *)(plVar6 + 3) <= (long)uVar14) goto code_r0x014df2c8;
      }
      lVar20 = func_0x00f78b24();
code_r0x014df6b0:
      func_0x00f78ac0(lVar20,0);
      if (extraout_w1 != 1) {
        auVar21 = __Unwind_Resume();
        lVar10 = auVar21._0_8_;
        puStack_178 = &Atlas_RandomPoolByDefinitionID___ctor;
        plStack_1b0 = plVar6;
        uStack_1a8 = param_5;
        uStack_1a0 = uVar19;
        lStack_198 = lVar5;
        plStack_190 = param_4;
        lStack_188 = lVar11;
        puStack_180 = &stack0xfffffffffffffff0;
        if ((bRam0000000003eb4bd4 & 1) == 0) {
          func_0x00f78a20(0x3d2e360);
          func_0x00f78a20(0x3d33c98);
          func_0x00f78a20(0x3d33ca0);
          func_0x00f78a20(0x3d33ca8);
          func_0x00f78a20(0x3d39200);
          func_0x00f78a20(0x3d3a4a8);
          func_0x00f78a20(0x3d3a498);
          func_0x00f78a20(0x3d1d930);
          bRam0000000003eb4bd4 = 1;
        }
        uStack_1c0 = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        /*System.Object$$.ctor*/ func_0x0294d018(lVar10,0);
        *(long *)(lVar10 + 0x10) = auVar21._8_8_;
        *(undefined4 *)(lVar10 + 0x20) = 0;
        uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<DefinitionID>_TypeInfo*/ uRam0000000003d1d930);
        /*System.Collections.Generic.List<DefinitionID>$$.ctor*/ func_0x023c5148(uVar9,uRam0000000003d3a498);
        *(undefined8 *)(lVar10 + 0x18) = uVar9;
        lVar5 = 0;
        if (*(long *)(lVar10 + 0x10) != 0) {
          /*System.Collections.Generic.Dictionary<DefinitionID, RandomDefinitionIDPool>$$GetEnumerator*/ func_0x01e3c660(&uStack_1e0,*(long *)(lVar10 + 0x10),uRam0000000003d2e360);
          while (uVar19 = /*System.Collections.Generic.Dictionary.Enumerator<DefinitionID, RandomDefinitionIDPool>$$MoveNext*/ func_0x01fbbed4(&uStack_1e0,uRam0000000003d33ca0), (uVar19 & 1) != 0) {
            if (*(long *)(lVar10 + 0x18) == 0) {
              func_0x00f78af4();
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x14df888);
              (*pcVar1)();
            }
            /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(*(long *)(lVar10 + 0x18),uStack_1d0,uRam0000000003d3a4a8);
          }
          lVar5 = /*System.Collections.Generic.Dictionary.Enumerator<DefinitionID, RandomDefinitionIDPool>$$Dispose*/ func_0x01fbc04c(&uStack_1e0,uRam0000000003d33c98);
        }
        return lVar5;
      }
      plVar8 = (long *)___cxa_begin_catch();
      lVar20 = *plVar8;
      ___cxa_end_catch();
      lVar10 = 0;
      lVar11 = 1;
      if (plVar6 != (long *)0x0) goto code_r0x014ded20;
      goto code_r0x014ded88;
    }
  }
code_r0x014df2c8:
  uVar4 = *(uint *)(lVar5 + 0x18);
  if ((int)uVar4 < 1) {
    return lVar5;
  }
  uVar18 = 0;
code_r0x014df2f0:
  if (uVar4 <= uVar18) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  if (((*plStack_168 == 0) || (lVar10 = *(long *)(*plStack_168 + 0x10), lVar10 == 0)) ||
     (lVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,*(undefined8 *)
                                       (*(long *)(lVar5 + 0x10) + (long)(int)uVar18 * 8 + 0x20),
                               uRam0000000003d57270), lVar10 == 0)) goto code_r0x014df4c0;
  iVar3 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar10 + 0x70),0);
  lVar11 = 0x18;
  if (iVar3 == 0) {
    lVar11 = 0x70;
  }
  if (param_5 == 0) goto code_r0x014df4c0;
  uVar9 = *(undefined8 *)(lVar10 + lVar11);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_158,param_5,uRam0000000003d3bfd0);
  uStack_e8 = uStack_150;
  uStack_f0 = uStack_158;
  lStack_e0 = lStack_148;
  do {
    uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_f0,uRam0000000003d32f88);
    if ((uVar4 & 1) == 0) break;
    uVar19 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar9,lStack_e0,0);
  } while ((uVar19 & 1) == 0);
  aiStack_108[iVar2] = 0x553;
  iVar3 = iStack_f4;
  iVar2 = iStack_f4 + 1;
  iStack_f4 = iVar2;
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_f0,uRam0000000003d32f80);
  if ((iVar2 != 0) && (aiStack_108[iVar3] == 0x553)) {
    iVar2 = iVar3;
    iStack_f4 = iVar3;
  }
  if (uVar4 == 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(param_5,uVar9,uRam0000000003d3bfa0);
  }
  else {
    /*System.Collections.Generic.List<DefinitionID>$$RemoveAt*/ func_0x023c75fc(lVar5,uVar18,uRam0000000003d3a4c0);
    uVar18 = uVar18 - 1;
  }
  uVar18 = uVar18 + 1;
  uVar4 = *(uint *)(lVar5 + 0x18);
  if ((int)uVar4 <= (int)uVar18) {
    return lVar5;
  }
  goto code_r0x014df2f0;
}



// ============================================================
// RVA: 0x14df8c4 | Atlas.RandomLoadoutHelpers.CharacterDefinitionFromLoadoutHelper
// ============================================================

/* WARNING: Possible PIC construction at 0x014dfad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014dff44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014dfb0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014dfadc) */

undefined8
Atlas_RandomLoadoutHelpers__CharacterDefinitionFromLoadoutHelper
          (ulong param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  int extraout_w1;
  undefined8 *puVar13;
  long lVar14;
  ulong unaff_x22;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  ulong unaff_x27;
  char *unaff_x28;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_120 [8];
  undefined8 *puStack_118;
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
  undefined8 auStack_70 [2];
  
  puVar8 = auStack_120;
  puVar7 = auStack_120;
  puVar17 = &stack0xfffffffffffffff0;
  lVar14 = 0x3eb4000;
  if ((bRam0000000003eb4bd1 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d328e0);
    func_0x00f78a20(0x3d328e8);
    func_0x00f78a20(0x3d328f0);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3ae68);
    bRam0000000003eb4bd1 = 1;
  }
  auStack_70[0] = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  iVar9 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(param_2,0);
  puVar13 = param_2;
  if (iVar9 == 0) {
LAB_014dfac4:
    puVar16 = param_3;
    if (*(char *)((long)param_2 + 9) == '\0') {
      if (*(char *)(param_2 + 1) == '\0') goto LAB_014dfaf4;
      if (param_3 != (undefined8 *)0x0) {
        puVar18 = &LAB_014dfb10;
        goto code_r0x014dfc7c;
      }
    }
    else if (param_3 != (undefined8 *)0x0) {
      auVar19._8_8_ = param_2[2];
      auVar19._0_8_ = param_3;
      puVar18 = (undefined *)0x14dfadc;
      puVar7 = auStack_120;
      goto code_r0x014dfb9c;
    }
  }
  else {
    puVar16 = param_3;
    if ((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
      unaff_x25 = 0x3d57270;
      uVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(*(long *)(param_1 + 0x10),*param_2,uRam0000000003d57270);
      if (uVar10 != 0) {
        auStack_70[0] = *(undefined8 *)(uVar10 + 0x70);
        puStack_118 = param_3;
        iVar9 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(auStack_70,0);
        lVar11 = 0x70;
        if (iVar9 == 0) {
          lVar11 = 0x18;
        }
        unaff_x22 = uVar10;
        if (param_4 != 0) {
          unaff_x22 = *(ulong *)(uVar10 + lVar11);
          /*System.Collections.Generic.List<KartLoadout>$$GetEnumerator*/ func_0x023ef80c(&uStack_110,param_4,uRam0000000003d3ae68);
          uStack_98 = uStack_e8;
          uStack_a0 = uStack_f0;
          uStack_88 = uStack_d8;
          uStack_90 = uStack_e0;
          uStack_78 = uStack_c8;
          uStack_80 = uStack_d0;
          uStack_b8 = uStack_108;
          uStack_c0 = uStack_110;
          uStack_a8 = uStack_f8;
          uStack_b0 = uStack_100;
          unaff_x26 = 0x3d328e8;
          unaff_x27 = 0x18;
          unaff_x28 = section_00000068.sectname + 8;
          lVar14 = 0x3d21270;
          do {
            do {
              param_4 = /*System.Collections.Generic.List.Enumerator<KartLoadout>$$MoveNext*/ func_0x01f6ac90(&uStack_c0,uRam0000000003d328e8);
              uVar15 = uStack_b0;
              if ((param_4 & 1) == 0) {
                /*System.Collections.Generic.List.Enumerator<KartLoadout>$$Dispose*/ func_0x01f6ac8c(&uStack_c0,uRam0000000003d328e0);
                goto LAB_014dfaf4;
              }
              auStack_70[0] = uStack_b0;
              uVar10 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(auStack_70,0);
            } while ((uVar10 & 1) == 0);
            if (*(long *)(param_1 + 0x10) == 0) {
              func_0x00f78af4();
code_r0x014dfb3c:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x14dfb40);
              (*pcVar6)();
            }
            lVar11 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(*(long *)(param_1 + 0x10),uVar15,uRam0000000003d57270);
            if (lVar11 == 0) {
              func_0x00f78af4();
              goto code_r0x014dfb3c;
            }
            auStack_70[0] = *(undefined8 *)(lVar11 + 0x70);
            iVar9 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(auStack_70,0);
            lVar2 = 0x70;
            if (iVar9 == 0) {
              lVar2 = 0x18;
            }
            uVar15 = *(undefined8 *)(lVar11 + lVar2);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar10 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(unaff_x22,uVar15,0);
          } while ((uVar10 & 1) == 0);
          /*System.Collections.Generic.List.Enumerator<KartLoadout>$$Dispose*/ func_0x01f6ac8c(&uStack_c0,uRam0000000003d328e0);
          param_3 = puStack_118;
          if ((param_4 & 1) == 0) goto LAB_014dfaf4;
          goto LAB_014dfac4;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar12 = (long *)___cxa_begin_catch();
    lVar14 = *plVar12;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<KartLoadout>$$Dispose*/ func_0x01f6ac8c(&uStack_c0,uRam0000000003d328e0);
    if (lVar14 == 0) {
LAB_014dfaf4:
      return *param_2;
    }
    func_0x00f78ac0(lVar14,0);
  }
  puVar18 = &Atlas_RandomPoolByDefinitionID__GetNextDefinitionIDFromPoolByKey;
  auVar19 = __Unwind_Resume();
code_r0x014dfb9c:
  do {
    param_2 = auVar19._8_8_;
    lVar11 = auVar19._0_8_;
    puVar8 = puVar7 + -0x30;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(ulong *)(puVar7 + -0x28) = param_1;
    *(long *)(puVar7 + -0x20) = lVar14;
    *(undefined8 **)(puVar7 + -0x18) = puVar13;
    *(undefined1 **)(puVar7 + -0x10) = puVar17;
    *(undefined **)(puVar7 + -8) = puVar18;
    puVar17 = puVar7 + -0x10;
    param_1 = 0x3eb4000;
    if ((bRam0000000003eb4bd5 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d2e358);
      func_0x00f78a20(0x3d2e368);
      bRam0000000003eb4bd5 = 1;
    }
    if ((*(long *)(lVar11 + 0x10) == 0) ||
       (uVar10 = /*System.Collections.Generic.Dictionary<DefinitionID, RandomDefinitionIDPool>$$ContainsKey*/ func_0x01e3c30c(*(long *)(lVar11 + 0x10),param_2,uRam0000000003d2e358),
       (uVar10 & 1) == 0)) {
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
    }
    if ((*(long *)(lVar11 + 0x10) != 0) &&
       (lVar14 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(lVar11 + 0x10),param_2,uRam0000000003d2e368), lVar14 != 0
       )) {
      *(undefined8 *)(puVar7 + -0x20) = *(undefined8 *)(puVar7 + -0x20);
      *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar7 + -0x18);
      *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
      *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
      if ((bRam0000000003eb4bcd & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d3a4c8);
        func_0x00f78a20(0x3d3a4d0);
        bRam0000000003eb4bcd = 1;
      }
      if ((bRam0000000003eb4bcc & 1) == 0) {
        func_0x00f78a20(0x3d3a4c8);
        bRam0000000003eb4bcc = 1;
      }
      lVar11 = *(long *)(lVar14 + 0x10);
      if ((lVar11 == 0) || (uVar3 = *(uint *)(lVar11 + 0x18), (int)uVar3 < 1)) {
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar13 = *(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
      }
      else {
        iVar9 = *(int *)(lVar14 + 0x18);
        *(int *)(lVar14 + 0x18) = iVar9 + 1;
        iVar5 = 0;
        if (uVar3 != 0) {
          iVar5 = iVar9 / (int)uVar3;
        }
        uVar4 = iVar9 - iVar5 * uVar3;
        if (uVar3 <= uVar4) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        puVar13 = (undefined8 *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar4 * 8 + 0x20);
      }
      return *puVar13;
    }
    puVar18 = &Atlas_RandomPoolByDefinitionID__GetNextRandomDefinitionID;
    param_3 = (undefined8 *)func_0x00f78af4();
    lVar14 = lVar11;
code_r0x014dfc7c:
    puVar7 = puVar8 + -0xc0;
    *(char **)(puVar8 + -0x60) = unaff_x28;
    *(ulong *)(puVar8 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar8 + -0x48) = unaff_x25;
    *(undefined8 **)(puVar8 + -0x40) = puVar16;
    *(ulong *)(puVar8 + -0x38) = param_4;
    *(ulong *)(puVar8 + -0x30) = unaff_x22;
    *(ulong *)(puVar8 + -0x28) = param_1;
    *(long *)(puVar8 + -0x20) = lVar14;
    *(undefined8 **)(puVar8 + -0x18) = param_2;
    *(undefined1 **)(puVar8 + -0x10) = puVar17;
    *(undefined **)(puVar8 + -8) = puVar18;
    puVar17 = puVar8 + -0x10;
    if ((bRam0000000003eb4bd6 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d2e360);
      func_0x00f78a20(0x3d2e368);
      func_0x00f78a20(0x3d33c98);
      func_0x00f78a20(0x3d33ca0);
      func_0x00f78a20(0x3d33ca8);
      func_0x00f78a20(0x3d39208);
      func_0x00f78a20(0x3d3a4c8);
      func_0x00f78a20(0x3d3a4d0);
      bRam0000000003eb4bd6 = 1;
    }
    *(undefined8 *)(puVar8 + -0x70) = 0;
    *(undefined8 *)(puVar8 + -0x88) = 0;
    *(undefined8 *)(puVar8 + -0x90) = 0;
    *(undefined8 *)(puVar8 + -0x78) = 0;
    *(undefined8 *)(puVar8 + -0x80) = 0;
    *(undefined4 *)(puVar8 + -0x94) = 0;
    param_1 = param_3[3];
    if (((param_1 == 0) || (uVar3 = *(uint *)(param_1 + 0x18), (int)uVar3 < 1)) ||
       (lVar11 = param_3[2], lVar11 == 0)) {
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
    }
    iVar9 = *(int *)(param_3 + 4);
    *(int *)(param_3 + 4) = iVar9 + 1;
    iVar5 = 0;
    if (uVar3 != 0) {
      iVar5 = iVar9 / (int)uVar3;
    }
    uVar4 = iVar9 - iVar5 * uVar3;
    if (uVar3 <= uVar4) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      lVar11 = param_3[2];
      if (lVar11 == 0) {
code_r0x014dff68:
        func_0x00f78af4();
code_r0x014dff6c:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x14dff70);
        (*pcVar6)();
      }
    }
    lVar14 = *(long *)(*(long *)(param_1 + 0x10) + (long)(int)uVar4 * 8 + 0x20);
    param_4 = 0x3d2e368;
    lVar11 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(lVar11,lVar14,uRam0000000003d2e368);
    if (lVar11 == 0) goto code_r0x014dff68;
    iVar9 = Atlas_RandomDefinitionIDPool__IsIndexLooped();
    if (iVar9 != 0) {
      unaff_x22 = 0;
      unaff_x27 = 0;
      puVar16 = (undefined8 *)0x0;
      unaff_x28 = puVar8 + -0x98;
      do {
        while( true ) {
          lVar14 = param_3[3];
          iVar9 = *(int *)(param_3 + 4);
          *(int *)(param_3 + 4) = iVar9 + 1;
          if (lVar14 == 0) goto code_r0x014dff68;
          uVar3 = *(uint *)(lVar14 + 0x18);
          iVar5 = 0;
          if (uVar3 != 0) {
            iVar5 = iVar9 / (int)uVar3;
          }
          uVar4 = iVar9 - iVar5 * uVar3;
          if (uVar3 <= uVar4) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (param_3[2] == 0) goto code_r0x014dff68;
          lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + (long)(int)uVar4 * 8 + 0x20);
          lVar11 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(param_3[2],lVar14,uRam0000000003d2e368);
          if (lVar11 == 0) goto code_r0x014dff68;
          param_1 = Atlas_RandomDefinitionIDPool__IsIndexLooped();
          if (param_3[3] == 0) goto code_r0x014dff68;
          uVar3 = (int)puVar16 + 1;
          puVar16 = (undefined8 *)(ulong)uVar3;
          unaff_x25 = 0x3d33c98;
          unaff_x26 = 0x3d33ca0;
          if (*(int *)(param_3[3] + 0x18) <= (int)uVar3) break;
code_r0x014dfec4:
          if ((param_1 & 1) == 0) goto code_r0x014dff3c;
        }
        if (param_3[2] == 0) goto code_r0x014dff68;
        /*System.Collections.Generic.Dictionary<DefinitionID, RandomDefinitionIDPool>$$GetEnumerator*/ func_0x01e3c660(puVar8 + -0xc0,param_3[2],uRam0000000003d2e360);
        *(undefined8 *)(puVar8 + -0x88) = *(undefined8 *)(puVar8 + -0xb8);
        *(undefined8 *)(puVar8 + -0x90) = *(undefined8 *)(puVar8 + -0xc0);
        *(undefined8 *)(puVar8 + -0x78) = *(undefined8 *)(puVar8 + -0xa8);
        *(undefined8 *)(puVar8 + -0x80) = *(undefined8 *)(puVar8 + -0xb0);
        *(undefined8 *)(puVar8 + -0x70) = *(undefined8 *)(puVar8 + -0xa0);
        while (uVar10 = /*System.Collections.Generic.Dictionary.Enumerator<DefinitionID, RandomDefinitionIDPool>$$MoveNext*/ func_0x01fbbed4(puVar8 + -0x90,uRam0000000003d33ca0), (uVar10 & 1) != 0) {
          if (*(long *)(puVar8 + -0x78) == 0) {
            func_0x00f78af4();
            goto code_r0x014dff6c;
          }
          *(undefined4 *)(*(long *)(puVar8 + -0x78) + 0x18) = 0;
        }
        pcVar1 = unaff_x28 + (long)(int)unaff_x27 * 4;
        pcVar1[0] = -4;
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        iVar9 = *(int *)(puVar8 + -0x94);
        uVar3 = iVar9 + 1;
        unaff_x22 = (ulong)uVar3;
        *(uint *)(puVar8 + -0x94) = uVar3;
        /*System.Collections.Generic.Dictionary.Enumerator<DefinitionID, RandomDefinitionIDPool>$$Dispose*/ func_0x01fbc04c(puVar8 + -0x90,uRam0000000003d33c98);
        if (uVar3 != 0) {
          unaff_x27 = unaff_x22;
          if (*(int *)(unaff_x28 + (long)iVar9 * 4) != 0xfc) goto code_r0x014dfec4;
          break;
        }
        unaff_x27 = 0;
        unaff_x25 = 0x3d33c98;
        unaff_x26 = 0x3d33ca0;
      } while ((param_1 & 1) != 0);
    }
code_r0x014dff3c:
    auVar19._8_8_ = lVar14;
    auVar19._0_8_ = param_3;
    puVar18 = &UNK_014dff48;
    puVar13 = param_3;
  } while( true );
}



// ============================================================
// RVA: 0x14dff74 | Atlas.RandomLoadoutHelpers.WheelDefinitionFromLoadoutHelper
// ============================================================

undefined8
Atlas_RandomLoadoutHelpers__WheelDefinitionFromLoadoutHelper
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_2;
  uStack_38 = param_3;
  if ((bRam0000000003eb4bd2 & 1) == 0) {
    func_0x00f78a20(0x3d2dcb8);
    func_0x00f78a20(0x3d572a8);
    func_0x00f78a20(0x3d3a4c8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4bd2 = 1;
  }
  uStack_48 = 0;
  iVar1 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_40,0);
  if ((iVar1 == 0) && ((char)uStack_38 != '\0')) {
    if (param_4 == 0) {
LAB_014e0108:
      auVar4 = func_0x00f78af4();
      /*UnityEngine.Random$$InitState*/ func_0x032526cc(auVar4._8_8_,0);
      auVar5 = /*UnityEngine.Random$$get_state*/ func_0x0325270c(0);
      *auVar4._0_8_ = auVar5;
      return auVar5._0_8_;
    }
    if ((bRam0000000003eb4bcc & 1) == 0) {
      func_0x00f78a20(0x3d3a4c8);
      bRam0000000003eb4bcc = 1;
    }
    if ((*(long *)(param_4 + 0x10) != 0) && (0 < *(int *)(*(long *)(param_4 + 0x10) + 0x18))) {
      if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) goto LAB_014e0108;
      lVar2 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(*(long *)(param_1 + 0x10),param_5,uRam0000000003d572a8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar2,0,0);
      if (iVar1 != 0) {
        if (lVar2 == 0) goto LAB_014e0108;
        puVar3 = (undefined8 *)Atlas_Definitions_KartDefinition__get_StockWheelDef(lVar2,0);
        uStack_48 = *puVar3;
        iVar1 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_48,0);
        if (iVar1 != 0) {
          if (*(long *)(param_4 + 0x10) == 0) goto LAB_014e0108;
          iVar1 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(int *)(*(long *)(param_4 + 0x10) + 0x18) + 1,0);
          if (iVar1 == 0) {
            puVar3 = (undefined8 *)Atlas_Definitions_KartDefinition__get_StockWheelDef(lVar2,0);
            return *puVar3;
          }
        }
      }
      uStack_40 = Atlas_RandomDefinitionIDPool__GetNextDefinitionID(param_4);
    }
  }
  return uStack_40;
}



