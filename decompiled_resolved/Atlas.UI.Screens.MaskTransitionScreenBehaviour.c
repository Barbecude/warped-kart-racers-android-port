// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.MaskTransitionScreenBehaviour

// ============================================================
// RVA: 0x148e120 | Atlas.UI.Screens.MaskTransitionScreenBehaviour.HideMask
// ============================================================

/* WARNING: Possible PIC construction at 0x0148e21c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148e2a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d2ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d30d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d3978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148e528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148e638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148e8f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148e9a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148ea84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0148e9a8) */
/* WARNING: Removing unreachable block (ram,0x0148e9b0) */
/* WARNING: Removing unreachable block (ram,0x0148e9e8) */
/* WARNING: Removing unreachable block (ram,0x0148e9f0) */
/* WARNING: Removing unreachable block (ram,0x0148e9f4) */
/* WARNING: Removing unreachable block (ram,0x0148e9f8) */
/* WARNING: Removing unreachable block (ram,0x0148ea30) */
/* WARNING: Removing unreachable block (ram,0x0148e8f8) */
/* WARNING: Removing unreachable block (ram,0x0148e908) */
/* WARNING: Removing unreachable block (ram,0x0148e924) */
/* WARNING: Removing unreachable block (ram,0x0148e930) */
/* WARNING: Removing unreachable block (ram,0x0148e938) */
/* WARNING: Removing unreachable block (ram,0x0148e93c) */
/* WARNING: Removing unreachable block (ram,0x0148e98c) */
/* WARNING: Removing unreachable block (ram,0x0148e950) */
/* WARNING: Removing unreachable block (ram,0x0148e958) */
/* WARNING: Removing unreachable block (ram,0x0148ea48) */
/* WARNING: Removing unreachable block (ram,0x0148ea58) */
/* WARNING: Removing unreachable block (ram,0x0148ea68) */
/* WARNING: Removing unreachable block (ram,0x0148e970) */
/* WARNING: Removing unreachable block (ram,0x0148e974) */
/* WARNING: Removing unreachable block (ram,0x0148e97c) */
/* WARNING: Removing unreachable block (ram,0x0148e998) */
/* WARNING: Removing unreachable block (ram,0x0148e63c) */
/* WARNING: Removing unreachable block (ram,0x0148e644) */
/* WARNING: Removing unreachable block (ram,0x0148e650) */
/* WARNING: Removing unreachable block (ram,0x0148e65c) */
/* WARNING: Removing unreachable block (ram,0x0148e794) */
/* WARNING: Removing unreachable block (ram,0x0148e7d8) */
/* WARNING: Removing unreachable block (ram,0x0148e7f8) */
/* WARNING: Removing unreachable block (ram,0x0148e7fc) */
/* WARNING: Removing unreachable block (ram,0x0148e808) */
/* WARNING: Removing unreachable block (ram,0x0148ea6c) */
/* WARNING: Removing unreachable block (ram,0x0148ea74) */
/* WARNING: Removing unreachable block (ram,0x0148e818) */
/* WARNING: Removing unreachable block (ram,0x0148e82c) */
/* WARNING: Removing unreachable block (ram,0x0148e838) */
/* WARNING: Removing unreachable block (ram,0x0148e848) */
/* WARNING: Removing unreachable block (ram,0x0148e864) */
/* WARNING: Removing unreachable block (ram,0x0148e86c) */
/* WARNING: Removing unreachable block (ram,0x0148e870) */
/* WARNING: Removing unreachable block (ram,0x0148e88c) */
/* WARNING: Removing unreachable block (ram,0x0148e890) */
/* WARNING: Removing unreachable block (ram,0x0148e880) */
/* WARNING: Removing unreachable block (ram,0x0148e894) */
/* WARNING: Removing unreachable block (ram,0x0148e8a4) */
/* WARNING: Removing unreachable block (ram,0x0148e8b4) */
/* WARNING: Removing unreachable block (ram,0x0148e8bc) */
/* WARNING: Removing unreachable block (ram,0x0148e8c0) */
/* WARNING: Removing unreachable block (ram,0x0148e8d4) */
/* WARNING: Removing unreachable block (ram,0x0148e8e0) */
/* WARNING: Removing unreachable block (ram,0x0148e888) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x0148e52c) */
/* WARNING: Removing unreachable block (ram,0x0148e534) */
/* WARNING: Removing unreachable block (ram,0x0148e540) */
/* WARNING: Removing unreachable block (ram,0x0148e54c) */
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
/* WARNING: Removing unreachable block (ram,0x018eee1c) */
/* WARNING: Removing unreachable block (ram,0x018eee40) */
/* WARNING: Removing unreachable block (ram,0x018eee6c) */
/* WARNING: Removing unreachable block (ram,0x018eee70) */
/* WARNING: Removing unreachable block (ram,0x018eee78) */
/* WARNING: Removing unreachable block (ram,0x018eee8c) */
/* WARNING: Removing unreachable block (ram,0x018eee94) */
/* WARNING: Removing unreachable block (ram,0x018eee98) */
/* WARNING: Removing unreachable block (ram,0x018eeea4) */
/* WARNING: Removing unreachable block (ram,0x018eeed0) */
/* WARNING: Removing unreachable block (ram,0x018eeed8) */
/* WARNING: Removing unreachable block (ram,0x018eeedc) */
/* WARNING: Removing unreachable block (ram,0x018eef04) */
/* WARNING: Removing unreachable block (ram,0x018eef08) */
/* WARNING: Removing unreachable block (ram,0x018eeef0) */
/* WARNING: Removing unreachable block (ram,0x018eef34) */
/* WARNING: Removing unreachable block (ram,0x018eef5c) */
/* WARNING: Removing unreachable block (ram,0x018eef7c) */
/* WARNING: Removing unreachable block (ram,0x018eef80) */
/* WARNING: Removing unreachable block (ram,0x018eef88) */
/* WARNING: Removing unreachable block (ram,0x018eef9c) */
/* WARNING: Removing unreachable block (ram,0x018eefa4) */
/* WARNING: Removing unreachable block (ram,0x018eefac) */
/* WARNING: Removing unreachable block (ram,0x018eefc8) */
/* WARNING: Removing unreachable block (ram,0x018eefd0) */
/* WARNING: Removing unreachable block (ram,0x018eefd4) */
/* WARNING: Removing unreachable block (ram,0x018eefec) */
/* WARNING: Removing unreachable block (ram,0x018eeef4) */
/* WARNING: Removing unreachable block (ram,0x018eef18) */
/* WARNING: Removing unreachable block (ram,0x018eef1c) */
/* WARNING: Removing unreachable block (ram,0x018eef20) */
/* WARNING: Removing unreachable block (ram,0x01513a40) */
/* WARNING: Removing unreachable block (ram,0x01638af0) */
/* WARNING: Removing unreachable block (ram,0x032d397c) */
/* WARNING: Removing unreachable block (ram,0x032d30dc) */
/* WARNING: Removing unreachable block (ram,0x032d30ec) */
/* WARNING: Removing unreachable block (ram,0x032d30f4) */
/* WARNING: Removing unreachable block (ram,0x032d30fc) */
/* WARNING: Removing unreachable block (ram,0x032d3108) */
/* WARNING: Removing unreachable block (ram,0x032d3110) */
/* WARNING: Removing unreachable block (ram,0x032d3118) */
/* WARNING: Removing unreachable block (ram,0x032d3124) */
/* WARNING: Removing unreachable block (ram,0x032d3168) */
/* WARNING: Removing unreachable block (ram,0x032d3188) */
/* WARNING: Removing unreachable block (ram,0x032d3190) */
/* WARNING: Removing unreachable block (ram,0x032d3198) */
/* WARNING: Removing unreachable block (ram,0x032d31a4) */
/* WARNING: Removing unreachable block (ram,0x032d31ac) */
/* WARNING: Removing unreachable block (ram,0x032d31b4) */
/* WARNING: Removing unreachable block (ram,0x032d31c0) */
/* WARNING: Removing unreachable block (ram,0x032d3204) */
/* WARNING: Removing unreachable block (ram,0x032d2edc) */
/* WARNING: Removing unreachable block (ram,0x032d2eec) */
/* WARNING: Removing unreachable block (ram,0x026f609c) */
/* WARNING: Removing unreachable block (ram,0x026f60c4) */
/* WARNING: Removing unreachable block (ram,0x026f60e4) */
/* WARNING: Removing unreachable block (ram,0x026f60ec) */
/* WARNING: Removing unreachable block (ram,0x026f6108) */
/* WARNING: Removing unreachable block (ram,0x026f6110) */
/* WARNING: Removing unreachable block (ram,0x026f612c) */
/* WARNING: Removing unreachable block (ram,0x026f6140) */
/* WARNING: Removing unreachable block (ram,0x026f6148) */
/* WARNING: Removing unreachable block (ram,0x026f614c) */
/* WARNING: Removing unreachable block (ram,0x026f6160) */
/* WARNING: Removing unreachable block (ram,0x026f6168) */
/* WARNING: Removing unreachable block (ram,0x026f6180) */
/* WARNING: Removing unreachable block (ram,0x026f61ac) */
/* WARNING: Removing unreachable block (ram,0x026f61d4) */
/* WARNING: Removing unreachable block (ram,0x026f61fc) */
/* WARNING: Removing unreachable block (ram,0x026f6204) */
/* WARNING: Removing unreachable block (ram,0x026f6220) */
/* WARNING: Removing unreachable block (ram,0x026f6208) */
/* WARNING: Removing unreachable block (ram,0x026f6224) */
/* WARNING: Removing unreachable block (ram,0x026f623c) */
/* WARNING: Removing unreachable block (ram,0x026f621c) */
/* WARNING: Removing unreachable block (ram,0x026f6250) */
/* WARNING: Removing unreachable block (ram,0x026f6280) */
/* WARNING: Removing unreachable block (ram,0x026f62a8) */
/* WARNING: Removing unreachable block (ram,0x026f62b0) */
/* WARNING: Removing unreachable block (ram,0x026f62cc) */
/* WARNING: Removing unreachable block (ram,0x026f62b4) */
/* WARNING: Removing unreachable block (ram,0x026f62d0) */
/* WARNING: Removing unreachable block (ram,0x026f62e8) */
/* WARNING: Removing unreachable block (ram,0x026f62c8) */
/* WARNING: Removing unreachable block (ram,0x026f62fc) */
/* WARNING: Removing unreachable block (ram,0x026f632c) */
/* WARNING: Removing unreachable block (ram,0x026f6354) */
/* WARNING: Removing unreachable block (ram,0x026f635c) */
/* WARNING: Removing unreachable block (ram,0x026f6378) */
/* WARNING: Removing unreachable block (ram,0x026f6360) */
/* WARNING: Removing unreachable block (ram,0x026f637c) */
/* WARNING: Removing unreachable block (ram,0x026f6394) */
/* WARNING: Removing unreachable block (ram,0x026f6374) */
/* WARNING: Removing unreachable block (ram,0x026f63a8) */
/* WARNING: Removing unreachable block (ram,0x026f63d8) */
/* WARNING: Removing unreachable block (ram,0x026f6400) */
/* WARNING: Removing unreachable block (ram,0x026f6408) */
/* WARNING: Removing unreachable block (ram,0x026f6424) */
/* WARNING: Removing unreachable block (ram,0x026f640c) */
/* WARNING: Removing unreachable block (ram,0x026f6428) */
/* WARNING: Removing unreachable block (ram,0x026f6440) */
/* WARNING: Removing unreachable block (ram,0x026f6420) */
/* WARNING: Removing unreachable block (ram,0x026f6454) */
/* WARNING: Removing unreachable block (ram,0x026f6500) */
/* WARNING: Removing unreachable block (ram,0x026f6524) */
/* WARNING: Removing unreachable block (ram,0x026f654c) */
/* WARNING: Removing unreachable block (ram,0x026f6554) */
/* WARNING: Removing unreachable block (ram,0x026f6560) */
/* WARNING: Removing unreachable block (ram,0x026f6568) */
/* WARNING: Removing unreachable block (ram,0x026f6594) */
/* WARNING: Removing unreachable block (ram,0x026f6574) */
/* WARNING: Removing unreachable block (ram,0x026f6580) */
/* WARNING: Removing unreachable block (ram,0x026f65a0) */
/* WARNING: Removing unreachable block (ram,0x026f65b4) */
/* WARNING: Removing unreachable block (ram,0x026f6698) */
/* WARNING: Removing unreachable block (ram,0x026f672c) */
/* WARNING: Removing unreachable block (ram,0x026f66b0) */
/* WARNING: Removing unreachable block (ram,0x026f66c4) */
/* WARNING: Removing unreachable block (ram,0x026f66cc) */
/* WARNING: Removing unreachable block (ram,0x026f66d8) */
/* WARNING: Removing unreachable block (ram,0x026f66e0) */
/* WARNING: Removing unreachable block (ram,0x026f670c) */
/* WARNING: Removing unreachable block (ram,0x026f66ec) */
/* WARNING: Removing unreachable block (ram,0x026f66f8) */
/* WARNING: Removing unreachable block (ram,0x026f6718) */
/* WARNING: Removing unreachable block (ram,0x026f65e0) */
/* WARNING: Removing unreachable block (ram,0x026f65f4) */
/* WARNING: Removing unreachable block (ram,0x026f65fc) */
/* WARNING: Removing unreachable block (ram,0x026f6608) */
/* WARNING: Removing unreachable block (ram,0x026f6610) */
/* WARNING: Removing unreachable block (ram,0x026f663c) */
/* WARNING: Removing unreachable block (ram,0x026f661c) */
/* WARNING: Removing unreachable block (ram,0x026f6628) */
/* WARNING: Removing unreachable block (ram,0x026f664c) */
/* WARNING: Removing unreachable block (ram,0x026f6478) */
/* WARNING: Removing unreachable block (ram,0x026f6490) */
/* WARNING: Removing unreachable block (ram,0x026f6498) */
/* WARNING: Removing unreachable block (ram,0x026f64a4) */
/* WARNING: Removing unreachable block (ram,0x026f64ac) */
/* WARNING: Removing unreachable block (ram,0x026f64d8) */
/* WARNING: Removing unreachable block (ram,0x026f64b8) */
/* WARNING: Removing unreachable block (ram,0x026f64c4) */
/* WARNING: Removing unreachable block (ram,0x026f64e4) */
/* WARNING: Removing unreachable block (ram,0x026f6188) */
/* WARNING: Removing unreachable block (ram,0x0148e2a4) */
/* WARNING: Removing unreachable block (ram,0x0148e2b4) */
/* WARNING: Removing unreachable block (ram,0x0148e2bc) */
/* WARNING: Removing unreachable block (ram,0x0148e2e0) */
/* WARNING: Removing unreachable block (ram,0x0148e2e8) */
/* WARNING: Removing unreachable block (ram,0x0148e308) */
/* WARNING: Removing unreachable block (ram,0x0148e340) */
/* WARNING: Removing unreachable block (ram,0x0148e310) */
/* WARNING: Removing unreachable block (ram,0x0148e348) */
/* WARNING: Removing unreachable block (ram,0x0148e314) */
/* WARNING: Removing unreachable block (ram,0x0148e328) */
/* WARNING: Removing unreachable block (ram,0x0148e34c) */
/* WARNING: Removing unreachable block (ram,0x032d2e20) */
/* WARNING: Removing unreachable block (ram,0x032d2e48) */
/* WARNING: Removing unreachable block (ram,0x032d2e74) */
/* WARNING: Removing unreachable block (ram,0x032d2e80) */
/* WARNING: Removing unreachable block (ram,0x032d2e88) */
/* WARNING: Removing unreachable block (ram,0x032d2e90) */
/* WARNING: Removing unreachable block (ram,0x032d2e9c) */
/* WARNING: Removing unreachable block (ram,0x032d2eb0) */
/* WARNING: Removing unreachable block (ram,0x032d2f0c) */
/* WARNING: Removing unreachable block (ram,0x032d2ebc) */
/* WARNING: Removing unreachable block (ram,0x032d2f10) */
/* WARNING: Removing unreachable block (ram,0x032d2f38) */
/* WARNING: Removing unreachable block (ram,0x032d2f94) */
/* WARNING: Removing unreachable block (ram,0x032d3224) */
/* WARNING: Removing unreachable block (ram,0x032d2f9c) */
/* WARNING: Removing unreachable block (ram,0x032d2fb4) */
/* WARNING: Removing unreachable block (ram,0x032d2fbc) */
/* WARNING: Removing unreachable block (ram,0x032d2fc4) */
/* WARNING: Removing unreachable block (ram,0x032d2fd0) */
/* WARNING: Removing unreachable block (ram,0x032d2fd8) */
/* WARNING: Removing unreachable block (ram,0x032d2fe0) */
/* WARNING: Removing unreachable block (ram,0x032d2fec) */
/* WARNING: Removing unreachable block (ram,0x032d3030) */
/* WARNING: Removing unreachable block (ram,0x032d3050) */
/* WARNING: Removing unreachable block (ram,0x032d3058) */
/* WARNING: Removing unreachable block (ram,0x032d3060) */
/* WARNING: Removing unreachable block (ram,0x032d306c) */
/* WARNING: Removing unreachable block (ram,0x032d3074) */
/* WARNING: Removing unreachable block (ram,0x032d307c) */
/* WARNING: Removing unreachable block (ram,0x032d3088) */
/* WARNING: Removing unreachable block (ram,0x032d30cc) */
/* WARNING: Removing unreachable block (ram,0x032d357c) */
/* WARNING: Removing unreachable block (ram,0x032d35b8) */
/* WARNING: Removing unreachable block (ram,0x032d365c) */
/* WARNING: Removing unreachable block (ram,0x032d3668) */
/* WARNING: Removing unreachable block (ram,0x032d3670) */
/* WARNING: Removing unreachable block (ram,0x032d3674) */
/* WARNING: Removing unreachable block (ram,0x032d36a4) */
/* WARNING: Removing unreachable block (ram,0x032d36b8) */
/* WARNING: Removing unreachable block (ram,0x032d36c0) */
/* WARNING: Removing unreachable block (ram,0x032d36c4) */
/* WARNING: Removing unreachable block (ram,0x032d36f8) */
/* WARNING: Removing unreachable block (ram,0x032d3700) */
/* WARNING: Removing unreachable block (ram,0x032d3704) */
/* WARNING: Removing unreachable block (ram,0x032d3714) */
/* WARNING: Removing unreachable block (ram,0x032d373c) */
/* WARNING: Removing unreachable block (ram,0x032d3744) */
/* WARNING: Removing unreachable block (ram,0x032d3748) */
/* WARNING: Removing unreachable block (ram,0x032d3754) */
/* WARNING: Removing unreachable block (ram,0x032d3760) */
/* WARNING: Removing unreachable block (ram,0x032d3774) */
/* WARNING: Removing unreachable block (ram,0x032d3780) */
/* WARNING: Removing unreachable block (ram,0x032d3788) */
/* WARNING: Removing unreachable block (ram,0x032d379c) */
/* WARNING: Removing unreachable block (ram,0x032d37a8) */
/* WARNING: Removing unreachable block (ram,0x032d37b0) */
/* WARNING: Removing unreachable block (ram,0x032d37b4) */
/* WARNING: Removing unreachable block (ram,0x032d37c8) */
/* WARNING: Removing unreachable block (ram,0x032d37dc) */
/* WARNING: Removing unreachable block (ram,0x032d37e4) */
/* WARNING: Removing unreachable block (ram,0x032d37e8) */
/* WARNING: Removing unreachable block (ram,0x032d37f4) */
/* WARNING: Removing unreachable block (ram,0x032d37fc) */
/* WARNING: Removing unreachable block (ram,0x032d3810) */
/* WARNING: Removing unreachable block (ram,0x032d381c) */
/* WARNING: Removing unreachable block (ram,0x032d3824) */
/* WARNING: Removing unreachable block (ram,0x032d3838) */
/* WARNING: Removing unreachable block (ram,0x032d3840) */
/* WARNING: Removing unreachable block (ram,0x032d3844) */
/* WARNING: Removing unreachable block (ram,0x032d3854) */
/* WARNING: Removing unreachable block (ram,0x032d3858) */
/* WARNING: Removing unreachable block (ram,0x032d3878) */
/* WARNING: Removing unreachable block (ram,0x032d38d0) */
/* WARNING: Removing unreachable block (ram,0x032d38e0) */
/* WARNING: Removing unreachable block (ram,0x032d38e8) */
/* WARNING: Removing unreachable block (ram,0x032d38ec) */
/* WARNING: Removing unreachable block (ram,0x032d3900) */
/* WARNING: Removing unreachable block (ram,0x032d390c) */
/* WARNING: Removing unreachable block (ram,0x032d3914) */
/* WARNING: Removing unreachable block (ram,0x032d388c) */
/* WARNING: Removing unreachable block (ram,0x032d3898) */
/* WARNING: Removing unreachable block (ram,0x032d38a0) */
/* WARNING: Removing unreachable block (ram,0x032d3918) */
/* WARNING: Removing unreachable block (ram,0x032d38a4) */
/* WARNING: Removing unreachable block (ram,0x032d38b8) */
/* WARNING: Removing unreachable block (ram,0x032d38cc) */
/* WARNING: Removing unreachable block (ram,0x032d391c) */
/* WARNING: Removing unreachable block (ram,0x032d3994) */
/* WARNING: Removing unreachable block (ram,0x032d39a0) */
/* WARNING: Removing unreachable block (ram,0x032d39a8) */
/* WARNING: Removing unreachable block (ram,0x032d39ac) */
/* WARNING: Removing unreachable block (ram,0x0233e08c) */
/* WARNING: Removing unreachable block (ram,0x0233e0b8) */
/* WARNING: Removing unreachable block (ram,0x0233e0c0) */
/* WARNING: Removing unreachable block (ram,0x0233e0d0) */
/* WARNING: Removing unreachable block (ram,0x0233e0dc) */
/* WARNING: Removing unreachable block (ram,0x0233e0e0) */
/* WARNING: Removing unreachable block (ram,0x0233e0ec) */
/* WARNING: Removing unreachable block (ram,0x0233e0f4) */
/* WARNING: Removing unreachable block (ram,0x0233e104) */
/* WARNING: Removing unreachable block (ram,0x0233e10c) */
/* WARNING: Removing unreachable block (ram,0x0233e114) */
/* WARNING: Removing unreachable block (ram,0x0233e120) */
/* WARNING: Removing unreachable block (ram,0x0233e128) */
/* WARNING: Removing unreachable block (ram,0x0233e138) */
/* WARNING: Removing unreachable block (ram,0x0233e140) */
/* WARNING: Removing unreachable block (ram,0x0233e148) */
/* WARNING: Removing unreachable block (ram,0x0233e154) */
/* WARNING: Removing unreachable block (ram,0x0233e15c) */
/* WARNING: Removing unreachable block (ram,0x0233e16c) */
/* WARNING: Removing unreachable block (ram,0x0233e174) */
/* WARNING: Removing unreachable block (ram,0x0233e1e8) */
/* WARNING: Removing unreachable block (ram,0x0233e210) */
/* WARNING: Removing unreachable block (ram,0x0233e218) */
/* WARNING: Removing unreachable block (ram,0x0233e228) */
/* WARNING: Removing unreachable block (ram,0x0233e230) */
/* WARNING: Removing unreachable block (ram,0x0233e24c) */
/* WARNING: Removing unreachable block (ram,0x0233e25c) */
/* WARNING: Removing unreachable block (ram,0x0233e270) */
/* WARNING: Removing unreachable block (ram,0x0233e280) */
/* WARNING: Removing unreachable block (ram,0x0233e28c) */
/* WARNING: Removing unreachable block (ram,0x0233e294) */
/* WARNING: Removing unreachable block (ram,0x0233e2b8) */
/* WARNING: Removing unreachable block (ram,0x0233e2c0) */
/* WARNING: Removing unreachable block (ram,0x0233e2d0) */
/* WARNING: Removing unreachable block (ram,0x0233e2d8) */
/* WARNING: Removing unreachable block (ram,0x0233e2f4) */
/* WARNING: Removing unreachable block (ram,0x0233e304) */
/* WARNING: Removing unreachable block (ram,0x0233e314) */
/* WARNING: Removing unreachable block (ram,0x0233e31c) */
/* WARNING: Removing unreachable block (ram,0x0233e340) */
/* WARNING: Removing unreachable block (ram,0x0233e348) */
/* WARNING: Removing unreachable block (ram,0x0233e358) */
/* WARNING: Removing unreachable block (ram,0x0233e360) */
/* WARNING: Removing unreachable block (ram,0x0233e180) */
/* WARNING: Removing unreachable block (ram,0x0233e190) */
/* WARNING: Removing unreachable block (ram,0x0233e1a0) */
/* WARNING: Removing unreachable block (ram,0x0233e1b0) */
/* WARNING: Removing unreachable block (ram,0x0233e1c0) */
/* WARNING: Removing unreachable block (ram,0x032d3938) */
/* WARNING: Removing unreachable block (ram,0x032d3944) */
/* WARNING: Removing unreachable block (ram,0x032d396c) */
/* WARNING: Removing unreachable block (ram,0x032d3958) */
/* WARNING: Removing unreachable block (ram,0x032d3964) */
/* WARNING: Removing unreachable block (ram,0x032d3970) */
/* WARNING: Removing unreachable block (ram,0x032d3688) */
/* WARNING: Removing unreachable block (ram,0x0148e220) */
/* WARNING: Removing unreachable block (ram,0x0148e22c) */
/* WARNING: Removing unreachable block (ram,0x0148e230) */
/* WARNING: Removing unreachable block (ram,0x0148e240) */
/* WARNING: Removing unreachable block (ram,0x0148e248) */
/* WARNING: Removing unreachable block (ram,0x0148e250) */
/* WARNING: Removing unreachable block (ram,0x0148e258) */
/* WARNING: Removing unreachable block (ram,0x0148e26c) */
/* WARNING: Removing unreachable block (ram,0x0148e274) */
/* WARNING: Removing unreachable block (ram,0x0148e330) */
/* WARNING: Removing unreachable block (ram,0x0148e27c) */
/* WARNING: Removing unreachable block (ram,0x0148e290) */
/* WARNING: Removing unreachable block (ram,0x0148e298) */
/* WARNING: Removing unreachable block (ram,0x0148ea88) */
/* WARNING: Removing unreachable block (ram,0x0148eac0) */
/* WARNING: Removing unreachable block (ram,0x0148eac4) */
/* WARNING: Removing unreachable block (ram,0x0148ead0) */
/* WARNING: Removing unreachable block (ram,0x0148eb10) */
/* WARNING: Removing unreachable block (ram,0x0148eb30) */
/* WARNING: Removing unreachable block (ram,0x0148eb5c) */
/* WARNING: Removing unreachable block (ram,0x0148eb64) */
/* WARNING: Removing unreachable block (ram,0x0148eb68) */
/* WARNING: Removing unreachable block (ram,0x0148ec10) */
/* WARNING: Removing unreachable block (ram,0x0148eb78) */
/* WARNING: Removing unreachable block (ram,0x0148ec38) */
/* WARNING: Removing unreachable block (ram,0x0148ec58) */
/* WARNING: Removing unreachable block (ram,0x0148ec8c) */
/* WARNING: Removing unreachable block (ram,0x0148eca0) */
/* WARNING: Removing unreachable block (ram,0x0148ecac) */
/* WARNING: Removing unreachable block (ram,0x0148ecb4) */
/* WARNING: Removing unreachable block (ram,0x0148ecb8) */
/* WARNING: Removing unreachable block (ram,0x02f8af34) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x0148ec40) */
/* WARNING: Removing unreachable block (ram,0x03211320) */
/* WARNING: Removing unreachable block (ram,0x03211350) */
/* WARNING: Removing unreachable block (ram,0x03211364) */
/* WARNING: Removing unreachable block (ram,0x0321137c) */
/* WARNING: Removing unreachable block (ram,0x03211390) */
/* WARNING: Removing unreachable block (ram,0x0148eb90) */
/* WARNING: Removing unreachable block (ram,0x0148ebd4) */
/* WARNING: Removing unreachable block (ram,0x0148ebdc) */
/* WARNING: Removing unreachable block (ram,0x0148ebe0) */
/* WARNING: Removing unreachable block (ram,0x0148ec18) */
/* WARNING: Removing unreachable block (ram,0x0148ea90) */
/* WARNING: Removing unreachable block (ram,0x03212134) */
/* WARNING: Removing unreachable block (ram,0x03212158) */
/* WARNING: Removing unreachable block (ram,0x0321216c) */

undefined8 *
Atlas_UI_Screens_MaskTransitionScreenBehaviour__HideMask
          (long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 ****ppppuVar11;
  undefined1 *puVar12;
  undefined *unaff_x30;
  undefined *puVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 ***pppuStack_100;
  code *pcStack_f8;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 ***pppuStack_80;
  undefined *puStack_78;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined8 *puVar10;
  
  auVar17._8_8_ = unaff_x21;
  auVar17._0_8_ = unaff_x20;
  /*Atlas.UI.Screens.MaskTransitionScreenBehaviour$$SetMaskVisible*/ func_0x0148e6ec(param_1,0);
  lVar4 = *(long *)(param_1 + 0x58);
  if (lVar4 != 0) goto code_r0x0322ef1c;
  lVar4 = func_0x00f78af4();
  pcStack_28 = Atlas_UI_Screens_MaskTransitionScreen__OnAfterExit;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((*(long *)(lVar4 + 0x70) != 0) &&
     (lVar5 = *(long *)(*(long *)(lVar4 + 0x70) + 0x18), lVar5 != 0)) {
    /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar5,0);
    if ((*(long *)(lVar4 + 0x70) != 0) &&
       (lVar5 = *(long *)(*(long *)(lVar4 + 0x70) + 0x10), lVar5 != 0)) {
      puVar9 = (undefined8 *)/*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar5,0);
      *(undefined8 *)(lVar4 + 0x70) = 0;
      return puVar9;
    }
  }
  uVar6 = func_0x00f78af4();
  pcStack_48 = Atlas_UI_Screens_MaskTransitionScreen__OnUpdate;
  ppuStack_50 = &puStack_30;
  if ((bRam0000000003eb4986 & 1) == 0) {
    func_0x00f78a20(0x3d22df0);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d41178);
    func_0x00f78a20(0x3d41670);
    bRam0000000003eb4986 = 1;
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar6,uRam0000000003d41178);
  if (lVar4 == 0) {
    puVar13 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__IsPlaying;
    lVar4 = func_0x00f78af4();
  }
  else {
    puVar13 = (undefined *)0x148e220;
  }
  uStack_90 = 0x3eb4000;
  uStack_88 = uVar6;
  pppuStack_80 = &ppuStack_50;
  puStack_78 = puVar13;
  if ((bRam0000000003eb498b & 1) == 0) {
    func_0x00f78a20(0x3d23230);
    bRam0000000003eb498b = 1;
  }
  if (*(long *)(lVar4 + 0x50) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_e8,*(long *)(lVar4 + 0x50),0,0);
    uStack_b8 = uStack_e0;
    uStack_c0 = uStack_e8;
    uStack_a8 = uStack_d0;
    uStack_b0 = uStack_d8;
    uStack_a0 = uStack_c8;
    iVar3 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_c0,0);
    if (((*(ushort *)(/*Atlas.UI.Screens.MaskTransitionScreenBehaviour_TypeInfo*/ lRam0000000003d23230 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.MaskTransitionScreenBehaviour_TypeInfo*/ lRam0000000003d23230 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return (undefined8 *)(ulong)(iVar3 != **(int **)(/*Atlas.UI.Screens.MaskTransitionScreenBehaviour_TypeInfo*/ lRam0000000003d23230 + 0xb8));
  }
  auVar16 = func_0x00f78af4();
  lVar8 = auVar16._0_8_;
  puVar1 = &stack0xfffffffffffffed0;
  pcStack_f8 = Atlas_UI_Screens_MaskTransitionScreen__RequestPlayHide;
  ppppuVar11 = &pppuStack_100;
  lVar5 = param_3;
  unaff_x19 = param_4;
  pppuStack_100 = &pppuStack_80;
  if ((bRam0000000003eb4987 & 1) == 0) {
    func_0x00f78a20(0x3d41178);
    bRam0000000003eb4987 = 1;
  }
  if (param_3 == 0) {
LAB_0148e47c:
    uVar7 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_3,0);
    if ((uVar7 & 1) == 0) {
      *(long *)(lVar8 + 0x80) = param_3;
      *(undefined1 *)(lVar8 + 0x79) = 1;
    }
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41178);
    auVar17._8_8_ = auVar16._8_8_;
    auVar17._0_8_ = lVar8;
    uVar6 = 0x3d41178;
    if (lVar8 == 0) goto LAB_0148e4cc;
    auVar16._8_8_ = 0x3eb4000;
    auVar16._0_8_ = 0x3d41178;
    puVar1 = auStack_f0;
    unaff_x19 = param_4;
    param_4 = lVar4;
    ppppuVar11 = (undefined8 ****)pppuStack_100;
    pcVar14 = pcStack_f8;
  }
  else {
    uVar6 = 0x3eb4000;
    if (*(long *)(lVar8 + 0x88) != 0) {
      lVar5 = 0;
      param_3 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar8 + 0x88),param_3);
      goto LAB_0148e47c;
    }
LAB_0148e4cc:
    unaff_x23 = uVar6;
    unaff_x22 = param_3;
    pcVar14 = (code *)&Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayEnter;
    auVar17 = func_0x00f78af4();
  }
  lVar8 = auVar17._0_8_;
  register0x00000008 = (BADSPACEBASE *)(puVar1 + -0x30);
  *(long *)(puVar1 + -0x30) = unaff_x22;
  *(undefined1 (*) [16])(puVar1 + -0x28) = auVar16;
  *(long *)(puVar1 + -0x18) = param_4;
  *(undefined8 *****)(puVar1 + -0x10) = ppppuVar11;
  *(code **)(puVar1 + -8) = pcVar14;
  unaff_x29 = puVar1 + -0x10;
  unaff_x22 = 0x3eb4000;
  if ((bRam0000000003eb498a & 1) == 0) {
    func_0x00f78a20(0x3d78ff8);
    bRam0000000003eb498a = 1;
  }
  /*Atlas.UI.Screens.MaskTransitionScreenBehaviour$$SetMaskVisible*/ func_0x0148e6ec(lVar8,1);
  lVar4 = *(long *)(lVar8 + 0x58);
  if (lVar4 == 0) {
    func_0x00f78af4();
    uVar6 = func_0x00f78b24();
    auVar16 = func_0x00f78ac0(uVar6,0);
    puVar2 = puVar1 + -0x70;
    *(undefined8 *)(puVar1 + -0x70) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x68) = unaff_x23;
    *(undefined8 *)(puVar1 + -0x60) = 0x3eb4000;
    *(long *)(puVar1 + -0x58) = auVar17._8_8_;
    *(long *)(puVar1 + -0x50) = lVar8;
    *(long *)(puVar1 + -0x48) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x40) = unaff_x29;
    *(code **)(puVar1 + -0x38) = Atlas_UI_Screens_MaskTransitionScreen__RequestPlayReveal;
    puVar12 = puVar1 + -0x40;
    unaff_x22 = 0x3d41178;
    unaff_x19 = lVar5;
    if ((bRam0000000003eb4988 & 1) == 0) {
      func_0x00f78a20(0x3d41178);
      bRam0000000003eb4988 = 1;
    }
    *(undefined1 *)(auVar16._0_8_ + 0x78) = 1;
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(auVar16._0_8_,uRam0000000003d41178);
    auVar17._8_8_ = auVar16._8_8_;
    auVar17._0_8_ = lVar4;
    if (lVar4 == 0) {
      puVar13 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayExit;
      auVar17 = func_0x00f78af4();
    }
    else {
      puVar12 = *(undefined1 **)(puVar1 + -0x40);
      puVar13 = *(undefined **)(puVar1 + -0x38);
      unaff_x22 = *(long *)(puVar1 + -0x60);
      auVar16 = *(undefined1 (*) [16])(puVar1 + -0x58);
      puVar2 = puVar1 + -0x30;
      unaff_x19 = lVar5;
      lVar5 = *(long *)(puVar1 + -0x48);
    }
    register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x30);
    *(long *)(puVar2 + -0x30) = unaff_x22;
    *(undefined1 (*) [16])(puVar2 + -0x28) = auVar16;
    *(long *)(puVar2 + -0x18) = lVar5;
    *(undefined1 **)(puVar2 + -0x10) = puVar12;
    *(undefined **)(puVar2 + -8) = puVar13;
    unaff_x29 = puVar2 + -0x10;
    lVar4 = *(long *)(auVar17._0_8_ + 0x58);
    if (lVar4 == 0) {
      func_0x00f78af4();
      uVar6 = func_0x00f78b24();
      lVar4 = func_0x00f78ac0(uVar6,0);
      *(long *)(puVar2 + -0x60) = unaff_x22;
      *(long *)(puVar2 + -0x58) = auVar16._0_8_;
      *(long *)(puVar2 + -0x50) = auVar17._0_8_;
      *(long *)(puVar2 + -0x48) = lVar5;
      *(undefined1 **)(puVar2 + -0x40) = unaff_x29;
      *(code **)(puVar2 + -0x38) = Atlas_UI_Screens_MaskTransitionScreen___ctor;
      if ((bRam0000000003eb4989 & 1) == 0) {
        func_0x00f78a20(0x3d2c7c8);
        bRam0000000003eb4989 = 1;
      }
      *(undefined8 *)(puVar2 + -0x40) = *(undefined8 *)(puVar2 + -0x40);
      *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(puVar2 + -0x38);
      if (lVar4 == 0) {
        auVar17 = func_0x00f78af4();
        puVar10 = auVar17._8_8_;
        puVar9 = auVar17._0_8_;
        uVar15 = puVar10[1];
        uVar6 = *puVar10;
        puVar9[2] = puVar10[2];
        puVar9[1] = uVar15;
        *puVar9 = uVar6;
        return puVar9;
      }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar9 = (undefined8 *)
               (*(code *)**(undefined8 **)
                           (*(long *)(*(long *)(lRam0000000003d2c7c8 + 0x18) + 0xc0) + 0x38))();
      return puVar9;
    }
    unaff_x30 = &UNK_0148e63c;
  }
  else {
    unaff_x30 = &UNK_0148e52c;
  }
code_r0x0322ef1c:
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = auVar17._8_8_;
  *(long *)((long)register0x00000008 + -0x20) = auVar17._0_8_;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar9 = (undefined8 *)(*pcRam0000000003ebf4c0)(lVar4,0);
  return puVar9;
}



// ============================================================
// RVA: 0x148e364 | Atlas.UI.Screens.MaskTransitionScreenBehaviour.IsPlaying
// ============================================================

/* WARNING: Possible PIC construction at 0x0148e560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148e9a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148ea84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0148e9a8) */
/* WARNING: Removing unreachable block (ram,0x0148e9b0) */
/* WARNING: Removing unreachable block (ram,0x0148e9e8) */
/* WARNING: Removing unreachable block (ram,0x0148e9f0) */
/* WARNING: Removing unreachable block (ram,0x0148e9f4) */
/* WARNING: Removing unreachable block (ram,0x0148e9f8) */
/* WARNING: Removing unreachable block (ram,0x0148ea30) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x0148e564) */
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
/* WARNING: Removing unreachable block (ram,0x018eee1c) */
/* WARNING: Removing unreachable block (ram,0x018eee40) */
/* WARNING: Removing unreachable block (ram,0x018eee6c) */
/* WARNING: Removing unreachable block (ram,0x018eee70) */
/* WARNING: Removing unreachable block (ram,0x018eee78) */
/* WARNING: Removing unreachable block (ram,0x018eee8c) */
/* WARNING: Removing unreachable block (ram,0x018eee94) */
/* WARNING: Removing unreachable block (ram,0x018eee98) */
/* WARNING: Removing unreachable block (ram,0x018eeea4) */
/* WARNING: Removing unreachable block (ram,0x018eeed0) */
/* WARNING: Removing unreachable block (ram,0x018eeed8) */
/* WARNING: Removing unreachable block (ram,0x018eeedc) */
/* WARNING: Removing unreachable block (ram,0x018eef04) */
/* WARNING: Removing unreachable block (ram,0x018eef08) */
/* WARNING: Removing unreachable block (ram,0x018eeef0) */
/* WARNING: Removing unreachable block (ram,0x018eef34) */
/* WARNING: Removing unreachable block (ram,0x018eef5c) */
/* WARNING: Removing unreachable block (ram,0x018eef7c) */
/* WARNING: Removing unreachable block (ram,0x018eef80) */
/* WARNING: Removing unreachable block (ram,0x018eef88) */
/* WARNING: Removing unreachable block (ram,0x018eef9c) */
/* WARNING: Removing unreachable block (ram,0x018eefa4) */
/* WARNING: Removing unreachable block (ram,0x018eefac) */
/* WARNING: Removing unreachable block (ram,0x018eefc8) */
/* WARNING: Removing unreachable block (ram,0x018eefd0) */
/* WARNING: Removing unreachable block (ram,0x018eefd4) */
/* WARNING: Removing unreachable block (ram,0x018eefec) */
/* WARNING: Removing unreachable block (ram,0x018eeef4) */
/* WARNING: Removing unreachable block (ram,0x018eef18) */
/* WARNING: Removing unreachable block (ram,0x018eef1c) */
/* WARNING: Removing unreachable block (ram,0x018eef20) */
/* WARNING: Removing unreachable block (ram,0x01513a40) */
/* WARNING: Removing unreachable block (ram,0x01638af0) */
/* WARNING: Removing unreachable block (ram,0x0148ea88) */
/* WARNING: Removing unreachable block (ram,0x0148ea90) */
/* WARNING: Removing unreachable block (ram,0x03212134) */
/* WARNING: Removing unreachable block (ram,0x03212158) */
/* WARNING: Removing unreachable block (ram,0x0321216c) */

undefined8 *
Atlas_UI_Screens_MaskTransitionScreenBehaviour__IsPlaying
          (ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong extraout_x1;
  long extraout_x1_00;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  long unaff_x21;
  undefined8 uVar20;
  ulong unaff_x22;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long *plVar23;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar24;
  undefined1 *puVar25;
  code *pcVar26;
  undefined *puVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float fVar34;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 ***pppuStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if ((bRam0000000003eb498b & 1) == 0) {
    func_0x00f78a20(0x3d23230);
    bRam0000000003eb498b = 1;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_78,*(long *)(param_1 + 0x50),0,0);
    uStack_48 = uStack_70;
    uStack_50 = uStack_78;
    uStack_38 = uStack_60;
    uStack_40 = uStack_68;
    uStack_30 = uStack_58;
    iVar4 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_50,0);
    if (((*(ushort *)(/*Atlas.UI.Screens.MaskTransitionScreenBehaviour_TypeInfo*/ lRam0000000003d23230 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.MaskTransitionScreenBehaviour_TypeInfo*/ lRam0000000003d23230 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return (undefined8 *)(ulong)(iVar4 != **(int **)(/*Atlas.UI.Screens.MaskTransitionScreenBehaviour_TypeInfo*/ lRam0000000003d23230 + 0xb8));
  }
  auVar35 = func_0x00f78af4();
  uVar21 = auVar35._8_8_;
  lVar16 = auVar35._0_8_;
  puVar1 = &stack0xffffffffffffff40;
  pcStack_88 = Atlas_UI_Screens_MaskTransitionScreen__RequestPlayHide;
  ppppuVar24 = &pppuStack_90;
  uVar14 = param_3;
  uVar12 = param_4;
  pppuStack_90 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4987 & 1) == 0) {
    func_0x00f78a20(0x3d41178);
    bRam0000000003eb4987 = 1;
  }
  if (param_3 == 0) {
LAB_0148e47c:
    uVar6 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_3,0);
    if ((uVar6 & 1) == 0) {
      *(ulong *)(lVar16 + 0x80) = param_3;
      *(undefined1 *)(lVar16 + 0x79) = 1;
    }
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41178);
    auVar35._8_8_ = uVar21;
    auVar35._0_8_ = lVar7;
    uVar20 = 0x3d41178;
    if (lVar7 == 0) goto LAB_0148e4cc;
    uVar21 = 0x3eb4000;
    puVar1 = auStack_80;
    uVar12 = param_4;
    param_4 = param_1;
    lVar16 = unaff_x21;
    ppppuVar24 = (undefined8 ****)pppuStack_90;
    pcVar26 = pcStack_88;
  }
  else {
    uVar20 = 0x3eb4000;
    if (*(long *)(lVar16 + 0x88) != 0) {
      uVar14 = 0;
      param_3 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar16 + 0x88),param_3);
      goto LAB_0148e47c;
    }
LAB_0148e4cc:
    unaff_x23 = uVar20;
    unaff_x22 = param_3;
    pcVar26 = (code *)&Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayEnter;
    auVar35 = func_0x00f78af4();
  }
  lVar7 = auVar35._0_8_;
  puVar2 = puVar1 + -0x30;
  *(ulong *)(puVar1 + -0x30) = unaff_x22;
  *(long *)(puVar1 + -0x28) = lVar16;
  *(undefined8 *)(puVar1 + -0x20) = uVar21;
  *(ulong *)(puVar1 + -0x18) = param_4;
  *(undefined8 *****)(puVar1 + -0x10) = ppppuVar24;
  *(code **)(puVar1 + -8) = pcVar26;
  puVar25 = puVar1 + -0x10;
  uVar21 = 0x3eb4000;
  if ((bRam0000000003eb498a & 1) == 0) {
    func_0x00f78a20(0x3d78ff8);
    bRam0000000003eb498a = 1;
  }
  /*Atlas.UI.Screens.MaskTransitionScreenBehaviour$$SetMaskVisible*/ func_0x0148e6ec(lVar7,1);
  if (*(long *)(lVar7 + 0x58) == 0) {
code_r0x0148e57c:
    func_0x00f78af4();
code_r0x0148e580:
    uVar21 = func_0x00f78b24();
    auVar36 = func_0x00f78ac0(uVar21,0);
    puVar2 = puVar1 + -0x70;
    *(undefined8 *)(puVar1 + -0x70) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x68) = unaff_x23;
    *(undefined8 *)(puVar1 + -0x60) = 0x3eb4000;
    *(long *)(puVar1 + -0x58) = auVar35._8_8_;
    *(long *)(puVar1 + -0x50) = lVar7;
    *(ulong *)(puVar1 + -0x48) = uVar12;
    *(undefined1 **)(puVar1 + -0x40) = puVar25;
    *(code **)(puVar1 + -0x38) = Atlas_UI_Screens_MaskTransitionScreen__RequestPlayReveal;
    puVar25 = puVar1 + -0x40;
    unaff_x23 = 0x3eb4000;
    uVar21 = 0x3d41178;
    uVar12 = uVar14;
    if ((bRam0000000003eb4988 & 1) == 0) {
      func_0x00f78a20(0x3d41178);
      bRam0000000003eb4988 = 1;
    }
    *(undefined1 *)(auVar36._0_8_ + 0x78) = 1;
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(auVar36._0_8_,uRam0000000003d41178);
    auVar37._8_8_ = auVar36._8_8_;
    auVar37._0_8_ = lVar16;
    if (lVar16 == 0) {
      puVar27 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayExit;
      auVar37 = func_0x00f78af4();
    }
    else {
      puVar25 = *(undefined1 **)(puVar1 + -0x40);
      puVar27 = *(undefined **)(puVar1 + -0x38);
      uVar21 = *(undefined8 *)(puVar1 + -0x60);
      auVar36 = *(undefined1 (*) [16])(puVar1 + -0x58);
      puVar2 = puVar1 + -0x30;
      unaff_x24 = *(undefined8 *)(puVar1 + -0x70);
      unaff_x23 = *(undefined8 *)(puVar1 + -0x68);
      uVar12 = uVar14;
      uVar14 = *(ulong *)(puVar1 + -0x48);
    }
    uVar8 = auVar37._8_8_;
    lVar7 = auVar37._0_8_;
    *(undefined8 *)(puVar2 + -0x30) = uVar21;
    *(undefined1 (*) [16])(puVar2 + -0x28) = auVar36;
    *(ulong *)(puVar2 + -0x18) = uVar14;
    *(undefined1 **)(puVar2 + -0x10) = puVar25;
    *(undefined **)(puVar2 + -8) = puVar27;
    uVar20 = auVar36._0_8_;
    if (*(long *)(lVar7 + 0x58) != 0) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar7 + 0x58),0,0);
      lVar16 = *(long *)(lVar7 + 0x48);
      uVar14 = uVar12;
      uVar20 = uVar8;
      if (lVar16 != 0) {
        if (*(uint *)(lVar16 + 0x18) <= auVar37._8_4_) goto code_r0x0148e67c;
        lVar16 = *(long *)(lVar16 + (long)(int)auVar37._8_4_ * 8 + 0x20);
        if (lVar16 != 0) {
          uVar14 = *(ulong *)(lVar16 + 0x20);
          uVar6 = *(ulong *)(lVar16 + 0x28);
          puVar25 = *(undefined1 **)(puVar2 + -0x10);
          puVar27 = *(undefined **)(puVar2 + -8);
          lVar16 = *(long *)(puVar2 + -0x20);
          uVar15 = *(ulong *)(puVar2 + -0x18);
          uVar21 = *(undefined8 *)(puVar2 + -0x30);
          uVar20 = *(undefined8 *)(puVar2 + -0x28);
          goto code_r0x0148e794;
        }
      }
    }
    func_0x00f78af4();
code_r0x0148e67c:
    uVar8 = func_0x00f78b24();
    lVar16 = func_0x00f78ac0(uVar8,0);
    *(undefined8 *)(puVar2 + -0x60) = uVar21;
    *(undefined8 *)(puVar2 + -0x58) = uVar20;
    *(long *)(puVar2 + -0x50) = lVar7;
    *(ulong *)(puVar2 + -0x48) = uVar14;
    *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
    *(code **)(puVar2 + -0x38) = Atlas_UI_Screens_MaskTransitionScreen___ctor;
    if ((bRam0000000003eb4989 & 1) == 0) {
      func_0x00f78a20(0x3d2c7c8);
      bRam0000000003eb4989 = 1;
    }
    *(undefined8 *)(puVar2 + -0x40) = *(undefined8 *)(puVar2 + -0x40);
    *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(puVar2 + -0x38);
    if (lVar16 == 0) {
      auVar35 = func_0x00f78af4();
      puVar13 = auVar35._8_8_;
      puVar10 = auVar35._0_8_;
      uVar20 = puVar13[1];
      uVar21 = *puVar13;
      puVar10[2] = puVar13[2];
      puVar10[1] = uVar20;
      *puVar10 = uVar21;
      return puVar10;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar10 = (undefined8 *)
              (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(lRam0000000003d2c7c8 + 0x18) + 0xc0) + 0x38))();
    return puVar10;
  }
  uVar14 = 0;
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar7 + 0x58),0);
  lVar16 = *(long *)(lVar7 + 0x48);
  if (lVar16 == 0) goto code_r0x0148e57c;
  if (*(uint *)(lVar16 + 0x18) <= auVar35._8_4_) goto code_r0x0148e580;
  lVar16 = *(long *)(lVar16 + (long)(int)auVar35._8_4_ * 8 + 0x20);
  if (lVar16 == 0) goto code_r0x0148e57c;
  uVar20 = 0x3d78000;
  uVar14 = *(ulong *)(lVar16 + 0x10);
  uVar6 = *(ulong *)(lVar16 + 0x18);
  puVar27 = &UNK_0148e564;
  uVar15 = uVar12;
  lVar16 = lVar7;
code_r0x0148e794:
  puVar3 = puVar2 + -0x90;
  *(undefined8 *)(puVar2 + -0x80) = unaff_d11;
  *(undefined8 *)(puVar2 + -0x78) = unaff_d10;
  *(undefined8 *)(puVar2 + -0x70) = unaff_d9;
  *(ulong *)(puVar2 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x30) = uVar21;
  *(undefined8 *)(puVar2 + -0x28) = uVar20;
  *(long *)(puVar2 + -0x20) = lVar16;
  *(ulong *)(puVar2 + -0x18) = uVar15;
  *(undefined1 **)(puVar2 + -0x10) = puVar25;
  *(undefined **)(puVar2 + -8) = puVar27;
  puVar1 = puVar2 + -0x10;
  uVar19 = 0x3eb4000;
  uVar15 = uVar14;
  if ((bRam0000000003eb498c & 1) == 0) {
    func_0x00f78a20(0x3d23230);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb498c = 1;
  }
  uVar9 = uVar12;
  uVar22 = uVar6;
  if (uVar6 != 0) {
    *(ulong *)(puVar2 + -0x90) = uVar14;
    lVar16 = *(long *)(lVar7 + 0x40);
    if (lVar16 != 0) {
      iVar4 = *(int *)(lVar16 + 0x18);
      *(int *)(puVar2 + -0x88) = iVar4;
      uVar11 = uVar12;
      if (0 < iVar4) {
        uVar18 = 0;
        uVar11 = 0x3d23990;
        *(undefined4 *)(puVar2 + -0x84) = *(undefined4 *)(uVar6 + 0x18);
code_r0x0148e82c:
        uVar9 = uVar12;
        if ((*(uint *)(lVar16 + 0x18) <= uVar18) || (*(uint *)(uVar6 + 0x18) <= uVar18))
        goto code_r0x0148eac4;
        lVar16 = *(long *)(lVar16 + (long)(int)uVar18 * 8 + 0x20);
        uVar19 = *(ulong *)(uVar6 + (long)(int)uVar18 * 8 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar9 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar12,0);
        if ((uVar9 & 1) == 0) {
          uVar9 = uVar12;
          uVar22 = uVar6;
          if (uVar19 == 0) goto code_r0x0148eac0;
          uVar17 = *(ulong *)(uVar19 + 0x10);
        }
        else {
          uVar17 = uVar12;
          uVar9 = uVar12;
          uVar22 = uVar6;
          if (uVar19 == 0) goto code_r0x0148eac0;
        }
        if (*(char *)(uVar19 + 0x18) != '\0') {
          uVar17 = 0;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar15 = 0;
        uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0);
        uVar14 = uVar6;
        uVar9 = uVar12;
        uVar22 = uVar12;
        if ((lVar16 == 0) || (*(long *)(lVar16 + 0x18) == 0)) goto code_r0x0148eac0;
        uVar9 = 0x3d23990;
        uVar15 = 0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar16 + 0x18),(int)uVar18 < *(int *)(puVar2 + -0x84));
        plVar23 = *(long **)(lVar16 + 0x10);
        /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
        if (plVar23 == (long *)0x0) goto code_r0x0148eac0;
        (**(code **)(*plVar23 + 0x2a8))(plVar23,*(undefined8 *)(*plVar23 + 0x2b0));
        if ((uVar5 & 1) == 0) {
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar15 = 0;
          iVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,0);
          if (iVar4 != 0) goto code_r0x0148e950;
          if (*(int *)(puVar2 + -0x84) <= (int)uVar18) goto code_r0x0148ea48;
        }
        else {
code_r0x0148e950:
          if (*(long *)(lVar16 + 0x10) == 0) goto code_r0x0148eac0;
          uVar15 = 0;
          /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar16 + 0x10),0);
          if (*(int *)(puVar2 + -0x84) <= (int)uVar18) {
code_r0x0148ea48:
            uVar18 = uVar18 + 1;
            if (*(uint *)(puVar2 + -0x88) == uVar18) goto code_r0x0148ea6c;
            lVar16 = *(long *)(lVar7 + 0x40);
            uVar9 = uVar12;
            uVar22 = uVar6;
            if (lVar16 == 0) goto code_r0x0148eac0;
            goto code_r0x0148e82c;
          }
          if (uVar5 == 0) goto code_r0x0148e998;
          if (*(long *)(lVar16 + 0x10) == 0) goto code_r0x0148eac0;
          /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar16 + 0x10),uVar17,0);
        }
code_r0x0148e998:
        fVar28 = *(float *)(uVar19 + 0x2c);
        uVar15 = (ulong)*(uint *)(uVar19 + 0x30);
        puVar27 = &UNK_0148e9a8;
        goto code_r0x0148ead0;
      }
code_r0x0148ea6c:
      lVar16 = *(long *)(lVar7 + 0x50);
      uVar9 = uVar11;
      if (lVar16 != 0) {
        uVar12 = *(ulong *)(puVar2 + -0x90);
        puVar27 = &UNK_0148ea88;
        goto code_r0x03211320;
      }
    }
  }
code_r0x0148eac0:
  func_0x00f78af4();
  uVar6 = uVar22;
code_r0x0148eac4:
  uVar12 = uVar6;
  uVar11 = uVar9;
  uVar6 = uVar14;
  uVar21 = func_0x00f78b24();
  puVar27 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__CalculateScaleAndOffset;
  fVar28 = (float)func_0x00f78ac0(uVar21,0);
  uVar17 = extraout_x1;
code_r0x0148ead0:
  puVar3 = puVar2 + -0x110;
  *(undefined8 *)(puVar2 + -0xf0) = unaff_d13;
  *(undefined8 *)(puVar2 + -0xe8) = unaff_d12;
  *(undefined8 *)(puVar2 + -0xe0) = unaff_d11;
  *(undefined8 *)(puVar2 + -0xd8) = unaff_d10;
  *(undefined8 *)(puVar2 + -0xd0) = unaff_d9;
  *(ulong *)(puVar2 + -200) = unaff_d8;
  *(ulong *)(puVar2 + -0xc0) = uVar12;
  *(ulong *)(puVar2 + -0xb8) = uVar11;
  *(ulong *)(puVar2 + -0xb0) = uVar6;
  *(ulong *)(puVar2 + -0xa8) = uVar19;
  *(undefined1 **)(puVar2 + -0xa0) = puVar1;
  *(undefined **)(puVar2 + -0x98) = puVar27;
  puVar1 = puVar2 + -0xa0;
  unaff_d8 = (ulong)(uint)fVar28;
  uVar22 = 0x3eb4000;
  uVar12 = uVar15;
  if ((bRam0000000003eb498d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25608);
    bRam0000000003eb498d = 1;
  }
  *(undefined8 *)(puVar2 + -0x100) = 0;
  *(undefined8 *)(puVar2 + -0xf8) = 0;
  uVar31 = 0x3f800000;
  uVar32 = 0;
  uVar33 = 0;
  /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,puVar2 + -0x100,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar10 = (undefined8 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar17,0);
  if (((ulong)puVar10 & 1) != 0) {
    uVar11 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
    iVar4 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
    if (uVar17 == 0) {
      puVar27 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayAnimation;
      func_0x00f78af4();
      if (extraout_x1_00 == 0) {
        *(undefined1 **)(puVar2 + -0x120) = puVar1;
        *(undefined **)(puVar2 + -0x118) =
             &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayAnimation;
        puVar10 = (undefined8 *)func_0x00f78af4();
        *(undefined8 *)(puVar2 + -0x150) = 0x3eb4000;
        *(ulong *)(puVar2 + -0x148) = uVar11;
        *(undefined8 *)(puVar2 + -0x140) = 0;
        *(ulong *)(puVar2 + -0x138) = uVar15;
        *(undefined1 **)(puVar2 + -0x130) = puVar2 + -0x120;
        *(undefined **)(puVar2 + -0x128) = &Atlas_UI_Screens_MaskTransitionScreenBehaviour___ctor;
        if ((bRam0000000003eb498e & 1) == 0) {
          func_0x00f78a20(0x3d255d8);
          bRam0000000003eb498e = 1;
        }
        if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined8 *)(puVar2 + -0x150) = *(undefined8 *)(puVar2 + -0x150);
        *(undefined8 *)(puVar2 + -0x148) = *(undefined8 *)(puVar2 + -0x148);
        *(undefined8 *)(puVar2 + -0x140) = *(undefined8 *)(puVar2 + -0x140);
        *(undefined8 *)(puVar2 + -0x138) = *(undefined8 *)(puVar2 + -0x138);
        *(undefined8 *)(puVar2 + -0x130) = *(undefined8 *)(puVar2 + -0x130);
        *(undefined8 *)(puVar2 + -0x128) = *(undefined8 *)(puVar2 + -0x128);
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return puVar10;
      }
      uVar14 = 0;
      lVar16 = extraout_x1_00;
      uVar19 = uVar15;
code_r0x03211320:
      *(undefined8 *)(puVar3 + -0x40) = unaff_d9;
      *(ulong *)(puVar3 + -0x38) = unaff_d8;
      *(ulong *)(puVar3 + -0x30) = uVar22;
      *(ulong *)(puVar3 + -0x28) = uVar11;
      *(ulong *)(puVar3 + -0x20) = uVar14;
      *(ulong *)(puVar3 + -0x18) = uVar19;
      *(undefined1 **)(puVar3 + -0x10) = puVar1;
      *(undefined **)(puVar3 + -8) = puVar27;
      if (pcRam0000000003ebe3c0 == (code *)0x0) {
        pcRam0000000003ebe3c0 =
             (code *)func_0x00f789d4("UnityEngine.Animator::StringToHash(System.String)",uVar12,0,0)
        ;
      }
      uVar21 = (*pcRam0000000003ebe3c0)(uVar12);
      if (pcRam0000000003ebe318 == (code *)0x0) {
        pcRam0000000003ebe318 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x032113b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar10 = (undefined8 *)(*pcRam0000000003ebe318)(0,lVar16,uVar21,0);
      return puVar10;
    }
    fVar34 = (float)iVar4;
    uVar29 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(uVar17,0);
    *(undefined4 *)(puVar2 + -0x110) = uVar29;
    *(undefined4 *)(puVar2 + -0x10c) = uVar31;
    *(undefined4 *)(puVar2 + -0x108) = uVar32;
    *(undefined4 *)(puVar2 + -0x104) = uVar33;
    uVar32 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(puVar2 + -0x110,0);
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    fVar30 = (float)/*Core.UI2.UIUtils$$CalculatePreserveAspectRatioScale*/ func_0x02f85ac4((float)(int)uVar11,fVar34,uVar32,uVar31,uVar15,0);
    puVar10 = (undefined8 *)/*Core.UI2.UIUtils$$CalculateCentredSTCoordsForScaleFactor*/ func_0x02f90c74(fVar30 / fVar28,fVar34 / fVar28,0);
  }
  return puVar10;
}



// ============================================================
// RVA: 0x148e4d0 | Atlas.UI.Screens.MaskTransitionScreenBehaviour.PlayEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x0148e560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148e9a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148ea84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0148e9a8) */
/* WARNING: Removing unreachable block (ram,0x0148e9b0) */
/* WARNING: Removing unreachable block (ram,0x0148e9e8) */
/* WARNING: Removing unreachable block (ram,0x0148e9f0) */
/* WARNING: Removing unreachable block (ram,0x0148e9f4) */
/* WARNING: Removing unreachable block (ram,0x0148e9f8) */
/* WARNING: Removing unreachable block (ram,0x0148ea30) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x0148e564) */
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
/* WARNING: Removing unreachable block (ram,0x018eee1c) */
/* WARNING: Removing unreachable block (ram,0x018eee40) */
/* WARNING: Removing unreachable block (ram,0x018eee6c) */
/* WARNING: Removing unreachable block (ram,0x018eee70) */
/* WARNING: Removing unreachable block (ram,0x018eee78) */
/* WARNING: Removing unreachable block (ram,0x018eee8c) */
/* WARNING: Removing unreachable block (ram,0x018eee94) */
/* WARNING: Removing unreachable block (ram,0x018eee98) */
/* WARNING: Removing unreachable block (ram,0x018eeea4) */
/* WARNING: Removing unreachable block (ram,0x018eeed0) */
/* WARNING: Removing unreachable block (ram,0x018eeed8) */
/* WARNING: Removing unreachable block (ram,0x018eeedc) */
/* WARNING: Removing unreachable block (ram,0x018eef04) */
/* WARNING: Removing unreachable block (ram,0x018eef08) */
/* WARNING: Removing unreachable block (ram,0x018eeef0) */
/* WARNING: Removing unreachable block (ram,0x018eef34) */
/* WARNING: Removing unreachable block (ram,0x018eef5c) */
/* WARNING: Removing unreachable block (ram,0x018eef7c) */
/* WARNING: Removing unreachable block (ram,0x018eef80) */
/* WARNING: Removing unreachable block (ram,0x018eef88) */
/* WARNING: Removing unreachable block (ram,0x018eef9c) */
/* WARNING: Removing unreachable block (ram,0x018eefa4) */
/* WARNING: Removing unreachable block (ram,0x018eefac) */
/* WARNING: Removing unreachable block (ram,0x018eefc8) */
/* WARNING: Removing unreachable block (ram,0x018eefd0) */
/* WARNING: Removing unreachable block (ram,0x018eefd4) */
/* WARNING: Removing unreachable block (ram,0x018eefec) */
/* WARNING: Removing unreachable block (ram,0x018eeef4) */
/* WARNING: Removing unreachable block (ram,0x018eef18) */
/* WARNING: Removing unreachable block (ram,0x018eef1c) */
/* WARNING: Removing unreachable block (ram,0x018eef20) */
/* WARNING: Removing unreachable block (ram,0x01513a40) */
/* WARNING: Removing unreachable block (ram,0x01638af0) */
/* WARNING: Removing unreachable block (ram,0x0148ea88) */
/* WARNING: Removing unreachable block (ram,0x0148ea90) */
/* WARNING: Removing unreachable block (ram,0x03212134) */
/* WARNING: Removing unreachable block (ram,0x03212158) */
/* WARNING: Removing unreachable block (ram,0x0321216c) */

undefined8 *
Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayEnter
          (long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong extraout_x1;
  long extraout_x1_00;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 unaff_x23;
  undefined8 uVar20;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long *plVar21;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar22;
  undefined8 ****ppppuVar23;
  undefined1 *puVar24;
  undefined8 uVar25;
  code *pcVar26;
  undefined *puVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float fVar34;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 ***pppuStack_40;
  code *pcStack_38;
  undefined8 *puVar10;
  
  auVar37._8_8_ = param_1;
  auVar37._0_8_ = param_2;
  puVar1 = &stack0xffffffffffffffd0;
  ppppuVar23 = (undefined8 ****)&stack0xfffffffffffffff0;
  uVar18 = 0x3eb4000;
  if ((bRam0000000003eb498a & 1) == 0) {
    func_0x00f78a20(0x3d78ff8);
    bRam0000000003eb498a = 1;
  }
  /*Atlas.UI.Screens.MaskTransitionScreenBehaviour$$SetMaskVisible*/ func_0x0148e6ec(param_1,1);
  if (*(long *)(param_1 + 0x58) == 0) {
LAB_0148e57c:
    func_0x00f78af4();
LAB_0148e580:
    uVar18 = func_0x00f78b24();
    auVar35 = func_0x00f78ac0(uVar18,0);
    puVar1 = &stack0xffffffffffffff90;
    pcStack_38 = Atlas_UI_Screens_MaskTransitionScreen__RequestPlayReveal;
    ppppuVar22 = &pppuStack_40;
    uVar20 = 0x3eb4000;
    uVar18 = 0x3d41178;
    uVar9 = param_3;
    pppuStack_40 = ppppuVar23;
    if ((bRam0000000003eb4988 & 1) == 0) {
      func_0x00f78a20(0x3d41178);
      bRam0000000003eb4988 = 1;
    }
    *(undefined1 *)(auVar35._0_8_ + 0x78) = 1;
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(auVar35._0_8_,uRam0000000003d41178);
    auVar36._8_8_ = auVar35._8_8_;
    auVar36._0_8_ = lVar13;
    if (lVar13 == 0) {
      pcVar26 = (code *)&Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayExit;
      auVar36 = func_0x00f78af4();
    }
    else {
      uVar18 = 0x3eb4000;
      puVar1 = &stack0xffffffffffffffd0;
      uVar9 = param_3;
      param_3 = param_4;
      uVar20 = unaff_x23;
      ppppuVar22 = (undefined8 ****)pppuStack_40;
      pcVar26 = pcStack_38;
      auVar35 = auVar37;
    }
    uVar17 = auVar36._8_8_;
    param_1 = auVar36._0_8_;
    *(undefined8 *)(puVar1 + -0x30) = uVar18;
    *(undefined1 (*) [16])(puVar1 + -0x28) = auVar35;
    *(ulong *)(puVar1 + -0x18) = param_3;
    *(undefined8 *****)(puVar1 + -0x10) = ppppuVar22;
    *(code **)(puVar1 + -8) = pcVar26;
    uVar25 = auVar35._0_8_;
    if (*(long *)(param_1 + 0x58) != 0) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x58),0,0);
      lVar13 = *(long *)(param_1 + 0x48);
      param_3 = uVar9;
      uVar25 = uVar17;
      if (lVar13 != 0) {
        if (*(uint *)(lVar13 + 0x18) <= auVar36._8_4_) goto code_r0x0148e67c;
        lVar13 = *(long *)(lVar13 + (long)(int)auVar36._8_4_ * 8 + 0x20);
        if (lVar13 != 0) {
          uVar11 = *(ulong *)(lVar13 + 0x20);
          uVar8 = *(ulong *)(lVar13 + 0x28);
          ppppuVar23 = *(undefined8 *****)(puVar1 + -0x10);
          uVar25 = *(undefined8 *)(puVar1 + -8);
          lVar13 = *(long *)(puVar1 + -0x20);
          param_4 = *(ulong *)(puVar1 + -0x18);
          uVar18 = *(undefined8 *)(puVar1 + -0x30);
          uVar17 = *(undefined8 *)(puVar1 + -0x28);
          goto code_r0x0148e794;
        }
      }
    }
    func_0x00f78af4();
code_r0x0148e67c:
    uVar20 = func_0x00f78b24();
    lVar13 = func_0x00f78ac0(uVar20,0);
    *(undefined8 *)(puVar1 + -0x60) = uVar18;
    *(undefined8 *)(puVar1 + -0x58) = uVar25;
    *(long *)(puVar1 + -0x50) = param_1;
    *(ulong *)(puVar1 + -0x48) = param_3;
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
    *(code **)(puVar1 + -0x38) = Atlas_UI_Screens_MaskTransitionScreen___ctor;
    if ((bRam0000000003eb4989 & 1) == 0) {
      func_0x00f78a20(0x3d2c7c8);
      bRam0000000003eb4989 = 1;
    }
    *(undefined8 *)(puVar1 + -0x40) = *(undefined8 *)(puVar1 + -0x40);
    *(undefined8 *)(puVar1 + -0x38) = *(undefined8 *)(puVar1 + -0x38);
    if (lVar13 == 0) {
      auVar37 = func_0x00f78af4();
      puVar10 = auVar37._8_8_;
      puVar6 = auVar37._0_8_;
      uVar20 = puVar10[1];
      uVar18 = *puVar10;
      puVar6[2] = puVar10[2];
      puVar6[1] = uVar20;
      *puVar6 = uVar18;
      return puVar6;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar6 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c7c8 + 0x18) + 0xc0) + 0x38))();
    return puVar6;
  }
  param_3 = 0;
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x58),0);
  lVar13 = *(long *)(param_1 + 0x48);
  if (lVar13 == 0) goto LAB_0148e57c;
  if (*(uint *)(lVar13 + 0x18) <= (uint)param_2) goto LAB_0148e580;
  lVar13 = *(long *)(lVar13 + (long)(int)(uint)param_2 * 8 + 0x20);
  if (lVar13 == 0) goto LAB_0148e57c;
  uVar17 = 0x3d78000;
  uVar11 = *(ulong *)(lVar13 + 0x10);
  uVar8 = *(ulong *)(lVar13 + 0x18);
  uVar25 = 0x148e564;
  uVar9 = param_4;
  lVar13 = param_1;
  uVar20 = unaff_x23;
code_r0x0148e794:
  puVar2 = puVar1 + -0x90;
  *(undefined8 *)(puVar1 + -0x80) = unaff_d11;
  *(undefined8 *)(puVar1 + -0x78) = unaff_d10;
  *(undefined8 *)(puVar1 + -0x70) = unaff_d9;
  *(ulong *)(puVar1 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar1 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar1 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar1 + -0x38) = uVar20;
  *(undefined8 *)(puVar1 + -0x30) = uVar18;
  *(undefined8 *)(puVar1 + -0x28) = uVar17;
  *(long *)(puVar1 + -0x20) = lVar13;
  *(ulong *)(puVar1 + -0x18) = param_4;
  *(undefined8 *****)(puVar1 + -0x10) = ppppuVar23;
  *(undefined8 *)(puVar1 + -8) = uVar25;
  puVar24 = puVar1 + -0x10;
  uVar16 = 0x3eb4000;
  uVar12 = uVar11;
  if ((bRam0000000003eb498c & 1) == 0) {
    func_0x00f78a20(0x3d23230);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb498c = 1;
  }
  uVar5 = uVar9;
  uVar19 = uVar8;
  if (uVar8 != 0) {
    *(ulong *)(puVar1 + -0x90) = uVar11;
    lVar13 = *(long *)(param_1 + 0x40);
    if (lVar13 != 0) {
      iVar4 = *(int *)(lVar13 + 0x18);
      *(int *)(puVar1 + -0x88) = iVar4;
      uVar7 = uVar9;
      if (0 < iVar4) {
        uVar15 = 0;
        uVar7 = 0x3d23990;
        *(undefined4 *)(puVar1 + -0x84) = *(undefined4 *)(uVar8 + 0x18);
code_r0x0148e82c:
        uVar5 = uVar9;
        if ((*(uint *)(lVar13 + 0x18) <= uVar15) || (*(uint *)(uVar8 + 0x18) <= uVar15))
        goto code_r0x0148eac4;
        lVar13 = *(long *)(lVar13 + (long)(int)uVar15 * 8 + 0x20);
        uVar16 = *(ulong *)(uVar8 + (long)(int)uVar15 * 8 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar9,0);
        if ((uVar5 & 1) == 0) {
          uVar5 = uVar9;
          uVar19 = uVar8;
          if (uVar16 == 0) goto code_r0x0148eac0;
          uVar14 = *(ulong *)(uVar16 + 0x10);
        }
        else {
          uVar14 = uVar9;
          uVar5 = uVar9;
          uVar19 = uVar8;
          if (uVar16 == 0) goto code_r0x0148eac0;
        }
        if (*(char *)(uVar16 + 0x18) != '\0') {
          uVar14 = 0;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar12 = 0;
        uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar14,0);
        uVar11 = uVar8;
        uVar5 = uVar9;
        uVar19 = uVar9;
        if ((lVar13 == 0) || (*(long *)(lVar13 + 0x18) == 0)) goto code_r0x0148eac0;
        uVar5 = 0x3d23990;
        uVar12 = 0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar13 + 0x18),(int)uVar15 < *(int *)(puVar1 + -0x84));
        plVar21 = *(long **)(lVar13 + 0x10);
        /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
        if (plVar21 == (long *)0x0) goto code_r0x0148eac0;
        (**(code **)(*plVar21 + 0x2a8))(plVar21,*(undefined8 *)(*plVar21 + 0x2b0));
        if ((uVar3 & 1) == 0) {
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar12 = 0;
          iVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar14,0);
          if (iVar4 != 0) goto code_r0x0148e950;
          if (*(int *)(puVar1 + -0x84) <= (int)uVar15) goto code_r0x0148ea48;
        }
        else {
code_r0x0148e950:
          if (*(long *)(lVar13 + 0x10) == 0) goto code_r0x0148eac0;
          uVar12 = 0;
          /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar13 + 0x10),0);
          if (*(int *)(puVar1 + -0x84) <= (int)uVar15) {
code_r0x0148ea48:
            uVar15 = uVar15 + 1;
            if (*(uint *)(puVar1 + -0x88) == uVar15) goto code_r0x0148ea6c;
            lVar13 = *(long *)(param_1 + 0x40);
            uVar5 = uVar9;
            uVar19 = uVar8;
            if (lVar13 == 0) goto code_r0x0148eac0;
            goto code_r0x0148e82c;
          }
          if (uVar3 == 0) goto code_r0x0148e998;
          if (*(long *)(lVar13 + 0x10) == 0) goto code_r0x0148eac0;
          /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar13 + 0x10),uVar14,0);
        }
code_r0x0148e998:
        fVar28 = *(float *)(uVar16 + 0x2c);
        uVar12 = (ulong)*(uint *)(uVar16 + 0x30);
        puVar27 = &UNK_0148e9a8;
        goto code_r0x0148ead0;
      }
code_r0x0148ea6c:
      lVar13 = *(long *)(param_1 + 0x50);
      uVar5 = uVar7;
      if (lVar13 != 0) {
        uVar9 = *(ulong *)(puVar1 + -0x90);
        puVar27 = &UNK_0148ea88;
        goto code_r0x03211320;
      }
    }
  }
code_r0x0148eac0:
  func_0x00f78af4();
  uVar8 = uVar19;
code_r0x0148eac4:
  uVar9 = uVar8;
  uVar7 = uVar5;
  uVar8 = uVar11;
  uVar18 = func_0x00f78b24();
  puVar27 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__CalculateScaleAndOffset;
  fVar28 = (float)func_0x00f78ac0(uVar18,0);
  uVar14 = extraout_x1;
code_r0x0148ead0:
  puVar2 = puVar1 + -0x110;
  *(undefined8 *)(puVar1 + -0xf0) = unaff_d13;
  *(undefined8 *)(puVar1 + -0xe8) = unaff_d12;
  *(undefined8 *)(puVar1 + -0xe0) = unaff_d11;
  *(undefined8 *)(puVar1 + -0xd8) = unaff_d10;
  *(undefined8 *)(puVar1 + -0xd0) = unaff_d9;
  *(ulong *)(puVar1 + -200) = unaff_d8;
  *(ulong *)(puVar1 + -0xc0) = uVar9;
  *(ulong *)(puVar1 + -0xb8) = uVar7;
  *(ulong *)(puVar1 + -0xb0) = uVar8;
  *(ulong *)(puVar1 + -0xa8) = uVar16;
  *(undefined1 **)(puVar1 + -0xa0) = puVar24;
  *(undefined **)(puVar1 + -0x98) = puVar27;
  puVar24 = puVar1 + -0xa0;
  unaff_d8 = (ulong)(uint)fVar28;
  uVar19 = 0x3eb4000;
  uVar9 = uVar12;
  if ((bRam0000000003eb498d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25608);
    bRam0000000003eb498d = 1;
  }
  *(undefined8 *)(puVar1 + -0x100) = 0;
  *(undefined8 *)(puVar1 + -0xf8) = 0;
  uVar31 = 0x3f800000;
  uVar32 = 0;
  uVar33 = 0;
  /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,puVar1 + -0x100,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar6 = (undefined8 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar14,0);
  if (((ulong)puVar6 & 1) != 0) {
    uVar7 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
    iVar4 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
    if (uVar14 == 0) {
      puVar27 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayAnimation;
      func_0x00f78af4();
      if (extraout_x1_00 == 0) {
        *(undefined1 **)(puVar1 + -0x120) = puVar24;
        *(undefined **)(puVar1 + -0x118) =
             &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayAnimation;
        puVar6 = (undefined8 *)func_0x00f78af4();
        *(undefined8 *)(puVar1 + -0x150) = 0x3eb4000;
        *(ulong *)(puVar1 + -0x148) = uVar7;
        *(undefined8 *)(puVar1 + -0x140) = 0;
        *(ulong *)(puVar1 + -0x138) = uVar12;
        *(undefined1 **)(puVar1 + -0x130) = puVar1 + -0x120;
        *(undefined **)(puVar1 + -0x128) = &Atlas_UI_Screens_MaskTransitionScreenBehaviour___ctor;
        if ((bRam0000000003eb498e & 1) == 0) {
          func_0x00f78a20(0x3d255d8);
          bRam0000000003eb498e = 1;
        }
        if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined8 *)(puVar1 + -0x150) = *(undefined8 *)(puVar1 + -0x150);
        *(undefined8 *)(puVar1 + -0x148) = *(undefined8 *)(puVar1 + -0x148);
        *(undefined8 *)(puVar1 + -0x140) = *(undefined8 *)(puVar1 + -0x140);
        *(undefined8 *)(puVar1 + -0x138) = *(undefined8 *)(puVar1 + -0x138);
        *(undefined8 *)(puVar1 + -0x130) = *(undefined8 *)(puVar1 + -0x130);
        *(undefined8 *)(puVar1 + -0x128) = *(undefined8 *)(puVar1 + -0x128);
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return puVar6;
      }
      uVar11 = 0;
      lVar13 = extraout_x1_00;
      uVar16 = uVar12;
code_r0x03211320:
      *(undefined8 *)(puVar2 + -0x40) = unaff_d9;
      *(ulong *)(puVar2 + -0x38) = unaff_d8;
      *(ulong *)(puVar2 + -0x30) = uVar19;
      *(ulong *)(puVar2 + -0x28) = uVar7;
      *(ulong *)(puVar2 + -0x20) = uVar11;
      *(ulong *)(puVar2 + -0x18) = uVar16;
      *(undefined1 **)(puVar2 + -0x10) = puVar24;
      *(undefined **)(puVar2 + -8) = puVar27;
      if (pcRam0000000003ebe3c0 == (code *)0x0) {
        pcRam0000000003ebe3c0 =
             (code *)func_0x00f789d4("UnityEngine.Animator::StringToHash(System.String)",uVar9,0,0);
      }
      uVar18 = (*pcRam0000000003ebe3c0)(uVar9);
      if (pcRam0000000003ebe318 == (code *)0x0) {
        pcRam0000000003ebe318 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x032113b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar6 = (undefined8 *)(*pcRam0000000003ebe318)(0,lVar13,uVar18,0);
      return puVar6;
    }
    fVar34 = (float)iVar4;
    uVar29 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(uVar14,0);
    *(undefined4 *)(puVar1 + -0x110) = uVar29;
    *(undefined4 *)(puVar1 + -0x10c) = uVar31;
    *(undefined4 *)(puVar1 + -0x108) = uVar32;
    *(undefined4 *)(puVar1 + -0x104) = uVar33;
    uVar32 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(puVar1 + -0x110,0);
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    fVar30 = (float)/*Core.UI2.UIUtils$$CalculatePreserveAspectRatioScale*/ func_0x02f85ac4((float)(int)uVar7,fVar34,uVar32,uVar31,uVar12,0);
    puVar6 = (undefined8 *)/*Core.UI2.UIUtils$$CalculateCentredSTCoordsForScaleFactor*/ func_0x02f90c74(fVar30 / fVar28,fVar34 / fVar28,0);
  }
  return puVar6;
}



// ============================================================
// RVA: 0x148e60c | Atlas.UI.Screens.MaskTransitionScreenBehaviour.PlayExit
// ============================================================

/* WARNING: Possible PIC construction at 0x0148e9a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148ea84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0148e9a8) */
/* WARNING: Removing unreachable block (ram,0x0148e9b0) */
/* WARNING: Removing unreachable block (ram,0x0148e9e8) */
/* WARNING: Removing unreachable block (ram,0x0148e9f0) */
/* WARNING: Removing unreachable block (ram,0x0148e9f4) */
/* WARNING: Removing unreachable block (ram,0x0148e9f8) */
/* WARNING: Removing unreachable block (ram,0x0148ea30) */
/* WARNING: Removing unreachable block (ram,0x0148ea88) */
/* WARNING: Removing unreachable block (ram,0x0148ea90) */
/* WARNING: Removing unreachable block (ram,0x03212134) */
/* WARNING: Removing unreachable block (ram,0x03212158) */
/* WARNING: Removing unreachable block (ram,0x0321216c) */

undefined8 *
Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayExit(long param_1,uint param_2,ulong param_3)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong extraout_x1;
  long extraout_x1_00;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 ****ppppuVar16;
  undefined *puVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float fVar24;
  undefined1 auVar25 [16];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  uint uStack_88;
  int iStack_84;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x58),0,0);
    lVar11 = *(long *)(param_1 + 0x48);
    if (lVar11 != 0) {
      if (*(uint *)(lVar11 + 0x18) <= param_2) goto LAB_0148e67c;
      lVar11 = *(long *)(lVar11 + (long)(int)param_2 * 8 + 0x20);
      if (lVar11 != 0) {
        uVar4 = *(ulong *)(lVar11 + 0x20);
        uVar9 = *(ulong *)(lVar11 + 0x28);
        puVar1 = &uStack_90;
        ppppuVar16 = (undefined8 ****)&stack0xfffffffffffffff0;
        uVar13 = 0x3eb4000;
        uVar10 = uVar4;
        if ((bRam0000000003eb498c & 1) == 0) {
          func_0x00f78a20(0x3d23230);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb498c = 1;
        }
        if ((uVar9 != 0) && (lVar11 = *(long *)(param_1 + 0x40), uStack_90 = uVar4, lVar11 != 0)) {
          uStack_88 = *(uint *)(lVar11 + 0x18);
          uVar7 = param_3;
          uVar14 = uVar9;
          if (0 < (int)uStack_88) {
            uVar12 = 0;
            uVar7 = 0x3d23990;
            iStack_84 = *(int *)(uVar9 + 0x18);
code_r0x0148e82c:
            if ((*(uint *)(lVar11 + 0x18) <= uVar12) || (*(uint *)(uVar9 + 0x18) <= uVar12))
            goto code_r0x0148eac4;
            lVar11 = *(long *)(lVar11 + (long)(int)uVar12 * 8 + 0x20);
            uVar13 = *(ulong *)(uVar9 + (long)(int)uVar12 * 8 + 0x20);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(param_3,0);
            if ((uVar4 & 1) == 0) {
              if (uVar13 == 0) goto code_r0x0148eac0;
              uVar4 = *(ulong *)(uVar13 + 0x10);
            }
            else {
              uVar4 = param_3;
              if (uVar13 == 0) goto code_r0x0148eac0;
            }
            if (*(char *)(uVar13 + 0x18) != '\0') {
              uVar4 = 0;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar10 = 0;
            uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0);
            if ((lVar11 == 0) || (*(long *)(lVar11 + 0x18) == 0)) goto code_r0x0148eac0;
            uVar10 = 0;
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar11 + 0x18),(int)uVar12 < iStack_84);
            plVar15 = *(long **)(lVar11 + 0x10);
            /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
            if (plVar15 == (long *)0x0) goto code_r0x0148eac0;
            (**(code **)(*plVar15 + 0x2a8))(plVar15,*(undefined8 *)(*plVar15 + 0x2b0));
            if ((uVar2 & 1) == 0) {
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar10 = 0;
              iVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar4,0);
              if (iVar3 != 0) goto code_r0x0148e950;
              if (iStack_84 <= (int)uVar12) goto code_r0x0148ea48;
            }
            else {
code_r0x0148e950:
              if (*(long *)(lVar11 + 0x10) == 0) goto code_r0x0148eac0;
              uVar10 = 0;
              /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar11 + 0x10),0);
              if (iStack_84 <= (int)uVar12) {
code_r0x0148ea48:
                uVar12 = uVar12 + 1;
                uVar4 = uVar9;
                uVar14 = param_3;
                if (uStack_88 == uVar12) goto code_r0x0148ea6c;
                lVar11 = *(long *)(param_1 + 0x40);
                if (lVar11 == 0) goto code_r0x0148eac0;
                goto code_r0x0148e82c;
              }
              if (uVar2 == 0) goto code_r0x0148e998;
              if (*(long *)(lVar11 + 0x10) == 0) goto code_r0x0148eac0;
              /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar11 + 0x10),uVar4,0);
            }
code_r0x0148e998:
            fVar18 = *(float *)(uVar13 + 0x2c);
            uVar10 = (ulong)*(uint *)(uVar13 + 0x30);
            puVar17 = &UNK_0148e9a8;
            goto code_r0x0148ead0;
          }
code_r0x0148ea6c:
          lVar11 = *(long *)(param_1 + 0x50);
          if (lVar11 != 0) {
            puVar17 = &UNK_0148ea88;
            uVar9 = uStack_90;
            goto code_r0x03211320;
          }
        }
code_r0x0148eac0:
        func_0x00f78af4();
code_r0x0148eac4:
        uVar5 = func_0x00f78b24();
        puVar17 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__CalculateScaleAndOffset;
        fVar18 = (float)func_0x00f78ac0(uVar5,0);
        uVar4 = extraout_x1;
code_r0x0148ead0:
        puVar1 = (ulong *)&uStack_110;
        unaff_d8 = (ulong)(uint)fVar18;
        uVar14 = 0x3eb4000;
        uVar9 = uVar10;
        pppuStack_a0 = ppppuVar16;
        puStack_98 = puVar17;
        if ((bRam0000000003eb498d & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d25608);
          bRam0000000003eb498d = 1;
        }
        uStack_100 = 0;
        uStack_f8 = 0;
        uVar21 = 0x3f800000;
        uVar22 = 0;
        uVar23 = 0;
        /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,&uStack_100,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar6 = (undefined8 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar4,0);
        if (((ulong)puVar6 & 1) != 0) {
          uVar7 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
          iVar3 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
          if (uVar4 == 0) {
            puVar17 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayAnimation;
            func_0x00f78af4();
            if (extraout_x1_00 == 0) {
              puVar6 = (undefined8 *)func_0x00f78af4();
              if ((bRam0000000003eb498e & 1) == 0) {
                func_0x00f78a20(0x3d255d8);
                bRam0000000003eb498e = 1;
              }
              if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if ((bRam0000000003ebf1b8 & 1) == 0) {
                func_0x00f78a20(0x3d23990,0);
                bRam0000000003ebf1b8 = 1;
              }
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              return puVar6;
            }
            uVar4 = 0;
            lVar11 = extraout_x1_00;
            uVar13 = uVar10;
            ppppuVar16 = &pppuStack_a0;
code_r0x03211320:
            *(undefined8 *)((long)puVar1 + -0x40) = unaff_d9;
            *(ulong *)((long)puVar1 + -0x38) = unaff_d8;
            *(ulong *)((long)puVar1 + -0x30) = uVar14;
            *(ulong *)((long)puVar1 + -0x28) = uVar7;
            *(ulong *)((long)puVar1 + -0x20) = uVar4;
            *(ulong *)((long)puVar1 + -0x18) = uVar13;
            *(undefined8 *****)((long)puVar1 + -0x10) = ppppuVar16;
            *(undefined **)((long)puVar1 + -8) = puVar17;
            if (pcRam0000000003ebe3c0 == (code *)0x0) {
              pcRam0000000003ebe3c0 =
                   (code *)func_0x00f789d4("UnityEngine.Animator::StringToHash(System.String)",uVar9
                                           ,0,0);
            }
            uVar5 = (*pcRam0000000003ebe3c0)(uVar9);
            if (pcRam0000000003ebe318 == (code *)0x0) {
              pcRam0000000003ebe318 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x032113b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar6 = (undefined8 *)(*pcRam0000000003ebe318)(0,lVar11,uVar5,0);
            return puVar6;
          }
          fVar24 = (float)iVar3;
          uStack_110 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(uVar4,0);
          uStack_10c = uVar21;
          uStack_108 = uVar22;
          uStack_104 = uVar23;
          uVar22 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_110,0);
          if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          fVar19 = (float)/*Core.UI2.UIUtils$$CalculatePreserveAspectRatioScale*/ func_0x02f85ac4((float)(int)uVar7,fVar24,uVar22,uVar21,uVar10,0);
          puVar6 = (undefined8 *)/*Core.UI2.UIUtils$$CalculateCentredSTCoordsForScaleFactor*/ func_0x02f90c74(fVar19 / fVar18,fVar24 / fVar18,0);
        }
        return puVar6;
      }
    }
  }
  func_0x00f78af4();
LAB_0148e67c:
  uVar5 = func_0x00f78b24();
  lVar11 = func_0x00f78ac0(uVar5,0);
  if ((bRam0000000003eb4989 & 1) == 0) {
    func_0x00f78a20(0x3d2c7c8);
    bRam0000000003eb4989 = 1;
  }
  if (lVar11 == 0) {
    auVar25 = func_0x00f78af4();
    puVar8 = auVar25._8_8_;
    puVar6 = auVar25._0_8_;
    uVar20 = puVar8[1];
    uVar5 = *puVar8;
    puVar6[2] = puVar8[2];
    puVar6[1] = uVar20;
    *puVar6 = uVar5;
    return puVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar6 = (undefined8 *)
           (*(code *)**(undefined8 **)
                       (*(long *)(*(long *)(lRam0000000003d2c7c8 + 0x18) + 0xc0) + 0x38))();
  return puVar6;
}



// ============================================================
// RVA: 0x148e6dc | Atlas.UI.Screens.MaskTransitionScreenBehaviour.get_StatusMessageRootObject
// ============================================================

undefined8 Atlas_UI_Screens_MaskTransitionScreenBehaviour__get_StatusMessageRootObject(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x148e6e4 | Atlas.UI.Screens.MaskTransitionScreenBehaviour.get_StatusMessageText
// ============================================================

undefined8 Atlas_UI_Screens_MaskTransitionScreenBehaviour__get_StatusMessageText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x148e6ec | Atlas.UI.Screens.MaskTransitionScreenBehaviour.SetMaskVisible
// ============================================================

/* WARNING: Possible PIC construction at 0x0148e740: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0148e744) */

void Atlas_UI_Screens_MaskTransitionScreenBehaviour__SetMaskVisible(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 unaff_x19;
  undefined8 uVar2;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar3;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x21 = *(long *)(param_1 + 0x40);
    if (unaff_x21 == 0) {
LAB_0148e77c:
      func_0x00f78af4();
    }
    else {
      unaff_x19 = param_2;
      unaff_x20 = param_1;
      if (*(int *)(unaff_x21 + 0x18) < 1) {
        lVar1 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
        if (lVar1 == 0) goto LAB_0148e77c;
        unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
        uVar3 = *(undefined8 *)((long)register0x00000008 + -8);
        param_1 = *(long *)((long)register0x00000008 + -0x20);
        uVar2 = *(undefined8 *)((long)register0x00000008 + -0x18);
        unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
        unaff_x21 = *(long *)((long)register0x00000008 + -0x28);
        goto code_r0x0322ef1c;
      }
      unaff_x22 = 0;
      if (*(int *)(unaff_x21 + 0x18) != 0) {
        if ((*(long *)(unaff_x21 + 0x20) == 0) ||
           (lVar1 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0x18), lVar1 == 0)) goto LAB_0148e77c;
        uVar3 = 0x148e744;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
        uVar2 = param_2;
code_r0x0322ef1c:
        *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(long *)((long)register0x00000008 + -0x20) = param_1;
        *(undefined8 *)((long)register0x00000008 + -0x18) = uVar2;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = uVar3;
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000003ebf4c0)(lVar1,param_2);
        return;
      }
    }
    uVar3 = func_0x00f78b24();
    unaff_x30 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__ShowMask;
    param_1 = func_0x00f78ac0(uVar3,0);
    param_2 = 1;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
  } while( true );
}



// ============================================================
// RVA: 0x148e78c | Atlas.UI.Screens.MaskTransitionScreenBehaviour.ShowMask
// ============================================================

/* WARNING: Possible PIC construction at 0x0148e740: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0148e744) */

void Atlas_UI_Screens_MaskTransitionScreenBehaviour__ShowMask(long param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 uVar2;
  code *unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x21 = *(long *)(param_1 + 0x40);
    if (unaff_x21 == 0) {
LAB_0148e77c:
      func_0x00f78af4();
    }
    else {
      unaff_x19 = 1;
      unaff_x20 = param_1;
      if (*(int *)(unaff_x21 + 0x18) < 1) {
        lVar1 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
        if (lVar1 == 0) goto LAB_0148e77c;
        unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
        uVar2 = *(undefined8 *)((long)register0x00000008 + -8);
        param_1 = *(long *)((long)register0x00000008 + -0x20);
        unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
        unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
        unaff_x21 = *(long *)((long)register0x00000008 + -0x28);
        goto code_r0x0322ef1c;
      }
      unaff_x22 = 0;
      if (*(int *)(unaff_x21 + 0x18) != 0) {
        if ((*(long *)(unaff_x21 + 0x20) == 0) ||
           (lVar1 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0x18), lVar1 == 0)) goto LAB_0148e77c;
        uVar2 = 0x148e744;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
code_r0x0322ef1c:
        *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(long *)((long)register0x00000008 + -0x20) = param_1;
        *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = uVar2;
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000003ebf4c0)(lVar1,1);
        return;
      }
    }
    uVar2 = func_0x00f78b24();
    unaff_x30 = Atlas_UI_Screens_MaskTransitionScreenBehaviour__ShowMask;
    param_1 = func_0x00f78ac0(uVar2,0);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
  } while( true );
}



// ============================================================
// RVA: 0x148e794 | Atlas.UI.Screens.MaskTransitionScreenBehaviour.PlayLayers
// ============================================================

/* WARNING: Possible PIC construction at 0x0148e9a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148ea84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0148e9a8) */
/* WARNING: Removing unreachable block (ram,0x0148e9b0) */
/* WARNING: Removing unreachable block (ram,0x0148e9e8) */
/* WARNING: Removing unreachable block (ram,0x0148e9f0) */
/* WARNING: Removing unreachable block (ram,0x0148e9f4) */
/* WARNING: Removing unreachable block (ram,0x0148e9f8) */
/* WARNING: Removing unreachable block (ram,0x0148ea30) */
/* WARNING: Removing unreachable block (ram,0x0148ea88) */
/* WARNING: Removing unreachable block (ram,0x0148ea90) */
/* WARNING: Removing unreachable block (ram,0x03212134) */
/* WARNING: Removing unreachable block (ram,0x03212158) */
/* WARNING: Removing unreachable block (ram,0x0321216c) */

ulong Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayLayers
                (long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x1;
  long extraout_x1_00;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 ****ppppuVar14;
  undefined *puVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float fVar21;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  uint uStack_88;
  int iStack_84;
  
  puVar1 = &uStack_90;
  ppppuVar14 = (undefined8 ****)&stack0xfffffffffffffff0;
  uVar12 = 0x3eb4000;
  uVar7 = param_3;
  if ((bRam0000000003eb498c & 1) == 0) {
    func_0x00f78a20(0x3d23230);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb498c = 1;
  }
  if ((param_2 != 0) && (lVar9 = *(long *)(param_1 + 0x40), uStack_90 = param_3, lVar9 != 0)) {
    uStack_88 = *(uint *)(lVar9 + 0x18);
    uVar6 = param_4;
    uVar4 = param_2;
    if (0 < (int)uStack_88) {
      uVar11 = 0;
      uVar6 = 0x3d23990;
      iStack_84 = *(int *)(param_2 + 0x18);
code_r0x0148e82c:
      if ((*(uint *)(lVar9 + 0x18) <= uVar11) || (*(uint *)(param_2 + 0x18) <= uVar11))
      goto LAB_0148eac4;
      lVar9 = *(long *)(lVar9 + (long)(int)uVar11 * 8 + 0x20);
      uVar12 = *(ulong *)(param_2 + (long)(int)uVar11 * 8 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(param_4,0);
      if ((uVar4 & 1) == 0) {
        if (uVar12 == 0) goto LAB_0148eac0;
        uVar10 = *(ulong *)(uVar12 + 0x10);
      }
      else {
        uVar10 = param_4;
        if (uVar12 == 0) goto LAB_0148eac0;
      }
      if (*(char *)(uVar12 + 0x18) != '\0') {
        uVar10 = 0;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = 0;
      uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar10,0);
      if ((lVar9 == 0) || (*(long *)(lVar9 + 0x18) == 0)) goto LAB_0148eac0;
      uVar7 = 0;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar9 + 0x18),(int)uVar11 < iStack_84);
      plVar13 = *(long **)(lVar9 + 0x10);
      /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
      if (plVar13 == (long *)0x0) goto LAB_0148eac0;
      (**(code **)(*plVar13 + 0x2a8))(plVar13,*(undefined8 *)(*plVar13 + 0x2b0));
      if ((uVar2 & 1) == 0) {
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = 0;
        iVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar10,0);
        if (iVar3 != 0) goto code_r0x0148e950;
        if (iStack_84 <= (int)uVar11) goto code_r0x0148ea48;
      }
      else {
code_r0x0148e950:
        if (*(long *)(lVar9 + 0x10) == 0) goto LAB_0148eac0;
        uVar7 = 0;
        /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar9 + 0x10),0);
        if (iStack_84 <= (int)uVar11) {
code_r0x0148ea48:
          uVar11 = uVar11 + 1;
          param_3 = param_2;
          uVar4 = param_4;
          if (uStack_88 == uVar11) goto LAB_0148ea6c;
          lVar9 = *(long *)(param_1 + 0x40);
          if (lVar9 == 0) goto LAB_0148eac0;
          goto code_r0x0148e82c;
        }
        if (uVar2 == 0) goto code_r0x0148e998;
        if (*(long *)(lVar9 + 0x10) == 0) goto LAB_0148eac0;
        /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar9 + 0x10),uVar10,0);
      }
code_r0x0148e998:
      fVar16 = *(float *)(uVar12 + 0x2c);
      uVar7 = (ulong)*(uint *)(uVar12 + 0x30);
      puVar15 = &UNK_0148e9a8;
      goto code_r0x0148ead0;
    }
LAB_0148ea6c:
    lVar9 = *(long *)(param_1 + 0x50);
    if (lVar9 != 0) {
      puVar15 = &UNK_0148ea88;
      uVar8 = uStack_90;
      goto code_r0x03211320;
    }
  }
LAB_0148eac0:
  func_0x00f78af4();
LAB_0148eac4:
  uVar5 = func_0x00f78b24();
  puVar15 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__CalculateScaleAndOffset;
  fVar16 = (float)func_0x00f78ac0(uVar5,0);
  uVar10 = extraout_x1;
code_r0x0148ead0:
  puVar1 = (ulong *)&uStack_110;
  unaff_d8 = (ulong)(uint)fVar16;
  uVar4 = 0x3eb4000;
  uVar8 = uVar7;
  pppuStack_a0 = ppppuVar14;
  puStack_98 = puVar15;
  if ((bRam0000000003eb498d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25608);
    bRam0000000003eb498d = 1;
  }
  uStack_100 = 0;
  uStack_f8 = 0;
  uVar18 = 0x3f800000;
  uVar19 = 0;
  uVar20 = 0;
  /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,&uStack_100,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar12 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar10,0);
  if ((uVar12 & 1) != 0) {
    uVar6 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
    iVar3 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
    if (uVar10 == 0) {
      puVar15 = &Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayAnimation;
      func_0x00f78af4();
      if (extraout_x1_00 == 0) {
        uVar7 = func_0x00f78af4();
        if ((bRam0000000003eb498e & 1) == 0) {
          func_0x00f78a20(0x3d255d8);
          bRam0000000003eb498e = 1;
        }
        if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return uVar7;
      }
      param_3 = 0;
      lVar9 = extraout_x1_00;
      uVar12 = uVar7;
      ppppuVar14 = &pppuStack_a0;
code_r0x03211320:
      *(undefined8 *)((long)puVar1 + -0x40) = unaff_d9;
      *(ulong *)((long)puVar1 + -0x38) = unaff_d8;
      *(ulong *)((long)puVar1 + -0x30) = uVar4;
      *(ulong *)((long)puVar1 + -0x28) = uVar6;
      *(ulong *)((long)puVar1 + -0x20) = param_3;
      *(ulong *)((long)puVar1 + -0x18) = uVar12;
      *(undefined8 *****)((long)puVar1 + -0x10) = ppppuVar14;
      *(undefined **)((long)puVar1 + -8) = puVar15;
      if (pcRam0000000003ebe3c0 == (code *)0x0) {
        pcRam0000000003ebe3c0 =
             (code *)func_0x00f789d4("UnityEngine.Animator::StringToHash(System.String)",uVar8,0,0);
      }
      uVar5 = (*pcRam0000000003ebe3c0)(uVar8);
      if (pcRam0000000003ebe318 == (code *)0x0) {
        pcRam0000000003ebe318 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x032113b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*pcRam0000000003ebe318)(0,lVar9,uVar5,0);
      return uVar7;
    }
    fVar21 = (float)iVar3;
    uStack_110 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(uVar10,0);
    uStack_10c = uVar18;
    uStack_108 = uVar19;
    uStack_104 = uVar20;
    uVar19 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_110,0);
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    fVar17 = (float)/*Core.UI2.UIUtils$$CalculatePreserveAspectRatioScale*/ func_0x02f85ac4((float)(int)uVar6,fVar21,uVar19,uVar18,uVar7,0);
    uVar12 = /*Core.UI2.UIUtils$$CalculateCentredSTCoordsForScaleFactor*/ func_0x02f90c74(fVar17 / fVar16,fVar21 / fVar16,0);
  }
  return uVar12;
}



// ============================================================
// RVA: 0x148ead0 | Atlas.UI.Screens.MaskTransitionScreenBehaviour.CalculateScaleAndOffset
// ============================================================

ulong Atlas_UI_Screens_MaskTransitionScreenBehaviour__CalculateScaleAndOffset
                (float param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long extraout_x1;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar4 = param_4;
  if ((bRam0000000003eb498d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25608);
    bRam0000000003eb498d = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uVar6 = 0x3f800000;
  uVar7 = 0;
  uVar8 = 0;
  /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,&uStack_70,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(param_3,0);
  if ((uVar3 & 1) != 0) {
    iVar1 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
    iVar2 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
    if (param_3 == 0) {
      func_0x00f78af4();
      if (extraout_x1 == 0) {
        uVar3 = func_0x00f78af4();
        if ((bRam0000000003eb498e & 1) == 0) {
          func_0x00f78a20(0x3d255d8);
          bRam0000000003eb498e = 1;
        }
        if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return uVar3;
      }
      if (pcRam0000000003ebe3c0 == (code *)0x0) {
        pcRam0000000003ebe3c0 =
             (code *)func_0x00f789d4("UnityEngine.Animator::StringToHash(System.String)",uVar4,0,0);
      }
      uVar4 = (*pcRam0000000003ebe3c0)(uVar4);
      if (pcRam0000000003ebe318 == (code *)0x0) {
        pcRam0000000003ebe318 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x032113b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pcRam0000000003ebe318)(0,extraout_x1,uVar4,0);
      return uVar3;
    }
    fVar9 = (float)iVar2;
    uStack_80 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(param_3,0);
    uStack_7c = uVar6;
    uStack_78 = uVar7;
    uStack_74 = uVar8;
    uVar7 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_80,0);
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    fVar5 = (float)/*Core.UI2.UIUtils$$CalculatePreserveAspectRatioScale*/ func_0x02f85ac4((float)iVar1,fVar9,uVar7,uVar6,param_4,0);
    uVar3 = /*Core.UI2.UIUtils$$CalculateCentredSTCoordsForScaleFactor*/ func_0x02f90c74(fVar5 / param_1,fVar9 / param_1,0);
  }
  return uVar3;
}



// ============================================================
// RVA: 0x148ec3c | Atlas.UI.Screens.MaskTransitionScreenBehaviour.PlayAnimation
// ============================================================

undefined1  [16]
Atlas_UI_Screens_MaskTransitionScreenBehaviour__PlayAnimation
          (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if (param_2 != 0) {
    if (pcRam0000000003ebe3c0 == (code *)0x0) {
      pcRam0000000003ebe3c0 =
           (code *)func_0x00f789d4("UnityEngine.Animator::StringToHash(System.String)",param_3,0,0);
    }
    uVar1 = (*pcRam0000000003ebe3c0)(param_3);
    if (pcRam0000000003ebe318 == (code *)0x0) {
      pcRam0000000003ebe318 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x032113b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (*pcRam0000000003ebe318)(0,param_2,uVar1,0);
    return auVar2;
  }
  auVar2._0_8_ = func_0x00f78af4();
  if ((bRam0000000003eb498e & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    bRam0000000003eb498e = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
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
// RVA: 0x148ec64 | Atlas.UI.Screens.MaskTransitionScreenBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_MaskTransitionScreenBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb498e & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    bRam0000000003eb498e = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
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



// ============================================================
// RVA: 0x148ecd0 | Atlas.UI.Screens.MaskTransitionScreenBehaviour..cctor
// ============================================================

void Atlas_UI_Screens_MaskTransitionScreenBehaviour___cctor(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb498f & 1) == 0) {
    func_0x00f78a20(0x3d23230);
    func_0x00f78a20(0x3d6ce08);
    func_0x00f78a20(0x3d77740);
    bRam0000000003eb498f = 1;
  }
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Finished')*/ uRam0000000003d6ce08,0);
  **(undefined4 **)(/*Atlas.UI.Screens.MaskTransitionScreenBehaviour_TypeInfo*/ lRam0000000003d23230 + 0xb8) = uVar1;
  uVar1 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(/*STR('_Texture_ST')*/ uRam0000000003d77740,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.MaskTransitionScreenBehaviour_TypeInfo*/ lRam0000000003d23230 + 0xb8) + 4) = uVar1;
  return;
}



