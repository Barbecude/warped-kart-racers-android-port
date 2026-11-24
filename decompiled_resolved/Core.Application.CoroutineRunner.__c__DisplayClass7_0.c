// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Application.CoroutineRunner.<>c__DisplayClass7_0

// ============================================================
// RVA: 0x163384c | Core.Application.CoroutineRunner.<>c__DisplayClass7_0..ctor
// ============================================================

void Core_Application_CoroutineRunner___c__DisplayClass7_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1633ee0 | Core.Application.CoroutineRunner.<>c__DisplayClass7_0.<StartTrackedCoroutine>b__0
// ============================================================

/* WARNING: Possible PIC construction at 0x01633fa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01633fa8) */
/* WARNING: Removing unreachable block (ram,0x01633fb0) */
/* WARNING: Removing unreachable block (ram,0x01633fb8) */

void Core_Application_CoroutineRunner___c__DisplayClass7_0___StartTrackedCoroutine_b__0
               (long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar7;
  long lVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  
  if ((bRam0000000003eb5675 & 1) == 0) {
    func_0x00f78a20(0x3d3a8e8);
    func_0x00f78a20(0x3d3a8f8);
    func_0x00f78a20(0x3d3a900);
    func_0x00f78a20(0x3d3bfe8);
    bRam0000000003eb5675 = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar3 != 0)) {
    iVar2 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar3,*(undefined8 *)(param_1 + 0x18),uRam0000000003d3a8e8);
    if (iVar2 == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar3 != 0)) {
      uVar4 = /*System.Collections.Generic.List<Thread>$$IndexOf*/ func_0x02427d58(lVar3,*(undefined8 *)(param_1 + 0x18),uRam0000000003d3a8f8);
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar3 != 0)) {
        uVar7 = *(uint *)(lVar3 + 0x18);
        uVar6 = (uint)uVar4;
        uVar5 = uRam0000000003d3a900;
        uVar11 = uVar4;
        if (uVar7 <= uVar6) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar7 = *(uint *)(lVar3 + 0x18);
        }
        iVar2 = uVar7 - 1;
        *(int *)(lVar3 + 0x18) = iVar2;
        if (iVar2 - uVar6 != 0 && (int)uVar6 <= iVar2) {
          uVar5 = *(undefined8 *)(lVar3 + 0x10);
          /*System.Array$$Copy*/ func_0x0292b4cc(uVar5,uVar6 + 1,uVar5,uVar4,iVar2 - uVar6,0,in_x6,in_x7,uVar11,param_1);
        }
        lVar8 = *(long *)(lVar3 + 0x10);
        if (lVar8 == 0) {
          func_0x00f78af4();
        }
        else if (*(uint *)(lVar3 + 0x18) < *(uint *)(lVar8 + 0x18)) {
          *(undefined8 *)(lVar8 + (long)(int)*(uint *)(lVar3 + 0x18) * 8 + 0x20) = 0;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          return;
        }
        uVar4 = func_0x00f78b24();
        auVar10 = func_0x00f78ac0(uVar4,0);
        lVar3 = auVar10._0_8_;
        iVar2 = auVar10._8_4_;
        iVar9 = (int)uVar5;
        if (iVar2 < 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
        }
        if (iVar9 < 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
        }
        if (*(int *)(lVar3 + 0x18) - iVar2 < iVar9) {
          /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
        }
        if (0 < iVar9) {
          iVar1 = *(int *)(lVar3 + 0x18) - iVar9;
          *(int *)(lVar3 + 0x18) = iVar1;
          if (iVar1 - iVar2 != 0 && iVar2 <= iVar1) {
            /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar3 + 0x10),iVar9 + iVar2,
                            *(undefined8 *)(lVar3 + 0x10),auVar10._8_8_,iVar1 - iVar2,0);
            iVar1 = *(int *)(lVar3 + 0x18);
          }
          /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar3 + 0x10),iVar1,uVar5,0);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        }
        return;
      }
    }
  }
  func_0x00f78af4();
  return;
}



