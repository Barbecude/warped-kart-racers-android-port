// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.RewardScreen

// ============================================================
// RVA: 0x14e1964 | Atlas.UI.Screens.RewardScreen.OnBeforeEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x014e1ee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb55a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb55e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03236654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb56a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb5708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb575c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03249afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e2128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e2184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e21fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e23b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e2438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e2494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01595c30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e2bb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e245c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e2bb8) */
/* WARNING: Removing unreachable block (ram,0x014e2bc8) */
/* WARNING: Removing unreachable block (ram,0x014e2c24) */
/* WARNING: Removing unreachable block (ram,0x014e2c2c) */
/* WARNING: Removing unreachable block (ram,0x014e2c30) */
/* WARNING: Removing unreachable block (ram,0x014e2c70) */
/* WARNING: Removing unreachable block (ram,0x014e2c84) */
/* WARNING: Removing unreachable block (ram,0x014e2c8c) */
/* WARNING: Removing unreachable block (ram,0x014e2cd4) */
/* WARNING: Removing unreachable block (ram,0x014e2cf4) */
/* WARNING: Removing unreachable block (ram,0x014e2dd8) */
/* WARNING: Removing unreachable block (ram,0x014e2ddc) */
/* WARNING: Removing unreachable block (ram,0x014e2e20) */
/* WARNING: Removing unreachable block (ram,0x014e2e28) */
/* WARNING: Removing unreachable block (ram,0x014e2e30) */
/* WARNING: Removing unreachable block (ram,0x014e2e38) */
/* WARNING: Removing unreachable block (ram,0x014e2e40) */
/* WARNING: Removing unreachable block (ram,0x014e2e80) */
/* WARNING: Removing unreachable block (ram,0x014e2e90) */
/* WARNING: Removing unreachable block (ram,0x014e2ec0) */
/* WARNING: Removing unreachable block (ram,0x014e2d08) */
/* WARNING: Removing unreachable block (ram,0x014e2d20) */
/* WARNING: Removing unreachable block (ram,0x014e302c) */
/* WARNING: Removing unreachable block (ram,0x014e3040) */
/* WARNING: Removing unreachable block (ram,0x014e3054) */
/* WARNING: Removing unreachable block (ram,0x014e3070) */
/* WARNING: Removing unreachable block (ram,0x014e307c) */
/* WARNING: Removing unreachable block (ram,0x014e30b4) */
/* WARNING: Removing unreachable block (ram,0x014e30c4) */
/* WARNING: Removing unreachable block (ram,0x014e30f0) */
/* WARNING: Removing unreachable block (ram,0x014e3208) */
/* WARNING: Removing unreachable block (ram,0x014e3140) */
/* WARNING: Removing unreachable block (ram,0x014e320c) */
/* WARNING: Removing unreachable block (ram,0x014e2d34) */
/* WARNING: Removing unreachable block (ram,0x014e2d4c) */
/* WARNING: Removing unreachable block (ram,0x014e3148) */
/* WARNING: Removing unreachable block (ram,0x014e314c) */
/* WARNING: Removing unreachable block (ram,0x014e316c) */
/* WARNING: Removing unreachable block (ram,0x014e2d60) */
/* WARNING: Removing unreachable block (ram,0x014e2d78) */
/* WARNING: Removing unreachable block (ram,0x014e3184) */
/* WARNING: Removing unreachable block (ram,0x014e3188) */
/* WARNING: Removing unreachable block (ram,0x014e31a8) */
/* WARNING: Removing unreachable block (ram,0x014e2d8c) */
/* WARNING: Removing unreachable block (ram,0x014e2da4) */
/* WARNING: Removing unreachable block (ram,0x014e31c0) */
/* WARNING: Removing unreachable block (ram,0x014e31c4) */
/* WARNING: Removing unreachable block (ram,0x014e31e4) */
/* WARNING: Removing unreachable block (ram,0x014e31f8) */
/* WARNING: Removing unreachable block (ram,0x014e2db8) */
/* WARNING: Removing unreachable block (ram,0x014e2f0c) */
/* WARNING: Removing unreachable block (ram,0x014e2f24) */
/* WARNING: Removing unreachable block (ram,0x014e2f28) */
/* WARNING: Removing unreachable block (ram,0x014e2f4c) */
/* WARNING: Removing unreachable block (ram,0x014e2f58) */
/* WARNING: Removing unreachable block (ram,0x014e2f90) */
/* WARNING: Removing unreachable block (ram,0x014e2fa0) */
/* WARNING: Removing unreachable block (ram,0x014e2fcc) */
/* WARNING: Removing unreachable block (ram,0x014e3008) */
/* WARNING: Removing unreachable block (ram,0x014e3018) */
/* WARNING: Removing unreachable block (ram,0x014e3020) */
/* WARNING: Removing unreachable block (ram,0x014e3210) */
/* WARNING: Removing unreachable block (ram,0x014e2dd0) */
/* WARNING: Removing unreachable block (ram,0x014e3218) */
/* WARNING: Removing unreachable block (ram,0x014e3230) */
/* WARNING: Removing unreachable block (ram,0x014e3238) */
/* WARNING: Removing unreachable block (ram,0x014e325c) */
/* WARNING: Removing unreachable block (ram,0x014e3264) */
/* WARNING: Removing unreachable block (ram,0x014e3288) */
/* WARNING: Removing unreachable block (ram,0x014e3290) */
/* WARNING: Removing unreachable block (ram,0x014e32a8) */
/* WARNING: Removing unreachable block (ram,0x014e32b0) */
/* WARNING: Removing unreachable block (ram,0x014e32b4) */
/* WARNING: Removing unreachable block (ram,0x014e32b8) */
/* WARNING: Removing unreachable block (ram,0x014e32ec) */
/* WARNING: Removing unreachable block (ram,0x014e32f4) */
/* WARNING: Removing unreachable block (ram,0x014e3304) */
/* WARNING: Removing unreachable block (ram,0x014e3308) */
/* WARNING: Removing unreachable block (ram,0x014e3310) */
/* WARNING: Removing unreachable block (ram,0x014e3334) */
/* WARNING: Removing unreachable block (ram,0x014e3370) */
/* WARNING: Removing unreachable block (ram,0x014e3384) */
/* WARNING: Removing unreachable block (ram,0x014e3344) */
/* WARNING: Removing unreachable block (ram,0x014e3358) */
/* WARNING: Removing unreachable block (ram,0x014e33b8) */
/* WARNING: Removing unreachable block (ram,0x014e3360) */
/* WARNING: Removing unreachable block (ram,0x01595c34) */
/* WARNING: Removing unreachable block (ram,0x014e2498) */
/* WARNING: Removing unreachable block (ram,0x014e249c) */
/* WARNING: Removing unreachable block (ram,0x014e24ac) */
/* WARNING: Removing unreachable block (ram,0x014e24b4) */
/* WARNING: Removing unreachable block (ram,0x014e24c4) */
/* WARNING: Removing unreachable block (ram,0x014e24cc) */
/* WARNING: Removing unreachable block (ram,0x014e24e4) */
/* WARNING: Removing unreachable block (ram,0x014e24ec) */
/* WARNING: Removing unreachable block (ram,0x014e2500) */
/* WARNING: Removing unreachable block (ram,0x014e250c) */
/* WARNING: Removing unreachable block (ram,0x014e2510) */
/* WARNING: Removing unreachable block (ram,0x014e2514) */
/* WARNING: Removing unreachable block (ram,0x014e243c) */
/* WARNING: Removing unreachable block (ram,0x014e23b4) */
/* WARNING: Removing unreachable block (ram,0x014e23b8) */
/* WARNING: Removing unreachable block (ram,0x014e23c0) */
/* WARNING: Removing unreachable block (ram,0x014e23d8) */
/* WARNING: Removing unreachable block (ram,0x014e2440) */
/* WARNING: Removing unreachable block (ram,0x014e2448) */
/* WARNING: Removing unreachable block (ram,0x014e2458) */
/* WARNING: Removing unreachable block (ram,0x014e23e0) */
/* WARNING: Removing unreachable block (ram,0x014e2534) */
/* WARNING: Removing unreachable block (ram,0x014e2538) */
/* WARNING: Removing unreachable block (ram,0x014e2558) */
/* WARNING: Removing unreachable block (ram,0x014e25d8) */
/* WARNING: Removing unreachable block (ram,0x014e25e0) */
/* WARNING: Removing unreachable block (ram,0x014e25fc) */
/* WARNING: Removing unreachable block (ram,0x014e2620) */
/* WARNING: Removing unreachable block (ram,0x014e2628) */
/* WARNING: Removing unreachable block (ram,0x014e262c) */
/* WARNING: Removing unreachable block (ram,0x014e2644) */
/* WARNING: Removing unreachable block (ram,0x014e2668) */
/* WARNING: Removing unreachable block (ram,0x014e2688) */
/* WARNING: Removing unreachable block (ram,0x014e2788) */
/* WARNING: Removing unreachable block (ram,0x014e2790) */
/* WARNING: Removing unreachable block (ram,0x014e269c) */
/* WARNING: Removing unreachable block (ram,0x014e26b4) */
/* WARNING: Removing unreachable block (ram,0x014e2798) */
/* WARNING: Removing unreachable block (ram,0x014e27f0) */
/* WARNING: Removing unreachable block (ram,0x014e27f4) */
/* WARNING: Removing unreachable block (ram,0x014e27a4) */
/* WARNING: Removing unreachable block (ram,0x014e27a8) */
/* WARNING: Removing unreachable block (ram,0x014e26c8) */
/* WARNING: Removing unreachable block (ram,0x014e26e0) */
/* WARNING: Removing unreachable block (ram,0x014e27b0) */
/* WARNING: Removing unreachable block (ram,0x014e27b8) */
/* WARNING: Removing unreachable block (ram,0x014e26f4) */
/* WARNING: Removing unreachable block (ram,0x014e270c) */
/* WARNING: Removing unreachable block (ram,0x014e27c0) */
/* WARNING: Removing unreachable block (ram,0x014e27c8) */
/* WARNING: Removing unreachable block (ram,0x014e2720) */
/* WARNING: Removing unreachable block (ram,0x014e2738) */
/* WARNING: Removing unreachable block (ram,0x014e27d0) */
/* WARNING: Removing unreachable block (ram,0x014e27d8) */
/* WARNING: Removing unreachable block (ram,0x014e274c) */
/* WARNING: Removing unreachable block (ram,0x014e2764) */
/* WARNING: Removing unreachable block (ram,0x014e27e0) */
/* WARNING: Removing unreachable block (ram,0x014e280c) */
/* WARNING: Removing unreachable block (ram,0x014e282c) */
/* WARNING: Removing unreachable block (ram,0x014e2864) */
/* WARNING: Removing unreachable block (ram,0x014e286c) */
/* WARNING: Removing unreachable block (ram,0x014e288c) */
/* WARNING: Removing unreachable block (ram,0x014e28a0) */
/* WARNING: Removing unreachable block (ram,0x014e28b8) */
/* WARNING: Removing unreachable block (ram,0x014e28cc) */
/* WARNING: Removing unreachable block (ram,0x014e28e4) */
/* WARNING: Removing unreachable block (ram,0x014e28f8) */
/* WARNING: Removing unreachable block (ram,0x014e2930) */
/* WARNING: Removing unreachable block (ram,0x014e2900) */
/* WARNING: Removing unreachable block (ram,0x014e2924) */
/* WARNING: Removing unreachable block (ram,0x014e27e8) */
/* WARNING: Removing unreachable block (ram,0x014e27f8) */
/* WARNING: Removing unreachable block (ram,0x01595b58) */
/* WARNING: Removing unreachable block (ram,0x01595b80) */
/* WARNING: Removing unreachable block (ram,0x01595bd0) */
/* WARNING: Removing unreachable block (ram,0x01595c60) */
/* WARNING: Removing unreachable block (ram,0x01595c6c) */
/* WARNING: Removing unreachable block (ram,0x01595c74) */
/* WARNING: Removing unreachable block (ram,0x01595c90) */
/* WARNING: Removing unreachable block (ram,0x01595c9c) */
/* WARNING: Removing unreachable block (ram,0x01595cac) */
/* WARNING: Removing unreachable block (ram,0x01595cbc) */
/* WARNING: Removing unreachable block (ram,0x01595cb8) */
/* WARNING: Removing unreachable block (ram,0x01595be4) */
/* WARNING: Removing unreachable block (ram,0x01595c08) */
/* WARNING: Removing unreachable block (ram,0x01595c38) */
/* WARNING: Removing unreachable block (ram,0x01595c44) */
/* WARNING: Removing unreachable block (ram,0x01595c18) */
/* WARNING: Removing unreachable block (ram,0x01595c58) */
/* WARNING: Removing unreachable block (ram,0x01595c20) */
/* WARNING: Removing unreachable block (ram,0x014e2778) */
/* WARNING: Removing unreachable block (ram,0x014e23e8) */
/* WARNING: Removing unreachable block (ram,0x014e241c) */
/* WARNING: Removing unreachable block (ram,0x014e2420) */
/* WARNING: Removing unreachable block (ram,0x014e2424) */
/* WARNING: Removing unreachable block (ram,0x014e242c) */
/* WARNING: Removing unreachable block (ram,0x014e2934) */
/* WARNING: Removing unreachable block (ram,0x014e296c) */
/* WARNING: Removing unreachable block (ram,0x014e2b18) */
/* WARNING: Removing unreachable block (ram,0x014e2b2c) */
/* WARNING: Removing unreachable block (ram,0x014e2b50) */
/* WARNING: Removing unreachable block (ram,0x014e2b60) */
/* WARNING: Removing unreachable block (ram,0x014e2b70) */
/* WARNING: Removing unreachable block (ram,0x014e2b78) */
/* WARNING: Removing unreachable block (ram,0x014e2b8c) */
/* WARNING: Removing unreachable block (ram,0x014e2ba4) */
/* WARNING: Removing unreachable block (ram,0x014e33ac) */
/* WARNING: Removing unreachable block (ram,0x014e33b0) */
/* WARNING: Removing unreachable block (ram,0x014e33bc) */
/* WARNING: Removing unreachable block (ram,0x014e2bac) */
/* WARNING: Removing unreachable block (ram,0x014e2200) */
/* WARNING: Removing unreachable block (ram,0x014e2204) */
/* WARNING: Removing unreachable block (ram,0x014e2214) */
/* WARNING: Removing unreachable block (ram,0x014e221c) */
/* WARNING: Removing unreachable block (ram,0x014e2220) */
/* WARNING: Removing unreachable block (ram,0x014e222c) */
/* WARNING: Removing unreachable block (ram,0x014e223c) */
/* WARNING: Removing unreachable block (ram,0x014e2244) */
/* WARNING: Removing unreachable block (ram,0x014e2250) */
/* WARNING: Removing unreachable block (ram,0x014e2268) */
/* WARNING: Removing unreachable block (ram,0x014e2270) */
/* WARNING: Removing unreachable block (ram,0x014e228c) */
/* WARNING: Removing unreachable block (ram,0x014e22b8) */
/* WARNING: Removing unreachable block (ram,0x014e22c0) */
/* WARNING: Removing unreachable block (ram,0x014e22c8) */
/* WARNING: Removing unreachable block (ram,0x014e22d4) */
/* WARNING: Removing unreachable block (ram,0x014e22dc) */
/* WARNING: Removing unreachable block (ram,0x014e2188) */
/* WARNING: Removing unreachable block (ram,0x014e218c) */
/* WARNING: Removing unreachable block (ram,0x014e219c) */
/* WARNING: Removing unreachable block (ram,0x014e21a4) */
/* WARNING: Removing unreachable block (ram,0x014e21a8) */
/* WARNING: Removing unreachable block (ram,0x014e21b4) */
/* WARNING: Removing unreachable block (ram,0x014e21c4) */
/* WARNING: Removing unreachable block (ram,0x014e21cc) */
/* WARNING: Removing unreachable block (ram,0x014e21d8) */
/* WARNING: Removing unreachable block (ram,0x014e21e8) */
/* WARNING: Removing unreachable block (ram,0x014e21f0) */
/* WARNING: Removing unreachable block (ram,0x014e21f4) */
/* WARNING: Removing unreachable block (ram,0x014e212c) */
/* WARNING: Removing unreachable block (ram,0x014e2130) */
/* WARNING: Removing unreachable block (ram,0x014e2138) */
/* WARNING: Removing unreachable block (ram,0x014e2140) */
/* WARNING: Removing unreachable block (ram,0x014e2148) */
/* WARNING: Removing unreachable block (ram,0x014e22fc) */
/* WARNING: Removing unreachable block (ram,0x014e2334) */
/* WARNING: Removing unreachable block (ram,0x014e236c) */
/* WARNING: Removing unreachable block (ram,0x014e239c) */
/* WARNING: Removing unreachable block (ram,0x014e23a4) */
/* WARNING: Removing unreachable block (ram,0x014e23a8) */
/* WARNING: Removing unreachable block (ram,0x014e2158) */
/* WARNING: Removing unreachable block (ram,0x014e2170) */
/* WARNING: Removing unreachable block (ram,0x014e2178) */
/* WARNING: Removing unreachable block (ram,0x014e217c) */
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x01cb570c) */
/* WARNING: Removing unreachable block (ram,0x01cb56a8) */
/* WARNING: Removing unreachable block (ram,0x01cb56ac) */
/* WARNING: Removing unreachable block (ram,0x01cb56e0) */
/* WARNING: Removing unreachable block (ram,0x01cb571c) */
/* WARNING: Removing unreachable block (ram,0x01cb5770) */
/* WARNING: Removing unreachable block (ram,0x01cb5798) */
/* WARNING: Removing unreachable block (ram,0x01cb57ac) */
/* WARNING: Removing unreachable block (ram,0x01cb5834) */
/* WARNING: Removing unreachable block (ram,0x01cb5854) */
/* WARNING: Removing unreachable block (ram,0x01cb5880) */
/* WARNING: Removing unreachable block (ram,0x01cb5894) */
/* WARNING: Removing unreachable block (ram,0x01cb591c) */
/* WARNING: Removing unreachable block (ram,0x01cb5898) */
/* WARNING: Removing unreachable block (ram,0x01cb590c) */
/* WARNING: Removing unreachable block (ram,0x01cb58b4) */
/* WARNING: Removing unreachable block (ram,0x01cb58e4) */
/* WARNING: Removing unreachable block (ram,0x01cb58ec) */
/* WARNING: Removing unreachable block (ram,0x01cb58f0) */
/* WARNING: Removing unreachable block (ram,0x01cb5844) */
/* WARNING: Removing unreachable block (ram,0x01cb57b0) */
/* WARNING: Removing unreachable block (ram,0x01cb5824) */
/* WARNING: Removing unreachable block (ram,0x01cb57cc) */
/* WARNING: Removing unreachable block (ram,0x01cb57fc) */
/* WARNING: Removing unreachable block (ram,0x01cb5804) */
/* WARNING: Removing unreachable block (ram,0x01cb5808) */
/* WARNING: Removing unreachable block (ram,0x03249a9c) */
/* WARNING: Removing unreachable block (ram,0x03249ac8) */
/* WARNING: Removing unreachable block (ram,0x03249adc) */
/* WARNING: Removing unreachable block (ram,0x03249ae8) */
/* WARNING: Removing unreachable block (ram,0x03249af0) */
/* WARNING: Removing unreachable block (ram,0x03249af4) */
/* WARNING: Removing unreachable block (ram,0x01cb5730) */
/* WARNING: Removing unreachable block (ram,0x01cb5760) */
/* WARNING: Removing unreachable block (ram,0x01cb574c) */
/* WARNING: Removing unreachable block (ram,0x01cb56f4) */
/* WARNING: Removing unreachable block (ram,0x01cb56b0) */
/* WARNING: Removing unreachable block (ram,0x03236658) */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */
/* WARNING: Removing unreachable block (ram,0x0164aba4) */
/* WARNING: Removing unreachable block (ram,0x0164abbc) */
/* WARNING: Removing unreachable block (ram,0x0164abcc) */
/* WARNING: Removing unreachable block (ram,0x0164a1b8) */
/* WARNING: Removing unreachable block (ram,0x0164a1e0) */
/* WARNING: Removing unreachable block (ram,0x0164a20c) */
/* WARNING: Removing unreachable block (ram,0x0164a228) */
/* WARNING: Removing unreachable block (ram,0x0164a230) */
/* WARNING: Removing unreachable block (ram,0x0164a234) */
/* WARNING: Removing unreachable block (ram,0x0164a24c) */
/* WARNING: Removing unreachable block (ram,0x0164a254) */
/* WARNING: Removing unreachable block (ram,0x0164a264) */
/* WARNING: Removing unreachable block (ram,0x0164a274) */
/* WARNING: Removing unreachable block (ram,0x0164a28c) */
/* WARNING: Removing unreachable block (ram,0x0164a2a8) */
/* WARNING: Removing unreachable block (ram,0x0164a2b0) */
/* WARNING: Removing unreachable block (ram,0x0164a2b4) */
/* WARNING: Removing unreachable block (ram,0x0164a2c4) */
/* WARNING: Removing unreachable block (ram,0x0164a2d0) */
/* WARNING: Removing unreachable block (ram,0x0164a2d4) */
/* WARNING: Removing unreachable block (ram,0x0164a308) */
/* WARNING: Removing unreachable block (ram,0x0164a30c) */
/* WARNING: Removing unreachable block (ram,0x0164a2f4) */
/* WARNING: Removing unreachable block (ram,0x0164a2f8) */
/* WARNING: Removing unreachable block (ram,0x01cb55ec) */
/* WARNING: Removing unreachable block (ram,0x01cb55a4) */
/* WARNING: Removing unreachable block (ram,0x01cb55a8) */
/* WARNING: Removing unreachable block (ram,0x01cb55f0) */
/* WARNING: Removing unreachable block (ram,0x01cb55f4) */
/* WARNING: Removing unreachable block (ram,0x01cb55c4) */
/* WARNING: Removing unreachable block (ram,0x01cb5618) */
/* WARNING: Removing unreachable block (ram,0x01cb563c) */
/* WARNING: Removing unreachable block (ram,0x01cb566c) */
/* WARNING: Removing unreachable block (ram,0x01cb5680) */
/* WARNING: Removing unreachable block (ram,0x01cb568c) */
/* WARNING: Removing unreachable block (ram,0x01cb5694) */
/* WARNING: Removing unreachable block (ram,0x01cb5698) */
/* WARNING: Removing unreachable block (ram,0x01cb5628) */
/* WARNING: Removing unreachable block (ram,0x01cb55c8) */
/* WARNING: Removing unreachable block (ram,0x0164aa78) */
/* WARNING: Removing unreachable block (ram,0x0164aaac) */
/* WARNING: Removing unreachable block (ram,0x0164aad8) */
/* WARNING: Removing unreachable block (ram,0x0164aae8) */
/* WARNING: Removing unreachable block (ram,0x0164aaf0) */
/* WARNING: Removing unreachable block (ram,0x0164aafc) */
/* WARNING: Removing unreachable block (ram,0x0164aba8) */
/* WARNING: Removing unreachable block (ram,0x0164ab10) */
/* WARNING: Removing unreachable block (ram,0x0164ab14) */
/* WARNING: Removing unreachable block (ram,0x0164ab24) */
/* WARNING: Removing unreachable block (ram,0x0164ab40) */
/* WARNING: Removing unreachable block (ram,0x0164ab48) */
/* WARNING: Removing unreachable block (ram,0x0164ab4c) */
/* WARNING: Removing unreachable block (ram,0x0164ab58) */
/* WARNING: Removing unreachable block (ram,0x0164abe0) */
/* WARNING: Removing unreachable block (ram,0x0164abe4) */
/* WARNING: Removing unreachable block (ram,0x0164abf0) */
/* WARNING: Removing unreachable block (ram,0x0164ac18) */
/* WARNING: Removing unreachable block (ram,0x0164ac2c) */
/* WARNING: Removing unreachable block (ram,0x0164ac3c) */
/* WARNING: Removing unreachable block (ram,0x0164ac68) */
/* WARNING: Removing unreachable block (ram,0x0164ac44) */
/* WARNING: Removing unreachable block (ram,0x0164ac6c) */
/* WARNING: Removing unreachable block (ram,0x0164ac9c) */
/* WARNING: Removing unreachable block (ram,0x0164acbc) */
/* WARNING: Removing unreachable block (ram,0x0164acd0) */
/* WARNING: Removing unreachable block (ram,0x0164acd8) */
/* WARNING: Removing unreachable block (ram,0x0164acdc) */
/* WARNING: Removing unreachable block (ram,0x0164acf4) */
/* WARNING: Removing unreachable block (ram,0x0164acfc) */
/* WARNING: Removing unreachable block (ram,0x0164ad00) */
/* WARNING: Removing unreachable block (ram,0x0164ac50) */
/* WARNING: Removing unreachable block (ram,0x0164ab74) */
/* WARNING: Removing unreachable block (ram,0x0164ab78) */
/* WARNING: Removing unreachable block (ram,0x0164ab8c) */
/* WARNING: Removing unreachable block (ram,0x0164ab94) */
/* WARNING: Removing unreachable block (ram,0x0164ab98) */
/* WARNING: Removing unreachable block (ram,0x014e1ee8) */
/* WARNING: Removing unreachable block (ram,0x014e2460) */
/* WARNING: Removing unreachable block (ram,0x014e2468) */
/* WARNING: Removing unreachable block (ram,0x014e251c) */
/* WARNING: Removing unreachable block (ram,0x014e2470) */
/* WARNING: Removing unreachable block (ram,0x014e2480) */
/* WARNING: Removing unreachable block (ram,0x014e2488) */
/* WARNING: Removing unreachable block (ram,0x014e248c) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */

ulong Atlas_UI_Screens_RewardScreen__OnBeforeEnter(long param_1)

{
  undefined8 **ppuVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  int extraout_w1;
  undefined8 *puVar12;
  undefined8 ***pppuVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 ****ppppuVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 ***pppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  
  uVar9 = 0x3d41288;
  if ((bRam0000000003eb4be4 & 1) == 0) {
    func_0x00f78a20(0x3d1fd98);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d2dc40);
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d223e0);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d232a0);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d244b0);
    func_0x00f78a20(0x3d41280);
    func_0x00f78a20(0x3d41288);
    func_0x00f78a20(0x3d41290);
    func_0x00f78a20(0x3d6ba50);
    bRam0000000003eb4be4 = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  ppuStack_58 = (undefined8 ***)0x0;
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41288);
  if (lVar7 == 0) goto LAB_014e1f04;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar7 + 0x38);
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41290);
  if (lVar7 == 0) goto LAB_014e1f04;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar7 + 0xc0);
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41290);
  if (lVar7 == 0) goto LAB_014e1f04;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar7 + 0x38);
  lVar7 = func_0x00f78aec(/*Atlas.Rendering.MaterialDuplicator_TypeInfo*/ uRam0000000003d232a0);
  /*Atlas.Rendering.MaterialDuplicator$$.ctor*/ func_0x01492c28(lVar7,0);
  *(long *)(param_1 + 0x88) = lVar7;
  if (lVar7 == 0) goto LAB_014e1f04;
  /*Atlas.Rendering.MaterialDuplicator$$Init*/ func_0x01491c08(lVar7,5,5,5,0);
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41290);
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x20) == 0)) goto LAB_014e1f04;
  pppuVar13 = *(undefined8 ****)(*(long *)(lVar7 + 0x20) + 0x10);
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41288);
  if ((lVar7 == 0) || (pppuVar13 == (undefined8 ***)0x0)) goto LAB_014e1f04;
  plVar8 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinitionById*/ func_0x01645ed0(pppuVar13,*(undefined8 *)(lVar7 + 0x30),0);
  puStack_80 = (undefined8 *)&stack0xfffffffffffffff0;
  if (plVar8 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
LAB_014e1bd0:
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41280);
    if (lVar7 == 0) goto LAB_014e1f04;
    puVar12 = (undefined8 *)(lVar7 + 0xa0);
LAB_014e1be4:
    plVar8 = (long *)(param_1 + 0x70);
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_014e1f04;
    uVar4 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635f34(*(long *)(param_1 + 0x80),*puVar12,/*STR('Default')*/ uRam0000000003d6ba50,0,0,0);
    *(undefined4 *)(param_1 + 0xb4) = uVar4;
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41290);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x100) == 0)) goto LAB_014e1f04;
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(*(long *)(lVar7 + 0x100) + 0x58);
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41280);
    if (lVar7 == 0) goto LAB_014e1f04;
    plVar14 = *(long **)(lVar7 + 0x88);
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41290);
    if ((((lVar7 == 0) || (*plVar8 == 0)) || (*(long *)(lVar7 + 0x88) == 0)) ||
       (uVar9 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar7 + 0x88),*(undefined8 *)(*plVar8 + 0x30),0),
       plVar14 == (long *)0x0)) goto LAB_014e1f04;
    (**(code **)(*plVar14 + 0x558))(plVar14,uVar9,*(undefined8 *)(*plVar14 + 0x560));
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41280);
    if ((lVar7 == 0) || (plVar14 = *(long **)(lVar7 + 0x90), plVar14 == (long *)0x0))
    goto LAB_014e1f04;
    (**(code **)(*plVar14 + 0x178))
              (plVar14,*(undefined8 *)(param_1 + 0x70),0,0,*(undefined8 *)(*plVar14 + 0x180));
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41280);
    if ((lVar7 == 0) || (*plVar8 == 0)) goto LAB_014e1f04;
    plVar14 = *(long **)(lVar7 + 0x98);
    lVar7 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*plVar8,0);
    uVar16 = *(undefined8 *)(lVar7 + 8);
    uVar9 = func_0x00f78aec(/*Atlas.UI.IPMetagameData_TypeInfo*/ uRam0000000003d223e0);
    /*Atlas.UI.IPMetagameData$$.ctor*/ func_0x015b716c(uVar9,uVar16,0);
    if (plVar14 == (long *)0x0) goto LAB_014e1f04;
    (**(code **)(*plVar14 + 0x188))(plVar14,uVar9,*(undefined8 *)(*plVar14 + 400));
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) {
      if (((*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) <= *(byte *)(*plVar8 + 300)) &&
          (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 +
                    -8) == /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) && (iVar5 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(plVar8,0), iVar5 != 0)
         ) {
        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41280);
        if (lVar7 == 0) goto LAB_014e1f04;
        plVar14 = *(long **)(lVar7 + 0x88);
        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41290);
        if (((lVar7 == 0) || (*(long *)(lVar7 + 0x88) == 0)) ||
           (uVar9 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar7 + 0x88),plVar8[0x10],0), plVar14 == (long *)0x0)
           ) goto LAB_014e1f04;
        (**(code **)(*plVar14 + 0x558))(plVar14,uVar9,*(undefined8 *)(*plVar14 + 0x560));
      }
    }
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41290);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x20) == 0)) goto LAB_014e1f04;
    lVar7 = *(long *)(*(long *)(lVar7 + 0x20) + 0x10);
    if (((*(ushort *)(/*Atlas.UI.Screens.RewardScreen_TypeInfo*/ lRam0000000003d244b0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.RewardScreen_TypeInfo*/ lRam0000000003d244b0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar7 == 0) goto LAB_014e1f04;
    pppuVar13 = (undefined8 ***)
                /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar7,**(undefined8 **)(/*Atlas.UI.Screens.RewardScreen_TypeInfo*/ lRam0000000003d244b0 + 0xb8),
                                uRam0000000003d57280);
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41290);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0xb0) == 0)) goto LAB_014e1f04;
    iVar5 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                      (*(long *)(lVar7 + 0xb0),pppuVar13,0);
    if (iVar5 != 0) {
      if ((pppuVar13 == (undefined8 ***)0x0) || (pppuVar13[0xb] == (undefined8 **)0x0))
      goto LAB_014e1f04;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_68,pppuVar13[0xb],uRam0000000003d3dc70);
      while (uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_68,uRam0000000003d337d0), ppuVar1 = ppuStack_58,
            (uVar10 & 1) != 0) {
        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41290);
        if (lVar7 == 0) goto code_r0x014e1f08;
        if (*(long *)(lVar7 + 0x98) == 0) {
          func_0x00f78af4();
          goto code_r0x014e1f14;
        }
        /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar7 + 0x98),ppuVar1,uRam0000000003d3e188);
        pppuVar13 = (undefined8 ***)ppuVar1;
      }
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d337c8);
    }
  }
  else {
    if ((*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) <= *(byte *)(*plVar8 + 300)) &&
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8)
        == /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98)) {
      *(long **)(param_1 + 0x70) = plVar8;
      if ((*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8
                   ) != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) goto LAB_014e1bd0;
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41280);
      if (lVar7 == 0) goto LAB_014e1f04;
      puVar12 = (undefined8 *)(lVar7 + 0xa8);
      goto LAB_014e1be4;
    }
    func_0x00f78e5c();
    if (extraout_w1 != 1) {
code_r0x014e1f64:
      auVar19 = __Unwind_Resume();
      uVar16 = auVar19._8_8_;
      ppuStack_90 = &puStack_80;
      puStack_78 = &Atlas_UI_Screens_RewardScreenViewBehaviour__SetContentVisible;
      lVar7 = *(long *)(auVar19._0_8_ + 0x68);
      if (lVar7 == 0) {
        lVar7 = func_0x00f78af4();
        uStack_c0 = 0x3d41290;
        uStack_b8 = 0x3d41280;
        puStack_88 = &Atlas_UI_Screens_RewardScreen__OnAfterEnter;
        lVar15 = 0x3eb4000;
        pppuVar13 = (undefined8 ***)&puStack_80;
        if ((bRam0000000003eb4be5 & 1) == 0) {
          func_0x00f78a20(0x3d1fa78);
          func_0x00f78a20(0x3d2c8d0);
          func_0x00f78a20(0x3d5c790);
          func_0x00f78a20(0x3d41280);
          bRam0000000003eb4be5 = 1;
          pppuVar13 = (undefined8 ***)ppuStack_90;
        }
        ppuStack_90 = pppuVar13;
        lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d41280);
        lStack_d8 = lVar7;
        if (lVar11 != 0) {
          lVar15 = *(long *)(lVar11 + 0x80);
          uVar9 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
          /*System.Action$$.ctor*/ func_0x02924c80(uVar9,lVar7,uRam0000000003d5c790,0);
          if (lVar15 != 0) {
            /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar15,uVar9,0);
            lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d41280);
            uVar16 = uRam0000000003d2c8d0;
            if (lVar7 != 0) {
              lVar15 = *(long *)(lVar7 + 0x80);
              if ((bRam0000000003eb70f7 & 1) == 0) {
                func_0x00f78a20(0x3d23990);
                bRam0000000003eb70f7 = 1;
              }
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uStack_f0 = 0x3eb7000;
              uStack_e8 = uVar16;
              puStack_c8 = (undefined *)0x1cb55a4;
              lStack_e0 = lVar15;
              pppuStack_d0 = &ppuStack_90;
              if ((bRam0000000003ec027b & 1) == 0) {
                func_0x00f78a20(0x3d23990,0,0);
                bRam0000000003ec027b = 1;
              }
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              puVar3 = &uStack_c0;
              lVar7 = lStack_d8;
              lVar11 = lStack_e0;
              uVar9 = uStack_e8;
              uVar16 = uStack_f0;
              ppppuVar17 = (undefined8 ****)pppuStack_d0;
              puVar18 = puStack_c8;
              goto code_r0x03248740;
            }
          }
        }
        lVar7 = func_0x00f78af4();
        uStack_f0 = 0x3d41280;
        puStack_c8 = &Atlas_UI_Screens_RewardScreen__OnAfterExit;
        uStack_e8 = uVar9;
        lStack_e0 = lVar15;
        pppuStack_d0 = &ppuStack_90;
        if ((bRam0000000003eb4be6 & 1) == 0) {
          func_0x00f78a20(0x3d20bc0);
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d41290);
          bRam0000000003eb4be6 = 1;
        }
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(lVar7,1,0);
        lVar15 = *(long *)(lVar7 + 0xd8);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar3 = &uStack_1a0;
        uStack_1a0 = 0x3d41280;
        uStack_198 = 0x3d23990;
        puStack_178 = &UNK_014e212c;
        lStack_190 = lVar15;
        lStack_188 = lVar7;
        pppuStack_180 = &pppuStack_d0;
        if ((bRam0000000003ec021a & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ec021a = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar7 = lVar15;
        lVar11 = 0x3ec0000;
        uVar9 = 0x3d23990;
        uVar16 = 0x3d41280;
        ppppuVar17 = &pppuStack_180;
        puVar18 = &UNK_03236658;
code_r0x03248740:
        *(undefined8 *)((long)puVar3 + -0x30) = uVar16;
        *(undefined8 *)((long)puVar3 + -0x28) = uVar9;
        *(long *)((long)puVar3 + -0x20) = lVar11;
        *(long *)((long)puVar3 + -0x18) = lVar7;
        *(undefined8 *****)((long)puVar3 + -0x10) = ppppuVar17;
        *(undefined **)((long)puVar3 + -8) = puVar18;
        if ((bRam0000000003ec021b & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003ec021b = 1;
        }
        if (lVar15 == 0) {
          uVar10 = 1;
        }
        else {
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar6 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar15);
          uVar10 = (ulong)(uVar6 ^ 1);
        }
        return uVar10;
      }
      puStack_78 = &Atlas_UI_Screens_RewardScreenViewBehaviour__SetContentVisible;
      goto code_r0x0321a930;
    }
    plVar8 = (long *)___cxa_begin_catch();
    pppuVar13 = (undefined8 ***)*plVar8;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d337c8);
    if (pppuVar13 != (undefined8 ***)0x0) {
      func_0x00f78ac0(pppuVar13,0);
      goto code_r0x014e1f64;
    }
  }
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41280);
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0)) {
    uVar16 = 0;
    puStack_78 = &UNK_014e1ee8;
code_r0x0321a930:
    ppuStack_90 = pppuVar13;
    puStack_88 = (undefined *)param_1;
    if (pcRam0000000003ebe9d8 == (code *)0x0) {
      pcRam0000000003ebe9d8 =
           (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*pcRam0000000003ebe9d8)(lVar7,uVar16);
    return uVar10;
  }
LAB_014e1f04:
  func_0x00f78af4();
code_r0x014e1f08:
  func_0x00f78af4();
code_r0x014e1f14:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14e1f18);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x14e1f88 | Atlas.UI.Screens.RewardScreen.OnAfterEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x01cb55a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb55e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03236654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb56a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb5708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb575c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03249afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e2128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e2184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e21fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e23b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e2438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e2494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e245c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e2498) */
/* WARNING: Removing unreachable block (ram,0x014e249c) */
/* WARNING: Removing unreachable block (ram,0x014e24ac) */
/* WARNING: Removing unreachable block (ram,0x014e24b4) */
/* WARNING: Removing unreachable block (ram,0x014e24c4) */
/* WARNING: Removing unreachable block (ram,0x014e24cc) */
/* WARNING: Removing unreachable block (ram,0x014e24e4) */
/* WARNING: Removing unreachable block (ram,0x014e24ec) */
/* WARNING: Removing unreachable block (ram,0x014e2500) */
/* WARNING: Removing unreachable block (ram,0x014e250c) */
/* WARNING: Removing unreachable block (ram,0x014e2510) */
/* WARNING: Removing unreachable block (ram,0x014e2514) */
/* WARNING: Removing unreachable block (ram,0x014e243c) */
/* WARNING: Removing unreachable block (ram,0x014e23b4) */
/* WARNING: Removing unreachable block (ram,0x014e23b8) */
/* WARNING: Removing unreachable block (ram,0x014e23c0) */
/* WARNING: Removing unreachable block (ram,0x014e23d8) */
/* WARNING: Removing unreachable block (ram,0x014e2440) */
/* WARNING: Removing unreachable block (ram,0x014e2448) */
/* WARNING: Removing unreachable block (ram,0x014e2458) */
/* WARNING: Removing unreachable block (ram,0x014e23e0) */
/* WARNING: Removing unreachable block (ram,0x014e2534) */
/* WARNING: Removing unreachable block (ram,0x014e2538) */
/* WARNING: Removing unreachable block (ram,0x014e2558) */
/* WARNING: Removing unreachable block (ram,0x014e25d8) */
/* WARNING: Removing unreachable block (ram,0x014e25e0) */
/* WARNING: Removing unreachable block (ram,0x014e25fc) */
/* WARNING: Removing unreachable block (ram,0x014e2620) */
/* WARNING: Removing unreachable block (ram,0x014e2628) */
/* WARNING: Removing unreachable block (ram,0x014e262c) */
/* WARNING: Removing unreachable block (ram,0x014e2644) */
/* WARNING: Removing unreachable block (ram,0x014e2668) */
/* WARNING: Removing unreachable block (ram,0x014e2688) */
/* WARNING: Removing unreachable block (ram,0x014e2788) */
/* WARNING: Removing unreachable block (ram,0x014e2790) */
/* WARNING: Removing unreachable block (ram,0x014e269c) */
/* WARNING: Removing unreachable block (ram,0x014e26b4) */
/* WARNING: Removing unreachable block (ram,0x014e2798) */
/* WARNING: Removing unreachable block (ram,0x014e27f0) */
/* WARNING: Removing unreachable block (ram,0x014e27f4) */
/* WARNING: Removing unreachable block (ram,0x014e27a4) */
/* WARNING: Removing unreachable block (ram,0x014e27a8) */
/* WARNING: Removing unreachable block (ram,0x014e26c8) */
/* WARNING: Removing unreachable block (ram,0x014e26e0) */
/* WARNING: Removing unreachable block (ram,0x014e27b0) */
/* WARNING: Removing unreachable block (ram,0x014e27b8) */
/* WARNING: Removing unreachable block (ram,0x014e26f4) */
/* WARNING: Removing unreachable block (ram,0x014e270c) */
/* WARNING: Removing unreachable block (ram,0x014e27c0) */
/* WARNING: Removing unreachable block (ram,0x014e27c8) */
/* WARNING: Removing unreachable block (ram,0x014e2720) */
/* WARNING: Removing unreachable block (ram,0x014e2738) */
/* WARNING: Removing unreachable block (ram,0x014e27d0) */
/* WARNING: Removing unreachable block (ram,0x014e27d8) */
/* WARNING: Removing unreachable block (ram,0x014e274c) */
/* WARNING: Removing unreachable block (ram,0x014e2764) */
/* WARNING: Removing unreachable block (ram,0x014e27e0) */
/* WARNING: Removing unreachable block (ram,0x014e280c) */
/* WARNING: Removing unreachable block (ram,0x014e282c) */
/* WARNING: Removing unreachable block (ram,0x014e2864) */
/* WARNING: Removing unreachable block (ram,0x014e286c) */
/* WARNING: Removing unreachable block (ram,0x014e288c) */
/* WARNING: Removing unreachable block (ram,0x014e28a0) */
/* WARNING: Removing unreachable block (ram,0x014e28b8) */
/* WARNING: Removing unreachable block (ram,0x014e28cc) */
/* WARNING: Removing unreachable block (ram,0x014e28e4) */
/* WARNING: Removing unreachable block (ram,0x014e28f8) */
/* WARNING: Removing unreachable block (ram,0x014e2930) */
/* WARNING: Removing unreachable block (ram,0x014e2900) */
/* WARNING: Removing unreachable block (ram,0x014e2924) */
/* WARNING: Removing unreachable block (ram,0x014e27e8) */
/* WARNING: Removing unreachable block (ram,0x014e27f8) */
/* WARNING: Removing unreachable block (ram,0x01595b58) */
/* WARNING: Removing unreachable block (ram,0x01595b80) */
/* WARNING: Removing unreachable block (ram,0x01595bd0) */
/* WARNING: Removing unreachable block (ram,0x01595c60) */
/* WARNING: Removing unreachable block (ram,0x01595c6c) */
/* WARNING: Removing unreachable block (ram,0x01595c74) */
/* WARNING: Removing unreachable block (ram,0x01595c90) */
/* WARNING: Removing unreachable block (ram,0x01595c9c) */
/* WARNING: Removing unreachable block (ram,0x01595cac) */
/* WARNING: Removing unreachable block (ram,0x01595cbc) */
/* WARNING: Removing unreachable block (ram,0x01595cb8) */
/* WARNING: Removing unreachable block (ram,0x01595be4) */
/* WARNING: Removing unreachable block (ram,0x01595c08) */
/* WARNING: Removing unreachable block (ram,0x01595c38) */
/* WARNING: Removing unreachable block (ram,0x01595c44) */
/* WARNING: Removing unreachable block (ram,0x01595c18) */
/* WARNING: Removing unreachable block (ram,0x01595c58) */
/* WARNING: Removing unreachable block (ram,0x01595c20) */
/* WARNING: Removing unreachable block (ram,0x014e2778) */
/* WARNING: Removing unreachable block (ram,0x014e23e8) */
/* WARNING: Removing unreachable block (ram,0x014e241c) */
/* WARNING: Removing unreachable block (ram,0x014e2420) */
/* WARNING: Removing unreachable block (ram,0x014e2424) */
/* WARNING: Removing unreachable block (ram,0x014e242c) */
/* WARNING: Removing unreachable block (ram,0x014e2934) */
/* WARNING: Removing unreachable block (ram,0x014e296c) */
/* WARNING: Removing unreachable block (ram,0x014e2b18) */
/* WARNING: Removing unreachable block (ram,0x014e2b2c) */
/* WARNING: Removing unreachable block (ram,0x014e2b50) */
/* WARNING: Removing unreachable block (ram,0x014e2b60) */
/* WARNING: Removing unreachable block (ram,0x014e2b70) */
/* WARNING: Removing unreachable block (ram,0x014e2b78) */
/* WARNING: Removing unreachable block (ram,0x014e2b8c) */
/* WARNING: Removing unreachable block (ram,0x014e2ba4) */
/* WARNING: Removing unreachable block (ram,0x014e2bac) */
/* WARNING: Removing unreachable block (ram,0x014e2bc8) */
/* WARNING: Removing unreachable block (ram,0x014e2c24) */
/* WARNING: Removing unreachable block (ram,0x014e2c2c) */
/* WARNING: Removing unreachable block (ram,0x014e2c30) */
/* WARNING: Removing unreachable block (ram,0x014e2c70) */
/* WARNING: Removing unreachable block (ram,0x014e2c84) */
/* WARNING: Removing unreachable block (ram,0x014e2c8c) */
/* WARNING: Removing unreachable block (ram,0x014e2cd4) */
/* WARNING: Removing unreachable block (ram,0x014e2cf4) */
/* WARNING: Removing unreachable block (ram,0x014e2dd8) */
/* WARNING: Removing unreachable block (ram,0x014e2ddc) */
/* WARNING: Removing unreachable block (ram,0x014e2e20) */
/* WARNING: Removing unreachable block (ram,0x014e2e28) */
/* WARNING: Removing unreachable block (ram,0x014e2e30) */
/* WARNING: Removing unreachable block (ram,0x014e2e38) */
/* WARNING: Removing unreachable block (ram,0x014e2e40) */
/* WARNING: Removing unreachable block (ram,0x014e2e80) */
/* WARNING: Removing unreachable block (ram,0x014e2e90) */
/* WARNING: Removing unreachable block (ram,0x014e2ec0) */
/* WARNING: Removing unreachable block (ram,0x014e2d08) */
/* WARNING: Removing unreachable block (ram,0x014e2d20) */
/* WARNING: Removing unreachable block (ram,0x014e302c) */
/* WARNING: Removing unreachable block (ram,0x014e3040) */
/* WARNING: Removing unreachable block (ram,0x014e3054) */
/* WARNING: Removing unreachable block (ram,0x014e3070) */
/* WARNING: Removing unreachable block (ram,0x014e307c) */
/* WARNING: Removing unreachable block (ram,0x014e30b4) */
/* WARNING: Removing unreachable block (ram,0x014e30c4) */
/* WARNING: Removing unreachable block (ram,0x014e30f0) */
/* WARNING: Removing unreachable block (ram,0x014e3208) */
/* WARNING: Removing unreachable block (ram,0x014e3140) */
/* WARNING: Removing unreachable block (ram,0x014e320c) */
/* WARNING: Removing unreachable block (ram,0x014e2d34) */
/* WARNING: Removing unreachable block (ram,0x014e2d4c) */
/* WARNING: Removing unreachable block (ram,0x014e3148) */
/* WARNING: Removing unreachable block (ram,0x014e314c) */
/* WARNING: Removing unreachable block (ram,0x014e316c) */
/* WARNING: Removing unreachable block (ram,0x014e2d60) */
/* WARNING: Removing unreachable block (ram,0x014e2d78) */
/* WARNING: Removing unreachable block (ram,0x014e3184) */
/* WARNING: Removing unreachable block (ram,0x014e3188) */
/* WARNING: Removing unreachable block (ram,0x014e31a8) */
/* WARNING: Removing unreachable block (ram,0x014e2d8c) */
/* WARNING: Removing unreachable block (ram,0x014e2da4) */
/* WARNING: Removing unreachable block (ram,0x014e31c0) */
/* WARNING: Removing unreachable block (ram,0x014e31c4) */
/* WARNING: Removing unreachable block (ram,0x014e31e4) */
/* WARNING: Removing unreachable block (ram,0x014e31f8) */
/* WARNING: Removing unreachable block (ram,0x014e2db8) */
/* WARNING: Removing unreachable block (ram,0x014e2f0c) */
/* WARNING: Removing unreachable block (ram,0x014e2f24) */
/* WARNING: Removing unreachable block (ram,0x014e2f28) */
/* WARNING: Removing unreachable block (ram,0x014e2f4c) */
/* WARNING: Removing unreachable block (ram,0x014e2f58) */
/* WARNING: Removing unreachable block (ram,0x014e2f90) */
/* WARNING: Removing unreachable block (ram,0x014e2fa0) */
/* WARNING: Removing unreachable block (ram,0x014e2fcc) */
/* WARNING: Removing unreachable block (ram,0x014e3008) */
/* WARNING: Removing unreachable block (ram,0x014e3018) */
/* WARNING: Removing unreachable block (ram,0x014e3020) */
/* WARNING: Removing unreachable block (ram,0x014e3210) */
/* WARNING: Removing unreachable block (ram,0x014e2dd0) */
/* WARNING: Removing unreachable block (ram,0x014e3218) */
/* WARNING: Removing unreachable block (ram,0x014e3230) */
/* WARNING: Removing unreachable block (ram,0x014e3238) */
/* WARNING: Removing unreachable block (ram,0x014e325c) */
/* WARNING: Removing unreachable block (ram,0x014e3264) */
/* WARNING: Removing unreachable block (ram,0x014e3288) */
/* WARNING: Removing unreachable block (ram,0x014e3290) */
/* WARNING: Removing unreachable block (ram,0x014e32a8) */
/* WARNING: Removing unreachable block (ram,0x014e32b0) */
/* WARNING: Removing unreachable block (ram,0x014e32b4) */
/* WARNING: Removing unreachable block (ram,0x014e32b8) */
/* WARNING: Removing unreachable block (ram,0x014e32ec) */
/* WARNING: Removing unreachable block (ram,0x014e32f4) */
/* WARNING: Removing unreachable block (ram,0x014e3304) */
/* WARNING: Removing unreachable block (ram,0x014e3308) */
/* WARNING: Removing unreachable block (ram,0x014e33ac) */
/* WARNING: Removing unreachable block (ram,0x014e3310) */
/* WARNING: Removing unreachable block (ram,0x014e3334) */
/* WARNING: Removing unreachable block (ram,0x014e3370) */
/* WARNING: Removing unreachable block (ram,0x014e3384) */
/* WARNING: Removing unreachable block (ram,0x014e3344) */
/* WARNING: Removing unreachable block (ram,0x014e33b0) */
/* WARNING: Removing unreachable block (ram,0x014e3358) */
/* WARNING: Removing unreachable block (ram,0x014e33b8) */
/* WARNING: Removing unreachable block (ram,0x014e33bc) */
/* WARNING: Removing unreachable block (ram,0x014e3360) */
/* WARNING: Removing unreachable block (ram,0x014e2200) */
/* WARNING: Removing unreachable block (ram,0x014e2204) */
/* WARNING: Removing unreachable block (ram,0x014e2214) */
/* WARNING: Removing unreachable block (ram,0x014e221c) */
/* WARNING: Removing unreachable block (ram,0x014e2220) */
/* WARNING: Removing unreachable block (ram,0x014e222c) */
/* WARNING: Removing unreachable block (ram,0x014e223c) */
/* WARNING: Removing unreachable block (ram,0x014e2244) */
/* WARNING: Removing unreachable block (ram,0x014e2250) */
/* WARNING: Removing unreachable block (ram,0x014e2268) */
/* WARNING: Removing unreachable block (ram,0x014e2270) */
/* WARNING: Removing unreachable block (ram,0x014e228c) */
/* WARNING: Removing unreachable block (ram,0x014e22b8) */
/* WARNING: Removing unreachable block (ram,0x014e22c0) */
/* WARNING: Removing unreachable block (ram,0x014e22c8) */
/* WARNING: Removing unreachable block (ram,0x014e22d4) */
/* WARNING: Removing unreachable block (ram,0x014e22dc) */
/* WARNING: Removing unreachable block (ram,0x014e2188) */
/* WARNING: Removing unreachable block (ram,0x014e218c) */
/* WARNING: Removing unreachable block (ram,0x014e219c) */
/* WARNING: Removing unreachable block (ram,0x014e21a4) */
/* WARNING: Removing unreachable block (ram,0x014e21a8) */
/* WARNING: Removing unreachable block (ram,0x014e21b4) */
/* WARNING: Removing unreachable block (ram,0x014e21c4) */
/* WARNING: Removing unreachable block (ram,0x014e21cc) */
/* WARNING: Removing unreachable block (ram,0x014e21d8) */
/* WARNING: Removing unreachable block (ram,0x014e21e8) */
/* WARNING: Removing unreachable block (ram,0x014e21f0) */
/* WARNING: Removing unreachable block (ram,0x014e21f4) */
/* WARNING: Removing unreachable block (ram,0x014e212c) */
/* WARNING: Removing unreachable block (ram,0x014e2130) */
/* WARNING: Removing unreachable block (ram,0x014e2138) */
/* WARNING: Removing unreachable block (ram,0x014e2140) */
/* WARNING: Removing unreachable block (ram,0x014e2148) */
/* WARNING: Removing unreachable block (ram,0x014e22fc) */
/* WARNING: Removing unreachable block (ram,0x014e2334) */
/* WARNING: Removing unreachable block (ram,0x014e236c) */
/* WARNING: Removing unreachable block (ram,0x014e239c) */
/* WARNING: Removing unreachable block (ram,0x014e23a4) */
/* WARNING: Removing unreachable block (ram,0x014e23a8) */
/* WARNING: Removing unreachable block (ram,0x014e2158) */
/* WARNING: Removing unreachable block (ram,0x014e2170) */
/* WARNING: Removing unreachable block (ram,0x014e2178) */
/* WARNING: Removing unreachable block (ram,0x014e217c) */
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x01cb570c) */
/* WARNING: Removing unreachable block (ram,0x01cb56a8) */
/* WARNING: Removing unreachable block (ram,0x01cb56ac) */
/* WARNING: Removing unreachable block (ram,0x01cb56e0) */
/* WARNING: Removing unreachable block (ram,0x01cb571c) */
/* WARNING: Removing unreachable block (ram,0x01cb5770) */
/* WARNING: Removing unreachable block (ram,0x01cb5798) */
/* WARNING: Removing unreachable block (ram,0x01cb57ac) */
/* WARNING: Removing unreachable block (ram,0x01cb5834) */
/* WARNING: Removing unreachable block (ram,0x01cb5854) */
/* WARNING: Removing unreachable block (ram,0x01cb5880) */
/* WARNING: Removing unreachable block (ram,0x01cb5894) */
/* WARNING: Removing unreachable block (ram,0x01cb591c) */
/* WARNING: Removing unreachable block (ram,0x01cb5898) */
/* WARNING: Removing unreachable block (ram,0x01cb590c) */
/* WARNING: Removing unreachable block (ram,0x01cb58b4) */
/* WARNING: Removing unreachable block (ram,0x01cb58e4) */
/* WARNING: Removing unreachable block (ram,0x01cb58ec) */
/* WARNING: Removing unreachable block (ram,0x01cb58f0) */
/* WARNING: Removing unreachable block (ram,0x01cb5844) */
/* WARNING: Removing unreachable block (ram,0x01cb57b0) */
/* WARNING: Removing unreachable block (ram,0x01cb5824) */
/* WARNING: Removing unreachable block (ram,0x01cb57cc) */
/* WARNING: Removing unreachable block (ram,0x01cb57fc) */
/* WARNING: Removing unreachable block (ram,0x01cb5804) */
/* WARNING: Removing unreachable block (ram,0x01cb5808) */
/* WARNING: Removing unreachable block (ram,0x03249a9c) */
/* WARNING: Removing unreachable block (ram,0x03249ac8) */
/* WARNING: Removing unreachable block (ram,0x03249adc) */
/* WARNING: Removing unreachable block (ram,0x03249ae8) */
/* WARNING: Removing unreachable block (ram,0x03249af0) */
/* WARNING: Removing unreachable block (ram,0x03249af4) */
/* WARNING: Removing unreachable block (ram,0x01cb5730) */
/* WARNING: Removing unreachable block (ram,0x01cb5760) */
/* WARNING: Removing unreachable block (ram,0x01cb574c) */
/* WARNING: Removing unreachable block (ram,0x01cb56f4) */
/* WARNING: Removing unreachable block (ram,0x01cb56b0) */
/* WARNING: Removing unreachable block (ram,0x03236658) */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */
/* WARNING: Removing unreachable block (ram,0x0164aba4) */
/* WARNING: Removing unreachable block (ram,0x0164abbc) */
/* WARNING: Removing unreachable block (ram,0x0164abcc) */
/* WARNING: Removing unreachable block (ram,0x0164a1b8) */
/* WARNING: Removing unreachable block (ram,0x0164a1e0) */
/* WARNING: Removing unreachable block (ram,0x0164a20c) */
/* WARNING: Removing unreachable block (ram,0x0164a228) */
/* WARNING: Removing unreachable block (ram,0x0164a230) */
/* WARNING: Removing unreachable block (ram,0x0164a234) */
/* WARNING: Removing unreachable block (ram,0x0164a24c) */
/* WARNING: Removing unreachable block (ram,0x0164a254) */
/* WARNING: Removing unreachable block (ram,0x0164a264) */
/* WARNING: Removing unreachable block (ram,0x0164a274) */
/* WARNING: Removing unreachable block (ram,0x0164a28c) */
/* WARNING: Removing unreachable block (ram,0x0164a2a8) */
/* WARNING: Removing unreachable block (ram,0x0164a2b0) */
/* WARNING: Removing unreachable block (ram,0x0164a2b4) */
/* WARNING: Removing unreachable block (ram,0x0164a2c4) */
/* WARNING: Removing unreachable block (ram,0x0164a2d0) */
/* WARNING: Removing unreachable block (ram,0x0164a2d4) */
/* WARNING: Removing unreachable block (ram,0x0164a308) */
/* WARNING: Removing unreachable block (ram,0x0164a30c) */
/* WARNING: Removing unreachable block (ram,0x0164a2f4) */
/* WARNING: Removing unreachable block (ram,0x0164a2f8) */
/* WARNING: Removing unreachable block (ram,0x01cb55ec) */
/* WARNING: Removing unreachable block (ram,0x01cb55a4) */
/* WARNING: Removing unreachable block (ram,0x01cb55a8) */
/* WARNING: Removing unreachable block (ram,0x01cb55f0) */
/* WARNING: Removing unreachable block (ram,0x01cb55f4) */
/* WARNING: Removing unreachable block (ram,0x01cb55c4) */
/* WARNING: Removing unreachable block (ram,0x01cb5618) */
/* WARNING: Removing unreachable block (ram,0x01cb563c) */
/* WARNING: Removing unreachable block (ram,0x01cb566c) */
/* WARNING: Removing unreachable block (ram,0x01cb5680) */
/* WARNING: Removing unreachable block (ram,0x01cb568c) */
/* WARNING: Removing unreachable block (ram,0x01cb5694) */
/* WARNING: Removing unreachable block (ram,0x01cb5698) */
/* WARNING: Removing unreachable block (ram,0x01cb5628) */
/* WARNING: Removing unreachable block (ram,0x01cb55c8) */
/* WARNING: Removing unreachable block (ram,0x0164aa78) */
/* WARNING: Removing unreachable block (ram,0x0164aaac) */
/* WARNING: Removing unreachable block (ram,0x0164aad8) */
/* WARNING: Removing unreachable block (ram,0x0164aae8) */
/* WARNING: Removing unreachable block (ram,0x0164aaf0) */
/* WARNING: Removing unreachable block (ram,0x0164aafc) */
/* WARNING: Removing unreachable block (ram,0x0164aba8) */
/* WARNING: Removing unreachable block (ram,0x0164ab10) */
/* WARNING: Removing unreachable block (ram,0x0164ab14) */
/* WARNING: Removing unreachable block (ram,0x0164ab24) */
/* WARNING: Removing unreachable block (ram,0x0164ab40) */
/* WARNING: Removing unreachable block (ram,0x0164ab48) */
/* WARNING: Removing unreachable block (ram,0x0164ab4c) */
/* WARNING: Removing unreachable block (ram,0x0164ab58) */
/* WARNING: Removing unreachable block (ram,0x0164abe0) */
/* WARNING: Removing unreachable block (ram,0x0164abe4) */
/* WARNING: Removing unreachable block (ram,0x0164abf0) */
/* WARNING: Removing unreachable block (ram,0x0164ac18) */
/* WARNING: Removing unreachable block (ram,0x0164ac2c) */
/* WARNING: Removing unreachable block (ram,0x0164ac3c) */
/* WARNING: Removing unreachable block (ram,0x0164ac68) */
/* WARNING: Removing unreachable block (ram,0x0164ac44) */
/* WARNING: Removing unreachable block (ram,0x0164ac6c) */
/* WARNING: Removing unreachable block (ram,0x0164ac9c) */
/* WARNING: Removing unreachable block (ram,0x0164acbc) */
/* WARNING: Removing unreachable block (ram,0x0164acd0) */
/* WARNING: Removing unreachable block (ram,0x0164acd8) */
/* WARNING: Removing unreachable block (ram,0x0164acdc) */
/* WARNING: Removing unreachable block (ram,0x0164acf4) */
/* WARNING: Removing unreachable block (ram,0x0164acfc) */
/* WARNING: Removing unreachable block (ram,0x0164ad00) */
/* WARNING: Removing unreachable block (ram,0x0164ac50) */
/* WARNING: Removing unreachable block (ram,0x0164ab74) */
/* WARNING: Removing unreachable block (ram,0x0164ab78) */
/* WARNING: Removing unreachable block (ram,0x0164ab8c) */
/* WARNING: Removing unreachable block (ram,0x0164ab94) */
/* WARNING: Removing unreachable block (ram,0x0164ab98) */
/* WARNING: Removing unreachable block (ram,0x014e2460) */
/* WARNING: Removing unreachable block (ram,0x014e2468) */
/* WARNING: Removing unreachable block (ram,0x014e251c) */
/* WARNING: Removing unreachable block (ram,0x014e2470) */
/* WARNING: Removing unreachable block (ram,0x014e2480) */
/* WARNING: Removing unreachable block (ram,0x014e2488) */
/* WARNING: Removing unreachable block (ram,0x014e248c) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */

uint Atlas_UI_Screens_RewardScreen__OnAfterEnter(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 unaff_x21;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 ***pppuVar8;
  undefined *puVar9;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  
  lVar4 = 0x3eb4000;
  if ((bRam0000000003eb4be5 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d2c8d0);
    func_0x00f78a20(0x3d5c790);
    func_0x00f78a20(0x3d41280);
    bRam0000000003eb4be5 = 1;
  }
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41280);
  lStack_58 = param_1;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x80);
    unaff_x21 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(unaff_x21,param_1,uRam0000000003d5c790,0);
    if (lVar4 != 0) {
      /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar4,unaff_x21,0);
      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41280);
      uVar6 = uRam0000000003d2c8d0;
      if (lVar3 != 0) {
        lVar4 = *(long *)(lVar3 + 0x80);
        if ((bRam0000000003eb70f7 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb70f7 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uStack_70 = 0x3eb7000;
        uStack_68 = uVar6;
        puStack_48 = (undefined *)0x1cb55a4;
        lStack_60 = lVar4;
        ppuStack_50 = (undefined8 **)&stack0xfffffffffffffff0;
        if ((bRam0000000003ec027b & 1) == 0) {
          func_0x00f78a20(0x3d23990,0,0);
          bRam0000000003ec027b = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar1 = (undefined8 *)&stack0xffffffffffffffc0;
        lVar3 = lStack_58;
        lVar5 = lStack_60;
        uVar6 = uStack_68;
        uVar7 = uStack_70;
        pppuVar8 = (undefined8 ***)ppuStack_50;
        puVar9 = puStack_48;
        goto code_r0x03248740;
      }
    }
  }
  lVar3 = func_0x00f78af4();
  uStack_70 = 0x3d41280;
  puStack_48 = &Atlas_UI_Screens_RewardScreen__OnAfterExit;
  uStack_68 = unaff_x21;
  lStack_60 = lVar4;
  ppuStack_50 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4be6 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41290);
    bRam0000000003eb4be6 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(lVar3,1,0);
  lVar4 = *(long *)(lVar3 + 0xd8);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar1 = &uStack_120;
  uStack_120 = 0x3d41280;
  uStack_118 = 0x3d23990;
  puStack_f8 = &UNK_014e212c;
  lStack_110 = lVar4;
  lStack_108 = lVar3;
  ppuStack_100 = &ppuStack_50;
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar3 = lVar4;
  lVar5 = 0x3ec0000;
  uVar6 = 0x3d23990;
  uVar7 = 0x3d41280;
  pppuVar8 = &ppuStack_100;
  puVar9 = &UNK_03236658;
code_r0x03248740:
  *(undefined8 *)((long)puVar1 + -0x30) = uVar7;
  *(undefined8 *)((long)puVar1 + -0x28) = uVar6;
  *(long *)((long)puVar1 + -0x20) = lVar5;
  *(long *)((long)puVar1 + -0x18) = lVar3;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar8;
  *(undefined **)((long)puVar1 + -8) = puVar9;
  if ((bRam0000000003ec021b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec021b = 1;
  }
  if (lVar4 == 0) {
    uVar2 = 1;
  }
  else {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar4);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}



// ============================================================
// RVA: 0x14e207c | Atlas.UI.Screens.RewardScreen.OnAfterExit
// ============================================================

/* WARNING: Possible PIC construction at 0x014e2438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e245c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e243c) */
/* WARNING: Removing unreachable block (ram,0x014e2460) */

void Atlas_UI_Screens_RewardScreen__OnAfterExit
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  int extraout_w1;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar25;
  undefined *puVar26;
  code *pcVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  ulong extraout_d0;
  undefined4 uVar31;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar32 [12];
  undefined8 uStack_1a0;
  ulong uStack_198;
  undefined8 ******ppppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  ulong uStack_168;
  undefined8 ******ppppppuStack_160;
  code *pcStack_158;
  undefined1 auStack_150 [8];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 *****pppppuStack_c0;
  undefined *puStack_b8;
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4be6 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41290);
    bRam0000000003eb4be6 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(param_5,1,0);
  uVar19 = *(undefined8 *)(param_5 + 0xd8);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar19,0);
  if (iVar6 == 0) {
LAB_014e2140:
    if ((*(long *)(param_5 + 0xd0) != 0) &&
       (lVar8 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(param_5 + 0xd0),0,0),
       lVar8 != 0)) {
      Atlas_Gameplay_Kart_KartFEAnimator__ExitFEScreen(lVar8,0);
      uVar19 = *(undefined8 *)(param_5 + 0xa0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar19,0);
      if (iVar6 != 0) {
        uVar19 = *(undefined8 *)(param_5 + 0xa0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar19,0);
      }
      iVar6 = /*Core.Assets.AssetManagerHandle$$IsValid*/ func_0x01637a38(param_5 + 0x90,0);
      if (iVar6 != 0) {
        if (*(long *)(param_5 + 0x80) == 0) goto LAB_014e22fc;
        /*Core.Assets.AssetManager$$Release*/ func_0x016363a4(*(long *)(param_5 + 0x80),*(undefined4 *)(param_5 + 0x90),0);
      }
      uVar19 = *(undefined8 *)(param_5 + 0xb8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar19,0);
      if (iVar6 != 0) {
        uVar19 = *(undefined8 *)(param_5 + 0xb8);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar19,0);
      }
      iVar6 = /*Core.Assets.AssetManagerHandle$$IsValid*/ func_0x01637a38(param_5 + 0xb4,0);
      if (iVar6 != 0) {
        if (*(long *)(param_5 + 0x80) == 0) goto LAB_014e22fc;
        /*Core.Assets.AssetManager$$Release*/ func_0x016363a4(*(long *)(param_5 + 0x80),*(undefined4 *)(param_5 + 0xb4),0);
      }
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41290);
      if ((lVar8 != 0) && (*(long *)(lVar8 + 0x48) != 0)) {
        uVar19 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar8 + 0x48),0);
        lVar8 = *(long *)(param_5 + 0xd0);
        Atlas_Gameplay_KartLoadout__FromSaveGame(&uStack_70,uVar19,0);
        if (lVar8 != 0) {
          uStack_a8 = uStack_68;
          uStack_b0 = uStack_70;
          uStack_98 = uStack_58;
          uStack_a0 = uStack_60;
          uStack_88 = uStack_48;
          uStack_90 = uStack_50;
          uStack_78 = uStack_38;
          uStack_80 = uStack_40;
          Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout(lVar8,0,&uStack_b0,0);
          param_2 = (undefined4)uStack_40;
          if (((*(long *)(param_5 + 0x98) != 0) && (*(long *)(param_5 + 0xd0) != 0)) &&
             (lVar8 = *(long *)(*(long *)(param_5 + 0xd0) + 0x80), lVar8 != 0)) {
            /*Atlas.Lighting.LightWorld$$UnRegisterMember*/ func_0x014866f8(lVar8,*(long *)(param_5 + 0x98),0);
            *(undefined8 *)(param_5 + 0x98) = 0;
          }
          if (*(long *)(param_5 + 0x88) != 0) {
            /*Atlas.Rendering.MaterialDuplicator$$DeInit*/ func_0x01491d4c(*(long *)(param_5 + 0x88),0);
            *(undefined8 *)(param_5 + 0x88) = 0;
            return;
          }
        }
      }
    }
  }
  else if (*(long *)(param_5 + 0xd8) != 0) {
    Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__HideIPPlanes(*(long *)(param_5 + 0xd8),0);
    goto LAB_014e2140;
  }
LAB_014e22fc:
  uVar9 = func_0x00f78af4();
  puVar4 = (undefined8 *)auStack_150;
  puVar5 = auStack_150;
  puStack_b8 = &Atlas_UI_Screens_RewardScreen__OnUpdate;
  pppppppuVar25 = (undefined8 *******)&pppppuStack_c0;
  uVar19 = 0x3d23990;
  pppppuStack_c0 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4be7 & 1) == 0) {
    func_0x00f78a20(0x3d56db0);
    func_0x00f78a20(0x3d3e180);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41290);
    bRam0000000003eb4be7 = 1;
  }
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  /*Core.UI2.UIScreen$$OnUpdate*/ func_0x02f8a624(extraout_d0 & 0xffffffff,uVar9,0);
  puVar20 = (undefined8 *)(uVar9 + 0xd8);
  uVar22 = *puVar20;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar22,0);
  if ((uVar10 & 1) == 0) {
    if (*(long *)(uVar9 + 0xd0) != 0) {
      iVar6 = Atlas_FrontEnd_FrontEndScene__TryGetSubsceneBehaviour_FrontEndSubsceneBehaviourBase_
                        (*(long *)(uVar9 + 0xd0),puVar20,uRam0000000003d56db0);
      if (iVar6 == 0) {
        return;
      }
      goto code_r0x014e23d8;
    }
    goto code_r0x014e2534;
  }
code_r0x014e23d8:
  if (*(char *)(uVar9 + 200) == '\0') {
    if (*(long *)(uVar9 + 0x80) == 0) goto code_r0x014e2534;
    iVar6 = /*Core.Assets.AssetManager$$HasAssetFinishedLoading*/ func_0x01636d40(*(long *)(uVar9 + 0x80),*(undefined4 *)(uVar9 + 0xb4),0);
    uVar7 = param_2;
    if (iVar6 == 0) goto code_r0x014e2468;
    pcVar27 = (code *)&UNK_014e2460;
    uVar10 = uVar9;
code_r0x014e2538:
    uStack_180 = 0x3d23990;
    uStack_178 = uVar22;
    puStack_170 = puVar20;
    uStack_168 = uVar9;
    ppppppuStack_160 = pppppppuVar25;
    pcStack_158 = pcVar27;
    if ((bRam0000000003eb4be8 & 1) == 0) {
      func_0x00f78a20(0x3d1fc20);
      func_0x00f78a20(0x3d51bb8);
      func_0x00f78a20(0x3d20278);
      func_0x00f78a20(0x3d20650);
      func_0x00f78a20(0x3d577c0);
      func_0x00f78a20(0x3d21ba8);
      func_0x00f78a20(0x3d22c80);
      func_0x00f78a20(0x3d5b0d0);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d25b48);
      bRam0000000003eb4be8 = 1;
    }
    uVar21 = 0x3eb4000;
    if (*(long *)(uVar10 + 0x80) != 0) {
      uVar11 = /*Core.Assets.AssetManager$$GetLoadedAsset<Sprite>*/ func_0x01818628(*(long *)(uVar10 + 0x80),*(undefined4 *)(uVar10 + 0xb4),
                               uRam0000000003d51bb8);
      if (*(long *)(uVar10 + 0xd8) != 0) {
        uVar19 = 0x3d5b0d0;
        uVar22 = *(undefined8 *)(*(long *)(uVar10 + 0xd8) + 0x80);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar8 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(uVar11,uVar22,uRam0000000003d5b0d0);
        *(long *)(uVar10 + 0xb8) = lVar8;
        uVar21 = uVar11;
        if (lVar8 != 0) {
          uVar12 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar8,uRam0000000003d577c0);
          uVar11 = uStack_180;
          *(undefined8 *)(uVar10 + 0xc0) = uVar12;
          *(undefined1 *)(uVar10 + 200) = 1;
          plVar17 = *(long **)(uVar10 + 0x70);
          if (plVar17 == (long *)0x0) {
            return;
          }
          lVar8 = *plVar17;
          bVar2 = *(byte *)(lVar8 + 300);
          uVar9 = uStack_168;
          puVar20 = puStack_170;
          uVar12 = uStack_178;
          pcVar27 = pcStack_158;
          if ((bVar2 < *(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300)) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300) * 8 +
                       -8) != /*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80)) {
            if ((bVar2 < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
               (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8
                         + -8) != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
              if ((bVar2 < *(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300)) ||
                 (*(long *)(*(long *)(lVar8 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) {
                if ((bVar2 < *(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300)) ||
                   (*(long *)(*(long *)(lVar8 + 200) +
                              (ulong)*(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) * 8 + -8) !=
                    /*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20)) {
                  if ((bVar2 < *(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300)) ||
                     (*(long *)(*(long *)(lVar8 + 200) +
                                (ulong)*(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300) * 8 + -8) !=
                      /*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8)) {
                    if (bVar2 < *(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300)) {
                      return;
                    }
                    if (*(long *)(*(long *)(lVar8 + 200) +
                                  (ulong)*(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300) * 8 + -8) !=
                        /*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278) {
                      return;
                    }
                    if (*(undefined8 **)(uVar10 + 0xd8) != (undefined8 *)0x0) {
                      uVar16 = 0x12;
                      puVar5 = auStack_150;
                      puVar13 = *(undefined8 **)(uVar10 + 0xd8);
                      pppppppuVar25 = (undefined8 *******)ppppppuStack_160;
                      goto Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition;
                    }
                  }
                  else if (*(undefined8 **)(uVar10 + 0xd8) != (undefined8 *)0x0) {
                    uVar16 = 0xb;
                    puVar5 = auStack_150;
                    puVar13 = *(undefined8 **)(uVar10 + 0xd8);
                    pppppppuVar25 = (undefined8 *******)ppppppuStack_160;
                    goto Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition;
                  }
                }
                else if (*(undefined8 **)(uVar10 + 0xd8) != (undefined8 *)0x0) {
                  uVar16 = 0xc;
                  puVar5 = auStack_150;
                  puVar13 = *(undefined8 **)(uVar10 + 0xd8);
                  pppppppuVar25 = (undefined8 *******)ppppppuStack_160;
                  goto Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition;
                }
              }
              else if (*(undefined8 **)(uVar10 + 0xd8) != (undefined8 *)0x0) {
                uVar16 = 10;
                puVar5 = auStack_150;
                puVar13 = *(undefined8 **)(uVar10 + 0xd8);
                pppppppuVar25 = (undefined8 *******)ppppppuStack_160;
                goto Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition;
              }
            }
            else {
              puVar13 = *(undefined8 **)(uVar10 + 0xd8);
              if ((char)plVar17[0x11] == '\0') {
                if (puVar13 != (undefined8 *)0x0) {
                  uVar16 = 9;
                  puVar5 = auStack_150;
                  pppppppuVar25 = (undefined8 *******)ppppppuStack_160;
                  goto Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition;
                }
              }
              else if (puVar13 != (undefined8 *)0x0) {
                uVar16 = 0xf;
                puVar5 = auStack_150;
                pppppppuVar25 = (undefined8 *******)ppppppuStack_160;
Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition:
                while( true ) {
                  puVar14 = puVar13;
                  *(undefined8 *)(puVar5 + -0x30) = uVar11;
                  *(undefined8 *)(puVar5 + -0x28) = uVar12;
                  *(undefined8 **)(puVar5 + -0x20) = puVar20;
                  *(ulong *)(puVar5 + -0x18) = uVar9;
                  *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar25;
                  *(code **)(puVar5 + -8) = pcVar27;
                  pppppppuVar25 = (undefined8 *******)(puVar5 + -0x10);
                  if ((bRam0000000003eb517c & 1) == 0) {
                    func_0x00f78a20(0x3d2e438);
                    func_0x00f78a20(0x3d33cb0);
                    func_0x00f78a20(0x3d33cb8);
                    func_0x00f78a20(0x3d33cc0);
                    func_0x00f78a20(0x3d39210);
                    func_0x00f78a20(0x3d39218);
                    bRam0000000003eb517c = 1;
                  }
                  *(undefined8 *)(puVar5 + -0x40) = 0;
                  *(undefined8 *)(puVar5 + -0x58) = 0;
                  *(undefined8 *)(puVar5 + -0x60) = 0;
                  *(undefined8 *)(puVar5 + -0x48) = 0;
                  *(undefined8 *)(puVar5 + -0x50) = 0;
                  if (puVar14[8] != 0) {
                    /*System.Collections.Generic.Dictionary<Int32Enum, object>$$GetEnumerator*/ func_0x01ea7788(puVar5 + -0x60,puVar14[8],uRam0000000003d2e438);
                    while( true ) {
                      uVar9 = /*System.Collections.Generic.Dictionary.Enumerator<Int32Enum, object>$$MoveNext*/ func_0x01fc986c(puVar5 + -0x60,uRam0000000003d33cb8);
                      if ((uVar9 & 1) == 0) {
                        /*System.Collections.Generic.Dictionary.Enumerator<Int32Enum, object>$$Dispose*/ func_0x01fc99e8(puVar5 + -0x60,uRam0000000003d33cb0);
                        return;
                      }
                      if (*(long *)(puVar5 + -0x48) == 0) break;
                      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(puVar5 + -0x48),
                                      *(int *)(puVar5 + -0x50) == (int)uVar16,0);
                    }
                    func_0x00f78af4();
                    /* WARNING: Does not return */
                    pcVar27 = (code *)SoftwareBreakpoint(1,0x1595c60);
                    (*pcVar27)();
                  }
                  func_0x00f78af4();
                  uVar9 = uVar16;
                  if (extraout_w1 == 1) {
                    puVar15 = (ulong *)___cxa_begin_catch();
                    uVar9 = *puVar15;
                    ___cxa_end_catch();
                    /*System.Collections.Generic.Dictionary.Enumerator<Int32Enum, object>$$Dispose*/ func_0x01fc99e8(puVar5 + -0x60,*puVar14);
                    if (uVar9 == 0) {
                      return;
                    }
                    func_0x00f78ac0(uVar9,0);
                  }
                  auVar32 = __Unwind_Resume();
                  uVar3 = auVar32._8_4_ - 1;
                  if ((7 < uVar3) || ((0xbfU >> (ulong)(uVar3 & 0x1f) & 1) == 0)) break;
                  uVar16 = (ulong)*(uint *)(&UNK_033f8a14 + (long)(int)uVar3 * 4);
                  puVar5 = puVar5 + -0x60;
                  puVar13 = auVar32._0_8_;
                  puVar20 = puVar14;
                  uVar12 = 0x3eb5000;
                  pcVar27 = 
                  Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCustomisationCameraPosition;
                }
                return;
              }
            }
          }
          else if (*(undefined8 **)(uVar10 + 0xd8) != (undefined8 *)0x0) {
            uVar16 = 8;
            puVar13 = *(undefined8 **)(uVar10 + 0xd8);
            pppppppuVar25 = (undefined8 *******)ppppppuStack_160;
            goto Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition;
          }
        }
      }
    }
    uVar16 = func_0x00f78af4();
    puVar4 = &uStack_1a0;
    puStack_188 = &Atlas_UI_Screens_RewardScreen__PreloadReward;
    pppppppuVar25 = &ppppppuStack_190;
    puVar20 = (undefined8 *)0x3eb4000;
    uStack_1a0 = uVar21;
    uStack_198 = uVar10;
    ppppppuStack_190 = &ppppppuStack_160;
    if ((bRam0000000003eb4be9 & 1) == 0) {
      func_0x00f78a20(0x3d1fc20);
      func_0x00f78a20(0x3d21ba8);
      func_0x00f78a20(0x3d25b48);
      func_0x00f78a20(0x3d6ba50);
      bRam0000000003eb4be9 = 1;
    }
    plVar17 = *(long **)(uVar16 + 0x70);
    if (plVar17 == (long *)0x0) {
      return;
    }
    lVar8 = *plVar17;
    bVar2 = *(byte *)(lVar8 + 300);
    if (((bVar2 < *(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300)) ||
        (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8 + -8)
         != /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) &&
       ((bVar2 < *(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) ||
        (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) * 8 + -8)
         != /*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20)))) {
      if (bVar2 < *(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300)) {
        return;
      }
      if (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300) * 8 + -8)
          != /*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8) {
        return;
      }
    }
    if (*(long *)(uVar16 + 0x80) != 0) {
      uVar7 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635f34(*(long *)(uVar16 + 0x80),plVar17[10],/*STR('Default')*/ uRam0000000003d6ba50,0,0,0);
      *(undefined4 *)(uVar16 + 0x90) = uVar7;
      return;
    }
    puVar26 = &Atlas_UI_Screens_RewardScreen__ShowReward;
    uVar9 = func_0x00f78af4();
  }
  else {
    if (*(long *)(uVar9 + 0xc0) == 0) {
code_r0x014e2534:
      pcVar27 = (code *)&Atlas_UI_Screens_RewardScreen__RunBoxDrop;
      uVar10 = func_0x00f78af4();
      goto code_r0x014e2538;
    }
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_148,*(long *)(uVar9 + 0xc0),0,0);
    uStack_118 = uStack_140;
    uStack_120 = uStack_148;
    uStack_108 = uStack_130;
    uStack_110 = uStack_138;
    uStack_100 = uStack_128;
    fVar28 = (float)/*UnityEngine.AnimatorStateInfo$$get_normalizedTime*/ func_0x03213aac(&uStack_120,0);
    param_2 = 0x3f800000;
    uVar7 = 0x3f800000;
    if ((fVar28 < 1.0) || (*(char *)(uVar9 + 0xc9) != '\0')) {
code_r0x014e2468:
      param_2 = uVar7;
      if (*(char *)(uVar9 + 0xc9) == '\0') {
        return;
      }
      puVar20 = *(undefined8 **)(uVar9 + 0xa0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(puVar20,0);
      if (((uVar10 & 1) == 0) && (iVar6 = /*Core.Assets.AssetManagerHandle$$IsValid*/ func_0x01637a38(uVar9 + 0x90,0), iVar6 != 0)) {
        if (*(long *)(uVar9 + 0x80) == 0) goto code_r0x014e2534;
        iVar6 = /*Core.Assets.AssetManager$$HasAssetFinishedLoading*/ func_0x01636d40(*(long *)(uVar9 + 0x80),*(undefined4 *)(uVar9 + 0x90),0);
        if (iVar6 != 0) {
          /*Atlas.UI.Screens.RewardScreen$$InstantiateAndAnimateReward*/ func_0x014e340c(uVar9);
        }
      }
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar9,uRam0000000003d41290);
      if ((lVar8 != 0) && (*(long *)(lVar8 + 0x98) != 0)) {
        uVar10 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalShowing*/ func_0x025e0180(*(long *)(lVar8 + 0x98),uRam0000000003d3e180);
        if (((uVar10 & 1) == 0) &&
           (fVar28 = *(float *)(uVar9 + 0xb0) - (float)extraout_d0,
           *(float *)(uVar9 + 0xb0) = fVar28, fVar28 <= 0.0)) {
          /*Atlas.UI.Screens.RewardScreen$$EndOfNewItem*/ func_0x014e35a8(uVar9);
        }
        return;
      }
      goto code_r0x014e2534;
    }
    *(undefined1 *)(uVar9 + 0xc9) = 1;
    puVar26 = &UNK_014e243c;
    uVar16 = uVar9;
  }
  *(undefined8 *)((long)puVar4 + -0x80) = unaff_d11;
  *(undefined8 *)((long)puVar4 + -0x78) = unaff_d10;
  *(undefined8 *)((long)puVar4 + -0x70) = unaff_d9;
  *(ulong *)((long)puVar4 + -0x68) = extraout_d0 & 0xffffffff;
  *(undefined8 *)((long)puVar4 + -0x60) = unaff_x28;
  *(undefined8 *)((long)puVar4 + -0x58) = unaff_x27;
  *(undefined8 *)((long)puVar4 + -0x50) = unaff_x26;
  *(undefined8 *)((long)puVar4 + -0x48) = unaff_x25;
  *(undefined8 *)((long)puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)((long)puVar4 + -0x38) = unaff_x23;
  *(undefined8 *)((long)puVar4 + -0x30) = uVar19;
  *(undefined8 *)((long)puVar4 + -0x28) = uVar22;
  *(undefined8 **)((long)puVar4 + -0x20) = puVar20;
  *(ulong *)((long)puVar4 + -0x18) = uVar16;
  *(undefined8 ********)((long)puVar4 + -0x10) = pppppppuVar25;
  *(undefined **)((long)puVar4 + -8) = puVar26;
  if ((bRam0000000003eb4beb & 1) == 0) {
    func_0x00f78a20(0x3d1fc20);
    func_0x00f78a20(0x3d20278);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2dcb8);
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d21ba8);
    func_0x00f78a20(0x3d22c80);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d5c788);
    func_0x00f78a20(0x3d244b0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d41280);
    func_0x00f78a20(0x3d41288);
    func_0x00f78a20(0x3d41290);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d25b48);
    func_0x00f78a20(0x3d71870);
    func_0x00f78a20(0x3d71858);
    func_0x00f78a20(0x3d71880);
    func_0x00f78a20(0x3d71878);
    func_0x00f78a20(0x3d78e90);
    func_0x00f78a20(0x3d78ff0);
    func_0x00f78a20(0x3d790d8);
    func_0x00f78a20(0x3d790d0);
    func_0x00f78a20(0x3d79028);
    func_0x00f78a20(0x3d790c8);
    func_0x00f78a20(0x3d71888);
    func_0x00f78a20(0x3d71868);
    func_0x00f78a20(0x3d71860);
    bRam0000000003eb4beb = 1;
  }
  *(undefined8 *)((long)puVar4 + -0xa0) = 0;
  *(undefined8 *)((long)puVar4 + -0x98) = 0;
  *(undefined8 *)((long)puVar4 + -0xb8) = 0;
  *(undefined8 *)((long)puVar4 + -0xb0) = 0;
  *(undefined8 *)((long)puVar4 + -0xa8) = 0;
  if (*(long *)(uVar9 + 0xd0) == 0) goto code_r0x014e33ac;
  Atlas_FrontEnd_FrontEndScene__ResetKart(*(long *)(uVar9 + 0xd0),0,0);
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar9,uRam0000000003d41288);
  if (lVar8 == 0) goto code_r0x014e33ac;
  if (*(char *)(lVar8 + 0x40) != '\0') {
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar9,uRam0000000003d41290);
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0x78) == 0)) goto code_r0x014e33ac;
    /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar8 + 0x78),0,0,0,0);
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar9,uRam0000000003d41280);
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x68) == 0)) goto code_r0x014e33ac;
  /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar8 + 0x68),1,0);
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar9,uRam0000000003d41280);
  if (lVar8 == 0) goto code_r0x014e33ac;
  uVar19 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
  uVar22 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
  /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar22,uVar9,uRam0000000003d5c788,0);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('enter')*/ uRam0000000003d78e90,uVar19,0,uVar22,0,0);
  /*Atlas.UI.Screens.RewardScreen$$ShowIPPlane*/ func_0x014e361c(uVar9);
  /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/Explosion')*/ uRam0000000003d78ff0,0);
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar9,uRam0000000003d41290);
  if (lVar8 == 0) goto code_r0x014e33ac;
  lVar24 = *(long *)(lVar8 + 0x88);
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar9,uRam0000000003d41290);
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x48) == 0)) goto code_r0x014e33ac;
  uVar19 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar8 + 0x48),0);
  Atlas_Gameplay_KartLoadout__FromSaveGame((undefined1 *)((long)puVar4 + -0xf8),uVar19,0);
  uVar19 = *(undefined8 *)((long)puVar4 + -0xf8);
  uVar11 = *(undefined8 *)((long)puVar4 + -0xf0);
  uVar22 = *(undefined8 *)((long)puVar4 + -0xe8);
  uVar12 = *(undefined8 *)((long)puVar4 + -0xe0);
  uVar21 = *(undefined8 *)((long)puVar4 + -0xd8);
  uVar1 = *(undefined8 *)((long)puVar4 + -0xd0);
  *(undefined8 *)((long)puVar4 + -0x98) = *(undefined8 *)((long)puVar4 + -0xc0);
  *(undefined8 *)((long)puVar4 + -0xa0) = *(undefined8 *)((long)puVar4 + -200);
  uVar18 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  plVar17 = *(long **)(uVar9 + 0x70);
  if (plVar17 != (long *)0x0) {
    lVar8 = *plVar17;
    bVar2 = *(byte *)(lVar8 + 300);
    if ((bVar2 < *(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300)) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300) * 8 + -8) !=
        /*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80)) {
      if ((bVar2 < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8)
          != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
        if ((bVar2 < *(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300)) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8 + -8
                     ) != /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) {
          if ((bVar2 < *(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300)) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) * 8 +
                       -8) != /*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20)) {
            if ((bVar2 < *(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300)) ||
               (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300) * 8
                         + -8) != /*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8)) {
              if ((bVar2 < *(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300)) ||
                 (*(long *)(*(long *)(lVar8 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278)) goto code_r0x014e3218;
              if (lVar24 == 0) goto code_r0x014e33ac;
              uVar18 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar24,/*STR('REWARD_SCREEN_NEW_BOOST')*/ uRam0000000003d71860,0);
              if ((*(long *)(uVar9 + 0xd8) == 0) || (lVar8 = *(long *)(uVar9 + 0xd0), lVar8 == 0))
              goto code_r0x014e33ac;
              lVar24 = plVar17[3];
              lVar23 = *(long *)(*(long *)(uVar9 + 0xd8) + 0xb0);
              *(undefined8 *)((long)puVar4 + -0x1b8) = uVar19;
              *(undefined8 *)((long)puVar4 + -0x1b0) = uVar11;
              *(undefined8 *)((long)puVar4 + -0x1a8) = uVar22;
              *(undefined8 *)((long)puVar4 + -0x1a0) = uVar12;
              *(undefined8 *)((long)puVar4 + -0x198) = uVar21;
              *(long *)((long)puVar4 + -400) = lVar24;
              *(undefined8 *)((long)puVar4 + -0x180) = *(undefined8 *)((long)puVar4 + -0x98);
              *(undefined8 *)((long)puVar4 + -0x188) = *(undefined8 *)((long)puVar4 + -0xa0);
              Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                        (lVar8,0,(undefined1 *)((long)puVar4 + -0x1b8),0);
              if ((*(long *)(uVar9 + 0xd0) == 0) ||
                 (lVar8 = Atlas_FrontEnd_FrontEndScene__GetKartTransform
                                    (*(long *)(uVar9 + 0xd0),0,0), lVar23 == 0))
              goto code_r0x014e33ac;
              uVar29 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar23,0);
              uVar7 = param_3;
              uVar31 = param_2;
              uVar30 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar23,0);
              if (lVar8 == 0) goto code_r0x014e33ac;
              /*UnityEngine.Transform$$SetPositionAndRotation*/ func_0x032760c8(uVar29,param_2,param_3,uVar30,uVar31,uVar7,param_4,lVar8,0);
              if (((*(long *)(uVar9 + 0xd0) == 0) ||
                  (lVar8 = Atlas_FrontEnd_FrontEndScene__GetKart(*(long *)(uVar9 + 0xd0),0,0),
                  lVar8 == 0)) || (*(long *)(lVar8 + 0x30) == 0)) goto code_r0x014e33ac;
              *(undefined1 *)(*(long *)(lVar8 + 0x30) + 0x5c) = 1;
              goto code_r0x014e3210;
            }
            if (lVar24 == 0) goto code_r0x014e33ac;
            uVar18 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar24,/*STR('REWARD_SCREEN_NEW_GLIDER')*/ uRam0000000003d71870,0);
            if (*(long *)(uVar9 + 0xd8) == 0) goto code_r0x014e33ac;
            *(undefined8 *)(uVar9 + 0xa8) = *(undefined8 *)(*(long *)(uVar9 + 0xd8) + 0xa0);
            puVar20 = (undefined8 *)0x3d79028;
          }
          else {
            if (lVar24 == 0) goto code_r0x014e33ac;
            uVar18 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar24,/*STR('REWARD_SCREEN_NEW_ANTENNA')*/ uRam0000000003d71858,0);
            if (*(long *)(uVar9 + 0xd8) == 0) goto code_r0x014e33ac;
            *(undefined8 *)(uVar9 + 0xa8) = *(undefined8 *)(*(long *)(uVar9 + 0xd8) + 0x98);
            puVar20 = (undefined8 *)0x3d790c8;
          }
        }
        else {
          if (lVar24 == 0) goto code_r0x014e33ac;
          uVar18 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar24,/*STR('REWARD_SCREEN_NEW_WHEELS')*/ uRam0000000003d71888,0);
          if (*(long *)(uVar9 + 0xd8) == 0) goto code_r0x014e33ac;
          *(undefined8 *)(uVar9 + 0xa8) = *(undefined8 *)(*(long *)(uVar9 + 0xd8) + 0xa8);
          puVar20 = (undefined8 *)0x3d790d8;
        }
        /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(*puVar20,0);
        goto code_r0x014e3218;
      }
      iVar6 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(plVar17,0);
      if (lVar24 == 0) goto code_r0x014e33ac;
      puVar20 = (undefined8 *)0x3d71880;
      if (iVar6 == 0) {
        puVar20 = (undefined8 *)0x3d71868;
      }
      uVar18 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar24,*puVar20,0);
      if ((*(long *)(uVar9 + 0xd8) == 0) || (lVar8 = *(long *)(uVar9 + 0xd0), lVar8 == 0))
      goto code_r0x014e33ac;
      lVar24 = *(long *)(*(long *)(uVar9 + 0xd8) + 0x90);
      *(long *)((long)puVar4 + -0x178) = plVar17[3];
      *(undefined8 *)((long)puVar4 + -0x170) = uVar11;
      *(undefined8 *)((long)puVar4 + -0x168) = uVar22;
      *(undefined8 *)((long)puVar4 + -0x160) = uVar12;
      *(undefined8 *)((long)puVar4 + -0x158) = uVar21;
      *(undefined8 *)((long)puVar4 + -0x150) = uVar1;
      *(undefined8 *)((long)puVar4 + -0x140) = *(undefined8 *)((long)puVar4 + -0x98);
      *(undefined8 *)((long)puVar4 + -0x148) = *(undefined8 *)((long)puVar4 + -0xa0);
      Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                (lVar8,0,(undefined1 *)((long)puVar4 + -0x178),0);
      if ((*(long *)(uVar9 + 0xd0) == 0) ||
         (lVar8 = Atlas_FrontEnd_FrontEndScene__GetKartTransform(*(long *)(uVar9 + 0xd0),0,0),
         lVar24 == 0)) goto code_r0x014e33ac;
      uVar29 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar24,0);
      uVar7 = param_3;
      uVar31 = param_2;
      uVar30 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar24,0);
      if (lVar8 == 0) goto code_r0x014e33ac;
      /*UnityEngine.Transform$$SetPositionAndRotation*/ func_0x032760c8(uVar29,param_2,param_3,uVar30,uVar31,uVar7,param_4,lVar8,0);
      iVar6 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(plVar17,0);
      if (iVar6 == 0) {
        /*Atlas.Audio.UIAudio$$PlayCharacterUnlocked*/ func_0x01516de8((int)plVar17[0x15],0);
      }
      else {
        /*Atlas.Audio.UIAudio$$PlaySkinUnlocked*/ func_0x01516ee4();
      }
    }
    else {
      if (lVar24 == 0) goto code_r0x014e33ac;
      uVar18 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar24,/*STR('REWARD_SCREEN_NEW_KART')*/ uRam0000000003d71878,0);
      lVar8 = plVar17[3];
      puVar20 = (undefined8 *)/*Atlas.Definitions.KartDefinition$$get_StockWheelDef*/ func_0x015c9a3c(plVar17,0);
      uVar19 = *puVar20;
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((*(long *)(uVar9 + 0xd8) == 0) || (lVar24 = *(long *)(uVar9 + 0xd0), lVar24 == 0))
      goto code_r0x014e33ac;
      uVar22 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
      lVar23 = *(long *)(*(long *)(uVar9 + 0xd8) + 0x88);
      *(undefined8 *)((long)puVar4 + -0x138) = uVar22;
      *(long *)((long)puVar4 + -0x130) = lVar8;
      *(undefined8 *)((long)puVar4 + -0x128) = uVar22;
      *(undefined8 *)((long)puVar4 + -0x120) = uVar22;
      *(undefined8 *)((long)puVar4 + -0x118) = uVar19;
      *(undefined8 *)((long)puVar4 + -0x110) = uVar1;
      *(undefined8 *)((long)puVar4 + -0x100) = *(undefined8 *)((long)puVar4 + -0x98);
      *(undefined8 *)((long)puVar4 + -0x108) = *(undefined8 *)((long)puVar4 + -0xa0);
      Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                (lVar24,0,(undefined1 *)((long)puVar4 + -0x138),0);
      if ((*(long *)(uVar9 + 0xd0) == 0) ||
         (lVar8 = Atlas_FrontEnd_FrontEndScene__GetKartTransform(*(long *)(uVar9 + 0xd0),0,0),
         lVar23 == 0)) goto code_r0x014e33ac;
      uVar29 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar23,0);
      uVar7 = param_3;
      uVar31 = param_2;
      uVar30 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar23,0);
      if (lVar8 == 0) goto code_r0x014e33ac;
      /*UnityEngine.Transform$$SetPositionAndRotation*/ func_0x032760c8(uVar29,param_2,param_3,uVar30,uVar31,uVar7,param_4,lVar8,0);
      /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/Unlock_Kart')*/ uRam0000000003d790d0,0);
    }
code_r0x014e3210:
    /*Atlas.UI.Screens.RewardScreen$$AnimateReward*/ func_0x014e3860(uVar9);
  }
code_r0x014e3218:
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar9,uRam0000000003d41280);
  if ((lVar8 != 0) && (plVar17 = *(long **)(lVar8 + 0x70), plVar17 != (long *)0x0)) {
    (**(code **)(*plVar17 + 0x558))(plVar17,uVar18,*(undefined8 *)(*plVar17 + 0x560));
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar9,uRam0000000003d41280);
    if ((lVar8 != 0) && (plVar17 = *(long **)(lVar8 + 0x78), plVar17 != (long *)0x0)) {
      (**(code **)(*plVar17 + 0x558))(plVar17,uVar18,*(undefined8 *)(*plVar17 + 0x560));
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar9,uRam0000000003d41290);
      if ((lVar8 != 0) && (*(long *)(lVar8 + 0x20) != 0)) {
        lVar8 = *(long *)(*(long *)(lVar8 + 0x20) + 0x10);
        if (((*(ushort *)(/*Atlas.UI.Screens.RewardScreen_TypeInfo*/ lRam0000000003d244b0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.RewardScreen_TypeInfo*/ lRam0000000003d244b0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar8 != 0) {
          lVar8 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar8,*(undefined8 *)
                                         (*(long *)(/*Atlas.UI.Screens.RewardScreen_TypeInfo*/ lRam0000000003d244b0 + 0xb8) + 0x10),
                                  uRam0000000003d57280);
          lVar24 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar9,uRam0000000003d41290);
          if ((lVar24 != 0) && (*(long *)(lVar24 + 0xb0) != 0)) {
            iVar6 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                              (*(long *)(lVar24 + 0xb0),lVar8,0);
            if (iVar6 != 0) {
              if ((lVar8 == 0) || (*(long *)(lVar8 + 0x58) == 0)) goto code_r0x014e33ac;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)puVar4 + -0xb8),*(long *)(lVar8 + 0x58),
                              uRam0000000003d3dc70);
              while (uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)puVar4 + -0xb8),
                                              uRam0000000003d337d0), (uVar10 & 1) != 0) {
                uVar19 = *(undefined8 *)((long)puVar4 + -0xa8);
                lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar9,uRam0000000003d41290);
                if (lVar8 == 0) goto code_r0x014e33b0;
                if (*(long *)(lVar8 + 0x98) == 0) {
                  func_0x00f78af4();
                  goto code_r0x014e33bc;
                }
                /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar8 + 0x98),uVar19,uRam0000000003d3e188);
              }
              /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)puVar4 + -0xb8),uRam0000000003d337c8);
            }
            return;
          }
        }
      }
    }
  }
code_r0x014e33ac:
  func_0x00f78af4();
code_r0x014e33b0:
  func_0x00f78af4();
code_r0x014e33bc:
                    /* WARNING: Does not return */
  pcVar27 = (code *)SoftwareBreakpoint(1,0x14e33c0);
  (*pcVar27)();
}



// ============================================================
// RVA: 0x14e2300 | Atlas.UI.Screens.RewardScreen.OnUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x014e2438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e245c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e243c) */
/* WARNING: Removing unreachable block (ram,0x014e2460) */

void Atlas_UI_Screens_RewardScreen__OnUpdate
               (float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,ulong param_5
               )

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  int extraout_w1;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar25;
  undefined *puVar26;
  code *pcVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar32 [12];
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 ******ppppppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  ulong uStack_b8;
  undefined8 ******ppppppuStack_b0;
  code *pcStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  puVar4 = (undefined8 *)auStack_a0;
  puVar5 = auStack_a0;
  pppppppuVar25 = (undefined8 *******)&stack0xfffffffffffffff0;
  uVar23 = 0x3d23990;
  if ((bRam0000000003eb4be7 & 1) == 0) {
    func_0x00f78a20(0x3d56db0);
    func_0x00f78a20(0x3d3e180);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41290);
    bRam0000000003eb4be7 = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  /*Core.UI2.UIScreen$$OnUpdate*/ func_0x02f8a624(param_1,param_5,0);
  puVar19 = (undefined8 *)(param_5 + 0xd8);
  uVar21 = *puVar19;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar21,0);
  if ((uVar8 & 1) == 0) {
    if (*(long *)(param_5 + 0xd0) != 0) {
      iVar6 = Atlas_FrontEnd_FrontEndScene__TryGetSubsceneBehaviour_FrontEndSubsceneBehaviourBase_
                        (*(long *)(param_5 + 0xd0),puVar19,uRam0000000003d56db0);
      if (iVar6 == 0) {
        return;
      }
      goto LAB_014e23d8;
    }
    goto LAB_014e2534;
  }
LAB_014e23d8:
  if (*(char *)(param_5 + 200) == '\0') {
    if (*(long *)(param_5 + 0x80) == 0) goto LAB_014e2534;
    iVar6 = /*Core.Assets.AssetManager$$HasAssetFinishedLoading*/ func_0x01636d40(*(long *)(param_5 + 0x80),*(undefined4 *)(param_5 + 0xb4),0);
    uVar7 = param_2;
    if (iVar6 == 0) goto LAB_014e2468;
    pcVar27 = (code *)&UNK_014e2460;
    uVar8 = param_5;
code_r0x014e2538:
    uStack_d0 = 0x3d23990;
    uStack_c8 = uVar21;
    puStack_c0 = puVar19;
    uStack_b8 = param_5;
    ppppppuStack_b0 = pppppppuVar25;
    pcStack_a8 = pcVar27;
    if ((bRam0000000003eb4be8 & 1) == 0) {
      func_0x00f78a20(0x3d1fc20);
      func_0x00f78a20(0x3d51bb8);
      func_0x00f78a20(0x3d20278);
      func_0x00f78a20(0x3d20650);
      func_0x00f78a20(0x3d577c0);
      func_0x00f78a20(0x3d21ba8);
      func_0x00f78a20(0x3d22c80);
      func_0x00f78a20(0x3d5b0d0);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d25b48);
      bRam0000000003eb4be8 = 1;
    }
    uVar20 = 0x3eb4000;
    if (*(long *)(uVar8 + 0x80) != 0) {
      uVar10 = /*Core.Assets.AssetManager$$GetLoadedAsset<Sprite>*/ func_0x01818628(*(long *)(uVar8 + 0x80),*(undefined4 *)(uVar8 + 0xb4),
                               uRam0000000003d51bb8);
      if (*(long *)(uVar8 + 0xd8) != 0) {
        uVar23 = 0x3d5b0d0;
        uVar21 = *(undefined8 *)(*(long *)(uVar8 + 0xd8) + 0x80);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar9 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(uVar10,uVar21,uRam0000000003d5b0d0);
        *(long *)(uVar8 + 0xb8) = lVar9;
        uVar20 = uVar10;
        if (lVar9 != 0) {
          uVar11 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar9,uRam0000000003d577c0);
          uVar10 = uStack_d0;
          *(undefined8 *)(uVar8 + 0xc0) = uVar11;
          *(undefined1 *)(uVar8 + 200) = 1;
          plVar16 = *(long **)(uVar8 + 0x70);
          if (plVar16 == (long *)0x0) {
            return;
          }
          lVar9 = *plVar16;
          bVar2 = *(byte *)(lVar9 + 300);
          uVar18 = uStack_b8;
          puVar19 = puStack_c0;
          uVar11 = uStack_c8;
          pcVar27 = pcStack_a8;
          if ((bVar2 < *(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300)) ||
             (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300) * 8 +
                       -8) != /*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80)) {
            if ((bVar2 < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
               (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8
                         + -8) != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
              if ((bVar2 < *(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300)) ||
                 (*(long *)(*(long *)(lVar9 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) {
                if ((bVar2 < *(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300)) ||
                   (*(long *)(*(long *)(lVar9 + 200) +
                              (ulong)*(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) * 8 + -8) !=
                    /*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20)) {
                  if ((bVar2 < *(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300)) ||
                     (*(long *)(*(long *)(lVar9 + 200) +
                                (ulong)*(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300) * 8 + -8) !=
                      /*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8)) {
                    if (bVar2 < *(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300)) {
                      return;
                    }
                    if (*(long *)(*(long *)(lVar9 + 200) +
                                  (ulong)*(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300) * 8 + -8) !=
                        /*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278) {
                      return;
                    }
                    if (*(undefined8 **)(uVar8 + 0xd8) != (undefined8 *)0x0) {
                      uVar15 = 0x12;
                      puVar5 = auStack_a0;
                      puVar12 = *(undefined8 **)(uVar8 + 0xd8);
                      pppppppuVar25 = (undefined8 *******)ppppppuStack_b0;
                      goto Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition;
                    }
                  }
                  else if (*(undefined8 **)(uVar8 + 0xd8) != (undefined8 *)0x0) {
                    uVar15 = 0xb;
                    puVar5 = auStack_a0;
                    puVar12 = *(undefined8 **)(uVar8 + 0xd8);
                    pppppppuVar25 = (undefined8 *******)ppppppuStack_b0;
                    goto Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition;
                  }
                }
                else if (*(undefined8 **)(uVar8 + 0xd8) != (undefined8 *)0x0) {
                  uVar15 = 0xc;
                  puVar5 = auStack_a0;
                  puVar12 = *(undefined8 **)(uVar8 + 0xd8);
                  pppppppuVar25 = (undefined8 *******)ppppppuStack_b0;
                  goto Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition;
                }
              }
              else if (*(undefined8 **)(uVar8 + 0xd8) != (undefined8 *)0x0) {
                uVar15 = 10;
                puVar5 = auStack_a0;
                puVar12 = *(undefined8 **)(uVar8 + 0xd8);
                pppppppuVar25 = (undefined8 *******)ppppppuStack_b0;
                goto Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition;
              }
            }
            else {
              puVar12 = *(undefined8 **)(uVar8 + 0xd8);
              if ((char)plVar16[0x11] == '\0') {
                if (puVar12 != (undefined8 *)0x0) {
                  uVar15 = 9;
                  puVar5 = auStack_a0;
                  pppppppuVar25 = (undefined8 *******)ppppppuStack_b0;
                  goto Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition;
                }
              }
              else if (puVar12 != (undefined8 *)0x0) {
                uVar15 = 0xf;
                puVar5 = auStack_a0;
                pppppppuVar25 = (undefined8 *******)ppppppuStack_b0;
Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition:
                while( true ) {
                  puVar13 = puVar12;
                  *(undefined8 *)(puVar5 + -0x30) = uVar10;
                  *(undefined8 *)(puVar5 + -0x28) = uVar11;
                  *(undefined8 **)(puVar5 + -0x20) = puVar19;
                  *(ulong *)(puVar5 + -0x18) = uVar18;
                  *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar25;
                  *(code **)(puVar5 + -8) = pcVar27;
                  pppppppuVar25 = (undefined8 *******)(puVar5 + -0x10);
                  if ((bRam0000000003eb517c & 1) == 0) {
                    func_0x00f78a20(0x3d2e438);
                    func_0x00f78a20(0x3d33cb0);
                    func_0x00f78a20(0x3d33cb8);
                    func_0x00f78a20(0x3d33cc0);
                    func_0x00f78a20(0x3d39210);
                    func_0x00f78a20(0x3d39218);
                    bRam0000000003eb517c = 1;
                  }
                  *(undefined8 *)(puVar5 + -0x40) = 0;
                  *(undefined8 *)(puVar5 + -0x58) = 0;
                  *(undefined8 *)(puVar5 + -0x60) = 0;
                  *(undefined8 *)(puVar5 + -0x48) = 0;
                  *(undefined8 *)(puVar5 + -0x50) = 0;
                  if (puVar13[8] != 0) {
                    /*System.Collections.Generic.Dictionary<Int32Enum, object>$$GetEnumerator*/ func_0x01ea7788(puVar5 + -0x60,puVar13[8],uRam0000000003d2e438);
                    while( true ) {
                      uVar8 = /*System.Collections.Generic.Dictionary.Enumerator<Int32Enum, object>$$MoveNext*/ func_0x01fc986c(puVar5 + -0x60,uRam0000000003d33cb8);
                      if ((uVar8 & 1) == 0) {
                        /*System.Collections.Generic.Dictionary.Enumerator<Int32Enum, object>$$Dispose*/ func_0x01fc99e8(puVar5 + -0x60,uRam0000000003d33cb0);
                        return;
                      }
                      if (*(long *)(puVar5 + -0x48) == 0) break;
                      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(puVar5 + -0x48),
                                      *(int *)(puVar5 + -0x50) == (int)uVar15,0);
                    }
                    func_0x00f78af4();
                    /* WARNING: Does not return */
                    pcVar27 = (code *)SoftwareBreakpoint(1,0x1595c60);
                    (*pcVar27)();
                  }
                  func_0x00f78af4();
                  uVar18 = uVar15;
                  if (extraout_w1 == 1) {
                    puVar14 = (ulong *)___cxa_begin_catch();
                    uVar18 = *puVar14;
                    ___cxa_end_catch();
                    /*System.Collections.Generic.Dictionary.Enumerator<Int32Enum, object>$$Dispose*/ func_0x01fc99e8(puVar5 + -0x60,*puVar13);
                    if (uVar18 == 0) {
                      return;
                    }
                    func_0x00f78ac0(uVar18,0);
                  }
                  auVar32 = __Unwind_Resume();
                  uVar3 = auVar32._8_4_ - 1;
                  if ((7 < uVar3) || ((0xbfU >> (ulong)(uVar3 & 0x1f) & 1) == 0)) break;
                  uVar15 = (ulong)*(uint *)(&UNK_033f8a14 + (long)(int)uVar3 * 4);
                  puVar5 = puVar5 + -0x60;
                  puVar12 = auVar32._0_8_;
                  puVar19 = puVar13;
                  uVar11 = 0x3eb5000;
                  pcVar27 = 
                  Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCustomisationCameraPosition;
                }
                return;
              }
            }
          }
          else if (*(undefined8 **)(uVar8 + 0xd8) != (undefined8 *)0x0) {
            uVar15 = 8;
            puVar12 = *(undefined8 **)(uVar8 + 0xd8);
            pppppppuVar25 = (undefined8 *******)ppppppuStack_b0;
            goto Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition;
          }
        }
      }
    }
    uVar18 = func_0x00f78af4();
    puVar4 = &uStack_f0;
    puStack_d8 = &Atlas_UI_Screens_RewardScreen__PreloadReward;
    pppppppuVar25 = &ppppppuStack_e0;
    puVar19 = (undefined8 *)0x3eb4000;
    uStack_f0 = uVar20;
    uStack_e8 = uVar8;
    ppppppuStack_e0 = &ppppppuStack_b0;
    if ((bRam0000000003eb4be9 & 1) == 0) {
      func_0x00f78a20(0x3d1fc20);
      func_0x00f78a20(0x3d21ba8);
      func_0x00f78a20(0x3d25b48);
      func_0x00f78a20(0x3d6ba50);
      bRam0000000003eb4be9 = 1;
    }
    plVar16 = *(long **)(uVar18 + 0x70);
    if (plVar16 == (long *)0x0) {
      return;
    }
    lVar9 = *plVar16;
    bVar2 = *(byte *)(lVar9 + 300);
    if (((bVar2 < *(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300)) ||
        (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8 + -8)
         != /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) &&
       ((bVar2 < *(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) ||
        (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) * 8 + -8)
         != /*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20)))) {
      if (bVar2 < *(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300)) {
        return;
      }
      if (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300) * 8 + -8)
          != /*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8) {
        return;
      }
    }
    if (*(long *)(uVar18 + 0x80) != 0) {
      uVar7 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635f34(*(long *)(uVar18 + 0x80),plVar16[10],/*STR('Default')*/ uRam0000000003d6ba50,0,0,0);
      *(undefined4 *)(uVar18 + 0x90) = uVar7;
      return;
    }
    puVar26 = &Atlas_UI_Screens_RewardScreen__ShowReward;
    param_5 = func_0x00f78af4();
  }
  else {
    if (*(long *)(param_5 + 0xc0) == 0) {
LAB_014e2534:
      pcVar27 = (code *)&Atlas_UI_Screens_RewardScreen__RunBoxDrop;
      uVar8 = func_0x00f78af4();
      goto code_r0x014e2538;
    }
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_98,*(long *)(param_5 + 0xc0),0,0);
    uStack_68 = uStack_90;
    uStack_70 = uStack_98;
    uStack_58 = uStack_80;
    uStack_60 = uStack_88;
    uStack_50 = uStack_78;
    fVar28 = (float)/*UnityEngine.AnimatorStateInfo$$get_normalizedTime*/ func_0x03213aac(&uStack_70,0);
    param_2 = 0x3f800000;
    uVar7 = 0x3f800000;
    if ((fVar28 < 1.0) || (*(char *)(param_5 + 0xc9) != '\0')) {
LAB_014e2468:
      param_2 = uVar7;
      if (*(char *)(param_5 + 0xc9) == '\0') {
        return;
      }
      puVar19 = *(undefined8 **)(param_5 + 0xa0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(puVar19,0);
      if (((uVar8 & 1) == 0) && (iVar6 = /*Core.Assets.AssetManagerHandle$$IsValid*/ func_0x01637a38(param_5 + 0x90,0), iVar6 != 0)) {
        if (*(long *)(param_5 + 0x80) == 0) goto LAB_014e2534;
        iVar6 = /*Core.Assets.AssetManager$$HasAssetFinishedLoading*/ func_0x01636d40(*(long *)(param_5 + 0x80),*(undefined4 *)(param_5 + 0x90),0);
        if (iVar6 != 0) {
          /*Atlas.UI.Screens.RewardScreen$$InstantiateAndAnimateReward*/ func_0x014e340c(param_5);
        }
      }
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41290);
      if ((lVar9 != 0) && (*(long *)(lVar9 + 0x98) != 0)) {
        uVar8 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalShowing*/ func_0x025e0180(*(long *)(lVar9 + 0x98),uRam0000000003d3e180);
        if (((uVar8 & 1) == 0) &&
           (param_1 = *(float *)(param_5 + 0xb0) - param_1, *(float *)(param_5 + 0xb0) = param_1,
           param_1 <= 0.0)) {
          /*Atlas.UI.Screens.RewardScreen$$EndOfNewItem*/ func_0x014e35a8(param_5);
        }
        return;
      }
      goto LAB_014e2534;
    }
    *(undefined1 *)(param_5 + 0xc9) = 1;
    puVar26 = (undefined *)0x14e243c;
    uVar18 = param_5;
  }
  *(undefined8 *)((long)puVar4 + -0x80) = unaff_d11;
  *(undefined8 *)((long)puVar4 + -0x78) = unaff_d10;
  *(undefined8 *)((long)puVar4 + -0x70) = unaff_d9;
  *(ulong *)((long)puVar4 + -0x68) = (ulong)(uint)param_1;
  *(undefined8 *)((long)puVar4 + -0x60) = unaff_x28;
  *(undefined8 *)((long)puVar4 + -0x58) = unaff_x27;
  *(undefined8 *)((long)puVar4 + -0x50) = unaff_x26;
  *(undefined8 *)((long)puVar4 + -0x48) = unaff_x25;
  *(undefined8 *)((long)puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)((long)puVar4 + -0x38) = unaff_x23;
  *(undefined8 *)((long)puVar4 + -0x30) = uVar23;
  *(undefined8 *)((long)puVar4 + -0x28) = uVar21;
  *(undefined8 **)((long)puVar4 + -0x20) = puVar19;
  *(ulong *)((long)puVar4 + -0x18) = uVar18;
  *(undefined8 ********)((long)puVar4 + -0x10) = pppppppuVar25;
  *(undefined **)((long)puVar4 + -8) = puVar26;
  if ((bRam0000000003eb4beb & 1) == 0) {
    func_0x00f78a20(0x3d1fc20);
    func_0x00f78a20(0x3d20278);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2dcb8);
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d21ba8);
    func_0x00f78a20(0x3d22c80);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d5c788);
    func_0x00f78a20(0x3d244b0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d41280);
    func_0x00f78a20(0x3d41288);
    func_0x00f78a20(0x3d41290);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d25b48);
    func_0x00f78a20(0x3d71870);
    func_0x00f78a20(0x3d71858);
    func_0x00f78a20(0x3d71880);
    func_0x00f78a20(0x3d71878);
    func_0x00f78a20(0x3d78e90);
    func_0x00f78a20(0x3d78ff0);
    func_0x00f78a20(0x3d790d8);
    func_0x00f78a20(0x3d790d0);
    func_0x00f78a20(0x3d79028);
    func_0x00f78a20(0x3d790c8);
    func_0x00f78a20(0x3d71888);
    func_0x00f78a20(0x3d71868);
    func_0x00f78a20(0x3d71860);
    bRam0000000003eb4beb = 1;
  }
  *(undefined8 *)((long)puVar4 + -0xa0) = 0;
  *(undefined8 *)((long)puVar4 + -0x98) = 0;
  *(undefined8 *)((long)puVar4 + -0xb8) = 0;
  *(undefined8 *)((long)puVar4 + -0xb0) = 0;
  *(undefined8 *)((long)puVar4 + -0xa8) = 0;
  if (*(long *)(param_5 + 0xd0) == 0) goto code_r0x014e33ac;
  Atlas_FrontEnd_FrontEndScene__ResetKart(*(long *)(param_5 + 0xd0),0,0);
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_5,uRam0000000003d41288);
  if (lVar9 == 0) goto code_r0x014e33ac;
  if (*(char *)(lVar9 + 0x40) != '\0') {
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41290);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x78) == 0)) goto code_r0x014e33ac;
    /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar9 + 0x78),0,0,0,0);
  }
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41280);
  if ((lVar9 == 0) || (*(long *)(lVar9 + 0x68) == 0)) goto code_r0x014e33ac;
  /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar9 + 0x68),1,0);
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41280);
  if (lVar9 == 0) goto code_r0x014e33ac;
  uVar23 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0);
  uVar21 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
  /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar21,param_5,uRam0000000003d5c788,0);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('enter')*/ uRam0000000003d78e90,uVar23,0,uVar21,0,0);
  /*Atlas.UI.Screens.RewardScreen$$ShowIPPlane*/ func_0x014e361c(param_5);
  /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/Explosion')*/ uRam0000000003d78ff0,0);
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41290);
  if (lVar9 == 0) goto code_r0x014e33ac;
  lVar24 = *(long *)(lVar9 + 0x88);
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41290);
  if ((lVar9 == 0) || (*(long *)(lVar9 + 0x48) == 0)) goto code_r0x014e33ac;
  uVar23 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar9 + 0x48),0);
  Atlas_Gameplay_KartLoadout__FromSaveGame((undefined1 *)((long)puVar4 + -0xf8),uVar23,0);
  uVar23 = *(undefined8 *)((long)puVar4 + -0xf8);
  uVar10 = *(undefined8 *)((long)puVar4 + -0xf0);
  uVar21 = *(undefined8 *)((long)puVar4 + -0xe8);
  uVar11 = *(undefined8 *)((long)puVar4 + -0xe0);
  uVar20 = *(undefined8 *)((long)puVar4 + -0xd8);
  uVar1 = *(undefined8 *)((long)puVar4 + -0xd0);
  *(undefined8 *)((long)puVar4 + -0x98) = *(undefined8 *)((long)puVar4 + -0xc0);
  *(undefined8 *)((long)puVar4 + -0xa0) = *(undefined8 *)((long)puVar4 + -200);
  uVar17 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  plVar16 = *(long **)(param_5 + 0x70);
  if (plVar16 != (long *)0x0) {
    lVar9 = *plVar16;
    bVar2 = *(byte *)(lVar9 + 300);
    if ((bVar2 < *(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300)) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300) * 8 + -8) !=
        /*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80)) {
      if ((bVar2 < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8)
          != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
        if ((bVar2 < *(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300)) ||
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8 + -8
                     ) != /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) {
          if ((bVar2 < *(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300)) ||
             (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) * 8 +
                       -8) != /*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20)) {
            if ((bVar2 < *(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300)) ||
               (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300) * 8
                         + -8) != /*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8)) {
              if ((bVar2 < *(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300)) ||
                 (*(long *)(*(long *)(lVar9 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278)) goto code_r0x014e3218;
              if (lVar24 == 0) goto code_r0x014e33ac;
              uVar17 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar24,/*STR('REWARD_SCREEN_NEW_BOOST')*/ uRam0000000003d71860,0);
              if ((*(long *)(param_5 + 0xd8) == 0) ||
                 (lVar9 = *(long *)(param_5 + 0xd0), lVar9 == 0)) goto code_r0x014e33ac;
              lVar24 = plVar16[3];
              lVar22 = *(long *)(*(long *)(param_5 + 0xd8) + 0xb0);
              *(undefined8 *)((long)puVar4 + -0x1b8) = uVar23;
              *(undefined8 *)((long)puVar4 + -0x1b0) = uVar10;
              *(undefined8 *)((long)puVar4 + -0x1a8) = uVar21;
              *(undefined8 *)((long)puVar4 + -0x1a0) = uVar11;
              *(undefined8 *)((long)puVar4 + -0x198) = uVar20;
              *(long *)((long)puVar4 + -400) = lVar24;
              *(undefined8 *)((long)puVar4 + -0x180) = *(undefined8 *)((long)puVar4 + -0x98);
              *(undefined8 *)((long)puVar4 + -0x188) = *(undefined8 *)((long)puVar4 + -0xa0);
              Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                        (lVar9,0,(undefined1 *)((long)puVar4 + -0x1b8),0);
              if ((*(long *)(param_5 + 0xd0) == 0) ||
                 (lVar9 = Atlas_FrontEnd_FrontEndScene__GetKartTransform
                                    (*(long *)(param_5 + 0xd0),0,0), lVar22 == 0))
              goto code_r0x014e33ac;
              uVar29 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar22,0);
              uVar7 = param_3;
              uVar31 = param_2;
              uVar30 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar22,0);
              if (lVar9 == 0) goto code_r0x014e33ac;
              /*UnityEngine.Transform$$SetPositionAndRotation*/ func_0x032760c8(uVar29,param_2,param_3,uVar30,uVar31,uVar7,param_4,lVar9,0);
              if (((*(long *)(param_5 + 0xd0) == 0) ||
                  (lVar9 = Atlas_FrontEnd_FrontEndScene__GetKart(*(long *)(param_5 + 0xd0),0,0),
                  lVar9 == 0)) || (*(long *)(lVar9 + 0x30) == 0)) goto code_r0x014e33ac;
              *(undefined1 *)(*(long *)(lVar9 + 0x30) + 0x5c) = 1;
              goto code_r0x014e3210;
            }
            if (lVar24 == 0) goto code_r0x014e33ac;
            uVar17 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar24,/*STR('REWARD_SCREEN_NEW_GLIDER')*/ uRam0000000003d71870,0);
            if (*(long *)(param_5 + 0xd8) == 0) goto code_r0x014e33ac;
            *(undefined8 *)(param_5 + 0xa8) = *(undefined8 *)(*(long *)(param_5 + 0xd8) + 0xa0);
            puVar19 = (undefined8 *)0x3d79028;
          }
          else {
            if (lVar24 == 0) goto code_r0x014e33ac;
            uVar17 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar24,/*STR('REWARD_SCREEN_NEW_ANTENNA')*/ uRam0000000003d71858,0);
            if (*(long *)(param_5 + 0xd8) == 0) goto code_r0x014e33ac;
            *(undefined8 *)(param_5 + 0xa8) = *(undefined8 *)(*(long *)(param_5 + 0xd8) + 0x98);
            puVar19 = (undefined8 *)0x3d790c8;
          }
        }
        else {
          if (lVar24 == 0) goto code_r0x014e33ac;
          uVar17 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar24,/*STR('REWARD_SCREEN_NEW_WHEELS')*/ uRam0000000003d71888,0);
          if (*(long *)(param_5 + 0xd8) == 0) goto code_r0x014e33ac;
          *(undefined8 *)(param_5 + 0xa8) = *(undefined8 *)(*(long *)(param_5 + 0xd8) + 0xa8);
          puVar19 = (undefined8 *)0x3d790d8;
        }
        /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(*puVar19,0);
        goto code_r0x014e3218;
      }
      iVar6 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(plVar16,0);
      if (lVar24 == 0) goto code_r0x014e33ac;
      puVar19 = (undefined8 *)0x3d71880;
      if (iVar6 == 0) {
        puVar19 = (undefined8 *)0x3d71868;
      }
      uVar17 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar24,*puVar19,0);
      if ((*(long *)(param_5 + 0xd8) == 0) || (lVar9 = *(long *)(param_5 + 0xd0), lVar9 == 0))
      goto code_r0x014e33ac;
      lVar24 = *(long *)(*(long *)(param_5 + 0xd8) + 0x90);
      *(long *)((long)puVar4 + -0x178) = plVar16[3];
      *(undefined8 *)((long)puVar4 + -0x170) = uVar10;
      *(undefined8 *)((long)puVar4 + -0x168) = uVar21;
      *(undefined8 *)((long)puVar4 + -0x160) = uVar11;
      *(undefined8 *)((long)puVar4 + -0x158) = uVar20;
      *(undefined8 *)((long)puVar4 + -0x150) = uVar1;
      *(undefined8 *)((long)puVar4 + -0x140) = *(undefined8 *)((long)puVar4 + -0x98);
      *(undefined8 *)((long)puVar4 + -0x148) = *(undefined8 *)((long)puVar4 + -0xa0);
      Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                (lVar9,0,(undefined1 *)((long)puVar4 + -0x178),0);
      if ((*(long *)(param_5 + 0xd0) == 0) ||
         (lVar9 = Atlas_FrontEnd_FrontEndScene__GetKartTransform(*(long *)(param_5 + 0xd0),0,0),
         lVar24 == 0)) goto code_r0x014e33ac;
      uVar29 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar24,0);
      uVar7 = param_3;
      uVar31 = param_2;
      uVar30 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar24,0);
      if (lVar9 == 0) goto code_r0x014e33ac;
      /*UnityEngine.Transform$$SetPositionAndRotation*/ func_0x032760c8(uVar29,param_2,param_3,uVar30,uVar31,uVar7,param_4,lVar9,0);
      iVar6 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(plVar16,0);
      if (iVar6 == 0) {
        /*Atlas.Audio.UIAudio$$PlayCharacterUnlocked*/ func_0x01516de8((int)plVar16[0x15],0);
      }
      else {
        /*Atlas.Audio.UIAudio$$PlaySkinUnlocked*/ func_0x01516ee4();
      }
    }
    else {
      if (lVar24 == 0) goto code_r0x014e33ac;
      uVar17 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar24,/*STR('REWARD_SCREEN_NEW_KART')*/ uRam0000000003d71878,0);
      lVar9 = plVar16[3];
      puVar19 = (undefined8 *)/*Atlas.Definitions.KartDefinition$$get_StockWheelDef*/ func_0x015c9a3c(plVar16,0);
      uVar23 = *puVar19;
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((*(long *)(param_5 + 0xd8) == 0) || (lVar24 = *(long *)(param_5 + 0xd0), lVar24 == 0))
      goto code_r0x014e33ac;
      uVar21 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
      lVar22 = *(long *)(*(long *)(param_5 + 0xd8) + 0x88);
      *(undefined8 *)((long)puVar4 + -0x138) = uVar21;
      *(long *)((long)puVar4 + -0x130) = lVar9;
      *(undefined8 *)((long)puVar4 + -0x128) = uVar21;
      *(undefined8 *)((long)puVar4 + -0x120) = uVar21;
      *(undefined8 *)((long)puVar4 + -0x118) = uVar23;
      *(undefined8 *)((long)puVar4 + -0x110) = uVar1;
      *(undefined8 *)((long)puVar4 + -0x100) = *(undefined8 *)((long)puVar4 + -0x98);
      *(undefined8 *)((long)puVar4 + -0x108) = *(undefined8 *)((long)puVar4 + -0xa0);
      Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                (lVar24,0,(undefined1 *)((long)puVar4 + -0x138),0);
      if ((*(long *)(param_5 + 0xd0) == 0) ||
         (lVar9 = Atlas_FrontEnd_FrontEndScene__GetKartTransform(*(long *)(param_5 + 0xd0),0,0),
         lVar22 == 0)) goto code_r0x014e33ac;
      uVar29 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar22,0);
      uVar7 = param_3;
      uVar31 = param_2;
      uVar30 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar22,0);
      if (lVar9 == 0) goto code_r0x014e33ac;
      /*UnityEngine.Transform$$SetPositionAndRotation*/ func_0x032760c8(uVar29,param_2,param_3,uVar30,uVar31,uVar7,param_4,lVar9,0);
      /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/Unlock_Kart')*/ uRam0000000003d790d0,0);
    }
code_r0x014e3210:
    /*Atlas.UI.Screens.RewardScreen$$AnimateReward*/ func_0x014e3860(param_5);
  }
code_r0x014e3218:
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41280);
  if ((lVar9 != 0) && (plVar16 = *(long **)(lVar9 + 0x70), plVar16 != (long *)0x0)) {
    (**(code **)(*plVar16 + 0x558))(plVar16,uVar17,*(undefined8 *)(*plVar16 + 0x560));
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41280);
    if ((lVar9 != 0) && (plVar16 = *(long **)(lVar9 + 0x78), plVar16 != (long *)0x0)) {
      (**(code **)(*plVar16 + 0x558))(plVar16,uVar17,*(undefined8 *)(*plVar16 + 0x560));
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41290);
      if ((lVar9 != 0) && (*(long *)(lVar9 + 0x20) != 0)) {
        lVar9 = *(long *)(*(long *)(lVar9 + 0x20) + 0x10);
        if (((*(ushort *)(/*Atlas.UI.Screens.RewardScreen_TypeInfo*/ lRam0000000003d244b0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.RewardScreen_TypeInfo*/ lRam0000000003d244b0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar9 != 0) {
          lVar9 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar9,*(undefined8 *)
                                         (*(long *)(/*Atlas.UI.Screens.RewardScreen_TypeInfo*/ lRam0000000003d244b0 + 0xb8) + 0x10),
                                  uRam0000000003d57280);
          lVar24 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41290);
          if ((lVar24 != 0) && (*(long *)(lVar24 + 0xb0) != 0)) {
            iVar6 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                              (*(long *)(lVar24 + 0xb0),lVar9,0);
            if (iVar6 != 0) {
              if ((lVar9 == 0) || (*(long *)(lVar9 + 0x58) == 0)) goto code_r0x014e33ac;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)puVar4 + -0xb8),*(long *)(lVar9 + 0x58),
                              uRam0000000003d3dc70);
              while (uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)puVar4 + -0xb8),
                                             uRam0000000003d337d0), (uVar8 & 1) != 0) {
                uVar23 = *(undefined8 *)((long)puVar4 + -0xa8);
                lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41290);
                if (lVar9 == 0) goto code_r0x014e33b0;
                if (*(long *)(lVar9 + 0x98) == 0) {
                  func_0x00f78af4();
                  goto code_r0x014e33bc;
                }
                /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar9 + 0x98),uVar23,uRam0000000003d3e188);
              }
              /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)puVar4 + -0xb8),uRam0000000003d337c8);
            }
            return;
          }
        }
      }
    }
  }
code_r0x014e33ac:
  func_0x00f78af4();
code_r0x014e33b0:
  func_0x00f78af4();
code_r0x014e33bc:
                    /* WARNING: Does not return */
  pcVar27 = (code *)SoftwareBreakpoint(1,0x14e33c0);
  (*pcVar27)();
}



// ============================================================
// RVA: 0x14e2538 | Atlas.UI.Screens.RewardScreen.RunBoxDrop
// ============================================================

void Atlas_UI_Screens_RewardScreen__RunBoxDrop
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  int extraout_w1;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar15;
  undefined8 unaff_x22;
  long lVar16;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auVar20 [12];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
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
  
  if ((bRam0000000003eb4be8 & 1) == 0) {
    func_0x00f78a20(0x3d1fc20);
    func_0x00f78a20(0x3d51bb8);
    func_0x00f78a20(0x3d20278);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d577c0);
    func_0x00f78a20(0x3d21ba8);
    func_0x00f78a20(0x3d22c80);
    func_0x00f78a20(0x3d5b0d0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25b48);
    bRam0000000003eb4be8 = 1;
  }
  if (*(long *)(param_5 + 0x80) != 0) {
    uVar6 = /*Core.Assets.AssetManager$$GetLoadedAsset<Sprite>*/ func_0x01818628(*(long *)(param_5 + 0x80),*(undefined4 *)(param_5 + 0xb4),
                            uRam0000000003d51bb8);
    if (*(long *)(param_5 + 0xd8) != 0) {
      uVar15 = *(undefined8 *)(*(long *)(param_5 + 0xd8) + 0x80);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(uVar6,uVar15,uRam0000000003d5b0d0);
      *(long *)(param_5 + 0xb8) = lVar7;
      if (lVar7 != 0) {
        uVar6 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar7,uRam0000000003d577c0);
        *(undefined8 *)(param_5 + 0xc0) = uVar6;
        *(undefined1 *)(param_5 + 200) = 1;
        plVar14 = *(long **)(param_5 + 0x70);
        if (plVar14 == (long *)0x0) {
          return;
        }
        lVar7 = *plVar14;
        bVar1 = *(byte *)(lVar7 + 300);
        if ((bVar1 < *(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300)) ||
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300) * 8 + -8
                     ) != /*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80)) {
          if ((bVar1 < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
             (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 +
                       -8) != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
            if ((bVar1 < *(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300)) ||
               (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8
                         + -8) != /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) {
              if ((bVar1 < *(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300)) ||
                 (*(long *)(*(long *)(lVar7 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20)) {
                if ((bVar1 < *(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300)) ||
                   (*(long *)(*(long *)(lVar7 + 200) +
                              (ulong)*(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300) * 8 + -8) !=
                    /*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8)) {
                  if (bVar1 < *(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300)) {
                    return;
                  }
                  if (*(long *)(*(long *)(lVar7 + 200) +
                                (ulong)*(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300) * 8 + -8) !=
                      /*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278) {
                    return;
                  }
                  if (*(undefined8 **)(param_5 + 0xd8) != (undefined8 *)0x0) {
                    uVar11 = 0x12;
                    puVar12 = *(undefined8 **)(param_5 + 0xd8);
                    goto Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition;
                  }
                }
                else if (*(undefined8 **)(param_5 + 0xd8) != (undefined8 *)0x0) {
                  uVar11 = 0xb;
                  puVar12 = *(undefined8 **)(param_5 + 0xd8);
                  goto Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition;
                }
              }
              else if (*(undefined8 **)(param_5 + 0xd8) != (undefined8 *)0x0) {
                uVar11 = 0xc;
                puVar12 = *(undefined8 **)(param_5 + 0xd8);
                goto Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition;
              }
            }
            else if (*(undefined8 **)(param_5 + 0xd8) != (undefined8 *)0x0) {
              uVar11 = 10;
              puVar12 = *(undefined8 **)(param_5 + 0xd8);
              goto Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition;
            }
          }
          else {
            puVar12 = *(undefined8 **)(param_5 + 0xd8);
            if ((char)plVar14[0x11] == '\0') {
              if (puVar12 != (undefined8 *)0x0) {
                uVar11 = 9;
                goto Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition;
              }
            }
            else if (puVar12 != (undefined8 *)0x0) {
              uVar11 = 0xf;
Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition:
              while( true ) {
                puVar8 = puVar12;
                *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
                *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
                *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
                *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
                *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                *(code **)((long)register0x00000008 + -8) = unaff_x30;
                unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
                unaff_x21 = 0x3eb5000;
                if ((bRam0000000003eb517c & 1) == 0) {
                  func_0x00f78a20(0x3d2e438);
                  func_0x00f78a20(0x3d33cb0);
                  func_0x00f78a20(0x3d33cb8);
                  func_0x00f78a20(0x3d33cc0);
                  func_0x00f78a20(0x3d39210);
                  func_0x00f78a20(0x3d39218);
                  bRam0000000003eb517c = 1;
                }
                *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
                if (puVar8[8] != 0) {
                  /*System.Collections.Generic.Dictionary<Int32Enum, object>$$GetEnumerator*/ func_0x01ea7788((undefined1 *)((long)register0x00000008 + -0x60),puVar8[8],
                                  uRam0000000003d2e438);
                  while( true ) {
                    uVar9 = /*System.Collections.Generic.Dictionary.Enumerator<Int32Enum, object>$$MoveNext*/ func_0x01fc986c((undefined1 *)((long)register0x00000008 + -0x60),
                                            uRam0000000003d33cb8);
                    if ((uVar9 & 1) == 0) {
                      /*System.Collections.Generic.Dictionary.Enumerator<Int32Enum, object>$$Dispose*/ func_0x01fc99e8((undefined1 *)((long)register0x00000008 + -0x60),
                                      uRam0000000003d33cb0);
                      return;
                    }
                    if (*(long *)((long)register0x00000008 + -0x48) == 0) break;
                    /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)((long)register0x00000008 + -0x48),
                                    *(int *)((long)register0x00000008 + -0x50) == (int)uVar11,0);
                  }
                  func_0x00f78af4();
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1595c60);
                  (*pcVar3)();
                }
                func_0x00f78af4();
                unaff_x19 = uVar11;
                if (extraout_w1 == 1) {
                  puVar10 = (ulong *)___cxa_begin_catch();
                  unaff_x19 = *puVar10;
                  ___cxa_end_catch();
                  /*System.Collections.Generic.Dictionary.Enumerator<Int32Enum, object>$$Dispose*/ func_0x01fc99e8((undefined1 *)((long)register0x00000008 + -0x60),*puVar8);
                  if (unaff_x19 == 0) {
                    return;
                  }
                  func_0x00f78ac0(unaff_x19,0);
                }
                unaff_x30 = 
                Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCustomisationCameraPosition;
                auVar20 = __Unwind_Resume();
                uVar2 = auVar20._8_4_ - 1;
                if ((7 < uVar2) || ((0xbfU >> (ulong)(uVar2 & 0x1f) & 1) == 0)) break;
                uVar11 = (ulong)*(uint *)(&UNK_033f8a14 + (long)(int)uVar2 * 4);
                register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
                puVar12 = auVar20._0_8_;
                unaff_x20 = puVar8;
              }
              return;
            }
          }
        }
        else if (*(undefined8 **)(param_5 + 0xd8) != (undefined8 *)0x0) {
          uVar11 = 8;
          puVar12 = *(undefined8 **)(param_5 + 0xd8);
          goto Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition;
        }
      }
    }
  }
  lVar7 = func_0x00f78af4();
  if ((bRam0000000003eb4be9 & 1) == 0) {
    func_0x00f78a20(0x3d1fc20);
    func_0x00f78a20(0x3d21ba8);
    func_0x00f78a20(0x3d25b48);
    func_0x00f78a20(0x3d6ba50);
    bRam0000000003eb4be9 = 1;
  }
  plVar14 = *(long **)(lVar7 + 0x70);
  if (plVar14 == (long *)0x0) {
    return;
  }
  lVar13 = *plVar14;
  bVar1 = *(byte *)(lVar13 + 300);
  if (((bVar1 < *(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300)) ||
      (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8 + -8) !=
       /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) &&
     ((bVar1 < *(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) ||
      (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) * 8 + -8) !=
       /*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20)))) {
    if (bVar1 < *(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300)) {
      return;
    }
    if (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300) * 8 + -8)
        != /*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8) {
      return;
    }
  }
  if (*(long *)(lVar7 + 0x80) != 0) {
    uVar4 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635f34(*(long *)(lVar7 + 0x80),plVar14[10],/*STR('Default')*/ uRam0000000003d6ba50,0,0,0);
    *(undefined4 *)(lVar7 + 0x90) = uVar4;
    return;
  }
  lVar7 = func_0x00f78af4();
  if ((bRam0000000003eb4beb & 1) == 0) {
    func_0x00f78a20(0x3d1fc20);
    func_0x00f78a20(0x3d20278);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2dcb8);
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d21ba8);
    func_0x00f78a20(0x3d22c80);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d5c788);
    func_0x00f78a20(0x3d244b0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d41280);
    func_0x00f78a20(0x3d41288);
    func_0x00f78a20(0x3d41290);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d25b48);
    func_0x00f78a20(0x3d71870);
    func_0x00f78a20(0x3d71858);
    func_0x00f78a20(0x3d71880);
    func_0x00f78a20(0x3d71878);
    func_0x00f78a20(0x3d78e90);
    func_0x00f78a20(0x3d78ff0);
    func_0x00f78a20(0x3d790d8);
    func_0x00f78a20(0x3d790d0);
    func_0x00f78a20(0x3d79028);
    func_0x00f78a20(0x3d790c8);
    func_0x00f78a20(0x3d71888);
    func_0x00f78a20(0x3d71868);
    func_0x00f78a20(0x3d71860);
    bRam0000000003eb4beb = 1;
  }
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  if (*(long *)(lVar7 + 0xd0) == 0) goto code_r0x014e33ac;
  Atlas_FrontEnd_FrontEndScene__ResetKart(*(long *)(lVar7 + 0xd0),0,0);
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar7,uRam0000000003d41288);
  if (lVar13 == 0) goto code_r0x014e33ac;
  if (*(char *)(lVar13 + 0x40) != '\0') {
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar7,uRam0000000003d41290);
    if ((lVar13 == 0) || (*(long *)(lVar13 + 0x78) == 0)) goto code_r0x014e33ac;
    /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar13 + 0x78),0,0,0,0);
  }
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d41280);
  if ((lVar13 == 0) || (*(long *)(lVar13 + 0x68) == 0)) goto code_r0x014e33ac;
  /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar13 + 0x68),1,0);
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d41280);
  if (lVar13 == 0) goto code_r0x014e33ac;
  uVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar13,0);
  uVar15 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
  /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar15,lVar7,uRam0000000003d5c788,0);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('enter')*/ uRam0000000003d78e90,uVar6,0,uVar15,0,0);
  /*Atlas.UI.Screens.RewardScreen$$ShowIPPlane*/ func_0x014e361c(lVar7);
  /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/Explosion')*/ uRam0000000003d78ff0,0);
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar7,uRam0000000003d41290);
  if (lVar13 == 0) goto code_r0x014e33ac;
  lVar16 = *(long *)(lVar13 + 0x88);
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar7,uRam0000000003d41290);
  if ((lVar13 == 0) || (*(long *)(lVar13 + 0x48) == 0)) goto code_r0x014e33ac;
  uVar6 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar13 + 0x48),0);
  Atlas_Gameplay_KartLoadout__FromSaveGame(&uStack_148,uVar6,0);
  uStack_e8 = uStack_110;
  uStack_f0 = uStack_118;
  uVar6 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  plVar14 = *(long **)(lVar7 + 0x70);
  if (plVar14 != (long *)0x0) {
    lVar13 = *plVar14;
    bVar1 = *(byte *)(lVar13 + 300);
    if ((bVar1 < *(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300)) ||
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300) * 8 + -8)
        != /*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80)) {
      if ((bVar1 < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8)
          != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
        if ((bVar1 < *(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300)) ||
           (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8 +
                     -8) != /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) {
          if ((bVar1 < *(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300)) ||
             (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) * 8 +
                       -8) != /*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20)) {
            if ((bVar1 < *(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300)) ||
               (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300) * 8
                         + -8) != /*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8)) {
              if ((bVar1 < *(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300)) ||
                 (*(long *)(*(long *)(lVar13 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278)) goto code_r0x014e3218;
              if (lVar16 == 0) goto code_r0x014e33ac;
              uVar6 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar16,/*STR('REWARD_SCREEN_NEW_BOOST')*/ uRam0000000003d71860,0);
              if ((*(long *)(lVar7 + 0xd8) == 0) || (*(long *)(lVar7 + 0xd0) == 0))
              goto code_r0x014e33ac;
              lStack_1e0 = plVar14[3];
              lVar13 = *(long *)(*(long *)(lVar7 + 0xd8) + 0xb0);
              uStack_208 = uStack_148;
              uStack_200 = uStack_140;
              uStack_1f8 = uStack_138;
              uStack_1f0 = uStack_130;
              uStack_1e8 = uStack_128;
              uStack_1d0 = uStack_e8;
              uStack_1d8 = uStack_f0;
              Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                        (*(long *)(lVar7 + 0xd0),0,&uStack_208,0);
              if ((*(long *)(lVar7 + 0xd0) == 0) ||
                 (lVar16 = Atlas_FrontEnd_FrontEndScene__GetKartTransform
                                     (*(long *)(lVar7 + 0xd0),0,0), lVar13 == 0))
              goto code_r0x014e33ac;
              uVar17 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar13,0);
              uVar4 = param_2;
              uVar19 = param_3;
              uVar18 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar13,0);
              if (lVar16 == 0) goto code_r0x014e33ac;
              /*UnityEngine.Transform$$SetPositionAndRotation*/ func_0x032760c8(uVar17,param_2,param_3,uVar18,uVar4,uVar19,param_4,lVar16,0);
              if (((*(long *)(lVar7 + 0xd0) == 0) ||
                  (lVar13 = Atlas_FrontEnd_FrontEndScene__GetKart(*(long *)(lVar7 + 0xd0),0,0),
                  lVar13 == 0)) || (*(long *)(lVar13 + 0x30) == 0)) goto code_r0x014e33ac;
              *(undefined1 *)(*(long *)(lVar13 + 0x30) + 0x5c) = 1;
              goto code_r0x014e3210;
            }
            if (lVar16 == 0) goto code_r0x014e33ac;
            uVar6 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar16,/*STR('REWARD_SCREEN_NEW_GLIDER')*/ uRam0000000003d71870,0);
            if (*(long *)(lVar7 + 0xd8) == 0) goto code_r0x014e33ac;
            *(undefined8 *)(lVar7 + 0xa8) = *(undefined8 *)(*(long *)(lVar7 + 0xd8) + 0xa0);
            puVar12 = (undefined8 *)0x3d79028;
          }
          else {
            if (lVar16 == 0) goto code_r0x014e33ac;
            uVar6 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar16,/*STR('REWARD_SCREEN_NEW_ANTENNA')*/ uRam0000000003d71858,0);
            if (*(long *)(lVar7 + 0xd8) == 0) goto code_r0x014e33ac;
            *(undefined8 *)(lVar7 + 0xa8) = *(undefined8 *)(*(long *)(lVar7 + 0xd8) + 0x98);
            puVar12 = (undefined8 *)0x3d790c8;
          }
        }
        else {
          if (lVar16 == 0) goto code_r0x014e33ac;
          uVar6 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar16,/*STR('REWARD_SCREEN_NEW_WHEELS')*/ uRam0000000003d71888,0);
          if (*(long *)(lVar7 + 0xd8) == 0) goto code_r0x014e33ac;
          *(undefined8 *)(lVar7 + 0xa8) = *(undefined8 *)(*(long *)(lVar7 + 0xd8) + 0xa8);
          puVar12 = (undefined8 *)0x3d790d8;
        }
        /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(*puVar12,0);
        goto code_r0x014e3218;
      }
      iVar5 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(plVar14,0);
      if (lVar16 == 0) goto code_r0x014e33ac;
      puVar12 = (undefined8 *)0x3d71880;
      if (iVar5 == 0) {
        puVar12 = (undefined8 *)0x3d71868;
      }
      uVar6 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar16,*puVar12,0);
      if ((*(long *)(lVar7 + 0xd8) == 0) || (*(long *)(lVar7 + 0xd0) == 0)) goto code_r0x014e33ac;
      lStack_1c8 = plVar14[3];
      lVar13 = *(long *)(*(long *)(lVar7 + 0xd8) + 0x90);
      uStack_1c0 = uStack_140;
      uStack_1b8 = uStack_138;
      uStack_1b0 = uStack_130;
      uStack_1a8 = uStack_128;
      uStack_1a0 = uStack_120;
      uStack_190 = uStack_e8;
      uStack_198 = uStack_f0;
      Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                (*(long *)(lVar7 + 0xd0),0,&lStack_1c8,0);
      if ((*(long *)(lVar7 + 0xd0) == 0) ||
         (lVar16 = Atlas_FrontEnd_FrontEndScene__GetKartTransform(*(long *)(lVar7 + 0xd0),0,0),
         lVar13 == 0)) goto code_r0x014e33ac;
      uVar17 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar13,0);
      uVar4 = param_2;
      uVar19 = param_3;
      uVar18 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar13,0);
      if (lVar16 == 0) goto code_r0x014e33ac;
      /*UnityEngine.Transform$$SetPositionAndRotation*/ func_0x032760c8(uVar17,param_2,param_3,uVar18,uVar4,uVar19,param_4,lVar16,0);
      iVar5 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(plVar14,0);
      if (iVar5 == 0) {
        /*Atlas.Audio.UIAudio$$PlayCharacterUnlocked*/ func_0x01516de8((int)plVar14[0x15],0);
      }
      else {
        /*Atlas.Audio.UIAudio$$PlaySkinUnlocked*/ func_0x01516ee4();
      }
    }
    else {
      if (lVar16 == 0) goto code_r0x014e33ac;
      uVar6 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar16,/*STR('REWARD_SCREEN_NEW_KART')*/ uRam0000000003d71878,0);
      lVar13 = plVar14[3];
      puVar12 = (undefined8 *)/*Atlas.Definitions.KartDefinition$$get_StockWheelDef*/ func_0x015c9a3c(plVar14,0);
      uVar15 = *puVar12;
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((*(long *)(lVar7 + 0xd8) == 0) || (*(long *)(lVar7 + 0xd0) == 0)) goto code_r0x014e33ac;
      uStack_188 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
      lVar16 = *(long *)(*(long *)(lVar7 + 0xd8) + 0x88);
      uStack_160 = uStack_120;
      uStack_150 = uStack_e8;
      uStack_158 = uStack_f0;
      lStack_180 = lVar13;
      uStack_178 = uStack_188;
      uStack_170 = uStack_188;
      uStack_168 = uVar15;
      Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                (*(long *)(lVar7 + 0xd0),0,&uStack_188,0);
      if ((*(long *)(lVar7 + 0xd0) == 0) ||
         (lVar13 = Atlas_FrontEnd_FrontEndScene__GetKartTransform(*(long *)(lVar7 + 0xd0),0,0),
         lVar16 == 0)) goto code_r0x014e33ac;
      uVar17 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar16,0);
      uVar4 = param_2;
      uVar19 = param_3;
      uVar18 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar16,0);
      if (lVar13 == 0) goto code_r0x014e33ac;
      /*UnityEngine.Transform$$SetPositionAndRotation*/ func_0x032760c8(uVar17,param_2,param_3,uVar18,uVar4,uVar19,param_4,lVar13,0);
      /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/Unlock_Kart')*/ uRam0000000003d790d0,0);
    }
code_r0x014e3210:
    /*Atlas.UI.Screens.RewardScreen$$AnimateReward*/ func_0x014e3860(lVar7);
  }
code_r0x014e3218:
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d41280);
  if ((lVar13 != 0) && (plVar14 = *(long **)(lVar13 + 0x70), plVar14 != (long *)0x0)) {
    (**(code **)(*plVar14 + 0x558))(plVar14,uVar6,*(undefined8 *)(*plVar14 + 0x560));
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d41280);
    if ((lVar13 != 0) && (plVar14 = *(long **)(lVar13 + 0x78), plVar14 != (long *)0x0)) {
      (**(code **)(*plVar14 + 0x558))(plVar14,uVar6,*(undefined8 *)(*plVar14 + 0x560));
      lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar7,uRam0000000003d41290);
      if ((lVar13 != 0) && (*(long *)(lVar13 + 0x20) != 0)) {
        lVar13 = *(long *)(*(long *)(lVar13 + 0x20) + 0x10);
        if (((*(ushort *)(/*Atlas.UI.Screens.RewardScreen_TypeInfo*/ lRam0000000003d244b0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.RewardScreen_TypeInfo*/ lRam0000000003d244b0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar13 != 0) {
          lVar13 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar13,*(undefined8 *)
                                           (*(long *)(/*Atlas.UI.Screens.RewardScreen_TypeInfo*/ lRam0000000003d244b0 + 0xb8) + 0x10),
                                   uRam0000000003d57280);
          lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar7,uRam0000000003d41290);
          if ((lVar16 != 0) && (*(long *)(lVar16 + 0xb0) != 0)) {
            iVar5 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                              (*(long *)(lVar16 + 0xb0),lVar13,0);
            if (iVar5 != 0) {
              if ((lVar13 == 0) || (*(long *)(lVar13 + 0x58) == 0)) goto code_r0x014e33ac;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_108,*(long *)(lVar13 + 0x58),uRam0000000003d3dc70);
              while (uVar11 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_108,uRam0000000003d337d0), uVar6 = uStack_f8,
                    (uVar11 & 1) != 0) {
                lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar7,uRam0000000003d41290);
                if (lVar13 == 0) goto code_r0x014e33b0;
                if (*(long *)(lVar13 + 0x98) == 0) {
                  func_0x00f78af4();
                  goto code_r0x014e33bc;
                }
                /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar13 + 0x98),uVar6,uRam0000000003d3e188);
              }
              /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_108,uRam0000000003d337c8);
            }
            return;
          }
        }
      }
    }
  }
code_r0x014e33ac:
  func_0x00f78af4();
code_r0x014e33b0:
  func_0x00f78af4();
code_r0x014e33bc:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x14e33c0);
  (*pcVar3)();
}



// ============================================================
// RVA: 0x14e2810 | Atlas.UI.Screens.RewardScreen.PreloadReward
// ============================================================

void Atlas_UI_Screens_RewardScreen__PreloadReward
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  byte bVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
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
  
  if ((bRam0000000003eb4be9 & 1) == 0) {
    func_0x00f78a20(0x3d1fc20);
    func_0x00f78a20(0x3d21ba8);
    func_0x00f78a20(0x3d25b48);
    func_0x00f78a20(0x3d6ba50);
    bRam0000000003eb4be9 = 1;
  }
  plVar9 = *(long **)(param_5 + 0x70);
  if (plVar9 == (long *)0x0) {
    return;
  }
  lVar11 = *plVar9;
  bVar1 = *(byte *)(lVar11 + 300);
  if (((bVar1 < *(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300)) ||
      (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8 + -8) !=
       /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) &&
     ((bVar1 < *(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) ||
      (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) * 8 + -8) !=
       /*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20)))) {
    if (bVar1 < *(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300)) {
      return;
    }
    if (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300) * 8 + -8)
        != /*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8) {
      return;
    }
  }
  if (*(long *)(param_5 + 0x80) != 0) {
    uVar3 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635f34(*(long *)(param_5 + 0x80),plVar9[10],/*STR('Default')*/ uRam0000000003d6ba50,0,0,0);
    *(undefined4 *)(param_5 + 0x90) = uVar3;
    return;
  }
  lVar11 = func_0x00f78af4();
  if ((bRam0000000003eb4beb & 1) == 0) {
    func_0x00f78a20(0x3d1fc20);
    func_0x00f78a20(0x3d20278);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2dcb8);
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d21ba8);
    func_0x00f78a20(0x3d22c80);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d5c788);
    func_0x00f78a20(0x3d244b0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d41280);
    func_0x00f78a20(0x3d41288);
    func_0x00f78a20(0x3d41290);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d25b48);
    func_0x00f78a20(0x3d71870);
    func_0x00f78a20(0x3d71858);
    func_0x00f78a20(0x3d71880);
    func_0x00f78a20(0x3d71878);
    func_0x00f78a20(0x3d78e90);
    func_0x00f78a20(0x3d78ff0);
    func_0x00f78a20(0x3d790d8);
    func_0x00f78a20(0x3d790d0);
    func_0x00f78a20(0x3d79028);
    func_0x00f78a20(0x3d790c8);
    func_0x00f78a20(0x3d71888);
    func_0x00f78a20(0x3d71868);
    func_0x00f78a20(0x3d71860);
    bRam0000000003eb4beb = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  if (*(long *)(lVar11 + 0xd0) == 0) goto code_r0x014e33ac;
  Atlas_FrontEnd_FrontEndScene__ResetKart(*(long *)(lVar11 + 0xd0),0,0);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar11,uRam0000000003d41288);
  if (lVar5 == 0) goto code_r0x014e33ac;
  if (*(char *)(lVar5 + 0x40) != '\0') {
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d41290);
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x78) == 0)) goto code_r0x014e33ac;
    /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar5 + 0x78),0,0,0,0);
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar11,uRam0000000003d41280);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x68) == 0)) goto code_r0x014e33ac;
  /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar5 + 0x68),1,0);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar11,uRam0000000003d41280);
  if (lVar5 == 0) goto code_r0x014e33ac;
  uVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
  uVar7 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
  /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar7,lVar11,uRam0000000003d5c788,0);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('enter')*/ uRam0000000003d78e90,uVar6,0,uVar7,0,0);
  /*Atlas.UI.Screens.RewardScreen$$ShowIPPlane*/ func_0x014e361c(lVar11);
  /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/Explosion')*/ uRam0000000003d78ff0,0);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d41290);
  if (lVar5 == 0) goto code_r0x014e33ac;
  lVar12 = *(long *)(lVar5 + 0x88);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d41290);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x48) == 0)) goto code_r0x014e33ac;
  uVar6 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar5 + 0x48),0);
  Atlas_Gameplay_KartLoadout__FromSaveGame(&uStack_118,uVar6,0);
  uStack_b8 = uStack_e0;
  uStack_c0 = uStack_e8;
  uVar6 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  plVar9 = *(long **)(lVar11 + 0x70);
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    bVar1 = *(byte *)(lVar5 + 300);
    if ((bVar1 < *(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300)) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300) * 8 + -8) !=
        /*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80)) {
      if ((bVar1 < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
         (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8)
          != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
        if ((bVar1 < *(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300)) ||
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8 + -8
                     ) != /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) {
          if ((bVar1 < *(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300)) ||
             (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) * 8 +
                       -8) != /*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20)) {
            if ((bVar1 < *(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300)) ||
               (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300) * 8
                         + -8) != /*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8)) {
              if ((bVar1 < *(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300)) ||
                 (*(long *)(*(long *)(lVar5 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278)) goto code_r0x014e3218;
              if (lVar12 == 0) goto code_r0x014e33ac;
              uVar6 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar12,/*STR('REWARD_SCREEN_NEW_BOOST')*/ uRam0000000003d71860,0);
              if ((*(long *)(lVar11 + 0xd8) == 0) || (*(long *)(lVar11 + 0xd0) == 0))
              goto code_r0x014e33ac;
              lStack_1b0 = plVar9[3];
              lVar5 = *(long *)(*(long *)(lVar11 + 0xd8) + 0xb0);
              uStack_1d8 = uStack_118;
              uStack_1d0 = uStack_110;
              uStack_1c8 = uStack_108;
              uStack_1c0 = uStack_100;
              uStack_1b8 = uStack_f8;
              uStack_1a0 = uStack_b8;
              uStack_1a8 = uStack_c0;
              Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                        (*(long *)(lVar11 + 0xd0),0,&uStack_1d8,0);
              if ((*(long *)(lVar11 + 0xd0) == 0) ||
                 (lVar12 = Atlas_FrontEnd_FrontEndScene__GetKartTransform
                                     (*(long *)(lVar11 + 0xd0),0,0), lVar5 == 0))
              goto code_r0x014e33ac;
              uVar13 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0);
              uVar3 = param_2;
              uVar15 = param_3;
              uVar14 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar5,0);
              if (lVar12 == 0) goto code_r0x014e33ac;
              /*UnityEngine.Transform$$SetPositionAndRotation*/ func_0x032760c8(uVar13,param_2,param_3,uVar14,uVar3,uVar15,param_4,lVar12,0);
              if (((*(long *)(lVar11 + 0xd0) == 0) ||
                  (lVar5 = Atlas_FrontEnd_FrontEndScene__GetKart(*(long *)(lVar11 + 0xd0),0,0),
                  lVar5 == 0)) || (*(long *)(lVar5 + 0x30) == 0)) goto code_r0x014e33ac;
              *(undefined1 *)(*(long *)(lVar5 + 0x30) + 0x5c) = 1;
              goto code_r0x014e3210;
            }
            if (lVar12 == 0) goto code_r0x014e33ac;
            uVar6 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar12,/*STR('REWARD_SCREEN_NEW_GLIDER')*/ uRam0000000003d71870,0);
            if (*(long *)(lVar11 + 0xd8) == 0) goto code_r0x014e33ac;
            *(undefined8 *)(lVar11 + 0xa8) = *(undefined8 *)(*(long *)(lVar11 + 0xd8) + 0xa0);
            puVar10 = (undefined8 *)0x3d79028;
          }
          else {
            if (lVar12 == 0) goto code_r0x014e33ac;
            uVar6 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar12,/*STR('REWARD_SCREEN_NEW_ANTENNA')*/ uRam0000000003d71858,0);
            if (*(long *)(lVar11 + 0xd8) == 0) goto code_r0x014e33ac;
            *(undefined8 *)(lVar11 + 0xa8) = *(undefined8 *)(*(long *)(lVar11 + 0xd8) + 0x98);
            puVar10 = (undefined8 *)0x3d790c8;
          }
        }
        else {
          if (lVar12 == 0) goto code_r0x014e33ac;
          uVar6 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar12,/*STR('REWARD_SCREEN_NEW_WHEELS')*/ uRam0000000003d71888,0);
          if (*(long *)(lVar11 + 0xd8) == 0) goto code_r0x014e33ac;
          *(undefined8 *)(lVar11 + 0xa8) = *(undefined8 *)(*(long *)(lVar11 + 0xd8) + 0xa8);
          puVar10 = (undefined8 *)0x3d790d8;
        }
        /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(*puVar10,0);
        goto code_r0x014e3218;
      }
      iVar4 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(plVar9,0);
      if (lVar12 == 0) goto code_r0x014e33ac;
      puVar10 = (undefined8 *)0x3d71880;
      if (iVar4 == 0) {
        puVar10 = (undefined8 *)0x3d71868;
      }
      uVar6 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar12,*puVar10,0);
      if ((*(long *)(lVar11 + 0xd8) == 0) || (*(long *)(lVar11 + 0xd0) == 0)) goto code_r0x014e33ac;
      lStack_198 = plVar9[3];
      lVar5 = *(long *)(*(long *)(lVar11 + 0xd8) + 0x90);
      uStack_190 = uStack_110;
      uStack_188 = uStack_108;
      uStack_180 = uStack_100;
      uStack_178 = uStack_f8;
      uStack_170 = uStack_f0;
      uStack_160 = uStack_b8;
      uStack_168 = uStack_c0;
      Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                (*(long *)(lVar11 + 0xd0),0,&lStack_198,0);
      if ((*(long *)(lVar11 + 0xd0) == 0) ||
         (lVar12 = Atlas_FrontEnd_FrontEndScene__GetKartTransform(*(long *)(lVar11 + 0xd0),0,0),
         lVar5 == 0)) goto code_r0x014e33ac;
      uVar13 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0);
      uVar3 = param_2;
      uVar15 = param_3;
      uVar14 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar5,0);
      if (lVar12 == 0) goto code_r0x014e33ac;
      /*UnityEngine.Transform$$SetPositionAndRotation*/ func_0x032760c8(uVar13,param_2,param_3,uVar14,uVar3,uVar15,param_4,lVar12,0);
      iVar4 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(plVar9,0);
      if (iVar4 == 0) {
        /*Atlas.Audio.UIAudio$$PlayCharacterUnlocked*/ func_0x01516de8((int)plVar9[0x15],0);
      }
      else {
        /*Atlas.Audio.UIAudio$$PlaySkinUnlocked*/ func_0x01516ee4();
      }
    }
    else {
      if (lVar12 == 0) goto code_r0x014e33ac;
      uVar6 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar12,/*STR('REWARD_SCREEN_NEW_KART')*/ uRam0000000003d71878,0);
      lVar5 = plVar9[3];
      puVar10 = (undefined8 *)/*Atlas.Definitions.KartDefinition$$get_StockWheelDef*/ func_0x015c9a3c(plVar9,0);
      uVar7 = *puVar10;
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((*(long *)(lVar11 + 0xd8) == 0) || (*(long *)(lVar11 + 0xd0) == 0)) goto code_r0x014e33ac;
      uStack_158 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
      lVar12 = *(long *)(*(long *)(lVar11 + 0xd8) + 0x88);
      uStack_130 = uStack_f0;
      uStack_120 = uStack_b8;
      uStack_128 = uStack_c0;
      lStack_150 = lVar5;
      uStack_148 = uStack_158;
      uStack_140 = uStack_158;
      uStack_138 = uVar7;
      Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                (*(long *)(lVar11 + 0xd0),0,&uStack_158,0);
      if ((*(long *)(lVar11 + 0xd0) == 0) ||
         (lVar5 = Atlas_FrontEnd_FrontEndScene__GetKartTransform(*(long *)(lVar11 + 0xd0),0,0),
         lVar12 == 0)) goto code_r0x014e33ac;
      uVar13 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar12,0);
      uVar3 = param_2;
      uVar15 = param_3;
      uVar14 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar12,0);
      if (lVar5 == 0) goto code_r0x014e33ac;
      /*UnityEngine.Transform$$SetPositionAndRotation*/ func_0x032760c8(uVar13,param_2,param_3,uVar14,uVar3,uVar15,param_4,lVar5,0);
      /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/Unlock_Kart')*/ uRam0000000003d790d0,0);
    }
code_r0x014e3210:
    /*Atlas.UI.Screens.RewardScreen$$AnimateReward*/ func_0x014e3860(lVar11);
  }
code_r0x014e3218:
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar11,uRam0000000003d41280);
  if ((lVar5 != 0) && (plVar9 = *(long **)(lVar5 + 0x70), plVar9 != (long *)0x0)) {
    (**(code **)(*plVar9 + 0x558))(plVar9,uVar6,*(undefined8 *)(*plVar9 + 0x560));
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar11,uRam0000000003d41280);
    if ((lVar5 != 0) && (plVar9 = *(long **)(lVar5 + 0x78), plVar9 != (long *)0x0)) {
      (**(code **)(*plVar9 + 0x558))(plVar9,uVar6,*(undefined8 *)(*plVar9 + 0x560));
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d41290);
      if ((lVar5 != 0) && (*(long *)(lVar5 + 0x20) != 0)) {
        lVar5 = *(long *)(*(long *)(lVar5 + 0x20) + 0x10);
        if (((*(ushort *)(/*Atlas.UI.Screens.RewardScreen_TypeInfo*/ lRam0000000003d244b0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.RewardScreen_TypeInfo*/ lRam0000000003d244b0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar5 != 0) {
          lVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,*(undefined8 *)
                                         (*(long *)(/*Atlas.UI.Screens.RewardScreen_TypeInfo*/ lRam0000000003d244b0 + 0xb8) + 0x10),
                                  uRam0000000003d57280);
          lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d41290);
          if ((lVar12 != 0) && (*(long *)(lVar12 + 0xb0) != 0)) {
            iVar4 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                              (*(long *)(lVar12 + 0xb0),lVar5,0);
            if (iVar4 != 0) {
              if ((lVar5 == 0) || (*(long *)(lVar5 + 0x58) == 0)) goto code_r0x014e33ac;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_d8,*(long *)(lVar5 + 0x58),uRam0000000003d3dc70);
              while (uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_d8,uRam0000000003d337d0), uVar6 = uStack_c8,
                    (uVar8 & 1) != 0) {
                lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d41290);
                if (lVar5 == 0) goto code_r0x014e33b0;
                if (*(long *)(lVar5 + 0x98) == 0) {
                  func_0x00f78af4();
                  goto code_r0x014e33bc;
                }
                /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar5 + 0x98),uVar6,uRam0000000003d3e188);
              }
              /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_d8,uRam0000000003d337c8);
            }
            return;
          }
        }
      }
    }
  }
code_r0x014e33ac:
  func_0x00f78af4();
code_r0x014e33b0:
  func_0x00f78af4();
code_r0x014e33bc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14e33c0);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x14e2934 | Atlas.UI.Screens.RewardScreen.ShowReward
// ============================================================

void Atlas_UI_Screens_RewardScreen__ShowReward
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
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
  
  if ((bRam0000000003eb4beb & 1) == 0) {
    func_0x00f78a20(0x3d1fc20);
    func_0x00f78a20(0x3d20278);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2dcb8);
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d21ba8);
    func_0x00f78a20(0x3d22c80);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d5c788);
    func_0x00f78a20(0x3d244b0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d41280);
    func_0x00f78a20(0x3d41288);
    func_0x00f78a20(0x3d41290);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d25b48);
    func_0x00f78a20(0x3d71870);
    func_0x00f78a20(0x3d71858);
    func_0x00f78a20(0x3d71880);
    func_0x00f78a20(0x3d71878);
    func_0x00f78a20(0x3d78e90);
    func_0x00f78a20(0x3d78ff0);
    func_0x00f78a20(0x3d790d8);
    func_0x00f78a20(0x3d790d0);
    func_0x00f78a20(0x3d79028);
    func_0x00f78a20(0x3d790c8);
    func_0x00f78a20(0x3d71888);
    func_0x00f78a20(0x3d71868);
    func_0x00f78a20(0x3d71860);
    bRam0000000003eb4beb = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  if (*(long *)(param_5 + 0xd0) == 0) goto LAB_014e33ac;
  Atlas_FrontEnd_FrontEndScene__ResetKart(*(long *)(param_5 + 0xd0),0,0);
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_5,uRam0000000003d41288);
  if (lVar4 == 0) goto LAB_014e33ac;
  if (*(char *)(lVar4 + 0x40) != '\0') {
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41290);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x78) == 0)) goto LAB_014e33ac;
    /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar4 + 0x78),0,0,0,0);
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41280);
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x68) == 0)) goto LAB_014e33ac;
  /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar4 + 0x68),1,0);
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41280);
  if (lVar4 == 0) goto LAB_014e33ac;
  uVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar4,0);
  uVar6 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
  /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar6,param_5,uRam0000000003d5c788,0);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('enter')*/ uRam0000000003d78e90,uVar5,0,uVar6,0,0);
  /*Atlas.UI.Screens.RewardScreen$$ShowIPPlane*/ func_0x014e361c(param_5);
  /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/Explosion')*/ uRam0000000003d78ff0,0);
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41290);
  if (lVar4 == 0) goto LAB_014e33ac;
  lVar10 = *(long *)(lVar4 + 0x88);
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41290);
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x48) == 0)) goto LAB_014e33ac;
  uVar5 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar4 + 0x48),0);
  Atlas_Gameplay_KartLoadout__FromSaveGame(&uStack_f8,uVar5,0);
  uStack_98 = uStack_c0;
  uStack_a0 = uStack_c8;
  uVar5 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  plVar9 = *(long **)(param_5 + 0x70);
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    bVar1 = *(byte *)(lVar4 + 300);
    if ((bVar1 < *(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300)) ||
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300) * 8 + -8) !=
        /*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80)) {
      if ((bVar1 < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
         (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8)
          != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
        if ((bVar1 < *(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300)) ||
           (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8 + -8
                     ) != /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) {
          if ((bVar1 < *(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300)) ||
             (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) * 8 +
                       -8) != /*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20)) {
            if ((bVar1 < *(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300)) ||
               (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300) * 8
                         + -8) != /*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8)) {
              if ((bVar1 < *(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300)) ||
                 (*(long *)(*(long *)(lVar4 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278)) goto LAB_014e3218;
              if (lVar10 == 0) goto LAB_014e33ac;
              uVar5 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar10,/*STR('REWARD_SCREEN_NEW_BOOST')*/ uRam0000000003d71860,0);
              if ((*(long *)(param_5 + 0xd8) == 0) || (*(long *)(param_5 + 0xd0) == 0))
              goto LAB_014e33ac;
              lStack_190 = plVar9[3];
              lVar4 = *(long *)(*(long *)(param_5 + 0xd8) + 0xb0);
              uStack_1b8 = uStack_f8;
              uStack_1b0 = uStack_f0;
              uStack_1a8 = uStack_e8;
              uStack_1a0 = uStack_e0;
              uStack_198 = uStack_d8;
              uStack_180 = uStack_98;
              uStack_188 = uStack_a0;
              Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                        (*(long *)(param_5 + 0xd0),0,&uStack_1b8,0);
              if ((*(long *)(param_5 + 0xd0) == 0) ||
                 (lVar10 = Atlas_FrontEnd_FrontEndScene__GetKartTransform
                                     (*(long *)(param_5 + 0xd0),0,0), lVar4 == 0))
              goto LAB_014e33ac;
              uVar11 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar4,0);
              uVar13 = param_2;
              uVar14 = param_3;
              uVar12 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar4,0);
              if (lVar10 == 0) goto LAB_014e33ac;
              /*UnityEngine.Transform$$SetPositionAndRotation*/ func_0x032760c8(uVar11,param_2,param_3,uVar12,uVar13,uVar14,param_4,lVar10,0);
              if (((*(long *)(param_5 + 0xd0) == 0) ||
                  (lVar4 = Atlas_FrontEnd_FrontEndScene__GetKart(*(long *)(param_5 + 0xd0),0,0),
                  lVar4 == 0)) || (*(long *)(lVar4 + 0x30) == 0)) goto LAB_014e33ac;
              *(undefined1 *)(*(long *)(lVar4 + 0x30) + 0x5c) = 1;
              goto code_r0x014e3210;
            }
            if (lVar10 == 0) goto LAB_014e33ac;
            uVar5 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar10,/*STR('REWARD_SCREEN_NEW_GLIDER')*/ uRam0000000003d71870,0);
            if (*(long *)(param_5 + 0xd8) == 0) goto LAB_014e33ac;
            *(undefined8 *)(param_5 + 0xa8) = *(undefined8 *)(*(long *)(param_5 + 0xd8) + 0xa0);
            puVar8 = (undefined8 *)0x3d79028;
          }
          else {
            if (lVar10 == 0) goto LAB_014e33ac;
            uVar5 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar10,/*STR('REWARD_SCREEN_NEW_ANTENNA')*/ uRam0000000003d71858,0);
            if (*(long *)(param_5 + 0xd8) == 0) goto LAB_014e33ac;
            *(undefined8 *)(param_5 + 0xa8) = *(undefined8 *)(*(long *)(param_5 + 0xd8) + 0x98);
            puVar8 = (undefined8 *)0x3d790c8;
          }
        }
        else {
          if (lVar10 == 0) goto LAB_014e33ac;
          uVar5 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar10,/*STR('REWARD_SCREEN_NEW_WHEELS')*/ uRam0000000003d71888,0);
          if (*(long *)(param_5 + 0xd8) == 0) goto LAB_014e33ac;
          *(undefined8 *)(param_5 + 0xa8) = *(undefined8 *)(*(long *)(param_5 + 0xd8) + 0xa8);
          puVar8 = (undefined8 *)0x3d790d8;
        }
        /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(*puVar8,0);
        goto LAB_014e3218;
      }
      iVar3 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(plVar9,0);
      if (lVar10 == 0) goto LAB_014e33ac;
      puVar8 = (undefined8 *)0x3d71880;
      if (iVar3 == 0) {
        puVar8 = (undefined8 *)0x3d71868;
      }
      uVar5 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar10,*puVar8,0);
      if ((*(long *)(param_5 + 0xd8) == 0) || (*(long *)(param_5 + 0xd0) == 0)) goto LAB_014e33ac;
      lStack_178 = plVar9[3];
      lVar4 = *(long *)(*(long *)(param_5 + 0xd8) + 0x90);
      uStack_170 = uStack_f0;
      uStack_168 = uStack_e8;
      uStack_160 = uStack_e0;
      uStack_158 = uStack_d8;
      uStack_150 = uStack_d0;
      uStack_140 = uStack_98;
      uStack_148 = uStack_a0;
      Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                (*(long *)(param_5 + 0xd0),0,&lStack_178,0);
      if ((*(long *)(param_5 + 0xd0) == 0) ||
         (lVar10 = Atlas_FrontEnd_FrontEndScene__GetKartTransform(*(long *)(param_5 + 0xd0),0,0),
         lVar4 == 0)) goto LAB_014e33ac;
      uVar11 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar4,0);
      uVar13 = param_2;
      uVar14 = param_3;
      uVar12 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar4,0);
      if (lVar10 == 0) goto LAB_014e33ac;
      /*UnityEngine.Transform$$SetPositionAndRotation*/ func_0x032760c8(uVar11,param_2,param_3,uVar12,uVar13,uVar14,param_4,lVar10,0);
      iVar3 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(plVar9,0);
      if (iVar3 == 0) {
        /*Atlas.Audio.UIAudio$$PlayCharacterUnlocked*/ func_0x01516de8((int)plVar9[0x15],0);
      }
      else {
        /*Atlas.Audio.UIAudio$$PlaySkinUnlocked*/ func_0x01516ee4();
      }
    }
    else {
      if (lVar10 == 0) goto LAB_014e33ac;
      uVar5 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar10,/*STR('REWARD_SCREEN_NEW_KART')*/ uRam0000000003d71878,0);
      lVar4 = plVar9[3];
      puVar8 = (undefined8 *)/*Atlas.Definitions.KartDefinition$$get_StockWheelDef*/ func_0x015c9a3c(plVar9,0);
      uVar6 = *puVar8;
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((*(long *)(param_5 + 0xd8) == 0) || (*(long *)(param_5 + 0xd0) == 0)) goto LAB_014e33ac;
      uStack_138 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
      lVar10 = *(long *)(*(long *)(param_5 + 0xd8) + 0x88);
      uStack_110 = uStack_d0;
      uStack_100 = uStack_98;
      uStack_108 = uStack_a0;
      lStack_130 = lVar4;
      uStack_128 = uStack_138;
      uStack_120 = uStack_138;
      uStack_118 = uVar6;
      Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                (*(long *)(param_5 + 0xd0),0,&uStack_138,0);
      if ((*(long *)(param_5 + 0xd0) == 0) ||
         (lVar4 = Atlas_FrontEnd_FrontEndScene__GetKartTransform(*(long *)(param_5 + 0xd0),0,0),
         lVar10 == 0)) goto LAB_014e33ac;
      uVar11 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar10,0);
      uVar13 = param_2;
      uVar14 = param_3;
      uVar12 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar10,0);
      if (lVar4 == 0) goto LAB_014e33ac;
      /*UnityEngine.Transform$$SetPositionAndRotation*/ func_0x032760c8(uVar11,param_2,param_3,uVar12,uVar13,uVar14,param_4,lVar4,0);
      /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/Unlock_Kart')*/ uRam0000000003d790d0,0);
    }
code_r0x014e3210:
    /*Atlas.UI.Screens.RewardScreen$$AnimateReward*/ func_0x014e3860(param_5);
  }
LAB_014e3218:
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41280);
  if ((lVar4 != 0) && (plVar9 = *(long **)(lVar4 + 0x70), plVar9 != (long *)0x0)) {
    (**(code **)(*plVar9 + 0x558))(plVar9,uVar5,*(undefined8 *)(*plVar9 + 0x560));
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41280);
    if ((lVar4 != 0) && (plVar9 = *(long **)(lVar4 + 0x78), plVar9 != (long *)0x0)) {
      (**(code **)(*plVar9 + 0x558))(plVar9,uVar5,*(undefined8 *)(*plVar9 + 0x560));
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41290);
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0x20) != 0)) {
        lVar4 = *(long *)(*(long *)(lVar4 + 0x20) + 0x10);
        if (((*(ushort *)(/*Atlas.UI.Screens.RewardScreen_TypeInfo*/ lRam0000000003d244b0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.RewardScreen_TypeInfo*/ lRam0000000003d244b0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar4 != 0) {
          lVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar4,*(undefined8 *)
                                         (*(long *)(/*Atlas.UI.Screens.RewardScreen_TypeInfo*/ lRam0000000003d244b0 + 0xb8) + 0x10),
                                  uRam0000000003d57280);
          lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41290);
          if ((lVar10 != 0) && (*(long *)(lVar10 + 0xb0) != 0)) {
            iVar3 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                              (*(long *)(lVar10 + 0xb0),lVar4,0);
            if (iVar3 != 0) {
              if ((lVar4 == 0) || (*(long *)(lVar4 + 0x58) == 0)) goto LAB_014e33ac;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_b8,*(long *)(lVar4 + 0x58),uRam0000000003d3dc70);
              while (uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_b8,uRam0000000003d337d0), uVar5 = uStack_a8,
                    (uVar7 & 1) != 0) {
                lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41290);
                if (lVar4 == 0) goto code_r0x014e33b0;
                if (*(long *)(lVar4 + 0x98) == 0) {
                  func_0x00f78af4();
                  goto code_r0x014e33bc;
                }
                /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar4 + 0x98),uVar5,uRam0000000003d3e188);
              }
              /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_b8,uRam0000000003d337c8);
            }
            return;
          }
        }
      }
    }
  }
LAB_014e33ac:
  func_0x00f78af4();
code_r0x014e33b0:
  func_0x00f78af4();
code_r0x014e33bc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14e33c0);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x14e340c | Atlas.UI.Screens.RewardScreen.InstantiateAndAnimateReward
// ============================================================

/* WARNING: Possible PIC construction at 0x014e3d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e3b48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b38d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b3980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015b39c4) */
/* WARNING: Removing unreachable block (ram,0x015b39cc) */
/* WARNING: Removing unreachable block (ram,0x015b39d8) */
/* WARNING: Removing unreachable block (ram,0x015b39a4) */
/* WARNING: Removing unreachable block (ram,0x015b39ac) */
/* WARNING: Removing unreachable block (ram,0x015b39b8) */
/* WARNING: Removing unreachable block (ram,0x015b3984) */
/* WARNING: Removing unreachable block (ram,0x015b398c) */
/* WARNING: Removing unreachable block (ram,0x015b3998) */
/* WARNING: Removing unreachable block (ram,0x015b38dc) */
/* WARNING: Removing unreachable block (ram,0x015b3900) */
/* WARNING: Removing unreachable block (ram,0x015b3908) */
/* WARNING: Removing unreachable block (ram,0x015b3910) */
/* WARNING: Removing unreachable block (ram,0x015b3914) */
/* WARNING: Removing unreachable block (ram,0x015b3918) */
/* WARNING: Removing unreachable block (ram,0x03237f38) */
/* WARNING: Removing unreachable block (ram,0x0323946c) */
/* WARNING: Removing unreachable block (ram,0x0323949c) */
/* WARNING: Removing unreachable block (ram,0x032394b0) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */
/* WARNING: Removing unreachable block (ram,0x01470820) */
/* WARNING: Removing unreachable block (ram,0x01470828) */
/* WARNING: Removing unreachable block (ram,0x01470848) */
/* WARNING: Removing unreachable block (ram,0x01470850) */
/* WARNING: Removing unreachable block (ram,0x01470858) */
/* WARNING: Removing unreachable block (ram,0x01470874) */
/* WARNING: Removing unreachable block (ram,0x01470884) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x014e3b4c) */
/* WARNING: Removing unreachable block (ram,0x0151398c) */
/* WARNING: Removing unreachable block (ram,0x015139b4) */
/* WARNING: Removing unreachable block (ram,0x015139e0) */
/* WARNING: Removing unreachable block (ram,0x015139f0) */
/* WARNING: Removing unreachable block (ram,0x015139f8) */
/* WARNING: Removing unreachable block (ram,0x01513a54) */
/* WARNING: Removing unreachable block (ram,0x01513a10) */
/* WARNING: Removing unreachable block (ram,0x01513a20) */
/* WARNING: Removing unreachable block (ram,0x01513a28) */
/* WARNING: Removing unreachable block (ram,0x01513a64) */
/* WARNING: Removing unreachable block (ram,0x01513a8c) */
/* WARNING: Removing unreachable block (ram,0x01513ab8) */
/* WARNING: Removing unreachable block (ram,0x01513acc) */
/* WARNING: Removing unreachable block (ram,0x01513bdc) */
/* WARNING: Removing unreachable block (ram,0x03247e70) */
/* WARNING: Removing unreachable block (ram,0x03247ef0) */
/* WARNING: Removing unreachable block (ram,0x03247e84) */
/* WARNING: Removing unreachable block (ram,0x03247e98) */
/* WARNING: Removing unreachable block (ram,0x03247eac) */
/* WARNING: Removing unreachable block (ram,0x03247f24) */
/* WARNING: Removing unreachable block (ram,0x03247f54) */
/* WARNING: Removing unreachable block (ram,0x03247f90) */
/* WARNING: Removing unreachable block (ram,0x03247fa4) */
/* WARNING: Removing unreachable block (ram,0x03247eb8) */
/* WARNING: Removing unreachable block (ram,0x03247ec4) */
/* WARNING: Removing unreachable block (ram,0x03247ed8) */
/* WARNING: Removing unreachable block (ram,0x01513ae4) */
/* WARNING: Removing unreachable block (ram,0x01513a40) */
/* WARNING: Removing unreachable block (ram,0x01638af0) */
/* WARNING: Removing unreachable block (ram,0x014e3d38) */
/* WARNING: Removing unreachable block (ram,0x018ef000) */
/* WARNING: Removing unreachable block (ram,0x018ef024) */
/* WARNING: Removing unreachable block (ram,0x018ef044) */
/* WARNING: Removing unreachable block (ram,0x018ef048) */
/* WARNING: Removing unreachable block (ram,0x018ef050) */
/* WARNING: Removing unreachable block (ram,0x018ef064) */
/* WARNING: Removing unreachable block (ram,0x018ef06c) */
/* WARNING: Removing unreachable block (ram,0x018ef074) */
/* WARNING: Removing unreachable block (ram,0x018ef090) */
/* WARNING: Removing unreachable block (ram,0x018ef098) */
/* WARNING: Removing unreachable block (ram,0x018ef09c) */
/* WARNING: Removing unreachable block (ram,0x018ef0b0) */
/* WARNING: Removing unreachable block (ram,0x015b39e4) */
/* WARNING: Removing unreachable block (ram,0x015b39ec) */
/* WARNING: Removing unreachable block (ram,0x015b39f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_UI_Screens_RewardScreen__InstantiateAndAnimateReward(dword *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  bool bVar14;
  int iVar15;
  undefined8 uVar17;
  long lVar18;
  dword *pdVar19;
  long *plVar20;
  dword *pdVar21;
  dword *pdVar22;
  int iVar16;
  undefined8 *puVar23;
  ulong uVar24;
  long *extraout_x1;
  dword *pdVar25;
  dword *pdVar26;
  long lVar27;
  long lVar28;
  int *piVar29;
  uint uVar30;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar31;
  long *plVar32;
  long unaff_x21;
  long lVar33;
  dword *pdVar34;
  undefined8 unaff_x22;
  undefined8 uVar35;
  dword *pdVar36;
  code *pcVar37;
  undefined8 unaff_x23;
  undefined8 uVar38;
  undefined8 unaff_x24;
  undefined1 *puVar39;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar40;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
  puVar11 = &stack0xffffffffffffffc0;
  puVar39 = &stack0xfffffffffffffff0;
  uVar31 = 0x3eb4000;
  if ((bRam0000000003eb4bef & 1) == 0) {
    func_0x00f78a20(0x3d51bb8);
    func_0x00f78a20(0x3d22f88);
    func_0x00f78a20(0x3d5b0d0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4bef = 1;
  }
  lVar33 = unaff_x21;
  uVar17 = unaff_x22;
  uVar38 = unaff_x23;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar38 = 0x3d23000;
    uVar35 = 0x3d5b0d0;
    uVar31 = /*Core.Assets.AssetManager$$GetLoadedAsset<Sprite>*/ func_0x01818628(*(long *)(param_1 + 0x20),param_1[0x24],uRam0000000003d51bb8);
    lVar33 = *(long *)(param_1 + 0x2a);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar17 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(uVar31,lVar33,uRam0000000003d5b0d0);
    *(undefined8 *)(param_1 + 0x28) = uVar17;
    uVar17 = 0x3d5b0d0;
    if (*(long *)(param_1 + 0x22) != 0) {
      /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(*(long *)(param_1 + 0x22),0);
      if ((*(long *)(param_1 + 0x1e) != 0) && (uVar17 = uVar35, *(long *)(param_1 + 0x22) != 0)) {
        /*Atlas.Rendering.MaterialDuplicator$$DuplicateRendererMaterial*/ func_0x01491dd0(*(long *)(param_1 + 0x22),*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(*(long *)(param_1 + 0x1e) + 0x30),0,0,0);
        if (*(long *)(param_1 + 0x26) != 0) {
          if ((*(long *)(param_1 + 0x34) == 0) ||
             (lVar18 = *(long *)(*(long *)(param_1 + 0x34) + 0x80), lVar18 == 0)) goto LAB_014e35a4;
          /*Atlas.Lighting.LightWorld$$UnRegisterMember*/ func_0x014866f8(lVar18,*(long *)(param_1 + 0x26),0);
        }
        if (*(long *)(param_1 + 0x28) != 0) {
          lVar33 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(param_1 + 0x28),0);
          uVar31 = func_0x00f78aec(/*Atlas.Lighting.LightWorldTransformSample_TypeInfo*/ uRam0000000003d22f88);
          /*Atlas.Lighting.LightWorldTransformSample$$.ctor*/ func_0x01486a40(uVar31,lVar33,0);
          *(undefined8 *)(param_1 + 0x26) = uVar31;
          if (((*(long *)(param_1 + 0x34) != 0) && (*(long *)(param_1 + 0x22) != 0)) &&
             (lVar18 = *(long *)(*(long *)(param_1 + 0x34) + 0x80), lVar18 != 0)) {
            /*Atlas.Lighting.LightWorld$$RegisterMember*/ func_0x014864a4(lVar18,uVar31,*(undefined8 *)(*(long *)(param_1 + 0x22) + 0x18),0,0,1,0)
            ;
            goto code_r0x014e3860;
          }
        }
      }
    }
  }
LAB_014e35a4:
  unaff_x23 = uVar38;
  unaff_x22 = uVar17;
  puVar40 = &Atlas_UI_Screens_RewardScreen__EndOfNewItem;
  pdVar19 = (dword *)func_0x00f78af4();
  while( true ) {
    *(undefined8 *)(puVar11 + -0x30) = unaff_x22;
    *(long *)(puVar11 + -0x28) = lVar33;
    *(undefined8 *)(puVar11 + -0x20) = uVar31;
    *(dword **)(puVar11 + -0x18) = param_1;
    *(undefined1 **)(puVar11 + -0x10) = puVar39;
    *(undefined **)(puVar11 + -8) = puVar40;
    if ((bRam0000000003eb4bed & 1) == 0) {
      func_0x00f78a20(0x3d41290);
      bRam0000000003eb4bed = 1;
    }
    lVar33 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(pdVar19,uRam0000000003d41290);
    if ((lVar33 != 0) && (*(long *)(lVar33 + 0x48) != 0)) break;
    unaff_x19 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)(puVar11 + -0x60);
    *(undefined8 *)(puVar11 + -0x60) = unaff_x22;
    *(undefined8 *)(puVar11 + -0x58) = 0x3d41290;
    *(undefined8 *)(puVar11 + -0x50) = 0x3eb4000;
    *(dword **)(puVar11 + -0x48) = pdVar19;
    *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
    *(undefined **)(puVar11 + -0x38) = &Atlas_UI_Screens_RewardScreen__ShowIPPlane;
    unaff_x29 = puVar11 + -0x40;
    unaff_x21 = 0x3d23990;
    if ((bRam0000000003eb4bea & 1) == 0) {
      func_0x00f78a20(0x3d1fc20);
      func_0x00f78a20(0x3d20278);
      func_0x00f78a20(0x3d20650);
      func_0x00f78a20(0x3d2dc40);
      func_0x00f78a20(0x3d21ba8);
      func_0x00f78a20(0x3d22c80);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d25b48);
      bRam0000000003eb4bea = 1;
    }
    unaff_x20 = *(ulong *)(unaff_x19 + 0xd8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    pdVar19 = (dword *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(unaff_x20,0);
    if ((int)pdVar19 == 0) {
      return pdVar19;
    }
    plVar32 = *(long **)(unaff_x19 + 0x70);
    if (plVar32 != (long *)0x0) {
      lVar33 = *plVar32;
      bVar2 = *(byte *)(lVar33 + 300);
      if ((bVar2 < *(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300)) ||
         (*(long *)(*(long *)(lVar33 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300) * 8 + -8)
          != /*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80)) {
        if ((bVar2 < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
           (*(long *)(*(long *)(lVar33 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 +
                     -8) != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
          if ((bVar2 < *(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300)) ||
             (*(long *)(*(long *)(lVar33 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8 +
                       -8) != /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) {
            if ((bVar2 < *(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300)) ||
               (*(long *)(*(long *)(lVar33 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) * 8
                         + -8) != /*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20)) {
              if ((bVar2 < *(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300)) ||
                 (*(long *)(*(long *)(lVar33 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8)) {
                unaff_x20 = 5;
                if (*(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300) <= bVar2) {
                  uVar30 = 5;
                  if (*(long *)(*(long *)(lVar33 + 200) +
                                (ulong)*(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300) * 8 + -8) ==
                      /*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278) {
                    uVar30 = 6;
                  }
                  unaff_x20 = (ulong)uVar30;
                }
              }
              else {
                unaff_x20 = 2;
              }
            }
            else {
              unaff_x20 = 5;
            }
          }
          else {
            unaff_x20 = 3;
          }
        }
        else {
          unaff_x20 = 1;
        }
      }
      else {
        unaff_x20 = 0;
      }
      lVar18 = *(long *)(unaff_x19 + 0xd8);
      lVar33 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(plVar32,0);
      unaff_x19 = 0;
      if (lVar18 != 0) {
        lVar33 = *(long *)(lVar33 + 8);
        puVar13 = puVar11 + -0x60;
        *(undefined8 *)(puVar11 + -0x60) = *(undefined8 *)(puVar11 + -0x60);
        *(undefined8 *)(puVar11 + -0x58) = *(undefined8 *)(puVar11 + -0x58);
        *(undefined8 *)(puVar11 + -0x50) = *(undefined8 *)(puVar11 + -0x50);
        *(undefined8 *)(puVar11 + -0x48) = *(undefined8 *)(puVar11 + -0x48);
        *(undefined8 *)(puVar11 + -0x40) = *(undefined8 *)(puVar11 + -0x40);
        *(undefined8 *)(puVar11 + -0x38) = *(undefined8 *)(puVar11 + -0x38);
        puVar39 = puVar11 + -0x40;
        if ((bRam0000000003eb526a & 1) == 0) {
          func_0x00f78a20(0x3d21b88,unaff_x20,lVar33,0);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb526a = 1;
        }
        Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__HideIPPlanes(lVar18);
        switch(unaff_x20) {
        case 0:
          plVar32 = (long *)(lVar18 + 0xb8);
          break;
        case 1:
          plVar32 = (long *)(lVar18 + 0xc0);
          break;
        case 2:
          plVar32 = (long *)(lVar18 + 0xd0);
          break;
        case 3:
        case 4:
          plVar32 = (long *)(lVar18 + 0xd8);
          break;
        case 5:
          plVar32 = (long *)(lVar18 + 200);
          break;
        default:
          lVar18 = 0;
          goto code_r0x015b3894;
        }
        lVar18 = *plVar32;
code_r0x015b3894:
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        pdVar19 = (dword *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar18,0);
        if ((int)pdVar19 == 0) {
          return pdVar19;
        }
        if ((lVar18 == 0) || (lVar27 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar18,0), lVar27 == 0)) {
          lVar28 = func_0x00f78af4();
          puVar13 = puVar11 + -0x80;
          *(long *)(puVar11 + -0x80) = lVar18;
          *(long *)(puVar11 + -0x78) = lVar33;
          *(undefined1 **)(puVar11 + -0x70) = puVar39;
          *(code **)(puVar11 + -0x68) =
               Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__HideIPPlanes;
          puVar39 = puVar11 + -0x70;
          if ((*(long *)(lVar28 + 0xb8) == 0) ||
             (lVar27 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar28 + 0xb8),0), lVar27 == 0)) {
            pdVar19 = (dword *)func_0x00f78af4();
            *(undefined8 *)(puVar11 + -0xb0) = 0x3d23990;
            *(ulong *)(puVar11 + -0xa8) = unaff_x20;
            *(long *)(puVar11 + -0xa0) = lVar18;
            *(long *)(puVar11 + -0x98) = lVar28;
            *(undefined1 **)(puVar11 + -0x90) = puVar39;
            *(code **)(puVar11 + -0x88) = Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour___ctor;
            if ((bRam0000000003eb517d & 1) == 0) {
              func_0x00f78a20(0x3d2e428,0);
              func_0x00f78a20(0x3d1c210);
              bRam0000000003eb517d = 1;
            }
            uVar31 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<FrontEndCameraPosition, CinemachineVirtualCamera>_TypeInfo*/ uRam0000000003d1c210);
            /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar31,uRam0000000003d2e428);
            *(undefined8 *)(pdVar19 + 0x10) = uVar31;
            *(undefined8 *)(puVar11 + -0xb0) = *(undefined8 *)(puVar11 + -0xb0);
            *(undefined8 *)(puVar11 + -0xa8) = *(undefined8 *)(puVar11 + -0xa8);
            *(undefined8 *)(puVar11 + -0xa0) = *(undefined8 *)(puVar11 + -0xa0);
            *(undefined8 *)(puVar11 + -0x98) = *(undefined8 *)(puVar11 + -0x98);
            *(undefined8 *)(puVar11 + -0x90) = *(undefined8 *)(puVar11 + -0x90);
            *(undefined8 *)(puVar11 + -0x88) = *(undefined8 *)(puVar11 + -0x88);
            if ((bRam0000000003ebf1b8 & 1) == 0) {
              func_0x00f78a20(0x3d23990,0);
              bRam0000000003ebf1b8 = 1;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            return pdVar19;
          }
          uVar31 = 0;
          puVar40 = (undefined *)0x15b3984;
        }
        else {
          uVar31 = 1;
          puVar40 = &UNK_015b38dc;
          lVar28 = lVar33;
        }
        *(undefined8 *)(puVar13 + -0x30) = 0x3d23990;
        *(ulong *)(puVar13 + -0x28) = unaff_x20;
        *(long *)(puVar13 + -0x20) = lVar18;
        *(long *)(puVar13 + -0x18) = lVar28;
        *(undefined1 **)(puVar13 + -0x10) = puVar39;
        *(undefined **)(puVar13 + -8) = puVar40;
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar19 = (dword *)(*pcRam0000000003ebf4c0)(lVar27,uVar31);
        return pdVar19;
      }
    }
    unaff_x30 = &Atlas_UI_Screens_RewardScreen__AnimateReward;
    param_1 = (dword *)func_0x00f78af4();
code_r0x014e3860:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    pdVar19 = param_1;
    if ((bRam0000000003eb4bf0 & 1) == 0) {
      func_0x00f78a20(0x3d1fc20);
      func_0x00f78a20(0x3d20278);
      func_0x00f78a20(0x3d20650);
      func_0x00f78a20(0x3d57868);
      func_0x00f78a20(0x3d21ba8);
      func_0x00f78a20(0x3d22c80);
      pdVar19 = (dword *)func_0x00f78a20(0x3d25b48);
      bRam0000000003eb4bf0 = 1;
    }
    plVar32 = *(long **)(param_1 + 0x1c);
    if (plVar32 == (long *)0x0) {
      return pdVar19;
    }
    lVar33 = *plVar32;
    bVar2 = *(byte *)(lVar33 + 300);
    if ((bVar2 < *(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300)) ||
       (*(long *)(*(long *)(lVar33 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300) * 8 + -8)
        != /*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80)) {
      if ((bVar2 < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
         (*(long *)(*(long *)(lVar33 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8)
          != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
        plVar20 = plVar32;
        if (((bVar2 < *(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300)) ||
            (*(long *)(*(long *)(lVar33 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8 +
                      -8) != /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) &&
           ((bVar2 < *(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) ||
            (*(long *)(*(long *)(lVar33 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) * 8 +
                      -8) != /*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20)))) {
          if ((bVar2 < *(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300)) ||
             (*(long *)(*(long *)(lVar33 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300) * 8 +
                       -8) != /*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8)) {
            if (bVar2 < *(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300)) {
              return pdVar19;
            }
            if (*(long *)(*(long *)(lVar33 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300) * 8
                         + -8) != /*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278) {
              return pdVar19;
            }
            goto code_r0x014e3a04;
          }
          if ((*(long *)(param_1 + 0x28) == 0) ||
             (plVar20 = (long *)/*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(*(long *)(param_1 + 0x28),uRam0000000003d57868),
             plVar20 == (long *)0x0)) goto code_r0x014e3afc;
          Atlas_Gameplay_Kart_BaseVisualBehaviour__SetGliding(plVar20,1,0);
          Atlas_Gameplay_Kart_GliderVisualBehaviour__SetTrailsEnabled(plVar20,0,0);
        }
        plVar32 = plVar20;
        if (*(long *)(param_1 + 0x28) != 0) {
          uVar31 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(param_1 + 0x28),0);
          goto code_r0x014e3ae4;
        }
      }
      else if ((*(long *)(param_1 + 0x34) != 0) &&
              (lVar33 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator
                                  (*(long *)(param_1 + 0x34),0,0), lVar33 != 0)) {
        Atlas_Gameplay_Kart_KartFEAnimator__PlayRewardScreen(lVar33,0);
        if (*(long *)(param_1 + 0x34) != 0) {
          unaff_x21 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(param_1 + 0x34),0,0)
          ;
          uVar31 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(plVar32,0);
          if (unaff_x21 != 0) {
            Atlas_Gameplay_Kart_KartFEAnimator__TriggerFEUnlockCharacter(unaff_x21,uVar31,0);
            goto code_r0x014e3a80;
          }
        }
      }
    }
    else {
code_r0x014e3a04:
      if ((*(long *)(param_1 + 0x34) != 0) &&
         (lVar33 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(param_1 + 0x34),0,0),
         lVar33 != 0)) {
        Atlas_Gameplay_Kart_KartFEAnimator__PlayRewardScreen(lVar33,0);
code_r0x014e3a80:
        if (*(long *)(param_1 + 0x34) != 0) {
          uVar31 = Atlas_FrontEnd_FrontEndScene__GetKartTransform(*(long *)(param_1 + 0x34),0,0);
code_r0x014e3ae4:
          auVar41._8_8_ = uVar31;
          auVar41._0_8_ = param_1;
          puVar39 = *(undefined1 **)((long)register0x00000008 + -0x10);
          puVar40 = *(undefined **)((long)register0x00000008 + -8);
          pdVar21 = *(dword **)((long)register0x00000008 + -0x20);
          pdVar19 = *(dword **)((long)register0x00000008 + -0x18);
          pdVar36 = *(dword **)((long)register0x00000008 + -0x30);
          pdVar34 = *(dword **)((long)register0x00000008 + -0x28);
          goto code_r0x014e3c84;
        }
      }
    }
code_r0x014e3afc:
    pdVar19 = (dword *)func_0x00f78af4();
    puVar11 = (undefined1 *)((long)register0x00000008 + -0x50);
    *(long **)((long)register0x00000008 + -0x50) = plVar32;
    *(dword **)((long)register0x00000008 + -0x48) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) = &Atlas_UI_Screens_RewardScreen__OnSkipTapped
    ;
    puVar39 = (undefined1 *)((long)register0x00000008 + -0x40);
    pdVar21 = pdVar19;
    if ((bRam0000000003eb4bec & 1) == 0) {
      pdVar21 = (dword *)func_0x00f78a20(0x3d79018);
      bRam0000000003eb4bec = 1;
    }
    if (pdVar19[0x13] != 2) {
      return pdVar21;
    }
    uVar31 = 0x3d79000;
    puVar40 = &UNK_014e3b4c;
    param_1 = pdVar19;
    lVar33 = unaff_x21;
  }
  /*Atlas.Save.SaveManager$$ScheduleSave*/ func_0x014eb668(*(long *)(lVar33 + 0x48),0);
  pdVar36 = *(dword **)(puVar11 + -0x30);
  pdVar34 = *(dword **)(puVar11 + -0x28);
  register0x00000008 = (BADSPACEBASE *)(puVar11 + -0x40);
  *(undefined8 *)(puVar11 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar11 + -0x38) = unaff_x23;
  *(dword **)(puVar11 + -0x30) = pdVar36;
  *(dword **)(puVar11 + -0x28) = pdVar34;
  *(undefined8 *)(puVar11 + -0x20) = *(undefined8 *)(puVar11 + -0x20);
  *(undefined8 *)(puVar11 + -0x18) = *(undefined8 *)(puVar11 + -0x18);
  *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
  *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
  puVar39 = puVar11 + -0x10;
  pdVar21 = (dword *)0x3eb4000;
  unaff_x23 = 0x3d41288;
  if ((bRam0000000003eb4bee & 1) == 0) {
    func_0x00f78a20(0x3d41288);
    func_0x00f78a20(0x3d41290);
    bRam0000000003eb4bee = 1;
  }
  lVar33 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(pdVar19,uRam0000000003d41288);
  if (lVar33 != 0) {
    if (*(long *)(lVar33 + 0x10) == 0) {
      lVar33 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(pdVar19,uRam0000000003d41290);
      if (lVar33 != 0) {
        pdVar21 = *(dword **)(lVar33 + 0x10);
        lVar33 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(pdVar19,uRam0000000003d41288);
        if (lVar33 != 0) {
          pdVar34 = *(dword **)(lVar33 + 0x18);
          lVar33 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(pdVar19,uRam0000000003d41288);
          if (lVar33 != 0) {
            pdVar36 = (dword *)(ulong)*(uint *)(lVar33 + 0x20);
            lVar33 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(pdVar19,uRam0000000003d41288);
            if ((lVar33 != 0) && (pdVar21 != (dword *)0x0)) {
              pdVar19 = *(dword **)(lVar33 + 0x28);
              uVar17 = 0;
              uVar31 = *(undefined8 *)(puVar11 + -0x40);
              *(undefined8 *)(puVar11 + -0x40) = uVar31;
              *(undefined8 *)(puVar11 + -0x38) = *(undefined8 *)(puVar11 + -0x38);
              *(undefined8 *)(puVar11 + -0x30) = *(undefined8 *)(puVar11 + -0x30);
              *(undefined8 *)(puVar11 + -0x28) = *(undefined8 *)(puVar11 + -0x28);
              *(undefined8 *)(puVar11 + -0x20) = *(undefined8 *)(puVar11 + -0x20);
              *(undefined8 *)(puVar11 + -0x18) = *(undefined8 *)(puVar11 + -0x18);
              *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
              *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
              puVar39 = puVar11 + -0x10;
              pdVar22 = pdVar36;
              pdVar26 = pdVar19;
              if ((bRam0000000003eb486f & 1) == 0) {
                func_0x00f78a20(0x3d53980);
                func_0x00f78a20(0x3d2fb90);
                func_0x00f78a20(0x3d6d050);
                bRam0000000003eb486f = 1;
              }
              *(undefined8 *)(puVar11 + -0x48) = 0;
              lVar33 = *(long *)(pdVar21 + 4);
              if (lVar33 == 0) {
                auVar42 = func_0x00f78af4();
                pdVar25 = auVar42._8_8_;
                *(undefined1 **)(puVar11 + -0x60) = puVar39;
                *(undefined **)(puVar11 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
                lVar33 = *(long *)(auVar42._0_8_ + 0x10);
                if (lVar33 == 0) {
                  auVar42 = func_0x00f78af4();
                  uVar17 = auVar42._8_8_;
                  *(undefined1 **)(puVar11 + -0x70) = puVar11 + -0x60;
                  *(undefined **)(puVar11 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
                  lVar33 = *(long *)(auVar42._0_8_ + 0x10);
                  if (lVar33 != 0) {
                    pdVar22 = (dword *)0x0;
                    *(dword **)(puVar11 + -0x90) = pdVar36;
                    *(dword **)(puVar11 + -0x88) = pdVar19;
                    *(dword **)(puVar11 + -0x80) = pdVar21;
                    *(dword **)(puVar11 + -0x78) = pdVar34;
                    *(undefined8 *)(puVar11 + -0x70) = *(undefined8 *)(puVar11 + -0x70);
                    *(undefined8 *)(puVar11 + -0x68) = *(undefined8 *)(puVar11 + -0x68);
                    if ((bRam0000000003ebc64b & 1) == 0) {
                      func_0x00f78a20(0x3d3ddc8);
                      func_0x00f78a20(0x3d3ddd0);
                      bRam0000000003ebc64b = 1;
                    }
                    lVar18 = *(long *)(lVar33 + 0x70);
                    if (lVar18 != 0) {
                      lVar27 = lVar18;
                      if (*(uint *)(lVar18 + 0x18) <= auVar42._8_4_) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                        lVar27 = *(long *)(lVar33 + 0x70);
                      }
                      if (lVar27 != 0) {
                        lVar18 = *(long *)(lVar18 + 0x10) + (long)(int)auVar42._8_4_ * 0x28;
                        uVar38 = *(undefined8 *)(lVar18 + 0x28);
                        uVar31 = *(undefined8 *)(lVar18 + 0x20);
                        uVar1 = *(undefined4 *)(lVar18 + 0x42);
                        *(undefined4 *)(puVar11 + -0xd8) = uVar1;
                        uVar5 = *(undefined2 *)(lVar18 + 0x46);
                        *(undefined2 *)(puVar11 + -0xd4) = uVar5;
                        *(undefined8 *)(puVar11 + -200) = uVar38;
                        *(undefined8 *)(puVar11 + -0xd0) = uVar31;
                        *(undefined8 *)(puVar11 + -0xb8) = uVar38;
                        *(undefined8 *)(puVar11 + -0xc0) = uVar31;
                        *(undefined8 *)(puVar11 + -0xb0) = 0;
                        *(undefined8 *)(puVar11 + -0xa8) = 0;
                        *(undefined2 *)(puVar11 + -0xa0) = 1;
                        *(undefined4 *)(puVar11 + -0x9e) = uVar1;
                        *(undefined2 *)(puVar11 + -0x9a) = uVar5;
                        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar27,uVar17,puVar11 + -0xc0,uRam0000000003d3ddd0);
                        pdVar19 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar33,uVar17);
                        return pdVar19;
                      }
                    }
                    auVar42 = func_0x00f78af4();
                    pdVar25 = auVar42._8_8_;
                    puVar12 = puVar11 + -0x110;
                    *(dword **)(puVar11 + -0x110) = pdVar36;
                    *(long *)(puVar11 + -0x108) = lVar18;
                    *(long *)(puVar11 + -0x100) = lVar33;
                    *(undefined8 *)(puVar11 + -0xf8) = uVar17;
                    *(undefined1 **)(puVar11 + -0xf0) = puVar11 + -0x70;
                    *(undefined **)(puVar11 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
                    puVar39 = puVar11 + -0xf0;
                    if ((bRam0000000003ebc64c & 1) == 0) {
                      func_0x00f78a20(0x3d3ddc8);
                      bRam0000000003ebc64c = 1;
                    }
                    lVar33 = *(long *)(auVar42._0_8_ + 0x70);
                    if (lVar33 == 0) {
                      puVar40 = &Core_UI2_UIScreen__ForceExit;
                      pdVar34 = (dword *)func_0x00f78af4();
                      pdVar21 = (dword *)0x0;
                      pdVar19 = (dword *)0x3ebc000;
                      goto code_r0x02f882d8;
                    }
                    if (*(uint *)(lVar33 + 0x18) <= auVar42._8_4_) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar33 = *(long *)(*(long *)(lVar33 + 0x10) + (long)(int)auVar42._8_4_ * 0x28 +
                                      0x28);
                    if (lVar33 == 0) {
                      pdVar19 = (dword *)0x0;
                    }
                    else {
                      pdVar19 = *(dword **)(lVar33 + 0x40);
                    }
                    return pdVar19;
                  }
                  auVar42 = func_0x00f78af4();
                  pdVar25 = auVar42._8_8_;
                  *(undefined1 **)(puVar11 + -0x80) = puVar11 + -0x70;
                  *(undefined **)(puVar11 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
                  lVar33 = *(long *)(auVar42._0_8_ + 0x10);
                  auVar42._8_8_ = pdVar19;
                  auVar42._0_8_ = lVar33;
                  if (lVar33 != 0) {
                    pdVar22 = (dword *)0x0;
                    puVar6 = puVar11 + -0x70;
                    puVar39 = *(undefined1 **)(puVar11 + -0x80);
                    puVar40 = *(undefined **)(puVar11 + -0x78);
                    pdVar19 = pdVar21;
                    goto code_r0x02f877a8;
                  }
                  auVar42 = func_0x00f78af4();
                  *(undefined1 **)(puVar11 + -0x90) = puVar11 + -0x80;
                  *(undefined **)(puVar11 + -0x88) =
                       &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
                  lVar33 = *(long *)(auVar42._0_8_ + 0x10);
                  auVar42._8_8_ = auVar42._8_8_;
                  auVar42._0_8_ = lVar33;
                  if (lVar33 != 0) {
                    puVar7 = puVar11 + -0x80;
                    puVar39 = *(undefined1 **)(puVar11 + -0x90);
                    puVar40 = *(undefined **)(puVar11 + -0x88);
                    pdVar25 = pdVar22;
                    while( true ) {
                      puVar6 = puVar7 + -0x30;
                      *(dword **)(puVar7 + -0x30) = pdVar36;
                      *(dword **)(puVar7 + -0x28) = pdVar19;
                      *(dword **)(puVar7 + -0x20) = pdVar21;
                      *(dword **)(puVar7 + -0x18) = pdVar34;
                      *(undefined1 **)(puVar7 + -0x10) = puVar39;
                      *(undefined **)(puVar7 + -8) = puVar40;
                      puVar39 = puVar7 + -0x10;
                      puVar40 = &UNK_02f883d8;
                      pdVar22 = pdVar25;
                      pdVar34 = pdVar26;
                      pdVar19 = pdVar25;
                      pdVar36 = auVar42._0_8_;
code_r0x02f877a8:
                      pdVar21 = auVar42._0_8_;
                      puVar12 = puVar6 + -0x60;
                      *(dword **)(puVar6 + -0x30) = pdVar36;
                      *(long *)(puVar6 + -0x28) = auVar42._8_8_;
                      *(dword **)(puVar6 + -0x20) = pdVar19;
                      *(dword **)(puVar6 + -0x18) = pdVar34;
                      *(undefined1 **)(puVar6 + -0x10) = puVar39;
                      *(undefined **)(puVar6 + -8) = puVar40;
                      puVar39 = puVar6 + -0x10;
                      pdVar19 = pdVar21;
                      if ((bRam0000000003ebc64d & 1) == 0) {
                        func_0x00f78a20(0x3d3ddc8);
                        pdVar19 = (dword *)func_0x00f78a20(0x3d3ddd0);
                        bRam0000000003ebc64d = 1;
                      }
                      uVar30 = (uint)pdVar25;
                      if (((int)uVar30 < 0) || ((int)*(long *)(pdVar21 + 0x14) <= (int)uVar30)) {
                        return pdVar19;
                      }
                      lVar33 = *(long *)(pdVar21 + 0x1c);
                      if (lVar33 == 0) break;
                      if (*(uint *)(lVar33 + 0x18) <= uVar30) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      lVar33 = *(long *)(lVar33 + 0x10) + ((ulong)pdVar25 & 0xffffffff) * 0x28;
                      pdVar36 = *(dword **)(lVar33 + 0x20);
                      pdVar34 = *(dword **)(lVar33 + 0x28);
                      *(undefined4 *)(puVar6 + -0x60) = *(undefined4 *)(lVar33 + 0x42);
                      *(undefined2 *)(puVar6 + -0x5c) = *(undefined2 *)(lVar33 + 0x46);
                      if (pdVar34 == (dword *)0x0) {
                        lVar33 = *(long *)(pdVar21 + 0x1c);
                        if (lVar33 != 0) {
                          *(dword **)(puVar6 + -0x58) = pdVar36;
                          *(undefined8 *)(puVar6 + -0x50) = 0;
                          *(undefined8 *)(puVar6 + -0x48) = 0;
                          *(undefined8 *)(puVar6 + -0x40) = 0;
                          *(undefined2 *)(puVar6 + -0x38) = 0;
                          *(undefined4 *)(puVar6 + -0x36) = *(undefined4 *)(puVar6 + -0x60);
                          *(undefined2 *)(puVar6 + -0x32) = *(undefined2 *)(puVar6 + -0x5c);
                          pdVar19 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar33,pdVar25,puVar6 + -0x58,
                                                             uRam0000000003d3ddd0);
                          return pdVar19;
                        }
                        break;
                      }
                      puVar40 = &UNK_02f87848;
                      pdVar19 = pdVar34;
code_r0x02f882d8:
                      *(dword **)(puVar12 + -0x20) = pdVar21;
                      *(dword **)(puVar12 + -0x18) = pdVar25;
                      *(undefined1 **)(puVar12 + -0x10) = puVar39;
                      *(undefined **)(puVar12 + -8) = puVar40;
                      (**(code **)(*(long *)pdVar34 + 0x218))
                                (pdVar34,*(undefined8 *)(*(long *)pdVar34 + 0x220));
                      if (*(long *)(pdVar34 + 10) != 0) {
                        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar34 + 10),0);
                        pdVar34[0x13] = 4;
                        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar34,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        pdVar19 = (dword *)(**(code **)(*(long *)pdVar34 + 0x228))
                                                     (pdVar34,*(undefined8 *)
                                                               (*(long *)pdVar34 + 0x230));
                        return pdVar19;
                      }
                      func_0x00f78af4();
                      puVar7 = puVar12 + -0x40;
                      *(dword **)(puVar12 + -0x40) = pdVar21;
                      *(dword **)(puVar12 + -0x38) = pdVar34;
                      *(undefined1 **)(puVar12 + -0x30) = puVar12 + -0x10;
                      *(undefined **)(puVar12 + -0x28) =
                           &Core_UI2_UIManager__ReturnScreenWithBehaviour;
                      puVar39 = puVar12 + -0x30;
                      if (extraout_x1 != (long *)0x0) {
                        lVar33 = extraout_x1[5];
                        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
                        uVar31 = (**(code **)(*extraout_x1 + 0x238))
                                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
                        extraout_x1[5] = 0;
                        extraout_x1[6] = 0;
                        extraout_x1[9] = _UNK_037235c0;
                        extraout_x1[7] = 0;
                        extraout_x1[8] = 0;
                        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar31,lVar33);
                        pdVar19 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                                     (extraout_x1,
                                                      *(undefined8 *)(*extraout_x1 + 0x250));
                        extraout_x1[0xb] = 0;
                        return pdVar19;
                      }
                      puVar40 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
                      auVar42 = func_0x00f78af4();
                      pdVar25 = pdVar22;
                    }
                    lVar33 = func_0x00f78af4();
                    *(undefined8 *)(puVar6 + -0xa0) = unaff_d9;
                    *(undefined8 *)(puVar6 + -0x98) = unaff_d8;
                    *(dword **)(puVar6 + -0x90) = pdVar36;
                    *(undefined8 *)(puVar6 + -0x88) = 0;
                    *(dword **)(puVar6 + -0x80) = pdVar21;
                    *(dword **)(puVar6 + -0x78) = pdVar25;
                    *(undefined1 **)(puVar6 + -0x70) = puVar39;
                    *(undefined **)(puVar6 + -0x68) = &Core_UI2_UIManager__Update;
                    if ((bRam0000000003ebc647 & 1) == 0) {
                      func_0x00f78a20(0x3d255c0);
                      bRam0000000003ebc647 = 1;
                    }
                    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar31 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
                    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar31,0);
                    if (0 < *(int *)(lVar33 + 0x50)) {
                      iVar16 = 0;
                      do {
                        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar33,iVar16);
                        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar33,iVar16);
                        iVar16 = iVar16 + 1;
                      } while (iVar16 < *(int *)(lVar33 + 0x50));
                    }
                    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar33);
                    *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0x80);
                    *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x78);
                    *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
                    *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
                    if (pcRam0000000003ec05a0 == (code *)0x0) {
                      pcRam0000000003ec05a0 =
                           (code *)func_0x00f789d4(
                                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                                  );
                    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    pdVar19 = (dword *)(*pcRam0000000003ec05a0)(uVar31);
                    return pdVar19;
                  }
                  auVar42 = func_0x00f78af4();
                  *(undefined1 **)(puVar11 + -0xa0) = puVar11 + -0x90;
                  *(undefined **)(puVar11 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
                  lVar33 = *(long *)(auVar42._0_8_ + 0x10);
                  if (lVar33 == 0) {
                    auVar42 = func_0x00f78af4();
                    *(undefined1 **)(puVar11 + -0xb0) = puVar11 + -0xa0;
                    *(undefined **)(puVar11 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
                    lVar33 = *(long *)(auVar42._0_8_ + 0x10);
                    auVar43._8_8_ = auVar42._8_8_;
                    auVar43._0_8_ = lVar33;
                    if (lVar33 != 0) {
                      pdVar26 = (dword *)0x0;
                      puVar8 = puVar11 + -0xa0;
                      puVar39 = *(undefined1 **)(puVar11 + -0xb0);
                      puVar40 = *(undefined **)(puVar11 + -0xa8);
                      goto code_r0x02f884dc;
                    }
                    auVar42 = func_0x00f78af4();
                    *(undefined1 **)(puVar11 + -0xc0) = puVar11 + -0xb0;
                    *(undefined **)(puVar11 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
                    lVar33 = *(long *)(auVar42._0_8_ + 0x10);
                    auVar44._8_8_ = auVar42._8_8_;
                    auVar44._0_8_ = lVar33;
                    if (lVar33 == 0) {
                      auVar42 = func_0x00f78af4();
                      *(undefined1 **)(puVar11 + -0xd0) = puVar11 + -0xc0;
                      *(undefined **)(puVar11 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
                      lVar33 = *(long *)(auVar42._0_8_ + 0x10);
                      auVar45._8_8_ = auVar42._8_8_;
                      auVar45._0_8_ = lVar33;
                      if (lVar33 == 0) {
                        pdVar22 = (dword *)func_0x00f78af4();
                        *(dword **)(puVar11 + -0x100) = pdVar36;
                        *(dword **)(puVar11 + -0xf8) = pdVar19;
                        *(dword **)(puVar11 + -0xf0) = pdVar21;
                        *(dword **)(puVar11 + -0xe8) = pdVar34;
                        *(undefined1 **)(puVar11 + -0xe0) = puVar11 + -0xd0;
                        *(undefined **)(puVar11 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
                        if ((bRam0000000003eb4871 & 1) == 0) {
                          func_0x00f78a20(0x3d2fb80);
                          func_0x00f78a20(0x3d1c478);
                          bRam0000000003eb4871 = 1;
                        }
                        uVar31 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
                        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar31,uRam0000000003d2fb80);
                        *(undefined8 *)(pdVar22 + 0xc) = uVar31;
                        return pdVar22;
                      }
                      puVar10 = puVar11 + -0xc0;
                      puVar39 = *(undefined1 **)(puVar11 + -0xd0);
                      puVar40 = *(undefined **)(puVar11 + -200);
                      goto code_r0x02f88674;
                    }
                    puVar9 = puVar11 + -0xb0;
                    puVar39 = *(undefined1 **)(puVar11 + -0xc0);
                    puVar40 = *(undefined **)(puVar11 + -0xb8);
                    pdVar26 = pdVar22;
                    pdVar22 = pdVar19;
                  }
                  else {
                    pdVar26 = (dword *)0x0;
                    puVar8 = puVar11 + -0xc0;
                    *(dword **)(puVar11 + -0xc0) = pdVar36;
                    *(dword **)(puVar11 + -0xb8) = pdVar19;
                    *(dword **)(puVar11 + -0xb0) = pdVar21;
                    *(dword **)(puVar11 + -0xa8) = pdVar34;
                    *(undefined8 *)(puVar11 + -0xa0) = *(undefined8 *)(puVar11 + -0xa0);
                    *(undefined8 *)(puVar11 + -0x98) = *(undefined8 *)(puVar11 + -0x98);
                    puVar39 = puVar11 + -0xa0;
                    pdVar19 = (dword *)0x3ebc000;
                    if ((bRam0000000003ebc64f & 1) == 0) {
                      func_0x00f78a20(0x3d3ddc8);
                      bRam0000000003ebc64f = 1;
                    }
                    uVar30 = auVar42._8_4_;
                    if (((int)uVar30 < 0) || (*(int *)(lVar33 + 0x50) <= (int)uVar30)) {
                      return (dword *)0x0;
                    }
                    lVar33 = *(long *)(lVar33 + 0x70);
                    if (lVar33 != 0) {
                      if (*(uint *)(lVar33 + 0x18) <= uVar30) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      lVar18 = *(long *)(lVar33 + 0x10) + ((ulong)auVar42._8_8_ & 0xffffffff) * 0x28
                      ;
                      lVar33 = *(long *)(lVar18 + 0x28);
                      cVar3 = *(char *)(lVar18 + 0x40);
                      iVar16 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar18 + 0x30),0);
                      if (iVar16 == 0 || cVar3 != '\0') {
                        return (dword *)0x0;
                      }
                      if ((lVar33 != 0) && (*(int *)(lVar33 + 0x4c) != 2)) {
                        return (dword *)0x0;
                      }
                      return (dword *)((long)&MACH_HEADER.magic + 1);
                    }
                    puVar40 = &Core_UI2_UIManager__GetLayerState;
                    auVar43 = func_0x00f78af4();
                    pdVar21 = (dword *)0x0;
                    pdVar34 = auVar42._8_8_;
code_r0x02f884dc:
                    puVar9 = puVar8 + -0x30;
                    *(dword **)(puVar8 + -0x30) = pdVar36;
                    *(dword **)(puVar8 + -0x28) = pdVar19;
                    *(dword **)(puVar8 + -0x20) = pdVar21;
                    *(dword **)(puVar8 + -0x18) = pdVar34;
                    *(undefined1 **)(puVar8 + -0x10) = puVar39;
                    *(undefined **)(puVar8 + -8) = puVar40;
                    puVar39 = puVar8 + -0x10;
                    if ((bRam0000000003ebc650 & 1) == 0) {
                      func_0x00f78a20(0x3d3ddc8);
                      bRam0000000003ebc650 = 1;
                    }
                    lVar33 = *(long *)(auVar43._0_8_ + 0x70);
                    if (lVar33 != 0) {
                      if (*(uint *)(lVar33 + 0x18) <= auVar43._8_4_) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      lVar33 = *(long *)(*(long *)(lVar33 + 0x10) + (long)(int)auVar43._8_4_ * 0x28
                                        + 0x28);
                      if (lVar33 == 0) {
                        pdVar19 = &MACH_HEADER.cputype;
                      }
                      else {
                        pdVar19 = (dword *)(ulong)*(uint *)(lVar33 + 0x4c);
                      }
                      return pdVar19;
                    }
                    puVar40 = &Core_UI2_UIManager__EnableInput;
                    auVar44 = func_0x00f78af4();
                    pdVar21 = (dword *)0x0;
                    pdVar34 = auVar43._8_8_;
                    pdVar22 = (dword *)0x3ebc000;
                  }
                  pdVar25 = auVar44._8_8_;
                  pdVar19 = auVar44._0_8_;
                  puVar10 = puVar9 + -0x40;
                  *(undefined8 *)(puVar9 + -0x40) = uVar31;
                  *(undefined8 *)(puVar9 + -0x38) = 0x3eb4000;
                  *(dword **)(puVar9 + -0x30) = pdVar36;
                  *(dword **)(puVar9 + -0x28) = pdVar22;
                  *(dword **)(puVar9 + -0x20) = pdVar21;
                  *(dword **)(puVar9 + -0x18) = pdVar34;
                  *(undefined1 **)(puVar9 + -0x10) = puVar39;
                  *(undefined **)(puVar9 + -8) = puVar40;
                  puVar39 = puVar9 + -0x10;
                  pdVar36 = (dword *)0x3ebc000;
                  pdVar22 = pdVar26;
                  if ((bRam0000000003ebc651 & 1) == 0) {
                    func_0x00f78a20(0x3d2a5c0);
                    func_0x00f78a20(0x3d3ddc8);
                    bRam0000000003ebc651 = 1;
                  }
                  if (*(long *)(pdVar19 + 0x1a) != 0) {
                    pdVar22 = (dword *)(ulong)((uint)pdVar26 ^ 1);
                    pdVar21 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar19 + 0x1a),pdVar25,pdVar22,0);
                    lVar33 = *(long *)(pdVar19 + 0x1c);
                    pdVar36 = (dword *)0x0;
                    if (lVar33 != 0) {
                      uVar30 = auVar44._8_4_;
                      if (*(uint *)(lVar33 + 0x18) <= uVar30) {
                        pdVar21 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      if ((*(long *)(*(long *)(lVar33 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28) ==
                           0) || (pdVar36 = *(dword **)(pdVar19 + 0xc), pdVar36 == (dword *)0x0)) {
                        return pdVar21;
                      }
                      lVar33 = *(long *)(pdVar19 + 0x1c);
                      pdVar19 = (dword *)0x0;
                      if (lVar33 != 0) {
                        if (*(uint *)(lVar33 + 0x18) <= uVar30) {
                          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                        }
                        plVar32 = *(long **)(*(long *)(lVar33 + 0x10) + (long)(int)uVar30 * 0x28 +
                                            0x28);
                        *(undefined8 *)(puVar9 + -0x60) = unaff_x28;
                        *(undefined8 *)(puVar9 + -0x58) = unaff_x27;
                        *(undefined8 *)(puVar9 + -0x50) = unaff_x26;
                        *(undefined8 *)(puVar9 + -0x48) = unaff_x25;
                        *(undefined8 *)(puVar9 + -0x40) = *(undefined8 *)(puVar9 + -0x40);
                        *(undefined8 *)(puVar9 + -0x38) = *(undefined8 *)(puVar9 + -0x38);
                        *(undefined8 *)(puVar9 + -0x30) = *(undefined8 *)(puVar9 + -0x30);
                        *(undefined8 *)(puVar9 + -0x28) = *(undefined8 *)(puVar9 + -0x28);
                        *(undefined8 *)(puVar9 + -0x20) = *(undefined8 *)(puVar9 + -0x20);
                        *(undefined8 *)(puVar9 + -0x18) = *(undefined8 *)(puVar9 + -0x18);
                        *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
                        *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
                        *(dword **)(puVar9 + -0x68) = pdVar36;
                        lVar33 = *(long *)(pdVar36 + 0x1a);
                        if (lVar33 == 0) {
                          puVar39 = puVar9 + -0x68;
                          lVar18 = 1;
                        }
                        else {
                          lVar18 = *(long *)(lVar33 + 0x18);
                          if (lVar18 == 0) {
                            return pdVar36;
                          }
                          puVar39 = (undefined1 *)(lVar33 + 0x20);
                        }
                        lVar33 = 0;
                        do {
                          lVar27 = *(long *)(puVar39 + lVar33 * 8);
                          pcVar37 = *(code **)(lVar27 + 0x10);
                          plVar20 = *(long **)(lVar27 + 0x20);
                          lVar27 = *(long *)(lVar27 + 0x28);
                          if (*(short *)(lVar27 + 0x48) == -1) {
                            func_0x00f78ad8(lVar27);
                          }
                          iVar16 = func_0x00f78a4c(lVar27);
                          bVar14 = *(char *)(lVar27 + 0x4a) == '\x03';
                          if (iVar16 == 0) {
                            if (bVar14) {
                              if (plVar20 == (long *)0x0) {
code_r0x01e71bbc:
                                pdVar19 = (dword *)(*pcVar37)(plVar32,pdVar25,pdVar26,lVar27);
                              }
                              else {
                                if (((*(short *)(lVar27 + 0x48) == -1) ||
                                    ((*(byte *)(*plVar20 + 0x115) & 1) != 0)) ||
                                   (*(long *)(pdVar36 + 6) == 0)) goto code_r0x01e71aac;
                                iVar16 = func_0x00f78a44(lVar27);
                                iVar15 = func_0x00f78ec0(lVar27);
                                if (iVar16 == 0) {
                                  uVar4 = *(ushort *)(lVar27 + 0x48);
                                  if (iVar15 == 0) {
                                    lVar27 = *plVar20 + (ulong)uVar4 * 0x10;
                                    pdVar19 = (dword *)(**(code **)(lVar27 + 0x138))
                                                                 (plVar20,plVar32,pdVar25,pdVar26,
                                                                  *(undefined8 *)(lVar27 + 0x140));
                                    goto code_r0x01e71bd0;
                                  }
                                  lVar27 = func_0x00f78a48(lVar27);
                                  lVar28 = *plVar20;
                                  uVar24 = (ulong)*(ushort *)(lVar28 + 0x12a);
                                  if (uVar24 != 0) {
                                    piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar29 + -2) == lVar27) {
                                        puVar23 = (undefined8 *)
                                                  (lVar28 + (long)(int)(*piVar29 + (uint)uVar4) *
                                                            0x10 + 0x138);
                                        goto code_r0x01e71d74;
                                      }
                                      piVar29 = piVar29 + 4;
                                      uVar24 = uVar24 - 1;
                                    } while (uVar24 != 0);
                                  }
                                  puVar23 = (undefined8 *)
                                            func_0x00fac1f0(plVar20,lVar27,(ulong)uVar4);
code_r0x01e71d74:
                                  pcVar37 = (code *)*puVar23;
                                  puVar23 = (undefined8 *)puVar23[1];
                                }
                                else {
                                  if (iVar15 == 0) {
                                    uVar31 = *(undefined8 *)
                                              (*plVar20 + (ulong)*(ushort *)(lVar27 + 0x48) * 0x10 +
                                              0x140);
                                  }
                                  else {
                                    lVar28 = *plVar20;
                                    uVar24 = (ulong)*(ushort *)(lVar28 + 0x12a);
                                    if (uVar24 != 0) {
                                      piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar29 + -2) == *(long *)(lVar27 + 0x18)) {
                                          lVar28 = lVar28 + (long)(int)(*piVar29 +
                                                                       (uint)*(ushort *)
                                                                              (lVar27 + 0x48)) *
                                                            0x10 + 0x138;
                                          goto code_r0x01e71d4c;
                                        }
                                        piVar29 = piVar29 + 4;
                                        uVar24 = uVar24 - 1;
                                      } while (uVar24 != 0);
                                    }
                                    lVar28 = func_0x00fac1f0(plVar20);
code_r0x01e71d4c:
                                    uVar31 = *(undefined8 *)(lVar28 + 8);
                                  }
                                  puVar23 = (undefined8 *)func_0x00f78acc(uVar31,lVar27);
                                  pcVar37 = (code *)*puVar23;
                                }
                                pdVar19 = (dword *)(*pcVar37)(plVar20,plVar32,pdVar25,pdVar26,
                                                              puVar23);
                              }
                            }
                            else {
                              if ((*(short *)(lVar27 + 0x48) == -1) || (*(long *)(pdVar36 + 6) == 0)
                                 ) goto code_r0x01e71bbc;
                              iVar16 = func_0x00f78a44(lVar27);
                              iVar15 = func_0x00f78ec0(lVar27);
                              if (iVar16 == 0) {
                                uVar4 = *(ushort *)(lVar27 + 0x48);
                                if (iVar15 == 0) {
                                  lVar27 = *plVar32 + (ulong)uVar4 * 0x10;
                                  pdVar19 = (dword *)(**(code **)(lVar27 + 0x138))
                                                               (plVar32,pdVar25,pdVar26,
                                                                *(undefined8 *)(lVar27 + 0x140));
                                  goto code_r0x01e71bd0;
                                }
                                lVar27 = func_0x00f78a48(lVar27);
                                lVar28 = *plVar32;
                                uVar24 = (ulong)*(ushort *)(lVar28 + 0x12a);
                                if (uVar24 != 0) {
                                  piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar29 + -2) == lVar27) {
                                      puVar23 = (undefined8 *)
                                                (lVar28 + (long)(int)(*piVar29 + (uint)uVar4) * 0x10
                                                + 0x138);
                                      goto code_r0x01e71d00;
                                    }
                                    piVar29 = piVar29 + 4;
                                    uVar24 = uVar24 - 1;
                                  } while (uVar24 != 0);
                                }
                                puVar23 = (undefined8 *)func_0x00fac1f0(plVar32,lVar27,(ulong)uVar4)
                                ;
code_r0x01e71d00:
                                pcVar37 = (code *)*puVar23;
                                puVar23 = (undefined8 *)puVar23[1];
                              }
                              else {
                                if (iVar15 == 0) {
                                  uVar31 = *(undefined8 *)
                                            (*plVar32 + (ulong)*(ushort *)(lVar27 + 0x48) * 0x10 +
                                            0x140);
                                }
                                else {
                                  lVar28 = *plVar32;
                                  uVar24 = (ulong)*(ushort *)(lVar28 + 0x12a);
                                  if (uVar24 != 0) {
                                    piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar29 + -2) == *(long *)(lVar27 + 0x18)) {
                                        lVar28 = lVar28 + (long)(int)(*piVar29 +
                                                                     (uint)*(ushort *)
                                                                            (lVar27 + 0x48)) * 0x10
                                                 + 0x138;
                                        goto code_r0x01e71cd8;
                                      }
                                      piVar29 = piVar29 + 4;
                                      uVar24 = uVar24 - 1;
                                    } while (uVar24 != 0);
                                  }
                                  lVar28 = func_0x00fac1f0(plVar32);
code_r0x01e71cd8:
                                  uVar31 = *(undefined8 *)(lVar28 + 8);
                                }
                                puVar23 = (undefined8 *)func_0x00f78acc(uVar31,lVar27);
                                pcVar37 = (code *)*puVar23;
                              }
                              pdVar19 = (dword *)(*pcVar37)(plVar32,pdVar25,pdVar26,puVar23);
                            }
                          }
                          else {
                            if (bVar14) goto code_r0x01e71bbc;
code_r0x01e71aac:
                            pdVar19 = (dword *)(*pcVar37)(plVar20,plVar32,pdVar25,pdVar26,lVar27);
                          }
code_r0x01e71bd0:
                          lVar33 = lVar33 + 1;
                          if (lVar33 == lVar18) {
                            return pdVar19;
                          }
                        } while( true );
                      }
                    }
                  }
                  puVar40 = &Core_UI2_UIManager__SetScreenVisible;
                  auVar45 = func_0x00f78af4();
                  pdVar34 = pdVar26;
                  pdVar21 = pdVar25;
code_r0x02f88674:
                  pdVar26 = auVar45._0_8_;
                  *(dword **)(puVar10 + -0x30) = pdVar36;
                  *(dword **)(puVar10 + -0x28) = pdVar19;
                  *(dword **)(puVar10 + -0x20) = pdVar21;
                  *(dword **)(puVar10 + -0x18) = pdVar34;
                  *(undefined1 **)(puVar10 + -0x10) = puVar39;
                  *(undefined **)(puVar10 + -8) = puVar40;
                  pdVar19 = pdVar26;
                  if ((bRam0000000003ebc652 & 1) == 0) {
                    pdVar19 = (dword *)func_0x00f78a20(0x3d3ddc8);
                    bRam0000000003ebc652 = 1;
                  }
                  lVar33 = *(long *)(pdVar26 + 0x1c);
                  if (lVar33 != 0) {
                    uVar30 = auVar45._8_4_;
                    if (*(uint *)(lVar33 + 0x18) <= uVar30) {
                      pdVar19 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    if (*(long *)(*(long *)(lVar33 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28) == 0)
                    {
                      return pdVar19;
                    }
                    lVar33 = *(long *)(pdVar26 + 0x1c);
                    if (lVar33 != 0) {
                      if (*(uint *)(lVar33 + 0x18) <= uVar30) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      lVar33 = *(long *)(*(long *)(lVar33 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28)
                      ;
                      if ((lVar33 != 0) &&
                         (plVar32 = *(long **)(lVar33 + 0x28), plVar32 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        pdVar19 = (dword *)(**(code **)(*plVar32 + 0x178))
                                                     (plVar32,pdVar22,
                                                      *(undefined8 *)(*plVar32 + 0x180));
                        return pdVar19;
                      }
                    }
                  }
                  auVar42 = func_0x00f78af4();
                  uVar31 = auVar42._0_8_;
                  *(long *)(puVar10 + -0x50) = auVar45._8_8_;
                  *(dword **)(puVar10 + -0x48) = pdVar22;
                  *(undefined1 **)(puVar10 + -0x40) = puVar10 + -0x10;
                  *(undefined **)(puVar10 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
                  *(undefined8 *)(puVar10 + -0x68) = 0;
                  *(undefined8 *)(puVar10 + -0x70) = 0;
                  *(undefined8 *)(puVar10 + -0x58) = 0;
                  *(undefined8 *)(puVar10 + -0x60) = 0;
                  pdVar19 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar31,auVar42._8_8_,puVar10 + -0x70);
                  if ((int)pdVar19 != 0) {
                    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar31,*(undefined8 *)(puVar10 + -0x60),
                                    *(undefined8 *)(puVar10 + -0x58));
                    *(undefined8 *)(puVar10 + -0x88) = *(undefined8 *)(puVar10 + -0x68);
                    *(undefined8 *)(puVar10 + -0x90) = *(undefined8 *)(puVar10 + -0x70);
                    *(undefined8 *)(puVar10 + -0x78) = *(undefined8 *)(puVar10 + -0x58);
                    *(undefined8 *)(puVar10 + -0x80) = *(undefined8 *)(puVar10 + -0x60);
                    pdVar19 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar31,puVar10 + -0x90,1);
                  }
                  return pdVar19;
                }
                puVar39 = *(undefined1 **)(puVar11 + -0x60);
                puVar40 = *(undefined **)(puVar11 + -0x58);
              }
              else {
                uVar17 = 0;
                puVar40 = &UNK_01470820;
                pdVar25 = pdVar34;
                pdVar22 = pdVar36;
                pdVar26 = pdVar19;
              }
              *(undefined8 *)(puVar11 + -0x90) = uVar31;
              *(undefined8 *)(puVar11 + -0x88) = 0x3eb4000;
              *(dword **)(puVar11 + -0x80) = pdVar36;
              *(dword **)(puVar11 + -0x78) = pdVar19;
              *(dword **)(puVar11 + -0x70) = pdVar21;
              *(dword **)(puVar11 + -0x68) = pdVar34;
              *(undefined1 **)(puVar11 + -0x60) = puVar39;
              *(undefined **)(puVar11 + -0x58) = puVar40;
              if ((bRam0000000003ebc64a & 1) == 0) {
                func_0x00f78a20(0x3d3ddc8);
                func_0x00f78a20(0x3d3ddd0);
                bRam0000000003ebc64a = 1;
              }
              *(undefined8 *)(puVar11 + -0x130) = unaff_x26;
              *(undefined8 *)(puVar11 + -0x128) = unaff_x25;
              *(undefined8 *)(puVar11 + -0x120) = 0x3ebc000;
              *(dword **)(puVar11 + -0x118) = pdVar25;
              *(dword **)(puVar11 + -0x110) = pdVar26;
              *(undefined8 *)(puVar11 + -0x108) = uVar17;
              *(long *)(puVar11 + -0x100) = lVar33;
              *(dword **)(puVar11 + -0xf8) = pdVar22;
              *(undefined1 **)(puVar11 + -0xf0) = puVar11 + -0x60;
              *(undefined **)(puVar11 + -0xe8) = &UNK_02f87f9c;
              if ((bRam0000000003ebc64e & 1) == 0) {
                func_0x00f78a20(0x3d3ddf0);
                func_0x00f78a20(0x3d3ddf8);
                bRam0000000003ebc64e = 1;
              }
              lVar18 = *(long *)(lVar33 + 0x78);
              if (lVar18 != 0) {
                iVar16 = *(int *)(lVar18 + 0x18);
                if (iVar16 < 1) {
                  return (dword *)0x0;
                }
                iVar15 = 1;
                pdVar19 = (dword *)((long)&MACH_HEADER.magic + 1);
                do {
                  if (*(uint *)(lVar18 + 0x18) <= iVar15 - 1U) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + (long)(int)(iVar15 - 1U) * 0x20 +
                                    0x20);
                  if (lVar18 == 0) break;
                  uVar24 = /*System.String$$Equals*/ func_0x029caa48(lVar18,pdVar25,5,0);
                  if ((uVar24 & 1) != 0) {
                    return pdVar19;
                  }
                  pdVar19 = (dword *)(ulong)(iVar15 < iVar16);
                  if (iVar16 == iVar15) {
                    return pdVar19;
                  }
                  lVar18 = *(long *)(lVar33 + 0x78);
                  iVar15 = iVar15 + 1;
                } while (lVar18 != 0);
              }
              func_0x00f78af4();
              return (dword *)0x0;
            }
          }
        }
      }
    }
    else {
      lVar33 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(pdVar19,uRam0000000003d41288);
      if ((lVar33 != 0) && (pdVar22 = *(dword **)(lVar33 + 0x10), pdVar22 != (dword *)0x0)) {
        uVar31 = 0;
        *(undefined8 *)(puVar11 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar11 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar11 + -0x40) = *(undefined8 *)(puVar11 + -0x40);
        *(undefined8 *)(puVar11 + -0x38) = *(undefined8 *)(puVar11 + -0x38);
        *(undefined8 *)(puVar11 + -0x30) = *(undefined8 *)(puVar11 + -0x30);
        *(undefined8 *)(puVar11 + -0x28) = *(undefined8 *)(puVar11 + -0x28);
        *(undefined8 *)(puVar11 + -0x20) = *(undefined8 *)(puVar11 + -0x20);
        *(undefined8 *)(puVar11 + -0x18) = *(undefined8 *)(puVar11 + -0x18);
        *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
        *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
        *(dword **)(puVar11 + -0x58) = pdVar22;
        lVar33 = *(long *)(pdVar22 + 0x1a);
        if (lVar33 == 0) {
          puVar39 = puVar11 + -0x58;
          lVar18 = 1;
        }
        else {
          lVar18 = *(long *)(lVar33 + 0x18);
          if (lVar18 == 0) {
            return pdVar22;
          }
          puVar39 = (undefined1 *)(lVar33 + 0x20);
        }
        lVar33 = 0;
        do {
          lVar27 = *(long *)(puVar39 + lVar33 * 8);
          pcVar37 = *(code **)(lVar27 + 0x10);
          plVar32 = *(long **)(lVar27 + 0x20);
          lVar27 = *(long *)(lVar27 + 0x28);
          if (*(short *)(lVar27 + 0x48) == -1) {
            func_0x00f78ad8(lVar27,uVar31);
          }
          iVar16 = func_0x00f78a4c(lVar27);
          if (iVar16 == 0) {
            if ((((plVar32 == (long *)0x0) || (*(short *)(lVar27 + 0x48) == -1)) ||
                ((*(byte *)(*plVar32 + 0x115) & 1) != 0)) || (*(long *)(pdVar22 + 6) == 0))
            goto code_r0x01565d7c;
            iVar16 = func_0x00f78a44(lVar27);
            iVar15 = func_0x00f78ec0(lVar27);
            if (iVar16 == 0) {
              uVar4 = *(ushort *)(lVar27 + 0x48);
              if (iVar15 == 0) {
                lVar27 = *plVar32 + (ulong)uVar4 * 0x10;
                auVar42 = (**(code **)(lVar27 + 0x138))(plVar32,*(undefined8 *)(lVar27 + 0x140));
                goto code_r0x01565d88;
              }
              lVar27 = func_0x00f78a48(lVar27);
              lVar28 = *plVar32;
              uVar24 = (ulong)*(ushort *)(lVar28 + 0x12a);
              if (uVar24 != 0) {
                piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar29 + -2) == lVar27) {
                    puVar23 = (undefined8 *)
                              (lVar28 + (long)(int)(*piVar29 + (uint)uVar4) * 0x10 + 0x138);
                    goto code_r0x01565e4c;
                  }
                  piVar29 = piVar29 + 4;
                  uVar24 = uVar24 - 1;
                } while (uVar24 != 0);
              }
              puVar23 = (undefined8 *)func_0x00fac1f0(plVar32,lVar27,(ulong)uVar4);
code_r0x01565e4c:
              pcVar37 = (code *)*puVar23;
              puVar23 = (undefined8 *)puVar23[1];
            }
            else {
              if (iVar15 == 0) {
                uVar31 = *(undefined8 *)
                          (*plVar32 + (ulong)*(ushort *)(lVar27 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar28 = *plVar32;
                uVar24 = (ulong)*(ushort *)(lVar28 + 0x12a);
                if (uVar24 != 0) {
                  piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar29 + -2) == *(long *)(lVar27 + 0x18)) {
                      lVar28 = lVar28 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar27 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01565e24;
                    }
                    piVar29 = piVar29 + 4;
                    uVar24 = uVar24 - 1;
                  } while (uVar24 != 0);
                }
                lVar28 = func_0x00fac1f0(plVar32);
code_r0x01565e24:
                uVar31 = *(undefined8 *)(lVar28 + 8);
              }
              puVar23 = (undefined8 *)func_0x00f78acc(uVar31,lVar27);
              pcVar37 = (code *)*puVar23;
            }
            auVar42 = (*pcVar37)(plVar32,puVar23);
          }
          else if (*(char *)(lVar27 + 0x4a) == '\0') {
            auVar42 = (*pcVar37)(lVar27);
          }
          else {
code_r0x01565d7c:
            auVar42 = (*pcVar37)(plVar32,lVar27);
          }
code_r0x01565d88:
          uVar31 = auVar42._8_8_;
          lVar33 = lVar33 + 1;
          if (lVar33 == lVar18) {
            return auVar42._0_8_;
          }
        } while( true );
      }
    }
  }
  puVar40 = &Atlas_UI_Screens_RewardScreen__PlayRewardTweenUp;
  auVar41 = func_0x00f78af4();
code_r0x014e3c84:
  lVar33 = auVar41._8_8_;
  plVar32 = auVar41._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(dword **)((long)register0x00000008 + -0x30) = pdVar36;
  *(dword **)((long)register0x00000008 + -0x28) = pdVar34;
  *(dword **)((long)register0x00000008 + -0x20) = pdVar21;
  *(dword **)((long)register0x00000008 + -0x18) = pdVar19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar39;
  *(undefined **)((long)register0x00000008 + -8) = puVar40;
  if ((bRam0000000003eb4bf1 & 1) == 0) {
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e850);
    func_0x00f78a20(0x3d5e888);
    bRam0000000003eb4bf1 = 1;
  }
  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  if (lVar33 == 0) {
    lVar33 = func_0x00f78af4();
    *(dword **)((long)register0x00000008 + -0x70) = pdVar36;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(long **)((long)register0x00000008 + -0x58) = plVar32;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &Atlas_UI_Screens_RewardScreen___ctor;
    if ((bRam0000000003eb4bf2 & 1) == 0) {
      func_0x00f78a20(0x3d2c8c8);
      bRam0000000003eb4bf2 = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x50) =
         *(undefined8 *)((long)register0x00000008 + -0x50);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)((long)register0x00000008 + -0x48);
    if (lVar33 == 0) {
      auVar42 = func_0x00f78af4();
      puVar23 = auVar42._8_8_;
      pdVar19 = auVar42._0_8_;
      uVar17 = puVar23[1];
      uVar31 = *puVar23;
      *(undefined8 *)(pdVar19 + 4) = puVar23[2];
      *(undefined8 *)(pdVar19 + 2) = uVar17;
      *(undefined8 *)pdVar19 = uVar31;
      return pdVar19;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar19 = (dword *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(lRam0000000003d2c8c8 + 0x18) + 0xc0) + 0x38)
                       )();
    return pdVar19;
  }
  /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar33,0);
  /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar31 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(lVar33,0);
  pdVar19 = (dword *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar31,0x1b,uRam0000000003d5e7a8);
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3d5e000;
  *(undefined8 *)((long)register0x00000008 + -0x68) = 0x3d5e000;
  *(long *)((long)register0x00000008 + -0x60) = lVar33;
  *(long **)((long)register0x00000008 + -0x58) = plVar32;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x48) = &UNK_014e3d38;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar32,uRam0000000003d5e850);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((pdVar19 != (dword *)0x0) && (*(char *)(pdVar19 + 0x3a) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar16 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar16 != 0) {
      lVar33 = func_0x00f78adc(plVar32,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar33,0,0);
      if ((uVar24 & 1) == 0) {
        if (plVar32 == (long *)0x0) goto code_r0x018eef34;
        uVar31 = (**(code **)(*plVar32 + 0x168))(plVar32,*(undefined8 *)(*plVar32 + 0x170));
      }
      else {
        if (lVar33 == 0) {
code_r0x018eef34:
          auVar42 = func_0x00f78af4();
          pdVar21 = auVar42._0_8_;
          *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3d5e000;
          *(long *)((long)register0x00000008 + -0x98) = lVar33;
          *(long **)((long)register0x00000008 + -0x90) = plVar32;
          *(dword **)((long)register0x00000008 + -0x88) = pdVar19;
          *(undefined1 **)((long)register0x00000008 + -0x80) =
               (undefined1 *)((long)register0x00000008 + -0x50);
          *(undefined **)((long)register0x00000008 + -0x78) =
               &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((pdVar21 != (dword *)0x0) && (*(char *)(pdVar21 + 0x3a) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar3 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(pdVar21,auVar42._8_8_,cVar3 != '\0',0);
          }
          return pdVar21;
        }
        uVar31 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar33,0);
      }
      *(undefined8 *)(pdVar19 + 0x32) = uVar31;
    }
    *(long **)(pdVar19 + 0x12) = plVar32;
  }
  return pdVar19;
}



// ============================================================
// RVA: 0x14e35a8 | Atlas.UI.Screens.RewardScreen.EndOfNewItem
// ============================================================

/* WARNING: Possible PIC construction at 0x014e3d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b38d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b3980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x015b39e4) */
/* WARNING: Removing unreachable block (ram,0x015b39ec) */
/* WARNING: Removing unreachable block (ram,0x015b39f8) */
/* WARNING: Removing unreachable block (ram,0x015b39c4) */
/* WARNING: Removing unreachable block (ram,0x015b39cc) */
/* WARNING: Removing unreachable block (ram,0x015b39d8) */
/* WARNING: Removing unreachable block (ram,0x015b39a4) */
/* WARNING: Removing unreachable block (ram,0x015b39ac) */
/* WARNING: Removing unreachable block (ram,0x015b39b8) */
/* WARNING: Removing unreachable block (ram,0x015b3984) */
/* WARNING: Removing unreachable block (ram,0x015b398c) */
/* WARNING: Removing unreachable block (ram,0x015b3998) */
/* WARNING: Removing unreachable block (ram,0x015b38dc) */
/* WARNING: Removing unreachable block (ram,0x015b3900) */
/* WARNING: Removing unreachable block (ram,0x015b3908) */
/* WARNING: Removing unreachable block (ram,0x015b3910) */
/* WARNING: Removing unreachable block (ram,0x015b3914) */
/* WARNING: Removing unreachable block (ram,0x015b3918) */
/* WARNING: Removing unreachable block (ram,0x03237f38) */
/* WARNING: Removing unreachable block (ram,0x0323946c) */
/* WARNING: Removing unreachable block (ram,0x0323949c) */
/* WARNING: Removing unreachable block (ram,0x032394b0) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */
/* WARNING: Removing unreachable block (ram,0x01470820) */
/* WARNING: Removing unreachable block (ram,0x01470828) */
/* WARNING: Removing unreachable block (ram,0x01470848) */
/* WARNING: Removing unreachable block (ram,0x01470850) */
/* WARNING: Removing unreachable block (ram,0x01470858) */
/* WARNING: Removing unreachable block (ram,0x01470874) */
/* WARNING: Removing unreachable block (ram,0x01470884) */
/* WARNING: Removing unreachable block (ram,0x014e3d38) */
/* WARNING: Removing unreachable block (ram,0x018ef000) */
/* WARNING: Removing unreachable block (ram,0x018ef024) */
/* WARNING: Removing unreachable block (ram,0x018ef044) */
/* WARNING: Removing unreachable block (ram,0x018ef048) */
/* WARNING: Removing unreachable block (ram,0x018ef050) */
/* WARNING: Removing unreachable block (ram,0x018ef064) */
/* WARNING: Removing unreachable block (ram,0x018ef06c) */
/* WARNING: Removing unreachable block (ram,0x018ef074) */
/* WARNING: Removing unreachable block (ram,0x018ef090) */
/* WARNING: Removing unreachable block (ram,0x018ef098) */
/* WARNING: Removing unreachable block (ram,0x018ef09c) */
/* WARNING: Removing unreachable block (ram,0x018ef0b0) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_UI_Screens_RewardScreen__EndOfNewItem
                  (undefined1 param_1 [16],float param_2,float param_3,dword *param_4)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  dword **ppdVar7;
  dword **ppdVar8;
  dword **ppdVar9;
  undefined8 *puVar10;
  dword **ppdVar11;
  undefined1 *puVar12;
  dword **ppdVar13;
  bool bVar14;
  int iVar15;
  long lVar17;
  dword *pdVar18;
  undefined8 uVar19;
  int iVar16;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long *extraout_x1;
  dword *pdVar23;
  long *plVar24;
  dword *pdVar25;
  dword *pdVar26;
  long lVar27;
  ulong uVar28;
  int *piVar29;
  uint uVar30;
  dword *pdVar31;
  dword *unaff_x21;
  undefined8 uVar32;
  dword *unaff_x22;
  code *pcVar33;
  undefined8 unaff_x23;
  long lVar34;
  undefined8 unaff_x24;
  dword **ppdVar35;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar36;
  undefined8 unaff_x28;
  undefined8 **ppuVar37;
  dword **ppdVar38;
  undefined *puVar39;
  float fVar40;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  long *aplStack_158 [5];
  long *plStack_120;
  dword *pdStack_118;
  dword *pdStack_110;
  undefined *puStack_108;
  dword *pdStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  dword *pdStack_b0;
  dword *pdStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  dword *pdStack_80;
  dword *pdStack_78;
  dword *pdStack_70;
  dword *pdStack_68;
  dword *pdStack_58;
  
  if ((bRam0000000003eb4bed & 1) == 0) {
    func_0x00f78a20(0x3d41290);
    bRam0000000003eb4bed = 1;
  }
  lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41290);
  if ((lVar17 == 0) || (*(long *)(lVar17 + 0x48) == 0)) {
    lVar17 = func_0x00f78af4();
    pdStack_58 = (dword *)0x3d41290;
    if ((bRam0000000003eb4bea & 1) == 0) {
      func_0x00f78a20(0x3d1fc20);
      func_0x00f78a20(0x3d20278);
      func_0x00f78a20(0x3d20650);
      func_0x00f78a20(0x3d2dc40);
      func_0x00f78a20(0x3d21ba8);
      func_0x00f78a20(0x3d22c80);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d25b48);
      bRam0000000003eb4bea = 1;
    }
    pdVar31 = *(dword **)(lVar17 + 0xd8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    pdVar18 = (dword *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(pdVar31,0);
    if ((int)pdVar18 == 0) {
      return pdVar18;
    }
    plVar24 = *(long **)(lVar17 + 0x70);
    if (plVar24 != (long *)0x0) {
      lVar34 = *plVar24;
      bVar2 = *(byte *)(lVar34 + 300);
      if ((bVar2 < *(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300)) ||
         (*(long *)(*(long *)(lVar34 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300) * 8 + -8)
          != /*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80)) {
        if ((bVar2 < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
           (*(long *)(*(long *)(lVar34 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 +
                     -8) != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
          if ((bVar2 < *(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300)) ||
             (*(long *)(*(long *)(lVar34 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8 +
                       -8) != /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) {
            if ((bVar2 < *(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300)) ||
               (*(long *)(*(long *)(lVar34 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) * 8
                         + -8) != /*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20)) {
              if ((bVar2 < *(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300)) ||
                 (*(long *)(*(long *)(lVar34 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8)) {
                pdVar31 = (dword *)((long)&MACH_HEADER.cputype + 1);
                if (*(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300) <= bVar2) {
                  uVar30 = 5;
                  if (*(long *)(*(long *)(lVar34 + 200) +
                                (ulong)*(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300) * 8 + -8) ==
                      /*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278) {
                    uVar30 = 6;
                  }
                  pdVar31 = (dword *)(ulong)uVar30;
                }
              }
              else {
                pdVar31 = (dword *)((long)&MACH_HEADER.magic + 2);
              }
            }
            else {
              pdVar31 = (dword *)((long)&MACH_HEADER.cputype + 1);
            }
          }
          else {
            pdVar31 = (dword *)((long)&MACH_HEADER.magic + 3);
          }
        }
        else {
          pdVar31 = (dword *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else {
        pdVar31 = (dword *)0x0;
      }
      lVar20 = *(long *)(lVar17 + 0xd8);
      lVar34 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(plVar24,0);
      lVar17 = 0;
      if (lVar20 != 0) {
        lVar17 = *(long *)(lVar34 + 8);
        ppdVar13 = (dword **)&stack0xffffffffffffffa0;
        if ((bRam0000000003eb526a & 1) == 0) {
          func_0x00f78a20(0x3d21b88,pdVar31,lVar17,0);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb526a = 1;
        }
        Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__HideIPPlanes(lVar20);
        switch(pdVar31) {
        case (dword *)0x0:
          puVar21 = (undefined8 *)(lVar20 + 0xb8);
          break;
        case (dword *)0x1:
          puVar21 = (undefined8 *)(lVar20 + 0xc0);
          break;
        case (dword *)0x2:
          puVar21 = (undefined8 *)(lVar20 + 0xd0);
          break;
        case (dword *)0x3:
        case (dword *)0x4:
          puVar21 = (undefined8 *)(lVar20 + 0xd8);
          break;
        case (dword *)0x5:
          puVar21 = (undefined8 *)(lVar20 + 200);
          break;
        default:
          pdVar18 = (dword *)0x0;
          goto code_r0x015b3894;
        }
        pdVar18 = (dword *)*puVar21;
code_r0x015b3894:
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        pdVar25 = (dword *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(pdVar18,0);
        if ((int)pdVar25 == 0) {
          return pdVar25;
        }
        if ((pdVar18 == (dword *)0x0) || (lVar34 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(pdVar18,0), lVar34 == 0)) {
          lVar20 = func_0x00f78af4();
          ppdVar13 = &pdStack_80;
          pdStack_68 = (dword *)Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__HideIPPlanes;
          ppdVar35 = &pdStack_70;
          pdStack_80 = pdVar18;
          pdStack_78 = (dword *)lVar17;
          pdStack_70 = (dword *)&stack0xffffffffffffffc0;
          if ((*(long *)(lVar20 + 0xb8) == 0) ||
             (lVar34 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar20 + 0xb8),0), lVar34 == 0)) {
            pdVar25 = (dword *)func_0x00f78af4();
            pdStack_b0 = (dword *)0x3d23990;
            pdStack_a8 = pdVar31;
            uStack_a0 = pdVar18;
            puStack_98 = (undefined *)lVar20;
            if ((bRam0000000003eb517d & 1) == 0) {
              func_0x00f78a20(0x3d2e428,0);
              func_0x00f78a20(0x3d1c210);
              bRam0000000003eb517d = 1;
            }
            uVar22 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<FrontEndCameraPosition, CinemachineVirtualCamera>_TypeInfo*/ uRam0000000003d1c210);
            /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar22,uRam0000000003d2e428);
            *(undefined8 *)(pdVar25 + 0x10) = uVar22;
            if ((bRam0000000003ebf1b8 & 1) == 0) {
              func_0x00f78a20(0x3d23990,0);
              bRam0000000003ebf1b8 = 1;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            return pdVar25;
          }
          uVar22 = 0;
          puVar39 = (undefined *)0x15b3984;
        }
        else {
          uVar22 = 1;
          puVar39 = &UNK_015b38dc;
          lVar20 = lVar17;
          ppdVar35 = (dword **)&stack0xffffffffffffffc0;
        }
        *(undefined8 *)((long)ppdVar13 + -0x30) = 0x3d23990;
        *(dword **)((long)ppdVar13 + -0x28) = pdVar31;
        *(dword **)((long)ppdVar13 + -0x20) = pdVar18;
        *(long *)((long)ppdVar13 + -0x18) = lVar20;
        *(dword ***)((long)ppdVar13 + -0x10) = ppdVar35;
        *(undefined **)((long)ppdVar13 + -8) = puVar39;
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar31 = (dword *)(*pcRam0000000003ebf4c0)(lVar34,uVar22);
        return pdVar31;
      }
    }
    pdVar25 = (dword *)func_0x00f78af4();
    pdStack_68 = (dword *)&Atlas_UI_Screens_RewardScreen__AnimateReward;
    pdVar18 = pdVar25;
    pdStack_80 = pdVar31;
    pdStack_78 = (dword *)lVar17;
    pdStack_70 = (dword *)&stack0xffffffffffffffc0;
    if ((bRam0000000003eb4bf0 & 1) == 0) {
      func_0x00f78a20(0x3d1fc20);
      func_0x00f78a20(0x3d20278);
      func_0x00f78a20(0x3d20650);
      func_0x00f78a20(0x3d57868);
      func_0x00f78a20(0x3d21ba8);
      func_0x00f78a20(0x3d22c80);
      pdVar18 = (dword *)func_0x00f78a20(0x3d25b48);
      bRam0000000003eb4bf0 = 1;
    }
    pdVar31 = *(dword **)(pdVar25 + 0x1c);
    if (pdVar31 == (dword *)0x0) {
      return pdVar18;
    }
    lVar17 = *(long *)pdVar31;
    bVar2 = *(byte *)(lVar17 + 300);
    if ((bVar2 < *(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300)) ||
       (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300) * 8 + -8)
        != /*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80)) {
      if ((bVar2 < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
         (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8)
          != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
        pdVar26 = pdVar31;
        if (((bVar2 < *(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300)) ||
            (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8 +
                      -8) != /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) &&
           ((bVar2 < *(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) ||
            (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) * 8 +
                      -8) != /*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20)))) {
          if ((bVar2 < *(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300)) ||
             (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300) * 8 +
                       -8) != /*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8)) {
            if (bVar2 < *(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300)) {
              return pdVar18;
            }
            if (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300) * 8
                         + -8) != /*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278) {
              return pdVar18;
            }
            goto code_r0x014e3a04;
          }
          if ((*(long *)(pdVar25 + 0x28) == 0) ||
             (pdVar26 = (dword *)/*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(*(long *)(pdVar25 + 0x28),uRam0000000003d57868),
             pdVar26 == (dword *)0x0)) goto code_r0x014e3afc;
          Atlas_Gameplay_Kart_BaseVisualBehaviour__SetGliding(pdVar26,1,0);
          Atlas_Gameplay_Kart_GliderVisualBehaviour__SetTrailsEnabled(pdVar26,0,0);
        }
        pdVar31 = pdVar26;
        if (*(long *)(pdVar25 + 0x28) != 0) {
          uVar22 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(pdVar25 + 0x28),0);
          goto code_r0x014e3ae4;
        }
      }
      else if ((*(long *)(pdVar25 + 0x34) != 0) &&
              (lVar17 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator
                                  (*(long *)(pdVar25 + 0x34),0,0), lVar17 != 0)) {
        Atlas_Gameplay_Kart_KartFEAnimator__PlayRewardScreen(lVar17,0);
        if (*(long *)(pdVar25 + 0x34) != 0) {
          lVar17 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(pdVar25 + 0x34),0,0);
          uVar22 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(pdVar31,0);
          if (lVar17 != 0) {
            Atlas_Gameplay_Kart_KartFEAnimator__TriggerFEUnlockCharacter(lVar17,uVar22,0);
            goto code_r0x014e3a80;
          }
        }
      }
    }
    else {
code_r0x014e3a04:
      if ((*(long *)(pdVar25 + 0x34) != 0) &&
         (lVar17 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(pdVar25 + 0x34),0,0),
         lVar17 != 0)) {
        Atlas_Gameplay_Kart_KartFEAnimator__PlayRewardScreen(lVar17,0);
code_r0x014e3a80:
        if (*(long *)(pdVar25 + 0x34) != 0) {
          uVar22 = Atlas_FrontEnd_FrontEndScene__GetKartTransform(*(long *)(pdVar25 + 0x34),0,0);
code_r0x014e3ae4:
          auVar41._8_8_ = uVar22;
          auVar41._0_8_ = pdVar25;
          puVar5 = &stack0xffffffffffffffa0;
          unaff_x21 = (dword *)0x3d23990;
          param_4 = pdStack_78;
          pdVar31 = pdStack_80;
          ppdVar35 = (dword **)pdStack_70;
          pcVar33 = (code *)pdStack_68;
          goto code_r0x014e3c84;
        }
      }
    }
code_r0x014e3afc:
    pdVar26 = (dword *)func_0x00f78af4();
    puStack_98 = &Atlas_UI_Screens_RewardScreen__OnSkipTapped;
    pdVar18 = pdVar26;
    pdStack_b0 = pdVar31;
    pdStack_a8 = pdVar25;
    uStack_a0 = (dword *)&pdStack_70;
    if ((bRam0000000003eb4bec & 1) == 0) {
      pdVar18 = (dword *)func_0x00f78a20(0x3d79018);
      bRam0000000003eb4bec = 1;
    }
    if (pdVar26[0x13] != 2) {
      return pdVar18;
    }
    Atlas_UI_Screens_RewardScreen__EndOfNewItem(pdVar26);
    pdVar31 = /*STR('event:/UI/Front_End/GeneralButton3')*/ pdRam0000000003d79018;
    pdVar18 = /*STR('event:/UI/Front_End/GeneralButton3')*/ pdRam0000000003d79018;
    if ((bRam0000000003eb4db6 & 1) == 0) {
      func_0x00f78a20(0x3d2faf8,0);
      func_0x00f78a20(0x3d2fb00);
      pdVar18 = (dword *)func_0x00f78a20(0x3d25580);
      bRam0000000003eb4db6 = 1;
    }
    if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
      return pdVar18;
    }
    lVar17 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
    if (lVar17 != 0) {
      pdVar18 = (dword *)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar17,pdVar31,uRam0000000003d2faf8);
      if ((int)pdVar18 == 0) {
        return pdVar18;
      }
      if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
          (lVar17 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar17 != 0)) &&
         (pdVar31 = (dword *)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar17,pdVar31,uRam0000000003d2fb00),
         pdVar31 != (dword *)0x0)) {
        /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,pdVar31,0,0);
        return pdVar31;
      }
    }
    uVar22 = func_0x00f78af4();
    puVar6 = &stack0xffffffffffffff00;
    pdStack_e8 = (dword *)0x3eb4000;
    ppuStack_e0 = (undefined8 **)0x3d25580;
    puStack_c8 = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
    ppuVar37 = &stack0xffffffffffffff30;
    puStack_d0 = &uStack_a0;
    if ((bRam0000000003eb4d8b & 1) == 0) {
      func_0x00f78a20(0x3d24188);
      func_0x00f78a20(0x3d5e780);
      func_0x00f78a20(0x3d5e868);
      bRam0000000003eb4d8b = 1;
    }
    plVar24 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar22,0);
    auVar41._8_8_ = plVar24;
    auVar41._0_8_ = uVar22;
    if ((plVar24 != (long *)0x0) && (*plVar24 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
      uVar32 = func_0x00f78e5c(plVar24);
      puStack_108 = &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
      plStack_120 = plVar24;
      pdStack_118 = (dword *)uVar22;
      pdStack_110 = (dword *)ppuVar37;
      lVar17 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
      if (lVar17 == 0) {
        func_0x00f78a24(0x3d23938,0,0);
        uVar32 = func_0x00f78aec();
        uVar22 = func_0x00f78a24(0x3d7b500);
        /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar32,uVar22,0);
      }
      else {
        if (pcRam0000000003ec01d0 == (code *)0x0) {
          pcRam0000000003ec01d0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                      );
        }
        uVar28 = (*pcRam0000000003ec01d0)(uVar32);
        if ((uVar28 & 1) != 0) {
          if (pcRam0000000003ec01e0 == (code *)0x0) {
            pcRam0000000003ec01e0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pdVar31 = (dword *)(*pcRam0000000003ec01e0)(uVar32,lVar17);
          return pdVar31;
        }
        func_0x00f78a24(0x3d1fce8);
        uVar32 = func_0x00f78aec();
        uVar22 = func_0x00f78a24(0x3d6af80);
        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar32,uVar22,0);
      }
      uVar22 = func_0x00f78a24(0x3d5a8a8);
      auVar41 = func_0x00f78ac0(uVar32,uVar22);
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pdVar31 = (dword *)(*pcRam0000000003ec01e0)(auVar41._0_8_,auVar41._8_8_);
      return pdVar31;
    }
    uVar22 = 0x3d5e780;
    uVar32 = 0x3d5e868;
    fVar40 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    uVar19 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar40 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                             plVar24,4,0);
    pdVar31 = (dword *)/*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar19,uRam0000000003d5e780);
    puVar39 = &UNK_01513b44;
    uVar19 = uRam0000000003d5e868;
  }
  else {
    /*Atlas.Save.SaveManager$$ScheduleSave*/ func_0x014eb668(*(long *)(lVar17 + 0x48),0);
    puVar5 = &stack0xffffffffffffffc0;
    pdVar31 = (dword *)0x3eb4000;
    unaff_x23 = 0x3d41288;
    if ((bRam0000000003eb4bee & 1) == 0) {
      func_0x00f78a20(0x3d41288);
      func_0x00f78a20(0x3d41290);
      bRam0000000003eb4bee = 1;
    }
    lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d41288);
    if (lVar17 != 0) {
      if (*(long *)(lVar17 + 0x10) == 0) {
        lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41290);
        if (lVar17 != 0) {
          pdVar31 = *(dword **)(lVar17 + 0x10);
          lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d41288);
          if (lVar17 != 0) {
            unaff_x21 = *(dword **)(lVar17 + 0x18);
            lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d41288);
            if (lVar17 != 0) {
              unaff_x22 = (dword *)(ulong)*(uint *)(lVar17 + 0x20);
              lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d41288);
              if ((lVar17 != 0) && (pdVar31 != (dword *)0x0)) {
                pdVar18 = *(dword **)(lVar17 + 0x28);
                uVar22 = 0;
                pdVar25 = unaff_x22;
                pdVar26 = pdVar18;
                if ((bRam0000000003eb486f & 1) == 0) {
                  func_0x00f78a20(0x3d53980);
                  func_0x00f78a20(0x3d2fb90);
                  func_0x00f78a20(0x3d6d050);
                  bRam0000000003eb486f = 1;
                }
                lVar17 = *(long *)(pdVar31 + 4);
                if (lVar17 != 0) {
                  uVar22 = 0;
                  pdStack_58 = (dword *)&UNK_01470820;
                  pdVar23 = unaff_x21;
                  pdVar26 = pdVar18;
code_r0x02f87f38:
                  pdStack_80 = unaff_x22;
                  pdStack_78 = pdVar18;
                  pdStack_70 = pdVar31;
                  pdStack_68 = unaff_x21;
                  if ((bRam0000000003ebc64a & 1) == 0) {
                    func_0x00f78a20(0x3d3ddc8);
                    func_0x00f78a20(0x3d3ddd0);
                    bRam0000000003ebc64a = 1;
                  }
                  plStack_120 = (long *)0x3ebc000;
                  pdStack_e8 = (dword *)&UNK_02f87f9c;
                  pdStack_118 = pdVar23;
                  pdStack_110 = pdVar26;
                  puStack_108 = (undefined *)uVar22;
                  if ((bRam0000000003ebc64e & 1) == 0) {
                    func_0x00f78a20(0x3d3ddf0);
                    func_0x00f78a20(0x3d3ddf8);
                    bRam0000000003ebc64e = 1;
                  }
                  lVar34 = *(long *)(lVar17 + 0x78);
                  if (lVar34 != 0) {
                    iVar15 = *(int *)(lVar34 + 0x18);
                    if (iVar15 < 1) {
                      return (dword *)0x0;
                    }
                    iVar16 = 1;
                    pdVar31 = (dword *)((long)&MACH_HEADER.magic + 1);
                    do {
                      if (*(uint *)(lVar34 + 0x18) <= iVar16 - 1U) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      lVar34 = *(long *)(*(long *)(lVar34 + 0x10) + (long)(int)(iVar16 - 1U) * 0x20
                                        + 0x20);
                      if (lVar34 == 0) break;
                      uVar28 = /*System.String$$Equals*/ func_0x029caa48(lVar34,pdVar23,5,0);
                      if ((uVar28 & 1) != 0) {
                        return pdVar31;
                      }
                      pdVar31 = (dword *)(ulong)(iVar16 < iVar15);
                      if (iVar15 == iVar16) {
                        return pdVar31;
                      }
                      lVar34 = *(long *)(lVar17 + 0x78);
                      iVar16 = iVar16 + 1;
                    } while (lVar34 != 0);
                  }
                  func_0x00f78af4();
                  return (dword *)0x0;
                }
                auVar41 = func_0x00f78af4();
                pdVar23 = auVar41._8_8_;
                pdStack_70 = (dword *)&stack0xffffffffffffffa0;
                pdStack_58 = (dword *)&Atlas_UI_AtlasUIManager__ShowScreen;
                lVar17 = *(long *)(auVar41._0_8_ + 0x10);
                if (lVar17 != 0) {
                  pdStack_58 = (dword *)&Atlas_UI_AtlasUIManager__ShowScreen;
                  goto code_r0x02f87f38;
                }
                auVar41 = func_0x00f78af4();
                ppdVar35 = &pdStack_70;
                pdStack_68 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
                lVar17 = *(long *)(auVar41._0_8_ + 0x10);
                if (lVar17 != 0) {
                  pdVar25 = (dword *)0x0;
                  pdStack_68 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
                  pdStack_80 = pdVar31;
                  pdStack_78 = unaff_x21;
                  pdStack_70 = (dword *)&stack0xffffffffffffffa0;
                  if ((bRam0000000003ebc64b & 1) == 0) {
                    pdStack_70 = (dword *)&stack0xffffffffffffffa0;
                    func_0x00f78a20(0x3d3ddc8);
                    func_0x00f78a20(0x3d3ddd0);
                    bRam0000000003ebc64b = 1;
                  }
                  lVar34 = *(long *)(lVar17 + 0x70);
                  if (lVar34 != 0) {
                    lVar20 = lVar34;
                    if (*(uint *)(lVar34 + 0x18) <= auVar41._8_4_) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      lVar20 = *(long *)(lVar17 + 0x70);
                    }
                    if (lVar20 != 0) {
                      lVar34 = *(long *)(lVar34 + 0x10) + (long)(int)auVar41._8_4_ * 0x28;
                      puStack_c8 = *(undefined **)(lVar34 + 0x28);
                      puStack_d0 = *(undefined8 **)(lVar34 + 0x20);
                      pdStack_b0 = (dword *)0x0;
                      pdStack_a8 = (dword *)0x0;
                      uStack_a0 = (dword *)CONCAT26(*(undefined2 *)(lVar34 + 0x46),
                                                    CONCAT42(*(undefined4 *)(lVar34 + 0x42),1));
                      /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar20,auVar41._8_8_,&stack0xffffffffffffff40,
                                      uRam0000000003d3ddd0);
                      pdVar31 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar17,auVar41._8_8_);
                      return pdVar31;
                    }
                  }
                  auVar41 = func_0x00f78af4();
                  pdVar23 = auVar41._8_8_;
                  ppdVar8 = &stack0xfffffffffffffef0;
                  pdStack_e8 = (dword *)&Core_UI2_UIManager__GetCurrentScreenID;
                  puVar36 = &stack0xffffffffffffff10;
                  pdStack_110 = unaff_x22;
                  puStack_108 = (undefined *)lVar34;
                  if ((bRam0000000003ebc64c & 1) == 0) {
                    func_0x00f78a20(0x3d3ddc8);
                    bRam0000000003ebc64c = 1;
                  }
                  lVar17 = *(long *)(auVar41._0_8_ + 0x70);
                  if (lVar17 != 0) {
                    if (*(uint *)(lVar17 + 0x18) <= auVar41._8_4_) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)auVar41._8_4_ * 0x28 +
                                      0x28);
                    if (lVar17 == 0) {
                      pdVar31 = (dword *)0x0;
                    }
                    else {
                      pdVar31 = *(dword **)(lVar17 + 0x40);
                    }
                    return pdVar31;
                  }
                  puVar39 = &Core_UI2_UIScreen__ForceExit;
                  unaff_x21 = (dword *)func_0x00f78af4();
                  pdVar31 = (dword *)0x0;
                  pdVar18 = (dword *)0x3ebc000;
                  goto code_r0x02f882d8;
                }
                auVar41 = func_0x00f78af4();
                pdVar23 = auVar41._8_8_;
                ppdVar38 = &pdStack_80;
                pdStack_80 = (dword *)&pdStack_70;
                pdStack_78 = (dword *)&Atlas_UI_AtlasUIManager__ClearLayer;
                lVar17 = *(long *)(auVar41._0_8_ + 0x10);
                auVar42._8_8_ = pdVar18;
                auVar42._0_8_ = lVar17;
                if (lVar17 != 0) {
                  pdVar25 = (dword *)0x0;
                  ppdVar7 = &pdStack_70;
                  puVar39 = &Atlas_UI_AtlasUIManager__ClearLayer;
                  pdVar18 = pdVar31;
                  goto code_r0x02f877a8;
                }
                auVar41 = func_0x00f78af4();
                lVar17 = *(long *)(auVar41._0_8_ + 0x10);
                auVar42._8_8_ = auVar41._8_8_;
                auVar42._0_8_ = lVar17;
                if (lVar17 != 0) {
                  ppdVar9 = &pdStack_80;
                  puVar39 = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
                  pdVar23 = pdVar25;
                  while( true ) {
                    ppdVar7 = (dword **)((long)ppdVar9 + -0x30);
                    *(dword **)((long)ppdVar9 + -0x30) = unaff_x22;
                    *(dword **)((long)ppdVar9 + -0x28) = pdVar18;
                    *(dword **)((long)ppdVar9 + -0x20) = pdVar31;
                    *(dword **)((long)ppdVar9 + -0x18) = unaff_x21;
                    *(dword ***)((long)ppdVar9 + -0x10) = ppdVar38;
                    *(undefined **)((long)ppdVar9 + -8) = puVar39;
                    ppdVar35 = (dword **)((long)ppdVar9 + -0x10);
                    puVar39 = &UNK_02f883d8;
                    pdVar25 = pdVar23;
                    unaff_x21 = pdVar26;
                    pdVar18 = pdVar23;
                    unaff_x22 = auVar42._0_8_;
code_r0x02f877a8:
                    pdVar31 = auVar42._0_8_;
                    ppdVar8 = (dword **)((long)ppdVar7 + -0x60);
                    *(dword **)((long)ppdVar7 + -0x30) = unaff_x22;
                    *(long *)((long)ppdVar7 + -0x28) = auVar42._8_8_;
                    *(dword **)((long)ppdVar7 + -0x20) = pdVar18;
                    *(dword **)((long)ppdVar7 + -0x18) = unaff_x21;
                    *(dword ***)((long)ppdVar7 + -0x10) = ppdVar35;
                    *(undefined **)((long)ppdVar7 + -8) = puVar39;
                    puVar36 = (undefined1 *)((long)ppdVar7 + -0x10);
                    pdVar18 = pdVar31;
                    if ((bRam0000000003ebc64d & 1) == 0) {
                      func_0x00f78a20(0x3d3ddc8);
                      pdVar18 = (dword *)func_0x00f78a20(0x3d3ddd0);
                      bRam0000000003ebc64d = 1;
                    }
                    uVar30 = (uint)pdVar23;
                    if (((int)uVar30 < 0) || ((int)*(long *)(pdVar31 + 0x14) <= (int)uVar30)) {
                      return pdVar18;
                    }
                    lVar17 = *(long *)(pdVar31 + 0x1c);
                    if (lVar17 == 0) break;
                    if (*(uint *)(lVar17 + 0x18) <= uVar30) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar17 = *(long *)(lVar17 + 0x10) + ((ulong)pdVar23 & 0xffffffff) * 0x28;
                    unaff_x22 = *(dword **)(lVar17 + 0x20);
                    unaff_x21 = *(dword **)(lVar17 + 0x28);
                    *(undefined4 *)((long)ppdVar7 + -0x60) = *(undefined4 *)(lVar17 + 0x42);
                    *(undefined2 *)((long)ppdVar7 + -0x5c) = *(undefined2 *)(lVar17 + 0x46);
                    if (unaff_x21 == (dword *)0x0) {
                      lVar17 = *(long *)(pdVar31 + 0x1c);
                      if (lVar17 != 0) {
                        *(dword **)((long)ppdVar7 + -0x58) = unaff_x22;
                        *(undefined8 *)((long)ppdVar7 + -0x50) = 0;
                        *(undefined8 *)((long)ppdVar7 + -0x48) = 0;
                        *(undefined8 *)((long)ppdVar7 + -0x40) = 0;
                        *(undefined2 *)((long)ppdVar7 + -0x38) = 0;
                        *(undefined4 *)((long)ppdVar7 + -0x36) =
                             *(undefined4 *)((long)ppdVar7 + -0x60);
                        *(undefined2 *)((long)ppdVar7 + -0x32) =
                             *(undefined2 *)((long)ppdVar7 + -0x5c);
                        pdVar31 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar17,pdVar23,
                                                           (undefined1 *)((long)ppdVar7 + -0x58),
                                                           uRam0000000003d3ddd0);
                        return pdVar31;
                      }
                      break;
                    }
                    puVar39 = &UNK_02f87848;
                    pdVar18 = unaff_x21;
code_r0x02f882d8:
                    *(dword **)((long)ppdVar8 + -0x20) = pdVar31;
                    *(dword **)((long)ppdVar8 + -0x18) = pdVar23;
                    *(undefined1 **)((long)ppdVar8 + -0x10) = puVar36;
                    *(undefined **)((long)ppdVar8 + -8) = puVar39;
                    (**(code **)(*(long *)unaff_x21 + 0x218))
                              (unaff_x21,*(undefined8 *)(*(long *)unaff_x21 + 0x220));
                    if (*(long *)(unaff_x21 + 10) != 0) {
                      /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(unaff_x21 + 10),0);
                      unaff_x21[0x13] = 4;
                      /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(unaff_x21,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      pdVar31 = (dword *)(**(code **)(*(long *)unaff_x21 + 0x228))
                                                   (unaff_x21,
                                                    *(undefined8 *)(*(long *)unaff_x21 + 0x230));
                      return pdVar31;
                    }
                    func_0x00f78af4();
                    ppdVar9 = (dword **)((long)ppdVar8 + -0x40);
                    *(dword **)((long)ppdVar8 + -0x40) = pdVar31;
                    *(dword **)((long)ppdVar8 + -0x38) = unaff_x21;
                    *(undefined1 **)((long)ppdVar8 + -0x30) = (undefined1 *)((long)ppdVar8 + -0x10);
                    *(undefined **)((long)ppdVar8 + -0x28) =
                         &Core_UI2_UIManager__ReturnScreenWithBehaviour;
                    ppdVar38 = (dword **)((long)ppdVar8 + -0x30);
                    if (extraout_x1 != (long *)0x0) {
                      lVar17 = extraout_x1[5];
                      /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
                      uVar22 = (**(code **)(*extraout_x1 + 0x238))
                                         (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
                      extraout_x1[5] = 0;
                      extraout_x1[6] = 0;
                      extraout_x1[9] = _UNK_037235c0;
                      extraout_x1[7] = 0;
                      extraout_x1[8] = 0;
                      /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar22,lVar17);
                      pdVar31 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                                   (extraout_x1,
                                                    *(undefined8 *)(*extraout_x1 + 0x250));
                      extraout_x1[0xb] = 0;
                      return pdVar31;
                    }
                    puVar39 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
                    auVar42 = func_0x00f78af4();
                    pdVar23 = pdVar25;
                  }
                  lVar17 = func_0x00f78af4();
                  *(undefined8 *)((long)ppdVar7 + -0xa0) = unaff_d9;
                  *(undefined8 *)((long)ppdVar7 + -0x98) = unaff_d8;
                  *(dword **)((long)ppdVar7 + -0x90) = unaff_x22;
                  *(undefined8 *)((long)ppdVar7 + -0x88) = 0;
                  *(dword **)((long)ppdVar7 + -0x80) = pdVar31;
                  *(dword **)((long)ppdVar7 + -0x78) = pdVar23;
                  *(undefined1 **)((long)ppdVar7 + -0x70) = puVar36;
                  *(undefined **)((long)ppdVar7 + -0x68) = &Core_UI2_UIManager__Update;
                  if ((bRam0000000003ebc647 & 1) == 0) {
                    func_0x00f78a20(0x3d255c0);
                    bRam0000000003ebc647 = 1;
                  }
                  if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar22 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
                  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar22,0);
                  if (0 < *(int *)(lVar17 + 0x50)) {
                    iVar15 = 0;
                    do {
                      /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar17,iVar15);
                      /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar17,iVar15);
                      iVar15 = iVar15 + 1;
                    } while (iVar15 < *(int *)(lVar17 + 0x50));
                  }
                  /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar17);
                  *(undefined8 *)((long)ppdVar7 + -0x80) = *(undefined8 *)((long)ppdVar7 + -0x80);
                  *(undefined8 *)((long)ppdVar7 + -0x78) = *(undefined8 *)((long)ppdVar7 + -0x78);
                  *(undefined8 *)((long)ppdVar7 + -0x70) = *(undefined8 *)((long)ppdVar7 + -0x70);
                  *(undefined8 *)((long)ppdVar7 + -0x68) = *(undefined8 *)((long)ppdVar7 + -0x68);
                  if (pcRam0000000003ec05a0 == (code *)0x0) {
                    pcRam0000000003ec05a0 =
                         (code *)func_0x00f789d4(
                                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                                );
                  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pdVar31 = (dword *)(*pcRam0000000003ec05a0)(uVar22);
                  return pdVar31;
                }
                auVar41 = func_0x00f78af4();
                puStack_98 = &Atlas_UI_AtlasUIManager__IsLayerReady;
                lVar17 = *(long *)(auVar41._0_8_ + 0x10);
                if (lVar17 == 0) {
                  uStack_a0 = (dword *)&stack0xffffffffffffff70;
                  auVar41 = func_0x00f78af4();
                  ppdVar35 = &stack0xffffffffffffff50;
                  pdStack_a8 = (dword *)&Atlas_UI_AtlasUIManager__GetLayerState;
                  lVar17 = *(long *)(auVar41._0_8_ + 0x10);
                  auVar43._8_8_ = auVar41._8_8_;
                  auVar43._0_8_ = lVar17;
                  if (lVar17 != 0) {
                    pdVar26 = (dword *)0x0;
                    puVar10 = &uStack_a0;
                    puVar39 = &Atlas_UI_AtlasUIManager__GetLayerState;
                    pdStack_b0 = (dword *)&uStack_a0;
                    goto code_r0x02f884dc;
                  }
                  pdStack_b0 = (dword *)&uStack_a0;
                  auVar41 = func_0x00f78af4();
                  puVar36 = &stack0xffffffffffffff40;
                  lVar17 = *(long *)(auVar41._0_8_ + 0x10);
                  auVar44._8_8_ = auVar41._8_8_;
                  auVar44._0_8_ = lVar17;
                  if (lVar17 == 0) {
                    auVar41 = func_0x00f78af4();
                    ppuStack_e0 = &stack0xffffffffffffff30;
                    puStack_c8 = &Atlas_UI_AtlasUIManager__SetScreenVisible;
                    lVar17 = *(long *)(auVar41._0_8_ + 0x10);
                    auVar45._8_8_ = auVar41._8_8_;
                    auVar45._0_8_ = lVar17;
                    if (lVar17 == 0) {
                      puStack_d0 = (undefined8 *)&stack0xffffffffffffff40;
                      pdVar31 = (dword *)func_0x00f78af4();
                      pdStack_e8 = unaff_x21;
                      ppuVar37 = &stack0xffffffffffffff30;
                      if ((bRam0000000003eb4871 & 1) == 0) {
                        func_0x00f78a20(0x3d2fb80);
                        func_0x00f78a20(0x3d1c478);
                        bRam0000000003eb4871 = 1;
                        ppuVar37 = ppuStack_e0;
                      }
                      ppuStack_e0 = ppuVar37;
                      uVar22 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
                      /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar22,uRam0000000003d2fb80);
                      *(undefined8 *)(pdVar31 + 0xc) = uVar22;
                      return pdVar31;
                    }
                    puVar12 = &stack0xffffffffffffff40;
                    puVar39 = &Atlas_UI_AtlasUIManager__SetScreenVisible;
                    puStack_d0 = (undefined8 *)&stack0xffffffffffffff40;
                    goto code_r0x02f88674;
                  }
                  ppdVar11 = &stack0xffffffffffffff50;
                  puVar39 = &Atlas_UI_AtlasUIManager__EnableInput;
                  pdVar26 = pdVar25;
                  pdVar25 = pdVar18;
                }
                else {
                  pdVar26 = (dword *)0x0;
                  puVar10 = (undefined8 *)&stack0xffffffffffffff40;
                  puStack_98 = &Atlas_UI_AtlasUIManager__IsLayerReady;
                  pdVar18 = (dword *)0x3ebc000;
                  pdStack_b0 = pdVar31;
                  pdStack_a8 = unaff_x21;
                  uStack_a0 = (dword *)&stack0xffffffffffffff70;
                  if ((bRam0000000003ebc64f & 1) == 0) {
                    uStack_a0 = (dword *)&stack0xffffffffffffff70;
                    func_0x00f78a20(0x3d3ddc8);
                    bRam0000000003ebc64f = 1;
                  }
                  uVar30 = auVar41._8_4_;
                  if (((int)uVar30 < 0) || (*(int *)(lVar17 + 0x50) <= (int)uVar30)) {
                    return (dword *)0x0;
                  }
                  lVar17 = *(long *)(lVar17 + 0x70);
                  if (lVar17 != 0) {
                    if (*(uint *)(lVar17 + 0x18) <= uVar30) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar34 = *(long *)(lVar17 + 0x10) + ((ulong)auVar41._8_8_ & 0xffffffff) * 0x28;
                    lVar17 = *(long *)(lVar34 + 0x28);
                    cVar3 = *(char *)(lVar34 + 0x40);
                    iVar15 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar34 + 0x30),0);
                    if (iVar15 == 0 || cVar3 != '\0') {
                      return (dword *)0x0;
                    }
                    if ((lVar17 != 0) && (*(int *)(lVar17 + 0x4c) != 2)) {
                      return (dword *)0x0;
                    }
                    return (dword *)((long)&MACH_HEADER.magic + 1);
                  }
                  puVar39 = &Core_UI2_UIManager__GetLayerState;
                  auVar43 = func_0x00f78af4();
                  pdVar31 = (dword *)0x0;
                  unaff_x21 = auVar41._8_8_;
code_r0x02f884dc:
                  ppdVar11 = (dword **)((long)puVar10 + -0x30);
                  *(dword **)((long)puVar10 + -0x30) = unaff_x22;
                  *(dword **)((long)puVar10 + -0x28) = pdVar18;
                  *(dword **)((long)puVar10 + -0x20) = pdVar31;
                  *(dword **)((long)puVar10 + -0x18) = unaff_x21;
                  *(undefined8 **)((long)puVar10 + -0x10) = &uStack_a0;
                  *(undefined **)((long)puVar10 + -8) = puVar39;
                  ppdVar35 = (dword **)((long)puVar10 + -0x10);
                  if ((bRam0000000003ebc650 & 1) == 0) {
                    func_0x00f78a20(0x3d3ddc8);
                    bRam0000000003ebc650 = 1;
                  }
                  lVar17 = *(long *)(auVar43._0_8_ + 0x70);
                  if (lVar17 != 0) {
                    if (*(uint *)(lVar17 + 0x18) <= auVar43._8_4_) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)auVar43._8_4_ * 0x28 +
                                      0x28);
                    if (lVar17 == 0) {
                      pdVar31 = &MACH_HEADER.cputype;
                    }
                    else {
                      pdVar31 = (dword *)(ulong)*(uint *)(lVar17 + 0x4c);
                    }
                    return pdVar31;
                  }
                  puVar39 = &Core_UI2_UIManager__EnableInput;
                  auVar44 = func_0x00f78af4();
                  pdVar31 = (dword *)0x0;
                  unaff_x21 = auVar43._8_8_;
                  pdVar25 = (dword *)0x3ebc000;
                }
                pdVar23 = auVar44._8_8_;
                pdVar18 = auVar44._0_8_;
                puVar12 = (undefined1 *)((long)ppdVar11 + -0x40);
                *(undefined8 *)((long)ppdVar11 + -0x40) = unaff_x24;
                *(undefined8 *)((long)ppdVar11 + -0x38) = 0x3eb4000;
                *(dword **)((long)ppdVar11 + -0x30) = unaff_x22;
                *(dword **)((long)ppdVar11 + -0x28) = pdVar25;
                *(dword **)((long)ppdVar11 + -0x20) = pdVar31;
                *(dword **)((long)ppdVar11 + -0x18) = unaff_x21;
                *(dword ***)((long)ppdVar11 + -0x10) = ppdVar35;
                *(undefined **)((long)ppdVar11 + -8) = puVar39;
                puVar36 = (undefined1 *)((long)ppdVar11 + -0x10);
                unaff_x22 = (dword *)0x3ebc000;
                pdVar25 = pdVar26;
                if ((bRam0000000003ebc651 & 1) == 0) {
                  func_0x00f78a20(0x3d2a5c0);
                  func_0x00f78a20(0x3d3ddc8);
                  bRam0000000003ebc651 = 1;
                }
                if (*(long *)(pdVar18 + 0x1a) != 0) {
                  pdVar25 = (dword *)(ulong)((uint)pdVar26 ^ 1);
                  pdVar31 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar18 + 0x1a),pdVar23,pdVar25,0);
                  lVar17 = *(long *)(pdVar18 + 0x1c);
                  unaff_x22 = (dword *)0x0;
                  if (lVar17 != 0) {
                    uVar30 = auVar44._8_4_;
                    if (*(uint *)(lVar17 + 0x18) <= uVar30) {
                      pdVar31 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    if ((*(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28) == 0)
                       || (unaff_x22 = *(dword **)(pdVar18 + 0xc), unaff_x22 == (dword *)0x0)) {
                      return pdVar31;
                    }
                    lVar17 = *(long *)(pdVar18 + 0x1c);
                    pdVar18 = (dword *)0x0;
                    if (lVar17 != 0) {
                      if (*(uint *)(lVar17 + 0x18) <= uVar30) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      plVar24 = *(long **)(*(long *)(lVar17 + 0x10) + (long)(int)uVar30 * 0x28 +
                                          0x28);
                      *(undefined8 *)((long)ppdVar11 + -0x60) = unaff_x28;
                      *(undefined8 *)((long)ppdVar11 + -0x58) = unaff_x27;
                      *(undefined8 *)((long)ppdVar11 + -0x50) = unaff_x26;
                      *(undefined8 *)((long)ppdVar11 + -0x48) = unaff_x25;
                      *(undefined8 *)((long)ppdVar11 + -0x40) =
                           *(undefined8 *)((long)ppdVar11 + -0x40);
                      *(undefined8 *)((long)ppdVar11 + -0x38) =
                           *(undefined8 *)((long)ppdVar11 + -0x38);
                      *(undefined8 *)((long)ppdVar11 + -0x30) =
                           *(undefined8 *)((long)ppdVar11 + -0x30);
                      *(undefined8 *)((long)ppdVar11 + -0x28) =
                           *(undefined8 *)((long)ppdVar11 + -0x28);
                      *(undefined8 *)((long)ppdVar11 + -0x20) =
                           *(undefined8 *)((long)ppdVar11 + -0x20);
                      *(undefined8 *)((long)ppdVar11 + -0x18) =
                           *(undefined8 *)((long)ppdVar11 + -0x18);
                      *(undefined8 *)((long)ppdVar11 + -0x10) =
                           *(undefined8 *)((long)ppdVar11 + -0x10);
                      *(undefined8 *)((long)ppdVar11 + -8) = *(undefined8 *)((long)ppdVar11 + -8);
                      *(dword **)((long)ppdVar11 + -0x68) = unaff_x22;
                      lVar17 = *(long *)(unaff_x22 + 0x1a);
                      if (lVar17 == 0) {
                        puVar36 = (undefined1 *)((long)ppdVar11 + -0x68);
                        lVar34 = 1;
                      }
                      else {
                        lVar34 = *(long *)(lVar17 + 0x18);
                        if (lVar34 == 0) {
                          return unaff_x22;
                        }
                        puVar36 = (undefined1 *)(lVar17 + 0x20);
                      }
                      lVar17 = 0;
                      do {
                        lVar20 = *(long *)(puVar36 + lVar17 * 8);
                        pcVar33 = *(code **)(lVar20 + 0x10);
                        plVar1 = *(long **)(lVar20 + 0x20);
                        lVar20 = *(long *)(lVar20 + 0x28);
                        if (*(short *)(lVar20 + 0x48) == -1) {
                          func_0x00f78ad8(lVar20);
                        }
                        iVar15 = func_0x00f78a4c(lVar20);
                        bVar14 = *(char *)(lVar20 + 0x4a) == '\x03';
                        if (iVar15 == 0) {
                          if (bVar14) {
                            if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                              pdVar31 = (dword *)(*pcVar33)(plVar24,pdVar23,pdVar26,lVar20);
                            }
                            else {
                              if (((*(short *)(lVar20 + 0x48) == -1) ||
                                  ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
                                 (*(long *)(unaff_x22 + 6) == 0)) goto code_r0x01e71aac;
                              iVar15 = func_0x00f78a44(lVar20);
                              iVar16 = func_0x00f78ec0(lVar20);
                              if (iVar15 == 0) {
                                uVar4 = *(ushort *)(lVar20 + 0x48);
                                if (iVar16 == 0) {
                                  lVar20 = *plVar1 + (ulong)uVar4 * 0x10;
                                  pdVar31 = (dword *)(**(code **)(lVar20 + 0x138))
                                                               (plVar1,plVar24,pdVar23,pdVar26,
                                                                *(undefined8 *)(lVar20 + 0x140));
                                  goto code_r0x01e71bd0;
                                }
                                lVar20 = func_0x00f78a48(lVar20);
                                lVar27 = *plVar1;
                                uVar28 = (ulong)*(ushort *)(lVar27 + 0x12a);
                                if (uVar28 != 0) {
                                  piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar29 + -2) == lVar20) {
                                      puVar21 = (undefined8 *)
                                                (lVar27 + (long)(int)(*piVar29 + (uint)uVar4) * 0x10
                                                + 0x138);
                                      goto code_r0x01e71d74;
                                    }
                                    piVar29 = piVar29 + 4;
                                    uVar28 = uVar28 - 1;
                                  } while (uVar28 != 0);
                                }
                                puVar21 = (undefined8 *)func_0x00fac1f0(plVar1,lVar20,(ulong)uVar4);
code_r0x01e71d74:
                                pcVar33 = (code *)*puVar21;
                                puVar21 = (undefined8 *)puVar21[1];
                              }
                              else {
                                if (iVar16 == 0) {
                                  uVar22 = *(undefined8 *)
                                            (*plVar1 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 +
                                            0x140);
                                }
                                else {
                                  lVar27 = *plVar1;
                                  uVar28 = (ulong)*(ushort *)(lVar27 + 0x12a);
                                  if (uVar28 != 0) {
                                    piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar29 + -2) == *(long *)(lVar20 + 0x18)) {
                                        lVar27 = lVar27 + (long)(int)(*piVar29 +
                                                                     (uint)*(ushort *)
                                                                            (lVar20 + 0x48)) * 0x10
                                                 + 0x138;
                                        goto code_r0x01e71d4c;
                                      }
                                      piVar29 = piVar29 + 4;
                                      uVar28 = uVar28 - 1;
                                    } while (uVar28 != 0);
                                  }
                                  lVar27 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                                  uVar22 = *(undefined8 *)(lVar27 + 8);
                                }
                                puVar21 = (undefined8 *)func_0x00f78acc(uVar22,lVar20);
                                pcVar33 = (code *)*puVar21;
                              }
                              pdVar31 = (dword *)(*pcVar33)(plVar1,plVar24,pdVar23,pdVar26,puVar21);
                            }
                          }
                          else {
                            if ((*(short *)(lVar20 + 0x48) == -1) || (*(long *)(unaff_x22 + 6) == 0)
                               ) goto code_r0x01e71bbc;
                            iVar15 = func_0x00f78a44(lVar20);
                            iVar16 = func_0x00f78ec0(lVar20);
                            if (iVar15 == 0) {
                              uVar4 = *(ushort *)(lVar20 + 0x48);
                              if (iVar16 == 0) {
                                lVar20 = *plVar24 + (ulong)uVar4 * 0x10;
                                pdVar31 = (dword *)(**(code **)(lVar20 + 0x138))
                                                             (plVar24,pdVar23,pdVar26,
                                                              *(undefined8 *)(lVar20 + 0x140));
                                goto code_r0x01e71bd0;
                              }
                              lVar20 = func_0x00f78a48(lVar20);
                              lVar27 = *plVar24;
                              uVar28 = (ulong)*(ushort *)(lVar27 + 0x12a);
                              if (uVar28 != 0) {
                                piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar29 + -2) == lVar20) {
                                    puVar21 = (undefined8 *)
                                              (lVar27 + (long)(int)(*piVar29 + (uint)uVar4) * 0x10 +
                                              0x138);
                                    goto code_r0x01e71d00;
                                  }
                                  piVar29 = piVar29 + 4;
                                  uVar28 = uVar28 - 1;
                                } while (uVar28 != 0);
                              }
                              puVar21 = (undefined8 *)func_0x00fac1f0(plVar24,lVar20,(ulong)uVar4);
code_r0x01e71d00:
                              pcVar33 = (code *)*puVar21;
                              puVar21 = (undefined8 *)puVar21[1];
                            }
                            else {
                              if (iVar16 == 0) {
                                uVar22 = *(undefined8 *)
                                          (*plVar24 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 +
                                          0x140);
                              }
                              else {
                                lVar27 = *plVar24;
                                uVar28 = (ulong)*(ushort *)(lVar27 + 0x12a);
                                if (uVar28 != 0) {
                                  piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar29 + -2) == *(long *)(lVar20 + 0x18)) {
                                      lVar27 = lVar27 + (long)(int)(*piVar29 +
                                                                   (uint)*(ushort *)(lVar20 + 0x48))
                                                        * 0x10 + 0x138;
                                      goto code_r0x01e71cd8;
                                    }
                                    piVar29 = piVar29 + 4;
                                    uVar28 = uVar28 - 1;
                                  } while (uVar28 != 0);
                                }
                                lVar27 = func_0x00fac1f0(plVar24);
code_r0x01e71cd8:
                                uVar22 = *(undefined8 *)(lVar27 + 8);
                              }
                              puVar21 = (undefined8 *)func_0x00f78acc(uVar22,lVar20);
                              pcVar33 = (code *)*puVar21;
                            }
                            pdVar31 = (dword *)(*pcVar33)(plVar24,pdVar23,pdVar26,puVar21);
                          }
                        }
                        else {
                          if (bVar14) goto code_r0x01e71bbc;
code_r0x01e71aac:
                          pdVar31 = (dword *)(*pcVar33)(plVar1,plVar24,pdVar23,pdVar26,lVar20);
                        }
code_r0x01e71bd0:
                        lVar17 = lVar17 + 1;
                        if (lVar17 == lVar34) {
                          return pdVar31;
                        }
                      } while( true );
                    }
                  }
                }
                puVar39 = &Core_UI2_UIManager__SetScreenVisible;
                auVar45 = func_0x00f78af4();
                unaff_x21 = pdVar26;
                pdVar31 = pdVar23;
code_r0x02f88674:
                pdVar26 = auVar45._0_8_;
                *(dword **)(puVar12 + -0x30) = unaff_x22;
                *(dword **)(puVar12 + -0x28) = pdVar18;
                *(dword **)(puVar12 + -0x20) = pdVar31;
                *(dword **)(puVar12 + -0x18) = unaff_x21;
                *(undefined1 **)(puVar12 + -0x10) = puVar36;
                *(undefined **)(puVar12 + -8) = puVar39;
                pdVar31 = pdVar26;
                if ((bRam0000000003ebc652 & 1) == 0) {
                  pdVar31 = (dword *)func_0x00f78a20(0x3d3ddc8);
                  bRam0000000003ebc652 = 1;
                }
                lVar17 = *(long *)(pdVar26 + 0x1c);
                if (lVar17 != 0) {
                  uVar30 = auVar45._8_4_;
                  if (*(uint *)(lVar17 + 0x18) <= uVar30) {
                    pdVar31 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  if (*(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28) == 0) {
                    return pdVar31;
                  }
                  lVar17 = *(long *)(pdVar26 + 0x1c);
                  if (lVar17 != 0) {
                    if (*(uint *)(lVar17 + 0x18) <= uVar30) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28);
                    if ((lVar17 != 0) &&
                       (plVar24 = *(long **)(lVar17 + 0x28), plVar24 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      pdVar31 = (dword *)(**(code **)(*plVar24 + 0x178))
                                                   (plVar24,pdVar25,
                                                    *(undefined8 *)(*plVar24 + 0x180));
                      return pdVar31;
                    }
                  }
                }
                auVar41 = func_0x00f78af4();
                uVar22 = auVar41._0_8_;
                *(long *)(puVar12 + -0x50) = auVar45._8_8_;
                *(dword **)(puVar12 + -0x48) = pdVar25;
                *(undefined1 **)(puVar12 + -0x40) = puVar12 + -0x10;
                *(undefined **)(puVar12 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
                *(undefined8 *)(puVar12 + -0x68) = 0;
                *(undefined8 *)(puVar12 + -0x70) = 0;
                *(undefined8 *)(puVar12 + -0x58) = 0;
                *(undefined8 *)(puVar12 + -0x60) = 0;
                pdVar31 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar22,auVar41._8_8_,puVar12 + -0x70);
                if ((int)pdVar31 != 0) {
                  /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar22,*(undefined8 *)(puVar12 + -0x60),
                                  *(undefined8 *)(puVar12 + -0x58));
                  *(undefined8 *)(puVar12 + -0x88) = *(undefined8 *)(puVar12 + -0x68);
                  *(undefined8 *)(puVar12 + -0x90) = *(undefined8 *)(puVar12 + -0x70);
                  *(undefined8 *)(puVar12 + -0x78) = *(undefined8 *)(puVar12 + -0x58);
                  *(undefined8 *)(puVar12 + -0x80) = *(undefined8 *)(puVar12 + -0x60);
                  pdVar31 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar22,puVar12 + -0x90,1);
                }
                return pdVar31;
              }
            }
          }
        }
      }
      else {
        lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d41288);
        if ((lVar17 != 0) && (pdVar18 = *(dword **)(lVar17 + 0x10), pdVar18 != (dword *)0x0)) {
          uVar22 = 0;
          pdStack_58 = pdVar18;
          lVar17 = *(long *)(pdVar18 + 0x1a);
          if (lVar17 == 0) {
            ppdVar35 = &pdStack_58;
            lVar34 = 1;
          }
          else {
            lVar34 = *(long *)(lVar17 + 0x18);
            if (lVar34 == 0) {
              return pdVar18;
            }
            ppdVar35 = (dword **)(lVar17 + 0x20);
          }
          lVar17 = 0;
          do {
            pdVar31 = ppdVar35[lVar17];
            pcVar33 = *(code **)(pdVar31 + 4);
            plVar24 = *(long **)(pdVar31 + 8);
            lVar20 = *(long *)(pdVar31 + 10);
            if (*(short *)(lVar20 + 0x48) == -1) {
              func_0x00f78ad8(lVar20,uVar22);
            }
            iVar15 = func_0x00f78a4c(lVar20);
            if (iVar15 == 0) {
              if ((((plVar24 == (long *)0x0) || (*(short *)(lVar20 + 0x48) == -1)) ||
                  ((*(byte *)(*plVar24 + 0x115) & 1) != 0)) || (*(long *)(pdVar18 + 6) == 0))
              goto code_r0x01565d7c;
              iVar15 = func_0x00f78a44(lVar20);
              iVar16 = func_0x00f78ec0(lVar20);
              if (iVar15 == 0) {
                uVar4 = *(ushort *)(lVar20 + 0x48);
                if (iVar16 == 0) {
                  lVar20 = *plVar24 + (ulong)uVar4 * 0x10;
                  auVar41 = (**(code **)(lVar20 + 0x138))(plVar24,*(undefined8 *)(lVar20 + 0x140));
                  goto code_r0x01565d88;
                }
                lVar20 = func_0x00f78a48(lVar20);
                lVar27 = *plVar24;
                uVar28 = (ulong)*(ushort *)(lVar27 + 0x12a);
                if (uVar28 != 0) {
                  piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar29 + -2) == lVar20) {
                      puVar21 = (undefined8 *)
                                (lVar27 + (long)(int)(*piVar29 + (uint)uVar4) * 0x10 + 0x138);
                      goto code_r0x01565e4c;
                    }
                    piVar29 = piVar29 + 4;
                    uVar28 = uVar28 - 1;
                  } while (uVar28 != 0);
                }
                puVar21 = (undefined8 *)func_0x00fac1f0(plVar24,lVar20,(ulong)uVar4);
code_r0x01565e4c:
                pcVar33 = (code *)*puVar21;
                puVar21 = (undefined8 *)puVar21[1];
              }
              else {
                if (iVar16 == 0) {
                  uVar22 = *(undefined8 *)
                            (*plVar24 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar27 = *plVar24;
                  uVar28 = (ulong)*(ushort *)(lVar27 + 0x12a);
                  if (uVar28 != 0) {
                    piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == *(long *)(lVar20 + 0x18)) {
                        lVar27 = lVar27 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar20 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01565e24;
                      }
                      piVar29 = piVar29 + 4;
                      uVar28 = uVar28 - 1;
                    } while (uVar28 != 0);
                  }
                  lVar27 = func_0x00fac1f0(plVar24);
code_r0x01565e24:
                  uVar22 = *(undefined8 *)(lVar27 + 8);
                }
                puVar21 = (undefined8 *)func_0x00f78acc(uVar22,lVar20);
                pcVar33 = (code *)*puVar21;
              }
              auVar41 = (*pcVar33)(plVar24,puVar21);
            }
            else if (*(char *)(lVar20 + 0x4a) == '\0') {
              auVar41 = (*pcVar33)(lVar20);
            }
            else {
code_r0x01565d7c:
              auVar41 = (*pcVar33)(plVar24,lVar20);
            }
code_r0x01565d88:
            uVar22 = auVar41._8_8_;
            lVar17 = lVar17 + 1;
            if (lVar17 == lVar34) {
              return auVar41._0_8_;
            }
          } while( true );
        }
      }
    }
    auVar41 = func_0x00f78af4();
    ppdVar35 = (dword **)&stack0xfffffffffffffff0;
    pcVar33 = (code *)&Atlas_UI_Screens_RewardScreen__PlayRewardTweenUp;
code_r0x014e3c84:
    lVar17 = auVar41._8_8_;
    puVar6 = puVar5 + -0x40;
    *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
    *(dword **)(puVar5 + -0x30) = unaff_x22;
    *(dword **)(puVar5 + -0x28) = unaff_x21;
    *(dword **)(puVar5 + -0x20) = pdVar31;
    *(dword **)(puVar5 + -0x18) = param_4;
    *(dword ***)(puVar5 + -0x10) = ppdVar35;
    *(code **)(puVar5 + -8) = pcVar33;
    ppuVar37 = (undefined8 **)(puVar5 + -0x10);
    if ((bRam0000000003eb4bf1 & 1) == 0) {
      func_0x00f78a20(0x3d5e7a8);
      func_0x00f78a20(0x3d5e850);
      func_0x00f78a20(0x3d5e888);
      bRam0000000003eb4bf1 = 1;
    }
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    if (lVar17 == 0) {
      lVar17 = func_0x00f78af4();
      *(dword **)(puVar5 + -0x70) = unaff_x22;
      *(undefined8 *)(puVar5 + -0x68) = 0x3eb4000;
      *(undefined8 *)(puVar5 + -0x60) = 0;
      *(long *)(puVar5 + -0x58) = auVar41._0_8_;
      *(undefined8 ***)(puVar5 + -0x50) = ppuVar37;
      *(undefined **)(puVar5 + -0x48) = &Atlas_UI_Screens_RewardScreen___ctor;
      if ((bRam0000000003eb4bf2 & 1) == 0) {
        func_0x00f78a20(0x3d2c8c8);
        bRam0000000003eb4bf2 = 1;
      }
      *(undefined8 *)(puVar5 + -0x50) = *(undefined8 *)(puVar5 + -0x50);
      *(undefined8 *)(puVar5 + -0x48) = *(undefined8 *)(puVar5 + -0x48);
      if (lVar17 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar31 = (dword *)(*(code *)**(undefined8 **)
                                       (*(long *)(*(long *)(lRam0000000003d2c8c8 + 0x18) + 0xc0) +
                                       0x38))();
        return pdVar31;
      }
      auVar41 = func_0x00f78af4();
      puVar21 = auVar41._8_8_;
      pdVar31 = auVar41._0_8_;
      uVar32 = puVar21[1];
      uVar22 = *puVar21;
      *(undefined8 *)(pdVar31 + 4) = puVar21[2];
      *(undefined8 *)(pdVar31 + 2) = uVar32;
      *(undefined8 *)pdVar31 = uVar22;
      return pdVar31;
    }
    uVar32 = 0x3d5e000;
    uVar22 = 0x3d5e000;
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar17,0);
    /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    uVar19 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(lVar17,0);
    pdVar31 = (dword *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar19,0x1b,uRam0000000003d5e7a8);
    puVar39 = &UNK_014e3d38;
    uVar19 = uRam0000000003d5e850;
  }
  plVar24 = auVar41._0_8_;
  *(undefined8 *)(puVar6 + -0x30) = uVar22;
  *(undefined8 *)(puVar6 + -0x28) = uVar32;
  *(long *)(puVar6 + -0x20) = auVar41._8_8_;
  *(long **)(puVar6 + -0x18) = plVar24;
  *(undefined8 ***)(puVar6 + -0x10) = ppuVar37;
  *(undefined **)(puVar6 + -8) = puVar39;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar24,uVar19);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((pdVar31 != (dword *)0x0) && (*(char *)(pdVar31 + 0x3a) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar15 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar15 != 0) {
      lVar17 = func_0x00f78adc(plVar24,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar28 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar17,0,0);
      if ((uVar28 & 1) == 0) {
        if (plVar24 == (long *)0x0) goto code_r0x018eef34;
        uVar22 = (**(code **)(*plVar24 + 0x168))(plVar24,*(undefined8 *)(*plVar24 + 0x170));
      }
      else {
        if (lVar17 == 0) {
code_r0x018eef34:
          auVar41 = func_0x00f78af4();
          pdVar18 = auVar41._0_8_;
          *(undefined8 *)(puVar6 + -0x60) = uVar22;
          *(long *)(puVar6 + -0x58) = lVar17;
          *(long **)(puVar6 + -0x50) = plVar24;
          *(dword **)(puVar6 + -0x48) = pdVar31;
          *(undefined1 **)(puVar6 + -0x40) = puVar6 + -0x10;
          *(undefined **)(puVar6 + -0x38) = &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((pdVar18 != (dword *)0x0) && (*(char *)(pdVar18 + 0x3a) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar3 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(pdVar18,auVar41._8_8_,cVar3 != '\0',0);
          }
          return pdVar18;
        }
        uVar22 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar17,0);
      }
      *(undefined8 *)(pdVar31 + 0x32) = uVar22;
    }
    *(long **)(pdVar31 + 0x12) = plVar24;
  }
  return pdVar31;
}



// ============================================================
// RVA: 0x14e361c | Atlas.UI.Screens.RewardScreen.ShowIPPlane
// ============================================================

/* WARNING: Possible PIC construction at 0x015b38d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b3980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e3d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x014e3d38) */
/* WARNING: Removing unreachable block (ram,0x018ef000) */
/* WARNING: Removing unreachable block (ram,0x018ef024) */
/* WARNING: Removing unreachable block (ram,0x018ef044) */
/* WARNING: Removing unreachable block (ram,0x018ef048) */
/* WARNING: Removing unreachable block (ram,0x018ef050) */
/* WARNING: Removing unreachable block (ram,0x018ef064) */
/* WARNING: Removing unreachable block (ram,0x018ef06c) */
/* WARNING: Removing unreachable block (ram,0x018ef074) */
/* WARNING: Removing unreachable block (ram,0x018ef090) */
/* WARNING: Removing unreachable block (ram,0x018ef098) */
/* WARNING: Removing unreachable block (ram,0x018ef09c) */
/* WARNING: Removing unreachable block (ram,0x018ef0b0) */
/* WARNING: Removing unreachable block (ram,0x015b39e4) */
/* WARNING: Removing unreachable block (ram,0x015b39ec) */
/* WARNING: Removing unreachable block (ram,0x015b39f8) */
/* WARNING: Removing unreachable block (ram,0x015b39c4) */
/* WARNING: Removing unreachable block (ram,0x015b39cc) */
/* WARNING: Removing unreachable block (ram,0x015b39d8) */
/* WARNING: Removing unreachable block (ram,0x015b39a4) */
/* WARNING: Removing unreachable block (ram,0x015b39ac) */
/* WARNING: Removing unreachable block (ram,0x015b39b8) */
/* WARNING: Removing unreachable block (ram,0x015b3984) */
/* WARNING: Removing unreachable block (ram,0x015b398c) */
/* WARNING: Removing unreachable block (ram,0x015b3998) */
/* WARNING: Removing unreachable block (ram,0x015b38dc) */
/* WARNING: Removing unreachable block (ram,0x015b3900) */
/* WARNING: Removing unreachable block (ram,0x015b3908) */
/* WARNING: Removing unreachable block (ram,0x015b3910) */
/* WARNING: Removing unreachable block (ram,0x015b3914) */
/* WARNING: Removing unreachable block (ram,0x015b3918) */
/* WARNING: Removing unreachable block (ram,0x03237f38) */
/* WARNING: Removing unreachable block (ram,0x0323946c) */
/* WARNING: Removing unreachable block (ram,0x0323949c) */
/* WARNING: Removing unreachable block (ram,0x032394b0) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Atlas_UI_Screens_RewardScreen__ShowIPPlane
          (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  byte bVar1;
  char cVar2;
  undefined1 *puVar3;
  ulong *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  long *extraout_x1_00;
  long *extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 *puVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 *******pppppppuVar20;
  undefined *puVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 *****pppppuStack_a0;
  undefined *puStack_98;
  ulong uStack_50;
  long lStack_48;
  undefined8 ******ppppppuStack_40;
  code *pcStack_38;
  
  if ((bRam0000000003eb4bea & 1) == 0) {
    func_0x00f78a20(0x3d1fc20);
    func_0x00f78a20(0x3d20278);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d2dc40);
    func_0x00f78a20(0x3d21ba8);
    func_0x00f78a20(0x3d22c80);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25b48);
    bRam0000000003eb4bea = 1;
  }
  uVar16 = *(ulong *)(param_4 + 0xd8);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar23 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar16,0);
  if (auVar23._0_4_ == 0) {
    return auVar23;
  }
  plVar6 = *(long **)(param_4 + 0x70);
  if (plVar6 != (long *)0x0) {
    lVar12 = *plVar6;
    bVar1 = *(byte *)(lVar12 + 300);
    if ((bVar1 < *(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300)) ||
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300) * 8 + -8)
        != /*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80)) {
      if ((bVar1 < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8)
          != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
        if ((bVar1 < *(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300)) ||
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8 +
                     -8) != /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) {
          if ((bVar1 < *(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300)) ||
             (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) * 8 +
                       -8) != /*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20)) {
            if ((bVar1 < *(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300)) ||
               (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300) * 8
                         + -8) != /*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8)) {
              uVar16 = 5;
              if (*(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300) <= bVar1) {
                uVar15 = 5;
                if (*(long *)(*(long *)(lVar12 + 200) +
                              (ulong)*(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300) * 8 + -8) ==
                    /*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278) {
                  uVar15 = 6;
                }
                uVar16 = (ulong)uVar15;
              }
            }
            else {
              uVar16 = 2;
            }
          }
          else {
            uVar16 = 5;
          }
        }
        else {
          uVar16 = 3;
        }
      }
      else {
        uVar16 = 1;
      }
    }
    else {
      uVar16 = 0;
    }
    lVar14 = *(long *)(param_4 + 0xd8);
    lVar12 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(plVar6,0);
    param_4 = 0;
    if (lVar14 != 0) {
      lVar12 = *(long *)(lVar12 + 8);
      puVar4 = (ulong *)&stack0xffffffffffffffd0;
      if ((bRam0000000003eb526a & 1) == 0) {
        func_0x00f78a20(0x3d21b88,uVar16,lVar12,0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb526a = 1;
      }
      Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__HideIPPlanes(lVar14);
      switch(uVar16) {
      case 0:
        puVar13 = (ulong *)(lVar14 + 0xb8);
        break;
      case 1:
        puVar13 = (ulong *)(lVar14 + 0xc0);
        break;
      case 2:
        puVar13 = (ulong *)(lVar14 + 0xd0);
        break;
      case 3:
      case 4:
        puVar13 = (ulong *)(lVar14 + 0xd8);
        break;
      case 5:
        puVar13 = (ulong *)(lVar14 + 200);
        break;
      default:
        uVar18 = 0;
        goto code_r0x015b3894;
      }
      uVar18 = *puVar13;
code_r0x015b3894:
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auVar23 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar18,0);
      if (auVar23._0_4_ != 0) {
        if ((uVar18 == 0) || (lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar18,0), lVar14 == 0)) {
          lVar8 = func_0x00f78af4();
          puVar4 = &uStack_50;
          pcStack_38 = Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__HideIPPlanes;
          pppppppuVar20 = &ppppppuStack_40;
          uStack_50 = uVar18;
          lStack_48 = lVar12;
          ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
          if ((*(long *)(lVar8 + 0xb8) == 0) ||
             (lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar8 + 0xb8),0), lVar14 == 0)) {
            auVar23._0_8_ = func_0x00f78af4();
            if ((bRam0000000003eb517d & 1) == 0) {
              func_0x00f78a20(0x3d2e428,0);
              func_0x00f78a20(0x3d1c210);
              bRam0000000003eb517d = 1;
            }
            uVar10 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<FrontEndCameraPosition, CinemachineVirtualCamera>_TypeInfo*/ uRam0000000003d1c210);
            /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar10,uRam0000000003d2e428);
            *(undefined8 *)(auVar23._0_8_ + 0x40) = uVar10;
            if ((bRam0000000003ebf1b8 & 1) == 0) {
              func_0x00f78a20(0x3d23990,0);
              bRam0000000003ebf1b8 = 1;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            auVar23._8_8_ = 0;
            return auVar23;
          }
          uVar10 = 0;
          puVar21 = (undefined *)0x15b3984;
        }
        else {
          uVar10 = 1;
          puVar21 = &UNK_015b38dc;
          lVar8 = lVar12;
          pppppppuVar20 = (undefined8 *******)&stack0xfffffffffffffff0;
        }
        *(undefined8 *)((long)puVar4 + -0x30) = 0x3d23990;
        *(ulong *)((long)puVar4 + -0x28) = uVar16;
        *(ulong *)((long)puVar4 + -0x20) = uVar18;
        *(long *)((long)puVar4 + -0x18) = lVar8;
        *(undefined8 ********)((long)puVar4 + -0x10) = pppppppuVar20;
        *(undefined **)((long)puVar4 + -8) = puVar21;
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar23 = (*pcRam0000000003ebf4c0)(lVar14,uVar10);
        return auVar23;
      }
      return auVar23;
    }
  }
  auVar23 = func_0x00f78af4();
  plVar6 = auVar23._0_8_;
  pcStack_38 = (code *)&Atlas_UI_Screens_RewardScreen__AnimateReward;
  uStack_50 = uVar16;
  lStack_48 = param_4;
  ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4bf0 & 1) == 0) {
    func_0x00f78a20(0x3d1fc20);
    func_0x00f78a20(0x3d20278);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d57868);
    func_0x00f78a20(0x3d21ba8);
    func_0x00f78a20(0x3d22c80);
    auVar23 = func_0x00f78a20(0x3d25b48);
    bRam0000000003eb4bf0 = 1;
  }
  plVar17 = (long *)plVar6[0xe];
  if (plVar17 == (long *)0x0) {
    return auVar23;
  }
  lVar12 = *plVar17;
  bVar1 = *(byte *)(lVar12 + 300);
  if ((bVar1 < *(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300)) ||
     (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300) * 8 + -8) !=
      /*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80)) {
    if ((bVar1 < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8)
        != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
      if (((bVar1 < *(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300)) ||
          (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8 + -8
                    ) != /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) &&
         ((bVar1 < *(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) ||
          (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) * 8 + -8
                    ) != /*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20)))) {
        if ((bVar1 < *(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300)) ||
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300) * 8 +
                     -8) != /*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8)) {
          if (bVar1 < *(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300)) {
            return auVar23;
          }
          if (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300) * 8 +
                       -8) != /*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278) {
            return auVar23;
          }
          goto code_r0x014e3a04;
        }
        if ((plVar6[0x14] == 0) ||
           (lVar12 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar6[0x14],uRam0000000003d57868), lVar12 == 0))
        goto code_r0x014e3afc;
        Atlas_Gameplay_Kart_BaseVisualBehaviour__SetGliding(lVar12,1,0);
        Atlas_Gameplay_Kart_GliderVisualBehaviour__SetTrailsEnabled(lVar12,0,0);
      }
      if (plVar6[0x14] != 0) {
        plVar17 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(plVar6[0x14],0);
        goto code_r0x014e3ae4;
      }
    }
    else if ((plVar6[0x1a] != 0) &&
            (lVar12 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(plVar6[0x1a],0,0), lVar12 != 0
            )) {
      Atlas_Gameplay_Kart_KartFEAnimator__PlayRewardScreen(lVar12,0);
      if (plVar6[0x1a] != 0) {
        lVar12 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(plVar6[0x1a],0,0);
        uVar10 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(plVar17,0);
        if (lVar12 != 0) {
          Atlas_Gameplay_Kart_KartFEAnimator__TriggerFEUnlockCharacter(lVar12,uVar10,0);
          goto code_r0x014e3a80;
        }
      }
    }
code_r0x014e3afc:
    auVar23 = func_0x00f78af4();
    lVar12 = auVar23._0_8_;
    if ((bRam0000000003eb4bec & 1) == 0) {
      auVar23 = func_0x00f78a20(0x3d79018);
      bRam0000000003eb4bec = 1;
    }
    if (*(int *)(lVar12 + 0x4c) != 2) {
      return auVar23;
    }
    Atlas_UI_Screens_RewardScreen__EndOfNewItem(lVar12);
    uVar16 = /*STR('event:/UI/Front_End/GeneralButton3')*/ uRam0000000003d79018;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = /*STR('event:/UI/Front_End/GeneralButton3')*/ uRam0000000003d79018;
    if ((bRam0000000003eb4db6 & 1) == 0) {
      func_0x00f78a20(0x3d2faf8,0);
      func_0x00f78a20(0x3d2fb00);
      auVar24 = func_0x00f78a20(0x3d25580);
      bRam0000000003eb4db6 = 1;
    }
    if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
      return auVar24;
    }
    lVar12 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
    if (lVar12 != 0) {
      auVar23 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar12,uVar16,uRam0000000003d2faf8);
      if (auVar23._0_4_ == 0) {
        return auVar23;
      }
      if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
          (lVar12 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar12 != 0)) &&
         (auVar25._0_8_ = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar12,uVar16,uRam0000000003d2fb00), auVar25._0_8_ != 0))
      {
        /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,auVar25._0_8_,0,0);
        auVar25._8_8_ = extraout_x1;
        return auVar25;
      }
    }
    plVar6 = (long *)func_0x00f78af4();
    puVar3 = &stack0xffffffffffffff30;
    puStack_98 = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
    pppppppuVar20 = (undefined8 *******)&pppppuStack_a0;
    pppppuStack_a0 = (undefined8 *****)&stack0xffffffffffffff90;
    if ((bRam0000000003eb4d8b & 1) == 0) {
      func_0x00f78a20(0x3d24188);
      func_0x00f78a20(0x3d5e780);
      func_0x00f78a20(0x3d5e868);
      bRam0000000003eb4d8b = 1;
    }
    plVar17 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar6,0);
    if ((plVar17 != (long *)0x0) && (*plVar17 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
      uVar10 = func_0x00f78e5c(plVar17);
      lVar12 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
      if (lVar12 == 0) {
        func_0x00f78a24(0x3d23938,0,0);
        uVar19 = func_0x00f78aec();
        uVar10 = func_0x00f78a24(0x3d7b500);
        /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar19,uVar10,0);
      }
      else {
        if (pcRam0000000003ec01d0 == (code *)0x0) {
          pcRam0000000003ec01d0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                      );
        }
        uVar16 = (*pcRam0000000003ec01d0)(uVar10);
        if ((uVar16 & 1) != 0) {
          if (pcRam0000000003ec01e0 == (code *)0x0) {
            pcRam0000000003ec01e0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar23 = (*pcRam0000000003ec01e0)(uVar10,lVar12);
          return auVar23;
        }
        func_0x00f78a24(0x3d1fce8);
        uVar19 = func_0x00f78aec();
        uVar10 = func_0x00f78a24(0x3d6af80);
        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar19,uVar10,0);
      }
      uVar10 = func_0x00f78a24(0x3d5a8a8);
      auVar23 = func_0x00f78ac0(uVar19,uVar10);
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar23 = (*pcRam0000000003ec01e0)(auVar23._0_8_,auVar23._8_8_);
      return auVar23;
    }
    uVar10 = 0x3d5e780;
    uVar19 = 0x3d5e868;
    fVar22 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    uVar7 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar22 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                            plVar17,4,0);
    lVar12 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar7,uRam0000000003d5e780);
    puVar21 = &UNK_01513b44;
    uVar7 = uRam0000000003d5e868;
  }
  else {
code_r0x014e3a04:
    if ((plVar6[0x1a] == 0) ||
       (lVar12 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(plVar6[0x1a],0,0), lVar12 == 0))
    goto code_r0x014e3afc;
    Atlas_Gameplay_Kart_KartFEAnimator__PlayRewardScreen(lVar12,0);
code_r0x014e3a80:
    if (plVar6[0x1a] == 0) goto code_r0x014e3afc;
    plVar17 = (long *)Atlas_FrontEnd_FrontEndScene__GetKartTransform(plVar6[0x1a],0,0);
code_r0x014e3ae4:
    puVar3 = &stack0xffffffffffffff90;
    pppppppuVar20 = &ppppppuStack_40;
    if ((bRam0000000003eb4bf1 & 1) == 0) {
      func_0x00f78a20(0x3d5e7a8);
      func_0x00f78a20(0x3d5e850);
      func_0x00f78a20(0x3d5e888);
      bRam0000000003eb4bf1 = 1;
    }
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    if (plVar17 == (long *)0x0) {
      lVar12 = func_0x00f78af4();
      puStack_98 = (undefined *)0x3eb4000;
      if ((bRam0000000003eb4bf2 & 1) == 0) {
        func_0x00f78a20(0x3d2c8c8);
        bRam0000000003eb4bf2 = 1;
      }
      if (lVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar23 = (*(code *)**(undefined8 **)
                              (*(long *)(*(long *)(lRam0000000003d2c8c8 + 0x18) + 0xc0) + 0x38))();
        return auVar23;
      }
      auVar23 = func_0x00f78af4();
      puVar11 = auVar23._8_8_;
      puVar9 = auVar23._0_8_;
      uVar19 = puVar11[1];
      uVar10 = *puVar11;
      puVar9[2] = puVar11[2];
      puVar9[1] = uVar19;
      *puVar9 = uVar10;
      return auVar23;
    }
    uVar19 = 0x3d5e000;
    uVar10 = 0x3d5e000;
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(plVar17,0);
    /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    uVar7 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(plVar17,0);
    lVar12 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar7,0x1b,uRam0000000003d5e7a8);
    puVar21 = &UNK_014e3d38;
    uVar7 = uRam0000000003d5e850;
  }
  *(undefined8 *)(puVar3 + -0x30) = uVar10;
  *(undefined8 *)(puVar3 + -0x28) = uVar19;
  *(long **)(puVar3 + -0x20) = plVar17;
  *(long **)(puVar3 + -0x18) = plVar6;
  *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar20;
  *(undefined **)(puVar3 + -8) = puVar21;
  plVar17 = plVar6;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar6,uVar7);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
    plVar17 = extraout_x1_00;
  }
  if ((lVar12 != 0) && (*(char *)(lVar12 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar5 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    plVar17 = extraout_x1_01;
    if (iVar5 != 0) {
      lVar14 = func_0x00f78adc(plVar6,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar16 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar14,0,0);
      if ((uVar16 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto code_r0x018eef34;
        auVar23 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      }
      else {
        if (lVar14 == 0) {
code_r0x018eef34:
          auVar23 = func_0x00f78af4();
          auVar27._0_8_ = auVar23._0_8_;
          *(undefined8 *)(puVar3 + -0x60) = uVar10;
          *(long *)(puVar3 + -0x58) = lVar14;
          *(long **)(puVar3 + -0x50) = plVar6;
          *(long *)(puVar3 + -0x48) = lVar12;
          *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
          *(undefined **)(puVar3 + -0x38) = &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          uVar10 = auVar23._8_8_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
            uVar10 = extraout_x1_02;
          }
          if ((auVar27._0_8_ != 0) && (*(char *)(auVar27._0_8_ + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar2 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(auVar27._0_8_,auVar23._8_8_,cVar2 != '\0',0);
            uVar10 = extraout_x1_03;
          }
          auVar27._8_8_ = uVar10;
          return auVar27;
        }
        auVar23 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar14,0);
      }
      plVar17 = auVar23._8_8_;
      *(long *)(lVar12 + 200) = auVar23._0_8_;
    }
    *(long **)(lVar12 + 0x48) = plVar6;
  }
  auVar26._8_8_ = plVar17;
  auVar26._0_8_ = lVar12;
  return auVar26;
}



// ============================================================
// RVA: 0x14e3860 | Atlas.UI.Screens.RewardScreen.AnimateReward
// ============================================================

/* WARNING: Possible PIC construction at 0x014e3d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x014e3d38) */
/* WARNING: Removing unreachable block (ram,0x018ef000) */
/* WARNING: Removing unreachable block (ram,0x018ef024) */
/* WARNING: Removing unreachable block (ram,0x018ef044) */
/* WARNING: Removing unreachable block (ram,0x018ef048) */
/* WARNING: Removing unreachable block (ram,0x018ef050) */
/* WARNING: Removing unreachable block (ram,0x018ef064) */
/* WARNING: Removing unreachable block (ram,0x018ef06c) */
/* WARNING: Removing unreachable block (ram,0x018ef074) */
/* WARNING: Removing unreachable block (ram,0x018ef090) */
/* WARNING: Removing unreachable block (ram,0x018ef098) */
/* WARNING: Removing unreachable block (ram,0x018ef09c) */
/* WARNING: Removing unreachable block (ram,0x018ef0b0) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_UI_Screens_RewardScreen__AnimateReward
                 (undefined1 param_1 [16],float param_2,float param_3,long *param_4)

{
  byte bVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 **ppuVar12;
  undefined *puVar13;
  float fVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  plVar5 = param_4;
  if ((bRam0000000003eb4bf0 & 1) == 0) {
    func_0x00f78a20(0x3d1fc20);
    func_0x00f78a20(0x3d20278);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d57868);
    func_0x00f78a20(0x3d21ba8);
    func_0x00f78a20(0x3d22c80);
    plVar5 = (long *)func_0x00f78a20(0x3d25b48);
    bRam0000000003eb4bf0 = 1;
  }
  plVar9 = (long *)param_4[0xe];
  if (plVar9 == (long *)0x0) {
    return plVar5;
  }
  lVar8 = *plVar9;
  bVar1 = *(byte *)(lVar8 + 300);
  if ((bVar1 < *(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300)) ||
     (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80 + 300) * 8 + -8) !=
      /*Atlas.Definitions.KartDefinition_TypeInfo*/ lRam0000000003d22c80)) {
    if ((bVar1 < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8) !=
        /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
      if (((bVar1 < *(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300)) ||
          (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8 + -8)
           != /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) &&
         ((bVar1 < *(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) ||
          (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20 + 300) * 8 + -8)
           != /*Atlas.Definitions.AntennaDefinition_TypeInfo*/ lRam0000000003d1fc20)))) {
        if ((bVar1 < *(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300)) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8 + 300) * 8 + -8
                     ) != /*Atlas.Definitions.GliderDefinition_TypeInfo*/ lRam0000000003d21ba8)) {
          if (bVar1 < *(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300)) {
            return plVar5;
          }
          if (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278 + 300) * 8 +
                       -8) != /*Atlas.Definitions.BoostDefinition_TypeInfo*/ lRam0000000003d20278) {
            return plVar5;
          }
          goto LAB_014e3a04;
        }
        if ((param_4[0x14] == 0) ||
           (lVar8 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(param_4[0x14],uRam0000000003d57868), lVar8 == 0))
        goto code_r0x014e3afc;
        Atlas_Gameplay_Kart_BaseVisualBehaviour__SetGliding(lVar8,1,0);
        Atlas_Gameplay_Kart_GliderVisualBehaviour__SetTrailsEnabled(lVar8,0,0);
      }
      if (param_4[0x14] != 0) {
        plVar5 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(param_4[0x14],0);
        goto code_r0x014e3ae4;
      }
    }
    else if ((param_4[0x1a] != 0) &&
            (lVar8 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(param_4[0x1a],0,0), lVar8 != 0)
            ) {
      Atlas_Gameplay_Kart_KartFEAnimator__PlayRewardScreen(lVar8,0);
      if (param_4[0x1a] != 0) {
        lVar8 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(param_4[0x1a],0,0);
        uVar11 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(plVar9,0);
        if (lVar8 != 0) {
          Atlas_Gameplay_Kart_KartFEAnimator__TriggerFEUnlockCharacter(lVar8,uVar11,0);
          goto code_r0x014e3a80;
        }
      }
    }
code_r0x014e3afc:
    plVar9 = (long *)func_0x00f78af4();
    plVar5 = plVar9;
    if ((bRam0000000003eb4bec & 1) == 0) {
      plVar5 = (long *)func_0x00f78a20(0x3d79018);
      bRam0000000003eb4bec = 1;
    }
    if (*(int *)((long)plVar9 + 0x4c) != 2) {
      return plVar5;
    }
    Atlas_UI_Screens_RewardScreen__EndOfNewItem(plVar9);
    plVar5 = /*STR('event:/UI/Front_End/GeneralButton3')*/ plRam0000000003d79018;
    plVar9 = /*STR('event:/UI/Front_End/GeneralButton3')*/ plRam0000000003d79018;
    if ((bRam0000000003eb4db6 & 1) == 0) {
      func_0x00f78a20(0x3d2faf8,0);
      func_0x00f78a20(0x3d2fb00);
      plVar9 = (long *)func_0x00f78a20(0x3d25580);
      bRam0000000003eb4db6 = 1;
    }
    if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
      return plVar9;
    }
    lVar8 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
    if (lVar8 != 0) {
      plVar9 = (long *)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar8,plVar5,uRam0000000003d2faf8);
      if ((int)plVar9 == 0) {
        return plVar9;
      }
      if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
          (lVar8 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar8 != 0)) &&
         (plVar5 = (long *)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar8,plVar5,uRam0000000003d2fb00), plVar5 != (long *)0x0
         )) {
        /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,plVar5,0,0);
        return plVar5;
      }
    }
    param_4 = (long *)func_0x00f78af4();
    puVar3 = &stack0xffffffffffffff60;
    puStack_68 = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
    ppuVar12 = &puStack_70;
    puStack_70 = &stack0xffffffffffffffc0;
    if ((bRam0000000003eb4d8b & 1) == 0) {
      func_0x00f78a20(0x3d24188);
      func_0x00f78a20(0x3d5e780);
      func_0x00f78a20(0x3d5e868);
      bRam0000000003eb4d8b = 1;
    }
    plVar5 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
    if ((plVar5 != (long *)0x0) && (*plVar5 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
      uVar11 = func_0x00f78e5c(plVar5);
      lVar8 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
      if (lVar8 == 0) {
        func_0x00f78a24(0x3d23938,0,0);
        uVar10 = func_0x00f78aec();
        uVar11 = func_0x00f78a24(0x3d7b500);
        /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar10,uVar11,0);
      }
      else {
        if (pcRam0000000003ec01d0 == (code *)0x0) {
          pcRam0000000003ec01d0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                      );
        }
        uVar7 = (*pcRam0000000003ec01d0)(uVar11);
        if ((uVar7 & 1) != 0) {
          if (pcRam0000000003ec01e0 == (code *)0x0) {
            pcRam0000000003ec01e0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar5 = (long *)(*pcRam0000000003ec01e0)(uVar11,lVar8);
          return plVar5;
        }
        func_0x00f78a24(0x3d1fce8);
        uVar10 = func_0x00f78aec();
        uVar11 = func_0x00f78a24(0x3d6af80);
        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar10,uVar11,0);
      }
      uVar11 = func_0x00f78a24(0x3d5a8a8);
      auVar16 = func_0x00f78ac0(uVar10,uVar11);
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar5 = (long *)(*pcRam0000000003ec01e0)(auVar16._0_8_,auVar16._8_8_);
      return plVar5;
    }
    uVar11 = 0x3d5e780;
    uVar10 = 0x3d5e868;
    fVar14 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    uVar6 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar14 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                            plVar5,4,0);
    plVar9 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar6,uRam0000000003d5e780);
    puVar13 = &UNK_01513b44;
    uVar6 = uRam0000000003d5e868;
  }
  else {
LAB_014e3a04:
    if ((param_4[0x1a] == 0) ||
       (lVar8 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(param_4[0x1a],0,0), lVar8 == 0))
    goto code_r0x014e3afc;
    Atlas_Gameplay_Kart_KartFEAnimator__PlayRewardScreen(lVar8,0);
code_r0x014e3a80:
    if (param_4[0x1a] == 0) goto code_r0x014e3afc;
    plVar5 = (long *)Atlas_FrontEnd_FrontEndScene__GetKartTransform(param_4[0x1a],0,0);
code_r0x014e3ae4:
    puVar3 = &stack0xffffffffffffffc0;
    ppuVar12 = (undefined1 **)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4bf1 & 1) == 0) {
      func_0x00f78a20(0x3d5e7a8);
      func_0x00f78a20(0x3d5e850);
      func_0x00f78a20(0x3d5e888);
      bRam0000000003eb4bf1 = 1;
    }
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    if (plVar5 == (long *)0x0) {
      lVar8 = func_0x00f78af4();
      puStack_68 = (undefined *)0x3eb4000;
      if ((bRam0000000003eb4bf2 & 1) == 0) {
        func_0x00f78a20(0x3d2c8c8);
        bRam0000000003eb4bf2 = 1;
      }
      if (lVar8 == 0) {
        auVar16 = func_0x00f78af4();
        plVar9 = auVar16._8_8_;
        plVar5 = auVar16._0_8_;
        lVar15 = plVar9[1];
        lVar8 = *plVar9;
        plVar5[2] = plVar9[2];
        plVar5[1] = lVar15;
        *plVar5 = lVar8;
        return plVar5;
      }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar5 = (long *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(lRam0000000003d2c8c8 + 0x18) + 0xc0) + 0x38)
                       )();
      return plVar5;
    }
    uVar10 = 0x3d5e000;
    uVar11 = 0x3d5e000;
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(plVar5,0);
    /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    uVar6 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(plVar5,0);
    plVar9 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar6,0x1b,uRam0000000003d5e7a8);
    puVar13 = &UNK_014e3d38;
    uVar6 = uRam0000000003d5e850;
  }
  *(undefined8 *)(puVar3 + -0x30) = uVar11;
  *(undefined8 *)(puVar3 + -0x28) = uVar10;
  *(long **)(puVar3 + -0x20) = plVar5;
  *(long **)(puVar3 + -0x18) = param_4;
  *(undefined1 ***)(puVar3 + -0x10) = ppuVar12;
  *(undefined **)(puVar3 + -8) = puVar13;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,param_4,uVar6);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((plVar9 != (long *)0x0) && ((char)plVar9[0x1d] != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar4 != 0) {
      lVar8 = func_0x00f78adc(param_4,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
      if ((uVar7 & 1) == 0) {
        if (param_4 == (long *)0x0) goto code_r0x018eef34;
        lVar8 = (**(code **)(*param_4 + 0x168))(param_4,*(undefined8 *)(*param_4 + 0x170));
      }
      else {
        if (lVar8 == 0) {
code_r0x018eef34:
          auVar16 = func_0x00f78af4();
          plVar5 = auVar16._0_8_;
          *(undefined8 *)(puVar3 + -0x60) = uVar11;
          *(long *)(puVar3 + -0x58) = lVar8;
          *(long **)(puVar3 + -0x50) = param_4;
          *(long **)(puVar3 + -0x48) = plVar9;
          *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
          *(undefined **)(puVar3 + -0x38) = &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((plVar5 != (long *)0x0) && ((char)plVar5[0x1d] != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar2 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(plVar5,auVar16._8_8_,cVar2 != '\0',0);
          }
          return plVar5;
        }
        lVar8 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar8,0);
      }
      plVar9[0x19] = lVar8;
    }
    plVar9[9] = (long)param_4;
  }
  return plVar9;
}



// ============================================================
// RVA: 0x14e3b00 | Atlas.UI.Screens.RewardScreen.OnSkipTapped
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_Screens_RewardScreen__OnSkipTapped
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  lVar3 = param_4;
  if ((bRam0000000003eb4bec & 1) == 0) {
    lVar3 = func_0x00f78a20(0x3d79018);
    bRam0000000003eb4bec = 1;
  }
  if (*(int *)(param_4 + 0x4c) != 2) {
    return lVar3;
  }
  Atlas_UI_Screens_RewardScreen__EndOfNewItem(param_4);
  lVar3 = /*STR('event:/UI/Front_End/GeneralButton3')*/ lRam0000000003d79018;
  lVar4 = /*STR('event:/UI/Front_End/GeneralButton3')*/ lRam0000000003d79018;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8,0);
    func_0x00f78a20(0x3d2fb00);
    lVar4 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return lVar4;
  }
  lVar4 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar4 != 0) {
    lVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar4,lVar3,uRam0000000003d2faf8);
    if ((int)lVar4 == 0) {
      return lVar4;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar4 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar4 != 0)) &&
       (lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar4,lVar3,uRam0000000003d2fb00), lVar3 != 0)) {
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar3,0,0);
      return lVar3;
    }
  }
  plVar5 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar6 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar5,0);
  if ((plVar6 != (long *)0x0) && (*plVar6 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar7 = func_0x00f78e5c(plVar6);
    lVar3 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
    if (lVar3 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar9 = func_0x00f78aec();
      uVar7 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar9,uVar7,0);
    }
    else {
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar8 = (*pcRam0000000003ec01d0)(uVar7);
      if ((uVar8 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar3 = (*pcRam0000000003ec01e0)(uVar7,lVar3);
        return lVar3;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar9 = func_0x00f78aec();
      uVar7 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar9,uVar7,0);
    }
    uVar7 = func_0x00f78a24(0x3d5a8a8);
    auVar11 = func_0x00f78ac0(uVar9,uVar7);
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*pcRam0000000003ec01e0)(auVar11._0_8_,auVar11._8_8_);
    return lVar3;
  }
  fVar10 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar7 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar10 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                          plVar6,4,0);
  lVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar7,uRam0000000003d5e780);
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar5,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar2 != 0) {
      lVar4 = func_0x00f78adc(plVar5,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
      if ((uVar8 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto code_r0x018eef34;
        uVar7 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      }
      else {
        if (lVar4 == 0) {
code_r0x018eef34:
          auVar11 = func_0x00f78af4();
          lVar3 = auVar11._0_8_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar3,auVar11._8_8_,cVar1 != '\0',0);
          }
          return lVar3;
        }
        uVar7 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar4,0);
      }
      *(undefined8 *)(lVar3 + 200) = uVar7;
    }
    *(long **)(lVar3 + 0x48) = plVar5;
  }
  return lVar3;
}



// ============================================================
// RVA: 0x14e3b6c | Atlas.UI.Screens.RewardScreen.ReturnToPreviousScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */
/* WARNING: Removing unreachable block (ram,0x01470820) */
/* WARNING: Removing unreachable block (ram,0x01470828) */
/* WARNING: Removing unreachable block (ram,0x01470848) */
/* WARNING: Removing unreachable block (ram,0x01470850) */
/* WARNING: Removing unreachable block (ram,0x01470858) */
/* WARNING: Removing unreachable block (ram,0x01470874) */
/* WARNING: Removing unreachable block (ram,0x01470884) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_UI_Screens_RewardScreen__ReturnToPreviousScreen(dword *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  dword **ppdVar5;
  dword **ppdVar6;
  undefined1 *puVar7;
  dword **ppdVar8;
  dword **ppdVar9;
  dword **ppdVar10;
  bool bVar11;
  int iVar12;
  dword *pdVar14;
  long lVar15;
  dword *pdVar16;
  int iVar13;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  dword *pdVar20;
  long *extraout_x1;
  long *plVar21;
  dword *pdVar22;
  dword *pdVar23;
  long lVar24;
  ulong uVar25;
  int *piVar26;
  uint uVar27;
  dword *pdVar28;
  dword *unaff_x21;
  dword *unaff_x22;
  code *pcVar29;
  long lVar30;
  undefined8 unaff_x24;
  dword **ppdVar31;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar32;
  undefined8 unaff_x28;
  dword **ppdVar33;
  undefined *puVar34;
  undefined4 extraout_s0;
  undefined8 uVar35;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  dword *apdStack_158 [5];
  undefined8 uStack_120;
  dword *pdStack_118;
  dword *pdStack_110;
  long lStack_108;
  dword *apdStack_100 [10];
  dword *pdStack_b0;
  dword *pdStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  dword *pdStack_90;
  dword *pdStack_88;
  dword *pdStack_70;
  dword *pdStack_68;
  dword *pdStack_60;
  dword *pdStack_58;
  
  pdVar28 = (dword *)0x3eb4000;
  if ((bRam0000000003eb4bee & 1) == 0) {
    func_0x00f78a20(0x3d41288);
    func_0x00f78a20(0x3d41290);
    bRam0000000003eb4bee = 1;
  }
  lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41288);
  if (lVar15 == 0) {
LAB_014e3c80:
    auVar36 = func_0x00f78af4();
    lVar15 = auVar36._8_8_;
    pdStack_70 = unaff_x22;
    pdStack_68 = unaff_x21;
    pdStack_60 = pdVar28;
    pdStack_58 = param_1;
    if ((bRam0000000003eb4bf1 & 1) == 0) {
      func_0x00f78a20(0x3d5e7a8);
      func_0x00f78a20(0x3d5e850);
      func_0x00f78a20(0x3d5e888);
      bRam0000000003eb4bf1 = 1;
    }
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    if (lVar15 == 0) {
      lVar30 = func_0x00f78af4();
      pdStack_a8 = (dword *)0x3eb4000;
      pdStack_88 = (dword *)&Atlas_UI_Screens_RewardScreen___ctor;
      pdStack_b0 = unaff_x22;
      pdStack_90 = (dword *)&stack0xffffffffffffffb0;
      if ((bRam0000000003eb4bf2 & 1) == 0) {
        uStack_a0 = (dword **)lVar15;
        puStack_98 = (undefined *)auVar36._0_8_;
        func_0x00f78a20(0x3d2c8c8);
        auVar36._8_8_ = uStack_a0;
        auVar36._0_8_ = puStack_98;
        bRam0000000003eb4bf2 = 1;
      }
      uStack_a0 = auVar36._8_8_;
      puStack_98 = auVar36._0_8_;
      if (lVar30 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar28 = (dword *)(*(code *)**(undefined8 **)
                                       (*(long *)(*(long *)(lRam0000000003d2c8c8 + 0x18) + 0xc0) +
                                       0x38))();
        return pdVar28;
      }
      auVar36 = func_0x00f78af4();
      puVar18 = auVar36._8_8_;
      pdVar28 = auVar36._0_8_;
      uVar35 = puVar18[1];
      uVar19 = *puVar18;
      *(undefined8 *)(pdVar28 + 4) = puVar18[2];
      *(undefined8 *)(pdVar28 + 2) = uVar35;
      *(undefined8 *)pdVar28 = uVar19;
      return pdVar28;
    }
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar15,0);
    /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    uVar19 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(lVar15,0);
    uVar19 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar19,0x1b,uRam0000000003d5e7a8);
    pdVar28 = (dword *)/*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar19,auVar36._0_8_,uRam0000000003d5e850);
    if ((bRam0000000003eb66c3 & 1) == 0) {
      func_0x00f78a20(0x3d20bc0,1,uRam0000000003d5e888);
      func_0x00f78a20(0x3d25440);
      bRam0000000003eb66c3 = 1;
    }
    if ((pdVar28 != (dword *)0x0) && (*(char *)(pdVar28 + 0x3a) != '\0')) {
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = *(undefined4 *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x34);
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(pdVar28,uVar2,1,0);
    }
    return pdVar28;
  }
  if (*(long *)(lVar15 + 0x10) != 0) {
    lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41288);
    if ((lVar15 != 0) && (pdVar16 = *(dword **)(lVar15 + 0x10), pdVar16 != (dword *)0x0)) {
      uVar19 = 0;
      pdStack_58 = pdVar16;
      lVar15 = *(long *)(pdVar16 + 0x1a);
      if (lVar15 == 0) {
        ppdVar31 = &pdStack_58;
        lVar30 = 1;
      }
      else {
        lVar30 = *(long *)(lVar15 + 0x18);
        if (lVar30 == 0) {
          return pdVar16;
        }
        ppdVar31 = (dword **)(lVar15 + 0x20);
      }
      lVar15 = 0;
      do {
        pdVar28 = ppdVar31[lVar15];
        pcVar29 = *(code **)(pdVar28 + 4);
        plVar21 = *(long **)(pdVar28 + 8);
        lVar17 = *(long *)(pdVar28 + 10);
        if (*(short *)(lVar17 + 0x48) == -1) {
          func_0x00f78ad8(lVar17,uVar19);
        }
        iVar12 = func_0x00f78a4c(lVar17);
        if (iVar12 == 0) {
          if ((((plVar21 == (long *)0x0) || (*(short *)(lVar17 + 0x48) == -1)) ||
              ((*(byte *)(*plVar21 + 0x115) & 1) != 0)) || (*(long *)(pdVar16 + 6) == 0))
          goto code_r0x01565d7c;
          iVar12 = func_0x00f78a44(lVar17);
          iVar13 = func_0x00f78ec0(lVar17);
          if (iVar12 == 0) {
            uVar4 = *(ushort *)(lVar17 + 0x48);
            if (iVar13 == 0) {
              lVar17 = *plVar21 + (ulong)uVar4 * 0x10;
              auVar36 = (**(code **)(lVar17 + 0x138))(plVar21,*(undefined8 *)(lVar17 + 0x140));
              goto code_r0x01565d88;
            }
            lVar17 = func_0x00f78a48(lVar17);
            lVar24 = *plVar21;
            uVar25 = (ulong)*(ushort *)(lVar24 + 0x12a);
            if (uVar25 != 0) {
              piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == lVar17) {
                  puVar18 = (undefined8 *)
                            (lVar24 + (long)(int)(*piVar26 + (uint)uVar4) * 0x10 + 0x138);
                  goto code_r0x01565e4c;
                }
                piVar26 = piVar26 + 4;
                uVar25 = uVar25 - 1;
              } while (uVar25 != 0);
            }
            puVar18 = (undefined8 *)func_0x00fac1f0(plVar21,lVar17,(ulong)uVar4);
code_r0x01565e4c:
            pcVar29 = (code *)*puVar18;
            puVar18 = (undefined8 *)puVar18[1];
          }
          else {
            if (iVar13 == 0) {
              uVar19 = *(undefined8 *)(*plVar21 + (ulong)*(ushort *)(lVar17 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar24 = *plVar21;
              uVar25 = (ulong)*(ushort *)(lVar24 + 0x12a);
              if (uVar25 != 0) {
                piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == *(long *)(lVar17 + 0x18)) {
                    lVar24 = lVar24 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar17 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01565e24;
                  }
                  piVar26 = piVar26 + 4;
                  uVar25 = uVar25 - 1;
                } while (uVar25 != 0);
              }
              lVar24 = func_0x00fac1f0(plVar21);
code_r0x01565e24:
              uVar19 = *(undefined8 *)(lVar24 + 8);
            }
            puVar18 = (undefined8 *)func_0x00f78acc(uVar19,lVar17);
            pcVar29 = (code *)*puVar18;
          }
          auVar36 = (*pcVar29)(plVar21,puVar18);
        }
        else if (*(char *)(lVar17 + 0x4a) == '\0') {
          auVar36 = (*pcVar29)(lVar17);
        }
        else {
code_r0x01565d7c:
          auVar36 = (*pcVar29)(plVar21,lVar17);
        }
code_r0x01565d88:
        uVar19 = auVar36._8_8_;
        lVar15 = lVar15 + 1;
        if (lVar15 == lVar30) {
          return auVar36._0_8_;
        }
      } while( true );
    }
    goto LAB_014e3c80;
  }
  lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41290);
  if (lVar15 == 0) goto LAB_014e3c80;
  pdVar28 = *(dword **)(lVar15 + 0x10);
  lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41288);
  if (lVar15 == 0) goto LAB_014e3c80;
  unaff_x21 = *(dword **)(lVar15 + 0x18);
  lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41288);
  if (lVar15 == 0) goto LAB_014e3c80;
  unaff_x22 = (dword *)(ulong)*(uint *)(lVar15 + 0x20);
  lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41288);
  if ((lVar15 == 0) || (pdVar28 == (dword *)0x0)) goto LAB_014e3c80;
  pdVar16 = *(dword **)(lVar15 + 0x28);
  uVar19 = 0;
  pdVar22 = unaff_x22;
  pdVar23 = pdVar16;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  pdVar14 = *(dword **)(pdVar28 + 4);
  pdStack_60 = (dword *)&stack0xfffffffffffffff0;
  if (pdVar14 != (dword *)0x0) {
    uVar19 = 0;
    pdStack_58 = (dword *)&UNK_01470820;
    pdVar20 = unaff_x21;
    pdVar22 = unaff_x22;
    pdVar23 = pdVar16;
code_r0x02f87f38:
    pdStack_88 = (dword *)0x3eb4000;
    pdStack_70 = pdVar28;
    pdStack_68 = unaff_x21;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    uStack_120 = 0x3ebc000;
    apdStack_100[3] = (dword *)&UNK_02f87f9c;
    pdStack_118 = pdVar20;
    pdStack_110 = pdVar23;
    lStack_108 = uVar19;
    apdStack_100[0] = pdVar14;
    apdStack_100[1] = pdVar22;
    apdStack_100[2] = (dword *)&pdStack_60;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar15 = *(long *)(pdVar14 + 0x1e);
    if (lVar15 != 0) {
      iVar12 = *(int *)(lVar15 + 0x18);
      if (iVar12 < 1) {
        return (dword *)0x0;
      }
      iVar13 = 1;
      pdVar28 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar15 + 0x18) <= iVar13 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)(iVar13 - 1U) * 0x20 + 0x20);
        if (lVar15 == 0) break;
        uVar25 = /*System.String$$Equals*/ func_0x029caa48(lVar15,pdVar20,5,0);
        if ((uVar25 & 1) != 0) {
          return pdVar28;
        }
        pdVar28 = (dword *)(ulong)(iVar13 < iVar12);
        if (iVar12 == iVar13) {
          return pdVar28;
        }
        lVar15 = *(long *)(pdVar14 + 0x1e);
        iVar13 = iVar13 + 1;
      } while (lVar15 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar36 = func_0x00f78af4();
  pdVar20 = auVar36._8_8_;
  pdStack_70 = (dword *)&pdStack_60;
  pdStack_58 = (dword *)&Atlas_UI_AtlasUIManager__ShowScreen;
  pdVar14 = *(dword **)(auVar36._0_8_ + 0x10);
  if (pdVar14 != (dword *)0x0) {
    pdStack_58 = (dword *)&Atlas_UI_AtlasUIManager__ShowScreen;
    goto code_r0x02f87f38;
  }
  auVar36 = func_0x00f78af4();
  uVar19 = auVar36._8_8_;
  ppdVar31 = &pdStack_70;
  pdStack_68 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
  pdVar14 = *(dword **)(auVar36._0_8_ + 0x10);
  if (pdVar14 != (dword *)0x0) {
    pdVar22 = (dword *)0x0;
    pdStack_68 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
    pdStack_90 = unaff_x22;
    pdStack_88 = pdVar16;
    pdStack_70 = (dword *)&pdStack_60;
    if ((bRam0000000003ebc64b & 1) == 0) {
      pdStack_70 = (dword *)&pdStack_60;
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar15 = *(long *)(pdVar14 + 0x1c);
    if (lVar15 != 0) {
      lVar30 = lVar15;
      if (*(uint *)(lVar15 + 0x18) <= auVar36._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar30 = *(long *)(pdVar14 + 0x1c);
      }
      if (lVar30 != 0) {
        lVar15 = *(long *)(lVar15 + 0x10) + (long)(int)auVar36._8_4_ * 0x28;
        apdStack_100[7] = *(dword **)(lVar15 + 0x28);
        apdStack_100[6] = *(dword **)(lVar15 + 0x20);
        apdStack_100[5] = (dword *)CONCAT26(apdStack_100[5]._6_2_,*(undefined6 *)(lVar15 + 0x42));
        pdStack_b0 = (dword *)0x0;
        pdStack_a8 = (dword *)0x0;
        uStack_a0 = (dword **)
                    CONCAT26(*(undefined2 *)(lVar15 + 0x46),
                             CONCAT42(*(undefined4 *)(lVar15 + 0x42),1));
        apdStack_100[8] = apdStack_100[6];
        apdStack_100[9] = apdStack_100[7];
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar30,uVar19,apdStack_100 + 8,uRam0000000003d3ddd0);
        pdVar28 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(pdVar14,uVar19);
        return pdVar28;
      }
    }
    auVar36 = func_0x00f78af4();
    pdVar20 = auVar36._8_8_;
    ppdVar6 = &stack0xfffffffffffffef0;
    apdStack_100[3] = (dword *)&Core_UI2_UIManager__GetCurrentScreenID;
    ppdVar31 = apdStack_100 + 2;
    pdStack_110 = unaff_x22;
    lStack_108 = lVar15;
    apdStack_100[0] = pdVar14;
    apdStack_100[1] = (dword *)uVar19;
    apdStack_100[2] = (dword *)&pdStack_70;
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar15 = *(long *)(auVar36._0_8_ + 0x70);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= auVar36._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)auVar36._8_4_ * 0x28 + 0x28);
      if (lVar15 == 0) {
        pdVar28 = (dword *)0x0;
      }
      else {
        pdVar28 = *(dword **)(lVar15 + 0x40);
      }
      return pdVar28;
    }
    puVar34 = &Core_UI2_UIScreen__ForceExit;
    unaff_x21 = (dword *)func_0x00f78af4();
    pdVar28 = (dword *)0x0;
    pdVar16 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar36 = func_0x00f78af4();
  pdVar20 = auVar36._8_8_;
  puVar32 = &stack0xffffffffffffff80;
  lVar15 = *(long *)(auVar36._0_8_ + 0x10);
  auVar37._8_8_ = pdVar16;
  auVar37._0_8_ = lVar15;
  if (lVar15 != 0) {
    pdVar22 = (dword *)0x0;
    ppdVar5 = &pdStack_70;
    puVar34 = &Atlas_UI_AtlasUIManager__ClearLayer;
    pdVar16 = pdVar28;
    goto code_r0x02f877a8;
  }
  auVar36 = func_0x00f78af4();
  pdStack_90 = (dword *)&stack0xffffffffffffff80;
  pdStack_88 = (dword *)&Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar15 = *(long *)(auVar36._0_8_ + 0x10);
  auVar37._8_8_ = auVar36._8_8_;
  auVar37._0_8_ = lVar15;
  if (lVar15 != 0) {
    puVar7 = &stack0xffffffffffffff80;
    puVar34 = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
    pdVar20 = pdVar22;
    while( true ) {
      ppdVar5 = (dword **)(puVar7 + -0x30);
      *(dword **)(puVar7 + -0x30) = unaff_x22;
      *(dword **)(puVar7 + -0x28) = pdVar16;
      *(dword **)(puVar7 + -0x20) = pdVar28;
      *(dword **)(puVar7 + -0x18) = unaff_x21;
      *(undefined1 **)(puVar7 + -0x10) = puVar32;
      *(undefined **)(puVar7 + -8) = puVar34;
      ppdVar31 = (dword **)(puVar7 + -0x10);
      puVar34 = &UNK_02f883d8;
      pdVar22 = pdVar20;
      unaff_x21 = pdVar23;
      pdVar16 = pdVar20;
      unaff_x22 = auVar37._0_8_;
code_r0x02f877a8:
      pdVar28 = auVar37._0_8_;
      ppdVar6 = (dword **)((long)ppdVar5 + -0x60);
      *(dword **)((long)ppdVar5 + -0x30) = unaff_x22;
      *(long *)((long)ppdVar5 + -0x28) = auVar37._8_8_;
      *(dword **)((long)ppdVar5 + -0x20) = pdVar16;
      *(dword **)((long)ppdVar5 + -0x18) = unaff_x21;
      *(dword ***)((long)ppdVar5 + -0x10) = ppdVar31;
      *(undefined **)((long)ppdVar5 + -8) = puVar34;
      ppdVar31 = (dword **)((long)ppdVar5 + -0x10);
      pdVar16 = pdVar28;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar16 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar27 = (uint)pdVar20;
      if (((int)uVar27 < 0) || ((int)*(long *)(pdVar28 + 0x14) <= (int)uVar27)) {
        return pdVar16;
      }
      lVar15 = *(long *)(pdVar28 + 0x1c);
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(lVar15 + 0x10) + ((ulong)pdVar20 & 0xffffffff) * 0x28;
      unaff_x22 = *(dword **)(lVar15 + 0x20);
      unaff_x21 = *(dword **)(lVar15 + 0x28);
      *(undefined4 *)((long)ppdVar5 + -0x60) = *(undefined4 *)(lVar15 + 0x42);
      *(undefined2 *)((long)ppdVar5 + -0x5c) = *(undefined2 *)(lVar15 + 0x46);
      if (unaff_x21 == (dword *)0x0) {
        lVar15 = *(long *)(pdVar28 + 0x1c);
        if (lVar15 != 0) {
          *(dword **)((long)ppdVar5 + -0x58) = unaff_x22;
          *(undefined8 *)((long)ppdVar5 + -0x50) = 0;
          *(undefined8 *)((long)ppdVar5 + -0x48) = 0;
          *(undefined8 *)((long)ppdVar5 + -0x40) = 0;
          *(undefined2 *)((long)ppdVar5 + -0x38) = 0;
          *(undefined4 *)((long)ppdVar5 + -0x36) = *(undefined4 *)((long)ppdVar5 + -0x60);
          *(undefined2 *)((long)ppdVar5 + -0x32) = *(undefined2 *)((long)ppdVar5 + -0x5c);
          pdVar28 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar15,pdVar20,(undefined1 *)((long)ppdVar5 + -0x58),
                                             uRam0000000003d3ddd0);
          return pdVar28;
        }
        break;
      }
      puVar34 = &UNK_02f87848;
      pdVar16 = unaff_x21;
code_r0x02f882d8:
      *(dword **)((long)ppdVar6 + -0x20) = pdVar28;
      *(dword **)((long)ppdVar6 + -0x18) = pdVar20;
      *(dword ***)((long)ppdVar6 + -0x10) = ppdVar31;
      *(undefined **)((long)ppdVar6 + -8) = puVar34;
      (**(code **)(*(long *)unaff_x21 + 0x218))
                (unaff_x21,*(undefined8 *)(*(long *)unaff_x21 + 0x220));
      if (*(long *)(unaff_x21 + 10) != 0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(unaff_x21 + 10),0);
        unaff_x21[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(unaff_x21,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar28 = (dword *)(**(code **)(*(long *)unaff_x21 + 0x228))
                                     (unaff_x21,*(undefined8 *)(*(long *)unaff_x21 + 0x230));
        return pdVar28;
      }
      func_0x00f78af4();
      puVar7 = (undefined1 *)((long)ppdVar6 + -0x40);
      *(dword **)((long)ppdVar6 + -0x40) = pdVar28;
      *(dword **)((long)ppdVar6 + -0x38) = unaff_x21;
      *(undefined1 **)((long)ppdVar6 + -0x30) = (undefined1 *)((long)ppdVar6 + -0x10);
      *(undefined **)((long)ppdVar6 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      puVar32 = (undefined1 *)((long)ppdVar6 + -0x30);
      if (extraout_x1 != (long *)0x0) {
        lVar15 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar19 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar19,lVar15);
        pdVar28 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar28;
      }
      puVar34 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar37 = func_0x00f78af4();
      pdVar20 = pdVar22;
    }
    lVar15 = func_0x00f78af4();
    *(undefined8 *)((long)ppdVar5 + -0xa0) = unaff_d9;
    *(undefined8 *)((long)ppdVar5 + -0x98) = unaff_d8;
    *(dword **)((long)ppdVar5 + -0x90) = unaff_x22;
    *(undefined8 *)((long)ppdVar5 + -0x88) = 0;
    *(dword **)((long)ppdVar5 + -0x80) = pdVar28;
    *(dword **)((long)ppdVar5 + -0x78) = pdVar20;
    *(dword ***)((long)ppdVar5 + -0x70) = ppdVar31;
    *(undefined **)((long)ppdVar5 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar19 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar19,0);
    if (0 < *(int *)(lVar15 + 0x50)) {
      iVar12 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar15,iVar12);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar15,iVar12);
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(lVar15 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar15);
    *(undefined8 *)((long)ppdVar5 + -0x80) = *(undefined8 *)((long)ppdVar5 + -0x80);
    *(undefined8 *)((long)ppdVar5 + -0x78) = *(undefined8 *)((long)ppdVar5 + -0x78);
    *(undefined8 *)((long)ppdVar5 + -0x70) = *(undefined8 *)((long)ppdVar5 + -0x70);
    *(undefined8 *)((long)ppdVar5 + -0x68) = *(undefined8 *)((long)ppdVar5 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar28 = (dword *)(*pcRam0000000003ec05a0)(uVar19);
    return pdVar28;
  }
  auVar36 = func_0x00f78af4();
  puStack_98 = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar15 = *(long *)(auVar36._0_8_ + 0x10);
  if (lVar15 == 0) {
    uStack_a0 = &pdStack_90;
    auVar36 = func_0x00f78af4();
    ppdVar31 = &pdStack_b0;
    pdStack_a8 = (dword *)&Atlas_UI_AtlasUIManager__GetLayerState;
    lVar15 = *(long *)(auVar36._0_8_ + 0x10);
    auVar38._8_8_ = auVar36._8_8_;
    auVar38._0_8_ = lVar15;
    if (lVar15 != 0) {
      pdVar23 = (dword *)0x0;
      ppdVar8 = (dword **)&uStack_a0;
      puVar34 = &Atlas_UI_AtlasUIManager__GetLayerState;
      pdStack_b0 = (dword *)&uStack_a0;
      goto code_r0x02f884dc;
    }
    pdStack_b0 = (dword *)&uStack_a0;
    auVar36 = func_0x00f78af4();
    ppdVar33 = apdStack_100 + 8;
    apdStack_100[9] = (dword *)&Atlas_UI_AtlasUIManager__EnableInput;
    lVar15 = *(long *)(auVar36._0_8_ + 0x10);
    auVar39._8_8_ = auVar36._8_8_;
    auVar39._0_8_ = lVar15;
    if (lVar15 == 0) {
      apdStack_100[8] = (dword *)&pdStack_b0;
      auVar36 = func_0x00f78af4();
      apdStack_100[4] = (dword *)(apdStack_100 + 6);
      apdStack_100[7] = (dword *)&Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar15 = *(long *)(auVar36._0_8_ + 0x10);
      auVar40._8_8_ = auVar36._8_8_;
      auVar40._0_8_ = lVar15;
      if (lVar15 == 0) {
        apdStack_100[6] = (dword *)(apdStack_100 + 8);
        pdVar22 = (dword *)func_0x00f78af4();
        apdStack_100[5] = (dword *)&Atlas_UI_AtlasUIManager___ctor;
        apdStack_100[0] = unaff_x22;
        apdStack_100[1] = pdVar16;
        apdStack_100[2] = pdVar28;
        apdStack_100[3] = unaff_x21;
        ppdVar31 = apdStack_100 + 6;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
          ppdVar31 = (dword **)apdStack_100[4];
        }
        apdStack_100[4] = (dword *)ppdVar31;
        uVar19 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar19,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar22 + 0xc) = uVar19;
        return pdVar22;
      }
      ppdVar10 = apdStack_100 + 8;
      puVar34 = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      apdStack_100[6] = (dword *)(apdStack_100 + 8);
      goto code_r0x02f88674;
    }
    ppdVar9 = &pdStack_b0;
    puVar34 = &Atlas_UI_AtlasUIManager__EnableInput;
    pdVar23 = pdVar22;
    pdVar22 = pdVar16;
    apdStack_100[8] = (dword *)&pdStack_b0;
  }
  else {
    pdVar23 = (dword *)0x0;
    ppdVar8 = apdStack_100 + 8;
    puStack_98 = &Atlas_UI_AtlasUIManager__IsLayerReady;
    apdStack_100[8] = unaff_x22;
    apdStack_100[9] = pdVar16;
    pdStack_b0 = pdVar28;
    pdStack_a8 = unaff_x21;
    uStack_a0 = &pdStack_90;
    if ((bRam0000000003ebc64f & 1) == 0) {
      uStack_a0 = &pdStack_90;
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar27 = auVar36._8_4_;
    if (((int)uVar27 < 0) || (*(int *)(lVar15 + 0x50) <= (int)uVar27)) {
      return (dword *)0x0;
    }
    lVar15 = *(long *)(lVar15 + 0x70);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= uVar27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar30 = *(long *)(lVar15 + 0x10) + ((ulong)auVar36._8_8_ & 0xffffffff) * 0x28;
      lVar15 = *(long *)(lVar30 + 0x28);
      cVar3 = *(char *)(lVar30 + 0x40);
      iVar12 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar30 + 0x30),0);
      if (iVar12 == 0 || cVar3 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar15 != 0) && (*(int *)(lVar15 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    puVar34 = &Core_UI2_UIManager__GetLayerState;
    auVar38 = func_0x00f78af4();
    pdVar28 = (dword *)0x0;
    unaff_x21 = auVar36._8_8_;
    pdVar16 = (dword *)0x3ebc000;
code_r0x02f884dc:
    ppdVar9 = (dword **)((long)ppdVar8 + -0x30);
    *(dword **)((long)ppdVar8 + -0x30) = unaff_x22;
    *(dword **)((long)ppdVar8 + -0x28) = pdVar16;
    *(dword **)((long)ppdVar8 + -0x20) = pdVar28;
    *(dword **)((long)ppdVar8 + -0x18) = unaff_x21;
    *(undefined8 **)((long)ppdVar8 + -0x10) = &uStack_a0;
    *(undefined **)((long)ppdVar8 + -8) = puVar34;
    ppdVar31 = (dword **)((long)ppdVar8 + -0x10);
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar15 = *(long *)(auVar38._0_8_ + 0x70);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= auVar38._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)auVar38._8_4_ * 0x28 + 0x28);
      if (lVar15 == 0) {
        pdVar28 = &MACH_HEADER.cputype;
      }
      else {
        pdVar28 = (dword *)(ulong)*(uint *)(lVar15 + 0x4c);
      }
      return pdVar28;
    }
    puVar34 = &Core_UI2_UIManager__EnableInput;
    auVar39 = func_0x00f78af4();
    pdVar28 = (dword *)0x0;
    unaff_x21 = auVar38._8_8_;
    pdVar22 = (dword *)0x3ebc000;
  }
  pdVar14 = auVar39._8_8_;
  pdVar16 = auVar39._0_8_;
  ppdVar10 = (dword **)((long)ppdVar9 + -0x40);
  *(undefined8 *)((long)ppdVar9 + -0x40) = unaff_x24;
  *(undefined8 *)((long)ppdVar9 + -0x38) = 0x3eb4000;
  *(dword **)((long)ppdVar9 + -0x30) = unaff_x22;
  *(dword **)((long)ppdVar9 + -0x28) = pdVar22;
  *(dword **)((long)ppdVar9 + -0x20) = pdVar28;
  *(dword **)((long)ppdVar9 + -0x18) = unaff_x21;
  *(dword ***)((long)ppdVar9 + -0x10) = ppdVar31;
  *(undefined **)((long)ppdVar9 + -8) = puVar34;
  ppdVar33 = (dword **)((long)ppdVar9 + -0x10);
  unaff_x22 = (dword *)0x3ebc000;
  pdVar22 = pdVar23;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(pdVar16 + 0x1a) != 0) {
    pdVar22 = (dword *)(ulong)((uint)pdVar23 ^ 1);
    pdVar28 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar16 + 0x1a),pdVar14,pdVar22,0);
    lVar15 = *(long *)(pdVar16 + 0x1c);
    unaff_x22 = (dword *)0x0;
    if (lVar15 != 0) {
      uVar27 = auVar39._8_4_;
      if (*(uint *)(lVar15 + 0x18) <= uVar27) {
        pdVar28 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28) == 0) ||
         (unaff_x22 = *(dword **)(pdVar16 + 0xc), unaff_x22 == (dword *)0x0)) {
        return pdVar28;
      }
      lVar15 = *(long *)(pdVar16 + 0x1c);
      pdVar16 = (dword *)0x0;
      if (lVar15 != 0) {
        if (*(uint *)(lVar15 + 0x18) <= uVar27) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar21 = *(long **)(*(long *)(lVar15 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28);
        *(undefined8 *)((long)ppdVar9 + -0x60) = unaff_x28;
        *(undefined8 *)((long)ppdVar9 + -0x58) = unaff_x27;
        *(undefined8 *)((long)ppdVar9 + -0x50) = unaff_x26;
        *(undefined8 *)((long)ppdVar9 + -0x48) = unaff_x25;
        *(undefined8 *)((long)ppdVar9 + -0x40) = *(undefined8 *)((long)ppdVar9 + -0x40);
        *(undefined8 *)((long)ppdVar9 + -0x38) = *(undefined8 *)((long)ppdVar9 + -0x38);
        *(undefined8 *)((long)ppdVar9 + -0x30) = *(undefined8 *)((long)ppdVar9 + -0x30);
        *(undefined8 *)((long)ppdVar9 + -0x28) = *(undefined8 *)((long)ppdVar9 + -0x28);
        *(undefined8 *)((long)ppdVar9 + -0x20) = *(undefined8 *)((long)ppdVar9 + -0x20);
        *(undefined8 *)((long)ppdVar9 + -0x18) = *(undefined8 *)((long)ppdVar9 + -0x18);
        *(undefined8 *)((long)ppdVar9 + -0x10) = *(undefined8 *)((long)ppdVar9 + -0x10);
        *(undefined8 *)((long)ppdVar9 + -8) = *(undefined8 *)((long)ppdVar9 + -8);
        *(dword **)((long)ppdVar9 + -0x68) = unaff_x22;
        lVar15 = *(long *)(unaff_x22 + 0x1a);
        if (lVar15 == 0) {
          puVar32 = (undefined1 *)((long)ppdVar9 + -0x68);
          lVar30 = 1;
        }
        else {
          lVar30 = *(long *)(lVar15 + 0x18);
          if (lVar30 == 0) {
            return unaff_x22;
          }
          puVar32 = (undefined1 *)(lVar15 + 0x20);
        }
        lVar15 = 0;
        do {
          lVar17 = *(long *)(puVar32 + lVar15 * 8);
          pcVar29 = *(code **)(lVar17 + 0x10);
          plVar1 = *(long **)(lVar17 + 0x20);
          lVar17 = *(long *)(lVar17 + 0x28);
          if (*(short *)(lVar17 + 0x48) == -1) {
            func_0x00f78ad8(lVar17);
          }
          iVar12 = func_0x00f78a4c(lVar17);
          bVar11 = *(char *)(lVar17 + 0x4a) == '\x03';
          if (iVar12 == 0) {
            if (bVar11) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar28 = (dword *)(*pcVar29)(plVar21,pdVar14,pdVar23,lVar17);
              }
              else {
                if (((*(short *)(lVar17 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(unaff_x22 + 6) == 0)) goto code_r0x01e71aac;
                iVar12 = func_0x00f78a44(lVar17);
                iVar13 = func_0x00f78ec0(lVar17);
                if (iVar12 == 0) {
                  uVar4 = *(ushort *)(lVar17 + 0x48);
                  if (iVar13 == 0) {
                    lVar17 = *plVar1 + (ulong)uVar4 * 0x10;
                    pdVar28 = (dword *)(**(code **)(lVar17 + 0x138))
                                                 (plVar1,plVar21,pdVar14,pdVar23,
                                                  *(undefined8 *)(lVar17 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar17 = func_0x00f78a48(lVar17);
                  lVar24 = *plVar1;
                  uVar25 = (ulong)*(ushort *)(lVar24 + 0x12a);
                  if (uVar25 != 0) {
                    piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == lVar17) {
                        puVar18 = (undefined8 *)
                                  (lVar24 + (long)(int)(*piVar26 + (uint)uVar4) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar26 = piVar26 + 4;
                      uVar25 = uVar25 - 1;
                    } while (uVar25 != 0);
                  }
                  puVar18 = (undefined8 *)func_0x00fac1f0(plVar1,lVar17,(ulong)uVar4);
code_r0x01e71d74:
                  pcVar29 = (code *)*puVar18;
                  puVar18 = (undefined8 *)puVar18[1];
                }
                else {
                  if (iVar13 == 0) {
                    uVar19 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar17 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar24 = *plVar1;
                    uVar25 = (ulong)*(ushort *)(lVar24 + 0x12a);
                    if (uVar25 != 0) {
                      piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar26 + -2) == *(long *)(lVar17 + 0x18)) {
                          lVar24 = lVar24 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar17 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar26 = piVar26 + 4;
                        uVar25 = uVar25 - 1;
                      } while (uVar25 != 0);
                    }
                    lVar24 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar19 = *(undefined8 *)(lVar24 + 8);
                  }
                  puVar18 = (undefined8 *)func_0x00f78acc(uVar19,lVar17);
                  pcVar29 = (code *)*puVar18;
                }
                pdVar28 = (dword *)(*pcVar29)(plVar1,plVar21,pdVar14,pdVar23,puVar18);
              }
            }
            else {
              if ((*(short *)(lVar17 + 0x48) == -1) || (*(long *)(unaff_x22 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar12 = func_0x00f78a44(lVar17);
              iVar13 = func_0x00f78ec0(lVar17);
              if (iVar12 == 0) {
                uVar4 = *(ushort *)(lVar17 + 0x48);
                if (iVar13 == 0) {
                  lVar17 = *plVar21 + (ulong)uVar4 * 0x10;
                  pdVar28 = (dword *)(**(code **)(lVar17 + 0x138))
                                               (plVar21,pdVar14,pdVar23,
                                                *(undefined8 *)(lVar17 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar17 = func_0x00f78a48(lVar17);
                lVar24 = *plVar21;
                uVar25 = (ulong)*(ushort *)(lVar24 + 0x12a);
                if (uVar25 != 0) {
                  piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == lVar17) {
                      puVar18 = (undefined8 *)
                                (lVar24 + (long)(int)(*piVar26 + (uint)uVar4) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar26 = piVar26 + 4;
                    uVar25 = uVar25 - 1;
                  } while (uVar25 != 0);
                }
                puVar18 = (undefined8 *)func_0x00fac1f0(plVar21,lVar17,(ulong)uVar4);
code_r0x01e71d00:
                pcVar29 = (code *)*puVar18;
                puVar18 = (undefined8 *)puVar18[1];
              }
              else {
                if (iVar13 == 0) {
                  uVar19 = *(undefined8 *)
                            (*plVar21 + (ulong)*(ushort *)(lVar17 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar24 = *plVar21;
                  uVar25 = (ulong)*(ushort *)(lVar24 + 0x12a);
                  if (uVar25 != 0) {
                    piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == *(long *)(lVar17 + 0x18)) {
                        lVar24 = lVar24 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar17 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar26 = piVar26 + 4;
                      uVar25 = uVar25 - 1;
                    } while (uVar25 != 0);
                  }
                  lVar24 = func_0x00fac1f0(plVar21);
code_r0x01e71cd8:
                  uVar19 = *(undefined8 *)(lVar24 + 8);
                }
                puVar18 = (undefined8 *)func_0x00f78acc(uVar19,lVar17);
                pcVar29 = (code *)*puVar18;
              }
              pdVar28 = (dword *)(*pcVar29)(plVar21,pdVar14,pdVar23,puVar18);
            }
          }
          else {
            if (bVar11) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar28 = (dword *)(*pcVar29)(plVar1,plVar21,pdVar14,pdVar23,lVar17);
          }
code_r0x01e71bd0:
          lVar15 = lVar15 + 1;
          if (lVar15 == lVar30) {
            return pdVar28;
          }
        } while( true );
      }
    }
  }
  puVar34 = &Core_UI2_UIManager__SetScreenVisible;
  auVar40 = func_0x00f78af4();
  unaff_x21 = pdVar23;
  pdVar28 = pdVar14;
code_r0x02f88674:
  pdVar23 = auVar40._0_8_;
  *(dword **)((long)ppdVar10 + -0x30) = unaff_x22;
  *(dword **)((long)ppdVar10 + -0x28) = pdVar16;
  *(dword **)((long)ppdVar10 + -0x20) = pdVar28;
  *(dword **)((long)ppdVar10 + -0x18) = unaff_x21;
  *(dword ***)((long)ppdVar10 + -0x10) = ppdVar33;
  *(undefined **)((long)ppdVar10 + -8) = puVar34;
  pdVar28 = pdVar23;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar28 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar15 = *(long *)(pdVar23 + 0x1c);
  if (lVar15 != 0) {
    uVar27 = auVar40._8_4_;
    if (*(uint *)(lVar15 + 0x18) <= uVar27) {
      pdVar28 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28) == 0) {
      return pdVar28;
    }
    lVar15 = *(long *)(pdVar23 + 0x1c);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= uVar27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28);
      if ((lVar15 != 0) && (plVar21 = *(long **)(lVar15 + 0x28), plVar21 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar28 = (dword *)(**(code **)(*plVar21 + 0x178))
                                     (plVar21,pdVar22,*(undefined8 *)(*plVar21 + 0x180));
        return pdVar28;
      }
    }
  }
  auVar36 = func_0x00f78af4();
  uVar19 = auVar36._0_8_;
  *(long *)((long)ppdVar10 + -0x50) = auVar40._8_8_;
  *(dword **)((long)ppdVar10 + -0x48) = pdVar22;
  *(undefined1 **)((long)ppdVar10 + -0x40) = (undefined1 *)((long)ppdVar10 + -0x10);
  *(undefined **)((long)ppdVar10 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  *(undefined8 *)((long)ppdVar10 + -0x68) = 0;
  *(undefined8 *)((long)ppdVar10 + -0x70) = 0;
  *(undefined8 *)((long)ppdVar10 + -0x58) = 0;
  *(undefined8 *)((long)ppdVar10 + -0x60) = 0;
  pdVar28 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar19,auVar36._8_8_,(undefined1 *)((long)ppdVar10 + -0x70));
  if ((int)pdVar28 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar19,*(undefined8 *)((long)ppdVar10 + -0x60),
                    *(undefined8 *)((long)ppdVar10 + -0x58));
    *(undefined8 *)((long)ppdVar10 + -0x88) = *(undefined8 *)((long)ppdVar10 + -0x68);
    *(undefined8 *)((long)ppdVar10 + -0x90) = *(undefined8 *)((long)ppdVar10 + -0x70);
    *(undefined8 *)((long)ppdVar10 + -0x78) = *(undefined8 *)((long)ppdVar10 + -0x58);
    *(undefined8 *)((long)ppdVar10 + -0x80) = *(undefined8 *)((long)ppdVar10 + -0x60);
    pdVar28 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar19,(undefined1 *)((long)ppdVar10 + -0x90),1);
  }
  return pdVar28;
}



// ============================================================
// RVA: 0x14e3c84 | Atlas.UI.Screens.RewardScreen.PlayRewardTweenUp
// ============================================================

undefined8 * Atlas_UI_Screens_RewardScreen__PlayRewardTweenUp(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4bf1 & 1) == 0) {
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e850);
    func_0x00f78a20(0x3d5e888);
    bRam0000000003eb4bf1 = 1;
  }
  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  if (param_2 != 0) {
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(param_2,0);
    /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    uVar2 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(param_2,0);
    uVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar2,0x1b,uRam0000000003d5e7a8);
    puVar3 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar2,param_1,uRam0000000003d5e850);
    if ((bRam0000000003eb66c3 & 1) == 0) {
      func_0x00f78a20(0x3d20bc0,1,uRam0000000003d5e888);
      func_0x00f78a20(0x3d25440);
      bRam0000000003eb66c3 = 1;
    }
    if ((puVar3 != (undefined8 *)0x0) && (*(char *)(puVar3 + 0x1d) != '\0')) {
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar1 = *(undefined4 *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x34);
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(puVar3,uVar1,1,0);
    }
    return puVar3;
  }
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4bf2 & 1) == 0) {
    func_0x00f78a20(0x3d2c8c8);
    bRam0000000003eb4bf2 = 1;
  }
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar3 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c8c8 + 0x18) + 0xc0) + 0x38))();
    return puVar3;
  }
  auVar7 = func_0x00f78af4();
  puVar5 = auVar7._8_8_;
  puVar3 = auVar7._0_8_;
  uVar6 = puVar5[1];
  uVar2 = *puVar5;
  puVar3[2] = puVar5[2];
  puVar3[1] = uVar6;
  *puVar3 = uVar2;
  return puVar3;
}



// ============================================================
// RVA: 0x14e3d58 | Atlas.UI.Screens.RewardScreen..ctor
// ============================================================

void Atlas_UI_Screens_RewardScreen___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4bf2 & 1) == 0) {
    func_0x00f78a20(0x3d2c8c8);
    bRam0000000003eb4bf2 = 1;
  }
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c8c8 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar5 = func_0x00f78af4();
  puVar2 = auVar5._8_8_;
  puVar1 = auVar5._0_8_;
  uVar4 = puVar2[1];
  uVar3 = *puVar2;
  puVar1[2] = puVar2[2];
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  return;
}



// ============================================================
// RVA: 0x14e3dac | Atlas.UI.Screens.RewardScreen..cctor
// ============================================================

void Atlas_UI_Screens_RewardScreen___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4bf3 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d244b0);
    func_0x00f78a20(0x3d6cbb0);
    func_0x00f78a20(0x3d6cb08);
    func_0x00f78a20(0x3d6cb10);
    bRam0000000003eb4bf3 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_4_SinglePlayerRewards')*/ uRam0000000003d6cbb0,0);
  **(undefined8 **)(/*Atlas.UI.Screens.RewardScreen_TypeInfo*/ lRam0000000003d244b0 + 0xb8) = uVar1;
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_10_RankUp')*/ uRam0000000003d6cb08,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.RewardScreen_TypeInfo*/ lRam0000000003d244b0 + 0xb8) + 8) = uVar1;
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_11_RankUpReward')*/ uRam0000000003d6cb10,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.RewardScreen_TypeInfo*/ lRam0000000003d244b0 + 0xb8) + 0x10) = uVar1;
  return;
}



// ============================================================
// RVA: 0x14e3eac | Atlas.UI.Screens.RewardScreen.<ShowReward>b__28_0
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Atlas_UI_Screens_RewardScreen___ShowReward_b__28_0
          (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,undefined8 param_5
          ,long param_6)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long extraout_x1;
  undefined8 extraout_x1_00;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if ((bRam0000000003eb4bf4 & 1) == 0) {
    func_0x00f78a20(0x3d41280);
    bRam0000000003eb4bf4 = 1;
  }
  lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41280);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x90), lVar2 != 0)) {
    if ((bRam0000000003eb4e01 & 1) == 0) {
      func_0x00f78a20(0x3d24188,0,0);
      func_0x00f78a20(0x3d5e700);
      func_0x00f78a20(0x3d5e780);
      func_0x00f78a20(0x3d5e868);
      bRam0000000003eb4e01 = 1;
    }
    plVar3 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar2,0);
    if (plVar3 != (long *)0x0) {
      if (*plVar3 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
        auVar9._0_8_ = func_0x00f78e5c(plVar3);
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        auVar9._8_8_ = 0;
        return auVar9;
      }
    }
    fVar5 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    uVar1 = _UNK_033f82c4;
    param_2 = param_2 * 0.25;
    param_3 = param_3 * 0.25;
    uVar4 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar5 * 0.25,param_2,param_3,_UNK_033f82c4,0x40a00000,plVar3,4,0);
    uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar4,uRam0000000003d5e780);
    /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar4,lVar2,uRam0000000003d5e868);
    fVar5 = (float)/*UnityEngine.Vector3$$get_forward*/ func_0x03275868(0);
    uVar4 = /*DG.Tweening.ShortcutExtensions$$DOPunchRotation*/ func_0x016b4de8(fVar5 * 8.0,param_2 * 8.0,param_3 * 8.0,uVar1,0x3f800000,plVar3,4,0);
    uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar4,uRam0000000003d5e780);
    /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar4,lVar2,uRam0000000003d5e868);
    uVar4 = /*DG.Tweening.ShortcutExtensions$$DOPunchPosition*/ func_0x016b48f4(0xc1700000,0x41c80000,0,uVar1,0x3f800000,plVar3,4,0,0);
    uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar4,uRam0000000003d5e780);
    auVar8._0_8_ = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar4,lVar2,uRam0000000003d5e868);
    if ((auVar8._0_8_ != 0) && (*(char *)(auVar8._0_8_ + 0xe8) != '\0')) {
      *(undefined8 *)(auVar8._0_8_ + 0x80) = 0;
    }
    auVar8._8_8_ = 0;
    return auVar8;
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4bf5 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    bRam0000000003eb4bf5 = 1;
  }
  if (((extraout_x1 != 0) && (param_6 != 0)) && (*(long *)(extraout_x1 + 0x50) != 0)) {
    auVar6 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(extraout_x1 + 0x50),*(undefined8 *)(param_6 + 0x30),0);
    uVar4 = auVar6._8_8_;
    if (auVar6._0_4_ == 0) {
code_r0x014e3fd8:
      auVar6._8_8_ = uVar4;
      return auVar6;
    }
    if (*(long *)(extraout_x1 + 0x50) != 0) {
      /*Atlas.Stats.UnlockManager$$MarkUnlockSeen*/ func_0x015226dc(*(long *)(extraout_x1 + 0x50),*(undefined8 *)(param_6 + 0x30),0);
      lVar2 = *(long *)(extraout_x1 + 0x10);
      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar2 != 0) {
        /*Atlas.UI.AtlasUIManager$$TransitionToScreen*/ func_0x0147079c(lVar2,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90),
                        *(undefined4 *)(param_6 + 0x20),param_6,0);
        uVar4 = extraout_x1_00;
        goto code_r0x014e3fd8;
      }
    }
  }
  auVar6 = func_0x00f78af4();
  auVar7._8_8_ = auVar6._8_8_;
  auVar7._0_8_ = *(undefined8 *)(auVar6._0_8_ + 0x70);
  return auVar7;
}



