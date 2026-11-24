// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.ScreenSafeAreaScaler

// ============================================================
// RVA: 0x14eecdc | Atlas.UI.ScreenSafeAreaScaler.Start
// ============================================================

undefined8
Atlas_UI_ScreenSafeAreaScaler__Start
          (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  uStack_70 = /*UnityEngine.Screen$$get_safeArea*/ func_0x0325eba4(0);
  fStack_6c = param_2;
  uStack_68 = param_3;
  uStack_64 = param_4;
  fVar7 = (float)/*UnityEngine.Rect$$get_position*/ func_0x032534d8(&uStack_70,0);
  fVar13 = param_2;
  fVar8 = (float)/*UnityEngine.Rect$$get_position*/ func_0x032534d8(&uStack_70,0);
  fVar10 = fVar13;
  fVar9 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_70,0);
  iVar1 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
  iVar2 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
  iVar3 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
  iVar4 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
  if (*(long *)(param_5 + 0x18) != 0) {
    fVar13 = fVar13 + fVar10;
    fVar7 = fVar7 / (float)iVar1;
    fVar8 = (fVar8 + fVar9) / (float)iVar3;
    fVar9 = fVar13 / (float)iVar4;
    fVar10 = (float)/*UnityEngine.RectTransform$$get_anchorMin*/ func_0x032549c8(*(long *)(param_5 + 0x18),0);
    if (fVar7 <= fVar10) {
      if (*(long *)(param_5 + 0x18) == 0) goto code_r0x014eeed8;
      /*UnityEngine.RectTransform$$get_anchorMin*/ func_0x032549c8(*(long *)(param_5 + 0x18),0);
      if (param_2 / (float)iVar2 <= fVar13) {
        if (*(long *)(param_5 + 0x18) == 0) goto code_r0x014eeed8;
        fVar10 = (float)/*UnityEngine.RectTransform$$get_anchorMax*/ func_0x03254b14(*(long *)(param_5 + 0x18),0);
        if (fVar10 <= fVar8) {
          if (*(long *)(param_5 + 0x18) == 0) goto code_r0x014eeed8;
          uVar5 = /*UnityEngine.RectTransform$$get_anchorMax*/ func_0x03254b14(*(long *)(param_5 + 0x18),0);
          if (fVar13 <= fVar9) {
            return uVar5;
          }
        }
      }
    }
    lVar6 = *(long *)(param_5 + 0x18);
    if (lVar6 != 0) {
      uVar11 = /*UnityEngine.RectTransform$$get_anchorMin*/ func_0x032549c8(lVar6,0);
      uVar11 = /*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(uVar11,fVar7,0);
      if (*(long *)(param_5 + 0x18) != 0) {
        /*UnityEngine.RectTransform$$get_anchorMin*/ func_0x032549c8(*(long *)(param_5 + 0x18),0);
        uVar12 = /*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(fVar7,param_2 / (float)iVar2,0);
        /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(uVar11,uVar12,lVar6,0);
        lVar6 = *(long *)(param_5 + 0x18);
        if (lVar6 != 0) {
          uVar11 = /*UnityEngine.RectTransform$$get_anchorMax*/ func_0x03254b14(lVar6,0);
          uVar11 = /*UnityEngine.Mathf$$Min*/ func_0x0323cce0(uVar11,fVar8,0);
          if (*(long *)(param_5 + 0x18) != 0) {
            /*UnityEngine.RectTransform$$get_anchorMax*/ func_0x03254b14(*(long *)(param_5 + 0x18),0);
            uVar12 = /*UnityEngine.Mathf$$Min*/ func_0x0323cce0(fVar8,fVar9,0);
            uVar5 = /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(uVar11,uVar12,lVar6,0);
            return uVar5;
          }
        }
      }
    }
  }
code_r0x014eeed8:
  uVar5 = func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return uVar5;
}



// ============================================================
// RVA: 0x14eece0 | Atlas.UI.ScreenSafeAreaScaler.ReviseSafeArea
// ============================================================

undefined8
Atlas_UI_ScreenSafeAreaScaler__ReviseSafeArea
          (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  uStack_70 = /*UnityEngine.Screen$$get_safeArea*/ func_0x0325eba4(0);
  fStack_6c = param_2;
  uStack_68 = param_3;
  uStack_64 = param_4;
  fVar7 = (float)/*UnityEngine.Rect$$get_position*/ func_0x032534d8(&uStack_70,0);
  fVar13 = param_2;
  fVar8 = (float)/*UnityEngine.Rect$$get_position*/ func_0x032534d8(&uStack_70,0);
  fVar10 = fVar13;
  fVar9 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_70,0);
  iVar1 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
  iVar2 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
  iVar3 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
  iVar4 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
  if (*(long *)(param_5 + 0x18) != 0) {
    fVar13 = fVar13 + fVar10;
    fVar7 = fVar7 / (float)iVar1;
    fVar8 = (fVar8 + fVar9) / (float)iVar3;
    fVar9 = fVar13 / (float)iVar4;
    fVar10 = (float)/*UnityEngine.RectTransform$$get_anchorMin*/ func_0x032549c8(*(long *)(param_5 + 0x18),0);
    if (fVar7 <= fVar10) {
      if (*(long *)(param_5 + 0x18) == 0) goto LAB_014eeed8;
      /*UnityEngine.RectTransform$$get_anchorMin*/ func_0x032549c8(*(long *)(param_5 + 0x18),0);
      if (param_2 / (float)iVar2 <= fVar13) {
        if (*(long *)(param_5 + 0x18) == 0) goto LAB_014eeed8;
        fVar10 = (float)/*UnityEngine.RectTransform$$get_anchorMax*/ func_0x03254b14(*(long *)(param_5 + 0x18),0);
        if (fVar10 <= fVar8) {
          if (*(long *)(param_5 + 0x18) == 0) goto LAB_014eeed8;
          uVar5 = /*UnityEngine.RectTransform$$get_anchorMax*/ func_0x03254b14(*(long *)(param_5 + 0x18),0);
          if (fVar13 <= fVar9) {
            return uVar5;
          }
        }
      }
    }
    lVar6 = *(long *)(param_5 + 0x18);
    if (lVar6 != 0) {
      uVar11 = /*UnityEngine.RectTransform$$get_anchorMin*/ func_0x032549c8(lVar6,0);
      uVar11 = /*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(uVar11,fVar7,0);
      if (*(long *)(param_5 + 0x18) != 0) {
        /*UnityEngine.RectTransform$$get_anchorMin*/ func_0x032549c8(*(long *)(param_5 + 0x18),0);
        uVar12 = /*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(fVar7,param_2 / (float)iVar2,0);
        /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(uVar11,uVar12,lVar6,0);
        lVar6 = *(long *)(param_5 + 0x18);
        if (lVar6 != 0) {
          uVar11 = /*UnityEngine.RectTransform$$get_anchorMax*/ func_0x03254b14(lVar6,0);
          uVar11 = /*UnityEngine.Mathf$$Min*/ func_0x0323cce0(uVar11,fVar8,0);
          if (*(long *)(param_5 + 0x18) != 0) {
            /*UnityEngine.RectTransform$$get_anchorMax*/ func_0x03254b14(*(long *)(param_5 + 0x18),0);
            uVar12 = /*UnityEngine.Mathf$$Min*/ func_0x0323cce0(fVar8,fVar9,0);
            uVar5 = /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(uVar11,uVar12,lVar6,0);
            return uVar5;
          }
        }
      }
    }
  }
LAB_014eeed8:
  uVar5 = func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return uVar5;
}



// ============================================================
// RVA: 0x14eeedc | Atlas.UI.ScreenSafeAreaScaler..ctor
// ============================================================

undefined1  [16] Atlas_UI_ScreenSafeAreaScaler___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



