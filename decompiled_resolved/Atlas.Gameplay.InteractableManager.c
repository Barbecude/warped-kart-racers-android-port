// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.InteractableManager

// ============================================================
// RVA: 0x15b87ac | Atlas.Gameplay.InteractableManager.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x015b8904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015b8908) */
/* WARNING: Removing unreachable block (ram,0x015b8914) */
/* WARNING: Removing unreachable block (ram,0x015b8918) */
/* WARNING: Removing unreachable block (ram,0x015b8930) */
/* WARNING: Removing unreachable block (ram,0x015b89a0) */
/* WARNING: Removing unreachable block (ram,0x015b8944) */
/* WARNING: Removing unreachable block (ram,0x015b8950) */

void Atlas_Gameplay_InteractableManager__Init(long param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam0000000003eb52a1 & 1) == 0) {
    func_0x00f78a20(0x3d43368);
    func_0x00f78a20(0x3d536a0);
    func_0x00f78a20(0x3d1f118);
    func_0x00f78a20(0x3d22958);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb52a1 = 1;
  }
  if (param_2 != 0) {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_3,0,0);
    if ((uVar2 & 1) == 0) {
      if (param_3 == 0) {
LAB_015b8994:
        func_0x00f78af4();
        uVar6 = func_0x00f78b24();
        lVar3 = func_0x00f78ac0(uVar6,0);
        lVar4 = *(long *)(lVar3 + 0x10);
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (0 < (int)uVar1) {
            lVar5 = 0;
            do {
              if (uVar1 <= (uint)lVar5) {
                uVar6 = func_0x00f78b24();
                func_0x00f78ac0(uVar6,0);
code_r0x015b8a20:
                func_0x00f78af4();
                return;
              }
              if (*(long *)(lVar4 + 0x20 + lVar5 * 8) == 0) goto code_r0x015b8a20;
              Atlas_Gameplay_InteractableController__DeInit();
              uVar1 = *(uint *)(lVar4 + 0x18);
              lVar5 = lVar5 + 1;
            } while ((int)lVar5 < (int)uVar1);
          }
          *(undefined8 *)(lVar3 + 0x10) = 0;
        }
        return;
      }
      uVar6 = *(undefined8 *)(param_3 + 0x70);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,0,0);
      if ((uVar2 & 1) == 0) {
        *(long *)(param_1 + 0x18) = param_2;
        *(long *)(param_1 + 0x20) = param_3;
        if (*(long *)(param_3 + 0x70) == 0) goto LAB_015b8994;
        lVar3 = /*UnityEngine.Component$$GetComponentsInChildren<TMP_SubMeshUI>*/ func_0x0183944c(*(long *)(param_3 + 0x70),uRam0000000003d536a0);
        if ((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) {
          uVar6 = func_0x00f78a34(/*Atlas.Gameplay.InteractableController[]_TypeInfo*/ uRam0000000003d1f118);
          *(undefined8 *)(param_1 + 0x10) = uVar6;
          if (0 < *(int *)(lVar3 + 0x18)) {
            func_0x00f78aec(/*Atlas.Gameplay.InteractableController_TypeInfo*/ uRam0000000003d22958);
            return;
          }
        }
      }
    }
  }
  return;
}



// ============================================================
// RVA: 0x15b89ac | Atlas.Gameplay.InteractableManager.DeInit
// ============================================================

void Atlas_Gameplay_InteractableManager__DeInit(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      lVar4 = 0;
      do {
        if (uVar1 <= (uint)lVar4) {
          uVar2 = func_0x00f78b24();
          func_0x00f78ac0(uVar2,0);
LAB_015b8a20:
          func_0x00f78af4();
          return;
        }
        if (*(long *)(lVar3 + 0x20 + lVar4 * 8) == 0) goto LAB_015b8a20;
        Atlas_Gameplay_InteractableController__DeInit();
        uVar1 = *(uint *)(lVar3 + 0x18);
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < (int)uVar1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x15b8a24 | Atlas.Gameplay.InteractableManager..ctor
// ============================================================

void Atlas_Gameplay_InteractableManager___ctor(void)

{
  return;
}



