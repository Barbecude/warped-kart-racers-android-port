// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.ObjectCache.Entry<int, object>

// ============================================================
// RVA: 0x1f5e334 | Core.Containers.ObjectCache.Entry<int, object>..ctor
// ============================================================

/* WARNING: Possible PIC construction at 0x01f5e4cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f5e4d0) */

undefined1  [16]
Core_Containers_ObjectCache_Entry_int__object____ctor
          (ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uStack_ec;
  long *plStack_e8;
  undefined4 uStack_4c;
  long *plStack_48;
  
  if (param_1 == 0) {
    auVar7 = func_0x00f78af4();
    if ((bRam0000000003eb7901 & 1) == 0) {
      func_0x00f78a20(0x3d66e40);
      func_0x00f78a20(0x3d66dc0);
      func_0x00f78a20(0x3d66ef8);
      bRam0000000003eb7901 = 1;
    }
    plStack_48 = (long *)0x0;
    lVar3 = *(long *)(auVar7._0_8_ + 0x10);
    if (lVar3 != 0) {
      iVar1 = (**(code **)**(undefined8 **)(*(long *)(auVar7._8_8_ + 0x18) + 0xc0))
                        (lVar3,&plStack_48);
      auVar8._8_8_ = extraout_x1;
      auVar8._0_8_ = /*STR('(Dead)')*/ uRam0000000003d66e40;
      if (iVar1 != 0) {
        if (plStack_48 == (long *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(*plStack_48 + 0x168))
                            (plStack_48,*(undefined8 *)(*plStack_48 + 0x170));
        }
        uStack_4c = (*(code *)**(undefined8 **)
                                (*(long *)(*(long *)(auVar7._8_8_ + 0x18) + 0xc0) + 0x10))
                              (auVar7._0_8_);
        uVar5 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_4c,0);
        auVar8 = /*System.String$$Concat*/ func_0x029be818(uVar4,/*STR('(')*/ uRam0000000003d66dc0,uVar5,/*STR(')')*/ uRam0000000003d66ef8,0);
      }
      return auVar8;
    }
    auVar7 = func_0x00f78af4();
    lVar3 = auVar7._0_8_;
    if (lVar3 != 0) {
      uVar6 = 0;
      do {
        lVar3 = *(long *)(lVar3 + 0x40);
        uVar6 = CONCAT44(0,(int)uVar6 + 1);
      } while (lVar3 != 0);
      auVar7._0_8_ = uVar6;
      return auVar7;
    }
    param_1 = func_0x00f78af4();
    if (((param_1 == 0) && (param_1 = func_0x00f78af4(), param_1 == 0)) &&
       (param_1 = func_0x00f78af4(), param_1 == 0)) {
      auVar7 = func_0x00f78af4();
      if ((bRam0000000003eb7902 & 1) == 0) {
        func_0x00f78a20(0x3d66e40);
        func_0x00f78a20(0x3d66dc0);
        func_0x00f78a20(0x3d66ef8);
        bRam0000000003eb7902 = 1;
      }
      plStack_e8 = (long *)0x0;
      lVar3 = *(long *)(auVar7._0_8_ + 0x10);
      if (lVar3 != 0) {
        iVar1 = (**(code **)**(undefined8 **)(*(long *)(auVar7._8_8_ + 0x18) + 0xc0))
                          (lVar3,&plStack_e8);
        auVar9._8_8_ = extraout_x1_00;
        auVar9._0_8_ = /*STR('(Dead)')*/ uRam0000000003d66e40;
        if (iVar1 != 0) {
          if (plStack_e8 == (long *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = (**(code **)(*plStack_e8 + 0x168))
                              (plStack_e8,*(undefined8 *)(*plStack_e8 + 0x170));
          }
          uStack_ec = (*(code *)**(undefined8 **)
                                  (*(long *)(*(long *)(auVar7._8_8_ + 0x18) + 0xc0) + 0x10))
                                (auVar7._0_8_);
          uVar5 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_ec,0);
          auVar9 = /*System.String$$Concat*/ func_0x029be818(uVar4,/*STR('(')*/ uRam0000000003d66dc0,uVar5,/*STR(')')*/ uRam0000000003d66ef8,0);
        }
        return auVar9;
      }
      auVar7 = func_0x00f78af4();
      auVar10._8_8_ = auVar7._8_8_;
      lVar3 = auVar7._0_8_;
      if (lVar3 != 0) {
        uVar6 = 0;
        do {
          lVar3 = *(long *)(lVar3 + 0x30);
          uVar6 = CONCAT44(0,(int)uVar6 + 1);
        } while (lVar3 != 0);
        auVar10._0_8_ = uVar6;
        return auVar10;
      }
      param_1 = func_0x00f78af4();
      if (param_1 == 0) {
        func_0x00f78af4();
        iVar1 = (**(code **)**(undefined8 **)(*(long *)(param_4 + 0x18) + 0xc0))(extraout_x1_01);
        iVar2 = (**(code **)**(undefined8 **)(*(long *)(param_4 + 0x18) + 0xc0))(param_3);
        auVar11._1_7_ = 0;
        auVar11[0] = iVar1 == iVar2;
        auVar11._8_8_ = extraout_x1_02;
        return auVar11;
      }
    }
  }
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_1;
  return auVar12;
}



