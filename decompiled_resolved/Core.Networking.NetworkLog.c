// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.NetworkLog

// ============================================================
// RVA: 0x1659a54 | Core.Networking.NetworkLog.Info
// ============================================================

/* WARNING: Possible PIC construction at 0x01659b08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01659b0c) */
/* WARNING: Removing unreachable block (ram,0x01659b4c) */
/* WARNING: Removing unreachable block (ram,0x01659b20) */
/* WARNING: Removing unreachable block (ram,0x01e47f3c) */
/* WARNING: Removing unreachable block (ram,0x01e47f7c) */
/* WARNING: Removing unreachable block (ram,0x01e47f6c) */
/* WARNING: Removing unreachable block (ram,0x01e47f74) */
/* WARNING: Removing unreachable block (ram,0x01e47f84) */
/* WARNING: Removing unreachable block (ram,0x01e47f88) */
/* WARNING: Removing unreachable block (ram,0x01e47fa0) */
/* WARNING: Removing unreachable block (ram,0x01e47fa8) */
/* WARNING: Removing unreachable block (ram,0x01e47fd4) */
/* WARNING: Removing unreachable block (ram,0x01e48058) */
/* WARNING: Removing unreachable block (ram,0x01e48064) */
/* WARNING: Removing unreachable block (ram,0x01e4806c) */
/* WARNING: Removing unreachable block (ram,0x01e480e4) */
/* WARNING: Removing unreachable block (ram,0x01e48148) */
/* WARNING: Removing unreachable block (ram,0x01e480ec) */
/* WARNING: Removing unreachable block (ram,0x01e48104) */
/* WARNING: Removing unreachable block (ram,0x01e4810c) */
/* WARNING: Removing unreachable block (ram,0x01e481ec) */
/* WARNING: Removing unreachable block (ram,0x01e48118) */
/* WARNING: Removing unreachable block (ram,0x01e48124) */
/* WARNING: Removing unreachable block (ram,0x01e481fc) */
/* WARNING: Removing unreachable block (ram,0x01e48084) */
/* WARNING: Removing unreachable block (ram,0x01e48134) */
/* WARNING: Removing unreachable block (ram,0x01e48088) */
/* WARNING: Removing unreachable block (ram,0x01e4809c) */
/* WARNING: Removing unreachable block (ram,0x01e480a4) */
/* WARNING: Removing unreachable block (ram,0x01e481c4) */
/* WARNING: Removing unreachable block (ram,0x01e480b0) */
/* WARNING: Removing unreachable block (ram,0x01e480bc) */
/* WARNING: Removing unreachable block (ram,0x01e481d4) */
/* WARNING: Removing unreachable block (ram,0x01e481d8) */
/* WARNING: Removing unreachable block (ram,0x01e48200) */
/* WARNING: Removing unreachable block (ram,0x01e47fd8) */
/* WARNING: Removing unreachable block (ram,0x01e47fdc) */
/* WARNING: Removing unreachable block (ram,0x01e47fe8) */
/* WARNING: Removing unreachable block (ram,0x01e47ff4) */
/* WARNING: Removing unreachable block (ram,0x01e47ffc) */
/* WARNING: Removing unreachable block (ram,0x01e48160) */
/* WARNING: Removing unreachable block (ram,0x01e4820c) */
/* WARNING: Removing unreachable block (ram,0x01e48168) */
/* WARNING: Removing unreachable block (ram,0x01e48180) */
/* WARNING: Removing unreachable block (ram,0x01e48188) */
/* WARNING: Removing unreachable block (ram,0x01e48250) */
/* WARNING: Removing unreachable block (ram,0x01e48194) */
/* WARNING: Removing unreachable block (ram,0x01e481a0) */
/* WARNING: Removing unreachable block (ram,0x01e48260) */
/* WARNING: Removing unreachable block (ram,0x01e48014) */
/* WARNING: Removing unreachable block (ram,0x01e481b0) */
/* WARNING: Removing unreachable block (ram,0x01e48018) */
/* WARNING: Removing unreachable block (ram,0x01e4802c) */
/* WARNING: Removing unreachable block (ram,0x01e48034) */
/* WARNING: Removing unreachable block (ram,0x01e48228) */
/* WARNING: Removing unreachable block (ram,0x01e48040) */
/* WARNING: Removing unreachable block (ram,0x01e4804c) */
/* WARNING: Removing unreachable block (ram,0x01e48238) */
/* WARNING: Removing unreachable block (ram,0x01e4823c) */
/* WARNING: Removing unreachable block (ram,0x01e48264) */
/* WARNING: Removing unreachable block (ram,0x01e47fbc) */
/* WARNING: Removing unreachable block (ram,0x01e480c8) */
/* WARNING: Removing unreachable block (ram,0x01e47fc0) */
/* WARNING: Removing unreachable block (ram,0x01e480d4) */
/* WARNING: Removing unreachable block (ram,0x01e480e0) */
/* WARNING: Removing unreachable block (ram,0x01e48274) */

long Core_Networking_NetworkLog__Info(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb581d & 1) == 0) {
    func_0x00f78a20(0x3d2a328);
    func_0x00f78a20(0x3d23760);
    func_0x00f78a20(0x3d24978);
    func_0x00f78a20(0x3d79b18);
    bRam0000000003eb581d = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar1 = /*Core.Services.ServicesManager$$IsLoggingEnabled*/ func_0x01685464(0);
  if ((int)lVar1 == 0) {
    return lVar1;
  }
  if (((*(ushort *)(/*Core.Networking.NetworkLog_TypeInfo*/ lRam0000000003d23760 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Networking.NetworkLog_TypeInfo*/ lRam0000000003d23760 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar1 = /*STR('info')*/ lRam0000000003d79b18;
  if ((bRam0000000003eb5820 & 1) == 0) {
    func_0x00f78a20(0x3d76b30);
    func_0x00f78a20(0x3d7d0b8);
    bRam0000000003eb5820 = 1;
  }
  lVar3 = /*STR('{Network} [')*/ lRam0000000003d7d0b8;
  lVar4 = /*STR('] ')*/ lRam0000000003d76b30;
  if ((bRam0000000003eb9469 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9469 = 1;
  }
  if ((((lVar3 == 0) && (lVar1 == 0)) && (lVar4 == 0)) && (param_1 == 0)) {
    lVar2 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  else {
    if (lVar3 == 0) {
      lVar3 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (lVar1 == 0) {
      lVar1 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (lVar4 == 0) {
      lVar4 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (param_1 == 0) {
      param_1 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (((lVar3 == 0) || (lVar1 == 0)) || ((lVar4 == 0 || (param_1 == 0)))) {
      auVar5 = func_0x00f78af4();
      lVar1 = auVar5._8_8_;
      lVar4 = auVar5._0_8_;
      if ((bRam0000000003eb93dc & 1) == 0) {
        func_0x00f78a20(0x3d65ed8);
        bRam0000000003eb93dc = 1;
      }
      lVar3 = /*STR(' ')*/ lRam0000000003d65ed8;
      if (lVar1 == 0) {
        return lVar4;
      }
      if ((bRam0000000003eb9468 & 1) == 0) {
        func_0x00f78a20(0x3d24dd0);
        bRam0000000003eb9468 = 1;
      }
      if (((lVar4 == 0) && (lVar3 == 0)) && (lVar1 == 0)) {
        lVar2 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      }
      else {
        if (lVar4 == 0) {
          lVar4 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (lVar3 == 0) {
          lVar3 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (lVar1 == 0) {
          lVar1 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (((lVar4 == 0) || (lVar3 == 0)) || (lVar1 == 0)) {
          lVar1 = func_0x00f78af4();
          return lVar1;
        }
        lVar2 = func_0x00f834ac(*(int *)(lVar3 + 0x10) + *(int *)(lVar4 + 0x10) +
                                *(int *)(lVar1 + 0x10));
        /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar2,0,lVar4);
        /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar2,*(undefined4 *)(lVar4 + 0x10),lVar3);
        /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar2,*(int *)(lVar3 + 0x10) + *(int *)(lVar4 + 0x10),lVar1);
      }
      return lVar2;
    }
    lVar2 = func_0x00f834ac(*(int *)(lVar1 + 0x10) + *(int *)(lVar3 + 0x10) + *(int *)(lVar4 + 0x10)
                            + *(int *)(param_1 + 0x10));
    /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar2,0,lVar3);
    /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar2,*(undefined4 *)(lVar3 + 0x10),lVar1);
    /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar2,*(int *)(lVar1 + 0x10) + *(int *)(lVar3 + 0x10),lVar4);
    /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar2,*(int *)(lVar1 + 0x10) + *(int *)(lVar3 + 0x10) + *(int *)(lVar4 + 0x10),
                    param_1);
  }
  return lVar2;
}



// ============================================================
// RVA: 0x1659b50 | Core.Networking.NetworkLog.FormatLogMessage
// ============================================================

long Core_Networking_NetworkLog__FormatLogMessage(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb5820 & 1) == 0) {
    func_0x00f78a20(0x3d76b30);
    func_0x00f78a20(0x3d7d0b8);
    bRam0000000003eb5820 = 1;
  }
  lVar4 = /*STR('{Network} [')*/ lRam0000000003d7d0b8;
  lVar2 = /*STR('] ')*/ lRam0000000003d76b30;
  if ((bRam0000000003eb9469 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9469 = 1;
  }
  if ((((lVar4 == 0) && (param_2 == 0)) && (lVar2 == 0)) && (param_1 == 0)) {
    lVar3 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  else {
    if (lVar4 == 0) {
      lVar4 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (param_2 == 0) {
      param_2 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (lVar2 == 0) {
      lVar2 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (param_1 == 0) {
      param_1 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (((lVar4 == 0) || (param_2 == 0)) || ((lVar2 == 0 || (param_1 == 0)))) {
      auVar5 = func_0x00f78af4();
      lVar2 = auVar5._8_8_;
      lVar4 = auVar5._0_8_;
      if ((bRam0000000003eb93dc & 1) == 0) {
        func_0x00f78a20(0x3d65ed8);
        bRam0000000003eb93dc = 1;
      }
      lVar3 = /*STR(' ')*/ lRam0000000003d65ed8;
      if (lVar2 == 0) {
        return lVar4;
      }
      if ((bRam0000000003eb9468 & 1) == 0) {
        func_0x00f78a20(0x3d24dd0);
        bRam0000000003eb9468 = 1;
      }
      if (((lVar4 == 0) && (lVar3 == 0)) && (lVar2 == 0)) {
        lVar1 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      }
      else {
        if (lVar4 == 0) {
          lVar4 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (lVar3 == 0) {
          lVar3 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (lVar2 == 0) {
          lVar2 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (((lVar4 == 0) || (lVar3 == 0)) || (lVar2 == 0)) {
          lVar2 = func_0x00f78af4();
          return lVar2;
        }
        lVar1 = func_0x00f834ac(*(int *)(lVar3 + 0x10) + *(int *)(lVar4 + 0x10) +
                                *(int *)(lVar2 + 0x10));
        /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar1,0,lVar4);
        /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar1,*(undefined4 *)(lVar4 + 0x10),lVar3);
        /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar1,*(int *)(lVar3 + 0x10) + *(int *)(lVar4 + 0x10),lVar2);
      }
      return lVar1;
    }
    lVar3 = func_0x00f834ac(*(int *)(param_2 + 0x10) + *(int *)(lVar4 + 0x10) +
                            *(int *)(lVar2 + 0x10) + *(int *)(param_1 + 0x10));
    /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar3,0,lVar4);
    /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar3,*(undefined4 *)(lVar4 + 0x10),param_2);
    /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar3,*(int *)(param_2 + 0x10) + *(int *)(lVar4 + 0x10),lVar2);
    /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar3,*(int *)(param_2 + 0x10) + *(int *)(lVar4 + 0x10) + *(int *)(lVar2 + 0x10)
                    ,param_1);
  }
  return lVar3;
}



// ============================================================
// RVA: 0x1659bd0 | Core.Networking.NetworkLog.Warning
// ============================================================

void Core_Networking_NetworkLog__Warning(undefined8 param_1)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 unaff_x19;
  undefined8 uVar15;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  code *pcVar16;
  undefined8 unaff_x24;
  long lVar17;
  undefined8 unaff_x25;
  undefined1 *puVar18;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puStack_38;
  
  puVar18 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb581e & 1) == 0) {
    func_0x00f78a20(0x3d2a328);
    func_0x00f78a20(0x3d23760);
    func_0x00f78a20(0x3d24978);
    func_0x00f78a20(0x3d7c700);
    bRam0000000003eb581e = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar4 = /*Core.Services.ServicesManager$$IsLoggingEnabled*/ func_0x01685464(0);
  if (iVar4 == 0) {
    return;
  }
  if (((*(ushort *)(/*Core.Networking.NetworkLog_TypeInfo*/ lRam0000000003d23760 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Networking.NetworkLog_TypeInfo*/ lRam0000000003d23760 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)Core_Networking_NetworkLog__FormatLogMessage(param_1,/*STR('warning')*/ uRam0000000003d7c700);
  lVar7 = **(long **)(/*Core.Networking.NetworkLog_TypeInfo*/ lRam0000000003d23760 + 0xb8);
  puStack_38 = unaff_x30;
  if (lVar7 == 0) {
    uVar8 = func_0x00f78af4();
    puStack_38 = &Core_Networking_NetworkLog__Error;
    if ((bRam0000000003eb581f & 1) == 0) {
      func_0x00f78a20(0x3d2a328);
      func_0x00f78a20(0x3d23760);
      func_0x00f78a20(0x3d24978);
      func_0x00f78a20(0x3d78ee8);
      bRam0000000003eb581f = 1;
    }
    if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*Core.Services.ServicesManager$$IsLoggingEnabled*/ func_0x01685464(0);
    if (iVar4 == 0) {
      return;
    }
    if (((*(ushort *)(/*Core.Networking.NetworkLog_TypeInfo*/ lRam0000000003d23760 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkLog_TypeInfo*/ lRam0000000003d23760 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar6 = (long *)Core_Networking_NetworkLog__FormatLogMessage(uVar8,/*STR('error')*/ uRam0000000003d78ee8);
    lVar7 = **(long **)(/*Core.Networking.NetworkLog_TypeInfo*/ lRam0000000003d23760 + 0xb8);
    if (lVar7 == 0) {
      func_0x00f78af4();
      if ((bRam0000000003eb5821 & 1) == 0) {
        func_0x00f78a20(0x3d2a320);
        func_0x00f78a20(0x3d1b598);
        func_0x00f78a20(0x3d23760);
        func_0x00f78a20(0x3d63878);
        func_0x00f78a20(0x3d282c8);
        bRam0000000003eb5821 = 1;
      }
      if (((*(ushort *)(/*Core.Networking.NetworkLog.<>c_TypeInfo*/ lRam0000000003d282c8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkLog.<>c_TypeInfo*/ lRam0000000003d282c8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar15 = **(undefined8 **)(/*Core.Networking.NetworkLog.<>c_TypeInfo*/ lRam0000000003d282c8 + 0xb8);
      uVar8 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar8,uVar15,uRam0000000003d63878,uRam0000000003d2a320);
      **(undefined8 **)(/*Core.Networking.NetworkLog_TypeInfo*/ lRam0000000003d23760 + 0xb8) = uVar8;
      return;
    }
    unaff_x20 = 0x3d23760;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x21 = 0x3d24978;
    unaff_x19 = param_1;
    unaff_x29 = puVar18;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = puStack_38;
  *(long *)((long)register0x00000008 + -0x58) = lVar7;
  lVar10 = *(long *)(lVar7 + 0x68);
  if (lVar10 == 0) {
    puVar18 = (undefined1 *)((long)register0x00000008 + -0x58);
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar10 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    puVar18 = (undefined1 *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = *(long *)(puVar18 + lVar10 * 8);
    pcVar16 = *(code **)(lVar11 + 0x10);
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar11 = *(long *)(lVar11 + 0x28);
    if (*(short *)(lVar11 + 0x48) == -1) {
      func_0x00f78ad8(lVar11);
    }
    iVar4 = func_0x00f78a4c(lVar11);
    bVar3 = *(char *)(lVar11 + 0x4a) == '\x01';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e480c8:
          (*pcVar16)(plVar6,lVar11);
        }
        else {
          if (((*(short *)(lVar11 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar7 + 0x18) == 0)) goto code_r0x01e47fc0;
          iVar4 = func_0x00f78a44(lVar11);
          iVar5 = func_0x00f78ec0(lVar11);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar11 + 0x48);
            if (iVar5 == 0) {
              lVar11 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar11 + 0x138))(plVar1,plVar6,*(undefined8 *)(lVar11 + 0x140));
              goto code_r0x01e480d4;
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
                  goto code_r0x01e48260;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar2);
code_r0x01e48260:
            pcVar16 = (code *)*puVar9;
            puVar9 = (undefined8 *)puVar9[1];
          }
          else {
            if (iVar5 == 0) {
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
                    goto code_r0x01e48238;
                  }
                  piVar14 = piVar14 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              lVar12 = func_0x00fac1f0(plVar1);
code_r0x01e48238:
              uVar8 = *(undefined8 *)(lVar12 + 8);
            }
            puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar11);
            pcVar16 = (code *)*puVar9;
          }
          (*pcVar16)(plVar1,plVar6,puVar9);
        }
      }
      else {
        if ((*(short *)(lVar11 + 0x48) == -1) || (*(long *)(lVar7 + 0x18) == 0))
        goto code_r0x01e480c8;
        iVar4 = func_0x00f78a44(lVar11);
        iVar5 = func_0x00f78ec0(lVar11);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar11 + 0x48);
          if (iVar5 == 0) {
            lVar11 = *plVar6 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar11 + 0x138))(plVar6,*(undefined8 *)(lVar11 + 0x140));
            goto code_r0x01e480d4;
          }
          lVar11 = func_0x00f78a48(lVar11);
          lVar12 = *plVar6;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar9 = (undefined8 *)(lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01e481fc;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar6,lVar11,(ulong)uVar2);
code_r0x01e481fc:
          pcVar16 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar5 == 0) {
            uVar8 = *(undefined8 *)(*plVar6 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar12 = *plVar6;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e481d4;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            lVar12 = func_0x00fac1f0(plVar6);
code_r0x01e481d4:
            uVar8 = *(undefined8 *)(lVar12 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar11);
          pcVar16 = (code *)*puVar9;
        }
        (*pcVar16)(plVar6,puVar9);
      }
    }
    else {
      if (bVar3) goto code_r0x01e480c8;
code_r0x01e47fc0:
      (*pcVar16)(plVar1,plVar6,lVar11);
    }
code_r0x01e480d4:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1659ccc | Core.Networking.NetworkLog.Error
// ============================================================

void Core_Networking_NetworkLog__Error(undefined8 param_1)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  long lStack_58;
  
  if ((bRam0000000003eb581f & 1) == 0) {
    func_0x00f78a20(0x3d2a328);
    func_0x00f78a20(0x3d23760);
    func_0x00f78a20(0x3d24978);
    func_0x00f78a20(0x3d78ee8);
    bRam0000000003eb581f = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar4 = /*Core.Services.ServicesManager$$IsLoggingEnabled*/ func_0x01685464(0);
  if (iVar4 == 0) {
    return;
  }
  if (((*(ushort *)(/*Core.Networking.NetworkLog_TypeInfo*/ lRam0000000003d23760 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Networking.NetworkLog_TypeInfo*/ lRam0000000003d23760 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)Core_Networking_NetworkLog__FormatLogMessage(param_1,/*STR('error')*/ uRam0000000003d78ee8);
  lVar7 = **(long **)(/*Core.Networking.NetworkLog_TypeInfo*/ lRam0000000003d23760 + 0xb8);
  if (lVar7 == 0) {
    func_0x00f78af4();
    lStack_58 = 0x3d24978;
    if ((bRam0000000003eb5821 & 1) == 0) {
      func_0x00f78a20(0x3d2a320);
      func_0x00f78a20(0x3d1b598);
      func_0x00f78a20(0x3d23760);
      func_0x00f78a20(0x3d63878);
      func_0x00f78a20(0x3d282c8);
      bRam0000000003eb5821 = 1;
    }
    if (((*(ushort *)(/*Core.Networking.NetworkLog.<>c_TypeInfo*/ lRam0000000003d282c8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkLog.<>c_TypeInfo*/ lRam0000000003d282c8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar15 = **(undefined8 **)(/*Core.Networking.NetworkLog.<>c_TypeInfo*/ lRam0000000003d282c8 + 0xb8);
    uVar8 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar8,uVar15,uRam0000000003d63878,uRam0000000003d2a320);
    **(undefined8 **)(/*Core.Networking.NetworkLog_TypeInfo*/ lRam0000000003d23760 + 0xb8) = uVar8;
    return;
  }
  lStack_58 = lVar7;
  lVar10 = *(long *)(lVar7 + 0x68);
  if (lVar10 == 0) {
    plVar18 = &lStack_58;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar10 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar18[lVar10];
    pcVar16 = *(code **)(lVar11 + 0x10);
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar11 = *(long *)(lVar11 + 0x28);
    if (*(short *)(lVar11 + 0x48) == -1) {
      func_0x00f78ad8(lVar11);
    }
    iVar4 = func_0x00f78a4c(lVar11);
    bVar3 = *(char *)(lVar11 + 0x4a) == '\x01';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e480c8:
          (*pcVar16)(plVar6,lVar11);
        }
        else {
          if (((*(short *)(lVar11 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar7 + 0x18) == 0)) goto code_r0x01e47fc0;
          iVar4 = func_0x00f78a44(lVar11);
          iVar5 = func_0x00f78ec0(lVar11);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar11 + 0x48);
            if (iVar5 == 0) {
              lVar11 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar11 + 0x138))(plVar1,plVar6,*(undefined8 *)(lVar11 + 0x140));
              goto code_r0x01e480d4;
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
                  goto code_r0x01e48260;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar2);
code_r0x01e48260:
            pcVar16 = (code *)*puVar9;
            puVar9 = (undefined8 *)puVar9[1];
          }
          else {
            if (iVar5 == 0) {
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
                    goto code_r0x01e48238;
                  }
                  piVar14 = piVar14 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              lVar12 = func_0x00fac1f0(plVar1);
code_r0x01e48238:
              uVar8 = *(undefined8 *)(lVar12 + 8);
            }
            puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar11);
            pcVar16 = (code *)*puVar9;
          }
          (*pcVar16)(plVar1,plVar6,puVar9);
        }
      }
      else {
        if ((*(short *)(lVar11 + 0x48) == -1) || (*(long *)(lVar7 + 0x18) == 0))
        goto code_r0x01e480c8;
        iVar4 = func_0x00f78a44(lVar11);
        iVar5 = func_0x00f78ec0(lVar11);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar11 + 0x48);
          if (iVar5 == 0) {
            lVar11 = *plVar6 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar11 + 0x138))(plVar6,*(undefined8 *)(lVar11 + 0x140));
            goto code_r0x01e480d4;
          }
          lVar11 = func_0x00f78a48(lVar11);
          lVar12 = *plVar6;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar9 = (undefined8 *)(lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01e481fc;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar6,lVar11,(ulong)uVar2);
code_r0x01e481fc:
          pcVar16 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar5 == 0) {
            uVar8 = *(undefined8 *)(*plVar6 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar12 = *plVar6;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e481d4;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            lVar12 = func_0x00fac1f0(plVar6);
code_r0x01e481d4:
            uVar8 = *(undefined8 *)(lVar12 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar11);
          pcVar16 = (code *)*puVar9;
        }
        (*pcVar16)(plVar6,puVar9);
      }
    }
    else {
      if (bVar3) goto code_r0x01e480c8;
code_r0x01e47fc0:
      (*pcVar16)(plVar1,plVar6,lVar11);
    }
code_r0x01e480d4:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1659dc8 | Core.Networking.NetworkLog..cctor
// ============================================================

void Core_Networking_NetworkLog___cctor(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb5821 & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d23760);
    func_0x00f78a20(0x3d63878);
    func_0x00f78a20(0x3d282c8);
    bRam0000000003eb5821 = 1;
  }
  if (((*(ushort *)(/*Core.Networking.NetworkLog.<>c_TypeInfo*/ lRam0000000003d282c8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Networking.NetworkLog.<>c_TypeInfo*/ lRam0000000003d282c8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = **(undefined8 **)(/*Core.Networking.NetworkLog.<>c_TypeInfo*/ lRam0000000003d282c8 + 0xb8);
  uVar1 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar1,uVar2,uRam0000000003d63878,uRam0000000003d2a320);
  **(undefined8 **)(/*Core.Networking.NetworkLog_TypeInfo*/ lRam0000000003d23760 + 0xb8) = uVar1;
  return;
}



