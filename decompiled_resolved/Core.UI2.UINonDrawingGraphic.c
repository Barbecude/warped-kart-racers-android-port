// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.UINonDrawingGraphic

// ============================================================
// RVA: 0x2f8a008 | Core.UI2.UINonDrawingGraphic.SetMaterialDirty
// ============================================================

void Core_UI2_UINonDrawingGraphic__SetMaterialDirty(void)

{
  return;
}



// ============================================================
// RVA: 0x2f8a00c | Core.UI2.UINonDrawingGraphic.SetVerticesDirty
// ============================================================

void Core_UI2_UINonDrawingGraphic__SetVerticesDirty(void)

{
  return;
}



// ============================================================
// RVA: 0x2f8a010 | Core.UI2.UINonDrawingGraphic.OnPopulateMesh
// ============================================================

/* WARNING: Possible PIC construction at 0x032eb95c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032eeea8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x032eb960) */
/* WARNING: Removing unreachable block (ram,0x032eeeac) */
/* WARNING: Removing unreachable block (ram,0x032eeeb4) */
/* WARNING: Removing unreachable block (ram,0x032eeec8) */

ulong Core_UI2_UINonDrawingGraphic__OnPopulateMesh
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined8 param_5,ulong param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint extraout_w8;
  uint uVar10;
  long lVar11;
  long extraout_x9;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  
  if (param_6 == 0) {
    lVar11 = func_0x00f78af4();
    if ((bRam0000000003ebc668 & 1) == 0) {
      func_0x00f78a20(0x3d21c38);
      bRam0000000003ebc668 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.UI.Graphic_TypeInfo*/ lRam0000000003d21c38 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.Graphic_TypeInfo*/ lRam0000000003d21c38 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003ec2c7a & 1) == 0) {
      func_0x00f78a20(0x3d40f40,0);
      func_0x00f78a20(0x3d40f38);
      func_0x00f78a20(0x3d1ea38);
      bRam0000000003ec2c7a = 1;
    }
    uVar16 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
    *(undefined4 *)(lVar11 + 0x20) = uVar16;
    *(undefined4 *)(lVar11 + 0x24) = param_2;
    *(undefined4 *)(lVar11 + 0x28) = param_3;
    *(undefined4 *)(lVar11 + 0x2c) = param_4;
    *(undefined1 *)(lVar11 + 0x32) = 1;
    uVar6 = /*UnityEngine.EventSystems.UIBehaviour$$.ctor*/ func_0x032eca9c(lVar11,0);
    lVar13 = *(long *)(lVar11 + 0x90);
    if (lVar13 == 0) {
      lVar13 = func_0x00f78aec(/*UnityEngine.UI.CoroutineTween.TweenRunner<ColorTween>_TypeInfo*/ uRam0000000003d1ea38);
      uVar6 = /*UnityEngine.UI.CoroutineTween.TweenRunner<ColorTween>$$.ctor*/ func_0x0288f40c(lVar13,uRam0000000003d40f38);
      *(long *)(lVar11 + 0x90) = lVar13;
      if (lVar13 == 0) {
        plVar5 = (long *)func_0x00f78af4();
        if ((char)plVar5[6] == '\0') {
          (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
        }
        else {
          *(undefined1 *)(plVar5 + 6) = 0;
        }
        if (*(char *)((long)plVar5 + 0x31) == '\0') {
          (**(code **)(*plVar5 + 0x308))(plVar5,*(undefined8 *)(*plVar5 + 0x310));
        }
        else {
          *(undefined1 *)((long)plVar5 + 0x31) = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x032bc00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(*plVar5 + 0x2f8))(plVar5,*(undefined8 *)(*plVar5 + 0x300));
        return uVar6;
      }
    }
    *(long *)(lVar13 + 0x10) = lVar11;
    *(undefined1 *)(lVar11 + 0x98) = 1;
    return uVar6;
  }
  uVar6 = param_6;
  if ((bRam0000000003ec2e22 & 1) == 0) {
    func_0x00f78a20(0x3d3c810,0);
    func_0x00f78a20(0x3d3aca0);
    func_0x00f78a20(0x3d3a1a0);
    uVar6 = func_0x00f78a20(0x3d3c7c8);
    bRam0000000003ec2e22 = 1;
  }
  if (*(char *)(param_6 + 0x58) == '\0') {
    return uVar6;
  }
  if (*(long *)(param_6 + 0x10) != 0) {
    /*System.Collections.Generic.List<Vector3>$$Clear*/ func_0x02489588(*(long *)(param_6 + 0x10),uRam0000000003d3c7c8);
    if (*(long *)(param_6 + 0x18) != 0) {
      /*System.Collections.Generic.List<Color32>$$Clear*/ func_0x02382aac(*(long *)(param_6 + 0x18),uRam0000000003d3a1a0);
      if (*(long *)(param_6 + 0x20) != 0) {
        /*System.Collections.Generic.List<Vector4>$$Clear*/ func_0x0248c100(*(long *)(param_6 + 0x20),uRam0000000003d3c810);
        if (*(long *)(param_6 + 0x28) != 0) {
          /*System.Collections.Generic.List<Vector4>$$Clear*/ func_0x0248c100(*(long *)(param_6 + 0x28),uRam0000000003d3c810);
          if (*(long *)(param_6 + 0x30) != 0) {
            /*System.Collections.Generic.List<Vector4>$$Clear*/ func_0x0248c100(*(long *)(param_6 + 0x30),uRam0000000003d3c810);
            if (*(long *)(param_6 + 0x38) != 0) {
              /*System.Collections.Generic.List<Vector4>$$Clear*/ func_0x0248c100(*(long *)(param_6 + 0x38),uRam0000000003d3c810);
              if (*(long *)(param_6 + 0x40) != 0) {
                /*System.Collections.Generic.List<Vector3>$$Clear*/ func_0x02489588(*(long *)(param_6 + 0x40),uRam0000000003d3c7c8);
                if (*(long *)(param_6 + 0x48) != 0) {
                  /*System.Collections.Generic.List<Vector4>$$Clear*/ func_0x0248c100(*(long *)(param_6 + 0x48),uRam0000000003d3c810);
                  uVar6 = *(ulong *)(param_6 + 0x50);
                  if (uVar6 != 0) {
                    uVar4 = uVar6;
                    if (0 < *(int *)(uVar6 + 0x18)) {
                      uVar4 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar6 + 0x10),0,*(int *)(uVar6 + 0x18)
                                              ,0);
                      *(undefined4 *)(uVar6 + 0x18) = 0;
                    }
                    *(int *)(uVar6 + 0x1c) = *(int *)(uVar6 + 0x1c) + 1;
                    return uVar4;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  auVar17 = func_0x00f78af4();
  lVar11 = auVar17._8_8_;
  uVar6 = auVar17._0_8_;
  if ((bRam0000000003ec2e23 & 1) == 0) {
    func_0x00f78a20(0x3d3c7e0);
    bRam0000000003ec2e23 = 1;
  }
  if (*(long *)(uVar6 + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (ulong)*(uint *)(*(long *)(uVar6 + 0x10) + 0x18);
  }
  if (lVar11 == 0) {
    func_0x00f78af4();
code_r0x032eb994:
    uVar2 = func_0x00f78b24();
    uVar6 = func_0x00f78ac0(uVar2,0);
    return uVar6;
  }
  uVar14 = 0;
  lVar13 = lVar11 + 0x34;
  do {
    if (*(uint *)(lVar11 + 0x18) <= uVar14) goto code_r0x032eb994;
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eeba8(*(undefined4 *)(lVar13 + -0x14),*(undefined4 *)(lVar13 + -0x10),
                    *(undefined4 *)(lVar13 + -0xc),*(undefined4 *)(lVar13 + 0x18),
                    *(undefined4 *)(lVar13 + 0x1c),*(undefined4 *)(lVar13 + 0x20),
                    *(undefined4 *)(lVar13 + 0x24),uVar6,*(undefined4 *)(lVar13 + 0x14));
    uVar14 = uVar14 + 1;
    lVar13 = lVar13 + 0x6c;
  } while (uVar14 != 4);
  uVar9 = (ulong)((int)uVar4 + 1);
  uVar12 = (ulong)((int)uVar4 + 2);
  uVar14 = uVar9;
  if ((bRam0000000003ec2e2a & 1) == 0) {
    func_0x00f78a20(0x3d3ac90);
    bRam0000000003ec2e2a = 1;
  }
  /*UnityEngine.UI.VertexHelper$$InitializeListIfRequired*/ func_0x032ee0a0(uVar6);
  uVar7 = *(ulong *)(uVar6 + 0x50);
  if (uVar7 == 0) {
    auVar17 = func_0x00f78af4();
    lVar11 = auVar17._0_8_;
    if ((bRam0000000003ec2e2b & 1) == 0) {
      func_0x00f78a20(0x3d3ac98);
      bRam0000000003ec2e2b = 1;
    }
    uVar7 = /*UnityEngine.UI.VertexHelper$$InitializeListIfRequired*/ func_0x032ee0a0(lVar11);
    if (auVar17._8_8_ != 0) {
      uVar7 = /*UnityEngine.CanvasRenderer$$AddUIVertexStream*/ func_0x032f5948(auVar17._8_8_,*(undefined8 *)(lVar11 + 0x10),
                              *(undefined8 *)(lVar11 + 0x18),*(undefined8 *)(lVar11 + 0x20),
                              *(undefined8 *)(lVar11 + 0x28),*(undefined8 *)(lVar11 + 0x30),
                              *(undefined8 *)(lVar11 + 0x38),*(undefined8 *)(lVar11 + 0x40),
                              *(undefined8 *)(lVar11 + 0x48),0,uVar4,uVar9,uVar6,uVar12);
    }
    if (uVar14 == 0) {
      return uVar7;
    }
    lVar11 = *(long *)(lVar11 + 0x50);
    if (lVar11 == 0) {
      auVar17 = func_0x00f78af4();
      uVar6 = auVar17._0_8_;
      if (auVar17._8_8_ != 0) {
        /*UnityEngine.UI.VertexHelper$$InitializeListIfRequired*/ func_0x032ee0a0();
        uVar6 = /*UnityEngine.CanvasRenderer$$SplitUIVertexStreams*/ func_0x032f5420(auVar17._8_8_,*(undefined8 *)(uVar6 + 0x10),
                                *(undefined8 *)(uVar6 + 0x18),*(undefined8 *)(uVar6 + 0x20),
                                *(undefined8 *)(uVar6 + 0x28),*(undefined8 *)(uVar6 + 0x30),
                                *(undefined8 *)(uVar6 + 0x38),*(undefined8 *)(uVar6 + 0x40),
                                *(undefined8 *)(uVar6 + 0x48),*(undefined8 *)(uVar6 + 0x50),0);
      }
      return uVar6;
    }
                    /* WARNING: Could not recover jumptable at 0x023dbf44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(lRam0000000003d3ac98 + 0x18) + 0xc0) + 0x70))
                      (lVar11,*(undefined4 *)(lVar11 + 0x18),uVar14);
    return uVar6;
  }
  lVar11 = *(long *)(uVar7 + 0x10);
  puVar8 = puRam0000000003d3ac90;
  if (lVar11 == 0) {
code_r0x023dbd28:
    uVar4 = uVar6;
    uVar7 = uVar12;
    uVar14 = func_0x00f78af4();
    lVar11 = extraout_x9;
    uVar10 = extraout_w8;
code_r0x023dbd2c:
    *(uint *)(uVar7 + 0x18) = uVar10 + 1;
  }
  else {
    uVar10 = *(uint *)(uVar7 + 0x18);
    uVar14 = uVar7;
    if (uVar10 != *(uint *)(lVar11 + 0x18)) goto code_r0x023dbd2c;
    puVar8 = *(undefined8 **)(*(long *)(puRam0000000003d3ac90[3] + 0xc0) + 0x60);
    uVar14 = (*(code *)*puVar8)(uVar7,uVar10 + 1);
    lVar11 = *(long *)(uVar7 + 0x10);
    uVar10 = *(uint *)(uVar7 + 0x18);
    *(uint *)(uVar7 + 0x18) = uVar10 + 1;
    uVar12 = uVar7;
    uVar6 = uVar4;
    if (lVar11 == 0) goto code_r0x023dbd28;
  }
  if (uVar10 < *(uint *)(lVar11 + 0x18)) {
    *(int *)(lVar11 + (long)(int)uVar10 * 4 + 0x20) = (int)uVar4;
    *(int *)(uVar7 + 0x1c) = *(int *)(uVar7 + 0x1c) + 1;
    return uVar14;
  }
  uVar2 = func_0x00f78b24();
  auVar17 = func_0x00f78ac0(uVar2,0);
  plVar5 = auVar17._8_8_;
  lVar11 = auVar17._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x48))(plVar5,0x14);
  if (lVar11 != 0) {
    pcVar15 = (code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x28);
    lVar13 = *(long *)(*(long *)(puVar8[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    if (plVar5 != (long *)0x0) {
      if (*(long *)(*plVar5 + 0x40) == *(long *)(lVar13 + 0x40)) {
        puVar3 = (undefined4 *)func_0x00f78ae4(plVar5);
        (*pcVar15)(lVar11,*puVar3,*(undefined8 *)(*(long *)(puVar8[3] + 0xc0) + 0x28));
        iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x68))(lVar11);
        return (ulong)(iVar1 - 1);
      }
      func_0x00f78e5c(plVar5,lVar13);
      goto code_r0x023dbf10;
    }
  }
  func_0x00f78af4();
code_r0x023dbf10:
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x23dbf14);
  (*pcVar15)();
}



// ============================================================
// RVA: 0x2f8a02c | Core.UI2.UINonDrawingGraphic..ctor
// ============================================================

void Core_UI2_UINonDrawingGraphic___ctor
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  
  if ((bRam0000000003ebc668 & 1) == 0) {
    func_0x00f78a20(0x3d21c38);
    bRam0000000003ebc668 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.UI.Graphic_TypeInfo*/ lRam0000000003d21c38 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.Graphic_TypeInfo*/ lRam0000000003d21c38 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec2c7a & 1) == 0) {
    func_0x00f78a20(0x3d40f40,0);
    func_0x00f78a20(0x3d40f38);
    func_0x00f78a20(0x3d1ea38);
    bRam0000000003ec2c7a = 1;
  }
  uVar3 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
  *(undefined4 *)(param_5 + 0x20) = uVar3;
  *(undefined4 *)(param_5 + 0x24) = param_2;
  *(undefined4 *)(param_5 + 0x28) = param_3;
  *(undefined4 *)(param_5 + 0x2c) = param_4;
  *(undefined1 *)(param_5 + 0x32) = 1;
  /*UnityEngine.EventSystems.UIBehaviour$$.ctor*/ func_0x032eca9c(param_5,0);
  lVar2 = *(long *)(param_5 + 0x90);
  if (lVar2 == 0) {
    lVar2 = func_0x00f78aec(/*UnityEngine.UI.CoroutineTween.TweenRunner<ColorTween>_TypeInfo*/ uRam0000000003d1ea38);
    /*UnityEngine.UI.CoroutineTween.TweenRunner<ColorTween>$$.ctor*/ func_0x0288f40c(lVar2,uRam0000000003d40f38);
    *(long *)(param_5 + 0x90) = lVar2;
    if (lVar2 == 0) {
      plVar1 = (long *)func_0x00f78af4();
      if ((char)plVar1[6] == '\0') {
        (**(code **)(*plVar1 + 0x2e8))(plVar1,*(undefined8 *)(*plVar1 + 0x2f0));
      }
      else {
        *(undefined1 *)(plVar1 + 6) = 0;
      }
      if (*(char *)((long)plVar1 + 0x31) == '\0') {
        (**(code **)(*plVar1 + 0x308))(plVar1,*(undefined8 *)(*plVar1 + 0x310));
      }
      else {
        *(undefined1 *)((long)plVar1 + 0x31) = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x032bc00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x2f8))(plVar1,*(undefined8 *)(*plVar1 + 0x300));
      return;
    }
  }
  *(long *)(lVar2 + 0x10) = param_5;
  *(undefined1 *)(param_5 + 0x98) = 1;
  return;
}



