// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.CollectibleBehaviour

// ============================================================
// RVA: 0x156fd08 | Atlas.Gameplay.CollectibleBehaviour.add_OnEnter
// ============================================================

ulong Atlas_Gameplay_CollectibleBehaviour__add_OnEnter(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb502a & 1) == 0) {
    func_0x00f78a20(0x3d26d08);
    bRam0000000003eb502a = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x18);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.CollectibleBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d26d08))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x18),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb502b & 1) == 0) {
    func_0x00f78a20(0x3d26d08);
    bRam0000000003eb502b = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x18);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.CollectibleBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d26d08))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return (ulong)*(uint *)(lVar4 + 0x20);
}



// ============================================================
// RVA: 0x156fda8 | Atlas.Gameplay.CollectibleBehaviour.remove_OnEnter
// ============================================================

ulong Atlas_Gameplay_CollectibleBehaviour__remove_OnEnter(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((bRam0000000003eb502b & 1) == 0) {
    func_0x00f78a20(0x3d26d08);
    bRam0000000003eb502b = 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x18);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.CollectibleBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d26d08))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x18),plVar2,uVar5);
    bVar1 = uVar5 == uVar3;
    uVar5 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return (ulong)*(uint *)(lVar4 + 0x20);
}



// ============================================================
// RVA: 0x156fe48 | Atlas.Gameplay.CollectibleBehaviour.get_ID
// ============================================================

undefined4 Atlas_Gameplay_CollectibleBehaviour__get_ID(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x156fe50 | Atlas.Gameplay.CollectibleBehaviour.set_ID
// ============================================================

void Atlas_Gameplay_CollectibleBehaviour__set_ID(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ============================================================
// RVA: 0x156fe58 | Atlas.Gameplay.CollectibleBehaviour.OnTriggerEnter
// ============================================================

void Atlas_Gameplay_CollectibleBehaviour__OnTriggerEnter(long *param_1)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_58;
  
  lVar8 = param_1[3];
  if (lVar8 == 0) {
    return;
  }
  lStack_58 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_58;
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
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x01';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x0154a4d8:
          (*pcVar14)(param_1,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x0154a3d0;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,param_1,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x0154a4e4;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar7 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x0154a670;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x0154a670:
            pcVar14 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
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
                    goto code_r0x0154a648;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x0154a648:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_1,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x0154a4d8;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_1,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x0154a4e4;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_1;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x0154a60c;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_1,lVar10,(ulong)uVar2);
code_r0x0154a60c:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x0154a5e4;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_1);
code_r0x0154a5e4:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_1,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x0154a4d8;
code_r0x0154a3d0:
      (*pcVar14)(plVar1,param_1,lVar10);
    }
code_r0x0154a4e4:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x156fe70 | Atlas.Gameplay.CollectibleBehaviour.ClearDelegates
// ============================================================

void Atlas_Gameplay_CollectibleBehaviour__ClearDelegates(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// ============================================================
// RVA: 0x156fe78 | Atlas.Gameplay.CollectibleBehaviour.PlayDestroyAnimation
// ============================================================

undefined1  [16] Atlas_Gameplay_CollectibleBehaviour__PlayDestroyAnimation(undefined8 param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
  if (lVar1 != 0) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (*pcRam0000000003ebf4c0)(lVar1,0);
    return auVar2;
  }
  auVar2._0_8_ = func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  return auVar2;
}



// ============================================================
// RVA: 0x156fea0 | Atlas.Gameplay.CollectibleBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_CollectibleBehaviour___ctor(ulong param_1)

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



