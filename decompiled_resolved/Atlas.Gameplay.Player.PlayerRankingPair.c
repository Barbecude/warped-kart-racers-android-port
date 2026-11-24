// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Player.PlayerRankingPair

// ============================================================
// RVA: 0x14c085c | Atlas.Gameplay.Player.PlayerRankingPair.ReverseRankingComparison
// ============================================================

ulong Atlas_Gameplay_Player_PlayerRankingPair__ReverseRankingComparison(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  if ((bRam0000000003eb4b16 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4b16 = 1;
  }
  if (*(float *)(param_1 + 1) <= *(float *)(param_2 + 1)) {
    if (*(float *)(param_1 + 1) < *(float *)(param_2 + 1)) {
      return 0;
    }
    if ((*(char *)((long)param_1 + 0x14) != '\0') && (*(char *)((long)param_2 + 0x14) != '\0')) {
      lStack_68 = param_1[1];
      lStack_70 = *param_1;
      lStack_58 = param_1[3];
      lStack_60 = param_1[2];
      lStack_50 = param_1[4];
      lStack_98 = param_2[1];
      lStack_a0 = *param_2;
      lStack_88 = param_2[3];
      lStack_90 = param_2[2];
      lStack_80 = param_2[4];
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lStack_b8 = lStack_58;
      lStack_c0 = lStack_60;
      lStack_b0 = lStack_50;
      lStack_d8 = lStack_88;
      lStack_e0 = lStack_90;
      lStack_d0 = lStack_80;
      uVar1 = /*Core.Networking.NetworkSessionTime$$op_LessThan*/ func_0x01660c74(&lStack_c0,&lStack_e0,0);
      if ((uVar1 & 1) != 0) goto code_r0x014c08ac;
      lStack_68 = param_1[1];
      lStack_70 = *param_1;
      lStack_58 = param_1[3];
      lStack_60 = param_1[2];
      lStack_50 = param_1[4];
      lStack_98 = param_2[1];
      lStack_a0 = *param_2;
      lStack_88 = param_2[3];
      lStack_90 = param_2[2];
      lStack_80 = param_2[4];
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lStack_f8 = lStack_58;
      lStack_100 = lStack_60;
      lStack_f0 = lStack_50;
      lStack_118 = lStack_88;
      lStack_120 = lStack_90;
      lStack_110 = lStack_80;
      uVar1 = /*Core.Networking.NetworkSessionTime$$op_GreaterThan*/ func_0x01660b50(&lStack_100,&lStack_120,0);
      if ((uVar1 & 1) != 0) {
        return 0;
      }
    }
    if ((((*param_1 == 0) || (lVar3 = *(long *)(*param_1 + 0x10), lVar3 == 0)) || (*param_2 == 0))
       || (lVar4 = *(long *)(*param_2 + 0x10), lVar4 == 0)) {
      puVar2 = (ulong *)func_0x00f78af4();
      return *puVar2;
    }
    uVar1 = (ulong)(*(uint *)(lVar4 + 0x54) < *(uint *)(lVar3 + 0x54));
  }
  else {
code_r0x014c08ac:
    uVar1 = 1;
  }
  return uVar1;
}



