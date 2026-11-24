// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.VotingManager.VoteOptionIds

// ============================================================
// RVA: 0x156dc24 | Atlas.UI.VotingManager.VoteOptionIds.Reset
// ============================================================

void Atlas_UI_VotingManager_VoteOptionIds__Reset(undefined8 *param_1)

{
  if ((bRam0000000003eb5018 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb5018 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *param_1 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  param_1[1] = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  return;
}



// ============================================================
// RVA: 0x156dca8 | Atlas.UI.VotingManager.VoteOptionIds.AreSet
// ============================================================

/* WARNING: Possible PIC construction at 0x0156dd14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0156dd18) */
/* WARNING: Removing unreachable block (ram,0x0156dd5c) */
/* WARNING: Removing unreachable block (ram,0x0156dd1c) */
/* WARNING: Removing unreachable block (ram,0x0156dd2c) */
/* WARNING: Removing unreachable block (ram,0x0156dd34) */
/* WARNING: Removing unreachable block (ram,0x0156dd3c) */

uint Atlas_UI_VotingManager_VoteOptionIds__AreSet(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb5019 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb5019 = 1;
  }
  uVar3 = *param_1;
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  if ((bRam0000000003eb574c & 1) == 0) {
    func_0x00f78a20(0x3d21270,uVar2,0);
    bRam0000000003eb574c = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar3,uVar2);
  return uVar1 ^ 1;
}



// ============================================================
// RVA: 0x156dd6c | Atlas.UI.VotingManager.VoteOptionIds.ToString
// ============================================================

long Atlas_UI_VotingManager_VoteOptionIds__ToString(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb501a & 1) == 0) {
    func_0x00f78a20(0x3d660e0);
    func_0x00f78a20(0x3d6d278);
    bRam0000000003eb501a = 1;
  }
  lVar1 = /*STR('GameType.Value ')*/ lRam0000000003d6d278;
  lVar4 = /*STR(' Map ')*/ lRam0000000003d660e0;
  lVar2 = *param_1;
  lVar5 = param_1[1];
  if ((bRam0000000003eb9469 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9469 = 1;
  }
  if ((((lVar1 == 0) && (lVar2 == 0)) && (lVar4 == 0)) && (lVar5 == 0)) {
    lVar3 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  else {
    if (lVar1 == 0) {
      lVar1 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (lVar2 == 0) {
      lVar2 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (lVar4 == 0) {
      lVar4 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (lVar5 == 0) {
      lVar5 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (((lVar1 == 0) || (lVar2 == 0)) || ((lVar4 == 0 || (lVar5 == 0)))) {
      auVar6 = func_0x00f78af4();
      lVar2 = auVar6._8_8_;
      lVar5 = auVar6._0_8_;
      if ((bRam0000000003eb93dc & 1) == 0) {
        func_0x00f78a20(0x3d65ed8);
        bRam0000000003eb93dc = 1;
      }
      lVar4 = /*STR(' ')*/ lRam0000000003d65ed8;
      if (lVar2 == 0) {
        return lVar5;
      }
      if ((bRam0000000003eb9468 & 1) == 0) {
        func_0x00f78a20(0x3d24dd0);
        bRam0000000003eb9468 = 1;
      }
      if (((lVar5 == 0) && (lVar4 == 0)) && (lVar2 == 0)) {
        lVar1 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      }
      else {
        if (lVar5 == 0) {
          lVar5 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (lVar4 == 0) {
          lVar4 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (lVar2 == 0) {
          lVar2 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (((lVar5 == 0) || (lVar4 == 0)) || (lVar2 == 0)) {
          lVar2 = func_0x00f78af4();
          return lVar2;
        }
        lVar1 = func_0x00f834ac(*(int *)(lVar4 + 0x10) + *(int *)(lVar5 + 0x10) +
                                *(int *)(lVar2 + 0x10));
        /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar1,0,lVar5);
        /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar1,*(undefined4 *)(lVar5 + 0x10),lVar4);
        /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar1,*(int *)(lVar4 + 0x10) + *(int *)(lVar5 + 0x10),lVar2);
      }
      return lVar1;
    }
    lVar3 = func_0x00f834ac(*(int *)(lVar2 + 0x10) + *(int *)(lVar1 + 0x10) + *(int *)(lVar4 + 0x10)
                            + *(int *)(lVar5 + 0x10));
    /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar3,0,lVar1);
    /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar3,*(undefined4 *)(lVar1 + 0x10),lVar2);
    /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar3,*(int *)(lVar2 + 0x10) + *(int *)(lVar1 + 0x10),lVar4);
    /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar3,*(int *)(lVar2 + 0x10) + *(int *)(lVar1 + 0x10) + *(int *)(lVar4 + 0x10),
                    lVar5);
  }
  return lVar3;
}



