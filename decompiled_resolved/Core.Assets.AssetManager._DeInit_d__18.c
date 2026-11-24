// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Assets.AssetManager.<DeInit>d__18

// ============================================================
// RVA: 0x16341c8 | Core.Assets.AssetManager.<DeInit>d__18..ctor
// ============================================================

void Core_Assets_AssetManager__DeInit_d__18___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1637c98 | Core.Assets.AssetManager.<DeInit>d__18.System.IDisposable.Dispose
// ============================================================

void Core_Assets_AssetManager__DeInit_d__18__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1637c9c | Core.Assets.AssetManager.<DeInit>d__18.MoveNext
// ============================================================

ulong Core_Assets_AssetManager__DeInit_d__18__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((bRam0000000003eb569a & 1) == 0) {
    func_0x00f78a20(0x3d2fec8);
    func_0x00f78a20(0x3d55de8);
    bRam0000000003eb569a = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 == 0) goto LAB_01637dd0;
    *(undefined1 *)(lVar5 + 0x60) = 0;
    Core_Assets_AssetManager__CancelAllLoadingAssets(lVar5);
    uVar2 = Core_Assets_AssetManager__WaitForAllAssetsToLoad(lVar5);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x30) != 0)) {
      uVar2 = /*System.Collections.Generic.Dictionary<string, ServicePointScheduler.ConnectionGroup>$$get_Keys*/ func_0x01ed7518(*(long *)(lVar5 + 0x30),uRam0000000003d2fec8);
      lVar3 = /*System.Linq.Enumerable$$ToArray<Type>*/ func_0x01854480(uVar2,uRam0000000003d55de8);
      if (lVar3 != 0) {
        if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
          uVar6 = 0;
          uVar4 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
          do {
            if (uVar4 <= uVar6) {
              uVar2 = func_0x00f78b24();
              func_0x00f78ac0(uVar2,0);
              goto LAB_01637dd0;
            }
            Core_Assets_AssetManager__RemoveAssetBucket
                      (lVar5,*(undefined8 *)(lVar3 + 0x20 + uVar6 * 8));
            uVar6 = uVar6 + 1;
            uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
          } while ((long)uVar6 < (long)(int)*(uint *)(lVar3 + 0x18));
        }
        *(undefined4 *)(lVar5 + 0x38) = 0;
        *(undefined8 *)(lVar5 + 0x18) = 0;
        *(undefined8 *)(lVar5 + 0x10) = 0;
        *(undefined8 *)(lVar5 + 0x28) = 0;
        *(undefined8 *)(lVar5 + 0x20) = 0;
        goto LAB_01637da8;
      }
    }
LAB_01637dd0:
    lVar5 = func_0x00f78af4();
    return *(ulong *)(lVar5 + 0x18);
  }
LAB_01637da8:
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x1637dd4 | Core.Assets.AssetManager.<DeInit>d__18.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_Assets_AssetManager__DeInit_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1637ddc | Core.Assets.AssetManager.<DeInit>d__18.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Core_Assets_AssetManager__DeInit_d__18__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62140);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1637e1c | Core.Assets.AssetManager.<DeInit>d__18.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_Assets_AssetManager__DeInit_d__18__System_Collections_IEnumerator_get_Current(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



