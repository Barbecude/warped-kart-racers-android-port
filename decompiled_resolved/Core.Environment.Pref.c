// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Environment.Pref

// ============================================================
// RVA: 0x1646484 | Core.Environment.Pref.CreateBool
// ============================================================

/* WARNING: Possible PIC construction at 0x016464d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016464d8) */
/* WARNING: Removing unreachable block (ram,0x0164650c) */
/* WARNING: Removing unreachable block (ram,0x016464dc) */

void Core_Environment_Pref__CreateBool(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb5758 & 1) == 0) {
    func_0x00f78a20(0x3d23e18);
    bRam0000000003eb5758 = 1;
  }
  lVar2 = func_0x00f78aec(/*Core.Environment.Pref_TypeInfo*/ uRam0000000003d23e18);
  if ((bRam0000000003eb575b & 1) == 0) {
    func_0x00f78a20(0x3d6c378);
    bRam0000000003eb575b = 1;
  }
  /*System.Object$$.ctor*/ func_0x0294d018(lVar2,0);
  uVar3 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('EnvPref_')*/ uRam0000000003d6c378,param_1,0);
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  iVar1 = /*UnityEngine.PlayerPrefs$$GetInt*/ func_0x03250868(uVar3,0);
  *(bool *)(lVar2 + 0x10) = 0 < iVar1;
  return;
}



// ============================================================
// RVA: 0x1646510 | Core.Environment.Pref..ctor
// ============================================================

void Core_Environment_Pref___ctor(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb575b & 1) == 0) {
    func_0x00f78a20(0x3d6c378);
    bRam0000000003eb575b = 1;
  }
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  uVar2 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('EnvPref_')*/ uRam0000000003d6c378,param_2,0);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  iVar1 = /*UnityEngine.PlayerPrefs$$GetInt*/ func_0x03250868(uVar2,0);
  *(bool *)(param_1 + 0x10) = 0 < iVar1;
  return;
}



// ============================================================
// RVA: 0x1646594 | Core.Environment.Pref.CreateInt
// ============================================================

/* WARNING: Possible PIC construction at 0x03250788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0325078c) */

ulong Core_Environment_Pref__CreateInt(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 extraout_s0;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb5759 & 1) == 0) {
    func_0x00f78a20(0x3d23e18);
    bRam0000000003eb5759 = 1;
  }
  uVar2 = func_0x00f78aec(/*Core.Environment.Pref_TypeInfo*/ uRam0000000003d23e18);
  Core_Environment_Pref___ctor(uVar2,param_1);
  if (uVar2 != 0) {
    uVar1 = /*UnityEngine.PlayerPrefs$$GetInt*/ func_0x03250818(*(undefined8 *)(uVar2 + 0x20),param_2,0);
    *(undefined4 *)(uVar2 + 0x14) = uVar1;
    return uVar2;
  }
  uVar3 = func_0x00f78af4();
  if ((bRam0000000003eb575a & 1) == 0) {
    func_0x00f78a20(0x3d23e18);
    bRam0000000003eb575a = 1;
  }
  uVar2 = func_0x00f78aec(/*Core.Environment.Pref_TypeInfo*/ uRam0000000003d23e18);
  Core_Environment_Pref___ctor(uVar2,uVar3);
  if (uVar2 != 0) {
    uVar1 = /*UnityEngine.PlayerPrefs$$GetFloat*/ func_0x03250948(extraout_s0,*(undefined8 *)(uVar2 + 0x20),0);
    *(undefined4 *)(uVar2 + 0x18) = uVar1;
    return uVar2;
  }
  auVar5 = func_0x00f78af4();
  *(int *)(auVar5._0_8_ + 0x14) = auVar5._8_4_;
  uVar3 = *(undefined8 *)(auVar5._0_8_ + 0x20);
  if (pcRam0000000003ec0510 == (code *)0x0) {
    pcRam0000000003ec0510 =
         (code *)func_0x00f789d4("UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)",
                                 auVar5._8_8_,0);
  }
  uVar2 = (*pcRam0000000003ec0510)(uVar3,auVar5._8_8_);
  if ((uVar2 & 1) != 0) {
    return uVar2;
  }
  func_0x00f78a24(0x3d23d70);
  lVar4 = func_0x00f78aec();
  uVar3 = func_0x00f78a24(0x3d6b200);
  if ((bRam0000000003ec0568 & 1) == 0) {
    func_0x00f78a20(0x3d216d0);
    bRam0000000003ec0568 = 1;
  }
  if (((*(ushort *)(/*System.Exception_TypeInfo*/ lRam0000000003d216d0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Exception_TypeInfo*/ lRam0000000003d216d0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*System.Object$$.ctor*/ func_0x0294d018(lVar4,0,0);
  uVar2 = /*System.Exception$$Init*/ func_0x02acc644(lVar4);
  *(undefined8 *)(lVar4 + 0x18) = uVar3;
  return uVar2;
}



// ============================================================
// RVA: 0x1646618 | Core.Environment.Pref.CreateFloat
// ============================================================

/* WARNING: Possible PIC construction at 0x03250788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0325078c) */

ulong Core_Environment_Pref__CreateFloat(undefined4 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb575a & 1) == 0) {
    func_0x00f78a20(0x3d23e18);
    bRam0000000003eb575a = 1;
  }
  uVar1 = func_0x00f78aec(/*Core.Environment.Pref_TypeInfo*/ uRam0000000003d23e18);
  Core_Environment_Pref___ctor(uVar1,param_2);
  if (uVar1 != 0) {
    uVar4 = /*UnityEngine.PlayerPrefs$$GetFloat*/ func_0x03250948(param_1,*(undefined8 *)(uVar1 + 0x20),0);
    *(undefined4 *)(uVar1 + 0x18) = uVar4;
    return uVar1;
  }
  auVar5 = func_0x00f78af4();
  *(int *)(auVar5._0_8_ + 0x14) = auVar5._8_4_;
  uVar2 = *(undefined8 *)(auVar5._0_8_ + 0x20);
  if (pcRam0000000003ec0510 == (code *)0x0) {
    pcRam0000000003ec0510 =
         (code *)func_0x00f789d4("UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)",
                                 auVar5._8_8_,0);
  }
  uVar1 = (*pcRam0000000003ec0510)(uVar2,auVar5._8_8_);
  if ((uVar1 & 1) != 0) {
    return uVar1;
  }
  func_0x00f78a24(0x3d23d70);
  lVar3 = func_0x00f78aec();
  uVar2 = func_0x00f78a24(0x3d6b200);
  if ((bRam0000000003ec0568 & 1) == 0) {
    func_0x00f78a20(0x3d216d0);
    bRam0000000003ec0568 = 1;
  }
  if (((*(ushort *)(/*System.Exception_TypeInfo*/ lRam0000000003d216d0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Exception_TypeInfo*/ lRam0000000003d216d0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*System.Object$$.ctor*/ func_0x0294d018(lVar3,0,0);
  uVar1 = /*System.Exception$$Init*/ func_0x02acc644(lVar3);
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  return uVar1;
}



// ============================================================
// RVA: 0x16466a4 | Core.Environment.Pref.SetInt
// ============================================================

/* WARNING: Possible PIC construction at 0x03250788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0325078c) */

void Core_Environment_Pref__SetInt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  *(int *)(param_1 + 0x14) = (int)param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (pcRam0000000003ec0510 == (code *)0x0) {
    pcRam0000000003ec0510 =
         (code *)func_0x00f789d4("UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)",
                                 param_2,0);
  }
  uVar2 = (*pcRam0000000003ec0510)(uVar1,param_2);
  if ((uVar2 & 1) != 0) {
    return;
  }
  func_0x00f78a24(0x3d23d70);
  lVar3 = func_0x00f78aec();
  uVar1 = func_0x00f78a24(0x3d6b200);
  if ((bRam0000000003ec0568 & 1) == 0) {
    func_0x00f78a20(0x3d216d0);
    bRam0000000003ec0568 = 1;
  }
  if (((*(ushort *)(/*System.Exception_TypeInfo*/ lRam0000000003d216d0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Exception_TypeInfo*/ lRam0000000003d216d0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*System.Object$$.ctor*/ func_0x0294d018(lVar3,0,0);
  /*System.Exception$$Init*/ func_0x02acc644(lVar3);
  *(undefined8 *)(lVar3 + 0x18) = uVar1;
  return;
}



// ============================================================
// RVA: 0x16466b4 | Core.Environment.Pref.SetFloat
// ============================================================

void Core_Environment_Pref__SetFloat(undefined4 param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 extraout_s0;
  
  *(undefined4 *)(param_2 + 0x18) = param_1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  if (pcRam0000000003ec0518 == (code *)0x0) {
    pcRam0000000003ec0518 =
         (code *)func_0x00f789d4("UnityEngine.PlayerPrefs::TrySetFloat(System.String,System.Single)"
                                 ,0);
  }
  uVar2 = (*pcRam0000000003ec0518)(param_1,uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  func_0x00f78a24(0x3d23d70);
  uVar1 = func_0x00f78aec();
  uVar3 = func_0x00f78a24(0x3d6b200);
  /*UnityEngine.PlayerPrefsException$$.ctor*/ func_0x032507a4(uVar1,uVar3);
  uVar3 = func_0x00f78a24(0x3d5b910);
  uVar1 = func_0x00f78ac0(uVar1,uVar3);
  if (pcRam0000000003ec0530 == (code *)0x0) {
    pcRam0000000003ec0530 =
         (code *)func_0x00f789d4("UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)");
  }
                    /* WARNING: Could not recover jumptable at 0x03250994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0530)(extraout_s0,uVar1);
  return;
}



// ============================================================
// RVA: 0x16466c4 | Core.Environment.Pref.SetBool
// ============================================================

/* WARNING: Possible PIC construction at 0x03250788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0325078c) */

void Core_Environment_Pref__SetBool(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  *(char *)(param_1 + 0x10) = (char)param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (pcRam0000000003ec0510 == (code *)0x0) {
    pcRam0000000003ec0510 =
         (code *)func_0x00f789d4("UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)",
                                 param_2,0);
  }
  uVar2 = (*pcRam0000000003ec0510)(uVar1,param_2);
  if ((uVar2 & 1) != 0) {
    return;
  }
  func_0x00f78a24(0x3d23d70);
  lVar3 = func_0x00f78aec();
  uVar1 = func_0x00f78a24(0x3d6b200);
  if ((bRam0000000003ec0568 & 1) == 0) {
    func_0x00f78a20(0x3d216d0);
    bRam0000000003ec0568 = 1;
  }
  if (((*(ushort *)(/*System.Exception_TypeInfo*/ lRam0000000003d216d0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Exception_TypeInfo*/ lRam0000000003d216d0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*System.Object$$.ctor*/ func_0x0294d018(lVar3,0,0);
  /*System.Exception$$Init*/ func_0x02acc644(lVar3);
  *(undefined8 *)(lVar3 + 0x18) = uVar1;
  return;
}



// ============================================================
// RVA: 0x16466d4 | Core.Environment.Pref.GetBool
// ============================================================

undefined1 Core_Environment_Pref__GetBool(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x16466dc | Core.Environment.Pref.GetInt
// ============================================================

undefined4 Core_Environment_Pref__GetInt(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ============================================================
// RVA: 0x16466e4 | Core.Environment.Pref.GetFloat
// ============================================================

undefined4 Core_Environment_Pref__GetFloat(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



