// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Save.SaveManager.<ResetDependantSystems>d__52

// ============================================================
// RVA: 0x1568c6c | Atlas.Save.SaveManager.<ResetDependantSystems>d__52..ctor
// ============================================================

void Atlas_Save_SaveManager__ResetDependantSystems_d__52___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1568c98 | Atlas.Save.SaveManager.<ResetDependantSystems>d__52.System.IDisposable.Dispose
// ============================================================

void Atlas_Save_SaveManager__ResetDependantSystems_d__52__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1568c9c | Atlas.Save.SaveManager.<ResetDependantSystems>d__52.MoveNext
// ============================================================

ulong Atlas_Save_SaveManager__ResetDependantSystems_d__52__MoveNext(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000003eb4ff1 & 1) == 0) {
    func_0x00f78a20(0x3d688d8);
    bRam0000000003eb4ff1 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar5 != 0) && (lVar4 = *(long *)(lVar5 + 0xf0), lVar4 != 0)) {
      if (*(uint *)(lVar4 + 0x18) <= *(uint *)(lVar5 + 0xf8)) goto code_r0x01568e1c;
      *(undefined8 *)(param_1 + 0x28) =
           *(undefined8 *)(lVar4 + (ulong)*(uint *)(lVar5 + 0xf8) * 8 + 0x20);
      uVar2 = Atlas_Save_SaveManager__GetIntData(lVar5,/*STR('AM_Consent')*/ uRam0000000003d688d8,0,0);
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(lVar5 + 0x58) != 0)) {
        /*Atlas.Stats.StatsManager$$ResetAndSet*/ func_0x015050a0(*(long *)(lVar5 + 0x58),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30),0)
        ;
        if (*(long *)(lVar5 + 0x88) != 0) {
          /*Atlas.Stats.AchievementManager$$ResetAndPopulate*/ func_0x01446c08(*(long *)(lVar5 + 0x88),*(undefined8 *)(lVar5 + 0x58),
                          *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar5 + 0x78),0);
          if (*(long *)(lVar5 + 0x68) != 0) {
            /*Atlas.Stats.UnlockManager$$Reset*/ func_0x0151de94(*(long *)(lVar5 + 0x68),0);
            if (*(long *)(lVar5 + 0x80) != 0) {
              Atlas_FrontEnd_FTUEManager__Reset(*(long *)(lVar5 + 0x80),0);
              if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(lVar5 + 0x90) != 0)) {
                uVar3 = /*Core.Localisation.LocalisationManager$$TrySetLanguageOrUseSystemThenDefault*/ func_0x0164fa9c(*(long *)(lVar5 + 0x90),
                                        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20),0);
                *(undefined8 *)(param_1 + 0x18) = uVar3;
                *(undefined4 *)(param_1 + 0x10) = 1;
                goto LAB_01568e00;
              }
            }
          }
        }
      }
    }
  }
  else {
    if (iVar1 != 1) {
LAB_01568e00:
      return (ulong)(iVar1 == 0);
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((lVar5 != 0) && (*(long *)(lVar5 + 0x90) != 0)) && (*(long *)(param_1 + 0x28) != 0)) {
      *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20) =
           *(undefined8 *)(*(long *)(lVar5 + 0x90) + 0x58);
      if (*(long *)(lVar5 + 0x98) != 0) {
        /*Atlas.Analytics.AtlasAnalyticsManager$$SaveChanged*/ func_0x01457948(*(long *)(lVar5 + 0x98),*(int *)(param_1 + 0x30) == 2,
                        *(int *)(param_1 + 0x30) == 1,0);
        goto LAB_01568e00;
      }
    }
  }
  func_0x00f78af4();
code_r0x01568e1c:
  uVar3 = func_0x00f78b24();
  lVar5 = func_0x00f78ac0(uVar3,0);
  return *(ulong *)(lVar5 + 0x18);
}



// ============================================================
// RVA: 0x1568e28 | Atlas.Save.SaveManager.<ResetDependantSystems>d__52.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Save_SaveManager__ResetDependantSystems_d__52__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1568e30 | Atlas.Save.SaveManager.<ResetDependantSystems>d__52.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_Save_SaveManager__ResetDependantSystems_d__52__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63ca8);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1568e70 | Atlas.Save.SaveManager.<ResetDependantSystems>d__52.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Save_SaveManager__ResetDependantSystems_d__52__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



