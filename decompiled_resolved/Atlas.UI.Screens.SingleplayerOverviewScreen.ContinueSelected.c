// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.SingleplayerOverviewScreen.ContinueSelected

// ============================================================
// RVA: 0x156a924 | Atlas.UI.Screens.SingleplayerOverviewScreen.ContinueSelected..ctor
// ============================================================

void Atlas_UI_Screens_SingleplayerOverviewScreen_ContinueSelected___ctor
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_1 + 0x10) = *param_3;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 **)(param_1 + 0x28) = param_3;
  return;
}



// ============================================================
// RVA: 0x156a934 | Atlas.UI.Screens.SingleplayerOverviewScreen.ContinueSelected.Invoke
// ============================================================

undefined8
Atlas_UI_Screens_SingleplayerOverviewScreen_ContinueSelected__Invoke
          (long param_1,undefined1 *param_2,undefined8 param_3)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined1 *puStack_68;
  
  plVar15 = &lStack_70;
  lStack_70 = param_1;
  puStack_68 = param_2;
  lVar8 = *(long *)(param_1 + 0x68);
  if (lVar8 == 0) {
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar8 + 0x18);
    if (lVar14 == 0) {
      return 0;
    }
    plVar15 = (long *)(lVar8 + 0x20);
  }
  lVar8 = 0;
  do {
    lVar9 = *(long *)((long)plVar15 + lVar8 * 8);
    pcVar13 = *(code **)(lVar9 + 0x10);
    plVar1 = *(long **)(lVar9 + 0x20);
    lVar9 = *(long *)(lVar9 + 0x28);
    if (*(short *)(lVar9 + 0x48) == -1) {
      func_0x00f78ad8(lVar9);
    }
    iVar3 = func_0x00f78a4c(lVar9);
    if (iVar3 == 0) {
      puVar5 = auStack_78;
      if (plVar1 == (long *)0x0) goto code_r0x0156aa6c;
      if (((*(short *)(lVar9 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
         (*(long *)(param_1 + 0x18) == 0)) goto code_r0x0156aa50;
      iVar3 = func_0x00f78a44(lVar9);
      iVar4 = func_0x00f78ec0(lVar9);
      puVar5 = puStack_68;
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar9 + 0x48);
        if (iVar4 == 0) {
          lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
          uVar6 = (**(code **)(lVar9 + 0x138))
                            (plVar1,puStack_68,param_3,*(undefined8 *)(lVar9 + 0x140));
          goto code_r0x0156aa78;
        }
        lVar9 = func_0x00f78a48(lVar9);
        puVar5 = puStack_68;
        lVar10 = *plVar1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar7 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x0156ab50;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x0156ab50:
        pcVar13 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar4 == 0) {
          uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar10 = *plVar1;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x0156ab20;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar10 = func_0x00fac1f0(plVar1);
code_r0x0156ab20:
          uVar6 = *(undefined8 *)(lVar10 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar9);
        pcVar13 = (code *)*puVar7;
      }
      uVar6 = (*pcVar13)(plVar1,puVar5,param_3,puVar7);
    }
    else {
      puVar5 = puStack_68;
      if (*(char *)(lVar9 + 0x4a) == '\x02') {
code_r0x0156aa6c:
        uVar6 = (*pcVar13)(puVar5,param_3,lVar9);
      }
      else {
code_r0x0156aa50:
        uVar6 = (*pcVar13)(plVar1,puStack_68,param_3,lVar9);
      }
    }
code_r0x0156aa78:
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar14) {
      return uVar6;
    }
  } while( true );
}



// ============================================================
// RVA: 0x156ab8c | Atlas.UI.Screens.SingleplayerOverviewScreen.ContinueSelected.BeginInvoke
// ============================================================

ulong Atlas_UI_Screens_SingleplayerOverviewScreen_ContinueSelected__BeginInvoke
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 extraout_x1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR_03a5d648;
  uStack_70 = param_3;
  uStack_68 = param_2;
  if ((bRam0000000003eb4ffe & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb4ffe = 1;
  }
  uStack_50 = 0;
  uStack_60 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ uRam0000000003d21270,&uStack_68);
  uStack_58 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ uRam0000000003d21270,&uStack_70);
  uVar1 = func_0x00f789cc(param_1,&uStack_60,param_4,param_5);
  if (*(long *)PTR_03a5d648 == lStack_48) {
    return uVar1;
  }
  ___stack_chk_fail();
  lVar2 = func_0x00f789d0(extraout_x1,0);
  if (lVar2 != 0) {
    pbVar3 = (byte *)func_0x00f78ae4();
    return (ulong)*pbVar3;
  }
  uVar1 = func_0x00f78af4();
  return uVar1;
}



// ============================================================
// RVA: 0x156ac58 | Atlas.UI.Screens.SingleplayerOverviewScreen.ContinueSelected.EndInvoke
// ============================================================

ulong Atlas_UI_Screens_SingleplayerOverviewScreen_ContinueSelected__EndInvoke
                (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  
  lVar1 = func_0x00f789d0(param_2,0);
  if (lVar1 != 0) {
    pbVar2 = (byte *)func_0x00f78ae4();
    return (ulong)*pbVar2;
  }
  uVar3 = func_0x00f78af4();
  return uVar3;
}



