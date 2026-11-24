// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.NetworkSession.<>c

// ============================================================
// RVA: 0x1662f94 | Core.Networking.NetworkSession.<>c..cctor
// ============================================================

void Core_Networking_NetworkSession___c___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5877 & 1) == 0) {
    func_0x00f78a20(0x3d282e8);
    bRam0000000003eb5877 = 1;
  }
  uVar1 = func_0x00f78aec(/*Core.Networking.NetworkSession.<>c_TypeInfo*/ lRam0000000003d282e8);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar1,0);
  **(undefined8 **)(/*Core.Networking.NetworkSession.<>c_TypeInfo*/ lRam0000000003d282e8 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1662ff4 | Core.Networking.NetworkSession.<>c..ctor
// ============================================================

void Core_Networking_NetworkSession___c___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1662ffc | Core.Networking.NetworkSession.<>c.<SortNetworkPlayers>b__109_0
// ============================================================

bool Core_Networking_NetworkSession___c___SortNetworkPlayers_b__109_0
               (undefined8 param_1,long param_2,long param_3)

{
  return *(uint *)(param_2 + 0xc) < *(uint *)(param_3 + 0xc);
}



