// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.UIScroller

// ============================================================
// RVA: 0x151d5c8 | Atlas.UI.Screens.UIScroller.set_BeingDragged
// ============================================================

void Atlas_UI_Screens_UIScroller__set_BeingDragged(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x40) = param_2;
  return;
}



// ============================================================
// RVA: 0x151d5d0 | Atlas.UI.Screens.UIScroller.Init
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_UIScroller__Init
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5)

{
  float fVar1;
  
  *(undefined8 *)(param_4 + 0x10) = param_5;
  *(undefined4 *)(param_4 + 0x18) = param_1;
  *(undefined4 *)(param_4 + 0x1c) = param_2;
  *(undefined4 *)(param_4 + 0x20) = param_3;
  *(undefined8 *)(param_4 + 0x24) = _UNK_033f83a8;
  fVar1 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
  *(float *)(param_4 + 0x2c) = fVar1 - (*(float *)(param_4 + 0x18) - *(float *)(param_4 + 0x1c));
  return;
}



// ============================================================
// RVA: 0x151d61c | Atlas.UI.Screens.UIScroller.DeInit
// ============================================================

void Atlas_UI_Screens_UIScroller__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// ============================================================
// RVA: 0x151d624 | Atlas.UI.Screens.UIScroller.Update
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_UIScroller__Update(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  
  if (*(char *)(param_2 + 0x40) == '\0') {
    fVar2 = *(float *)(param_2 + 0x2c);
  }
  else {
    fVar2 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
    *(float *)(param_2 + 0x2c) = fVar2;
    *(undefined1 *)(param_2 + 0x34) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  fVar6 = *(float *)(param_2 + 0x18);
  fVar3 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
  if (fVar2 + fVar6 < fVar3) {
    if (*(char *)(param_2 + 0x34) == '\0') {
      if (*(long *)(param_2 + 0x10) != 0) {
        uVar5 = *(undefined4 *)(param_2 + 0x24);
        uVar7 = *(undefined4 *)(param_2 + 0x28);
        uVar4 = /*UnityEngine.UI.ScrollRect$$get_verticalNormalizedPosition*/ func_0x032e0560(*(long *)(param_2 + 0x10),0);
        fVar2 = (float)/*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(uVar7,uVar5,uVar4,0);
        *(float *)(param_2 + 0x30) =
             fVar2 + *(float *)(param_2 + 0x20) * _UNK_033f8518 * _UNK_033f8140 * param_1;
        lVar1 = *(long *)(param_2 + 0x10);
        /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x24),0);
        if (lVar1 != 0) {
          /*UnityEngine.UI.ScrollRect$$set_verticalNormalizedPosition*/ func_0x032e06c8(lVar1,0);
          if ((1.0 <= *(float *)(param_2 + 0x30)) &&
             (fVar2 = *(float *)(param_2 + 0x3c) + param_1, *(float *)(param_2 + 0x3c) = fVar2,
             4.0 <= fVar2)) {
            *(undefined1 *)(param_2 + 0x34) = 1;
            *(undefined8 *)(param_2 + 0x38) = 0;
            if (*(long *)(param_2 + 0x10) == 0) goto code_r0x0151d778;
            /*UnityEngine.UI.ScrollRect$$set_verticalNormalizedPosition*/ func_0x032e06c8(*(undefined4 *)(param_2 + 0x28),*(long *)(param_2 + 0x10),0);
          }
          goto code_r0x0151d758;
        }
      }
code_r0x0151d778:
      func_0x00f78af4();
      return;
    }
    if (2.0 <= *(float *)(param_2 + 0x38)) {
      *(undefined1 *)(param_2 + 0x34) = 0;
    }
  }
code_r0x0151d758:
  *(float *)(param_2 + 0x38) = *(float *)(param_2 + 0x38) + param_1;
  return;
}



// ============================================================
// RVA: 0x151d77c | Atlas.UI.Screens.UIScroller..ctor
// ============================================================

void Atlas_UI_Screens_UIScroller___ctor(void)

{
  return;
}



