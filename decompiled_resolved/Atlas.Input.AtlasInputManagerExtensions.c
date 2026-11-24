// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Input.AtlasInputManagerExtensions

// ============================================================
// RVA: 0x14699f4 | Atlas.Input.AtlasInputManagerExtensions.AddGlyphMappingsFromDefinitions
// ============================================================

ulong Atlas_Input_AtlasInputManagerExtensions__AddGlyphMappingsFromDefinitions
                (long param_1,long param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  int extraout_w1;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long lStack_68;
  
  if ((bRam0000000003eb483f & 1) == 0) {
    func_0x00f78a20(0x3d57580);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22838);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb483f = 1;
  }
  lStack_68 = 0;
  if (param_2 == 0) {
LAB_01469cd0:
    func_0x00f78af4();
  }
  else {
    uVar4 = /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(param_2,&lStack_68,uRam0000000003d57580);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (lStack_68 == 0) goto LAB_01469cd0;
    plVar5 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_68,uRam0000000003d3fe40);
    if (plVar5 != (long *)0x0) {
code_r0x01469ad4:
      lVar9 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_01469b20;
          }
          piVar12 = piVar12 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_01469b20:
      uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        lVar9 = 0;
        goto joined_r0x01469c14;
      }
      lVar9 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x01469b7c;
          }
          piVar12 = piVar12 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01469b7c:
      plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (plVar7 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x01469cd8;
      }
      if ((*(byte *)(*plVar7 + 300) < *(byte *)(/*Atlas.Definitions.InputGlyphMappingDefinition_TypeInfo*/ lRam0000000003d22838 + 300)) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.InputGlyphMappingDefinition_TypeInfo*/ lRam0000000003d22838 + 300) * 8 + -8
                   ) != /*Atlas.Definitions.InputGlyphMappingDefinition_TypeInfo*/ lRam0000000003d22838)) {
        func_0x00f78e5c(plVar7);
        goto code_r0x01469cd8;
      }
      lVar9 = plVar7[5];
      if (lVar9 != 0) {
        if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
          uVar4 = 0;
          uVar10 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
          do {
            if (uVar10 <= uVar4) {
              uVar8 = func_0x00f78b24();
              func_0x00f78ac0(uVar8,0);
              goto code_r0x01469cd8;
            }
            if (param_1 == 0) {
              func_0x00f78af4();
              goto code_r0x01469cd8;
            }
            /*Core.Input.InputManager$$AddGlyphMappingsForFamily*/ func_0x0164b168(param_1,*(undefined4 *)(lVar9 + 0x20 + uVar4 * 4),plVar7[6],0);
            uVar4 = uVar4 + 1;
            uVar10 = (ulong)*(uint *)(lVar9 + 0x18);
          } while ((long)uVar4 < (long)(int)*(uint *)(lVar9 + 0x18));
        }
        goto code_r0x01469ad4;
      }
      func_0x00f78af4();
      goto code_r0x01469cd8;
    }
  }
  func_0x00f78af4();
code_r0x01469cd8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1469cdc);
  (*pcVar1)();
joined_r0x01469c14:
  if (plVar5 != (long *)0x0) {
    lVar11 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01469c6c;
        }
        piVar12 = piVar12 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01469c6c:
    uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  if (lVar9 == 0) {
    return uVar4;
  }
  func_0x00f78ac0(lVar9,0);
  if (extraout_w1 != 1) goto code_r0x01469d24;
  plVar7 = (long *)___cxa_begin_catch();
  lVar9 = *plVar7;
  uVar4 = ___cxa_end_catch();
  goto joined_r0x01469c14;
code_r0x01469d24:
  __Unwind_Resume();
  if ((bRam0000000003eb4840 & 1) == 0) {
    func_0x00f78a20(0x3d1fea8);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d6ba50);
    func_0x00f78a20(0x3d70a90);
    bRam0000000003eb4840 = 1;
  }
  puVar6 = *(undefined8 **)(/*Atlas.Gameplay.Kart.AtlasKartPhysicsConsts_TypeInfo*/ lRam0000000003d1fea8 + 0xb8);
  *(undefined8 *)((long)puVar6 + 0x24) = 0;
  *(undefined8 *)((long)puVar6 + 0x1c) = 0;
  puVar6[1] = 0;
  *puVar6 = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
  plVar5 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
  if (plVar5 == (long *)0x0) {
LAB_01469e6c:
    func_0x00f78af4();
  }
  else {
    if ((/*STR('Default')*/ lRam0000000003d6ba50 != 0) &&
       (lVar9 = func_0x00f78adc(/*STR('Default')*/ lRam0000000003d6ba50,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0))
    {
LAB_01469e78:
      uVar8 = func_0x00f78b14();
      goto code_r0x01469e7c;
    }
    if ((int)plVar5[3] != 0) {
      plVar5[4] = /*STR('Default')*/ lRam0000000003d6ba50;
      uVar2 = /*UnityEngine.LayerMask$$GetMask*/ func_0x03232748(plVar5,0);
      plVar5 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
      if (plVar5 == (long *)0x0) goto LAB_01469e6c;
      if ((/*STR('Obstacle')*/ lRam0000000003d70a90 != 0) &&
         (lVar9 = func_0x00f78adc(/*STR('Obstacle')*/ lRam0000000003d70a90,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0)
         ) goto LAB_01469e78;
      if ((int)plVar5[3] != 0) {
        plVar5[4] = /*STR('Obstacle')*/ lRam0000000003d70a90;
        uVar3 = /*UnityEngine.LayerMask$$GetMask*/ func_0x03232748(plVar5,0);
        uVar4 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326fc(uVar3 | uVar2,0);
        *(int *)(*(long *)(/*Atlas.Gameplay.Kart.AtlasKartPhysicsConsts_TypeInfo*/ lRam0000000003d1fea8 + 0xb8) + 0x2c) = (int)uVar4;
        return uVar4;
      }
    }
  }
  uVar8 = func_0x00f78b24();
code_r0x01469e7c:
  lVar9 = func_0x00f78ac0(uVar8,0);
  return *(ulong *)(lVar9 + 0x10);
}



