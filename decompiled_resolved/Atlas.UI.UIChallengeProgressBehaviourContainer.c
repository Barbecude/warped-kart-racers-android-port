// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIChallengeProgressBehaviourContainer

// ============================================================
// RVA: 0x1519078 | Atlas.UI.UIChallengeProgressBehaviourContainer.ResetAllChallenges
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
/* WARNING: Possible PIC construction at 0x0151988c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015198d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519910: Changing call to branch */
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

ulong Atlas_UI_UIChallengeProgressBehaviourContainer__ResetAllChallenges
                (ulong param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 ******ppppppuVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 extraout_x1;
  ulong uVar12;
  uint uVar13;
  ulong unaff_x20;
  undefined8 unaff_x21;
  int iVar14;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ******ppppppuVar15;
  undefined8 *******pppppppuVar16;
  code *pcVar17;
  uint extraout_s0;
  float extraout_s0_00;
  undefined4 uVar18;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 ******ppppppuStack_110;
  code *pcStack_108;
  undefined8 ******ppppppuStack_d0;
  code *pcStack_c8;
  undefined8 ******ppppppuStack_90;
  code *pcStack_88;
  undefined8 ******ppppppuStack_60;
  code *pcStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 ******ppppppuStack_40;
  code *pcStack_38;
  undefined8 *****pppppuStack_30;
  code *pcStack_28;
  
  ppppppuVar15 = (undefined8 ******)&stack0xfffffffffffffff0;
  uVar12 = *(ulong *)(param_1 + 0x20);
  if (uVar12 != 0) {
    uVar4 = *(uint *)(uVar12 + 0x18);
    if (0 < (int)uVar4) {
      unaff_x20 = 0;
      do {
        uVar13 = (uint)unaff_x20;
        if (uVar4 <= uVar13) {
          uVar10 = func_0x00f78b24();
          func_0x00f78ac0(uVar10,0);
          goto LAB_015190dc;
        }
        if (*(long *)(uVar12 + (long)(int)uVar13 * 8 + 0x20) == 0) goto LAB_015190dc;
        param_1 = Atlas_UI_UIChallengeProgressBehaviour__ResetValues();
        unaff_x20 = (ulong)(uVar13 + 1);
        uVar4 = *(uint *)(uVar12 + 0x18);
      } while ((int)(uVar13 + 1) < (int)uVar4);
    }
    return param_1;
  }
LAB_015190dc:
  lVar5 = func_0x00f78af4();
  pcStack_28 = Atlas_UI_UIChallengeProgressBehaviour__ShowCompletedFlag;
  uVar6 = *(ulong *)(lVar5 + 0x50);
  pppppuStack_30 = ppppppuVar15;
  if (uVar6 == 0) {
    auVar19 = func_0x00f78af4();
    uVar11 = auVar19._8_8_;
    pcStack_38 = Atlas_UI_UIChallengeProgressBehaviour__SetVisible;
    uStack_50 = unaff_x20;
    uStack_48 = uVar12;
    ppppppuStack_40 = &pppppuStack_30;
    lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(auVar19._0_8_,0);
    if (lVar5 != 0) {
      ppppppuVar3 = &pppppuStack_30;
      uVar6 = uStack_48;
      unaff_x20 = uStack_50;
      uVar10 = unaff_x21;
      pppppppuVar16 = (undefined8 *******)ppppppuStack_40;
      pcVar17 = pcStack_38;
      goto code_r0x0322ef1c;
    }
    auVar19 = func_0x00f78af4();
    uVar10 = auVar19._8_8_;
    unaff_x20 = auVar19._0_8_;
    ppppppuVar3 = (undefined8 ******)&stack0xffffffffffffff80;
    pcStack_58 = Atlas_UI_UIChallengeProgressBehaviour__Set;
    uVar6 = param_3;
    ppppppuStack_60 = &ppppppuStack_40;
    if ((*(long *)(unaff_x20 + 0x40) != 0) &&
       (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(unaff_x20 + 0x40),0), uVar11 = param_3, unaff_x21 = uVar10
       , lVar5 != 0)) {
      uVar11 = 0;
      pcVar17 = (code *)0x151916c;
      uVar6 = param_3;
      pppppppuVar16 = &ppppppuStack_60;
      goto code_r0x0322ef1c;
    }
    unaff_x20 = func_0x00f78af4();
    ppppppuVar3 = (undefined8 ******)&stack0xffffffffffffff40;
    pcStack_88 = Atlas_UI_UIChallengeProgressBehaviour__Set;
    pppppppuVar16 = &ppppppuStack_90;
    uVar12 = uVar6;
    ppppppuStack_90 = &ppppppuStack_60;
    if (*(long *)(unaff_x20 + 0x38) != 0) {
      unaff_d8 = (ulong)extraout_s0;
      Atlas_UI_SlantFillBar__Init(*(long *)(unaff_x20 + 0x38),0);
      uVar11 = uVar6;
      unaff_x21 = extraout_x1;
      if ((*(long *)(unaff_x20 + 0x40) != 0) &&
         (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(unaff_x20 + 0x40),0), lVar5 != 0)) {
        uVar11 = 1;
        pcVar17 = (code *)0x1519240;
        uVar10 = extraout_x1;
        goto code_r0x0322ef1c;
      }
    }
    auVar19._8_8_ = unaff_x20;
    auVar19._0_8_ = uVar11;
    uVar11 = func_0x00f78af4();
    pcStack_c8 = Atlas_UI_UIChallengeController__UpdateChallengeProgress;
    unaff_x20 = uVar12;
    uVar10 = unaff_x21;
    uVar6 = unaff_x22;
    uVar7 = unaff_x23;
    ppppppuStack_d0 = pppppppuVar16;
    if (param_4 == 0) {
LAB_01519390:
      unaff_x23 = uVar7;
      unaff_x22 = uVar6;
      unaff_x21 = uVar10;
      auVar19 = func_0x00f78af4();
      lVar5 = auVar19._0_8_;
      puVar1 = &stack0xfffffffffffffed0;
      pcStack_108 = Atlas_UI_UIChallengeProgressBehaviour__UpdateFillBar;
      pppppppuVar16 = &ppppppuStack_110;
      ppppppuStack_110 = &ppppppuStack_d0;
      uVar12 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
      unaff_d8 = (ulong)(uint)extraout_s0_00;
      if (extraout_s0_00 == *(float *)(lVar5 + 0x8c)) {
        return uVar12;
      }
      lVar9 = *(long *)(lVar5 + 0x38);
      if (auVar19._8_4_ == 0) {
        if (lVar9 != 0) {
          uVar12 = Atlas_UI_SlantFillBar__SetProgress(extraout_s0_00,lVar9,0);
          goto LAB_015193f4;
        }
      }
      else if (lVar9 != 0) {
        uVar12 = Atlas_UI_SlantFillBar__SetTargetProgress(extraout_s0_00,lVar9,0,0);
LAB_015193f4:
        *(float *)(lVar5 + 0x8c) = extraout_s0_00;
        return uVar12;
      }
      pcVar17 = (code *)&Atlas_UI_UIChallengeProgressBehaviourContainer__SetChallengeComplete;
      auVar20 = func_0x00f78af4();
    }
    else {
      if (*(char *)(param_4 + 0x90) != '\0') {
        return uVar11;
      }
      if (*(long *)(uVar11 + 0x30) == 0) goto LAB_01519390;
      unaff_x20 = 0;
      uVar7 = /*Atlas.Stats.StatsManager$$GetSummedStats*/ func_0x015045f8();
      iVar14 = (int)(uVar12 >> 0x20);
      uVar8 = Atlas_UI_UIChallengeProgressBehaviour__UpdateFillBar
                        ((float)(int)uVar7 / (float)iVar14,param_4,param_5);
      if ((int)uVar7 < iVar14) {
        return uVar8;
      }
      uVar10 = param_5;
      uVar6 = uVar12 >> 0x20;
      if (*(long *)(param_4 + 0x38) == 0) goto LAB_01519390;
      if (*(float *)(*(long *)(param_4 + 0x38) + 0x38) < 1.0) {
        return uVar8;
      }
      auVar20._8_8_ = param_4;
      auVar20._0_8_ = *(long *)(uVar11 + 0x40);
      if (*(long *)(uVar11 + 0x40) == 0) goto LAB_01519390;
      unaff_x20 = (ulong)*(byte *)(uVar11 + 0x48);
      puVar1 = &stack0xffffffffffffff40;
      pppppppuVar16 = (undefined8 *******)ppppppuStack_d0;
      pcVar17 = pcStack_c8;
    }
    uVar12 = auVar20._8_8_;
    *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar16;
    *(code **)(puVar1 + -8) = pcVar17;
    lVar5 = *(long *)(auVar20._0_8_ + 0x18);
    if ((lVar5 == 0) || (uVar12 == 0)) {
      uVar12 = func_0x00f78af4();
      return uVar12;
    }
    uVar18 = *(undefined4 *)(lVar5 + 0x58);
    puVar2 = puVar1 + -0x50;
    *(undefined8 *)(puVar1 + -0x50) = unaff_d9;
    *(ulong *)(puVar1 + -0x48) = unaff_d8;
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(ulong *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(long *)(puVar1 + -0x20) = auVar19._8_8_;
    *(long *)(puVar1 + -0x18) = auVar19._0_8_;
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
    pppppppuVar16 = (undefined8 *******)(puVar1 + -0x10);
    unaff_x21 = 0x3eb4000;
    uVar6 = uVar12;
    if ((bRam0000000003eb4dd0 & 1) == 0) {
      func_0x00f78a20(uVar18,0x3d25428);
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
    if (*(char *)(uVar12 + 0x90) != '\0') {
      return uVar6;
    }
    if ((unaff_x20 & 1) == 0) {
      uVar6 = *(ulong *)(uVar12 + 0x50);
      if (uVar6 != 0) {
        ppppppuVar15 = *(undefined8 *******)(puVar1 + -0x10);
        pcVar17 = *(code **)(puVar1 + -8);
        unaff_x20 = *(ulong *)(puVar1 + -0x20);
        uVar12 = *(ulong *)(puVar1 + -0x18);
        unaff_x22 = *(ulong *)(puVar1 + -0x30);
        unaff_x21 = *(undefined8 *)(puVar1 + -0x28);
        goto Atlas_UI_UIAnimatingFlagsBehaviour__SetCompleted;
      }
    }
    else {
      *(undefined1 *)(uVar12 + 0x90) = 1;
      Atlas_Audio_UIAudio__Play(/*STR('event:/UI/HUD/ChallengeComplete')*/ uRam0000000003d790e0);
      if (*(long *)(uVar12 + 0x50) != 0) {
        uVar6 = Atlas_UI_UIAnimatingFlagsBehaviour__PlayCompleteAnimation
                          (0,*(long *)(uVar12 + 0x50),/*STR('')*/ uRam0000000003d65d08);
        *(ulong *)(uVar12 + 0x98) = uVar6;
        uVar10 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(0,0x3f800000,0x3f800000,*(undefined4 *)(uVar12 + 0x58),
                                 *(undefined8 *)(uVar12 + 0x28),0);
        lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar10,*(undefined4 *)(uVar12 + 0x5c),uRam0000000003d5e7a8);
        *(ulong *)(puVar1 + -0x70) = uVar6;
        *(ulong *)(puVar1 + -0x68) = uVar12;
        *(undefined8 ********)(puVar1 + -0x60) = pppppppuVar16;
        *(undefined **)(puVar1 + -0x58) = &UNK_01519890;
        if (((((uVar6 != 0) && (*(char *)(uVar6 + 0xe8) != '\0')) && (lVar5 != 0)) &&
            ((*(char *)(uVar6 + 0x100) == '\0' && (*(char *)(lVar5 + 0xe8) != '\0')))) &&
           (*(char *)(lVar5 + 0xe9) == '\0')) {
          /*DG.Tweening.Sequence$$DoInsert*/ func_0x016a231c(*(undefined4 *)(uVar6 + 0xa0),uVar6,lVar5,0);
        }
        return uVar6;
      }
    }
    pcVar17 = Atlas_UI_UIChallengeProgressBehaviour__OnDestroy;
    lVar5 = func_0x00f78af4();
  }
  else {
    puVar1 = &stack0xffffffffffffffe0;
    pcVar17 = pcStack_28;
Atlas_UI_UIAnimatingFlagsBehaviour__SetCompleted:
    ppppppuVar3 = (undefined8 ******)(puVar1 + -0x20);
    puVar2 = puVar1 + -0x20;
    *(ulong *)(puVar1 + -0x20) = unaff_x20;
    *(ulong *)(puVar1 + -0x18) = uVar12;
    *(undefined8 *******)(puVar1 + -0x10) = ppppppuVar15;
    *(code **)(puVar1 + -8) = pcVar17;
    pppppppuVar16 = (undefined8 *******)(puVar1 + -0x10);
    if ((*(long *)(uVar6 + 0x20) != 0) &&
       (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(uVar6 + 0x20),0), lVar5 != 0)) {
      uVar11 = 1;
      uVar10 = unaff_x21;
      pcVar17 = (code *)0x151246c;
code_r0x0322ef1c:
      *(ulong *)((long)ppppppuVar3 + -0x30) = unaff_x22;
      *(undefined8 *)((long)ppppppuVar3 + -0x28) = uVar10;
      *(ulong *)((long)ppppppuVar3 + -0x20) = unaff_x20;
      *(ulong *)((long)ppppppuVar3 + -0x18) = uVar6;
      *(undefined8 ********)((long)ppppppuVar3 + -0x10) = pppppppuVar16;
      *(code **)((long)ppppppuVar3 + -8) = pcVar17;
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (*pcRam0000000003ebf4c0)(lVar5,uVar11);
      return uVar12;
    }
    pcVar17 = Atlas_UI_UIAnimatingFlagsBehaviour__OnDestroy;
    lVar5 = func_0x00f78af4();
    uVar12 = uVar6;
  }
  *(ulong *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(ulong *)(puVar2 + -0x20) = unaff_x20;
  *(ulong *)(puVar2 + -0x18) = uVar12;
  *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar16;
  *(code **)(puVar2 + -8) = pcVar17;
  if ((bRam0000000003eb5c29 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    bRam0000000003eb5c29 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(puVar2 + -0x30) = *(undefined8 *)(puVar2 + -0x30);
  *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
  *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
  *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
  *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  if ((bRam0000000003eb5af0 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5af0 = 1;
  }
  if (lVar5 == 0) {
    uVar12 = 0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar5,0,0,0,0);
    uVar12 = (ulong)uVar4;
  }
  return uVar12;
}



// ============================================================
// RVA: 0x151940c | Atlas.UI.UIChallengeProgressBehaviourContainer.SetChallengeComplete
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

ulong Atlas_UI_UIChallengeProgressBehaviourContainer__SetChallengeComplete
                (long param_1,ulong param_2,ulong param_3)

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
  
  if ((*(long *)(param_1 + 0x18) == 0) || (param_2 == 0)) {
    uVar4 = func_0x00f78af4();
    return uVar4;
  }
  puVar1 = &stack0xffffffffffffffb0;
  uVar4 = param_2;
  if ((bRam0000000003eb4dd0 & 1) == 0) {
    func_0x00f78a20(*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x58),0x3d25428);
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
  if (*(char *)(param_2 + 0x90) != '\0') {
    return uVar4;
  }
  if ((param_3 & 1) == 0) {
    uVar4 = *(ulong *)(param_2 + 0x50);
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
    *(undefined1 *)(param_2 + 0x90) = 1;
    Atlas_Audio_UIAudio__Play(/*STR('event:/UI/HUD/ChallengeComplete')*/ uRam0000000003d790e0);
    if (*(long *)(param_2 + 0x50) != 0) {
      uVar4 = Atlas_UI_UIAnimatingFlagsBehaviour__PlayCompleteAnimation
                        (0,*(long *)(param_2 + 0x50),/*STR('')*/ uRam0000000003d65d08);
      *(ulong *)(param_2 + 0x98) = uVar4;
      uVar5 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(0,0x3f800000,0x3f800000,*(undefined4 *)(param_2 + 0x58),
                              *(undefined8 *)(param_2 + 0x28),0);
      lVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,*(undefined4 *)(param_2 + 0x5c),uRam0000000003d5e7a8);
      if (((((uVar4 != 0) && (*(char *)(uVar4 + 0xe8) != '\0')) && (lVar6 != 0)) &&
          ((*(char *)(uVar4 + 0x100) == '\0' && (*(char *)(lVar6 + 0xe8) != '\0')))) &&
         (*(char *)(lVar6 + 0xe9) == '\0')) {
        /*DG.Tweening.Sequence$$DoInsert*/ func_0x016a231c(*(undefined4 *)(uVar4 + 0xa0),uVar4,lVar6,0);
      }
      return uVar4;
    }
  }
  pcVar7 = Atlas_UI_UIChallengeProgressBehaviour__OnDestroy;
  lVar6 = func_0x00f78af4();
  uVar4 = param_2;
  unaff_x20 = param_3;
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
// RVA: 0x1519c4c | Atlas.UI.UIChallengeProgressBehaviourContainer.get_ChallengeProgressList
// ============================================================

undefined8 Atlas_UI_UIChallengeProgressBehaviourContainer__get_ChallengeProgressList(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1519c54 | Atlas.UI.UIChallengeProgressBehaviourContainer.Awake
// ============================================================

/* WARNING: Possible PIC construction at 0x032d2ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d30d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d3978: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x032d397c) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_UI_UIChallengeProgressBehaviourContainer__Awake(long param_1)

{
  ushort uVar1;
  int iVar2;
  undefined1 ****ppppuVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  uint uVar15;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 in_x6;
  undefined8 in_x7;
  uint extraout_w8;
  long *plVar20;
  long extraout_x9;
  int iVar21;
  undefined1 ****ppppuVar22;
  undefined1 ****ppppuVar23;
  undefined8 uVar24;
  uint uVar25;
  undefined1 **ppuVar26;
  long lVar27;
  uint uVar28;
  ulong unaff_x23;
  long lVar29;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar30;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined1 ***pppuVar31;
  undefined *puVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  undefined8 *******pppppppuVar36;
  undefined1 *******pppppppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  long lStack_198;
  undefined1 ******ppppppuStack_190;
  undefined *puStack_188;
  code *UNRECOVERED_JUMPTABLE;
  long lStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [16];
  undefined1 *****pppppuStack_150;
  undefined *puStack_148;
  long lStack_140;
  ulong uStack_138;
  undefined1 auStack_130 [16];
  undefined1 ****ppppuStack_120;
  undefined *puStack_118;
  undefined1 ****ppppuStack_110;
  undefined *puStack_108;
  undefined1 ****ppppuStack_100;
  ulong uStack_f8;
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined1 **ppuStack_c0;
  ulong uStack_b8;
  undefined1 **ppuStack_b0;
  long *plStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  uVar8 = 0x3d3c5e0;
  if ((bRam0000000003eb4dd3 & 1) == 0) {
    func_0x00f78a20(0x3d2a360);
    func_0x00f78a20(0x3d1b5b8);
    func_0x00f78a20(0x3d3c5e0);
    func_0x00f78a20(0x3d1df48);
    func_0x00f78a20(0x3d5f6d8);
    func_0x00f78a20(0x3d5f6e0);
    bRam0000000003eb4dd3 = 1;
  }
  puVar6 = (undefined1 *)func_0x00f78aec(/*System.Collections.Generic.List<UIChallengeProgressBehaviour>_TypeInfo*/ uRam0000000003d1df48);
  uVar7 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(puVar6,uRam0000000003d3c5e0);
  *(undefined1 **)(param_1 + 0x28) = puVar6;
  ppuVar26 = *(undefined1 ***)(param_1 + 0x20);
  if (ppuVar26 != (undefined1 **)0x0) {
    uVar25 = *(uint *)(ppuVar26 + 3);
    if (0 < (int)uVar25) {
      unaff_x23 = 0;
      unaff_x24 = 0x3d1b5b8;
      unaff_x25 = 0x3d5f6e0;
      unaff_x26 = 0x3d2a360;
      unaff_x27 = 0x3d5f6d8;
      do {
        uVar15 = (uint)unaff_x23;
        if (uVar25 <= uVar15) {
          uVar24 = func_0x00f78b24();
          func_0x00f78ac0(uVar24,0);
          goto LAB_01519dcc;
        }
        puVar6 = ppuVar26[(long)(int)uVar15 + 4];
        uVar8 = func_0x00f78aec(/*System.Action<UIChallengeProgressBehaviour>_TypeInfo*/ uRam0000000003d1b5b8);
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar8,param_1,uRam0000000003d5f6e0,uRam0000000003d2a360);
        if (puVar6 == (undefined1 *)0x0) goto LAB_01519dcc;
        Atlas_UI_UIChallengeProgressBehaviour__add_OnStartResize(puVar6,uVar8);
        uVar8 = func_0x00f78aec(/*System.Action<UIChallengeProgressBehaviour>_TypeInfo*/ uRam0000000003d1b5b8);
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar8,param_1,uRam0000000003d5f6d8,uRam0000000003d2a360);
        uVar7 = Atlas_UI_UIChallengeProgressBehaviour__add_OnCompleteResize(puVar6,uVar8);
        unaff_x23 = (ulong)(uVar15 + 1);
        uVar25 = *(uint *)(ppuVar26 + 3);
      } while ((int)(uVar15 + 1) < (int)uVar25);
    }
    return uVar7;
  }
LAB_01519dcc:
  uVar9 = func_0x00f78af4();
  puStack_68 = &Atlas_UI_UIChallengeProgressBehaviourContainer__Update;
  uVar7 = uVar9;
  puStack_80 = puVar6;
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4dd4 & 1) == 0) {
    func_0x00f78a20(0x3d22df0);
    func_0x00f78a20(0x3d3c5f8);
    uVar7 = func_0x00f78a20(0x3d24188);
    bRam0000000003eb4dd4 = 1;
  }
  if (*(long *)(uVar9 + 0x28) != 0) {
    if (*(int *)(*(long *)(uVar9 + 0x28) + 0x18) < 1) {
      return uVar7;
    }
    plVar10 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar9,0);
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else if (*plVar10 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
      plVar10 = (long *)0x0;
    }
    ppuStack_90 = ppuVar26;
    puStack_88 = (undefined *)uVar8;
    if ((bRam0000000003ec2d40 & 1) == 0) {
      func_0x00f78a20(0x3d22df0,0);
      func_0x00f78a20(0x3d3ef80);
      func_0x00f78a20(0x3d3ef88);
      bRam0000000003ec2d40 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    ppuStack_b0 = (undefined1 **)0x3ec2000;
    if (((**(long **)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xb8) == 0) ||
        (lVar11 = /*UnityEngine.UI.ObjectPool<object>$$Get*/ func_0x026f5fbc(**(long **)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xb8),uRam0000000003d3ef80),
        lVar11 == 0)) ||
       (*(long **)(lVar11 + 0x10) = plVar10, ppuStack_b0 = (undefined1 **)lVar11,
       plVar10 == (long *)0x0)) {
      puVar32 = &UnityEngine_UI_LayoutRebuilder__Rebuild;
      auVar35 = func_0x00f78af4();
    }
    else {
      uVar4 = (**(code **)(*plVar10 + 0x158))(plVar10,*(undefined8 *)(*plVar10 + 0x160));
      *(undefined4 *)(lVar11 + 0x18) = uVar4;
      auVar35._8_4_ = 1;
      auVar35._0_8_ = lVar11;
      puVar32 = &UNK_032d2edc;
    }
    uVar9 = auVar35._0_8_;
    uStack_b8 = 0x3d22df0;
    pppuVar31 = &ppuStack_a0;
    uVar7 = uVar9;
    uStack_d0 = unaff_x24;
    uStack_c8 = unaff_x23;
    ppuStack_c0 = ppuVar26;
    plStack_a8 = plVar10;
    ppuStack_a0 = &puStack_70;
    puStack_98 = puVar32;
    if ((bRam0000000003ec2d41 & 1) == 0) {
      func_0x00f78a20(0x3d634d8);
      func_0x00f78a20(0x3d634e0);
      func_0x00f78a20(0x3d634e8);
      func_0x00f78a20(0x3d634f0);
      func_0x00f78a20(0x3d27de0);
      func_0x00f78a20(0x3d41588);
      uVar7 = func_0x00f78a20(0x3d1eaf0);
      bRam0000000003ec2d41 = 1;
    }
    if (auVar35._8_4_ != 1) {
      return uVar7;
    }
    uVar24 = *(undefined8 *)(uVar9 + 0x10);
    uVar8 = 0x3d27de0;
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar10 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
    lVar11 = plVar10[2];
    if (lVar11 == 0) {
      if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
        func_0x00f78ad0();
        plVar10 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
      }
      ppuVar26 = (undefined1 **)*plVar10;
      lVar11 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<Component>_TypeInfo*/ uRam0000000003d1eaf0);
      /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(lVar11,ppuVar26,uRam0000000003d634d8,uRam0000000003d41588);
      *(long *)(*(long *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8) + 0x10) = lVar11;
    }
    /*UnityEngine.UI.LayoutRebuilder$$PerformLayoutCalculation*/ func_0x032d3238(uVar9,uVar24,lVar11);
    plVar10 = *(long **)(uVar9 + 0x10);
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar20 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
    uVar7 = plVar20[3];
    if (uVar7 == 0) {
      if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
        func_0x00f78ad0();
        plVar20 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
      }
      ppuVar26 = (undefined1 **)*plVar20;
      uVar7 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<Component>_TypeInfo*/ uRam0000000003d1eaf0);
      /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(uVar7,ppuVar26,uRam0000000003d634e0,uRam0000000003d41588);
      *(ulong *)(*(long *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8) + 0x18) = uVar7;
    }
    puVar32 = &UNK_032d30dc;
    puVar17 = &uStack_d0;
    uVar12 = uVar9;
    plVar20 = plVar10;
    uVar30 = uVar7;
    do {
      plVar16 = plVar10;
      *(long *)((long)puVar17 + -0x60) = unaff_x28;
      *(undefined8 *)((long)puVar17 + -0x58) = unaff_x27;
      *(undefined8 *)((long)puVar17 + -0x50) = unaff_x26;
      *(undefined8 *)((long)puVar17 + -0x48) = unaff_x25;
      *(undefined8 *)((long)puVar17 + -0x40) = unaff_x24;
      *(undefined8 *)((long)puVar17 + -0x38) = uVar8;
      *(undefined1 ***)((long)puVar17 + -0x30) = ppuVar26;
      *(ulong *)((long)puVar17 + -0x28) = uVar30;
      *(long **)((long)puVar17 + -0x20) = plVar20;
      *(ulong *)((long)puVar17 + -0x18) = uVar12;
      *(undefined1 ****)((long)puVar17 + -0x10) = pppuVar31;
      *(undefined **)((long)puVar17 + -8) = puVar32;
      pppuVar31 = (undefined1 ***)((long)puVar17 + -0x10);
      if ((bRam0000000003ec2d42 & 1) == 0) {
        func_0x00f78a20(0x3d19778);
        func_0x00f78a20(0x3d222b0);
        func_0x00f78a20(0x3d22df0);
        func_0x00f78a20(0x3d398f8);
        func_0x00f78a20(0x3d39900);
        func_0x00f78a20(0x3d1d6c0);
        func_0x00f78a20(0x3d3a1c0);
        func_0x00f78a20(0x3d3a1c8);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d24188);
        func_0x00f78a20(0x3d247e0);
        func_0x00f78a20(0x3d25458);
        func_0x00f78a20(0x3d41590);
        bRam0000000003ec2d42 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar12 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar16,0,0);
      if ((uVar12 & 1) != 0) {
        return uVar12;
      }
      if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      ppuVar26 = (undefined1 **)/*UnityEngine.UI.ListPool<RectMask2D>$$Get*/ func_0x0233df3c(uRam0000000003d398f8);
      uVar8 = /*UnityEngine.UI.ILayoutController_var*/ uRam0000000003d19778;
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar13 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
      uVar8 = unaff_x26;
      uVar24 = unaff_x27;
      if (plVar16 == (long *)0x0) {
code_r0x032d3918:
        func_0x00f78af4();
        unaff_x26 = uVar8;
        unaff_x27 = uVar24;
      }
      else {
        /*UnityEngine.Component$$GetComponents*/ func_0x03227d78(plVar16,uVar13,ppuVar26,0);
        if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*UnityEngine.UI.LayoutRebuilder$$StripDisabledBehavioursFromList*/ func_0x032d2d00(ppuVar26);
        if (ppuVar26 == (undefined1 **)0x0) goto code_r0x032d3918;
        uVar12 = (ulong)*(uint *)(ppuVar26 + 3);
        if ((int)*(uint *)(ppuVar26 + 3) < 1) {
code_r0x032d3994:
          if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar11 = lRam0000000003d39900;
          uVar8 = *(undefined8 *)((long)puVar17 + -0x30);
          uVar24 = *(undefined8 *)((long)puVar17 + -0x40);
          uVar13 = *(undefined8 *)((long)puVar17 + -0x38);
          *(undefined8 *)((long)puVar17 + -0x40) = uVar24;
          *(undefined8 *)((long)puVar17 + -0x38) = uVar13;
          *(undefined8 *)((long)puVar17 + -0x30) = uVar8;
          *(undefined8 *)((long)puVar17 + -0x28) = *(undefined8 *)((long)puVar17 + -0x28);
          *(undefined8 *)((long)puVar17 + -0x20) = *(undefined8 *)((long)puVar17 + -0x20);
          *(undefined8 *)((long)puVar17 + -0x18) = *(undefined8 *)((long)puVar17 + -0x18);
          *(undefined8 *)((long)puVar17 + -0x10) = *(undefined8 *)((long)puVar17 + -0x10);
          *(undefined8 *)((long)puVar17 + -8) = *(undefined8 *)((long)puVar17 + -8);
          lVar14 = *(long *)(lRam0000000003d39900 + 0x18);
          if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar14);
          }
          lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
          uVar1 = *(ushort *)(lVar14 + 0x132);
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar14);
            uVar1 = *(ushort *)(lVar14 + 0x132);
          }
          if ((uVar1 >> 10 & 1) != 0) {
            lVar14 = *(long *)(lVar11 + 0x18);
            if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar14);
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
            if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar14);
            }
            if (*(int *)(lVar14 + 0xe0) == 0) {
              lVar14 = *(long *)(lVar11 + 0x18);
              if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar14);
              }
              lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
              if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar14);
              }
              func_0x00f78ad0(lVar14);
            }
          }
          lVar14 = *(long *)(lVar11 + 0x18);
          if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar14);
          }
          lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
          if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar14);
          }
          lVar14 = **(long **)(lVar14 + 0xb8);
          if (lVar14 != 0) {
            lVar29 = *(long *)(lVar11 + 0x18);
            uVar1 = *(ushort *)(lVar29 + 0x132);
            lVar27 = lVar29;
            if ((uVar1 & 1) == 0) {
              func_0x00fac028(lVar29);
              lVar27 = *(long *)(lVar11 + 0x18);
              uVar1 = *(ushort *)(lVar27 + 0x132);
            }
            UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar29 + 0xc0) + 0x18);
            if ((uVar1 & 1) == 0) {
              *(code **)((long)puVar17 + -0x48) = UNRECOVERED_JUMPTABLE_00;
              func_0x00fac028(lVar27);
              UNRECOVERED_JUMPTABLE_00 = *(code **)((long)puVar17 + -0x48);
            }
                    /* WARNING: Could not recover jumptable at 0x0233e1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar7 = (*UNRECOVERED_JUMPTABLE_00)
                              (lVar14,ppuVar26,*(undefined8 *)(*(long *)(lVar27 + 0xc0) + 0x18));
            return uVar7;
          }
          lVar14 = func_0x00f78af4();
          *(undefined8 *)((long)puVar17 + -0x90) = uVar24;
          *(undefined8 *)((long)puVar17 + -0x88) = uVar13;
          *(undefined8 *)((long)puVar17 + -0x80) = uVar8;
          *(undefined8 *)((long)puVar17 + -0x78) = 0;
          *(long *)((long)puVar17 + -0x70) = lVar11;
          *(undefined1 ***)((long)puVar17 + -0x68) = ppuVar26;
          *(undefined1 **)((long)puVar17 + -0x60) = (undefined1 *)((long)puVar17 + -0x10);
          *(undefined **)((long)puVar17 + -0x58) = &UnityEngine_UI_ListPool_object____cctor;
          lVar11 = *(long *)(lVar14 + 0x18);
          if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar11);
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
          if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar11);
          }
          uVar8 = func_0x00f78aec(lVar11);
          lVar27 = *(long *)(lVar14 + 0x18);
          uVar1 = *(ushort *)(lVar27 + 0x132);
          lVar11 = lVar27;
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar27);
            lVar11 = *(long *)(lVar14 + 0x18);
            uVar1 = *(ushort *)(lVar11 + 0x132);
          }
          UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar27 + 0xc0) + 0x30);
          lVar27 = lVar11;
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar11);
            lVar27 = *(long *)(lVar14 + 0x18);
            uVar1 = *(ushort *)(lVar27 + 0x132);
          }
          uVar24 = *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x20);
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar27);
          }
          (*UNRECOVERED_JUMPTABLE_00)
                    (uVar8,0,uVar24,*(undefined8 *)(*(long *)(lVar27 + 0xc0) + 0x30));
          lVar11 = *(long *)(lVar14 + 0x18);
          if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar11);
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x38);
          if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar11);
          }
          uVar24 = func_0x00f78aec(lVar11);
          lVar27 = *(long *)(lVar14 + 0x18);
          uVar1 = *(ushort *)(lVar27 + 0x132);
          lVar11 = lVar27;
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar27);
            lVar11 = *(long *)(lVar14 + 0x18);
            uVar1 = *(ushort *)(lVar11 + 0x132);
          }
          UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar27 + 0xc0) + 0x40);
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar11);
          }
          uVar7 = (*UNRECOVERED_JUMPTABLE_00)
                            (uVar24,0,uVar8,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x40));
          lVar11 = *(long *)(lVar14 + 0x18);
          if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
            uVar7 = func_0x00fac028(lVar11);
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
          if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
            uVar7 = func_0x00fac028(lVar11);
          }
          **(undefined8 **)(lVar11 + 0xb8) = uVar24;
          return uVar7;
        }
        lVar11 = 4;
        unaff_x26 = 0x3d222b0;
        unaff_x27 = 0x3d41590;
        do {
          if ((uVar12 & 0xffffffff) <= lVar11 - 4U) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar14 = func_0x00f78adc(*(undefined8 *)(ppuVar26[2] + lVar11 * 8),/*UnityEngine.UI.ILayoutSelfController_TypeInfo*/ uRam0000000003d222b0);
          if (lVar14 != 0) {
            if ((ulong)*(uint *)(ppuVar26 + 3) <= lVar11 - 4U) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            uVar8 = unaff_x26;
            uVar24 = unaff_x27;
            if (uVar7 == 0) goto code_r0x032d3918;
            /*UnityEngine.Events.UnityAction<object>$$Invoke*/ func_0x01b7eab8(uVar7,*(undefined8 *)(ppuVar26[2] + lVar11 * 8),uRam0000000003d41590);
          }
          uVar12 = (ulong)*(int *)(ppuVar26 + 3);
          lVar14 = lVar11 + -3;
          lVar11 = lVar11 + 1;
        } while (lVar14 < (long)uVar12);
        if (0 < *(int *)(ppuVar26 + 3)) {
          unaff_x28 = 4;
          do {
            uVar30 = unaff_x28 - 4;
            if ((uVar12 & 0xffffffff) <= uVar30) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar11 = func_0x00f78adc(*(undefined8 *)(ppuVar26[2] + unaff_x28 * 8),
                                     /*UnityEngine.UI.ILayoutSelfController_TypeInfo*/ uRam0000000003d222b0);
            if (lVar11 == 0) {
              if (*(uint *)(ppuVar26 + 3) <= uVar30) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar10 = *(long **)(ppuVar26[2] + unaff_x28 * 8);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar10,0);
              if ((iVar5 == 0) || (plVar10 == (long *)0x0)) {
code_r0x032d388c:
                if (*(uint *)(ppuVar26 + 3) <= uVar30) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
              }
              else {
                if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0 + 300)) ||
                   (*(long *)(*(long *)(*plVar10 + 200) +
                              (ulong)*(byte *)(/*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0 + 300) * 8 + -8) !=
                    /*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0)) goto code_r0x032d388c;
                lVar11 = plVar10[3];
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,plVar16,0);
                if (iVar5 == 0) goto code_r0x032d38b8;
                if (*(uint *)(ppuVar26 + 3) <= uVar30) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
              }
              uVar24 = 0x3d41590;
              uVar8 = 0x3d222b0;
              if (uVar7 == 0) goto code_r0x032d3918;
              /*UnityEngine.Events.UnityAction<object>$$Invoke*/ func_0x01b7eab8(uVar7,*(undefined8 *)(ppuVar26[2] + unaff_x28 * 8),
                              uRam0000000003d41590);
            }
code_r0x032d38b8:
            uVar12 = (ulong)*(int *)(ppuVar26 + 3);
            lVar11 = unaff_x28 + -3;
            unaff_x28 = unaff_x28 + 1;
          } while (lVar11 < (long)uVar12);
        }
      }
      iVar5 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(plVar16,0);
      unaff_x25 = 0x3d1d6c0;
      if (iVar5 < 1) goto code_r0x032d3994;
      uVar8 = 0;
      unaff_x24 = 0x3d24188;
      plVar10 = (long *)/*UnityEngine.Transform$$GetChild*/ func_0x03277648(plVar16,0,0);
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x0;
      }
      else if (*plVar10 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
        plVar10 = (long *)0x0;
      }
      puVar32 = &UNK_032d397c;
      puVar17 = (undefined8 *)((long)puVar17 + -0x60);
      uVar12 = uVar7;
      plVar20 = plVar16;
      uVar30 = uVar9;
    } while( true );
  }
  uVar12 = func_0x00f78af4();
  ppuStack_a0 = (undefined1 **)0x3eb4000;
  puStack_88 = &Atlas_UI_UIChallengeProgressBehaviourContainer__OnDestroy;
  ppppuVar22 = (undefined1 ****)0x3eb4000;
  uVar7 = uVar12;
  uStack_d0 = unaff_x26;
  uStack_c8 = unaff_x25;
  ppuStack_c0 = (undefined1 **)unaff_x24;
  uStack_b8 = unaff_x23;
  ppuStack_b0 = ppuVar26;
  plStack_a8 = (long *)uVar8;
  puStack_98 = (undefined *)uVar9;
  ppuStack_90 = &puStack_70;
  if ((bRam0000000003eb4dd5 & 1) == 0) {
    func_0x00f78a20(0x3d2a360);
    func_0x00f78a20(0x3d1b5b8);
    func_0x00f78a20(0x3d5f6d8);
    uVar7 = func_0x00f78a20(0x3d5f6e0);
    bRam0000000003eb4dd5 = 1;
  }
  lVar11 = *(long *)(uVar12 + 0x20);
  if (lVar11 != 0) {
    uVar25 = *(uint *)(lVar11 + 0x18);
    if (0 < (int)uVar25) {
      unaff_x23 = 0;
      unaff_x24 = 0x3d1b5b8;
      do {
        uVar15 = (uint)unaff_x23;
        if (uVar25 <= uVar15) {
          uVar24 = func_0x00f78b24();
          func_0x00f78ac0(uVar24,0);
          goto code_r0x01519fdc;
        }
        ppppuVar22 = *(undefined1 *****)(lVar11 + (long)(int)uVar15 * 8 + 0x20);
        uVar8 = func_0x00f78aec(/*System.Action<UIChallengeProgressBehaviour>_TypeInfo*/ uRam0000000003d1b5b8);
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar8,uVar12,uRam0000000003d5f6e0,uRam0000000003d2a360);
        if (ppppuVar22 == (undefined1 ****)0x0) goto code_r0x01519fdc;
        Atlas_UI_UIChallengeProgressBehaviour__remove_OnStartResize(ppppuVar22,uVar8);
        uVar8 = func_0x00f78aec(/*System.Action<UIChallengeProgressBehaviour>_TypeInfo*/ uRam0000000003d1b5b8);
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar8,uVar12,uRam0000000003d5f6d8,uRam0000000003d2a360);
        uVar7 = Atlas_UI_UIChallengeProgressBehaviour__remove_OnCompleteResize(ppppuVar22,uVar8);
        unaff_x23 = (ulong)(uVar15 + 1);
        uVar25 = *(uint *)(lVar11 + 0x18);
      } while ((int)(uVar15 + 1) < (int)uVar25);
    }
    return uVar7;
  }
code_r0x01519fdc:
  auVar33 = func_0x00f78af4();
  ppppuVar23 = auVar33._8_8_;
  puStack_e8 = &Atlas_UI_UIChallengeProgressBehaviourContainer__OnElementStartsResizing;
  ppppuStack_110 = (undefined1 ****)lVar11;
  puStack_108 = (undefined *)uVar8;
  ppppuStack_100 = ppppuVar22;
  uStack_f8 = uVar12;
  pppuStack_f0 = &ppuStack_90;
  if ((bRam0000000003eb4dd6 & 1) == 0) {
    func_0x00f78a20(0x3d3c5e8);
    bRam0000000003eb4dd6 = 1;
  }
  puVar32 = puStack_108;
  ppppuVar22 = ppppuStack_110;
  uVar7 = *(ulong *)(auVar33._0_8_ + 0x28);
  if (uVar7 == 0) {
    auVar34 = func_0x00f78af4();
    uStack_138 = 0x3eb4000;
    puStack_118 = &Atlas_UI_UIChallengeProgressBehaviourContainer__OnElementFinishedResizing;
    lStack_140 = lVar11;
    ppppuStack_120 = &pppuStack_f0;
    if ((bRam0000000003eb4dd7 & 1) == 0) {
      auStack_130 = auVar33;
      func_0x00f78a20(0x3d3c5f0);
      bRam0000000003eb4dd7 = 1;
      auVar33 = auStack_130;
    }
    uVar7 = uStack_138;
    lVar14 = lStack_140;
    puVar17 = puRam0000000003d3c5f0;
    lVar27 = *(long *)(auVar34._0_8_ + 0x28);
    auStack_130 = auVar33;
    if (lVar27 == 0) {
      uVar7 = func_0x00f78af4();
      uStack_168 = 0x3eb4000;
      puStack_148 = &Atlas_UI_UIChallengeProgressBehaviourContainer___ctor;
      lStack_170 = lVar11;
      pppppuStack_150 = &ppppuStack_120;
      auStack_160 = auVar34;
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
    if (lVar27 != 0) {
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(puRam0000000003d3c5f0[3] + 0xc0) + 0xf8))();
      if (-1 < (int)(uint)uVar8) {
        (*(code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x108))(lVar27,uVar8);
      }
      return (ulong)(~(uint)uVar8 >> 0x1f);
    }
    auVar34 = func_0x00f78af4(0,auVar34._8_8_);
    lVar27 = auVar34._8_8_;
    lVar11 = auVar34._0_8_;
    lStack_170 = lVar14;
    uStack_168 = uVar7;
    puStack_148 = &System_Collections_Generic_List_object___System_Collections_IList_Remove;
    uVar7 = **(ulong **)(puVar17[3] + 0xc0);
    uVar1 = *(ushort *)(uVar7 + 0x132);
    puVar18 = puVar17;
    pppppuStack_150 = &ppppuStack_120;
    auStack_160 = auVar33;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(uVar7);
      uVar1 = *(ushort *)(uVar7 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      uVar7 = **(ulong **)(puVar17[3] + 0xc0);
      if ((*(ushort *)(uVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(uVar7);
      }
      if (*(int *)(uVar7 + 0xe0) == 0) {
        uVar7 = **(ulong **)(puVar17[3] + 0xc0);
        if ((*(ushort *)(uVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(uVar7);
        }
        func_0x00f78ad0(uVar7);
      }
    }
    uVar9 = (*(code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0xa0))(lVar27);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    if (lVar11 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x110);
      lVar14 = *(long *)(*(long *)(puVar17[3] + 0xc0) + 0x38);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      if (lVar27 == 0) {
        lVar29 = 0;
      }
      else {
        lVar29 = func_0x00f78adc(lVar27,lVar14);
        if (lVar29 == 0) {
          uVar7 = func_0x00f78e5c(lVar27,lVar14);
          return uVar7;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02428794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*UNRECOVERED_JUMPTABLE)
                        (lVar11,lVar29,*(undefined8 *)(*(long *)(puVar17[3] + 0xc0) + 0x110));
      return uVar7;
    }
    auVar33 = func_0x00f78af4();
    lVar14 = auVar33._8_8_;
    lVar29 = auVar33._0_8_;
    puStack_188 = &System_Collections_Generic_List_AddressablesImpl_ResourceLocatorInfo___RemoveAll;
    puVar19 = puVar18;
    uStack_1c0 = unaff_x24;
    uStack_1b8 = unaff_x23;
    uStack_1b0 = uVar7;
    puStack_1a0 = puVar17;
    ppppppuStack_190 = &pppppuStack_150;
    if (lVar14 == 0) {
      lStack_1a8 = lVar27;
      lStack_198 = lVar11;
      /*System.ThrowHelper$$ThrowArgumentNullException*/ func_0x029ef698(8);
      auVar34._8_8_ = lStack_1a8;
      auVar34._0_8_ = lStack_198;
    }
    uVar9 = (ulong)*(uint *)(lVar29 + 0x18);
    if ((int)*(uint *)(lVar29 + 0x18) < 1) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      do {
        lStack_1a8 = auVar34._8_8_;
        lStack_198 = auVar34._0_8_;
        lVar11 = *(long *)(lVar29 + 0x10);
        if (lVar11 == 0) goto code_r0x02428920;
        if (*(uint *)(lVar11 + 0x18) <= uVar12) goto code_r0x02428924;
        if (lVar14 == 0) goto code_r0x02428920;
        puVar19 = *(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 200);
        iVar5 = (*(code *)*puVar19)(lVar14,*(undefined8 *)(lVar11 + uVar12 * 8 + 0x20));
        auVar34._8_8_ = lStack_1a8;
        auVar34._0_8_ = lStack_198;
        auVar33._8_8_ = lStack_1a8;
        auVar33._0_8_ = lStack_198;
        if (iVar5 != 0) {
          uVar9 = (ulong)*(uint *)(lVar29 + 0x18);
          auVar34 = auVar33;
          break;
        }
        uVar12 = uVar12 + 1;
        uVar9 = (ulong)*(int *)(lVar29 + 0x18);
      } while ((long)uVar12 < (long)uVar9);
    }
    uVar7 = uVar12;
    uVar12 = uVar7;
    if ((int)uVar9 <= (int)uVar7) {
      return 0;
    }
    do {
      uVar12 = (ulong)((int)uVar12 + 1);
      do {
        lStack_1a8 = auVar34._8_8_;
        lStack_198 = auVar34._0_8_;
        uVar25 = (uint)uVar7;
        if ((int)uVar9 <= (int)uVar12) {
          /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar29 + 0x10),uVar7,(int)uVar9 - uVar25,0);
          iVar5 = *(int *)(lVar29 + 0x18);
          *(uint *)(lVar29 + 0x18) = uVar25;
          *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
          return (ulong)(iVar5 - uVar25);
        }
        lVar11 = (-(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3) + 0x20;
        do {
          lStack_1a8 = auVar34._8_8_;
          lStack_198 = auVar34._0_8_;
          lVar27 = *(long *)(lVar29 + 0x10);
          if (lVar27 == 0) goto code_r0x02428920;
          if (*(uint *)(lVar27 + 0x18) <= (uint)uVar12) goto code_r0x02428924;
          if (lVar14 == 0) goto code_r0x02428920;
          puVar19 = *(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 200);
          uVar9 = (*(code *)*puVar19)(lVar14,*(undefined8 *)(lVar27 + lVar11));
          auVar34._8_8_ = lStack_1a8;
          auVar34._0_8_ = lStack_198;
          if ((uVar9 & 1) == 0) {
            uVar15 = *(uint *)(lVar29 + 0x18);
            break;
          }
          uVar28 = (uint)uVar12 + 1;
          uVar12 = (ulong)uVar28;
          uVar15 = *(uint *)(lVar29 + 0x18);
          lVar11 = lVar11 + 8;
        } while ((int)uVar28 < (int)uVar15);
        uVar9 = (ulong)uVar15;
        uVar28 = (uint)uVar12;
      } while ((int)uVar15 <= (int)uVar28);
      lVar11 = *(long *)(lVar29 + 0x10);
      if (lVar11 == 0) goto code_r0x02428920;
      if ((*(uint *)(lVar11 + 0x18) <= uVar28) || (*(uint *)(lVar11 + 0x18) <= uVar25))
      goto code_r0x02428924;
      *(undefined8 *)(lVar11 + 0x20 + (long)(int)uVar25 * 8) =
           *(undefined8 *)(lVar11 + 0x20 + (long)(int)uVar28 * 8);
      uVar7 = (ulong)(uVar25 + 1);
    } while( true );
  }
  lVar11 = *(long *)(uVar7 + 0x10);
  puVar17 = puRam0000000003d3c5e8;
  uVar9 = uStack_f8;
  ppppuVar3 = ppppuStack_100;
  if (lVar11 == 0) {
code_r0x0242716c:
    ppppuVar23 = ppppuVar3;
    uVar7 = uVar9;
    uVar12 = func_0x00f78af4();
    lVar11 = extraout_x9;
    uVar25 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar7 + 0x18) = uVar25 + 1;
  }
  else {
    uVar25 = *(uint *)(uVar7 + 0x18);
    uVar12 = uVar7;
    if (uVar25 != *(uint *)(lVar11 + 0x18)) goto code_r0x02427170;
    puVar17 = *(undefined8 **)(*(long *)(puRam0000000003d3c5e8[3] + 0xc0) + 0x60);
    uVar12 = (*(code *)*puVar17)(uVar7,uVar25 + 1);
    lVar11 = *(long *)(uVar7 + 0x10);
    uVar25 = *(uint *)(uVar7 + 0x18);
    *(uint *)(uVar7 + 0x18) = uVar25 + 1;
    uVar9 = uVar7;
    ppppuVar3 = ppppuVar23;
    if (lVar11 == 0) goto code_r0x0242716c;
  }
  if (uVar25 < *(uint *)(lVar11 + 0x18)) {
    *(undefined1 *****)(lVar11 + (long)(int)uVar25 * 8 + 0x20) = ppppuVar23;
    *(int *)(uVar7 + 0x1c) = *(int *)(uVar7 + 0x1c) + 1;
    return uVar12;
  }
  uVar8 = func_0x00f78b24();
  auVar33 = func_0x00f78ac0(uVar8,0);
  lVar14 = auVar33._8_8_;
  lVar11 = auVar33._0_8_;
  auStack_130._0_8_ = ppppuVar22;
  auStack_130._8_8_ = puVar32;
  puStack_108 = &System_Collections_Generic_List_object___System_Collections_IList_Add;
  lStack_140 = unaff_x24;
  uStack_138 = unaff_x23;
  ppppuStack_120 = ppppuVar23;
  puStack_118 = (undefined *)uVar7;
  ppppuStack_110 = &pppuStack_f0;
  (*(code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x48))(lVar14,0x14);
  if (lVar11 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x28);
    lVar27 = *(long *)(*(long *)(puVar17[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar27);
    }
    if (lVar14 == 0) {
      lVar29 = 0;
    }
    else {
      lVar29 = func_0x00f78adc(lVar14,lVar27);
      if (lVar29 == 0) {
        func_0x00f78e5c(lVar14,lVar27);
        goto code_r0x0242734c;
      }
    }
    (*UNRECOVERED_JUMPTABLE_00)(lVar11,lVar29,*(undefined8 *)(*(long *)(puVar17[3] + 0xc0) + 0x28));
    iVar5 = (*(code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x68))(lVar11);
    return (ulong)(iVar5 - 1);
  }
  func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x2427350);
  (*UNRECOVERED_JUMPTABLE_00)();
code_r0x02428920:
  lStack_1a8 = auVar34._8_8_;
  lStack_198 = auVar34._0_8_;
  func_0x00f78af4();
  auVar34._8_8_ = lStack_1a8;
  auVar34._0_8_ = lStack_198;
code_r0x02428924:
  lStack_1a8 = auVar34._8_8_;
  lStack_198 = auVar34._0_8_;
  uVar8 = func_0x00f78b24();
  auVar33 = func_0x00f78ac0(uVar8,0);
  uVar12 = auVar33._0_8_;
  puStack_1c8 = &System_Collections_Generic_List_WeaponAudioManager_GraveyardInfo___RemoveAt;
  pppppppuVar36 = &pppppppuStack_1d0;
  uVar25 = *(uint *)(uVar12 + 0x18);
  uVar15 = auVar33._8_4_;
  uVar9 = uVar12;
  pppppppuStack_1d0 = &ppppppuStack_190;
  if (uVar25 <= uVar15) {
    uVar9 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    uVar25 = *(uint *)(uVar12 + 0x18);
  }
  iVar5 = uVar25 - 1;
  *(int *)(uVar12 + 0x18) = iVar5;
  if (iVar5 - uVar15 != 0 && (int)uVar15 <= iVar5) {
    puVar19 = *(undefined8 **)(uVar12 + 0x10);
    uVar9 = /*System.Array$$Copy*/ func_0x0292b4cc(puVar19,uVar15 + 1,puVar19,auVar33._8_8_,iVar5 - uVar15,0,in_x6,in_x7,
                            puVar18,lVar29);
  }
  lVar11 = *(long *)(uVar12 + 0x10);
  if (lVar11 == 0) {
    func_0x00f78af4();
  }
  else if (*(uint *)(uVar12 + 0x18) < *(uint *)(lVar11 + 0x18)) {
    *(undefined8 *)(lVar11 + (long)(int)*(uint *)(uVar12 + 0x18) * 8 + 0x20) = 0;
    *(int *)(uVar12 + 0x1c) = *(int *)(uVar12 + 0x1c) + 1;
    return uVar9;
  }
  uVar8 = func_0x00f78b24();
  auVar34 = func_0x00f78ac0(uVar8,0);
  uVar12 = auVar34._0_8_;
  puVar32 = &System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange;
  iVar5 = auVar34._8_4_;
  iVar21 = (int)puVar19;
  uVar9 = uVar12;
  if (iVar5 < 0) {
    uVar9 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
  }
  if (iVar21 < 0) {
    uVar9 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
  }
  if (*(int *)(uVar12 + 0x18) - iVar5 < iVar21) {
    uVar9 = /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
  }
  if (0 < iVar21) {
    iVar2 = *(int *)(uVar12 + 0x18) - iVar21;
    *(int *)(uVar12 + 0x18) = iVar2;
    if (iVar2 - iVar5 != 0 && iVar5 <= iVar2) {
      /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(uVar12 + 0x10),iVar21 + iVar5,*(undefined8 *)(uVar12 + 0x10),
                      auVar34._8_8_,iVar2 - iVar5,0,in_x6,in_x7,uVar7,lVar14,auVar33._8_8_,
                      auVar33._0_8_,pppppppuVar36,puVar32);
      iVar2 = *(int *)(uVar12 + 0x18);
    }
    uVar9 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar12 + 0x10),iVar2,puVar19,0);
    *(int *)(uVar12 + 0x1c) = *(int *)(uVar12 + 0x1c) + 1;
  }
  return uVar9;
}



// ============================================================
// RVA: 0x1519dd0 | Atlas.UI.UIChallengeProgressBehaviourContainer.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x032d2ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d30d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d3978: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x032d397c) */

ulong Atlas_UI_UIChallengeProgressBehaviourContainer__Update(ulong param_1)

{
  ushort uVar1;
  int iVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  uint uVar14;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 in_x6;
  undefined8 in_x7;
  uint extraout_w8;
  long *plVar19;
  long extraout_x9;
  int iVar20;
  undefined1 **ppuVar21;
  undefined1 **ppuVar22;
  undefined8 uVar23;
  undefined8 unaff_x21;
  uint uVar24;
  long unaff_x22;
  long lVar25;
  uint uVar26;
  ulong unaff_x23;
  long lVar27;
  undefined8 uVar28;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar29;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined *puVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  undefined1 ******ppppppuVar34;
  undefined1 *****pppppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  long lStack_138;
  undefined1 ****ppppuStack_130;
  undefined *puStack_128;
  code *UNRECOVERED_JUMPTABLE;
  long lStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_a0;
  ulong uStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  uVar7 = param_1;
  if ((bRam0000000003eb4dd4 & 1) == 0) {
    func_0x00f78a20(0x3d22df0);
    func_0x00f78a20(0x3d3c5f8);
    uVar7 = func_0x00f78a20(0x3d24188);
    bRam0000000003eb4dd4 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 1) {
      return uVar7;
    }
    plVar8 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else if (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
      plVar8 = (long *)0x0;
    }
    if ((bRam0000000003ec2d40 & 1) == 0) {
      func_0x00f78a20(0x3d22df0,0);
      func_0x00f78a20(0x3d3ef80);
      func_0x00f78a20(0x3d3ef88);
      bRam0000000003ec2d40 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (((**(long **)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xb8) == 0) ||
        (lVar10 = /*UnityEngine.UI.ObjectPool<object>$$Get*/ func_0x026f5fbc(**(long **)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xb8),uRam0000000003d3ef80),
        lVar10 == 0)) || (*(long **)(lVar10 + 0x10) = plVar8, plVar8 == (long *)0x0)) {
      puVar30 = &UnityEngine_UI_LayoutRebuilder__Rebuild;
      auVar33 = func_0x00f78af4();
    }
    else {
      uVar5 = (**(code **)(*plVar8 + 0x158))(plVar8,*(undefined8 *)(*plVar8 + 0x160));
      *(undefined4 *)(lVar10 + 0x18) = uVar5;
      auVar33._8_4_ = 1;
      auVar33._0_8_ = lVar10;
      puVar30 = &UNK_032d2edc;
    }
    uVar9 = auVar33._0_8_;
    ppuVar21 = &puStack_40;
    uVar7 = uVar9;
    puStack_40 = &stack0xfffffffffffffff0;
    puStack_38 = puVar30;
    if ((bRam0000000003ec2d41 & 1) == 0) {
      func_0x00f78a20(0x3d634d8);
      func_0x00f78a20(0x3d634e0);
      func_0x00f78a20(0x3d634e8);
      func_0x00f78a20(0x3d634f0);
      func_0x00f78a20(0x3d27de0);
      func_0x00f78a20(0x3d41588);
      uVar7 = func_0x00f78a20(0x3d1eaf0);
      bRam0000000003ec2d41 = 1;
    }
    if (auVar33._8_4_ != 1) {
      return uVar7;
    }
    uVar23 = *(undefined8 *)(uVar9 + 0x10);
    uVar28 = 0x3d27de0;
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar8 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
    lVar10 = plVar8[2];
    if (lVar10 == 0) {
      if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
        func_0x00f78ad0();
        plVar8 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
      }
      unaff_x22 = *plVar8;
      lVar10 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<Component>_TypeInfo*/ uRam0000000003d1eaf0);
      /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(lVar10,unaff_x22,uRam0000000003d634d8,uRam0000000003d41588);
      *(long *)(*(long *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8) + 0x10) = lVar10;
    }
    /*UnityEngine.UI.LayoutRebuilder$$PerformLayoutCalculation*/ func_0x032d3238(uVar9,uVar23,lVar10);
    plVar8 = *(long **)(uVar9 + 0x10);
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar19 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
    uVar7 = plVar19[3];
    if (uVar7 == 0) {
      if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
        func_0x00f78ad0();
        plVar19 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
      }
      unaff_x22 = *plVar19;
      uVar7 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<Component>_TypeInfo*/ uRam0000000003d1eaf0);
      /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(uVar7,unaff_x22,uRam0000000003d634e0,uRam0000000003d41588);
      *(ulong *)(*(long *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8) + 0x18) = uVar7;
    }
    puVar30 = &UNK_032d30dc;
    puVar4 = &stack0xffffffffffffff90;
    uVar11 = uVar9;
    plVar19 = plVar8;
    uVar29 = uVar7;
    do {
      plVar15 = plVar8;
      *(long *)(puVar4 + -0x60) = unaff_x28;
      *(undefined8 *)(puVar4 + -0x58) = unaff_x27;
      *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
      *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar4 + -0x38) = uVar28;
      *(long *)(puVar4 + -0x30) = unaff_x22;
      *(ulong *)(puVar4 + -0x28) = uVar29;
      *(long **)(puVar4 + -0x20) = plVar19;
      *(ulong *)(puVar4 + -0x18) = uVar11;
      *(undefined1 ***)(puVar4 + -0x10) = ppuVar21;
      *(undefined **)(puVar4 + -8) = puVar30;
      ppuVar21 = (undefined1 **)(puVar4 + -0x10);
      if ((bRam0000000003ec2d42 & 1) == 0) {
        func_0x00f78a20(0x3d19778);
        func_0x00f78a20(0x3d222b0);
        func_0x00f78a20(0x3d22df0);
        func_0x00f78a20(0x3d398f8);
        func_0x00f78a20(0x3d39900);
        func_0x00f78a20(0x3d1d6c0);
        func_0x00f78a20(0x3d3a1c0);
        func_0x00f78a20(0x3d3a1c8);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d24188);
        func_0x00f78a20(0x3d247e0);
        func_0x00f78a20(0x3d25458);
        func_0x00f78a20(0x3d41590);
        bRam0000000003ec2d42 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar15,0,0);
      if ((uVar11 & 1) != 0) {
        return uVar11;
      }
      if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x22 = /*UnityEngine.UI.ListPool<RectMask2D>$$Get*/ func_0x0233df3c(uRam0000000003d398f8);
      uVar28 = /*UnityEngine.UI.ILayoutController_var*/ uRam0000000003d19778;
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar12 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar28,0);
      uVar28 = unaff_x26;
      uVar23 = unaff_x27;
      if (plVar15 == (long *)0x0) {
code_r0x032d3918:
        func_0x00f78af4();
        unaff_x26 = uVar28;
        unaff_x27 = uVar23;
      }
      else {
        /*UnityEngine.Component$$GetComponents*/ func_0x03227d78(plVar15,uVar12,unaff_x22,0);
        if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*UnityEngine.UI.LayoutRebuilder$$StripDisabledBehavioursFromList*/ func_0x032d2d00(unaff_x22);
        if (unaff_x22 == 0) goto code_r0x032d3918;
        uVar11 = (ulong)*(uint *)(unaff_x22 + 0x18);
        if ((int)*(uint *)(unaff_x22 + 0x18) < 1) {
code_r0x032d3994:
          if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar10 = lRam0000000003d39900;
          uVar28 = *(undefined8 *)(puVar4 + -0x30);
          uVar23 = *(undefined8 *)(puVar4 + -0x40);
          uVar12 = *(undefined8 *)(puVar4 + -0x38);
          *(undefined8 *)(puVar4 + -0x40) = uVar23;
          *(undefined8 *)(puVar4 + -0x38) = uVar12;
          *(undefined8 *)(puVar4 + -0x30) = uVar28;
          *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)(puVar4 + -0x28);
          *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
          *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
          *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
          *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
          lVar13 = *(long *)(lRam0000000003d39900 + 0x18);
          if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar13);
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
          uVar1 = *(ushort *)(lVar13 + 0x132);
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar13);
            uVar1 = *(ushort *)(lVar13 + 0x132);
          }
          if ((uVar1 >> 10 & 1) != 0) {
            lVar13 = *(long *)(lVar10 + 0x18);
            if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar13);
            }
            lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
            if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar13);
            }
            if (*(int *)(lVar13 + 0xe0) == 0) {
              lVar13 = *(long *)(lVar10 + 0x18);
              if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar13);
              }
              lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
              if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar13);
              }
              func_0x00f78ad0(lVar13);
            }
          }
          lVar13 = *(long *)(lVar10 + 0x18);
          if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar13);
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
          if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar13);
          }
          lVar13 = **(long **)(lVar13 + 0xb8);
          if (lVar13 != 0) {
            lVar27 = *(long *)(lVar10 + 0x18);
            uVar1 = *(ushort *)(lVar27 + 0x132);
            lVar25 = lVar27;
            if ((uVar1 & 1) == 0) {
              func_0x00fac028(lVar27);
              lVar25 = *(long *)(lVar10 + 0x18);
              uVar1 = *(ushort *)(lVar25 + 0x132);
            }
            UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar27 + 0xc0) + 0x18);
            if ((uVar1 & 1) == 0) {
              *(code **)(puVar4 + -0x48) = UNRECOVERED_JUMPTABLE_00;
              func_0x00fac028(lVar25);
              UNRECOVERED_JUMPTABLE_00 = *(code **)(puVar4 + -0x48);
            }
                    /* WARNING: Could not recover jumptable at 0x0233e1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar7 = (*UNRECOVERED_JUMPTABLE_00)
                              (lVar13,unaff_x22,*(undefined8 *)(*(long *)(lVar25 + 0xc0) + 0x18));
            return uVar7;
          }
          lVar13 = func_0x00f78af4();
          *(undefined8 *)(puVar4 + -0x90) = uVar23;
          *(undefined8 *)(puVar4 + -0x88) = uVar12;
          *(undefined8 *)(puVar4 + -0x80) = uVar28;
          *(undefined8 *)(puVar4 + -0x78) = 0;
          *(long *)(puVar4 + -0x70) = lVar10;
          *(long *)(puVar4 + -0x68) = unaff_x22;
          *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x10;
          *(undefined **)(puVar4 + -0x58) = &UnityEngine_UI_ListPool_object____cctor;
          lVar10 = *(long *)(lVar13 + 0x18);
          if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar10);
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
          if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar10);
          }
          uVar28 = func_0x00f78aec(lVar10);
          lVar25 = *(long *)(lVar13 + 0x18);
          uVar1 = *(ushort *)(lVar25 + 0x132);
          lVar10 = lVar25;
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar25);
            lVar10 = *(long *)(lVar13 + 0x18);
            uVar1 = *(ushort *)(lVar10 + 0x132);
          }
          UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar25 + 0xc0) + 0x30);
          lVar25 = lVar10;
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar10);
            lVar25 = *(long *)(lVar13 + 0x18);
            uVar1 = *(ushort *)(lVar25 + 0x132);
          }
          uVar23 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20);
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar25);
          }
          (*UNRECOVERED_JUMPTABLE_00)
                    (uVar28,0,uVar23,*(undefined8 *)(*(long *)(lVar25 + 0xc0) + 0x30));
          lVar10 = *(long *)(lVar13 + 0x18);
          if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar10);
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x38);
          if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar10);
          }
          uVar23 = func_0x00f78aec(lVar10);
          lVar25 = *(long *)(lVar13 + 0x18);
          uVar1 = *(ushort *)(lVar25 + 0x132);
          lVar10 = lVar25;
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar25);
            lVar10 = *(long *)(lVar13 + 0x18);
            uVar1 = *(ushort *)(lVar10 + 0x132);
          }
          UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar25 + 0xc0) + 0x40);
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar10);
          }
          uVar7 = (*UNRECOVERED_JUMPTABLE_00)
                            (uVar23,0,uVar28,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x40));
          lVar10 = *(long *)(lVar13 + 0x18);
          if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
            uVar7 = func_0x00fac028(lVar10);
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
          if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
            uVar7 = func_0x00fac028(lVar10);
          }
          **(undefined8 **)(lVar10 + 0xb8) = uVar23;
          return uVar7;
        }
        lVar10 = 4;
        unaff_x26 = 0x3d222b0;
        unaff_x27 = 0x3d41590;
        do {
          if ((uVar11 & 0xffffffff) <= lVar10 - 4U) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar13 = func_0x00f78adc(*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + lVar10 * 8),
                                   /*UnityEngine.UI.ILayoutSelfController_TypeInfo*/ uRam0000000003d222b0);
          if (lVar13 != 0) {
            if ((ulong)*(uint *)(unaff_x22 + 0x18) <= lVar10 - 4U) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            uVar28 = unaff_x26;
            uVar23 = unaff_x27;
            if (uVar7 == 0) goto code_r0x032d3918;
            /*UnityEngine.Events.UnityAction<object>$$Invoke*/ func_0x01b7eab8(uVar7,*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + lVar10 * 8),
                            uRam0000000003d41590);
          }
          uVar11 = (ulong)*(int *)(unaff_x22 + 0x18);
          lVar13 = lVar10 + -3;
          lVar10 = lVar10 + 1;
        } while (lVar13 < (long)uVar11);
        if (0 < *(int *)(unaff_x22 + 0x18)) {
          unaff_x28 = 4;
          do {
            uVar29 = unaff_x28 - 4;
            if ((uVar11 & 0xffffffff) <= uVar29) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar10 = func_0x00f78adc(*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + unaff_x28 * 8),
                                     /*UnityEngine.UI.ILayoutSelfController_TypeInfo*/ uRam0000000003d222b0);
            if (lVar10 == 0) {
              if (*(uint *)(unaff_x22 + 0x18) <= uVar29) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar8 = *(long **)(*(long *)(unaff_x22 + 0x10) + unaff_x28 * 8);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar8,0);
              if ((iVar6 == 0) || (plVar8 == (long *)0x0)) {
code_r0x032d388c:
                if (*(uint *)(unaff_x22 + 0x18) <= uVar29) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
              }
              else {
                if ((*(byte *)(*plVar8 + 300) < *(byte *)(/*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0 + 300)) ||
                   (*(long *)(*(long *)(*plVar8 + 200) +
                              (ulong)*(byte *)(/*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0 + 300) * 8 + -8) !=
                    /*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0)) goto code_r0x032d388c;
                lVar10 = plVar8[3];
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,plVar15,0);
                if (iVar6 == 0) goto code_r0x032d38b8;
                if (*(uint *)(unaff_x22 + 0x18) <= uVar29) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
              }
              uVar23 = 0x3d41590;
              uVar28 = 0x3d222b0;
              if (uVar7 == 0) goto code_r0x032d3918;
              /*UnityEngine.Events.UnityAction<object>$$Invoke*/ func_0x01b7eab8(uVar7,*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + unaff_x28 * 8),
                              uRam0000000003d41590);
            }
code_r0x032d38b8:
            uVar11 = (ulong)*(int *)(unaff_x22 + 0x18);
            lVar10 = unaff_x28 + -3;
            unaff_x28 = unaff_x28 + 1;
          } while (lVar10 < (long)uVar11);
        }
      }
      iVar6 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(plVar15,0);
      unaff_x25 = 0x3d1d6c0;
      if (iVar6 < 1) goto code_r0x032d3994;
      uVar28 = 0;
      unaff_x24 = 0x3d24188;
      plVar8 = (long *)/*UnityEngine.Transform$$GetChild*/ func_0x03277648(plVar15,0,0);
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
      }
      else if (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
        plVar8 = (long *)0x0;
      }
      puVar30 = &UNK_032d397c;
      puVar4 = puVar4 + -0x60;
      uVar11 = uVar7;
      plVar19 = plVar15;
      uVar29 = uVar9;
    } while( true );
  }
  uVar9 = func_0x00f78af4();
  puStack_40 = (undefined1 *)0x3eb4000;
  ppuVar21 = (undefined1 **)0x3eb4000;
  uVar7 = uVar9;
  puStack_38 = (undefined *)param_1;
  if ((bRam0000000003eb4dd5 & 1) == 0) {
    func_0x00f78a20(0x3d2a360);
    func_0x00f78a20(0x3d1b5b8);
    func_0x00f78a20(0x3d5f6d8);
    uVar7 = func_0x00f78a20(0x3d5f6e0);
    bRam0000000003eb4dd5 = 1;
  }
  lVar10 = *(long *)(uVar9 + 0x20);
  if (lVar10 != 0) {
    uVar24 = *(uint *)(lVar10 + 0x18);
    if (0 < (int)uVar24) {
      unaff_x23 = 0;
      unaff_x24 = 0x3d1b5b8;
      do {
        uVar14 = (uint)unaff_x23;
        if (uVar24 <= uVar14) {
          uVar28 = func_0x00f78b24();
          func_0x00f78ac0(uVar28,0);
          goto code_r0x01519fdc;
        }
        ppuVar21 = *(undefined1 ***)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
        unaff_x21 = func_0x00f78aec(/*System.Action<UIChallengeProgressBehaviour>_TypeInfo*/ uRam0000000003d1b5b8);
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,uVar9,uRam0000000003d5f6e0,uRam0000000003d2a360);
        if (ppuVar21 == (undefined1 **)0x0) goto code_r0x01519fdc;
        Atlas_UI_UIChallengeProgressBehaviour__remove_OnStartResize(ppuVar21,unaff_x21);
        unaff_x21 = func_0x00f78aec(/*System.Action<UIChallengeProgressBehaviour>_TypeInfo*/ uRam0000000003d1b5b8);
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,uVar9,uRam0000000003d5f6d8,uRam0000000003d2a360);
        uVar7 = Atlas_UI_UIChallengeProgressBehaviour__remove_OnCompleteResize(ppuVar21,unaff_x21);
        unaff_x23 = (ulong)(uVar14 + 1);
        uVar24 = *(uint *)(lVar10 + 0x18);
      } while ((int)(uVar14 + 1) < (int)uVar24);
    }
    return uVar7;
  }
code_r0x01519fdc:
  auVar31 = func_0x00f78af4();
  ppuVar22 = auVar31._8_8_;
  puStack_88 = &Atlas_UI_UIChallengeProgressBehaviourContainer__OnElementStartsResizing;
  ppuStack_b0 = (undefined1 **)lVar10;
  puStack_a8 = (undefined *)unaff_x21;
  ppuStack_a0 = ppuVar21;
  uStack_98 = uVar9;
  puStack_90 = &stack0xffffffffffffffd0;
  if ((bRam0000000003eb4dd6 & 1) == 0) {
    func_0x00f78a20(0x3d3c5e8);
    bRam0000000003eb4dd6 = 1;
  }
  puVar30 = puStack_a8;
  ppuVar21 = ppuStack_b0;
  uVar7 = *(ulong *)(auVar31._0_8_ + 0x28);
  if (uVar7 == 0) {
    auVar32 = func_0x00f78af4();
    uStack_d8 = 0x3eb4000;
    puStack_b8 = &Atlas_UI_UIChallengeProgressBehaviourContainer__OnElementFinishedResizing;
    lStack_e0 = lVar10;
    ppuStack_c0 = &puStack_90;
    if ((bRam0000000003eb4dd7 & 1) == 0) {
      auStack_d0 = auVar31;
      func_0x00f78a20(0x3d3c5f0);
      bRam0000000003eb4dd7 = 1;
      auVar31 = auStack_d0;
    }
    uVar7 = uStack_d8;
    lVar13 = lStack_e0;
    puVar16 = puRam0000000003d3c5f0;
    lVar25 = *(long *)(auVar32._0_8_ + 0x28);
    auStack_d0 = auVar31;
    if (lVar25 == 0) {
      uVar7 = func_0x00f78af4();
      uStack_108 = 0x3eb4000;
      puStack_e8 = &Atlas_UI_UIChallengeProgressBehaviourContainer___ctor;
      lStack_110 = lVar10;
      pppuStack_f0 = &ppuStack_c0;
      auStack_100 = auVar32;
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
    if (lVar25 != 0) {
      uVar28 = (*(code *)**(undefined8 **)(*(long *)(puRam0000000003d3c5f0[3] + 0xc0) + 0xf8))();
      if (-1 < (int)(uint)uVar28) {
        (*(code *)**(undefined8 **)(*(long *)(puVar16[3] + 0xc0) + 0x108))(lVar25,uVar28);
      }
      return (ulong)(~(uint)uVar28 >> 0x1f);
    }
    auVar32 = func_0x00f78af4(0,auVar32._8_8_);
    lVar25 = auVar32._8_8_;
    lVar10 = auVar32._0_8_;
    lStack_110 = lVar13;
    uStack_108 = uVar7;
    puStack_e8 = &System_Collections_Generic_List_object___System_Collections_IList_Remove;
    uVar7 = **(ulong **)(puVar16[3] + 0xc0);
    uVar1 = *(ushort *)(uVar7 + 0x132);
    puVar17 = puVar16;
    pppuStack_f0 = &ppuStack_c0;
    auStack_100 = auVar31;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(uVar7);
      uVar1 = *(ushort *)(uVar7 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      uVar7 = **(ulong **)(puVar16[3] + 0xc0);
      if ((*(ushort *)(uVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(uVar7);
      }
      if (*(int *)(uVar7 + 0xe0) == 0) {
        uVar7 = **(ulong **)(puVar16[3] + 0xc0);
        if ((*(ushort *)(uVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(uVar7);
        }
        func_0x00f78ad0(uVar7);
      }
    }
    uVar9 = (*(code *)**(undefined8 **)(*(long *)(puVar16[3] + 0xc0) + 0xa0))(lVar25);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    if (lVar10 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(puVar16[3] + 0xc0) + 0x110);
      lVar13 = *(long *)(*(long *)(puVar16[3] + 0xc0) + 0x38);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      if (lVar25 == 0) {
        lVar27 = 0;
      }
      else {
        lVar27 = func_0x00f78adc(lVar25,lVar13);
        if (lVar27 == 0) {
          uVar7 = func_0x00f78e5c(lVar25,lVar13);
          return uVar7;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02428794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*UNRECOVERED_JUMPTABLE)
                        (lVar10,lVar27,*(undefined8 *)(*(long *)(puVar16[3] + 0xc0) + 0x110));
      return uVar7;
    }
    auVar31 = func_0x00f78af4();
    lVar13 = auVar31._8_8_;
    lVar27 = auVar31._0_8_;
    puStack_128 = &System_Collections_Generic_List_AddressablesImpl_ResourceLocatorInfo___RemoveAll;
    puVar18 = puVar17;
    uStack_160 = unaff_x24;
    uStack_158 = unaff_x23;
    uStack_150 = uVar7;
    puStack_140 = puVar16;
    ppppuStack_130 = &pppuStack_f0;
    if (lVar13 == 0) {
      lStack_148 = lVar25;
      lStack_138 = lVar10;
      /*System.ThrowHelper$$ThrowArgumentNullException*/ func_0x029ef698(8);
      auVar32._8_8_ = lStack_148;
      auVar32._0_8_ = lStack_138;
    }
    uVar9 = (ulong)*(uint *)(lVar27 + 0x18);
    if ((int)*(uint *)(lVar27 + 0x18) < 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      do {
        lStack_148 = auVar32._8_8_;
        lStack_138 = auVar32._0_8_;
        lVar10 = *(long *)(lVar27 + 0x10);
        if (lVar10 == 0) goto code_r0x02428920;
        if (*(uint *)(lVar10 + 0x18) <= uVar11) goto code_r0x02428924;
        if (lVar13 == 0) goto code_r0x02428920;
        puVar18 = *(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 200);
        iVar6 = (*(code *)*puVar18)(lVar13,*(undefined8 *)(lVar10 + uVar11 * 8 + 0x20));
        auVar32._8_8_ = lStack_148;
        auVar32._0_8_ = lStack_138;
        auVar31._8_8_ = lStack_148;
        auVar31._0_8_ = lStack_138;
        if (iVar6 != 0) {
          uVar9 = (ulong)*(uint *)(lVar27 + 0x18);
          auVar32 = auVar31;
          break;
        }
        uVar11 = uVar11 + 1;
        uVar9 = (ulong)*(int *)(lVar27 + 0x18);
      } while ((long)uVar11 < (long)uVar9);
    }
    uVar7 = uVar11;
    uVar11 = uVar7;
    if ((int)uVar9 <= (int)uVar7) {
      return 0;
    }
    do {
      uVar11 = (ulong)((int)uVar11 + 1);
      do {
        lStack_148 = auVar32._8_8_;
        lStack_138 = auVar32._0_8_;
        uVar24 = (uint)uVar7;
        if ((int)uVar9 <= (int)uVar11) {
          /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar27 + 0x10),uVar7,(int)uVar9 - uVar24,0);
          iVar6 = *(int *)(lVar27 + 0x18);
          *(uint *)(lVar27 + 0x18) = uVar24;
          *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
          return (ulong)(iVar6 - uVar24);
        }
        lVar10 = (-(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3) + 0x20;
        do {
          lStack_148 = auVar32._8_8_;
          lStack_138 = auVar32._0_8_;
          lVar25 = *(long *)(lVar27 + 0x10);
          if (lVar25 == 0) goto code_r0x02428920;
          if (*(uint *)(lVar25 + 0x18) <= (uint)uVar11) goto code_r0x02428924;
          if (lVar13 == 0) goto code_r0x02428920;
          puVar18 = *(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 200);
          uVar9 = (*(code *)*puVar18)(lVar13,*(undefined8 *)(lVar25 + lVar10));
          auVar32._8_8_ = lStack_148;
          auVar32._0_8_ = lStack_138;
          if ((uVar9 & 1) == 0) {
            uVar14 = *(uint *)(lVar27 + 0x18);
            break;
          }
          uVar26 = (uint)uVar11 + 1;
          uVar11 = (ulong)uVar26;
          uVar14 = *(uint *)(lVar27 + 0x18);
          lVar10 = lVar10 + 8;
        } while ((int)uVar26 < (int)uVar14);
        uVar9 = (ulong)uVar14;
        uVar26 = (uint)uVar11;
      } while ((int)uVar14 <= (int)uVar26);
      lVar10 = *(long *)(lVar27 + 0x10);
      if (lVar10 == 0) goto code_r0x02428920;
      if ((*(uint *)(lVar10 + 0x18) <= uVar26) || (*(uint *)(lVar10 + 0x18) <= uVar24))
      goto code_r0x02428924;
      *(undefined8 *)(lVar10 + 0x20 + (long)(int)uVar24 * 8) =
           *(undefined8 *)(lVar10 + 0x20 + (long)(int)uVar26 * 8);
      uVar7 = (ulong)(uVar24 + 1);
    } while( true );
  }
  lVar10 = *(long *)(uVar7 + 0x10);
  puVar16 = puRam0000000003d3c5e8;
  uVar9 = uStack_98;
  ppuVar3 = ppuStack_a0;
  if (lVar10 == 0) {
code_r0x0242716c:
    ppuVar22 = ppuVar3;
    uVar7 = uVar9;
    uVar11 = func_0x00f78af4();
    lVar10 = extraout_x9;
    uVar24 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar7 + 0x18) = uVar24 + 1;
  }
  else {
    uVar24 = *(uint *)(uVar7 + 0x18);
    uVar11 = uVar7;
    if (uVar24 != *(uint *)(lVar10 + 0x18)) goto code_r0x02427170;
    puVar16 = *(undefined8 **)(*(long *)(puRam0000000003d3c5e8[3] + 0xc0) + 0x60);
    uVar11 = (*(code *)*puVar16)(uVar7,uVar24 + 1);
    lVar10 = *(long *)(uVar7 + 0x10);
    uVar24 = *(uint *)(uVar7 + 0x18);
    *(uint *)(uVar7 + 0x18) = uVar24 + 1;
    uVar9 = uVar7;
    ppuVar3 = ppuVar22;
    if (lVar10 == 0) goto code_r0x0242716c;
  }
  if (uVar24 < *(uint *)(lVar10 + 0x18)) {
    *(undefined1 ***)(lVar10 + (long)(int)uVar24 * 8 + 0x20) = ppuVar22;
    *(int *)(uVar7 + 0x1c) = *(int *)(uVar7 + 0x1c) + 1;
    return uVar11;
  }
  uVar28 = func_0x00f78b24();
  auVar31 = func_0x00f78ac0(uVar28,0);
  lVar13 = auVar31._8_8_;
  lVar10 = auVar31._0_8_;
  auStack_d0._0_8_ = ppuVar21;
  auStack_d0._8_8_ = puVar30;
  puStack_a8 = &System_Collections_Generic_List_object___System_Collections_IList_Add;
  lStack_e0 = unaff_x24;
  uStack_d8 = unaff_x23;
  ppuStack_c0 = ppuVar22;
  puStack_b8 = (undefined *)uVar7;
  ppuStack_b0 = &puStack_90;
  (*(code *)**(undefined8 **)(*(long *)(puVar16[3] + 0xc0) + 0x48))(lVar13,0x14);
  if (lVar10 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(puVar16[3] + 0xc0) + 0x28);
    lVar25 = *(long *)(*(long *)(puVar16[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar25 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar25);
    }
    if (lVar13 == 0) {
      lVar27 = 0;
    }
    else {
      lVar27 = func_0x00f78adc(lVar13,lVar25);
      if (lVar27 == 0) {
        func_0x00f78e5c(lVar13,lVar25);
        goto code_r0x0242734c;
      }
    }
    (*UNRECOVERED_JUMPTABLE_00)(lVar10,lVar27,*(undefined8 *)(*(long *)(puVar16[3] + 0xc0) + 0x28));
    iVar6 = (*(code *)**(undefined8 **)(*(long *)(puVar16[3] + 0xc0) + 0x68))(lVar10);
    return (ulong)(iVar6 - 1);
  }
  func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x2427350);
  (*UNRECOVERED_JUMPTABLE_00)();
code_r0x02428920:
  lStack_148 = auVar32._8_8_;
  lStack_138 = auVar32._0_8_;
  func_0x00f78af4();
  auVar32._8_8_ = lStack_148;
  auVar32._0_8_ = lStack_138;
code_r0x02428924:
  lStack_148 = auVar32._8_8_;
  lStack_138 = auVar32._0_8_;
  uVar28 = func_0x00f78b24();
  auVar31 = func_0x00f78ac0(uVar28,0);
  uVar11 = auVar31._0_8_;
  puStack_168 = &System_Collections_Generic_List_WeaponAudioManager_GraveyardInfo___RemoveAt;
  ppppppuVar34 = &pppppuStack_170;
  uVar24 = *(uint *)(uVar11 + 0x18);
  uVar14 = auVar31._8_4_;
  uVar9 = uVar11;
  pppppuStack_170 = &ppppuStack_130;
  if (uVar24 <= uVar14) {
    uVar9 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    uVar24 = *(uint *)(uVar11 + 0x18);
  }
  iVar6 = uVar24 - 1;
  *(int *)(uVar11 + 0x18) = iVar6;
  if (iVar6 - uVar14 != 0 && (int)uVar14 <= iVar6) {
    puVar18 = *(undefined8 **)(uVar11 + 0x10);
    uVar9 = /*System.Array$$Copy*/ func_0x0292b4cc(puVar18,uVar14 + 1,puVar18,auVar31._8_8_,iVar6 - uVar14,0,in_x6,in_x7,
                            puVar17,lVar27);
  }
  lVar10 = *(long *)(uVar11 + 0x10);
  if (lVar10 == 0) {
    func_0x00f78af4();
  }
  else if (*(uint *)(uVar11 + 0x18) < *(uint *)(lVar10 + 0x18)) {
    *(undefined8 *)(lVar10 + (long)(int)*(uint *)(uVar11 + 0x18) * 8 + 0x20) = 0;
    *(int *)(uVar11 + 0x1c) = *(int *)(uVar11 + 0x1c) + 1;
    return uVar9;
  }
  uVar28 = func_0x00f78b24();
  auVar32 = func_0x00f78ac0(uVar28,0);
  uVar11 = auVar32._0_8_;
  puVar30 = &System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange;
  iVar6 = auVar32._8_4_;
  iVar20 = (int)puVar18;
  uVar9 = uVar11;
  if (iVar6 < 0) {
    uVar9 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
  }
  if (iVar20 < 0) {
    uVar9 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
  }
  if (*(int *)(uVar11 + 0x18) - iVar6 < iVar20) {
    uVar9 = /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
  }
  if (0 < iVar20) {
    iVar2 = *(int *)(uVar11 + 0x18) - iVar20;
    *(int *)(uVar11 + 0x18) = iVar2;
    if (iVar2 - iVar6 != 0 && iVar6 <= iVar2) {
      /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(uVar11 + 0x10),iVar20 + iVar6,*(undefined8 *)(uVar11 + 0x10),
                      auVar32._8_8_,iVar2 - iVar6,0,in_x6,in_x7,uVar7,lVar13,auVar31._8_8_,
                      auVar31._0_8_,ppppppuVar34,puVar30);
      iVar2 = *(int *)(uVar11 + 0x18);
    }
    uVar9 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar11 + 0x10),iVar2,puVar18,0);
    *(int *)(uVar11 + 0x1c) = *(int *)(uVar11 + 0x1c) + 1;
  }
  return uVar9;
}



// ============================================================
// RVA: 0x1519ea4 | Atlas.UI.UIChallengeProgressBehaviourContainer.OnDestroy
// ============================================================

ulong Atlas_UI_UIChallengeProgressBehaviourContainer__OnDestroy(ulong param_1)

{
  ushort uVar1;
  int iVar2;
  undefined1 **ppuVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 in_x6;
  undefined8 in_x7;
  uint extraout_w8;
  long extraout_x9;
  int iVar14;
  undefined1 **ppuVar15;
  undefined1 **ppuVar16;
  undefined8 unaff_x21;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  ulong unaff_x23;
  code *pcVar22;
  undefined8 unaff_x24;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 ******ppppppuVar25;
  undefined *puVar26;
  undefined1 *****pppppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  undefined1 ****ppppuStack_110;
  undefined *puStack_108;
  code *UNRECOVERED_JUMPTABLE;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  undefined1 ***pppuStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 **ppuStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  ppuVar15 = (undefined1 **)0x3eb4000;
  uVar5 = param_1;
  if ((bRam0000000003eb4dd5 & 1) == 0) {
    func_0x00f78a20(0x3d2a360);
    func_0x00f78a20(0x3d1b5b8);
    func_0x00f78a20(0x3d5f6d8);
    uVar5 = func_0x00f78a20(0x3d5f6e0);
    bRam0000000003eb4dd5 = 1;
  }
  lVar18 = *(long *)(param_1 + 0x20);
  if (lVar18 != 0) {
    uVar17 = *(uint *)(lVar18 + 0x18);
    if (0 < (int)uVar17) {
      unaff_x23 = 0;
      unaff_x24 = 0x3d1b5b8;
      do {
        uVar10 = (uint)unaff_x23;
        if (uVar17 <= uVar10) {
          uVar7 = func_0x00f78b24();
          func_0x00f78ac0(uVar7,0);
          goto LAB_01519fdc;
        }
        ppuVar15 = *(undefined1 ***)(lVar18 + (long)(int)uVar10 * 8 + 0x20);
        unaff_x21 = func_0x00f78aec(/*System.Action<UIChallengeProgressBehaviour>_TypeInfo*/ uRam0000000003d1b5b8);
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,param_1,uRam0000000003d5f6e0,uRam0000000003d2a360);
        if (ppuVar15 == (undefined1 **)0x0) goto LAB_01519fdc;
        Atlas_UI_UIChallengeProgressBehaviour__remove_OnStartResize(ppuVar15,unaff_x21);
        unaff_x21 = func_0x00f78aec(/*System.Action<UIChallengeProgressBehaviour>_TypeInfo*/ uRam0000000003d1b5b8);
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,param_1,uRam0000000003d5f6d8,uRam0000000003d2a360);
        uVar5 = Atlas_UI_UIChallengeProgressBehaviour__remove_OnCompleteResize(ppuVar15,unaff_x21);
        unaff_x23 = (ulong)(uVar10 + 1);
        uVar17 = *(uint *)(lVar18 + 0x18);
      } while ((int)(uVar10 + 1) < (int)uVar17);
    }
    return uVar5;
  }
LAB_01519fdc:
  auVar23 = func_0x00f78af4();
  ppuVar16 = auVar23._8_8_;
  puStack_68 = &Atlas_UI_UIChallengeProgressBehaviourContainer__OnElementStartsResizing;
  ppuStack_90 = (undefined1 **)lVar18;
  puStack_88 = (undefined *)unaff_x21;
  ppuStack_80 = ppuVar15;
  uStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4dd6 & 1) == 0) {
    func_0x00f78a20(0x3d3c5e8);
    bRam0000000003eb4dd6 = 1;
  }
  puVar26 = puStack_88;
  ppuVar15 = ppuStack_90;
  uVar5 = *(ulong *)(auVar23._0_8_ + 0x28);
  if (uVar5 == 0) {
    auVar24 = func_0x00f78af4();
    uStack_b8 = 0x3eb4000;
    puStack_98 = &Atlas_UI_UIChallengeProgressBehaviourContainer__OnElementFinishedResizing;
    lStack_c0 = lVar18;
    ppuStack_a0 = &puStack_70;
    if ((bRam0000000003eb4dd7 & 1) == 0) {
      auStack_b0 = auVar23;
      func_0x00f78a20(0x3d3c5f0);
      bRam0000000003eb4dd7 = 1;
      auVar23 = auStack_b0;
    }
    uVar5 = uStack_b8;
    lVar20 = lStack_c0;
    puVar11 = puRam0000000003d3c5f0;
    lVar19 = *(long *)(auVar24._0_8_ + 0x28);
    auStack_b0 = auVar23;
    if (lVar19 == 0) {
      uVar5 = func_0x00f78af4();
      uStack_e8 = 0x3eb4000;
      puStack_c8 = &Atlas_UI_UIChallengeProgressBehaviourContainer___ctor;
      lStack_f0 = lVar18;
      pppuStack_d0 = &ppuStack_a0;
      auStack_e0 = auVar24;
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return uVar5;
    }
    if (lVar19 != 0) {
      uVar7 = (*(code *)**(undefined8 **)(*(long *)(puRam0000000003d3c5f0[3] + 0xc0) + 0xf8))();
      if (-1 < (int)(uint)uVar7) {
        (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x108))(lVar19,uVar7);
      }
      return (ulong)(~(uint)uVar7 >> 0x1f);
    }
    auVar24 = func_0x00f78af4(0,auVar24._8_8_);
    lVar19 = auVar24._8_8_;
    lVar18 = auVar24._0_8_;
    lStack_f0 = lVar20;
    uStack_e8 = uVar5;
    puStack_c8 = &System_Collections_Generic_List_object___System_Collections_IList_Remove;
    uVar5 = **(ulong **)(puVar11[3] + 0xc0);
    uVar1 = *(ushort *)(uVar5 + 0x132);
    puVar12 = puVar11;
    pppuStack_d0 = &ppuStack_a0;
    auStack_e0 = auVar23;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(uVar5);
      uVar1 = *(ushort *)(uVar5 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      uVar5 = **(ulong **)(puVar11[3] + 0xc0);
      if ((*(ushort *)(uVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(uVar5);
      }
      if (*(int *)(uVar5 + 0xe0) == 0) {
        uVar5 = **(ulong **)(puVar11[3] + 0xc0);
        if ((*(ushort *)(uVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(uVar5);
        }
        func_0x00f78ad0(uVar5);
      }
    }
    uVar9 = (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0xa0))(lVar19);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    if (lVar18 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x110);
      lVar20 = *(long *)(*(long *)(puVar11[3] + 0xc0) + 0x38);
      if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar20);
      }
      if (lVar19 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = func_0x00f78adc(lVar19,lVar20);
        if (lVar8 == 0) {
          uVar5 = func_0x00f78e5c(lVar19,lVar20);
          return uVar5;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02428794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*UNRECOVERED_JUMPTABLE)
                        (lVar18,lVar8,*(undefined8 *)(*(long *)(puVar11[3] + 0xc0) + 0x110));
      return uVar5;
    }
    auVar23 = func_0x00f78af4();
    lVar20 = auVar23._8_8_;
    lVar8 = auVar23._0_8_;
    puStack_108 = &System_Collections_Generic_List_AddressablesImpl_ResourceLocatorInfo___RemoveAll;
    puVar13 = puVar12;
    uStack_140 = unaff_x24;
    uStack_138 = unaff_x23;
    uStack_130 = uVar5;
    puStack_120 = puVar11;
    ppppuStack_110 = &pppuStack_d0;
    if (lVar20 == 0) {
      lStack_128 = lVar19;
      lStack_118 = lVar18;
      /*System.ThrowHelper$$ThrowArgumentNullException*/ func_0x029ef698(8);
      auVar24._8_8_ = lStack_128;
      auVar24._0_8_ = lStack_118;
    }
    uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
    if ((int)*(uint *)(lVar8 + 0x18) < 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      do {
        lStack_128 = auVar24._8_8_;
        lStack_118 = auVar24._0_8_;
        lVar18 = *(long *)(lVar8 + 0x10);
        if (lVar18 == 0) goto code_r0x02428920;
        if (*(uint *)(lVar18 + 0x18) <= uVar6) goto code_r0x02428924;
        if (lVar20 == 0) goto code_r0x02428920;
        puVar13 = *(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 200);
        iVar4 = (*(code *)*puVar13)(lVar20,*(undefined8 *)(lVar18 + uVar6 * 8 + 0x20));
        auVar24._8_8_ = lStack_128;
        auVar24._0_8_ = lStack_118;
        auVar23._8_8_ = lStack_128;
        auVar23._0_8_ = lStack_118;
        if (iVar4 != 0) {
          uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
          auVar24 = auVar23;
          break;
        }
        uVar6 = uVar6 + 1;
        uVar9 = (ulong)*(int *)(lVar8 + 0x18);
      } while ((long)uVar6 < (long)uVar9);
    }
    uVar5 = uVar6;
    uVar6 = uVar5;
    if ((int)uVar9 <= (int)uVar5) {
      return 0;
    }
    do {
      uVar6 = (ulong)((int)uVar6 + 1);
      do {
        lStack_128 = auVar24._8_8_;
        lStack_118 = auVar24._0_8_;
        uVar17 = (uint)uVar5;
        if ((int)uVar9 <= (int)uVar6) {
          /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar8 + 0x10),uVar5,(int)uVar9 - uVar17,0);
          iVar4 = *(int *)(lVar8 + 0x18);
          *(uint *)(lVar8 + 0x18) = uVar17;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          return (ulong)(iVar4 - uVar17);
        }
        lVar18 = (-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3) + 0x20;
        do {
          lStack_128 = auVar24._8_8_;
          lStack_118 = auVar24._0_8_;
          lVar19 = *(long *)(lVar8 + 0x10);
          if (lVar19 == 0) goto code_r0x02428920;
          if (*(uint *)(lVar19 + 0x18) <= (uint)uVar6) goto code_r0x02428924;
          if (lVar20 == 0) goto code_r0x02428920;
          puVar13 = *(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 200);
          uVar9 = (*(code *)*puVar13)(lVar20,*(undefined8 *)(lVar19 + lVar18));
          auVar24._8_8_ = lStack_128;
          auVar24._0_8_ = lStack_118;
          if ((uVar9 & 1) == 0) {
            uVar10 = *(uint *)(lVar8 + 0x18);
            break;
          }
          uVar21 = (uint)uVar6 + 1;
          uVar6 = (ulong)uVar21;
          uVar10 = *(uint *)(lVar8 + 0x18);
          lVar18 = lVar18 + 8;
        } while ((int)uVar21 < (int)uVar10);
        uVar9 = (ulong)uVar10;
        uVar21 = (uint)uVar6;
      } while ((int)uVar10 <= (int)uVar21);
      lVar18 = *(long *)(lVar8 + 0x10);
      if (lVar18 == 0) goto code_r0x02428920;
      if ((*(uint *)(lVar18 + 0x18) <= uVar21) || (*(uint *)(lVar18 + 0x18) <= uVar17))
      goto code_r0x02428924;
      *(undefined8 *)(lVar18 + 0x20 + (long)(int)uVar17 * 8) =
           *(undefined8 *)(lVar18 + 0x20 + (long)(int)uVar21 * 8);
      uVar5 = (ulong)(uVar17 + 1);
    } while( true );
  }
  lVar18 = *(long *)(uVar5 + 0x10);
  puVar11 = puRam0000000003d3c5e8;
  uVar9 = uStack_78;
  ppuVar3 = ppuStack_80;
  if (lVar18 == 0) {
code_r0x0242716c:
    ppuVar16 = ppuVar3;
    uVar5 = uVar9;
    uVar6 = func_0x00f78af4();
    lVar18 = extraout_x9;
    uVar17 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar5 + 0x18) = uVar17 + 1;
  }
  else {
    uVar17 = *(uint *)(uVar5 + 0x18);
    uVar6 = uVar5;
    if (uVar17 != *(uint *)(lVar18 + 0x18)) goto code_r0x02427170;
    puVar11 = *(undefined8 **)(*(long *)(puRam0000000003d3c5e8[3] + 0xc0) + 0x60);
    uVar6 = (*(code *)*puVar11)(uVar5,uVar17 + 1);
    lVar18 = *(long *)(uVar5 + 0x10);
    uVar17 = *(uint *)(uVar5 + 0x18);
    *(uint *)(uVar5 + 0x18) = uVar17 + 1;
    uVar9 = uVar5;
    ppuVar3 = ppuVar16;
    if (lVar18 == 0) goto code_r0x0242716c;
  }
  if (uVar17 < *(uint *)(lVar18 + 0x18)) {
    *(undefined1 ***)(lVar18 + (long)(int)uVar17 * 8 + 0x20) = ppuVar16;
    *(int *)(uVar5 + 0x1c) = *(int *)(uVar5 + 0x1c) + 1;
    return uVar6;
  }
  uVar7 = func_0x00f78b24();
  auVar23 = func_0x00f78ac0(uVar7,0);
  lVar20 = auVar23._8_8_;
  lVar18 = auVar23._0_8_;
  auStack_b0._0_8_ = ppuVar15;
  auStack_b0._8_8_ = puVar26;
  puStack_88 = &System_Collections_Generic_List_object___System_Collections_IList_Add;
  lStack_c0 = unaff_x24;
  uStack_b8 = unaff_x23;
  ppuStack_a0 = ppuVar16;
  puStack_98 = (undefined *)uVar5;
  ppuStack_90 = &puStack_70;
  (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x48))(lVar20,0x14);
  if (lVar18 == 0) {
    func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x2427350);
    (*pcVar22)();
  }
  pcVar22 = (code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x28);
  lVar19 = *(long *)(*(long *)(puVar11[3] + 0xc0) + 0x38);
  if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar19);
  }
  if (lVar20 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = func_0x00f78adc(lVar20,lVar19);
    if (lVar8 == 0) {
      func_0x00f78e5c(lVar20,lVar19);
      goto code_r0x0242734c;
    }
  }
  (*pcVar22)(lVar18,lVar8,*(undefined8 *)(*(long *)(puVar11[3] + 0xc0) + 0x28));
  iVar4 = (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x68))(lVar18);
  return (ulong)(iVar4 - 1);
code_r0x02428920:
  lStack_128 = auVar24._8_8_;
  lStack_118 = auVar24._0_8_;
  func_0x00f78af4();
  auVar24._8_8_ = lStack_128;
  auVar24._0_8_ = lStack_118;
code_r0x02428924:
  lStack_128 = auVar24._8_8_;
  lStack_118 = auVar24._0_8_;
  uVar7 = func_0x00f78b24();
  auVar23 = func_0x00f78ac0(uVar7,0);
  uVar6 = auVar23._0_8_;
  puStack_148 = &System_Collections_Generic_List_WeaponAudioManager_GraveyardInfo___RemoveAt;
  ppppppuVar25 = &pppppuStack_150;
  uVar17 = *(uint *)(uVar6 + 0x18);
  uVar10 = auVar23._8_4_;
  uVar9 = uVar6;
  pppppuStack_150 = &ppppuStack_110;
  if (uVar17 <= uVar10) {
    uVar9 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    uVar17 = *(uint *)(uVar6 + 0x18);
  }
  iVar4 = uVar17 - 1;
  *(int *)(uVar6 + 0x18) = iVar4;
  if (iVar4 - uVar10 != 0 && (int)uVar10 <= iVar4) {
    puVar13 = *(undefined8 **)(uVar6 + 0x10);
    uVar9 = /*System.Array$$Copy*/ func_0x0292b4cc(puVar13,uVar10 + 1,puVar13,auVar23._8_8_,iVar4 - uVar10,0,in_x6,in_x7,
                            puVar12,lVar8);
  }
  lVar18 = *(long *)(uVar6 + 0x10);
  if (lVar18 == 0) {
    func_0x00f78af4();
  }
  else if (*(uint *)(uVar6 + 0x18) < *(uint *)(lVar18 + 0x18)) {
    *(undefined8 *)(lVar18 + (long)(int)*(uint *)(uVar6 + 0x18) * 8 + 0x20) = 0;
    *(int *)(uVar6 + 0x1c) = *(int *)(uVar6 + 0x1c) + 1;
    return uVar9;
  }
  uVar7 = func_0x00f78b24();
  auVar24 = func_0x00f78ac0(uVar7,0);
  uVar6 = auVar24._0_8_;
  puVar26 = &System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange;
  iVar4 = auVar24._8_4_;
  iVar14 = (int)puVar13;
  uVar9 = uVar6;
  if (iVar4 < 0) {
    uVar9 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
  }
  if (iVar14 < 0) {
    uVar9 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
  }
  if (*(int *)(uVar6 + 0x18) - iVar4 < iVar14) {
    uVar9 = /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
  }
  if (0 < iVar14) {
    iVar2 = *(int *)(uVar6 + 0x18) - iVar14;
    *(int *)(uVar6 + 0x18) = iVar2;
    if (iVar2 - iVar4 != 0 && iVar4 <= iVar2) {
      /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(uVar6 + 0x10),iVar14 + iVar4,*(undefined8 *)(uVar6 + 0x10),
                      auVar24._8_8_,iVar2 - iVar4,0,in_x6,in_x7,uVar5,lVar20,auVar23._8_8_,
                      auVar23._0_8_,ppppppuVar25,puVar26);
      iVar2 = *(int *)(uVar6 + 0x18);
    }
    uVar9 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar6 + 0x10),iVar2,puVar13,0);
    *(int *)(uVar6 + 0x1c) = *(int *)(uVar6 + 0x1c) + 1;
  }
  return uVar9;
}



// ============================================================
// RVA: 0x1519fe0 | Atlas.UI.UIChallengeProgressBehaviourContainer.OnElementStartsResizing
// ============================================================

ulong Atlas_UI_UIChallengeProgressBehaviourContainer__OnElementStartsResizing
                (long param_1,undefined1 *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 in_x6;
  undefined8 in_x7;
  uint extraout_w8;
  long lVar11;
  long extraout_x9;
  ulong unaff_x19;
  int iVar12;
  undefined1 *unaff_x20;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  code *pcVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 *****pppppuVar21;
  undefined *puVar22;
  undefined1 ****ppppuStack_f0;
  undefined *puStack_e8;
  undefined1 ***pppuStack_b0;
  undefined *puStack_a8;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4dd6 & 1) == 0) {
    func_0x00f78a20(0x3d3c5e8);
    bRam0000000003eb4dd6 = 1;
  }
  uVar4 = *(ulong *)(param_1 + 0x28);
  if (uVar4 == 0) {
    auVar19 = func_0x00f78af4();
    puStack_38 = &Atlas_UI_UIChallengeProgressBehaviourContainer__OnElementFinishedResizing;
    puStack_40 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb4dd7 & 1) == 0) {
      func_0x00f78a20(0x3d3c5f0);
      bRam0000000003eb4dd7 = 1;
    }
    puVar9 = puRam0000000003d3c5f0;
    lVar11 = *(long *)(auVar19._0_8_ + 0x28);
    if (lVar11 == 0) {
      uVar4 = func_0x00f78af4();
      puStack_68 = &Atlas_UI_UIChallengeProgressBehaviourContainer___ctor;
      ppuStack_70 = &puStack_40;
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return uVar4;
    }
    if (lVar11 != 0) {
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(puRam0000000003d3c5f0[3] + 0xc0) + 0xf8))();
      if (-1 < (int)(uint)uVar6) {
        (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x108))(lVar11,uVar6);
      }
      return (ulong)(~(uint)uVar6 >> 0x1f);
    }
    auVar19 = func_0x00f78af4(0,auVar19._8_8_);
    lVar11 = auVar19._8_8_;
    puStack_68 = &System_Collections_Generic_List_object___System_Collections_IList_Remove;
    uVar4 = **(ulong **)(puVar9[3] + 0xc0);
    uVar1 = *(ushort *)(uVar4 + 0x132);
    puVar10 = puVar9;
    ppuStack_70 = &puStack_40;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(uVar4);
      uVar1 = *(ushort *)(uVar4 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      uVar4 = **(ulong **)(puVar9[3] + 0xc0);
      if ((*(ushort *)(uVar4 + 0x132) & 1) == 0) {
        func_0x00fac028(uVar4);
      }
      if (*(int *)(uVar4 + 0xe0) == 0) {
        uVar4 = **(ulong **)(puVar9[3] + 0xc0);
        if ((*(ushort *)(uVar4 + 0x132) & 1) == 0) {
          func_0x00fac028(uVar4);
        }
        func_0x00f78ad0(uVar4);
      }
    }
    uVar5 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0xa0))(lVar11);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if (auVar19._0_8_ != 0) {
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x110);
      lVar15 = *(long *)(*(long *)(puVar9[3] + 0xc0) + 0x38);
      if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar15);
      }
      if (lVar11 == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = func_0x00f78adc(lVar11,lVar15);
        if (lVar14 == 0) {
          uVar4 = func_0x00f78e5c(lVar11,lVar15);
          return uVar4;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02428794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE)
                        (auVar19._0_8_,lVar14,*(undefined8 *)(*(long *)(puVar9[3] + 0xc0) + 0x110));
      return uVar4;
    }
    auVar19 = func_0x00f78af4();
    lVar11 = auVar19._8_8_;
    lVar15 = auVar19._0_8_;
    puStack_a8 = &System_Collections_Generic_List_AddressablesImpl_ResourceLocatorInfo___RemoveAll;
    puVar9 = puVar10;
    pppuStack_b0 = &ppuStack_70;
    if (lVar11 == 0) {
      /*System.ThrowHelper$$ThrowArgumentNullException*/ func_0x029ef698(8);
    }
    uVar5 = (ulong)*(uint *)(lVar15 + 0x18);
    if ((int)*(uint *)(lVar15 + 0x18) < 1) {
      uVar18 = 0;
    }
    else {
      uVar18 = 0;
      do {
        lVar14 = *(long *)(lVar15 + 0x10);
        if (lVar14 == 0) goto code_r0x02428920;
        if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x02428924;
        if (lVar11 == 0) goto code_r0x02428920;
        puVar9 = *(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 200);
        iVar3 = (*(code *)*puVar9)(lVar11,*(undefined8 *)(lVar14 + uVar18 * 8 + 0x20));
        if (iVar3 != 0) {
          uVar5 = (ulong)*(uint *)(lVar15 + 0x18);
          break;
        }
        uVar18 = uVar18 + 1;
        uVar5 = (ulong)*(int *)(lVar15 + 0x18);
      } while ((long)uVar18 < (long)uVar5);
    }
    uVar4 = uVar18;
    uVar18 = uVar4;
    if ((int)uVar5 <= (int)uVar4) {
      return 0;
    }
    do {
      uVar18 = (ulong)((int)uVar18 + 1);
      do {
        uVar13 = (uint)uVar4;
        if ((int)uVar5 <= (int)uVar18) {
          /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar15 + 0x10),uVar4,(int)uVar5 - uVar13,0);
          iVar3 = *(int *)(lVar15 + 0x18);
          *(uint *)(lVar15 + 0x18) = uVar13;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          return (ulong)(iVar3 - uVar13);
        }
        lVar14 = (-(uVar18 >> 0x1f) & 0xfffffff800000000 | uVar18 << 3) + 0x20;
        do {
          lVar7 = *(long *)(lVar15 + 0x10);
          if (lVar7 == 0) goto code_r0x02428920;
          if (*(uint *)(lVar7 + 0x18) <= (uint)uVar18) goto code_r0x02428924;
          if (lVar11 == 0) goto code_r0x02428920;
          puVar9 = *(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 200);
          uVar5 = (*(code *)*puVar9)(lVar11,*(undefined8 *)(lVar7 + lVar14));
          if ((uVar5 & 1) == 0) {
            uVar8 = *(uint *)(lVar15 + 0x18);
            break;
          }
          uVar16 = (uint)uVar18 + 1;
          uVar18 = (ulong)uVar16;
          uVar8 = *(uint *)(lVar15 + 0x18);
          lVar14 = lVar14 + 8;
        } while ((int)uVar16 < (int)uVar8);
        uVar5 = (ulong)uVar8;
        uVar16 = (uint)uVar18;
      } while ((int)uVar8 <= (int)uVar16);
      lVar14 = *(long *)(lVar15 + 0x10);
      if (lVar14 == 0) goto code_r0x02428920;
      if ((*(uint *)(lVar14 + 0x18) <= uVar16) || (*(uint *)(lVar14 + 0x18) <= uVar13))
      goto code_r0x02428924;
      *(undefined8 *)(lVar14 + 0x20 + (long)(int)uVar13 * 8) =
           *(undefined8 *)(lVar14 + 0x20 + (long)(int)uVar16 * 8);
      uVar4 = (ulong)(uVar13 + 1);
    } while( true );
  }
  lVar11 = *(long *)(uVar4 + 0x10);
  puVar9 = puRam0000000003d3c5e8;
  if (lVar11 == 0) {
code_r0x0242716c:
    param_2 = unaff_x20;
    uVar4 = unaff_x19;
    uVar5 = func_0x00f78af4();
    lVar11 = extraout_x9;
    uVar13 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar4 + 0x18) = uVar13 + 1;
  }
  else {
    uVar13 = *(uint *)(uVar4 + 0x18);
    uVar5 = uVar4;
    if (uVar13 != *(uint *)(lVar11 + 0x18)) goto code_r0x02427170;
    puVar9 = *(undefined8 **)(*(long *)(puRam0000000003d3c5e8[3] + 0xc0) + 0x60);
    uVar5 = (*(code *)*puVar9)(uVar4,uVar13 + 1);
    lVar11 = *(long *)(uVar4 + 0x10);
    uVar13 = *(uint *)(uVar4 + 0x18);
    *(uint *)(uVar4 + 0x18) = uVar13 + 1;
    unaff_x19 = uVar4;
    unaff_x20 = param_2;
    if (lVar11 == 0) goto code_r0x0242716c;
  }
  if (uVar13 < *(uint *)(lVar11 + 0x18)) {
    *(undefined1 **)(lVar11 + (long)(int)uVar13 * 8 + 0x20) = param_2;
    *(int *)(uVar4 + 0x1c) = *(int *)(uVar4 + 0x1c) + 1;
    return uVar5;
  }
  uVar6 = func_0x00f78b24();
  auVar19 = func_0x00f78ac0(uVar6,0);
  lVar15 = auVar19._8_8_;
  lVar11 = auVar19._0_8_;
  puStack_40 = param_2;
  puStack_38 = (undefined *)uVar4;
  (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x48))(lVar15,0x14);
  if (lVar11 == 0) {
    func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x2427350);
    (*pcVar17)();
  }
  pcVar17 = (code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x28);
  lVar14 = *(long *)(*(long *)(puVar9[3] + 0xc0) + 0x38);
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  if (lVar15 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = func_0x00f78adc(lVar15,lVar14);
    if (lVar7 == 0) {
      func_0x00f78e5c(lVar15,lVar14);
      goto code_r0x0242734c;
    }
  }
  (*pcVar17)(lVar11,lVar7,*(undefined8 *)(*(long *)(puVar9[3] + 0xc0) + 0x28));
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x68))(lVar11);
  return (ulong)(iVar3 - 1);
code_r0x02428920:
  func_0x00f78af4();
code_r0x02428924:
  uVar6 = func_0x00f78b24();
  auVar19 = func_0x00f78ac0(uVar6,0);
  uVar18 = auVar19._0_8_;
  puStack_e8 = &System_Collections_Generic_List_WeaponAudioManager_GraveyardInfo___RemoveAt;
  pppppuVar21 = &ppppuStack_f0;
  uVar13 = *(uint *)(uVar18 + 0x18);
  uVar8 = auVar19._8_4_;
  uVar5 = uVar18;
  ppppuStack_f0 = &pppuStack_b0;
  if (uVar13 <= uVar8) {
    uVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    uVar13 = *(uint *)(uVar18 + 0x18);
  }
  iVar3 = uVar13 - 1;
  *(int *)(uVar18 + 0x18) = iVar3;
  if (iVar3 - uVar8 != 0 && (int)uVar8 <= iVar3) {
    puVar9 = *(undefined8 **)(uVar18 + 0x10);
    uVar5 = /*System.Array$$Copy*/ func_0x0292b4cc(puVar9,uVar8 + 1,puVar9,auVar19._8_8_,iVar3 - uVar8,0,in_x6,in_x7,
                            puVar10,lVar15);
  }
  lVar15 = *(long *)(uVar18 + 0x10);
  if (lVar15 == 0) {
    func_0x00f78af4();
  }
  else if (*(uint *)(uVar18 + 0x18) < *(uint *)(lVar15 + 0x18)) {
    *(undefined8 *)(lVar15 + (long)(int)*(uint *)(uVar18 + 0x18) * 8 + 0x20) = 0;
    *(int *)(uVar18 + 0x1c) = *(int *)(uVar18 + 0x1c) + 1;
    return uVar5;
  }
  uVar6 = func_0x00f78b24();
  auVar20 = func_0x00f78ac0(uVar6,0);
  uVar18 = auVar20._0_8_;
  puVar22 = &System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange;
  iVar3 = auVar20._8_4_;
  iVar12 = (int)puVar9;
  uVar5 = uVar18;
  if (iVar3 < 0) {
    uVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
  }
  if (iVar12 < 0) {
    uVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
  }
  if (*(int *)(uVar18 + 0x18) - iVar3 < iVar12) {
    uVar5 = /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
  }
  if (0 < iVar12) {
    iVar2 = *(int *)(uVar18 + 0x18) - iVar12;
    *(int *)(uVar18 + 0x18) = iVar2;
    if (iVar2 - iVar3 != 0 && iVar3 <= iVar2) {
      /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(uVar18 + 0x10),iVar12 + iVar3,*(undefined8 *)(uVar18 + 0x10),
                      auVar20._8_8_,iVar2 - iVar3,0,in_x6,in_x7,uVar4,lVar11,auVar19._8_8_,
                      auVar19._0_8_,pppppuVar21,puVar22);
      iVar2 = *(int *)(uVar18 + 0x18);
    }
    uVar5 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar18 + 0x10),iVar2,puVar9,0);
    *(int *)(uVar18 + 0x1c) = *(int *)(uVar18 + 0x1c) + 1;
  }
  return uVar5;
}



// ============================================================
// RVA: 0x151a044 | Atlas.UI.UIChallengeProgressBehaviourContainer.OnElementFinishedResizing
// ============================================================

ulong Atlas_UI_UIChallengeProgressBehaviourContainer__OnElementFinishedResizing
                (long param_1,undefined8 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 ****ppppuVar20;
  undefined *puVar21;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4dd7 & 1) == 0) {
    func_0x00f78a20(0x3d3c5f0);
    bRam0000000003eb4dd7 = 1;
  }
  puVar10 = puRam0000000003d3c5f0;
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 == 0) {
    uVar14 = func_0x00f78af4();
    puStack_38 = &Atlas_UI_UIChallengeProgressBehaviourContainer___ctor;
    puStack_40 = &stack0xfffffffffffffff0;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return uVar14;
  }
  if (lVar4 != 0) {
    uVar5 = (*(code *)**(undefined8 **)(*(long *)(puRam0000000003d3c5f0[3] + 0xc0) + 0xf8))();
    if (-1 < (int)(uint)uVar5) {
      (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x108))(lVar4,uVar5);
    }
    return (ulong)(~(uint)uVar5 >> 0x1f);
  }
  auVar18 = func_0x00f78af4(0,param_2);
  lVar4 = auVar18._8_8_;
  puStack_38 = &System_Collections_Generic_List_object___System_Collections_IList_Remove;
  uVar14 = **(ulong **)(puVar10[3] + 0xc0);
  uVar1 = *(ushort *)(uVar14 + 0x132);
  puVar9 = puVar10;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(uVar14);
    uVar1 = *(ushort *)(uVar14 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    uVar14 = **(ulong **)(puVar10[3] + 0xc0);
    if ((*(ushort *)(uVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(uVar14);
    }
    if (*(int *)(uVar14 + 0xe0) == 0) {
      uVar14 = **(ulong **)(puVar10[3] + 0xc0);
      if ((*(ushort *)(uVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(uVar14);
      }
      func_0x00f78ad0(uVar14);
    }
  }
  uVar6 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0xa0))(lVar4);
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  if (auVar18._0_8_ != 0) {
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x110);
    lVar15 = *(long *)(*(long *)(puVar10[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar15);
    }
    if (lVar4 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = func_0x00f78adc(lVar4,lVar15);
      if (lVar7 == 0) {
        uVar14 = func_0x00f78e5c(lVar4,lVar15);
        return uVar14;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x02428794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar14 = (*UNRECOVERED_JUMPTABLE)
                       (auVar18._0_8_,lVar7,*(undefined8 *)(*(long *)(puVar10[3] + 0xc0) + 0x110));
    return uVar14;
  }
  auVar18 = func_0x00f78af4();
  lVar4 = auVar18._8_8_;
  lVar15 = auVar18._0_8_;
  puStack_78 = &System_Collections_Generic_List_AddressablesImpl_ResourceLocatorInfo___RemoveAll;
  puVar10 = puVar9;
  ppuStack_80 = &puStack_40;
  if (lVar4 == 0) {
    /*System.ThrowHelper$$ThrowArgumentNullException*/ func_0x029ef698(8);
  }
  uVar6 = (ulong)*(uint *)(lVar15 + 0x18);
  if ((int)*(uint *)(lVar15 + 0x18) < 1) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    do {
      lVar7 = *(long *)(lVar15 + 0x10);
      if (lVar7 == 0) goto code_r0x02428920;
      if (*(uint *)(lVar7 + 0x18) <= uVar17) goto code_r0x02428924;
      if (lVar4 == 0) goto code_r0x02428920;
      puVar10 = *(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 200);
      iVar3 = (*(code *)*puVar10)(lVar4,*(undefined8 *)(lVar7 + uVar17 * 8 + 0x20));
      if (iVar3 != 0) {
        uVar6 = (ulong)*(uint *)(lVar15 + 0x18);
        break;
      }
      uVar17 = uVar17 + 1;
      uVar6 = (ulong)*(int *)(lVar15 + 0x18);
    } while ((long)uVar17 < (long)uVar6);
  }
  uVar14 = uVar17;
  uVar17 = uVar14;
  if ((int)uVar6 <= (int)uVar14) {
    return 0;
  }
  do {
    uVar17 = (ulong)((int)uVar17 + 1);
    do {
      uVar13 = (uint)uVar14;
      if ((int)uVar6 <= (int)uVar17) {
        /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar15 + 0x10),uVar14,(int)uVar6 - uVar13,0);
        iVar3 = *(int *)(lVar15 + 0x18);
        *(uint *)(lVar15 + 0x18) = uVar13;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        return (ulong)(iVar3 - uVar13);
      }
      lVar7 = (-(uVar17 >> 0x1f) & 0xfffffff800000000 | uVar17 << 3) + 0x20;
      do {
        lVar11 = *(long *)(lVar15 + 0x10);
        if (lVar11 == 0) goto code_r0x02428920;
        if (*(uint *)(lVar11 + 0x18) <= (uint)uVar17) goto code_r0x02428924;
        if (lVar4 == 0) goto code_r0x02428920;
        puVar10 = *(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 200);
        uVar6 = (*(code *)*puVar10)(lVar4,*(undefined8 *)(lVar11 + lVar7));
        if ((uVar6 & 1) == 0) {
          uVar8 = *(uint *)(lVar15 + 0x18);
          break;
        }
        uVar16 = (uint)uVar17 + 1;
        uVar17 = (ulong)uVar16;
        uVar8 = *(uint *)(lVar15 + 0x18);
        lVar7 = lVar7 + 8;
      } while ((int)uVar16 < (int)uVar8);
      uVar6 = (ulong)uVar8;
      uVar16 = (uint)uVar17;
    } while ((int)uVar8 <= (int)uVar16);
    lVar7 = *(long *)(lVar15 + 0x10);
    if (lVar7 == 0) break;
    if ((*(uint *)(lVar7 + 0x18) <= uVar16) || (*(uint *)(lVar7 + 0x18) <= uVar13))
    goto code_r0x02428924;
    *(undefined8 *)(lVar7 + 0x20 + (long)(int)uVar13 * 8) =
         *(undefined8 *)(lVar7 + 0x20 + (long)(int)uVar16 * 8);
    uVar14 = (ulong)(uVar13 + 1);
  } while( true );
code_r0x02428920:
  func_0x00f78af4();
code_r0x02428924:
  uVar5 = func_0x00f78b24();
  auVar18 = func_0x00f78ac0(uVar5,0);
  uVar17 = auVar18._0_8_;
  puStack_b8 = &System_Collections_Generic_List_WeaponAudioManager_GraveyardInfo___RemoveAt;
  ppppuVar20 = &pppuStack_c0;
  uVar13 = *(uint *)(uVar17 + 0x18);
  uVar8 = auVar18._8_4_;
  uVar6 = uVar17;
  pppuStack_c0 = &ppuStack_80;
  if (uVar13 <= uVar8) {
    uVar6 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    uVar13 = *(uint *)(uVar17 + 0x18);
  }
  iVar3 = uVar13 - 1;
  *(int *)(uVar17 + 0x18) = iVar3;
  if (iVar3 - uVar8 != 0 && (int)uVar8 <= iVar3) {
    puVar10 = *(undefined8 **)(uVar17 + 0x10);
    uVar6 = /*System.Array$$Copy*/ func_0x0292b4cc(puVar10,uVar8 + 1,puVar10,auVar18._8_8_,iVar3 - uVar8,0,in_x6,in_x7,
                            puVar9,lVar15);
  }
  lVar15 = *(long *)(uVar17 + 0x10);
  if (lVar15 == 0) {
    func_0x00f78af4();
  }
  else if (*(uint *)(uVar17 + 0x18) < *(uint *)(lVar15 + 0x18)) {
    *(undefined8 *)(lVar15 + (long)(int)*(uint *)(uVar17 + 0x18) * 8 + 0x20) = 0;
    *(int *)(uVar17 + 0x1c) = *(int *)(uVar17 + 0x1c) + 1;
    return uVar6;
  }
  uVar5 = func_0x00f78b24();
  auVar19 = func_0x00f78ac0(uVar5,0);
  uVar17 = auVar19._0_8_;
  puVar21 = &System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange;
  iVar3 = auVar19._8_4_;
  iVar12 = (int)puVar10;
  uVar6 = uVar17;
  if (iVar3 < 0) {
    uVar6 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
  }
  if (iVar12 < 0) {
    uVar6 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
  }
  if (*(int *)(uVar17 + 0x18) - iVar3 < iVar12) {
    uVar6 = /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
  }
  if (0 < iVar12) {
    iVar2 = *(int *)(uVar17 + 0x18) - iVar12;
    *(int *)(uVar17 + 0x18) = iVar2;
    if (iVar2 - iVar3 != 0 && iVar3 <= iVar2) {
      /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(uVar17 + 0x10),iVar12 + iVar3,*(undefined8 *)(uVar17 + 0x10),
                      auVar19._8_8_,iVar2 - iVar3,0,in_x6,in_x7,uVar14,lVar4,auVar18._8_8_,
                      auVar18._0_8_,ppppuVar20,puVar21);
      iVar2 = *(int *)(uVar17 + 0x18);
    }
    uVar6 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar17 + 0x10),iVar2,puVar10,0);
    *(int *)(uVar17 + 0x1c) = *(int *)(uVar17 + 0x1c) + 1;
  }
  return uVar6;
}



// ============================================================
// RVA: 0x151a0a8 | Atlas.UI.UIChallengeProgressBehaviourContainer..ctor
// ============================================================

undefined1  [16] Atlas_UI_UIChallengeProgressBehaviourContainer___ctor(ulong param_1)

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



