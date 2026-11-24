// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.SimpleObjectCache<object>

// ============================================================
// RVA: 0x2863038 | Core.Containers.SimpleObjectCache<object>..ctor
// ============================================================

ulong Core_Containers_SimpleObjectCache_object____ctor(long param_1,long param_2,long param_3)

{
  ushort uVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02863058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(*(long *)(param_2 + 0x18) + 0xc0))();
    return uVar2;
  }
  auVar8 = func_0x00f78af4();
  lVar4 = auVar8._8_8_;
  puVar3 = auVar8._0_8_;
  if ((bRam0000000003eb8a04 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb8a04 = 1;
  }
  if (lVar4 != 0) {
    *(int *)(puVar3 + 2) = (int)*(undefined8 *)(lVar4 + 0x18);
    lVar6 = *(long *)(param_3 + 0x18);
    uVar1 = *(ushort *)(lVar6 + 0x132);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar6);
      lVar5 = *(long *)(param_3 + 0x18);
      uVar1 = *(ushort *)(lVar5 + 0x132);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x18);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    uVar2 = (*pcVar7)(lVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18));
    *puVar3 = uVar2;
    lVar4 = *(long *)(param_3 + 0x18);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      uVar2 = func_0x00fac028(lVar4);
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x132);
    if ((uVar1 & 1) == 0) {
      uVar2 = func_0x00fac028(lVar4);
      uVar1 = *(ushort *)(lVar4 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar4 = *(long *)(param_3 + 0x18);
      if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
        uVar2 = func_0x00fac028(lVar4);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x20);
      if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
        uVar2 = func_0x00fac028(lVar4);
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        lVar4 = *(long *)(param_3 + 0x18);
        if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar4);
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x20);
        if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar4);
        }
        uVar2 = func_0x00f78ad0(lVar4);
      }
    }
    lVar4 = *(long *)(param_3 + 0x18);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      uVar2 = func_0x00fac028(lVar4);
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x20);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      uVar2 = func_0x00fac028(lVar4);
    }
    puVar3[1] = *(ulong *)(*(long *)(lVar4 + 0xb8) + 0x10);
    return uVar2;
  }
  /*System.ThrowHelper$$ThrowArgumentNullException*/ func_0x029ef698(3,0);
  lVar4 = func_0x00f78af4();
  return (ulong)*(uint *)(lVar4 + 0x10);
}



