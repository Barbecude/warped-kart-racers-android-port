// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Maps.MapSequenceBehaviour

// ============================================================
// RVA: 0x148dc88 | Atlas.Maps.MapSequenceBehaviour.add_OnTimelineEvent
// ============================================================

long Atlas_Maps_MapSequenceBehaviour__add_OnTimelineEvent(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4982 & 1) == 0) {
    func_0x00f78a20(0x3d1b5e0);
    bRam0000000003eb4982 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<MapSequenceBehaviour.TimelineEvent>_TypeInfo*/ lRam0000000003d1b5e0))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x18),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4983 & 1) == 0) {
    func_0x00f78a20(0x3d1b5e0);
    bRam0000000003eb4983 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x18);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*System.Action<MapSequenceBehaviour.TimelineEvent>_TypeInfo*/ lRam0000000003d1b5e0))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  lVar5 = func_0x00f78e5c(plVar4);
  return *(long *)(lVar5 + 0x20);
}



// ============================================================
// RVA: 0x148dd28 | Atlas.Maps.MapSequenceBehaviour.remove_OnTimelineEvent
// ============================================================

long Atlas_Maps_MapSequenceBehaviour__remove_OnTimelineEvent(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000003eb4983 & 1) == 0) {
    func_0x00f78a20(0x3d1b5e0);
    bRam0000000003eb4983 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<MapSequenceBehaviour.TimelineEvent>_TypeInfo*/ lRam0000000003d1b5e0))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x18),plVar2,lVar4);
    bVar1 = lVar4 == lVar3;
    lVar4 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return *(long *)(lVar4 + 0x20);
}



// ============================================================
// RVA: 0x148ddc8 | Atlas.Maps.MapSequenceBehaviour.get_IntroOutroCameraParentTransform
// ============================================================

undefined8 Atlas_Maps_MapSequenceBehaviour__get_IntroOutroCameraParentTransform(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x148ddd0 | Atlas.Maps.MapSequenceBehaviour.get_Director
// ============================================================

undefined8 Atlas_Maps_MapSequenceBehaviour__get_Director(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x148ddd8 | Atlas.Maps.MapSequenceBehaviour.get_VirtualCamera
// ============================================================

undefined8 Atlas_Maps_MapSequenceBehaviour__get_VirtualCamera(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x148dde0 | Atlas.Maps.MapSequenceBehaviour.get_MapPan
// ============================================================

undefined8 Atlas_Maps_MapSequenceBehaviour__get_MapPan(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x148dde8 | Atlas.Maps.MapSequenceBehaviour.get_IntroPlayerPan
// ============================================================

undefined8 Atlas_Maps_MapSequenceBehaviour__get_IntroPlayerPan(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x148ddf0 | Atlas.Maps.MapSequenceBehaviour.get_IntroTimings
// ============================================================

undefined4 Atlas_Maps_MapSequenceBehaviour__get_IntroTimings(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x148ddfc | Atlas.Maps.MapSequenceBehaviour.get_OutroPlayerPan
// ============================================================

undefined8 Atlas_Maps_MapSequenceBehaviour__get_OutroPlayerPan(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x148de04 | Atlas.Maps.MapSequenceBehaviour.get_AutoDriveCameraChangePansPrimary
// ============================================================

undefined8 Atlas_Maps_MapSequenceBehaviour__get_AutoDriveCameraChangePansPrimary(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x148de0c | Atlas.Maps.MapSequenceBehaviour.get_AutoDriveCameraChangePansSecondary
// ============================================================

undefined8 Atlas_Maps_MapSequenceBehaviour__get_AutoDriveCameraChangePansSecondary(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x148de14 | Atlas.Maps.MapSequenceBehaviour.TriggerVO
// ============================================================

void Atlas_Maps_MapSequenceBehaviour__TriggerVO(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined4 uVar2;
  ushort uVar3;
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
  undefined1 auStack_6c [16];
  undefined4 uStack_5c;
  long lStack_58;
  
  if ((bRam0000000003eb4984 & 1) == 0) {
    func_0x00f78a20(0x3d2a3d0);
    bRam0000000003eb4984 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) {
    return;
  }
  lStack_58 = lVar6;
  lVar9 = *(long *)(lVar6 + 0x68);
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
  uStack_5c = param_2;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    if (iVar4 == 0) {
      if (plVar1 == (long *)0x0) {
        (*pcVar14)(auStack_6c,lVar10);
      }
      else {
        if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(lVar6 + 0x18) == 0)) goto code_r0x01b47ed4;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        uVar2 = uStack_5c;
        if (iVar4 == 0) {
          uVar3 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *plVar1 + (ulong)uVar3 * 0x10;
            (**(code **)(lVar10 + 0x138))(plVar1,uStack_5c,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01b47ef4;
          }
          lVar10 = func_0x00f78a48(lVar10);
          uVar2 = uStack_5c;
          lVar11 = *plVar1;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar8 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar3) * 0x10 + 0x138)
                ;
                goto code_r0x01b47fc8;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar3);
code_r0x01b47fc8:
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
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01b47f98;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(plVar1);
code_r0x01b47f98:
            uVar7 = *(undefined8 *)(lVar11 + 8);
          }
          puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar10);
          pcVar14 = (code *)*puVar8;
        }
        (*pcVar14)(plVar1,uVar2,puVar8);
      }
    }
    else if (*(char *)(lVar10 + 0x4a) == '\x01') {
      (*pcVar14)(uStack_5c,lVar10);
    }
    else {
code_r0x01b47ed4:
      (*pcVar14)(plVar1,uStack_5c,lVar10);
    }
code_r0x01b47ef4:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x148de84 | Atlas.Maps.MapSequenceBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Maps_MapSequenceBehaviour___ctor(ulong param_1)

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



