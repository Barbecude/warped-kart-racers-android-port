// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.ServicesManager

// ============================================================
// RVA: 0x1684d84 | Core.Services.ServicesManager.OnMatchData
// ============================================================

long Core_Services_ServicesManager__OnMatchData
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  code *pcVar16;
  long lVar17;
  long lStack_68;
  
  if ((bRam0000000003eb5a18 & 1) == 0) {
    func_0x00f78a20(0x3d2a620);
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a18 = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = **(long **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8);
  if (lVar7 == 0) {
    lVar7 = func_0x00f78af4();
    return *(long *)(lVar7 + 0x30);
  }
  bVar3 = param_5 != 0;
  lStack_68 = lVar7;
  lVar10 = *(long *)(lVar7 + 0x68);
  if (lVar10 == 0) {
    plVar15 = &lStack_68;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar10 + 0x18);
    if (lVar17 == 0) {
      return lVar7;
    }
    plVar15 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar15[lVar10];
    pcVar16 = *(code **)(lVar11 + 0x10);
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar11 = *(long *)(lVar11 + 0x28);
    if (*(short *)(lVar11 + 0x48) == -1) {
      func_0x00f78ad8(lVar11);
    }
    iVar5 = func_0x00f78a4c(lVar11);
    bVar4 = *(char *)(lVar11 + 0x4a) == '\x05';
    if (iVar5 == 0) {
      if (bVar4) {
        if (plVar1 == (long *)0x0) {
code_r0x01e75d90:
          lVar11 = (*pcVar16)(param_1,param_2,param_3,param_4,bVar3,lVar11);
        }
        else {
          if (((*(short *)(lVar11 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar7 + 0x18) == 0)) goto code_r0x01e75c70;
          iVar5 = func_0x00f78a44(lVar11);
          iVar6 = func_0x00f78ec0(lVar11);
          if (iVar5 == 0) {
            uVar2 = *(ushort *)(lVar11 + 0x48);
            if (iVar6 == 0) {
              lVar11 = *plVar1 + (ulong)uVar2 * 0x10;
              lVar11 = (**(code **)(lVar11 + 0x138))
                                 (plVar1,param_1,param_2,param_3,param_4,bVar3,
                                  *(undefined8 *)(lVar11 + 0x140));
              goto code_r0x01e75dac;
            }
            lVar11 = func_0x00f78a48(lVar11);
            lVar12 = *plVar1;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar11) {
                  puVar9 = (undefined8 *)
                           (lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e75f68;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar2);
code_r0x01e75f68:
            pcVar16 = (code *)*puVar9;
            puVar9 = (undefined8 *)puVar9[1];
          }
          else {
            if (iVar6 == 0) {
              uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar12 = *plVar1;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                    lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e75f40;
                  }
                  piVar14 = piVar14 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              lVar12 = func_0x00fac1f0(plVar1);
code_r0x01e75f40:
              uVar8 = *(undefined8 *)(lVar12 + 8);
            }
            puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar11);
            pcVar16 = (code *)*puVar9;
          }
          lVar11 = (*pcVar16)(plVar1,param_1,param_2,param_3,param_4,bVar3,puVar9);
        }
      }
      else {
        if ((*(short *)(lVar11 + 0x48) == -1) || (*(long *)(lVar7 + 0x18) == 0))
        goto code_r0x01e75d90;
        iVar5 = func_0x00f78a44(lVar11);
        iVar6 = func_0x00f78ec0(lVar11);
        if (iVar5 == 0) {
          uVar2 = *(ushort *)(lVar11 + 0x48);
          if (iVar6 == 0) {
            lVar11 = *param_1 + (ulong)uVar2 * 0x10;
            lVar11 = (**(code **)(lVar11 + 0x138))
                               (param_1,param_2,param_3,param_4,bVar3,
                                *(undefined8 *)(lVar11 + 0x140));
            goto code_r0x01e75dac;
          }
          lVar11 = func_0x00f78a48(lVar11);
          lVar12 = *param_1;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar9 = (undefined8 *)(lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01e75ee4;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(param_1,lVar11,(ulong)uVar2);
code_r0x01e75ee4:
          pcVar16 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar6 == 0) {
            uVar8 = *(undefined8 *)(*param_1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar12 = *param_1;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e75ebc;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            lVar12 = func_0x00fac1f0(param_1);
code_r0x01e75ebc:
            uVar8 = *(undefined8 *)(lVar12 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar11);
          pcVar16 = (code *)*puVar9;
        }
        lVar11 = (*pcVar16)(param_1,param_2,param_3,param_4,bVar3,puVar9);
      }
    }
    else {
      if (bVar4) goto code_r0x01e75d90;
code_r0x01e75c70:
      lVar11 = (*pcVar16)(plVar1,param_1,param_2,param_3,param_4,bVar3,lVar11);
    }
code_r0x01e75dac:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar17) {
      return lVar11;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1684e4c | Core.Services.ServicesManager.get_Client
// ============================================================

undefined8 Core_Services_ServicesManager__get_Client(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x1684e54 | Core.Services.ServicesManager.set_Client
// ============================================================

void Core_Services_ServicesManager__set_Client(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}



// ============================================================
// RVA: 0x1684e5c | Core.Services.ServicesManager.get_AppVersion
// ============================================================

undefined8 Core_Services_ServicesManager__get_AppVersion(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1684e64 | Core.Services.ServicesManager.get_LastReceivedPartyCode
// ============================================================

undefined8 Core_Services_ServicesManager__get_LastReceivedPartyCode(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1684e6c | Core.Services.ServicesManager.Init
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Core_Services_ServicesManager__Init(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined4 uStack_13f;
  undefined3 uStack_13b;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined2 uStack_d6;
  undefined1 uStack_d4;
  undefined2 uStack_d3;
  undefined1 uStack_d1;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined2 uStack_b8;
  undefined1 uStack_b6;
  undefined5 uStack_b5;
  undefined3 uStack_b0;
  undefined5 uStack_ad;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined8 uStack_70;
  
  if ((bRam0000000003eb5a17 & 1) == 0) {
    func_0x00f78a20(0x3d29fc8);
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d2a258);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d1b528);
    func_0x00f78a20(0x3d23270);
    func_0x00f78a20(0x3d5cd70);
    func_0x00f78a20(0x3d5cd78);
    func_0x00f78a20(0x3d24978);
    func_0x00f78a20(0x3d25238);
    func_0x00f78a20(0x3d63d60);
    func_0x00f78a20(0x3d63d68);
    func_0x00f78a20(0x3d63d70);
    func_0x00f78a20(0x3d28c00);
    func_0x00f78a20(0x3d7be78);
    func_0x00f78a20(0x3d78cb8);
    func_0x00f78a20(0x3d79928);
    bRam0000000003eb5a17 = 1;
  }
  *(undefined8 *)(param_1 + 0x18) = param_2;
  lVar3 = /*UnityEngine.Application$$get_identifier*/ func_0x032187cc(0);
  if ((lVar3 != 0) && (lVar3 = /*System.String$$ToLower*/ func_0x029cec0c(lVar3,0), lVar3 != 0)) {
    uVar2 = /*System.String$$Contains*/ func_0x029cd7a4(lVar3,/*STR('testflight')*/ uRam0000000003d7be78,0);
    uVar4 = Core_Services_Client__Create(0);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    if (*(long *)(param_1 + 0x40) != 0) {
      /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(*(long *)(param_1 + 0x40),uVar4,uRam0000000003d29fc8);
      uVar4 = /*STR('e80669df-8700-49f6-a63d-7a6310d34e00')*/ uRam0000000003d78cb8;
      plVar10 = *(long **)(param_1 + 0x30);
      uVar14 = *(undefined8 *)(param_1 + 0x18);
      if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*System.TimeSpan$$FromSeconds*/ func_0x029f0a04(0x403e000000000000,0);
      uVar6 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x3ff0000000000000,0);
      uVar7 = /*System.TimeSpan$$FromSeconds*/ func_0x029f0a04(0x4024000000000000,0);
      uVar8 = /*UnityEngine.SystemInfo$$get_deviceName*/ func_0x0326d558(0);
      uVar1 = /*STR('iCloud.com.electricsquare.atlas-testflight-save')*/ uRam0000000003d79928;
      if (((*(ushort *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar9 = *(undefined8 **)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8);
      lVar13 = puVar9[1];
      lVar3 = /*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00;
      if (lVar13 == 0) {
        if (((*(ushort *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xe0) == 0)) {
          func_0x00f78ad0();
          puVar9 = *(undefined8 **)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8);
        }
        uVar11 = *puVar9;
        lVar13 = func_0x00f78aec(/*System.Action<object>_TypeInfo*/ uRam0000000003d1b528);
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar13,uVar11,uRam0000000003d63d60,uRam0000000003d2a258);
        lVar3 = /*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00;
        *(long *)(*(long *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8) + 8) = lVar13;
      }
      if (((*(ushort *)(lVar3 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar3 = /*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00;
      }
      puVar9 = *(undefined8 **)(lVar3 + 0xb8);
      lVar15 = puVar9[2];
      if (lVar15 == 0) {
        if (((*(ushort *)(lVar3 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
          func_0x00f78ad0();
          puVar9 = *(undefined8 **)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8);
        }
        uVar11 = *puVar9;
        lVar15 = func_0x00f78aec(/*System.Action<object>_TypeInfo*/ uRam0000000003d1b528);
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar15,uVar11,uRam0000000003d63d68,uRam0000000003d2a258);
        lVar3 = /*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00;
        *(long *)(*(long *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8) + 0x10) = lVar15;
      }
      if (((*(ushort *)(lVar3 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar3 = /*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00;
      }
      puVar9 = *(undefined8 **)(lVar3 + 0xb8);
      lVar16 = puVar9[3];
      if (lVar16 == 0) {
        if (((*(ushort *)(lVar3 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
          func_0x00f78ad0();
          puVar9 = *(undefined8 **)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8);
        }
        uVar11 = *puVar9;
        lVar16 = func_0x00f78aec(/*System.Action<object>_TypeInfo*/ uRam0000000003d1b528);
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar16,uVar11,uRam0000000003d63d70,uRam0000000003d2a258);
        *(long *)(*(long *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8) + 0x18) = lVar16;
      }
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*System.TimeSpan$$FromSeconds*/ func_0x029f0a04(0x403e000000000000,0);
      lVar3 = func_0x00f78aec(/*Core.Services.MatchReceiveDataFunc_TypeInfo*/ uRam0000000003d23270);
      puVar9 = puRam0000000003d5cd78;
      *(undefined8 *)(lVar3 + 0x10) = *puRam0000000003d5cd78;
      *(undefined8 *)(lVar3 + 0x20) = 0;
      *(undefined8 **)(lVar3 + 0x28) = puVar9;
      if (plVar10 != (long *)0x0) {
        uStack_178 = 0;
        uStack_170 = 0;
        uStack_160 = uVar1;
        uStack_158 = _UNK_03408128;
        uStack_150 = 0;
        uStack_140 = 6;
        uStack_13f = 0;
        uStack_13b = 0;
        uStack_138 = uVar4;
        uStack_128 = 0;
        uStack_120 = 0;
        uStack_118 = 0;
        uStack_108 = 0;
        uStack_e8 = _UNK_03408130;
        uStack_e0 = 0x100000100000003;
        uStack_d8 = 0;
        uStack_d6 = 0x100;
        uStack_d4 = 1;
        uStack_d1 = 0;
        uStack_d3 = 0;
        uStack_b8 = 1;
        uStack_b6 = 1;
        uStack_b5 = 0;
        uStack_b0 = 0;
        uStack_ad = 0;
        uStack_a0 = 0;
        uStack_98 = 6;
        uStack_74 = 0;
        uStack_8c = 0;
        uStack_94 = 0;
        uStack_7c = 0;
        uStack_84 = 0;
        uStack_70 = _UNK_03408138;
        uStack_168 = uVar8;
        uStack_148 = uVar11;
        uStack_130 = uVar14;
        uStack_110 = uVar5;
        uStack_100 = uVar12;
        uStack_f8 = uVar6;
        uStack_f0 = uVar7;
        uStack_d7 = uVar2;
        lStack_d0 = lVar13;
        lStack_c8 = lVar15;
        lStack_c0 = lVar16;
        lStack_a8 = lVar3;
        (**(code **)(*plVar10 + 0x178))(plVar10,&uStack_178,*(undefined8 *)(*plVar10 + 0x180));
        plVar10 = *(long **)(param_1 + 0x30);
        if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x1e8))(plVar10,6,*(undefined8 *)(*plVar10 + 0x1f0));
          lVar3 = *(long *)(param_1 + 0x30);
          if (lVar3 != 0) {
            uVar14 = *(undefined8 *)(lVar3 + 0x138);
            uVar4 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
            /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar4,param_1,uRam0000000003d5cd70,uRam0000000003d2a320);
            plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar14,uVar4,0);
            if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
              *(long **)(lVar3 + 0x138) = plVar10;
              return plVar10;
            }
            goto LAB_01685448;
          }
        }
      }
    }
  }
  func_0x00f78af4();
LAB_01685448:
  func_0x00f78e5c();
  return (long *)((long)&MACH_HEADER.cputype + 2);
}



// ============================================================
// RVA: 0x168544c | Core.Services.ServicesManager.GetPhotonLogLevel
// ============================================================

undefined8 Core_Services_ServicesManager__GetPhotonLogLevel(void)

{
  return 6;
}



// ============================================================
// RVA: 0x1685454 | Core.Services.ServicesManager.EditorPersistLocalPlayerId
// ============================================================

undefined8 Core_Services_ServicesManager__EditorPersistLocalPlayerId(void)

{
  return 1;
}



// ============================================================
// RVA: 0x168545c | Core.Services.ServicesManager.GetGuestName
// ============================================================

void Core_Services_ServicesManager__GetGuestName(void)

{
  if (pcRam0000000003ec12c0 == (code *)0x0) {
    pcRam0000000003ec12c0 = (code *)func_0x00f789d4("UnityEngine.SystemInfo::GetDeviceName()");
  }
                    /* WARNING: Could not recover jumptable at 0x0326d588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec12c0)();
  return;
}



// ============================================================
// RVA: 0x1685464 | Core.Services.ServicesManager.IsLoggingEnabled
// ============================================================

undefined8 Core_Services_ServicesManager__IsLoggingEnabled(void)

{
  return 0;
}



// ============================================================
// RVA: 0x168546c | Core.Services.ServicesManager.HasAccessPointSupport
// ============================================================

void Core_Services_ServicesManager__HasAccessPointSupport(long param_1)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  long lVar7;
  
  plVar3 = *(long **)(param_1 + 0x30);
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01685490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x518))(plVar3,0,*(undefined8 *)(*plVar3 + 0x520));
    return;
  }
  lVar4 = func_0x00f78af4();
  plVar3 = *(long **)(lVar4 + 0x30);
  if (plVar3 != (long *)0x0) {
    iVar2 = (**(code **)(*plVar3 + 0x518))(plVar3,0,*(undefined8 *)(*plVar3 + 0x520));
    if (iVar2 == 0) {
      return;
    }
    plVar3 = *(long **)(lVar4 + 0x30);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x016854f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x9a8))(plVar3,1,1,1,*(undefined8 *)(*plVar3 + 0x9b0));
      return;
    }
  }
  lVar4 = func_0x00f78af4();
  plVar3 = *(long **)(lVar4 + 0x30);
  if (plVar3 != (long *)0x0) {
    iVar2 = (**(code **)(*plVar3 + 0x518))(plVar3,0,*(undefined8 *)(*plVar3 + 0x520));
    if (iVar2 == 0) {
      return;
    }
    plVar3 = *(long **)(lVar4 + 0x30);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01685550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x9b8))(plVar3,*(undefined8 *)(*plVar3 + 0x9c0));
      return;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb5a19 & 1) == 0) {
    func_0x00f78a20(0x3d1b710);
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a19 = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(**(undefined8 **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8),extraout_x1,0);
  if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710)) {
    **(long **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) = (long)plVar3;
    return;
  }
  func_0x00f78e5c();
  if ((bRam0000000003eb5a1a & 1) == 0) {
    func_0x00f78a20(0x3d1b710);
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a1a = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(**(undefined8 **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8),extraout_x1_00,0);
  if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710)) {
    **(long **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) = (long)plVar3;
    return;
  }
  lVar4 = func_0x00f78e5c();
  if ((bRam0000000003eb5a1b & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d5cd70);
    bRam0000000003eb5a1b = 1;
  }
  lVar7 = *(long *)(lVar4 + 0x30);
  if (lVar7 != 0) {
    uVar6 = *(undefined8 *)(lVar7 + 0x138);
    uVar5 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar5,lVar4,uRam0000000003d5cd70,uRam0000000003d2a320);
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,uVar5,0);
    if (plVar3 != (long *)0x0) {
      if (*plVar3 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598) goto code_r0x016857bc;
    }
    *(long **)(lVar7 + 0x138) = plVar3;
    plVar3 = *(long **)(lVar4 + 0x30);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
      *(undefined8 *)(lVar4 + 0x30) = 0;
      return;
    }
  }
  func_0x00f78af4();
code_r0x016857bc:
  lVar4 = func_0x00f78e5c();
  if ((bRam0000000003eb5a1c & 1) == 0) {
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a1c = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = *(undefined8 *)(*(long *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar5,0);
  plVar3 = *(long **)(lVar4 + 0x30);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec05a0)(uVar5);
    return;
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1685864);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1685498 | Core.Services.ServicesManager.ShowAccessPoint
// ============================================================

void Core_Services_ServicesManager__ShowAccessPoint(long param_1)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  long lVar7;
  
  plVar3 = *(long **)(param_1 + 0x30);
  if (plVar3 != (long *)0x0) {
    iVar2 = (**(code **)(*plVar3 + 0x518))(plVar3,0,*(undefined8 *)(*plVar3 + 0x520));
    if (iVar2 == 0) {
      return;
    }
    plVar3 = *(long **)(param_1 + 0x30);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x016854f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x9a8))(plVar3,1,1,1,*(undefined8 *)(*plVar3 + 0x9b0));
      return;
    }
  }
  lVar4 = func_0x00f78af4();
  plVar3 = *(long **)(lVar4 + 0x30);
  if (plVar3 != (long *)0x0) {
    iVar2 = (**(code **)(*plVar3 + 0x518))(plVar3,0,*(undefined8 *)(*plVar3 + 0x520));
    if (iVar2 == 0) {
      return;
    }
    plVar3 = *(long **)(lVar4 + 0x30);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01685550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x9b8))(plVar3,*(undefined8 *)(*plVar3 + 0x9c0));
      return;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb5a19 & 1) == 0) {
    func_0x00f78a20(0x3d1b710);
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a19 = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(**(undefined8 **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8),extraout_x1,0);
  if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710)) {
    **(long **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) = (long)plVar3;
    return;
  }
  func_0x00f78e5c();
  if ((bRam0000000003eb5a1a & 1) == 0) {
    func_0x00f78a20(0x3d1b710);
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a1a = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(**(undefined8 **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8),extraout_x1_00,0);
  if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710)) {
    **(long **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) = (long)plVar3;
    return;
  }
  lVar4 = func_0x00f78e5c();
  if ((bRam0000000003eb5a1b & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d5cd70);
    bRam0000000003eb5a1b = 1;
  }
  lVar7 = *(long *)(lVar4 + 0x30);
  if (lVar7 != 0) {
    uVar6 = *(undefined8 *)(lVar7 + 0x138);
    uVar5 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar5,lVar4,uRam0000000003d5cd70,uRam0000000003d2a320);
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,uVar5,0);
    if (plVar3 != (long *)0x0) {
      if (*plVar3 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598) goto code_r0x016857bc;
    }
    *(long **)(lVar7 + 0x138) = plVar3;
    plVar3 = *(long **)(lVar4 + 0x30);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
      *(undefined8 *)(lVar4 + 0x30) = 0;
      return;
    }
  }
  func_0x00f78af4();
code_r0x016857bc:
  lVar4 = func_0x00f78e5c();
  if ((bRam0000000003eb5a1c & 1) == 0) {
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a1c = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = *(undefined8 *)(*(long *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar5,0);
  plVar3 = *(long **)(lVar4 + 0x30);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec05a0)(uVar5);
    return;
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1685864);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1685504 | Core.Services.ServicesManager.HideAccessPoint
// ============================================================

void Core_Services_ServicesManager__HideAccessPoint(long param_1)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  long lVar7;
  
  plVar3 = *(long **)(param_1 + 0x30);
  if (plVar3 != (long *)0x0) {
    iVar2 = (**(code **)(*plVar3 + 0x518))(plVar3,0,*(undefined8 *)(*plVar3 + 0x520));
    if (iVar2 == 0) {
      return;
    }
    plVar3 = *(long **)(param_1 + 0x30);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01685550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x9b8))(plVar3,*(undefined8 *)(*plVar3 + 0x9c0));
      return;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb5a19 & 1) == 0) {
    func_0x00f78a20(0x3d1b710);
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a19 = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(**(undefined8 **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8),extraout_x1,0);
  if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710)) {
    **(long **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) = (long)plVar3;
    return;
  }
  func_0x00f78e5c();
  if ((bRam0000000003eb5a1a & 1) == 0) {
    func_0x00f78a20(0x3d1b710);
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a1a = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(**(undefined8 **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8),extraout_x1_00,0);
  if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710)) {
    **(long **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) = (long)plVar3;
    return;
  }
  lVar4 = func_0x00f78e5c();
  if ((bRam0000000003eb5a1b & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d5cd70);
    bRam0000000003eb5a1b = 1;
  }
  lVar7 = *(long *)(lVar4 + 0x30);
  if (lVar7 != 0) {
    uVar6 = *(undefined8 *)(lVar7 + 0x138);
    uVar5 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar5,lVar4,uRam0000000003d5cd70,uRam0000000003d2a320);
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,uVar5,0);
    if (plVar3 != (long *)0x0) {
      if (*plVar3 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598) goto code_r0x016857bc;
    }
    *(long **)(lVar7 + 0x138) = plVar3;
    plVar3 = *(long **)(lVar4 + 0x30);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
      *(undefined8 *)(lVar4 + 0x30) = 0;
      return;
    }
  }
  func_0x00f78af4();
code_r0x016857bc:
  lVar4 = func_0x00f78e5c();
  if ((bRam0000000003eb5a1c & 1) == 0) {
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a1c = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = *(undefined8 *)(*(long *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar5,0);
  plVar3 = *(long **)(lVar4 + 0x30);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec05a0)(uVar5);
    return;
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1685864);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1685564 | Core.Services.ServicesManager.AddMatchDataFunc
// ============================================================

void Core_Services_ServicesManager__AddMatchDataFunc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  long lVar6;
  
  if ((bRam0000000003eb5a19 & 1) == 0) {
    func_0x00f78a20(0x3d1b710);
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a19 = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(**(undefined8 **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8),param_2,0);
  if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710)) {
    **(long **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) = (long)plVar2;
    return;
  }
  func_0x00f78e5c();
  if ((bRam0000000003eb5a1a & 1) == 0) {
    func_0x00f78a20(0x3d1b710);
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a1a = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(**(undefined8 **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8),extraout_x1,0);
  if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710)) {
    **(long **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) = (long)plVar2;
    return;
  }
  lVar3 = func_0x00f78e5c();
  if ((bRam0000000003eb5a1b & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d5cd70);
    bRam0000000003eb5a1b = 1;
  }
  lVar6 = *(long *)(lVar3 + 0x30);
  if (lVar6 != 0) {
    uVar5 = *(undefined8 *)(lVar6 + 0x138);
    uVar4 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar4,lVar3,uRam0000000003d5cd70,uRam0000000003d2a320);
    plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar4,0);
    if (plVar2 != (long *)0x0) {
      if (*plVar2 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598) goto code_r0x016857bc;
    }
    *(long **)(lVar6 + 0x138) = plVar2;
    plVar2 = *(long **)(lVar3 + 0x30);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
      *(undefined8 *)(lVar3 + 0x30) = 0;
      return;
    }
  }
  func_0x00f78af4();
code_r0x016857bc:
  lVar3 = func_0x00f78e5c();
  if ((bRam0000000003eb5a1c & 1) == 0) {
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a1c = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = *(undefined8 *)(*(long *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar4,0);
  plVar2 = *(long **)(lVar3 + 0x30);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x2a8))(plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec05a0)(uVar4);
    return;
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1685864);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1685618 | Core.Services.ServicesManager.RemoveMatchDataFunc
// ============================================================

void Core_Services_ServicesManager__RemoveMatchDataFunc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((bRam0000000003eb5a1a & 1) == 0) {
    func_0x00f78a20(0x3d1b710);
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a1a = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(**(undefined8 **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8),param_2,0);
  if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710)) {
    **(long **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) = (long)plVar2;
    return;
  }
  lVar3 = func_0x00f78e5c();
  if ((bRam0000000003eb5a1b & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d5cd70);
    bRam0000000003eb5a1b = 1;
  }
  lVar6 = *(long *)(lVar3 + 0x30);
  if (lVar6 != 0) {
    uVar5 = *(undefined8 *)(lVar6 + 0x138);
    uVar4 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar4,lVar3,uRam0000000003d5cd70,uRam0000000003d2a320);
    plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar4,0);
    if (plVar2 != (long *)0x0) {
      if (*plVar2 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598) goto code_r0x016857bc;
    }
    *(long **)(lVar6 + 0x138) = plVar2;
    plVar2 = *(long **)(lVar3 + 0x30);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
      *(undefined8 *)(lVar3 + 0x30) = 0;
      return;
    }
  }
  func_0x00f78af4();
code_r0x016857bc:
  lVar3 = func_0x00f78e5c();
  if ((bRam0000000003eb5a1c & 1) == 0) {
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a1c = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = *(undefined8 *)(*(long *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar4,0);
  plVar2 = *(long **)(lVar3 + 0x30);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x2a8))(plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec05a0)(uVar4);
    return;
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1685864);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x16856cc | Core.Services.ServicesManager.DeInit
// ============================================================

void Core_Services_ServicesManager__DeInit(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000003eb5a1b & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d5cd70);
    bRam0000000003eb5a1b = 1;
  }
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(lVar5 + 0x138);
    uVar2 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,param_1,uRam0000000003d5cd70,uRam0000000003d2a320);
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar2,0);
    if (plVar3 != (long *)0x0) {
      if (*plVar3 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598) goto LAB_016857bc;
    }
    *(long **)(lVar5 + 0x138) = plVar3;
    plVar3 = *(long **)(param_1 + 0x30);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
      *(undefined8 *)(param_1 + 0x30) = 0;
      return;
    }
  }
  func_0x00f78af4();
LAB_016857bc:
  lVar5 = func_0x00f78e5c();
  if ((bRam0000000003eb5a1c & 1) == 0) {
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a1c = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = *(undefined8 *)(*(long *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar2,0);
  plVar3 = *(long **)(lVar5 + 0x30);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec05a0)(uVar2);
    return;
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1685864);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x16857c0 | Core.Services.ServicesManager.EarlyUpdate
// ============================================================

void Core_Services_ServicesManager__EarlyUpdate(long param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb5a1c & 1) == 0) {
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a1c = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = *(undefined8 *)(*(long *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar3,0);
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x2a8))(plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec05a0)(uVar3);
    return;
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1685864);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x16858ac | Core.Services.ServicesManager.Update
// ============================================================

void Core_Services_ServicesManager__Update(long param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if ((bRam0000000003eb5a1d & 1) == 0) {
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a1d = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = *(undefined8 *)(*(long *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) + 0x10);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar3,0);
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    (**(code **)(*plVar2 + 0x2c8))(plVar2,*(undefined8 *)(*plVar2 + 0x2d0));
    plVar2 = *(long **)(param_1 + 0x30);
    if (plVar2 == (long *)0x0) {
      func_0x00f78af4();
    }
    else {
      (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
      plVar2 = *(long **)(param_1 + 0x30);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x198))(plVar2,*(undefined8 *)(*plVar2 + 0x1a0));
        fVar5 = *(float *)(param_1 + 0x28);
        fVar4 = (float)/*UnityEngine.Time$$get_unscaledDeltaTime*/ func_0x03272c40(0);
        fVar5 = fVar5 + fVar4;
        *(float *)(param_1 + 0x28) = fVar5;
        if (300.0 <= fVar5) {
          if ((bRam0000000003eb5a20 & 1) == 0) {
            func_0x00f78a20(0x3d24dd0);
            bRam0000000003eb5a20 = 1;
          }
          *(undefined8 *)(param_1 + 0x20) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (pcRam0000000003ec05a0 == (code *)0x0) {
          pcRam0000000003ec05a0 =
               (code *)func_0x00f789d4(
                                      "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000003ec05a0)(uVar3);
        return;
      }
      func_0x00f78af4();
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x16859f0);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1685a4c | Core.Services.ServicesManager.ClearLastReceivedPartyCode
// ============================================================

void Core_Services_ServicesManager__ClearLastReceivedPartyCode(long param_1)

{
  if ((bRam0000000003eb5a20 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb5a20 = 1;
  }
  *(undefined8 *)(param_1 + 0x20) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  return;
}



// ============================================================
// RVA: 0x1685aa8 | Core.Services.ServicesManager.LateUpdate
// ============================================================

void Core_Services_ServicesManager__LateUpdate(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5a1e & 1) == 0) {
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a1e = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = *(undefined8 *)(*(long *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) + 0x18);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar1,0);
  if (*(char *)(param_1 + 0x10) == '\0') {
    /*Core.Services.ServicesManager$$OnFirstLateUpdate*/ func_0x01685b68(param_1);
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar1);
  return;
}



// ============================================================
// RVA: 0x1685b68 | Core.Services.ServicesManager.OnFirstLateUpdate
// ============================================================

void Core_Services_ServicesManager__OnFirstLateUpdate(undefined8 param_1)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000003eb5a22 & 1) == 0) {
    func_0x00f78a20(0x3d52250);
    bRam0000000003eb5a22 = 1;
  }
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_50 = 0;
  uStack_68 = param_1;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Create*/ func_0x02933ffc(&uStack_d0,0);
  uStack_70 = uStack_b8;
  uStack_78 = uStack_c0;
  uStack_80 = uStack_c8;
  uStack_88 = uStack_d0;
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  uStack_a8 = uStack_c8;
  uStack_b0 = uStack_d0;
  uStack_98 = uStack_b8;
  uStack_a0 = uStack_c0;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Start<ServicesManager.<OnFirstLateUpdate>d__42>*/ func_0x0182c870(&uStack_b0,&uStack_90,uRam0000000003d52250);
  return;
}



// ============================================================
// RVA: 0x1685c30 | Core.Services.ServicesManager.SharePartyInvite
// ============================================================

ulong Core_Services_ServicesManager__SharePartyInvite
                (long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  code *pcVar17;
  ulong *puVar18;
  undefined1 auVar19 [16];
  ulong uStack_4a8;
  undefined1 auStack_448 [512];
  undefined1 auStack_248 [512];
  long lStack_48;
  
  lStack_48 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb5a1f & 1) == 0) {
    func_0x00f78a20(0x3d798b8);
    bRam0000000003eb5a1f = 1;
  }
  plVar15 = *(long **)(param_1 + 0x30);
  uVar7 = /*System.String$$Concat*/ func_0x029be39c(param_2,/*STR('https://electricsquare.com/games/warped-kart-racers/?partycode=')*/ uRam0000000003d798b8,param_3,0);
  /*Unity.Collections.FixedString512Bytes$$op_Implicit*/ func_0x02fd81bc(auStack_448,uVar7,0);
  if (plVar15 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    lVar16 = *plVar15;
    pcVar17 = *(code **)(lVar16 + 0x538);
    _memcpy(auStack_248,auStack_448,0x200);
    uVar8 = (*pcVar17)(plVar15,auStack_248,0,0,*(undefined8 *)(lVar16 + 0x540));
    if (*(long *)PTR_03a5d648 == lStack_48) {
      return uVar8;
    }
  }
  auVar19 = ___stack_chk_fail();
  uVar8 = auVar19._8_8_;
  lVar16 = auVar19._0_8_;
  if ((bRam0000000003eb5a21 & 1) == 0) {
    func_0x00f78a20(0x3d2a328);
    func_0x00f78a20(0x3d1ede0);
    func_0x00f78a20(0x3d24218);
    func_0x00f78a20(0x3d25830);
    func_0x00f78a20(0x3d76a78);
    func_0x00f78a20(0x3d67468);
    bRam0000000003eb5a21 = 1;
  }
  lVar9 = func_0x00f78aec(/*System.Uri_TypeInfo*/ uRam0000000003d25830);
  /*System.Uri$$.ctor*/ func_0x02f1e5e0(lVar9,uVar8,0);
  if (lVar9 != 0) {
    uVar7 = /*System.Uri$$get_LocalPath*/ func_0x02f3b4ec(lVar9,0);
    uVar8 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar7,/*STR('/games/warped-kart-racers/')*/ uRam0000000003d67468,0);
    if ((uVar8 & 1) != 0) {
      return uVar8;
    }
    uVar8 = /*System.Uri$$get_Query*/ func_0x02f3c7cc(lVar9,0);
    if (((*(ushort *)(/*System.Text.RegularExpressions.Regex_TypeInfo*/ lRam0000000003d24218 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Text.RegularExpressions.Regex_TypeInfo*/ lRam0000000003d24218 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar10 = /*System.Text.RegularExpressions.Regex$$Match*/ func_0x02f0473c(uVar8,/*STR('\\?partycode=[0-9][0-9][0-9][0-9][0-9][0-9]')*/ uRam0000000003d76a78,0);
    if (lVar10 != 0) {
      uVar2 = *(uint *)(lVar10 + 0x1c);
      uVar8 = (ulong)uVar2;
      uVar11 = /*System.Uri$$get_Query*/ func_0x02f3c7cc(lVar9,0);
      if (uVar11 != 0) {
        if (uVar2 != *(uint *)(uVar11 + 0x10)) {
          return uVar11;
        }
        lVar9 = /*System.Uri$$get_Query*/ func_0x02f3c7cc(lVar9,0);
        lVar10 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,1);
        if (lVar10 != 0) {
          if (*(int *)(lVar10 + 0x18) == 0) goto code_r0x01685ee4;
          *(undefined2 *)(lVar10 + 0x20) = 0x3d;
          if ((lVar9 != 0) && (lVar9 = /*System.String$$Split*/ func_0x029cb2ac(lVar9,lVar10,0), lVar9 != 0)) {
            if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto code_r0x01685ee4;
            plVar15 = *(long **)(lVar9 + 0x28);
            *(long **)(lVar16 + 0x20) = plVar15;
            *(undefined4 *)(lVar16 + 0x28) = 0;
            uVar11 = *(ulong *)(lVar16 + 0x48);
            if (uVar11 != 0) {
              uStack_4a8 = uVar11;
              lVar16 = *(long *)(uVar11 + 0x68);
              if (lVar16 == 0) {
                puVar18 = &uStack_4a8;
                lVar9 = 1;
              }
              else {
                lVar9 = *(long *)(lVar16 + 0x18);
                if (lVar9 == 0) {
                  return uVar11;
                }
                puVar18 = (ulong *)(lVar16 + 0x20);
              }
              lVar16 = 0;
              do {
                uVar8 = puVar18[lVar16];
                pcVar17 = *(code **)(uVar8 + 0x10);
                plVar1 = *(long **)(uVar8 + 0x20);
                lVar10 = *(long *)(uVar8 + 0x28);
                if (*(short *)(lVar10 + 0x48) == -1) {
                  func_0x00f78ad8(lVar10);
                }
                iVar5 = func_0x00f78a4c(lVar10);
                bVar4 = *(char *)(lVar10 + 0x4a) == '\x01';
                if (iVar5 == 0) {
                  if (bVar4) {
                    if (plVar1 == (long *)0x0) {
code_r0x01e480c8:
                      uVar8 = (*pcVar17)(plVar15,lVar10);
                    }
                    else {
                      if (((*(short *)(lVar10 + 0x48) == -1) ||
                          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
                         (*(long *)(uVar11 + 0x18) == 0)) goto code_r0x01e47fc0;
                      iVar5 = func_0x00f78a44(lVar10);
                      iVar6 = func_0x00f78ec0(lVar10);
                      if (iVar5 == 0) {
                        uVar3 = *(ushort *)(lVar10 + 0x48);
                        if (iVar6 == 0) {
                          lVar10 = *plVar1 + (ulong)uVar3 * 0x10;
                          uVar8 = (**(code **)(lVar10 + 0x138))
                                            (plVar1,plVar15,*(undefined8 *)(lVar10 + 0x140));
                          goto code_r0x01e480d4;
                        }
                        lVar10 = func_0x00f78a48(lVar10);
                        lVar13 = *plVar1;
                        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
                        if (uVar8 != 0) {
                          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) == lVar10) {
                              puVar12 = (undefined8 *)
                                        (lVar13 + (long)(int)(*piVar14 + (uint)uVar3) * 0x10 + 0x138
                                        );
                              goto code_r0x01e48260;
                            }
                            piVar14 = piVar14 + 4;
                            uVar8 = uVar8 - 1;
                          } while (uVar8 != 0);
                        }
                        puVar12 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar3);
code_r0x01e48260:
                        pcVar17 = (code *)*puVar12;
                        puVar12 = (undefined8 *)puVar12[1];
                      }
                      else {
                        if (iVar6 == 0) {
                          uVar7 = *(undefined8 *)
                                   (*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
                        }
                        else {
                          lVar13 = *plVar1;
                          uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
                          if (uVar8 != 0) {
                            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar14 + -2) == *(long *)(lVar10 + 0x18)) {
                                lVar13 = lVar13 + (long)(int)(*piVar14 +
                                                             (uint)*(ushort *)(lVar10 + 0x48)) *
                                                  0x10 + 0x138;
                                goto code_r0x01e48238;
                              }
                              piVar14 = piVar14 + 4;
                              uVar8 = uVar8 - 1;
                            } while (uVar8 != 0);
                          }
                          lVar13 = func_0x00fac1f0(plVar1);
code_r0x01e48238:
                          uVar7 = *(undefined8 *)(lVar13 + 8);
                        }
                        puVar12 = (undefined8 *)func_0x00f78acc(uVar7,lVar10);
                        pcVar17 = (code *)*puVar12;
                      }
                      uVar8 = (*pcVar17)(plVar1,plVar15,puVar12);
                    }
                  }
                  else {
                    if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(uVar11 + 0x18) == 0))
                    goto code_r0x01e480c8;
                    iVar5 = func_0x00f78a44(lVar10);
                    iVar6 = func_0x00f78ec0(lVar10);
                    if (iVar5 == 0) {
                      uVar3 = *(ushort *)(lVar10 + 0x48);
                      if (iVar6 == 0) {
                        lVar10 = *plVar15 + (ulong)uVar3 * 0x10;
                        uVar8 = (**(code **)(lVar10 + 0x138))
                                          (plVar15,*(undefined8 *)(lVar10 + 0x140));
                        goto code_r0x01e480d4;
                      }
                      lVar10 = func_0x00f78a48(lVar10);
                      lVar13 = *plVar15;
                      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
                      if (uVar8 != 0) {
                        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar14 + -2) == lVar10) {
                            puVar12 = (undefined8 *)
                                      (lVar13 + (long)(int)(*piVar14 + (uint)uVar3) * 0x10 + 0x138);
                            goto code_r0x01e481fc;
                          }
                          piVar14 = piVar14 + 4;
                          uVar8 = uVar8 - 1;
                        } while (uVar8 != 0);
                      }
                      puVar12 = (undefined8 *)func_0x00fac1f0(plVar15,lVar10,(ulong)uVar3);
code_r0x01e481fc:
                      pcVar17 = (code *)*puVar12;
                      puVar12 = (undefined8 *)puVar12[1];
                    }
                    else {
                      if (iVar6 == 0) {
                        uVar7 = *(undefined8 *)
                                 (*plVar15 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar13 = *plVar15;
                        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
                        if (uVar8 != 0) {
                          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) == *(long *)(lVar10 + 0x18)) {
                              lVar13 = lVar13 + (long)(int)(*piVar14 +
                                                           (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e481d4;
                            }
                            piVar14 = piVar14 + 4;
                            uVar8 = uVar8 - 1;
                          } while (uVar8 != 0);
                        }
                        lVar13 = func_0x00fac1f0(plVar15);
code_r0x01e481d4:
                        uVar7 = *(undefined8 *)(lVar13 + 8);
                      }
                      puVar12 = (undefined8 *)func_0x00f78acc(uVar7,lVar10);
                      pcVar17 = (code *)*puVar12;
                    }
                    uVar8 = (*pcVar17)(plVar15,puVar12);
                  }
                }
                else {
                  if (bVar4) goto code_r0x01e480c8;
code_r0x01e47fc0:
                  uVar8 = (*pcVar17)(plVar1,plVar15,lVar10);
                }
code_r0x01e480d4:
                lVar16 = lVar16 + 1;
                if (lVar16 == lVar9) {
                  return uVar8;
                }
              } while( true );
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x01685ee4:
  uVar7 = func_0x00f78b24();
  uVar11 = func_0x00f78ac0(uVar7,0);
  uStack_4a8 = uVar8;
  if ((bRam0000000003eb5a23 & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d29fc0);
    func_0x00f78a20(0x3d1b3e8);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d25238);
    func_0x00f78a20(0x3d63d50);
    func_0x00f78a20(0x3d63d58);
    func_0x00f78a20(0x3d28c00);
    bRam0000000003eb5a23 = 1;
  }
  uVar7 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  *(undefined8 *)(uVar11 + 0x18) = uVar7;
  *(undefined8 *)(uVar11 + 0x20) = uVar7;
  if (((*(byte *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*System.TimeSpan$$FromSeconds*/ func_0x029f0a04(0x4034000000000000,0);
  *(undefined8 *)(uVar11 + 0x38) = uVar7;
  if (((*(ushort *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar12 = *(undefined8 **)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8);
  lVar9 = puVar12[4];
  lVar16 = /*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00;
  if (lVar9 == 0) {
    if (((*(ushort *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar12 = *(undefined8 **)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8);
    }
    uVar7 = *puVar12;
    lVar9 = func_0x00f78aec(/*System.Action<Client>_TypeInfo*/ uRam0000000003d1b3e8);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar9,uVar7,uRam0000000003d63d50,uRam0000000003d29fc0);
    lVar16 = /*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00;
    *(long *)(*(long *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8) + 0x20) = lVar9;
  }
  *(long *)(uVar11 + 0x40) = lVar9;
  if (((*(ushort *)(lVar16 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar16 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar16 = /*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00;
  }
  puVar12 = *(undefined8 **)(lVar16 + 0xb8);
  lVar9 = puVar12[5];
  if (lVar9 == 0) {
    if (((*(ushort *)(lVar16 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar16 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar12 = *(undefined8 **)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8);
    }
    uVar7 = *puVar12;
    lVar9 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar9,uVar7,uRam0000000003d63d58,uRam0000000003d2a320);
    *(long *)(*(long *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8) + 0x28) = lVar9;
  }
  *(long *)(uVar11 + 0x48) = lVar9;
  return uVar11;
}



// ============================================================
// RVA: 0x1685d1c | Core.Services.ServicesManager.OnLinked
// ============================================================

ulong Core_Services_ServicesManager__OnLinked(long param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  code *pcVar17;
  ulong *puVar18;
  ulong uStack_58;
  
  if ((bRam0000000003eb5a21 & 1) == 0) {
    func_0x00f78a20(0x3d2a328);
    func_0x00f78a20(0x3d1ede0);
    func_0x00f78a20(0x3d24218);
    func_0x00f78a20(0x3d25830);
    func_0x00f78a20(0x3d76a78);
    func_0x00f78a20(0x3d67468);
    bRam0000000003eb5a21 = 1;
  }
  lVar7 = func_0x00f78aec(/*System.Uri_TypeInfo*/ uRam0000000003d25830);
  /*System.Uri$$.ctor*/ func_0x02f1e5e0(lVar7,param_2,0);
  if (lVar7 != 0) {
    uVar8 = /*System.Uri$$get_LocalPath*/ func_0x02f3b4ec(lVar7,0);
    uVar9 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar8,/*STR('/games/warped-kart-racers/')*/ uRam0000000003d67468,0);
    if ((uVar9 & 1) != 0) {
      return uVar9;
    }
    param_2 = /*System.Uri$$get_Query*/ func_0x02f3c7cc(lVar7,0);
    if (((*(ushort *)(/*System.Text.RegularExpressions.Regex_TypeInfo*/ lRam0000000003d24218 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Text.RegularExpressions.Regex_TypeInfo*/ lRam0000000003d24218 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar10 = /*System.Text.RegularExpressions.Regex$$Match*/ func_0x02f0473c(param_2,/*STR('\\?partycode=[0-9][0-9][0-9][0-9][0-9][0-9]')*/ uRam0000000003d76a78,0);
    if (lVar10 != 0) {
      uVar2 = *(uint *)(lVar10 + 0x1c);
      param_2 = (ulong)uVar2;
      uVar9 = /*System.Uri$$get_Query*/ func_0x02f3c7cc(lVar7,0);
      if (uVar9 != 0) {
        if (uVar2 != *(uint *)(uVar9 + 0x10)) {
          return uVar9;
        }
        lVar7 = /*System.Uri$$get_Query*/ func_0x02f3c7cc(lVar7,0);
        lVar10 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,1);
        if (lVar10 != 0) {
          if (*(int *)(lVar10 + 0x18) == 0) goto LAB_01685ee4;
          *(undefined2 *)(lVar10 + 0x20) = 0x3d;
          if ((lVar7 != 0) && (lVar7 = /*System.String$$Split*/ func_0x029cb2ac(lVar7,lVar10,0), lVar7 != 0)) {
            if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_01685ee4;
            plVar13 = *(long **)(lVar7 + 0x28);
            *(long **)(param_1 + 0x20) = plVar13;
            *(undefined4 *)(param_1 + 0x28) = 0;
            uVar9 = *(ulong *)(param_1 + 0x48);
            if (uVar9 != 0) {
              uStack_58 = uVar9;
              lVar7 = *(long *)(uVar9 + 0x68);
              if (lVar7 == 0) {
                puVar18 = &uStack_58;
                lVar10 = 1;
              }
              else {
                lVar10 = *(long *)(lVar7 + 0x18);
                if (lVar10 == 0) {
                  return uVar9;
                }
                puVar18 = (ulong *)(lVar7 + 0x20);
              }
              lVar7 = 0;
              do {
                uVar14 = puVar18[lVar7];
                pcVar17 = *(code **)(uVar14 + 0x10);
                plVar1 = *(long **)(uVar14 + 0x20);
                lVar11 = *(long *)(uVar14 + 0x28);
                if (*(short *)(lVar11 + 0x48) == -1) {
                  func_0x00f78ad8(lVar11);
                }
                iVar5 = func_0x00f78a4c(lVar11);
                bVar4 = *(char *)(lVar11 + 0x4a) == '\x01';
                if (iVar5 == 0) {
                  if (bVar4) {
                    if (plVar1 == (long *)0x0) {
code_r0x01e480c8:
                      uVar14 = (*pcVar17)(plVar13,lVar11);
                    }
                    else {
                      if (((*(short *)(lVar11 + 0x48) == -1) ||
                          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(uVar9 + 0x18) == 0)
                         ) goto code_r0x01e47fc0;
                      iVar5 = func_0x00f78a44(lVar11);
                      iVar6 = func_0x00f78ec0(lVar11);
                      if (iVar5 == 0) {
                        uVar3 = *(ushort *)(lVar11 + 0x48);
                        if (iVar6 == 0) {
                          lVar11 = *plVar1 + (ulong)uVar3 * 0x10;
                          uVar14 = (**(code **)(lVar11 + 0x138))
                                             (plVar1,plVar13,*(undefined8 *)(lVar11 + 0x140));
                          goto code_r0x01e480d4;
                        }
                        lVar11 = func_0x00f78a48(lVar11);
                        lVar15 = *plVar1;
                        uVar14 = (ulong)*(ushort *)(lVar15 + 0x12a);
                        if (uVar14 != 0) {
                          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar16 + -2) == lVar11) {
                              puVar12 = (undefined8 *)
                                        (lVar15 + (long)(int)(*piVar16 + (uint)uVar3) * 0x10 + 0x138
                                        );
                              goto code_r0x01e48260;
                            }
                            piVar16 = piVar16 + 4;
                            uVar14 = uVar14 - 1;
                          } while (uVar14 != 0);
                        }
                        puVar12 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar3);
code_r0x01e48260:
                        pcVar17 = (code *)*puVar12;
                        puVar12 = (undefined8 *)puVar12[1];
                      }
                      else {
                        if (iVar6 == 0) {
                          uVar8 = *(undefined8 *)
                                   (*plVar1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
                        }
                        else {
                          lVar15 = *plVar1;
                          uVar14 = (ulong)*(ushort *)(lVar15 + 0x12a);
                          if (uVar14 != 0) {
                            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar16 + -2) == *(long *)(lVar11 + 0x18)) {
                                lVar15 = lVar15 + (long)(int)(*piVar16 +
                                                             (uint)*(ushort *)(lVar11 + 0x48)) *
                                                  0x10 + 0x138;
                                goto code_r0x01e48238;
                              }
                              piVar16 = piVar16 + 4;
                              uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                          }
                          lVar15 = func_0x00fac1f0(plVar1);
code_r0x01e48238:
                          uVar8 = *(undefined8 *)(lVar15 + 8);
                        }
                        puVar12 = (undefined8 *)func_0x00f78acc(uVar8,lVar11);
                        pcVar17 = (code *)*puVar12;
                      }
                      uVar14 = (*pcVar17)(plVar1,plVar13,puVar12);
                    }
                  }
                  else {
                    if ((*(short *)(lVar11 + 0x48) == -1) || (*(long *)(uVar9 + 0x18) == 0))
                    goto code_r0x01e480c8;
                    iVar5 = func_0x00f78a44(lVar11);
                    iVar6 = func_0x00f78ec0(lVar11);
                    if (iVar5 == 0) {
                      uVar3 = *(ushort *)(lVar11 + 0x48);
                      if (iVar6 == 0) {
                        lVar11 = *plVar13 + (ulong)uVar3 * 0x10;
                        uVar14 = (**(code **)(lVar11 + 0x138))
                                           (plVar13,*(undefined8 *)(lVar11 + 0x140));
                        goto code_r0x01e480d4;
                      }
                      lVar11 = func_0x00f78a48(lVar11);
                      lVar15 = *plVar13;
                      uVar14 = (ulong)*(ushort *)(lVar15 + 0x12a);
                      if (uVar14 != 0) {
                        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) == lVar11) {
                            puVar12 = (undefined8 *)
                                      (lVar15 + (long)(int)(*piVar16 + (uint)uVar3) * 0x10 + 0x138);
                            goto code_r0x01e481fc;
                          }
                          piVar16 = piVar16 + 4;
                          uVar14 = uVar14 - 1;
                        } while (uVar14 != 0);
                      }
                      puVar12 = (undefined8 *)func_0x00fac1f0(plVar13,lVar11,(ulong)uVar3);
code_r0x01e481fc:
                      pcVar17 = (code *)*puVar12;
                      puVar12 = (undefined8 *)puVar12[1];
                    }
                    else {
                      if (iVar6 == 0) {
                        uVar8 = *(undefined8 *)
                                 (*plVar13 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar15 = *plVar13;
                        uVar14 = (ulong)*(ushort *)(lVar15 + 0x12a);
                        if (uVar14 != 0) {
                          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar16 + -2) == *(long *)(lVar11 + 0x18)) {
                              lVar15 = lVar15 + (long)(int)(*piVar16 +
                                                           (uint)*(ushort *)(lVar11 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e481d4;
                            }
                            piVar16 = piVar16 + 4;
                            uVar14 = uVar14 - 1;
                          } while (uVar14 != 0);
                        }
                        lVar15 = func_0x00fac1f0(plVar13);
code_r0x01e481d4:
                        uVar8 = *(undefined8 *)(lVar15 + 8);
                      }
                      puVar12 = (undefined8 *)func_0x00f78acc(uVar8,lVar11);
                      pcVar17 = (code *)*puVar12;
                    }
                    uVar14 = (*pcVar17)(plVar13,puVar12);
                  }
                }
                else {
                  if (bVar4) goto code_r0x01e480c8;
code_r0x01e47fc0:
                  uVar14 = (*pcVar17)(plVar1,plVar13,lVar11);
                }
code_r0x01e480d4:
                lVar7 = lVar7 + 1;
                if (lVar7 == lVar10) {
                  return uVar14;
                }
              } while( true );
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
LAB_01685ee4:
  uVar8 = func_0x00f78b24();
  uVar9 = func_0x00f78ac0(uVar8,0);
  uStack_58 = param_2;
  if ((bRam0000000003eb5a23 & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d29fc0);
    func_0x00f78a20(0x3d1b3e8);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d25238);
    func_0x00f78a20(0x3d63d50);
    func_0x00f78a20(0x3d63d58);
    func_0x00f78a20(0x3d28c00);
    bRam0000000003eb5a23 = 1;
  }
  uVar8 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  *(undefined8 *)(uVar9 + 0x18) = uVar8;
  *(undefined8 *)(uVar9 + 0x20) = uVar8;
  if (((*(byte *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = /*System.TimeSpan$$FromSeconds*/ func_0x029f0a04(0x4034000000000000,0);
  *(undefined8 *)(uVar9 + 0x38) = uVar8;
  if (((*(ushort *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar12 = *(undefined8 **)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8);
  lVar10 = puVar12[4];
  lVar7 = /*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00;
  if (lVar10 == 0) {
    if (((*(ushort *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar12 = *(undefined8 **)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8);
    }
    uVar8 = *puVar12;
    lVar10 = func_0x00f78aec(/*System.Action<Client>_TypeInfo*/ uRam0000000003d1b3e8);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar10,uVar8,uRam0000000003d63d50,uRam0000000003d29fc0);
    lVar7 = /*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00;
    *(long *)(*(long *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8) + 0x20) = lVar10;
  }
  *(long *)(uVar9 + 0x40) = lVar10;
  if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar7 = /*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00;
  }
  puVar12 = *(undefined8 **)(lVar7 + 0xb8);
  lVar10 = puVar12[5];
  if (lVar10 == 0) {
    if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar12 = *(undefined8 **)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8);
    }
    uVar8 = *puVar12;
    lVar10 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar10,uVar8,uRam0000000003d63d58,uRam0000000003d2a320);
    *(long *)(*(long *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8) + 0x28) = lVar10;
  }
  *(long *)(uVar9 + 0x48) = lVar10;
  return uVar9;
}



// ============================================================
// RVA: 0x1685ef0 | Core.Services.ServicesManager..ctor
// ============================================================

undefined1  [16] Core_Services_ServicesManager___ctor(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb5a23 & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d29fc0);
    func_0x00f78a20(0x3d1b3e8);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d25238);
    func_0x00f78a20(0x3d63d50);
    func_0x00f78a20(0x3d63d58);
    func_0x00f78a20(0x3d28c00);
    bRam0000000003eb5a23 = 1;
  }
  uVar2 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  if (((*(byte *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*System.TimeSpan$$FromSeconds*/ func_0x029f0a04(0x4034000000000000,0);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  if (((*(ushort *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar3 = *(undefined8 **)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8);
  lVar4 = puVar3[4];
  lVar1 = /*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00;
  if (lVar4 == 0) {
    if (((*(ushort *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar3 = *(undefined8 **)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8);
    }
    uVar2 = *puVar3;
    lVar4 = func_0x00f78aec(/*System.Action<Client>_TypeInfo*/ uRam0000000003d1b3e8);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar4,uVar2,uRam0000000003d63d50,uRam0000000003d29fc0);
    lVar1 = /*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00;
    *(long *)(*(long *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8) + 0x20) = lVar4;
  }
  *(long *)(param_1 + 0x40) = lVar4;
  if (((*(ushort *)(lVar1 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar1 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar1 = /*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  lVar4 = puVar3[5];
  if (lVar4 == 0) {
    if (((*(ushort *)(lVar1 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar1 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar3 = *(undefined8 **)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8);
    }
    uVar2 = *puVar3;
    lVar4 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar4,uVar2,uRam0000000003d63d58,uRam0000000003d2a320);
    *(long *)(*(long *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8) + 0x28) = lVar4;
  }
  *(long *)(param_1 + 0x48) = lVar4;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1;
  return auVar5;
}



// ============================================================
// RVA: 0x1686100 | Core.Services.ServicesManager..cctor
// ============================================================

void Core_Services_ServicesManager___cctor(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb5a24 & 1) == 0) {
    func_0x00f78a20(0x3d2a618);
    func_0x00f78a20(0x3d1b710);
    func_0x00f78a20(0x3d24978);
    func_0x00f78a20(0x3d63d48);
    func_0x00f78a20(0x3d28c00);
    func_0x00f78a20(0x3d72730);
    func_0x00f78a20(0x3d72728);
    func_0x00f78a20(0x3d72720);
    bRam0000000003eb5a24 = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = **(undefined8 **)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8);
  uVar1 = func_0x00f78aec(/*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ uRam0000000003d1b710);
  /*System.Action<string, uint, IntPtr, uint, bool>$$.ctor*/ func_0x01e75bc8(uVar1,uVar2,uRam0000000003d63d48,uRam0000000003d2a618);
  **(undefined8 **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('ServicesManager.EarlyUpdate()')*/ uRam0000000003d72720,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) + 8) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('ServicesManager.Update()')*/ uRam0000000003d72730,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) + 0x10) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('ServicesManager.LateUpdate()')*/ uRam0000000003d72728,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) + 0x18) = uVar1;
  return;
}



