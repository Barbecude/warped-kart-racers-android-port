// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIImageUVControlBehaviour

// ============================================================
// RVA: 0x151b9b0 | Atlas.UI.UIImageUVControlBehaviour.SetUVs
// ============================================================

/* WARNING: Possible PIC construction at 0x0151bcc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151bccc) */

void Atlas_UI_UIImageUVControlBehaviour__SetUVs
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x19;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  uVar8 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(0);
  *(undefined4 *)(param_5 + 0x28) = uVar8;
  *(undefined4 *)(param_5 + 0x2c) = param_2;
  *(undefined4 *)(param_5 + 0x30) = param_3;
  *(undefined4 *)(param_5 + 0x34) = param_4;
  puVar1 = (undefined1 *)register0x00000008;
  do {
    while( true ) {
      *(undefined8 *)(puVar1 + -0x40) = unaff_d9;
      *(undefined8 *)(puVar1 + -0x38) = unaff_d8;
      *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
      *(long **)(puVar1 + -0x20) = unaff_x20;
      *(long *)(puVar1 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
      *(undefined **)(puVar1 + -8) = unaff_x30;
      if ((bRam0000000003eb4df2 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d255a8);
        bRam0000000003eb4df2 = 1;
      }
      unaff_x21 = 0x3d255a8;
      *(undefined8 *)(puVar1 + -0x50) = 0;
      *(undefined8 *)(puVar1 + -0x48) = 0;
      unaff_d8 = 0x3f800000;
      fVar9 = 1.0;
      if (*(char *)(param_5 + 0x38) != '\0') {
        iVar2 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
        iVar3 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
        fVar9 = (float)iVar2 / (float)iVar3;
      }
      fVar14 = INFINITY;
      if (*(float *)(param_5 + 0x28) != 0.0) {
        fVar14 = 1.0 / *(float *)(param_5 + 0x28);
      }
      fVar10 = INFINITY;
      if (*(float *)(param_5 + 0x2c) != 0.0) {
        fVar10 = 1.0 / *(float *)(param_5 + 0x2c);
      }
      /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(fVar9 * fVar14,fVar10,-*(float *)(param_5 + 0x30),-*(float *)(param_5 + 0x34),
                      puVar1 + -0x50,0);
      lVar6 = *(long *)(param_5 + 0x40);
      if (((*(ushort *)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = 0;
      if (lVar6 != 0) {
        unaff_x22 = 0x3d23000;
        /*UnityEngine.Material$$SetVector*/ func_0x0323af88(*(undefined4 *)(puVar1 + -0x50),*(undefined4 *)(puVar1 + -0x4c),
                        *(undefined4 *)(puVar1 + -0x48),*(undefined4 *)(puVar1 + -0x44),lVar6,
                        **(undefined4 **)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0xb8),0);
        lVar7 = *(long *)(param_5 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
        if (iVar2 == 0) {
          return;
        }
        if (*(long *)(param_5 + 0x20) != 0) {
          iVar2 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(*(long *)(param_5 + 0x20),0);
          if (iVar2 == 0) {
            return;
          }
          plVar4 = *(long **)(param_5 + 0x20);
          if (plVar4 != (long *)0x0) {
            lVar7 = (**(code **)(*plVar4 + 0x298))
                              (plVar4,*(undefined8 *)(param_5 + 0x40),
                               *(undefined8 *)(*plVar4 + 0x2a0));
            if (((*(ushort *)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (lVar7 != 0) {
              /*UnityEngine.Material$$SetVector*/ func_0x0323af88(*(undefined4 *)(puVar1 + -0x50),*(undefined4 *)(puVar1 + -0x4c),
                              *(undefined4 *)(puVar1 + -0x48),*(undefined4 *)(puVar1 + -0x44),lVar7,
                              **(undefined4 **)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0xb8),0);
              if (*(long *)(param_5 + 0x40) != 0) {
                uVar5 = /*UnityEngine.Material$$get_mainTexture*/ func_0x03237f9c(*(long *)(param_5 + 0x40),0);
                /*UnityEngine.Material$$set_mainTexture*/ func_0x03238108(lVar7,uVar5,0);
                return;
              }
            }
          }
        }
      }
      unaff_x19 = func_0x00f78af4();
      *(undefined8 *)(puVar1 + -0x80) = unaff_x22;
      *(undefined8 *)(puVar1 + -0x78) = 0x3d255a8;
      *(long *)(puVar1 + -0x70) = lVar7;
      *(long *)(puVar1 + -0x68) = param_5;
      *(undefined1 **)(puVar1 + -0x60) = puVar1 + -0x10;
      *(undefined **)(puVar1 + -0x58) = &Atlas_UI_UIImageUVControlBehaviour__Awake;
      unaff_x29 = puVar1 + -0x60;
      unaff_x20 = (long *)0x3eb4000;
      if ((bRam0000000003eb4df1 & 1) == 0) {
        func_0x00f78a20(0x3d23298);
        bRam0000000003eb4df1 = 1;
      }
      iVar2 = /*UnityEngine.Application$$get_isPlaying*/ func_0x0321862c(0);
      if (iVar2 == 0) break;
      unaff_x20 = *(long **)(unaff_x19 + 0x18);
      if (unaff_x20 != (long *)0x0) {
        unaff_x21 = (**(code **)(*unaff_x20 + 0x338))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x340))
        ;
        unaff_x22 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
        /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(unaff_x22,unaff_x21,0);
        (**(code **)(*unaff_x20 + 0x348))(unaff_x20,unaff_x22,*(undefined8 *)(*unaff_x20 + 0x350));
        break;
      }
code_r0x0151bce0:
      unaff_x30 = &Atlas_UI_UIImageUVControlBehaviour__Update;
      param_5 = func_0x00f78af4();
      puVar1 = puVar1 + -0x90;
    }
    plVar4 = *(long **)(unaff_x19 + 0x18);
    if (plVar4 == (long *)0x0) goto code_r0x0151bce0;
    uVar5 = (**(code **)(*plVar4 + 0x338))(plVar4,*(undefined8 *)(*plVar4 + 0x340));
    *(undefined8 *)(unaff_x19 + 0x40) = uVar5;
    *(undefined8 *)(puVar1 + -0x90) = 0;
    *(undefined8 *)(puVar1 + -0x88) = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x42c80000,0x42c80000,0,0,puVar1 + -0x90,0);
    uVar11 = *(undefined4 *)(puVar1 + -0x8c);
    uVar12 = *(undefined4 *)(puVar1 + -0x88);
    uVar13 = *(undefined4 *)(puVar1 + -0x84);
    /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d094(*(undefined4 *)(puVar1 + -0x90),0);
    uVar8 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(0);
    *(undefined4 *)(unaff_x19 + 0x28) = uVar8;
    *(undefined4 *)(unaff_x19 + 0x2c) = uVar11;
    *(undefined4 *)(unaff_x19 + 0x30) = uVar12;
    *(undefined4 *)(unaff_x19 + 0x34) = uVar13;
    unaff_x30 = &UNK_0151bccc;
    puVar1 = puVar1 + -0x90;
    param_5 = unaff_x19;
  } while( true );
}



// ============================================================
// RVA: 0x151b9e0 | Atlas.UI.UIImageUVControlBehaviour.UpdateMaterialParams
// ============================================================

void Atlas_UI_UIImageUVControlBehaviour__UpdateMaterialParams(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb4df2 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d255a8);
      bRam0000000003eb4df2 = 1;
    }
    unaff_x21 = 0x3d255a8;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    unaff_d8 = 0x3f800000;
    fVar7 = 1.0;
    if (*(char *)(param_1 + 0x38) != '\0') {
      iVar1 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
      iVar2 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
      fVar7 = (float)iVar1 / (float)iVar2;
    }
    fVar13 = INFINITY;
    if (*(float *)(param_1 + 0x28) != 0.0) {
      fVar13 = 1.0 / *(float *)(param_1 + 0x28);
    }
    fVar9 = INFINITY;
    if (*(float *)(param_1 + 0x2c) != 0.0) {
      fVar9 = 1.0 / *(float *)(param_1 + 0x2c);
    }
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(fVar7 * fVar13,fVar9,-*(float *)(param_1 + 0x30),-*(float *)(param_1 + 0x34),
                    (undefined1 *)((long)register0x00000008 + -0x50),0);
    lVar5 = *(long *)(param_1 + 0x40);
    if (((*(ushort *)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = 0;
    if (lVar5 != 0) {
      unaff_x22 = 0x3d23000;
      /*UnityEngine.Material$$SetVector*/ func_0x0323af88(*(undefined4 *)((long)register0x00000008 + -0x50),
                      *(undefined4 *)((long)register0x00000008 + -0x4c),
                      *(undefined4 *)((long)register0x00000008 + -0x48),
                      *(undefined4 *)((long)register0x00000008 + -0x44),lVar5,
                      **(undefined4 **)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0xb8),0);
      lVar6 = *(long *)(param_1 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0,0);
      if (iVar1 == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        iVar1 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(*(long *)(param_1 + 0x20),0);
        if (iVar1 == 0) {
          return;
        }
        plVar3 = *(long **)(param_1 + 0x20);
        if (plVar3 != (long *)0x0) {
          lVar6 = (**(code **)(*plVar3 + 0x298))
                            (plVar3,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(*plVar3 + 0x2a0)
                            );
          if (((*(ushort *)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (lVar6 != 0) {
            /*UnityEngine.Material$$SetVector*/ func_0x0323af88(*(undefined4 *)((long)register0x00000008 + -0x50),
                            *(undefined4 *)((long)register0x00000008 + -0x4c),
                            *(undefined4 *)((long)register0x00000008 + -0x48),
                            *(undefined4 *)((long)register0x00000008 + -0x44),lVar6,
                            **(undefined4 **)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0xb8),0);
            if (*(long *)(param_1 + 0x40) != 0) {
              uVar4 = /*UnityEngine.Material$$get_mainTexture*/ func_0x03237f9c(*(long *)(param_1 + 0x40),0);
              /*UnityEngine.Material$$set_mainTexture*/ func_0x03238108(lVar6,uVar4,0);
              return;
            }
          }
        }
      }
    }
    unaff_x19 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3d255a8;
    *(long *)((long)register0x00000008 + -0x70) = lVar6;
    *(long *)((long)register0x00000008 + -0x68) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x58) = &Atlas_UI_UIImageUVControlBehaviour__Awake;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    unaff_x20 = (long *)0x3eb4000;
    if ((bRam0000000003eb4df1 & 1) == 0) {
      func_0x00f78a20(0x3d23298);
      bRam0000000003eb4df1 = 1;
    }
    iVar1 = /*UnityEngine.Application$$get_isPlaying*/ func_0x0321862c(0);
    if (iVar1 == 0) {
code_r0x0151bc64:
      plVar3 = *(long **)(unaff_x19 + 0x18);
      if (plVar3 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 0x338))(plVar3,*(undefined8 *)(*plVar3 + 0x340));
        *(undefined8 *)(unaff_x19 + 0x40) = uVar4;
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x42c80000,0x42c80000,0,0,(undefined1 *)((long)register0x00000008 + -0x90),0
                       );
        uVar10 = *(undefined4 *)((long)register0x00000008 + -0x8c);
        uVar11 = *(undefined4 *)((long)register0x00000008 + -0x88);
        uVar12 = *(undefined4 *)((long)register0x00000008 + -0x84);
        /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d094(*(undefined4 *)((long)register0x00000008 + -0x90),0);
        uVar8 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(0);
        *(undefined4 *)(unaff_x19 + 0x28) = uVar8;
        *(undefined4 *)(unaff_x19 + 0x2c) = uVar10;
        *(undefined4 *)(unaff_x19 + 0x30) = uVar11;
        *(undefined4 *)(unaff_x19 + 0x34) = uVar12;
        Atlas_UI_UIImageUVControlBehaviour__UpdateMaterialParams(unaff_x19);
        return;
      }
    }
    else {
      unaff_x20 = *(long **)(unaff_x19 + 0x18);
      if (unaff_x20 != (long *)0x0) {
        unaff_x21 = (**(code **)(*unaff_x20 + 0x338))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x340))
        ;
        unaff_x22 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
        /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(unaff_x22,unaff_x21,0);
        (**(code **)(*unaff_x20 + 0x348))(unaff_x20,unaff_x22,*(undefined8 *)(*unaff_x20 + 0x350));
        goto code_r0x0151bc64;
      }
    }
    unaff_x30 = &Atlas_UI_UIImageUVControlBehaviour__Update;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  } while( true );
}



// ============================================================
// RVA: 0x151bbc8 | Atlas.UI.UIImageUVControlBehaviour.Awake
// ============================================================

void Atlas_UI_UIImageUVControlBehaviour__Awake(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  long lVar5;
  long unaff_x20;
  long *plVar6;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    plVar6 = (long *)0x3eb4000;
    if ((bRam0000000003eb4df1 & 1) == 0) {
      func_0x00f78a20(0x3d23298);
      bRam0000000003eb4df1 = 1;
    }
    iVar2 = /*UnityEngine.Application$$get_isPlaying*/ func_0x0321862c(0);
    if (iVar2 == 0) {
LAB_0151bc64:
      plVar3 = *(long **)(param_1 + 0x18);
      if (plVar3 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 0x338))(plVar3,*(undefined8 *)(*plVar3 + 0x340));
        *(undefined8 *)(param_1 + 0x40) = uVar4;
        *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
        /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x42c80000,0x42c80000,0,0,(undefined1 *)((long)register0x00000008 + -0x40),0
                       );
        uVar10 = *(undefined4 *)((long)register0x00000008 + -0x3c);
        uVar11 = *(undefined4 *)((long)register0x00000008 + -0x38);
        uVar12 = *(undefined4 *)((long)register0x00000008 + -0x34);
        /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d094(*(undefined4 *)((long)register0x00000008 + -0x40),0);
        uVar8 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(0);
        *(undefined4 *)(param_1 + 0x28) = uVar8;
        *(undefined4 *)(param_1 + 0x2c) = uVar10;
        *(undefined4 *)(param_1 + 0x30) = uVar11;
        *(undefined4 *)(param_1 + 0x34) = uVar12;
        Atlas_UI_UIImageUVControlBehaviour__UpdateMaterialParams(param_1);
        return;
      }
    }
    else {
      plVar6 = *(long **)(param_1 + 0x18);
      if (plVar6 != (long *)0x0) {
        unaff_x21 = (**(code **)(*plVar6 + 0x338))(plVar6,*(undefined8 *)(*plVar6 + 0x340));
        unaff_x22 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
        /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(unaff_x22,unaff_x21,0);
        (**(code **)(*plVar6 + 0x348))(plVar6,unaff_x22,*(undefined8 *)(*plVar6 + 0x350));
        goto LAB_0151bc64;
      }
    }
    unaff_x19 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x60) = plVar6;
    *(long *)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &Atlas_UI_UIImageUVControlBehaviour__Update;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x50);
    if ((bRam0000000003eb4df2 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d255a8);
      bRam0000000003eb4df2 = 1;
    }
    unaff_x21 = 0x3d255a8;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    unaff_d8 = 0x3f800000;
    fVar7 = 1.0;
    if (*(char *)(unaff_x19 + 0x38) != '\0') {
      iVar2 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
      iVar1 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
      fVar7 = (float)iVar2 / (float)iVar1;
    }
    fVar13 = INFINITY;
    if (*(float *)(unaff_x19 + 0x28) != 0.0) {
      fVar13 = 1.0 / *(float *)(unaff_x19 + 0x28);
    }
    fVar9 = INFINITY;
    if (*(float *)(unaff_x19 + 0x2c) != 0.0) {
      fVar9 = 1.0 / *(float *)(unaff_x19 + 0x2c);
    }
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(fVar7 * fVar13,fVar9,-*(float *)(unaff_x19 + 0x30),-*(float *)(unaff_x19 + 0x34)
                    ,(undefined1 *)((long)register0x00000008 + -0x90),0);
    lVar5 = *(long *)(unaff_x19 + 0x40);
    if (((*(ushort *)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x20 = 0;
    if (lVar5 != 0) {
      unaff_x22 = 0x3d23000;
      /*UnityEngine.Material$$SetVector*/ func_0x0323af88(*(undefined4 *)((long)register0x00000008 + -0x90),
                      *(undefined4 *)((long)register0x00000008 + -0x8c),
                      *(undefined4 *)((long)register0x00000008 + -0x88),
                      *(undefined4 *)((long)register0x00000008 + -0x84),lVar5,
                      **(undefined4 **)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0xb8),0);
      unaff_x20 = *(long *)(unaff_x19 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x20,0,0);
      if (iVar2 == 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        iVar2 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(*(long *)(unaff_x19 + 0x20),0);
        if (iVar2 == 0) {
          return;
        }
        plVar6 = *(long **)(unaff_x19 + 0x20);
        if (plVar6 != (long *)0x0) {
          unaff_x20 = (**(code **)(*plVar6 + 0x298))
                                (plVar6,*(undefined8 *)(unaff_x19 + 0x40),
                                 *(undefined8 *)(*plVar6 + 0x2a0));
          if (((*(ushort *)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (unaff_x20 != 0) {
            /*UnityEngine.Material$$SetVector*/ func_0x0323af88(*(undefined4 *)((long)register0x00000008 + -0x90),
                            *(undefined4 *)((long)register0x00000008 + -0x8c),
                            *(undefined4 *)((long)register0x00000008 + -0x88),
                            *(undefined4 *)((long)register0x00000008 + -0x84),unaff_x20,
                            **(undefined4 **)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0xb8),0);
            if (*(long *)(unaff_x19 + 0x40) != 0) {
              uVar4 = /*UnityEngine.Material$$get_mainTexture*/ func_0x03237f9c(*(long *)(unaff_x19 + 0x40),0);
              /*UnityEngine.Material$$set_mainTexture*/ func_0x03238108(unaff_x20,uVar4,0);
              return;
            }
          }
        }
      }
    }
    unaff_x30 = Atlas_UI_UIImageUVControlBehaviour__Awake;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  } while( true );
}



// ============================================================
// RVA: 0x151bce4 | Atlas.UI.UIImageUVControlBehaviour.Update
// ============================================================

void Atlas_UI_UIImageUVControlBehaviour__Update(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb4df2 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d255a8);
      bRam0000000003eb4df2 = 1;
    }
    unaff_x21 = 0x3d255a8;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    unaff_d8 = 0x3f800000;
    fVar7 = 1.0;
    if (*(char *)(param_1 + 0x38) != '\0') {
      iVar1 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
      iVar2 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
      fVar7 = (float)iVar1 / (float)iVar2;
    }
    fVar13 = INFINITY;
    if (*(float *)(param_1 + 0x28) != 0.0) {
      fVar13 = 1.0 / *(float *)(param_1 + 0x28);
    }
    fVar9 = INFINITY;
    if (*(float *)(param_1 + 0x2c) != 0.0) {
      fVar9 = 1.0 / *(float *)(param_1 + 0x2c);
    }
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(fVar7 * fVar13,fVar9,-*(float *)(param_1 + 0x30),-*(float *)(param_1 + 0x34),
                    (undefined1 *)((long)register0x00000008 + -0x50),0);
    lVar5 = *(long *)(param_1 + 0x40);
    if (((*(ushort *)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = 0;
    if (lVar5 != 0) {
      unaff_x22 = 0x3d23000;
      /*UnityEngine.Material$$SetVector*/ func_0x0323af88(*(undefined4 *)((long)register0x00000008 + -0x50),
                      *(undefined4 *)((long)register0x00000008 + -0x4c),
                      *(undefined4 *)((long)register0x00000008 + -0x48),
                      *(undefined4 *)((long)register0x00000008 + -0x44),lVar5,
                      **(undefined4 **)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0xb8),0);
      lVar6 = *(long *)(param_1 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0,0);
      if (iVar1 == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        iVar1 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(*(long *)(param_1 + 0x20),0);
        if (iVar1 == 0) {
          return;
        }
        plVar3 = *(long **)(param_1 + 0x20);
        if (plVar3 != (long *)0x0) {
          lVar6 = (**(code **)(*plVar3 + 0x298))
                            (plVar3,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(*plVar3 + 0x2a0)
                            );
          if (((*(ushort *)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (lVar6 != 0) {
            /*UnityEngine.Material$$SetVector*/ func_0x0323af88(*(undefined4 *)((long)register0x00000008 + -0x50),
                            *(undefined4 *)((long)register0x00000008 + -0x4c),
                            *(undefined4 *)((long)register0x00000008 + -0x48),
                            *(undefined4 *)((long)register0x00000008 + -0x44),lVar6,
                            **(undefined4 **)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0xb8),0);
            if (*(long *)(param_1 + 0x40) != 0) {
              uVar4 = /*UnityEngine.Material$$get_mainTexture*/ func_0x03237f9c(*(long *)(param_1 + 0x40),0);
              /*UnityEngine.Material$$set_mainTexture*/ func_0x03238108(lVar6,uVar4,0);
              return;
            }
          }
        }
      }
    }
    unaff_x19 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3d255a8;
    *(long *)((long)register0x00000008 + -0x70) = lVar6;
    *(long *)((long)register0x00000008 + -0x68) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = Atlas_UI_UIImageUVControlBehaviour__Awake;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    unaff_x20 = (long *)0x3eb4000;
    if ((bRam0000000003eb4df1 & 1) == 0) {
      func_0x00f78a20(0x3d23298);
      bRam0000000003eb4df1 = 1;
    }
    iVar1 = /*UnityEngine.Application$$get_isPlaying*/ func_0x0321862c(0);
    if (iVar1 == 0) {
LAB_0151bc64:
      plVar3 = *(long **)(unaff_x19 + 0x18);
      if (plVar3 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 0x338))(plVar3,*(undefined8 *)(*plVar3 + 0x340));
        *(undefined8 *)(unaff_x19 + 0x40) = uVar4;
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x42c80000,0x42c80000,0,0,(undefined1 *)((long)register0x00000008 + -0x90),0
                       );
        uVar10 = *(undefined4 *)((long)register0x00000008 + -0x8c);
        uVar11 = *(undefined4 *)((long)register0x00000008 + -0x88);
        uVar12 = *(undefined4 *)((long)register0x00000008 + -0x84);
        /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d094(*(undefined4 *)((long)register0x00000008 + -0x90),0);
        uVar8 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(0);
        *(undefined4 *)(unaff_x19 + 0x28) = uVar8;
        *(undefined4 *)(unaff_x19 + 0x2c) = uVar10;
        *(undefined4 *)(unaff_x19 + 0x30) = uVar11;
        *(undefined4 *)(unaff_x19 + 0x34) = uVar12;
        Atlas_UI_UIImageUVControlBehaviour__UpdateMaterialParams(unaff_x19);
        return;
      }
    }
    else {
      unaff_x20 = *(long **)(unaff_x19 + 0x18);
      if (unaff_x20 != (long *)0x0) {
        unaff_x21 = (**(code **)(*unaff_x20 + 0x338))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x340))
        ;
        unaff_x22 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
        /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(unaff_x22,unaff_x21,0);
        (**(code **)(*unaff_x20 + 0x348))(unaff_x20,unaff_x22,*(undefined8 *)(*unaff_x20 + 0x350));
        goto LAB_0151bc64;
      }
    }
    unaff_x30 = Atlas_UI_UIImageUVControlBehaviour__Update;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  } while( true );
}



// ============================================================
// RVA: 0x151bce8 | Atlas.UI.UIImageUVControlBehaviour..ctor
// ============================================================

void Atlas_UI_UIImageUVControlBehaviour___ctor(long param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,0x3f800000,0,0,&uStack_30,0);
  *(undefined8 *)(param_1 + 0x30) = uStack_28;
  *(undefined8 *)(param_1 + 0x28) = uStack_30;
  *(undefined1 *)(param_1 + 0x38) = 1;
  /*UnityEngine.MonoBehaviour$$.ctor*/ func_0x03248424(param_1,0);
  return;
}



// ============================================================
// RVA: 0x151bd48 | Atlas.UI.UIImageUVControlBehaviour..cctor
// ============================================================

void Atlas_UI_UIImageUVControlBehaviour___cctor(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb4df3 & 1) == 0) {
    func_0x00f78a20(0x3d255a8);
    func_0x00f78a20(0x3d77890);
    bRam0000000003eb4df3 = 1;
  }
  uVar1 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(/*STR('_UvScaleOffset')*/ uRam0000000003d77890,0);
  **(undefined4 **)(/*Atlas.UI.UIImageUVControlBehaviour_TypeInfo*/ lRam0000000003d255a8 + 0xb8) = uVar1;
  return;
}



