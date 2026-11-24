// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIChallengeProgressBehaviour

// ============================================================
// RVA: 0x15190e0 | Atlas.UI.UIChallengeProgressBehaviour.ShowCompletedFlag
// ============================================================

/* WARNING: Possible PIC construction at 0x01512468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015124bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015191a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165026c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151923c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151925c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151927c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151988c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015198d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015198dc) */
/* WARNING: Removing unreachable block (ram,0x015198e4) */
/* WARNING: Removing unreachable block (ram,0x01519890) */
/* WARNING: Removing unreachable block (ram,0x015198a8) */
/* WARNING: Removing unreachable block (ram,0x01519338) */
/* WARNING: Removing unreachable block (ram,0x01519340) */
/* WARNING: Removing unreachable block (ram,0x01519348) */
/* WARNING: Removing unreachable block (ram,0x01519350) */
/* WARNING: Removing unreachable block (ram,0x01519354) */
/* WARNING: Removing unreachable block (ram,0x0151936c) */
/* WARNING: Removing unreachable block (ram,0x01519374) */
/* WARNING: Removing unreachable block (ram,0x01519280) */
/* WARNING: Removing unreachable block (ram,0x01519288) */
/* WARNING: Removing unreachable block (ram,0x015192a4) */
/* WARNING: Removing unreachable block (ram,0x015192b4) */
/* WARNING: Removing unreachable block (ram,0x01519260) */
/* WARNING: Removing unreachable block (ram,0x01519268) */
/* WARNING: Removing unreachable block (ram,0x01519274) */
/* WARNING: Removing unreachable block (ram,0x01519240) */
/* WARNING: Removing unreachable block (ram,0x01519248) */
/* WARNING: Removing unreachable block (ram,0x01519254) */
/* WARNING: Removing unreachable block (ram,0x01650270) */
/* WARNING: Removing unreachable block (ram,0x01650280) */
/* WARNING: Removing unreachable block (ram,0x015191ac) */
/* WARNING: Removing unreachable block (ram,0x015191b4) */
/* WARNING: Removing unreachable block (ram,0x015191cc) */
/* WARNING: Removing unreachable block (ram,0x0164ff98) */
/* WARNING: Removing unreachable block (ram,0x0164ffc4) */
/* WARNING: Removing unreachable block (ram,0x0164ffd8) */
/* WARNING: Removing unreachable block (ram,0x0164ffe0) */
/* WARNING: Removing unreachable block (ram,0x0164ffe4) */
/* WARNING: Removing unreachable block (ram,0x01650008) */
/* WARNING: Removing unreachable block (ram,0x01650014) */
/* WARNING: Removing unreachable block (ram,0x01650030) */
/* WARNING: Removing unreachable block (ram,0x0165003c) */
/* WARNING: Removing unreachable block (ram,0x01650050) */
/* WARNING: Removing unreachable block (ram,0x01650058) */
/* WARNING: Removing unreachable block (ram,0x01650194) */
/* WARNING: Removing unreachable block (ram,0x016501c8) */
/* WARNING: Removing unreachable block (ram,0x016501e8) */
/* WARNING: Removing unreachable block (ram,0x016501f4) */
/* WARNING: Removing unreachable block (ram,0x016501fc) */
/* WARNING: Removing unreachable block (ram,0x01650200) */
/* WARNING: Removing unreachable block (ram,0x01650298) */
/* WARNING: Removing unreachable block (ram,0x0165020c) */
/* WARNING: Removing unreachable block (ram,0x01650218) */
/* WARNING: Removing unreachable block (ram,0x01650220) */
/* WARNING: Removing unreachable block (ram,0x01650228) */
/* WARNING: Removing unreachable block (ram,0x016502ac) */
/* WARNING: Removing unreachable block (ram,0x01650234) */
/* WARNING: Removing unreachable block (ram,0x0165024c) */
/* WARNING: Removing unreachable block (ram,0x01650254) */
/* WARNING: Removing unreachable block (ram,0x01650258) */
/* WARNING: Removing unreachable block (ram,0x016502b0) */
/* WARNING: Removing unreachable block (ram,0x016502f4) */
/* WARNING: Removing unreachable block (ram,0x0165032c) */
/* WARNING: Removing unreachable block (ram,0x01650338) */
/* WARNING: Removing unreachable block (ram,0x01650340) */
/* WARNING: Removing unreachable block (ram,0x01650348) */
/* WARNING: Removing unreachable block (ram,0x01650354) */
/* WARNING: Removing unreachable block (ram,0x01650384) */
/* WARNING: Removing unreachable block (ram,0x0165038c) */
/* WARNING: Removing unreachable block (ram,0x01650390) */
/* WARNING: Removing unreachable block (ram,0x016503b8) */
/* WARNING: Removing unreachable block (ram,0x016503c0) */
/* WARNING: Removing unreachable block (ram,0x016503c4) */
/* WARNING: Removing unreachable block (ram,0x01650414) */
/* WARNING: Removing unreachable block (ram,0x0165041c) */
/* WARNING: Removing unreachable block (ram,0x01650420) */
/* WARNING: Removing unreachable block (ram,0x0165043c) */
/* WARNING: Removing unreachable block (ram,0x01650444) */
/* WARNING: Removing unreachable block (ram,0x01650450) */
/* WARNING: Removing unreachable block (ram,0x01650458) */
/* WARNING: Removing unreachable block (ram,0x01650460) */
/* WARNING: Removing unreachable block (ram,0x0165048c) */
/* WARNING: Removing unreachable block (ram,0x016504e4) */
/* WARNING: Removing unreachable block (ram,0x01650514) */
/* WARNING: Removing unreachable block (ram,0x01650540) */
/* WARNING: Removing unreachable block (ram,0x01650548) */
/* WARNING: Removing unreachable block (ram,0x0165055c) */
/* WARNING: Removing unreachable block (ram,0x01650570) */
/* WARNING: Removing unreachable block (ram,0x01650584) */
/* WARNING: Removing unreachable block (ram,0x01650598) */
/* WARNING: Removing unreachable block (ram,0x016505c4) */
/* WARNING: Removing unreachable block (ram,0x01650614) */
/* WARNING: Removing unreachable block (ram,0x0165064c) */
/* WARNING: Removing unreachable block (ram,0x01650678) */
/* WARNING: Removing unreachable block (ram,0x01650694) */
/* WARNING: Removing unreachable block (ram,0x016506a0) */
/* WARNING: Removing unreachable block (ram,0x016506b4) */
/* WARNING: Removing unreachable block (ram,0x016506f8) */
/* WARNING: Removing unreachable block (ram,0x016506bc) */
/* WARNING: Removing unreachable block (ram,0x01650704) */
/* WARNING: Removing unreachable block (ram,0x01650738) */
/* WARNING: Removing unreachable block (ram,0x01650794) */
/* WARNING: Removing unreachable block (ram,0x0165079c) */
/* WARNING: Removing unreachable block (ram,0x016507b0) */
/* WARNING: Removing unreachable block (ram,0x016507bc) */
/* WARNING: Removing unreachable block (ram,0x016507cc) */
/* WARNING: Removing unreachable block (ram,0x016507d4) */
/* WARNING: Removing unreachable block (ram,0x016507dc) */
/* WARNING: Removing unreachable block (ram,0x016507e4) */
/* WARNING: Removing unreachable block (ram,0x016507fc) */
/* WARNING: Removing unreachable block (ram,0x01650804) */
/* WARNING: Removing unreachable block (ram,0x0165080c) */
/* WARNING: Removing unreachable block (ram,0x01650838) */
/* WARNING: Removing unreachable block (ram,0x016508d8) */
/* WARNING: Removing unreachable block (ram,0x0165090c) */
/* WARNING: Removing unreachable block (ram,0x0165092c) */
/* WARNING: Removing unreachable block (ram,0x01650934) */
/* WARNING: Removing unreachable block (ram,0x0165093c) */
/* WARNING: Removing unreachable block (ram,0x01650948) */
/* WARNING: Removing unreachable block (ram,0x0165094c) */
/* WARNING: Removing unreachable block (ram,0x01650954) */
/* WARNING: Removing unreachable block (ram,0x0165095c) */
/* WARNING: Removing unreachable block (ram,0x01650968) */
/* WARNING: Removing unreachable block (ram,0x0165097c) */
/* WARNING: Removing unreachable block (ram,0x01650988) */
/* WARNING: Removing unreachable block (ram,0x01650998) */
/* WARNING: Removing unreachable block (ram,0x016509a4) */
/* WARNING: Removing unreachable block (ram,0x016509a8) */
/* WARNING: Removing unreachable block (ram,0x016509b0) */
/* WARNING: Removing unreachable block (ram,0x016509bc) */
/* WARNING: Removing unreachable block (ram,0x016509d4) */
/* WARNING: Removing unreachable block (ram,0x016509d8) */
/* WARNING: Removing unreachable block (ram,0x016509e0) */
/* WARNING: Removing unreachable block (ram,0x016509f8) */
/* WARNING: Removing unreachable block (ram,0x01650a14) */
/* WARNING: Removing unreachable block (ram,0x01650a28) */
/* WARNING: Removing unreachable block (ram,0x01650a34) */
/* WARNING: Removing unreachable block (ram,0x01650a3c) */
/* WARNING: Removing unreachable block (ram,0x01650a4c) */
/* WARNING: Removing unreachable block (ram,0x01650a5c) */
/* WARNING: Removing unreachable block (ram,0x01650a64) */
/* WARNING: Removing unreachable block (ram,0x01650a6c) */
/* WARNING: Removing unreachable block (ram,0x01650a78) */
/* WARNING: Removing unreachable block (ram,0x01650a7c) */
/* WARNING: Removing unreachable block (ram,0x01650a84) */
/* WARNING: Removing unreachable block (ram,0x01650a8c) */
/* WARNING: Removing unreachable block (ram,0x01650a98) */
/* WARNING: Removing unreachable block (ram,0x01650aac) */
/* WARNING: Removing unreachable block (ram,0x01650ab8) */
/* WARNING: Removing unreachable block (ram,0x01650ac8) */
/* WARNING: Removing unreachable block (ram,0x01650ad4) */
/* WARNING: Removing unreachable block (ram,0x01650ad8) */
/* WARNING: Removing unreachable block (ram,0x01650ae0) */
/* WARNING: Removing unreachable block (ram,0x01650aec) */
/* WARNING: Removing unreachable block (ram,0x01650b04) */
/* WARNING: Removing unreachable block (ram,0x01650b74) */
/* WARNING: Removing unreachable block (ram,0x01650b0c) */
/* WARNING: Removing unreachable block (ram,0x01650b10) */
/* WARNING: Removing unreachable block (ram,0x01650b80) */
/* WARNING: Removing unreachable block (ram,0x01650b24) */
/* WARNING: Removing unreachable block (ram,0x01650b78) */
/* WARNING: Removing unreachable block (ram,0x01650b84) */
/* WARNING: Removing unreachable block (ram,0x01650b30) */
/* WARNING: Removing unreachable block (ram,0x01650b38) */
/* WARNING: Removing unreachable block (ram,0x01650b48) */
/* WARNING: Removing unreachable block (ram,0x01650b58) */
/* WARNING: Removing unreachable block (ram,0x01650848) */
/* WARNING: Removing unreachable block (ram,0x016508c0) */
/* WARNING: Removing unreachable block (ram,0x01650898) */
/* WARNING: Removing unreachable block (ram,0x01e47f3c) */
/* WARNING: Removing unreachable block (ram,0x01e47f7c) */
/* WARNING: Removing unreachable block (ram,0x01e47f6c) */
/* WARNING: Removing unreachable block (ram,0x01e47f74) */
/* WARNING: Removing unreachable block (ram,0x01e47f84) */
/* WARNING: Removing unreachable block (ram,0x01e47f88) */
/* WARNING: Removing unreachable block (ram,0x01e47fa0) */
/* WARNING: Removing unreachable block (ram,0x01e47fa8) */
/* WARNING: Removing unreachable block (ram,0x01e47fd4) */
/* WARNING: Removing unreachable block (ram,0x01e48058) */
/* WARNING: Removing unreachable block (ram,0x01e48064) */
/* WARNING: Removing unreachable block (ram,0x01e4806c) */
/* WARNING: Removing unreachable block (ram,0x01e480e4) */
/* WARNING: Removing unreachable block (ram,0x01e48148) */
/* WARNING: Removing unreachable block (ram,0x01e480ec) */
/* WARNING: Removing unreachable block (ram,0x01e48104) */
/* WARNING: Removing unreachable block (ram,0x01e4810c) */
/* WARNING: Removing unreachable block (ram,0x01e481ec) */
/* WARNING: Removing unreachable block (ram,0x01e48118) */
/* WARNING: Removing unreachable block (ram,0x01e48124) */
/* WARNING: Removing unreachable block (ram,0x01e481fc) */
/* WARNING: Removing unreachable block (ram,0x01e48084) */
/* WARNING: Removing unreachable block (ram,0x01e48134) */
/* WARNING: Removing unreachable block (ram,0x01e48088) */
/* WARNING: Removing unreachable block (ram,0x01e4809c) */
/* WARNING: Removing unreachable block (ram,0x01e480a4) */
/* WARNING: Removing unreachable block (ram,0x01e481c4) */
/* WARNING: Removing unreachable block (ram,0x01e480b0) */
/* WARNING: Removing unreachable block (ram,0x01e480bc) */
/* WARNING: Removing unreachable block (ram,0x01e481d4) */
/* WARNING: Removing unreachable block (ram,0x01e481d8) */
/* WARNING: Removing unreachable block (ram,0x01e48200) */
/* WARNING: Removing unreachable block (ram,0x01e47fd8) */
/* WARNING: Removing unreachable block (ram,0x01e47fdc) */
/* WARNING: Removing unreachable block (ram,0x01e47fe8) */
/* WARNING: Removing unreachable block (ram,0x01e47ff4) */
/* WARNING: Removing unreachable block (ram,0x01e47ffc) */
/* WARNING: Removing unreachable block (ram,0x01e48160) */
/* WARNING: Removing unreachable block (ram,0x01e4820c) */
/* WARNING: Removing unreachable block (ram,0x01e48168) */
/* WARNING: Removing unreachable block (ram,0x01e48180) */
/* WARNING: Removing unreachable block (ram,0x01e48188) */
/* WARNING: Removing unreachable block (ram,0x01e48250) */
/* WARNING: Removing unreachable block (ram,0x01e48194) */
/* WARNING: Removing unreachable block (ram,0x01e481a0) */
/* WARNING: Removing unreachable block (ram,0x01e48260) */
/* WARNING: Removing unreachable block (ram,0x01e48014) */
/* WARNING: Removing unreachable block (ram,0x01e481b0) */
/* WARNING: Removing unreachable block (ram,0x01e48018) */
/* WARNING: Removing unreachable block (ram,0x01e4802c) */
/* WARNING: Removing unreachable block (ram,0x01e48034) */
/* WARNING: Removing unreachable block (ram,0x01e48228) */
/* WARNING: Removing unreachable block (ram,0x01e48040) */
/* WARNING: Removing unreachable block (ram,0x01e4804c) */
/* WARNING: Removing unreachable block (ram,0x01e48238) */
/* WARNING: Removing unreachable block (ram,0x01e4823c) */
/* WARNING: Removing unreachable block (ram,0x01e48264) */
/* WARNING: Removing unreachable block (ram,0x01e47fbc) */
/* WARNING: Removing unreachable block (ram,0x01e480c8) */
/* WARNING: Removing unreachable block (ram,0x01e47fc0) */
/* WARNING: Removing unreachable block (ram,0x01e480d4) */
/* WARNING: Removing unreachable block (ram,0x01e480e0) */
/* WARNING: Removing unreachable block (ram,0x01e48274) */
/* WARNING: Removing unreachable block (ram,0x0165082c) */
/* WARNING: Removing unreachable block (ram,0x016506c0) */
/* WARNING: Removing unreachable block (ram,0x016506e0) */
/* WARNING: Removing unreachable block (ram,0x016505cc) */
/* WARNING: Removing unreachable block (ram,0x016505f4) */
/* WARNING: Removing unreachable block (ram,0x016505b4) */
/* WARNING: Removing unreachable block (ram,0x016505f8) */
/* WARNING: Removing unreachable block (ram,0x016504a0) */
/* WARNING: Removing unreachable block (ram,0x016504d4) */
/* WARNING: Removing unreachable block (ram,0x016504b8) */
/* WARNING: Removing unreachable block (ram,0x029cbbf0) */
/* WARNING: Removing unreachable block (ram,0x029cbc18) */
/* WARNING: Removing unreachable block (ram,0x029cbc2c) */
/* WARNING: Removing unreachable block (ram,0x029cbca0) */
/* WARNING: Removing unreachable block (ram,0x029cbc30) */
/* WARNING: Removing unreachable block (ram,0x029cbcac) */
/* WARNING: Removing unreachable block (ram,0x029cbcb4) */
/* WARNING: Removing unreachable block (ram,0x029cbc3c) */
/* WARNING: Removing unreachable block (ram,0x029cbce4) */
/* WARNING: Removing unreachable block (ram,0x029cbc40) */
/* WARNING: Removing unreachable block (ram,0x029cbcf0) */
/* WARNING: Removing unreachable block (ram,0x029cbcf8) */
/* WARNING: Removing unreachable block (ram,0x029cbd24) */
/* WARNING: Removing unreachable block (ram,0x029cbc4c) */
/* WARNING: Removing unreachable block (ram,0x029cbc78) */
/* WARNING: Removing unreachable block (ram,0x029cbc50) */
/* WARNING: Removing unreachable block (ram,0x029cbc54) */
/* WARNING: Removing unreachable block (ram,0x029cbc8c) */
/* WARNING: Removing unreachable block (ram,0x029cbc5c) */
/* WARNING: Removing unreachable block (ram,0x029cbd60) */
/* WARNING: Removing unreachable block (ram,0x029cbdb8) */
/* WARNING: Removing unreachable block (ram,0x029cbdc0) */
/* WARNING: Removing unreachable block (ram,0x029cbdd0) */
/* WARNING: Removing unreachable block (ram,0x029cbdc8) */
/* WARNING: Removing unreachable block (ram,0x029cbf24) */
/* WARNING: Removing unreachable block (ram,0x029cbf54) */
/* WARNING: Removing unreachable block (ram,0x029cc044) */
/* WARNING: Removing unreachable block (ram,0x029cbf60) */
/* WARNING: Removing unreachable block (ram,0x029cbf64) */
/* WARNING: Removing unreachable block (ram,0x029cbf74) */
/* WARNING: Removing unreachable block (ram,0x029cbf7c) */
/* WARNING: Removing unreachable block (ram,0x029cbf88) */
/* WARNING: Removing unreachable block (ram,0x029cbf8c) */
/* WARNING: Removing unreachable block (ram,0x029cbf94) */
/* WARNING: Removing unreachable block (ram,0x029cbfb4) */
/* WARNING: Removing unreachable block (ram,0x029cbfa4) */
/* WARNING: Removing unreachable block (ram,0x029cbfb0) */
/* WARNING: Removing unreachable block (ram,0x029cbfb8) */
/* WARNING: Removing unreachable block (ram,0x029cbfc0) */
/* WARNING: Removing unreachable block (ram,0x029cbfd0) */
/* WARNING: Removing unreachable block (ram,0x029cc04c) */
/* WARNING: Removing unreachable block (ram,0x029cbfd4) */
/* WARNING: Removing unreachable block (ram,0x029cbf4c) */
/* WARNING: Removing unreachable block (ram,0x029cbfd8) */
/* WARNING: Removing unreachable block (ram,0x029cbfe4) */
/* WARNING: Removing unreachable block (ram,0x029cbff4) */
/* WARNING: Removing unreachable block (ram,0x029cbffc) */
/* WARNING: Removing unreachable block (ram,0x029cc008) */
/* WARNING: Removing unreachable block (ram,0x029cc00c) */
/* WARNING: Removing unreachable block (ram,0x029cc070) */
/* WARNING: Removing unreachable block (ram,0x029cc07c) */
/* WARNING: Removing unreachable block (ram,0x029cc084) */
/* WARNING: Removing unreachable block (ram,0x029cc094) */
/* WARNING: Removing unreachable block (ram,0x029cbdd8) */
/* WARNING: Removing unreachable block (ram,0x029cbe00) */
/* WARNING: Removing unreachable block (ram,0x029cbe14) */
/* WARNING: Removing unreachable block (ram,0x029cbe30) */
/* WARNING: Removing unreachable block (ram,0x029cbe88) */
/* WARNING: Removing unreachable block (ram,0x029cbe38) */
/* WARNING: Removing unreachable block (ram,0x029cbe3c) */
/* WARNING: Removing unreachable block (ram,0x029cbe58) */
/* WARNING: Removing unreachable block (ram,0x029cbe60) */
/* WARNING: Removing unreachable block (ram,0x029cbe64) */
/* WARNING: Removing unreachable block (ram,0x029cbef0) */
/* WARNING: Removing unreachable block (ram,0x029cbe74) */
/* WARNING: Removing unreachable block (ram,0x029cbe84) */
/* WARNING: Removing unreachable block (ram,0x029cbe8c) */
/* WARNING: Removing unreachable block (ram,0x029cbf00) */
/* WARNING: Removing unreachable block (ram,0x029cbe90) */
/* WARNING: Removing unreachable block (ram,0x029cbe28) */
/* WARNING: Removing unreachable block (ram,0x029cbe94) */
/* WARNING: Removing unreachable block (ram,0x029cbe98) */
/* WARNING: Removing unreachable block (ram,0x029cbea4) */
/* WARNING: Removing unreachable block (ram,0x029cbec0) */
/* WARNING: Removing unreachable block (ram,0x029cbec8) */
/* WARNING: Removing unreachable block (ram,0x029cbecc) */
/* WARNING: Removing unreachable block (ram,0x029cbee0) */
/* WARNING: Removing unreachable block (ram,0x029cbf04) */
/* WARNING: Removing unreachable block (ram,0x029cc08c) */
/* WARNING: Removing unreachable block (ram,0x029cc014) */
/* WARNING: Removing unreachable block (ram,0x029cc034) */
/* WARNING: Removing unreachable block (ram,0x029cc024) */
/* WARNING: Removing unreachable block (ram,0x029cc030) */
/* WARNING: Removing unreachable block (ram,0x029cc038) */
/* WARNING: Removing unreachable block (ram,0x029cc040) */
/* WARNING: Removing unreachable block (ram,0x029cc050) */
/* WARNING: Removing unreachable block (ram,0x029cef10) */
/* WARNING: Removing unreachable block (ram,0x029cef38) */
/* WARNING: Removing unreachable block (ram,0x029cef4c) */
/* WARNING: Removing unreachable block (ram,0x029cef60) */
/* WARNING: Removing unreachable block (ram,0x029cef7c) */
/* WARNING: Removing unreachable block (ram,0x029cef90) */
/* WARNING: Removing unreachable block (ram,0x029cef64) */
/* WARNING: Removing unreachable block (ram,0x029cbd88) */
/* WARNING: Removing unreachable block (ram,0x0165046c) */
/* WARNING: Removing unreachable block (ram,0x01650064) */
/* WARNING: Removing unreachable block (ram,0x0165007c) */
/* WARNING: Removing unreachable block (ram,0x01650084) */
/* WARNING: Removing unreachable block (ram,0x0165008c) */
/* WARNING: Removing unreachable block (ram,0x01650098) */
/* WARNING: Removing unreachable block (ram,0x016500b4) */
/* WARNING: Removing unreachable block (ram,0x016500c0) */
/* WARNING: Removing unreachable block (ram,0x016500c8) */
/* WARNING: Removing unreachable block (ram,0x016500d0) */
/* WARNING: Removing unreachable block (ram,0x016500dc) */
/* WARNING: Removing unreachable block (ram,0x01650114) */
/* WARNING: Removing unreachable block (ram,0x01650128) */
/* WARNING: Removing unreachable block (ram,0x01650130) */
/* WARNING: Removing unreachable block (ram,0x01650138) */
/* WARNING: Removing unreachable block (ram,0x01650144) */
/* WARNING: Removing unreachable block (ram,0x01650178) */
/* WARNING: Removing unreachable block (ram,0x029d2384) */
/* WARNING: Removing unreachable block (ram,0x016500ec) */
/* WARNING: Removing unreachable block (ram,0x016500f8) */
/* WARNING: Removing unreachable block (ram,0x016500fc) */
/* WARNING: Removing unreachable block (ram,0x0151918c) */
/* WARNING: Removing unreachable block (ram,0x01519194) */
/* WARNING: Removing unreachable block (ram,0x015191a0) */
/* WARNING: Removing unreachable block (ram,0x0151916c) */
/* WARNING: Removing unreachable block (ram,0x01519174) */
/* WARNING: Removing unreachable block (ram,0x01519180) */
/* WARNING: Removing unreachable block (ram,0x015124c0) */
/* WARNING: Removing unreachable block (ram,0x015124c8) */
/* WARNING: Removing unreachable block (ram,0x015124e0) */
/* WARNING: Removing unreachable block (ram,0x0151246c) */
/* WARNING: Removing unreachable block (ram,0x01512474) */
/* WARNING: Removing unreachable block (ram,0x0151248c) */
/* WARNING: Removing unreachable block (ram,0x015124a8) */
/* WARNING: Removing unreachable block (ram,0x015124b4) */
/* WARNING: Removing unreachable block (ram,0x01519914) */
/* WARNING: Removing unreachable block (ram,0x01519934) */
/* WARNING: Removing unreachable block (ram,0x015199c4) */
/* WARNING: Removing unreachable block (ram,0x01519a40) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

ulong Atlas_UI_UIChallengeProgressBehaviour__ShowCompletedFlag
                (long param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong extraout_x1;
  ulong unaff_x19;
  ulong uVar8;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong uVar9;
  ulong unaff_x22;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar10;
  code *pcVar11;
  undefined *unaff_x30;
  undefined *puVar12;
  float fVar13;
  float extraout_s0;
  float extraout_s0_00;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 ******ppppppuStack_120;
  undefined *puStack_118;
  undefined8 ******ppppppuStack_f0;
  undefined *puStack_e8;
  undefined8 ******ppppppuStack_b0;
  code *pcStack_a8;
  undefined8 ******ppppppuStack_70;
  undefined *puStack_68;
  undefined8 ******ppppppuStack_40;
  undefined *puStack_38;
  undefined8 ******ppppppuStack_20;
  undefined *puStack_18;
  
  auVar15._8_8_ = unaff_x21;
  auVar15._0_8_ = unaff_x20;
  uVar6 = *(ulong *)(param_1 + 0x50);
  if (uVar6 == 0) {
    auVar14 = func_0x00f78af4();
    uVar7 = auVar14._8_8_;
    puStack_18 = &Atlas_UI_UIChallengeProgressBehaviour__SetVisible;
    ppppppuStack_20 = (undefined8 ******)&stack0xfffffffffffffff0;
    lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(auVar14._0_8_,0);
    if (lVar5 != 0) {
      puVar2 = &stack0xfffffffffffffff0;
      pppppppuVar10 = (undefined8 *******)ppppppuStack_20;
      puVar12 = puStack_18;
      goto code_r0x0322ef1c;
    }
    auVar15 = func_0x00f78af4();
    puVar2 = &stack0xffffffffffffffa0;
    puStack_38 = &Atlas_UI_UIChallengeProgressBehaviour__Set;
    lVar5 = *(long *)(auVar15._0_8_ + 0x40);
    unaff_x19 = param_3;
    ppppppuStack_40 = &ppppppuStack_20;
    if ((lVar5 != 0) && (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0), unaff_x21 = auVar15._8_8_, lVar5 != 0)) {
      uVar7 = 0;
      puVar12 = &UNK_0151916c;
      unaff_x19 = param_3;
      pppppppuVar10 = &ppppppuStack_40;
      goto code_r0x0322ef1c;
    }
    auVar15 = func_0x00f78af4();
    puVar2 = &stack0xffffffffffffff60;
    puStack_68 = &Atlas_UI_UIChallengeProgressBehaviour__Set;
    pppppppuVar10 = &ppppppuStack_70;
    lVar5 = *(long *)(auVar15._0_8_ + 0x38);
    unaff_x20 = unaff_x19;
    ppppppuStack_70 = &ppppppuStack_40;
    if (lVar5 != 0) {
      Atlas_UI_SlantFillBar__Init(lVar5,0);
      lVar5 = *(long *)(auVar15._0_8_ + 0x40);
      unaff_x21 = auVar15._8_8_;
      if ((lVar5 != 0) && (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0), lVar5 != 0)) {
        uVar7 = 1;
        puVar12 = &UNK_01519240;
        goto code_r0x0322ef1c;
      }
    }
    uVar6 = func_0x00f78af4();
    pcStack_a8 = Atlas_UI_UIChallengeController__UpdateChallengeProgress;
    ppppppuStack_b0 = pppppppuVar10;
    if (param_4 == 0) {
LAB_01519390:
      puVar12 = &Atlas_UI_UIChallengeProgressBehaviour__UpdateFillBar;
      param_4 = func_0x00f78af4();
      param_5 = extraout_x1;
      fVar13 = extraout_s0;
    }
    else {
      if (*(char *)(param_4 + 0x90) != '\0') {
        return uVar6;
      }
      if (*(long *)(uVar6 + 0x30) == 0) goto LAB_01519390;
      uVar6 = 0;
      iVar3 = /*Atlas.Stats.StatsManager$$GetSummedStats*/ func_0x015045f8();
      unaff_x22 = unaff_x20 >> 0x20;
      fVar13 = (float)iVar3 / (float)(int)(unaff_x20 >> 0x20);
      puVar12 = (undefined *)0x1519338;
      unaff_x20 = uVar6;
      unaff_x21 = param_5;
    }
    ppppppuStack_f0 = &ppppppuStack_b0;
    puStack_e8 = puVar12;
    uVar6 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(fVar13,0);
    if (extraout_s0_00 == *(float *)(param_4 + 0x8c)) {
      return uVar6;
    }
    lVar5 = *(long *)(param_4 + 0x38);
    if ((int)param_5 == 0) {
      if (lVar5 != 0) {
        uVar6 = Atlas_UI_SlantFillBar__SetProgress(extraout_s0_00,lVar5,0);
        goto code_r0x015193f4;
      }
    }
    else if (lVar5 != 0) {
      uVar6 = Atlas_UI_SlantFillBar__SetTargetProgress(extraout_s0_00,lVar5,0,0);
code_r0x015193f4:
      *(float *)(param_4 + 0x8c) = extraout_s0_00;
      return uVar6;
    }
    auVar15 = func_0x00f78af4();
    uVar8 = auVar15._8_8_;
    puStack_118 = &Atlas_UI_UIChallengeProgressBehaviourContainer__SetChallengeComplete;
    lVar5 = *(long *)(auVar15._0_8_ + 0x18);
    ppppppuStack_120 = &ppppppuStack_f0;
    if ((lVar5 == 0) || (uVar8 == 0)) {
      uVar6 = func_0x00f78af4();
      return uVar6;
    }
    puVar1 = &stack0xfffffffffffffea0;
    puStack_118 = &Atlas_UI_UIChallengeProgressBehaviourContainer__SetChallengeComplete;
    pppppppuVar10 = &ppppppuStack_120;
    uVar9 = 0x3eb4000;
    uVar6 = uVar8;
    if ((bRam0000000003eb4dd0 & 1) == 0) {
      func_0x00f78a20(*(undefined4 *)(lVar5 + 0x58),0x3d25428);
      func_0x00f78a20(0x3d5e6d8);
      func_0x00f78a20(0x3d5e710);
      func_0x00f78a20(0x3d5e7b0);
      func_0x00f78a20(0x3d5e7a0);
      func_0x00f78a20(0x3d5e7a8);
      func_0x00f78a20(0x3d5f6c8);
      func_0x00f78a20(0x3d5f6d0);
      func_0x00f78a20(0x3d790e0);
      uVar6 = func_0x00f78a20(0x3d65d08);
      bRam0000000003eb4dd0 = 1;
    }
    if (*(char *)(uVar8 + 0x90) != '\0') {
      return uVar6;
    }
    if ((unaff_x20 & 1) == 0) {
      uVar6 = *(ulong *)(uVar8 + 0x50);
      if (uVar6 != 0) {
        register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffef0;
        unaff_x19 = param_4;
        unaff_x20 = param_5;
        unaff_x29 = (undefined8 *******)ppppppuStack_120;
        unaff_x30 = puStack_118;
        goto Atlas_UI_UIAnimatingFlagsBehaviour__SetCompleted;
      }
    }
    else {
      *(undefined1 *)(uVar8 + 0x90) = 1;
      Atlas_Audio_UIAudio__Play(/*STR('event:/UI/HUD/ChallengeComplete')*/ uRam0000000003d790e0);
      if (*(long *)(uVar8 + 0x50) != 0) {
        uVar6 = Atlas_UI_UIAnimatingFlagsBehaviour__PlayCompleteAnimation
                          (0,*(long *)(uVar8 + 0x50),/*STR('')*/ uRam0000000003d65d08);
        *(ulong *)(uVar8 + 0x98) = uVar6;
        uVar7 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(0,0x3f800000,0x3f800000,*(undefined4 *)(uVar8 + 0x58),
                                *(undefined8 *)(uVar8 + 0x28),0);
        lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar7,*(undefined4 *)(uVar8 + 0x5c),uRam0000000003d5e7a8);
        if (((((uVar6 != 0) && (*(char *)(uVar6 + 0xe8) != '\0')) && (lVar5 != 0)) &&
            ((*(char *)(uVar6 + 0x100) == '\0' && (*(char *)(lVar5 + 0xe8) != '\0')))) &&
           (*(char *)(lVar5 + 0xe9) == '\0')) {
          /*DG.Tweening.Sequence$$DoInsert*/ func_0x016a231c(*(undefined4 *)(uVar6 + 0xa0),uVar6,lVar5,0);
        }
        return uVar6;
      }
    }
    pcVar11 = (code *)&Atlas_UI_UIChallengeProgressBehaviour__OnDestroy;
    lVar5 = func_0x00f78af4();
  }
  else {
Atlas_UI_UIAnimatingFlagsBehaviour__SetCompleted:
    auVar15._8_8_ = unaff_x21;
    auVar15._0_8_ = unaff_x20;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x20);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x20);
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    pppppppuVar10 = (undefined8 *******)((long)register0x00000008 + -0x10);
    if ((*(long *)(uVar6 + 0x20) != 0) &&
       (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(uVar6 + 0x20),0), lVar5 != 0)) {
      uVar7 = 1;
      unaff_x19 = uVar6;
      puVar12 = (undefined *)0x151246c;
code_r0x0322ef1c:
      *(ulong *)(puVar2 + -0x30) = unaff_x22;
      *(long *)(puVar2 + -0x28) = auVar15._8_8_;
      *(long *)(puVar2 + -0x20) = auVar15._0_8_;
      *(ulong *)(puVar2 + -0x18) = unaff_x19;
      *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar10;
      *(undefined **)(puVar2 + -8) = puVar12;
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*pcRam0000000003ebf4c0)(lVar5,uVar7);
      return uVar6;
    }
    pcVar11 = Atlas_UI_UIAnimatingFlagsBehaviour__OnDestroy;
    lVar5 = func_0x00f78af4();
    uVar8 = uVar6;
    uVar9 = unaff_x21;
  }
  *(ulong *)(puVar1 + -0x30) = unaff_x22;
  *(ulong *)(puVar1 + -0x28) = uVar9;
  *(ulong *)(puVar1 + -0x20) = unaff_x20;
  *(ulong *)(puVar1 + -0x18) = uVar8;
  *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar10;
  *(code **)(puVar1 + -8) = pcVar11;
  if ((bRam0000000003eb5c29 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    bRam0000000003eb5c29 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(puVar1 + -0x30) = *(undefined8 *)(puVar1 + -0x30);
  *(undefined8 *)(puVar1 + -0x28) = *(undefined8 *)(puVar1 + -0x28);
  *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
  *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
  *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  if ((bRam0000000003eb5af0 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5af0 = 1;
  }
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar5,0,0,0,0);
    uVar6 = (ulong)uVar4;
  }
  return uVar6;
}



// ============================================================
// RVA: 0x15190fc | Atlas.UI.UIChallengeProgressBehaviour.SetVisible
// ============================================================

/* WARNING: Possible PIC construction at 0x01519168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015191a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165026c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151923c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151925c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151927c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151988c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015198d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01512468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015124bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151246c) */
/* WARNING: Removing unreachable block (ram,0x01512474) */
/* WARNING: Removing unreachable block (ram,0x0151248c) */
/* WARNING: Removing unreachable block (ram,0x015124a8) */
/* WARNING: Removing unreachable block (ram,0x015124b4) */
/* WARNING: Removing unreachable block (ram,0x01519914) */
/* WARNING: Removing unreachable block (ram,0x01519934) */
/* WARNING: Removing unreachable block (ram,0x015199c4) */
/* WARNING: Removing unreachable block (ram,0x01519a40) */
/* WARNING: Removing unreachable block (ram,0x015198dc) */
/* WARNING: Removing unreachable block (ram,0x015198e4) */
/* WARNING: Removing unreachable block (ram,0x01519890) */
/* WARNING: Removing unreachable block (ram,0x015198a8) */
/* WARNING: Removing unreachable block (ram,0x01519338) */
/* WARNING: Removing unreachable block (ram,0x01519340) */
/* WARNING: Removing unreachable block (ram,0x01519348) */
/* WARNING: Removing unreachable block (ram,0x01519350) */
/* WARNING: Removing unreachable block (ram,0x01519354) */
/* WARNING: Removing unreachable block (ram,0x0151936c) */
/* WARNING: Removing unreachable block (ram,0x01519374) */
/* WARNING: Removing unreachable block (ram,0x01519280) */
/* WARNING: Removing unreachable block (ram,0x01519288) */
/* WARNING: Removing unreachable block (ram,0x015192a4) */
/* WARNING: Removing unreachable block (ram,0x015192b4) */
/* WARNING: Removing unreachable block (ram,0x01519260) */
/* WARNING: Removing unreachable block (ram,0x01519268) */
/* WARNING: Removing unreachable block (ram,0x01519274) */
/* WARNING: Removing unreachable block (ram,0x01519240) */
/* WARNING: Removing unreachable block (ram,0x01519248) */
/* WARNING: Removing unreachable block (ram,0x01519254) */
/* WARNING: Removing unreachable block (ram,0x01650270) */
/* WARNING: Removing unreachable block (ram,0x01650280) */
/* WARNING: Removing unreachable block (ram,0x015191ac) */
/* WARNING: Removing unreachable block (ram,0x015191b4) */
/* WARNING: Removing unreachable block (ram,0x015191cc) */
/* WARNING: Removing unreachable block (ram,0x0164ff98) */
/* WARNING: Removing unreachable block (ram,0x0164ffc4) */
/* WARNING: Removing unreachable block (ram,0x0164ffd8) */
/* WARNING: Removing unreachable block (ram,0x0164ffe0) */
/* WARNING: Removing unreachable block (ram,0x0164ffe4) */
/* WARNING: Removing unreachable block (ram,0x01650008) */
/* WARNING: Removing unreachable block (ram,0x01650014) */
/* WARNING: Removing unreachable block (ram,0x01650030) */
/* WARNING: Removing unreachable block (ram,0x0165003c) */
/* WARNING: Removing unreachable block (ram,0x01650050) */
/* WARNING: Removing unreachable block (ram,0x01650058) */
/* WARNING: Removing unreachable block (ram,0x01650194) */
/* WARNING: Removing unreachable block (ram,0x016501c8) */
/* WARNING: Removing unreachable block (ram,0x016501e8) */
/* WARNING: Removing unreachable block (ram,0x016501f4) */
/* WARNING: Removing unreachable block (ram,0x016501fc) */
/* WARNING: Removing unreachable block (ram,0x01650200) */
/* WARNING: Removing unreachable block (ram,0x01650298) */
/* WARNING: Removing unreachable block (ram,0x0165020c) */
/* WARNING: Removing unreachable block (ram,0x01650218) */
/* WARNING: Removing unreachable block (ram,0x01650220) */
/* WARNING: Removing unreachable block (ram,0x01650228) */
/* WARNING: Removing unreachable block (ram,0x016502ac) */
/* WARNING: Removing unreachable block (ram,0x01650234) */
/* WARNING: Removing unreachable block (ram,0x0165024c) */
/* WARNING: Removing unreachable block (ram,0x01650254) */
/* WARNING: Removing unreachable block (ram,0x01650258) */
/* WARNING: Removing unreachable block (ram,0x016502b0) */
/* WARNING: Removing unreachable block (ram,0x016502f4) */
/* WARNING: Removing unreachable block (ram,0x0165032c) */
/* WARNING: Removing unreachable block (ram,0x01650338) */
/* WARNING: Removing unreachable block (ram,0x01650340) */
/* WARNING: Removing unreachable block (ram,0x01650348) */
/* WARNING: Removing unreachable block (ram,0x01650354) */
/* WARNING: Removing unreachable block (ram,0x01650384) */
/* WARNING: Removing unreachable block (ram,0x0165038c) */
/* WARNING: Removing unreachable block (ram,0x01650390) */
/* WARNING: Removing unreachable block (ram,0x016503b8) */
/* WARNING: Removing unreachable block (ram,0x016503c0) */
/* WARNING: Removing unreachable block (ram,0x016503c4) */
/* WARNING: Removing unreachable block (ram,0x01650414) */
/* WARNING: Removing unreachable block (ram,0x0165041c) */
/* WARNING: Removing unreachable block (ram,0x01650420) */
/* WARNING: Removing unreachable block (ram,0x0165043c) */
/* WARNING: Removing unreachable block (ram,0x01650444) */
/* WARNING: Removing unreachable block (ram,0x01650450) */
/* WARNING: Removing unreachable block (ram,0x01650458) */
/* WARNING: Removing unreachable block (ram,0x01650460) */
/* WARNING: Removing unreachable block (ram,0x0165048c) */
/* WARNING: Removing unreachable block (ram,0x016504e4) */
/* WARNING: Removing unreachable block (ram,0x01650514) */
/* WARNING: Removing unreachable block (ram,0x01650540) */
/* WARNING: Removing unreachable block (ram,0x01650548) */
/* WARNING: Removing unreachable block (ram,0x0165055c) */
/* WARNING: Removing unreachable block (ram,0x01650570) */
/* WARNING: Removing unreachable block (ram,0x01650584) */
/* WARNING: Removing unreachable block (ram,0x01650598) */
/* WARNING: Removing unreachable block (ram,0x016505c4) */
/* WARNING: Removing unreachable block (ram,0x01650614) */
/* WARNING: Removing unreachable block (ram,0x0165064c) */
/* WARNING: Removing unreachable block (ram,0x01650678) */
/* WARNING: Removing unreachable block (ram,0x01650694) */
/* WARNING: Removing unreachable block (ram,0x016506a0) */
/* WARNING: Removing unreachable block (ram,0x016506b4) */
/* WARNING: Removing unreachable block (ram,0x016506f8) */
/* WARNING: Removing unreachable block (ram,0x016506bc) */
/* WARNING: Removing unreachable block (ram,0x01650704) */
/* WARNING: Removing unreachable block (ram,0x01650738) */
/* WARNING: Removing unreachable block (ram,0x01650794) */
/* WARNING: Removing unreachable block (ram,0x0165079c) */
/* WARNING: Removing unreachable block (ram,0x016507b0) */
/* WARNING: Removing unreachable block (ram,0x016507bc) */
/* WARNING: Removing unreachable block (ram,0x016507cc) */
/* WARNING: Removing unreachable block (ram,0x016507d4) */
/* WARNING: Removing unreachable block (ram,0x016507dc) */
/* WARNING: Removing unreachable block (ram,0x016507e4) */
/* WARNING: Removing unreachable block (ram,0x016507fc) */
/* WARNING: Removing unreachable block (ram,0x01650804) */
/* WARNING: Removing unreachable block (ram,0x0165080c) */
/* WARNING: Removing unreachable block (ram,0x01650838) */
/* WARNING: Removing unreachable block (ram,0x016508d8) */
/* WARNING: Removing unreachable block (ram,0x0165090c) */
/* WARNING: Removing unreachable block (ram,0x0165092c) */
/* WARNING: Removing unreachable block (ram,0x01650934) */
/* WARNING: Removing unreachable block (ram,0x0165093c) */
/* WARNING: Removing unreachable block (ram,0x01650948) */
/* WARNING: Removing unreachable block (ram,0x0165094c) */
/* WARNING: Removing unreachable block (ram,0x01650954) */
/* WARNING: Removing unreachable block (ram,0x0165095c) */
/* WARNING: Removing unreachable block (ram,0x01650968) */
/* WARNING: Removing unreachable block (ram,0x0165097c) */
/* WARNING: Removing unreachable block (ram,0x01650988) */
/* WARNING: Removing unreachable block (ram,0x01650998) */
/* WARNING: Removing unreachable block (ram,0x016509a4) */
/* WARNING: Removing unreachable block (ram,0x016509a8) */
/* WARNING: Removing unreachable block (ram,0x016509b0) */
/* WARNING: Removing unreachable block (ram,0x016509bc) */
/* WARNING: Removing unreachable block (ram,0x016509d4) */
/* WARNING: Removing unreachable block (ram,0x016509d8) */
/* WARNING: Removing unreachable block (ram,0x016509e0) */
/* WARNING: Removing unreachable block (ram,0x016509f8) */
/* WARNING: Removing unreachable block (ram,0x01650a14) */
/* WARNING: Removing unreachable block (ram,0x01650a28) */
/* WARNING: Removing unreachable block (ram,0x01650a34) */
/* WARNING: Removing unreachable block (ram,0x01650a3c) */
/* WARNING: Removing unreachable block (ram,0x01650a4c) */
/* WARNING: Removing unreachable block (ram,0x01650a5c) */
/* WARNING: Removing unreachable block (ram,0x01650a64) */
/* WARNING: Removing unreachable block (ram,0x01650a6c) */
/* WARNING: Removing unreachable block (ram,0x01650a78) */
/* WARNING: Removing unreachable block (ram,0x01650a7c) */
/* WARNING: Removing unreachable block (ram,0x01650a84) */
/* WARNING: Removing unreachable block (ram,0x01650a8c) */
/* WARNING: Removing unreachable block (ram,0x01650a98) */
/* WARNING: Removing unreachable block (ram,0x01650aac) */
/* WARNING: Removing unreachable block (ram,0x01650ab8) */
/* WARNING: Removing unreachable block (ram,0x01650ac8) */
/* WARNING: Removing unreachable block (ram,0x01650ad4) */
/* WARNING: Removing unreachable block (ram,0x01650ad8) */
/* WARNING: Removing unreachable block (ram,0x01650ae0) */
/* WARNING: Removing unreachable block (ram,0x01650aec) */
/* WARNING: Removing unreachable block (ram,0x01650b04) */
/* WARNING: Removing unreachable block (ram,0x01650b74) */
/* WARNING: Removing unreachable block (ram,0x01650b0c) */
/* WARNING: Removing unreachable block (ram,0x01650b10) */
/* WARNING: Removing unreachable block (ram,0x01650b80) */
/* WARNING: Removing unreachable block (ram,0x01650b24) */
/* WARNING: Removing unreachable block (ram,0x01650b78) */
/* WARNING: Removing unreachable block (ram,0x01650b84) */
/* WARNING: Removing unreachable block (ram,0x01650b30) */
/* WARNING: Removing unreachable block (ram,0x01650b38) */
/* WARNING: Removing unreachable block (ram,0x01650b48) */
/* WARNING: Removing unreachable block (ram,0x01650b58) */
/* WARNING: Removing unreachable block (ram,0x01650848) */
/* WARNING: Removing unreachable block (ram,0x016508c0) */
/* WARNING: Removing unreachable block (ram,0x01650898) */
/* WARNING: Removing unreachable block (ram,0x01e47f3c) */
/* WARNING: Removing unreachable block (ram,0x01e47f7c) */
/* WARNING: Removing unreachable block (ram,0x01e47f6c) */
/* WARNING: Removing unreachable block (ram,0x01e47f74) */
/* WARNING: Removing unreachable block (ram,0x01e47f84) */
/* WARNING: Removing unreachable block (ram,0x01e47f88) */
/* WARNING: Removing unreachable block (ram,0x01e47fa0) */
/* WARNING: Removing unreachable block (ram,0x01e47fa8) */
/* WARNING: Removing unreachable block (ram,0x01e47fd4) */
/* WARNING: Removing unreachable block (ram,0x01e48058) */
/* WARNING: Removing unreachable block (ram,0x01e48064) */
/* WARNING: Removing unreachable block (ram,0x01e4806c) */
/* WARNING: Removing unreachable block (ram,0x01e480e4) */
/* WARNING: Removing unreachable block (ram,0x01e48148) */
/* WARNING: Removing unreachable block (ram,0x01e480ec) */
/* WARNING: Removing unreachable block (ram,0x01e48104) */
/* WARNING: Removing unreachable block (ram,0x01e4810c) */
/* WARNING: Removing unreachable block (ram,0x01e481ec) */
/* WARNING: Removing unreachable block (ram,0x01e48118) */
/* WARNING: Removing unreachable block (ram,0x01e48124) */
/* WARNING: Removing unreachable block (ram,0x01e481fc) */
/* WARNING: Removing unreachable block (ram,0x01e48084) */
/* WARNING: Removing unreachable block (ram,0x01e48134) */
/* WARNING: Removing unreachable block (ram,0x01e48088) */
/* WARNING: Removing unreachable block (ram,0x01e4809c) */
/* WARNING: Removing unreachable block (ram,0x01e480a4) */
/* WARNING: Removing unreachable block (ram,0x01e481c4) */
/* WARNING: Removing unreachable block (ram,0x01e480b0) */
/* WARNING: Removing unreachable block (ram,0x01e480bc) */
/* WARNING: Removing unreachable block (ram,0x01e481d4) */
/* WARNING: Removing unreachable block (ram,0x01e481d8) */
/* WARNING: Removing unreachable block (ram,0x01e48200) */
/* WARNING: Removing unreachable block (ram,0x01e47fd8) */
/* WARNING: Removing unreachable block (ram,0x01e47fdc) */
/* WARNING: Removing unreachable block (ram,0x01e47fe8) */
/* WARNING: Removing unreachable block (ram,0x01e47ff4) */
/* WARNING: Removing unreachable block (ram,0x01e47ffc) */
/* WARNING: Removing unreachable block (ram,0x01e48160) */
/* WARNING: Removing unreachable block (ram,0x01e4820c) */
/* WARNING: Removing unreachable block (ram,0x01e48168) */
/* WARNING: Removing unreachable block (ram,0x01e48180) */
/* WARNING: Removing unreachable block (ram,0x01e48188) */
/* WARNING: Removing unreachable block (ram,0x01e48250) */
/* WARNING: Removing unreachable block (ram,0x01e48194) */
/* WARNING: Removing unreachable block (ram,0x01e481a0) */
/* WARNING: Removing unreachable block (ram,0x01e48260) */
/* WARNING: Removing unreachable block (ram,0x01e48014) */
/* WARNING: Removing unreachable block (ram,0x01e481b0) */
/* WARNING: Removing unreachable block (ram,0x01e48018) */
/* WARNING: Removing unreachable block (ram,0x01e4802c) */
/* WARNING: Removing unreachable block (ram,0x01e48034) */
/* WARNING: Removing unreachable block (ram,0x01e48228) */
/* WARNING: Removing unreachable block (ram,0x01e48040) */
/* WARNING: Removing unreachable block (ram,0x01e4804c) */
/* WARNING: Removing unreachable block (ram,0x01e48238) */
/* WARNING: Removing unreachable block (ram,0x01e4823c) */
/* WARNING: Removing unreachable block (ram,0x01e48264) */
/* WARNING: Removing unreachable block (ram,0x01e47fbc) */
/* WARNING: Removing unreachable block (ram,0x01e480c8) */
/* WARNING: Removing unreachable block (ram,0x01e47fc0) */
/* WARNING: Removing unreachable block (ram,0x01e480d4) */
/* WARNING: Removing unreachable block (ram,0x01e480e0) */
/* WARNING: Removing unreachable block (ram,0x01e48274) */
/* WARNING: Removing unreachable block (ram,0x0165082c) */
/* WARNING: Removing unreachable block (ram,0x016506c0) */
/* WARNING: Removing unreachable block (ram,0x016506e0) */
/* WARNING: Removing unreachable block (ram,0x016505cc) */
/* WARNING: Removing unreachable block (ram,0x016505f4) */
/* WARNING: Removing unreachable block (ram,0x016505b4) */
/* WARNING: Removing unreachable block (ram,0x016505f8) */
/* WARNING: Removing unreachable block (ram,0x016504a0) */
/* WARNING: Removing unreachable block (ram,0x016504d4) */
/* WARNING: Removing unreachable block (ram,0x016504b8) */
/* WARNING: Removing unreachable block (ram,0x029cbbf0) */
/* WARNING: Removing unreachable block (ram,0x029cbc18) */
/* WARNING: Removing unreachable block (ram,0x029cbc2c) */
/* WARNING: Removing unreachable block (ram,0x029cbca0) */
/* WARNING: Removing unreachable block (ram,0x029cbc30) */
/* WARNING: Removing unreachable block (ram,0x029cbcac) */
/* WARNING: Removing unreachable block (ram,0x029cbcb4) */
/* WARNING: Removing unreachable block (ram,0x029cbc3c) */
/* WARNING: Removing unreachable block (ram,0x029cbce4) */
/* WARNING: Removing unreachable block (ram,0x029cbc40) */
/* WARNING: Removing unreachable block (ram,0x029cbcf0) */
/* WARNING: Removing unreachable block (ram,0x029cbcf8) */
/* WARNING: Removing unreachable block (ram,0x029cbd24) */
/* WARNING: Removing unreachable block (ram,0x029cbc4c) */
/* WARNING: Removing unreachable block (ram,0x029cbc78) */
/* WARNING: Removing unreachable block (ram,0x029cbc50) */
/* WARNING: Removing unreachable block (ram,0x029cbc54) */
/* WARNING: Removing unreachable block (ram,0x029cbc8c) */
/* WARNING: Removing unreachable block (ram,0x029cbc5c) */
/* WARNING: Removing unreachable block (ram,0x029cbd60) */
/* WARNING: Removing unreachable block (ram,0x029cbdb8) */
/* WARNING: Removing unreachable block (ram,0x029cbdc0) */
/* WARNING: Removing unreachable block (ram,0x029cbdd0) */
/* WARNING: Removing unreachable block (ram,0x029cbdc8) */
/* WARNING: Removing unreachable block (ram,0x029cbf24) */
/* WARNING: Removing unreachable block (ram,0x029cbf54) */
/* WARNING: Removing unreachable block (ram,0x029cc044) */
/* WARNING: Removing unreachable block (ram,0x029cbf60) */
/* WARNING: Removing unreachable block (ram,0x029cbf64) */
/* WARNING: Removing unreachable block (ram,0x029cbf74) */
/* WARNING: Removing unreachable block (ram,0x029cbf7c) */
/* WARNING: Removing unreachable block (ram,0x029cbf88) */
/* WARNING: Removing unreachable block (ram,0x029cbf8c) */
/* WARNING: Removing unreachable block (ram,0x029cbf94) */
/* WARNING: Removing unreachable block (ram,0x029cbfb4) */
/* WARNING: Removing unreachable block (ram,0x029cbfa4) */
/* WARNING: Removing unreachable block (ram,0x029cbfb0) */
/* WARNING: Removing unreachable block (ram,0x029cbfb8) */
/* WARNING: Removing unreachable block (ram,0x029cbfc0) */
/* WARNING: Removing unreachable block (ram,0x029cbfd0) */
/* WARNING: Removing unreachable block (ram,0x029cc04c) */
/* WARNING: Removing unreachable block (ram,0x029cbfd4) */
/* WARNING: Removing unreachable block (ram,0x029cbf4c) */
/* WARNING: Removing unreachable block (ram,0x029cbfd8) */
/* WARNING: Removing unreachable block (ram,0x029cbfe4) */
/* WARNING: Removing unreachable block (ram,0x029cbff4) */
/* WARNING: Removing unreachable block (ram,0x029cbffc) */
/* WARNING: Removing unreachable block (ram,0x029cc008) */
/* WARNING: Removing unreachable block (ram,0x029cc00c) */
/* WARNING: Removing unreachable block (ram,0x029cc070) */
/* WARNING: Removing unreachable block (ram,0x029cc07c) */
/* WARNING: Removing unreachable block (ram,0x029cc084) */
/* WARNING: Removing unreachable block (ram,0x029cc094) */
/* WARNING: Removing unreachable block (ram,0x029cbdd8) */
/* WARNING: Removing unreachable block (ram,0x029cbe00) */
/* WARNING: Removing unreachable block (ram,0x029cbe14) */
/* WARNING: Removing unreachable block (ram,0x029cbe30) */
/* WARNING: Removing unreachable block (ram,0x029cbe88) */
/* WARNING: Removing unreachable block (ram,0x029cbe38) */
/* WARNING: Removing unreachable block (ram,0x029cbe3c) */
/* WARNING: Removing unreachable block (ram,0x029cbe58) */
/* WARNING: Removing unreachable block (ram,0x029cbe60) */
/* WARNING: Removing unreachable block (ram,0x029cbe64) */
/* WARNING: Removing unreachable block (ram,0x029cbef0) */
/* WARNING: Removing unreachable block (ram,0x029cbe74) */
/* WARNING: Removing unreachable block (ram,0x029cbe84) */
/* WARNING: Removing unreachable block (ram,0x029cbe8c) */
/* WARNING: Removing unreachable block (ram,0x029cbf00) */
/* WARNING: Removing unreachable block (ram,0x029cbe90) */
/* WARNING: Removing unreachable block (ram,0x029cbe28) */
/* WARNING: Removing unreachable block (ram,0x029cbe94) */
/* WARNING: Removing unreachable block (ram,0x029cbe98) */
/* WARNING: Removing unreachable block (ram,0x029cbea4) */
/* WARNING: Removing unreachable block (ram,0x029cbec0) */
/* WARNING: Removing unreachable block (ram,0x029cbec8) */
/* WARNING: Removing unreachable block (ram,0x029cbecc) */
/* WARNING: Removing unreachable block (ram,0x029cbee0) */
/* WARNING: Removing unreachable block (ram,0x029cbf04) */
/* WARNING: Removing unreachable block (ram,0x029cc08c) */
/* WARNING: Removing unreachable block (ram,0x029cc014) */
/* WARNING: Removing unreachable block (ram,0x029cc034) */
/* WARNING: Removing unreachable block (ram,0x029cc024) */
/* WARNING: Removing unreachable block (ram,0x029cc030) */
/* WARNING: Removing unreachable block (ram,0x029cc038) */
/* WARNING: Removing unreachable block (ram,0x029cc040) */
/* WARNING: Removing unreachable block (ram,0x029cc050) */
/* WARNING: Removing unreachable block (ram,0x029cef10) */
/* WARNING: Removing unreachable block (ram,0x029cef38) */
/* WARNING: Removing unreachable block (ram,0x029cef4c) */
/* WARNING: Removing unreachable block (ram,0x029cef60) */
/* WARNING: Removing unreachable block (ram,0x029cef7c) */
/* WARNING: Removing unreachable block (ram,0x029cef90) */
/* WARNING: Removing unreachable block (ram,0x029cef64) */
/* WARNING: Removing unreachable block (ram,0x029cbd88) */
/* WARNING: Removing unreachable block (ram,0x0165046c) */
/* WARNING: Removing unreachable block (ram,0x01650064) */
/* WARNING: Removing unreachable block (ram,0x0165007c) */
/* WARNING: Removing unreachable block (ram,0x01650084) */
/* WARNING: Removing unreachable block (ram,0x0165008c) */
/* WARNING: Removing unreachable block (ram,0x01650098) */
/* WARNING: Removing unreachable block (ram,0x016500b4) */
/* WARNING: Removing unreachable block (ram,0x016500c0) */
/* WARNING: Removing unreachable block (ram,0x016500c8) */
/* WARNING: Removing unreachable block (ram,0x016500d0) */
/* WARNING: Removing unreachable block (ram,0x016500dc) */
/* WARNING: Removing unreachable block (ram,0x01650114) */
/* WARNING: Removing unreachable block (ram,0x01650128) */
/* WARNING: Removing unreachable block (ram,0x01650130) */
/* WARNING: Removing unreachable block (ram,0x01650138) */
/* WARNING: Removing unreachable block (ram,0x01650144) */
/* WARNING: Removing unreachable block (ram,0x01650178) */
/* WARNING: Removing unreachable block (ram,0x029d2384) */
/* WARNING: Removing unreachable block (ram,0x016500ec) */
/* WARNING: Removing unreachable block (ram,0x016500f8) */
/* WARNING: Removing unreachable block (ram,0x016500fc) */
/* WARNING: Removing unreachable block (ram,0x0151918c) */
/* WARNING: Removing unreachable block (ram,0x01519194) */
/* WARNING: Removing unreachable block (ram,0x015191a0) */
/* WARNING: Removing unreachable block (ram,0x0151916c) */
/* WARNING: Removing unreachable block (ram,0x01519174) */
/* WARNING: Removing unreachable block (ram,0x01519180) */
/* WARNING: Removing unreachable block (ram,0x015124c0) */
/* WARNING: Removing unreachable block (ram,0x015124c8) */
/* WARNING: Removing unreachable block (ram,0x015124e0) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

ulong Atlas_UI_UIChallengeProgressBehaviour__SetVisible
                (undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,ulong param_5)

{
  undefined8 *******pppppppuVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong extraout_x1;
  ulong unaff_x19;
  undefined8 unaff_x20;
  ulong uVar10;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined *puVar11;
  code *pcVar12;
  float fVar13;
  float extraout_s0;
  float extraout_s0_00;
  undefined1 auVar14 [16];
  ulong uStack_120;
  long lStack_118;
  undefined8 ******ppppppuStack_110;
  undefined *puStack_108;
  undefined8 ******ppppppuStack_e0;
  undefined *puStack_d8;
  undefined8 ******ppppppuStack_a0;
  code *pcStack_98;
  undefined8 ******ppppppuStack_60;
  undefined *puStack_58;
  undefined8 *****pppppuStack_30;
  undefined *puStack_28;
  
  auVar14._8_8_ = unaff_x21;
  auVar14._0_8_ = unaff_x20;
  lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
  if (lVar5 != 0) goto code_r0x0322ef1c;
  auVar14 = func_0x00f78af4();
  puStack_28 = &Atlas_UI_UIChallengeProgressBehaviour__Set;
  pppppppuVar1 = (undefined8 *******)&pppppuStack_30;
  lVar5 = *(long *)(auVar14._0_8_ + 0x40);
  unaff_x19 = param_3;
  pppppuStack_30 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((lVar5 != 0) && (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0), unaff_x21 = auVar14._8_8_, lVar5 != 0)) {
    param_2 = 0;
    unaff_x30 = &UNK_0151916c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    unaff_x19 = param_3;
    unaff_x29 = pppppppuVar1;
    goto code_r0x0322ef1c;
  }
  auVar14 = func_0x00f78af4();
  puStack_58 = &Atlas_UI_UIChallengeProgressBehaviour__Set;
  unaff_x29 = &ppppppuStack_60;
  lVar5 = *(long *)(auVar14._0_8_ + 0x38);
  uVar9 = unaff_x19;
  ppppppuStack_60 = pppppppuVar1;
  if (lVar5 != 0) {
    Atlas_UI_SlantFillBar__Init(lVar5,0);
    lVar5 = *(long *)(auVar14._0_8_ + 0x40);
    unaff_x21 = auVar14._8_8_;
    if ((lVar5 != 0) && (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0), lVar5 != 0)) {
      param_2 = 1;
      unaff_x30 = &UNK_01519240;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff70;
      goto code_r0x0322ef1c;
    }
  }
  uVar6 = func_0x00f78af4();
  pcStack_98 = Atlas_UI_UIChallengeController__UpdateChallengeProgress;
  ppppppuStack_a0 = unaff_x29;
  if (param_4 == 0) {
LAB_01519390:
    puVar11 = &Atlas_UI_UIChallengeProgressBehaviour__UpdateFillBar;
    param_4 = func_0x00f78af4();
    param_5 = extraout_x1;
    fVar13 = extraout_s0;
  }
  else {
    if (*(char *)(param_4 + 0x90) != '\0') {
      return uVar6;
    }
    if (*(long *)(uVar6 + 0x30) == 0) goto LAB_01519390;
    uVar6 = 0;
    iVar3 = /*Atlas.Stats.StatsManager$$GetSummedStats*/ func_0x015045f8();
    unaff_x22 = uVar9 >> 0x20;
    fVar13 = (float)iVar3 / (float)(int)(uVar9 >> 0x20);
    puVar11 = (undefined *)0x1519338;
    uVar9 = uVar6;
    unaff_x21 = param_5;
  }
  ppppppuStack_e0 = &ppppppuStack_a0;
  puStack_d8 = puVar11;
  uVar6 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(fVar13,0);
  if (extraout_s0_00 == *(float *)(param_4 + 0x8c)) {
    return uVar6;
  }
  lVar5 = *(long *)(param_4 + 0x38);
  if ((int)param_5 == 0) {
    if (lVar5 != 0) {
      uVar9 = Atlas_UI_SlantFillBar__SetProgress(extraout_s0_00,lVar5,0);
      goto code_r0x015193f4;
    }
  }
  else if (lVar5 != 0) {
    uVar9 = Atlas_UI_SlantFillBar__SetTargetProgress(extraout_s0_00,lVar5,0,0);
code_r0x015193f4:
    *(float *)(param_4 + 0x8c) = extraout_s0_00;
    return uVar9;
  }
  auVar14 = func_0x00f78af4();
  uVar6 = auVar14._8_8_;
  puStack_108 = &Atlas_UI_UIChallengeProgressBehaviourContainer__SetChallengeComplete;
  lVar5 = *(long *)(auVar14._0_8_ + 0x18);
  ppppppuStack_110 = &ppppppuStack_e0;
  if ((lVar5 == 0) || (uVar6 == 0)) {
    uVar9 = func_0x00f78af4();
    return uVar9;
  }
  puVar2 = (ulong *)&stack0xfffffffffffffeb0;
  puStack_108 = &Atlas_UI_UIChallengeProgressBehaviourContainer__SetChallengeComplete;
  uVar7 = uVar6;
  uStack_120 = param_5;
  lStack_118 = param_4;
  if ((bRam0000000003eb4dd0 & 1) == 0) {
    func_0x00f78a20(*(undefined4 *)(lVar5 + 0x58),0x3d25428);
    func_0x00f78a20(0x3d5e6d8);
    func_0x00f78a20(0x3d5e710);
    func_0x00f78a20(0x3d5e7b0);
    func_0x00f78a20(0x3d5e7a0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5f6c8);
    func_0x00f78a20(0x3d5f6d0);
    func_0x00f78a20(0x3d790e0);
    uVar7 = func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4dd0 = 1;
  }
  uVar10 = uStack_120;
  auVar14._8_8_ = unaff_x21;
  auVar14._0_8_ = uStack_120;
  if (*(char *)(uVar6 + 0x90) != '\0') {
    return uVar7;
  }
  if ((uVar9 & 1) == 0) {
    unaff_x19 = *(ulong *)(uVar6 + 0x50);
    if (unaff_x19 != 0) {
      puVar2 = &uStack_120;
      unaff_x29 = &ppppppuStack_110;
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(unaff_x19 + 0x20),0), lVar5 != 0)) {
        param_2 = 1;
        unaff_x30 = (undefined *)0x151246c;
        register0x00000008 = (BADSPACEBASE *)&uStack_120;
code_r0x0322ef1c:
        *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(long *)((long)register0x00000008 + -0x28) = auVar14._8_8_;
        *(long *)((long)register0x00000008 + -0x20) = auVar14._0_8_;
        *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (*pcRam0000000003ebf4c0)(lVar5,param_2);
        return uVar9;
      }
      pcVar12 = Atlas_UI_UIAnimatingFlagsBehaviour__OnDestroy;
      lVar5 = func_0x00f78af4();
      goto DG_Tweening_ShortcutExtensions__DOKill;
    }
  }
  else {
    *(undefined1 *)(uVar6 + 0x90) = 1;
    Atlas_Audio_UIAudio__Play(/*STR('event:/UI/HUD/ChallengeComplete')*/ uRam0000000003d790e0);
    if (*(long *)(uVar6 + 0x50) != 0) {
      uVar9 = Atlas_UI_UIAnimatingFlagsBehaviour__PlayCompleteAnimation
                        (0,*(long *)(uVar6 + 0x50),/*STR('')*/ uRam0000000003d65d08);
      *(ulong *)(uVar6 + 0x98) = uVar9;
      uVar8 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(0,0x3f800000,0x3f800000,*(undefined4 *)(uVar6 + 0x58),
                              *(undefined8 *)(uVar6 + 0x28),0);
      lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar8,*(undefined4 *)(uVar6 + 0x5c),uRam0000000003d5e7a8);
      if (((((uVar9 != 0) && (*(char *)(uVar9 + 0xe8) != '\0')) && (lVar5 != 0)) &&
          ((*(char *)(uVar9 + 0x100) == '\0' && (*(char *)(lVar5 + 0xe8) != '\0')))) &&
         (*(char *)(lVar5 + 0xe9) == '\0')) {
        /*DG.Tweening.Sequence$$DoInsert*/ func_0x016a231c(*(undefined4 *)(uVar9 + 0xa0),uVar9,lVar5,0);
      }
      return uVar9;
    }
  }
  pcVar12 = (code *)&Atlas_UI_UIChallengeProgressBehaviour__OnDestroy;
  lVar5 = func_0x00f78af4();
  unaff_x19 = uVar6;
  uVar10 = uVar9;
  unaff_x21 = 0x3eb4000;
DG_Tweening_ShortcutExtensions__DOKill:
  *(ulong *)((long)puVar2 + -0x30) = unaff_x22;
  *(ulong *)((long)puVar2 + -0x28) = unaff_x21;
  *(ulong *)((long)puVar2 + -0x20) = uVar10;
  *(ulong *)((long)puVar2 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)puVar2 + -0x10) = &ppppppuStack_110;
  *(code **)((long)puVar2 + -8) = pcVar12;
  if ((bRam0000000003eb5c29 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    bRam0000000003eb5c29 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)((long)puVar2 + -0x30) = *(undefined8 *)((long)puVar2 + -0x30);
  *(undefined8 *)((long)puVar2 + -0x28) = *(undefined8 *)((long)puVar2 + -0x28);
  *(undefined8 *)((long)puVar2 + -0x20) = *(undefined8 *)((long)puVar2 + -0x20);
  *(undefined8 *)((long)puVar2 + -0x18) = *(undefined8 *)((long)puVar2 + -0x18);
  *(undefined8 *)((long)puVar2 + -0x10) = *(undefined8 *)((long)puVar2 + -0x10);
  *(undefined8 *)((long)puVar2 + -8) = *(undefined8 *)((long)puVar2 + -8);
  if ((bRam0000000003eb5af0 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5af0 = 1;
  }
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar5,0,0,0,0);
    uVar9 = (ulong)uVar4;
  }
  return uVar9;
}



// ============================================================
// RVA: 0x1519130 | Atlas.UI.UIChallengeProgressBehaviour.Set
// ============================================================

/* WARNING: Possible PIC construction at 0x0165026c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151988c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015198d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015198dc) */
/* WARNING: Removing unreachable block (ram,0x015198e4) */
/* WARNING: Removing unreachable block (ram,0x01519890) */
/* WARNING: Removing unreachable block (ram,0x015198a8) */
/* WARNING: Removing unreachable block (ram,0x01519338) */
/* WARNING: Removing unreachable block (ram,0x01519340) */
/* WARNING: Removing unreachable block (ram,0x01519348) */
/* WARNING: Removing unreachable block (ram,0x01519350) */
/* WARNING: Removing unreachable block (ram,0x01519354) */
/* WARNING: Removing unreachable block (ram,0x0151936c) */
/* WARNING: Removing unreachable block (ram,0x01519374) */
/* WARNING: Removing unreachable block (ram,0x01650270) */
/* WARNING: Removing unreachable block (ram,0x01650280) */
/* WARNING: Removing unreachable block (ram,0x01519914) */
/* WARNING: Removing unreachable block (ram,0x01519934) */
/* WARNING: Removing unreachable block (ram,0x015199c4) */
/* WARNING: Removing unreachable block (ram,0x01519a40) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

undefined8 *
Atlas_UI_UIChallengeProgressBehaviour__Set
          (long param_1,undefined8 *param_2,undefined8 *param_3,long param_4,undefined8 *param_5)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined8 **ppuVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar9;
  long lVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar7;
  int iVar8;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined8 *extraout_x1;
  undefined8 *extraout_x1_00;
  undefined8 *puVar21;
  long *plVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long lVar25;
  long lVar26;
  int *piVar27;
  undefined8 *unaff_x19;
  undefined1 *puVar28;
  undefined8 uVar29;
  int iVar30;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *plVar31;
  undefined8 uVar32;
  ulong unaff_x22;
  ulong uVar33;
  uint uVar34;
  undefined8 unaff_x23;
  long lVar35;
  undefined8 *puVar36;
  code *pcVar37;
  undefined8 unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar38;
  undefined8 uVar39;
  undefined4 extraout_s0;
  float fVar40;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 *puStack_100;
  long lStack_f8;
  undefined1 ****ppppuStack_f0;
  undefined *puStack_e8;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  puVar21 = param_3;
  puVar36 = unaff_x19;
  puVar24 = unaff_x21;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x40),0), puVar36 = param_3, puVar24 = param_2,
     lVar10 != 0)) {
    puVar21 = (undefined8 *)0x0;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,0);
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x30),0), lVar10 != 0)) {
      puVar21 = (undefined8 *)0x0;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,1);
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x38),0), lVar10 != 0)) {
        puVar21 = (undefined8 *)0x0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,0);
        plVar11 = *(long **)(param_1 + 0x30);
        if (plVar11 != (long *)0x0) {
          puVar21 = *(undefined8 **)(*plVar11 + 0x560);
          (**(code **)(*plVar11 + 0x558))(plVar11,param_2);
          if (param_3 != (undefined8 *)0x0) {
            plVar11 = *(long **)(param_1 + 0x30);
            param_1 = unaff_x20;
            goto Core_Localisation_LocalisationManager__FixForMultilineIfArabic;
          }
        }
      }
    }
  }
  unaff_x21 = puVar24;
  unaff_x19 = puVar36;
  param_3 = puVar21;
  lVar10 = func_0x00f78af4();
  puStack_38 = &Atlas_UI_UIChallengeProgressBehaviour__Set;
  puVar21 = param_3;
  puVar36 = unaff_x21;
  puStack_40 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar10 + 0x38) != 0) {
    Atlas_UI_SlantFillBar__Init(*(long *)(lVar10 + 0x38),0);
    puVar36 = extraout_x1;
    if ((*(long *)(lVar10 + 0x40) != 0) &&
       (lVar35 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar10 + 0x40),0), lVar35 != 0)) {
      puVar21 = (undefined8 *)0x0;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar35,1);
      if ((*(long *)(lVar10 + 0x30) != 0) &&
         (lVar35 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar10 + 0x30),0), lVar35 != 0)) {
        puVar21 = (undefined8 *)0x0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar35,0);
        if ((*(long *)(lVar10 + 0x38) != 0) &&
           (lVar35 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar10 + 0x38),0), lVar35 != 0)) {
          puVar21 = (undefined8 *)0x0;
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar35,1);
          plVar11 = *(long **)(lVar10 + 0x40);
          if (plVar11 != (long *)0x0) {
            puVar21 = *(undefined8 **)(*plVar11 + 0x560);
            (**(code **)(*plVar11 + 0x558))(plVar11,extraout_x1);
            if ((*(long *)(lVar10 + 0x38) != 0) &&
               (Atlas_UI_SlantFillBar__SetProgress(extraout_s0,*(long *)(lVar10 + 0x38),0),
               param_3 != (undefined8 *)0x0)) {
              plVar11 = *(long **)(lVar10 + 0x40);
              register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
              unaff_x29 = puStack_40;
              unaff_x30 = puStack_38;
Core_Localisation_LocalisationManager__FixForMultilineIfArabic:
              *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
              *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
              *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
              *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
              *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
              *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
              *(long *)((long)register0x00000008 + -0x20) = param_1;
              *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
              *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
              *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
              plVar31 = (long *)0x3eb5000;
              puVar21 = param_3;
              if ((bRam0000000003eb57c0 & 1) == 0) {
                puVar21 = (undefined8 *)func_0x00f78a20(0x3d230d0,plVar11,0);
                bRam0000000003eb57c0 = 1;
              }
              if (*(char *)((long)param_3 + 0x61) != '\0') {
                if (plVar11 != (long *)0x0) {
                  uVar23 = *(ulong *)(*plVar11 + 0x7e0);
                  plVar22 = (long *)0x0;
                  puVar13 = (undefined1 *)(**(code **)(*plVar11 + 0x7d8))(plVar11,0);
                  if (plVar11[0x6c] == 0) {
                    return (undefined8 *)puVar13;
                  }
                  if (*(int *)(plVar11[0x6c] + 0x2c) < 2) {
                    return (undefined8 *)puVar13;
                  }
                  uVar14 = (**(code **)(*plVar11 + 0x548))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x550));
                  lVar10 = plVar11[0x6c];
                  if (lVar10 != 0) {
                    uVar7 = *(int *)(lVar10 + 0x2c) - 1;
                    uVar33 = (ulong)uVar7;
                    if ((int)uVar7 < 0) {
code_r0x01650114:
                      if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      plVar31 = *(long **)(*(long *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8) + 8);
                      if (plVar31 != (long *)0x0) {
                        uVar14 = (**(code **)(*plVar31 + 0x168))
                                           (plVar31,*(undefined8 *)(*plVar31 + 0x170));
                        (**(code **)(*plVar11 + 0x558))
                                  (plVar11,uVar14,*(undefined8 *)(*plVar11 + 0x560));
                        puVar13 = *(undefined1 **)(*(long *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8) + 8);
                        if (puVar13 != (undefined1 *)0x0) {
                          *(undefined8 *)((long)register0x00000008 + -0x20) =
                               *(undefined8 *)((long)register0x00000008 + -0x20);
                          *(undefined8 *)((long)register0x00000008 + -0x18) =
                               *(undefined8 *)((long)register0x00000008 + -0x18);
                          *(undefined8 *)((long)register0x00000008 + -0x10) =
                               *(undefined8 *)((long)register0x00000008 + -0x10);
                          *(undefined8 *)((long)register0x00000008 + -8) =
                               *(undefined8 *)((long)register0x00000008 + -8);
                          /*System.Text.StringBuilder$$set_Length*/ func_0x029d23ac(puVar13,0);
                          return (undefined8 *)puVar13;
                        }
                      }
                    }
                    else {
                      lVar35 = uVar33 * 0x5c;
                      do {
                        lVar10 = *(long *)(lVar10 + 0x50);
                        if (lVar10 == 0) break;
                        uVar7 = (uint)uVar33;
                        if (*(uint *)(lVar10 + 0x18) <= uVar7) {
                          uVar15 = func_0x00f78b24();
                          puVar13 = (undefined1 *)func_0x00f78ac0(uVar15,0);
                          *(ulong *)((long)register0x00000008 + -0x80) = uVar33;
                          *(long **)((long)register0x00000008 + -0x78) = plVar31;
                          *(undefined8 *)((long)register0x00000008 + -0x70) = uVar14;
                          *(long **)((long)register0x00000008 + -0x68) = plVar11;
                          *(undefined1 **)((long)register0x00000008 + -0x60) =
                               (undefined1 *)((long)register0x00000008 + -0x10);
                          *(undefined **)((long)register0x00000008 + -0x58) =
                               &Core_Localisation_LocalisationManager__FixStringIfArabic;
                          if ((bRam0000000003eb57c1 & 1) == 0) {
                            func_0x00f78a20(0x3d230d0);
                            func_0x00f78a20(0x3d24040);
                            bRam0000000003eb57c1 = 1;
                          }
                          if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          iVar6 = /*Core.Localisation.LocalisationManager$$DoesStringContainArabic*/ func_0x0164ff20(puVar13);
                          if (iVar6 == 0) {
                            return (undefined8 *)puVar13;
                          }
                          if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          lVar10 = **(long **)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8);
                          auVar41._8_8_ = lVar10;
                          auVar41._0_8_ = puVar13;
                          if (lVar10 == 0) {
                            puVar38 = &RTLTMPro_RTLSupport__FixRTL;
                            auVar41 = func_0x00f78af4();
                          }
                          else {
                            *(undefined4 *)(lVar10 + 0x10) = 0;
                            if (((*(ushort *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            plVar22 = (long *)((long)&MACH_HEADER.magic + 1);
                            uVar23 = 1;
                            param_5 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
                            puVar38 = &UNK_01650270;
                          }
                          uVar15 = auVar41._8_8_;
                          puVar36 = auVar41._0_8_;
                          *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x28;
                          *(undefined8 *)((long)register0x00000008 + -0xd8) = unaff_x27;
                          *(long *)((long)register0x00000008 + -0xd0) = unaff_x26;
                          *(ulong *)((long)register0x00000008 + -200) = unaff_x25;
                          *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3d230d0;
                          *(long *)((long)register0x00000008 + -0xb8) = lVar35;
                          *(ulong *)((long)register0x00000008 + -0xb0) = uVar33;
                          *(undefined8 *)((long)register0x00000008 + -0xa8) = 0x3d230d0;
                          *(long *)((long)register0x00000008 + -0xa0) = lVar10;
                          *(undefined1 **)((long)register0x00000008 + -0x98) = puVar13;
                          *(undefined1 **)((long)register0x00000008 + -0x90) =
                               (undefined1 *)((long)register0x00000008 + -0x60);
                          *(undefined **)((long)register0x00000008 + -0x88) = puVar38;
                          uVar14 = 0x3eb5000;
                          puVar21 = (undefined8 *)0x3d24040;
                          plVar11 = plVar22;
                          if ((bRam0000000003eb57d3 & 1) == 0) {
                            func_0x00f78a20(0x3d21be0);
                            func_0x00f78a20(0x3d22f20);
                            func_0x00f78a20(0x3d24040);
                            func_0x00f78a20(0x3d25070);
                            bRam0000000003eb57d3 = 1;
                          }
                          if (((*(ushort *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          if (**(long **)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xb8) != 0) {
                            unaff_x27 = 0x3d21be0;
                            /*RTLTMPro.FastStringBuilder$$SetValue*/ func_0x0164c410(**(long **)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xb8),puVar36);
                            uVar14 = **(undefined8 **)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xb8);
                            if (((*(ushort *)(/*RTLTMPro.TashkeelFixer_TypeInfo*/ lRam0000000003d25070 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*RTLTMPro.TashkeelFixer_TypeInfo*/ lRam0000000003d25070 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            unaff_x26 = 0x3d22f20;
                            /*RTLTMPro.TashkeelFixer$$RemoveTashkeel*/ func_0x01651a44(uVar14);
                            uVar17 = **(undefined8 **)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xb8);
                            uVar14 = (*(undefined8 **)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xb8))[1];
                            if (((*(ushort *)(/*RTLTMPro.GlyphFixer_TypeInfo*/ lRam0000000003d21be0 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*RTLTMPro.GlyphFixer_TypeInfo*/ lRam0000000003d21be0 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            /*RTLTMPro.GlyphFixer$$Fix*/ func_0x0164d17c(uVar17,uVar14,param_5,plVar22,uVar23);
                            /*RTLTMPro.TashkeelFixer$$RestoreTashkeel*/ func_0x01651c28(*(undefined8 *)
                                             (*(long *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xb8) + 8));
                            /*RTLTMPro.TashkeelFixer$$FixShaddaCombinations*/ func_0x01651d7c(*(undefined8 *)
                                             (*(long *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xb8) + 8));
                            puVar36 = *(undefined8 **)(*(long *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xb8) + 8);
                            if (((*(ushort *)(/*RTLTMPro.LigatureFixer_TypeInfo*/ lRam0000000003d22f20 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*RTLTMPro.LigatureFixer_TypeInfo*/ lRam0000000003d22f20 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            plVar11 = plVar22;
                            /*RTLTMPro.LigatureFixer$$Fix*/ func_0x0164e8bc(puVar36,uVar15,plVar22,uVar23,param_5);
                            if ((int)uVar23 != 0) {
                              /*RTLTMPro.RichTextFixer$$Fix*/ func_0x01651f48(uVar15);
                            }
                            puVar13 = /*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040;
                            if (((*(ushort *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                              puVar13 = /*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040;
                            }
                            /*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 = puVar13;
                            if (**(long **)(puVar13 + 0xb8) != 0) {
                              *(undefined4 *)(**(long **)(puVar13 + 0xb8) + 0x10) = 0;
                              return (undefined8 *)puVar13;
                            }
                          }
                          puVar13 = (undefined1 *)func_0x00f78af4();
                          *(ulong *)((long)register0x00000008 + -0x100) = uVar23;
                          *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar15;
                          *(undefined1 **)((long)register0x00000008 + -0xf0) =
                               (undefined1 *)((long)register0x00000008 + -0x90);
                          *(undefined **)((long)register0x00000008 + -0xe8) =
                               &Core_Localisation_LocalisationManager__GetLanguageCode;
                          if (puVar13 != (undefined1 *)0x0) {
                            uVar23 = /*System.String$$LastIndexOf*/ func_0x029ce0f0(puVar13,0x2d,0);
                            if ((int)uVar23 < 1) {
                              return (undefined8 *)puVar13;
                            }
                            auVar42._8_8_ = 0;
                            auVar42._0_8_ = puVar13;
                            puVar13 = *(undefined1 **)((long)register0x00000008 + -0xf0);
                            puVar38 = *(undefined **)((long)register0x00000008 + -0xe8);
                            uVar15 = *(undefined8 *)((long)register0x00000008 + -0x100);
                            uVar17 = *(undefined8 *)((long)register0x00000008 + -0xf8);
                            puVar12 = (undefined1 *)((long)register0x00000008 + -0xe0);
                            goto System_String__Substring;
                          }
                          auVar41 = func_0x00f78af4();
                          lVar10 = auVar41._0_8_;
                          *(undefined8 *)((long)register0x00000008 + -0x140) = uVar14;
                          *(undefined8 **)((long)register0x00000008 + -0x138) = puVar36;
                          *(long **)((long)register0x00000008 + -0x130) = plVar22;
                          *(undefined8 **)((long)register0x00000008 + -0x128) = param_5;
                          *(ulong *)((long)register0x00000008 + -0x120) = uVar23;
                          *(undefined8 *)((long)register0x00000008 + -0x118) = uVar15;
                          *(undefined1 **)((long)register0x00000008 + -0x110) =
                               (undefined1 *)((long)register0x00000008 + -0xf0);
                          *(undefined **)((long)register0x00000008 + -0x108) =
                               &
                               Core_Localisation_LocalisationManager__TryGetTimeFormatOverrideString
                          ;
                          uVar15 = 0x3eb5000;
                          plVar31 = plVar11;
                          if ((bRam0000000003eb57c2 & 1) == 0) {
                            func_0x00f78a20(0x3d6d5c0);
                            func_0x00f78a20(0x3d7a030);
                            func_0x00f78a20(0x3d77c80);
                            bRam0000000003eb57c2 = 1;
                          }
                          plVar22 = *(long **)(lVar10 + 0x68);
                          if ((plVar22 != (long *)0x0) &&
                             (lVar35 = (**(code **)(*plVar22 + 0x238))
                                                 (plVar22,*(undefined8 *)(*plVar22 + 0x240)),
                             lVar35 != 0)) {
                            uVar15 = /*System.Globalization.DateTimeFormatInfo$$get_ShortTimePattern*/ func_0x02a93380(lVar35,0);
                            plVar22 = *(long **)(lVar10 + 0x68);
                            if ((plVar22 != (long *)0x0) &&
                               (lVar35 = (**(code **)(*plVar22 + 0x238))
                                                   (plVar22,*(undefined8 *)(*plVar22 + 0x240)),
                               lVar35 != 0)) {
                              puVar36 = (undefined8 *)/*System.Globalization.DateTimeFormatInfo$$get_ShortDatePattern*/ func_0x02a932e0(lVar35,0);
                              if (*(long *)(lVar10 + 0x58) != 0) {
                                plVar31 = (long *)((long)&MACH_HEADER.cputype + 1);
                                puVar13 = (undefined1 *)
                                          /*System.String$$Equals*/ func_0x029caa48(*(long *)(lVar10 + 0x58),
                                                          /*STR('ar')*/ uRam0000000003d77c80,5,0);
                                uVar17 = /*STR('HH:mm')*/ uRam0000000003d6d5c0;
                                if ((int)puVar13 != 0) {
code_r0x016505f8:
                                  *auVar41._8_8_ = uVar17;
                                  *plVar11 = (long)puVar36;
                                  return (undefined8 *)puVar13;
                                }
                                if (*(long *)(lVar10 + 0x58) != 0) {
                                  puVar13 = (undefined1 *)
                                            /*System.String$$Equals*/ func_0x029caa48(*(long *)(lVar10 + 0x58),
                                                            /*STR('ko')*/ uRam0000000003d7a030,5,0);
                                  uVar17 = /*STR('HH:mm')*/ uRam0000000003d6d5c0;
                                  if ((int)puVar13 == 0) {
                                    uVar17 = uVar15;
                                  }
                                  goto code_r0x016505f8;
                                }
                              }
                            }
                          }
                          lVar10 = func_0x00f78af4();
                          *(undefined8 *)((long)register0x00000008 + -0x180) = uVar14;
                          *(undefined8 **)((long)register0x00000008 + -0x178) = puVar36;
                          *(undefined8 *)((long)register0x00000008 + -0x170) = uVar15;
                          *(undefined1 (*) [16])((long)register0x00000008 + -0x168) = auVar41;
                          *(long **)((long)register0x00000008 + -0x158) = plVar11;
                          *(undefined1 **)((long)register0x00000008 + -0x150) =
                               (undefined1 *)((long)register0x00000008 + -0x110);
                          *(undefined **)((long)register0x00000008 + -0x148) =
                               &Core_Localisation_LocalisationManager__GenerateSupportedLanguageList
                          ;
                          uVar23 = 0x3d3bf88;
                          if ((bRam0000000003eb57c3 & 1) == 0) {
                            func_0x00f78a20(0x3d3bfa0);
                            func_0x00f78a20(0x3d3bf88);
                            func_0x00f78a20(0x3d1de30);
                            bRam0000000003eb57c3 = 1;
                          }
                          puVar13 = (undefined1 *)func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
                          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(puVar13,uRam0000000003d3bf88);
                          lVar10 = *(long *)(lVar10 + 0x20);
                          uVar15 = 0x3d1de30;
                          if (lVar10 == 0) goto code_r0x01650704;
                          if ((int)*(ulong *)(lVar10 + 0x18) < 1) {
                            return (undefined8 *)puVar13;
                          }
                          uVar23 = 0;
                          uVar33 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
                          puVar36 = (undefined8 *)(lVar10 + 0x20);
                          goto code_r0x016506b4;
                        }
                        uVar9 = *(uint *)(lVar10 + lVar35 + 0x34);
                        plVar31 = (long *)(ulong)uVar9;
                        uVar34 = *(uint *)(lVar10 + lVar35 + 0x3c);
                        unaff_x25 = (ulong)uVar34;
                        if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        lVar10 = *(long *)(*(long *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8) + 8);
                        if (lVar10 == 0) break;
                        uVar23 = (ulong)((uVar34 - uVar9) + 1);
                        param_5 = (undefined8 *)0x0;
                        plVar22 = plVar31;
                        /*System.Text.StringBuilder$$Append*/ func_0x029d2dbc(lVar10,uVar14);
                        if (uVar7 == 0) goto code_r0x01650114;
                        if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        lVar10 = *(long *)(*(long *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8) + 8);
                        if (lVar10 == 0) break;
                        /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar10,0);
                        uVar33 = (ulong)(uVar7 - 1);
                        if ((int)(uVar7 - 1) < 0) goto code_r0x01650114;
                        lVar35 = lVar35 + -0x5c;
                        lVar10 = plVar11[0x6c];
                      } while (lVar10 != 0);
                    }
                  }
                }
                puVar21 = (undefined8 *)func_0x00f78af4();
              }
              return puVar21;
            }
          }
        }
      }
    }
  }
  puVar13 = (undefined1 *)func_0x00f78af4();
  pcStack_78 = Atlas_UI_UIChallengeController__UpdateChallengeProgress;
  ppuStack_80 = &puStack_40;
  if (param_4 == 0) {
LAB_01519390:
    puVar38 = &Atlas_UI_UIChallengeProgressBehaviour__UpdateFillBar;
    param_4 = func_0x00f78af4();
    param_5 = extraout_x1_00;
    fVar40 = extraout_s0_00;
  }
  else {
    if (*(char *)(param_4 + 0x90) != '\0') {
      return (undefined8 *)puVar13;
    }
    if (*(long *)(puVar13 + 0x30) == 0) goto LAB_01519390;
    puVar36 = (undefined8 *)0x0;
    iVar6 = /*Atlas.Stats.StatsManager$$GetSummedStats*/ func_0x015045f8();
    unaff_x22 = (ulong)puVar21 >> 0x20;
    fVar40 = (float)iVar6 / (float)(int)((ulong)puVar21 >> 0x20);
    puVar38 = (undefined *)0x1519338;
    puVar21 = puVar36;
    puVar36 = param_5;
  }
  pppuStack_c0 = &ppuStack_80;
  puStack_b8 = puVar38;
  puVar13 = (undefined1 *)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(fVar40,0);
  if (extraout_s0_01 == *(float *)(param_4 + 0x8c)) {
    return (undefined8 *)puVar13;
  }
  lVar10 = *(long *)(param_4 + 0x38);
  if ((int)param_5 == 0) {
    if (lVar10 != 0) {
      puVar13 = (undefined1 *)Atlas_UI_SlantFillBar__SetProgress(extraout_s0_01,lVar10,0);
      goto code_r0x015193f4;
    }
  }
  else if (lVar10 != 0) {
    puVar13 = (undefined1 *)Atlas_UI_SlantFillBar__SetTargetProgress(extraout_s0_01,lVar10,0,0);
code_r0x015193f4:
    *(float *)(param_4 + 0x8c) = extraout_s0_01;
    return (undefined8 *)puVar13;
  }
  auVar41 = func_0x00f78af4();
  puVar13 = auVar41._8_8_;
  puStack_e8 = &Atlas_UI_UIChallengeProgressBehaviourContainer__SetChallengeComplete;
  lVar10 = *(long *)(auVar41._0_8_ + 0x18);
  ppppuStack_f0 = &pppuStack_c0;
  if ((lVar10 == 0) || (puVar13 == (undefined1 *)0x0)) {
    puVar13 = (undefined1 *)func_0x00f78af4();
    return (undefined8 *)puVar13;
  }
  ppuVar3 = (undefined8 **)&stack0xfffffffffffffed0;
  puStack_e8 = &Atlas_UI_UIChallengeProgressBehaviourContainer__SetChallengeComplete;
  puVar12 = puVar13;
  puStack_100 = param_5;
  lStack_f8 = param_4;
  if ((bRam0000000003eb4dd0 & 1) == 0) {
    func_0x00f78a20(*(undefined4 *)(lVar10 + 0x58),0x3d25428);
    func_0x00f78a20(0x3d5e6d8);
    func_0x00f78a20(0x3d5e710);
    func_0x00f78a20(0x3d5e7b0);
    func_0x00f78a20(0x3d5e7a0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5f6c8);
    func_0x00f78a20(0x3d5f6d0);
    func_0x00f78a20(0x3d790e0);
    puVar12 = (undefined1 *)func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4dd0 = 1;
  }
  puVar24 = puStack_100;
  if (puVar13[0x90] != '\0') {
    return (undefined8 *)puVar12;
  }
  if (((ulong)puVar21 & 1) == 0) {
    puVar12 = *(undefined1 **)(puVar13 + 0x50);
    if (puVar12 != (undefined1 *)0x0) {
      ppuVar3 = &puStack_100;
      if ((*(long *)(puVar12 + 0x20) != 0) &&
         (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(puVar12 + 0x20),0), lVar10 != 0)) {
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,1,0);
        plVar11 = *(long **)(puVar12 + 0x20);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
          plVar11 = *(long **)(puVar12 + 0x20);
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x2a8))(plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
            if ((*(long *)(puVar12 + 0x28) != 0) &&
               (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(puVar12 + 0x28),0), lVar10 != 0)) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,1,0);
              plVar11 = *(long **)(puVar12 + 0x20);
              if (plVar11 != (long *)0x0) {
                (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
                plVar11 = *(long **)(puVar12 + 0x28);
                if (plVar11 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015124f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  puVar13 = (undefined1 *)
                            (**(code **)(*plVar11 + 0x2a8))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
                  return (undefined8 *)puVar13;
                }
              }
            }
          }
        }
      }
      pcVar37 = Atlas_UI_UIAnimatingFlagsBehaviour__OnDestroy;
      lVar10 = func_0x00f78af4();
      goto DG_Tweening_ShortcutExtensions__DOKill;
    }
  }
  else {
    puVar13[0x90] = 1;
    Atlas_Audio_UIAudio__Play(/*STR('event:/UI/HUD/ChallengeComplete')*/ uRam0000000003d790e0);
    if (*(long *)(puVar13 + 0x50) != 0) {
      puVar12 = (undefined1 *)
                Atlas_UI_UIAnimatingFlagsBehaviour__PlayCompleteAnimation
                          (0,*(long *)(puVar13 + 0x50),/*STR('')*/ uRam0000000003d65d08);
      *(undefined1 **)(puVar13 + 0x98) = puVar12;
      uVar14 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(0,0x3f800000,0x3f800000,*(undefined4 *)(puVar13 + 0x58),
                               *(undefined8 *)(puVar13 + 0x28),0);
      lVar10 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar14,*(undefined4 *)(puVar13 + 0x5c),uRam0000000003d5e7a8);
      if (((((puVar12 != (undefined1 *)0x0) && (puVar12[0xe8] != '\0')) && (lVar10 != 0)) &&
          ((puVar12[0x100] == '\0' && (*(char *)(lVar10 + 0xe8) != '\0')))) &&
         (*(char *)(lVar10 + 0xe9) == '\0')) {
        /*DG.Tweening.Sequence$$DoInsert*/ func_0x016a231c(*(undefined4 *)(puVar12 + 0xa0),puVar12,lVar10,0);
      }
      return (undefined8 *)puVar12;
    }
  }
  pcVar37 = (code *)&Atlas_UI_UIChallengeProgressBehaviour__OnDestroy;
  lVar10 = func_0x00f78af4();
  puVar12 = puVar13;
  puVar24 = puVar21;
  puVar36 = (undefined8 *)0x3eb4000;
DG_Tweening_ShortcutExtensions__DOKill:
  *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
  *(undefined8 **)((long)ppuVar3 + -0x28) = puVar36;
  *(undefined8 **)((long)ppuVar3 + -0x20) = puVar24;
  *(undefined1 **)((long)ppuVar3 + -0x18) = puVar12;
  *(undefined1 ******)((long)ppuVar3 + -0x10) = &ppppuStack_f0;
  *(code **)((long)ppuVar3 + -8) = pcVar37;
  if ((bRam0000000003eb5c29 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    bRam0000000003eb5c29 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)((long)ppuVar3 + -0x30) = *(undefined8 *)((long)ppuVar3 + -0x30);
  *(undefined8 *)((long)ppuVar3 + -0x28) = *(undefined8 *)((long)ppuVar3 + -0x28);
  *(undefined8 *)((long)ppuVar3 + -0x20) = *(undefined8 *)((long)ppuVar3 + -0x20);
  *(undefined8 *)((long)ppuVar3 + -0x18) = *(undefined8 *)((long)ppuVar3 + -0x18);
  *(undefined8 *)((long)ppuVar3 + -0x10) = *(undefined8 *)((long)ppuVar3 + -0x10);
  *(undefined8 *)((long)ppuVar3 + -8) = *(undefined8 *)((long)ppuVar3 + -8);
  if ((bRam0000000003eb5af0 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5af0 = 1;
  }
  if (lVar10 == 0) {
    puVar13 = (undefined1 *)0x0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar10,0,0,0,0);
    puVar13 = (undefined1 *)(ulong)uVar7;
  }
  return (undefined8 *)puVar13;
System_String__Substring:
  puVar21 = auVar42._8_8_;
  puVar28 = auVar42._0_8_;
  *(long **)(puVar12 + -0x30) = plVar22;
  *(undefined8 **)(puVar12 + -0x28) = param_5;
  *(undefined8 *)(puVar12 + -0x20) = uVar15;
  *(undefined8 *)(puVar12 + -0x18) = uVar17;
  *(undefined1 **)(puVar12 + -0x10) = puVar13;
  *(undefined **)(puVar12 + -8) = puVar38;
  puVar13 = puVar12 + -0x10;
  plVar22 = (long *)0x3eb9000;
  if ((bRam0000000003eb944b & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb944b = 1;
  }
  iVar6 = auVar42._8_4_;
  if (iVar6 < 0) {
    uVar15 = 0x3d72d20;
code_r0x029cbcb4:
    uVar15 = func_0x00f78a24(uVar15);
    uVar17 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar15,0);
    func_0x00f78a24(0x3d1fcf8);
    uVar15 = func_0x00f78aec();
    uVar18 = 0x3d7b9d0;
  }
  else {
    iVar8 = *(int *)(puVar28 + 0x10);
    if (iVar8 < iVar6) {
      uVar15 = 0x3d7b9e8;
      goto code_r0x029cbcb4;
    }
    iVar30 = (int)uVar23;
    if (iVar30 < 0) {
      uVar15 = 0x3d6f480;
    }
    else {
      if (iVar6 <= iVar8 - iVar30) goto code_r0x029cbc4c;
      uVar15 = 0x3d6ddc8;
    }
    uVar15 = func_0x00f78a24(uVar15);
    uVar17 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar15,0);
    func_0x00f78a24(0x3d1fcf8);
    uVar15 = func_0x00f78aec();
    uVar18 = 0x3d7a280;
  }
  uVar18 = func_0x00f78a24(uVar18);
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar15,uVar18,uVar17,0);
  uVar18 = func_0x00f78a24(0x3d5dbb0);
  puVar38 = &System_String__Substring;
  auVar42 = func_0x00f78ac0(uVar15,uVar18);
  uVar23 = (ulong)(uint)(*(int *)(auVar42._0_8_ + 0x10) - auVar42._8_4_);
  puVar12 = puVar12 + -0x30;
  param_5 = puVar21;
  goto System_String__Substring;
code_r0x029cc070:
  uVar15 = func_0x00f78b24();
  func_0x00f78ac0(uVar15,0);
  puVar36 = puVar21;
code_r0x029cc07c:
  auVar42._8_8_ = lVar10;
  auVar42._0_8_ = uVar33;
  puVar38 = &System_String__TrimStart;
  auVar41 = func_0x00f78af4();
  puVar19 = auVar41._0_8_;
  if ((auVar41._8_8_ == 0) || (*(long *)(auVar41._8_8_ + 0x18) == 0)) goto code_r0x029cc094;
  puVar21 = (undefined8 *)0x0;
  puVar12 = puVar12 + -0x40;
  puVar13 = puVar20;
  auVar2 = auVar41;
  goto System_String__TrimHelper;
code_r0x01650b80:
  uVar14 = func_0x00f78b14();
  goto code_r0x01650b84;
code_r0x029cbc4c:
  if (iVar30 == 0) {
    puVar28 = (undefined1 *)**(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  else if ((iVar6 != 0) || (iVar8 != iVar30)) {
    uVar15 = *(undefined8 *)(puVar12 + -0x10);
    uVar39 = *(undefined8 *)(puVar12 + -8);
    uVar17 = *(undefined8 *)(puVar12 + -0x20);
    puVar13 = *(undefined1 **)(puVar12 + -0x18);
    uVar18 = *(undefined8 *)(puVar12 + -0x30);
    uVar29 = *(undefined8 *)(puVar12 + -0x28);
System_String__InternalSubString:
    uVar33 = auVar42._0_8_;
    auVar2._8_8_ = auVar42._8_8_;
    auVar2._0_8_ = puVar13;
    *(undefined8 *)(puVar12 + -0x30) = uVar18;
    *(undefined8 *)(puVar12 + -0x28) = uVar29;
    *(undefined8 *)(puVar12 + -0x20) = uVar17;
    *(undefined1 **)(puVar12 + -0x18) = puVar13;
    *(undefined8 *)(puVar12 + -0x10) = uVar15;
    *(undefined8 *)(puVar12 + -8) = uVar39;
    puVar28 = puVar12 + -0x10;
    puVar19 = (undefined1 *)func_0x00f834ac(uVar23);
    if (puVar19 != (undefined1 *)0x0) {
      /*System.Buffer$$Memcpy*/ func_0x029426bc(puVar19 + 0x14,uVar33 + (long)auVar42._8_4_ * 2 + 0x14,(int)uVar23 << 1,0);
      return (undefined8 *)puVar19;
    }
    puVar38 = &System_String__Trim;
    auVar41 = func_0x00f78af4();
    puVar19 = auVar41._0_8_;
    if ((auVar41._8_8_ != 0) && (*(long *)(auVar41._8_8_ + 0x18) != 0)) {
      puVar21 = (undefined8 *)((long)&MACH_HEADER.magic + 2);
      puVar12 = puVar12 + -0x30;
      auVar2 = auVar41;
System_String__TrimHelper:
      lVar10 = auVar2._8_8_;
      puVar20 = auVar2._0_8_;
      *(undefined8 *)(puVar12 + -0x40) = uVar14;
      *(undefined8 **)(puVar12 + -0x38) = puVar36;
      *(undefined1 (*) [16])(puVar12 + -0x30) = auVar42;
      *(ulong *)(puVar12 + -0x20) = uVar23;
      *(undefined1 **)(puVar12 + -0x18) = puVar13;
      *(undefined1 **)(puVar12 + -0x10) = puVar28;
      *(undefined **)(puVar12 + -8) = puVar38;
      puVar28 = puVar12 + -0x10;
      uVar7 = *(uint *)(puVar20 + 0x10);
      uVar23 = (ulong)uVar7;
      if ((int)puVar21 == 1) {
        uVar33 = 0;
        puVar21 = puVar36;
code_r0x029cbfd8:
        do {
          uVar7 = (int)uVar23 - 1;
          uVar23 = (ulong)uVar7;
          if ((int)uVar7 < (int)uVar33) break;
          uVar9 = /*System.String$$get_Chars*/ func_0x029c5420(puVar20,uVar23);
          puVar36 = puVar21;
          if (lVar10 == 0) goto code_r0x029cc07c;
          iVar6 = *(int *)(lVar10 + 0x18);
          if (iVar6 < 1) {
            iVar8 = 0;
          }
          else {
            iVar30 = 0;
            do {
              if (iVar6 == iVar30) goto code_r0x029cc070;
              iVar8 = iVar30;
            } while ((*(ushort *)(lVar10 + (long)iVar30 * 2 + 0x20) != uVar9) &&
                    (iVar30 = iVar30 + 1, iVar8 = iVar6, iVar6 != iVar30));
          }
        } while (iVar8 != iVar6);
      }
      else {
        if ((int)uVar7 < 1) {
          uVar33 = 0;
        }
        else {
          uVar33 = 0;
          do {
            uVar9 = /*System.String$$get_Chars*/ func_0x029c5420(puVar20,uVar33);
            puVar36 = puVar21;
            if (lVar10 == 0) goto code_r0x029cc07c;
            iVar6 = *(int *)(lVar10 + 0x18);
            if (iVar6 < 1) {
              iVar8 = 0;
            }
            else {
              iVar30 = 0;
              do {
                if (iVar6 == iVar30) goto code_r0x029cc070;
                iVar8 = iVar30;
              } while ((*(ushort *)(lVar10 + (long)iVar30 * 2 + 0x20) != uVar9) &&
                      (iVar30 = iVar30 + 1, iVar8 = iVar6, iVar6 != iVar30));
            }
          } while ((iVar8 != iVar6) &&
                  (uVar9 = (int)uVar33 + 1, uVar33 = (ulong)uVar9,
                  (int)uVar9 < *(int *)(puVar20 + 0x10)));
        }
        if ((int)puVar21 != 0) {
          uVar23 = (ulong)*(uint *)(puVar20 + 0x10);
          goto code_r0x029cbfd8;
        }
        uVar7 = uVar7 - 1;
      }
      uVar15 = *(undefined8 *)(puVar12 + -0x10);
      uVar39 = *(undefined8 *)(puVar12 + -8);
      uVar17 = *(undefined8 *)(puVar12 + -0x20);
      uVar29 = *(undefined8 *)(puVar12 + -0x18);
      uVar18 = *(undefined8 *)(puVar12 + -0x30);
      uVar32 = *(undefined8 *)(puVar12 + -0x28);
      uVar14 = *(undefined8 *)(puVar12 + -0x40);
      puVar36 = *(undefined8 **)(puVar12 + -0x38);
      puVar19 = puVar20;
      goto System_String__CreateTrimmedString;
    }
    iVar6 = 2;
    puVar12 = puVar12 + -0x30;
    goto System_String__TrimHelper;
  }
  return (undefined8 *)puVar28;
code_r0x029cc094:
  iVar6 = 0;
  puVar12 = puVar12 + -0x40;
System_String__TrimHelper:
  *(undefined8 *)(puVar12 + -0x40) = uVar14;
  *(undefined8 **)(puVar12 + -0x38) = puVar36;
  *(ulong *)(puVar12 + -0x30) = uVar33;
  *(long *)(puVar12 + -0x28) = auVar2._8_8_;
  *(ulong *)(puVar12 + -0x20) = uVar23;
  *(long *)(puVar12 + -0x18) = auVar2._0_8_;
  *(undefined1 **)(puVar12 + -0x10) = puVar28;
  *(undefined **)(puVar12 + -8) = puVar38;
  if ((bRam0000000003eb9460 & 1) == 0) {
    func_0x00f78a20(0x3d20620);
    bRam0000000003eb9460 = 1;
  }
  uVar7 = *(uint *)(puVar19 + 0x10);
  if (iVar6 == 1) {
    uVar33 = 0;
  }
  else {
    if ((int)uVar7 < 1) {
      uVar33 = 0;
    }
    else {
      uVar33 = 0;
      do {
        uVar14 = /*System.String$$get_Chars*/ func_0x029c5420(puVar19,uVar33);
        if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar23 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar14,0);
        if ((uVar23 & 1) == 0) {
          /*System.String$$get_Chars*/ func_0x029c5420(puVar19,uVar33);
          break;
        }
        uVar9 = (int)uVar33 + 1;
        uVar33 = (ulong)uVar9;
      } while ((int)uVar9 < *(int *)(puVar19 + 0x10));
    }
    if (iVar6 == 0) {
      uVar7 = uVar7 - 1;
      goto code_r0x029cbf04;
    }
    uVar7 = *(uint *)(puVar19 + 0x10);
  }
  do {
    uVar7 = uVar7 - 1;
    if ((int)uVar7 < (int)uVar33) goto code_r0x029cbf04;
    uVar14 = /*System.String$$get_Chars*/ func_0x029c5420(puVar19,uVar7);
    if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar23 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar14,0);
  } while ((uVar23 & 1) != 0);
  /*System.String$$get_Chars*/ func_0x029c5420(puVar19,uVar33);
code_r0x029cbf04:
  uVar15 = *(undefined8 *)(puVar12 + -0x10);
  uVar39 = *(undefined8 *)(puVar12 + -8);
  uVar17 = *(undefined8 *)(puVar12 + -0x20);
  uVar29 = *(undefined8 *)(puVar12 + -0x18);
  uVar18 = *(undefined8 *)(puVar12 + -0x30);
  uVar32 = *(undefined8 *)(puVar12 + -0x28);
  uVar14 = *(undefined8 *)(puVar12 + -0x40);
  puVar36 = *(undefined8 **)(puVar12 + -0x38);
System_String__CreateTrimmedString:
  auVar42._8_8_ = uVar33;
  auVar42._0_8_ = puVar19;
  *(undefined8 *)(puVar12 + -0x30) = uVar18;
  *(undefined8 *)(puVar12 + -0x28) = uVar32;
  *(undefined8 *)(puVar12 + -0x20) = uVar17;
  *(undefined8 *)(puVar12 + -0x18) = uVar29;
  *(undefined8 *)(puVar12 + -0x10) = uVar15;
  *(undefined8 *)(puVar12 + -8) = uVar39;
  if ((bRam0000000003eb9461 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9461 = 1;
  }
  uVar7 = (uVar7 - (int)uVar33) + 1;
  uVar23 = (ulong)uVar7;
  if (uVar7 != *(uint *)(puVar19 + 0x10)) {
    if (uVar7 != 0) {
      uVar15 = *(undefined8 *)(puVar12 + -0x10);
      uVar39 = *(undefined8 *)(puVar12 + -8);
      uVar17 = *(undefined8 *)(puVar12 + -0x20);
      puVar13 = *(undefined1 **)(puVar12 + -0x18);
      uVar18 = *(undefined8 *)(puVar12 + -0x30);
      uVar29 = *(undefined8 *)(puVar12 + -0x28);
      goto System_String__InternalSubString;
    }
    puVar19 = (undefined1 *)**(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  return (undefined8 *)puVar19;
code_r0x016506b4:
  if (uVar23 < uVar33) {
    uVar15 = 0x3d3bfa0;
    if (puVar13 == (undefined1 *)0x0) goto code_r0x01650704;
    plVar31 = plRam0000000003d3bfa0;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(puVar13,*puVar36);
    uVar23 = uVar23 + 1;
    uVar33 = (ulong)*(uint *)(lVar10 + 0x18);
    puVar36 = puVar36 + 3;
    if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar23) {
      return (undefined8 *)puVar13;
    }
    goto code_r0x016506b4;
  }
  uVar15 = func_0x00f78b24();
  func_0x00f78ac0(uVar15,0);
  uVar15 = 0x3d3bfa0;
code_r0x01650704:
  auVar41 = func_0x00f78af4();
  lVar25 = auVar41._8_8_;
  lVar35 = auVar41._0_8_;
  *(long *)((long)register0x00000008 + -0x1d0) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0x3d24040;
  *(undefined8 *)((long)register0x00000008 + -0x1c0) = uVar14;
  *(undefined8 **)((long)register0x00000008 + -0x1b8) = puVar36;
  *(undefined8 *)((long)register0x00000008 + -0x1b0) = uVar15;
  *(ulong *)((long)register0x00000008 + -0x1a8) = uVar23;
  *(long *)((long)register0x00000008 + -0x1a0) = lVar10;
  *(undefined1 **)((long)register0x00000008 + -0x198) = puVar13;
  *(undefined1 **)((long)register0x00000008 + -400) =
       (undefined1 *)((long)register0x00000008 + -0x150);
  *(undefined **)((long)register0x00000008 + -0x188) = &Core_Localisation_LocalisationManager__Set;
  uVar15 = 0x3eb5000;
  if ((bRam0000000003eb57c4 & 1) == 0) {
    func_0x00f78a20(0x3d2a328);
    func_0x00f78a20(0x3d20b50);
    func_0x00f78a20(0x3d2fe40);
    func_0x00f78a20(0x3d2fe80);
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d77c80);
    bRam0000000003eb57c4 = 1;
  }
  if ((*(long *)(lVar35 + 0x70) != 0) &&
     (/*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$Clear*/ func_0x01ed79a4(*(long *)(lVar35 + 0x70),uRam0000000003d2fe40), lVar25 != 0)) {
    puVar24 = (undefined8 *)(ulong)*(uint *)(lVar25 + 0x18);
    if (0 < (int)*(uint *)(lVar25 + 0x18)) {
      puVar36 = (undefined8 *)0x0;
      uVar14 = 0x3d2fe80;
      puVar21 = (undefined8 *)((long)puVar24 + -1);
      while( true ) {
        if (puVar24 <= puVar36) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        unaff_x26 = plVar31[1];
        if (unaff_x26 == 0) goto code_r0x016508d8;
        uVar15 = *(undefined8 *)(*(long *)(lVar25 + 0x10) + (long)puVar36 * 8 + 0x20);
        if ((undefined8 *)(ulong)*(uint *)(unaff_x26 + 0x18) <= puVar36) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(lVar35 + 0x70) == 0) goto code_r0x016508d8;
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$set_Item*/ func_0x01ed7794(*(long *)(lVar35 + 0x70),uVar15,
                        *(undefined8 *)(*(long *)(unaff_x26 + 0x10) + (long)puVar36 * 8 + 0x20),
                        uRam0000000003d2fe80);
        if (puVar21 == puVar36) break;
        puVar24 = (undefined8 *)(ulong)*(uint *)(lVar25 + 0x18);
        puVar36 = (undefined8 *)((long)puVar36 + 1);
      }
    }
    *(long *)(lVar35 + 0x58) = *plVar31;
    if (*plVar31 != 0) {
      uVar5 = /*System.String$$Equals*/ func_0x029caa48(*plVar31,/*STR('ar')*/ uRam0000000003d77c80,5,0);
      *(undefined1 *)(lVar35 + 0x61) = uVar5;
      *(undefined1 *)(lVar35 + 0x60) = uVar5;
      uVar15 = *(undefined8 *)(lVar35 + 0x58);
      uVar14 = func_0x00f78aec(/*System.Globalization.CultureInfo_TypeInfo*/ uRam0000000003d20b50);
      /*System.Globalization.CultureInfo$$.ctor*/ func_0x02a811d4(uVar14,uVar15,0);
      *(undefined8 *)(lVar35 + 0x68) = uVar14;
      puVar13 = *(undefined1 **)(lVar35 + 0x10);
      if (puVar13 == (undefined1 *)0x0) {
        return (undefined8 *)(undefined1 *)0x0;
      }
      plVar31 = (long *)*plVar31;
      *(undefined8 *)((long)register0x00000008 + -0x1d0) =
           *(undefined8 *)((long)register0x00000008 + -0x1d0);
      *(undefined8 *)((long)register0x00000008 + -0x1c8) =
           *(undefined8 *)((long)register0x00000008 + -0x1c8);
      *(undefined8 *)((long)register0x00000008 + -0x1c0) =
           *(undefined8 *)((long)register0x00000008 + -0x1c0);
      *(undefined8 *)((long)register0x00000008 + -0x1b8) =
           *(undefined8 *)((long)register0x00000008 + -0x1b8);
      *(undefined8 *)((long)register0x00000008 + -0x1b0) =
           *(undefined8 *)((long)register0x00000008 + -0x1b0);
      *(undefined8 *)((long)register0x00000008 + -0x1a8) =
           *(undefined8 *)((long)register0x00000008 + -0x1a8);
      *(undefined8 *)((long)register0x00000008 + -0x1a0) =
           *(undefined8 *)((long)register0x00000008 + -0x1a0);
      *(undefined8 *)((long)register0x00000008 + -0x198) =
           *(undefined8 *)((long)register0x00000008 + -0x198);
      *(undefined8 *)((long)register0x00000008 + -400) =
           *(undefined8 *)((long)register0x00000008 + -400);
      *(undefined8 *)((long)register0x00000008 + -0x188) =
           *(undefined8 *)((long)register0x00000008 + -0x188);
      *(undefined1 **)((long)register0x00000008 + -0x1d8) = puVar13;
      lVar10 = *(long *)(puVar13 + 0x68);
      if (lVar10 == 0) {
        puVar12 = (undefined1 *)((long)register0x00000008 + -0x1d8);
        lVar35 = 1;
      }
      else {
        lVar35 = *(long *)(lVar10 + 0x18);
        if (lVar35 == 0) {
          return (undefined8 *)puVar13;
        }
        puVar12 = (undefined1 *)(lVar10 + 0x20);
      }
      lVar10 = 0;
      do {
        lVar25 = *(long *)(puVar12 + lVar10 * 8);
        pcVar37 = *(code **)(lVar25 + 0x10);
        plVar11 = *(long **)(lVar25 + 0x20);
        lVar25 = *(long *)(lVar25 + 0x28);
        if (*(short *)(lVar25 + 0x48) == -1) {
          func_0x00f78ad8(lVar25);
        }
        iVar6 = func_0x00f78a4c(lVar25);
        bVar4 = *(char *)(lVar25 + 0x4a) == '\x01';
        if (iVar6 == 0) {
          if (bVar4) {
            if (plVar11 == (long *)0x0) {
code_r0x01e480c8:
              puVar28 = (undefined1 *)(*pcVar37)(plVar31,lVar25);
            }
            else {
              if (((*(short *)(lVar25 + 0x48) == -1) || ((*(byte *)(*plVar11 + 0x115) & 1) != 0)) ||
                 (*(long *)(puVar13 + 0x18) == 0)) goto code_r0x01e47fc0;
              iVar6 = func_0x00f78a44(lVar25);
              iVar8 = func_0x00f78ec0(lVar25);
              if (iVar6 == 0) {
                uVar1 = *(ushort *)(lVar25 + 0x48);
                if (iVar8 == 0) {
                  lVar25 = *plVar11 + (ulong)uVar1 * 0x10;
                  puVar28 = (undefined1 *)
                            (**(code **)(lVar25 + 0x138))
                                      (plVar11,plVar31,*(undefined8 *)(lVar25 + 0x140));
                  goto code_r0x01e480d4;
                }
                lVar25 = func_0x00f78a48(lVar25);
                lVar26 = *plVar11;
                uVar23 = (ulong)*(ushort *)(lVar26 + 0x12a);
                if (uVar23 != 0) {
                  piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == lVar25) {
                      puVar21 = (undefined8 *)
                                (lVar26 + (long)(int)(*piVar27 + (uint)uVar1) * 0x10 + 0x138);
                      goto code_r0x01e48260;
                    }
                    piVar27 = piVar27 + 4;
                    uVar23 = uVar23 - 1;
                  } while (uVar23 != 0);
                }
                puVar21 = (undefined8 *)func_0x00fac1f0(plVar11,lVar25,(ulong)uVar1);
code_r0x01e48260:
                pcVar37 = (code *)*puVar21;
                puVar21 = (undefined8 *)puVar21[1];
              }
              else {
                if (iVar8 == 0) {
                  uVar14 = *(undefined8 *)
                            (*plVar11 + (ulong)*(ushort *)(lVar25 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar26 = *plVar11;
                  uVar23 = (ulong)*(ushort *)(lVar26 + 0x12a);
                  if (uVar23 != 0) {
                    piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == *(long *)(lVar25 + 0x18)) {
                        lVar26 = lVar26 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar25 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e48238;
                      }
                      piVar27 = piVar27 + 4;
                      uVar23 = uVar23 - 1;
                    } while (uVar23 != 0);
                  }
                  lVar26 = func_0x00fac1f0(plVar11);
code_r0x01e48238:
                  uVar14 = *(undefined8 *)(lVar26 + 8);
                }
                puVar21 = (undefined8 *)func_0x00f78acc(uVar14,lVar25);
                pcVar37 = (code *)*puVar21;
              }
              puVar28 = (undefined1 *)(*pcVar37)(plVar11,plVar31,puVar21);
            }
          }
          else {
            if ((*(short *)(lVar25 + 0x48) == -1) || (*(long *)(puVar13 + 0x18) == 0))
            goto code_r0x01e480c8;
            iVar6 = func_0x00f78a44(lVar25);
            iVar8 = func_0x00f78ec0(lVar25);
            if (iVar6 == 0) {
              uVar1 = *(ushort *)(lVar25 + 0x48);
              if (iVar8 == 0) {
                lVar25 = *plVar31 + (ulong)uVar1 * 0x10;
                puVar28 = (undefined1 *)
                          (**(code **)(lVar25 + 0x138))(plVar31,*(undefined8 *)(lVar25 + 0x140));
                goto code_r0x01e480d4;
              }
              lVar25 = func_0x00f78a48(lVar25);
              lVar26 = *plVar31;
              uVar23 = (ulong)*(ushort *)(lVar26 + 0x12a);
              if (uVar23 != 0) {
                piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar27 + -2) == lVar25) {
                    puVar21 = (undefined8 *)
                              (lVar26 + (long)(int)(*piVar27 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x01e481fc;
                  }
                  piVar27 = piVar27 + 4;
                  uVar23 = uVar23 - 1;
                } while (uVar23 != 0);
              }
              puVar21 = (undefined8 *)func_0x00fac1f0(plVar31,lVar25,(ulong)uVar1);
code_r0x01e481fc:
              pcVar37 = (code *)*puVar21;
              puVar21 = (undefined8 *)puVar21[1];
            }
            else {
              if (iVar8 == 0) {
                uVar14 = *(undefined8 *)
                          (*plVar31 + (ulong)*(ushort *)(lVar25 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar26 = *plVar31;
                uVar23 = (ulong)*(ushort *)(lVar26 + 0x12a);
                if (uVar23 != 0) {
                  piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == *(long *)(lVar25 + 0x18)) {
                      lVar26 = lVar26 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar25 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01e481d4;
                    }
                    piVar27 = piVar27 + 4;
                    uVar23 = uVar23 - 1;
                  } while (uVar23 != 0);
                }
                lVar26 = func_0x00fac1f0(plVar31);
code_r0x01e481d4:
                uVar14 = *(undefined8 *)(lVar26 + 8);
              }
              puVar21 = (undefined8 *)func_0x00f78acc(uVar14,lVar25);
              pcVar37 = (code *)*puVar21;
            }
            puVar28 = (undefined1 *)(*pcVar37)(plVar31,puVar21);
          }
        }
        else {
          if (bVar4) goto code_r0x01e480c8;
code_r0x01e47fc0:
          puVar28 = (undefined1 *)(*pcVar37)(plVar11,plVar31,lVar25);
        }
code_r0x01e480d4:
        lVar10 = lVar10 + 1;
        if (lVar10 == lVar35) {
          return (undefined8 *)puVar28;
        }
      } while( true );
    }
  }
code_r0x016508d8:
  auVar41 = func_0x00f78af4();
  puVar12 = auVar41._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x230) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x228) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x220) = unaff_x26;
  *(undefined8 **)((long)register0x00000008 + -0x218) = puVar21;
  *(undefined8 *)((long)register0x00000008 + -0x210) = uVar14;
  *(undefined8 **)((long)register0x00000008 + -0x208) = puVar36;
  *(undefined8 *)((long)register0x00000008 + -0x200) = uVar15;
  *(long *)((long)register0x00000008 + -0x1f8) = lVar25;
  *(long *)((long)register0x00000008 + -0x1f0) = lVar35;
  *(long **)((long)register0x00000008 + -0x1e8) = plVar31;
  *(undefined1 **)((long)register0x00000008 + -0x1e0) =
       (undefined1 *)((long)register0x00000008 + -400);
  *(undefined **)((long)register0x00000008 + -0x1d8) =
       &Core_Localisation_LocalisationManager__SetFontAndMaterialAssetMappings;
  puVar13 = puVar12;
  if ((bRam0000000003eb57c6 & 1) == 0) {
    func_0x00f78a20(0x3d3c138);
    puVar13 = (undefined1 *)func_0x00f78a20(0x3d3c140);
    bRam0000000003eb57c6 = 1;
  }
  if ((*(long *)(puVar12 + 0x38) != 0) &&
     (lVar10 = *(long *)(*(long *)(puVar12 + 0x38) + 0x20), lVar10 != 0)) {
    uVar7 = *(uint *)(lVar10 + 0x18);
    if (0 < (int)uVar7) {
      uVar9 = 0;
      do {
        if (uVar7 <= uVar9) goto code_r0x01650b78;
        plVar11 = *(long **)(puVar12 + 0x40);
        if (plVar11 == (long *)0x0) goto code_r0x01650b74;
        lVar35 = lVar10 + (long)(int)uVar9 * 0x10;
        lVar25 = *(long *)(lVar35 + 0x20);
        lVar35 = *(long *)(lVar35 + 0x28);
        if ((lVar25 != 0) &&
           (puVar13 = (undefined1 *)func_0x00f78adc(lVar25,*(undefined8 *)(*plVar11 + 0x40)),
           puVar13 == (undefined1 *)0x0)) goto code_r0x01650b80;
        if (*(uint *)(plVar11 + 3) <= uVar9) goto code_r0x01650b78;
        plVar11[(long)(int)uVar9 + 4] = lVar25;
        if (lVar35 == 0) goto code_r0x01650b74;
        uVar7 = *(uint *)(lVar35 + 0x18);
        if (0 < (int)uVar7) {
          uVar34 = 0;
          do {
            if (uVar7 <= uVar34) goto code_r0x01650b78;
            lVar26 = lVar35 + (long)(int)uVar34 * 0x10;
            lVar16 = *(long *)(lVar26 + 0x20);
            if (lVar16 == 0) goto code_r0x01650b74;
            lVar26 = *(long *)(lVar26 + 0x28);
            puVar13 = (undefined1 *)/*System.String$$Equals*/ func_0x029caa48(lVar16,auVar41._8_8_,5,0);
            if ((int)puVar13 != 0) {
              if ((lVar26 == 0) || (*(long *)(lVar26 + 0x138) == 0)) goto code_r0x01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar26 + 0x138),uRam0000000003d3c140);
              if (*(long *)(lVar26 + 0x138) == 0) goto code_r0x01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar26 + 0x138),lVar25,uRam0000000003d3c138);
              plVar11 = *(long **)(puVar12 + 0x40);
              if (plVar11 == (long *)0x0) goto code_r0x01650b74;
              puVar13 = (undefined1 *)func_0x00f78adc(lVar26,*(undefined8 *)(*plVar11 + 0x40));
              if (puVar13 == (undefined1 *)0x0) goto code_r0x01650b80;
              if (*(uint *)(plVar11 + 3) <= uVar9) goto code_r0x01650b78;
              plVar11[(long)(int)uVar9 + 4] = lVar26;
            }
            uVar34 = uVar34 + 1;
            uVar7 = *(uint *)(lVar35 + 0x18);
          } while ((int)uVar34 < (int)uVar7);
        }
        uVar9 = uVar9 + 1;
        uVar7 = *(uint *)(lVar10 + 0x18);
      } while ((int)uVar9 < (int)uVar7);
    }
    if ((*(long *)(puVar12 + 0x38) != 0) &&
       (lVar10 = *(long *)(*(long *)(puVar12 + 0x38) + 0x28), lVar10 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x18);
      if (0 < (int)uVar7) {
        uVar9 = 0;
        do {
          if (uVar7 <= uVar9) goto code_r0x01650b78;
          plVar11 = *(long **)(puVar12 + 0x48);
          if (plVar11 == (long *)0x0) goto code_r0x01650b74;
          lVar35 = lVar10 + (long)(int)uVar9 * 0x10;
          lVar25 = *(long *)(lVar35 + 0x20);
          lVar35 = *(long *)(lVar35 + 0x28);
          if ((lVar25 != 0) &&
             (puVar13 = (undefined1 *)func_0x00f78adc(lVar25,*(undefined8 *)(*plVar11 + 0x40)),
             puVar13 == (undefined1 *)0x0)) goto code_r0x01650b80;
          if (*(uint *)(plVar11 + 3) <= uVar9) goto code_r0x01650b78;
          plVar11[(long)(int)uVar9 + 4] = lVar25;
          if (lVar35 == 0) goto code_r0x01650b74;
          uVar7 = *(uint *)(lVar35 + 0x18);
          if (0 < (int)uVar7) {
            uVar34 = 0;
            do {
              if (uVar7 <= uVar34) goto code_r0x01650b78;
              lVar25 = lVar35 + (long)(int)uVar34 * 0x10;
              lVar26 = *(long *)(lVar25 + 0x20);
              if (lVar26 == 0) goto code_r0x01650b74;
              lVar25 = *(long *)(lVar25 + 0x28);
              puVar13 = (undefined1 *)/*System.String$$Equals*/ func_0x029caa48(lVar26,auVar41._8_8_,5,0);
              if ((int)puVar13 != 0) {
                plVar11 = *(long **)(puVar12 + 0x48);
                if (plVar11 == (long *)0x0) goto code_r0x01650b74;
                if ((lVar25 != 0) &&
                   (puVar13 = (undefined1 *)func_0x00f78adc(lVar25,*(undefined8 *)(*plVar11 + 0x40))
                   , puVar13 == (undefined1 *)0x0)) goto code_r0x01650b80;
                if (*(uint *)(plVar11 + 3) <= uVar9) goto code_r0x01650b78;
                plVar11[(long)(int)uVar9 + 4] = lVar25;
              }
              uVar34 = uVar34 + 1;
              uVar7 = *(uint *)(lVar35 + 0x18);
            } while ((int)uVar34 < (int)uVar7);
          }
          uVar9 = uVar9 + 1;
          uVar7 = *(uint *)(lVar10 + 0x18);
        } while ((int)uVar9 < (int)uVar7);
      }
      return (undefined8 *)puVar13;
    }
  }
code_r0x01650b74:
  func_0x00f78af4();
code_r0x01650b78:
  uVar14 = func_0x00f78b24();
code_r0x01650b84:
  puVar13 = (undefined1 *)func_0x00f78ac0(uVar14,0);
  return (undefined8 *)puVar13;
}



// ============================================================
// RVA: 0x15191ec | Atlas.UI.UIChallengeProgressBehaviour.Set
// ============================================================

/* WARNING: Possible PIC construction at 0x0165026c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151988c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015198d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015198dc) */
/* WARNING: Removing unreachable block (ram,0x015198e4) */
/* WARNING: Removing unreachable block (ram,0x01519890) */
/* WARNING: Removing unreachable block (ram,0x015198a8) */
/* WARNING: Removing unreachable block (ram,0x01519338) */
/* WARNING: Removing unreachable block (ram,0x01519340) */
/* WARNING: Removing unreachable block (ram,0x01519348) */
/* WARNING: Removing unreachable block (ram,0x01519350) */
/* WARNING: Removing unreachable block (ram,0x01519354) */
/* WARNING: Removing unreachable block (ram,0x0151936c) */
/* WARNING: Removing unreachable block (ram,0x01519374) */
/* WARNING: Removing unreachable block (ram,0x01650270) */
/* WARNING: Removing unreachable block (ram,0x01650280) */
/* WARNING: Removing unreachable block (ram,0x01519914) */
/* WARNING: Removing unreachable block (ram,0x01519934) */
/* WARNING: Removing unreachable block (ram,0x015199c4) */
/* WARNING: Removing unreachable block (ram,0x01519a40) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

undefined1 *
Atlas_UI_UIChallengeProgressBehaviour__Set
          (undefined4 param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
          long param_5,undefined1 *param_6)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar9;
  long lVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  uint uVar7;
  int iVar8;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  undefined1 *extraout_x1;
  long *plVar20;
  undefined1 *puVar21;
  long *plVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long lVar25;
  int *piVar26;
  undefined1 *unaff_x19;
  undefined1 *puVar27;
  undefined8 uVar28;
  int iVar29;
  undefined1 *unaff_x21;
  undefined8 uVar30;
  ulong unaff_x22;
  ulong uVar31;
  undefined8 uVar32;
  uint uVar33;
  long lVar34;
  undefined8 *puVar35;
  code *pcVar36;
  ulong uVar37;
  undefined8 **ppuVar38;
  undefined8 unaff_x26;
  undefined1 ***pppuVar39;
  undefined *puVar40;
  undefined8 uVar41;
  float fVar42;
  float extraout_s0;
  float extraout_s0_00;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  undefined1 *puStack_198;
  undefined1 ******ppppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  long *plStack_158;
  undefined1 *****pppppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  long *plStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined1 ****ppppuStack_110;
  undefined *puStack_108;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  
  puVar21 = param_4;
  if (*(long *)(param_2 + 0x38) != 0) {
    Atlas_UI_SlantFillBar__Init(*(long *)(param_2 + 0x38),0);
    unaff_x19 = param_4;
    unaff_x21 = param_3;
    if ((*(long *)(param_2 + 0x40) != 0) &&
       (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_2 + 0x40),0), lVar10 != 0)) {
      puVar21 = (undefined1 *)0x0;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,1);
      if ((*(long *)(param_2 + 0x30) != 0) &&
         (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_2 + 0x30),0), lVar10 != 0)) {
        puVar21 = (undefined1 *)0x0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,0);
        if ((*(long *)(param_2 + 0x38) != 0) &&
           (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_2 + 0x38),0), lVar10 != 0)) {
          puVar21 = (undefined1 *)0x0;
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,1);
          plVar11 = *(long **)(param_2 + 0x40);
          if (plVar11 != (long *)0x0) {
            puVar21 = *(undefined1 **)(*plVar11 + 0x560);
            (**(code **)(*plVar11 + 0x558))(plVar11,param_3);
            if ((*(long *)(param_2 + 0x38) != 0) &&
               (Atlas_UI_SlantFillBar__SetProgress(param_1,*(long *)(param_2 + 0x38),0),
               param_4 != (undefined1 *)0x0)) {
              plVar11 = *(long **)(param_2 + 0x40);
              puVar21 = param_4;
              if ((bRam0000000003eb57c0 & 1) == 0) {
                puVar21 = (undefined1 *)func_0x00f78a20(0x3d230d0,plVar11,0);
                bRam0000000003eb57c0 = 1;
              }
              if (param_4[0x61] != '\0') {
                if (plVar11 != (long *)0x0) {
                  uVar24 = *(ulong *)(*plVar11 + 0x7e0);
                  plVar22 = (long *)0x0;
                  puVar21 = (undefined1 *)(**(code **)(*plVar11 + 0x7d8))(plVar11,0);
                  if (plVar11[0x6c] == 0) {
                    return puVar21;
                  }
                  if (*(int *)(plVar11[0x6c] + 0x2c) < 2) {
                    return puVar21;
                  }
                  uVar13 = (**(code **)(*plVar11 + 0x548))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x550));
                  lVar10 = plVar11[0x6c];
                  if (lVar10 != 0) {
                    uVar7 = *(int *)(lVar10 + 0x2c) - 1;
                    uVar31 = (ulong)uVar7;
                    if ((int)uVar7 < 0) {
code_r0x01650114:
                      if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      plVar22 = *(long **)(*(long *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8) + 8);
                      if (plVar22 != (long *)0x0) {
                        uVar13 = (**(code **)(*plVar22 + 0x168))
                                           (plVar22,*(undefined8 *)(*plVar22 + 0x170));
                        (**(code **)(*plVar11 + 0x558))
                                  (plVar11,uVar13,*(undefined8 *)(*plVar11 + 0x560));
                        puVar21 = *(undefined1 **)(*(long *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8) + 8);
                        if (puVar21 != (undefined1 *)0x0) {
                          /*System.Text.StringBuilder$$set_Length*/ func_0x029d23ac(puVar21,0);
                          return puVar21;
                        }
                      }
                    }
                    else {
                      lVar34 = uVar31 * 0x5c;
                      do {
                        lVar10 = *(long *)(lVar10 + 0x50);
                        if (lVar10 == 0) break;
                        uVar7 = (uint)uVar31;
                        if (*(uint *)(lVar10 + 0x18) <= uVar7) {
                          uVar13 = func_0x00f78b24();
                          puVar21 = (undefined1 *)func_0x00f78ac0(uVar13,0);
                          puStack_58 = &Core_Localisation_LocalisationManager__FixStringIfArabic;
                          puStack_60 = &stack0xfffffffffffffff0;
                          if ((bRam0000000003eb57c1 & 1) == 0) {
                            func_0x00f78a20(0x3d230d0);
                            func_0x00f78a20(0x3d24040);
                            bRam0000000003eb57c1 = 1;
                          }
                          if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          iVar6 = /*Core.Localisation.LocalisationManager$$DoesStringContainArabic*/ func_0x0164ff20(puVar21);
                          if (iVar6 == 0) {
                            return puVar21;
                          }
                          if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          lVar10 = **(long **)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8);
                          auVar43._8_8_ = lVar10;
                          auVar43._0_8_ = puVar21;
                          if (lVar10 == 0) {
                            puVar40 = &RTLTMPro_RTLSupport__FixRTL;
                            auVar43 = func_0x00f78af4();
                          }
                          else {
                            *(undefined4 *)(lVar10 + 0x10) = 0;
                            if (((*(ushort *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            plVar22 = (long *)((long)&MACH_HEADER.magic + 1);
                            uVar24 = 1;
                            param_6 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
                            puVar40 = &UNK_01650270;
                          }
                          uVar19 = auVar43._8_8_;
                          puVar35 = auVar43._0_8_;
                          pppuStack_c0 = (undefined1 ***)0x3d230d0;
                          pppuVar39 = &ppuStack_90;
                          uVar13 = 0x3eb5000;
                          plVar11 = plVar22;
                          puStack_b8 = (undefined *)lVar34;
                          ppuStack_90 = &puStack_60;
                          puStack_88 = puVar40;
                          if ((bRam0000000003eb57d3 & 1) == 0) {
                            func_0x00f78a20(0x3d21be0);
                            func_0x00f78a20(0x3d22f20);
                            func_0x00f78a20(0x3d24040);
                            func_0x00f78a20(0x3d25070);
                            bRam0000000003eb57d3 = 1;
                          }
                          if (((*(ushort *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          if (**(long **)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xb8) != 0) {
                            /*RTLTMPro.FastStringBuilder$$SetValue*/ func_0x0164c410(**(long **)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xb8),puVar35);
                            uVar13 = **(undefined8 **)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xb8);
                            if (((*(ushort *)(/*RTLTMPro.TashkeelFixer_TypeInfo*/ lRam0000000003d25070 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*RTLTMPro.TashkeelFixer_TypeInfo*/ lRam0000000003d25070 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            unaff_x26 = 0x3d22f20;
                            /*RTLTMPro.TashkeelFixer$$RemoveTashkeel*/ func_0x01651a44(uVar13);
                            uVar16 = **(undefined8 **)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xb8);
                            uVar13 = (*(undefined8 **)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xb8))[1];
                            if (((*(ushort *)(/*RTLTMPro.GlyphFixer_TypeInfo*/ lRam0000000003d21be0 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*RTLTMPro.GlyphFixer_TypeInfo*/ lRam0000000003d21be0 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            /*RTLTMPro.GlyphFixer$$Fix*/ func_0x0164d17c(uVar16,uVar13,param_6,plVar22,uVar24);
                            /*RTLTMPro.TashkeelFixer$$RestoreTashkeel*/ func_0x01651c28(*(undefined8 *)
                                             (*(long *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xb8) + 8));
                            /*RTLTMPro.TashkeelFixer$$FixShaddaCombinations*/ func_0x01651d7c(*(undefined8 *)
                                             (*(long *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xb8) + 8));
                            puVar35 = *(undefined8 **)(*(long *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xb8) + 8);
                            if (((*(ushort *)(/*RTLTMPro.LigatureFixer_TypeInfo*/ lRam0000000003d22f20 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*RTLTMPro.LigatureFixer_TypeInfo*/ lRam0000000003d22f20 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            plVar11 = plVar22;
                            /*RTLTMPro.LigatureFixer$$Fix*/ func_0x0164e8bc(puVar35,uVar19,plVar22,uVar24,param_6);
                            if ((int)uVar24 != 0) {
                              /*RTLTMPro.RichTextFixer$$Fix*/ func_0x01651f48(uVar19);
                            }
                            puVar21 = /*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040;
                            if (((*(ushort *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                              puVar21 = /*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040;
                            }
                            /*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 = puVar21;
                            if (**(long **)(puVar21 + 0xb8) != 0) {
                              *(undefined4 *)(**(long **)(puVar21 + 0xb8) + 0x10) = 0;
                              return puVar21;
                            }
                          }
                          puVar21 = (undefined1 *)func_0x00f78af4();
                          if (puVar21 != (undefined1 *)0x0) {
                            uVar31 = /*System.String$$LastIndexOf*/ func_0x029ce0f0(puVar21,0x2d,0);
                            if ((int)uVar31 < 1) {
                              return puVar21;
                            }
                            auVar44._8_8_ = 0;
                            auVar44._0_8_ = puVar21;
                            puVar40 = &Core_Localisation_LocalisationManager__GetLanguageCode;
                            puVar21 = &stack0xffffffffffffff20;
                            goto System_String__Substring;
                          }
                          auVar43 = func_0x00f78af4();
                          lVar10 = auVar43._0_8_;
                          puStack_108 = &
                                        Core_Localisation_LocalisationManager__TryGetTimeFormatOverrideString
                          ;
                          uVar16 = 0x3eb5000;
                          plVar20 = plVar11;
                          uStack_140 = uVar13;
                          puStack_138 = puVar35;
                          plStack_130 = plVar22;
                          puStack_128 = param_6;
                          puStack_120 = (undefined1 *)uVar24;
                          puStack_118 = (undefined1 *)uVar19;
                          ppppuStack_110 = (undefined1 ****)&stack0xffffffffffffff10;
                          if ((bRam0000000003eb57c2 & 1) == 0) {
                            func_0x00f78a20(0x3d6d5c0);
                            func_0x00f78a20(0x3d7a030);
                            func_0x00f78a20(0x3d77c80);
                            bRam0000000003eb57c2 = 1;
                          }
                          plVar22 = *(long **)(lVar10 + 0x68);
                          if ((plVar22 != (long *)0x0) &&
                             (lVar34 = (**(code **)(*plVar22 + 0x238))
                                                 (plVar22,*(undefined8 *)(*plVar22 + 0x240)),
                             lVar34 != 0)) {
                            uVar16 = /*System.Globalization.DateTimeFormatInfo$$get_ShortTimePattern*/ func_0x02a93380(lVar34,0);
                            plVar22 = *(long **)(lVar10 + 0x68);
                            if ((plVar22 != (long *)0x0) &&
                               (lVar34 = (**(code **)(*plVar22 + 0x238))
                                                   (plVar22,*(undefined8 *)(*plVar22 + 0x240)),
                               lVar34 != 0)) {
                              puVar35 = (undefined8 *)/*System.Globalization.DateTimeFormatInfo$$get_ShortDatePattern*/ func_0x02a932e0(lVar34,0);
                              if (*(long *)(lVar10 + 0x58) != 0) {
                                plVar20 = (long *)((long)&MACH_HEADER.cputype + 1);
                                puVar21 = (undefined1 *)
                                          /*System.String$$Equals*/ func_0x029caa48(*(long *)(lVar10 + 0x58),
                                                          /*STR('ar')*/ uRam0000000003d77c80,5,0);
                                uVar19 = /*STR('HH:mm')*/ uRam0000000003d6d5c0;
                                if ((int)puVar21 != 0) {
code_r0x016505f8:
                                  *auVar43._8_8_ = uVar19;
                                  *plVar11 = (long)puVar35;
                                  return puVar21;
                                }
                                if (*(long *)(lVar10 + 0x58) != 0) {
                                  puVar21 = (undefined1 *)
                                            /*System.String$$Equals*/ func_0x029caa48(*(long *)(lVar10 + 0x58),
                                                            /*STR('ko')*/ uRam0000000003d7a030,5,0);
                                  uVar19 = /*STR('HH:mm')*/ uRam0000000003d6d5c0;
                                  if ((int)puVar21 == 0) {
                                    uVar19 = uVar16;
                                  }
                                  goto code_r0x016505f8;
                                }
                              }
                            }
                          }
                          lVar10 = func_0x00f78af4();
                          puStack_148 = &
                                        Core_Localisation_LocalisationManager__GenerateSupportedLanguageList
                          ;
                          uVar24 = 0x3d3bf88;
                          uStack_180 = uVar13;
                          puStack_178 = puVar35;
                          uStack_170 = uVar16;
                          plStack_158 = plVar11;
                          pppppuStack_150 = &ppppuStack_110;
                          auStack_168 = auVar43;
                          if ((bRam0000000003eb57c3 & 1) == 0) {
                            func_0x00f78a20(0x3d3bfa0);
                            func_0x00f78a20(0x3d3bf88);
                            func_0x00f78a20(0x3d1de30);
                            bRam0000000003eb57c3 = 1;
                          }
                          puVar21 = (undefined1 *)func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
                          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(puVar21,uRam0000000003d3bf88);
                          lVar10 = *(long *)(lVar10 + 0x20);
                          uStack_1b0 = 0x3d1de30;
                          if (lVar10 == 0) goto code_r0x01650704;
                          if ((int)*(ulong *)(lVar10 + 0x18) < 1) {
                            return puVar21;
                          }
                          uVar24 = 0;
                          uVar31 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
                          puVar35 = (undefined8 *)(lVar10 + 0x20);
                          goto code_r0x016506b4;
                        }
                        uVar9 = *(uint *)(lVar10 + lVar34 + 0x34);
                        plVar22 = (long *)(ulong)uVar9;
                        iVar6 = *(int *)(lVar10 + lVar34 + 0x3c);
                        if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        lVar10 = *(long *)(*(long *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8) + 8);
                        if (lVar10 == 0) break;
                        uVar24 = (ulong)((iVar6 - uVar9) + 1);
                        param_6 = (undefined1 *)0x0;
                        /*System.Text.StringBuilder$$Append*/ func_0x029d2dbc(lVar10,uVar13);
                        if (uVar7 == 0) goto code_r0x01650114;
                        if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        lVar10 = *(long *)(*(long *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8) + 8);
                        if (lVar10 == 0) break;
                        /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar10,0);
                        uVar31 = (ulong)(uVar7 - 1);
                        if ((int)(uVar7 - 1) < 0) goto code_r0x01650114;
                        lVar34 = lVar34 + -0x5c;
                        lVar10 = plVar11[0x6c];
                      } while (lVar10 != 0);
                    }
                  }
                }
                puVar21 = (undefined1 *)func_0x00f78af4();
              }
              return puVar21;
            }
          }
        }
      }
    }
  }
  puVar27 = (undefined1 *)func_0x00f78af4();
  puStack_60 = param_2;
  puStack_58 = unaff_x19;
  if (param_5 == 0) {
LAB_01519390:
    puVar40 = &Atlas_UI_UIChallengeProgressBehaviour__UpdateFillBar;
    param_5 = func_0x00f78af4();
    param_6 = extraout_x1;
    fVar42 = extraout_s0;
  }
  else {
    if (*(char *)(param_5 + 0x90) != '\0') {
      return puVar27;
    }
    if (*(long *)(puVar27 + 0x30) == 0) goto LAB_01519390;
    puVar27 = (undefined1 *)0x0;
    iVar6 = /*Atlas.Stats.StatsManager$$GetSummedStats*/ func_0x015045f8();
    unaff_x22 = (ulong)puVar21 >> 0x20;
    fVar42 = (float)iVar6 / (float)(int)((ulong)puVar21 >> 0x20);
    puVar40 = (undefined *)0x1519338;
    puVar21 = puVar27;
    unaff_x21 = param_6;
  }
  ppuStack_90 = (undefined1 **)&stack0xffffffffffffffb0;
  puStack_88 = puVar40;
  puVar27 = (undefined1 *)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(fVar42,0);
  if (extraout_s0_00 == *(float *)(param_5 + 0x8c)) {
    return puVar27;
  }
  lVar10 = *(long *)(param_5 + 0x38);
  if ((int)param_6 == 0) {
    if (lVar10 != 0) {
      puVar21 = (undefined1 *)Atlas_UI_SlantFillBar__SetProgress(extraout_s0_00,lVar10,0);
      goto code_r0x015193f4;
    }
  }
  else if (lVar10 != 0) {
    puVar21 = (undefined1 *)Atlas_UI_SlantFillBar__SetTargetProgress(extraout_s0_00,lVar10,0,0);
code_r0x015193f4:
    *(float *)(param_5 + 0x8c) = extraout_s0_00;
    return puVar21;
  }
  auVar43 = func_0x00f78af4();
  puVar27 = auVar43._8_8_;
  puStack_b8 = &Atlas_UI_UIChallengeProgressBehaviourContainer__SetChallengeComplete;
  lVar10 = *(long *)(auVar43._0_8_ + 0x18);
  pppuStack_c0 = &ppuStack_90;
  if ((lVar10 == 0) || (puVar27 == (undefined1 *)0x0)) {
    puVar21 = (undefined1 *)func_0x00f78af4();
    return puVar21;
  }
  puVar3 = &stack0xffffffffffffff00;
  puStack_b8 = &Atlas_UI_UIChallengeProgressBehaviourContainer__SetChallengeComplete;
  puVar12 = puVar27;
  if ((bRam0000000003eb4dd0 & 1) == 0) {
    func_0x00f78a20(*(undefined4 *)(lVar10 + 0x58),0x3d25428);
    func_0x00f78a20(0x3d5e6d8);
    func_0x00f78a20(0x3d5e710);
    func_0x00f78a20(0x3d5e7b0);
    func_0x00f78a20(0x3d5e7a0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5f6c8);
    func_0x00f78a20(0x3d5f6d0);
    func_0x00f78a20(0x3d790e0);
    puVar12 = (undefined1 *)func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4dd0 = 1;
  }
  if (puVar27[0x90] != '\0') {
    return puVar12;
  }
  if (((ulong)puVar21 & 1) == 0) {
    puVar12 = *(undefined1 **)(puVar27 + 0x50);
    if (puVar12 != (undefined1 *)0x0) {
      puVar3 = &stack0xffffffffffffff30;
      if ((*(long *)(puVar12 + 0x20) != 0) &&
         (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(puVar12 + 0x20),0), lVar10 != 0)) {
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,1,0);
        plVar11 = *(long **)(puVar12 + 0x20);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
          plVar11 = *(long **)(puVar12 + 0x20);
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x2a8))(plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
            if ((*(long *)(puVar12 + 0x28) != 0) &&
               (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(puVar12 + 0x28),0), lVar10 != 0)) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,1,0);
              plVar11 = *(long **)(puVar12 + 0x20);
              if (plVar11 != (long *)0x0) {
                (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
                plVar11 = *(long **)(puVar12 + 0x28);
                if (plVar11 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015124f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  puVar21 = (undefined1 *)
                            (**(code **)(*plVar11 + 0x2a8))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
                  return puVar21;
                }
              }
            }
          }
        }
      }
      pcVar36 = Atlas_UI_UIAnimatingFlagsBehaviour__OnDestroy;
      lVar10 = func_0x00f78af4();
      goto DG_Tweening_ShortcutExtensions__DOKill;
    }
  }
  else {
    puVar27[0x90] = 1;
    Atlas_Audio_UIAudio__Play(/*STR('event:/UI/HUD/ChallengeComplete')*/ uRam0000000003d790e0);
    if (*(long *)(puVar27 + 0x50) != 0) {
      puVar21 = (undefined1 *)
                Atlas_UI_UIAnimatingFlagsBehaviour__PlayCompleteAnimation
                          (0,*(long *)(puVar27 + 0x50),/*STR('')*/ uRam0000000003d65d08);
      *(undefined1 **)(puVar27 + 0x98) = puVar21;
      uVar13 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(0,0x3f800000,0x3f800000,*(undefined4 *)(puVar27 + 0x58),
                               *(undefined8 *)(puVar27 + 0x28),0);
      lVar10 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar13,*(undefined4 *)(puVar27 + 0x5c),uRam0000000003d5e7a8);
      puStack_108 = &UNK_01519890;
      if (((((puVar21 != (undefined1 *)0x0) && (puVar21[0xe8] != '\0')) && (lVar10 != 0)) &&
          ((puVar21[0x100] == '\0' && (*(char *)(lVar10 + 0xe8) != '\0')))) &&
         (*(char *)(lVar10 + 0xe9) == '\0')) {
        puStack_120 = puVar21;
        puStack_118 = puVar27;
        ppppuStack_110 = &pppuStack_c0;
        /*DG.Tweening.Sequence$$DoInsert*/ func_0x016a231c(*(undefined4 *)(puVar21 + 0xa0),puVar21,lVar10,0);
      }
      return puVar21;
    }
  }
  pcVar36 = (code *)&Atlas_UI_UIChallengeProgressBehaviour__OnDestroy;
  lVar10 = func_0x00f78af4();
  puVar12 = puVar27;
  param_6 = puVar21;
  unaff_x21 = (undefined1 *)0x3eb4000;
DG_Tweening_ShortcutExtensions__DOKill:
  *(ulong *)(puVar3 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar3 + -0x28) = unaff_x21;
  *(undefined1 **)(puVar3 + -0x20) = param_6;
  *(undefined1 **)(puVar3 + -0x18) = puVar12;
  *(undefined1 *****)(puVar3 + -0x10) = &pppuStack_c0;
  *(code **)(puVar3 + -8) = pcVar36;
  if ((bRam0000000003eb5c29 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    bRam0000000003eb5c29 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
  *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
  *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
  *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
  *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
  *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  if ((bRam0000000003eb5af0 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5af0 = 1;
  }
  if (lVar10 == 0) {
    puVar21 = (undefined1 *)0x0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar10,0,0,0,0);
    puVar21 = (undefined1 *)(ulong)uVar7;
  }
  return puVar21;
System_String__Substring:
  puVar12 = auVar44._8_8_;
  puVar27 = auVar44._0_8_;
  *(long **)(puVar21 + -0x30) = plVar22;
  *(undefined1 **)(puVar21 + -0x28) = param_6;
  *(ulong *)(puVar21 + -0x20) = uVar24;
  *(undefined8 *)(puVar21 + -0x18) = uVar19;
  *(undefined1 ****)(puVar21 + -0x10) = pppuVar39;
  *(undefined **)(puVar21 + -8) = puVar40;
  pppuVar39 = (undefined1 ***)(puVar21 + -0x10);
  plVar22 = (long *)0x3eb9000;
  if ((bRam0000000003eb944b & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb944b = 1;
  }
  iVar6 = auVar44._8_4_;
  if (iVar6 < 0) {
    uVar19 = 0x3d72d20;
code_r0x029cbcb4:
    uVar19 = func_0x00f78a24(uVar19);
    uVar19 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar19,0);
    func_0x00f78a24(0x3d1fcf8);
    uVar24 = func_0x00f78aec();
    uVar16 = 0x3d7b9d0;
  }
  else {
    iVar8 = *(int *)(puVar27 + 0x10);
    if (iVar8 < iVar6) {
      uVar19 = 0x3d7b9e8;
      goto code_r0x029cbcb4;
    }
    iVar29 = (int)uVar31;
    if (iVar29 < 0) {
      uVar19 = 0x3d6f480;
    }
    else {
      if (iVar6 <= iVar8 - iVar29) goto code_r0x029cbc4c;
      uVar19 = 0x3d6ddc8;
    }
    uVar19 = func_0x00f78a24(uVar19);
    uVar19 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar19,0);
    func_0x00f78a24(0x3d1fcf8);
    uVar24 = func_0x00f78aec();
    uVar16 = 0x3d7a280;
  }
  uVar16 = func_0x00f78a24(uVar16);
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar24,uVar16,uVar19,0);
  uVar16 = func_0x00f78a24(0x3d5dbb0);
  puVar40 = &System_String__Substring;
  auVar44 = func_0x00f78ac0(uVar24,uVar16);
  uVar31 = (ulong)(uint)(*(int *)(auVar44._0_8_ + 0x10) - auVar44._8_4_);
  puVar21 = puVar21 + -0x30;
  param_6 = puVar12;
  goto System_String__Substring;
code_r0x029cc070:
  uVar19 = func_0x00f78b24();
  func_0x00f78ac0(uVar19,0);
  puVar35 = puVar23;
code_r0x029cc07c:
  auVar44._8_8_ = lVar10;
  auVar44._0_8_ = uVar24;
  puVar40 = &System_String__TrimStart;
  auVar43 = func_0x00f78af4();
  puVar17 = auVar43._0_8_;
  if ((auVar43._8_8_ == 0) || (*(long *)(auVar43._8_8_ + 0x18) == 0)) goto code_r0x029cc094;
  puVar23 = (undefined8 *)0x0;
  puVar21 = puVar21 + -0x40;
  puVar27 = puVar18;
  auVar2 = auVar43;
  goto System_String__TrimHelper;
code_r0x01650b80:
  uVar13 = func_0x00f78b14();
  goto code_r0x01650b84;
code_r0x029cbc4c:
  if (iVar29 == 0) {
    puVar27 = (undefined1 *)**(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  else if ((iVar6 != 0) || (iVar8 != iVar29)) {
    uVar19 = *(undefined8 *)(puVar21 + -0x10);
    uVar41 = *(undefined8 *)(puVar21 + -8);
    uVar16 = *(undefined8 *)(puVar21 + -0x20);
    puVar27 = *(undefined1 **)(puVar21 + -0x18);
    uVar32 = *(undefined8 *)(puVar21 + -0x30);
    uVar28 = *(undefined8 *)(puVar21 + -0x28);
System_String__InternalSubString:
    uVar24 = auVar44._0_8_;
    auVar2._8_8_ = auVar44._8_8_;
    auVar2._0_8_ = puVar27;
    *(undefined8 *)(puVar21 + -0x30) = uVar32;
    *(undefined8 *)(puVar21 + -0x28) = uVar28;
    *(undefined8 *)(puVar21 + -0x20) = uVar16;
    *(undefined1 **)(puVar21 + -0x18) = puVar27;
    *(undefined8 *)(puVar21 + -0x10) = uVar19;
    *(undefined8 *)(puVar21 + -8) = uVar41;
    puVar12 = puVar21 + -0x10;
    puVar17 = (undefined1 *)func_0x00f834ac(uVar31);
    if (puVar17 != (undefined1 *)0x0) {
      /*System.Buffer$$Memcpy*/ func_0x029426bc(puVar17 + 0x14,uVar24 + (long)auVar44._8_4_ * 2 + 0x14,(int)uVar31 << 1,0);
      return puVar17;
    }
    puVar40 = &System_String__Trim;
    auVar43 = func_0x00f78af4();
    puVar17 = auVar43._0_8_;
    if ((auVar43._8_8_ != 0) && (*(long *)(auVar43._8_8_ + 0x18) != 0)) {
      puVar23 = (undefined8 *)((long)&MACH_HEADER.magic + 2);
      puVar21 = puVar21 + -0x30;
      auVar2 = auVar43;
System_String__TrimHelper:
      lVar10 = auVar2._8_8_;
      puVar18 = auVar2._0_8_;
      *(undefined8 *)(puVar21 + -0x40) = uVar13;
      *(undefined8 **)(puVar21 + -0x38) = puVar35;
      *(undefined1 (*) [16])(puVar21 + -0x30) = auVar44;
      *(ulong *)(puVar21 + -0x20) = uVar31;
      *(undefined1 **)(puVar21 + -0x18) = puVar27;
      *(undefined1 **)(puVar21 + -0x10) = puVar12;
      *(undefined **)(puVar21 + -8) = puVar40;
      puVar12 = puVar21 + -0x10;
      uVar7 = *(uint *)(puVar18 + 0x10);
      uVar31 = (ulong)uVar7;
      if ((int)puVar23 == 1) {
        uVar24 = 0;
        puVar23 = puVar35;
code_r0x029cbfd8:
        do {
          uVar7 = (int)uVar31 - 1;
          uVar31 = (ulong)uVar7;
          if ((int)uVar7 < (int)uVar24) break;
          uVar9 = /*System.String$$get_Chars*/ func_0x029c5420(puVar18,uVar31);
          puVar35 = puVar23;
          if (lVar10 == 0) goto code_r0x029cc07c;
          iVar6 = *(int *)(lVar10 + 0x18);
          if (iVar6 < 1) {
            iVar8 = 0;
          }
          else {
            iVar29 = 0;
            do {
              if (iVar6 == iVar29) goto code_r0x029cc070;
              iVar8 = iVar29;
            } while ((*(ushort *)(lVar10 + (long)iVar29 * 2 + 0x20) != uVar9) &&
                    (iVar29 = iVar29 + 1, iVar8 = iVar6, iVar6 != iVar29));
          }
        } while (iVar8 != iVar6);
      }
      else {
        if ((int)uVar7 < 1) {
          uVar24 = 0;
        }
        else {
          uVar24 = 0;
          do {
            uVar9 = /*System.String$$get_Chars*/ func_0x029c5420(puVar18,uVar24);
            puVar35 = puVar23;
            if (lVar10 == 0) goto code_r0x029cc07c;
            iVar6 = *(int *)(lVar10 + 0x18);
            if (iVar6 < 1) {
              iVar8 = 0;
            }
            else {
              iVar29 = 0;
              do {
                if (iVar6 == iVar29) goto code_r0x029cc070;
                iVar8 = iVar29;
              } while ((*(ushort *)(lVar10 + (long)iVar29 * 2 + 0x20) != uVar9) &&
                      (iVar29 = iVar29 + 1, iVar8 = iVar6, iVar6 != iVar29));
            }
          } while ((iVar8 != iVar6) &&
                  (uVar9 = (int)uVar24 + 1, uVar24 = (ulong)uVar9,
                  (int)uVar9 < *(int *)(puVar18 + 0x10)));
        }
        if ((int)puVar23 != 0) {
          uVar31 = (ulong)*(uint *)(puVar18 + 0x10);
          goto code_r0x029cbfd8;
        }
        uVar7 = uVar7 - 1;
      }
      uVar19 = *(undefined8 *)(puVar21 + -0x10);
      uVar41 = *(undefined8 *)(puVar21 + -8);
      uVar16 = *(undefined8 *)(puVar21 + -0x20);
      uVar28 = *(undefined8 *)(puVar21 + -0x18);
      uVar32 = *(undefined8 *)(puVar21 + -0x30);
      uVar30 = *(undefined8 *)(puVar21 + -0x28);
      uVar13 = *(undefined8 *)(puVar21 + -0x40);
      puVar35 = *(undefined8 **)(puVar21 + -0x38);
      puVar17 = puVar18;
      goto System_String__CreateTrimmedString;
    }
    iVar6 = 2;
    puVar21 = puVar21 + -0x30;
    goto System_String__TrimHelper;
  }
  return puVar27;
code_r0x029cc094:
  iVar6 = 0;
  puVar21 = puVar21 + -0x40;
System_String__TrimHelper:
  *(undefined8 *)(puVar21 + -0x40) = uVar13;
  *(undefined8 **)(puVar21 + -0x38) = puVar35;
  *(ulong *)(puVar21 + -0x30) = uVar24;
  *(long *)(puVar21 + -0x28) = auVar2._8_8_;
  *(ulong *)(puVar21 + -0x20) = uVar31;
  *(long *)(puVar21 + -0x18) = auVar2._0_8_;
  *(undefined1 **)(puVar21 + -0x10) = puVar12;
  *(undefined **)(puVar21 + -8) = puVar40;
  if ((bRam0000000003eb9460 & 1) == 0) {
    func_0x00f78a20(0x3d20620);
    bRam0000000003eb9460 = 1;
  }
  uVar7 = *(uint *)(puVar17 + 0x10);
  if (iVar6 == 1) {
    uVar24 = 0;
  }
  else {
    if ((int)uVar7 < 1) {
      uVar24 = 0;
    }
    else {
      uVar24 = 0;
      do {
        uVar13 = /*System.String$$get_Chars*/ func_0x029c5420(puVar17,uVar24);
        if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar31 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar13,0);
        if ((uVar31 & 1) == 0) {
          /*System.String$$get_Chars*/ func_0x029c5420(puVar17,uVar24);
          break;
        }
        uVar9 = (int)uVar24 + 1;
        uVar24 = (ulong)uVar9;
      } while ((int)uVar9 < *(int *)(puVar17 + 0x10));
    }
    if (iVar6 == 0) {
      uVar7 = uVar7 - 1;
      goto code_r0x029cbf04;
    }
    uVar7 = *(uint *)(puVar17 + 0x10);
  }
  do {
    uVar7 = uVar7 - 1;
    if ((int)uVar7 < (int)uVar24) goto code_r0x029cbf04;
    uVar13 = /*System.String$$get_Chars*/ func_0x029c5420(puVar17,uVar7);
    if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar31 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar13,0);
  } while ((uVar31 & 1) != 0);
  /*System.String$$get_Chars*/ func_0x029c5420(puVar17,uVar24);
code_r0x029cbf04:
  uVar19 = *(undefined8 *)(puVar21 + -0x10);
  uVar41 = *(undefined8 *)(puVar21 + -8);
  uVar16 = *(undefined8 *)(puVar21 + -0x20);
  uVar28 = *(undefined8 *)(puVar21 + -0x18);
  uVar32 = *(undefined8 *)(puVar21 + -0x30);
  uVar30 = *(undefined8 *)(puVar21 + -0x28);
  uVar13 = *(undefined8 *)(puVar21 + -0x40);
  puVar35 = *(undefined8 **)(puVar21 + -0x38);
System_String__CreateTrimmedString:
  auVar44._8_8_ = uVar24;
  auVar44._0_8_ = puVar17;
  *(undefined8 *)(puVar21 + -0x30) = uVar32;
  *(undefined8 *)(puVar21 + -0x28) = uVar30;
  *(undefined8 *)(puVar21 + -0x20) = uVar16;
  *(undefined8 *)(puVar21 + -0x18) = uVar28;
  *(undefined8 *)(puVar21 + -0x10) = uVar19;
  *(undefined8 *)(puVar21 + -8) = uVar41;
  if ((bRam0000000003eb9461 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9461 = 1;
  }
  uVar7 = (uVar7 - (int)uVar24) + 1;
  uVar31 = (ulong)uVar7;
  if (uVar7 != *(uint *)(puVar17 + 0x10)) {
    if (uVar7 != 0) {
      uVar19 = *(undefined8 *)(puVar21 + -0x10);
      uVar41 = *(undefined8 *)(puVar21 + -8);
      uVar16 = *(undefined8 *)(puVar21 + -0x20);
      puVar27 = *(undefined1 **)(puVar21 + -0x18);
      uVar32 = *(undefined8 *)(puVar21 + -0x30);
      uVar28 = *(undefined8 *)(puVar21 + -0x28);
      goto System_String__InternalSubString;
    }
    puVar17 = (undefined1 *)**(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  return puVar17;
code_r0x016506b4:
  if (uVar24 < uVar31) {
    uStack_1b0 = 0x3d3bfa0;
    if (puVar21 == (undefined1 *)0x0) goto code_r0x01650704;
    plVar20 = plRam0000000003d3bfa0;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(puVar21,*puVar35);
    uVar24 = uVar24 + 1;
    uVar31 = (ulong)*(uint *)(lVar10 + 0x18);
    puVar35 = puVar35 + 3;
    if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar24) {
      return puVar21;
    }
    goto code_r0x016506b4;
  }
  uVar19 = func_0x00f78b24();
  func_0x00f78ac0(uVar19,0);
  uStack_1b0 = 0x3d3bfa0;
code_r0x01650704:
  auVar43 = func_0x00f78af4();
  lVar15 = auVar43._8_8_;
  lVar34 = auVar43._0_8_;
  uStack_1c8 = 0x3d24040;
  puStack_188 = &Core_Localisation_LocalisationManager__Set;
  uStack_1d0 = unaff_x26;
  uStack_1c0 = uVar13;
  puStack_1b8 = puVar35;
  uStack_1a8 = uVar24;
  lStack_1a0 = lVar10;
  puStack_198 = puVar21;
  ppppppuStack_190 = &pppppuStack_150;
  if ((bRam0000000003eb57c4 & 1) == 0) {
    func_0x00f78a20(0x3d2a328);
    func_0x00f78a20(0x3d20b50);
    func_0x00f78a20(0x3d2fe40);
    func_0x00f78a20(0x3d2fe80);
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d77c80);
    bRam0000000003eb57c4 = 1;
  }
  if (*(long *)(lVar34 + 0x70) != 0) {
    /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$Clear*/ func_0x01ed79a4(*(long *)(lVar34 + 0x70),uRam0000000003d2fe40);
    if (lVar15 != 0) {
      uVar24 = (ulong)*(uint *)(lVar15 + 0x18);
      if (0 < (int)*(uint *)(lVar15 + 0x18)) {
        uVar31 = 0;
        uVar37 = uVar24 - 1;
        while( true ) {
          if (uVar24 <= uVar31) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar10 = plVar20[1];
          if (lVar10 == 0) goto code_r0x016508d8;
          uVar13 = *(undefined8 *)(*(long *)(lVar15 + 0x10) + uVar31 * 8 + 0x20);
          if (*(uint *)(lVar10 + 0x18) <= uVar31) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(lVar34 + 0x70) == 0) goto code_r0x016508d8;
          /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$set_Item*/ func_0x01ed7794(*(long *)(lVar34 + 0x70),uVar13,
                          *(undefined8 *)(*(long *)(lVar10 + 0x10) + uVar31 * 8 + 0x20),
                          uRam0000000003d2fe80);
          if (uVar37 == uVar31) break;
          uVar24 = (ulong)*(uint *)(lVar15 + 0x18);
          uVar31 = uVar31 + 1;
        }
      }
      *(long *)(lVar34 + 0x58) = *plVar20;
      if (*plVar20 != 0) {
        uVar5 = /*System.String$$Equals*/ func_0x029caa48(*plVar20,/*STR('ar')*/ uRam0000000003d77c80,5,0);
        *(undefined1 *)(lVar34 + 0x61) = uVar5;
        *(undefined1 *)(lVar34 + 0x60) = uVar5;
        uVar19 = *(undefined8 *)(lVar34 + 0x58);
        uVar13 = func_0x00f78aec(/*System.Globalization.CultureInfo_TypeInfo*/ uRam0000000003d20b50);
        /*System.Globalization.CultureInfo$$.ctor*/ func_0x02a811d4(uVar13,uVar19,0);
        *(undefined8 *)(lVar34 + 0x68) = uVar13;
        puVar35 = *(undefined8 **)(lVar34 + 0x10);
        if (puVar35 == (undefined8 *)0x0) {
          return (undefined1 *)0x0;
        }
        plVar20 = (long *)*plVar20;
        puStack_1d8 = puVar35;
        lVar10 = puVar35[0xd];
        if (lVar10 == 0) {
          ppuVar38 = &puStack_1d8;
          lVar34 = 1;
        }
        else {
          lVar34 = *(long *)(lVar10 + 0x18);
          if (lVar34 == 0) {
            return (undefined1 *)puVar35;
          }
          ppuVar38 = (undefined8 **)(lVar10 + 0x20);
        }
        lVar10 = 0;
        do {
          puVar23 = ppuVar38[lVar10];
          pcVar36 = (code *)puVar23[2];
          plVar11 = (long *)puVar23[4];
          lVar15 = puVar23[5];
          if (*(short *)(lVar15 + 0x48) == -1) {
            func_0x00f78ad8(lVar15);
          }
          iVar6 = func_0x00f78a4c(lVar15);
          bVar4 = *(char *)(lVar15 + 0x4a) == '\x01';
          if (iVar6 == 0) {
            if (bVar4) {
              if (plVar11 == (long *)0x0) {
code_r0x01e480c8:
                puVar21 = (undefined1 *)(*pcVar36)(plVar20,lVar15);
              }
              else {
                if (((*(short *)(lVar15 + 0x48) == -1) || ((*(byte *)(*plVar11 + 0x115) & 1) != 0))
                   || (puVar35[3] == 0)) goto code_r0x01e47fc0;
                iVar6 = func_0x00f78a44(lVar15);
                iVar8 = func_0x00f78ec0(lVar15);
                if (iVar6 == 0) {
                  uVar1 = *(ushort *)(lVar15 + 0x48);
                  if (iVar8 == 0) {
                    lVar15 = *plVar11 + (ulong)uVar1 * 0x10;
                    puVar21 = (undefined1 *)
                              (**(code **)(lVar15 + 0x138))
                                        (plVar11,plVar20,*(undefined8 *)(lVar15 + 0x140));
                    goto code_r0x01e480d4;
                  }
                  lVar15 = func_0x00f78a48(lVar15);
                  lVar25 = *plVar11;
                  uVar24 = (ulong)*(ushort *)(lVar25 + 0x12a);
                  if (uVar24 != 0) {
                    piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == lVar15) {
                        puVar23 = (undefined8 *)
                                  (lVar25 + (long)(int)(*piVar26 + (uint)uVar1) * 0x10 + 0x138);
                        goto code_r0x01e48260;
                      }
                      piVar26 = piVar26 + 4;
                      uVar24 = uVar24 - 1;
                    } while (uVar24 != 0);
                  }
                  puVar23 = (undefined8 *)func_0x00fac1f0(plVar11,lVar15,(ulong)uVar1);
code_r0x01e48260:
                  pcVar36 = (code *)*puVar23;
                  puVar23 = (undefined8 *)puVar23[1];
                }
                else {
                  if (iVar8 == 0) {
                    uVar13 = *(undefined8 *)
                              (*plVar11 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar25 = *plVar11;
                    uVar24 = (ulong)*(ushort *)(lVar25 + 0x12a);
                    if (uVar24 != 0) {
                      piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar26 + -2) == *(long *)(lVar15 + 0x18)) {
                          lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar15 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e48238;
                        }
                        piVar26 = piVar26 + 4;
                        uVar24 = uVar24 - 1;
                      } while (uVar24 != 0);
                    }
                    lVar25 = func_0x00fac1f0(plVar11);
code_r0x01e48238:
                    uVar13 = *(undefined8 *)(lVar25 + 8);
                  }
                  puVar23 = (undefined8 *)func_0x00f78acc(uVar13,lVar15);
                  pcVar36 = (code *)*puVar23;
                }
                puVar21 = (undefined1 *)(*pcVar36)(plVar11,plVar20,puVar23);
              }
            }
            else {
              if ((*(short *)(lVar15 + 0x48) == -1) || (puVar35[3] == 0)) goto code_r0x01e480c8;
              iVar6 = func_0x00f78a44(lVar15);
              iVar8 = func_0x00f78ec0(lVar15);
              if (iVar6 == 0) {
                uVar1 = *(ushort *)(lVar15 + 0x48);
                if (iVar8 == 0) {
                  lVar15 = *plVar20 + (ulong)uVar1 * 0x10;
                  puVar21 = (undefined1 *)
                            (**(code **)(lVar15 + 0x138))(plVar20,*(undefined8 *)(lVar15 + 0x140));
                  goto code_r0x01e480d4;
                }
                lVar15 = func_0x00f78a48(lVar15);
                lVar25 = *plVar20;
                uVar24 = (ulong)*(ushort *)(lVar25 + 0x12a);
                if (uVar24 != 0) {
                  piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == lVar15) {
                      puVar23 = (undefined8 *)
                                (lVar25 + (long)(int)(*piVar26 + (uint)uVar1) * 0x10 + 0x138);
                      goto code_r0x01e481fc;
                    }
                    piVar26 = piVar26 + 4;
                    uVar24 = uVar24 - 1;
                  } while (uVar24 != 0);
                }
                puVar23 = (undefined8 *)func_0x00fac1f0(plVar20,lVar15,(ulong)uVar1);
code_r0x01e481fc:
                pcVar36 = (code *)*puVar23;
                puVar23 = (undefined8 *)puVar23[1];
              }
              else {
                if (iVar8 == 0) {
                  uVar13 = *(undefined8 *)
                            (*plVar20 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar25 = *plVar20;
                  uVar24 = (ulong)*(ushort *)(lVar25 + 0x12a);
                  if (uVar24 != 0) {
                    piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == *(long *)(lVar15 + 0x18)) {
                        lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar15 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e481d4;
                      }
                      piVar26 = piVar26 + 4;
                      uVar24 = uVar24 - 1;
                    } while (uVar24 != 0);
                  }
                  lVar25 = func_0x00fac1f0(plVar20);
code_r0x01e481d4:
                  uVar13 = *(undefined8 *)(lVar25 + 8);
                }
                puVar23 = (undefined8 *)func_0x00f78acc(uVar13,lVar15);
                pcVar36 = (code *)*puVar23;
              }
              puVar21 = (undefined1 *)(*pcVar36)(plVar20,puVar23);
            }
          }
          else {
            if (bVar4) goto code_r0x01e480c8;
code_r0x01e47fc0:
            puVar21 = (undefined1 *)(*pcVar36)(plVar11,plVar20,lVar15);
          }
code_r0x01e480d4:
          lVar10 = lVar10 + 1;
          if (lVar10 == lVar34) {
            return puVar21;
          }
        } while( true );
      }
    }
  }
code_r0x016508d8:
  auVar43 = func_0x00f78af4();
  puVar27 = auVar43._0_8_;
  puStack_1d8 = (undefined8 *)
                &Core_Localisation_LocalisationManager__SetFontAndMaterialAssetMappings;
  puVar21 = puVar27;
  if ((bRam0000000003eb57c6 & 1) == 0) {
    func_0x00f78a20(0x3d3c138);
    puVar21 = (undefined1 *)func_0x00f78a20(0x3d3c140);
    bRam0000000003eb57c6 = 1;
  }
  if ((*(long *)(puVar27 + 0x38) != 0) &&
     (lVar10 = *(long *)(*(long *)(puVar27 + 0x38) + 0x20), lVar10 != 0)) {
    uVar7 = *(uint *)(lVar10 + 0x18);
    if (0 < (int)uVar7) {
      uVar9 = 0;
      do {
        if (uVar7 <= uVar9) goto code_r0x01650b78;
        plVar11 = *(long **)(puVar27 + 0x40);
        if (plVar11 == (long *)0x0) goto code_r0x01650b74;
        lVar34 = lVar10 + (long)(int)uVar9 * 0x10;
        lVar15 = *(long *)(lVar34 + 0x20);
        lVar34 = *(long *)(lVar34 + 0x28);
        if (lVar15 != 0) {
          puVar21 = (undefined1 *)func_0x00f78adc(lVar15,*(undefined8 *)(*plVar11 + 0x40));
          if (puVar21 == (undefined1 *)0x0) goto code_r0x01650b80;
        }
        if (*(uint *)(plVar11 + 3) <= uVar9) goto code_r0x01650b78;
        plVar11[(long)(int)uVar9 + 4] = lVar15;
        if (lVar34 == 0) goto code_r0x01650b74;
        uVar7 = *(uint *)(lVar34 + 0x18);
        if (0 < (int)uVar7) {
          uVar33 = 0;
          do {
            if (uVar7 <= uVar33) goto code_r0x01650b78;
            lVar25 = lVar34 + (long)(int)uVar33 * 0x10;
            lVar14 = *(long *)(lVar25 + 0x20);
            if (lVar14 == 0) goto code_r0x01650b74;
            lVar25 = *(long *)(lVar25 + 0x28);
            puVar21 = (undefined1 *)/*System.String$$Equals*/ func_0x029caa48(lVar14,auVar43._8_8_,5,0);
            if ((int)puVar21 != 0) {
              if ((lVar25 == 0) || (*(long *)(lVar25 + 0x138) == 0)) goto code_r0x01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar25 + 0x138),uRam0000000003d3c140);
              if (*(long *)(lVar25 + 0x138) == 0) goto code_r0x01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar25 + 0x138),lVar15,uRam0000000003d3c138);
              plVar11 = *(long **)(puVar27 + 0x40);
              if (plVar11 == (long *)0x0) goto code_r0x01650b74;
              puVar21 = (undefined1 *)func_0x00f78adc(lVar25,*(undefined8 *)(*plVar11 + 0x40));
              if (puVar21 == (undefined1 *)0x0) goto code_r0x01650b80;
              if (*(uint *)(plVar11 + 3) <= uVar9) goto code_r0x01650b78;
              plVar11[(long)(int)uVar9 + 4] = lVar25;
            }
            uVar33 = uVar33 + 1;
            uVar7 = *(uint *)(lVar34 + 0x18);
          } while ((int)uVar33 < (int)uVar7);
        }
        uVar9 = uVar9 + 1;
        uVar7 = *(uint *)(lVar10 + 0x18);
      } while ((int)uVar9 < (int)uVar7);
    }
    if ((*(long *)(puVar27 + 0x38) != 0) &&
       (lVar10 = *(long *)(*(long *)(puVar27 + 0x38) + 0x28), lVar10 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x18);
      if (0 < (int)uVar7) {
        uVar9 = 0;
        do {
          if (uVar7 <= uVar9) goto code_r0x01650b78;
          plVar11 = *(long **)(puVar27 + 0x48);
          if (plVar11 == (long *)0x0) goto code_r0x01650b74;
          lVar34 = lVar10 + (long)(int)uVar9 * 0x10;
          lVar15 = *(long *)(lVar34 + 0x20);
          lVar34 = *(long *)(lVar34 + 0x28);
          if (lVar15 != 0) {
            puVar21 = (undefined1 *)func_0x00f78adc(lVar15,*(undefined8 *)(*plVar11 + 0x40));
            if (puVar21 == (undefined1 *)0x0) goto code_r0x01650b80;
          }
          if (*(uint *)(plVar11 + 3) <= uVar9) goto code_r0x01650b78;
          plVar11[(long)(int)uVar9 + 4] = lVar15;
          if (lVar34 == 0) goto code_r0x01650b74;
          uVar7 = *(uint *)(lVar34 + 0x18);
          if (0 < (int)uVar7) {
            uVar33 = 0;
            do {
              if (uVar7 <= uVar33) goto code_r0x01650b78;
              lVar15 = lVar34 + (long)(int)uVar33 * 0x10;
              lVar25 = *(long *)(lVar15 + 0x20);
              if (lVar25 == 0) goto code_r0x01650b74;
              lVar15 = *(long *)(lVar15 + 0x28);
              puVar21 = (undefined1 *)/*System.String$$Equals*/ func_0x029caa48(lVar25,auVar43._8_8_,5,0);
              if ((int)puVar21 != 0) {
                plVar11 = *(long **)(puVar27 + 0x48);
                if (plVar11 == (long *)0x0) goto code_r0x01650b74;
                if (lVar15 != 0) {
                  puVar21 = (undefined1 *)func_0x00f78adc(lVar15,*(undefined8 *)(*plVar11 + 0x40));
                  if (puVar21 == (undefined1 *)0x0) goto code_r0x01650b80;
                }
                if (*(uint *)(plVar11 + 3) <= uVar9) goto code_r0x01650b78;
                plVar11[(long)(int)uVar9 + 4] = lVar15;
              }
              uVar33 = uVar33 + 1;
              uVar7 = *(uint *)(lVar34 + 0x18);
            } while ((int)uVar33 < (int)uVar7);
          }
          uVar9 = uVar9 + 1;
          uVar7 = *(uint *)(lVar10 + 0x18);
        } while ((int)uVar9 < (int)uVar7);
      }
      return puVar21;
    }
  }
code_r0x01650b74:
  func_0x00f78af4();
code_r0x01650b78:
  uVar13 = func_0x00f78b24();
code_r0x01650b84:
  puVar21 = (undefined1 *)func_0x00f78ac0(uVar13,0);
  return puVar21;
}



// ============================================================
// RVA: 0x1519394 | Atlas.UI.UIChallengeProgressBehaviour.UpdateFillBar
// ============================================================

/* WARNING: Possible PIC construction at 0x0151988c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015198d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015198dc) */
/* WARNING: Removing unreachable block (ram,0x015198e4) */
/* WARNING: Removing unreachable block (ram,0x01519890) */
/* WARNING: Removing unreachable block (ram,0x015198a8) */
/* WARNING: Removing unreachable block (ram,0x01519914) */
/* WARNING: Removing unreachable block (ram,0x01519934) */
/* WARNING: Removing unreachable block (ram,0x015199c4) */
/* WARNING: Removing unreachable block (ram,0x01519a40) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

ulong Atlas_UI_UIChallengeProgressBehaviour__UpdateFillBar(long param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  code *pcVar9;
  float extraout_s0;
  undefined1 auVar10 [16];
  ulong uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  uVar4 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
  if (extraout_s0 == *(float *)(param_1 + 0x8c)) {
    return uVar4;
  }
  lVar5 = *(long *)(param_1 + 0x38);
  if ((int)param_2 == 0) {
    if (lVar5 != 0) {
      uVar4 = Atlas_UI_SlantFillBar__SetProgress(extraout_s0,lVar5,0);
      goto LAB_015193f4;
    }
  }
  else if (lVar5 != 0) {
    uVar4 = Atlas_UI_SlantFillBar__SetTargetProgress(extraout_s0,lVar5,0,0);
LAB_015193f4:
    *(float *)(param_1 + 0x8c) = extraout_s0;
    return uVar4;
  }
  auVar10 = func_0x00f78af4();
  uVar4 = auVar10._8_8_;
  puStack_38 = &Atlas_UI_UIChallengeProgressBehaviourContainer__SetChallengeComplete;
  lVar5 = *(long *)(auVar10._0_8_ + 0x18);
  puStack_40 = &stack0xfffffffffffffff0;
  if ((lVar5 == 0) || (uVar4 == 0)) {
    uVar4 = func_0x00f78af4();
    return uVar4;
  }
  puVar1 = (ulong *)&stack0xffffffffffffff80;
  puStack_38 = &Atlas_UI_UIChallengeProgressBehaviourContainer__SetChallengeComplete;
  uVar6 = uVar4;
  uStack_50 = param_2;
  lStack_48 = param_1;
  if ((bRam0000000003eb4dd0 & 1) == 0) {
    func_0x00f78a20(*(undefined4 *)(lVar5 + 0x58),0x3d25428);
    func_0x00f78a20(0x3d5e6d8);
    func_0x00f78a20(0x3d5e710);
    func_0x00f78a20(0x3d5e7b0);
    func_0x00f78a20(0x3d5e7a0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5f6c8);
    func_0x00f78a20(0x3d5f6d0);
    func_0x00f78a20(0x3d790e0);
    uVar6 = func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4dd0 = 1;
  }
  uVar8 = uStack_50;
  if (*(char *)(uVar4 + 0x90) != '\0') {
    return uVar6;
  }
  if ((param_3 & 1) == 0) {
    uVar6 = *(ulong *)(uVar4 + 0x50);
    if (uVar6 != 0) {
      puVar1 = &uStack_50;
      if ((*(long *)(uVar6 + 0x20) != 0) &&
         (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(uVar6 + 0x20),0), lVar5 != 0)) {
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,1,0);
        plVar3 = *(long **)(uVar6 + 0x20);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
          plVar3 = *(long **)(uVar6 + 0x20);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
            if ((*(long *)(uVar6 + 0x28) != 0) &&
               (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(uVar6 + 0x28),0), lVar5 != 0)) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,1,0);
              plVar3 = *(long **)(uVar6 + 0x20);
              if (plVar3 != (long *)0x0) {
                (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
                plVar3 = *(long **)(uVar6 + 0x28);
                if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015124f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar4 = (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
                  return uVar4;
                }
              }
            }
          }
        }
      }
      pcVar9 = Atlas_UI_UIAnimatingFlagsBehaviour__OnDestroy;
      lVar5 = func_0x00f78af4();
      goto DG_Tweening_ShortcutExtensions__DOKill;
    }
  }
  else {
    *(undefined1 *)(uVar4 + 0x90) = 1;
    Atlas_Audio_UIAudio__Play(/*STR('event:/UI/HUD/ChallengeComplete')*/ uRam0000000003d790e0);
    if (*(long *)(uVar4 + 0x50) != 0) {
      uVar6 = Atlas_UI_UIAnimatingFlagsBehaviour__PlayCompleteAnimation
                        (0,*(long *)(uVar4 + 0x50),/*STR('')*/ uRam0000000003d65d08);
      *(ulong *)(uVar4 + 0x98) = uVar6;
      uVar7 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(0,0x3f800000,0x3f800000,*(undefined4 *)(uVar4 + 0x58),
                              *(undefined8 *)(uVar4 + 0x28),0);
      lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar7,*(undefined4 *)(uVar4 + 0x5c),uRam0000000003d5e7a8);
      if (((((uVar6 != 0) && (*(char *)(uVar6 + 0xe8) != '\0')) && (lVar5 != 0)) &&
          ((*(char *)(uVar6 + 0x100) == '\0' && (*(char *)(lVar5 + 0xe8) != '\0')))) &&
         (*(char *)(lVar5 + 0xe9) == '\0')) {
        /*DG.Tweening.Sequence$$DoInsert*/ func_0x016a231c(*(undefined4 *)(uVar6 + 0xa0),uVar6,lVar5,0);
      }
      return uVar6;
    }
  }
  pcVar9 = (code *)&Atlas_UI_UIChallengeProgressBehaviour__OnDestroy;
  lVar5 = func_0x00f78af4();
  uVar6 = uVar4;
  uVar8 = param_3;
  unaff_x21 = 0x3eb4000;
DG_Tweening_ShortcutExtensions__DOKill:
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = unaff_x21;
  *(ulong *)((long)puVar1 + -0x20) = uVar8;
  *(ulong *)((long)puVar1 + -0x18) = uVar6;
  *(undefined1 ***)((long)puVar1 + -0x10) = &puStack_40;
  *(code **)((long)puVar1 + -8) = pcVar9;
  if ((bRam0000000003eb5c29 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    bRam0000000003eb5c29 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)((long)puVar1 + -0x30) = *(undefined8 *)((long)puVar1 + -0x30);
  *(undefined8 *)((long)puVar1 + -0x28) = *(undefined8 *)((long)puVar1 + -0x28);
  *(undefined8 *)((long)puVar1 + -0x20) = *(undefined8 *)((long)puVar1 + -0x20);
  *(undefined8 *)((long)puVar1 + -0x18) = *(undefined8 *)((long)puVar1 + -0x18);
  *(undefined8 *)((long)puVar1 + -0x10) = *(undefined8 *)((long)puVar1 + -0x10);
  *(undefined8 *)((long)puVar1 + -8) = *(undefined8 *)((long)puVar1 + -8);
  if ((bRam0000000003eb5af0 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5af0 = 1;
  }
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar5,0,0,0,0);
    uVar4 = (ulong)uVar2;
  }
  return uVar4;
}



// ============================================================
// RVA: 0x1519440 | Atlas.UI.UIChallengeProgressBehaviour.add_OnStartResize
// ============================================================

ulong Atlas_UI_UIChallengeProgressBehaviour__add_OnStartResize(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4dcb & 1) == 0) {
    func_0x00f78a20(0x3d1b5b8);
    bRam0000000003eb4dcb = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x18);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIChallengeProgressBehaviour>_TypeInfo*/ lRam0000000003d1b5b8))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x18),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4dcc & 1) == 0) {
    func_0x00f78a20(0x3d1b5b8);
    bRam0000000003eb4dcc = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x18);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIChallengeProgressBehaviour>_TypeInfo*/ lRam0000000003d1b5b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4dcd & 1) == 0) {
    func_0x00f78a20(0x3d1b5b8);
    bRam0000000003eb4dcd = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x20);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIChallengeProgressBehaviour>_TypeInfo*/ lRam0000000003d1b5b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4dce & 1) == 0) {
    func_0x00f78a20(0x3d1b5b8);
    bRam0000000003eb4dce = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x20);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIChallengeProgressBehaviour>_TypeInfo*/ lRam0000000003d1b5b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return (ulong)*(byte *)(lVar4 + 0x90);
}



// ============================================================
// RVA: 0x15194e0 | Atlas.UI.UIChallengeProgressBehaviour.remove_OnStartResize
// ============================================================

ulong Atlas_UI_UIChallengeProgressBehaviour__remove_OnStartResize(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4dcc & 1) == 0) {
    func_0x00f78a20(0x3d1b5b8);
    bRam0000000003eb4dcc = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x18);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIChallengeProgressBehaviour>_TypeInfo*/ lRam0000000003d1b5b8))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x18),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4dcd & 1) == 0) {
    func_0x00f78a20(0x3d1b5b8);
    bRam0000000003eb4dcd = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x20);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIChallengeProgressBehaviour>_TypeInfo*/ lRam0000000003d1b5b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4dce & 1) == 0) {
    func_0x00f78a20(0x3d1b5b8);
    bRam0000000003eb4dce = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x20);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIChallengeProgressBehaviour>_TypeInfo*/ lRam0000000003d1b5b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return (ulong)*(byte *)(lVar4 + 0x90);
}



// ============================================================
// RVA: 0x1519580 | Atlas.UI.UIChallengeProgressBehaviour.add_OnCompleteResize
// ============================================================

ulong Atlas_UI_UIChallengeProgressBehaviour__add_OnCompleteResize(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4dcd & 1) == 0) {
    func_0x00f78a20(0x3d1b5b8);
    bRam0000000003eb4dcd = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x20);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIChallengeProgressBehaviour>_TypeInfo*/ lRam0000000003d1b5b8))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x20),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4dce & 1) == 0) {
    func_0x00f78a20(0x3d1b5b8);
    bRam0000000003eb4dce = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x20);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIChallengeProgressBehaviour>_TypeInfo*/ lRam0000000003d1b5b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return (ulong)*(byte *)(lVar4 + 0x90);
}



// ============================================================
// RVA: 0x1519620 | Atlas.UI.UIChallengeProgressBehaviour.remove_OnCompleteResize
// ============================================================

ulong Atlas_UI_UIChallengeProgressBehaviour__remove_OnCompleteResize
                (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((bRam0000000003eb4dce & 1) == 0) {
    func_0x00f78a20(0x3d1b5b8);
    bRam0000000003eb4dce = 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x20);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIChallengeProgressBehaviour>_TypeInfo*/ lRam0000000003d1b5b8))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x20),plVar2,uVar5);
    bVar1 = uVar5 == uVar3;
    uVar5 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return (ulong)*(byte *)(lVar4 + 0x90);
}



// ============================================================
// RVA: 0x15196c0 | Atlas.UI.UIChallengeProgressBehaviour.get_Completed
// ============================================================

undefined1 Atlas_UI_UIChallengeProgressBehaviour__get_Completed(long param_1)

{
  return *(undefined1 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x15196c8 | Atlas.UI.UIChallengeProgressBehaviour.get_SlantFillBar
// ============================================================

undefined8 Atlas_UI_UIChallengeProgressBehaviour__get_SlantFillBar(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x15196d0 | Atlas.UI.UIChallengeProgressBehaviour.Awake
// ============================================================

void Atlas_UI_UIChallengeProgressBehaviour__Awake(long param_1)

{
  long *plVar1;
  
  if ((bRam0000000003eb4dcf & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    bRam0000000003eb4dcf = 1;
  }
  plVar1 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else if (*plVar1 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
    plVar1 = (long *)0x0;
  }
  *(long **)(param_1 + 0xa0) = plVar1;
  return;
}



// ============================================================
// RVA: 0x1519740 | Atlas.UI.UIChallengeProgressBehaviour.SetComplete
// ============================================================

/* WARNING: Possible PIC construction at 0x0151988c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015198d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015198dc) */
/* WARNING: Removing unreachable block (ram,0x015198e4) */
/* WARNING: Removing unreachable block (ram,0x01519890) */
/* WARNING: Removing unreachable block (ram,0x015198a8) */
/* WARNING: Removing unreachable block (ram,0x01519914) */
/* WARNING: Removing unreachable block (ram,0x01519934) */
/* WARNING: Removing unreachable block (ram,0x015199c4) */
/* WARNING: Removing unreachable block (ram,0x01519a40) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

ulong Atlas_UI_UIChallengeProgressBehaviour__SetComplete(ulong param_1,ulong param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  code *pcVar7;
  
  puVar1 = &stack0xffffffffffffffb0;
  uVar4 = param_1;
  if ((bRam0000000003eb4dd0 & 1) == 0) {
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6d8);
    func_0x00f78a20(0x3d5e710);
    func_0x00f78a20(0x3d5e7b0);
    func_0x00f78a20(0x3d5e7a0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5f6c8);
    func_0x00f78a20(0x3d5f6d0);
    func_0x00f78a20(0x3d790e0);
    uVar4 = func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4dd0 = 1;
  }
  if (*(char *)(param_1 + 0x90) != '\0') {
    return uVar4;
  }
  if ((param_2 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 0x50);
    if (uVar4 != 0) {
      puVar1 = &stack0xffffffffffffffe0;
      if ((*(long *)(uVar4 + 0x20) != 0) &&
         (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(uVar4 + 0x20),0), lVar6 != 0)) {
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,1,0);
        plVar3 = *(long **)(uVar4 + 0x20);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
          plVar3 = *(long **)(uVar4 + 0x20);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
            if ((*(long *)(uVar4 + 0x28) != 0) &&
               (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(uVar4 + 0x28),0), lVar6 != 0)) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,1,0);
              plVar3 = *(long **)(uVar4 + 0x20);
              if (plVar3 != (long *)0x0) {
                (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
                plVar3 = *(long **)(uVar4 + 0x28);
                if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015124f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar4 = (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
                  return uVar4;
                }
              }
            }
          }
        }
      }
      pcVar7 = Atlas_UI_UIAnimatingFlagsBehaviour__OnDestroy;
      lVar6 = func_0x00f78af4();
      goto DG_Tweening_ShortcutExtensions__DOKill;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x90) = 1;
    Atlas_Audio_UIAudio__Play(/*STR('event:/UI/HUD/ChallengeComplete')*/ uRam0000000003d790e0);
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar4 = Atlas_UI_UIAnimatingFlagsBehaviour__PlayCompleteAnimation
                        (0,*(long *)(param_1 + 0x50),/*STR('')*/ uRam0000000003d65d08);
      *(ulong *)(param_1 + 0x98) = uVar4;
      uVar5 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(0,0x3f800000,0x3f800000,*(undefined4 *)(param_1 + 0x58),
                              *(undefined8 *)(param_1 + 0x28),0);
      lVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,*(undefined4 *)(param_1 + 0x5c),uRam0000000003d5e7a8);
      if (((((uVar4 != 0) && (*(char *)(uVar4 + 0xe8) != '\0')) && (lVar6 != 0)) &&
          ((*(char *)(uVar4 + 0x100) == '\0' && (*(char *)(lVar6 + 0xe8) != '\0')))) &&
         (*(char *)(lVar6 + 0xe9) == '\0')) {
        /*DG.Tweening.Sequence$$DoInsert*/ func_0x016a231c(*(undefined4 *)(uVar4 + 0xa0),uVar4,lVar6,0);
      }
      return uVar4;
    }
  }
  pcVar7 = (code *)&Atlas_UI_UIChallengeProgressBehaviour__OnDestroy;
  lVar6 = func_0x00f78af4();
  uVar4 = param_1;
  unaff_x20 = param_2;
  unaff_x21 = 0x3eb4000;
DG_Tweening_ShortcutExtensions__DOKill:
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(ulong *)(puVar1 + -0x20) = unaff_x20;
  *(ulong *)(puVar1 + -0x18) = uVar4;
  *(undefined1 **)(puVar1 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar1 + -8) = pcVar7;
  if ((bRam0000000003eb5c29 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    bRam0000000003eb5c29 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(puVar1 + -0x30) = *(undefined8 *)(puVar1 + -0x30);
  *(undefined8 *)(puVar1 + -0x28) = *(undefined8 *)(puVar1 + -0x28);
  *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
  *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
  *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  if ((bRam0000000003eb5af0 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5af0 = 1;
  }
  if (lVar6 == 0) {
    uVar4 = 0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar6,0,0,0,0);
    uVar4 = (ulong)uVar2;
  }
  return uVar4;
}



// ============================================================
// RVA: 0x1519a90 | Atlas.UI.UIChallengeProgressBehaviour.OnDestroy
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

undefined4 Atlas_UI_UIChallengeProgressBehaviour__OnDestroy(long param_1)

{
  undefined4 uVar1;
  undefined8 in_x7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  if ((bRam0000000003eb5c29 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    bRam0000000003eb5c29 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb5af0 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5af0 = 1;
  }
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,param_1,0,0,0,0,in_x7,unaff_x22,unaff_x21,unaff_x20,unaff_x19,
                            unaff_x29,unaff_x30);
  }
  return uVar1;
}



// ============================================================
// RVA: 0x1519a9c | Atlas.UI.UIChallengeProgressBehaviour.ResetValues
// ============================================================

/* WARNING: Possible PIC construction at 0x01519af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015191a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165026c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151923c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151925c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151927c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151988c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015198d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01512468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015124bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151246c) */
/* WARNING: Removing unreachable block (ram,0x01512474) */
/* WARNING: Removing unreachable block (ram,0x0151248c) */
/* WARNING: Removing unreachable block (ram,0x015124a8) */
/* WARNING: Removing unreachable block (ram,0x015124b4) */
/* WARNING: Removing unreachable block (ram,0x01519914) */
/* WARNING: Removing unreachable block (ram,0x01519934) */
/* WARNING: Removing unreachable block (ram,0x015199c4) */
/* WARNING: Removing unreachable block (ram,0x01519a40) */
/* WARNING: Removing unreachable block (ram,0x015198dc) */
/* WARNING: Removing unreachable block (ram,0x015198e4) */
/* WARNING: Removing unreachable block (ram,0x01519890) */
/* WARNING: Removing unreachable block (ram,0x015198a8) */
/* WARNING: Removing unreachable block (ram,0x01519280) */
/* WARNING: Removing unreachable block (ram,0x01519288) */
/* WARNING: Removing unreachable block (ram,0x015192a4) */
/* WARNING: Removing unreachable block (ram,0x015192b4) */
/* WARNING: Removing unreachable block (ram,0x01519260) */
/* WARNING: Removing unreachable block (ram,0x01519268) */
/* WARNING: Removing unreachable block (ram,0x01519274) */
/* WARNING: Removing unreachable block (ram,0x01519240) */
/* WARNING: Removing unreachable block (ram,0x01519248) */
/* WARNING: Removing unreachable block (ram,0x01519254) */
/* WARNING: Removing unreachable block (ram,0x01650270) */
/* WARNING: Removing unreachable block (ram,0x01650280) */
/* WARNING: Removing unreachable block (ram,0x015191ac) */
/* WARNING: Removing unreachable block (ram,0x015191b4) */
/* WARNING: Removing unreachable block (ram,0x015191cc) */
/* WARNING: Removing unreachable block (ram,0x0164ff98) */
/* WARNING: Removing unreachable block (ram,0x0164ffc4) */
/* WARNING: Removing unreachable block (ram,0x0164ffd8) */
/* WARNING: Removing unreachable block (ram,0x0164ffe0) */
/* WARNING: Removing unreachable block (ram,0x0164ffe4) */
/* WARNING: Removing unreachable block (ram,0x01650008) */
/* WARNING: Removing unreachable block (ram,0x01650014) */
/* WARNING: Removing unreachable block (ram,0x01650030) */
/* WARNING: Removing unreachable block (ram,0x0165003c) */
/* WARNING: Removing unreachable block (ram,0x01650050) */
/* WARNING: Removing unreachable block (ram,0x01650058) */
/* WARNING: Removing unreachable block (ram,0x01650194) */
/* WARNING: Removing unreachable block (ram,0x016501c8) */
/* WARNING: Removing unreachable block (ram,0x016501e8) */
/* WARNING: Removing unreachable block (ram,0x016501f4) */
/* WARNING: Removing unreachable block (ram,0x016501fc) */
/* WARNING: Removing unreachable block (ram,0x01650200) */
/* WARNING: Removing unreachable block (ram,0x01650298) */
/* WARNING: Removing unreachable block (ram,0x0165020c) */
/* WARNING: Removing unreachable block (ram,0x01650218) */
/* WARNING: Removing unreachable block (ram,0x01650220) */
/* WARNING: Removing unreachable block (ram,0x01650228) */
/* WARNING: Removing unreachable block (ram,0x016502ac) */
/* WARNING: Removing unreachable block (ram,0x01650234) */
/* WARNING: Removing unreachable block (ram,0x0165024c) */
/* WARNING: Removing unreachable block (ram,0x01650254) */
/* WARNING: Removing unreachable block (ram,0x01650258) */
/* WARNING: Removing unreachable block (ram,0x016502b0) */
/* WARNING: Removing unreachable block (ram,0x016502f4) */
/* WARNING: Removing unreachable block (ram,0x0165032c) */
/* WARNING: Removing unreachable block (ram,0x01650338) */
/* WARNING: Removing unreachable block (ram,0x01650340) */
/* WARNING: Removing unreachable block (ram,0x01650348) */
/* WARNING: Removing unreachable block (ram,0x01650354) */
/* WARNING: Removing unreachable block (ram,0x01650384) */
/* WARNING: Removing unreachable block (ram,0x0165038c) */
/* WARNING: Removing unreachable block (ram,0x01650390) */
/* WARNING: Removing unreachable block (ram,0x016503b8) */
/* WARNING: Removing unreachable block (ram,0x016503c0) */
/* WARNING: Removing unreachable block (ram,0x016503c4) */
/* WARNING: Removing unreachable block (ram,0x01650414) */
/* WARNING: Removing unreachable block (ram,0x0165041c) */
/* WARNING: Removing unreachable block (ram,0x01650420) */
/* WARNING: Removing unreachable block (ram,0x0165043c) */
/* WARNING: Removing unreachable block (ram,0x01650444) */
/* WARNING: Removing unreachable block (ram,0x01650450) */
/* WARNING: Removing unreachable block (ram,0x01650458) */
/* WARNING: Removing unreachable block (ram,0x01650460) */
/* WARNING: Removing unreachable block (ram,0x0165048c) */
/* WARNING: Removing unreachable block (ram,0x016504e4) */
/* WARNING: Removing unreachable block (ram,0x01650514) */
/* WARNING: Removing unreachable block (ram,0x01650540) */
/* WARNING: Removing unreachable block (ram,0x01650548) */
/* WARNING: Removing unreachable block (ram,0x0165055c) */
/* WARNING: Removing unreachable block (ram,0x01650570) */
/* WARNING: Removing unreachable block (ram,0x01650584) */
/* WARNING: Removing unreachable block (ram,0x01650598) */
/* WARNING: Removing unreachable block (ram,0x016505c4) */
/* WARNING: Removing unreachable block (ram,0x01650614) */
/* WARNING: Removing unreachable block (ram,0x0165064c) */
/* WARNING: Removing unreachable block (ram,0x01650678) */
/* WARNING: Removing unreachable block (ram,0x01650694) */
/* WARNING: Removing unreachable block (ram,0x016506a0) */
/* WARNING: Removing unreachable block (ram,0x016506b4) */
/* WARNING: Removing unreachable block (ram,0x016506f8) */
/* WARNING: Removing unreachable block (ram,0x016506bc) */
/* WARNING: Removing unreachable block (ram,0x01650704) */
/* WARNING: Removing unreachable block (ram,0x01650738) */
/* WARNING: Removing unreachable block (ram,0x01650794) */
/* WARNING: Removing unreachable block (ram,0x0165079c) */
/* WARNING: Removing unreachable block (ram,0x016507b0) */
/* WARNING: Removing unreachable block (ram,0x016507bc) */
/* WARNING: Removing unreachable block (ram,0x016507cc) */
/* WARNING: Removing unreachable block (ram,0x016507d4) */
/* WARNING: Removing unreachable block (ram,0x016507dc) */
/* WARNING: Removing unreachable block (ram,0x016507e4) */
/* WARNING: Removing unreachable block (ram,0x016507fc) */
/* WARNING: Removing unreachable block (ram,0x01650804) */
/* WARNING: Removing unreachable block (ram,0x0165080c) */
/* WARNING: Removing unreachable block (ram,0x01650838) */
/* WARNING: Removing unreachable block (ram,0x016508d8) */
/* WARNING: Removing unreachable block (ram,0x0165090c) */
/* WARNING: Removing unreachable block (ram,0x0165092c) */
/* WARNING: Removing unreachable block (ram,0x01650934) */
/* WARNING: Removing unreachable block (ram,0x0165093c) */
/* WARNING: Removing unreachable block (ram,0x01650948) */
/* WARNING: Removing unreachable block (ram,0x0165094c) */
/* WARNING: Removing unreachable block (ram,0x01650954) */
/* WARNING: Removing unreachable block (ram,0x0165095c) */
/* WARNING: Removing unreachable block (ram,0x01650968) */
/* WARNING: Removing unreachable block (ram,0x0165097c) */
/* WARNING: Removing unreachable block (ram,0x01650988) */
/* WARNING: Removing unreachable block (ram,0x01650998) */
/* WARNING: Removing unreachable block (ram,0x016509a4) */
/* WARNING: Removing unreachable block (ram,0x016509a8) */
/* WARNING: Removing unreachable block (ram,0x016509b0) */
/* WARNING: Removing unreachable block (ram,0x016509bc) */
/* WARNING: Removing unreachable block (ram,0x016509d4) */
/* WARNING: Removing unreachable block (ram,0x016509d8) */
/* WARNING: Removing unreachable block (ram,0x016509e0) */
/* WARNING: Removing unreachable block (ram,0x016509f8) */
/* WARNING: Removing unreachable block (ram,0x01650a14) */
/* WARNING: Removing unreachable block (ram,0x01650a28) */
/* WARNING: Removing unreachable block (ram,0x01650a34) */
/* WARNING: Removing unreachable block (ram,0x01650a3c) */
/* WARNING: Removing unreachable block (ram,0x01650a4c) */
/* WARNING: Removing unreachable block (ram,0x01650a5c) */
/* WARNING: Removing unreachable block (ram,0x01650a64) */
/* WARNING: Removing unreachable block (ram,0x01650a6c) */
/* WARNING: Removing unreachable block (ram,0x01650a78) */
/* WARNING: Removing unreachable block (ram,0x01650a7c) */
/* WARNING: Removing unreachable block (ram,0x01650a84) */
/* WARNING: Removing unreachable block (ram,0x01650a8c) */
/* WARNING: Removing unreachable block (ram,0x01650a98) */
/* WARNING: Removing unreachable block (ram,0x01650aac) */
/* WARNING: Removing unreachable block (ram,0x01650ab8) */
/* WARNING: Removing unreachable block (ram,0x01650ac8) */
/* WARNING: Removing unreachable block (ram,0x01650ad4) */
/* WARNING: Removing unreachable block (ram,0x01650ad8) */
/* WARNING: Removing unreachable block (ram,0x01650ae0) */
/* WARNING: Removing unreachable block (ram,0x01650aec) */
/* WARNING: Removing unreachable block (ram,0x01650b04) */
/* WARNING: Removing unreachable block (ram,0x01650b74) */
/* WARNING: Removing unreachable block (ram,0x01650b0c) */
/* WARNING: Removing unreachable block (ram,0x01650b10) */
/* WARNING: Removing unreachable block (ram,0x01650b80) */
/* WARNING: Removing unreachable block (ram,0x01650b24) */
/* WARNING: Removing unreachable block (ram,0x01650b78) */
/* WARNING: Removing unreachable block (ram,0x01650b84) */
/* WARNING: Removing unreachable block (ram,0x01650b30) */
/* WARNING: Removing unreachable block (ram,0x01650b38) */
/* WARNING: Removing unreachable block (ram,0x01650b48) */
/* WARNING: Removing unreachable block (ram,0x01650b58) */
/* WARNING: Removing unreachable block (ram,0x01650848) */
/* WARNING: Removing unreachable block (ram,0x016508c0) */
/* WARNING: Removing unreachable block (ram,0x01650898) */
/* WARNING: Removing unreachable block (ram,0x0165082c) */
/* WARNING: Removing unreachable block (ram,0x016506c0) */
/* WARNING: Removing unreachable block (ram,0x016506e0) */
/* WARNING: Removing unreachable block (ram,0x016505cc) */
/* WARNING: Removing unreachable block (ram,0x016505f4) */
/* WARNING: Removing unreachable block (ram,0x016505b4) */
/* WARNING: Removing unreachable block (ram,0x016505f8) */
/* WARNING: Removing unreachable block (ram,0x016504a0) */
/* WARNING: Removing unreachable block (ram,0x016504d4) */
/* WARNING: Removing unreachable block (ram,0x016504b8) */
/* WARNING: Removing unreachable block (ram,0x029cbbf0) */
/* WARNING: Removing unreachable block (ram,0x029cbc18) */
/* WARNING: Removing unreachable block (ram,0x029cbc2c) */
/* WARNING: Removing unreachable block (ram,0x029cbca0) */
/* WARNING: Removing unreachable block (ram,0x029cbc30) */
/* WARNING: Removing unreachable block (ram,0x029cbcac) */
/* WARNING: Removing unreachable block (ram,0x029cbcb4) */
/* WARNING: Removing unreachable block (ram,0x029cbc3c) */
/* WARNING: Removing unreachable block (ram,0x029cbce4) */
/* WARNING: Removing unreachable block (ram,0x029cbc40) */
/* WARNING: Removing unreachable block (ram,0x029cbcf0) */
/* WARNING: Removing unreachable block (ram,0x029cbcf8) */
/* WARNING: Removing unreachable block (ram,0x029cbd24) */
/* WARNING: Removing unreachable block (ram,0x029cbc4c) */
/* WARNING: Removing unreachable block (ram,0x029cbc78) */
/* WARNING: Removing unreachable block (ram,0x029cbc50) */
/* WARNING: Removing unreachable block (ram,0x029cbc54) */
/* WARNING: Removing unreachable block (ram,0x029cbc8c) */
/* WARNING: Removing unreachable block (ram,0x029cbc5c) */
/* WARNING: Removing unreachable block (ram,0x029cbd60) */
/* WARNING: Removing unreachable block (ram,0x029cbdb8) */
/* WARNING: Removing unreachable block (ram,0x029cbdc0) */
/* WARNING: Removing unreachable block (ram,0x029cbdd0) */
/* WARNING: Removing unreachable block (ram,0x029cbdc8) */
/* WARNING: Removing unreachable block (ram,0x029cbf24) */
/* WARNING: Removing unreachable block (ram,0x029cbf54) */
/* WARNING: Removing unreachable block (ram,0x029cc044) */
/* WARNING: Removing unreachable block (ram,0x029cbf60) */
/* WARNING: Removing unreachable block (ram,0x029cbf64) */
/* WARNING: Removing unreachable block (ram,0x029cbf74) */
/* WARNING: Removing unreachable block (ram,0x029cbf7c) */
/* WARNING: Removing unreachable block (ram,0x029cbf88) */
/* WARNING: Removing unreachable block (ram,0x029cbf8c) */
/* WARNING: Removing unreachable block (ram,0x029cbf94) */
/* WARNING: Removing unreachable block (ram,0x029cbfb4) */
/* WARNING: Removing unreachable block (ram,0x029cbfa4) */
/* WARNING: Removing unreachable block (ram,0x029cbfb0) */
/* WARNING: Removing unreachable block (ram,0x029cbfb8) */
/* WARNING: Removing unreachable block (ram,0x029cbfc0) */
/* WARNING: Removing unreachable block (ram,0x029cbfd0) */
/* WARNING: Removing unreachable block (ram,0x029cc04c) */
/* WARNING: Removing unreachable block (ram,0x029cbfd4) */
/* WARNING: Removing unreachable block (ram,0x029cbf4c) */
/* WARNING: Removing unreachable block (ram,0x029cbfd8) */
/* WARNING: Removing unreachable block (ram,0x029cbfe4) */
/* WARNING: Removing unreachable block (ram,0x029cbff4) */
/* WARNING: Removing unreachable block (ram,0x029cbffc) */
/* WARNING: Removing unreachable block (ram,0x029cc008) */
/* WARNING: Removing unreachable block (ram,0x029cc00c) */
/* WARNING: Removing unreachable block (ram,0x029cc070) */
/* WARNING: Removing unreachable block (ram,0x029cc07c) */
/* WARNING: Removing unreachable block (ram,0x029cc084) */
/* WARNING: Removing unreachable block (ram,0x029cc094) */
/* WARNING: Removing unreachable block (ram,0x029cbdd8) */
/* WARNING: Removing unreachable block (ram,0x029cbe00) */
/* WARNING: Removing unreachable block (ram,0x029cbe14) */
/* WARNING: Removing unreachable block (ram,0x029cbe30) */
/* WARNING: Removing unreachable block (ram,0x029cbe88) */
/* WARNING: Removing unreachable block (ram,0x029cbe38) */
/* WARNING: Removing unreachable block (ram,0x029cbe3c) */
/* WARNING: Removing unreachable block (ram,0x029cbe58) */
/* WARNING: Removing unreachable block (ram,0x029cbe60) */
/* WARNING: Removing unreachable block (ram,0x029cbe64) */
/* WARNING: Removing unreachable block (ram,0x029cbef0) */
/* WARNING: Removing unreachable block (ram,0x029cbe74) */
/* WARNING: Removing unreachable block (ram,0x029cbe84) */
/* WARNING: Removing unreachable block (ram,0x029cbe8c) */
/* WARNING: Removing unreachable block (ram,0x029cbf00) */
/* WARNING: Removing unreachable block (ram,0x029cbe90) */
/* WARNING: Removing unreachable block (ram,0x029cbe28) */
/* WARNING: Removing unreachable block (ram,0x029cbe94) */
/* WARNING: Removing unreachable block (ram,0x029cbe98) */
/* WARNING: Removing unreachable block (ram,0x029cbea4) */
/* WARNING: Removing unreachable block (ram,0x029cbec0) */
/* WARNING: Removing unreachable block (ram,0x029cbec8) */
/* WARNING: Removing unreachable block (ram,0x029cbecc) */
/* WARNING: Removing unreachable block (ram,0x029cbee0) */
/* WARNING: Removing unreachable block (ram,0x029cbf04) */
/* WARNING: Removing unreachable block (ram,0x029cc08c) */
/* WARNING: Removing unreachable block (ram,0x029cc014) */
/* WARNING: Removing unreachable block (ram,0x029cc034) */
/* WARNING: Removing unreachable block (ram,0x029cc024) */
/* WARNING: Removing unreachable block (ram,0x029cc030) */
/* WARNING: Removing unreachable block (ram,0x029cc038) */
/* WARNING: Removing unreachable block (ram,0x029cc040) */
/* WARNING: Removing unreachable block (ram,0x029cc050) */
/* WARNING: Removing unreachable block (ram,0x029cef10) */
/* WARNING: Removing unreachable block (ram,0x029cef38) */
/* WARNING: Removing unreachable block (ram,0x029cef4c) */
/* WARNING: Removing unreachable block (ram,0x029cef60) */
/* WARNING: Removing unreachable block (ram,0x029cef7c) */
/* WARNING: Removing unreachable block (ram,0x029cef90) */
/* WARNING: Removing unreachable block (ram,0x029cef64) */
/* WARNING: Removing unreachable block (ram,0x029cbd88) */
/* WARNING: Removing unreachable block (ram,0x0165046c) */
/* WARNING: Removing unreachable block (ram,0x01650064) */
/* WARNING: Removing unreachable block (ram,0x0165007c) */
/* WARNING: Removing unreachable block (ram,0x01650084) */
/* WARNING: Removing unreachable block (ram,0x0165008c) */
/* WARNING: Removing unreachable block (ram,0x01650098) */
/* WARNING: Removing unreachable block (ram,0x016500b4) */
/* WARNING: Removing unreachable block (ram,0x016500c0) */
/* WARNING: Removing unreachable block (ram,0x016500c8) */
/* WARNING: Removing unreachable block (ram,0x016500d0) */
/* WARNING: Removing unreachable block (ram,0x016500dc) */
/* WARNING: Removing unreachable block (ram,0x01650114) */
/* WARNING: Removing unreachable block (ram,0x01650128) */
/* WARNING: Removing unreachable block (ram,0x01650130) */
/* WARNING: Removing unreachable block (ram,0x01650138) */
/* WARNING: Removing unreachable block (ram,0x01650144) */
/* WARNING: Removing unreachable block (ram,0x01650178) */
/* WARNING: Removing unreachable block (ram,0x029d2384) */
/* WARNING: Removing unreachable block (ram,0x016500ec) */
/* WARNING: Removing unreachable block (ram,0x016500f8) */
/* WARNING: Removing unreachable block (ram,0x016500fc) */
/* WARNING: Removing unreachable block (ram,0x0151918c) */
/* WARNING: Removing unreachable block (ram,0x01519194) */
/* WARNING: Removing unreachable block (ram,0x015191a0) */
/* WARNING: Removing unreachable block (ram,0x0151916c) */
/* WARNING: Removing unreachable block (ram,0x01519174) */
/* WARNING: Removing unreachable block (ram,0x01519180) */
/* WARNING: Removing unreachable block (ram,0x01519af4) */
/* WARNING: Removing unreachable block (ram,0x015190fc) */
/* WARNING: Removing unreachable block (ram,0x0151912c) */
/* WARNING: Removing unreachable block (ram,0x0151914c) */
/* WARNING: Removing unreachable block (ram,0x015191e8) */
/* WARNING: Removing unreachable block (ram,0x0151920c) */
/* WARNING: Removing unreachable block (ram,0x01519228) */
/* WARNING: Removing unreachable block (ram,0x015192d4) */
/* WARNING: Removing unreachable block (ram,0x015192f0) */
/* WARNING: Removing unreachable block (ram,0x015192fc) */
/* WARNING: Removing unreachable block (ram,0x01519308) */
/* WARNING: Removing unreachable block (ram,0x01519340) */
/* WARNING: Removing unreachable block (ram,0x01519348) */
/* WARNING: Removing unreachable block (ram,0x01519350) */
/* WARNING: Removing unreachable block (ram,0x01519354) */
/* WARNING: Removing unreachable block (ram,0x0151936c) */
/* WARNING: Removing unreachable block (ram,0x01519390) */
/* WARNING: Removing unreachable block (ram,0x015193bc) */
/* WARNING: Removing unreachable block (ram,0x015193c0) */
/* WARNING: Removing unreachable block (ram,0x015193c4) */
/* WARNING: Removing unreachable block (ram,0x015193e4) */
/* WARNING: Removing unreachable block (ram,0x015193e8) */
/* WARNING: Removing unreachable block (ram,0x015193cc) */
/* WARNING: Removing unreachable block (ram,0x01519408) */
/* WARNING: Removing unreachable block (ram,0x015193d0) */
/* WARNING: Removing unreachable block (ram,0x015193f4) */
/* WARNING: Removing unreachable block (ram,0x015193f8) */
/* WARNING: Removing unreachable block (ram,0x01519374) */
/* WARNING: Removing unreachable block (ram,0x0151940c) */
/* WARNING: Removing unreachable block (ram,0x0151941c) */
/* WARNING: Removing unreachable block (ram,0x01519434) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x01519420) */
/* WARNING: Removing unreachable block (ram,0x01519740) */
/* WARNING: Removing unreachable block (ram,0x01519770) */
/* WARNING: Removing unreachable block (ram,0x015197f0) */
/* WARNING: Removing unreachable block (ram,0x01519810) */
/* WARNING: Removing unreachable block (ram,0x01519a6c) */
/* WARNING: Removing unreachable block (ram,0x01519a74) */
/* WARNING: Removing unreachable block (ram,0x0151243c) */
/* WARNING: Removing unreachable block (ram,0x01512454) */
/* WARNING: Removing unreachable block (ram,0x01512460) */
/* WARNING: Removing unreachable block (ram,0x01519814) */
/* WARNING: Removing unreachable block (ram,0x01519a8c) */
/* WARNING: Removing unreachable block (ram,0x01519834) */
/* WARNING: Removing unreachable block (ram,0x016b6590) */
/* WARNING: Removing unreachable block (ram,0x016b65a4) */
/* WARNING: Removing unreachable block (ram,0x016b65ac) */
/* WARNING: Removing unreachable block (ram,0x016b65b0) */
/* WARNING: Removing unreachable block (ram,0x016b65b8) */
/* WARNING: Removing unreachable block (ram,0x016b65c0) */
/* WARNING: Removing unreachable block (ram,0x016b65c8) */
/* WARNING: Removing unreachable block (ram,0x016b65d8) */
/* WARNING: Removing unreachable block (ram,0x015197f8) */
/* WARNING: Removing unreachable block (ram,0x01519358) */
/* WARNING: Removing unreachable block (ram,0x01519234) */
/* WARNING: Removing unreachable block (ram,0x01519160) */
/* WARNING: Removing unreachable block (ram,0x01519118) */
/* WARNING: Removing unreachable block (ram,0x0322ef1c) */
/* WARNING: Removing unreachable block (ram,0x0322ef40) */
/* WARNING: Removing unreachable block (ram,0x0322ef54) */
/* WARNING: Removing unreachable block (ram,0x015124c0) */
/* WARNING: Removing unreachable block (ram,0x015124c8) */
/* WARNING: Removing unreachable block (ram,0x015124fc) */
/* WARNING: Removing unreachable block (ram,0x015124e0) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

ulong Atlas_UI_UIChallengeProgressBehaviour__ResetValues(long param_1)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  ulong *puVar18;
  ulong uStack_78;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x28),0);
    /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    if ((lVar7 != 0) && (/*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar7,0), *(long *)(param_1 + 0x50) != 0)) {
      Atlas_UI_UIAnimatingFlagsBehaviour__Reset();
      if ((bRam0000000003eb5c29 & 1) == 0) {
        func_0x00f78a20(0x3d20bc0,0,0);
        bRam0000000003eb5c29 = 1;
      }
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003eb5af0 & 1) == 0) {
        func_0x00f78a20(0x3d20bc0,0,0);
        func_0x00f78a20(0x3d25440);
        bRam0000000003eb5af0 = 1;
      }
      if (param_1 == 0) {
        uVar9 = 0;
      }
      else {
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar4 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,param_1,0,0,0,0);
        uVar9 = (ulong)uVar4;
      }
      return uVar9;
    }
  }
  plVar8 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb4dd1 & 1) == 0) {
    func_0x00f78a20(0x3d2a368);
    bRam0000000003eb4dd1 = 1;
  }
  uVar9 = plVar8[3];
  if (uVar9 == 0) {
    return 0;
  }
  uStack_78 = uVar9;
  lVar7 = *(long *)(uVar9 + 0x68);
  if (lVar7 == 0) {
    puVar18 = &uStack_78;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar7 + 0x18);
    if (lVar17 == 0) {
      return uVar9;
    }
    puVar18 = (ulong *)(lVar7 + 0x20);
  }
  lVar7 = 0;
  do {
    uVar13 = puVar18[lVar7];
    pcVar16 = *(code **)(uVar13 + 0x10);
    plVar1 = *(long **)(uVar13 + 0x20);
    lVar10 = *(long *)(uVar13 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar5 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x01';
    if (iVar5 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e480c8:
          uVar13 = (*pcVar16)(plVar8,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(uVar9 + 0x18) == 0)) goto code_r0x01e47fc0;
          iVar5 = func_0x00f78a44(lVar10);
          iVar6 = func_0x00f78ec0(lVar10);
          if (iVar5 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar6 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              uVar13 = (**(code **)(lVar10 + 0x138))(plVar1,plVar8,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01e480d4;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar14 = *plVar1;
            uVar13 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar13 != 0) {
              piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar10) {
                  puVar12 = (undefined8 *)
                            (lVar14 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e48260;
                }
                piVar15 = piVar15 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01e48260:
            pcVar16 = (code *)*puVar12;
            puVar12 = (undefined8 *)puVar12[1];
          }
          else {
            if (iVar6 == 0) {
              uVar11 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar14 = *plVar1;
              uVar13 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar13 != 0) {
                piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e48238;
                  }
                  piVar15 = piVar15 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              lVar14 = func_0x00fac1f0(plVar1);
code_r0x01e48238:
              uVar11 = *(undefined8 *)(lVar14 + 8);
            }
            puVar12 = (undefined8 *)func_0x00f78acc(uVar11,lVar10);
            pcVar16 = (code *)*puVar12;
          }
          uVar13 = (*pcVar16)(plVar1,plVar8,puVar12);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(uVar9 + 0x18) == 0))
        goto code_r0x01e480c8;
        iVar5 = func_0x00f78a44(lVar10);
        iVar6 = func_0x00f78ec0(lVar10);
        if (iVar5 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar6 == 0) {
            lVar10 = *plVar8 + (ulong)uVar2 * 0x10;
            uVar13 = (**(code **)(lVar10 + 0x138))(plVar8,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01e480d4;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar14 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar10) {
                puVar12 = (undefined8 *)
                          (lVar14 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                goto code_r0x01e481fc;
              }
              piVar15 = piVar15 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar12 = (undefined8 *)func_0x00fac1f0(plVar8,lVar10,(ulong)uVar2);
code_r0x01e481fc:
          pcVar16 = (code *)*puVar12;
          puVar12 = (undefined8 *)puVar12[1];
        }
        else {
          if (iVar6 == 0) {
            uVar11 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar13 != 0) {
              piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e481d4;
                }
                piVar15 = piVar15 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar8);
code_r0x01e481d4:
            uVar11 = *(undefined8 *)(lVar14 + 8);
          }
          puVar12 = (undefined8 *)func_0x00f78acc(uVar11,lVar10);
          pcVar16 = (code *)*puVar12;
        }
        uVar13 = (*pcVar16)(plVar8,puVar12);
      }
    }
    else {
      if (bVar3) goto code_r0x01e480c8;
code_r0x01e47fc0:
      uVar13 = (*pcVar16)(plVar1,plVar8,lVar10);
    }
code_r0x01e480d4:
    lVar7 = lVar7 + 1;
    if (lVar7 == lVar17) {
      return uVar13;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1519b28 | Atlas.UI.UIChallengeProgressBehaviour.InvokeOnStartResize
// ============================================================

void Atlas_UI_UIChallengeProgressBehaviour__InvokeOnStartResize(long *param_1)

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
  long lStack_58;
  
  if ((bRam0000000003eb4dd1 & 1) == 0) {
    func_0x00f78a20(0x3d2a368);
    bRam0000000003eb4dd1 = 1;
  }
  lVar6 = param_1[3];
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
code_r0x01e480c8:
          (*pcVar14)(param_1,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar6 + 0x18) == 0)) goto code_r0x01e47fc0;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,param_1,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01e480d4;
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
                  goto code_r0x01e48260;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01e48260:
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
                    goto code_r0x01e48238;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01e48238:
              uVar7 = *(undefined8 *)(lVar11 + 8);
            }
            puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar10);
            pcVar14 = (code *)*puVar8;
          }
          (*pcVar14)(plVar1,param_1,puVar8);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar6 + 0x18) == 0))
        goto code_r0x01e480c8;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_1,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01e480d4;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_1;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar8 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01e481fc;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(param_1,lVar10,(ulong)uVar2);
code_r0x01e481fc:
          pcVar14 = (code *)*puVar8;
          puVar8 = (undefined8 *)puVar8[1];
        }
        else {
          if (iVar5 == 0) {
            uVar7 = *(undefined8 *)(*param_1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
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
                  goto code_r0x01e481d4;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_1);
code_r0x01e481d4:
            uVar7 = *(undefined8 *)(lVar11 + 8);
          }
          puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar10);
          pcVar14 = (code *)*puVar8;
        }
        (*pcVar14)(param_1,puVar8);
      }
    }
    else {
      if (bVar3) goto code_r0x01e480c8;
code_r0x01e47fc0:
      (*pcVar14)(plVar1,param_1,lVar10);
    }
code_r0x01e480d4:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1519b88 | Atlas.UI.UIChallengeProgressBehaviour.InvokeOnCompleteResize
// ============================================================

void Atlas_UI_UIChallengeProgressBehaviour__InvokeOnCompleteResize(long *param_1)

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
  long lStack_58;
  
  if ((bRam0000000003eb4dd2 & 1) == 0) {
    func_0x00f78a20(0x3d2a368);
    bRam0000000003eb4dd2 = 1;
  }
  Atlas_UI_UIChallengeProgressBehaviour__SetVisible(param_1,0);
  lVar6 = param_1[4];
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
code_r0x01e480c8:
          (*pcVar14)(param_1,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar6 + 0x18) == 0)) goto code_r0x01e47fc0;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,param_1,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01e480d4;
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
                  goto code_r0x01e48260;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01e48260:
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
                    goto code_r0x01e48238;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01e48238:
              uVar7 = *(undefined8 *)(lVar11 + 8);
            }
            puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar10);
            pcVar14 = (code *)*puVar8;
          }
          (*pcVar14)(plVar1,param_1,puVar8);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar6 + 0x18) == 0))
        goto code_r0x01e480c8;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_1,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01e480d4;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_1;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar8 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01e481fc;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(param_1,lVar10,(ulong)uVar2);
code_r0x01e481fc:
          pcVar14 = (code *)*puVar8;
          puVar8 = (undefined8 *)puVar8[1];
        }
        else {
          if (iVar5 == 0) {
            uVar7 = *(undefined8 *)(*param_1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
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
                  goto code_r0x01e481d4;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_1);
code_r0x01e481d4:
            uVar7 = *(undefined8 *)(lVar11 + 8);
          }
          puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar10);
          pcVar14 = (code *)*puVar8;
        }
        (*pcVar14)(param_1,puVar8);
      }
    }
    else {
      if (bVar3) goto code_r0x01e480c8;
code_r0x01e47fc0:
      (*pcVar14)(plVar1,param_1,lVar10);
    }
code_r0x01e480d4:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1519bf4 | Atlas.UI.UIChallengeProgressBehaviour..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UIChallengeProgressBehaviour___ctor(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x58) = 0x183e4ccccd;
  *(undefined8 *)(param_1 + 100) = _UNK_033f8710;
  *(undefined4 *)(param_1 + 0x6c) = 2;
  uVar1 = _UNK_033f8720;
  *(undefined8 *)(param_1 + 0x70) = _UNK_033f8718;
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  *(undefined8 *)(param_1 + 0x80) = _UNK_033f8728;
  *(undefined8 *)(param_1 + 0x88) = 0xbf80000000000005;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return param_1;
}



