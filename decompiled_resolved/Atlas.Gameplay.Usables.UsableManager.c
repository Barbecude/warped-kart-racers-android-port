// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.UsableManager

// ============================================================
// RVA: 0x1523ea8 | Atlas.Gameplay.Usables.UsableManager.OnUsableDestroy
// ============================================================

void Atlas_Gameplay_Usables_UsableManager__OnUsableDestroy(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_68;
  
  lVar6 = *(long *)(param_1 + 0x68);
  if (lVar6 == 0) {
    return;
  }
  lStack_68 = lVar6;
  lVar9 = *(long *)(lVar6 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x0156d298:
          (*pcVar14)(param_2,1,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar6 + 0x18) == 0)) goto code_r0x0156d18c;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,param_2,1,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x0156d2a8;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar8 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x0156d440;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x0156d440:
            pcVar14 = (code *)*puVar8;
            puVar8 = (undefined8 *)puVar8[1];
          }
          else {
            if (iVar5 == 0) {
              uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x0156d418;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x0156d418:
              uVar7 = *(undefined8 *)(lVar11 + 8);
            }
            puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar10);
            pcVar14 = (code *)*puVar8;
          }
          (*pcVar14)(plVar1,param_2,1,puVar8);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar6 + 0x18) == 0))
        goto code_r0x0156d298;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_2,1,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x0156d2a8;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar8 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x0156d3d4;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x0156d3d4:
          pcVar14 = (code *)*puVar8;
          puVar8 = (undefined8 *)puVar8[1];
        }
        else {
          if (iVar5 == 0) {
            uVar7 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x0156d3ac;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x0156d3ac:
            uVar7 = *(undefined8 *)(lVar11 + 8);
          }
          puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar10);
          pcVar14 = (code *)*puVar8;
        }
        (*pcVar14)(param_2,1,puVar8);
      }
    }
    else {
      if (bVar3) goto code_r0x0156d298;
code_r0x0156d18c:
      (*pcVar14)(plVar1,param_2,1,lVar10);
    }
code_r0x0156d2a8:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1524370 | Atlas.Gameplay.Usables.UsableManager.add_OnUsableSpawned
// ============================================================

void Atlas_Gameplay_Usables_UsableManager__add_OnUsableSpawned
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4e53 & 1) == 0) {
    func_0x00f78a20(0x3d296d8);
    bRam0000000003eb4e53 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x60);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Usables.UsableManagerEvents.UsableSpawned_TypeInfo*/ lRam0000000003d296d8))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x60),plVar2,lVar6);
    bVar1 = lVar6 == lVar3;
    lVar6 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4e54 & 1) == 0) {
    func_0x00f78a20(0x3d296d8);
    bRam0000000003eb4e54 = 1;
  }
  plVar2 = (long *)(auVar7._0_8_ + 0x60);
  lVar6 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,auVar7._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Usables.UsableManagerEvents.UsableSpawned_TypeInfo*/ lRam0000000003d296d8))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar6);
    bVar1 = lVar6 == lVar3;
    lVar6 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar7 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb4e55 & 1) == 0) {
    func_0x00f78a20(0x3d296d0);
    bRam0000000003eb4e55 = 1;
  }
  plVar2 = (long *)(auVar7._0_8_ + 0x68);
  lVar6 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar6,auVar7._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Usables.UsableManagerEvents.UsableDespawned_TypeInfo*/ lRam0000000003d296d0))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar6);
    bVar1 = lVar6 == lVar3;
    lVar6 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar7 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb4e56 & 1) == 0) {
    func_0x00f78a20(0x3d296d0);
    bRam0000000003eb4e56 = 1;
  }
  plVar2 = (long *)(auVar7._0_8_ + 0x68);
  lVar6 = *plVar2;
  while( true ) {
    uVar5 = 0;
    plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,auVar7._8_8_);
    if ((plVar4 != (long *)0x0) && (*plVar4 != /*Atlas.Gameplay.Usables.UsableManagerEvents.UsableDespawned_TypeInfo*/ lRam0000000003d296d0)) break;
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar6);
    bVar1 = lVar6 == lVar3;
    lVar6 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar7 = func_0x00f78e5c(plVar4);
  lVar6 = auVar7._0_8_;
  if ((bRam0000000003eb4e57 & 1) == 0) {
    func_0x00f78a20(0x3d39c40);
    func_0x00f78a20(0x3d1d798);
    bRam0000000003eb4e57 = 1;
  }
  *(undefined8 *)(lVar6 + 0x10) = uVar5;
  *(long *)(lVar6 + 0x18) = auVar7._8_8_;
  *(undefined8 *)(lVar6 + 0x20) = param_4;
  *(undefined8 *)(lVar6 + 0x28) = param_5;
  *(undefined8 *)(lVar6 + 0x38) = param_6;
  *(undefined8 *)(lVar6 + 0x40) = param_7;
  uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<ActorGroup>_TypeInfo*/ uRam0000000003d1d798);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar5,8,uRam0000000003d39c40);
  *(undefined8 *)(lVar6 + 0x48) = uVar5;
  return;
}



// ============================================================
// RVA: 0x1524410 | Atlas.Gameplay.Usables.UsableManager.remove_OnUsableSpawned
// ============================================================

void Atlas_Gameplay_Usables_UsableManager__remove_OnUsableSpawned
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4e54 & 1) == 0) {
    func_0x00f78a20(0x3d296d8);
    bRam0000000003eb4e54 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x60);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Usables.UsableManagerEvents.UsableSpawned_TypeInfo*/ lRam0000000003d296d8))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x60),plVar2,lVar6);
    bVar1 = lVar6 == lVar3;
    lVar6 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4e55 & 1) == 0) {
    func_0x00f78a20(0x3d296d0);
    bRam0000000003eb4e55 = 1;
  }
  plVar2 = (long *)(auVar7._0_8_ + 0x68);
  lVar6 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar6,auVar7._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Usables.UsableManagerEvents.UsableDespawned_TypeInfo*/ lRam0000000003d296d0))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar6);
    bVar1 = lVar6 == lVar3;
    lVar6 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar7 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb4e56 & 1) == 0) {
    func_0x00f78a20(0x3d296d0);
    bRam0000000003eb4e56 = 1;
  }
  plVar2 = (long *)(auVar7._0_8_ + 0x68);
  lVar6 = *plVar2;
  while( true ) {
    uVar5 = 0;
    plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,auVar7._8_8_);
    if ((plVar4 != (long *)0x0) && (*plVar4 != /*Atlas.Gameplay.Usables.UsableManagerEvents.UsableDespawned_TypeInfo*/ lRam0000000003d296d0)) break;
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar6);
    bVar1 = lVar6 == lVar3;
    lVar6 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar7 = func_0x00f78e5c(plVar4);
  lVar6 = auVar7._0_8_;
  if ((bRam0000000003eb4e57 & 1) == 0) {
    func_0x00f78a20(0x3d39c40);
    func_0x00f78a20(0x3d1d798);
    bRam0000000003eb4e57 = 1;
  }
  *(undefined8 *)(lVar6 + 0x10) = uVar5;
  *(long *)(lVar6 + 0x18) = auVar7._8_8_;
  *(undefined8 *)(lVar6 + 0x20) = param_4;
  *(undefined8 *)(lVar6 + 0x28) = param_5;
  *(undefined8 *)(lVar6 + 0x38) = param_6;
  *(undefined8 *)(lVar6 + 0x40) = param_7;
  uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<ActorGroup>_TypeInfo*/ uRam0000000003d1d798);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar5,8,uRam0000000003d39c40);
  *(undefined8 *)(lVar6 + 0x48) = uVar5;
  return;
}



// ============================================================
// RVA: 0x15244b0 | Atlas.Gameplay.Usables.UsableManager.add_OnUsableDespawned
// ============================================================

void Atlas_Gameplay_Usables_UsableManager__add_OnUsableDespawned
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4e55 & 1) == 0) {
    func_0x00f78a20(0x3d296d0);
    bRam0000000003eb4e55 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x68);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Usables.UsableManagerEvents.UsableDespawned_TypeInfo*/ lRam0000000003d296d0))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x68),plVar2,lVar6);
    bVar1 = lVar6 == lVar3;
    lVar6 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4e56 & 1) == 0) {
    func_0x00f78a20(0x3d296d0);
    bRam0000000003eb4e56 = 1;
  }
  plVar2 = (long *)(auVar7._0_8_ + 0x68);
  lVar6 = *plVar2;
  while( true ) {
    uVar5 = 0;
    plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,auVar7._8_8_);
    if ((plVar4 != (long *)0x0) && (*plVar4 != /*Atlas.Gameplay.Usables.UsableManagerEvents.UsableDespawned_TypeInfo*/ lRam0000000003d296d0)) break;
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar6);
    bVar1 = lVar6 == lVar3;
    lVar6 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar7 = func_0x00f78e5c(plVar4);
  lVar6 = auVar7._0_8_;
  if ((bRam0000000003eb4e57 & 1) == 0) {
    func_0x00f78a20(0x3d39c40);
    func_0x00f78a20(0x3d1d798);
    bRam0000000003eb4e57 = 1;
  }
  *(undefined8 *)(lVar6 + 0x10) = uVar5;
  *(long *)(lVar6 + 0x18) = auVar7._8_8_;
  *(undefined8 *)(lVar6 + 0x20) = param_4;
  *(undefined8 *)(lVar6 + 0x28) = param_5;
  *(undefined8 *)(lVar6 + 0x38) = param_6;
  *(undefined8 *)(lVar6 + 0x40) = param_7;
  uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<ActorGroup>_TypeInfo*/ uRam0000000003d1d798);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar5,8,uRam0000000003d39c40);
  *(undefined8 *)(lVar6 + 0x48) = uVar5;
  return;
}



// ============================================================
// RVA: 0x1524550 | Atlas.Gameplay.Usables.UsableManager.remove_OnUsableDespawned
// ============================================================

void Atlas_Gameplay_Usables_UsableManager__remove_OnUsableDespawned
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4e56 & 1) == 0) {
    func_0x00f78a20(0x3d296d0);
    bRam0000000003eb4e56 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x68);
  while( true ) {
    uVar4 = 0;
    plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,param_2);
    if ((plVar2 != (long *)0x0) && (*plVar2 != /*Atlas.Gameplay.Usables.UsableManagerEvents.UsableDespawned_TypeInfo*/ lRam0000000003d296d0)) break;
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x68),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  lVar5 = auVar6._0_8_;
  if ((bRam0000000003eb4e57 & 1) == 0) {
    func_0x00f78a20(0x3d39c40);
    func_0x00f78a20(0x3d1d798);
    bRam0000000003eb4e57 = 1;
  }
  *(undefined8 *)(lVar5 + 0x10) = uVar4;
  *(long *)(lVar5 + 0x18) = auVar6._8_8_;
  *(undefined8 *)(lVar5 + 0x20) = param_4;
  *(undefined8 *)(lVar5 + 0x28) = param_5;
  *(undefined8 *)(lVar5 + 0x38) = param_6;
  *(undefined8 *)(lVar5 + 0x40) = param_7;
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<ActorGroup>_TypeInfo*/ uRam0000000003d1d798);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar4,8,uRam0000000003d39c40);
  *(undefined8 *)(lVar5 + 0x48) = uVar4;
  return;
}



// ============================================================
// RVA: 0x15245f0 | Atlas.Gameplay.Usables.UsableManager.Init
// ============================================================

void Atlas_Gameplay_Usables_UsableManager__Init
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4e57 & 1) == 0) {
    func_0x00f78a20(0x3d39c40);
    func_0x00f78a20(0x3d1d798);
    bRam0000000003eb4e57 = 1;
  }
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  *(undefined8 *)(param_1 + 0x28) = param_5;
  *(undefined8 *)(param_1 + 0x38) = param_6;
  *(undefined8 *)(param_1 + 0x40) = param_7;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<ActorGroup>_TypeInfo*/ uRam0000000003d1d798);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar1,8,uRam0000000003d39c40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}



// ============================================================
// RVA: 0x15246a8 | Atlas.Gameplay.Usables.UsableManager.DeInit
// ============================================================

void Atlas_Gameplay_Usables_UsableManager__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// ============================================================
// RVA: 0x15246bc | Atlas.Gameplay.Usables.UsableManager.DeSpawnAllUsablesImmediately
// ============================================================

/* WARNING: Possible PIC construction at 0x015253c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015253cc) */
/* WARNING: Removing unreachable block (ram,0x015253d0) */
/* WARNING: Removing unreachable block (ram,0x01525400) */
/* WARNING: Removing unreachable block (ram,0x01525448) */
/* WARNING: Removing unreachable block (ram,0x0152544c) */
/* WARNING: Removing unreachable block (ram,0x01525450) */
/* WARNING: Removing unreachable block (ram,0x01525474) */
/* WARNING: Removing unreachable block (ram,0x015254ac) */
/* WARNING: Removing unreachable block (ram,0x015254b0) */
/* WARNING: Removing unreachable block (ram,0x015254b4) */
/* WARNING: Removing unreachable block (ram,0x015254d8) */
/* WARNING: Removing unreachable block (ram,0x01525510) */
/* WARNING: Removing unreachable block (ram,0x01525514) */
/* WARNING: Removing unreachable block (ram,0x01525518) */
/* WARNING: Removing unreachable block (ram,0x0152553c) */
/* WARNING: Removing unreachable block (ram,0x01525574) */
/* WARNING: Removing unreachable block (ram,0x01525578) */
/* WARNING: Removing unreachable block (ram,0x0152557c) */
/* WARNING: Removing unreachable block (ram,0x015255a0) */
/* WARNING: Removing unreachable block (ram,0x015255d8) */
/* WARNING: Removing unreachable block (ram,0x015255dc) */
/* WARNING: Removing unreachable block (ram,0x015255e0) */
/* WARNING: Removing unreachable block (ram,0x01524ce4) */
/* WARNING: Removing unreachable block (ram,0x01524998) */

void Atlas_Gameplay_Usables_UsableManager__DeSpawnAllUsablesImmediately
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  int extraout_w1;
  int extraout_w1_00;
  long *extraout_x8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  long alStack_340 [4];
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long *plStack_188;
  int aiStack_180 [4];
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  int aiStack_b0 [4];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  if ((bRam0000000003eb4e58 & 1) == 0) {
    func_0x00f78a20(0x3d432f8);
    func_0x00f78a20(0x3d32108);
    func_0x00f78a20(0x3d325c0);
    func_0x00f78a20(0x3d32110);
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d32118);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d39c58);
    func_0x00f78a20(0x3d3a7d0);
    func_0x00f78a20(0x3d39c38);
    func_0x00f78a20(0x3d1d798);
    func_0x00f78a20(0x3d25868);
    bRam0000000003eb4e58 = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  aiStack_b0[2] = 0;
  lVar5 = func_0x00f78aec(/*System.Collections.Generic.List<ActorGroup>_TypeInfo*/ uRam0000000003d1d798);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar5,uRam0000000003d39c38);
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (param_3 = uRam0000000003d432f8, /*Core.Actors.ActorManager$$FindDerivedActorGroups<Usable>*/ func_0x0171e8f4(*(long *)(param_1 + 0x20),lVar5), lVar5 != 0))
  {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,lVar5,uRam0000000003d39c58);
    uStack_78 = uStack_c0;
    uStack_80 = uStack_c8;
    plStack_70 = plStack_b8;
    iVar10 = 0;
    while( true ) {
      uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d32110);
      if ((uVar6 & 1) == 0) {
        aiStack_b0[iVar10] = 0x73;
        aiStack_b0[2] = aiStack_b0[2] + 1;
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32108);
        return;
      }
      if (plStack_70 == (long *)0x0) break;
      if (plStack_70[2] == 0) {
        func_0x00f78af4();
        goto code_r0x015249a4;
      }
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,plStack_70[2],uRam0000000003d3a7d0);
      uStack_98 = uStack_c0;
      uStack_a0 = uStack_c8;
      plStack_90 = plStack_b8;
      while (uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_a0,uRam0000000003d325c8), (uVar6 & 1) != 0) {
        if (plStack_90 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x015249a4;
        }
        if ((*(byte *)(*plStack_90 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.Usable_TypeInfo*/ lRam0000000003d25868 + 300)) ||
           (*(long *)(*(long *)(*plStack_90 + 200) +
                      (ulong)*(byte *)(/*Atlas.Gameplay.Usables.Usable_TypeInfo*/ lRam0000000003d25868 + 300) * 8 + -8) != /*Atlas.Gameplay.Usables.Usable_TypeInfo*/ lRam0000000003d25868
           )) {
          func_0x00f78e5c();
          goto code_r0x015249a4;
        }
        Atlas_Gameplay_Usables_Usable__DestroyImmediately(plStack_90,0);
      }
      aiStack_b0[iVar10] = 0x5a;
      iVar3 = aiStack_b0[2];
      iVar1 = aiStack_b0[2] + 1;
      aiStack_b0[2] = iVar1;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a0,uRam0000000003d325c0);
      iVar10 = 0;
      if ((iVar1 != 0) && (iVar10 = iVar1, aiStack_b0[iVar3] == 0x5a)) {
        iVar10 = iVar3;
        aiStack_b0[2] = iVar3;
      }
    }
    func_0x00f78af4();
code_r0x015249a4:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x15249a8);
    (*pcVar4)();
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar7 = (long *)___cxa_begin_catch();
    lVar5 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32108);
    if (lVar5 == 0) {
      return;
    }
    func_0x00f78ac0(lVar5,0);
  }
  lVar5 = __Unwind_Resume();
  if ((bRam0000000003eb4e59 & 1) == 0) {
    func_0x00f78a20(0x3d432f8);
    func_0x00f78a20(0x3d32108);
    func_0x00f78a20(0x3d325c0);
    func_0x00f78a20(0x3d32110);
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d32118);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d39c58);
    func_0x00f78a20(0x3d3a7d0);
    func_0x00f78a20(0x3d39c38);
    func_0x00f78a20(0x3d1d798);
    func_0x00f78a20(0x3d25868);
    bRam0000000003eb4e59 = 1;
  }
  uStack_170 = 0;
  uStack_168 = 0;
  plStack_160 = (long *)0x0;
  aiStack_180[2] = 0;
  lVar8 = func_0x00f78aec(/*System.Collections.Generic.List<ActorGroup>_TypeInfo*/ uRam0000000003d1d798);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar8,uRam0000000003d39c38);
  if ((*(long *)(lVar5 + 0x20) != 0) &&
     (param_3 = uRam0000000003d432f8, /*Core.Actors.ActorManager$$FindDerivedActorGroups<Usable>*/ func_0x0171e8f4(*(long *)(lVar5 + 0x20),lVar8), lVar8 != 0)) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_198,lVar8,uRam0000000003d39c58);
    uStack_148 = uStack_190;
    uStack_150 = uStack_198;
    plStack_140 = plStack_188;
    iVar10 = 0;
    while( true ) {
      uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_150,uRam0000000003d32110);
      if ((uVar6 & 1) == 0) {
        aiStack_180[iVar10] = 0x7d;
        aiStack_180[2] = aiStack_180[2] + 1;
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_150,uRam0000000003d32108);
        return;
      }
      if (plStack_140 == (long *)0x0) break;
      if (plStack_140[2] == 0) {
        func_0x00f78af4();
        goto code_r0x01524cf0;
      }
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_198,plStack_140[2],uRam0000000003d3a7d0);
      uStack_168 = uStack_190;
      uStack_170 = uStack_198;
      plStack_160 = plStack_188;
      while (uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_170,uRam0000000003d325c8), (uVar6 & 1) != 0) {
        if (plStack_160 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01524cf0;
        }
        if ((*(byte *)(*plStack_160 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.Usable_TypeInfo*/ lRam0000000003d25868 + 300)) ||
           (*(long *)(*(long *)(*plStack_160 + 200) +
                      (ulong)*(byte *)(/*Atlas.Gameplay.Usables.Usable_TypeInfo*/ lRam0000000003d25868 + 300) * 8 + -8) != /*Atlas.Gameplay.Usables.Usable_TypeInfo*/ lRam0000000003d25868
           )) {
          func_0x00f78e5c();
          goto code_r0x01524cf0;
        }
        if ((char)plStack_160[3] != '\0') {
          *(undefined2 *)(plStack_160 + 0xc) = 1;
        }
      }
      aiStack_180[iVar10] = 100;
      iVar3 = aiStack_180[2];
      iVar1 = aiStack_180[2] + 1;
      aiStack_180[2] = iVar1;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_170,uRam0000000003d325c0);
      iVar10 = 0;
      if ((iVar1 != 0) && (iVar10 = iVar1, aiStack_180[iVar3] == 100)) {
        iVar10 = iVar3;
        aiStack_180[2] = iVar3;
      }
    }
    func_0x00f78af4();
code_r0x01524cf0:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1524cf4);
    (*pcVar4)();
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar7 = (long *)___cxa_begin_catch();
    lVar5 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_150,uRam0000000003d32108);
    if (lVar5 == 0) {
      return;
    }
    func_0x00f78ac0(lVar5,0);
  }
  auVar15 = __Unwind_Resume();
  uVar11 = auVar15._8_8_;
  lVar5 = auVar15._0_8_;
  plVar7 = alStack_340;
  if ((bRam0000000003eb4e5a & 1) == 0) {
    func_0x00f78a20(0x3d523a8);
    func_0x00f78a20(0x3d523b0);
    func_0x00f78a20(0x3d523b8);
    func_0x00f78a20(0x3d523c0);
    func_0x00f78a20(0x3d523c8);
    func_0x00f78a20(0x3d523d0);
    func_0x00f78a20(0x3d523d8);
    func_0x00f78a20(64300000);
    func_0x00f78a20(0x3d523e8);
    func_0x00f78a20(0x3d523f0);
    func_0x00f78a20(0x3d523f8);
    func_0x00f78a20(0x3d52400);
    func_0x00f78a20(0x3d52408);
    func_0x00f78a20(0x3d52418);
    func_0x00f78a20(0x3d52420);
    func_0x00f78a20(0x3d52428);
    func_0x00f78a20(0x3d52430);
    func_0x00f78a20(0x3d52438);
    func_0x00f78a20(0x3d5fe70);
    func_0x00f78a20(0x3d5fe78);
    func_0x00f78a20(0x3d5fe80);
    func_0x00f78a20(0x3d5fe88);
    func_0x00f78a20(0x3d5fe90);
    func_0x00f78a20(0x3d5fe98);
    func_0x00f78a20(0x3d5fea0);
    func_0x00f78a20(0x3d5fea8);
    func_0x00f78a20(0x3d70f90);
    func_0x00f78a20(0x3d71fa8);
    func_0x00f78a20(0x3d70fe8);
    func_0x00f78a20(0x3d70fb8);
    func_0x00f78a20(0x3d70f78);
    func_0x00f78a20(0x3d728b8);
    func_0x00f78a20(0x3d70fb0);
    func_0x00f78a20(0x3d70f98);
    func_0x00f78a20(0x3d70f88);
    func_0x00f78a20(0x3d70f80);
    func_0x00f78a20(0x3d6b360);
    func_0x00f78a20(0x3d72880);
    func_0x00f78a20(0x3d6d498);
    func_0x00f78a20(0x3d695f0);
    func_0x00f78a20(0x3d70fa0);
    func_0x00f78a20(0x3d70ff0);
    func_0x00f78a20(0x3d70fe0);
    func_0x00f78a20(0x3d70fa8);
    func_0x00f78a20(0x3d70fc8);
    bRam0000000003eb4e5a = 1;
  }
  *(undefined8 *)(lVar5 + 0x30) = param_3;
  if (param_4 != 0) {
    lVar8 = *(long *)(lVar5 + 0x28);
    uVar2 = *(undefined4 *)(param_4 + 0x20);
    /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_240,lVar5,uRam0000000003d5fe98);
    if (lVar8 != 0) {
      uStack_218 = uStack_238;
      uStack_220 = uStack_240;
      uStack_208 = uStack_228;
      uStack_210 = uStack_230;
      /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar8,uVar2,&uStack_220,0,uRam0000000003d523d8);
      if (*(long *)(lVar5 + 0x28) != 0) {
        /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(lVar5 + 0x28),/*STR('P_Usable_Clam')*/ uRam0000000003d70f80,/*STR('BaseLayerContext')*/ uRam0000000003d695f0,
                        *(undefined4 *)(param_4 + 0x20),uVar11,0,uRam0000000003d52420);
        lVar8 = *(long *)(lVar5 + 0x28);
        uVar2 = *(undefined4 *)(param_4 + 0x24);
        /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_260,lVar5,uRam0000000003d5fe90);
        if (lVar8 != 0) {
          uStack_218 = uStack_258;
          uStack_220 = uStack_260;
          uStack_208 = uStack_248;
          uStack_210 = uStack_250;
          /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar8,uVar2,&uStack_220,0,uRam0000000003d523d0);
          if (*(long *)(lVar5 + 0x28) != 0) {
            /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(lVar5 + 0x28),/*STR('P_Usable_Sheldon')*/ uRam0000000003d70fa0,/*STR('BaseLayerContext')*/ uRam0000000003d695f0,
                            *(undefined4 *)(param_4 + 0x24),uVar11,0,uRam0000000003d52418);
            lVar8 = *(long *)(lVar5 + 0x28);
            uVar2 = *(undefined4 *)(param_4 + 0x28);
            /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_280,lVar5,uRam0000000003d5fe88);
            if (lVar8 != 0) {
              uStack_218 = uStack_278;
              uStack_220 = uStack_280;
              uStack_208 = uStack_268;
              uStack_210 = uStack_270;
              /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar8,uVar2,&uStack_220,0,uRam0000000003d523c8);
              if (*(long *)(lVar5 + 0x28) != 0) {
                /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(lVar5 + 0x28),/*STR('P_Usable_CulturePod')*/ uRam0000000003d70f88,/*STR('BaseLayerContext')*/ uRam0000000003d695f0,
                                *(undefined4 *)(param_4 + 0x28),uVar11,0,uRam0000000003d52408);
                lVar8 = *(long *)(lVar5 + 0x28);
                uVar2 = *(undefined4 *)(param_4 + 0x2c);
                /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_2a0,lVar5,uRam0000000003d5fe80);
                if (lVar8 != 0) {
                  uStack_218 = uStack_298;
                  uStack_220 = uStack_2a0;
                  uStack_208 = uStack_288;
                  uStack_210 = uStack_290;
                  /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar8,uVar2,&uStack_220,0,uRam0000000003d523c0);
                  if (*(long *)(lVar5 + 0x28) != 0) {
                    /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(lVar5 + 0x28),/*STR('P_Usable_Shield')*/ uRam0000000003d70fa8,
                                    /*STR('BaseLayerContext')*/ uRam0000000003d695f0,*(undefined4 *)(param_4 + 0x2c),uVar11,0,
                                    uRam0000000003d52400);
                    lVar8 = *(long *)(lVar5 + 0x28);
                    uVar2 = *(undefined4 *)(param_4 + 0x34);
                    /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_2c0,lVar5,uRam0000000003d5fe70);
                    if (lVar8 != 0) {
                      uStack_218 = uStack_2b8;
                      uStack_220 = uStack_2c0;
                      uStack_208 = uStack_2a8;
                      uStack_210 = uStack_2b0;
                      /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar8,uVar2,&uStack_220,0,uRam0000000003d523b0);
                      if (*(long *)(lVar5 + 0x28) != 0) {
                        /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(lVar5 + 0x28),/*STR('P_Usable_Boost')*/ uRam0000000003d70f78,
                                        /*STR('BaseLayerContext')*/ uRam0000000003d695f0,*(undefined4 *)(param_4 + 0x34),uVar11,
                                        0,uRam0000000003d523f0);
                        lVar8 = *(long *)(lVar5 + 0x28);
                        uVar2 = *(undefined4 *)(param_4 + 0x38);
                        /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_2e0,lVar5,uRam0000000003d5fe78);
                        if (lVar8 != 0) {
                          uStack_218 = uStack_2d8;
                          uStack_220 = uStack_2e0;
                          uStack_208 = uStack_2c8;
                          uStack_210 = uStack_2d0;
                          /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar8,uVar2,&uStack_220,0,uRam0000000003d523b8);
                          if (*(long *)(lVar5 + 0x28) != 0) {
                            /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(lVar5 + 0x28),/*STR('P_Usable_GoldenTurd')*/ uRam0000000003d70f90,
                                            /*STR('BaseLayerContext')*/ uRam0000000003d695f0,*(undefined4 *)(param_4 + 0x38),
                                            uVar11,0,uRam0000000003d523f8);
                            lVar8 = *(long *)(lVar5 + 0x28);
                            uVar2 = *(undefined4 *)(param_4 + 0x30);
                            /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_300,lVar5,uRam0000000003d5fea8);
                            if (lVar8 != 0) {
                              uStack_218 = uStack_2f8;
                              uStack_220 = uStack_300;
                              uStack_208 = uStack_2e8;
                              uStack_210 = uStack_2f0;
                              /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar8,uVar2,&uStack_220,0,uRam0000000003d523e8);
                              if (*(long *)(lVar5 + 0x28) != 0) {
                                /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(lVar5 + 0x28),/*STR('P_Usable_SuperShield')*/ uRam0000000003d70fb0,
                                                /*STR('BaseLayerContext')*/ uRam0000000003d695f0,*(undefined4 *)(param_4 + 0x30)
                                                ,uVar11,0,uRam0000000003d52430);
                                lVar8 = *(long *)(lVar5 + 0x28);
                                uVar2 = *(undefined4 *)(param_4 + 0x3c);
                                /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_320,lVar5,uRam0000000003d5fea0);
                                if (lVar8 != 0) {
                                  uStack_218 = uStack_318;
                                  uStack_220 = uStack_320;
                                  uStack_208 = uStack_308;
                                  uStack_210 = uStack_310;
                                  /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar8,uVar2,&uStack_220,0,uRam0000000003d523e0);
                                  if (*(long *)(lVar5 + 0x28) != 0) {
                                    /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(lVar5 + 0x28),/*STR('P_Usable_Satellite')*/ uRam0000000003d70f98,
                                                    /*STR('BaseLayerContext')*/ uRam0000000003d695f0,
                                                    *(undefined4 *)(param_4 + 0x3c),uVar11,0,
                                                    uRam0000000003d52428);
                                    goto code_r0x01525620;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
  plVar7 = extraout_x8;
code_r0x01525620:
  if ((bRam0000000003eb4e60 & 1) == 0) {
    func_0x00f78a20(0x3d36390);
    func_0x00f78a20(0x3d1d5c0);
    func_0x00f78a20(0x3d3f2a8);
    func_0x00f78a20(0x3d1e500);
    func_0x00f78a20(0x3d3f2b0);
    func_0x00f78a20(0x3d1e508);
    func_0x00f78a20(0x3d3f2b8);
    func_0x00f78a20(0x3d1e510);
    func_0x00f78a20(0x3d648d0);
    func_0x00f78a20(0x3d648d8);
    func_0x00f78a20(0x3d648e0);
    func_0x00f78a20(0x3d648e8);
    func_0x00f78a20(0x3d296c8);
    bRam0000000003eb4e60 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar9 = *(undefined8 **)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8);
  lVar8 = puVar9[1];
  lVar5 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
  if (lVar8 == 0) {
    if (((*(ushort *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar9 = *(undefined8 **)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8);
    }
    uVar11 = *puVar9;
    lVar8 = func_0x00f78aec(/*Core.Containers.ObjectPool.Callbacks.InitCallback<AoEHit>_TypeInfo*/ uRam0000000003d1d5c0);
    /*Core.Containers.ObjectPool.Callbacks.InitCallback<object>$$.ctor*/ func_0x021f0ad8(lVar8,uVar11,uRam0000000003d648d0,uRam0000000003d36390);
    lVar5 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
    *(long *)(*(long *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8) + 8) = lVar8;
  }
  if (((*(ushort *)(lVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar5 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
  }
  puVar9 = *(undefined8 **)(lVar5 + 0xb8);
  lVar12 = puVar9[2];
  if (lVar12 == 0) {
    if (((*(ushort *)(lVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar9 = *(undefined8 **)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8);
    }
    uVar11 = *puVar9;
    lVar12 = func_0x00f78aec(/*Core.Containers.ObjectPool.Callbacks.OnEnterPoolCallback<AoEHit>_TypeInfo*/ uRam0000000003d1e508);
    /*Core.Containers.ObjectPool.Callbacks.OnEnterPoolCallback<object>$$.ctor*/ func_0x026f7a28(lVar12,uVar11,uRam0000000003d648d8,uRam0000000003d3f2b0);
    lVar5 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
    *(long *)(*(long *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8) + 0x10) = lVar12;
  }
  if (((*(ushort *)(lVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar5 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
  }
  puVar9 = *(undefined8 **)(lVar5 + 0xb8);
  lVar13 = puVar9[3];
  if (lVar13 == 0) {
    if (((*(ushort *)(lVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar9 = *(undefined8 **)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8);
    }
    uVar11 = *puVar9;
    lVar13 = func_0x00f78aec(/*Core.Containers.ObjectPool.Callbacks.OnLeavePoolCallback<AoEHit>_TypeInfo*/ uRam0000000003d1e510);
    /*Core.Containers.ObjectPool.Callbacks.OnLeavePoolCallback<object>$$.ctor*/ func_0x026f7de8(lVar13,uVar11,uRam0000000003d648e0,uRam0000000003d3f2b8);
    lVar5 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
    *(long *)(*(long *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8) + 0x18) = lVar13;
  }
  if (((*(ushort *)(lVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar5 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
  }
  puVar9 = *(undefined8 **)(lVar5 + 0xb8);
  lVar14 = puVar9[4];
  if (lVar14 == 0) {
    if (((*(ushort *)(lVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar9 = *(undefined8 **)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8);
    }
    uVar11 = *puVar9;
    lVar14 = func_0x00f78aec(/*Core.Containers.ObjectPool.Callbacks.OnDeInitPoolCallback<AoEHit>_TypeInfo*/ uRam0000000003d1e500);
    /*Core.Containers.ObjectPool.Callbacks.OnDeInitPoolCallback<object>$$.ctor*/ func_0x026f7668(lVar14,uVar11,uRam0000000003d648e8,uRam0000000003d3f2a8);
    *(long *)(*(long *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8) + 0x20) = lVar14;
  }
  *plVar7 = lVar8;
  plVar7[1] = lVar13;
  plVar7[2] = lVar12;
  plVar7[3] = lVar14;
  return;
}



// ============================================================
// RVA: 0x1524a00 | Atlas.Gameplay.Usables.UsableManager.DeSpawnAllUsedUsables
// ============================================================

/* WARNING: Possible PIC construction at 0x015253c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015253cc) */
/* WARNING: Removing unreachable block (ram,0x015253d0) */
/* WARNING: Removing unreachable block (ram,0x01525400) */
/* WARNING: Removing unreachable block (ram,0x01525448) */
/* WARNING: Removing unreachable block (ram,0x0152544c) */
/* WARNING: Removing unreachable block (ram,0x01525450) */
/* WARNING: Removing unreachable block (ram,0x01525474) */
/* WARNING: Removing unreachable block (ram,0x015254ac) */
/* WARNING: Removing unreachable block (ram,0x015254b0) */
/* WARNING: Removing unreachable block (ram,0x015254b4) */
/* WARNING: Removing unreachable block (ram,0x015254d8) */
/* WARNING: Removing unreachable block (ram,0x01525510) */
/* WARNING: Removing unreachable block (ram,0x01525514) */
/* WARNING: Removing unreachable block (ram,0x01525518) */
/* WARNING: Removing unreachable block (ram,0x0152553c) */
/* WARNING: Removing unreachable block (ram,0x01525574) */
/* WARNING: Removing unreachable block (ram,0x01525578) */
/* WARNING: Removing unreachable block (ram,0x0152557c) */
/* WARNING: Removing unreachable block (ram,0x015255a0) */
/* WARNING: Removing unreachable block (ram,0x015255d8) */
/* WARNING: Removing unreachable block (ram,0x015255dc) */
/* WARNING: Removing unreachable block (ram,0x015255e0) */
/* WARNING: Removing unreachable block (ram,0x01524ce4) */

void Atlas_Gameplay_Usables_UsableManager__DeSpawnAllUsedUsables
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  int extraout_w1;
  long *extraout_x8;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined1 auVar15 [16];
  long alStack_270 [4];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  int aiStack_b0 [4];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  if ((bRam0000000003eb4e59 & 1) == 0) {
    func_0x00f78a20(0x3d432f8);
    func_0x00f78a20(0x3d32108);
    func_0x00f78a20(0x3d325c0);
    func_0x00f78a20(0x3d32110);
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d32118);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d39c58);
    func_0x00f78a20(0x3d3a7d0);
    func_0x00f78a20(0x3d39c38);
    func_0x00f78a20(0x3d1d798);
    func_0x00f78a20(0x3d25868);
    bRam0000000003eb4e59 = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  aiStack_b0[2] = 0;
  lVar5 = func_0x00f78aec(/*System.Collections.Generic.List<ActorGroup>_TypeInfo*/ uRam0000000003d1d798);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar5,uRam0000000003d39c38);
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (param_3 = uRam0000000003d432f8, /*Core.Actors.ActorManager$$FindDerivedActorGroups<Usable>*/ func_0x0171e8f4(*(long *)(param_1 + 0x20),lVar5), lVar5 != 0))
  {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,lVar5,uRam0000000003d39c58);
    uStack_78 = uStack_c0;
    uStack_80 = uStack_c8;
    plStack_70 = plStack_b8;
    iVar13 = 0;
    while( true ) {
      uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d32110);
      if ((uVar6 & 1) == 0) {
        aiStack_b0[iVar13] = 0x7d;
        aiStack_b0[2] = aiStack_b0[2] + 1;
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32108);
        return;
      }
      if (plStack_70 == (long *)0x0) break;
      if (plStack_70[2] == 0) {
        func_0x00f78af4();
        goto code_r0x01524cf0;
      }
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,plStack_70[2],uRam0000000003d3a7d0);
      uStack_98 = uStack_c0;
      uStack_a0 = uStack_c8;
      plStack_90 = plStack_b8;
      while (uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_a0,uRam0000000003d325c8), (uVar6 & 1) != 0) {
        if (plStack_90 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01524cf0;
        }
        if ((*(byte *)(*plStack_90 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.Usable_TypeInfo*/ lRam0000000003d25868 + 300)) ||
           (*(long *)(*(long *)(*plStack_90 + 200) +
                      (ulong)*(byte *)(/*Atlas.Gameplay.Usables.Usable_TypeInfo*/ lRam0000000003d25868 + 300) * 8 + -8) != /*Atlas.Gameplay.Usables.Usable_TypeInfo*/ lRam0000000003d25868
           )) {
          func_0x00f78e5c();
          goto code_r0x01524cf0;
        }
        if ((char)plStack_90[3] != '\0') {
          *(undefined2 *)(plStack_90 + 0xc) = 1;
        }
      }
      aiStack_b0[iVar13] = 100;
      iVar3 = aiStack_b0[2];
      iVar1 = aiStack_b0[2] + 1;
      aiStack_b0[2] = iVar1;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a0,uRam0000000003d325c0);
      iVar13 = 0;
      if ((iVar1 != 0) && (iVar13 = iVar1, aiStack_b0[iVar3] == 100)) {
        iVar13 = iVar3;
        aiStack_b0[2] = iVar3;
      }
    }
    func_0x00f78af4();
code_r0x01524cf0:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1524cf4);
    (*pcVar4)();
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar7 = (long *)___cxa_begin_catch();
    lVar5 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32108);
    if (lVar5 == 0) {
      return;
    }
    func_0x00f78ac0(lVar5,0);
  }
  auVar15 = __Unwind_Resume();
  uVar9 = auVar15._8_8_;
  lVar5 = auVar15._0_8_;
  plVar7 = alStack_270;
  if ((bRam0000000003eb4e5a & 1) == 0) {
    func_0x00f78a20(0x3d523a8);
    func_0x00f78a20(0x3d523b0);
    func_0x00f78a20(0x3d523b8);
    func_0x00f78a20(0x3d523c0);
    func_0x00f78a20(0x3d523c8);
    func_0x00f78a20(0x3d523d0);
    func_0x00f78a20(0x3d523d8);
    func_0x00f78a20(64300000);
    func_0x00f78a20(0x3d523e8);
    func_0x00f78a20(0x3d523f0);
    func_0x00f78a20(0x3d523f8);
    func_0x00f78a20(0x3d52400);
    func_0x00f78a20(0x3d52408);
    func_0x00f78a20(0x3d52418);
    func_0x00f78a20(0x3d52420);
    func_0x00f78a20(0x3d52428);
    func_0x00f78a20(0x3d52430);
    func_0x00f78a20(0x3d52438);
    func_0x00f78a20(0x3d5fe70);
    func_0x00f78a20(0x3d5fe78);
    func_0x00f78a20(0x3d5fe80);
    func_0x00f78a20(0x3d5fe88);
    func_0x00f78a20(0x3d5fe90);
    func_0x00f78a20(0x3d5fe98);
    func_0x00f78a20(0x3d5fea0);
    func_0x00f78a20(0x3d5fea8);
    func_0x00f78a20(0x3d70f90);
    func_0x00f78a20(0x3d71fa8);
    func_0x00f78a20(0x3d70fe8);
    func_0x00f78a20(0x3d70fb8);
    func_0x00f78a20(0x3d70f78);
    func_0x00f78a20(0x3d728b8);
    func_0x00f78a20(0x3d70fb0);
    func_0x00f78a20(0x3d70f98);
    func_0x00f78a20(0x3d70f88);
    func_0x00f78a20(0x3d70f80);
    func_0x00f78a20(0x3d6b360);
    func_0x00f78a20(0x3d72880);
    func_0x00f78a20(0x3d6d498);
    func_0x00f78a20(0x3d695f0);
    func_0x00f78a20(0x3d70fa0);
    func_0x00f78a20(0x3d70ff0);
    func_0x00f78a20(0x3d70fe0);
    func_0x00f78a20(0x3d70fa8);
    func_0x00f78a20(0x3d70fc8);
    bRam0000000003eb4e5a = 1;
  }
  *(undefined8 *)(lVar5 + 0x30) = param_3;
  if (param_4 != 0) {
    lVar11 = *(long *)(lVar5 + 0x28);
    uVar2 = *(undefined4 *)(param_4 + 0x20);
    /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_170,lVar5,uRam0000000003d5fe98);
    if (lVar11 != 0) {
      uStack_148 = uStack_168;
      uStack_150 = uStack_170;
      uStack_138 = uStack_158;
      uStack_140 = uStack_160;
      /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar11,uVar2,&uStack_150,0,uRam0000000003d523d8);
      if (*(long *)(lVar5 + 0x28) != 0) {
        /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(lVar5 + 0x28),/*STR('P_Usable_Clam')*/ uRam0000000003d70f80,/*STR('BaseLayerContext')*/ uRam0000000003d695f0,
                        *(undefined4 *)(param_4 + 0x20),uVar9,0,uRam0000000003d52420);
        lVar11 = *(long *)(lVar5 + 0x28);
        uVar2 = *(undefined4 *)(param_4 + 0x24);
        /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_190,lVar5,uRam0000000003d5fe90);
        if (lVar11 != 0) {
          uStack_148 = uStack_188;
          uStack_150 = uStack_190;
          uStack_138 = uStack_178;
          uStack_140 = uStack_180;
          /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar11,uVar2,&uStack_150,0,uRam0000000003d523d0);
          if (*(long *)(lVar5 + 0x28) != 0) {
            /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(lVar5 + 0x28),/*STR('P_Usable_Sheldon')*/ uRam0000000003d70fa0,/*STR('BaseLayerContext')*/ uRam0000000003d695f0,
                            *(undefined4 *)(param_4 + 0x24),uVar9,0,uRam0000000003d52418);
            lVar11 = *(long *)(lVar5 + 0x28);
            uVar2 = *(undefined4 *)(param_4 + 0x28);
            /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_1b0,lVar5,uRam0000000003d5fe88);
            if (lVar11 != 0) {
              uStack_148 = uStack_1a8;
              uStack_150 = uStack_1b0;
              uStack_138 = uStack_198;
              uStack_140 = uStack_1a0;
              /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar11,uVar2,&uStack_150,0,uRam0000000003d523c8);
              if (*(long *)(lVar5 + 0x28) != 0) {
                /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(lVar5 + 0x28),/*STR('P_Usable_CulturePod')*/ uRam0000000003d70f88,/*STR('BaseLayerContext')*/ uRam0000000003d695f0,
                                *(undefined4 *)(param_4 + 0x28),uVar9,0,uRam0000000003d52408);
                lVar11 = *(long *)(lVar5 + 0x28);
                uVar2 = *(undefined4 *)(param_4 + 0x2c);
                /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_1d0,lVar5,uRam0000000003d5fe80);
                if (lVar11 != 0) {
                  uStack_148 = uStack_1c8;
                  uStack_150 = uStack_1d0;
                  uStack_138 = uStack_1b8;
                  uStack_140 = uStack_1c0;
                  /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar11,uVar2,&uStack_150,0,uRam0000000003d523c0);
                  if (*(long *)(lVar5 + 0x28) != 0) {
                    /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(lVar5 + 0x28),/*STR('P_Usable_Shield')*/ uRam0000000003d70fa8,
                                    /*STR('BaseLayerContext')*/ uRam0000000003d695f0,*(undefined4 *)(param_4 + 0x2c),uVar9,0,
                                    uRam0000000003d52400);
                    lVar11 = *(long *)(lVar5 + 0x28);
                    uVar2 = *(undefined4 *)(param_4 + 0x34);
                    /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_1f0,lVar5,uRam0000000003d5fe70);
                    if (lVar11 != 0) {
                      uStack_148 = uStack_1e8;
                      uStack_150 = uStack_1f0;
                      uStack_138 = uStack_1d8;
                      uStack_140 = uStack_1e0;
                      /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar11,uVar2,&uStack_150,0,uRam0000000003d523b0);
                      if (*(long *)(lVar5 + 0x28) != 0) {
                        /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(lVar5 + 0x28),/*STR('P_Usable_Boost')*/ uRam0000000003d70f78,
                                        /*STR('BaseLayerContext')*/ uRam0000000003d695f0,*(undefined4 *)(param_4 + 0x34),uVar9,0
                                        ,uRam0000000003d523f0);
                        lVar11 = *(long *)(lVar5 + 0x28);
                        uVar2 = *(undefined4 *)(param_4 + 0x38);
                        /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_210,lVar5,uRam0000000003d5fe78);
                        if (lVar11 != 0) {
                          uStack_148 = uStack_208;
                          uStack_150 = uStack_210;
                          uStack_138 = uStack_1f8;
                          uStack_140 = uStack_200;
                          /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar11,uVar2,&uStack_150,0,uRam0000000003d523b8);
                          if (*(long *)(lVar5 + 0x28) != 0) {
                            /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(lVar5 + 0x28),/*STR('P_Usable_GoldenTurd')*/ uRam0000000003d70f90,
                                            /*STR('BaseLayerContext')*/ uRam0000000003d695f0,*(undefined4 *)(param_4 + 0x38),
                                            uVar9,0,uRam0000000003d523f8);
                            lVar11 = *(long *)(lVar5 + 0x28);
                            uVar2 = *(undefined4 *)(param_4 + 0x30);
                            /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_230,lVar5,uRam0000000003d5fea8);
                            if (lVar11 != 0) {
                              uStack_148 = uStack_228;
                              uStack_150 = uStack_230;
                              uStack_138 = uStack_218;
                              uStack_140 = uStack_220;
                              /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar11,uVar2,&uStack_150,0,uRam0000000003d523e8);
                              if (*(long *)(lVar5 + 0x28) != 0) {
                                /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(lVar5 + 0x28),/*STR('P_Usable_SuperShield')*/ uRam0000000003d70fb0,
                                                /*STR('BaseLayerContext')*/ uRam0000000003d695f0,*(undefined4 *)(param_4 + 0x30)
                                                ,uVar9,0,uRam0000000003d52430);
                                lVar11 = *(long *)(lVar5 + 0x28);
                                uVar2 = *(undefined4 *)(param_4 + 0x3c);
                                /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_250,lVar5,uRam0000000003d5fea0);
                                if (lVar11 != 0) {
                                  uStack_148 = uStack_248;
                                  uStack_150 = uStack_250;
                                  uStack_138 = uStack_238;
                                  uStack_140 = uStack_240;
                                  /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar11,uVar2,&uStack_150,0,uRam0000000003d523e0);
                                  if (*(long *)(lVar5 + 0x28) != 0) {
                                    /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(lVar5 + 0x28),/*STR('P_Usable_Satellite')*/ uRam0000000003d70f98,
                                                    /*STR('BaseLayerContext')*/ uRam0000000003d695f0,
                                                    *(undefined4 *)(param_4 + 0x3c),uVar9,0,
                                                    uRam0000000003d52428);
                                    goto code_r0x01525620;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
  plVar7 = extraout_x8;
code_r0x01525620:
  if ((bRam0000000003eb4e60 & 1) == 0) {
    func_0x00f78a20(0x3d36390);
    func_0x00f78a20(0x3d1d5c0);
    func_0x00f78a20(0x3d3f2a8);
    func_0x00f78a20(0x3d1e500);
    func_0x00f78a20(0x3d3f2b0);
    func_0x00f78a20(0x3d1e508);
    func_0x00f78a20(0x3d3f2b8);
    func_0x00f78a20(0x3d1e510);
    func_0x00f78a20(0x3d648d0);
    func_0x00f78a20(0x3d648d8);
    func_0x00f78a20(0x3d648e0);
    func_0x00f78a20(0x3d648e8);
    func_0x00f78a20(0x3d296c8);
    bRam0000000003eb4e60 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar8 = *(undefined8 **)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8);
  lVar11 = puVar8[1];
  lVar5 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
  if (lVar11 == 0) {
    if (((*(ushort *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar8 = *(undefined8 **)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8);
    }
    uVar9 = *puVar8;
    lVar11 = func_0x00f78aec(/*Core.Containers.ObjectPool.Callbacks.InitCallback<AoEHit>_TypeInfo*/ uRam0000000003d1d5c0);
    /*Core.Containers.ObjectPool.Callbacks.InitCallback<object>$$.ctor*/ func_0x021f0ad8(lVar11,uVar9,uRam0000000003d648d0,uRam0000000003d36390);
    lVar5 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
    *(long *)(*(long *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8) + 8) = lVar11;
  }
  if (((*(ushort *)(lVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar5 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
  }
  puVar8 = *(undefined8 **)(lVar5 + 0xb8);
  lVar10 = puVar8[2];
  if (lVar10 == 0) {
    if (((*(ushort *)(lVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar8 = *(undefined8 **)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8);
    }
    uVar9 = *puVar8;
    lVar10 = func_0x00f78aec(/*Core.Containers.ObjectPool.Callbacks.OnEnterPoolCallback<AoEHit>_TypeInfo*/ uRam0000000003d1e508);
    /*Core.Containers.ObjectPool.Callbacks.OnEnterPoolCallback<object>$$.ctor*/ func_0x026f7a28(lVar10,uVar9,uRam0000000003d648d8,uRam0000000003d3f2b0);
    lVar5 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
    *(long *)(*(long *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8) + 0x10) = lVar10;
  }
  if (((*(ushort *)(lVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar5 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
  }
  puVar8 = *(undefined8 **)(lVar5 + 0xb8);
  lVar12 = puVar8[3];
  if (lVar12 == 0) {
    if (((*(ushort *)(lVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar8 = *(undefined8 **)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8);
    }
    uVar9 = *puVar8;
    lVar12 = func_0x00f78aec(/*Core.Containers.ObjectPool.Callbacks.OnLeavePoolCallback<AoEHit>_TypeInfo*/ uRam0000000003d1e510);
    /*Core.Containers.ObjectPool.Callbacks.OnLeavePoolCallback<object>$$.ctor*/ func_0x026f7de8(lVar12,uVar9,uRam0000000003d648e0,uRam0000000003d3f2b8);
    lVar5 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
    *(long *)(*(long *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8) + 0x18) = lVar12;
  }
  if (((*(ushort *)(lVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar5 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
  }
  puVar8 = *(undefined8 **)(lVar5 + 0xb8);
  lVar14 = puVar8[4];
  if (lVar14 == 0) {
    if (((*(ushort *)(lVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar8 = *(undefined8 **)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8);
    }
    uVar9 = *puVar8;
    lVar14 = func_0x00f78aec(/*Core.Containers.ObjectPool.Callbacks.OnDeInitPoolCallback<AoEHit>_TypeInfo*/ uRam0000000003d1e500);
    /*Core.Containers.ObjectPool.Callbacks.OnDeInitPoolCallback<object>$$.ctor*/ func_0x026f7668(lVar14,uVar9,uRam0000000003d648e8,uRam0000000003d3f2a8);
    *(long *)(*(long *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8) + 0x20) = lVar14;
  }
  *plVar7 = lVar11;
  plVar7[1] = lVar12;
  plVar7[2] = lVar10;
  plVar7[3] = lVar14;
  return;
}



// ============================================================
// RVA: 0x1524d4c | Atlas.Gameplay.Usables.UsableManager.CreateUsablePools
// ============================================================

/* WARNING: Possible PIC construction at 0x015253c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015253cc) */
/* WARNING: Removing unreachable block (ram,0x015253d0) */
/* WARNING: Removing unreachable block (ram,0x01525400) */
/* WARNING: Removing unreachable block (ram,0x01525448) */
/* WARNING: Removing unreachable block (ram,0x0152544c) */
/* WARNING: Removing unreachable block (ram,0x01525450) */
/* WARNING: Removing unreachable block (ram,0x01525474) */
/* WARNING: Removing unreachable block (ram,0x015254ac) */
/* WARNING: Removing unreachable block (ram,0x015254b0) */
/* WARNING: Removing unreachable block (ram,0x015254b4) */
/* WARNING: Removing unreachable block (ram,0x015254d8) */
/* WARNING: Removing unreachable block (ram,0x01525510) */
/* WARNING: Removing unreachable block (ram,0x01525514) */
/* WARNING: Removing unreachable block (ram,0x01525518) */
/* WARNING: Removing unreachable block (ram,0x0152553c) */
/* WARNING: Removing unreachable block (ram,0x01525574) */
/* WARNING: Removing unreachable block (ram,0x01525578) */
/* WARNING: Removing unreachable block (ram,0x0152557c) */
/* WARNING: Removing unreachable block (ram,0x015255a0) */
/* WARNING: Removing unreachable block (ram,0x015255d8) */
/* WARNING: Removing unreachable block (ram,0x015255dc) */
/* WARNING: Removing unreachable block (ram,0x015255e0) */

void Atlas_Gameplay_Usables_UsableManager__CreateUsablePools
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  long *extraout_x8;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long alStack_1a0 [4];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
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
  undefined8 uStack_d8;
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
  
  plVar2 = alStack_1a0;
  if ((bRam0000000003eb4e5a & 1) == 0) {
    func_0x00f78a20(0x3d523a8);
    func_0x00f78a20(0x3d523b0);
    func_0x00f78a20(0x3d523b8);
    func_0x00f78a20(0x3d523c0);
    func_0x00f78a20(0x3d523c8);
    func_0x00f78a20(0x3d523d0);
    func_0x00f78a20(0x3d523d8);
    func_0x00f78a20(64300000);
    func_0x00f78a20(0x3d523e8);
    func_0x00f78a20(0x3d523f0);
    func_0x00f78a20(0x3d523f8);
    func_0x00f78a20(0x3d52400);
    func_0x00f78a20(0x3d52408);
    func_0x00f78a20(0x3d52418);
    func_0x00f78a20(0x3d52420);
    func_0x00f78a20(0x3d52428);
    func_0x00f78a20(0x3d52430);
    func_0x00f78a20(0x3d52438);
    func_0x00f78a20(0x3d5fe70);
    func_0x00f78a20(0x3d5fe78);
    func_0x00f78a20(0x3d5fe80);
    func_0x00f78a20(0x3d5fe88);
    func_0x00f78a20(0x3d5fe90);
    func_0x00f78a20(0x3d5fe98);
    func_0x00f78a20(0x3d5fea0);
    func_0x00f78a20(0x3d5fea8);
    func_0x00f78a20(0x3d70f90);
    func_0x00f78a20(0x3d71fa8);
    func_0x00f78a20(0x3d70fe8);
    func_0x00f78a20(0x3d70fb8);
    func_0x00f78a20(0x3d70f78);
    func_0x00f78a20(0x3d728b8);
    func_0x00f78a20(0x3d70fb0);
    func_0x00f78a20(0x3d70f98);
    func_0x00f78a20(0x3d70f88);
    func_0x00f78a20(0x3d70f80);
    func_0x00f78a20(0x3d6b360);
    func_0x00f78a20(0x3d72880);
    func_0x00f78a20(0x3d6d498);
    func_0x00f78a20(0x3d695f0);
    func_0x00f78a20(0x3d70fa0);
    func_0x00f78a20(0x3d70ff0);
    func_0x00f78a20(0x3d70fe0);
    func_0x00f78a20(0x3d70fa8);
    func_0x00f78a20(0x3d70fc8);
    bRam0000000003eb4e5a = 1;
  }
  *(undefined8 *)(param_1 + 0x30) = param_3;
  if (param_4 != 0) {
    lVar7 = *(long *)(param_1 + 0x28);
    uVar1 = *(undefined4 *)(param_4 + 0x20);
    /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_a0,param_1,uRam0000000003d5fe98);
    if (lVar7 != 0) {
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar7,uVar1,&uStack_80,0,uRam0000000003d523d8);
      if (*(long *)(param_1 + 0x28) != 0) {
        /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(param_1 + 0x28),/*STR('P_Usable_Clam')*/ uRam0000000003d70f80,/*STR('BaseLayerContext')*/ uRam0000000003d695f0,
                        *(undefined4 *)(param_4 + 0x20),param_2,0,uRam0000000003d52420);
        lVar7 = *(long *)(param_1 + 0x28);
        uVar1 = *(undefined4 *)(param_4 + 0x24);
        /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_c0,param_1,uRam0000000003d5fe90);
        if (lVar7 != 0) {
          uStack_78 = uStack_b8;
          uStack_80 = uStack_c0;
          uStack_68 = uStack_a8;
          uStack_70 = uStack_b0;
          /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar7,uVar1,&uStack_80,0,uRam0000000003d523d0);
          if (*(long *)(param_1 + 0x28) != 0) {
            /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(param_1 + 0x28),/*STR('P_Usable_Sheldon')*/ uRam0000000003d70fa0,/*STR('BaseLayerContext')*/ uRam0000000003d695f0,
                            *(undefined4 *)(param_4 + 0x24),param_2,0,uRam0000000003d52418);
            lVar7 = *(long *)(param_1 + 0x28);
            uVar1 = *(undefined4 *)(param_4 + 0x28);
            /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_e0,param_1,uRam0000000003d5fe88);
            if (lVar7 != 0) {
              uStack_78 = uStack_d8;
              uStack_80 = uStack_e0;
              uStack_68 = uStack_c8;
              uStack_70 = uStack_d0;
              /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar7,uVar1,&uStack_80,0,uRam0000000003d523c8);
              if (*(long *)(param_1 + 0x28) != 0) {
                /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(param_1 + 0x28),/*STR('P_Usable_CulturePod')*/ uRam0000000003d70f88,/*STR('BaseLayerContext')*/ uRam0000000003d695f0,
                                *(undefined4 *)(param_4 + 0x28),param_2,0,uRam0000000003d52408);
                lVar7 = *(long *)(param_1 + 0x28);
                uVar1 = *(undefined4 *)(param_4 + 0x2c);
                /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_100,param_1,uRam0000000003d5fe80);
                if (lVar7 != 0) {
                  uStack_78 = uStack_f8;
                  uStack_80 = uStack_100;
                  uStack_68 = uStack_e8;
                  uStack_70 = uStack_f0;
                  /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar7,uVar1,&uStack_80,0,uRam0000000003d523c0);
                  if (*(long *)(param_1 + 0x28) != 0) {
                    /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(param_1 + 0x28),/*STR('P_Usable_Shield')*/ uRam0000000003d70fa8,
                                    /*STR('BaseLayerContext')*/ uRam0000000003d695f0,*(undefined4 *)(param_4 + 0x2c),param_2,0,
                                    uRam0000000003d52400);
                    lVar7 = *(long *)(param_1 + 0x28);
                    uVar1 = *(undefined4 *)(param_4 + 0x34);
                    /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_120,param_1,uRam0000000003d5fe70);
                    if (lVar7 != 0) {
                      uStack_78 = uStack_118;
                      uStack_80 = uStack_120;
                      uStack_68 = uStack_108;
                      uStack_70 = uStack_110;
                      /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar7,uVar1,&uStack_80,0,uRam0000000003d523b0);
                      if (*(long *)(param_1 + 0x28) != 0) {
                        /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(param_1 + 0x28),/*STR('P_Usable_Boost')*/ uRam0000000003d70f78,
                                        /*STR('BaseLayerContext')*/ uRam0000000003d695f0,*(undefined4 *)(param_4 + 0x34),param_2
                                        ,0,uRam0000000003d523f0);
                        lVar7 = *(long *)(param_1 + 0x28);
                        uVar1 = *(undefined4 *)(param_4 + 0x38);
                        /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_140,param_1,uRam0000000003d5fe78);
                        if (lVar7 != 0) {
                          uStack_78 = uStack_138;
                          uStack_80 = uStack_140;
                          uStack_68 = uStack_128;
                          uStack_70 = uStack_130;
                          /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar7,uVar1,&uStack_80,0,uRam0000000003d523b8);
                          if (*(long *)(param_1 + 0x28) != 0) {
                            /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(param_1 + 0x28),/*STR('P_Usable_GoldenTurd')*/ uRam0000000003d70f90,
                                            /*STR('BaseLayerContext')*/ uRam0000000003d695f0,*(undefined4 *)(param_4 + 0x38),
                                            param_2,0,uRam0000000003d523f8);
                            lVar7 = *(long *)(param_1 + 0x28);
                            uVar1 = *(undefined4 *)(param_4 + 0x30);
                            /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_160,param_1,uRam0000000003d5fea8);
                            if (lVar7 != 0) {
                              uStack_78 = uStack_158;
                              uStack_80 = uStack_160;
                              uStack_68 = uStack_148;
                              uStack_70 = uStack_150;
                              /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar7,uVar1,&uStack_80,0,uRam0000000003d523e8);
                              if (*(long *)(param_1 + 0x28) != 0) {
                                /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(param_1 + 0x28),/*STR('P_Usable_SuperShield')*/ uRam0000000003d70fb0,
                                                /*STR('BaseLayerContext')*/ uRam0000000003d695f0,*(undefined4 *)(param_4 + 0x30)
                                                ,param_2,0,uRam0000000003d52430);
                                lVar7 = *(long *)(param_1 + 0x28);
                                uVar1 = *(undefined4 *)(param_4 + 0x3c);
                                /*Atlas.Gameplay.Usables.UsableManager$$CreateCallbacks<SuperShieldUsable>*/ func_0x01a3ee6c(&uStack_180,param_1,uRam0000000003d5fea0);
                                if (lVar7 != 0) {
                                  uStack_78 = uStack_178;
                                  uStack_80 = uStack_180;
                                  uStack_68 = uStack_168;
                                  uStack_70 = uStack_170;
                                  /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddActorPool<SuperShieldUsable>*/ func_0x0182f770(lVar7,uVar1,&uStack_80,0,uRam0000000003d523e0);
                                  if (*(long *)(param_1 + 0x28) != 0) {
                                    /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(*(long *)(param_1 + 0x28),/*STR('P_Usable_Satellite')*/ uRam0000000003d70f98,
                                                    /*STR('BaseLayerContext')*/ uRam0000000003d695f0,
                                                    *(undefined4 *)(param_4 + 0x3c),param_2,0,
                                                    uRam0000000003d52428);
                                    goto code_r0x01525620;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
  plVar2 = extraout_x8;
code_r0x01525620:
  if ((bRam0000000003eb4e60 & 1) == 0) {
    func_0x00f78a20(0x3d36390);
    func_0x00f78a20(0x3d1d5c0);
    func_0x00f78a20(0x3d3f2a8);
    func_0x00f78a20(0x3d1e500);
    func_0x00f78a20(0x3d3f2b0);
    func_0x00f78a20(0x3d1e508);
    func_0x00f78a20(0x3d3f2b8);
    func_0x00f78a20(0x3d1e510);
    func_0x00f78a20(0x3d648d0);
    func_0x00f78a20(0x3d648d8);
    func_0x00f78a20(0x3d648e0);
    func_0x00f78a20(0x3d648e8);
    func_0x00f78a20(0x3d296c8);
    bRam0000000003eb4e60 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar3 = *(undefined8 **)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8);
  lVar4 = puVar3[1];
  lVar7 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
  if (lVar4 == 0) {
    if (((*(ushort *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar3 = *(undefined8 **)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = func_0x00f78aec(/*Core.Containers.ObjectPool.Callbacks.InitCallback<AoEHit>_TypeInfo*/ uRam0000000003d1d5c0);
    /*Core.Containers.ObjectPool.Callbacks.InitCallback<object>$$.ctor*/ func_0x021f0ad8(lVar4,uVar5,uRam0000000003d648d0,uRam0000000003d36390);
    lVar7 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
    *(long *)(*(long *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8) + 8) = lVar4;
  }
  if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar7 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
  }
  puVar3 = *(undefined8 **)(lVar7 + 0xb8);
  lVar6 = puVar3[2];
  if (lVar6 == 0) {
    if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar3 = *(undefined8 **)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar6 = func_0x00f78aec(/*Core.Containers.ObjectPool.Callbacks.OnEnterPoolCallback<AoEHit>_TypeInfo*/ uRam0000000003d1e508);
    /*Core.Containers.ObjectPool.Callbacks.OnEnterPoolCallback<object>$$.ctor*/ func_0x026f7a28(lVar6,uVar5,uRam0000000003d648d8,uRam0000000003d3f2b0);
    lVar7 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
    *(long *)(*(long *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8) + 0x10) = lVar6;
  }
  if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar7 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
  }
  puVar3 = *(undefined8 **)(lVar7 + 0xb8);
  lVar8 = puVar3[3];
  if (lVar8 == 0) {
    if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar3 = *(undefined8 **)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar8 = func_0x00f78aec(/*Core.Containers.ObjectPool.Callbacks.OnLeavePoolCallback<AoEHit>_TypeInfo*/ uRam0000000003d1e510);
    /*Core.Containers.ObjectPool.Callbacks.OnLeavePoolCallback<object>$$.ctor*/ func_0x026f7de8(lVar8,uVar5,uRam0000000003d648e0,uRam0000000003d3f2b8);
    lVar7 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
    *(long *)(*(long *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8) + 0x18) = lVar8;
  }
  if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar7 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
  }
  puVar3 = *(undefined8 **)(lVar7 + 0xb8);
  lVar9 = puVar3[4];
  if (lVar9 == 0) {
    if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar3 = *(undefined8 **)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar9 = func_0x00f78aec(/*Core.Containers.ObjectPool.Callbacks.OnDeInitPoolCallback<AoEHit>_TypeInfo*/ uRam0000000003d1e500);
    /*Core.Containers.ObjectPool.Callbacks.OnDeInitPoolCallback<object>$$.ctor*/ func_0x026f7668(lVar9,uVar5,uRam0000000003d648e8,uRam0000000003d3f2a8);
    *(long *)(*(long *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8) + 0x20) = lVar9;
  }
  *plVar2 = lVar4;
  plVar2[1] = lVar8;
  plVar2[2] = lVar6;
  plVar2[3] = lVar9;
  return;
}



// ============================================================
// RVA: 0x1525620 | Atlas.Gameplay.Usables.UsableManager.CreateAoEHitCallBacks
// ============================================================

void Atlas_Gameplay_Usables_UsableManager__CreateAoEHitCallBacks(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000003eb4e60 & 1) == 0) {
    func_0x00f78a20(0x3d36390);
    func_0x00f78a20(0x3d1d5c0);
    func_0x00f78a20(0x3d3f2a8);
    func_0x00f78a20(0x3d1e500);
    func_0x00f78a20(0x3d3f2b0);
    func_0x00f78a20(0x3d1e508);
    func_0x00f78a20(0x3d3f2b8);
    func_0x00f78a20(0x3d1e510);
    func_0x00f78a20(0x3d648d0);
    func_0x00f78a20(0x3d648d8);
    func_0x00f78a20(0x3d648e0);
    func_0x00f78a20(0x3d648e8);
    func_0x00f78a20(0x3d296c8);
    bRam0000000003eb4e60 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar2 = *(undefined8 **)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8);
  lVar3 = puVar2[1];
  lVar1 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
  if (lVar3 == 0) {
    if (((*(ushort *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar2 = *(undefined8 **)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8);
    }
    uVar4 = *puVar2;
    lVar3 = func_0x00f78aec(/*Core.Containers.ObjectPool.Callbacks.InitCallback<AoEHit>_TypeInfo*/ uRam0000000003d1d5c0);
    /*Core.Containers.ObjectPool.Callbacks.InitCallback<object>$$.ctor*/ func_0x021f0ad8(lVar3,uVar4,uRam0000000003d648d0,uRam0000000003d36390);
    lVar1 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
    *(long *)(*(long *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8) + 8) = lVar3;
  }
  if (((*(ushort *)(lVar1 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar1 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar1 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
  }
  puVar2 = *(undefined8 **)(lVar1 + 0xb8);
  lVar5 = puVar2[2];
  if (lVar5 == 0) {
    if (((*(ushort *)(lVar1 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar1 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar2 = *(undefined8 **)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8);
    }
    uVar4 = *puVar2;
    lVar5 = func_0x00f78aec(/*Core.Containers.ObjectPool.Callbacks.OnEnterPoolCallback<AoEHit>_TypeInfo*/ uRam0000000003d1e508);
    /*Core.Containers.ObjectPool.Callbacks.OnEnterPoolCallback<object>$$.ctor*/ func_0x026f7a28(lVar5,uVar4,uRam0000000003d648d8,uRam0000000003d3f2b0);
    lVar1 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
    *(long *)(*(long *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8) + 0x10) = lVar5;
  }
  if (((*(ushort *)(lVar1 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar1 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar1 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
  }
  puVar2 = *(undefined8 **)(lVar1 + 0xb8);
  lVar6 = puVar2[3];
  if (lVar6 == 0) {
    if (((*(ushort *)(lVar1 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar1 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar2 = *(undefined8 **)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8);
    }
    uVar4 = *puVar2;
    lVar6 = func_0x00f78aec(/*Core.Containers.ObjectPool.Callbacks.OnLeavePoolCallback<AoEHit>_TypeInfo*/ uRam0000000003d1e510);
    /*Core.Containers.ObjectPool.Callbacks.OnLeavePoolCallback<object>$$.ctor*/ func_0x026f7de8(lVar6,uVar4,uRam0000000003d648e0,uRam0000000003d3f2b8);
    lVar1 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
    *(long *)(*(long *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8) + 0x18) = lVar6;
  }
  if (((*(ushort *)(lVar1 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar1 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar1 = /*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8;
  }
  puVar2 = *(undefined8 **)(lVar1 + 0xb8);
  lVar7 = puVar2[4];
  if (lVar7 == 0) {
    if (((*(ushort *)(lVar1 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar1 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar2 = *(undefined8 **)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8);
    }
    uVar4 = *puVar2;
    lVar7 = func_0x00f78aec(/*Core.Containers.ObjectPool.Callbacks.OnDeInitPoolCallback<AoEHit>_TypeInfo*/ uRam0000000003d1e500);
    /*Core.Containers.ObjectPool.Callbacks.OnDeInitPoolCallback<object>$$.ctor*/ func_0x026f7668(lVar7,uVar4,uRam0000000003d648e8,uRam0000000003d3f2a8);
    *(long *)(*(long *)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8) + 0x20) = lVar7;
  }
  *param_1 = lVar3;
  param_1[1] = lVar6;
  param_1[2] = lVar5;
  param_1[3] = lVar7;
  return;
}



// ============================================================
// RVA: 0x1525928 | Atlas.Gameplay.Usables.UsableManager.GetHitVFXCount
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int Atlas_Gameplay_Usables_UsableManager__GetHitVFXCount(undefined8 param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)param_3 * _UNK_033f7d80 * (float)param_2;
  fVar1 = -fVar2;
  if (fVar2 != INFINITY) {
    fVar1 = fVar2;
  }
  return (int)fVar1;
}



// ============================================================
// RVA: 0x1525960 | Atlas.Gameplay.Usables.UsableManager.PostCreateUsablePools
// ============================================================

undefined1  [16]
Atlas_Gameplay_Usables_UsableManager__PostCreateUsablePools
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 extraout_x1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((bRam0000000003eb4e5b & 1) == 0) {
    func_0x00f78a20(0x3d232a0);
    func_0x00f78a20(0x3d5ff38);
    func_0x00f78a20(0x3d5ff40);
    func_0x00f78a20(0x3d5ff48);
    func_0x00f78a20(0x3d5ff50);
    func_0x00f78a20(0x3d5ff58);
    func_0x00f78a20(0x3d5ff60);
    func_0x00f78a20(0x3d5ff68);
    func_0x00f78a20(0x3d5ff70);
    bRam0000000003eb4e5b = 1;
  }
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined8 *)(param_1 + 0x58) = param_3;
  auVar3._0_8_ = func_0x00f78aec(/*Atlas.Rendering.MaterialDuplicator_TypeInfo*/ uRam0000000003d232a0);
  /*Atlas.Rendering.MaterialDuplicator$$.ctor*/ func_0x01492c28(auVar3._0_8_,0);
  if (auVar3._0_8_ != 0) {
    /*Atlas.Rendering.MaterialDuplicator$$Init*/ func_0x01491c08(auVar3._0_8_,10,10,2,0);
    /*Atlas.Gameplay.Usables.UsableManager$$InitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f7a0(param_1,param_2,auVar3._0_8_,*(undefined8 *)(param_1 + 0x58),
                    uRam0000000003d5ff60);
    /*Atlas.Gameplay.Usables.UsableManager$$InitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f7a0(param_1,param_2,auVar3._0_8_,*(undefined8 *)(param_1 + 0x58),
                    uRam0000000003d5ff58);
    /*Atlas.Gameplay.Usables.UsableManager$$InitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f7a0(param_1,param_2,auVar3._0_8_,*(undefined8 *)(param_1 + 0x58),
                    uRam0000000003d5ff50);
    /*Atlas.Gameplay.Usables.UsableManager$$InitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f7a0(param_1,param_2,auVar3._0_8_,*(undefined8 *)(param_1 + 0x58),
                    uRam0000000003d5ff48);
    /*Atlas.Gameplay.Usables.UsableManager$$InitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f7a0(param_1,param_2,auVar3._0_8_,*(undefined8 *)(param_1 + 0x58),
                    uRam0000000003d5ff38);
    /*Atlas.Gameplay.Usables.UsableManager$$InitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f7a0(param_1,param_2,auVar3._0_8_,*(undefined8 *)(param_1 + 0x58),
                    uRam0000000003d5ff40);
    /*Atlas.Gameplay.Usables.UsableManager$$InitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f7a0(param_1,param_2,auVar3._0_8_,*(undefined8 *)(param_1 + 0x58),
                    uRam0000000003d5ff70);
    /*Atlas.Gameplay.Usables.UsableManager$$InitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f7a0(param_1,param_2,auVar3._0_8_,*(undefined8 *)(param_1 + 0x58),
                    uRam0000000003d5ff68);
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(auVar3._0_8_,0);
    *(undefined8 *)(auVar3._0_8_ + 0x18) = 0;
    *(undefined8 *)(auVar3._0_8_ + 0x10) = 0;
    *(undefined8 *)(auVar3._0_8_ + 0x28) = 0;
    *(undefined8 *)(auVar3._0_8_ + 0x20) = 0;
    auVar3._8_8_ = 0;
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4e5c & 1) == 0) {
    func_0x00f78a20(0x3d5b958);
    func_0x00f78a20(0x3d5b960);
    func_0x00f78a20(0x3d5b968);
    func_0x00f78a20(0x3d5b970);
    func_0x00f78a20(0x3d5b980);
    func_0x00f78a20(0x3d5b988);
    func_0x00f78a20(0x3d5b990);
    func_0x00f78a20(0x3d5b998);
    func_0x00f78a20(0x3d5b9a0);
    func_0x00f78a20(0x3d5ba40);
    func_0x00f78a20(0x3d5ba48);
    func_0x00f78a20(0x3d5ba50);
    func_0x00f78a20(0x3d5ba58);
    func_0x00f78a20(0x3d5ba60);
    func_0x00f78a20(0x3d5ba68);
    func_0x00f78a20(0x3d5ba70);
    func_0x00f78a20(0x3d5ba78);
    func_0x00f78a20(0x3d5ba80);
    func_0x00f78a20(0x3d5feb0);
    func_0x00f78a20(0x3d5feb8);
    func_0x00f78a20(0x3d5fec0);
    func_0x00f78a20(0x3d5fec8);
    func_0x00f78a20(0x3d5fed0);
    func_0x00f78a20(0x3d5fed8);
    func_0x00f78a20(0x3d5fee0);
    func_0x00f78a20(0x3d5fee8);
    func_0x00f78a20(0x3d71fa8);
    func_0x00f78a20(0x3d728b8);
    func_0x00f78a20(0x3d6b360);
    func_0x00f78a20(0x3d72880);
    func_0x00f78a20(0x3d6d498);
    bRam0000000003eb4e5c = 1;
  }
  /*Atlas.Gameplay.Usables.UsableManager$$DeInitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f210(lVar1,uRam0000000003d5fed8);
  /*Atlas.Gameplay.Usables.UsableManager$$DeInitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f210(lVar1,uRam0000000003d5fed0);
  /*Atlas.Gameplay.Usables.UsableManager$$DeInitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f210(lVar1,uRam0000000003d5fec8);
  /*Atlas.Gameplay.Usables.UsableManager$$DeInitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f210(lVar1,uRam0000000003d5fec0);
  /*Atlas.Gameplay.Usables.UsableManager$$DeInitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f210(lVar1,uRam0000000003d5feb0);
  /*Atlas.Gameplay.Usables.UsableManager$$DeInitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f210(lVar1,uRam0000000003d5feb8);
  /*Atlas.Gameplay.Usables.UsableManager$$DeInitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f210(lVar1,uRam0000000003d5fee8);
  /*Atlas.Gameplay.Usables.UsableManager$$DeInitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f210(lVar1,uRam0000000003d5fee0);
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  if (*(long *)(lVar1 + 0x10) != 0) {
    /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar1 + 0x10),uRam0000000003d5ba70);
    if (*(long *)(lVar1 + 0x10) != 0) {
      /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar1 + 0x10),uRam0000000003d5ba68);
      if (*(long *)(lVar1 + 0x10) != 0) {
        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar1 + 0x10),uRam0000000003d5ba60);
        if (*(long *)(lVar1 + 0x10) != 0) {
          /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar1 + 0x10),uRam0000000003d5ba58);
          if (*(long *)(lVar1 + 0x10) != 0) {
            /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar1 + 0x10),uRam0000000003d5ba48);
            if (*(long *)(lVar1 + 0x10) != 0) {
              /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar1 + 0x10),uRam0000000003d5ba50);
              if (*(long *)(lVar1 + 0x10) != 0) {
                /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar1 + 0x10),uRam0000000003d5ba80);
                if (*(long *)(lVar1 + 0x10) != 0) {
                  /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar1 + 0x10),uRam0000000003d5ba78);
                  if (*(long *)(lVar1 + 0x18) != 0) {
                    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar1 + 0x18),uRam0000000003d5b988);
                    if (*(long *)(lVar1 + 0x18) != 0) {
                      /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar1 + 0x18),uRam0000000003d5b980);
                      if (*(long *)(lVar1 + 0x18) != 0) {
                        /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar1 + 0x18),uRam0000000003d5b970);
                        if (*(long *)(lVar1 + 0x18) != 0) {
                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar1 + 0x18),uRam0000000003d5b968);
                          if (*(long *)(lVar1 + 0x18) != 0) {
                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar1 + 0x18),uRam0000000003d5b958);
                            if (*(long *)(lVar1 + 0x18) != 0) {
                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar1 + 0x18),uRam0000000003d5b960);
                              if (*(long *)(lVar1 + 0x18) != 0) {
                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar1 + 0x18),uRam0000000003d5b998);
                                if (*(long *)(lVar1 + 0x18) != 0) {
                                  /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar1 + 0x18),uRam0000000003d5b990);
                                  if (*(long *)(lVar1 + 0x10) != 0) {
                                    /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar1 + 0x10),uRam0000000003d5ba40);
                                    if (*(long *)(lVar1 + 0x18) != 0) {
                                      /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar1 + 0x18),/*STR('RicochetHitVFX')*/ uRam0000000003d71fa8,
                                                      uRam0000000003d5b9a0);
                                      if (*(long *)(lVar1 + 0x18) != 0) {
                                        /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar1 + 0x18),/*STR('SheldonHitVFX')*/ uRam0000000003d72880
                                                        ,uRam0000000003d5b9a0);
                                        if (*(long *)(lVar1 + 0x18) != 0) {
                                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar1 + 0x18),
                                                          /*STR('GoldenTurdHitVFX')*/ uRam0000000003d6d498,uRam0000000003d5b9a0)
                                          ;
                                          if (*(long *)(lVar1 + 0x18) != 0) {
                                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar1 + 0x18),
                                                            /*STR('ShieldHitVFX')*/ uRam0000000003d728b8,
                                                            uRam0000000003d5b9a0);
                                            if (*(long *)(lVar1 + 0x18) != 0) {
                                              auVar3 = /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar1 + 0x18),
                                                                       /*STR('CulturePodExplosionVFX')*/ uRam0000000003d6b360,
                                                                       uRam0000000003d5b9a0);
                                              *(undefined8 *)(lVar1 + 0x30) = 0;
                                              return auVar3;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar1 = func_0x00f78af4();
  auVar3 = /*Atlas.Gameplay.Usables.UsableManager$$SpawnAndSetUpUsableInternal*/ func_0x01526054();
  uVar2 = auVar3._8_8_;
  auVar4._0_8_ = auVar3._0_8_;
  if ((auVar4._0_8_ != 0) && (*(long *)(lVar1 + 0x60) != 0)) {
    /*Atlas.Gameplay.Usables.UsableManagerEvents.UsableSpawned$$Invoke*/ func_0x0156d558(*(long *)(lVar1 + 0x60),auVar4._0_8_,0);
    uVar2 = extraout_x1;
  }
  auVar4._8_8_ = uVar2;
  return auVar4;
}



// ============================================================
// RVA: 0x1525b78 | Atlas.Gameplay.Usables.UsableManager.DestroyUsablePools
// ============================================================

long Atlas_Gameplay_Usables_UsableManager__DestroyUsablePools(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((bRam0000000003eb4e5c & 1) == 0) {
    func_0x00f78a20(0x3d5b958);
    func_0x00f78a20(0x3d5b960);
    func_0x00f78a20(0x3d5b968);
    func_0x00f78a20(0x3d5b970);
    func_0x00f78a20(0x3d5b980);
    func_0x00f78a20(0x3d5b988);
    func_0x00f78a20(0x3d5b990);
    func_0x00f78a20(0x3d5b998);
    func_0x00f78a20(0x3d5b9a0);
    func_0x00f78a20(0x3d5ba40);
    func_0x00f78a20(0x3d5ba48);
    func_0x00f78a20(0x3d5ba50);
    func_0x00f78a20(0x3d5ba58);
    func_0x00f78a20(0x3d5ba60);
    func_0x00f78a20(0x3d5ba68);
    func_0x00f78a20(0x3d5ba70);
    func_0x00f78a20(0x3d5ba78);
    func_0x00f78a20(0x3d5ba80);
    func_0x00f78a20(0x3d5feb0);
    func_0x00f78a20(0x3d5feb8);
    func_0x00f78a20(0x3d5fec0);
    func_0x00f78a20(0x3d5fec8);
    func_0x00f78a20(0x3d5fed0);
    func_0x00f78a20(0x3d5fed8);
    func_0x00f78a20(0x3d5fee0);
    func_0x00f78a20(0x3d5fee8);
    func_0x00f78a20(0x3d71fa8);
    func_0x00f78a20(0x3d728b8);
    func_0x00f78a20(0x3d6b360);
    func_0x00f78a20(0x3d72880);
    func_0x00f78a20(0x3d6d498);
    bRam0000000003eb4e5c = 1;
  }
  /*Atlas.Gameplay.Usables.UsableManager$$DeInitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f210(param_1,uRam0000000003d5fed8);
  /*Atlas.Gameplay.Usables.UsableManager$$DeInitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f210(param_1,uRam0000000003d5fed0);
  /*Atlas.Gameplay.Usables.UsableManager$$DeInitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f210(param_1,uRam0000000003d5fec8);
  /*Atlas.Gameplay.Usables.UsableManager$$DeInitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f210(param_1,uRam0000000003d5fec0);
  /*Atlas.Gameplay.Usables.UsableManager$$DeInitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f210(param_1,uRam0000000003d5feb0);
  /*Atlas.Gameplay.Usables.UsableManager$$DeInitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f210(param_1,uRam0000000003d5feb8);
  /*Atlas.Gameplay.Usables.UsableManager$$DeInitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f210(param_1,uRam0000000003d5fee8);
  /*Atlas.Gameplay.Usables.UsableManager$$DeInitLightMembers<SuperShieldUsableBehaviour>*/ func_0x01a3f210(param_1,uRam0000000003d5fee0);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(param_1 + 0x10),uRam0000000003d5ba70);
    if (*(long *)(param_1 + 0x10) != 0) {
      /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(param_1 + 0x10),uRam0000000003d5ba68);
      if (*(long *)(param_1 + 0x10) != 0) {
        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(param_1 + 0x10),uRam0000000003d5ba60);
        if (*(long *)(param_1 + 0x10) != 0) {
          /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(param_1 + 0x10),uRam0000000003d5ba58);
          if (*(long *)(param_1 + 0x10) != 0) {
            /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(param_1 + 0x10),uRam0000000003d5ba48);
            if (*(long *)(param_1 + 0x10) != 0) {
              /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(param_1 + 0x10),uRam0000000003d5ba50);
              if (*(long *)(param_1 + 0x10) != 0) {
                /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(param_1 + 0x10),uRam0000000003d5ba80);
                if (*(long *)(param_1 + 0x10) != 0) {
                  /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(param_1 + 0x10),uRam0000000003d5ba78);
                  if (*(long *)(param_1 + 0x18) != 0) {
                    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(param_1 + 0x18),uRam0000000003d5b988);
                    if (*(long *)(param_1 + 0x18) != 0) {
                      /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(param_1 + 0x18),uRam0000000003d5b980);
                      if (*(long *)(param_1 + 0x18) != 0) {
                        /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(param_1 + 0x18),uRam0000000003d5b970);
                        if (*(long *)(param_1 + 0x18) != 0) {
                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(param_1 + 0x18),uRam0000000003d5b968);
                          if (*(long *)(param_1 + 0x18) != 0) {
                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(param_1 + 0x18),uRam0000000003d5b958);
                            if (*(long *)(param_1 + 0x18) != 0) {
                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(param_1 + 0x18),uRam0000000003d5b960);
                              if (*(long *)(param_1 + 0x18) != 0) {
                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(param_1 + 0x18),uRam0000000003d5b998);
                                if (*(long *)(param_1 + 0x18) != 0) {
                                  /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(param_1 + 0x18),uRam0000000003d5b990);
                                  if (*(long *)(param_1 + 0x10) != 0) {
                                    /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(param_1 + 0x10),uRam0000000003d5ba40);
                                    if (*(long *)(param_1 + 0x18) != 0) {
                                      /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(param_1 + 0x18),/*STR('RicochetHitVFX')*/ uRam0000000003d71fa8
                                                      ,uRam0000000003d5b9a0);
                                      if (*(long *)(param_1 + 0x18) != 0) {
                                        /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(param_1 + 0x18),
                                                        /*STR('SheldonHitVFX')*/ uRam0000000003d72880,uRam0000000003d5b9a0);
                                        if (*(long *)(param_1 + 0x18) != 0) {
                                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(param_1 + 0x18),
                                                          /*STR('GoldenTurdHitVFX')*/ uRam0000000003d6d498,uRam0000000003d5b9a0)
                                          ;
                                          if (*(long *)(param_1 + 0x18) != 0) {
                                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(param_1 + 0x18),
                                                            /*STR('ShieldHitVFX')*/ uRam0000000003d728b8,
                                                            uRam0000000003d5b9a0);
                                            if (*(long *)(param_1 + 0x18) != 0) {
                                              lVar1 = /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(param_1 + 0x18),
                                                                      /*STR('CulturePodExplosionVFX')*/ uRam0000000003d6b360,
                                                                      uRam0000000003d5b9a0);
                                              *(undefined8 *)(param_1 + 0x30) = 0;
                                              return lVar1;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar1 = func_0x00f78af4();
  lVar2 = /*Atlas.Gameplay.Usables.UsableManager$$SpawnAndSetUpUsableInternal*/ func_0x01526054();
  if ((lVar2 != 0) && (*(long *)(lVar1 + 0x60) != 0)) {
    /*Atlas.Gameplay.Usables.UsableManagerEvents.UsableSpawned$$Invoke*/ func_0x0156d558(*(long *)(lVar1 + 0x60),lVar2,0);
  }
  return lVar2;
}



// ============================================================
// RVA: 0x1526014 | Atlas.Gameplay.Usables.UsableManager.SpawnAndSetUpUsable
// ============================================================

long Atlas_Gameplay_Usables_UsableManager__SpawnAndSetUpUsable(long param_1)

{
  long lVar1;
  
  lVar1 = /*Atlas.Gameplay.Usables.UsableManager$$SpawnAndSetUpUsableInternal*/ func_0x01526054();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x60) != 0)) {
    /*Atlas.Gameplay.Usables.UsableManagerEvents.UsableSpawned$$Invoke*/ func_0x0156d558(*(long *)(param_1 + 0x60),lVar1,0);
  }
  return lVar1;
}



// ============================================================
// RVA: 0x1526054 | Atlas.Gameplay.Usables.UsableManager.SpawnAndSetUpUsableInternal
// ============================================================

undefined8 *
Atlas_Gameplay_Usables_UsableManager__SpawnAndSetUpUsableInternal
          (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  int extraout_w1;
  long lVar5;
  long *extraout_x1;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar11 = (undefined8 *)0x3eb4000;
  uVar6 = param_3;
  if ((bRam0000000003eb4e5d & 1) == 0) {
    func_0x00f78a20(0x3d20288);
    func_0x00f78a20(0x3d21c18);
    func_0x00f78a20(0x3d238a8);
    func_0x00f78a20(0x3d23c78);
    func_0x00f78a20(0x3d5b9f8);
    func_0x00f78a20(0x3d5ba00);
    func_0x00f78a20(0x3d5ba08);
    func_0x00f78a20(0x3d5ba10);
    func_0x00f78a20(0x3d5ba20);
    func_0x00f78a20(0x3d5ba28);
    func_0x00f78a20(0x3d5ba30);
    func_0x00f78a20(0x3d5ba38);
    func_0x00f78a20(0x3d5ba98);
    func_0x00f78a20(0x3d5baa0);
    func_0x00f78a20(0x3d5baa8);
    func_0x00f78a20(0x3d5bab0);
    func_0x00f78a20(0x3d5bab8);
    func_0x00f78a20(0x3d5bac0);
    func_0x00f78a20(0x3d5bac8);
    func_0x00f78a20(0x3d5bad0);
    func_0x00f78a20(0x3d23f28);
    func_0x00f78a20(0x3d244d0);
    func_0x00f78a20(0x3d246b8);
    func_0x00f78a20(0x3d24ea8);
    bRam0000000003eb4e5d = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  if (param_2 == (long *)0x0) goto LAB_015266bc;
  uVar2 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  switch(uVar2) {
  case 0:
    if (*(long *)(param_1 + 0x10) == 0) break;
    puVar11 = (undefined8 *)/*Core.Actors.PooledActorManager$$Spawn<SuperShieldUsable>*/ func_0x018bd86c(*(long *)(param_1 + 0x10),uRam0000000003d5bac0);
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (uVar6 = uRam0000000003d5ba28,
       /*Core.Containers.PoolManager$$TryAcquireObject<SuperShieldUsableBehaviour>*/ func_0x018bccc0(*(long *)(param_1 + 0x18),&uStack_48,uRam0000000003d5ba28),
       puVar11 == (undefined8 *)0x0)) break;
    if ((*(byte *)(/*Atlas.Definitions.RicochetProjectileDefinition_TypeInfo*/ lRam0000000003d244d0 + 300) <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.RicochetProjectileDefinition_TypeInfo*/ lRam0000000003d244d0 + 300) * 8 + -8)
        == /*Atlas.Definitions.RicochetProjectileDefinition_TypeInfo*/ lRam0000000003d244d0)) {
      Atlas_Gameplay_Usables_RicochetProjectile__OnExitPool
                (puVar11,param_2,uStack_48,param_3,param_4,param_5,0);
      return puVar11;
    }
    goto code_r0x015266c0;
  case 1:
    if (*(long *)(param_1 + 0x10) != 0) {
      puVar11 = (undefined8 *)/*Core.Actors.PooledActorManager$$Spawn<SuperShieldUsable>*/ func_0x018bd86c(*(long *)(param_1 + 0x10),uRam0000000003d5bab8);
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar6 = uRam0000000003d5ba20,
         /*Core.Containers.PoolManager$$TryAcquireObject<SuperShieldUsableBehaviour>*/ func_0x018bccc0(*(long *)(param_1 + 0x18),&uStack_50,uRam0000000003d5ba20),
         puVar11 != (undefined8 *)0x0)) {
        if ((*(byte *)(/*Atlas.Definitions.ProximityHomingProjectileDefinition_TypeInfo*/ lRam0000000003d23f28 + 300) <= *(byte *)(*param_2 + 300)) &&
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ProximityHomingProjectileDefinition_TypeInfo*/ lRam0000000003d23f28 + 300) * 8 +
                     -8) == /*Atlas.Definitions.ProximityHomingProjectileDefinition_TypeInfo*/ lRam0000000003d23f28)) {
          Atlas_Gameplay_Usables_ProximityHomingProjectile__OnExitPool
                    (puVar11,param_2,uStack_50,param_3,param_4,param_5,0);
          return puVar11;
        }
        goto code_r0x015266c0;
      }
    }
    break;
  case 2:
    if (*(long *)(param_1 + 0x10) != 0) {
      puVar11 = (undefined8 *)/*Core.Actors.PooledActorManager$$Spawn<SuperShieldUsable>*/ func_0x018bd86c(*(long *)(param_1 + 0x10),uRam0000000003d5bab0);
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar6 = uRam0000000003d5ba10,
         /*Core.Containers.PoolManager$$TryAcquireObject<SuperShieldUsableBehaviour>*/ func_0x018bccc0(*(long *)(param_1 + 0x18),&uStack_58,uRam0000000003d5ba10),
         puVar11 != (undefined8 *)0x0)) {
        if ((*(byte *)(/*Atlas.Definitions.PlacementHomingProjectileDefinition_TypeInfo*/ lRam0000000003d23c78 + 300) <= *(byte *)(*param_2 + 300)) &&
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.PlacementHomingProjectileDefinition_TypeInfo*/ lRam0000000003d23c78 + 300) * 8 +
                     -8) == /*Atlas.Definitions.PlacementHomingProjectileDefinition_TypeInfo*/ lRam0000000003d23c78)) {
          Atlas_Gameplay_Usables_PlacementHomingProjectile__OnExitPool
                    (puVar11,param_2,uStack_58,param_3,param_4,param_5,0);
          return puVar11;
        }
        goto code_r0x015266c0;
      }
    }
    break;
  case 3:
    if (*(long *)(param_1 + 0x10) != 0) {
      puVar11 = (undefined8 *)/*Core.Actors.PooledActorManager$$Spawn<SuperShieldUsable>*/ func_0x018bd86c(*(long *)(param_1 + 0x10),uRam0000000003d5baa8);
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar6 = uRam0000000003d5ba08,
         /*Core.Containers.PoolManager$$TryAcquireObject<SuperShieldUsableBehaviour>*/ func_0x018bccc0(*(long *)(param_1 + 0x18),&uStack_60,uRam0000000003d5ba08),
         puVar11 != (undefined8 *)0x0)) {
        if ((*(byte *)(/*Atlas.Definitions.NormalShieldUsableDefinition_TypeInfo*/ lRam0000000003d238a8 + 300) <= *(byte *)(*param_2 + 300)) &&
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.NormalShieldUsableDefinition_TypeInfo*/ lRam0000000003d238a8 + 300) * 8 +
                     -8) == /*Atlas.Definitions.NormalShieldUsableDefinition_TypeInfo*/ lRam0000000003d238a8)) {
          Atlas_Gameplay_Usables_NormalShieldUsable__OnExitPool
                    (puVar11,param_2,uStack_60,param_3,param_4,param_5,0);
          return puVar11;
        }
        goto code_r0x015266c0;
      }
    }
    break;
  case 4:
    if (*(long *)(param_1 + 0x10) != 0) {
      puVar11 = (undefined8 *)/*Core.Actors.PooledActorManager$$Spawn<SuperShieldUsable>*/ func_0x018bd86c(*(long *)(param_1 + 0x10),uRam0000000003d5ba98);
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar6 = uRam0000000003d5b9f8,
         /*Core.Containers.PoolManager$$TryAcquireObject<SuperShieldUsableBehaviour>*/ func_0x018bccc0(*(long *)(param_1 + 0x18),&uStack_68,uRam0000000003d5b9f8),
         puVar11 != (undefined8 *)0x0)) {
        if ((*(byte *)(/*Atlas.Definitions.BoostUsableDefinition_TypeInfo*/ lRam0000000003d20288 + 300) <= *(byte *)(*param_2 + 300)) &&
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.BoostUsableDefinition_TypeInfo*/ lRam0000000003d20288 + 300) * 8 +
                     -8) == /*Atlas.Definitions.BoostUsableDefinition_TypeInfo*/ lRam0000000003d20288)) {
          Atlas_Gameplay_Usables_BoostUsable__OnExitPool
                    (puVar11,param_2,uStack_68,param_3,param_4,param_5,0);
          return puVar11;
        }
        goto code_r0x015266c0;
      }
    }
    break;
  case 5:
    if (*(long *)(param_1 + 0x10) != 0) {
      puVar11 = (undefined8 *)/*Core.Actors.PooledActorManager$$Spawn<SuperShieldUsable>*/ func_0x018bd86c(*(long *)(param_1 + 0x10),uRam0000000003d5baa0);
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar6 = uRam0000000003d5ba00,
         /*Core.Containers.PoolManager$$TryAcquireObject<SuperShieldUsableBehaviour>*/ func_0x018bccc0(*(long *)(param_1 + 0x18),&uStack_70,uRam0000000003d5ba00),
         puVar11 != (undefined8 *)0x0)) {
        if ((*(byte *)(/*Atlas.Definitions.GoldenTurdProjectileDefinition_TypeInfo*/ lRam0000000003d21c18 + 300) <= *(byte *)(*param_2 + 300)) &&
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.GoldenTurdProjectileDefinition_TypeInfo*/ lRam0000000003d21c18 + 300) * 8 +
                     -8) == /*Atlas.Definitions.GoldenTurdProjectileDefinition_TypeInfo*/ lRam0000000003d21c18)) {
          Atlas_Gameplay_Usables_GoldenTurdProjectile__OnExitPool
                    (puVar11,param_2,uStack_70,param_3,param_4,param_5,0);
          return puVar11;
        }
        goto code_r0x015266c0;
      }
    }
    break;
  case 6:
    if (*(long *)(param_1 + 0x10) != 0) {
      puVar11 = (undefined8 *)/*Core.Actors.PooledActorManager$$Spawn<SuperShieldUsable>*/ func_0x018bd86c(*(long *)(param_1 + 0x10),uRam0000000003d5bad0);
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar6 = uRam0000000003d5ba38,
         /*Core.Containers.PoolManager$$TryAcquireObject<SuperShieldUsableBehaviour>*/ func_0x018bccc0(*(long *)(param_1 + 0x18),&uStack_78,uRam0000000003d5ba38),
         puVar11 != (undefined8 *)0x0)) {
        if ((*(byte *)(/*Atlas.Definitions.SuperShieldUsableDefinition_TypeInfo*/ lRam0000000003d24ea8 + 300) <= *(byte *)(*param_2 + 300)) &&
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SuperShieldUsableDefinition_TypeInfo*/ lRam0000000003d24ea8 + 300) * 8 +
                     -8) == /*Atlas.Definitions.SuperShieldUsableDefinition_TypeInfo*/ lRam0000000003d24ea8)) {
          Atlas_Gameplay_Usables_SuperShieldUsable__OnExitPool
                    (puVar11,param_2,uStack_78,param_3,param_4,param_5,0);
          return puVar11;
        }
        goto code_r0x015266c0;
      }
    }
    break;
  case 7:
    if (*(long *)(param_1 + 0x10) != 0) {
      puVar11 = (undefined8 *)/*Core.Actors.PooledActorManager$$Spawn<SuperShieldUsable>*/ func_0x018bd86c(*(long *)(param_1 + 0x10),uRam0000000003d5bac8);
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar6 = uRam0000000003d5ba30,
         /*Core.Containers.PoolManager$$TryAcquireObject<SuperShieldUsableBehaviour>*/ func_0x018bccc0(*(long *)(param_1 + 0x18),&uStack_80,uRam0000000003d5ba30),
         puVar11 != (undefined8 *)0x0)) {
        if ((*(byte *)(/*Atlas.Definitions.SatelliteUsableDefinition_TypeInfo*/ lRam0000000003d246b8 + 300) <= *(byte *)(*param_2 + 300)) &&
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SatelliteUsableDefinition_TypeInfo*/ lRam0000000003d246b8 + 300) * 8 +
                     -8) == /*Atlas.Definitions.SatelliteUsableDefinition_TypeInfo*/ lRam0000000003d246b8)) {
          Atlas_Gameplay_Usables_SatelliteUsable__OnExitPool
                    (puVar11,param_2,uStack_80,param_3,param_4,param_5,0);
          return puVar11;
        }
        goto code_r0x015266c0;
      }
    }
    break;
  default:
    return (undefined8 *)0x0;
  }
LAB_015266bc:
  func_0x00f78af4();
code_r0x015266c0:
  auVar12 = func_0x00f78e5c(param_2);
  lVar5 = auVar12._0_8_;
  if ((bRam0000000003eb4e5e & 1) == 0) {
    func_0x00f78a20(0x3d1d528);
    func_0x00f78a20(0x3d1d540);
    func_0x00f78a20(0x3d1d538);
    func_0x00f78a20(0x3d1d550);
    func_0x00f78a20(0x3d1d560);
    func_0x00f78a20(0x3d1d558);
    func_0x00f78a20(0x3d1d548);
    func_0x00f78a20(0x3d1d530);
    func_0x00f78a20(0x3d5b9a8);
    func_0x00f78a20(0x3d5b9b0);
    func_0x00f78a20(0x3d5b9b8);
    func_0x00f78a20(0x3d5b9c0);
    func_0x00f78a20(0x3d5b9c8);
    func_0x00f78a20(0x3d5b9d0);
    func_0x00f78a20(0x3d5b9d8);
    func_0x00f78a20(0x3d5b9e0);
    bRam0000000003eb4e5e = 1;
  }
  switch(auVar12._8_8_ & 0xffffffff) {
  case 0:
    if ((*(long *)(lVar5 + 0x18) == 0) ||
       (plVar4 = (long *)/*Core.Containers.PoolManager$$GetPool<SuperShieldUsableBehaviour>*/ func_0x018bc870(*(long *)(lVar5 + 0x18),uRam0000000003d5b9d0),
       plVar4 == (long *)0x0)) {
code_r0x01526b00:
      auVar12 = func_0x00f78af4();
      lVar5 = auVar12._0_8_;
      puVar10 = (undefined8 *)0x3eb4000;
      if ((bRam0000000003eb4e5f & 1) == 0) {
        func_0x00f78a20(0x3d432f8);
        func_0x00f78a20(0x3d32108);
        func_0x00f78a20(0x3d32110);
        func_0x00f78a20(0x3d32118);
        func_0x00f78a20(0x3d39c50);
        func_0x00f78a20(0x3d39c58);
        func_0x00f78a20(0x3d5ff30);
        bRam0000000003eb4e5f = 1;
      }
      uStack_118 = 0;
      uStack_110 = 0;
      lStack_108 = 0;
      if (*(long *)(lVar5 + 0x20) == 0) goto code_r0x01526c68;
      /*Core.Actors.ActorManager$$FindDerivedActorGroups<Usable>*/ func_0x0171e8f4(*(long *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x48),uRam0000000003d432f8);
      if (*(long *)(lVar5 + 0x48) == 0) goto code_r0x01526c68;
      puVar10 = (undefined8 *)0x3d39c50;
      puVar11 = (undefined8 *)0x3d32108;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_118,*(long *)(lVar5 + 0x48),uRam0000000003d39c58);
      while (uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_118,uRam0000000003d32110), (uVar8 & 1) != 0) {
        if (lStack_108 == 0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1526c68);
          (*pcVar1)();
        }
        /*Atlas.Gameplay.Usables.UsableManager$$GetActiveUsablesBelongingToKart<Usable>*/ func_0x01a3f504(lVar5,auVar12._8_8_,uVar6,*(undefined8 *)(lStack_108 + 0x10),
                        uRam0000000003d5ff30);
      }
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_118,uRam0000000003d32108);
      do {
        if (*(long *)(lVar5 + 0x48) != 0) {
          puVar11 = (undefined8 *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar5 + 0x48),*puVar10);
          return puVar11;
        }
code_r0x01526c68:
        func_0x00f78af4();
        if (extraout_w1 != 1) goto code_r0x01526ca4;
        plVar4 = (long *)___cxa_begin_catch();
        lVar7 = *plVar4;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_118,*puVar11);
      } while (lVar7 == 0);
      func_0x00f78ac0(lVar7,0);
code_r0x01526ca4:
      __Unwind_Resume();
      if (extraout_x1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01526cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar11 = (undefined8 *)
                  (**(code **)(*extraout_x1 + 0x1f8))
                            (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x200));
        return puVar11;
      }
      puVar11 = (undefined8 *)func_0x00f78af4();
      return puVar11;
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    lVar5 = /*Core.Containers.IPool<RicochetProjectileBehaviour>_TypeInfo*/ lRam0000000003d1d550;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == /*Core.Containers.IPool<RicochetProjectileBehaviour>_TypeInfo*/ lRam0000000003d1d550) goto code_r0x01526acc;
        piVar9 = piVar9 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    break;
  case 1:
    if ((*(long *)(lVar5 + 0x18) == 0) ||
       (plVar4 = (long *)/*Core.Containers.PoolManager$$GetPool<SuperShieldUsableBehaviour>*/ func_0x018bc870(*(long *)(lVar5 + 0x18),uRam0000000003d5b9c8),
       plVar4 == (long *)0x0)) goto code_r0x01526b00;
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    lVar5 = /*Core.Containers.IPool<ProximityHomingProjectileBehaviour>_TypeInfo*/ lRam0000000003d1d548;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == /*Core.Containers.IPool<ProximityHomingProjectileBehaviour>_TypeInfo*/ lRam0000000003d1d548) goto code_r0x01526acc;
        piVar9 = piVar9 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    break;
  case 2:
    if ((*(long *)(lVar5 + 0x18) == 0) ||
       (plVar4 = (long *)/*Core.Containers.PoolManager$$GetPool<SuperShieldUsableBehaviour>*/ func_0x018bc870(*(long *)(lVar5 + 0x18),uRam0000000003d5b9c0),
       plVar4 == (long *)0x0)) goto code_r0x01526b00;
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    lVar5 = /*Core.Containers.IPool<PlacementHomingProjectileBehaviour>_TypeInfo*/ lRam0000000003d1d540;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == /*Core.Containers.IPool<PlacementHomingProjectileBehaviour>_TypeInfo*/ lRam0000000003d1d540) goto code_r0x01526acc;
        piVar9 = piVar9 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    break;
  case 3:
    if ((*(long *)(lVar5 + 0x18) == 0) ||
       (plVar4 = (long *)/*Core.Containers.PoolManager$$GetPool<SuperShieldUsableBehaviour>*/ func_0x018bc870(*(long *)(lVar5 + 0x18),uRam0000000003d5b9b8),
       plVar4 == (long *)0x0)) goto code_r0x01526b00;
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    lVar5 = /*Core.Containers.IPool<NormalShieldUsableBehaviour>_TypeInfo*/ lRam0000000003d1d538;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == /*Core.Containers.IPool<NormalShieldUsableBehaviour>_TypeInfo*/ lRam0000000003d1d538) goto code_r0x01526acc;
        piVar9 = piVar9 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    break;
  case 4:
    if ((*(long *)(lVar5 + 0x18) == 0) ||
       (plVar4 = (long *)/*Core.Containers.PoolManager$$GetPool<SuperShieldUsableBehaviour>*/ func_0x018bc870(*(long *)(lVar5 + 0x18),uRam0000000003d5b9a8),
       plVar4 == (long *)0x0)) goto code_r0x01526b00;
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    lVar5 = /*Core.Containers.IPool<BoostUsableBehaviour>_TypeInfo*/ lRam0000000003d1d528;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == /*Core.Containers.IPool<BoostUsableBehaviour>_TypeInfo*/ lRam0000000003d1d528) goto code_r0x01526acc;
        piVar9 = piVar9 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    break;
  case 5:
    if ((*(long *)(lVar5 + 0x18) == 0) ||
       (plVar4 = (long *)/*Core.Containers.PoolManager$$GetPool<SuperShieldUsableBehaviour>*/ func_0x018bc870(*(long *)(lVar5 + 0x18),uRam0000000003d5b9b0),
       plVar4 == (long *)0x0)) goto code_r0x01526b00;
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    lVar5 = /*Core.Containers.IPool<GoldenTurdProjectileBehaviour>_TypeInfo*/ lRam0000000003d1d530;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == /*Core.Containers.IPool<GoldenTurdProjectileBehaviour>_TypeInfo*/ lRam0000000003d1d530) goto code_r0x01526acc;
        piVar9 = piVar9 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    break;
  case 6:
    if ((*(long *)(lVar5 + 0x18) == 0) ||
       (plVar4 = (long *)/*Core.Containers.PoolManager$$GetPool<SuperShieldUsableBehaviour>*/ func_0x018bc870(*(long *)(lVar5 + 0x18),uRam0000000003d5b9e0),
       plVar4 == (long *)0x0)) goto code_r0x01526b00;
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    lVar5 = /*Core.Containers.IPool<SuperShieldUsableBehaviour>_TypeInfo*/ lRam0000000003d1d560;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == /*Core.Containers.IPool<SuperShieldUsableBehaviour>_TypeInfo*/ lRam0000000003d1d560) goto code_r0x01526acc;
        piVar9 = piVar9 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    break;
  case 7:
    if ((*(long *)(lVar5 + 0x18) == 0) ||
       (plVar4 = (long *)/*Core.Containers.PoolManager$$GetPool<SuperShieldUsableBehaviour>*/ func_0x018bc870(*(long *)(lVar5 + 0x18),uRam0000000003d5b9d8),
       plVar4 == (long *)0x0)) goto code_r0x01526b00;
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    lVar5 = /*Core.Containers.IPool<SatelliteUsableBehaviour>_TypeInfo*/ lRam0000000003d1d558;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == /*Core.Containers.IPool<SatelliteUsableBehaviour>_TypeInfo*/ lRam0000000003d1d558) goto code_r0x01526acc;
        piVar9 = piVar9 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    break;
  default:
    return (undefined8 *)0x0;
  }
  puVar11 = (undefined8 *)func_0x00fac1f0(plVar4,lVar5,8);
code_r0x01526adc:
  iVar3 = (*(code *)*puVar11)(plVar4,puVar11[1]);
  return (undefined8 *)(ulong)(0 < iVar3);
code_r0x01526acc:
  puVar11 = (undefined8 *)(lVar7 + (long)(*piVar9 + 8) * 0x10 + 0x138);
  goto code_r0x01526adc;
}



// ============================================================
// RVA: 0x15266c8 | Atlas.Gameplay.Usables.UsableManager.AreAnyUsablesLeftInPool
// ============================================================

ulong Atlas_Gameplay_Usables_UsableManager__AreAnyUsablesLeftInPool
                (long param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  int extraout_w1;
  long lVar5;
  long *extraout_x1;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *unaff_x23;
  undefined1 auVar9 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  if ((bRam0000000003eb4e5e & 1) == 0) {
    func_0x00f78a20(0x3d1d528);
    func_0x00f78a20(0x3d1d540);
    func_0x00f78a20(0x3d1d538);
    func_0x00f78a20(0x3d1d550);
    func_0x00f78a20(0x3d1d560);
    func_0x00f78a20(0x3d1d558);
    func_0x00f78a20(0x3d1d548);
    func_0x00f78a20(0x3d1d530);
    func_0x00f78a20(0x3d5b9a8);
    func_0x00f78a20(0x3d5b9b0);
    func_0x00f78a20(0x3d5b9b8);
    func_0x00f78a20(0x3d5b9c0);
    func_0x00f78a20(0x3d5b9c8);
    func_0x00f78a20(0x3d5b9d0);
    func_0x00f78a20(0x3d5b9d8);
    func_0x00f78a20(0x3d5b9e0);
    bRam0000000003eb4e5e = 1;
  }
  switch(param_2) {
  case 0:
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (plVar3 = (long *)/*Core.Containers.PoolManager$$GetPool<SuperShieldUsableBehaviour>*/ func_0x018bc870(*(long *)(param_1 + 0x18),uRam0000000003d5b9d0),
       plVar3 == (long *)0x0)) {
code_r0x01526b00:
      auVar9 = func_0x00f78af4();
      lVar5 = auVar9._0_8_;
      puVar4 = (undefined8 *)0x3eb4000;
      if ((bRam0000000003eb4e5f & 1) == 0) {
        func_0x00f78a20(0x3d432f8);
        func_0x00f78a20(0x3d32108);
        func_0x00f78a20(0x3d32110);
        func_0x00f78a20(0x3d32118);
        func_0x00f78a20(0x3d39c50);
        func_0x00f78a20(0x3d39c58);
        func_0x00f78a20(0x3d5ff30);
        bRam0000000003eb4e5f = 1;
      }
      uStack_98 = 0;
      uStack_90 = 0;
      lStack_88 = 0;
      if (*(long *)(lVar5 + 0x20) == 0) goto code_r0x01526c68;
      /*Core.Actors.ActorManager$$FindDerivedActorGroups<Usable>*/ func_0x0171e8f4(*(long *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x48),uRam0000000003d432f8);
      if (*(long *)(lVar5 + 0x48) == 0) goto code_r0x01526c68;
      puVar4 = (undefined8 *)0x3d39c50;
      unaff_x23 = (undefined8 *)0x3d32108;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,*(long *)(lVar5 + 0x48),uRam0000000003d39c58);
      while (uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_98,uRam0000000003d32110), (uVar7 & 1) != 0) {
        if (lStack_88 == 0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1526c68);
          (*pcVar1)();
        }
        /*Atlas.Gameplay.Usables.UsableManager$$GetActiveUsablesBelongingToKart<Usable>*/ func_0x01a3f504(lVar5,auVar9._8_8_,param_3,*(undefined8 *)(lStack_88 + 0x10),
                        uRam0000000003d5ff30);
      }
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_98,uRam0000000003d32108);
      do {
        if (*(long *)(lVar5 + 0x48) != 0) {
          uVar7 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar5 + 0x48),*puVar4);
          return uVar7;
        }
code_r0x01526c68:
        func_0x00f78af4();
        if (extraout_w1 != 1) goto code_r0x01526ca4;
        plVar3 = (long *)___cxa_begin_catch();
        lVar6 = *plVar3;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_98,*unaff_x23);
      } while (lVar6 == 0);
      func_0x00f78ac0(lVar6,0);
code_r0x01526ca4:
      __Unwind_Resume();
      if (extraout_x1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01526cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)(*extraout_x1 + 0x1f8))
                          (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x200));
        return uVar7;
      }
      uVar7 = func_0x00f78af4();
      return uVar7;
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    lVar5 = /*Core.Containers.IPool<RicochetProjectileBehaviour>_TypeInfo*/ lRam0000000003d1d550;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == /*Core.Containers.IPool<RicochetProjectileBehaviour>_TypeInfo*/ lRam0000000003d1d550) goto code_r0x01526acc;
        piVar8 = piVar8 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    break;
  case 1:
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (plVar3 = (long *)/*Core.Containers.PoolManager$$GetPool<SuperShieldUsableBehaviour>*/ func_0x018bc870(*(long *)(param_1 + 0x18),uRam0000000003d5b9c8),
       plVar3 == (long *)0x0)) goto code_r0x01526b00;
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    lVar5 = /*Core.Containers.IPool<ProximityHomingProjectileBehaviour>_TypeInfo*/ lRam0000000003d1d548;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == /*Core.Containers.IPool<ProximityHomingProjectileBehaviour>_TypeInfo*/ lRam0000000003d1d548) goto code_r0x01526acc;
        piVar8 = piVar8 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    break;
  case 2:
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (plVar3 = (long *)/*Core.Containers.PoolManager$$GetPool<SuperShieldUsableBehaviour>*/ func_0x018bc870(*(long *)(param_1 + 0x18),uRam0000000003d5b9c0),
       plVar3 == (long *)0x0)) goto code_r0x01526b00;
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    lVar5 = /*Core.Containers.IPool<PlacementHomingProjectileBehaviour>_TypeInfo*/ lRam0000000003d1d540;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == /*Core.Containers.IPool<PlacementHomingProjectileBehaviour>_TypeInfo*/ lRam0000000003d1d540) goto code_r0x01526acc;
        piVar8 = piVar8 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    break;
  case 3:
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (plVar3 = (long *)/*Core.Containers.PoolManager$$GetPool<SuperShieldUsableBehaviour>*/ func_0x018bc870(*(long *)(param_1 + 0x18),uRam0000000003d5b9b8),
       plVar3 == (long *)0x0)) goto code_r0x01526b00;
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    lVar5 = /*Core.Containers.IPool<NormalShieldUsableBehaviour>_TypeInfo*/ lRam0000000003d1d538;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == /*Core.Containers.IPool<NormalShieldUsableBehaviour>_TypeInfo*/ lRam0000000003d1d538) goto code_r0x01526acc;
        piVar8 = piVar8 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    break;
  case 4:
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (plVar3 = (long *)/*Core.Containers.PoolManager$$GetPool<SuperShieldUsableBehaviour>*/ func_0x018bc870(*(long *)(param_1 + 0x18),uRam0000000003d5b9a8),
       plVar3 == (long *)0x0)) goto code_r0x01526b00;
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    lVar5 = /*Core.Containers.IPool<BoostUsableBehaviour>_TypeInfo*/ lRam0000000003d1d528;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == /*Core.Containers.IPool<BoostUsableBehaviour>_TypeInfo*/ lRam0000000003d1d528) goto code_r0x01526acc;
        piVar8 = piVar8 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    break;
  case 5:
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (plVar3 = (long *)/*Core.Containers.PoolManager$$GetPool<SuperShieldUsableBehaviour>*/ func_0x018bc870(*(long *)(param_1 + 0x18),uRam0000000003d5b9b0),
       plVar3 == (long *)0x0)) goto code_r0x01526b00;
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    lVar5 = /*Core.Containers.IPool<GoldenTurdProjectileBehaviour>_TypeInfo*/ lRam0000000003d1d530;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == /*Core.Containers.IPool<GoldenTurdProjectileBehaviour>_TypeInfo*/ lRam0000000003d1d530) goto code_r0x01526acc;
        piVar8 = piVar8 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    break;
  case 6:
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (plVar3 = (long *)/*Core.Containers.PoolManager$$GetPool<SuperShieldUsableBehaviour>*/ func_0x018bc870(*(long *)(param_1 + 0x18),uRam0000000003d5b9e0),
       plVar3 == (long *)0x0)) goto code_r0x01526b00;
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    lVar5 = /*Core.Containers.IPool<SuperShieldUsableBehaviour>_TypeInfo*/ lRam0000000003d1d560;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == /*Core.Containers.IPool<SuperShieldUsableBehaviour>_TypeInfo*/ lRam0000000003d1d560) goto code_r0x01526acc;
        piVar8 = piVar8 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    break;
  case 7:
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (plVar3 = (long *)/*Core.Containers.PoolManager$$GetPool<SuperShieldUsableBehaviour>*/ func_0x018bc870(*(long *)(param_1 + 0x18),uRam0000000003d5b9d8),
       plVar3 == (long *)0x0)) goto code_r0x01526b00;
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    lVar5 = /*Core.Containers.IPool<SatelliteUsableBehaviour>_TypeInfo*/ lRam0000000003d1d558;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == /*Core.Containers.IPool<SatelliteUsableBehaviour>_TypeInfo*/ lRam0000000003d1d558) goto code_r0x01526acc;
        piVar8 = piVar8 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    break;
  default:
    return 0;
  }
  puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,lVar5,8);
code_r0x01526adc:
  iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  return (ulong)(0 < iVar2);
code_r0x01526acc:
  puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 8) * 0x10 + 0x138);
  goto code_r0x01526adc;
}



// ============================================================
// RVA: 0x1526b04 | Atlas.Gameplay.Usables.UsableManager.GetAllUsedUsablesBelongingToKart
// ============================================================

void Atlas_Gameplay_Usables_UsableManager__GetAllUsedUsablesBelongingToKart
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  int extraout_w1;
  long *extraout_x1;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x23;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar5 = (undefined8 *)0x3eb4000;
  if ((bRam0000000003eb4e5f & 1) == 0) {
    func_0x00f78a20(0x3d432f8);
    func_0x00f78a20(0x3d32108);
    func_0x00f78a20(0x3d32110);
    func_0x00f78a20(0x3d32118);
    func_0x00f78a20(0x3d39c50);
    func_0x00f78a20(0x3d39c58);
    func_0x00f78a20(0x3d5ff30);
    bRam0000000003eb4e5f = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_01526c68;
  /*Core.Actors.ActorManager$$FindDerivedActorGroups<Usable>*/ func_0x0171e8f4(*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x48),uRam0000000003d432f8);
  if (*(long *)(param_1 + 0x48) == 0) goto LAB_01526c68;
  puVar5 = (undefined8 *)0x3d39c50;
  unaff_x23 = (undefined8 *)0x3d32108;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_68,*(long *)(param_1 + 0x48),uRam0000000003d39c58);
  while (uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_68,uRam0000000003d32110), (uVar2 & 1) != 0) {
    if (lStack_58 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1526c68);
      (*pcVar1)();
    }
    /*Atlas.Gameplay.Usables.UsableManager$$GetActiveUsablesBelongingToKart<Usable>*/ func_0x01a3f504(param_1,param_2,param_3,*(undefined8 *)(lStack_58 + 0x10),uRam0000000003d5ff30);
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d32108);
  do {
    if (*(long *)(param_1 + 0x48) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x48),*puVar5);
      return;
    }
LAB_01526c68:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01526ca4;
    plVar3 = (long *)___cxa_begin_catch();
    lVar4 = *plVar3;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,*unaff_x23);
  } while (lVar4 == 0);
  func_0x00f78ac0(lVar4,0);
code_r0x01526ca4:
  __Unwind_Resume();
  if (extraout_x1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01526cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*extraout_x1 + 0x1f8))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x200));
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1526ca8 | Atlas.Gameplay.Usables.UsableManager.DeInitUsable
// ============================================================

void Atlas_Gameplay_Usables_UsableManager__DeInitUsable(undefined8 param_1,long *param_2)

{
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01526cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x1f8))(param_2,*(undefined8 *)(*param_2 + 0x200));
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1526cd0 | Atlas.Gameplay.Usables.UsableManager..ctor
// ============================================================

void Atlas_Gameplay_Usables_UsableManager___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1a3ee54 | Atlas.Gameplay.Usables.UsableManager.<CreateCallbacks>b__35_0<object>
// ============================================================

void Atlas_Gameplay_Usables_UsableManager___CreateCallbacks_b__35_0_object_
               (long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01a3ee68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_2 + 0x30))(param_1,*(undefined8 *)(param_1 + 0x30));
  return;
}



// ============================================================
// RVA: 0x1a3ee6c | Atlas.Gameplay.Usables.UsableManager.CreateCallbacks<BoostUsable>
// ============================================================

void Atlas_Gameplay_Usables_UsableManager__CreateCallbacks_BoostUsable_
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam0000000003eb6a8a & 1) == 0) {
    func_0x00f78a20(0x3d5ff78);
    bRam0000000003eb6a8a = 1;
  }
  plVar3 = (long *)(param_3 + 0x30);
  lVar4 = *(long *)(*plVar3 + 8);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  uVar2 = func_0x00f78aec(lVar4);
  (**(code **)((undefined8 *)*plVar3)[2])(uVar2,param_2,*(undefined8 *)*plVar3);
  lVar4 = *(long *)(*plVar3 + 0x18);
  uVar1 = *(ushort *)(lVar4 + 0x132);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar4);
    uVar1 = *(ushort *)(lVar4 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar4 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      lVar4 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar4);
      }
      func_0x00f78ad0(lVar4);
    }
  }
  lVar4 = *(long *)(*plVar3 + 0x18);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 == 0) {
    lVar4 = *(long *)(*plVar3 + 0x18);
    uVar1 = *(ushort *)(lVar4 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar4);
      uVar1 = *(ushort *)(lVar4 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar4 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar4);
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        lVar4 = *(long *)(*plVar3 + 0x18);
        if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar4);
        }
        func_0x00f78ad0(lVar4);
      }
    }
    lVar4 = *plVar3;
    lVar5 = *(long *)(lVar4 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
      lVar4 = *plVar3;
    }
    uVar6 = **(undefined8 **)(lVar5 + 0xb8);
    lVar4 = *(long *)(lVar4 + 0x28);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    lVar4 = func_0x00f78aec(lVar4);
    (*(code *)**(undefined8 **)(*plVar3 + 0x30))(lVar4,uVar6,*(undefined8 *)(*plVar3 + 0x20));
    lVar5 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    *(long *)(*(long *)(lVar5 + 0xb8) + 8) = lVar4;
  }
  lVar5 = *(long *)(*plVar3 + 0x18);
  uVar1 = *(ushort *)(lVar5 + 0x132);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar5);
    uVar1 = *(ushort *)(lVar5 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar5 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      lVar5 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
      }
      func_0x00f78ad0(lVar5);
    }
  }
  lVar5 = *(long *)(*plVar3 + 0x18);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) {
    lVar5 = *(long *)(*plVar3 + 0x18);
    uVar1 = *(ushort *)(lVar5 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar5);
      uVar1 = *(ushort *)(lVar5 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar5 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        lVar5 = *(long *)(*plVar3 + 0x18);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        func_0x00f78ad0(lVar5);
      }
    }
    lVar5 = *plVar3;
    lVar7 = *(long *)(lVar5 + 0x18);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
      lVar5 = *plVar3;
    }
    uVar6 = **(undefined8 **)(lVar7 + 0xb8);
    lVar5 = *(long *)(lVar5 + 0x40);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar5 = func_0x00f78aec(lVar5);
    (*(code *)**(undefined8 **)(*plVar3 + 0x48))(lVar5,uVar6,*(undefined8 *)(*plVar3 + 0x38));
    lVar7 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    *(long *)(*(long *)(lVar7 + 0xb8) + 0x10) = lVar5;
  }
  lVar7 = *(long *)(*plVar3 + 0x50);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  uVar6 = func_0x00f78aec(lVar7);
  (*(code *)**(undefined8 **)(*plVar3 + 0x58))(uVar6,param_2,uRam0000000003d5ff78);
  *param_1 = uVar2;
  param_1[1] = lVar5;
  param_1[2] = lVar4;
  param_1[3] = uVar6;
  return;
}



// ============================================================
// RVA: 0x1a3ee6c | Atlas.Gameplay.Usables.UsableManager.CreateCallbacks<GoldenTurdProjectile>
// ============================================================

void Atlas_Gameplay_Usables_UsableManager__CreateCallbacks_BoostUsable_
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam0000000003eb6a8a & 1) == 0) {
    func_0x00f78a20(0x3d5ff78);
    bRam0000000003eb6a8a = 1;
  }
  plVar3 = (long *)(param_3 + 0x30);
  lVar4 = *(long *)(*plVar3 + 8);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  uVar2 = func_0x00f78aec(lVar4);
  (**(code **)((undefined8 *)*plVar3)[2])(uVar2,param_2,*(undefined8 *)*plVar3);
  lVar4 = *(long *)(*plVar3 + 0x18);
  uVar1 = *(ushort *)(lVar4 + 0x132);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar4);
    uVar1 = *(ushort *)(lVar4 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar4 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      lVar4 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar4);
      }
      func_0x00f78ad0(lVar4);
    }
  }
  lVar4 = *(long *)(*plVar3 + 0x18);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 == 0) {
    lVar4 = *(long *)(*plVar3 + 0x18);
    uVar1 = *(ushort *)(lVar4 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar4);
      uVar1 = *(ushort *)(lVar4 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar4 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar4);
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        lVar4 = *(long *)(*plVar3 + 0x18);
        if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar4);
        }
        func_0x00f78ad0(lVar4);
      }
    }
    lVar4 = *plVar3;
    lVar5 = *(long *)(lVar4 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
      lVar4 = *plVar3;
    }
    uVar6 = **(undefined8 **)(lVar5 + 0xb8);
    lVar4 = *(long *)(lVar4 + 0x28);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    lVar4 = func_0x00f78aec(lVar4);
    (*(code *)**(undefined8 **)(*plVar3 + 0x30))(lVar4,uVar6,*(undefined8 *)(*plVar3 + 0x20));
    lVar5 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    *(long *)(*(long *)(lVar5 + 0xb8) + 8) = lVar4;
  }
  lVar5 = *(long *)(*plVar3 + 0x18);
  uVar1 = *(ushort *)(lVar5 + 0x132);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar5);
    uVar1 = *(ushort *)(lVar5 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar5 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      lVar5 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
      }
      func_0x00f78ad0(lVar5);
    }
  }
  lVar5 = *(long *)(*plVar3 + 0x18);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) {
    lVar5 = *(long *)(*plVar3 + 0x18);
    uVar1 = *(ushort *)(lVar5 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar5);
      uVar1 = *(ushort *)(lVar5 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar5 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        lVar5 = *(long *)(*plVar3 + 0x18);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        func_0x00f78ad0(lVar5);
      }
    }
    lVar5 = *plVar3;
    lVar7 = *(long *)(lVar5 + 0x18);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
      lVar5 = *plVar3;
    }
    uVar6 = **(undefined8 **)(lVar7 + 0xb8);
    lVar5 = *(long *)(lVar5 + 0x40);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar5 = func_0x00f78aec(lVar5);
    (*(code *)**(undefined8 **)(*plVar3 + 0x48))(lVar5,uVar6,*(undefined8 *)(*plVar3 + 0x38));
    lVar7 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    *(long *)(*(long *)(lVar7 + 0xb8) + 0x10) = lVar5;
  }
  lVar7 = *(long *)(*plVar3 + 0x50);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  uVar6 = func_0x00f78aec(lVar7);
  (*(code *)**(undefined8 **)(*plVar3 + 0x58))(uVar6,param_2,uRam0000000003d5ff78);
  *param_1 = uVar2;
  param_1[1] = lVar5;
  param_1[2] = lVar4;
  param_1[3] = uVar6;
  return;
}



// ============================================================
// RVA: 0x1a3ee6c | Atlas.Gameplay.Usables.UsableManager.CreateCallbacks<NormalShieldUsable>
// ============================================================

void Atlas_Gameplay_Usables_UsableManager__CreateCallbacks_BoostUsable_
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam0000000003eb6a8a & 1) == 0) {
    func_0x00f78a20(0x3d5ff78);
    bRam0000000003eb6a8a = 1;
  }
  plVar3 = (long *)(param_3 + 0x30);
  lVar4 = *(long *)(*plVar3 + 8);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  uVar2 = func_0x00f78aec(lVar4);
  (**(code **)((undefined8 *)*plVar3)[2])(uVar2,param_2,*(undefined8 *)*plVar3);
  lVar4 = *(long *)(*plVar3 + 0x18);
  uVar1 = *(ushort *)(lVar4 + 0x132);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar4);
    uVar1 = *(ushort *)(lVar4 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar4 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      lVar4 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar4);
      }
      func_0x00f78ad0(lVar4);
    }
  }
  lVar4 = *(long *)(*plVar3 + 0x18);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 == 0) {
    lVar4 = *(long *)(*plVar3 + 0x18);
    uVar1 = *(ushort *)(lVar4 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar4);
      uVar1 = *(ushort *)(lVar4 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar4 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar4);
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        lVar4 = *(long *)(*plVar3 + 0x18);
        if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar4);
        }
        func_0x00f78ad0(lVar4);
      }
    }
    lVar4 = *plVar3;
    lVar5 = *(long *)(lVar4 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
      lVar4 = *plVar3;
    }
    uVar6 = **(undefined8 **)(lVar5 + 0xb8);
    lVar4 = *(long *)(lVar4 + 0x28);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    lVar4 = func_0x00f78aec(lVar4);
    (*(code *)**(undefined8 **)(*plVar3 + 0x30))(lVar4,uVar6,*(undefined8 *)(*plVar3 + 0x20));
    lVar5 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    *(long *)(*(long *)(lVar5 + 0xb8) + 8) = lVar4;
  }
  lVar5 = *(long *)(*plVar3 + 0x18);
  uVar1 = *(ushort *)(lVar5 + 0x132);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar5);
    uVar1 = *(ushort *)(lVar5 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar5 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      lVar5 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
      }
      func_0x00f78ad0(lVar5);
    }
  }
  lVar5 = *(long *)(*plVar3 + 0x18);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) {
    lVar5 = *(long *)(*plVar3 + 0x18);
    uVar1 = *(ushort *)(lVar5 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar5);
      uVar1 = *(ushort *)(lVar5 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar5 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        lVar5 = *(long *)(*plVar3 + 0x18);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        func_0x00f78ad0(lVar5);
      }
    }
    lVar5 = *plVar3;
    lVar7 = *(long *)(lVar5 + 0x18);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
      lVar5 = *plVar3;
    }
    uVar6 = **(undefined8 **)(lVar7 + 0xb8);
    lVar5 = *(long *)(lVar5 + 0x40);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar5 = func_0x00f78aec(lVar5);
    (*(code *)**(undefined8 **)(*plVar3 + 0x48))(lVar5,uVar6,*(undefined8 *)(*plVar3 + 0x38));
    lVar7 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    *(long *)(*(long *)(lVar7 + 0xb8) + 0x10) = lVar5;
  }
  lVar7 = *(long *)(*plVar3 + 0x50);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  uVar6 = func_0x00f78aec(lVar7);
  (*(code *)**(undefined8 **)(*plVar3 + 0x58))(uVar6,param_2,uRam0000000003d5ff78);
  *param_1 = uVar2;
  param_1[1] = lVar5;
  param_1[2] = lVar4;
  param_1[3] = uVar6;
  return;
}



// ============================================================
// RVA: 0x1a3ee6c | Atlas.Gameplay.Usables.UsableManager.CreateCallbacks<PlacementHomingProjectile>
// ============================================================

void Atlas_Gameplay_Usables_UsableManager__CreateCallbacks_BoostUsable_
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam0000000003eb6a8a & 1) == 0) {
    func_0x00f78a20(0x3d5ff78);
    bRam0000000003eb6a8a = 1;
  }
  plVar3 = (long *)(param_3 + 0x30);
  lVar4 = *(long *)(*plVar3 + 8);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  uVar2 = func_0x00f78aec(lVar4);
  (**(code **)((undefined8 *)*plVar3)[2])(uVar2,param_2,*(undefined8 *)*plVar3);
  lVar4 = *(long *)(*plVar3 + 0x18);
  uVar1 = *(ushort *)(lVar4 + 0x132);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar4);
    uVar1 = *(ushort *)(lVar4 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar4 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      lVar4 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar4);
      }
      func_0x00f78ad0(lVar4);
    }
  }
  lVar4 = *(long *)(*plVar3 + 0x18);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 == 0) {
    lVar4 = *(long *)(*plVar3 + 0x18);
    uVar1 = *(ushort *)(lVar4 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar4);
      uVar1 = *(ushort *)(lVar4 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar4 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar4);
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        lVar4 = *(long *)(*plVar3 + 0x18);
        if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar4);
        }
        func_0x00f78ad0(lVar4);
      }
    }
    lVar4 = *plVar3;
    lVar5 = *(long *)(lVar4 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
      lVar4 = *plVar3;
    }
    uVar6 = **(undefined8 **)(lVar5 + 0xb8);
    lVar4 = *(long *)(lVar4 + 0x28);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    lVar4 = func_0x00f78aec(lVar4);
    (*(code *)**(undefined8 **)(*plVar3 + 0x30))(lVar4,uVar6,*(undefined8 *)(*plVar3 + 0x20));
    lVar5 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    *(long *)(*(long *)(lVar5 + 0xb8) + 8) = lVar4;
  }
  lVar5 = *(long *)(*plVar3 + 0x18);
  uVar1 = *(ushort *)(lVar5 + 0x132);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar5);
    uVar1 = *(ushort *)(lVar5 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar5 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      lVar5 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
      }
      func_0x00f78ad0(lVar5);
    }
  }
  lVar5 = *(long *)(*plVar3 + 0x18);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) {
    lVar5 = *(long *)(*plVar3 + 0x18);
    uVar1 = *(ushort *)(lVar5 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar5);
      uVar1 = *(ushort *)(lVar5 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar5 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        lVar5 = *(long *)(*plVar3 + 0x18);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        func_0x00f78ad0(lVar5);
      }
    }
    lVar5 = *plVar3;
    lVar7 = *(long *)(lVar5 + 0x18);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
      lVar5 = *plVar3;
    }
    uVar6 = **(undefined8 **)(lVar7 + 0xb8);
    lVar5 = *(long *)(lVar5 + 0x40);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar5 = func_0x00f78aec(lVar5);
    (*(code *)**(undefined8 **)(*plVar3 + 0x48))(lVar5,uVar6,*(undefined8 *)(*plVar3 + 0x38));
    lVar7 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    *(long *)(*(long *)(lVar7 + 0xb8) + 0x10) = lVar5;
  }
  lVar7 = *(long *)(*plVar3 + 0x50);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  uVar6 = func_0x00f78aec(lVar7);
  (*(code *)**(undefined8 **)(*plVar3 + 0x58))(uVar6,param_2,uRam0000000003d5ff78);
  *param_1 = uVar2;
  param_1[1] = lVar5;
  param_1[2] = lVar4;
  param_1[3] = uVar6;
  return;
}



// ============================================================
// RVA: 0x1a3ee6c | Atlas.Gameplay.Usables.UsableManager.CreateCallbacks<ProximityHomingProjectile>
// ============================================================

void Atlas_Gameplay_Usables_UsableManager__CreateCallbacks_BoostUsable_
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam0000000003eb6a8a & 1) == 0) {
    func_0x00f78a20(0x3d5ff78);
    bRam0000000003eb6a8a = 1;
  }
  plVar3 = (long *)(param_3 + 0x30);
  lVar4 = *(long *)(*plVar3 + 8);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  uVar2 = func_0x00f78aec(lVar4);
  (**(code **)((undefined8 *)*plVar3)[2])(uVar2,param_2,*(undefined8 *)*plVar3);
  lVar4 = *(long *)(*plVar3 + 0x18);
  uVar1 = *(ushort *)(lVar4 + 0x132);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar4);
    uVar1 = *(ushort *)(lVar4 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar4 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      lVar4 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar4);
      }
      func_0x00f78ad0(lVar4);
    }
  }
  lVar4 = *(long *)(*plVar3 + 0x18);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 == 0) {
    lVar4 = *(long *)(*plVar3 + 0x18);
    uVar1 = *(ushort *)(lVar4 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar4);
      uVar1 = *(ushort *)(lVar4 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar4 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar4);
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        lVar4 = *(long *)(*plVar3 + 0x18);
        if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar4);
        }
        func_0x00f78ad0(lVar4);
      }
    }
    lVar4 = *plVar3;
    lVar5 = *(long *)(lVar4 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
      lVar4 = *plVar3;
    }
    uVar6 = **(undefined8 **)(lVar5 + 0xb8);
    lVar4 = *(long *)(lVar4 + 0x28);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    lVar4 = func_0x00f78aec(lVar4);
    (*(code *)**(undefined8 **)(*plVar3 + 0x30))(lVar4,uVar6,*(undefined8 *)(*plVar3 + 0x20));
    lVar5 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    *(long *)(*(long *)(lVar5 + 0xb8) + 8) = lVar4;
  }
  lVar5 = *(long *)(*plVar3 + 0x18);
  uVar1 = *(ushort *)(lVar5 + 0x132);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar5);
    uVar1 = *(ushort *)(lVar5 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar5 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      lVar5 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
      }
      func_0x00f78ad0(lVar5);
    }
  }
  lVar5 = *(long *)(*plVar3 + 0x18);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) {
    lVar5 = *(long *)(*plVar3 + 0x18);
    uVar1 = *(ushort *)(lVar5 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar5);
      uVar1 = *(ushort *)(lVar5 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar5 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        lVar5 = *(long *)(*plVar3 + 0x18);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        func_0x00f78ad0(lVar5);
      }
    }
    lVar5 = *plVar3;
    lVar7 = *(long *)(lVar5 + 0x18);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
      lVar5 = *plVar3;
    }
    uVar6 = **(undefined8 **)(lVar7 + 0xb8);
    lVar5 = *(long *)(lVar5 + 0x40);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar5 = func_0x00f78aec(lVar5);
    (*(code *)**(undefined8 **)(*plVar3 + 0x48))(lVar5,uVar6,*(undefined8 *)(*plVar3 + 0x38));
    lVar7 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    *(long *)(*(long *)(lVar7 + 0xb8) + 0x10) = lVar5;
  }
  lVar7 = *(long *)(*plVar3 + 0x50);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  uVar6 = func_0x00f78aec(lVar7);
  (*(code *)**(undefined8 **)(*plVar3 + 0x58))(uVar6,param_2,uRam0000000003d5ff78);
  *param_1 = uVar2;
  param_1[1] = lVar5;
  param_1[2] = lVar4;
  param_1[3] = uVar6;
  return;
}



// ============================================================
// RVA: 0x1a3ee6c | Atlas.Gameplay.Usables.UsableManager.CreateCallbacks<RicochetProjectile>
// ============================================================

void Atlas_Gameplay_Usables_UsableManager__CreateCallbacks_BoostUsable_
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam0000000003eb6a8a & 1) == 0) {
    func_0x00f78a20(0x3d5ff78);
    bRam0000000003eb6a8a = 1;
  }
  plVar3 = (long *)(param_3 + 0x30);
  lVar4 = *(long *)(*plVar3 + 8);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  uVar2 = func_0x00f78aec(lVar4);
  (**(code **)((undefined8 *)*plVar3)[2])(uVar2,param_2,*(undefined8 *)*plVar3);
  lVar4 = *(long *)(*plVar3 + 0x18);
  uVar1 = *(ushort *)(lVar4 + 0x132);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar4);
    uVar1 = *(ushort *)(lVar4 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar4 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      lVar4 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar4);
      }
      func_0x00f78ad0(lVar4);
    }
  }
  lVar4 = *(long *)(*plVar3 + 0x18);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 == 0) {
    lVar4 = *(long *)(*plVar3 + 0x18);
    uVar1 = *(ushort *)(lVar4 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar4);
      uVar1 = *(ushort *)(lVar4 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar4 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar4);
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        lVar4 = *(long *)(*plVar3 + 0x18);
        if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar4);
        }
        func_0x00f78ad0(lVar4);
      }
    }
    lVar4 = *plVar3;
    lVar5 = *(long *)(lVar4 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
      lVar4 = *plVar3;
    }
    uVar6 = **(undefined8 **)(lVar5 + 0xb8);
    lVar4 = *(long *)(lVar4 + 0x28);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    lVar4 = func_0x00f78aec(lVar4);
    (*(code *)**(undefined8 **)(*plVar3 + 0x30))(lVar4,uVar6,*(undefined8 *)(*plVar3 + 0x20));
    lVar5 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    *(long *)(*(long *)(lVar5 + 0xb8) + 8) = lVar4;
  }
  lVar5 = *(long *)(*plVar3 + 0x18);
  uVar1 = *(ushort *)(lVar5 + 0x132);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar5);
    uVar1 = *(ushort *)(lVar5 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar5 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      lVar5 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
      }
      func_0x00f78ad0(lVar5);
    }
  }
  lVar5 = *(long *)(*plVar3 + 0x18);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) {
    lVar5 = *(long *)(*plVar3 + 0x18);
    uVar1 = *(ushort *)(lVar5 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar5);
      uVar1 = *(ushort *)(lVar5 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar5 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        lVar5 = *(long *)(*plVar3 + 0x18);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        func_0x00f78ad0(lVar5);
      }
    }
    lVar5 = *plVar3;
    lVar7 = *(long *)(lVar5 + 0x18);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
      lVar5 = *plVar3;
    }
    uVar6 = **(undefined8 **)(lVar7 + 0xb8);
    lVar5 = *(long *)(lVar5 + 0x40);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar5 = func_0x00f78aec(lVar5);
    (*(code *)**(undefined8 **)(*plVar3 + 0x48))(lVar5,uVar6,*(undefined8 *)(*plVar3 + 0x38));
    lVar7 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    *(long *)(*(long *)(lVar7 + 0xb8) + 0x10) = lVar5;
  }
  lVar7 = *(long *)(*plVar3 + 0x50);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  uVar6 = func_0x00f78aec(lVar7);
  (*(code *)**(undefined8 **)(*plVar3 + 0x58))(uVar6,param_2,uRam0000000003d5ff78);
  *param_1 = uVar2;
  param_1[1] = lVar5;
  param_1[2] = lVar4;
  param_1[3] = uVar6;
  return;
}



// ============================================================
// RVA: 0x1a3ee6c | Atlas.Gameplay.Usables.UsableManager.CreateCallbacks<SatelliteUsable>
// ============================================================

void Atlas_Gameplay_Usables_UsableManager__CreateCallbacks_BoostUsable_
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam0000000003eb6a8a & 1) == 0) {
    func_0x00f78a20(0x3d5ff78);
    bRam0000000003eb6a8a = 1;
  }
  plVar3 = (long *)(param_3 + 0x30);
  lVar4 = *(long *)(*plVar3 + 8);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  uVar2 = func_0x00f78aec(lVar4);
  (**(code **)((undefined8 *)*plVar3)[2])(uVar2,param_2,*(undefined8 *)*plVar3);
  lVar4 = *(long *)(*plVar3 + 0x18);
  uVar1 = *(ushort *)(lVar4 + 0x132);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar4);
    uVar1 = *(ushort *)(lVar4 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar4 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      lVar4 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar4);
      }
      func_0x00f78ad0(lVar4);
    }
  }
  lVar4 = *(long *)(*plVar3 + 0x18);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 == 0) {
    lVar4 = *(long *)(*plVar3 + 0x18);
    uVar1 = *(ushort *)(lVar4 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar4);
      uVar1 = *(ushort *)(lVar4 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar4 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar4);
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        lVar4 = *(long *)(*plVar3 + 0x18);
        if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar4);
        }
        func_0x00f78ad0(lVar4);
      }
    }
    lVar4 = *plVar3;
    lVar5 = *(long *)(lVar4 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
      lVar4 = *plVar3;
    }
    uVar6 = **(undefined8 **)(lVar5 + 0xb8);
    lVar4 = *(long *)(lVar4 + 0x28);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    lVar4 = func_0x00f78aec(lVar4);
    (*(code *)**(undefined8 **)(*plVar3 + 0x30))(lVar4,uVar6,*(undefined8 *)(*plVar3 + 0x20));
    lVar5 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    *(long *)(*(long *)(lVar5 + 0xb8) + 8) = lVar4;
  }
  lVar5 = *(long *)(*plVar3 + 0x18);
  uVar1 = *(ushort *)(lVar5 + 0x132);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar5);
    uVar1 = *(ushort *)(lVar5 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar5 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      lVar5 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
      }
      func_0x00f78ad0(lVar5);
    }
  }
  lVar5 = *(long *)(*plVar3 + 0x18);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) {
    lVar5 = *(long *)(*plVar3 + 0x18);
    uVar1 = *(ushort *)(lVar5 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar5);
      uVar1 = *(ushort *)(lVar5 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar5 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        lVar5 = *(long *)(*plVar3 + 0x18);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        func_0x00f78ad0(lVar5);
      }
    }
    lVar5 = *plVar3;
    lVar7 = *(long *)(lVar5 + 0x18);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
      lVar5 = *plVar3;
    }
    uVar6 = **(undefined8 **)(lVar7 + 0xb8);
    lVar5 = *(long *)(lVar5 + 0x40);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar5 = func_0x00f78aec(lVar5);
    (*(code *)**(undefined8 **)(*plVar3 + 0x48))(lVar5,uVar6,*(undefined8 *)(*plVar3 + 0x38));
    lVar7 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    *(long *)(*(long *)(lVar7 + 0xb8) + 0x10) = lVar5;
  }
  lVar7 = *(long *)(*plVar3 + 0x50);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  uVar6 = func_0x00f78aec(lVar7);
  (*(code *)**(undefined8 **)(*plVar3 + 0x58))(uVar6,param_2,uRam0000000003d5ff78);
  *param_1 = uVar2;
  param_1[1] = lVar5;
  param_1[2] = lVar4;
  param_1[3] = uVar6;
  return;
}



// ============================================================
// RVA: 0x1a3ee6c | Atlas.Gameplay.Usables.UsableManager.CreateCallbacks<SuperShieldUsable>
// ============================================================

void Atlas_Gameplay_Usables_UsableManager__CreateCallbacks_BoostUsable_
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam0000000003eb6a8a & 1) == 0) {
    func_0x00f78a20(0x3d5ff78);
    bRam0000000003eb6a8a = 1;
  }
  plVar3 = (long *)(param_3 + 0x30);
  lVar4 = *(long *)(*plVar3 + 8);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  uVar2 = func_0x00f78aec(lVar4);
  (**(code **)((undefined8 *)*plVar3)[2])(uVar2,param_2,*(undefined8 *)*plVar3);
  lVar4 = *(long *)(*plVar3 + 0x18);
  uVar1 = *(ushort *)(lVar4 + 0x132);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar4);
    uVar1 = *(ushort *)(lVar4 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar4 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      lVar4 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar4);
      }
      func_0x00f78ad0(lVar4);
    }
  }
  lVar4 = *(long *)(*plVar3 + 0x18);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 == 0) {
    lVar4 = *(long *)(*plVar3 + 0x18);
    uVar1 = *(ushort *)(lVar4 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar4);
      uVar1 = *(ushort *)(lVar4 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar4 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar4);
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        lVar4 = *(long *)(*plVar3 + 0x18);
        if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar4);
        }
        func_0x00f78ad0(lVar4);
      }
    }
    lVar4 = *plVar3;
    lVar5 = *(long *)(lVar4 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
      lVar4 = *plVar3;
    }
    uVar6 = **(undefined8 **)(lVar5 + 0xb8);
    lVar4 = *(long *)(lVar4 + 0x28);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    lVar4 = func_0x00f78aec(lVar4);
    (*(code *)**(undefined8 **)(*plVar3 + 0x30))(lVar4,uVar6,*(undefined8 *)(*plVar3 + 0x20));
    lVar5 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    *(long *)(*(long *)(lVar5 + 0xb8) + 8) = lVar4;
  }
  lVar5 = *(long *)(*plVar3 + 0x18);
  uVar1 = *(ushort *)(lVar5 + 0x132);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar5);
    uVar1 = *(ushort *)(lVar5 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar5 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      lVar5 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
      }
      func_0x00f78ad0(lVar5);
    }
  }
  lVar5 = *(long *)(*plVar3 + 0x18);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) {
    lVar5 = *(long *)(*plVar3 + 0x18);
    uVar1 = *(ushort *)(lVar5 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar5);
      uVar1 = *(ushort *)(lVar5 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar5 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        lVar5 = *(long *)(*plVar3 + 0x18);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        func_0x00f78ad0(lVar5);
      }
    }
    lVar5 = *plVar3;
    lVar7 = *(long *)(lVar5 + 0x18);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
      lVar5 = *plVar3;
    }
    uVar6 = **(undefined8 **)(lVar7 + 0xb8);
    lVar5 = *(long *)(lVar5 + 0x40);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar5 = func_0x00f78aec(lVar5);
    (*(code *)**(undefined8 **)(*plVar3 + 0x48))(lVar5,uVar6,*(undefined8 *)(*plVar3 + 0x38));
    lVar7 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    *(long *)(*(long *)(lVar7 + 0xb8) + 0x10) = lVar5;
  }
  lVar7 = *(long *)(*plVar3 + 0x50);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  uVar6 = func_0x00f78aec(lVar7);
  (*(code *)**(undefined8 **)(*plVar3 + 0x58))(uVar6,param_2,uRam0000000003d5ff78);
  *param_1 = uVar2;
  param_1[1] = lVar5;
  param_1[2] = lVar4;
  param_1[3] = uVar6;
  return;
}



// ============================================================
// RVA: 0x1a3ee6c | Atlas.Gameplay.Usables.UsableManager.CreateCallbacks<object>
// ============================================================

void Atlas_Gameplay_Usables_UsableManager__CreateCallbacks_BoostUsable_
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam0000000003eb6a8a & 1) == 0) {
    func_0x00f78a20(0x3d5ff78);
    bRam0000000003eb6a8a = 1;
  }
  plVar3 = (long *)(param_3 + 0x30);
  lVar4 = *(long *)(*plVar3 + 8);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  uVar2 = func_0x00f78aec(lVar4);
  (**(code **)((undefined8 *)*plVar3)[2])(uVar2,param_2,*(undefined8 *)*plVar3);
  lVar4 = *(long *)(*plVar3 + 0x18);
  uVar1 = *(ushort *)(lVar4 + 0x132);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar4);
    uVar1 = *(ushort *)(lVar4 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar4 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      lVar4 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar4);
      }
      func_0x00f78ad0(lVar4);
    }
  }
  lVar4 = *(long *)(*plVar3 + 0x18);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 == 0) {
    lVar4 = *(long *)(*plVar3 + 0x18);
    uVar1 = *(ushort *)(lVar4 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar4);
      uVar1 = *(ushort *)(lVar4 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar4 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar4);
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        lVar4 = *(long *)(*plVar3 + 0x18);
        if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar4);
        }
        func_0x00f78ad0(lVar4);
      }
    }
    lVar4 = *plVar3;
    lVar5 = *(long *)(lVar4 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
      lVar4 = *plVar3;
    }
    uVar6 = **(undefined8 **)(lVar5 + 0xb8);
    lVar4 = *(long *)(lVar4 + 0x28);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    lVar4 = func_0x00f78aec(lVar4);
    (*(code *)**(undefined8 **)(*plVar3 + 0x30))(lVar4,uVar6,*(undefined8 *)(*plVar3 + 0x20));
    lVar5 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    *(long *)(*(long *)(lVar5 + 0xb8) + 8) = lVar4;
  }
  lVar5 = *(long *)(*plVar3 + 0x18);
  uVar1 = *(ushort *)(lVar5 + 0x132);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar5);
    uVar1 = *(ushort *)(lVar5 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar5 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      lVar5 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
      }
      func_0x00f78ad0(lVar5);
    }
  }
  lVar5 = *(long *)(*plVar3 + 0x18);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) {
    lVar5 = *(long *)(*plVar3 + 0x18);
    uVar1 = *(ushort *)(lVar5 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar5);
      uVar1 = *(ushort *)(lVar5 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar5 = *(long *)(*plVar3 + 0x18);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        lVar5 = *(long *)(*plVar3 + 0x18);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        func_0x00f78ad0(lVar5);
      }
    }
    lVar5 = *plVar3;
    lVar7 = *(long *)(lVar5 + 0x18);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
      lVar5 = *plVar3;
    }
    uVar6 = **(undefined8 **)(lVar7 + 0xb8);
    lVar5 = *(long *)(lVar5 + 0x40);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar5 = func_0x00f78aec(lVar5);
    (*(code *)**(undefined8 **)(*plVar3 + 0x48))(lVar5,uVar6,*(undefined8 *)(*plVar3 + 0x38));
    lVar7 = *(long *)(*plVar3 + 0x18);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    *(long *)(*(long *)(lVar7 + 0xb8) + 0x10) = lVar5;
  }
  lVar7 = *(long *)(*plVar3 + 0x50);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  uVar6 = func_0x00f78aec(lVar7);
  (*(code *)**(undefined8 **)(*plVar3 + 0x58))(uVar6,param_2,uRam0000000003d5ff78);
  *param_1 = uVar2;
  param_1[1] = lVar5;
  param_1[2] = lVar4;
  param_1[3] = uVar6;
  return;
}



// ============================================================
// RVA: 0x1a3f210 | Atlas.Gameplay.Usables.UsableManager.DeInitLightMembers<BoostUsableBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                 (long param_1,long param_2,long param_3,undefined8 *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  long extraout_x1;
  int *piVar12;
  long *plVar13;
  long lVar14;
  long *unaff_x24;
  long lVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  long alStack_58 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar13 = (long *)0x3eb6000;
  if ((bRam0000000003eb6a8b & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8b = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if ((((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(param_2 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f394;
  }
  plVar13 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 0x18))(&uStack_48);
  while (uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&uStack_48,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x30)),
        (uVar3 & 1) != 0) {
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&uStack_48,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x20));
    if (lVar2 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f390);
      (*pcVar1)();
    }
    /*Atlas.Lighting.LightWorldMemberBehaviour$$ReleaseDuplicatedMaterials*/ func_0x014869dc(lVar2,0);
    *(undefined8 *)(lVar2 + 0x48) = 0;
  }
  param_1 = 0;
  do {
    param_2 = *(long *)(*(long *)(param_2 + 0x30) + 0x38);
    if ((*(ushort *)(param_2 + 0x132) & 1) == 0) {
      func_0x00fac028(param_2);
    }
    uVar3 = (ulong)*(ushort *)(param_2 + 0x12a);
    alStack_58[0] = param_2;
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(param_2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *plVar13) {
          puVar4 = (undefined8 *)(param_2 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01a3f35c;
        }
        piVar12 = piVar12 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_3 = 0;
    puVar4 = (undefined8 *)func_0x00fac1f0(alStack_58);
code_r0x01a3f35c:
    plVar5 = (long *)(*(code *)*puVar4)(alStack_58,puVar4[1]);
    if (param_1 == 0) {
      return plVar5;
    }
code_r0x01a3f394:
    func_0x00f78ac0(param_1,0);
    if (extraout_w1 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    param_1 = *plVar5;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  plVar13 = auVar16._8_8_;
  puStack_68 = &
               Atlas_Gameplay_Usables_UsableManager__DeSpawnAndTearDownUsable_SuperShieldUsable__SuperShieldUsableBehaviour_
  ;
  lVar2 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (plVar13 == (long *)0x0) goto code_r0x01a3f500;
  lVar14 = plVar13[9];
  lVar15 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  if (lVar14 == 0) {
code_r0x01a3f450:
    lVar6 = 0;
  }
  else {
    lVar6 = func_0x00f78adc(lVar14,lVar15);
    if (lVar6 == 0) {
      func_0x00f78e5c(lVar14,lVar15);
      goto code_r0x01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*plVar13 + 0x218))(plVar13,*(undefined8 *)(*plVar13 + 0x220));
  lVar14 = *(long *)(auVar16._0_8_ + 0x18);
  unaff_x24 = *(long **)(*(long *)(param_3 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if (plVar5 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (lVar14 != 0) {
      param_4 = *(undefined8 **)(*(long *)(param_3 + 0x30) + 0x18);
      (*(code *)*param_4)(lVar14,uVar7);
      lVar14 = *(long *)(auVar16._0_8_ + 0x10);
      lVar2 = lVar6;
      if (lVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar13 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 0x20))
                                    (lVar14,plVar13);
        return plVar13;
      }
    }
  }
code_r0x01a3f500:
  func_0x00f78af4();
  puStack_b8 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar6 = 0x3eb6000;
  lVar14 = lVar2;
  puVar4 = param_4;
  lVar15 = param_5;
  ppuStack_c0 = &puStack_70;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_148,param_4,uRam0000000003d3a7d0);
  uStack_128 = uStack_140;
  lStack_130 = lStack_148;
  puStack_120 = puStack_138;
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_130,uRam0000000003d325c8), puVar9 = puStack_120,
        (uVar3 & 1) != 0) {
    lVar6 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    if (puVar9 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar8 = func_0x00f78adc(puVar9,lVar6);
    if (lVar8 == 0) {
      func_0x00f78e5c(puVar9,lVar6);
      goto code_r0x01a3f6f0;
    }
    param_4 = puVar9;
    if ((*(long *)(lVar8 + 0x28) == extraout_x1) && (*(char *)(lVar8 + 0x18) != '\0')) {
      if (lVar2 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar14 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar2);
    }
  }
  param_5 = 0;
  do {
    lStack_148 = *unaff_x25;
    uVar3 = (ulong)*(ushort *)(lStack_148 + 0x12a);
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(lStack_148 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x24) {
          puVar9 = (undefined8 *)(lStack_148 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar12 = piVar12 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    lVar14 = 0;
    puVar9 = (undefined8 *)func_0x00fac1f0(&lStack_148);
code_r0x01a3f69c:
    plVar13 = (long *)(*(code *)*puVar9)(&uStack_140,puVar9[1]);
    if (param_5 == 0) {
      return plVar13;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1_00 != 1) break;
    plVar13 = (long *)___cxa_begin_catch();
    param_5 = *plVar13;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar10 = auVar16._0_8_;
  puStack_158 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar8 = lVar14;
  puVar9 = puVar4;
  puStack_180 = param_4;
  lStack_178 = extraout_x1;
  lStack_170 = lVar2;
  lStack_168 = param_5;
  ppuStack_160 = &ppuStack_c0;
  if ((*(long *)(lVar10 + 0x20) != 0) &&
     (lVar11 = (*(code *)**(undefined8 **)puVar4[6])(), param_5 = lVar14, lVar2 = auVar16._8_8_,
     param_4 = puVar4, lVar11 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar13 = (long *)(*(code *)**(undefined8 **)(puVar4[6] + 8))
                                (lVar10,auVar16._8_8_,lVar14,*(undefined8 *)(lVar11 + 0x10));
    return plVar13;
  }
  auVar16 = func_0x00f78af4();
  lVar11 = auVar16._8_8_;
  puStack_188 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar13 = (long *)0x3eb6000;
  lVar14 = lVar8;
  plStack_1c0 = unaff_x24;
  lStack_1b8 = lVar6;
  puStack_1b0 = param_4;
  lStack_1a8 = lVar10;
  lStack_1a0 = lVar2;
  lStack_198 = param_5;
  ppuStack_190 = &ppuStack_160;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar16._0_8_ + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(lVar15 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar13 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))(&lStack_1f8);
  uStack_1d8 = uStack_1f0;
  lStack_1e0 = lStack_1f8;
  uStack_1d0 = uStack_1e8;
  do {
    uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_1e0,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x30));
    if ((uVar3 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
      do {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x30) + 0x38);
        if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        uVar3 = (ulong)*(ushort *)(lVar15 + 0x12a);
        lStack_1f8 = lVar15;
        if (uVar3 != 0) {
          piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *plVar13) {
              puVar4 = (undefined8 *)(lVar15 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar12 = piVar12 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        lVar14 = 0;
        puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_1f8);
code_r0x01a3f920:
        plVar5 = (long *)(*(code *)*puVar4)(&uStack_1f0,puVar4[1]);
        if (puVar9 == (undefined8 *)0x0) {
          return plVar5;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar9,0);
        if (extraout_w1_01 != 1) {
          auVar16 = __Unwind_Resume();
          lVar2 = auVar16._0_8_;
          plVar13 = (long *)(**(code **)**(undefined8 **)(lVar14 + 0x30))();
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x1e8))
                      (plVar13,lVar2,auVar16._8_8_,*(undefined8 *)(lVar2 + 0x38),
                       *(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(*plVar13 + 0x1f0),param_7,
                       param_8,lVar11,lVar8,puVar9,lVar15);
            return plVar13;
          }
          puVar4 = (undefined8 *)func_0x00f78af4();
          plVar13 = (long *)*puVar4;
          func_0x00f78a30();
          return plVar13;
        }
        puVar9 = (undefined8 *)___cxa_begin_catch();
        puVar9 = (undefined8 *)*puVar9;
        ___cxa_end_catch();
      } while( true );
    }
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_1e0,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x20));
    if (lVar8 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar8,0);
    if (lVar2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar2 + 0x48) = puVar9;
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar14 = *(long *)(lVar11 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar2,lVar8,lVar14,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f210 | Atlas.Gameplay.Usables.UsableManager.DeInitLightMembers<GoldenTurdProjectileBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                 (long param_1,long param_2,long param_3,undefined8 *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  long extraout_x1;
  int *piVar12;
  long *plVar13;
  long lVar14;
  long *unaff_x24;
  long lVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  long alStack_58 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar13 = (long *)0x3eb6000;
  if ((bRam0000000003eb6a8b & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8b = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if ((((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(param_2 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f394;
  }
  plVar13 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 0x18))(&uStack_48);
  while (uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&uStack_48,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x30)),
        (uVar3 & 1) != 0) {
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&uStack_48,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x20));
    if (lVar2 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f390);
      (*pcVar1)();
    }
    /*Atlas.Lighting.LightWorldMemberBehaviour$$ReleaseDuplicatedMaterials*/ func_0x014869dc(lVar2,0);
    *(undefined8 *)(lVar2 + 0x48) = 0;
  }
  param_1 = 0;
  do {
    param_2 = *(long *)(*(long *)(param_2 + 0x30) + 0x38);
    if ((*(ushort *)(param_2 + 0x132) & 1) == 0) {
      func_0x00fac028(param_2);
    }
    uVar3 = (ulong)*(ushort *)(param_2 + 0x12a);
    alStack_58[0] = param_2;
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(param_2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *plVar13) {
          puVar4 = (undefined8 *)(param_2 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01a3f35c;
        }
        piVar12 = piVar12 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_3 = 0;
    puVar4 = (undefined8 *)func_0x00fac1f0(alStack_58);
code_r0x01a3f35c:
    plVar5 = (long *)(*(code *)*puVar4)(alStack_58,puVar4[1]);
    if (param_1 == 0) {
      return plVar5;
    }
code_r0x01a3f394:
    func_0x00f78ac0(param_1,0);
    if (extraout_w1 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    param_1 = *plVar5;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  plVar13 = auVar16._8_8_;
  puStack_68 = &
               Atlas_Gameplay_Usables_UsableManager__DeSpawnAndTearDownUsable_SuperShieldUsable__SuperShieldUsableBehaviour_
  ;
  lVar2 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (plVar13 == (long *)0x0) goto code_r0x01a3f500;
  lVar14 = plVar13[9];
  lVar15 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  if (lVar14 == 0) {
code_r0x01a3f450:
    lVar6 = 0;
  }
  else {
    lVar6 = func_0x00f78adc(lVar14,lVar15);
    if (lVar6 == 0) {
      func_0x00f78e5c(lVar14,lVar15);
      goto code_r0x01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*plVar13 + 0x218))(plVar13,*(undefined8 *)(*plVar13 + 0x220));
  lVar14 = *(long *)(auVar16._0_8_ + 0x18);
  unaff_x24 = *(long **)(*(long *)(param_3 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if (plVar5 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (lVar14 != 0) {
      param_4 = *(undefined8 **)(*(long *)(param_3 + 0x30) + 0x18);
      (*(code *)*param_4)(lVar14,uVar7);
      lVar14 = *(long *)(auVar16._0_8_ + 0x10);
      lVar2 = lVar6;
      if (lVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar13 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 0x20))
                                    (lVar14,plVar13);
        return plVar13;
      }
    }
  }
code_r0x01a3f500:
  func_0x00f78af4();
  puStack_b8 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar6 = 0x3eb6000;
  lVar14 = lVar2;
  puVar4 = param_4;
  lVar15 = param_5;
  ppuStack_c0 = &puStack_70;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_148,param_4,uRam0000000003d3a7d0);
  uStack_128 = uStack_140;
  lStack_130 = lStack_148;
  puStack_120 = puStack_138;
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_130,uRam0000000003d325c8), puVar9 = puStack_120,
        (uVar3 & 1) != 0) {
    lVar6 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    if (puVar9 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar8 = func_0x00f78adc(puVar9,lVar6);
    if (lVar8 == 0) {
      func_0x00f78e5c(puVar9,lVar6);
      goto code_r0x01a3f6f0;
    }
    param_4 = puVar9;
    if ((*(long *)(lVar8 + 0x28) == extraout_x1) && (*(char *)(lVar8 + 0x18) != '\0')) {
      if (lVar2 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar14 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar2);
    }
  }
  param_5 = 0;
  do {
    lStack_148 = *unaff_x25;
    uVar3 = (ulong)*(ushort *)(lStack_148 + 0x12a);
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(lStack_148 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x24) {
          puVar9 = (undefined8 *)(lStack_148 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar12 = piVar12 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    lVar14 = 0;
    puVar9 = (undefined8 *)func_0x00fac1f0(&lStack_148);
code_r0x01a3f69c:
    plVar13 = (long *)(*(code *)*puVar9)(&uStack_140,puVar9[1]);
    if (param_5 == 0) {
      return plVar13;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1_00 != 1) break;
    plVar13 = (long *)___cxa_begin_catch();
    param_5 = *plVar13;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar10 = auVar16._0_8_;
  puStack_158 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar8 = lVar14;
  puVar9 = puVar4;
  puStack_180 = param_4;
  lStack_178 = extraout_x1;
  lStack_170 = lVar2;
  lStack_168 = param_5;
  ppuStack_160 = &ppuStack_c0;
  if ((*(long *)(lVar10 + 0x20) != 0) &&
     (lVar11 = (*(code *)**(undefined8 **)puVar4[6])(), param_5 = lVar14, lVar2 = auVar16._8_8_,
     param_4 = puVar4, lVar11 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar13 = (long *)(*(code *)**(undefined8 **)(puVar4[6] + 8))
                                (lVar10,auVar16._8_8_,lVar14,*(undefined8 *)(lVar11 + 0x10));
    return plVar13;
  }
  auVar16 = func_0x00f78af4();
  lVar11 = auVar16._8_8_;
  puStack_188 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar13 = (long *)0x3eb6000;
  lVar14 = lVar8;
  plStack_1c0 = unaff_x24;
  lStack_1b8 = lVar6;
  puStack_1b0 = param_4;
  lStack_1a8 = lVar10;
  lStack_1a0 = lVar2;
  lStack_198 = param_5;
  ppuStack_190 = &ppuStack_160;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar16._0_8_ + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(lVar15 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar13 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))(&lStack_1f8);
  uStack_1d8 = uStack_1f0;
  lStack_1e0 = lStack_1f8;
  uStack_1d0 = uStack_1e8;
  do {
    uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_1e0,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x30));
    if ((uVar3 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
      do {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x30) + 0x38);
        if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        uVar3 = (ulong)*(ushort *)(lVar15 + 0x12a);
        lStack_1f8 = lVar15;
        if (uVar3 != 0) {
          piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *plVar13) {
              puVar4 = (undefined8 *)(lVar15 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar12 = piVar12 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        lVar14 = 0;
        puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_1f8);
code_r0x01a3f920:
        plVar5 = (long *)(*(code *)*puVar4)(&uStack_1f0,puVar4[1]);
        if (puVar9 == (undefined8 *)0x0) {
          return plVar5;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar9,0);
        if (extraout_w1_01 != 1) {
          auVar16 = __Unwind_Resume();
          lVar2 = auVar16._0_8_;
          plVar13 = (long *)(**(code **)**(undefined8 **)(lVar14 + 0x30))();
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x1e8))
                      (plVar13,lVar2,auVar16._8_8_,*(undefined8 *)(lVar2 + 0x38),
                       *(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(*plVar13 + 0x1f0),param_7,
                       param_8,lVar11,lVar8,puVar9,lVar15);
            return plVar13;
          }
          puVar4 = (undefined8 *)func_0x00f78af4();
          plVar13 = (long *)*puVar4;
          func_0x00f78a30();
          return plVar13;
        }
        puVar9 = (undefined8 *)___cxa_begin_catch();
        puVar9 = (undefined8 *)*puVar9;
        ___cxa_end_catch();
      } while( true );
    }
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_1e0,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x20));
    if (lVar8 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar8,0);
    if (lVar2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar2 + 0x48) = puVar9;
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar14 = *(long *)(lVar11 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar2,lVar8,lVar14,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f210 | Atlas.Gameplay.Usables.UsableManager.DeInitLightMembers<NormalShieldUsableBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                 (long param_1,long param_2,long param_3,undefined8 *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  long extraout_x1;
  int *piVar12;
  long *plVar13;
  long lVar14;
  long *unaff_x24;
  long lVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  long alStack_58 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar13 = (long *)0x3eb6000;
  if ((bRam0000000003eb6a8b & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8b = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if ((((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(param_2 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f394;
  }
  plVar13 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 0x18))(&uStack_48);
  while (uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&uStack_48,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x30)),
        (uVar3 & 1) != 0) {
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&uStack_48,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x20));
    if (lVar2 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f390);
      (*pcVar1)();
    }
    /*Atlas.Lighting.LightWorldMemberBehaviour$$ReleaseDuplicatedMaterials*/ func_0x014869dc(lVar2,0);
    *(undefined8 *)(lVar2 + 0x48) = 0;
  }
  param_1 = 0;
  do {
    param_2 = *(long *)(*(long *)(param_2 + 0x30) + 0x38);
    if ((*(ushort *)(param_2 + 0x132) & 1) == 0) {
      func_0x00fac028(param_2);
    }
    uVar3 = (ulong)*(ushort *)(param_2 + 0x12a);
    alStack_58[0] = param_2;
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(param_2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *plVar13) {
          puVar4 = (undefined8 *)(param_2 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01a3f35c;
        }
        piVar12 = piVar12 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_3 = 0;
    puVar4 = (undefined8 *)func_0x00fac1f0(alStack_58);
code_r0x01a3f35c:
    plVar5 = (long *)(*(code *)*puVar4)(alStack_58,puVar4[1]);
    if (param_1 == 0) {
      return plVar5;
    }
code_r0x01a3f394:
    func_0x00f78ac0(param_1,0);
    if (extraout_w1 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    param_1 = *plVar5;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  plVar13 = auVar16._8_8_;
  puStack_68 = &
               Atlas_Gameplay_Usables_UsableManager__DeSpawnAndTearDownUsable_SuperShieldUsable__SuperShieldUsableBehaviour_
  ;
  lVar2 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (plVar13 == (long *)0x0) goto code_r0x01a3f500;
  lVar14 = plVar13[9];
  lVar15 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  if (lVar14 == 0) {
code_r0x01a3f450:
    lVar6 = 0;
  }
  else {
    lVar6 = func_0x00f78adc(lVar14,lVar15);
    if (lVar6 == 0) {
      func_0x00f78e5c(lVar14,lVar15);
      goto code_r0x01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*plVar13 + 0x218))(plVar13,*(undefined8 *)(*plVar13 + 0x220));
  lVar14 = *(long *)(auVar16._0_8_ + 0x18);
  unaff_x24 = *(long **)(*(long *)(param_3 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if (plVar5 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (lVar14 != 0) {
      param_4 = *(undefined8 **)(*(long *)(param_3 + 0x30) + 0x18);
      (*(code *)*param_4)(lVar14,uVar7);
      lVar14 = *(long *)(auVar16._0_8_ + 0x10);
      lVar2 = lVar6;
      if (lVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar13 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 0x20))
                                    (lVar14,plVar13);
        return plVar13;
      }
    }
  }
code_r0x01a3f500:
  func_0x00f78af4();
  puStack_b8 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar6 = 0x3eb6000;
  lVar14 = lVar2;
  puVar4 = param_4;
  lVar15 = param_5;
  ppuStack_c0 = &puStack_70;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_148,param_4,uRam0000000003d3a7d0);
  uStack_128 = uStack_140;
  lStack_130 = lStack_148;
  puStack_120 = puStack_138;
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_130,uRam0000000003d325c8), puVar9 = puStack_120,
        (uVar3 & 1) != 0) {
    lVar6 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    if (puVar9 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar8 = func_0x00f78adc(puVar9,lVar6);
    if (lVar8 == 0) {
      func_0x00f78e5c(puVar9,lVar6);
      goto code_r0x01a3f6f0;
    }
    param_4 = puVar9;
    if ((*(long *)(lVar8 + 0x28) == extraout_x1) && (*(char *)(lVar8 + 0x18) != '\0')) {
      if (lVar2 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar14 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar2);
    }
  }
  param_5 = 0;
  do {
    lStack_148 = *unaff_x25;
    uVar3 = (ulong)*(ushort *)(lStack_148 + 0x12a);
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(lStack_148 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x24) {
          puVar9 = (undefined8 *)(lStack_148 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar12 = piVar12 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    lVar14 = 0;
    puVar9 = (undefined8 *)func_0x00fac1f0(&lStack_148);
code_r0x01a3f69c:
    plVar13 = (long *)(*(code *)*puVar9)(&uStack_140,puVar9[1]);
    if (param_5 == 0) {
      return plVar13;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1_00 != 1) break;
    plVar13 = (long *)___cxa_begin_catch();
    param_5 = *plVar13;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar10 = auVar16._0_8_;
  puStack_158 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar8 = lVar14;
  puVar9 = puVar4;
  puStack_180 = param_4;
  lStack_178 = extraout_x1;
  lStack_170 = lVar2;
  lStack_168 = param_5;
  ppuStack_160 = &ppuStack_c0;
  if ((*(long *)(lVar10 + 0x20) != 0) &&
     (lVar11 = (*(code *)**(undefined8 **)puVar4[6])(), param_5 = lVar14, lVar2 = auVar16._8_8_,
     param_4 = puVar4, lVar11 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar13 = (long *)(*(code *)**(undefined8 **)(puVar4[6] + 8))
                                (lVar10,auVar16._8_8_,lVar14,*(undefined8 *)(lVar11 + 0x10));
    return plVar13;
  }
  auVar16 = func_0x00f78af4();
  lVar11 = auVar16._8_8_;
  puStack_188 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar13 = (long *)0x3eb6000;
  lVar14 = lVar8;
  plStack_1c0 = unaff_x24;
  lStack_1b8 = lVar6;
  puStack_1b0 = param_4;
  lStack_1a8 = lVar10;
  lStack_1a0 = lVar2;
  lStack_198 = param_5;
  ppuStack_190 = &ppuStack_160;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar16._0_8_ + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(lVar15 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar13 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))(&lStack_1f8);
  uStack_1d8 = uStack_1f0;
  lStack_1e0 = lStack_1f8;
  uStack_1d0 = uStack_1e8;
  do {
    uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_1e0,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x30));
    if ((uVar3 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
      do {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x30) + 0x38);
        if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        uVar3 = (ulong)*(ushort *)(lVar15 + 0x12a);
        lStack_1f8 = lVar15;
        if (uVar3 != 0) {
          piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *plVar13) {
              puVar4 = (undefined8 *)(lVar15 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar12 = piVar12 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        lVar14 = 0;
        puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_1f8);
code_r0x01a3f920:
        plVar5 = (long *)(*(code *)*puVar4)(&uStack_1f0,puVar4[1]);
        if (puVar9 == (undefined8 *)0x0) {
          return plVar5;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar9,0);
        if (extraout_w1_01 != 1) {
          auVar16 = __Unwind_Resume();
          lVar2 = auVar16._0_8_;
          plVar13 = (long *)(**(code **)**(undefined8 **)(lVar14 + 0x30))();
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x1e8))
                      (plVar13,lVar2,auVar16._8_8_,*(undefined8 *)(lVar2 + 0x38),
                       *(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(*plVar13 + 0x1f0),param_7,
                       param_8,lVar11,lVar8,puVar9,lVar15);
            return plVar13;
          }
          puVar4 = (undefined8 *)func_0x00f78af4();
          plVar13 = (long *)*puVar4;
          func_0x00f78a30();
          return plVar13;
        }
        puVar9 = (undefined8 *)___cxa_begin_catch();
        puVar9 = (undefined8 *)*puVar9;
        ___cxa_end_catch();
      } while( true );
    }
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_1e0,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x20));
    if (lVar8 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar8,0);
    if (lVar2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar2 + 0x48) = puVar9;
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar14 = *(long *)(lVar11 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar2,lVar8,lVar14,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f210 | Atlas.Gameplay.Usables.UsableManager.DeInitLightMembers<PlacementHomingProjectileBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                 (long param_1,long param_2,long param_3,undefined8 *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  long extraout_x1;
  int *piVar12;
  long *plVar13;
  long lVar14;
  long *unaff_x24;
  long lVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  long alStack_58 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar13 = (long *)0x3eb6000;
  if ((bRam0000000003eb6a8b & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8b = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if ((((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(param_2 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f394;
  }
  plVar13 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 0x18))(&uStack_48);
  while (uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&uStack_48,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x30)),
        (uVar3 & 1) != 0) {
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&uStack_48,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x20));
    if (lVar2 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f390);
      (*pcVar1)();
    }
    /*Atlas.Lighting.LightWorldMemberBehaviour$$ReleaseDuplicatedMaterials*/ func_0x014869dc(lVar2,0);
    *(undefined8 *)(lVar2 + 0x48) = 0;
  }
  param_1 = 0;
  do {
    param_2 = *(long *)(*(long *)(param_2 + 0x30) + 0x38);
    if ((*(ushort *)(param_2 + 0x132) & 1) == 0) {
      func_0x00fac028(param_2);
    }
    uVar3 = (ulong)*(ushort *)(param_2 + 0x12a);
    alStack_58[0] = param_2;
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(param_2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *plVar13) {
          puVar4 = (undefined8 *)(param_2 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01a3f35c;
        }
        piVar12 = piVar12 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_3 = 0;
    puVar4 = (undefined8 *)func_0x00fac1f0(alStack_58);
code_r0x01a3f35c:
    plVar5 = (long *)(*(code *)*puVar4)(alStack_58,puVar4[1]);
    if (param_1 == 0) {
      return plVar5;
    }
code_r0x01a3f394:
    func_0x00f78ac0(param_1,0);
    if (extraout_w1 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    param_1 = *plVar5;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  plVar13 = auVar16._8_8_;
  puStack_68 = &
               Atlas_Gameplay_Usables_UsableManager__DeSpawnAndTearDownUsable_SuperShieldUsable__SuperShieldUsableBehaviour_
  ;
  lVar2 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (plVar13 == (long *)0x0) goto code_r0x01a3f500;
  lVar14 = plVar13[9];
  lVar15 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  if (lVar14 == 0) {
code_r0x01a3f450:
    lVar6 = 0;
  }
  else {
    lVar6 = func_0x00f78adc(lVar14,lVar15);
    if (lVar6 == 0) {
      func_0x00f78e5c(lVar14,lVar15);
      goto code_r0x01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*plVar13 + 0x218))(plVar13,*(undefined8 *)(*plVar13 + 0x220));
  lVar14 = *(long *)(auVar16._0_8_ + 0x18);
  unaff_x24 = *(long **)(*(long *)(param_3 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if (plVar5 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (lVar14 != 0) {
      param_4 = *(undefined8 **)(*(long *)(param_3 + 0x30) + 0x18);
      (*(code *)*param_4)(lVar14,uVar7);
      lVar14 = *(long *)(auVar16._0_8_ + 0x10);
      lVar2 = lVar6;
      if (lVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar13 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 0x20))
                                    (lVar14,plVar13);
        return plVar13;
      }
    }
  }
code_r0x01a3f500:
  func_0x00f78af4();
  puStack_b8 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar6 = 0x3eb6000;
  lVar14 = lVar2;
  puVar4 = param_4;
  lVar15 = param_5;
  ppuStack_c0 = &puStack_70;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_148,param_4,uRam0000000003d3a7d0);
  uStack_128 = uStack_140;
  lStack_130 = lStack_148;
  puStack_120 = puStack_138;
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_130,uRam0000000003d325c8), puVar9 = puStack_120,
        (uVar3 & 1) != 0) {
    lVar6 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    if (puVar9 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar8 = func_0x00f78adc(puVar9,lVar6);
    if (lVar8 == 0) {
      func_0x00f78e5c(puVar9,lVar6);
      goto code_r0x01a3f6f0;
    }
    param_4 = puVar9;
    if ((*(long *)(lVar8 + 0x28) == extraout_x1) && (*(char *)(lVar8 + 0x18) != '\0')) {
      if (lVar2 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar14 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar2);
    }
  }
  param_5 = 0;
  do {
    lStack_148 = *unaff_x25;
    uVar3 = (ulong)*(ushort *)(lStack_148 + 0x12a);
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(lStack_148 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x24) {
          puVar9 = (undefined8 *)(lStack_148 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar12 = piVar12 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    lVar14 = 0;
    puVar9 = (undefined8 *)func_0x00fac1f0(&lStack_148);
code_r0x01a3f69c:
    plVar13 = (long *)(*(code *)*puVar9)(&uStack_140,puVar9[1]);
    if (param_5 == 0) {
      return plVar13;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1_00 != 1) break;
    plVar13 = (long *)___cxa_begin_catch();
    param_5 = *plVar13;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar10 = auVar16._0_8_;
  puStack_158 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar8 = lVar14;
  puVar9 = puVar4;
  puStack_180 = param_4;
  lStack_178 = extraout_x1;
  lStack_170 = lVar2;
  lStack_168 = param_5;
  ppuStack_160 = &ppuStack_c0;
  if ((*(long *)(lVar10 + 0x20) != 0) &&
     (lVar11 = (*(code *)**(undefined8 **)puVar4[6])(), param_5 = lVar14, lVar2 = auVar16._8_8_,
     param_4 = puVar4, lVar11 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar13 = (long *)(*(code *)**(undefined8 **)(puVar4[6] + 8))
                                (lVar10,auVar16._8_8_,lVar14,*(undefined8 *)(lVar11 + 0x10));
    return plVar13;
  }
  auVar16 = func_0x00f78af4();
  lVar11 = auVar16._8_8_;
  puStack_188 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar13 = (long *)0x3eb6000;
  lVar14 = lVar8;
  plStack_1c0 = unaff_x24;
  lStack_1b8 = lVar6;
  puStack_1b0 = param_4;
  lStack_1a8 = lVar10;
  lStack_1a0 = lVar2;
  lStack_198 = param_5;
  ppuStack_190 = &ppuStack_160;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar16._0_8_ + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(lVar15 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar13 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))(&lStack_1f8);
  uStack_1d8 = uStack_1f0;
  lStack_1e0 = lStack_1f8;
  uStack_1d0 = uStack_1e8;
  do {
    uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_1e0,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x30));
    if ((uVar3 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
      do {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x30) + 0x38);
        if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        uVar3 = (ulong)*(ushort *)(lVar15 + 0x12a);
        lStack_1f8 = lVar15;
        if (uVar3 != 0) {
          piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *plVar13) {
              puVar4 = (undefined8 *)(lVar15 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar12 = piVar12 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        lVar14 = 0;
        puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_1f8);
code_r0x01a3f920:
        plVar5 = (long *)(*(code *)*puVar4)(&uStack_1f0,puVar4[1]);
        if (puVar9 == (undefined8 *)0x0) {
          return plVar5;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar9,0);
        if (extraout_w1_01 != 1) {
          auVar16 = __Unwind_Resume();
          lVar2 = auVar16._0_8_;
          plVar13 = (long *)(**(code **)**(undefined8 **)(lVar14 + 0x30))();
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x1e8))
                      (plVar13,lVar2,auVar16._8_8_,*(undefined8 *)(lVar2 + 0x38),
                       *(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(*plVar13 + 0x1f0),param_7,
                       param_8,lVar11,lVar8,puVar9,lVar15);
            return plVar13;
          }
          puVar4 = (undefined8 *)func_0x00f78af4();
          plVar13 = (long *)*puVar4;
          func_0x00f78a30();
          return plVar13;
        }
        puVar9 = (undefined8 *)___cxa_begin_catch();
        puVar9 = (undefined8 *)*puVar9;
        ___cxa_end_catch();
      } while( true );
    }
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_1e0,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x20));
    if (lVar8 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar8,0);
    if (lVar2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar2 + 0x48) = puVar9;
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar14 = *(long *)(lVar11 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar2,lVar8,lVar14,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f210 | Atlas.Gameplay.Usables.UsableManager.DeInitLightMembers<ProximityHomingProjectileBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                 (long param_1,long param_2,long param_3,undefined8 *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  long extraout_x1;
  int *piVar12;
  long *plVar13;
  long lVar14;
  long *unaff_x24;
  long lVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  long alStack_58 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar13 = (long *)0x3eb6000;
  if ((bRam0000000003eb6a8b & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8b = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if ((((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(param_2 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f394;
  }
  plVar13 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 0x18))(&uStack_48);
  while (uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&uStack_48,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x30)),
        (uVar3 & 1) != 0) {
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&uStack_48,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x20));
    if (lVar2 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f390);
      (*pcVar1)();
    }
    /*Atlas.Lighting.LightWorldMemberBehaviour$$ReleaseDuplicatedMaterials*/ func_0x014869dc(lVar2,0);
    *(undefined8 *)(lVar2 + 0x48) = 0;
  }
  param_1 = 0;
  do {
    param_2 = *(long *)(*(long *)(param_2 + 0x30) + 0x38);
    if ((*(ushort *)(param_2 + 0x132) & 1) == 0) {
      func_0x00fac028(param_2);
    }
    uVar3 = (ulong)*(ushort *)(param_2 + 0x12a);
    alStack_58[0] = param_2;
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(param_2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *plVar13) {
          puVar4 = (undefined8 *)(param_2 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01a3f35c;
        }
        piVar12 = piVar12 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_3 = 0;
    puVar4 = (undefined8 *)func_0x00fac1f0(alStack_58);
code_r0x01a3f35c:
    plVar5 = (long *)(*(code *)*puVar4)(alStack_58,puVar4[1]);
    if (param_1 == 0) {
      return plVar5;
    }
code_r0x01a3f394:
    func_0x00f78ac0(param_1,0);
    if (extraout_w1 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    param_1 = *plVar5;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  plVar13 = auVar16._8_8_;
  puStack_68 = &
               Atlas_Gameplay_Usables_UsableManager__DeSpawnAndTearDownUsable_SuperShieldUsable__SuperShieldUsableBehaviour_
  ;
  lVar2 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (plVar13 == (long *)0x0) goto code_r0x01a3f500;
  lVar14 = plVar13[9];
  lVar15 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  if (lVar14 == 0) {
code_r0x01a3f450:
    lVar6 = 0;
  }
  else {
    lVar6 = func_0x00f78adc(lVar14,lVar15);
    if (lVar6 == 0) {
      func_0x00f78e5c(lVar14,lVar15);
      goto code_r0x01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*plVar13 + 0x218))(plVar13,*(undefined8 *)(*plVar13 + 0x220));
  lVar14 = *(long *)(auVar16._0_8_ + 0x18);
  unaff_x24 = *(long **)(*(long *)(param_3 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if (plVar5 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (lVar14 != 0) {
      param_4 = *(undefined8 **)(*(long *)(param_3 + 0x30) + 0x18);
      (*(code *)*param_4)(lVar14,uVar7);
      lVar14 = *(long *)(auVar16._0_8_ + 0x10);
      lVar2 = lVar6;
      if (lVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar13 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 0x20))
                                    (lVar14,plVar13);
        return plVar13;
      }
    }
  }
code_r0x01a3f500:
  func_0x00f78af4();
  puStack_b8 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar6 = 0x3eb6000;
  lVar14 = lVar2;
  puVar4 = param_4;
  lVar15 = param_5;
  ppuStack_c0 = &puStack_70;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_148,param_4,uRam0000000003d3a7d0);
  uStack_128 = uStack_140;
  lStack_130 = lStack_148;
  puStack_120 = puStack_138;
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_130,uRam0000000003d325c8), puVar9 = puStack_120,
        (uVar3 & 1) != 0) {
    lVar6 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    if (puVar9 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar8 = func_0x00f78adc(puVar9,lVar6);
    if (lVar8 == 0) {
      func_0x00f78e5c(puVar9,lVar6);
      goto code_r0x01a3f6f0;
    }
    param_4 = puVar9;
    if ((*(long *)(lVar8 + 0x28) == extraout_x1) && (*(char *)(lVar8 + 0x18) != '\0')) {
      if (lVar2 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar14 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar2);
    }
  }
  param_5 = 0;
  do {
    lStack_148 = *unaff_x25;
    uVar3 = (ulong)*(ushort *)(lStack_148 + 0x12a);
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(lStack_148 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x24) {
          puVar9 = (undefined8 *)(lStack_148 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar12 = piVar12 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    lVar14 = 0;
    puVar9 = (undefined8 *)func_0x00fac1f0(&lStack_148);
code_r0x01a3f69c:
    plVar13 = (long *)(*(code *)*puVar9)(&uStack_140,puVar9[1]);
    if (param_5 == 0) {
      return plVar13;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1_00 != 1) break;
    plVar13 = (long *)___cxa_begin_catch();
    param_5 = *plVar13;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar10 = auVar16._0_8_;
  puStack_158 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar8 = lVar14;
  puVar9 = puVar4;
  puStack_180 = param_4;
  lStack_178 = extraout_x1;
  lStack_170 = lVar2;
  lStack_168 = param_5;
  ppuStack_160 = &ppuStack_c0;
  if ((*(long *)(lVar10 + 0x20) != 0) &&
     (lVar11 = (*(code *)**(undefined8 **)puVar4[6])(), param_5 = lVar14, lVar2 = auVar16._8_8_,
     param_4 = puVar4, lVar11 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar13 = (long *)(*(code *)**(undefined8 **)(puVar4[6] + 8))
                                (lVar10,auVar16._8_8_,lVar14,*(undefined8 *)(lVar11 + 0x10));
    return plVar13;
  }
  auVar16 = func_0x00f78af4();
  lVar11 = auVar16._8_8_;
  puStack_188 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar13 = (long *)0x3eb6000;
  lVar14 = lVar8;
  plStack_1c0 = unaff_x24;
  lStack_1b8 = lVar6;
  puStack_1b0 = param_4;
  lStack_1a8 = lVar10;
  lStack_1a0 = lVar2;
  lStack_198 = param_5;
  ppuStack_190 = &ppuStack_160;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar16._0_8_ + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(lVar15 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar13 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))(&lStack_1f8);
  uStack_1d8 = uStack_1f0;
  lStack_1e0 = lStack_1f8;
  uStack_1d0 = uStack_1e8;
  do {
    uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_1e0,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x30));
    if ((uVar3 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
      do {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x30) + 0x38);
        if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        uVar3 = (ulong)*(ushort *)(lVar15 + 0x12a);
        lStack_1f8 = lVar15;
        if (uVar3 != 0) {
          piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *plVar13) {
              puVar4 = (undefined8 *)(lVar15 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar12 = piVar12 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        lVar14 = 0;
        puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_1f8);
code_r0x01a3f920:
        plVar5 = (long *)(*(code *)*puVar4)(&uStack_1f0,puVar4[1]);
        if (puVar9 == (undefined8 *)0x0) {
          return plVar5;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar9,0);
        if (extraout_w1_01 != 1) {
          auVar16 = __Unwind_Resume();
          lVar2 = auVar16._0_8_;
          plVar13 = (long *)(**(code **)**(undefined8 **)(lVar14 + 0x30))();
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x1e8))
                      (plVar13,lVar2,auVar16._8_8_,*(undefined8 *)(lVar2 + 0x38),
                       *(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(*plVar13 + 0x1f0),param_7,
                       param_8,lVar11,lVar8,puVar9,lVar15);
            return plVar13;
          }
          puVar4 = (undefined8 *)func_0x00f78af4();
          plVar13 = (long *)*puVar4;
          func_0x00f78a30();
          return plVar13;
        }
        puVar9 = (undefined8 *)___cxa_begin_catch();
        puVar9 = (undefined8 *)*puVar9;
        ___cxa_end_catch();
      } while( true );
    }
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_1e0,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x20));
    if (lVar8 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar8,0);
    if (lVar2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar2 + 0x48) = puVar9;
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar14 = *(long *)(lVar11 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar2,lVar8,lVar14,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f210 | Atlas.Gameplay.Usables.UsableManager.DeInitLightMembers<RicochetProjectileBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                 (long param_1,long param_2,long param_3,undefined8 *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  long extraout_x1;
  int *piVar12;
  long *plVar13;
  long lVar14;
  long *unaff_x24;
  long lVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  long alStack_58 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar13 = (long *)0x3eb6000;
  if ((bRam0000000003eb6a8b & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8b = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if ((((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(param_2 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f394;
  }
  plVar13 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 0x18))(&uStack_48);
  while (uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&uStack_48,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x30)),
        (uVar3 & 1) != 0) {
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&uStack_48,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x20));
    if (lVar2 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f390);
      (*pcVar1)();
    }
    /*Atlas.Lighting.LightWorldMemberBehaviour$$ReleaseDuplicatedMaterials*/ func_0x014869dc(lVar2,0);
    *(undefined8 *)(lVar2 + 0x48) = 0;
  }
  param_1 = 0;
  do {
    param_2 = *(long *)(*(long *)(param_2 + 0x30) + 0x38);
    if ((*(ushort *)(param_2 + 0x132) & 1) == 0) {
      func_0x00fac028(param_2);
    }
    uVar3 = (ulong)*(ushort *)(param_2 + 0x12a);
    alStack_58[0] = param_2;
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(param_2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *plVar13) {
          puVar4 = (undefined8 *)(param_2 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01a3f35c;
        }
        piVar12 = piVar12 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_3 = 0;
    puVar4 = (undefined8 *)func_0x00fac1f0(alStack_58);
code_r0x01a3f35c:
    plVar5 = (long *)(*(code *)*puVar4)(alStack_58,puVar4[1]);
    if (param_1 == 0) {
      return plVar5;
    }
code_r0x01a3f394:
    func_0x00f78ac0(param_1,0);
    if (extraout_w1 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    param_1 = *plVar5;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  plVar13 = auVar16._8_8_;
  puStack_68 = &
               Atlas_Gameplay_Usables_UsableManager__DeSpawnAndTearDownUsable_SuperShieldUsable__SuperShieldUsableBehaviour_
  ;
  lVar2 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (plVar13 == (long *)0x0) goto code_r0x01a3f500;
  lVar14 = plVar13[9];
  lVar15 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  if (lVar14 == 0) {
code_r0x01a3f450:
    lVar6 = 0;
  }
  else {
    lVar6 = func_0x00f78adc(lVar14,lVar15);
    if (lVar6 == 0) {
      func_0x00f78e5c(lVar14,lVar15);
      goto code_r0x01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*plVar13 + 0x218))(plVar13,*(undefined8 *)(*plVar13 + 0x220));
  lVar14 = *(long *)(auVar16._0_8_ + 0x18);
  unaff_x24 = *(long **)(*(long *)(param_3 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if (plVar5 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (lVar14 != 0) {
      param_4 = *(undefined8 **)(*(long *)(param_3 + 0x30) + 0x18);
      (*(code *)*param_4)(lVar14,uVar7);
      lVar14 = *(long *)(auVar16._0_8_ + 0x10);
      lVar2 = lVar6;
      if (lVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar13 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 0x20))
                                    (lVar14,plVar13);
        return plVar13;
      }
    }
  }
code_r0x01a3f500:
  func_0x00f78af4();
  puStack_b8 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar6 = 0x3eb6000;
  lVar14 = lVar2;
  puVar4 = param_4;
  lVar15 = param_5;
  ppuStack_c0 = &puStack_70;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_148,param_4,uRam0000000003d3a7d0);
  uStack_128 = uStack_140;
  lStack_130 = lStack_148;
  puStack_120 = puStack_138;
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_130,uRam0000000003d325c8), puVar9 = puStack_120,
        (uVar3 & 1) != 0) {
    lVar6 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    if (puVar9 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar8 = func_0x00f78adc(puVar9,lVar6);
    if (lVar8 == 0) {
      func_0x00f78e5c(puVar9,lVar6);
      goto code_r0x01a3f6f0;
    }
    param_4 = puVar9;
    if ((*(long *)(lVar8 + 0x28) == extraout_x1) && (*(char *)(lVar8 + 0x18) != '\0')) {
      if (lVar2 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar14 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar2);
    }
  }
  param_5 = 0;
  do {
    lStack_148 = *unaff_x25;
    uVar3 = (ulong)*(ushort *)(lStack_148 + 0x12a);
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(lStack_148 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x24) {
          puVar9 = (undefined8 *)(lStack_148 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar12 = piVar12 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    lVar14 = 0;
    puVar9 = (undefined8 *)func_0x00fac1f0(&lStack_148);
code_r0x01a3f69c:
    plVar13 = (long *)(*(code *)*puVar9)(&uStack_140,puVar9[1]);
    if (param_5 == 0) {
      return plVar13;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1_00 != 1) break;
    plVar13 = (long *)___cxa_begin_catch();
    param_5 = *plVar13;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar10 = auVar16._0_8_;
  puStack_158 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar8 = lVar14;
  puVar9 = puVar4;
  puStack_180 = param_4;
  lStack_178 = extraout_x1;
  lStack_170 = lVar2;
  lStack_168 = param_5;
  ppuStack_160 = &ppuStack_c0;
  if ((*(long *)(lVar10 + 0x20) != 0) &&
     (lVar11 = (*(code *)**(undefined8 **)puVar4[6])(), param_5 = lVar14, lVar2 = auVar16._8_8_,
     param_4 = puVar4, lVar11 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar13 = (long *)(*(code *)**(undefined8 **)(puVar4[6] + 8))
                                (lVar10,auVar16._8_8_,lVar14,*(undefined8 *)(lVar11 + 0x10));
    return plVar13;
  }
  auVar16 = func_0x00f78af4();
  lVar11 = auVar16._8_8_;
  puStack_188 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar13 = (long *)0x3eb6000;
  lVar14 = lVar8;
  plStack_1c0 = unaff_x24;
  lStack_1b8 = lVar6;
  puStack_1b0 = param_4;
  lStack_1a8 = lVar10;
  lStack_1a0 = lVar2;
  lStack_198 = param_5;
  ppuStack_190 = &ppuStack_160;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar16._0_8_ + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(lVar15 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar13 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))(&lStack_1f8);
  uStack_1d8 = uStack_1f0;
  lStack_1e0 = lStack_1f8;
  uStack_1d0 = uStack_1e8;
  do {
    uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_1e0,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x30));
    if ((uVar3 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
      do {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x30) + 0x38);
        if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        uVar3 = (ulong)*(ushort *)(lVar15 + 0x12a);
        lStack_1f8 = lVar15;
        if (uVar3 != 0) {
          piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *plVar13) {
              puVar4 = (undefined8 *)(lVar15 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar12 = piVar12 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        lVar14 = 0;
        puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_1f8);
code_r0x01a3f920:
        plVar5 = (long *)(*(code *)*puVar4)(&uStack_1f0,puVar4[1]);
        if (puVar9 == (undefined8 *)0x0) {
          return plVar5;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar9,0);
        if (extraout_w1_01 != 1) {
          auVar16 = __Unwind_Resume();
          lVar2 = auVar16._0_8_;
          plVar13 = (long *)(**(code **)**(undefined8 **)(lVar14 + 0x30))();
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x1e8))
                      (plVar13,lVar2,auVar16._8_8_,*(undefined8 *)(lVar2 + 0x38),
                       *(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(*plVar13 + 0x1f0),param_7,
                       param_8,lVar11,lVar8,puVar9,lVar15);
            return plVar13;
          }
          puVar4 = (undefined8 *)func_0x00f78af4();
          plVar13 = (long *)*puVar4;
          func_0x00f78a30();
          return plVar13;
        }
        puVar9 = (undefined8 *)___cxa_begin_catch();
        puVar9 = (undefined8 *)*puVar9;
        ___cxa_end_catch();
      } while( true );
    }
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_1e0,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x20));
    if (lVar8 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar8,0);
    if (lVar2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar2 + 0x48) = puVar9;
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar14 = *(long *)(lVar11 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar2,lVar8,lVar14,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f210 | Atlas.Gameplay.Usables.UsableManager.DeInitLightMembers<SatelliteUsableBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                 (long param_1,long param_2,long param_3,undefined8 *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  long extraout_x1;
  int *piVar12;
  long *plVar13;
  long lVar14;
  long *unaff_x24;
  long lVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  long alStack_58 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar13 = (long *)0x3eb6000;
  if ((bRam0000000003eb6a8b & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8b = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if ((((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(param_2 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f394;
  }
  plVar13 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 0x18))(&uStack_48);
  while (uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&uStack_48,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x30)),
        (uVar3 & 1) != 0) {
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&uStack_48,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x20));
    if (lVar2 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f390);
      (*pcVar1)();
    }
    /*Atlas.Lighting.LightWorldMemberBehaviour$$ReleaseDuplicatedMaterials*/ func_0x014869dc(lVar2,0);
    *(undefined8 *)(lVar2 + 0x48) = 0;
  }
  param_1 = 0;
  do {
    param_2 = *(long *)(*(long *)(param_2 + 0x30) + 0x38);
    if ((*(ushort *)(param_2 + 0x132) & 1) == 0) {
      func_0x00fac028(param_2);
    }
    uVar3 = (ulong)*(ushort *)(param_2 + 0x12a);
    alStack_58[0] = param_2;
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(param_2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *plVar13) {
          puVar4 = (undefined8 *)(param_2 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01a3f35c;
        }
        piVar12 = piVar12 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_3 = 0;
    puVar4 = (undefined8 *)func_0x00fac1f0(alStack_58);
code_r0x01a3f35c:
    plVar5 = (long *)(*(code *)*puVar4)(alStack_58,puVar4[1]);
    if (param_1 == 0) {
      return plVar5;
    }
code_r0x01a3f394:
    func_0x00f78ac0(param_1,0);
    if (extraout_w1 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    param_1 = *plVar5;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  plVar13 = auVar16._8_8_;
  puStack_68 = &
               Atlas_Gameplay_Usables_UsableManager__DeSpawnAndTearDownUsable_SuperShieldUsable__SuperShieldUsableBehaviour_
  ;
  lVar2 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (plVar13 == (long *)0x0) goto code_r0x01a3f500;
  lVar14 = plVar13[9];
  lVar15 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  if (lVar14 == 0) {
code_r0x01a3f450:
    lVar6 = 0;
  }
  else {
    lVar6 = func_0x00f78adc(lVar14,lVar15);
    if (lVar6 == 0) {
      func_0x00f78e5c(lVar14,lVar15);
      goto code_r0x01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*plVar13 + 0x218))(plVar13,*(undefined8 *)(*plVar13 + 0x220));
  lVar14 = *(long *)(auVar16._0_8_ + 0x18);
  unaff_x24 = *(long **)(*(long *)(param_3 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if (plVar5 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (lVar14 != 0) {
      param_4 = *(undefined8 **)(*(long *)(param_3 + 0x30) + 0x18);
      (*(code *)*param_4)(lVar14,uVar7);
      lVar14 = *(long *)(auVar16._0_8_ + 0x10);
      lVar2 = lVar6;
      if (lVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar13 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 0x20))
                                    (lVar14,plVar13);
        return plVar13;
      }
    }
  }
code_r0x01a3f500:
  func_0x00f78af4();
  puStack_b8 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar6 = 0x3eb6000;
  lVar14 = lVar2;
  puVar4 = param_4;
  lVar15 = param_5;
  ppuStack_c0 = &puStack_70;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_148,param_4,uRam0000000003d3a7d0);
  uStack_128 = uStack_140;
  lStack_130 = lStack_148;
  puStack_120 = puStack_138;
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_130,uRam0000000003d325c8), puVar9 = puStack_120,
        (uVar3 & 1) != 0) {
    lVar6 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    if (puVar9 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar8 = func_0x00f78adc(puVar9,lVar6);
    if (lVar8 == 0) {
      func_0x00f78e5c(puVar9,lVar6);
      goto code_r0x01a3f6f0;
    }
    param_4 = puVar9;
    if ((*(long *)(lVar8 + 0x28) == extraout_x1) && (*(char *)(lVar8 + 0x18) != '\0')) {
      if (lVar2 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar14 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar2);
    }
  }
  param_5 = 0;
  do {
    lStack_148 = *unaff_x25;
    uVar3 = (ulong)*(ushort *)(lStack_148 + 0x12a);
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(lStack_148 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x24) {
          puVar9 = (undefined8 *)(lStack_148 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar12 = piVar12 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    lVar14 = 0;
    puVar9 = (undefined8 *)func_0x00fac1f0(&lStack_148);
code_r0x01a3f69c:
    plVar13 = (long *)(*(code *)*puVar9)(&uStack_140,puVar9[1]);
    if (param_5 == 0) {
      return plVar13;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1_00 != 1) break;
    plVar13 = (long *)___cxa_begin_catch();
    param_5 = *plVar13;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar10 = auVar16._0_8_;
  puStack_158 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar8 = lVar14;
  puVar9 = puVar4;
  puStack_180 = param_4;
  lStack_178 = extraout_x1;
  lStack_170 = lVar2;
  lStack_168 = param_5;
  ppuStack_160 = &ppuStack_c0;
  if ((*(long *)(lVar10 + 0x20) != 0) &&
     (lVar11 = (*(code *)**(undefined8 **)puVar4[6])(), param_5 = lVar14, lVar2 = auVar16._8_8_,
     param_4 = puVar4, lVar11 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar13 = (long *)(*(code *)**(undefined8 **)(puVar4[6] + 8))
                                (lVar10,auVar16._8_8_,lVar14,*(undefined8 *)(lVar11 + 0x10));
    return plVar13;
  }
  auVar16 = func_0x00f78af4();
  lVar11 = auVar16._8_8_;
  puStack_188 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar13 = (long *)0x3eb6000;
  lVar14 = lVar8;
  plStack_1c0 = unaff_x24;
  lStack_1b8 = lVar6;
  puStack_1b0 = param_4;
  lStack_1a8 = lVar10;
  lStack_1a0 = lVar2;
  lStack_198 = param_5;
  ppuStack_190 = &ppuStack_160;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar16._0_8_ + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(lVar15 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar13 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))(&lStack_1f8);
  uStack_1d8 = uStack_1f0;
  lStack_1e0 = lStack_1f8;
  uStack_1d0 = uStack_1e8;
  do {
    uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_1e0,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x30));
    if ((uVar3 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
      do {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x30) + 0x38);
        if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        uVar3 = (ulong)*(ushort *)(lVar15 + 0x12a);
        lStack_1f8 = lVar15;
        if (uVar3 != 0) {
          piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *plVar13) {
              puVar4 = (undefined8 *)(lVar15 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar12 = piVar12 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        lVar14 = 0;
        puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_1f8);
code_r0x01a3f920:
        plVar5 = (long *)(*(code *)*puVar4)(&uStack_1f0,puVar4[1]);
        if (puVar9 == (undefined8 *)0x0) {
          return plVar5;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar9,0);
        if (extraout_w1_01 != 1) {
          auVar16 = __Unwind_Resume();
          lVar2 = auVar16._0_8_;
          plVar13 = (long *)(**(code **)**(undefined8 **)(lVar14 + 0x30))();
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x1e8))
                      (plVar13,lVar2,auVar16._8_8_,*(undefined8 *)(lVar2 + 0x38),
                       *(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(*plVar13 + 0x1f0),param_7,
                       param_8,lVar11,lVar8,puVar9,lVar15);
            return plVar13;
          }
          puVar4 = (undefined8 *)func_0x00f78af4();
          plVar13 = (long *)*puVar4;
          func_0x00f78a30();
          return plVar13;
        }
        puVar9 = (undefined8 *)___cxa_begin_catch();
        puVar9 = (undefined8 *)*puVar9;
        ___cxa_end_catch();
      } while( true );
    }
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_1e0,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x20));
    if (lVar8 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar8,0);
    if (lVar2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar2 + 0x48) = puVar9;
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar14 = *(long *)(lVar11 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar2,lVar8,lVar14,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f210 | Atlas.Gameplay.Usables.UsableManager.DeInitLightMembers<SuperShieldUsableBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                 (long param_1,long param_2,long param_3,undefined8 *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  long extraout_x1;
  int *piVar12;
  long *plVar13;
  long lVar14;
  long *unaff_x24;
  long lVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  long alStack_58 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar13 = (long *)0x3eb6000;
  if ((bRam0000000003eb6a8b & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8b = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if ((((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(param_2 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f394;
  }
  plVar13 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 0x18))(&uStack_48);
  while (uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&uStack_48,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x30)),
        (uVar3 & 1) != 0) {
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&uStack_48,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x20));
    if (lVar2 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f390);
      (*pcVar1)();
    }
    /*Atlas.Lighting.LightWorldMemberBehaviour$$ReleaseDuplicatedMaterials*/ func_0x014869dc(lVar2,0);
    *(undefined8 *)(lVar2 + 0x48) = 0;
  }
  param_1 = 0;
  do {
    param_2 = *(long *)(*(long *)(param_2 + 0x30) + 0x38);
    if ((*(ushort *)(param_2 + 0x132) & 1) == 0) {
      func_0x00fac028(param_2);
    }
    uVar3 = (ulong)*(ushort *)(param_2 + 0x12a);
    alStack_58[0] = param_2;
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(param_2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *plVar13) {
          puVar4 = (undefined8 *)(param_2 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01a3f35c;
        }
        piVar12 = piVar12 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_3 = 0;
    puVar4 = (undefined8 *)func_0x00fac1f0(alStack_58);
code_r0x01a3f35c:
    plVar5 = (long *)(*(code *)*puVar4)(alStack_58,puVar4[1]);
    if (param_1 == 0) {
      return plVar5;
    }
code_r0x01a3f394:
    func_0x00f78ac0(param_1,0);
    if (extraout_w1 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    param_1 = *plVar5;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  plVar13 = auVar16._8_8_;
  puStack_68 = &
               Atlas_Gameplay_Usables_UsableManager__DeSpawnAndTearDownUsable_SuperShieldUsable__SuperShieldUsableBehaviour_
  ;
  lVar2 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (plVar13 == (long *)0x0) goto code_r0x01a3f500;
  lVar14 = plVar13[9];
  lVar15 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  if (lVar14 == 0) {
code_r0x01a3f450:
    lVar6 = 0;
  }
  else {
    lVar6 = func_0x00f78adc(lVar14,lVar15);
    if (lVar6 == 0) {
      func_0x00f78e5c(lVar14,lVar15);
      goto code_r0x01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*plVar13 + 0x218))(plVar13,*(undefined8 *)(*plVar13 + 0x220));
  lVar14 = *(long *)(auVar16._0_8_ + 0x18);
  unaff_x24 = *(long **)(*(long *)(param_3 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if (plVar5 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (lVar14 != 0) {
      param_4 = *(undefined8 **)(*(long *)(param_3 + 0x30) + 0x18);
      (*(code *)*param_4)(lVar14,uVar7);
      lVar14 = *(long *)(auVar16._0_8_ + 0x10);
      lVar2 = lVar6;
      if (lVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar13 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 0x20))
                                    (lVar14,plVar13);
        return plVar13;
      }
    }
  }
code_r0x01a3f500:
  func_0x00f78af4();
  puStack_b8 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar6 = 0x3eb6000;
  lVar14 = lVar2;
  puVar4 = param_4;
  lVar15 = param_5;
  ppuStack_c0 = &puStack_70;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_148,param_4,uRam0000000003d3a7d0);
  uStack_128 = uStack_140;
  lStack_130 = lStack_148;
  puStack_120 = puStack_138;
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_130,uRam0000000003d325c8), puVar9 = puStack_120,
        (uVar3 & 1) != 0) {
    lVar6 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    if (puVar9 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar8 = func_0x00f78adc(puVar9,lVar6);
    if (lVar8 == 0) {
      func_0x00f78e5c(puVar9,lVar6);
      goto code_r0x01a3f6f0;
    }
    param_4 = puVar9;
    if ((*(long *)(lVar8 + 0x28) == extraout_x1) && (*(char *)(lVar8 + 0x18) != '\0')) {
      if (lVar2 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar14 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar2);
    }
  }
  param_5 = 0;
  do {
    lStack_148 = *unaff_x25;
    uVar3 = (ulong)*(ushort *)(lStack_148 + 0x12a);
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(lStack_148 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x24) {
          puVar9 = (undefined8 *)(lStack_148 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar12 = piVar12 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    lVar14 = 0;
    puVar9 = (undefined8 *)func_0x00fac1f0(&lStack_148);
code_r0x01a3f69c:
    plVar13 = (long *)(*(code *)*puVar9)(&uStack_140,puVar9[1]);
    if (param_5 == 0) {
      return plVar13;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1_00 != 1) break;
    plVar13 = (long *)___cxa_begin_catch();
    param_5 = *plVar13;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar10 = auVar16._0_8_;
  puStack_158 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar8 = lVar14;
  puVar9 = puVar4;
  puStack_180 = param_4;
  lStack_178 = extraout_x1;
  lStack_170 = lVar2;
  lStack_168 = param_5;
  ppuStack_160 = &ppuStack_c0;
  if ((*(long *)(lVar10 + 0x20) != 0) &&
     (lVar11 = (*(code *)**(undefined8 **)puVar4[6])(), param_5 = lVar14, lVar2 = auVar16._8_8_,
     param_4 = puVar4, lVar11 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar13 = (long *)(*(code *)**(undefined8 **)(puVar4[6] + 8))
                                (lVar10,auVar16._8_8_,lVar14,*(undefined8 *)(lVar11 + 0x10));
    return plVar13;
  }
  auVar16 = func_0x00f78af4();
  lVar11 = auVar16._8_8_;
  puStack_188 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar13 = (long *)0x3eb6000;
  lVar14 = lVar8;
  plStack_1c0 = unaff_x24;
  lStack_1b8 = lVar6;
  puStack_1b0 = param_4;
  lStack_1a8 = lVar10;
  lStack_1a0 = lVar2;
  lStack_198 = param_5;
  ppuStack_190 = &ppuStack_160;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar16._0_8_ + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(lVar15 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar13 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))(&lStack_1f8);
  uStack_1d8 = uStack_1f0;
  lStack_1e0 = lStack_1f8;
  uStack_1d0 = uStack_1e8;
  do {
    uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_1e0,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x30));
    if ((uVar3 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
      do {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x30) + 0x38);
        if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        uVar3 = (ulong)*(ushort *)(lVar15 + 0x12a);
        lStack_1f8 = lVar15;
        if (uVar3 != 0) {
          piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *plVar13) {
              puVar4 = (undefined8 *)(lVar15 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar12 = piVar12 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        lVar14 = 0;
        puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_1f8);
code_r0x01a3f920:
        plVar5 = (long *)(*(code *)*puVar4)(&uStack_1f0,puVar4[1]);
        if (puVar9 == (undefined8 *)0x0) {
          return plVar5;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar9,0);
        if (extraout_w1_01 != 1) {
          auVar16 = __Unwind_Resume();
          lVar2 = auVar16._0_8_;
          plVar13 = (long *)(**(code **)**(undefined8 **)(lVar14 + 0x30))();
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x1e8))
                      (plVar13,lVar2,auVar16._8_8_,*(undefined8 *)(lVar2 + 0x38),
                       *(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(*plVar13 + 0x1f0),param_7,
                       param_8,lVar11,lVar8,puVar9,lVar15);
            return plVar13;
          }
          puVar4 = (undefined8 *)func_0x00f78af4();
          plVar13 = (long *)*puVar4;
          func_0x00f78a30();
          return plVar13;
        }
        puVar9 = (undefined8 *)___cxa_begin_catch();
        puVar9 = (undefined8 *)*puVar9;
        ___cxa_end_catch();
      } while( true );
    }
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_1e0,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x20));
    if (lVar8 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar8,0);
    if (lVar2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar2 + 0x48) = puVar9;
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar14 = *(long *)(lVar11 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar2,lVar8,lVar14,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f210 | Atlas.Gameplay.Usables.UsableManager.DeInitLightMembers<object>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                 (long param_1,long param_2,long param_3,undefined8 *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  long extraout_x1;
  int *piVar12;
  long *plVar13;
  long lVar14;
  long *unaff_x24;
  long lVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  long alStack_58 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar13 = (long *)0x3eb6000;
  if ((bRam0000000003eb6a8b & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8b = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if ((((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(param_2 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f394;
  }
  plVar13 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 0x18))(&uStack_48);
  while (uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&uStack_48,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x30)),
        (uVar3 & 1) != 0) {
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&uStack_48,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x20));
    if (lVar2 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f390);
      (*pcVar1)();
    }
    /*Atlas.Lighting.LightWorldMemberBehaviour$$ReleaseDuplicatedMaterials*/ func_0x014869dc(lVar2,0);
    *(undefined8 *)(lVar2 + 0x48) = 0;
  }
  param_1 = 0;
  do {
    param_2 = *(long *)(*(long *)(param_2 + 0x30) + 0x38);
    if ((*(ushort *)(param_2 + 0x132) & 1) == 0) {
      func_0x00fac028(param_2);
    }
    uVar3 = (ulong)*(ushort *)(param_2 + 0x12a);
    alStack_58[0] = param_2;
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(param_2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *plVar13) {
          puVar4 = (undefined8 *)(param_2 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01a3f35c;
        }
        piVar12 = piVar12 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_3 = 0;
    puVar4 = (undefined8 *)func_0x00fac1f0(alStack_58);
code_r0x01a3f35c:
    plVar5 = (long *)(*(code *)*puVar4)(alStack_58,puVar4[1]);
    if (param_1 == 0) {
      return plVar5;
    }
code_r0x01a3f394:
    func_0x00f78ac0(param_1,0);
    if (extraout_w1 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    param_1 = *plVar5;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  plVar13 = auVar16._8_8_;
  puStack_68 = &
               Atlas_Gameplay_Usables_UsableManager__DeSpawnAndTearDownUsable_SuperShieldUsable__SuperShieldUsableBehaviour_
  ;
  lVar2 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (plVar13 == (long *)0x0) goto code_r0x01a3f500;
  lVar14 = plVar13[9];
  lVar15 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  if (lVar14 == 0) {
code_r0x01a3f450:
    lVar6 = 0;
  }
  else {
    lVar6 = func_0x00f78adc(lVar14,lVar15);
    if (lVar6 == 0) {
      func_0x00f78e5c(lVar14,lVar15);
      goto code_r0x01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*plVar13 + 0x218))(plVar13,*(undefined8 *)(*plVar13 + 0x220));
  lVar14 = *(long *)(auVar16._0_8_ + 0x18);
  unaff_x24 = *(long **)(*(long *)(param_3 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if (plVar5 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (lVar14 != 0) {
      param_4 = *(undefined8 **)(*(long *)(param_3 + 0x30) + 0x18);
      (*(code *)*param_4)(lVar14,uVar7);
      lVar14 = *(long *)(auVar16._0_8_ + 0x10);
      lVar2 = lVar6;
      if (lVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar13 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 0x20))
                                    (lVar14,plVar13);
        return plVar13;
      }
    }
  }
code_r0x01a3f500:
  func_0x00f78af4();
  puStack_b8 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar6 = 0x3eb6000;
  lVar14 = lVar2;
  puVar4 = param_4;
  lVar15 = param_5;
  ppuStack_c0 = &puStack_70;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_148,param_4,uRam0000000003d3a7d0);
  uStack_128 = uStack_140;
  lStack_130 = lStack_148;
  puStack_120 = puStack_138;
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_130,uRam0000000003d325c8), puVar9 = puStack_120,
        (uVar3 & 1) != 0) {
    lVar6 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    if (puVar9 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar8 = func_0x00f78adc(puVar9,lVar6);
    if (lVar8 == 0) {
      func_0x00f78e5c(puVar9,lVar6);
      goto code_r0x01a3f6f0;
    }
    param_4 = puVar9;
    if ((*(long *)(lVar8 + 0x28) == extraout_x1) && (*(char *)(lVar8 + 0x18) != '\0')) {
      if (lVar2 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar14 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar2);
    }
  }
  param_5 = 0;
  do {
    lStack_148 = *unaff_x25;
    uVar3 = (ulong)*(ushort *)(lStack_148 + 0x12a);
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(lStack_148 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x24) {
          puVar9 = (undefined8 *)(lStack_148 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar12 = piVar12 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    lVar14 = 0;
    puVar9 = (undefined8 *)func_0x00fac1f0(&lStack_148);
code_r0x01a3f69c:
    plVar13 = (long *)(*(code *)*puVar9)(&uStack_140,puVar9[1]);
    if (param_5 == 0) {
      return plVar13;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1_00 != 1) break;
    plVar13 = (long *)___cxa_begin_catch();
    param_5 = *plVar13;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar10 = auVar16._0_8_;
  puStack_158 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar8 = lVar14;
  puVar9 = puVar4;
  puStack_180 = param_4;
  lStack_178 = extraout_x1;
  lStack_170 = lVar2;
  lStack_168 = param_5;
  ppuStack_160 = &ppuStack_c0;
  if ((*(long *)(lVar10 + 0x20) != 0) &&
     (lVar11 = (*(code *)**(undefined8 **)puVar4[6])(), param_5 = lVar14, lVar2 = auVar16._8_8_,
     param_4 = puVar4, lVar11 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar13 = (long *)(*(code *)**(undefined8 **)(puVar4[6] + 8))
                                (lVar10,auVar16._8_8_,lVar14,*(undefined8 *)(lVar11 + 0x10));
    return plVar13;
  }
  auVar16 = func_0x00f78af4();
  lVar11 = auVar16._8_8_;
  puStack_188 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar13 = (long *)0x3eb6000;
  lVar14 = lVar8;
  plStack_1c0 = unaff_x24;
  lStack_1b8 = lVar6;
  puStack_1b0 = param_4;
  lStack_1a8 = lVar10;
  lStack_1a0 = lVar2;
  lStack_198 = param_5;
  ppuStack_190 = &ppuStack_160;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar16._0_8_ + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(lVar15 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar13 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))(&lStack_1f8);
  uStack_1d8 = uStack_1f0;
  lStack_1e0 = lStack_1f8;
  uStack_1d0 = uStack_1e8;
  do {
    uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_1e0,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x30));
    if ((uVar3 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
      do {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x30) + 0x38);
        if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        uVar3 = (ulong)*(ushort *)(lVar15 + 0x12a);
        lStack_1f8 = lVar15;
        if (uVar3 != 0) {
          piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *plVar13) {
              puVar4 = (undefined8 *)(lVar15 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar12 = piVar12 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        lVar14 = 0;
        puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_1f8);
code_r0x01a3f920:
        plVar5 = (long *)(*(code *)*puVar4)(&uStack_1f0,puVar4[1]);
        if (puVar9 == (undefined8 *)0x0) {
          return plVar5;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar9,0);
        if (extraout_w1_01 != 1) {
          auVar16 = __Unwind_Resume();
          lVar2 = auVar16._0_8_;
          plVar13 = (long *)(**(code **)**(undefined8 **)(lVar14 + 0x30))();
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x1e8))
                      (plVar13,lVar2,auVar16._8_8_,*(undefined8 *)(lVar2 + 0x38),
                       *(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(*plVar13 + 0x1f0),param_7,
                       param_8,lVar11,lVar8,puVar9,lVar15);
            return plVar13;
          }
          puVar4 = (undefined8 *)func_0x00f78af4();
          plVar13 = (long *)*puVar4;
          func_0x00f78a30();
          return plVar13;
        }
        puVar9 = (undefined8 *)___cxa_begin_catch();
        puVar9 = (undefined8 *)*puVar9;
        ___cxa_end_catch();
      } while( true );
    }
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_1e0,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x20));
    if (lVar8 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar8,0);
    if (lVar2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar2 + 0x48) = puVar9;
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar14 = *(long *)(lVar11 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar2,lVar8,lVar14,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f3c8 | Atlas.Gameplay.Usables.UsableManager.DeSpawnAndTearDownUsable<BoostUsable, BoostUsableBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__DeSpawnAndTearDownUsable_BoostUsable__BoostUsableBehaviour_
                 (long param_1,long *param_2,long param_3,undefined8 *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  int *piVar13;
  long lVar14;
  long *unaff_x24;
  long lVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  lVar10 = param_3;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_01a3f500;
  lVar14 = param_2[9];
  lVar15 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  if (lVar14 == 0) {
LAB_01a3f450:
    lVar2 = 0;
  }
  else {
    lVar2 = func_0x00f78adc(lVar14,lVar15);
    if (lVar2 == 0) {
      func_0x00f78e5c(lVar14,lVar15);
      goto LAB_01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
  lVar14 = *(long *)(param_1 + 0x18);
  unaff_x24 = *(long **)(*(long *)(param_3 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (lVar14 != 0) {
      param_4 = *(undefined8 **)(*(long *)(param_3 + 0x30) + 0x18);
      (*(code *)*param_4)(lVar14,uVar4);
      lVar10 = lVar2;
      if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 0x20))
                                   (*(long *)(param_1 + 0x10),param_2);
        return plVar3;
      }
    }
  }
LAB_01a3f500:
  func_0x00f78af4();
  puStack_58 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar2 = 0x3eb6000;
  lVar14 = lVar10;
  puVar11 = param_4;
  lVar15 = param_5;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_e8,param_4,uRam0000000003d3a7d0);
  uStack_c8 = uStack_e0;
  lStack_d0 = lStack_e8;
  puStack_c0 = puStack_d8;
  while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_d0,uRam0000000003d325c8), puVar7 = puStack_c0,
        (uVar5 & 1) != 0) {
    lVar2 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar2);
    }
    if (puVar7 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar6 = func_0x00f78adc(puVar7,lVar2);
    if (lVar6 == 0) {
      func_0x00f78e5c(puVar7,lVar2);
      goto code_r0x01a3f6f0;
    }
    param_4 = puVar7;
    if ((*(long *)(lVar6 + 0x28) == extraout_x1) && (*(char *)(lVar6 + 0x18) != '\0')) {
      if (lVar10 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar14 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar10);
    }
  }
  param_5 = 0;
  do {
    lStack_e8 = *unaff_x25;
    uVar5 = (ulong)*(ushort *)(lStack_e8 + 0x12a);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lStack_e8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x24) {
          puVar7 = (undefined8 *)(lStack_e8 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar13 = piVar13 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    lVar14 = 0;
    puVar7 = (undefined8 *)func_0x00fac1f0(&lStack_e8);
code_r0x01a3f69c:
    plVar3 = (long *)(*(code *)*puVar7)(&uStack_e0,puVar7[1]);
    if (param_5 == 0) {
      return plVar3;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1 != 1) break;
    plVar3 = (long *)___cxa_begin_catch();
    param_5 = *plVar3;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar8 = auVar16._0_8_;
  puStack_f8 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar6 = lVar14;
  puVar7 = puVar11;
  puStack_120 = param_4;
  lStack_118 = extraout_x1;
  lStack_110 = lVar10;
  lStack_108 = param_5;
  ppuStack_100 = &puStack_60;
  if ((*(long *)(lVar8 + 0x20) != 0) &&
     (lVar9 = (*(code *)**(undefined8 **)puVar11[6])(), param_5 = lVar14, lVar10 = auVar16._8_8_,
     param_4 = puVar11, lVar9 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar3 = (long *)(*(code *)**(undefined8 **)(puVar11[6] + 8))
                               (lVar8,auVar16._8_8_,lVar14,*(undefined8 *)(lVar9 + 0x10));
    return plVar3;
  }
  auVar16 = func_0x00f78af4();
  lVar9 = auVar16._8_8_;
  puStack_128 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar3 = (long *)0x3eb6000;
  lVar14 = lVar6;
  plStack_160 = unaff_x24;
  lStack_158 = lVar2;
  puStack_150 = param_4;
  lStack_148 = lVar8;
  lStack_140 = lVar10;
  lStack_138 = param_5;
  ppuStack_130 = &ppuStack_100;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar16._0_8_ + 0x18) == 0) ||
       (lVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x30))(), lVar10 == 0)) ||
      (lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(), lVar10 == 0)) ||
     (lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))(), lVar10 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar3 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))(&lStack_198);
  uStack_178 = uStack_190;
  lStack_180 = lStack_198;
  uStack_170 = uStack_188;
  do {
    uVar5 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_180,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x30));
    if ((uVar5 & 1) == 0) {
      puVar7 = (undefined8 *)0x0;
      do {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x30) + 0x38);
        if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
        lStack_198 = lVar15;
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *plVar3) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar13 = piVar13 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        lVar14 = 0;
        puVar11 = (undefined8 *)func_0x00fac1f0(&lStack_198);
code_r0x01a3f920:
        plVar12 = (long *)(*(code *)*puVar11)(&uStack_190,puVar11[1]);
        if (puVar7 == (undefined8 *)0x0) {
          return plVar12;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar7,0);
        if (extraout_w1_00 != 1) {
          auVar16 = __Unwind_Resume();
          lVar10 = auVar16._0_8_;
          plVar3 = (long *)(**(code **)**(undefined8 **)(lVar14 + 0x30))();
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x1e8))
                      (plVar3,lVar10,auVar16._8_8_,*(undefined8 *)(lVar10 + 0x38),
                       *(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(*plVar3 + 0x1f0),param_7,
                       param_8,lVar9,lVar6,puVar7,lVar15);
            return plVar3;
          }
          puVar11 = (undefined8 *)func_0x00f78af4();
          plVar3 = (long *)*puVar11;
          func_0x00f78a30();
          return plVar3;
        }
        puVar7 = (undefined8 *)___cxa_begin_catch();
        puVar7 = (undefined8 *)*puVar7;
        ___cxa_end_catch();
      } while( true );
    }
    lVar10 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_180,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x20));
    if (lVar6 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar6,0);
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar10 + 0x48) = puVar7;
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar14 = *(long *)(lVar9 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar10,lVar6,lVar14,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f3c8 | Atlas.Gameplay.Usables.UsableManager.DeSpawnAndTearDownUsable<GoldenTurdProjectile, GoldenTurdProjectileBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__DeSpawnAndTearDownUsable_BoostUsable__BoostUsableBehaviour_
                 (long param_1,long *param_2,long param_3,undefined8 *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  int *piVar13;
  long lVar14;
  long *unaff_x24;
  long lVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  lVar10 = param_3;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_01a3f500;
  lVar14 = param_2[9];
  lVar15 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  if (lVar14 == 0) {
LAB_01a3f450:
    lVar2 = 0;
  }
  else {
    lVar2 = func_0x00f78adc(lVar14,lVar15);
    if (lVar2 == 0) {
      func_0x00f78e5c(lVar14,lVar15);
      goto LAB_01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
  lVar14 = *(long *)(param_1 + 0x18);
  unaff_x24 = *(long **)(*(long *)(param_3 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (lVar14 != 0) {
      param_4 = *(undefined8 **)(*(long *)(param_3 + 0x30) + 0x18);
      (*(code *)*param_4)(lVar14,uVar4);
      lVar10 = lVar2;
      if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 0x20))
                                   (*(long *)(param_1 + 0x10),param_2);
        return plVar3;
      }
    }
  }
LAB_01a3f500:
  func_0x00f78af4();
  puStack_58 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar2 = 0x3eb6000;
  lVar14 = lVar10;
  puVar11 = param_4;
  lVar15 = param_5;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_e8,param_4,uRam0000000003d3a7d0);
  uStack_c8 = uStack_e0;
  lStack_d0 = lStack_e8;
  puStack_c0 = puStack_d8;
  while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_d0,uRam0000000003d325c8), puVar7 = puStack_c0,
        (uVar5 & 1) != 0) {
    lVar2 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar2);
    }
    if (puVar7 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar6 = func_0x00f78adc(puVar7,lVar2);
    if (lVar6 == 0) {
      func_0x00f78e5c(puVar7,lVar2);
      goto code_r0x01a3f6f0;
    }
    param_4 = puVar7;
    if ((*(long *)(lVar6 + 0x28) == extraout_x1) && (*(char *)(lVar6 + 0x18) != '\0')) {
      if (lVar10 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar14 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar10);
    }
  }
  param_5 = 0;
  do {
    lStack_e8 = *unaff_x25;
    uVar5 = (ulong)*(ushort *)(lStack_e8 + 0x12a);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lStack_e8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x24) {
          puVar7 = (undefined8 *)(lStack_e8 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar13 = piVar13 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    lVar14 = 0;
    puVar7 = (undefined8 *)func_0x00fac1f0(&lStack_e8);
code_r0x01a3f69c:
    plVar3 = (long *)(*(code *)*puVar7)(&uStack_e0,puVar7[1]);
    if (param_5 == 0) {
      return plVar3;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1 != 1) break;
    plVar3 = (long *)___cxa_begin_catch();
    param_5 = *plVar3;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar8 = auVar16._0_8_;
  puStack_f8 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar6 = lVar14;
  puVar7 = puVar11;
  puStack_120 = param_4;
  lStack_118 = extraout_x1;
  lStack_110 = lVar10;
  lStack_108 = param_5;
  ppuStack_100 = &puStack_60;
  if ((*(long *)(lVar8 + 0x20) != 0) &&
     (lVar9 = (*(code *)**(undefined8 **)puVar11[6])(), param_5 = lVar14, lVar10 = auVar16._8_8_,
     param_4 = puVar11, lVar9 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar3 = (long *)(*(code *)**(undefined8 **)(puVar11[6] + 8))
                               (lVar8,auVar16._8_8_,lVar14,*(undefined8 *)(lVar9 + 0x10));
    return plVar3;
  }
  auVar16 = func_0x00f78af4();
  lVar9 = auVar16._8_8_;
  puStack_128 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar3 = (long *)0x3eb6000;
  lVar14 = lVar6;
  plStack_160 = unaff_x24;
  lStack_158 = lVar2;
  puStack_150 = param_4;
  lStack_148 = lVar8;
  lStack_140 = lVar10;
  lStack_138 = param_5;
  ppuStack_130 = &ppuStack_100;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar16._0_8_ + 0x18) == 0) ||
       (lVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x30))(), lVar10 == 0)) ||
      (lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(), lVar10 == 0)) ||
     (lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))(), lVar10 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar3 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))(&lStack_198);
  uStack_178 = uStack_190;
  lStack_180 = lStack_198;
  uStack_170 = uStack_188;
  do {
    uVar5 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_180,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x30));
    if ((uVar5 & 1) == 0) {
      puVar7 = (undefined8 *)0x0;
      do {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x30) + 0x38);
        if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
        lStack_198 = lVar15;
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *plVar3) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar13 = piVar13 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        lVar14 = 0;
        puVar11 = (undefined8 *)func_0x00fac1f0(&lStack_198);
code_r0x01a3f920:
        plVar12 = (long *)(*(code *)*puVar11)(&uStack_190,puVar11[1]);
        if (puVar7 == (undefined8 *)0x0) {
          return plVar12;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar7,0);
        if (extraout_w1_00 != 1) {
          auVar16 = __Unwind_Resume();
          lVar10 = auVar16._0_8_;
          plVar3 = (long *)(**(code **)**(undefined8 **)(lVar14 + 0x30))();
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x1e8))
                      (plVar3,lVar10,auVar16._8_8_,*(undefined8 *)(lVar10 + 0x38),
                       *(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(*plVar3 + 0x1f0),param_7,
                       param_8,lVar9,lVar6,puVar7,lVar15);
            return plVar3;
          }
          puVar11 = (undefined8 *)func_0x00f78af4();
          plVar3 = (long *)*puVar11;
          func_0x00f78a30();
          return plVar3;
        }
        puVar7 = (undefined8 *)___cxa_begin_catch();
        puVar7 = (undefined8 *)*puVar7;
        ___cxa_end_catch();
      } while( true );
    }
    lVar10 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_180,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x20));
    if (lVar6 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar6,0);
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar10 + 0x48) = puVar7;
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar14 = *(long *)(lVar9 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar10,lVar6,lVar14,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f3c8 | Atlas.Gameplay.Usables.UsableManager.DeSpawnAndTearDownUsable<NormalShieldUsable, NormalShieldUsableBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__DeSpawnAndTearDownUsable_BoostUsable__BoostUsableBehaviour_
                 (long param_1,long *param_2,long param_3,undefined8 *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  int *piVar13;
  long lVar14;
  long *unaff_x24;
  long lVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  lVar10 = param_3;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_01a3f500;
  lVar14 = param_2[9];
  lVar15 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  if (lVar14 == 0) {
LAB_01a3f450:
    lVar2 = 0;
  }
  else {
    lVar2 = func_0x00f78adc(lVar14,lVar15);
    if (lVar2 == 0) {
      func_0x00f78e5c(lVar14,lVar15);
      goto LAB_01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
  lVar14 = *(long *)(param_1 + 0x18);
  unaff_x24 = *(long **)(*(long *)(param_3 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (lVar14 != 0) {
      param_4 = *(undefined8 **)(*(long *)(param_3 + 0x30) + 0x18);
      (*(code *)*param_4)(lVar14,uVar4);
      lVar10 = lVar2;
      if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 0x20))
                                   (*(long *)(param_1 + 0x10),param_2);
        return plVar3;
      }
    }
  }
LAB_01a3f500:
  func_0x00f78af4();
  puStack_58 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar2 = 0x3eb6000;
  lVar14 = lVar10;
  puVar11 = param_4;
  lVar15 = param_5;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_e8,param_4,uRam0000000003d3a7d0);
  uStack_c8 = uStack_e0;
  lStack_d0 = lStack_e8;
  puStack_c0 = puStack_d8;
  while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_d0,uRam0000000003d325c8), puVar7 = puStack_c0,
        (uVar5 & 1) != 0) {
    lVar2 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar2);
    }
    if (puVar7 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar6 = func_0x00f78adc(puVar7,lVar2);
    if (lVar6 == 0) {
      func_0x00f78e5c(puVar7,lVar2);
      goto code_r0x01a3f6f0;
    }
    param_4 = puVar7;
    if ((*(long *)(lVar6 + 0x28) == extraout_x1) && (*(char *)(lVar6 + 0x18) != '\0')) {
      if (lVar10 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar14 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar10);
    }
  }
  param_5 = 0;
  do {
    lStack_e8 = *unaff_x25;
    uVar5 = (ulong)*(ushort *)(lStack_e8 + 0x12a);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lStack_e8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x24) {
          puVar7 = (undefined8 *)(lStack_e8 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar13 = piVar13 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    lVar14 = 0;
    puVar7 = (undefined8 *)func_0x00fac1f0(&lStack_e8);
code_r0x01a3f69c:
    plVar3 = (long *)(*(code *)*puVar7)(&uStack_e0,puVar7[1]);
    if (param_5 == 0) {
      return plVar3;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1 != 1) break;
    plVar3 = (long *)___cxa_begin_catch();
    param_5 = *plVar3;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar8 = auVar16._0_8_;
  puStack_f8 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar6 = lVar14;
  puVar7 = puVar11;
  puStack_120 = param_4;
  lStack_118 = extraout_x1;
  lStack_110 = lVar10;
  lStack_108 = param_5;
  ppuStack_100 = &puStack_60;
  if ((*(long *)(lVar8 + 0x20) != 0) &&
     (lVar9 = (*(code *)**(undefined8 **)puVar11[6])(), param_5 = lVar14, lVar10 = auVar16._8_8_,
     param_4 = puVar11, lVar9 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar3 = (long *)(*(code *)**(undefined8 **)(puVar11[6] + 8))
                               (lVar8,auVar16._8_8_,lVar14,*(undefined8 *)(lVar9 + 0x10));
    return plVar3;
  }
  auVar16 = func_0x00f78af4();
  lVar9 = auVar16._8_8_;
  puStack_128 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar3 = (long *)0x3eb6000;
  lVar14 = lVar6;
  plStack_160 = unaff_x24;
  lStack_158 = lVar2;
  puStack_150 = param_4;
  lStack_148 = lVar8;
  lStack_140 = lVar10;
  lStack_138 = param_5;
  ppuStack_130 = &ppuStack_100;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar16._0_8_ + 0x18) == 0) ||
       (lVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x30))(), lVar10 == 0)) ||
      (lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(), lVar10 == 0)) ||
     (lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))(), lVar10 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar3 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))(&lStack_198);
  uStack_178 = uStack_190;
  lStack_180 = lStack_198;
  uStack_170 = uStack_188;
  do {
    uVar5 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_180,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x30));
    if ((uVar5 & 1) == 0) {
      puVar7 = (undefined8 *)0x0;
      do {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x30) + 0x38);
        if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
        lStack_198 = lVar15;
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *plVar3) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar13 = piVar13 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        lVar14 = 0;
        puVar11 = (undefined8 *)func_0x00fac1f0(&lStack_198);
code_r0x01a3f920:
        plVar12 = (long *)(*(code *)*puVar11)(&uStack_190,puVar11[1]);
        if (puVar7 == (undefined8 *)0x0) {
          return plVar12;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar7,0);
        if (extraout_w1_00 != 1) {
          auVar16 = __Unwind_Resume();
          lVar10 = auVar16._0_8_;
          plVar3 = (long *)(**(code **)**(undefined8 **)(lVar14 + 0x30))();
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x1e8))
                      (plVar3,lVar10,auVar16._8_8_,*(undefined8 *)(lVar10 + 0x38),
                       *(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(*plVar3 + 0x1f0),param_7,
                       param_8,lVar9,lVar6,puVar7,lVar15);
            return plVar3;
          }
          puVar11 = (undefined8 *)func_0x00f78af4();
          plVar3 = (long *)*puVar11;
          func_0x00f78a30();
          return plVar3;
        }
        puVar7 = (undefined8 *)___cxa_begin_catch();
        puVar7 = (undefined8 *)*puVar7;
        ___cxa_end_catch();
      } while( true );
    }
    lVar10 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_180,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x20));
    if (lVar6 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar6,0);
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar10 + 0x48) = puVar7;
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar14 = *(long *)(lVar9 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar10,lVar6,lVar14,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f3c8 | Atlas.Gameplay.Usables.UsableManager.DeSpawnAndTearDownUsable<PlacementHomingProjectile, PlacementHomingProjectileBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__DeSpawnAndTearDownUsable_BoostUsable__BoostUsableBehaviour_
                 (long param_1,long *param_2,long param_3,undefined8 *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  int *piVar13;
  long lVar14;
  long *unaff_x24;
  long lVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  lVar10 = param_3;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_01a3f500;
  lVar14 = param_2[9];
  lVar15 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  if (lVar14 == 0) {
LAB_01a3f450:
    lVar2 = 0;
  }
  else {
    lVar2 = func_0x00f78adc(lVar14,lVar15);
    if (lVar2 == 0) {
      func_0x00f78e5c(lVar14,lVar15);
      goto LAB_01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
  lVar14 = *(long *)(param_1 + 0x18);
  unaff_x24 = *(long **)(*(long *)(param_3 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (lVar14 != 0) {
      param_4 = *(undefined8 **)(*(long *)(param_3 + 0x30) + 0x18);
      (*(code *)*param_4)(lVar14,uVar4);
      lVar10 = lVar2;
      if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 0x20))
                                   (*(long *)(param_1 + 0x10),param_2);
        return plVar3;
      }
    }
  }
LAB_01a3f500:
  func_0x00f78af4();
  puStack_58 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar2 = 0x3eb6000;
  lVar14 = lVar10;
  puVar11 = param_4;
  lVar15 = param_5;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_e8,param_4,uRam0000000003d3a7d0);
  uStack_c8 = uStack_e0;
  lStack_d0 = lStack_e8;
  puStack_c0 = puStack_d8;
  while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_d0,uRam0000000003d325c8), puVar7 = puStack_c0,
        (uVar5 & 1) != 0) {
    lVar2 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar2);
    }
    if (puVar7 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar6 = func_0x00f78adc(puVar7,lVar2);
    if (lVar6 == 0) {
      func_0x00f78e5c(puVar7,lVar2);
      goto code_r0x01a3f6f0;
    }
    param_4 = puVar7;
    if ((*(long *)(lVar6 + 0x28) == extraout_x1) && (*(char *)(lVar6 + 0x18) != '\0')) {
      if (lVar10 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar14 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar10);
    }
  }
  param_5 = 0;
  do {
    lStack_e8 = *unaff_x25;
    uVar5 = (ulong)*(ushort *)(lStack_e8 + 0x12a);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lStack_e8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x24) {
          puVar7 = (undefined8 *)(lStack_e8 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar13 = piVar13 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    lVar14 = 0;
    puVar7 = (undefined8 *)func_0x00fac1f0(&lStack_e8);
code_r0x01a3f69c:
    plVar3 = (long *)(*(code *)*puVar7)(&uStack_e0,puVar7[1]);
    if (param_5 == 0) {
      return plVar3;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1 != 1) break;
    plVar3 = (long *)___cxa_begin_catch();
    param_5 = *plVar3;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar8 = auVar16._0_8_;
  puStack_f8 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar6 = lVar14;
  puVar7 = puVar11;
  puStack_120 = param_4;
  lStack_118 = extraout_x1;
  lStack_110 = lVar10;
  lStack_108 = param_5;
  ppuStack_100 = &puStack_60;
  if ((*(long *)(lVar8 + 0x20) != 0) &&
     (lVar9 = (*(code *)**(undefined8 **)puVar11[6])(), param_5 = lVar14, lVar10 = auVar16._8_8_,
     param_4 = puVar11, lVar9 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar3 = (long *)(*(code *)**(undefined8 **)(puVar11[6] + 8))
                               (lVar8,auVar16._8_8_,lVar14,*(undefined8 *)(lVar9 + 0x10));
    return plVar3;
  }
  auVar16 = func_0x00f78af4();
  lVar9 = auVar16._8_8_;
  puStack_128 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar3 = (long *)0x3eb6000;
  lVar14 = lVar6;
  plStack_160 = unaff_x24;
  lStack_158 = lVar2;
  puStack_150 = param_4;
  lStack_148 = lVar8;
  lStack_140 = lVar10;
  lStack_138 = param_5;
  ppuStack_130 = &ppuStack_100;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar16._0_8_ + 0x18) == 0) ||
       (lVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x30))(), lVar10 == 0)) ||
      (lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(), lVar10 == 0)) ||
     (lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))(), lVar10 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar3 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))(&lStack_198);
  uStack_178 = uStack_190;
  lStack_180 = lStack_198;
  uStack_170 = uStack_188;
  do {
    uVar5 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_180,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x30));
    if ((uVar5 & 1) == 0) {
      puVar7 = (undefined8 *)0x0;
      do {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x30) + 0x38);
        if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
        lStack_198 = lVar15;
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *plVar3) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar13 = piVar13 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        lVar14 = 0;
        puVar11 = (undefined8 *)func_0x00fac1f0(&lStack_198);
code_r0x01a3f920:
        plVar12 = (long *)(*(code *)*puVar11)(&uStack_190,puVar11[1]);
        if (puVar7 == (undefined8 *)0x0) {
          return plVar12;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar7,0);
        if (extraout_w1_00 != 1) {
          auVar16 = __Unwind_Resume();
          lVar10 = auVar16._0_8_;
          plVar3 = (long *)(**(code **)**(undefined8 **)(lVar14 + 0x30))();
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x1e8))
                      (plVar3,lVar10,auVar16._8_8_,*(undefined8 *)(lVar10 + 0x38),
                       *(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(*plVar3 + 0x1f0),param_7,
                       param_8,lVar9,lVar6,puVar7,lVar15);
            return plVar3;
          }
          puVar11 = (undefined8 *)func_0x00f78af4();
          plVar3 = (long *)*puVar11;
          func_0x00f78a30();
          return plVar3;
        }
        puVar7 = (undefined8 *)___cxa_begin_catch();
        puVar7 = (undefined8 *)*puVar7;
        ___cxa_end_catch();
      } while( true );
    }
    lVar10 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_180,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x20));
    if (lVar6 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar6,0);
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar10 + 0x48) = puVar7;
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar14 = *(long *)(lVar9 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar10,lVar6,lVar14,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f3c8 | Atlas.Gameplay.Usables.UsableManager.DeSpawnAndTearDownUsable<ProximityHomingProjectile, ProximityHomingProjectileBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__DeSpawnAndTearDownUsable_BoostUsable__BoostUsableBehaviour_
                 (long param_1,long *param_2,long param_3,undefined8 *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  int *piVar13;
  long lVar14;
  long *unaff_x24;
  long lVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  lVar10 = param_3;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_01a3f500;
  lVar14 = param_2[9];
  lVar15 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  if (lVar14 == 0) {
LAB_01a3f450:
    lVar2 = 0;
  }
  else {
    lVar2 = func_0x00f78adc(lVar14,lVar15);
    if (lVar2 == 0) {
      func_0x00f78e5c(lVar14,lVar15);
      goto LAB_01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
  lVar14 = *(long *)(param_1 + 0x18);
  unaff_x24 = *(long **)(*(long *)(param_3 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (lVar14 != 0) {
      param_4 = *(undefined8 **)(*(long *)(param_3 + 0x30) + 0x18);
      (*(code *)*param_4)(lVar14,uVar4);
      lVar10 = lVar2;
      if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 0x20))
                                   (*(long *)(param_1 + 0x10),param_2);
        return plVar3;
      }
    }
  }
LAB_01a3f500:
  func_0x00f78af4();
  puStack_58 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar2 = 0x3eb6000;
  lVar14 = lVar10;
  puVar11 = param_4;
  lVar15 = param_5;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_e8,param_4,uRam0000000003d3a7d0);
  uStack_c8 = uStack_e0;
  lStack_d0 = lStack_e8;
  puStack_c0 = puStack_d8;
  while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_d0,uRam0000000003d325c8), puVar7 = puStack_c0,
        (uVar5 & 1) != 0) {
    lVar2 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar2);
    }
    if (puVar7 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar6 = func_0x00f78adc(puVar7,lVar2);
    if (lVar6 == 0) {
      func_0x00f78e5c(puVar7,lVar2);
      goto code_r0x01a3f6f0;
    }
    param_4 = puVar7;
    if ((*(long *)(lVar6 + 0x28) == extraout_x1) && (*(char *)(lVar6 + 0x18) != '\0')) {
      if (lVar10 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar14 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar10);
    }
  }
  param_5 = 0;
  do {
    lStack_e8 = *unaff_x25;
    uVar5 = (ulong)*(ushort *)(lStack_e8 + 0x12a);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lStack_e8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x24) {
          puVar7 = (undefined8 *)(lStack_e8 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar13 = piVar13 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    lVar14 = 0;
    puVar7 = (undefined8 *)func_0x00fac1f0(&lStack_e8);
code_r0x01a3f69c:
    plVar3 = (long *)(*(code *)*puVar7)(&uStack_e0,puVar7[1]);
    if (param_5 == 0) {
      return plVar3;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1 != 1) break;
    plVar3 = (long *)___cxa_begin_catch();
    param_5 = *plVar3;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar8 = auVar16._0_8_;
  puStack_f8 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar6 = lVar14;
  puVar7 = puVar11;
  puStack_120 = param_4;
  lStack_118 = extraout_x1;
  lStack_110 = lVar10;
  lStack_108 = param_5;
  ppuStack_100 = &puStack_60;
  if ((*(long *)(lVar8 + 0x20) != 0) &&
     (lVar9 = (*(code *)**(undefined8 **)puVar11[6])(), param_5 = lVar14, lVar10 = auVar16._8_8_,
     param_4 = puVar11, lVar9 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar3 = (long *)(*(code *)**(undefined8 **)(puVar11[6] + 8))
                               (lVar8,auVar16._8_8_,lVar14,*(undefined8 *)(lVar9 + 0x10));
    return plVar3;
  }
  auVar16 = func_0x00f78af4();
  lVar9 = auVar16._8_8_;
  puStack_128 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar3 = (long *)0x3eb6000;
  lVar14 = lVar6;
  plStack_160 = unaff_x24;
  lStack_158 = lVar2;
  puStack_150 = param_4;
  lStack_148 = lVar8;
  lStack_140 = lVar10;
  lStack_138 = param_5;
  ppuStack_130 = &ppuStack_100;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar16._0_8_ + 0x18) == 0) ||
       (lVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x30))(), lVar10 == 0)) ||
      (lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(), lVar10 == 0)) ||
     (lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))(), lVar10 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar3 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))(&lStack_198);
  uStack_178 = uStack_190;
  lStack_180 = lStack_198;
  uStack_170 = uStack_188;
  do {
    uVar5 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_180,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x30));
    if ((uVar5 & 1) == 0) {
      puVar7 = (undefined8 *)0x0;
      do {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x30) + 0x38);
        if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
        lStack_198 = lVar15;
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *plVar3) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar13 = piVar13 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        lVar14 = 0;
        puVar11 = (undefined8 *)func_0x00fac1f0(&lStack_198);
code_r0x01a3f920:
        plVar12 = (long *)(*(code *)*puVar11)(&uStack_190,puVar11[1]);
        if (puVar7 == (undefined8 *)0x0) {
          return plVar12;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar7,0);
        if (extraout_w1_00 != 1) {
          auVar16 = __Unwind_Resume();
          lVar10 = auVar16._0_8_;
          plVar3 = (long *)(**(code **)**(undefined8 **)(lVar14 + 0x30))();
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x1e8))
                      (plVar3,lVar10,auVar16._8_8_,*(undefined8 *)(lVar10 + 0x38),
                       *(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(*plVar3 + 0x1f0),param_7,
                       param_8,lVar9,lVar6,puVar7,lVar15);
            return plVar3;
          }
          puVar11 = (undefined8 *)func_0x00f78af4();
          plVar3 = (long *)*puVar11;
          func_0x00f78a30();
          return plVar3;
        }
        puVar7 = (undefined8 *)___cxa_begin_catch();
        puVar7 = (undefined8 *)*puVar7;
        ___cxa_end_catch();
      } while( true );
    }
    lVar10 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_180,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x20));
    if (lVar6 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar6,0);
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar10 + 0x48) = puVar7;
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar14 = *(long *)(lVar9 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar10,lVar6,lVar14,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f3c8 | Atlas.Gameplay.Usables.UsableManager.DeSpawnAndTearDownUsable<RicochetProjectile, RicochetProjectileBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__DeSpawnAndTearDownUsable_BoostUsable__BoostUsableBehaviour_
                 (long param_1,long *param_2,long param_3,undefined8 *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  int *piVar13;
  long lVar14;
  long *unaff_x24;
  long lVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  lVar10 = param_3;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_01a3f500;
  lVar14 = param_2[9];
  lVar15 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  if (lVar14 == 0) {
LAB_01a3f450:
    lVar2 = 0;
  }
  else {
    lVar2 = func_0x00f78adc(lVar14,lVar15);
    if (lVar2 == 0) {
      func_0x00f78e5c(lVar14,lVar15);
      goto LAB_01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
  lVar14 = *(long *)(param_1 + 0x18);
  unaff_x24 = *(long **)(*(long *)(param_3 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (lVar14 != 0) {
      param_4 = *(undefined8 **)(*(long *)(param_3 + 0x30) + 0x18);
      (*(code *)*param_4)(lVar14,uVar4);
      lVar10 = lVar2;
      if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 0x20))
                                   (*(long *)(param_1 + 0x10),param_2);
        return plVar3;
      }
    }
  }
LAB_01a3f500:
  func_0x00f78af4();
  puStack_58 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar2 = 0x3eb6000;
  lVar14 = lVar10;
  puVar11 = param_4;
  lVar15 = param_5;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_e8,param_4,uRam0000000003d3a7d0);
  uStack_c8 = uStack_e0;
  lStack_d0 = lStack_e8;
  puStack_c0 = puStack_d8;
  while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_d0,uRam0000000003d325c8), puVar7 = puStack_c0,
        (uVar5 & 1) != 0) {
    lVar2 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar2);
    }
    if (puVar7 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar6 = func_0x00f78adc(puVar7,lVar2);
    if (lVar6 == 0) {
      func_0x00f78e5c(puVar7,lVar2);
      goto code_r0x01a3f6f0;
    }
    param_4 = puVar7;
    if ((*(long *)(lVar6 + 0x28) == extraout_x1) && (*(char *)(lVar6 + 0x18) != '\0')) {
      if (lVar10 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar14 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar10);
    }
  }
  param_5 = 0;
  do {
    lStack_e8 = *unaff_x25;
    uVar5 = (ulong)*(ushort *)(lStack_e8 + 0x12a);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lStack_e8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x24) {
          puVar7 = (undefined8 *)(lStack_e8 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar13 = piVar13 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    lVar14 = 0;
    puVar7 = (undefined8 *)func_0x00fac1f0(&lStack_e8);
code_r0x01a3f69c:
    plVar3 = (long *)(*(code *)*puVar7)(&uStack_e0,puVar7[1]);
    if (param_5 == 0) {
      return plVar3;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1 != 1) break;
    plVar3 = (long *)___cxa_begin_catch();
    param_5 = *plVar3;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar8 = auVar16._0_8_;
  puStack_f8 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar6 = lVar14;
  puVar7 = puVar11;
  puStack_120 = param_4;
  lStack_118 = extraout_x1;
  lStack_110 = lVar10;
  lStack_108 = param_5;
  ppuStack_100 = &puStack_60;
  if ((*(long *)(lVar8 + 0x20) != 0) &&
     (lVar9 = (*(code *)**(undefined8 **)puVar11[6])(), param_5 = lVar14, lVar10 = auVar16._8_8_,
     param_4 = puVar11, lVar9 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar3 = (long *)(*(code *)**(undefined8 **)(puVar11[6] + 8))
                               (lVar8,auVar16._8_8_,lVar14,*(undefined8 *)(lVar9 + 0x10));
    return plVar3;
  }
  auVar16 = func_0x00f78af4();
  lVar9 = auVar16._8_8_;
  puStack_128 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar3 = (long *)0x3eb6000;
  lVar14 = lVar6;
  plStack_160 = unaff_x24;
  lStack_158 = lVar2;
  puStack_150 = param_4;
  lStack_148 = lVar8;
  lStack_140 = lVar10;
  lStack_138 = param_5;
  ppuStack_130 = &ppuStack_100;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar16._0_8_ + 0x18) == 0) ||
       (lVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x30))(), lVar10 == 0)) ||
      (lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(), lVar10 == 0)) ||
     (lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))(), lVar10 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar3 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))(&lStack_198);
  uStack_178 = uStack_190;
  lStack_180 = lStack_198;
  uStack_170 = uStack_188;
  do {
    uVar5 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_180,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x30));
    if ((uVar5 & 1) == 0) {
      puVar7 = (undefined8 *)0x0;
      do {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x30) + 0x38);
        if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
        lStack_198 = lVar15;
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *plVar3) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar13 = piVar13 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        lVar14 = 0;
        puVar11 = (undefined8 *)func_0x00fac1f0(&lStack_198);
code_r0x01a3f920:
        plVar12 = (long *)(*(code *)*puVar11)(&uStack_190,puVar11[1]);
        if (puVar7 == (undefined8 *)0x0) {
          return plVar12;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar7,0);
        if (extraout_w1_00 != 1) {
          auVar16 = __Unwind_Resume();
          lVar10 = auVar16._0_8_;
          plVar3 = (long *)(**(code **)**(undefined8 **)(lVar14 + 0x30))();
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x1e8))
                      (plVar3,lVar10,auVar16._8_8_,*(undefined8 *)(lVar10 + 0x38),
                       *(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(*plVar3 + 0x1f0),param_7,
                       param_8,lVar9,lVar6,puVar7,lVar15);
            return plVar3;
          }
          puVar11 = (undefined8 *)func_0x00f78af4();
          plVar3 = (long *)*puVar11;
          func_0x00f78a30();
          return plVar3;
        }
        puVar7 = (undefined8 *)___cxa_begin_catch();
        puVar7 = (undefined8 *)*puVar7;
        ___cxa_end_catch();
      } while( true );
    }
    lVar10 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_180,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x20));
    if (lVar6 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar6,0);
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar10 + 0x48) = puVar7;
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar14 = *(long *)(lVar9 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar10,lVar6,lVar14,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f3c8 | Atlas.Gameplay.Usables.UsableManager.DeSpawnAndTearDownUsable<SatelliteUsable, SatelliteUsableBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__DeSpawnAndTearDownUsable_BoostUsable__BoostUsableBehaviour_
                 (long param_1,long *param_2,long param_3,undefined8 *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  int *piVar13;
  long lVar14;
  long *unaff_x24;
  long lVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  lVar10 = param_3;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_01a3f500;
  lVar14 = param_2[9];
  lVar15 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  if (lVar14 == 0) {
LAB_01a3f450:
    lVar2 = 0;
  }
  else {
    lVar2 = func_0x00f78adc(lVar14,lVar15);
    if (lVar2 == 0) {
      func_0x00f78e5c(lVar14,lVar15);
      goto LAB_01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
  lVar14 = *(long *)(param_1 + 0x18);
  unaff_x24 = *(long **)(*(long *)(param_3 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (lVar14 != 0) {
      param_4 = *(undefined8 **)(*(long *)(param_3 + 0x30) + 0x18);
      (*(code *)*param_4)(lVar14,uVar4);
      lVar10 = lVar2;
      if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 0x20))
                                   (*(long *)(param_1 + 0x10),param_2);
        return plVar3;
      }
    }
  }
LAB_01a3f500:
  func_0x00f78af4();
  puStack_58 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar2 = 0x3eb6000;
  lVar14 = lVar10;
  puVar11 = param_4;
  lVar15 = param_5;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_e8,param_4,uRam0000000003d3a7d0);
  uStack_c8 = uStack_e0;
  lStack_d0 = lStack_e8;
  puStack_c0 = puStack_d8;
  while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_d0,uRam0000000003d325c8), puVar7 = puStack_c0,
        (uVar5 & 1) != 0) {
    lVar2 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar2);
    }
    if (puVar7 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar6 = func_0x00f78adc(puVar7,lVar2);
    if (lVar6 == 0) {
      func_0x00f78e5c(puVar7,lVar2);
      goto code_r0x01a3f6f0;
    }
    param_4 = puVar7;
    if ((*(long *)(lVar6 + 0x28) == extraout_x1) && (*(char *)(lVar6 + 0x18) != '\0')) {
      if (lVar10 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar14 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar10);
    }
  }
  param_5 = 0;
  do {
    lStack_e8 = *unaff_x25;
    uVar5 = (ulong)*(ushort *)(lStack_e8 + 0x12a);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lStack_e8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x24) {
          puVar7 = (undefined8 *)(lStack_e8 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar13 = piVar13 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    lVar14 = 0;
    puVar7 = (undefined8 *)func_0x00fac1f0(&lStack_e8);
code_r0x01a3f69c:
    plVar3 = (long *)(*(code *)*puVar7)(&uStack_e0,puVar7[1]);
    if (param_5 == 0) {
      return plVar3;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1 != 1) break;
    plVar3 = (long *)___cxa_begin_catch();
    param_5 = *plVar3;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar8 = auVar16._0_8_;
  puStack_f8 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar6 = lVar14;
  puVar7 = puVar11;
  puStack_120 = param_4;
  lStack_118 = extraout_x1;
  lStack_110 = lVar10;
  lStack_108 = param_5;
  ppuStack_100 = &puStack_60;
  if ((*(long *)(lVar8 + 0x20) != 0) &&
     (lVar9 = (*(code *)**(undefined8 **)puVar11[6])(), param_5 = lVar14, lVar10 = auVar16._8_8_,
     param_4 = puVar11, lVar9 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar3 = (long *)(*(code *)**(undefined8 **)(puVar11[6] + 8))
                               (lVar8,auVar16._8_8_,lVar14,*(undefined8 *)(lVar9 + 0x10));
    return plVar3;
  }
  auVar16 = func_0x00f78af4();
  lVar9 = auVar16._8_8_;
  puStack_128 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar3 = (long *)0x3eb6000;
  lVar14 = lVar6;
  plStack_160 = unaff_x24;
  lStack_158 = lVar2;
  puStack_150 = param_4;
  lStack_148 = lVar8;
  lStack_140 = lVar10;
  lStack_138 = param_5;
  ppuStack_130 = &ppuStack_100;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar16._0_8_ + 0x18) == 0) ||
       (lVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x30))(), lVar10 == 0)) ||
      (lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(), lVar10 == 0)) ||
     (lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))(), lVar10 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar3 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))(&lStack_198);
  uStack_178 = uStack_190;
  lStack_180 = lStack_198;
  uStack_170 = uStack_188;
  do {
    uVar5 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_180,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x30));
    if ((uVar5 & 1) == 0) {
      puVar7 = (undefined8 *)0x0;
      do {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x30) + 0x38);
        if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
        lStack_198 = lVar15;
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *plVar3) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar13 = piVar13 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        lVar14 = 0;
        puVar11 = (undefined8 *)func_0x00fac1f0(&lStack_198);
code_r0x01a3f920:
        plVar12 = (long *)(*(code *)*puVar11)(&uStack_190,puVar11[1]);
        if (puVar7 == (undefined8 *)0x0) {
          return plVar12;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar7,0);
        if (extraout_w1_00 != 1) {
          auVar16 = __Unwind_Resume();
          lVar10 = auVar16._0_8_;
          plVar3 = (long *)(**(code **)**(undefined8 **)(lVar14 + 0x30))();
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x1e8))
                      (plVar3,lVar10,auVar16._8_8_,*(undefined8 *)(lVar10 + 0x38),
                       *(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(*plVar3 + 0x1f0),param_7,
                       param_8,lVar9,lVar6,puVar7,lVar15);
            return plVar3;
          }
          puVar11 = (undefined8 *)func_0x00f78af4();
          plVar3 = (long *)*puVar11;
          func_0x00f78a30();
          return plVar3;
        }
        puVar7 = (undefined8 *)___cxa_begin_catch();
        puVar7 = (undefined8 *)*puVar7;
        ___cxa_end_catch();
      } while( true );
    }
    lVar10 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_180,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x20));
    if (lVar6 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar6,0);
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar10 + 0x48) = puVar7;
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar14 = *(long *)(lVar9 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar10,lVar6,lVar14,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f3c8 | Atlas.Gameplay.Usables.UsableManager.DeSpawnAndTearDownUsable<SuperShieldUsable, SuperShieldUsableBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__DeSpawnAndTearDownUsable_BoostUsable__BoostUsableBehaviour_
                 (long param_1,long *param_2,long param_3,undefined8 *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  int *piVar13;
  long lVar14;
  long *unaff_x24;
  long lVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  lVar10 = param_3;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_01a3f500;
  lVar14 = param_2[9];
  lVar15 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  if (lVar14 == 0) {
LAB_01a3f450:
    lVar2 = 0;
  }
  else {
    lVar2 = func_0x00f78adc(lVar14,lVar15);
    if (lVar2 == 0) {
      func_0x00f78e5c(lVar14,lVar15);
      goto LAB_01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
  lVar14 = *(long *)(param_1 + 0x18);
  unaff_x24 = *(long **)(*(long *)(param_3 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (lVar14 != 0) {
      param_4 = *(undefined8 **)(*(long *)(param_3 + 0x30) + 0x18);
      (*(code *)*param_4)(lVar14,uVar4);
      lVar10 = lVar2;
      if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 0x20))
                                   (*(long *)(param_1 + 0x10),param_2);
        return plVar3;
      }
    }
  }
LAB_01a3f500:
  func_0x00f78af4();
  puStack_58 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar2 = 0x3eb6000;
  lVar14 = lVar10;
  puVar11 = param_4;
  lVar15 = param_5;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_e8,param_4,uRam0000000003d3a7d0);
  uStack_c8 = uStack_e0;
  lStack_d0 = lStack_e8;
  puStack_c0 = puStack_d8;
  while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_d0,uRam0000000003d325c8), puVar7 = puStack_c0,
        (uVar5 & 1) != 0) {
    lVar2 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar2);
    }
    if (puVar7 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar6 = func_0x00f78adc(puVar7,lVar2);
    if (lVar6 == 0) {
      func_0x00f78e5c(puVar7,lVar2);
      goto code_r0x01a3f6f0;
    }
    param_4 = puVar7;
    if ((*(long *)(lVar6 + 0x28) == extraout_x1) && (*(char *)(lVar6 + 0x18) != '\0')) {
      if (lVar10 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar14 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar10);
    }
  }
  param_5 = 0;
  do {
    lStack_e8 = *unaff_x25;
    uVar5 = (ulong)*(ushort *)(lStack_e8 + 0x12a);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lStack_e8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x24) {
          puVar7 = (undefined8 *)(lStack_e8 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar13 = piVar13 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    lVar14 = 0;
    puVar7 = (undefined8 *)func_0x00fac1f0(&lStack_e8);
code_r0x01a3f69c:
    plVar3 = (long *)(*(code *)*puVar7)(&uStack_e0,puVar7[1]);
    if (param_5 == 0) {
      return plVar3;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1 != 1) break;
    plVar3 = (long *)___cxa_begin_catch();
    param_5 = *plVar3;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar8 = auVar16._0_8_;
  puStack_f8 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar6 = lVar14;
  puVar7 = puVar11;
  puStack_120 = param_4;
  lStack_118 = extraout_x1;
  lStack_110 = lVar10;
  lStack_108 = param_5;
  ppuStack_100 = &puStack_60;
  if ((*(long *)(lVar8 + 0x20) != 0) &&
     (lVar9 = (*(code *)**(undefined8 **)puVar11[6])(), param_5 = lVar14, lVar10 = auVar16._8_8_,
     param_4 = puVar11, lVar9 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar3 = (long *)(*(code *)**(undefined8 **)(puVar11[6] + 8))
                               (lVar8,auVar16._8_8_,lVar14,*(undefined8 *)(lVar9 + 0x10));
    return plVar3;
  }
  auVar16 = func_0x00f78af4();
  lVar9 = auVar16._8_8_;
  puStack_128 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar3 = (long *)0x3eb6000;
  lVar14 = lVar6;
  plStack_160 = unaff_x24;
  lStack_158 = lVar2;
  puStack_150 = param_4;
  lStack_148 = lVar8;
  lStack_140 = lVar10;
  lStack_138 = param_5;
  ppuStack_130 = &ppuStack_100;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar16._0_8_ + 0x18) == 0) ||
       (lVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x30))(), lVar10 == 0)) ||
      (lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(), lVar10 == 0)) ||
     (lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))(), lVar10 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar3 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))(&lStack_198);
  uStack_178 = uStack_190;
  lStack_180 = lStack_198;
  uStack_170 = uStack_188;
  do {
    uVar5 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_180,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x30));
    if ((uVar5 & 1) == 0) {
      puVar7 = (undefined8 *)0x0;
      do {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x30) + 0x38);
        if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
        lStack_198 = lVar15;
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *plVar3) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar13 = piVar13 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        lVar14 = 0;
        puVar11 = (undefined8 *)func_0x00fac1f0(&lStack_198);
code_r0x01a3f920:
        plVar12 = (long *)(*(code *)*puVar11)(&uStack_190,puVar11[1]);
        if (puVar7 == (undefined8 *)0x0) {
          return plVar12;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar7,0);
        if (extraout_w1_00 != 1) {
          auVar16 = __Unwind_Resume();
          lVar10 = auVar16._0_8_;
          plVar3 = (long *)(**(code **)**(undefined8 **)(lVar14 + 0x30))();
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x1e8))
                      (plVar3,lVar10,auVar16._8_8_,*(undefined8 *)(lVar10 + 0x38),
                       *(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(*plVar3 + 0x1f0),param_7,
                       param_8,lVar9,lVar6,puVar7,lVar15);
            return plVar3;
          }
          puVar11 = (undefined8 *)func_0x00f78af4();
          plVar3 = (long *)*puVar11;
          func_0x00f78a30();
          return plVar3;
        }
        puVar7 = (undefined8 *)___cxa_begin_catch();
        puVar7 = (undefined8 *)*puVar7;
        ___cxa_end_catch();
      } while( true );
    }
    lVar10 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_180,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x20));
    if (lVar6 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar6,0);
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar10 + 0x48) = puVar7;
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar14 = *(long *)(lVar9 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar10,lVar6,lVar14,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f3c8 | Atlas.Gameplay.Usables.UsableManager.DeSpawnAndTearDownUsable<object, object>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__DeSpawnAndTearDownUsable_BoostUsable__BoostUsableBehaviour_
                 (long param_1,long *param_2,long param_3,undefined8 *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  int *piVar13;
  long lVar14;
  long *unaff_x24;
  long lVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  lVar10 = param_3;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_01a3f500;
  lVar14 = param_2[9];
  lVar15 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  if (lVar14 == 0) {
LAB_01a3f450:
    lVar2 = 0;
  }
  else {
    lVar2 = func_0x00f78adc(lVar14,lVar15);
    if (lVar2 == 0) {
      func_0x00f78e5c(lVar14,lVar15);
      goto LAB_01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
  lVar14 = *(long *)(param_1 + 0x18);
  unaff_x24 = *(long **)(*(long *)(param_3 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (lVar14 != 0) {
      param_4 = *(undefined8 **)(*(long *)(param_3 + 0x30) + 0x18);
      (*(code *)*param_4)(lVar14,uVar4);
      lVar10 = lVar2;
      if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 0x20))
                                   (*(long *)(param_1 + 0x10),param_2);
        return plVar3;
      }
    }
  }
LAB_01a3f500:
  func_0x00f78af4();
  puStack_58 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar2 = 0x3eb6000;
  lVar14 = lVar10;
  puVar11 = param_4;
  lVar15 = param_5;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_e8,param_4,uRam0000000003d3a7d0);
  uStack_c8 = uStack_e0;
  lStack_d0 = lStack_e8;
  puStack_c0 = puStack_d8;
  while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_d0,uRam0000000003d325c8), puVar7 = puStack_c0,
        (uVar5 & 1) != 0) {
    lVar2 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar2);
    }
    if (puVar7 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar6 = func_0x00f78adc(puVar7,lVar2);
    if (lVar6 == 0) {
      func_0x00f78e5c(puVar7,lVar2);
      goto code_r0x01a3f6f0;
    }
    param_4 = puVar7;
    if ((*(long *)(lVar6 + 0x28) == extraout_x1) && (*(char *)(lVar6 + 0x18) != '\0')) {
      if (lVar10 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar14 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar10);
    }
  }
  param_5 = 0;
  do {
    lStack_e8 = *unaff_x25;
    uVar5 = (ulong)*(ushort *)(lStack_e8 + 0x12a);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lStack_e8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x24) {
          puVar7 = (undefined8 *)(lStack_e8 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar13 = piVar13 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    lVar14 = 0;
    puVar7 = (undefined8 *)func_0x00fac1f0(&lStack_e8);
code_r0x01a3f69c:
    plVar3 = (long *)(*(code *)*puVar7)(&uStack_e0,puVar7[1]);
    if (param_5 == 0) {
      return plVar3;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1 != 1) break;
    plVar3 = (long *)___cxa_begin_catch();
    param_5 = *plVar3;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar8 = auVar16._0_8_;
  puStack_f8 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar6 = lVar14;
  puVar7 = puVar11;
  puStack_120 = param_4;
  lStack_118 = extraout_x1;
  lStack_110 = lVar10;
  lStack_108 = param_5;
  ppuStack_100 = &puStack_60;
  if ((*(long *)(lVar8 + 0x20) != 0) &&
     (lVar9 = (*(code *)**(undefined8 **)puVar11[6])(), param_5 = lVar14, lVar10 = auVar16._8_8_,
     param_4 = puVar11, lVar9 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar3 = (long *)(*(code *)**(undefined8 **)(puVar11[6] + 8))
                               (lVar8,auVar16._8_8_,lVar14,*(undefined8 *)(lVar9 + 0x10));
    return plVar3;
  }
  auVar16 = func_0x00f78af4();
  lVar9 = auVar16._8_8_;
  puStack_128 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar3 = (long *)0x3eb6000;
  lVar14 = lVar6;
  plStack_160 = unaff_x24;
  lStack_158 = lVar2;
  puStack_150 = param_4;
  lStack_148 = lVar8;
  lStack_140 = lVar10;
  lStack_138 = param_5;
  ppuStack_130 = &ppuStack_100;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar16._0_8_ + 0x18) == 0) ||
       (lVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x30))(), lVar10 == 0)) ||
      (lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(), lVar10 == 0)) ||
     (lVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))(), lVar10 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar3 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))(&lStack_198);
  uStack_178 = uStack_190;
  lStack_180 = lStack_198;
  uStack_170 = uStack_188;
  do {
    uVar5 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_180,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x30));
    if ((uVar5 & 1) == 0) {
      puVar7 = (undefined8 *)0x0;
      do {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x30) + 0x38);
        if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
        lStack_198 = lVar15;
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *plVar3) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar13 = piVar13 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        lVar14 = 0;
        puVar11 = (undefined8 *)func_0x00fac1f0(&lStack_198);
code_r0x01a3f920:
        plVar12 = (long *)(*(code *)*puVar11)(&uStack_190,puVar11[1]);
        if (puVar7 == (undefined8 *)0x0) {
          return plVar12;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar7,0);
        if (extraout_w1_00 != 1) {
          auVar16 = __Unwind_Resume();
          lVar10 = auVar16._0_8_;
          plVar3 = (long *)(**(code **)**(undefined8 **)(lVar14 + 0x30))();
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x1e8))
                      (plVar3,lVar10,auVar16._8_8_,*(undefined8 *)(lVar10 + 0x38),
                       *(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(*plVar3 + 0x1f0),param_7,
                       param_8,lVar9,lVar6,puVar7,lVar15);
            return plVar3;
          }
          puVar11 = (undefined8 *)func_0x00f78af4();
          plVar3 = (long *)*puVar11;
          func_0x00f78a30();
          return plVar3;
        }
        puVar7 = (undefined8 *)___cxa_begin_catch();
        puVar7 = (undefined8 *)*puVar7;
        ___cxa_end_catch();
      } while( true );
    }
    lVar10 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_180,*(undefined8 *)(*(long *)(lVar15 + 0x30) + 0x20));
    if (lVar6 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar6,0);
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar10 + 0x48) = puVar7;
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar14 = *(long *)(lVar9 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar10,lVar6,lVar14,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f504 | Atlas.Gameplay.Usables.UsableManager.GetActiveUsablesBelongingToKart<Usable>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_
                 (undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int extraout_w1;
  int extraout_w1_00;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar15 [16];
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lVar14 = 0x3eb6000;
  lVar9 = param_3;
  lVar11 = param_4;
  lVar13 = param_5;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == 0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_98,param_4,uRam0000000003d3a7d0);
  uStack_78 = uStack_90;
  lStack_80 = lStack_98;
  lStack_70 = lStack_88;
  while (uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_80,uRam0000000003d325c8), lVar10 = lStack_70,
        (uVar2 & 1) != 0) {
    lVar14 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar3 = func_0x00f78adc(lVar10,lVar14);
    if (lVar3 == 0) {
      func_0x00f78e5c(lVar10,lVar14);
      goto code_r0x01a3f6f0;
    }
    param_4 = lVar10;
    if ((*(long *)(lVar3 + 0x28) == param_2) && (*(char *)(lVar3 + 0x18) != '\0')) {
      if (param_3 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar9 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(param_3);
    }
  }
  param_5 = 0;
  do {
    lStack_98 = *unaff_x25;
    uVar2 = (ulong)*(ushort *)(lStack_98 + 0x12a);
    if (uVar2 != 0) {
      piVar12 = (int *)(*(long *)(lStack_98 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lStack_98 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar12 = piVar12 + 4;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    lVar9 = 0;
    puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_98);
code_r0x01a3f69c:
    plVar5 = (long *)(*(code *)*puVar4)(&uStack_90,puVar4[1]);
    if (param_5 == 0) {
      return plVar5;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    param_5 = *plVar5;
    ___cxa_end_catch();
  } while( true );
  auVar15 = __Unwind_Resume();
  lVar6 = auVar15._0_8_;
  puStack_a8 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar10 = lVar9;
  lVar3 = lVar11;
  lStack_d0 = param_4;
  lStack_c8 = param_2;
  lStack_c0 = param_3;
  lStack_b8 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((*(long *)(lVar6 + 0x20) != 0) &&
     (lVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x30))(), param_5 = lVar9,
     param_3 = auVar15._8_8_, param_4 = lVar11, lVar7 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 8))
                               (lVar6,auVar15._8_8_,lVar9,*(undefined8 *)(lVar7 + 0x10));
    return plVar5;
  }
  auVar15 = func_0x00f78af4();
  lVar11 = auVar15._8_8_;
  puStack_d8 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar5 = (long *)0x3eb6000;
  lVar9 = lVar10;
  plStack_110 = unaff_x24;
  lStack_108 = lVar14;
  lStack_100 = param_4;
  lStack_f8 = lVar6;
  lStack_f0 = param_3;
  lStack_e8 = param_5;
  ppuStack_e0 = &puStack_b0;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar15._0_8_ + 0x18) == 0) ||
       (lVar14 = (**(code **)**(undefined8 **)(lVar13 + 0x30))(), lVar14 == 0)) ||
      (lVar14 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))(), lVar14 == 0)) ||
     (lVar14 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x10))(), lVar14 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar5 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x18))(&lStack_148);
  uStack_128 = uStack_140;
  lStack_130 = lStack_148;
  uStack_120 = uStack_138;
  do {
    uVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_130,*(undefined8 *)(*(long *)(lVar13 + 0x30) + 0x30));
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      do {
        lVar13 = *(long *)(*(long *)(lVar13 + 0x30) + 0x38);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        uVar2 = (ulong)*(ushort *)(lVar13 + 0x12a);
        lStack_148 = lVar13;
        if (uVar2 != 0) {
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *plVar5) {
              puVar4 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar12 = piVar12 + 4;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
        lVar9 = 0;
        puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_148);
code_r0x01a3f920:
        plVar8 = (long *)(*(code *)*puVar4)(&uStack_140,puVar4[1]);
        if (lVar3 == 0) {
          return plVar8;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(lVar3,0);
        if (extraout_w1_00 != 1) {
          auVar15 = __Unwind_Resume();
          lVar14 = auVar15._0_8_;
          plVar5 = (long *)(**(code **)**(undefined8 **)(lVar9 + 0x30))();
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x1e8))
                      (plVar5,lVar14,auVar15._8_8_,*(undefined8 *)(lVar14 + 0x38),
                       *(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(*plVar5 + 0x1f0),param_7,
                       param_8,lVar11,lVar10,lVar3,lVar13);
            return plVar5;
          }
          puVar4 = (undefined8 *)func_0x00f78af4();
          plVar5 = (long *)*puVar4;
          func_0x00f78a30();
          return plVar5;
        }
        plVar8 = (long *)___cxa_begin_catch();
        lVar3 = *plVar8;
        ___cxa_end_catch();
      } while( true );
    }
    lVar14 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_130,*(undefined8 *)(*(long *)(lVar13 + 0x30) + 0x20));
    if (lVar10 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar10,0);
    if (lVar14 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(long *)(lVar14 + 0x48) = lVar3;
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar9 = *(long *)(lVar11 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar14,lVar10,lVar9,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f504 | Atlas.Gameplay.Usables.UsableManager.GetActiveUsablesBelongingToKart<object>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_
                 (undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int extraout_w1;
  int extraout_w1_00;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar15 [16];
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lVar14 = 0x3eb6000;
  lVar9 = param_3;
  lVar11 = param_4;
  lVar13 = param_5;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == 0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_98,param_4,uRam0000000003d3a7d0);
  uStack_78 = uStack_90;
  lStack_80 = lStack_98;
  lStack_70 = lStack_88;
  while (uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_80,uRam0000000003d325c8), lVar10 = lStack_70,
        (uVar2 & 1) != 0) {
    lVar14 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar3 = func_0x00f78adc(lVar10,lVar14);
    if (lVar3 == 0) {
      func_0x00f78e5c(lVar10,lVar14);
      goto code_r0x01a3f6f0;
    }
    param_4 = lVar10;
    if ((*(long *)(lVar3 + 0x28) == param_2) && (*(char *)(lVar3 + 0x18) != '\0')) {
      if (param_3 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar9 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(param_3);
    }
  }
  param_5 = 0;
  do {
    lStack_98 = *unaff_x25;
    uVar2 = (ulong)*(ushort *)(lStack_98 + 0x12a);
    if (uVar2 != 0) {
      piVar12 = (int *)(*(long *)(lStack_98 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lStack_98 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar12 = piVar12 + 4;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    lVar9 = 0;
    puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_98);
code_r0x01a3f69c:
    plVar5 = (long *)(*(code *)*puVar4)(&uStack_90,puVar4[1]);
    if (param_5 == 0) {
      return plVar5;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    param_5 = *plVar5;
    ___cxa_end_catch();
  } while( true );
  auVar15 = __Unwind_Resume();
  lVar6 = auVar15._0_8_;
  puStack_a8 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar10 = lVar9;
  lVar3 = lVar11;
  lStack_d0 = param_4;
  lStack_c8 = param_2;
  lStack_c0 = param_3;
  lStack_b8 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((*(long *)(lVar6 + 0x20) != 0) &&
     (lVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x30))(), param_5 = lVar9,
     param_3 = auVar15._8_8_, param_4 = lVar11, lVar7 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 8))
                               (lVar6,auVar15._8_8_,lVar9,*(undefined8 *)(lVar7 + 0x10));
    return plVar5;
  }
  auVar15 = func_0x00f78af4();
  lVar11 = auVar15._8_8_;
  puStack_d8 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar5 = (long *)0x3eb6000;
  lVar9 = lVar10;
  plStack_110 = unaff_x24;
  lStack_108 = lVar14;
  lStack_100 = param_4;
  lStack_f8 = lVar6;
  lStack_f0 = param_3;
  lStack_e8 = param_5;
  ppuStack_e0 = &puStack_b0;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar15._0_8_ + 0x18) == 0) ||
       (lVar14 = (**(code **)**(undefined8 **)(lVar13 + 0x30))(), lVar14 == 0)) ||
      (lVar14 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))(), lVar14 == 0)) ||
     (lVar14 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x10))(), lVar14 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar5 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x18))(&lStack_148);
  uStack_128 = uStack_140;
  lStack_130 = lStack_148;
  uStack_120 = uStack_138;
  do {
    uVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_130,*(undefined8 *)(*(long *)(lVar13 + 0x30) + 0x30));
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      do {
        lVar13 = *(long *)(*(long *)(lVar13 + 0x30) + 0x38);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        uVar2 = (ulong)*(ushort *)(lVar13 + 0x12a);
        lStack_148 = lVar13;
        if (uVar2 != 0) {
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *plVar5) {
              puVar4 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar12 = piVar12 + 4;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
        lVar9 = 0;
        puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_148);
code_r0x01a3f920:
        plVar8 = (long *)(*(code *)*puVar4)(&uStack_140,puVar4[1]);
        if (lVar3 == 0) {
          return plVar8;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(lVar3,0);
        if (extraout_w1_00 != 1) {
          auVar15 = __Unwind_Resume();
          lVar14 = auVar15._0_8_;
          plVar5 = (long *)(**(code **)**(undefined8 **)(lVar9 + 0x30))();
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x1e8))
                      (plVar5,lVar14,auVar15._8_8_,*(undefined8 *)(lVar14 + 0x38),
                       *(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(*plVar5 + 0x1f0),param_7,
                       param_8,lVar11,lVar10,lVar3,lVar13);
            return plVar5;
          }
          puVar4 = (undefined8 *)func_0x00f78af4();
          plVar5 = (long *)*puVar4;
          func_0x00f78a30();
          return plVar5;
        }
        plVar8 = (long *)___cxa_begin_catch();
        lVar3 = *plVar8;
        ___cxa_end_catch();
      } while( true );
    }
    lVar14 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_130,*(undefined8 *)(*(long *)(lVar13 + 0x30) + 0x20));
    if (lVar10 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar10,0);
    if (lVar14 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(long *)(lVar14 + 0x48) = lVar3;
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar9 = *(long *)(lVar11 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar14,lVar10,lVar9,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f734 | Atlas.Gameplay.Usables.UsableManager.GetUsedUsablesBelongingToKart<object>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_
                 (long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  int extraout_w1;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined1 auVar11 [16];
  long lVar12;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar8 = param_3;
  lVar10 = param_4;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar2 = (**(code **)**(undefined8 **)(param_4 + 0x30))(), lVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 8))
                               (param_1,param_2,param_3,*(undefined8 *)(lVar2 + 0x10));
    return plVar3;
  }
  auVar11 = func_0x00f78af4();
  lVar12 = auVar11._8_8_;
  plVar3 = (long *)0x3eb6000;
  lVar2 = lVar8;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar11._0_8_ + 0x18) == 0) ||
       (lVar4 = (**(code **)**(undefined8 **)(param_5 + 0x30))(), lVar4 == 0)) ||
      (lVar4 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 8))(), lVar4 == 0)) ||
     (lVar4 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x10))(), lVar4 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar3 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x18))(&lStack_a8);
  uStack_88 = uStack_a0;
  lStack_90 = lStack_a8;
  uStack_80 = uStack_98;
  do {
    uVar5 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_90,*(undefined8 *)(*(long *)(param_5 + 0x30) + 0x30));
    if ((uVar5 & 1) == 0) {
      lVar10 = 0;
      do {
        param_5 = *(long *)(*(long *)(param_5 + 0x30) + 0x38);
        if ((*(ushort *)(param_5 + 0x132) & 1) == 0) {
          func_0x00fac028(param_5);
        }
        uVar5 = (ulong)*(ushort *)(param_5 + 0x12a);
        lStack_a8 = param_5;
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(param_5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *plVar3) {
              puVar6 = (undefined8 *)(param_5 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar9 = piVar9 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        lVar2 = 0;
        puVar6 = (undefined8 *)func_0x00fac1f0(&lStack_a8);
code_r0x01a3f920:
        plVar7 = (long *)(*(code *)*puVar6)(&uStack_a0,puVar6[1]);
        if (lVar10 == 0) {
          return plVar7;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(lVar10,0);
        if (extraout_w1 != 1) {
          auVar11 = __Unwind_Resume();
          lVar4 = auVar11._0_8_;
          plVar3 = (long *)(**(code **)**(undefined8 **)(lVar2 + 0x30))();
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x1e8))
                      (plVar3,lVar4,auVar11._8_8_,*(undefined8 *)(lVar4 + 0x38),
                       *(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(*plVar3 + 0x1f0),param_7,
                       param_8,lVar12,lVar8,lVar10,param_5);
            return plVar3;
          }
          puVar6 = (undefined8 *)func_0x00f78af4();
          plVar3 = (long *)*puVar6;
          func_0x00f78a30();
          return plVar3;
        }
        plVar7 = (long *)___cxa_begin_catch();
        lVar10 = *plVar7;
        ___cxa_end_catch();
      } while( true );
    }
    lVar4 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_90,*(undefined8 *)(*(long *)(param_5 + 0x30) + 0x20));
    if (lVar8 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar8,0);
    if (lVar4 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(long *)(lVar4 + 0x48) = lVar10;
    if (lVar12 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar2 = *(long *)(lVar12 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar4,lVar8,lVar2,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f7a0 | Atlas.Gameplay.Usables.UsableManager.InitLightMembers<BoostUsableBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__InitLightMembers_BoostUsableBehaviour_
                 (long param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar8 = (long *)0x3eb6000;
  lVar6 = param_3;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(param_5 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar8 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x18))(&lStack_78);
  uStack_58 = uStack_70;
  lStack_60 = lStack_78;
  uStack_50 = uStack_68;
  do {
    uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_60,*(undefined8 *)(*(long *)(param_5 + 0x30) + 0x30));
    if ((uVar3 & 1) == 0) {
      param_4 = 0;
      do {
        param_5 = *(long *)(*(long *)(param_5 + 0x30) + 0x38);
        if ((*(ushort *)(param_5 + 0x132) & 1) == 0) {
          func_0x00fac028(param_5);
        }
        uVar3 = (ulong)*(ushort *)(param_5 + 0x12a);
        lStack_78 = param_5;
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(param_5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *plVar8) {
              puVar4 = (undefined8 *)(param_5 + (long)*piVar7 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar7 = piVar7 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        lVar6 = 0;
        puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_78);
code_r0x01a3f920:
        plVar5 = (long *)(*(code *)*puVar4)(&uStack_70,puVar4[1]);
        if (param_4 == 0) {
          return plVar5;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(param_4,0);
        if (extraout_w1 != 1) {
          auVar9 = __Unwind_Resume();
          lVar2 = auVar9._0_8_;
          plVar8 = (long *)(**(code **)**(undefined8 **)(lVar6 + 0x30))();
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x1e8))
                      (plVar8,lVar2,auVar9._8_8_,*(undefined8 *)(lVar2 + 0x38),
                       *(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(*plVar8 + 0x1f0),param_7,
                       param_8,param_2,param_3,param_4,param_5);
            return plVar8;
          }
          puVar4 = (undefined8 *)func_0x00f78af4();
          plVar8 = (long *)*puVar4;
          func_0x00f78a30();
          return plVar8;
        }
        plVar5 = (long *)___cxa_begin_catch();
        param_4 = *plVar5;
        ___cxa_end_catch();
      } while( true );
    }
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_60,*(undefined8 *)(*(long *)(param_5 + 0x30) + 0x20));
    if (param_3 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(param_3,0);
    if (lVar2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(long *)(lVar2 + 0x48) = param_4;
    if (param_2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar6 = *(long *)(param_2 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar2,param_3,lVar6,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f7a0 | Atlas.Gameplay.Usables.UsableManager.InitLightMembers<GoldenTurdProjectileBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__InitLightMembers_BoostUsableBehaviour_
                 (long param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar8 = (long *)0x3eb6000;
  lVar6 = param_3;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(param_5 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar8 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x18))(&lStack_78);
  uStack_58 = uStack_70;
  lStack_60 = lStack_78;
  uStack_50 = uStack_68;
  do {
    uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_60,*(undefined8 *)(*(long *)(param_5 + 0x30) + 0x30));
    if ((uVar3 & 1) == 0) {
      param_4 = 0;
      do {
        param_5 = *(long *)(*(long *)(param_5 + 0x30) + 0x38);
        if ((*(ushort *)(param_5 + 0x132) & 1) == 0) {
          func_0x00fac028(param_5);
        }
        uVar3 = (ulong)*(ushort *)(param_5 + 0x12a);
        lStack_78 = param_5;
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(param_5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *plVar8) {
              puVar4 = (undefined8 *)(param_5 + (long)*piVar7 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar7 = piVar7 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        lVar6 = 0;
        puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_78);
code_r0x01a3f920:
        plVar5 = (long *)(*(code *)*puVar4)(&uStack_70,puVar4[1]);
        if (param_4 == 0) {
          return plVar5;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(param_4,0);
        if (extraout_w1 != 1) {
          auVar9 = __Unwind_Resume();
          lVar2 = auVar9._0_8_;
          plVar8 = (long *)(**(code **)**(undefined8 **)(lVar6 + 0x30))();
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x1e8))
                      (plVar8,lVar2,auVar9._8_8_,*(undefined8 *)(lVar2 + 0x38),
                       *(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(*plVar8 + 0x1f0),param_7,
                       param_8,param_2,param_3,param_4,param_5);
            return plVar8;
          }
          puVar4 = (undefined8 *)func_0x00f78af4();
          plVar8 = (long *)*puVar4;
          func_0x00f78a30();
          return plVar8;
        }
        plVar5 = (long *)___cxa_begin_catch();
        param_4 = *plVar5;
        ___cxa_end_catch();
      } while( true );
    }
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_60,*(undefined8 *)(*(long *)(param_5 + 0x30) + 0x20));
    if (param_3 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(param_3,0);
    if (lVar2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(long *)(lVar2 + 0x48) = param_4;
    if (param_2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar6 = *(long *)(param_2 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar2,param_3,lVar6,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f7a0 | Atlas.Gameplay.Usables.UsableManager.InitLightMembers<NormalShieldUsableBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__InitLightMembers_BoostUsableBehaviour_
                 (long param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar8 = (long *)0x3eb6000;
  lVar6 = param_3;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(param_5 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar8 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x18))(&lStack_78);
  uStack_58 = uStack_70;
  lStack_60 = lStack_78;
  uStack_50 = uStack_68;
  do {
    uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_60,*(undefined8 *)(*(long *)(param_5 + 0x30) + 0x30));
    if ((uVar3 & 1) == 0) {
      param_4 = 0;
      do {
        param_5 = *(long *)(*(long *)(param_5 + 0x30) + 0x38);
        if ((*(ushort *)(param_5 + 0x132) & 1) == 0) {
          func_0x00fac028(param_5);
        }
        uVar3 = (ulong)*(ushort *)(param_5 + 0x12a);
        lStack_78 = param_5;
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(param_5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *plVar8) {
              puVar4 = (undefined8 *)(param_5 + (long)*piVar7 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar7 = piVar7 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        lVar6 = 0;
        puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_78);
code_r0x01a3f920:
        plVar5 = (long *)(*(code *)*puVar4)(&uStack_70,puVar4[1]);
        if (param_4 == 0) {
          return plVar5;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(param_4,0);
        if (extraout_w1 != 1) {
          auVar9 = __Unwind_Resume();
          lVar2 = auVar9._0_8_;
          plVar8 = (long *)(**(code **)**(undefined8 **)(lVar6 + 0x30))();
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x1e8))
                      (plVar8,lVar2,auVar9._8_8_,*(undefined8 *)(lVar2 + 0x38),
                       *(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(*plVar8 + 0x1f0),param_7,
                       param_8,param_2,param_3,param_4,param_5);
            return plVar8;
          }
          puVar4 = (undefined8 *)func_0x00f78af4();
          plVar8 = (long *)*puVar4;
          func_0x00f78a30();
          return plVar8;
        }
        plVar5 = (long *)___cxa_begin_catch();
        param_4 = *plVar5;
        ___cxa_end_catch();
      } while( true );
    }
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_60,*(undefined8 *)(*(long *)(param_5 + 0x30) + 0x20));
    if (param_3 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(param_3,0);
    if (lVar2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(long *)(lVar2 + 0x48) = param_4;
    if (param_2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar6 = *(long *)(param_2 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar2,param_3,lVar6,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f7a0 | Atlas.Gameplay.Usables.UsableManager.InitLightMembers<PlacementHomingProjectileBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__InitLightMembers_BoostUsableBehaviour_
                 (long param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar8 = (long *)0x3eb6000;
  lVar6 = param_3;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(param_5 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar8 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x18))(&lStack_78);
  uStack_58 = uStack_70;
  lStack_60 = lStack_78;
  uStack_50 = uStack_68;
  do {
    uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_60,*(undefined8 *)(*(long *)(param_5 + 0x30) + 0x30));
    if ((uVar3 & 1) == 0) {
      param_4 = 0;
      do {
        param_5 = *(long *)(*(long *)(param_5 + 0x30) + 0x38);
        if ((*(ushort *)(param_5 + 0x132) & 1) == 0) {
          func_0x00fac028(param_5);
        }
        uVar3 = (ulong)*(ushort *)(param_5 + 0x12a);
        lStack_78 = param_5;
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(param_5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *plVar8) {
              puVar4 = (undefined8 *)(param_5 + (long)*piVar7 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar7 = piVar7 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        lVar6 = 0;
        puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_78);
code_r0x01a3f920:
        plVar5 = (long *)(*(code *)*puVar4)(&uStack_70,puVar4[1]);
        if (param_4 == 0) {
          return plVar5;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(param_4,0);
        if (extraout_w1 != 1) {
          auVar9 = __Unwind_Resume();
          lVar2 = auVar9._0_8_;
          plVar8 = (long *)(**(code **)**(undefined8 **)(lVar6 + 0x30))();
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x1e8))
                      (plVar8,lVar2,auVar9._8_8_,*(undefined8 *)(lVar2 + 0x38),
                       *(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(*plVar8 + 0x1f0),param_7,
                       param_8,param_2,param_3,param_4,param_5);
            return plVar8;
          }
          puVar4 = (undefined8 *)func_0x00f78af4();
          plVar8 = (long *)*puVar4;
          func_0x00f78a30();
          return plVar8;
        }
        plVar5 = (long *)___cxa_begin_catch();
        param_4 = *plVar5;
        ___cxa_end_catch();
      } while( true );
    }
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_60,*(undefined8 *)(*(long *)(param_5 + 0x30) + 0x20));
    if (param_3 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(param_3,0);
    if (lVar2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(long *)(lVar2 + 0x48) = param_4;
    if (param_2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar6 = *(long *)(param_2 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar2,param_3,lVar6,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f7a0 | Atlas.Gameplay.Usables.UsableManager.InitLightMembers<ProximityHomingProjectileBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__InitLightMembers_BoostUsableBehaviour_
                 (long param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar8 = (long *)0x3eb6000;
  lVar6 = param_3;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(param_5 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar8 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x18))(&lStack_78);
  uStack_58 = uStack_70;
  lStack_60 = lStack_78;
  uStack_50 = uStack_68;
  do {
    uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_60,*(undefined8 *)(*(long *)(param_5 + 0x30) + 0x30));
    if ((uVar3 & 1) == 0) {
      param_4 = 0;
      do {
        param_5 = *(long *)(*(long *)(param_5 + 0x30) + 0x38);
        if ((*(ushort *)(param_5 + 0x132) & 1) == 0) {
          func_0x00fac028(param_5);
        }
        uVar3 = (ulong)*(ushort *)(param_5 + 0x12a);
        lStack_78 = param_5;
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(param_5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *plVar8) {
              puVar4 = (undefined8 *)(param_5 + (long)*piVar7 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar7 = piVar7 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        lVar6 = 0;
        puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_78);
code_r0x01a3f920:
        plVar5 = (long *)(*(code *)*puVar4)(&uStack_70,puVar4[1]);
        if (param_4 == 0) {
          return plVar5;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(param_4,0);
        if (extraout_w1 != 1) {
          auVar9 = __Unwind_Resume();
          lVar2 = auVar9._0_8_;
          plVar8 = (long *)(**(code **)**(undefined8 **)(lVar6 + 0x30))();
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x1e8))
                      (plVar8,lVar2,auVar9._8_8_,*(undefined8 *)(lVar2 + 0x38),
                       *(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(*plVar8 + 0x1f0),param_7,
                       param_8,param_2,param_3,param_4,param_5);
            return plVar8;
          }
          puVar4 = (undefined8 *)func_0x00f78af4();
          plVar8 = (long *)*puVar4;
          func_0x00f78a30();
          return plVar8;
        }
        plVar5 = (long *)___cxa_begin_catch();
        param_4 = *plVar5;
        ___cxa_end_catch();
      } while( true );
    }
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_60,*(undefined8 *)(*(long *)(param_5 + 0x30) + 0x20));
    if (param_3 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(param_3,0);
    if (lVar2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(long *)(lVar2 + 0x48) = param_4;
    if (param_2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar6 = *(long *)(param_2 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar2,param_3,lVar6,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f7a0 | Atlas.Gameplay.Usables.UsableManager.InitLightMembers<RicochetProjectileBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__InitLightMembers_BoostUsableBehaviour_
                 (long param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar8 = (long *)0x3eb6000;
  lVar6 = param_3;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(param_5 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar8 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x18))(&lStack_78);
  uStack_58 = uStack_70;
  lStack_60 = lStack_78;
  uStack_50 = uStack_68;
  do {
    uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_60,*(undefined8 *)(*(long *)(param_5 + 0x30) + 0x30));
    if ((uVar3 & 1) == 0) {
      param_4 = 0;
      do {
        param_5 = *(long *)(*(long *)(param_5 + 0x30) + 0x38);
        if ((*(ushort *)(param_5 + 0x132) & 1) == 0) {
          func_0x00fac028(param_5);
        }
        uVar3 = (ulong)*(ushort *)(param_5 + 0x12a);
        lStack_78 = param_5;
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(param_5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *plVar8) {
              puVar4 = (undefined8 *)(param_5 + (long)*piVar7 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar7 = piVar7 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        lVar6 = 0;
        puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_78);
code_r0x01a3f920:
        plVar5 = (long *)(*(code *)*puVar4)(&uStack_70,puVar4[1]);
        if (param_4 == 0) {
          return plVar5;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(param_4,0);
        if (extraout_w1 != 1) {
          auVar9 = __Unwind_Resume();
          lVar2 = auVar9._0_8_;
          plVar8 = (long *)(**(code **)**(undefined8 **)(lVar6 + 0x30))();
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x1e8))
                      (plVar8,lVar2,auVar9._8_8_,*(undefined8 *)(lVar2 + 0x38),
                       *(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(*plVar8 + 0x1f0),param_7,
                       param_8,param_2,param_3,param_4,param_5);
            return plVar8;
          }
          puVar4 = (undefined8 *)func_0x00f78af4();
          plVar8 = (long *)*puVar4;
          func_0x00f78a30();
          return plVar8;
        }
        plVar5 = (long *)___cxa_begin_catch();
        param_4 = *plVar5;
        ___cxa_end_catch();
      } while( true );
    }
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_60,*(undefined8 *)(*(long *)(param_5 + 0x30) + 0x20));
    if (param_3 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(param_3,0);
    if (lVar2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(long *)(lVar2 + 0x48) = param_4;
    if (param_2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar6 = *(long *)(param_2 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar2,param_3,lVar6,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f7a0 | Atlas.Gameplay.Usables.UsableManager.InitLightMembers<SatelliteUsableBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__InitLightMembers_BoostUsableBehaviour_
                 (long param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar8 = (long *)0x3eb6000;
  lVar6 = param_3;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(param_5 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar8 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x18))(&lStack_78);
  uStack_58 = uStack_70;
  lStack_60 = lStack_78;
  uStack_50 = uStack_68;
  do {
    uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_60,*(undefined8 *)(*(long *)(param_5 + 0x30) + 0x30));
    if ((uVar3 & 1) == 0) {
      param_4 = 0;
      do {
        param_5 = *(long *)(*(long *)(param_5 + 0x30) + 0x38);
        if ((*(ushort *)(param_5 + 0x132) & 1) == 0) {
          func_0x00fac028(param_5);
        }
        uVar3 = (ulong)*(ushort *)(param_5 + 0x12a);
        lStack_78 = param_5;
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(param_5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *plVar8) {
              puVar4 = (undefined8 *)(param_5 + (long)*piVar7 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar7 = piVar7 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        lVar6 = 0;
        puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_78);
code_r0x01a3f920:
        plVar5 = (long *)(*(code *)*puVar4)(&uStack_70,puVar4[1]);
        if (param_4 == 0) {
          return plVar5;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(param_4,0);
        if (extraout_w1 != 1) {
          auVar9 = __Unwind_Resume();
          lVar2 = auVar9._0_8_;
          plVar8 = (long *)(**(code **)**(undefined8 **)(lVar6 + 0x30))();
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x1e8))
                      (plVar8,lVar2,auVar9._8_8_,*(undefined8 *)(lVar2 + 0x38),
                       *(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(*plVar8 + 0x1f0),param_7,
                       param_8,param_2,param_3,param_4,param_5);
            return plVar8;
          }
          puVar4 = (undefined8 *)func_0x00f78af4();
          plVar8 = (long *)*puVar4;
          func_0x00f78a30();
          return plVar8;
        }
        plVar5 = (long *)___cxa_begin_catch();
        param_4 = *plVar5;
        ___cxa_end_catch();
      } while( true );
    }
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_60,*(undefined8 *)(*(long *)(param_5 + 0x30) + 0x20));
    if (param_3 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(param_3,0);
    if (lVar2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(long *)(lVar2 + 0x48) = param_4;
    if (param_2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar6 = *(long *)(param_2 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar2,param_3,lVar6,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f7a0 | Atlas.Gameplay.Usables.UsableManager.InitLightMembers<SuperShieldUsableBehaviour>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__InitLightMembers_BoostUsableBehaviour_
                 (long param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar8 = (long *)0x3eb6000;
  lVar6 = param_3;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(param_5 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar8 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x18))(&lStack_78);
  uStack_58 = uStack_70;
  lStack_60 = lStack_78;
  uStack_50 = uStack_68;
  do {
    uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_60,*(undefined8 *)(*(long *)(param_5 + 0x30) + 0x30));
    if ((uVar3 & 1) == 0) {
      param_4 = 0;
      do {
        param_5 = *(long *)(*(long *)(param_5 + 0x30) + 0x38);
        if ((*(ushort *)(param_5 + 0x132) & 1) == 0) {
          func_0x00fac028(param_5);
        }
        uVar3 = (ulong)*(ushort *)(param_5 + 0x12a);
        lStack_78 = param_5;
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(param_5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *plVar8) {
              puVar4 = (undefined8 *)(param_5 + (long)*piVar7 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar7 = piVar7 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        lVar6 = 0;
        puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_78);
code_r0x01a3f920:
        plVar5 = (long *)(*(code *)*puVar4)(&uStack_70,puVar4[1]);
        if (param_4 == 0) {
          return plVar5;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(param_4,0);
        if (extraout_w1 != 1) {
          auVar9 = __Unwind_Resume();
          lVar2 = auVar9._0_8_;
          plVar8 = (long *)(**(code **)**(undefined8 **)(lVar6 + 0x30))();
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x1e8))
                      (plVar8,lVar2,auVar9._8_8_,*(undefined8 *)(lVar2 + 0x38),
                       *(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(*plVar8 + 0x1f0),param_7,
                       param_8,param_2,param_3,param_4,param_5);
            return plVar8;
          }
          puVar4 = (undefined8 *)func_0x00f78af4();
          plVar8 = (long *)*puVar4;
          func_0x00f78a30();
          return plVar8;
        }
        plVar5 = (long *)___cxa_begin_catch();
        param_4 = *plVar5;
        ___cxa_end_catch();
      } while( true );
    }
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_60,*(undefined8 *)(*(long *)(param_5 + 0x30) + 0x20));
    if (param_3 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(param_3,0);
    if (lVar2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(long *)(lVar2 + 0x48) = param_4;
    if (param_2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar6 = *(long *)(param_2 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar2,param_3,lVar6,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f7a0 | Atlas.Gameplay.Usables.UsableManager.InitLightMembers<object>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__InitLightMembers_BoostUsableBehaviour_
                 (long param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar8 = (long *)0x3eb6000;
  lVar6 = param_3;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = (**(code **)**(undefined8 **)(param_5 + 0x30))(), lVar2 == 0)) ||
      (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 8))(), lVar2 == 0)) ||
     (lVar2 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x10))(), lVar2 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar8 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x18))(&lStack_78);
  uStack_58 = uStack_70;
  lStack_60 = lStack_78;
  uStack_50 = uStack_68;
  do {
    uVar3 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_60,*(undefined8 *)(*(long *)(param_5 + 0x30) + 0x30));
    if ((uVar3 & 1) == 0) {
      param_4 = 0;
      do {
        param_5 = *(long *)(*(long *)(param_5 + 0x30) + 0x38);
        if ((*(ushort *)(param_5 + 0x132) & 1) == 0) {
          func_0x00fac028(param_5);
        }
        uVar3 = (ulong)*(ushort *)(param_5 + 0x12a);
        lStack_78 = param_5;
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(param_5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *plVar8) {
              puVar4 = (undefined8 *)(param_5 + (long)*piVar7 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar7 = piVar7 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        lVar6 = 0;
        puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_78);
code_r0x01a3f920:
        plVar5 = (long *)(*(code *)*puVar4)(&uStack_70,puVar4[1]);
        if (param_4 == 0) {
          return plVar5;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(param_4,0);
        if (extraout_w1 != 1) {
          auVar9 = __Unwind_Resume();
          lVar2 = auVar9._0_8_;
          plVar8 = (long *)(**(code **)**(undefined8 **)(lVar6 + 0x30))();
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x1e8))
                      (plVar8,lVar2,auVar9._8_8_,*(undefined8 *)(lVar2 + 0x38),
                       *(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(*plVar8 + 0x1f0),param_7,
                       param_8,param_2,param_3,param_4,param_5);
            return plVar8;
          }
          puVar4 = (undefined8 *)func_0x00f78af4();
          plVar8 = (long *)*puVar4;
          func_0x00f78a30();
          return plVar8;
        }
        plVar5 = (long *)___cxa_begin_catch();
        param_4 = *plVar5;
        ___cxa_end_catch();
      } while( true );
    }
    lVar2 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_60,*(undefined8 *)(*(long *)(param_5 + 0x30) + 0x20));
    if (param_3 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(param_3,0);
    if (lVar2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(long *)(lVar2 + 0x48) = param_4;
    if (param_2 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar6 = *(long *)(param_2 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar2,param_3,lVar6,0);
  } while( true );
}



// ============================================================
// RVA: 0x1a3f9ac | Atlas.Gameplay.Usables.UsableManager.InitUsable<object>
// ============================================================

long * Atlas_Gameplay_Usables_UsableManager__InitUsable_object_
                 (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)(**(code **)**(undefined8 **)(param_3 + 0x30))();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x1e8))
              (plVar1,param_1,param_2,*(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(*plVar1 + 0x1f0));
    return plVar1;
  }
  puVar2 = (undefined8 *)func_0x00f78af4();
  plVar1 = (long *)*puVar2;
  func_0x00f78a30();
  return plVar1;
}



