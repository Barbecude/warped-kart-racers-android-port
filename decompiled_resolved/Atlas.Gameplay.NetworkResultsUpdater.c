// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.NetworkResultsUpdater

// ============================================================
// RVA: 0x14adb48 | Atlas.Gameplay.NetworkResultsUpdater.add_ResultsUpdated
// ============================================================

ulong Atlas_Gameplay_NetworkResultsUpdater__add_ResultsUpdated(long param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  
  if ((bRam0000000003eb4a7f & 1) == 0) {
    func_0x00f78a20(0x3d1b3b8);
    bRam0000000003eb4a7f = 1;
  }
  uVar7 = *(ulong *)(param_1 + 0x60);
  while ((plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar7,param_2,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*System.Action<ReadOnlyCollection<NetworkResultsStanding>>_TypeInfo*/ lRam0000000003d1b3b8))) {
    uVar4 = func_0x00ff0f44((ulong *)(param_1 + 0x60),plVar3,uVar7);
    bVar2 = uVar7 == uVar4;
    uVar7 = uVar4;
    if (bVar2) {
      return uVar4;
    }
  }
  auVar13 = func_0x00f78e5c(plVar3);
  if ((bRam0000000003eb4a80 & 1) == 0) {
    func_0x00f78a20(0x3d1b3b8);
    bRam0000000003eb4a80 = 1;
  }
  puVar10 = (ulong *)(auVar13._0_8_ + 0x60);
  uVar7 = *puVar10;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar7,auVar13._8_8_,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*System.Action<ReadOnlyCollection<NetworkResultsStanding>>_TypeInfo*/ lRam0000000003d1b3b8))) {
    uVar4 = func_0x00ff0f44(puVar10,plVar3,uVar7);
    bVar2 = uVar7 == uVar4;
    uVar7 = uVar4;
    if (bVar2) {
      return uVar4;
    }
  }
  auVar14 = func_0x00f78e5c(plVar3);
  lVar9 = *(long *)(auVar14._0_8_ + 0x30);
  if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x60), lVar9 == 0)) {
    func_0x00f78af4();
  }
  else {
    uVar1 = auVar14._8_4_ - 1;
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      return (ulong)*(uint *)(lVar9 + (long)(int)uVar1 * 4 + 0x20);
    }
  }
  uVar5 = func_0x00f78b24();
  lVar9 = func_0x00f78ac0(uVar5,0);
  if (*(long *)(lVar9 + 0x30) != 0) {
    return (ulong)*(uint *)(*(long *)(lVar9 + 0x30) + 0x68);
  }
  auVar13 = func_0x00f78af4();
  puVar8 = auVar13._8_8_;
  puVar6 = auVar13._0_8_;
  if ((bRam0000000003eb4a81 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4a81 = 1;
  }
  if ((char)puVar6[3] == '\0') {
    return 0;
  }
  if ((char)puVar8[3] != '\0') {
    if ((char)puVar6[9] != '\0') {
      if ((char)puVar8[9] != '\0') {
        if ((float)puVar8[8] < (float)puVar6[8]) {
          return 1;
        }
        if ((float)puVar8[8] <= (float)puVar6[8]) goto code_r0x014ade8c;
      }
      return 0;
    }
    if ((char)puVar8[9] == '\0') {
      uStack_e8 = *(undefined8 *)(puVar6 + 2);
      uStack_f0 = *(undefined8 *)puVar6;
      uStack_d8 = *(undefined8 *)(puVar6 + 6);
      uStack_e0 = *(undefined8 *)(puVar6 + 4);
      uStack_d0 = *(undefined8 *)(puVar6 + 8);
      puVar11 = (undefined8 *)((ulong)&uStack_f0 | 8);
      uStack_118 = *(undefined8 *)(puVar8 + 2);
      uStack_120 = *(undefined8 *)puVar8;
      uStack_108 = *(undefined8 *)(puVar8 + 6);
      uStack_110 = *(undefined8 *)(puVar8 + 4);
      uStack_100 = *(undefined8 *)(puVar8 + 8);
      puVar12 = (undefined8 *)((ulong)&uStack_120 | 8);
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_138 = puVar11[1];
      uStack_140 = *puVar11;
      uStack_130 = puVar11[2];
      uStack_158 = puVar12[1];
      uStack_160 = *puVar12;
      uStack_150 = puVar12[2];
      uVar7 = /*Core.Networking.NetworkSessionTime$$op_LessThan*/ func_0x01660c74(&uStack_140,&uStack_160,0);
      if ((uVar7 & 1) == 0) {
        uStack_e8 = *(undefined8 *)(puVar6 + 2);
        uStack_f0 = *(undefined8 *)puVar6;
        uStack_d8 = *(undefined8 *)(puVar6 + 6);
        uStack_e0 = *(undefined8 *)(puVar6 + 4);
        uStack_d0 = *(undefined8 *)(puVar6 + 8);
        puVar11 = (undefined8 *)((ulong)&uStack_f0 | 8);
        uStack_118 = *(undefined8 *)(puVar8 + 2);
        uStack_120 = *(undefined8 *)puVar8;
        uStack_108 = *(undefined8 *)(puVar8 + 6);
        uStack_110 = *(undefined8 *)(puVar8 + 4);
        uStack_100 = *(undefined8 *)(puVar8 + 8);
        puVar12 = (undefined8 *)((ulong)&uStack_120 | 8);
        if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uStack_178 = puVar11[1];
        uStack_180 = *puVar11;
        uStack_170 = puVar11[2];
        uStack_198 = puVar12[1];
        uStack_1a0 = *puVar12;
        uStack_190 = puVar12[2];
        uVar7 = /*Core.Networking.NetworkSessionTime$$op_GreaterThan*/ func_0x01660b50(&uStack_180,&uStack_1a0,0);
        if ((uVar7 & 1) != 0) {
          return 0;
        }
code_r0x014ade8c:
        return (ulong)(*puVar8 < *puVar6);
      }
    }
  }
  return 1;
}



// ============================================================
// RVA: 0x14adbe8 | Atlas.Gameplay.NetworkResultsUpdater.remove_ResultsUpdated
// ============================================================

ulong Atlas_Gameplay_NetworkResultsUpdater__remove_ResultsUpdated(long param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  if ((bRam0000000003eb4a80 & 1) == 0) {
    func_0x00f78a20(0x3d1b3b8);
    bRam0000000003eb4a80 = 1;
  }
  uVar7 = *(ulong *)(param_1 + 0x60);
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar7,param_2,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*System.Action<ReadOnlyCollection<NetworkResultsStanding>>_TypeInfo*/ lRam0000000003d1b3b8))) {
    uVar4 = func_0x00ff0f44((ulong *)(param_1 + 0x60),plVar3,uVar7);
    bVar2 = uVar7 == uVar4;
    uVar7 = uVar4;
    if (bVar2) {
      return uVar4;
    }
  }
  auVar13 = func_0x00f78e5c(plVar3);
  lVar9 = *(long *)(auVar13._0_8_ + 0x30);
  if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x60), lVar9 == 0)) {
    func_0x00f78af4();
  }
  else {
    uVar1 = auVar13._8_4_ - 1;
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      return (ulong)*(uint *)(lVar9 + (long)(int)uVar1 * 4 + 0x20);
    }
  }
  uVar5 = func_0x00f78b24();
  lVar9 = func_0x00f78ac0(uVar5,0);
  if (*(long *)(lVar9 + 0x30) != 0) {
    return (ulong)*(uint *)(*(long *)(lVar9 + 0x30) + 0x68);
  }
  auVar12 = func_0x00f78af4();
  puVar8 = auVar12._8_8_;
  puVar6 = auVar12._0_8_;
  if ((bRam0000000003eb4a81 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4a81 = 1;
  }
  if ((char)puVar6[3] == '\0') {
    return 0;
  }
  if ((char)puVar8[3] != '\0') {
    if ((char)puVar6[9] != '\0') {
      if ((char)puVar8[9] != '\0') {
        if ((float)puVar8[8] < (float)puVar6[8]) {
          return 1;
        }
        if ((float)puVar8[8] <= (float)puVar6[8]) goto code_r0x014ade8c;
      }
      return 0;
    }
    if ((char)puVar8[9] == '\0') {
      uStack_b8 = *(undefined8 *)(puVar6 + 2);
      uStack_c0 = *(undefined8 *)puVar6;
      uStack_a8 = *(undefined8 *)(puVar6 + 6);
      uStack_b0 = *(undefined8 *)(puVar6 + 4);
      uStack_a0 = *(undefined8 *)(puVar6 + 8);
      puVar10 = (undefined8 *)((ulong)&uStack_c0 | 8);
      uStack_e8 = *(undefined8 *)(puVar8 + 2);
      uStack_f0 = *(undefined8 *)puVar8;
      uStack_d8 = *(undefined8 *)(puVar8 + 6);
      uStack_e0 = *(undefined8 *)(puVar8 + 4);
      uStack_d0 = *(undefined8 *)(puVar8 + 8);
      puVar11 = (undefined8 *)((ulong)&uStack_f0 | 8);
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_108 = puVar10[1];
      uStack_110 = *puVar10;
      uStack_100 = puVar10[2];
      uStack_128 = puVar11[1];
      uStack_130 = *puVar11;
      uStack_120 = puVar11[2];
      uVar7 = /*Core.Networking.NetworkSessionTime$$op_LessThan*/ func_0x01660c74(&uStack_110,&uStack_130,0);
      if ((uVar7 & 1) == 0) {
        uStack_b8 = *(undefined8 *)(puVar6 + 2);
        uStack_c0 = *(undefined8 *)puVar6;
        uStack_a8 = *(undefined8 *)(puVar6 + 6);
        uStack_b0 = *(undefined8 *)(puVar6 + 4);
        uStack_a0 = *(undefined8 *)(puVar6 + 8);
        puVar10 = (undefined8 *)((ulong)&uStack_c0 | 8);
        uStack_e8 = *(undefined8 *)(puVar8 + 2);
        uStack_f0 = *(undefined8 *)puVar8;
        uStack_d8 = *(undefined8 *)(puVar8 + 6);
        uStack_e0 = *(undefined8 *)(puVar8 + 4);
        uStack_d0 = *(undefined8 *)(puVar8 + 8);
        puVar11 = (undefined8 *)((ulong)&uStack_f0 | 8);
        if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uStack_148 = puVar10[1];
        uStack_150 = *puVar10;
        uStack_140 = puVar10[2];
        uStack_168 = puVar11[1];
        uStack_170 = *puVar11;
        uStack_160 = puVar11[2];
        uVar7 = /*Core.Networking.NetworkSessionTime$$op_GreaterThan*/ func_0x01660b50(&uStack_150,&uStack_170,0);
        if ((uVar7 & 1) != 0) {
          return 0;
        }
code_r0x014ade8c:
        return (ulong)(*puVar8 < *puVar6);
      }
    }
  }
  return 1;
}



// ============================================================
// RVA: 0x14adc88 | Atlas.Gameplay.NetworkResultsUpdater.GetStarsAwardedForPosition
// ============================================================

uint Atlas_Gameplay_NetworkResultsUpdater__GetStarsAwardedForPosition(long param_1,int param_2)

{
  undefined8 uVar1;
  uint *puVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((*(long *)(param_1 + 0x30) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x60), lVar5 == 0)) {
    func_0x00f78af4();
  }
  else if (param_2 - 1U < *(uint *)(lVar5 + 0x18)) {
    return *(uint *)(lVar5 + (long)(int)(param_2 - 1U) * 4 + 0x20);
  }
  uVar1 = func_0x00f78b24();
  lVar5 = func_0x00f78ac0(uVar1,0);
  if (*(long *)(lVar5 + 0x30) != 0) {
    return *(uint *)(*(long *)(lVar5 + 0x30) + 0x68);
  }
  auVar8 = func_0x00f78af4();
  puVar4 = auVar8._8_8_;
  puVar2 = auVar8._0_8_;
  if ((bRam0000000003eb4a81 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4a81 = 1;
  }
  if ((char)puVar2[3] == '\0') {
    return 0;
  }
  if ((char)puVar4[3] != '\0') {
    if ((char)puVar2[9] != '\0') {
      if ((char)puVar4[9] != '\0') {
        if ((float)puVar4[8] < (float)puVar2[8]) {
          return 1;
        }
        if ((float)puVar4[8] <= (float)puVar2[8]) goto code_r0x014ade8c;
      }
      return 0;
    }
    if ((char)puVar4[9] == '\0') {
      uStack_88 = *(undefined8 *)(puVar2 + 2);
      uStack_90 = *(undefined8 *)puVar2;
      uStack_78 = *(undefined8 *)(puVar2 + 6);
      uStack_80 = *(undefined8 *)(puVar2 + 4);
      uStack_70 = *(undefined8 *)(puVar2 + 8);
      puVar6 = (undefined8 *)((ulong)&uStack_90 | 8);
      uStack_b8 = *(undefined8 *)(puVar4 + 2);
      uStack_c0 = *(undefined8 *)puVar4;
      uStack_a8 = *(undefined8 *)(puVar4 + 6);
      uStack_b0 = *(undefined8 *)(puVar4 + 4);
      uStack_a0 = *(undefined8 *)(puVar4 + 8);
      puVar7 = (undefined8 *)((ulong)&uStack_c0 | 8);
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_d8 = puVar6[1];
      uStack_e0 = *puVar6;
      uStack_d0 = puVar6[2];
      uStack_f8 = puVar7[1];
      uStack_100 = *puVar7;
      uStack_f0 = puVar7[2];
      uVar3 = /*Core.Networking.NetworkSessionTime$$op_LessThan*/ func_0x01660c74(&uStack_e0,&uStack_100,0);
      if ((uVar3 & 1) == 0) {
        uStack_88 = *(undefined8 *)(puVar2 + 2);
        uStack_90 = *(undefined8 *)puVar2;
        uStack_78 = *(undefined8 *)(puVar2 + 6);
        uStack_80 = *(undefined8 *)(puVar2 + 4);
        uStack_70 = *(undefined8 *)(puVar2 + 8);
        puVar6 = (undefined8 *)((ulong)&uStack_90 | 8);
        uStack_b8 = *(undefined8 *)(puVar4 + 2);
        uStack_c0 = *(undefined8 *)puVar4;
        uStack_a8 = *(undefined8 *)(puVar4 + 6);
        uStack_b0 = *(undefined8 *)(puVar4 + 4);
        uStack_a0 = *(undefined8 *)(puVar4 + 8);
        puVar7 = (undefined8 *)((ulong)&uStack_c0 | 8);
        if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uStack_118 = puVar6[1];
        uStack_120 = *puVar6;
        uStack_110 = puVar6[2];
        uStack_138 = puVar7[1];
        uStack_140 = *puVar7;
        uStack_130 = puVar7[2];
        uVar3 = /*Core.Networking.NetworkSessionTime$$op_GreaterThan*/ func_0x01660b50(&uStack_120,&uStack_140,0);
        if ((uVar3 & 1) != 0) {
          return 0;
        }
code_r0x014ade8c:
        return (uint)(*puVar4 < *puVar2);
      }
    }
  }
  return 1;
}



// ============================================================
// RVA: 0x14adcd0 | Atlas.Gameplay.NetworkResultsUpdater.GetStarsAwardedForDnf
// ============================================================

uint Atlas_Gameplay_NetworkResultsUpdater__GetStarsAwardedForDnf(long param_1)

{
  uint *puVar1;
  ulong uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    return *(uint *)(*(long *)(param_1 + 0x30) + 0x68);
  }
  auVar6 = func_0x00f78af4();
  puVar3 = auVar6._8_8_;
  puVar1 = auVar6._0_8_;
  if ((bRam0000000003eb4a81 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4a81 = 1;
  }
  if ((char)puVar1[3] == '\0') {
    return 0;
  }
  if ((char)puVar3[3] != '\0') {
    if ((char)puVar1[9] != '\0') {
      if ((char)puVar3[9] != '\0') {
        if ((float)puVar3[8] < (float)puVar1[8]) {
          return 1;
        }
        if ((float)puVar3[8] <= (float)puVar1[8]) goto code_r0x014ade8c;
      }
      return 0;
    }
    if ((char)puVar3[9] == '\0') {
      uStack_78 = *(undefined8 *)(puVar1 + 2);
      uStack_80 = *(undefined8 *)puVar1;
      uStack_68 = *(undefined8 *)(puVar1 + 6);
      uStack_70 = *(undefined8 *)(puVar1 + 4);
      uStack_60 = *(undefined8 *)(puVar1 + 8);
      puVar4 = (undefined8 *)((ulong)&uStack_80 | 8);
      uStack_a8 = *(undefined8 *)(puVar3 + 2);
      uStack_b0 = *(undefined8 *)puVar3;
      uStack_98 = *(undefined8 *)(puVar3 + 6);
      uStack_a0 = *(undefined8 *)(puVar3 + 4);
      uStack_90 = *(undefined8 *)(puVar3 + 8);
      puVar5 = (undefined8 *)((ulong)&uStack_b0 | 8);
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_c8 = puVar4[1];
      uStack_d0 = *puVar4;
      uStack_c0 = puVar4[2];
      uStack_e8 = puVar5[1];
      uStack_f0 = *puVar5;
      uStack_e0 = puVar5[2];
      uVar2 = /*Core.Networking.NetworkSessionTime$$op_LessThan*/ func_0x01660c74(&uStack_d0,&uStack_f0,0);
      if ((uVar2 & 1) == 0) {
        uStack_78 = *(undefined8 *)(puVar1 + 2);
        uStack_80 = *(undefined8 *)puVar1;
        uStack_68 = *(undefined8 *)(puVar1 + 6);
        uStack_70 = *(undefined8 *)(puVar1 + 4);
        uStack_60 = *(undefined8 *)(puVar1 + 8);
        puVar4 = (undefined8 *)((ulong)&uStack_80 | 8);
        uStack_a8 = *(undefined8 *)(puVar3 + 2);
        uStack_b0 = *(undefined8 *)puVar3;
        uStack_98 = *(undefined8 *)(puVar3 + 6);
        uStack_a0 = *(undefined8 *)(puVar3 + 4);
        uStack_90 = *(undefined8 *)(puVar3 + 8);
        puVar5 = (undefined8 *)((ulong)&uStack_b0 | 8);
        if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uStack_108 = puVar4[1];
        uStack_110 = *puVar4;
        uStack_100 = puVar4[2];
        uStack_128 = puVar5[1];
        uStack_130 = *puVar5;
        uStack_120 = puVar5[2];
        uVar2 = /*Core.Networking.NetworkSessionTime$$op_GreaterThan*/ func_0x01660b50(&uStack_110,&uStack_130,0);
        if ((uVar2 & 1) != 0) {
          return 0;
        }
code_r0x014ade8c:
        return (uint)(*puVar3 < *puVar1);
      }
    }
  }
  return 1;
}



// ============================================================
// RVA: 0x14adcf0 | Atlas.Gameplay.NetworkResultsUpdater.EventStandingRaceComparison
// ============================================================

bool Atlas_Gameplay_NetworkResultsUpdater__EventStandingRaceComparison(uint *param_1,uint *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000003eb4a81 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4a81 = 1;
  }
  if ((char)param_1[3] == '\0') {
    return false;
  }
  if ((char)param_2[3] != '\0') {
    if ((char)param_1[9] != '\0') {
      if ((char)param_2[9] != '\0') {
        if ((float)param_2[8] < (float)param_1[8]) {
          return true;
        }
        if ((float)param_2[8] <= (float)param_1[8]) goto LAB_014ade8c;
      }
      return false;
    }
    if ((char)param_2[9] == '\0') {
      uStack_68 = *(undefined8 *)(param_1 + 2);
      uStack_70 = *(undefined8 *)param_1;
      uStack_58 = *(undefined8 *)(param_1 + 6);
      uStack_60 = *(undefined8 *)(param_1 + 4);
      uStack_50 = *(undefined8 *)(param_1 + 8);
      puVar2 = (undefined8 *)((ulong)&uStack_70 | 8);
      uStack_98 = *(undefined8 *)(param_2 + 2);
      uStack_a0 = *(undefined8 *)param_2;
      uStack_88 = *(undefined8 *)(param_2 + 6);
      uStack_90 = *(undefined8 *)(param_2 + 4);
      uStack_80 = *(undefined8 *)(param_2 + 8);
      puVar3 = (undefined8 *)((ulong)&uStack_a0 | 8);
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_b8 = puVar2[1];
      uStack_c0 = *puVar2;
      uStack_b0 = puVar2[2];
      uStack_d8 = puVar3[1];
      uStack_e0 = *puVar3;
      uStack_d0 = puVar3[2];
      uVar1 = /*Core.Networking.NetworkSessionTime$$op_LessThan*/ func_0x01660c74(&uStack_c0,&uStack_e0,0);
      if ((uVar1 & 1) == 0) {
        uStack_68 = *(undefined8 *)(param_1 + 2);
        uStack_70 = *(undefined8 *)param_1;
        uStack_58 = *(undefined8 *)(param_1 + 6);
        uStack_60 = *(undefined8 *)(param_1 + 4);
        uStack_50 = *(undefined8 *)(param_1 + 8);
        puVar2 = (undefined8 *)((ulong)&uStack_70 | 8);
        uStack_98 = *(undefined8 *)(param_2 + 2);
        uStack_a0 = *(undefined8 *)param_2;
        uStack_88 = *(undefined8 *)(param_2 + 6);
        uStack_90 = *(undefined8 *)(param_2 + 4);
        uStack_80 = *(undefined8 *)(param_2 + 8);
        puVar3 = (undefined8 *)((ulong)&uStack_a0 | 8);
        if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uStack_f8 = puVar2[1];
        uStack_100 = *puVar2;
        uStack_f0 = puVar2[2];
        uStack_118 = puVar3[1];
        uStack_120 = *puVar3;
        uStack_110 = puVar3[2];
        uVar1 = /*Core.Networking.NetworkSessionTime$$op_GreaterThan*/ func_0x01660b50(&uStack_100,&uStack_120,0);
        if ((uVar1 & 1) != 0) {
          return false;
        }
LAB_014ade8c:
        return *param_2 < *param_1;
      }
    }
  }
  return true;
}



// ============================================================
// RVA: 0x14adea0 | Atlas.Gameplay.NetworkResultsUpdater.EventStandingBattleComparison
// ============================================================

bool Atlas_Gameplay_NetworkResultsUpdater__EventStandingBattleComparison
               (uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000003eb4a82 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4a82 = 1;
  }
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  if (uVar2 <= uVar1 && uVar1 != uVar2) {
code_r0x014adef0:
    bVar3 = true;
  }
  else {
    if (uVar2 <= uVar1) {
      uStack_68 = *(undefined8 *)(param_1 + 2);
      uStack_70 = *(undefined8 *)param_1;
      uStack_58 = *(undefined8 *)(param_1 + 6);
      uStack_60 = *(undefined8 *)(param_1 + 4);
      uStack_50 = *(undefined8 *)(param_1 + 8);
      puVar5 = (undefined8 *)((ulong)&uStack_70 | 8);
      uStack_98 = *(undefined8 *)(param_2 + 2);
      uStack_a0 = *(undefined8 *)param_2;
      uStack_88 = *(undefined8 *)(param_2 + 6);
      uStack_90 = *(undefined8 *)(param_2 + 4);
      uStack_80 = *(undefined8 *)(param_2 + 8);
      puVar6 = (undefined8 *)((ulong)&uStack_a0 | 8);
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_b8 = puVar5[1];
      uStack_c0 = *puVar5;
      uStack_b0 = puVar5[2];
      uStack_d8 = puVar6[1];
      uStack_e0 = *puVar6;
      uStack_d0 = puVar6[2];
      uVar4 = /*Core.Networking.NetworkSessionTime$$op_LessThan*/ func_0x01660c74(&uStack_c0,&uStack_e0,0);
      if ((uVar4 & 1) != 0) goto code_r0x014adef0;
      uStack_68 = *(undefined8 *)(param_1 + 2);
      uStack_70 = *(undefined8 *)param_1;
      uStack_58 = *(undefined8 *)(param_1 + 6);
      uStack_60 = *(undefined8 *)(param_1 + 4);
      uStack_50 = *(undefined8 *)(param_1 + 8);
      puVar5 = (undefined8 *)((ulong)&uStack_70 | 8);
      uStack_98 = *(undefined8 *)(param_2 + 2);
      uStack_a0 = *(undefined8 *)param_2;
      uStack_88 = *(undefined8 *)(param_2 + 6);
      uStack_90 = *(undefined8 *)(param_2 + 4);
      uStack_80 = *(undefined8 *)(param_2 + 8);
      puVar6 = (undefined8 *)((ulong)&uStack_a0 | 8);
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_f8 = puVar5[1];
      uStack_100 = *puVar5;
      uStack_f0 = puVar5[2];
      uStack_118 = puVar6[1];
      uStack_120 = *puVar6;
      uStack_110 = puVar6[2];
      uVar4 = /*Core.Networking.NetworkSessionTime$$op_GreaterThan*/ func_0x01660b50(&uStack_100,&uStack_120,0);
      if ((uVar4 & 1) == 0) {
        return *param_2 < *param_1;
      }
    }
    bVar3 = false;
  }
  return bVar3;
}



// ============================================================
// RVA: 0x14ae02c | Atlas.Gameplay.NetworkResultsUpdater.Init
// ============================================================

ulong Atlas_Gameplay_NetworkResultsUpdater__Init
                (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((bRam0000000003eb4a83 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d2a4a8);
    func_0x00f78a20(0x3d1b668);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d55198);
    func_0x00f78a20(0x3d3b570);
    func_0x00f78a20(0x3d5acd8);
    func_0x00f78a20(0x3d5ace0);
    func_0x00f78a20(0x3d5ace8);
    func_0x00f78a20(0x3d5acf0);
    func_0x00f78a20(0x3d5acf8);
    func_0x00f78a20(0x3d5ad00);
    bRam0000000003eb4a83 = 1;
  }
  if (param_2 == 0) {
LAB_014ae448:
    func_0x00f78af4();
  }
  else {
    uVar2 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55150);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    uVar2 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55198);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = param_3;
    *(undefined8 *)(param_1 + 0x28) = param_4;
    *(undefined8 *)(param_1 + 0x30) = param_5;
    if (((*(long *)(param_1 + 0x10) == 0) ||
        (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar6 == 0)) ||
       (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) goto LAB_014ae448;
    uVar8 = *(undefined8 *)(lVar6 + 0x68);
    uVar2 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,param_1,uRam0000000003d5acf8,uRam0000000003d29f28);
    plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar8,uVar2,0);
    if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
      *(long **)(lVar6 + 0x68) = plVar3;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         ((lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar6 != 0 &&
          (lVar6 = *(long *)(lVar6 + 0x10), lVar6 != 0)))) {
        uVar8 = *(undefined8 *)(lVar6 + 0x60);
        uVar2 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(uVar2,param_1,uRam0000000003d5ace0,0);
        plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar8,uVar2,0);
        if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto LAB_014ae44c;
        *(long **)(lVar6 + 0x60) = plVar3;
        if (((*(long *)(param_1 + 0x10) != 0) &&
            (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar6 != 0)) &&
           (lVar6 = *(long *)(lVar6 + 0x10), lVar6 != 0)) {
          uVar8 = *(undefined8 *)(lVar6 + 0x70);
          uVar2 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,param_1,uRam0000000003d5ad00,uRam0000000003d29f28);
          plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar8,uVar2,0);
          if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) goto LAB_014ae44c;
          *(long **)(lVar6 + 0x70) = plVar3;
          if ((*(long *)(param_1 + 0x10) != 0) &&
             ((lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar6 != 0 &&
              (lVar6 = *(long *)(lVar6 + 0x10), lVar6 != 0)))) {
            uVar8 = *(undefined8 *)(lVar6 + 0x28);
            uVar2 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
            /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,param_1,uRam0000000003d5acd8,uRam0000000003d2a1c8);
            plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar8,uVar2,0);
            if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) goto LAB_014ae44c;
            *(long **)(lVar6 + 0x28) = plVar3;
            if (((*(long *)(param_1 + 0x10) != 0) &&
                (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar6 != 0)) &&
               (lVar6 = *(long *)(lVar6 + 0x10), lVar6 != 0)) {
              uVar8 = *(undefined8 *)(lVar6 + 0x78);
              uVar2 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
              /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,param_1,uRam0000000003d5acf0,uRam0000000003d29f28);
              plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar8,uVar2,0);
              if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) goto LAB_014ae44c;
              *(long **)(lVar6 + 0x78) = plVar3;
              if ((*(long *)(param_1 + 0x10) != 0) &&
                 ((lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar6 != 0 &&
                  (lVar6 = *(long *)(lVar6 + 0x10), lVar6 != 0)))) {
                uVar8 = *(undefined8 *)(lVar6 + 0xa0);
                uVar2 = func_0x00f78aec(/*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668);
                /*System.Action<NetworkSessionTime, uint>$$.ctor*/ func_0x01e6d100(uVar2,param_1,uRam0000000003d5ace8,uRam0000000003d2a4a8);
                plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar8,uVar2,0);
                if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668)) goto LAB_014ae44c;
                *(long **)(lVar6 + 0xa0) = plVar3;
                if (*(long *)(param_1 + 0x90) != 0) {
                  uVar4 = /*System.Collections.Generic.List<NetworkResultsStanding>$$AsReadOnly*/ func_0x02416a2c(*(long *)(param_1 + 0x90),uRam0000000003d3b570);
                  *(ulong *)(param_1 + 0x98) = uVar4;
                  return uVar4;
                }
              }
            }
          }
        }
      }
      goto LAB_014ae448;
    }
  }
LAB_014ae44c:
  lVar6 = func_0x00f78e5c();
  if ((bRam0000000003eb4a84 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d2a4a8);
    func_0x00f78a20(0x3d1b668);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d3c6c8);
    func_0x00f78a20(0x3d5acd8);
    func_0x00f78a20(0x3d5ace0);
    func_0x00f78a20(0x3d5ace8);
    func_0x00f78a20(0x3d5acf0);
    func_0x00f78a20(0x3d5acf8);
    func_0x00f78a20(0x3d5ad00);
    bRam0000000003eb4a84 = 1;
  }
  plVar3 = (long *)(lVar6 + 0x10);
  if (((*plVar3 != 0) && (lVar7 = *(long *)(*plVar3 + 0x20), lVar7 != 0)) &&
     (lVar7 = *(long *)(lVar7 + 0x10), lVar7 != 0)) {
    uVar8 = *(undefined8 *)(lVar7 + 0x60);
    uVar2 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar2,lVar6,uRam0000000003d5ace0,0);
    plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar8,uVar2,0);
    if ((plVar5 != (long *)0x0) && (*plVar5 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto code_r0x014ae81c;
    *(long **)(lVar7 + 0x60) = plVar5;
    if ((*plVar3 != 0) &&
       ((lVar7 = *(long *)(*plVar3 + 0x20), lVar7 != 0 &&
        (lVar7 = *(long *)(lVar7 + 0x10), lVar7 != 0)))) {
      uVar8 = *(undefined8 *)(lVar7 + 0x28);
      uVar2 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,lVar6,uRam0000000003d5acd8,uRam0000000003d2a1c8);
      plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar8,uVar2,0);
      if ((plVar5 != (long *)0x0) && (*plVar5 != /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) goto code_r0x014ae81c;
      *(long **)(lVar7 + 0x28) = plVar5;
      if (((*plVar3 != 0) && (lVar7 = *(long *)(*plVar3 + 0x20), lVar7 != 0)) &&
         (lVar7 = *(long *)(lVar7 + 0x10), lVar7 != 0)) {
        uVar8 = *(undefined8 *)(lVar7 + 0x68);
        uVar2 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,lVar6,uRam0000000003d5acf8,uRam0000000003d29f28);
        plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar8,uVar2,0);
        lVar1 = /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0;
        if ((plVar5 != (long *)0x0) && (*plVar5 != /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) goto code_r0x014ae81c;
        *(long **)(lVar7 + 0x68) = plVar5;
        if ((*plVar3 != 0) &&
           ((lVar7 = *(long *)(*plVar3 + 0x20), lVar7 != 0 &&
            (lVar7 = *(long *)(lVar7 + 0x10), lVar7 != 0)))) {
          uVar8 = *(undefined8 *)(lVar7 + 0x70);
          uVar2 = func_0x00f78aec(lVar1);
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,lVar6,uRam0000000003d5ad00,uRam0000000003d29f28);
          plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar8,uVar2,0);
          lVar1 = /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0;
          if ((plVar5 != (long *)0x0) && (*plVar5 != /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) goto code_r0x014ae81c;
          *(long **)(lVar7 + 0x70) = plVar5;
          if (((*plVar3 != 0) && (lVar7 = *(long *)(*plVar3 + 0x20), lVar7 != 0)) &&
             (lVar7 = *(long *)(lVar7 + 0x10), lVar7 != 0)) {
            uVar8 = *(undefined8 *)(lVar7 + 0x78);
            uVar2 = func_0x00f78aec(lVar1);
            /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,lVar6,uRam0000000003d5acf0,uRam0000000003d29f28);
            plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar8,uVar2,0);
            if ((plVar5 != (long *)0x0) && (*plVar5 != /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) goto code_r0x014ae81c;
            *(long **)(lVar7 + 0x78) = plVar5;
            if ((*plVar3 != 0) &&
               ((lVar7 = *(long *)(*plVar3 + 0x20), lVar7 != 0 &&
                (lVar7 = *(long *)(lVar7 + 0x10), lVar7 != 0)))) {
              uVar8 = *(undefined8 *)(lVar7 + 0xa0);
              uVar2 = func_0x00f78aec(/*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668);
              /*System.Action<NetworkSessionTime, uint>$$.ctor*/ func_0x01e6d100(uVar2,lVar6,uRam0000000003d5ace8,uRam0000000003d2a4a8);
              plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar8,uVar2,0);
              if ((plVar5 != (long *)0x0) && (*plVar5 != /*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668))
              goto code_r0x014ae81c;
              *(long **)(lVar7 + 0xa0) = plVar5;
              *(undefined4 *)(lVar6 + 0x70) = 0xffffffff;
              if (*(long *)(lVar6 + 0x80) != 0) {
                uVar4 = /*System.Collections.Generic.List<uint>$$Clear*/ func_0x0247eb08(*(long *)(lVar6 + 0x80),uRam0000000003d3c6c8);
                *(undefined8 *)(lVar6 + 0x38) = 0;
                *(undefined8 *)(lVar6 + 0x30) = 0;
                *(undefined8 *)(lVar6 + 0x48) = 0;
                *(undefined8 *)(lVar6 + 0x40) = 0;
                *(undefined8 *)(lVar6 + 0x18) = 0;
                *plVar3 = 0;
                *(undefined8 *)(lVar6 + 0x28) = 0;
                *(undefined8 *)(lVar6 + 0x20) = 0;
                return uVar4;
              }
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x014ae81c:
  lVar6 = func_0x00f78e5c();
  return (ulong)*(uint *)(lVar6 + 0x70);
}



// ============================================================
// RVA: 0x14ae450 | Atlas.Gameplay.NetworkResultsUpdater.DeInit
// ============================================================

ulong Atlas_Gameplay_NetworkResultsUpdater__DeInit(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  if ((bRam0000000003eb4a84 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d2a4a8);
    func_0x00f78a20(0x3d1b668);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d3c6c8);
    func_0x00f78a20(0x3d5acd8);
    func_0x00f78a20(0x3d5ace0);
    func_0x00f78a20(0x3d5ace8);
    func_0x00f78a20(0x3d5acf0);
    func_0x00f78a20(0x3d5acf8);
    func_0x00f78a20(0x3d5ad00);
    bRam0000000003eb4a84 = 1;
  }
  plVar7 = (long *)(param_1 + 0x10);
  if (((*plVar7 != 0) && (lVar5 = *(long *)(*plVar7 + 0x20), lVar5 != 0)) &&
     (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)) {
    uVar6 = *(undefined8 *)(lVar5 + 0x60);
    uVar2 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar2,param_1,uRam0000000003d5ace0,0);
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,uVar2,0);
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto LAB_014ae81c;
    *(long **)(lVar5 + 0x60) = plVar3;
    if ((*plVar7 != 0) &&
       ((lVar5 = *(long *)(*plVar7 + 0x20), lVar5 != 0 &&
        (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)))) {
      uVar6 = *(undefined8 *)(lVar5 + 0x28);
      uVar2 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,param_1,uRam0000000003d5acd8,uRam0000000003d2a1c8);
      plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,uVar2,0);
      if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) goto LAB_014ae81c;
      *(long **)(lVar5 + 0x28) = plVar3;
      if (((*plVar7 != 0) && (lVar5 = *(long *)(*plVar7 + 0x20), lVar5 != 0)) &&
         (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)) {
        uVar6 = *(undefined8 *)(lVar5 + 0x68);
        uVar2 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,param_1,uRam0000000003d5acf8,uRam0000000003d29f28);
        plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,uVar2,0);
        lVar1 = /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0;
        if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) goto LAB_014ae81c;
        *(long **)(lVar5 + 0x68) = plVar3;
        if ((*plVar7 != 0) &&
           ((lVar5 = *(long *)(*plVar7 + 0x20), lVar5 != 0 &&
            (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)))) {
          uVar6 = *(undefined8 *)(lVar5 + 0x70);
          uVar2 = func_0x00f78aec(lVar1);
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,param_1,uRam0000000003d5ad00,uRam0000000003d29f28);
          plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,uVar2,0);
          lVar1 = /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0;
          if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) goto LAB_014ae81c;
          *(long **)(lVar5 + 0x70) = plVar3;
          if (((*plVar7 != 0) && (lVar5 = *(long *)(*plVar7 + 0x20), lVar5 != 0)) &&
             (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)) {
            uVar6 = *(undefined8 *)(lVar5 + 0x78);
            uVar2 = func_0x00f78aec(lVar1);
            /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,param_1,uRam0000000003d5acf0,uRam0000000003d29f28);
            plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,uVar2,0);
            if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) goto LAB_014ae81c;
            *(long **)(lVar5 + 0x78) = plVar3;
            if ((*plVar7 != 0) &&
               ((lVar5 = *(long *)(*plVar7 + 0x20), lVar5 != 0 &&
                (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)))) {
              uVar6 = *(undefined8 *)(lVar5 + 0xa0);
              uVar2 = func_0x00f78aec(/*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668);
              /*System.Action<NetworkSessionTime, uint>$$.ctor*/ func_0x01e6d100(uVar2,param_1,uRam0000000003d5ace8,uRam0000000003d2a4a8);
              plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,uVar2,0);
              if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668)) goto LAB_014ae81c;
              *(long **)(lVar5 + 0xa0) = plVar3;
              *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
              if (*(long *)(param_1 + 0x80) != 0) {
                uVar4 = /*System.Collections.Generic.List<uint>$$Clear*/ func_0x0247eb08(*(long *)(param_1 + 0x80),uRam0000000003d3c6c8);
                *(undefined8 *)(param_1 + 0x38) = 0;
                *(undefined8 *)(param_1 + 0x30) = 0;
                *(undefined8 *)(param_1 + 0x48) = 0;
                *(undefined8 *)(param_1 + 0x40) = 0;
                *(undefined8 *)(param_1 + 0x18) = 0;
                *plVar7 = 0;
                *(undefined8 *)(param_1 + 0x28) = 0;
                *(undefined8 *)(param_1 + 0x20) = 0;
                return uVar4;
              }
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
LAB_014ae81c:
  lVar5 = func_0x00f78e5c();
  return (ulong)*(uint *)(lVar5 + 0x70);
}



// ============================================================
// RVA: 0x14ae820 | Atlas.Gameplay.NetworkResultsUpdater.GetLocalPlayerFinishPosition
// ============================================================

undefined4 Atlas_Gameplay_NetworkResultsUpdater__GetLocalPlayerFinishPosition(long param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x14ae828 | Atlas.Gameplay.NetworkResultsUpdater.GetRaceEndedTime
// ============================================================

void Atlas_Gameplay_NetworkResultsUpdater__GetRaceEndedTime(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  param_1[1] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x48);
  return;
}



// ============================================================
// RVA: 0x14ae83c | Atlas.Gameplay.NetworkResultsUpdater.GetNetworkResults
// ============================================================

undefined8 Atlas_Gameplay_NetworkResultsUpdater__GetNetworkResults(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x14ae844 | Atlas.Gameplay.NetworkResultsUpdater.SortPlayersByResults
// ============================================================

void Atlas_Gameplay_NetworkResultsUpdater__SortPlayersByResults
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam0000000003eb4a85 & 1) == 0) {
    func_0x00f78a20(0x3d32b00);
    func_0x00f78a20(0x3d32b08);
    func_0x00f78a20(0x3d32b10);
    func_0x00f78a20(0x3d5a0a0);
    func_0x00f78a20(0x3d5a0b0);
    func_0x00f78a20(0x3d5a0c0);
    func_0x00f78a20(0x3d3b428);
    func_0x00f78a20(0x3d3b578);
    func_0x00f78a20(0x3d3b430);
    func_0x00f78a20(0x3d3b440);
    func_0x00f78a20(0x3d3b448);
    func_0x00f78a20(0x3d3b450);
    bRam0000000003eb4a85 = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar5 != 0)) {
    /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(&uStack_f0,lVar5,0);
    uStack_88 = uStack_e8;
    uStack_90 = uStack_f0;
    uStack_78 = uStack_d8;
    uStack_80 = uStack_e0;
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (/*System.Collections.Generic.List<NetworkEventStanding>$$Clear*/ func_0x0240868c(*(long *)(param_1 + 0x88),uRam0000000003d3b430), param_3 != 0)) {
      /*System.Collections.Generic.List<NetworkEventStanding>$$GetEnumerator*/ func_0x02408f24(&uStack_130,param_3,uRam0000000003d3b440);
      uStack_c8 = uStack_128;
      uStack_d0 = uStack_130;
      uStack_b8 = uStack_118;
      uStack_c0 = uStack_120;
      uStack_a8 = uStack_108;
      uStack_b0 = uStack_110;
      uStack_a0 = uStack_100;
      while (uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$MoveNext*/ func_0x01f6cf9c(&uStack_d0,uRam0000000003d32b08), (uVar6 & 1) != 0) {
        if (*(long *)(param_1 + 0x88) == 0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x14aeb30);
          (*pcVar3)();
        }
        uStack_128 = uStack_b8;
        uStack_130 = uStack_c0;
        uStack_118 = uStack_a8;
        uStack_120 = uStack_b0;
        uStack_110 = uStack_a0;
        /*System.Collections.Generic.List<NetworkEventStanding>$$Add*/ func_0x02408354(*(long *)(param_1 + 0x88),&uStack_130,uRam0000000003d3b428);
      }
      /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(&uStack_d0,uRam0000000003d32b00);
      if (*(long *)(param_1 + 0x90) != 0) {
        /*System.Collections.Generic.List<NetworkResultsStanding>$$Clear*/ func_0x02416a98(*(long *)(param_1 + 0x90),uRam0000000003d3b578);
        if (*(long *)(param_1 + 0x28) != 0) {
          iVar4 = Atlas_Contexts_GameContextBase__IsUsingPoints(*(long *)(param_1 + 0x28),0);
          auVar8 = /*Core.Containers.ListIteratorExtensions$$Begin<NetworkEventStanding>*/ func_0x01875450(*(undefined8 *)(param_1 + 0x88),uRam0000000003d5a0a0);
          auVar9 = /*Core.Containers.ListIteratorExtensions$$End<NetworkEventStanding>*/ func_0x01875af0(*(undefined8 *)(param_1 + 0x88),uRam0000000003d5a0b0);
          lVar5 = 0x58;
          if (iVar4 == 0) {
            lVar5 = 0x50;
          }
          /*Core.Containers.ListIteratorExtensions$$Sort<NetworkEventStanding>*/ func_0x0187a520(auVar8._0_8_,auVar8._8_8_,auVar9._0_8_,auVar9._8_8_,
                          *(undefined8 *)(param_1 + lVar5),uRam0000000003d5a0c0);
          lVar5 = *(long *)(param_1 + 0x88);
          if (lVar5 != 0) {
            uVar2 = *(uint *)(lVar5 + 0x18);
            if ((int)uVar2 < 1) {
              return;
            }
            uVar6 = 1;
            lVar7 = 0x20;
            do {
              if ((ulong)*(uint *)(lVar5 + 0x18) <= uVar6 - 1) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x10) + lVar7);
              uStack_158 = puVar1[1];
              uStack_160 = *puVar1;
              uStack_148 = puVar1[3];
              uStack_150 = puVar1[2];
              uStack_140 = puVar1[4];
              uStack_178 = uStack_88;
              uStack_180 = uStack_90;
              uStack_168 = uStack_78;
              uStack_170 = uStack_80;
              /*Atlas.Gameplay.NetworkResultsUpdater$$SetResult*/ func_0x014aeb6c(param_1,uVar6,&uStack_160,&uStack_180,param_2,param_4);
              if (uVar2 == uVar6) {
                return;
              }
              lVar5 = *(long *)(param_1 + 0x88);
              uVar6 = uVar6 + 1;
              lVar7 = lVar7 + 0x28;
            } while (lVar5 != 0);
          }
        }
      }
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14aeb6c | Atlas.Gameplay.NetworkResultsUpdater.SetResult
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014aee48) */

void Atlas_Gameplay_NetworkResultsUpdater__SetResult
               (long param_1,undefined4 param_2,int *param_3,long param_4,long *param_5,int param_6)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  long lStack_70;
  
  if ((bRam0000000003eb4a86 & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d0a0);
    func_0x00f78a20(0x3d1d260);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3b568);
    bRam0000000003eb4a86 = 1;
  }
  if (param_5 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    lVar5 = *param_5;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_014aec4c;
        }
        piVar7 = piVar7 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(param_5,/*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0,0);
LAB_014aec4c:
    plVar4 = (long *)(*(code *)*puVar3)(param_5,puVar3[1]);
    if (plVar4 != (long *)0x0) {
      do {
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto code_r0x014aecbc;
            }
            piVar7 = piVar7 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014aecbc:
        uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if ((uVar6 & 1) == 0) goto code_r0x014aeda0;
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto code_r0x014aed18;
            }
            piVar7 = piVar7 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260,0);
code_r0x014aed18:
        lVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x014aee58;
        }
        if (*(long *)(lVar5 + 0x10) == 0) {
          func_0x00f78af4();
          goto code_r0x014aee58;
        }
        iVar1 = *(int *)(*(long *)(lVar5 + 0x10) + 0x54);
      } while (iVar1 != *param_3);
      if (iVar1 == *(int *)(param_4 + 0xc)) {
        *(undefined4 *)(param_1 + 0x70) = param_2;
      }
      uVar6 = /*Atlas.Gameplay.NetworkResultsUpdater$$IsSinglePlayerRace*/ func_0x014aee94(param_1);
      if ((((uVar6 & 1) != 0) && ((char)param_3[9] != '\0')) && (param_6 == 0)) {
code_r0x014aeda0:
        if (plVar4 != (long *)0x0) {
          lVar5 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto code_r0x014aedfc;
              }
              piVar7 = piVar7 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014aedfc:
          (*(code *)*puVar3)(plVar4,puVar3[1]);
        }
        return;
      }
      if (*(long *)(param_1 + 0x90) != 0) {
        uStack_98 = *(undefined8 *)(param_3 + 2);
        uStack_a0 = *(undefined8 *)param_3;
        uStack_88 = *(undefined8 *)(param_3 + 6);
        uStack_90 = *(undefined8 *)(param_3 + 4);
        uStack_80 = *(undefined8 *)(param_3 + 8);
        uStack_74 = 0;
        uStack_78 = param_2;
        lStack_70 = lVar5;
        /*System.Collections.Generic.List<NetworkResultsStanding>$$Add*/ func_0x02416740(*(long *)(param_1 + 0x90),&uStack_a0,uRam0000000003d3b568);
        goto code_r0x014aeda0;
      }
      func_0x00f78af4();
      goto code_r0x014aee58;
    }
  }
  func_0x00f78af4();
code_r0x014aee58:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14aee5c);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x14aee94 | Atlas.Gameplay.NetworkResultsUpdater.IsSinglePlayerRace
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014af484) */

ulong Atlas_Gameplay_NetworkResultsUpdater__IsSinglePlayerRace(long param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 *puVar4;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int extraout_w1;
  long lVar13;
  int *piVar14;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong uVar15;
  long *unaff_x21;
  long *plVar16;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined *puVar17;
  undefined1 auVar18 [16];
  undefined1 *puVar5;
  
  lVar8 = *(long *)(param_1 + 0x28);
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x1c0) != 0)) {
    uVar6 = *(uint *)(*(long *)(lVar8 + 0x1c0) + 0x18);
    if (uVar6 < 10 && (1 << (ulong)(uVar6 & 0x1f) & 0x218U) != 0) {
      uVar6 = Atlas_Contexts_GameContextBase__IsUsingPoints(lVar8,0);
      uVar9 = (ulong)(uVar6 ^ 1);
    }
    else {
      uVar9 = 0;
    }
    return uVar9;
  }
  puVar17 = &Atlas_Gameplay_NetworkResultsUpdater__OnLocalPlayerFinished;
  auVar18 = func_0x00f78af4();
  puVar2 = &stack0xfffffffffffffff0;
  puVar4 = (undefined1 *)register0x00000008;
  do {
    puVar5 = puVar2;
    lVar8 = auVar18._8_8_;
    uVar10 = auVar18._0_8_;
    *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
    *(ulong *)(puVar5 + -0x50) = unaff_x26;
    *(undefined8 **)(puVar5 + -0x48) = unaff_x25;
    *(undefined8 **)(puVar5 + -0x40) = unaff_x24;
    *(ulong *)(puVar5 + -0x38) = unaff_x23;
    *(long *)(puVar5 + -0x30) = unaff_x22;
    *(long **)(puVar5 + -0x28) = unaff_x21;
    *(ulong *)(puVar5 + -0x20) = unaff_x20;
    *(ulong *)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = puVar4 + -0x10;
    *(undefined **)(puVar5 + -8) = puVar17;
    *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)PTR_03a5d648;
    uVar15 = 0x3eb4000;
    uVar9 = uVar10;
    if ((bRam0000000003eb4a87 & 1) == 0) {
      func_0x00f78a20(0x3d29f40);
      func_0x00f78a20(0x3d32b00);
      func_0x00f78a20(0x3d32b08);
      func_0x00f78a20(0x3d32b10);
      func_0x00f78a20(0x3d220f0);
      func_0x00f78a20(0x3d1d0a0);
      func_0x00f78a20(0x3d1d260);
      func_0x00f78a20(0x3d22180);
      func_0x00f78a20(0x3d1d578);
      func_0x00f78a20(0x3d3b440);
      uVar9 = func_0x00f78a20(0x3d3fe80);
      bRam0000000003eb4a87 = 1;
    }
    *(undefined8 *)(puVar5 + -0xf0) = 0;
    *(undefined8 *)(puVar5 + -0x108) = 0;
    *(undefined8 *)(puVar5 + -0x110) = 0;
    *(undefined8 *)(puVar5 + -0xf8) = 0;
    *(undefined8 *)(puVar5 + -0x100) = 0;
    *(undefined8 *)(puVar5 + -0x118) = 0;
    *(undefined8 *)(puVar5 + -0x120) = 0;
    *(undefined4 *)(puVar5 + -0x128) = 0;
    if (*(char *)(uVar10 + 0x74) != '\0') goto code_r0x014af43c;
    uVar9 = Atlas_Gameplay_NetworkResultsUpdater__IsSinglePlayerRace(uVar10);
    unaff_x20 = uVar15;
    if ((uVar9 & 1) != 0) goto code_r0x014af340;
    if (lVar8 == 0) goto code_r0x014af494;
    unaff_x21 = (long *)(puVar5 + -0xe0);
    *(long *)(puVar5 + -0x158) = lVar8;
    /*System.Collections.Generic.List<NetworkEventStanding>$$GetEnumerator*/ func_0x02408f24(puVar5 + -0xe0,lVar8,uRam0000000003d3b440);
    *(undefined8 *)(puVar5 + -0x118) = *(undefined8 *)(puVar5 + -0xd8);
    *(undefined8 *)(puVar5 + -0x120) = *(undefined8 *)(puVar5 + -0xe0);
    *(undefined8 *)(puVar5 + -0x108) = *(undefined8 *)(puVar5 + -200);
    *(undefined8 *)(puVar5 + -0x110) = *(undefined8 *)(puVar5 + -0xd0);
    *(undefined8 *)(puVar5 + -0xf8) = *(undefined8 *)(puVar5 + -0xb8);
    *(undefined8 *)(puVar5 + -0x100) = *(undefined8 *)(puVar5 + -0xc0);
    *(undefined8 *)(puVar5 + -0xf0) = *(undefined8 *)(puVar5 + -0xb0);
    unaff_x24 = (undefined8 *)(puVar5 + -0x10c);
    unaff_x25 = (undefined8 *)(puVar5 + -0xdc);
    unaff_x28 = 0x3d22180;
    unaff_x27 = 0x3d1d260;
    unaff_x26 = 0;
    while( true ) {
      uVar9 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$MoveNext*/ func_0x01f6cf9c(puVar5 + -0x120,uRam0000000003d32b08);
      if ((uVar9 & 1) == 0) break;
      iVar7 = *(int *)(puVar5 + -0x110);
      *(undefined8 *)(puVar5 + -0x98) = *(undefined8 *)(puVar5 + -0x104);
      *(undefined8 *)(puVar5 + -0xa0) = *unaff_x24;
      *(undefined8 *)(puVar5 + -0x88) = *(undefined8 *)(puVar5 + -0xf4);
      *(undefined8 *)(puVar5 + -0x90) = *(undefined8 *)(puVar5 + -0xfc);
      *(undefined4 *)(puVar5 + -0x80) = *(undefined4 *)(puVar5 + -0xec);
      if (*(long *)(uVar10 + 0x20) == 0) {
        func_0x00f78af4();
code_r0x014af490:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x14af494);
        (*pcVar3)();
      }
      plVar16 = *(long **)(*(long *)(uVar10 + 0x20) + 0x28);
      if (plVar16 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x014af490;
      }
      lVar8 = *plVar16;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x014af0d8;
          }
          piVar14 = piVar14 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)func_0x00fac1f0(plVar16,/*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0,0);
code_r0x014af0d8:
      unaff_x21 = (long *)(*(code *)*puVar11)(plVar16,puVar11[1]);
      if (unaff_x21 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x014af490;
      }
code_r0x014af0ec:
      lVar8 = *unaff_x21;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x014af138;
          }
          piVar14 = piVar14 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)func_0x00fac1f0(unaff_x21,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014af138:
      uVar9 = (*(code *)*puVar11)(unaff_x21,puVar11[1]);
      if ((uVar9 & 1) != 0) {
        lVar8 = *unaff_x21;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
              goto code_r0x014af194;
            }
            piVar14 = piVar14 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)func_0x00fac1f0(unaff_x21,/*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260,0);
code_r0x014af194:
        lVar8 = (*(code *)*puVar11)(unaff_x21,puVar11[1]);
        if (lVar8 == 0) {
          func_0x00f78af4();
          goto code_r0x014af490;
        }
        if (*(long *)(lVar8 + 0x10) == 0) {
          func_0x00f78af4();
          goto code_r0x014af490;
        }
        if (*(int *)(*(long *)(lVar8 + 0x10) + 0x54) == iVar7) {
          *(undefined8 *)(puVar5 + -0xd8) = *(undefined8 *)(puVar5 + -0x98);
          *(undefined8 *)(puVar5 + -0xe0) = *(undefined8 *)(puVar5 + -0xa0);
          *(undefined8 *)(puVar5 + -200) = *(undefined8 *)(puVar5 + -0x88);
          *(undefined8 *)(puVar5 + -0xd0) = *(undefined8 *)(puVar5 + -0x90);
          *(undefined4 *)(puVar5 + -0xc0) = *(undefined4 *)(puVar5 + -0x80);
          *(undefined8 *)(puVar5 + -0x148) = *(undefined8 *)(puVar5 + -0xd4);
          *(undefined8 *)(puVar5 + -0x150) = *unaff_x25;
          *(undefined8 *)(puVar5 + -0x140) = *(undefined8 *)(puVar5 + -0xcc);
          /*Atlas.Gameplay.Player.GameContextPlayer$$OnFinishedGame*/ func_0x015a5760(lVar8,puVar5 + -0x150,0);
        }
        goto code_r0x014af0ec;
      }
      *(undefined4 *)(puVar5 + (long)(int)unaff_x26 * 4 + -0x130) = 0x74;
      uVar1 = *(uint *)(puVar5 + -0x128);
      uVar6 = uVar1 + 1;
      unaff_x23 = (ulong)uVar6;
      *(uint *)(puVar5 + -0x128) = uVar6;
      if (unaff_x21 != (long *)0x0) {
        lVar8 = *unaff_x21;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
              goto code_r0x014af268;
            }
            piVar14 = piVar14 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)func_0x00fac1f0(unaff_x21,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014af268:
        (*(code *)*puVar11)(unaff_x21,puVar11[1]);
      }
      unaff_x26 = 0;
      if ((uVar6 != 0) &&
         (unaff_x26 = unaff_x23, *(int *)(puVar5 + (long)(int)uVar1 * 4 + -0x130) == 0x74)) {
        *(uint *)(puVar5 + -0x128) = uVar1;
        unaff_x26 = (ulong)uVar1;
      }
    }
    *(undefined4 *)(puVar5 + (long)(int)unaff_x26 * 4 + -0x130) = 0x8d;
    unaff_x20 = (ulong)(*(int *)(puVar5 + -0x128) + 1U);
    *(uint *)(puVar5 + -0x128) = *(int *)(puVar5 + -0x128) + 1U;
    /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(puVar5 + -0x120,uRam0000000003d32b00);
    do {
      lVar8 = *(long *)(puVar5 + -0x158);
      if (((int)unaff_x20 != 0) &&
         (iVar7 = (int)unaff_x20 + -1, *(int *)(puVar5 + (long)iVar7 * 4 + -0x130) == 0x8d)) {
        *(int *)(puVar5 + -0x128) = iVar7;
      }
code_r0x014af340:
      if (*(long *)(uVar10 + 0x20) == 0) {
code_r0x014af494:
        func_0x00f78af4();
      }
      else {
        unaff_x21 = *(long **)(*(long *)(uVar10 + 0x20) + 0x28);
        uVar12 = /*Atlas.Gameplay.NetworkResultsUpdater$$IsLeagueGame*/ func_0x014af4f4(uVar10);
        Atlas_Gameplay_NetworkResultsUpdater__SortPlayersByResults(uVar10,unaff_x21,lVar8,uVar12);
        if (*(long *)(uVar10 + 0x28) == 0) goto code_r0x014af494;
        iVar7 = Atlas_Contexts_GameContextBase__IsUsingPoints(*(long *)(uVar10 + 0x28),0);
        uVar15 = unaff_x20;
        if (iVar7 != 0) {
          if (*(long *)(uVar10 + 0x98) != 0) {
            uVar15 = /*System.Collections.ObjectModel.ReadOnlyCollection<NetworkResultsStanding>$$get_Count*/ func_0x0278b5c0(*(long *)(uVar10 + 0x98),uRam0000000003d3fe80);
            if (((*(long *)(uVar10 + 0x28) != 0) &&
                (lVar13 = *(long *)(*(long *)(uVar10 + 0x28) + 0x40), lVar13 != 0)) &&
               (unaff_x21 = *(long **)(lVar13 + 0x28), unaff_x21 != (long *)0x0)) {
              lVar13 = *unaff_x21;
              uVar9 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar9 != 0) {
                piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == /*System.Collections.Generic.IReadOnlyCollection<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d578) {
                    puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                    goto code_r0x014af404;
                  }
                  piVar14 = piVar14 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)func_0x00fac1f0(unaff_x21,/*System.Collections.Generic.IReadOnlyCollection<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d578,0);
code_r0x014af404:
              uVar9 = (*(code *)*puVar11)(unaff_x21,puVar11[1]);
              if ((int)uVar9 <= (int)uVar15) goto code_r0x014af418;
              goto code_r0x014af43c;
            }
          }
          goto code_r0x014af494;
        }
code_r0x014af418:
        if (*(long *)(uVar10 + 0x60) != 0) {
          /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(*(long *)(uVar10 + 0x60),*(undefined8 *)(uVar10 + 0x98),
                          uRam0000000003d29f40);
        }
        uVar9 = /*Atlas.Gameplay.NetworkResultsUpdater$$CallIndividualResults*/ func_0x014af524(uVar10);
code_r0x014af43c:
        unaff_x20 = uVar15;
        if (*(long *)PTR_03a5d648 == *(long *)(puVar5 + -0x70)) {
          return uVar9;
        }
      }
      ___stack_chk_fail();
      if (extraout_w1 != 1) goto code_r0x014af4ec;
      puVar11 = (undefined8 *)___cxa_begin_catch();
      unaff_x21 = (long *)*puVar11;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(puVar5 + -0x120,uRam0000000003d32b00);
    } while (unaff_x21 == (long *)0x0);
    func_0x00f78ac0(unaff_x21,0);
code_r0x014af4ec:
    puVar17 = &Atlas_Gameplay_NetworkResultsUpdater__OnRemotePlayerFinished;
    auVar18 = __Unwind_Resume();
    puVar2 = puVar5 + -0x160;
    unaff_x19 = uVar10;
    unaff_x22 = lVar8;
    puVar4 = puVar5;
  } while( true );
}



// ============================================================
// RVA: 0x14aeeec | Atlas.Gameplay.NetworkResultsUpdater.OnLocalPlayerFinished
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014af484) */

void Atlas_Gameplay_NetworkResultsUpdater__OnLocalPlayerFinished
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int extraout_w1;
  long lVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar13;
  long *unaff_x21;
  long *plVar14;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar15 [16];
  
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = param_1;
  puVar4 = (undefined1 *)register0x00000008;
  do {
    lVar10 = auVar15._8_8_;
    lVar6 = auVar15._0_8_;
    *(undefined8 *)(puVar4 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar4 + -0x58) = unaff_x27;
    *(ulong *)(puVar4 + -0x50) = unaff_x26;
    *(undefined8 **)(puVar4 + -0x48) = unaff_x25;
    *(undefined8 **)(puVar4 + -0x40) = unaff_x24;
    *(ulong *)(puVar4 + -0x38) = unaff_x23;
    *(long *)(puVar4 + -0x30) = unaff_x22;
    *(long **)(puVar4 + -0x28) = unaff_x21;
    *(ulong *)(puVar4 + -0x20) = unaff_x20;
    *(long *)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
    *(undefined **)(puVar4 + -8) = unaff_x30;
    unaff_x29 = puVar4 + -0x10;
    *(undefined8 *)(puVar4 + -0x70) = *(undefined8 *)PTR_03a5d648;
    uVar13 = 0x3eb4000;
    if ((bRam0000000003eb4a87 & 1) == 0) {
      func_0x00f78a20(0x3d29f40);
      func_0x00f78a20(0x3d32b00);
      func_0x00f78a20(0x3d32b08);
      func_0x00f78a20(0x3d32b10);
      func_0x00f78a20(0x3d220f0);
      func_0x00f78a20(0x3d1d0a0);
      func_0x00f78a20(0x3d1d260);
      func_0x00f78a20(0x3d22180);
      func_0x00f78a20(0x3d1d578);
      func_0x00f78a20(0x3d3b440);
      func_0x00f78a20(0x3d3fe80);
      bRam0000000003eb4a87 = 1;
    }
    *(undefined8 *)(puVar4 + -0xf0) = 0;
    *(undefined8 *)(puVar4 + -0x108) = 0;
    *(undefined8 *)(puVar4 + -0x110) = 0;
    *(undefined8 *)(puVar4 + -0xf8) = 0;
    *(undefined8 *)(puVar4 + -0x100) = 0;
    *(undefined8 *)(puVar4 + -0x118) = 0;
    *(undefined8 *)(puVar4 + -0x120) = 0;
    *(undefined4 *)(puVar4 + -0x128) = 0;
    if (*(char *)(lVar6 + 0x74) != '\0') goto code_r0x014af43c;
    uVar7 = Atlas_Gameplay_NetworkResultsUpdater__IsSinglePlayerRace(lVar6);
    unaff_x20 = uVar13;
    if ((uVar7 & 1) != 0) goto code_r0x014af340;
    if (lVar10 == 0) goto code_r0x014af494;
    unaff_x21 = (long *)(puVar4 + -0xe0);
    *(long *)(puVar4 + -0x158) = lVar10;
    /*System.Collections.Generic.List<NetworkEventStanding>$$GetEnumerator*/ func_0x02408f24(puVar4 + -0xe0,lVar10,uRam0000000003d3b440);
    *(undefined8 *)(puVar4 + -0x118) = *(undefined8 *)(puVar4 + -0xd8);
    *(undefined8 *)(puVar4 + -0x120) = *(undefined8 *)(puVar4 + -0xe0);
    *(undefined8 *)(puVar4 + -0x108) = *(undefined8 *)(puVar4 + -200);
    *(undefined8 *)(puVar4 + -0x110) = *(undefined8 *)(puVar4 + -0xd0);
    *(undefined8 *)(puVar4 + -0xf8) = *(undefined8 *)(puVar4 + -0xb8);
    *(undefined8 *)(puVar4 + -0x100) = *(undefined8 *)(puVar4 + -0xc0);
    *(undefined8 *)(puVar4 + -0xf0) = *(undefined8 *)(puVar4 + -0xb0);
    unaff_x24 = (undefined8 *)(puVar4 + -0x10c);
    unaff_x25 = (undefined8 *)(puVar4 + -0xdc);
    unaff_x28 = 0x3d22180;
    unaff_x27 = 0x3d1d260;
    unaff_x26 = 0;
    while( true ) {
      uVar13 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$MoveNext*/ func_0x01f6cf9c(puVar4 + -0x120,uRam0000000003d32b08);
      if ((uVar13 & 1) == 0) break;
      iVar5 = *(int *)(puVar4 + -0x110);
      *(undefined8 *)(puVar4 + -0x98) = *(undefined8 *)(puVar4 + -0x104);
      *(undefined8 *)(puVar4 + -0xa0) = *unaff_x24;
      *(undefined8 *)(puVar4 + -0x88) = *(undefined8 *)(puVar4 + -0xf4);
      *(undefined8 *)(puVar4 + -0x90) = *(undefined8 *)(puVar4 + -0xfc);
      *(undefined4 *)(puVar4 + -0x80) = *(undefined4 *)(puVar4 + -0xec);
      if (*(long *)(lVar6 + 0x20) == 0) {
        func_0x00f78af4();
code_r0x014af490:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x14af494);
        (*pcVar3)();
      }
      plVar14 = *(long **)(*(long *)(lVar6 + 0x20) + 0x28);
      if (plVar14 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x014af490;
      }
      lVar10 = *plVar14;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar13 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x014af0d8;
          }
          piVar12 = piVar12 + 4;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)func_0x00fac1f0(plVar14,/*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0,0);
code_r0x014af0d8:
      unaff_x21 = (long *)(*(code *)*puVar8)(plVar14,puVar8[1]);
      if (unaff_x21 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x014af490;
      }
code_r0x014af0ec:
      lVar10 = *unaff_x21;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar13 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x014af138;
          }
          piVar12 = piVar12 + 4;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)func_0x00fac1f0(unaff_x21,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014af138:
      uVar13 = (*(code *)*puVar8)(unaff_x21,puVar8[1]);
      if ((uVar13 & 1) != 0) {
        lVar10 = *unaff_x21;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar13 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x014af194;
            }
            piVar12 = piVar12 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(unaff_x21,/*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260,0);
code_r0x014af194:
        lVar10 = (*(code *)*puVar8)(unaff_x21,puVar8[1]);
        if (lVar10 == 0) {
          func_0x00f78af4();
          goto code_r0x014af490;
        }
        if (*(long *)(lVar10 + 0x10) == 0) {
          func_0x00f78af4();
          goto code_r0x014af490;
        }
        if (*(int *)(*(long *)(lVar10 + 0x10) + 0x54) == iVar5) {
          *(undefined8 *)(puVar4 + -0xd8) = *(undefined8 *)(puVar4 + -0x98);
          *(undefined8 *)(puVar4 + -0xe0) = *(undefined8 *)(puVar4 + -0xa0);
          *(undefined8 *)(puVar4 + -200) = *(undefined8 *)(puVar4 + -0x88);
          *(undefined8 *)(puVar4 + -0xd0) = *(undefined8 *)(puVar4 + -0x90);
          *(undefined4 *)(puVar4 + -0xc0) = *(undefined4 *)(puVar4 + -0x80);
          *(undefined8 *)(puVar4 + -0x148) = *(undefined8 *)(puVar4 + -0xd4);
          *(undefined8 *)(puVar4 + -0x150) = *unaff_x25;
          *(undefined8 *)(puVar4 + -0x140) = *(undefined8 *)(puVar4 + -0xcc);
          /*Atlas.Gameplay.Player.GameContextPlayer$$OnFinishedGame*/ func_0x015a5760(lVar10,puVar4 + -0x150,0);
        }
        goto code_r0x014af0ec;
      }
      *(undefined4 *)(puVar4 + (long)(int)unaff_x26 * 4 + -0x130) = 0x74;
      uVar2 = *(uint *)(puVar4 + -0x128);
      uVar1 = uVar2 + 1;
      unaff_x23 = (ulong)uVar1;
      *(uint *)(puVar4 + -0x128) = uVar1;
      if (unaff_x21 != (long *)0x0) {
        lVar10 = *unaff_x21;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar13 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x014af268;
            }
            piVar12 = piVar12 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(unaff_x21,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014af268:
        (*(code *)*puVar8)(unaff_x21,puVar8[1]);
      }
      unaff_x26 = 0;
      if ((uVar1 != 0) &&
         (unaff_x26 = unaff_x23, *(int *)(puVar4 + (long)(int)uVar2 * 4 + -0x130) == 0x74)) {
        *(uint *)(puVar4 + -0x128) = uVar2;
        unaff_x26 = (ulong)uVar2;
      }
    }
    *(undefined4 *)(puVar4 + (long)(int)unaff_x26 * 4 + -0x130) = 0x8d;
    unaff_x20 = (ulong)(*(int *)(puVar4 + -0x128) + 1U);
    *(uint *)(puVar4 + -0x128) = *(int *)(puVar4 + -0x128) + 1U;
    /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(puVar4 + -0x120,uRam0000000003d32b00);
    do {
      lVar10 = *(long *)(puVar4 + -0x158);
      if (((int)unaff_x20 != 0) &&
         (iVar5 = (int)unaff_x20 + -1, *(int *)(puVar4 + (long)iVar5 * 4 + -0x130) == 0x8d)) {
        *(int *)(puVar4 + -0x128) = iVar5;
      }
code_r0x014af340:
      if (*(long *)(lVar6 + 0x20) == 0) {
code_r0x014af494:
        func_0x00f78af4();
      }
      else {
        unaff_x21 = *(long **)(*(long *)(lVar6 + 0x20) + 0x28);
        uVar9 = /*Atlas.Gameplay.NetworkResultsUpdater$$IsLeagueGame*/ func_0x014af4f4(lVar6);
        Atlas_Gameplay_NetworkResultsUpdater__SortPlayersByResults(lVar6,unaff_x21,lVar10,uVar9);
        if (*(long *)(lVar6 + 0x28) == 0) goto code_r0x014af494;
        iVar5 = Atlas_Contexts_GameContextBase__IsUsingPoints(*(long *)(lVar6 + 0x28),0);
        uVar13 = unaff_x20;
        if (iVar5 != 0) {
          if (*(long *)(lVar6 + 0x98) != 0) {
            uVar13 = /*System.Collections.ObjectModel.ReadOnlyCollection<NetworkResultsStanding>$$get_Count*/ func_0x0278b5c0(*(long *)(lVar6 + 0x98),uRam0000000003d3fe80);
            if (((*(long *)(lVar6 + 0x28) != 0) &&
                (lVar11 = *(long *)(*(long *)(lVar6 + 0x28) + 0x40), lVar11 != 0)) &&
               (unaff_x21 = *(long **)(lVar11 + 0x28), unaff_x21 != (long *)0x0)) {
              lVar11 = *unaff_x21;
              uVar7 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar7 != 0) {
                piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == /*System.Collections.Generic.IReadOnlyCollection<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d578) {
                    puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                    goto code_r0x014af404;
                  }
                  piVar12 = piVar12 + 4;
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)func_0x00fac1f0(unaff_x21,/*System.Collections.Generic.IReadOnlyCollection<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d578,0);
code_r0x014af404:
              iVar5 = (*(code *)*puVar8)(unaff_x21,puVar8[1]);
              if (iVar5 <= (int)uVar13) goto code_r0x014af418;
              goto code_r0x014af43c;
            }
          }
          goto code_r0x014af494;
        }
code_r0x014af418:
        if (*(long *)(lVar6 + 0x60) != 0) {
          /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(*(long *)(lVar6 + 0x60),*(undefined8 *)(lVar6 + 0x98),uRam0000000003d29f40
                         );
        }
        /*Atlas.Gameplay.NetworkResultsUpdater$$CallIndividualResults*/ func_0x014af524(lVar6);
code_r0x014af43c:
        unaff_x20 = uVar13;
        if (*(long *)PTR_03a5d648 == *(long *)(puVar4 + -0x70)) {
          return;
        }
      }
      ___stack_chk_fail();
      if (extraout_w1 != 1) goto code_r0x014af4ec;
      puVar8 = (undefined8 *)___cxa_begin_catch();
      unaff_x21 = (long *)*puVar8;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(puVar4 + -0x120,uRam0000000003d32b00);
    } while (unaff_x21 == (long *)0x0);
    func_0x00f78ac0(unaff_x21,0);
code_r0x014af4ec:
    unaff_x30 = &Atlas_Gameplay_NetworkResultsUpdater__OnRemotePlayerFinished;
    auVar15 = __Unwind_Resume();
    puVar4 = puVar4 + -0x160;
    unaff_x19 = lVar6;
    unaff_x22 = lVar10;
  } while( true );
}



// ============================================================
// RVA: 0x14aeef0 | Atlas.Gameplay.NetworkResultsUpdater.PlayerFinished
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014af484) */

void Atlas_Gameplay_NetworkResultsUpdater__PlayerFinished(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int extraout_w1;
  long lVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar12;
  long *unaff_x21;
  long *plVar13;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar14 [16];
  
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  do {
    lVar9 = auVar14._8_8_;
    lVar5 = auVar14._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x70) = *(undefined8 *)PTR_03a5d648;
    uVar12 = 0x3eb4000;
    if ((bRam0000000003eb4a87 & 1) == 0) {
      func_0x00f78a20(0x3d29f40);
      func_0x00f78a20(0x3d32b00);
      func_0x00f78a20(0x3d32b08);
      func_0x00f78a20(0x3d32b10);
      func_0x00f78a20(0x3d220f0);
      func_0x00f78a20(0x3d1d0a0);
      func_0x00f78a20(0x3d1d260);
      func_0x00f78a20(0x3d22180);
      func_0x00f78a20(0x3d1d578);
      func_0x00f78a20(0x3d3b440);
      func_0x00f78a20(0x3d3fe80);
      bRam0000000003eb4a87 = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x128) = 0;
    if (*(char *)(lVar5 + 0x74) != '\0') goto LAB_014af43c;
    uVar6 = Atlas_Gameplay_NetworkResultsUpdater__IsSinglePlayerRace(lVar5);
    unaff_x20 = uVar12;
    if ((uVar6 & 1) != 0) goto LAB_014af340;
    if (lVar9 == 0) goto LAB_014af494;
    unaff_x21 = (long *)((long)register0x00000008 + -0xe0);
    *(long *)((long)register0x00000008 + -0x158) = lVar9;
    /*System.Collections.Generic.List<NetworkEventStanding>$$GetEnumerator*/ func_0x02408f24((undefined1 *)((long)register0x00000008 + -0xe0),lVar9,uRam0000000003d3b440);
    *(undefined8 *)((long)register0x00000008 + -0x118) =
         *(undefined8 *)((long)register0x00000008 + -0xd8);
    *(undefined8 *)((long)register0x00000008 + -0x120) =
         *(undefined8 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0x108) =
         *(undefined8 *)((long)register0x00000008 + -200);
    *(undefined8 *)((long)register0x00000008 + -0x110) =
         *(undefined8 *)((long)register0x00000008 + -0xd0);
    *(undefined8 *)((long)register0x00000008 + -0xf8) =
         *(undefined8 *)((long)register0x00000008 + -0xb8);
    *(undefined8 *)((long)register0x00000008 + -0x100) =
         *(undefined8 *)((long)register0x00000008 + -0xc0);
    *(undefined8 *)((long)register0x00000008 + -0xf0) =
         *(undefined8 *)((long)register0x00000008 + -0xb0);
    unaff_x24 = (undefined8 *)((long)register0x00000008 + -0x10c);
    unaff_x25 = (undefined8 *)((long)register0x00000008 + -0xdc);
    unaff_x28 = 0x3d22180;
    unaff_x27 = 0x3d1d260;
    unaff_x26 = 0;
    while( true ) {
      uVar12 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$MoveNext*/ func_0x01f6cf9c((undefined1 *)((long)register0x00000008 + -0x120),
                               uRam0000000003d32b08);
      if ((uVar12 & 1) == 0) break;
      iVar4 = *(int *)((long)register0x00000008 + -0x110);
      *(undefined8 *)((long)register0x00000008 + -0x98) =
           *(undefined8 *)((long)register0x00000008 + -0x104);
      *(undefined8 *)((long)register0x00000008 + -0xa0) = *unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0xf4);
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0xfc);
      *(undefined4 *)((long)register0x00000008 + -0x80) =
           *(undefined4 *)((long)register0x00000008 + -0xec);
      if (*(long *)(lVar5 + 0x20) == 0) {
        func_0x00f78af4();
code_r0x014af490:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x14af494);
        (*pcVar3)();
      }
      plVar13 = *(long **)(*(long *)(lVar5 + 0x20) + 0x28);
      if (plVar13 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x014af490;
      }
      lVar9 = *plVar13;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar12 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_014af0d8;
          }
          piVar11 = piVar11 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar13,/*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0,0);
LAB_014af0d8:
      unaff_x21 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
      if (unaff_x21 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x014af490;
      }
code_r0x014af0ec:
      lVar9 = *unaff_x21;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar12 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x014af138;
          }
          piVar11 = piVar11 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(unaff_x21,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014af138:
      uVar12 = (*(code *)*puVar7)(unaff_x21,puVar7[1]);
      if ((uVar12 & 1) != 0) {
        lVar9 = *unaff_x21;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar12 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x014af194;
            }
            piVar11 = piVar11 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(unaff_x21,/*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260,0);
code_r0x014af194:
        lVar9 = (*(code *)*puVar7)(unaff_x21,puVar7[1]);
        if (lVar9 == 0) {
          func_0x00f78af4();
          goto code_r0x014af490;
        }
        if (*(long *)(lVar9 + 0x10) == 0) {
          func_0x00f78af4();
          goto code_r0x014af490;
        }
        if (*(int *)(*(long *)(lVar9 + 0x10) + 0x54) == iVar4) {
          *(undefined8 *)((long)register0x00000008 + -0xd8) =
               *(undefined8 *)((long)register0x00000008 + -0x98);
          *(undefined8 *)((long)register0x00000008 + -0xe0) =
               *(undefined8 *)((long)register0x00000008 + -0xa0);
          *(undefined8 *)((long)register0x00000008 + -200) =
               *(undefined8 *)((long)register0x00000008 + -0x88);
          *(undefined8 *)((long)register0x00000008 + -0xd0) =
               *(undefined8 *)((long)register0x00000008 + -0x90);
          *(undefined4 *)((long)register0x00000008 + -0xc0) =
               *(undefined4 *)((long)register0x00000008 + -0x80);
          *(undefined8 *)((long)register0x00000008 + -0x148) =
               *(undefined8 *)((long)register0x00000008 + -0xd4);
          *(undefined8 *)((long)register0x00000008 + -0x150) = *unaff_x25;
          *(undefined8 *)((long)register0x00000008 + -0x140) =
               *(undefined8 *)((long)register0x00000008 + -0xcc);
          /*Atlas.Gameplay.Player.GameContextPlayer$$OnFinishedGame*/ func_0x015a5760(lVar9,(undefined1 *)((long)register0x00000008 + -0x150),0);
        }
        goto code_r0x014af0ec;
      }
      *(undefined4 *)((long)register0x00000008 + (long)(int)unaff_x26 * 4 + -0x130) = 0x74;
      uVar2 = *(uint *)((long)register0x00000008 + -0x128);
      uVar1 = uVar2 + 1;
      unaff_x23 = (ulong)uVar1;
      *(uint *)((long)register0x00000008 + -0x128) = uVar1;
      if (unaff_x21 != (long *)0x0) {
        lVar9 = *unaff_x21;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar12 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x014af268;
            }
            piVar11 = piVar11 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(unaff_x21,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014af268:
        (*(code *)*puVar7)(unaff_x21,puVar7[1]);
      }
      unaff_x26 = 0;
      if ((uVar1 != 0) &&
         (unaff_x26 = unaff_x23,
         *(int *)((long)register0x00000008 + (long)(int)uVar2 * 4 + -0x130) == 0x74)) {
        *(uint *)((long)register0x00000008 + -0x128) = uVar2;
        unaff_x26 = (ulong)uVar2;
      }
    }
    *(undefined4 *)((long)register0x00000008 + (long)(int)unaff_x26 * 4 + -0x130) = 0x8d;
    unaff_x20 = (ulong)(*(int *)((long)register0x00000008 + -0x128) + 1U);
    *(uint *)((long)register0x00000008 + -0x128) = *(int *)((long)register0x00000008 + -0x128) + 1U;
    /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98((undefined1 *)((long)register0x00000008 + -0x120),uRam0000000003d32b00);
    do {
      lVar9 = *(long *)((long)register0x00000008 + -0x158);
      if (((int)unaff_x20 != 0) &&
         (iVar4 = (int)unaff_x20 + -1,
         *(int *)((long)register0x00000008 + (long)iVar4 * 4 + -0x130) == 0x8d)) {
        *(int *)((long)register0x00000008 + -0x128) = iVar4;
      }
LAB_014af340:
      if (*(long *)(lVar5 + 0x20) == 0) {
LAB_014af494:
        func_0x00f78af4();
      }
      else {
        unaff_x21 = *(long **)(*(long *)(lVar5 + 0x20) + 0x28);
        uVar8 = /*Atlas.Gameplay.NetworkResultsUpdater$$IsLeagueGame*/ func_0x014af4f4(lVar5);
        Atlas_Gameplay_NetworkResultsUpdater__SortPlayersByResults(lVar5,unaff_x21,lVar9,uVar8);
        if (*(long *)(lVar5 + 0x28) == 0) goto LAB_014af494;
        iVar4 = Atlas_Contexts_GameContextBase__IsUsingPoints(*(long *)(lVar5 + 0x28),0);
        uVar12 = unaff_x20;
        if (iVar4 != 0) {
          if (*(long *)(lVar5 + 0x98) != 0) {
            uVar12 = /*System.Collections.ObjectModel.ReadOnlyCollection<NetworkResultsStanding>$$get_Count*/ func_0x0278b5c0(*(long *)(lVar5 + 0x98),uRam0000000003d3fe80);
            if (((*(long *)(lVar5 + 0x28) != 0) &&
                (lVar10 = *(long *)(*(long *)(lVar5 + 0x28) + 0x40), lVar10 != 0)) &&
               (unaff_x21 = *(long **)(lVar10 + 0x28), unaff_x21 != (long *)0x0)) {
              lVar10 = *unaff_x21;
              uVar6 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar6 != 0) {
                piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IReadOnlyCollection<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d578) {
                    puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                    goto code_r0x014af404;
                  }
                  piVar11 = piVar11 + 4;
                  uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
              }
              puVar7 = (undefined8 *)func_0x00fac1f0(unaff_x21,/*System.Collections.Generic.IReadOnlyCollection<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d578,0);
code_r0x014af404:
              iVar4 = (*(code *)*puVar7)(unaff_x21,puVar7[1]);
              if (iVar4 <= (int)uVar12) goto code_r0x014af418;
              goto LAB_014af43c;
            }
          }
          goto LAB_014af494;
        }
code_r0x014af418:
        if (*(long *)(lVar5 + 0x60) != 0) {
          /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(*(long *)(lVar5 + 0x60),*(undefined8 *)(lVar5 + 0x98),uRam0000000003d29f40
                         );
        }
        /*Atlas.Gameplay.NetworkResultsUpdater$$CallIndividualResults*/ func_0x014af524(lVar5);
LAB_014af43c:
        unaff_x20 = uVar12;
        if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x70)) {
          return;
        }
      }
      ___stack_chk_fail();
      if (extraout_w1 != 1) goto code_r0x014af4ec;
      puVar7 = (undefined8 *)___cxa_begin_catch();
      unaff_x21 = (long *)*puVar7;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98((undefined1 *)((long)register0x00000008 + -0x120),uRam0000000003d32b00);
    } while (unaff_x21 == (long *)0x0);
    func_0x00f78ac0(unaff_x21,0);
code_r0x014af4ec:
    unaff_x30 = &Atlas_Gameplay_NetworkResultsUpdater__OnRemotePlayerFinished;
    auVar14 = __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x160);
    unaff_x19 = lVar5;
    unaff_x22 = lVar9;
  } while( true );
}



// ============================================================
// RVA: 0x14af4f0 | Atlas.Gameplay.NetworkResultsUpdater.OnRemotePlayerFinished
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014af484) */

void Atlas_Gameplay_NetworkResultsUpdater__OnRemotePlayerFinished
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int extraout_w1;
  long lVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  ulong uVar12;
  ulong unaff_x20;
  long *plVar13;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar14 [16];
  
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  do {
    lVar9 = auVar14._8_8_;
    lVar8 = auVar14._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x70) = *(undefined8 *)PTR_03a5d648;
    uVar12 = 0x3eb4000;
    if ((bRam0000000003eb4a87 & 1) == 0) {
      func_0x00f78a20(0x3d29f40);
      func_0x00f78a20(0x3d32b00);
      func_0x00f78a20(0x3d32b08);
      func_0x00f78a20(0x3d32b10);
      func_0x00f78a20(0x3d220f0);
      func_0x00f78a20(0x3d1d0a0);
      func_0x00f78a20(0x3d1d260);
      func_0x00f78a20(0x3d22180);
      func_0x00f78a20(0x3d1d578);
      func_0x00f78a20(0x3d3b440);
      func_0x00f78a20(0x3d3fe80);
      bRam0000000003eb4a87 = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x128) = 0;
    if (*(char *)(lVar8 + 0x74) != '\0') goto LAB_014af43c;
    uVar5 = Atlas_Gameplay_NetworkResultsUpdater__IsSinglePlayerRace(lVar8);
    unaff_x20 = uVar12;
    if ((uVar5 & 1) != 0) goto LAB_014af340;
    if (lVar9 == 0) goto LAB_014af494;
    unaff_x21 = (long *)((long)register0x00000008 + -0xe0);
    *(long *)((long)register0x00000008 + -0x158) = lVar9;
    /*System.Collections.Generic.List<NetworkEventStanding>$$GetEnumerator*/ func_0x02408f24((undefined1 *)((long)register0x00000008 + -0xe0),lVar9,uRam0000000003d3b440);
    *(undefined8 *)((long)register0x00000008 + -0x118) =
         *(undefined8 *)((long)register0x00000008 + -0xd8);
    *(undefined8 *)((long)register0x00000008 + -0x120) =
         *(undefined8 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0x108) =
         *(undefined8 *)((long)register0x00000008 + -200);
    *(undefined8 *)((long)register0x00000008 + -0x110) =
         *(undefined8 *)((long)register0x00000008 + -0xd0);
    *(undefined8 *)((long)register0x00000008 + -0xf8) =
         *(undefined8 *)((long)register0x00000008 + -0xb8);
    *(undefined8 *)((long)register0x00000008 + -0x100) =
         *(undefined8 *)((long)register0x00000008 + -0xc0);
    *(undefined8 *)((long)register0x00000008 + -0xf0) =
         *(undefined8 *)((long)register0x00000008 + -0xb0);
    unaff_x24 = (undefined8 *)((long)register0x00000008 + -0x10c);
    unaff_x25 = (undefined8 *)((long)register0x00000008 + -0xdc);
    unaff_x28 = 0x3d22180;
    unaff_x27 = 0x3d1d260;
    unaff_x26 = 0;
    while( true ) {
      uVar12 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$MoveNext*/ func_0x01f6cf9c((undefined1 *)((long)register0x00000008 + -0x120),
                               uRam0000000003d32b08);
      if ((uVar12 & 1) == 0) break;
      iVar4 = *(int *)((long)register0x00000008 + -0x110);
      *(undefined8 *)((long)register0x00000008 + -0x98) =
           *(undefined8 *)((long)register0x00000008 + -0x104);
      *(undefined8 *)((long)register0x00000008 + -0xa0) = *unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0xf4);
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0xfc);
      *(undefined4 *)((long)register0x00000008 + -0x80) =
           *(undefined4 *)((long)register0x00000008 + -0xec);
      if (*(long *)(lVar8 + 0x20) == 0) {
        func_0x00f78af4();
code_r0x014af490:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x14af494);
        (*pcVar3)();
      }
      plVar13 = *(long **)(*(long *)(lVar8 + 0x20) + 0x28);
      if (plVar13 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x014af490;
      }
      lVar9 = *plVar13;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar12 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_014af0d8;
          }
          piVar11 = piVar11 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar13,/*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0,0);
LAB_014af0d8:
      unaff_x21 = (long *)(*(code *)*puVar6)(plVar13,puVar6[1]);
      if (unaff_x21 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x014af490;
      }
code_r0x014af0ec:
      lVar9 = *unaff_x21;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar12 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x014af138;
          }
          piVar11 = piVar11 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(unaff_x21,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014af138:
      uVar12 = (*(code *)*puVar6)(unaff_x21,puVar6[1]);
      if ((uVar12 & 1) != 0) {
        lVar9 = *unaff_x21;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar12 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x014af194;
            }
            piVar11 = piVar11 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(unaff_x21,/*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260,0);
code_r0x014af194:
        lVar9 = (*(code *)*puVar6)(unaff_x21,puVar6[1]);
        if (lVar9 == 0) {
          func_0x00f78af4();
          goto code_r0x014af490;
        }
        if (*(long *)(lVar9 + 0x10) == 0) {
          func_0x00f78af4();
          goto code_r0x014af490;
        }
        if (*(int *)(*(long *)(lVar9 + 0x10) + 0x54) == iVar4) {
          *(undefined8 *)((long)register0x00000008 + -0xd8) =
               *(undefined8 *)((long)register0x00000008 + -0x98);
          *(undefined8 *)((long)register0x00000008 + -0xe0) =
               *(undefined8 *)((long)register0x00000008 + -0xa0);
          *(undefined8 *)((long)register0x00000008 + -200) =
               *(undefined8 *)((long)register0x00000008 + -0x88);
          *(undefined8 *)((long)register0x00000008 + -0xd0) =
               *(undefined8 *)((long)register0x00000008 + -0x90);
          *(undefined4 *)((long)register0x00000008 + -0xc0) =
               *(undefined4 *)((long)register0x00000008 + -0x80);
          *(undefined8 *)((long)register0x00000008 + -0x148) =
               *(undefined8 *)((long)register0x00000008 + -0xd4);
          *(undefined8 *)((long)register0x00000008 + -0x150) = *unaff_x25;
          *(undefined8 *)((long)register0x00000008 + -0x140) =
               *(undefined8 *)((long)register0x00000008 + -0xcc);
          /*Atlas.Gameplay.Player.GameContextPlayer$$OnFinishedGame*/ func_0x015a5760(lVar9,(undefined1 *)((long)register0x00000008 + -0x150),0);
        }
        goto code_r0x014af0ec;
      }
      *(undefined4 *)((long)register0x00000008 + (long)(int)unaff_x26 * 4 + -0x130) = 0x74;
      uVar2 = *(uint *)((long)register0x00000008 + -0x128);
      uVar1 = uVar2 + 1;
      unaff_x23 = (ulong)uVar1;
      *(uint *)((long)register0x00000008 + -0x128) = uVar1;
      if (unaff_x21 != (long *)0x0) {
        lVar9 = *unaff_x21;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar12 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x014af268;
            }
            piVar11 = piVar11 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(unaff_x21,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014af268:
        (*(code *)*puVar6)(unaff_x21,puVar6[1]);
      }
      unaff_x26 = 0;
      if ((uVar1 != 0) &&
         (unaff_x26 = unaff_x23,
         *(int *)((long)register0x00000008 + (long)(int)uVar2 * 4 + -0x130) == 0x74)) {
        *(uint *)((long)register0x00000008 + -0x128) = uVar2;
        unaff_x26 = (ulong)uVar2;
      }
    }
    *(undefined4 *)((long)register0x00000008 + (long)(int)unaff_x26 * 4 + -0x130) = 0x8d;
    unaff_x20 = (ulong)(*(int *)((long)register0x00000008 + -0x128) + 1U);
    *(uint *)((long)register0x00000008 + -0x128) = *(int *)((long)register0x00000008 + -0x128) + 1U;
    /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98((undefined1 *)((long)register0x00000008 + -0x120),uRam0000000003d32b00);
    do {
      lVar9 = *(long *)((long)register0x00000008 + -0x158);
      if (((int)unaff_x20 != 0) &&
         (iVar4 = (int)unaff_x20 + -1,
         *(int *)((long)register0x00000008 + (long)iVar4 * 4 + -0x130) == 0x8d)) {
        *(int *)((long)register0x00000008 + -0x128) = iVar4;
      }
LAB_014af340:
      if (*(long *)(lVar8 + 0x20) == 0) {
LAB_014af494:
        func_0x00f78af4();
      }
      else {
        unaff_x21 = *(long **)(*(long *)(lVar8 + 0x20) + 0x28);
        uVar7 = /*Atlas.Gameplay.NetworkResultsUpdater$$IsLeagueGame*/ func_0x014af4f4(lVar8);
        Atlas_Gameplay_NetworkResultsUpdater__SortPlayersByResults(lVar8,unaff_x21,lVar9,uVar7);
        if (*(long *)(lVar8 + 0x28) == 0) goto LAB_014af494;
        iVar4 = Atlas_Contexts_GameContextBase__IsUsingPoints(*(long *)(lVar8 + 0x28),0);
        uVar12 = unaff_x20;
        if (iVar4 != 0) {
          if (*(long *)(lVar8 + 0x98) != 0) {
            uVar12 = /*System.Collections.ObjectModel.ReadOnlyCollection<NetworkResultsStanding>$$get_Count*/ func_0x0278b5c0(*(long *)(lVar8 + 0x98),uRam0000000003d3fe80);
            if (((*(long *)(lVar8 + 0x28) != 0) &&
                (lVar10 = *(long *)(*(long *)(lVar8 + 0x28) + 0x40), lVar10 != 0)) &&
               (unaff_x21 = *(long **)(lVar10 + 0x28), unaff_x21 != (long *)0x0)) {
              lVar10 = *unaff_x21;
              uVar5 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar5 != 0) {
                piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IReadOnlyCollection<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d578) {
                    puVar6 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                    goto code_r0x014af404;
                  }
                  piVar11 = piVar11 + 4;
                  uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
              }
              puVar6 = (undefined8 *)func_0x00fac1f0(unaff_x21,/*System.Collections.Generic.IReadOnlyCollection<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d578,0);
code_r0x014af404:
              iVar4 = (*(code *)*puVar6)(unaff_x21,puVar6[1]);
              if (iVar4 <= (int)uVar12) goto code_r0x014af418;
              goto LAB_014af43c;
            }
          }
          goto LAB_014af494;
        }
code_r0x014af418:
        if (*(long *)(lVar8 + 0x60) != 0) {
          /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(*(long *)(lVar8 + 0x60),*(undefined8 *)(lVar8 + 0x98),uRam0000000003d29f40
                         );
        }
        /*Atlas.Gameplay.NetworkResultsUpdater$$CallIndividualResults*/ func_0x014af524(lVar8);
LAB_014af43c:
        unaff_x20 = uVar12;
        if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x70)) {
          return;
        }
      }
      ___stack_chk_fail();
      if (extraout_w1 != 1) goto code_r0x014af4ec;
      puVar6 = (undefined8 *)___cxa_begin_catch();
      unaff_x21 = (long *)*puVar6;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98((undefined1 *)((long)register0x00000008 + -0x120),uRam0000000003d32b00);
    } while (unaff_x21 == (long *)0x0);
    func_0x00f78ac0(unaff_x21,0);
code_r0x014af4ec:
    unaff_x30 = Atlas_Gameplay_NetworkResultsUpdater__OnRemotePlayerFinished;
    auVar14 = __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x160);
    unaff_x19 = lVar8;
    unaff_x22 = lVar9;
  } while( true );
}



// ============================================================
// RVA: 0x14af4f4 | Atlas.Gameplay.NetworkResultsUpdater.IsLeagueGame
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014af80c) */

ulong Atlas_Gameplay_NetworkResultsUpdater__IsLeagueGame
                (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  int extraout_w1;
  long lVar8;
  uint *puVar9;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined8 *puVar10;
  int iVar11;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  uint *puStack_1b0;
  long lStack_1a8;
  undefined1 **ppuStack_1a0;
  undefined *puStack_198;
  undefined8 *puStack_190;
  uint uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 auStack_160 [2];
  undefined8 uStack_150;
  undefined8 uStack_148;
  int aiStack_140 [4];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  long lStack_88;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 0x1c0), lVar8 != 0)) {
    return (ulong)(*(int *)(lVar8 + 0x18) == 9);
  }
  lVar8 = func_0x00f78af4();
  puStack_18 = &Atlas_Gameplay_NetworkResultsUpdater__CallIndividualResults;
  lStack_88 = *(long *)PTR_03a5d648;
  puVar9 = (uint *)0x3eb4000;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4a8c & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d2a220);
    func_0x00f78a20(0x3d32b78);
    func_0x00f78a20(0x3d33108);
    func_0x00f78a20(0x3d32b80);
    func_0x00f78a20(0x3d33110);
    func_0x00f78a20(0x3d33118);
    func_0x00f78a20(0x3d32b88);
    func_0x00f78a20(0x3d3c6c0);
    func_0x00f78a20(0x3d3c6d0);
    func_0x00f78a20(0x3d3b580);
    bRam0000000003eb4a8c = 1;
  }
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  aiStack_140[3] = 0;
  if (*(long *)(lVar8 + 0x90) == 0) {
    func_0x00f78af4();
    goto code_r0x014af838;
  }
  puVar9 = &uStack_188;
  /*System.Collections.Generic.List<NetworkResultsStanding>$$GetEnumerator*/ func_0x02417370(&uStack_188,*(long *)(lVar8 + 0x90),uRam0000000003d3b580);
  iVar11 = 0;
  uStack_d8 = (undefined4)auStack_160[0];
  uStack_d4 = (undefined4)((ulong)auStack_160[0] >> 0x20);
  uStack_e0 = (undefined4)uStack_168;
  uStack_dc = (undefined4)((ulong)uStack_168 >> 0x20);
  uStack_c8 = uStack_150;
  uStack_d0 = (undefined4)auStack_160[1];
  uStack_cc = (undefined4)((ulong)auStack_160[1] >> 0x20);
  uStack_c0 = uStack_148;
  uStack_f8 = uStack_180;
  uStack_e8 = (undefined4)uStack_170;
  uStack_e4 = (undefined4)((ulong)uStack_170 >> 0x20);
  uStack_f0 = (uint)uStack_178;
  uStack_ec = (undefined4)((ulong)uStack_178 >> 0x20);
  puVar10 = (undefined8 *)((ulong)puVar9 | 4);
  puStack_190 = auStack_160;
code_r0x014af658:
  do {
    uVar5 = /*System.Collections.Generic.List.Enumerator<NetworkResultsStanding>$$MoveNext*/ func_0x01f6dbf8(auStack_100,uRam0000000003d32b80);
    uVar3 = uStack_f0;
    if ((uVar5 & 1) == 0) break;
    puVar9 = (uint *)(ulong)uStack_f0;
    uStack_a8 = CONCAT44(uStack_e0,uStack_e4);
    uStack_b0 = CONCAT44(uStack_e8,uStack_ec);
    uStack_98 = CONCAT44(uStack_d0,uStack_d4);
    uStack_a0 = CONCAT44(uStack_d8,uStack_dc);
    uStack_90 = uStack_cc;
    uStack_108 = uStack_c0;
    uStack_110 = uStack_c8;
    if (*(long *)(lVar8 + 0x80) == 0) {
      func_0x00f78af4();
      goto code_r0x014af830;
    }
    /*System.Collections.Generic.List<uint>$$GetEnumerator*/ func_0x0247f2dc(&uStack_188,*(long *)(lVar8 + 0x80),uRam0000000003d3c6d0);
    uStack_130 = CONCAT44(uStack_184,uStack_188);
    uStack_128 = uStack_180;
    uStack_120 = uStack_178;
    do {
      unaff_x21 = /*System.Collections.Generic.List.Enumerator<uint>$$MoveNext*/ func_0x01f759ec(&uStack_130,uRam0000000003d33110);
    } while ((int)unaff_x21 != 0 && uVar3 != (uint)uStack_120);
    unaff_x22 = 0;
    aiStack_140[iVar11] = 0x5b;
    iVar1 = aiStack_140[3];
    iVar11 = aiStack_140[3] + 1;
    aiStack_140[3] = iVar11;
    /*System.Collections.Generic.List.Enumerator<uint>$$Dispose*/ func_0x01f759e8(&uStack_130,uRam0000000003d33108);
    if ((iVar11 != 0) && (aiStack_140[iVar1] == 0x5b)) {
      iVar11 = iVar1;
      aiStack_140[3] = iVar1;
    }
    if ((unaff_x21 & 1) == 0) {
      if (*(long *)(lVar8 + 0x80) == 0) {
        func_0x00f78af4();
      }
      else {
        /*System.Collections.Generic.List<uint>$$Add*/ func_0x0247e820(*(long *)(lVar8 + 0x80),puVar9,uRam0000000003d3c6c0);
        uVar2 = uStack_110;
        param_3 = uRam0000000003d2a220;
        lVar6 = *(long *)(lVar8 + 0x68);
        if (lVar6 != 0) {
          uStack_188 = uVar3;
          puVar10[1] = uStack_a8;
          *puVar10 = uStack_b0;
          puVar10[3] = uStack_98;
          puVar10[2] = uStack_a0;
          *(undefined4 *)(puVar10 + 4) = uStack_90;
          puStack_190[1] = uStack_108;
          *puStack_190 = uVar2;
          /*System.Action<NetworkResultsStanding>$$Invoke*/ func_0x01e46270(lVar6,&uStack_188);
          goto code_r0x014af658;
        }
        func_0x00f78af4();
      }
code_r0x014af830:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x14af834);
      (*pcVar4)();
    }
  } while( true );
  aiStack_140[iVar11] = 0x99;
  aiStack_140[3] = aiStack_140[3] + 1;
  uVar5 = /*System.Collections.Generic.List.Enumerator<NetworkResultsStanding>$$Dispose*/ func_0x01f6dbf4(auStack_100,uRam0000000003d32b78);
  do {
    if (*(long *)PTR_03a5d648 == lStack_88) {
      return uVar5;
    }
code_r0x014af838:
    ___stack_chk_fail();
    if (extraout_w1 != 1) goto code_r0x014af898;
    plVar7 = (long *)___cxa_begin_catch();
    lVar8 = *plVar7;
    ___cxa_end_catch();
    uVar5 = /*System.Collections.Generic.List.Enumerator<NetworkResultsStanding>$$Dispose*/ func_0x01f6dbf4(auStack_100,uRam0000000003d32b78);
  } while (lVar8 == 0);
  func_0x00f78ac0(lVar8,0);
code_r0x014af898:
  lVar6 = __Unwind_Resume();
  puStack_198 = &Atlas_Gameplay_NetworkResultsUpdater__OnHostMigrationSynced;
  uStack_1c0 = unaff_x22;
  uStack_1b8 = unaff_x21;
  puStack_1b0 = puVar9;
  lStack_1a8 = lVar8;
  ppuStack_1a0 = &puStack_20;
  if ((bRam0000000003eb4a88 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4a88 = 1;
  }
  uStack_1d8 = *(undefined8 *)(lVar6 + 0x40);
  uStack_1e0 = *(undefined8 *)(lVar6 + 0x38);
  uStack_1d0 = *(undefined8 *)(lVar6 + 0x48);
  if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_1f8 = uStack_1d8;
  uStack_200 = uStack_1e0;
  uStack_1f0 = uStack_1d0;
  uVar5 = /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&uStack_218,&uStack_200,param_3,0);
  *(undefined8 *)(lVar6 + 0x40) = uStack_210;
  *(undefined8 *)(lVar6 + 0x38) = uStack_218;
  *(undefined8 *)(lVar6 + 0x48) = uStack_208;
  return uVar5;
}



// ============================================================
// RVA: 0x14af524 | Atlas.Gameplay.NetworkResultsUpdater.CallIndividualResults
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014af80c) */

void Atlas_Gameplay_NetworkResultsUpdater__CallIndividualResults
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  int extraout_w1;
  uint *puVar8;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  uint *puStack_1a0;
  long lStack_198;
  undefined1 *puStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  uint uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 auStack_150 [2];
  undefined8 uStack_140;
  undefined8 uStack_138;
  int aiStack_130 [4];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR_03a5d648;
  puVar8 = (uint *)0x3eb4000;
  if ((bRam0000000003eb4a8c & 1) == 0) {
    func_0x00f78a20(0x3d2a220);
    func_0x00f78a20(0x3d32b78);
    func_0x00f78a20(0x3d33108);
    func_0x00f78a20(0x3d32b80);
    func_0x00f78a20(0x3d33110);
    func_0x00f78a20(0x3d33118);
    func_0x00f78a20(0x3d32b88);
    func_0x00f78a20(0x3d3c6c0);
    func_0x00f78a20(0x3d3c6d0);
    func_0x00f78a20(0x3d3b580);
    bRam0000000003eb4a8c = 1;
  }
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  aiStack_130[3] = 0;
  if (*(long *)(param_1 + 0x90) == 0) {
    func_0x00f78af4();
    goto code_r0x014af838;
  }
  puVar8 = &uStack_178;
  /*System.Collections.Generic.List<NetworkResultsStanding>$$GetEnumerator*/ func_0x02417370(&uStack_178,*(long *)(param_1 + 0x90),uRam0000000003d3b580);
  iVar10 = 0;
  uStack_c8 = (undefined4)auStack_150[0];
  uStack_c4 = (undefined4)((ulong)auStack_150[0] >> 0x20);
  uStack_d0 = (undefined4)uStack_158;
  uStack_cc = (undefined4)((ulong)uStack_158 >> 0x20);
  uStack_b8 = uStack_140;
  uStack_c0 = (undefined4)auStack_150[1];
  uStack_bc = (undefined4)((ulong)auStack_150[1] >> 0x20);
  uStack_b0 = uStack_138;
  uStack_e8 = uStack_170;
  uStack_d8 = (undefined4)uStack_160;
  uStack_d4 = (undefined4)((ulong)uStack_160 >> 0x20);
  uStack_e0 = (uint)uStack_168;
  uStack_dc = (undefined4)((ulong)uStack_168 >> 0x20);
  puVar9 = (undefined8 *)((ulong)puVar8 | 4);
  puStack_180 = auStack_150;
LAB_014af658:
  do {
    uVar5 = /*System.Collections.Generic.List.Enumerator<NetworkResultsStanding>$$MoveNext*/ func_0x01f6dbf8(auStack_f0,uRam0000000003d32b80);
    uVar3 = uStack_e0;
    if ((uVar5 & 1) == 0) break;
    puVar8 = (uint *)(ulong)uStack_e0;
    uStack_98 = CONCAT44(uStack_d0,uStack_d4);
    uStack_a0 = CONCAT44(uStack_d8,uStack_dc);
    uStack_88 = CONCAT44(uStack_c0,uStack_c4);
    uStack_90 = CONCAT44(uStack_c8,uStack_cc);
    uStack_80 = uStack_bc;
    uStack_f8 = uStack_b0;
    uStack_100 = uStack_b8;
    if (*(long *)(param_1 + 0x80) == 0) {
      func_0x00f78af4();
      goto code_r0x014af830;
    }
    /*System.Collections.Generic.List<uint>$$GetEnumerator*/ func_0x0247f2dc(&uStack_178,*(long *)(param_1 + 0x80),uRam0000000003d3c6d0);
    uStack_120 = CONCAT44(uStack_174,uStack_178);
    uStack_118 = uStack_170;
    uStack_110 = uStack_168;
    do {
      unaff_x21 = /*System.Collections.Generic.List.Enumerator<uint>$$MoveNext*/ func_0x01f759ec(&uStack_120,uRam0000000003d33110);
    } while ((int)unaff_x21 != 0 && uVar3 != (uint)uStack_110);
    unaff_x22 = 0;
    aiStack_130[iVar10] = 0x5b;
    iVar1 = aiStack_130[3];
    iVar10 = aiStack_130[3] + 1;
    aiStack_130[3] = iVar10;
    /*System.Collections.Generic.List.Enumerator<uint>$$Dispose*/ func_0x01f759e8(&uStack_120,uRam0000000003d33108);
    if ((iVar10 != 0) && (aiStack_130[iVar1] == 0x5b)) {
      iVar10 = iVar1;
      aiStack_130[3] = iVar1;
    }
    if ((unaff_x21 & 1) == 0) {
      if (*(long *)(param_1 + 0x80) == 0) {
        func_0x00f78af4();
      }
      else {
        /*System.Collections.Generic.List<uint>$$Add*/ func_0x0247e820(*(long *)(param_1 + 0x80),puVar8,uRam0000000003d3c6c0);
        uVar2 = uStack_100;
        param_3 = uRam0000000003d2a220;
        lVar6 = *(long *)(param_1 + 0x68);
        if (lVar6 != 0) {
          uStack_178 = uVar3;
          puVar9[1] = uStack_98;
          *puVar9 = uStack_a0;
          puVar9[3] = uStack_88;
          puVar9[2] = uStack_90;
          *(undefined4 *)(puVar9 + 4) = uStack_80;
          puStack_180[1] = uStack_f8;
          *puStack_180 = uVar2;
          /*System.Action<NetworkResultsStanding>$$Invoke*/ func_0x01e46270(lVar6,&uStack_178);
          goto LAB_014af658;
        }
        func_0x00f78af4();
      }
code_r0x014af830:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x14af834);
      (*pcVar4)();
    }
  } while( true );
  aiStack_130[iVar10] = 0x99;
  aiStack_130[3] = aiStack_130[3] + 1;
  /*System.Collections.Generic.List.Enumerator<NetworkResultsStanding>$$Dispose*/ func_0x01f6dbf4(auStack_f0,uRam0000000003d32b78);
  do {
    if (*(long *)PTR_03a5d648 == lStack_78) {
      return;
    }
code_r0x014af838:
    ___stack_chk_fail();
    if (extraout_w1 != 1) goto code_r0x014af898;
    plVar7 = (long *)___cxa_begin_catch();
    param_1 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkResultsStanding>$$Dispose*/ func_0x01f6dbf4(auStack_f0,uRam0000000003d32b78);
  } while (param_1 == 0);
  func_0x00f78ac0(param_1,0);
code_r0x014af898:
  lVar6 = __Unwind_Resume();
  puStack_188 = &Atlas_Gameplay_NetworkResultsUpdater__OnHostMigrationSynced;
  uStack_1b0 = unaff_x22;
  uStack_1a8 = unaff_x21;
  puStack_1a0 = puVar8;
  lStack_198 = param_1;
  puStack_190 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4a88 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4a88 = 1;
  }
  uStack_1c8 = *(undefined8 *)(lVar6 + 0x40);
  uStack_1d0 = *(undefined8 *)(lVar6 + 0x38);
  uStack_1c0 = *(undefined8 *)(lVar6 + 0x48);
  if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_1e8 = uStack_1c8;
  uStack_1f0 = uStack_1d0;
  uStack_1e0 = uStack_1c0;
  /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&uStack_208,&uStack_1f0,param_3,0);
  *(undefined8 *)(lVar6 + 0x40) = uStack_200;
  *(undefined8 *)(lVar6 + 0x38) = uStack_208;
  *(undefined8 *)(lVar6 + 0x48) = uStack_1f8;
  return;
}



// ============================================================
// RVA: 0x14af89c | Atlas.Gameplay.NetworkResultsUpdater.OnHostMigrationSynced
// ============================================================

void Atlas_Gameplay_NetworkResultsUpdater__OnHostMigrationSynced
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003eb4a88 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4a88 = 1;
  }
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_68 = uStack_48;
  uStack_70 = uStack_50;
  uStack_60 = uStack_40;
  /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&uStack_88,&uStack_70,param_3,0);
  *(undefined8 *)(param_1 + 0x40) = uStack_80;
  *(undefined8 *)(param_1 + 0x38) = uStack_88;
  *(undefined8 *)(param_1 + 0x48) = uStack_78;
  return;
}



// ============================================================
// RVA: 0x14af954 | Atlas.Gameplay.NetworkResultsUpdater.OnLocalPlayerFinishTimeUpdated
// ============================================================

/* WARNING: Possible PIC construction at 0x014afc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b0254: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014b02a0) */
/* WARNING: Type propagation algorithm not settling */

long Atlas_Gameplay_NetworkResultsUpdater__OnLocalPlayerFinishTimeUpdated
               (long param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int extraout_w1;
  int extraout_w1_00;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long *plVar14;
  long *plVar15;
  long unaff_x22;
  undefined8 *unaff_x23;
  code *pcVar16;
  ulong unaff_x24;
  long lVar17;
  undefined8 *unaff_x25;
  undefined1 *puVar18;
  uint uVar19;
  long unaff_x26;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar20 [16];
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  int aiStack_258 [4];
  uint uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  int iStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  int iStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  int iStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_128;
  undefined8 *******pppppppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 ******ppppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4a89 & 1) == 0) {
    func_0x00f78a20(0x3d29f40);
    func_0x00f78a20(0x3d1d578);
    func_0x00f78a20(0x3d3fe80);
    bRam0000000003eb4a89 = 1;
  }
  lVar6 = Atlas_Gameplay_NetworkResultsUpdater__IsSinglePlayerRace(param_1);
  if ((int)lVar6 == 0) {
    return lVar6;
  }
  plVar14 = (long *)0x3eb4000;
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar14 = *(long **)(*(long *)(param_1 + 0x20) + 0x28);
    uVar7 = Atlas_Gameplay_NetworkResultsUpdater__IsLeagueGame(param_1);
    Atlas_Gameplay_NetworkResultsUpdater__SortPlayersByResults(param_1,plVar14,param_2,uVar7);
    if (*(long *)(param_1 + 0x28) != 0) {
      iVar4 = Atlas_Contexts_GameContextBase__IsUsingPoints(*(long *)(param_1 + 0x28),0);
      if (iVar4 == 0) {
LAB_014afa88:
        lVar6 = *(long *)(param_1 + 0x60);
        if (lVar6 == 0) {
          return 0;
        }
        plVar15 = *(long **)(param_1 + 0x98);
        plVar14 = (long *)register0x00000008;
        goto code_r0x01e47f3c;
      }
      if (*(long *)(param_1 + 0x98) != 0) {
        iVar4 = /*System.Collections.ObjectModel.ReadOnlyCollection<NetworkResultsStanding>$$get_Count*/ func_0x0278b5c0(*(long *)(param_1 + 0x98),uRam0000000003d3fe80);
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 0x40), lVar6 != 0)) {
          plVar15 = *(long **)(lVar6 + 0x28);
          plVar14 = (long *)0x0;
          if (plVar15 != (long *)0x0) {
            lVar6 = *plVar15;
            uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IReadOnlyCollection<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d578) {
                  puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_014afa74;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)func_0x00fac1f0(plVar15,/*System.Collections.Generic.IReadOnlyCollection<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d578,0);
LAB_014afa74:
            lVar6 = (*(code *)*puVar8)(plVar15,puVar8[1]);
            if (iVar4 < (int)lVar6) {
              return lVar6;
            }
            goto LAB_014afa88;
          }
        }
      }
    }
  }
  unaff_x21 = plVar14;
  unaff_x19 = func_0x00f78af4();
  plVar14 = &uStack_b0;
  puStack_38 = &Atlas_Gameplay_NetworkResultsUpdater__OnHostAllFinishDataReceived;
  unaff_x20 = 0x3eb4000;
  ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4a8a & 1) == 0) {
    func_0x00f78a20(0x3d29f40);
    func_0x00f78a20(0x3d32b78);
    func_0x00f78a20(0x3d32b80);
    func_0x00f78a20(0x3d32b88);
    func_0x00f78a20(0x3d3b580);
    bRam0000000003eb4a8a = 1;
  }
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    lVar6 = /*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(unaff_x19 + 0x10),0);
    if ((int)lVar6 == 0) {
      return lVar6;
    }
    *(undefined1 *)(unaff_x19 + 0x74) = 1;
    if (((*(long *)(unaff_x19 + 0x20) == 0) || (*(long *)(unaff_x19 + 0x10) == 0)) ||
       (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20), lVar6 == 0)) goto code_r0x014afc48;
    Atlas_Gameplay_NetworkResultsUpdater__SortPlayersByResults
              (unaff_x19,*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x28),
               *(undefined8 *)(lVar6 + 0x70),1);
    if (*(long *)(unaff_x19 + 0x90) == 0) goto code_r0x014afc48;
    /*System.Collections.Generic.List<NetworkResultsStanding>$$GetEnumerator*/ func_0x02417370(&uStack_b0,*(long *)(unaff_x19 + 0x90),uRam0000000003d3b580);
    unaff_x22 = 0x3d32b80;
    while (uVar12 = /*System.Collections.Generic.List.Enumerator<NetworkResultsStanding>$$MoveNext*/ func_0x01f6dbf8(&uStack_b0,uRam0000000003d32b80), (uVar12 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) {
        func_0x00f78af4();
code_r0x014afc44:
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x14afc48);
        (*pcVar16)();
      }
      uVar12 = uStack_a0 & 0xffffffff;
      unaff_x21 = *(long **)(*(long *)(unaff_x19 + 0x10) + 0x20);
      lVar6 = Atlas_Gameplay_NetworkResultsUpdater__GetStarsAwardedForPosition
                        (unaff_x19,uStack_78 & 0xffffffff);
      if (unaff_x21 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x014afc44;
      }
      unaff_x20 = uVar12 | lVar6 << 0x20;
      /*Core.Networking.NetworkSession$$AddEventScore*/ func_0x0165edd4(unaff_x21,unaff_x20,0,0);
    }
    /*System.Collections.Generic.List.Enumerator<NetworkResultsStanding>$$Dispose*/ func_0x01f6dbf4(&uStack_b0,uRam0000000003d32b78);
code_r0x014afc08:
    lVar6 = *(long *)(unaff_x19 + 0x60);
    if (lVar6 == 0) {
      return 0;
    }
    plVar15 = *(long **)(unaff_x19 + 0x98);
    unaff_x30 = &UNK_014afc24;
    unaff_x29 = &ppppppuStack_40;
code_r0x01e47f3c:
    *(long *)((long)plVar14 + -0x50) = unaff_x26;
    *(undefined8 **)((long)plVar14 + -0x48) = unaff_x25;
    *(ulong *)((long)plVar14 + -0x40) = unaff_x24;
    *(undefined8 **)((long)plVar14 + -0x38) = unaff_x23;
    *(long *)((long)plVar14 + -0x30) = unaff_x22;
    *(long **)((long)plVar14 + -0x28) = unaff_x21;
    *(ulong *)((long)plVar14 + -0x20) = unaff_x20;
    *(long *)((long)plVar14 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)plVar14 + -0x10) = unaff_x29;
    *(undefined **)((long)plVar14 + -8) = unaff_x30;
    *(long *)((long)plVar14 + -0x58) = lVar6;
    lVar9 = *(long *)(lVar6 + 0x68);
    if (lVar9 == 0) {
      puVar18 = (undefined1 *)((long)plVar14 + -0x58);
      lVar17 = 1;
    }
    else {
      lVar17 = *(long *)(lVar9 + 0x18);
      if (lVar17 == 0) {
        return lVar6;
      }
      puVar18 = (undefined1 *)(lVar9 + 0x20);
    }
    lVar9 = 0;
    do {
      lVar10 = *(long *)(puVar18 + lVar9 * 8);
      pcVar16 = *(code **)(lVar10 + 0x10);
      plVar14 = *(long **)(lVar10 + 0x20);
      lVar10 = *(long *)(lVar10 + 0x28);
      if (*(short *)(lVar10 + 0x48) == -1) {
        func_0x00f78ad8(lVar10);
      }
      iVar4 = func_0x00f78a4c(lVar10);
      bVar3 = *(char *)(lVar10 + 0x4a) == '\x01';
      if (iVar4 == 0) {
        if (bVar3) {
          if (plVar14 == (long *)0x0) {
code_r0x01e480c8:
            lVar10 = (*pcVar16)(plVar15,lVar10);
          }
          else {
            if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar14 + 0x115) & 1) != 0)) ||
               (*(long *)(lVar6 + 0x18) == 0)) goto code_r0x01e47fc0;
            iVar4 = func_0x00f78a44(lVar10);
            iVar5 = func_0x00f78ec0(lVar10);
            if (iVar4 == 0) {
              uVar1 = *(ushort *)(lVar10 + 0x48);
              if (iVar5 == 0) {
                lVar10 = *plVar14 + (ulong)uVar1 * 0x10;
                lVar10 = (**(code **)(lVar10 + 0x138))
                                   (plVar14,plVar15,*(undefined8 *)(lVar10 + 0x140));
                goto code_r0x01e480d4;
              }
              lVar10 = func_0x00f78a48(lVar10);
              lVar11 = *plVar14;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == lVar10) {
                    puVar8 = (undefined8 *)
                             (lVar11 + (long)(int)(*piVar13 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x01e48260;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)func_0x00fac1f0(plVar14,lVar10,(ulong)uVar1);
code_r0x01e48260:
              pcVar16 = (code *)*puVar8;
              puVar8 = (undefined8 *)puVar8[1];
            }
            else {
              if (iVar5 == 0) {
                uVar7 = *(undefined8 *)(*plVar14 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar11 = *plVar14;
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
                lVar11 = func_0x00fac1f0(plVar14);
code_r0x01e48238:
                uVar7 = *(undefined8 *)(lVar11 + 8);
              }
              puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar10);
              pcVar16 = (code *)*puVar8;
            }
            lVar10 = (*pcVar16)(plVar14,plVar15,puVar8);
          }
        }
        else {
          if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar6 + 0x18) == 0))
          goto code_r0x01e480c8;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar1 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar15 + (ulong)uVar1 * 0x10;
              lVar10 = (**(code **)(lVar10 + 0x138))(plVar15,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01e480d4;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar15;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar8 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar1) * 0x10 + 0x138);
                  goto code_r0x01e481fc;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)func_0x00fac1f0(plVar15,lVar10,(ulong)uVar1);
code_r0x01e481fc:
            pcVar16 = (code *)*puVar8;
            puVar8 = (undefined8 *)puVar8[1];
          }
          else {
            if (iVar5 == 0) {
              uVar7 = *(undefined8 *)(*plVar15 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar15;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e481d4;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar15);
code_r0x01e481d4:
              uVar7 = *(undefined8 *)(lVar11 + 8);
            }
            puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar10);
            pcVar16 = (code *)*puVar8;
          }
          lVar10 = (*pcVar16)(plVar15,puVar8);
        }
      }
      else {
        if (bVar3) goto code_r0x01e480c8;
code_r0x01e47fc0:
        lVar10 = (*pcVar16)(plVar14,plVar15,lVar10);
      }
code_r0x01e480d4:
      lVar9 = lVar9 + 1;
      if (lVar9 == lVar17) {
        return lVar10;
      }
    } while( true );
  }
code_r0x014afc48:
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar15 = (long *)___cxa_begin_catch();
    lVar6 = *plVar15;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkResultsStanding>$$Dispose*/ func_0x01f6dbf4(&uStack_b0,uRam0000000003d32b78);
    unaff_x20 = 0;
    if (lVar6 == 0) goto code_r0x014afc08;
    func_0x00f78ac0(lVar6,0);
  }
  auVar20 = __Unwind_Resume();
  unaff_x26 = auVar20._0_8_;
  plVar14 = &lStack_290;
  puStack_b8 = &Atlas_Gameplay_NetworkResultsUpdater__OnEventResults;
  unaff_x29 = &pppppppuStack_c0;
  unaff_x25 = &uStack_200;
  lStack_128 = *(long *)PTR_03a5d648;
  pppppppuStack_c0 = &ppppppuStack_40;
  if ((bRam0000000003eb4a8b & 1) == 0) {
    func_0x00f78a20(0x3d29f40);
    func_0x00f78a20(0x3d32b00);
    func_0x00f78a20(0x3d32ae8);
    func_0x00f78a20(0x3d32af0);
    func_0x00f78a20(0x3d32b08);
    func_0x00f78a20(0x3d32b10);
    func_0x00f78a20(0x3d32af8);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d0a0);
    func_0x00f78a20(0x3d1d260);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3b428);
    func_0x00f78a20(0x3d3b408);
    func_0x00f78a20(0x3d3b440);
    func_0x00f78a20(0x3d3b420);
    func_0x00f78a20(0x3d1dc18);
    bRam0000000003eb4a8b = 1;
  }
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_210 = 0;
  uStack_20c = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  iStack_230 = 0;
  uStack_22c = 0;
  uStack_218 = 0;
  uStack_214 = 0;
  uStack_220 = 0;
  iStack_21c = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_248 = 0;
  unaff_x20 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkEventStanding>_TypeInfo*/ uRam0000000003d1dc18);
  /*System.Collections.Generic.List<NetworkEventStanding>$$.ctor*/ func_0x024076e8(unaff_x20,0xc,uRam0000000003d3b420);
  if ((auVar20._8_8_ == 0) || (lVar6 = *(long *)(auVar20._8_8_ + 0x18), lVar6 == 0)) {
code_r0x014b02b8:
    func_0x00f78af4();
code_r0x014b02bc:
    ___stack_chk_fail();
  }
  else {
    unaff_x21 = (long *)0x3d32af0;
    unaff_x22 = 0x3d3b428;
    /*System.Collections.Generic.List<NetworkEventFinishStanding>$$GetEnumerator*/ func_0x0240620c(&uStack_170,lVar6,uRam0000000003d3b408);
    uStack_1d8 = CONCAT44(uStack_164,uStack_168);
    uStack_1e0 = CONCAT44(uStack_16c,uStack_170);
    uStack_1c8 = CONCAT44(uStack_154,uStack_158);
    uStack_1d0 = CONCAT44(uStack_15c,iStack_160);
    uStack_1c0 = CONCAT44(iStack_14c,uStack_150);
    uStack_1b8 = uStack_148;
    uStack_1a8 = uStack_138;
    uStack_1b0 = uStack_140;
    unaff_x23 = &uStack_1d0;
    while (uVar12 = /*System.Collections.Generic.List.Enumerator<NetworkEventFinishStanding>$$MoveNext*/ func_0x01f6cd2c(&uStack_1e0,uRam0000000003d32af0), (uVar12 & 1) != 0) {
      if (unaff_x20 == 0) {
        func_0x00f78af4();
        goto code_r0x014b02c4;
      }
      uStack_198 = uStack_1c8;
      uStack_1a0 = uStack_1d0;
      uStack_188 = uStack_1b8;
      uStack_190 = uStack_1c0;
      uStack_180 = uStack_1b0;
      /*System.Collections.Generic.List<NetworkEventStanding>$$Add*/ func_0x02408354(unaff_x20,&uStack_1a0,uRam0000000003d3b428);
    }
    aiStack_258[0] = 0x43;
    /*System.Collections.Generic.List.Enumerator<NetworkEventFinishStanding>$$Dispose*/ func_0x01f6cd28(&uStack_1e0,uRam0000000003d32ae8);
    uStack_248 = 0;
    if (*(long *)(unaff_x26 + 0x20) == 0) goto code_r0x014b02b8;
    Atlas_Gameplay_NetworkResultsUpdater__SortPlayersByResults
              (unaff_x26,*(undefined8 *)(*(long *)(unaff_x26 + 0x20) + 0x28),unaff_x20,1);
    uVar12 = Atlas_Gameplay_NetworkResultsUpdater__IsSinglePlayerRace(unaff_x26);
    unaff_x19 = 0x3d32ae8;
    if ((uVar12 & 1) != 0) {
code_r0x014b0218:
      if ((*(long *)(unaff_x26 + 0x10) == 0) ||
         (lVar6 = *(long *)(*(long *)(unaff_x26 + 0x10) + 0x20), lVar6 == 0)) goto code_r0x014b02b8;
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_288,lVar6,0);
      *(undefined8 *)(unaff_x26 + 0x40) = uStack_280;
      *(undefined8 *)(unaff_x26 + 0x38) = uStack_288;
      *(undefined8 *)(unaff_x26 + 0x48) = uStack_278;
      lVar6 = *(long *)(unaff_x26 + 0x60);
      if (lVar6 != 0) {
        plVar15 = *(long **)(unaff_x26 + 0x98);
        unaff_x30 = &UNK_014b0258;
        goto code_r0x01e47f3c;
      }
      if (*(long *)PTR_03a5d648 == lStack_128) {
        return 0;
      }
      goto code_r0x014b02bc;
    }
    if ((*(long *)(unaff_x26 + 0x20) == 0) ||
       (plVar15 = *(long **)(*(long *)(unaff_x26 + 0x20) + 0x28), plVar15 == (long *)0x0))
    goto code_r0x014b02b8;
    lVar6 = *plVar15;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x014aff28;
        }
        piVar13 = piVar13 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)func_0x00fac1f0(plVar15,/*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0,0);
code_r0x014aff28:
    lStack_290 = unaff_x26;
    unaff_x21 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
    if (unaff_x21 != (long *)0x0) {
      uVar19 = 0;
      do {
        lVar6 = *unaff_x21;
        uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x014affb4;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(unaff_x21,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014affb4:
        uVar12 = (*(code *)*puVar8)(unaff_x21,puVar8[1]);
        if ((uVar12 & 1) == 0) {
          lVar6 = 0;
          aiStack_258[(int)uVar19] = 0xf2;
          uVar2 = uStack_248;
          uVar19 = uStack_248 + 1;
          unaff_x24 = (ulong)uVar19;
          uStack_248 = uVar19;
          unaff_x26 = lStack_290;
          goto joined_r0x014b0194;
        }
        lVar6 = *unaff_x21;
        uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
              puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x014b0018;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(unaff_x21,/*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260,0);
code_r0x014b0018:
        unaff_x22 = (*(code *)*puVar8)(unaff_x21,puVar8[1]);
        uStack_200 = 0;
        uStack_1f8 = 0;
        uStack_1f0 = 0;
        if (unaff_x20 == 0) {
          func_0x00f78af4();
          goto code_r0x014b02c4;
        }
        /*System.Collections.Generic.List<NetworkEventStanding>$$GetEnumerator*/ func_0x02408f24(&uStack_170,unaff_x20,uRam0000000003d3b440);
        uStack_238 = CONCAT44(uStack_164,uStack_168);
        uStack_240 = CONCAT44(uStack_16c,uStack_170);
        uStack_228 = uStack_158;
        uStack_224 = uStack_154;
        iStack_230 = iStack_160;
        uStack_22c = uStack_15c;
        uStack_218 = (undefined4)uStack_148;
        uStack_214 = (undefined4)((ulong)uStack_148 >> 0x20);
        uStack_220 = uStack_150;
        iStack_21c = iStack_14c;
        uStack_210 = (undefined4)uStack_140;
        uStack_20c = (undefined4)((ulong)uStack_140 >> 0x20);
        do {
          uVar12 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$MoveNext*/ func_0x01f6cf9c(&uStack_240,uRam0000000003d32b08);
          if ((uVar12 & 1) == 0) goto code_r0x014b00bc;
          if (unaff_x22 == 0) {
            func_0x00f78af4();
            goto code_r0x014b02c4;
          }
          if (*(long *)(unaff_x22 + 0x10) == 0) {
            func_0x00f78af4();
            goto code_r0x014b02c4;
          }
        } while (iStack_230 != *(int *)(*(long *)(unaff_x22 + 0x10) + 0x54));
        uStack_168 = uStack_224;
        uStack_164 = uStack_220;
        uStack_170 = uStack_22c;
        uStack_16c = uStack_228;
        uStack_158 = uStack_214;
        uStack_154 = uStack_210;
        iStack_160 = iStack_21c;
        uStack_15c = uStack_218;
        uStack_150 = uStack_20c;
        uStack_1f8 = CONCAT44(iStack_21c,uStack_220);
        uStack_200 = CONCAT44(uStack_224,uStack_228);
        uStack_1f0 = CONCAT44(uStack_214,uStack_218);
code_r0x014b00bc:
        unaff_x23 = (undefined8 *)0x0;
        aiStack_258[(int)uVar19] = 0xd5;
        uVar2 = uStack_248;
        uVar19 = uStack_248 + 1;
        uStack_248 = uVar19;
        /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(&uStack_240,uRam0000000003d32b00);
        if ((uVar19 != 0) && (aiStack_258[(int)uVar2] == 0xd5)) {
          uVar19 = uVar2;
          uStack_248 = uVar2;
        }
        if (unaff_x22 == 0) goto code_r0x014b02b0;
        uStack_268 = uStack_1f8;
        uStack_270 = uStack_200;
        uStack_260 = uStack_1f0;
        /*Atlas.Gameplay.Player.GameContextPlayer$$OnFinishedGame*/ func_0x015a5760(unaff_x22,&uStack_270,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x014b02c4:
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x14b02c8);
  (*pcVar16)();
joined_r0x014b0194:
  if (unaff_x21 != (long *)0x0) {
    lVar9 = *unaff_x21;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x014b01ec;
        }
        piVar13 = piVar13 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)func_0x00fac1f0(unaff_x21,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014b01ec:
    (*(code *)*puVar8)(unaff_x21,puVar8[1]);
  }
  if (lVar6 == 0) {
    unaff_x20 = 0;
    unaff_x19 = 0x3d32b08;
    if ((uVar19 != 0) && (unaff_x19 = 0x3d32b08, aiStack_258[(int)uVar2] == 0xf2)) {
      uStack_248 = uVar2;
    }
    goto code_r0x014b0218;
  }
  func_0x00f78ac0(lVar6,0);
  unaff_x26 = lStack_290;
  if (extraout_w1_00 != 1) {
    lVar6 = __Unwind_Resume();
    if ((bRam0000000003eb4a8d & 1) == 0) {
      func_0x00f78a20(0x3d2a218);
      func_0x00f78a20(0x3d1b508);
      func_0x00f78a20(0x3d35af0);
      func_0x00f78a20(0x3d1cd70);
      func_0x00f78a20(0x3d1f010);
      func_0x00f78a20(0x3d3b560);
      func_0x00f78a20(0x3d3b420);
      func_0x00f78a20(0x3d3c6b8);
      func_0x00f78a20(0x3d1df80);
      func_0x00f78a20(0x3d1dc18);
      func_0x00f78a20(0x3d1dc40);
      func_0x00f78a20(0x3d5acc8);
      func_0x00f78a20(0x3d5acd0);
      func_0x00f78a20(0x3d63880);
      func_0x00f78a20(0x3d282d8);
      bRam0000000003eb4a8d = 1;
    }
    uVar7 = func_0x00f78aec(/*System.Func<NetworkEventStanding, NetworkEventStanding, bool>_TypeInfo*/ uRam0000000003d1cd70);
    /*System.Func<NetworkEventStanding, NetworkEventStanding, bool>$$.ctor*/ func_0x02182770(uVar7,0,uRam0000000003d5acd0,uRam0000000003d35af0);
    *(undefined8 *)(lVar6 + 0x50) = uVar7;
    uVar7 = func_0x00f78aec(/*System.Func<NetworkEventStanding, NetworkEventStanding, bool>_TypeInfo*/ uRam0000000003d1cd70);
    /*System.Func<NetworkEventStanding, NetworkEventStanding, bool>$$.ctor*/ func_0x02182770(uVar7,0,uRam0000000003d5acc8,uRam0000000003d35af0);
    *(undefined8 *)(lVar6 + 0x58) = uVar7;
    if (((*(ushort *)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar8 = *(undefined8 **)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0xb8);
    lVar9 = puVar8[1];
    if (lVar9 == 0) {
      if (((*(ushort *)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
        puVar8 = *(undefined8 **)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0xb8);
      }
      uVar7 = *puVar8;
      lVar9 = func_0x00f78aec(/*System.Action<NetworkResultsStanding>_TypeInfo*/ uRam0000000003d1b508);
      /*System.Action<NetworkResultsStanding>$$.ctor*/ func_0x01e46260(lVar9,uVar7,uRam0000000003d63880,uRam0000000003d2a218);
      *(long *)(*(long *)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0xb8) + 8) = lVar9;
    }
    *(long *)(lVar6 + 0x68) = lVar9;
    uVar7 = func_0x00f78a34(/*Atlas.Gameplay.Player.GameContextPlayer[]_TypeInfo*/ uRam0000000003d1f010,0xc);
    *(undefined8 *)(lVar6 + 0x78) = uVar7;
    uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<uint>_TypeInfo*/ uRam0000000003d1df80);
    /*System.Collections.Generic.List<uint>$$.ctor*/ func_0x0247dc38(uVar7,0xc,uRam0000000003d3c6b8);
    *(undefined8 *)(lVar6 + 0x80) = uVar7;
    uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkEventStanding>_TypeInfo*/ uRam0000000003d1dc18);
    /*System.Collections.Generic.List<NetworkEventStanding>$$.ctor*/ func_0x024076e8(uVar7,0xc,uRam0000000003d3b420);
    *(undefined8 *)(lVar6 + 0x88) = uVar7;
    uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkResultsStanding>_TypeInfo*/ uRam0000000003d1dc40);
    /*System.Collections.Generic.List<NetworkResultsStanding>$$.ctor*/ func_0x02415aa4(uVar7,0xc,uRam0000000003d3b560);
    *(undefined8 *)(lVar6 + 0x90) = uVar7;
    return lVar6;
  }
  plVar15 = (long *)___cxa_begin_catch();
  lVar6 = *plVar15;
  ___cxa_end_catch();
  goto joined_r0x014b0194;
code_r0x014b02b0:
  func_0x00f78af4();
  goto code_r0x014b02c4;
}



// ============================================================
// RVA: 0x14afac4 | Atlas.Gameplay.NetworkResultsUpdater.OnHostAllFinishDataReceived
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014b02a0) */

long Atlas_Gameplay_NetworkResultsUpdater__OnHostAllFinishDataReceived(long param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  int extraout_w1;
  int extraout_w1_00;
  int *piVar10;
  long lVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  int aiStack_228 [4];
  int iStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  int iStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  int iStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int iStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003eb4a8a & 1) == 0) {
    func_0x00f78a20(0x3d29f40);
    func_0x00f78a20(0x3d32b78);
    func_0x00f78a20(0x3d32b80);
    func_0x00f78a20(0x3d32b88);
    func_0x00f78a20(0x3d3b580);
    bRam0000000003eb4a8a = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar3 = /*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(param_1 + 0x10),0);
    if ((int)lVar3 == 0) {
      return lVar3;
    }
    *(undefined1 *)(param_1 + 0x74) = 1;
    if (((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar3 != 0)) {
      Atlas_Gameplay_NetworkResultsUpdater__SortPlayersByResults
                (param_1,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),
                 *(undefined8 *)(lVar3 + 0x70),1);
      if (*(long *)(param_1 + 0x90) != 0) {
        /*System.Collections.Generic.List<NetworkResultsStanding>$$GetEnumerator*/ func_0x02417370(&uStack_80,*(long *)(param_1 + 0x90),uRam0000000003d3b580);
        while (uVar4 = /*System.Collections.Generic.List.Enumerator<NetworkResultsStanding>$$MoveNext*/ func_0x01f6dbf8(&uStack_80,uRam0000000003d32b80), (uVar4 & 1) != 0) {
          if (*(long *)(param_1 + 0x10) == 0) {
            func_0x00f78af4();
code_r0x014afc44:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x14afc48);
            (*pcVar2)();
          }
          uVar4 = uStack_70 & 0xffffffff;
          lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
          lVar3 = Atlas_Gameplay_NetworkResultsUpdater__GetStarsAwardedForPosition
                            (param_1,uStack_48 & 0xffffffff);
          if (lVar11 == 0) {
            func_0x00f78af4();
            goto code_r0x014afc44;
          }
          /*Core.Networking.NetworkSession$$AddEventScore*/ func_0x0165edd4(lVar11,uVar4 | lVar3 << 0x20,0,0);
        }
        /*System.Collections.Generic.List.Enumerator<NetworkResultsStanding>$$Dispose*/ func_0x01f6dbf4(&uStack_80,uRam0000000003d32b78);
        goto code_r0x014afc08;
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    lVar3 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkResultsStanding>$$Dispose*/ func_0x01f6dbf4(&uStack_80,uRam0000000003d32b78);
    if (lVar3 == 0) {
code_r0x014afc08:
      lVar3 = 0;
      if (*(long *)(param_1 + 0x60) != 0) {
        lVar3 = /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(*(long *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x98),
                                uRam0000000003d29f40);
      }
      return lVar3;
    }
    func_0x00f78ac0(lVar3,0);
  }
  auVar13 = __Unwind_Resume();
  lVar3 = auVar13._0_8_;
  lStack_f8 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb4a8b & 1) == 0) {
    func_0x00f78a20(0x3d29f40);
    func_0x00f78a20(0x3d32b00);
    func_0x00f78a20(0x3d32ae8);
    func_0x00f78a20(0x3d32af0);
    func_0x00f78a20(0x3d32b08);
    func_0x00f78a20(0x3d32b10);
    func_0x00f78a20(0x3d32af8);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d0a0);
    func_0x00f78a20(0x3d1d260);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3b428);
    func_0x00f78a20(0x3d3b408);
    func_0x00f78a20(0x3d3b440);
    func_0x00f78a20(0x3d3b420);
    func_0x00f78a20(0x3d1dc18);
    bRam0000000003eb4a8b = 1;
  }
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  iStack_200 = 0;
  uStack_1fc = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uStack_1f0 = 0;
  iStack_1ec = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  iStack_218 = 0;
  lVar11 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkEventStanding>_TypeInfo*/ uRam0000000003d1dc18);
  /*System.Collections.Generic.List<NetworkEventStanding>$$.ctor*/ func_0x024076e8(lVar11,0xc,uRam0000000003d3b420);
  if ((auVar13._8_8_ == 0) || (lVar6 = *(long *)(auVar13._8_8_ + 0x18), lVar6 == 0)) {
code_r0x014b02b8:
    func_0x00f78af4();
code_r0x014b02bc:
    ___stack_chk_fail();
  }
  else {
    /*System.Collections.Generic.List<NetworkEventFinishStanding>$$GetEnumerator*/ func_0x0240620c(&uStack_140,lVar6,uRam0000000003d3b408);
    uStack_1a8 = CONCAT44(uStack_134,uStack_138);
    uStack_1b0 = CONCAT44(uStack_13c,uStack_140);
    uStack_198 = CONCAT44(uStack_124,uStack_128);
    uStack_1a0 = CONCAT44(uStack_12c,iStack_130);
    uStack_190 = CONCAT44(iStack_11c,uStack_120);
    uStack_188 = uStack_118;
    uStack_178 = uStack_108;
    uStack_180 = uStack_110;
    while (uVar4 = /*System.Collections.Generic.List.Enumerator<NetworkEventFinishStanding>$$MoveNext*/ func_0x01f6cd2c(&uStack_1b0,uRam0000000003d32af0), (uVar4 & 1) != 0) {
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x014b02c4;
      }
      uStack_168 = uStack_198;
      uStack_170 = uStack_1a0;
      uStack_158 = uStack_188;
      uStack_160 = uStack_190;
      uStack_150 = uStack_180;
      /*System.Collections.Generic.List<NetworkEventStanding>$$Add*/ func_0x02408354(lVar11,&uStack_170,uRam0000000003d3b428);
    }
    aiStack_228[0] = 0x43;
    /*System.Collections.Generic.List.Enumerator<NetworkEventFinishStanding>$$Dispose*/ func_0x01f6cd28(&uStack_1b0,uRam0000000003d32ae8);
    iStack_218 = 0;
    if (*(long *)(lVar3 + 0x20) == 0) goto code_r0x014b02b8;
    Atlas_Gameplay_NetworkResultsUpdater__SortPlayersByResults
              (lVar3,*(undefined8 *)(*(long *)(lVar3 + 0x20) + 0x28),lVar11,1);
    uVar4 = Atlas_Gameplay_NetworkResultsUpdater__IsSinglePlayerRace(lVar3);
    if ((uVar4 & 1) != 0) {
code_r0x014b0218:
      if ((*(long *)(lVar3 + 0x10) == 0) ||
         (lVar11 = *(long *)(*(long *)(lVar3 + 0x10) + 0x20), lVar11 == 0)) goto code_r0x014b02b8;
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_258,lVar11,0);
      *(undefined8 *)(lVar3 + 0x40) = uStack_250;
      *(undefined8 *)(lVar3 + 0x38) = uStack_258;
      *(undefined8 *)(lVar3 + 0x48) = uStack_248;
      lVar11 = 0;
      if (*(long *)(lVar3 + 0x60) != 0) {
        lVar11 = /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(*(long *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x98),
                                 uRam0000000003d29f40);
      }
      if (*(long *)PTR_03a5d648 == lStack_f8) {
        return lVar11;
      }
      goto code_r0x014b02bc;
    }
    if ((*(long *)(lVar3 + 0x20) == 0) ||
       (plVar5 = *(long **)(*(long *)(lVar3 + 0x20) + 0x28), plVar5 == (long *)0x0))
    goto code_r0x014b02b8;
    lVar6 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto code_r0x014aff28;
        }
        piVar10 = piVar10 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0,0);
code_r0x014aff28:
    plVar5 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
    if (plVar5 != (long *)0x0) {
      iVar12 = 0;
      do {
        lVar6 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x014affb4;
            }
            piVar10 = piVar10 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014affb4:
        uVar4 = (*(code *)*puVar7)(plVar5,puVar7[1]);
        if ((uVar4 & 1) == 0) {
          lVar11 = 0;
          aiStack_228[iVar12] = 0xf2;
          iVar1 = iStack_218;
          iVar12 = iStack_218 + 1;
          iStack_218 = iVar12;
          goto joined_r0x014b0194;
        }
        lVar6 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x014b0018;
            }
            piVar10 = piVar10 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260,0);
code_r0x014b0018:
        lVar6 = (*(code *)*puVar7)(plVar5,puVar7[1]);
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        if (lVar11 == 0) {
          func_0x00f78af4();
          goto code_r0x014b02c4;
        }
        /*System.Collections.Generic.List<NetworkEventStanding>$$GetEnumerator*/ func_0x02408f24(&uStack_140,lVar11,uRam0000000003d3b440);
        uStack_208 = CONCAT44(uStack_134,uStack_138);
        uStack_210 = CONCAT44(uStack_13c,uStack_140);
        uStack_1f8 = uStack_128;
        uStack_1f4 = uStack_124;
        iStack_200 = iStack_130;
        uStack_1fc = uStack_12c;
        uStack_1e8 = (undefined4)uStack_118;
        uStack_1e4 = (undefined4)((ulong)uStack_118 >> 0x20);
        uStack_1f0 = uStack_120;
        iStack_1ec = iStack_11c;
        uStack_1e0 = (undefined4)uStack_110;
        uStack_1dc = (undefined4)((ulong)uStack_110 >> 0x20);
        do {
          uVar4 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$MoveNext*/ func_0x01f6cf9c(&uStack_210,uRam0000000003d32b08);
          if ((uVar4 & 1) == 0) goto code_r0x014b00bc;
          if (lVar6 == 0) {
            func_0x00f78af4();
            goto code_r0x014b02c4;
          }
          if (*(long *)(lVar6 + 0x10) == 0) {
            func_0x00f78af4();
            goto code_r0x014b02c4;
          }
        } while (iStack_200 != *(int *)(*(long *)(lVar6 + 0x10) + 0x54));
        uStack_138 = uStack_1f4;
        uStack_134 = uStack_1f0;
        uStack_140 = uStack_1fc;
        uStack_13c = uStack_1f8;
        uStack_128 = uStack_1e4;
        uStack_124 = uStack_1e0;
        iStack_130 = iStack_1ec;
        uStack_12c = uStack_1e8;
        uStack_120 = uStack_1dc;
        uStack_1c8 = CONCAT44(iStack_1ec,uStack_1f0);
        uStack_1d0 = CONCAT44(uStack_1f4,uStack_1f8);
        uStack_1c0 = CONCAT44(uStack_1e4,uStack_1e8);
code_r0x014b00bc:
        aiStack_228[iVar12] = 0xd5;
        iVar1 = iStack_218;
        iVar12 = iStack_218 + 1;
        iStack_218 = iVar12;
        /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(&uStack_210,uRam0000000003d32b00);
        if ((iVar12 != 0) && (aiStack_228[iVar1] == 0xd5)) {
          iVar12 = iVar1;
          iStack_218 = iVar1;
        }
        if (lVar6 == 0) goto code_r0x014b02b0;
        uStack_238 = uStack_1c8;
        uStack_240 = uStack_1d0;
        uStack_230 = uStack_1c0;
        /*Atlas.Gameplay.Player.GameContextPlayer$$OnFinishedGame*/ func_0x015a5760(lVar6,&uStack_240,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x014b02c4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14b02c8);
  (*pcVar2)();
joined_r0x014b0194:
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto code_r0x014b01ec;
        }
        piVar10 = piVar10 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014b01ec:
    (*(code *)*puVar7)(plVar5,puVar7[1]);
  }
  if (lVar11 == 0) {
    if ((iVar12 != 0) && (aiStack_228[iVar1] == 0xf2)) {
      iStack_218 = iVar1;
    }
    goto code_r0x014b0218;
  }
  func_0x00f78ac0(lVar11,0);
  if (extraout_w1_00 != 1) {
    lVar3 = __Unwind_Resume();
    if ((bRam0000000003eb4a8d & 1) == 0) {
      func_0x00f78a20(0x3d2a218);
      func_0x00f78a20(0x3d1b508);
      func_0x00f78a20(0x3d35af0);
      func_0x00f78a20(0x3d1cd70);
      func_0x00f78a20(0x3d1f010);
      func_0x00f78a20(0x3d3b560);
      func_0x00f78a20(0x3d3b420);
      func_0x00f78a20(0x3d3c6b8);
      func_0x00f78a20(0x3d1df80);
      func_0x00f78a20(0x3d1dc18);
      func_0x00f78a20(0x3d1dc40);
      func_0x00f78a20(0x3d5acc8);
      func_0x00f78a20(0x3d5acd0);
      func_0x00f78a20(0x3d63880);
      func_0x00f78a20(0x3d282d8);
      bRam0000000003eb4a8d = 1;
    }
    uVar9 = func_0x00f78aec(/*System.Func<NetworkEventStanding, NetworkEventStanding, bool>_TypeInfo*/ uRam0000000003d1cd70);
    /*System.Func<NetworkEventStanding, NetworkEventStanding, bool>$$.ctor*/ func_0x02182770(uVar9,0,uRam0000000003d5acd0,uRam0000000003d35af0);
    *(undefined8 *)(lVar3 + 0x50) = uVar9;
    uVar9 = func_0x00f78aec(/*System.Func<NetworkEventStanding, NetworkEventStanding, bool>_TypeInfo*/ uRam0000000003d1cd70);
    /*System.Func<NetworkEventStanding, NetworkEventStanding, bool>$$.ctor*/ func_0x02182770(uVar9,0,uRam0000000003d5acc8,uRam0000000003d35af0);
    *(undefined8 *)(lVar3 + 0x58) = uVar9;
    if (((*(ushort *)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar7 = *(undefined8 **)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0xb8);
    lVar11 = puVar7[1];
    if (lVar11 == 0) {
      if (((*(ushort *)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
        puVar7 = *(undefined8 **)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0xb8);
      }
      uVar9 = *puVar7;
      lVar11 = func_0x00f78aec(/*System.Action<NetworkResultsStanding>_TypeInfo*/ uRam0000000003d1b508);
      /*System.Action<NetworkResultsStanding>$$.ctor*/ func_0x01e46260(lVar11,uVar9,uRam0000000003d63880,uRam0000000003d2a218);
      *(long *)(*(long *)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0xb8) + 8) = lVar11;
    }
    *(long *)(lVar3 + 0x68) = lVar11;
    uVar9 = func_0x00f78a34(/*Atlas.Gameplay.Player.GameContextPlayer[]_TypeInfo*/ uRam0000000003d1f010,0xc);
    *(undefined8 *)(lVar3 + 0x78) = uVar9;
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<uint>_TypeInfo*/ uRam0000000003d1df80);
    /*System.Collections.Generic.List<uint>$$.ctor*/ func_0x0247dc38(uVar9,0xc,uRam0000000003d3c6b8);
    *(undefined8 *)(lVar3 + 0x80) = uVar9;
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkEventStanding>_TypeInfo*/ uRam0000000003d1dc18);
    /*System.Collections.Generic.List<NetworkEventStanding>$$.ctor*/ func_0x024076e8(uVar9,0xc,uRam0000000003d3b420);
    *(undefined8 *)(lVar3 + 0x88) = uVar9;
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkResultsStanding>_TypeInfo*/ uRam0000000003d1dc40);
    /*System.Collections.Generic.List<NetworkResultsStanding>$$.ctor*/ func_0x02415aa4(uVar9,0xc,uRam0000000003d3b560);
    *(undefined8 *)(lVar3 + 0x90) = uVar9;
    return lVar3;
  }
  plVar8 = (long *)___cxa_begin_catch();
  lVar11 = *plVar8;
  ___cxa_end_catch();
  goto joined_r0x014b0194;
code_r0x014b02b0:
  func_0x00f78af4();
  goto code_r0x014b02c4;
}



// ============================================================
// RVA: 0x14afc98 | Atlas.Gameplay.NetworkResultsUpdater.OnEventResults
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014b02a0) */

long Atlas_Gameplay_NetworkResultsUpdater__OnEventResults(long param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  int extraout_w1;
  long lVar8;
  int *piVar9;
  long *plVar10;
  int iVar11;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  int aiStack_1a8 [4];
  int iStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  int iStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  int iStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
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
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb4a8b & 1) == 0) {
    func_0x00f78a20(0x3d29f40);
    func_0x00f78a20(0x3d32b00);
    func_0x00f78a20(0x3d32ae8);
    func_0x00f78a20(0x3d32af0);
    func_0x00f78a20(0x3d32b08);
    func_0x00f78a20(0x3d32b10);
    func_0x00f78a20(0x3d32af8);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d0a0);
    func_0x00f78a20(0x3d1d260);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3b428);
    func_0x00f78a20(0x3d3b408);
    func_0x00f78a20(0x3d3b440);
    func_0x00f78a20(0x3d3b420);
    func_0x00f78a20(0x3d1dc18);
    bRam0000000003eb4a8b = 1;
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  iStack_180 = 0;
  uStack_17c = 0;
  uStack_168 = 0;
  uStack_164 = 0;
  uStack_170 = 0;
  iStack_16c = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  iStack_198 = 0;
  lVar3 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkEventStanding>_TypeInfo*/ uRam0000000003d1dc18);
  /*System.Collections.Generic.List<NetworkEventStanding>$$.ctor*/ func_0x024076e8(lVar3,0xc,uRam0000000003d3b420);
  if ((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) {
LAB_014b02b8:
    func_0x00f78af4();
code_r0x014b02bc:
    ___stack_chk_fail();
  }
  else {
    /*System.Collections.Generic.List<NetworkEventFinishStanding>$$GetEnumerator*/ func_0x0240620c(&uStack_c0,*(long *)(param_2 + 0x18),uRam0000000003d3b408);
    uStack_128 = CONCAT44(uStack_b4,uStack_b8);
    uStack_130 = CONCAT44(uStack_bc,uStack_c0);
    uStack_118 = CONCAT44(uStack_a4,uStack_a8);
    uStack_120 = CONCAT44(uStack_ac,iStack_b0);
    uStack_110 = CONCAT44(iStack_9c,uStack_a0);
    uStack_108 = uStack_98;
    uStack_f8 = uStack_88;
    uStack_100 = uStack_90;
    while (uVar4 = /*System.Collections.Generic.List.Enumerator<NetworkEventFinishStanding>$$MoveNext*/ func_0x01f6cd2c(&uStack_130,uRam0000000003d32af0), (uVar4 & 1) != 0) {
      if (lVar3 == 0) {
        func_0x00f78af4();
        goto code_r0x014b02c4;
      }
      uStack_e8 = uStack_118;
      uStack_f0 = uStack_120;
      uStack_d8 = uStack_108;
      uStack_e0 = uStack_110;
      uStack_d0 = uStack_100;
      /*System.Collections.Generic.List<NetworkEventStanding>$$Add*/ func_0x02408354(lVar3,&uStack_f0,uRam0000000003d3b428);
    }
    aiStack_1a8[0] = 0x43;
    /*System.Collections.Generic.List.Enumerator<NetworkEventFinishStanding>$$Dispose*/ func_0x01f6cd28(&uStack_130,uRam0000000003d32ae8);
    iStack_198 = 0;
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_014b02b8;
    Atlas_Gameplay_NetworkResultsUpdater__SortPlayersByResults
              (param_1,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),lVar3,1);
    uVar4 = Atlas_Gameplay_NetworkResultsUpdater__IsSinglePlayerRace(param_1);
    if ((uVar4 & 1) != 0) {
code_r0x014b0218:
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar3 == 0)) goto LAB_014b02b8;
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_1d8,lVar3,0);
      *(undefined8 *)(param_1 + 0x40) = uStack_1d0;
      *(undefined8 *)(param_1 + 0x38) = uStack_1d8;
      *(undefined8 *)(param_1 + 0x48) = uStack_1c8;
      lVar3 = 0;
      if (*(long *)(param_1 + 0x60) != 0) {
        lVar3 = /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(*(long *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x98),
                                uRam0000000003d29f40);
      }
      if (*(long *)PTR_03a5d648 == lStack_78) {
        return lVar3;
      }
      goto code_r0x014b02bc;
    }
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (plVar10 = *(long **)(*(long *)(param_1 + 0x20) + 0x28), plVar10 == (long *)0x0))
    goto LAB_014b02b8;
    lVar8 = *plVar10;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto code_r0x014aff28;
        }
        piVar9 = piVar9 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0,0);
code_r0x014aff28:
    plVar10 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
    if (plVar10 != (long *)0x0) {
      iVar11 = 0;
      do {
        lVar8 = *plVar10;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x014affb4;
            }
            piVar9 = piVar9 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014affb4:
        uVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
        if ((uVar4 & 1) == 0) {
          lVar3 = 0;
          aiStack_1a8[iVar11] = 0xf2;
          iVar1 = iStack_198;
          iVar11 = iStack_198 + 1;
          iStack_198 = iVar11;
          goto joined_r0x014b0194;
        }
        lVar8 = *plVar10;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x014b0018;
            }
            piVar9 = piVar9 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260,0);
code_r0x014b0018:
        lVar8 = (*(code *)*puVar5)(plVar10,puVar5[1]);
        uStack_150 = 0;
        uStack_148 = 0;
        uStack_140 = 0;
        if (lVar3 == 0) {
          func_0x00f78af4();
          goto code_r0x014b02c4;
        }
        /*System.Collections.Generic.List<NetworkEventStanding>$$GetEnumerator*/ func_0x02408f24(&uStack_c0,lVar3,uRam0000000003d3b440);
        uStack_188 = CONCAT44(uStack_b4,uStack_b8);
        uStack_190 = CONCAT44(uStack_bc,uStack_c0);
        uStack_178 = uStack_a8;
        uStack_174 = uStack_a4;
        iStack_180 = iStack_b0;
        uStack_17c = uStack_ac;
        uStack_168 = (undefined4)uStack_98;
        uStack_164 = (undefined4)((ulong)uStack_98 >> 0x20);
        uStack_170 = uStack_a0;
        iStack_16c = iStack_9c;
        uStack_160 = (undefined4)uStack_90;
        uStack_15c = (undefined4)((ulong)uStack_90 >> 0x20);
        do {
          uVar4 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$MoveNext*/ func_0x01f6cf9c(&uStack_190,uRam0000000003d32b08);
          if ((uVar4 & 1) == 0) goto code_r0x014b00bc;
          if (lVar8 == 0) {
            func_0x00f78af4();
            goto code_r0x014b02c4;
          }
          if (*(long *)(lVar8 + 0x10) == 0) {
            func_0x00f78af4();
            goto code_r0x014b02c4;
          }
        } while (iStack_180 != *(int *)(*(long *)(lVar8 + 0x10) + 0x54));
        uStack_b8 = uStack_174;
        uStack_b4 = uStack_170;
        uStack_c0 = uStack_17c;
        uStack_bc = uStack_178;
        uStack_a8 = uStack_164;
        uStack_a4 = uStack_160;
        iStack_b0 = iStack_16c;
        uStack_ac = uStack_168;
        uStack_a0 = uStack_15c;
        uStack_148 = CONCAT44(iStack_16c,uStack_170);
        uStack_150 = CONCAT44(uStack_174,uStack_178);
        uStack_140 = CONCAT44(uStack_164,uStack_168);
code_r0x014b00bc:
        aiStack_1a8[iVar11] = 0xd5;
        iVar1 = iStack_198;
        iVar11 = iStack_198 + 1;
        iStack_198 = iVar11;
        /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(&uStack_190,uRam0000000003d32b00);
        if ((iVar11 != 0) && (aiStack_1a8[iVar1] == 0xd5)) {
          iVar11 = iVar1;
          iStack_198 = iVar1;
        }
        if (lVar8 == 0) goto code_r0x014b02b0;
        uStack_1b8 = uStack_148;
        uStack_1c0 = uStack_150;
        uStack_1b0 = uStack_140;
        /*Atlas.Gameplay.Player.GameContextPlayer$$OnFinishedGame*/ func_0x015a5760(lVar8,&uStack_1c0,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x014b02c4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14b02c8);
  (*pcVar2)();
joined_r0x014b0194:
  if (plVar10 != (long *)0x0) {
    lVar8 = *plVar10;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto code_r0x014b01ec;
        }
        piVar9 = piVar9 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014b01ec:
    (*(code *)*puVar5)(plVar10,puVar5[1]);
  }
  if (lVar3 == 0) {
    if ((iVar11 != 0) && (aiStack_1a8[iVar1] == 0xf2)) {
      iStack_198 = iVar1;
    }
    goto code_r0x014b0218;
  }
  func_0x00f78ac0(lVar3,0);
  if (extraout_w1 != 1) {
    lVar3 = __Unwind_Resume();
    if ((bRam0000000003eb4a8d & 1) == 0) {
      func_0x00f78a20(0x3d2a218);
      func_0x00f78a20(0x3d1b508);
      func_0x00f78a20(0x3d35af0);
      func_0x00f78a20(0x3d1cd70);
      func_0x00f78a20(0x3d1f010);
      func_0x00f78a20(0x3d3b560);
      func_0x00f78a20(0x3d3b420);
      func_0x00f78a20(0x3d3c6b8);
      func_0x00f78a20(0x3d1df80);
      func_0x00f78a20(0x3d1dc18);
      func_0x00f78a20(0x3d1dc40);
      func_0x00f78a20(0x3d5acc8);
      func_0x00f78a20(0x3d5acd0);
      func_0x00f78a20(0x3d63880);
      func_0x00f78a20(0x3d282d8);
      bRam0000000003eb4a8d = 1;
    }
    uVar7 = func_0x00f78aec(/*System.Func<NetworkEventStanding, NetworkEventStanding, bool>_TypeInfo*/ uRam0000000003d1cd70);
    /*System.Func<NetworkEventStanding, NetworkEventStanding, bool>$$.ctor*/ func_0x02182770(uVar7,0,uRam0000000003d5acd0,uRam0000000003d35af0);
    *(undefined8 *)(lVar3 + 0x50) = uVar7;
    uVar7 = func_0x00f78aec(/*System.Func<NetworkEventStanding, NetworkEventStanding, bool>_TypeInfo*/ uRam0000000003d1cd70);
    /*System.Func<NetworkEventStanding, NetworkEventStanding, bool>$$.ctor*/ func_0x02182770(uVar7,0,uRam0000000003d5acc8,uRam0000000003d35af0);
    *(undefined8 *)(lVar3 + 0x58) = uVar7;
    if (((*(ushort *)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar5 = *(undefined8 **)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0xb8);
    lVar8 = puVar5[1];
    if (lVar8 == 0) {
      if (((*(ushort *)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
        puVar5 = *(undefined8 **)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0xb8);
      }
      uVar7 = *puVar5;
      lVar8 = func_0x00f78aec(/*System.Action<NetworkResultsStanding>_TypeInfo*/ uRam0000000003d1b508);
      /*System.Action<NetworkResultsStanding>$$.ctor*/ func_0x01e46260(lVar8,uVar7,uRam0000000003d63880,uRam0000000003d2a218);
      *(long *)(*(long *)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0xb8) + 8) = lVar8;
    }
    *(long *)(lVar3 + 0x68) = lVar8;
    uVar7 = func_0x00f78a34(/*Atlas.Gameplay.Player.GameContextPlayer[]_TypeInfo*/ uRam0000000003d1f010,0xc);
    *(undefined8 *)(lVar3 + 0x78) = uVar7;
    uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<uint>_TypeInfo*/ uRam0000000003d1df80);
    /*System.Collections.Generic.List<uint>$$.ctor*/ func_0x0247dc38(uVar7,0xc,uRam0000000003d3c6b8);
    *(undefined8 *)(lVar3 + 0x80) = uVar7;
    uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkEventStanding>_TypeInfo*/ uRam0000000003d1dc18);
    /*System.Collections.Generic.List<NetworkEventStanding>$$.ctor*/ func_0x024076e8(uVar7,0xc,uRam0000000003d3b420);
    *(undefined8 *)(lVar3 + 0x88) = uVar7;
    uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkResultsStanding>_TypeInfo*/ uRam0000000003d1dc40);
    /*System.Collections.Generic.List<NetworkResultsStanding>$$.ctor*/ func_0x02415aa4(uVar7,0xc,uRam0000000003d3b560);
    *(undefined8 *)(lVar3 + 0x90) = uVar7;
    return lVar3;
  }
  plVar6 = (long *)___cxa_begin_catch();
  lVar3 = *plVar6;
  ___cxa_end_catch();
  goto joined_r0x014b0194;
code_r0x014b02b0:
  func_0x00f78af4();
  goto code_r0x014b02c4;
}



// ============================================================
// RVA: 0x14b035c | Atlas.Gameplay.NetworkResultsUpdater..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_NetworkResultsUpdater___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000003eb4a8d & 1) == 0) {
    func_0x00f78a20(0x3d2a218);
    func_0x00f78a20(0x3d1b508);
    func_0x00f78a20(0x3d35af0);
    func_0x00f78a20(0x3d1cd70);
    func_0x00f78a20(0x3d1f010);
    func_0x00f78a20(0x3d3b560);
    func_0x00f78a20(0x3d3b420);
    func_0x00f78a20(0x3d3c6b8);
    func_0x00f78a20(0x3d1df80);
    func_0x00f78a20(0x3d1dc18);
    func_0x00f78a20(0x3d1dc40);
    func_0x00f78a20(0x3d5acc8);
    func_0x00f78a20(0x3d5acd0);
    func_0x00f78a20(0x3d63880);
    func_0x00f78a20(0x3d282d8);
    bRam0000000003eb4a8d = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Func<NetworkEventStanding, NetworkEventStanding, bool>_TypeInfo*/ uRam0000000003d1cd70);
  /*System.Func<NetworkEventStanding, NetworkEventStanding, bool>$$.ctor*/ func_0x02182770(uVar1,0,uRam0000000003d5acd0,uRam0000000003d35af0);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Func<NetworkEventStanding, NetworkEventStanding, bool>_TypeInfo*/ uRam0000000003d1cd70);
  /*System.Func<NetworkEventStanding, NetworkEventStanding, bool>$$.ctor*/ func_0x02182770(uVar1,0,uRam0000000003d5acc8,uRam0000000003d35af0);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  if (((*(ushort *)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar2 = *(undefined8 **)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0xb8);
  lVar3 = puVar2[1];
  if (lVar3 == 0) {
    if (((*(ushort *)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar2 = *(undefined8 **)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0xb8);
    }
    uVar1 = *puVar2;
    lVar3 = func_0x00f78aec(/*System.Action<NetworkResultsStanding>_TypeInfo*/ uRam0000000003d1b508);
    /*System.Action<NetworkResultsStanding>$$.ctor*/ func_0x01e46260(lVar3,uVar1,uRam0000000003d63880,uRam0000000003d2a218);
    *(long *)(*(long *)(/*Atlas.Gameplay.NetworkResultsUpdater.<>c_TypeInfo*/ lRam0000000003d282d8 + 0xb8) + 8) = lVar3;
  }
  *(long *)(param_1 + 0x68) = lVar3;
  uVar1 = func_0x00f78a34(/*Atlas.Gameplay.Player.GameContextPlayer[]_TypeInfo*/ uRam0000000003d1f010,0xc);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<uint>_TypeInfo*/ uRam0000000003d1df80);
  /*System.Collections.Generic.List<uint>$$.ctor*/ func_0x0247dc38(uVar1,0xc,uRam0000000003d3c6b8);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkEventStanding>_TypeInfo*/ uRam0000000003d1dc18);
  /*System.Collections.Generic.List<NetworkEventStanding>$$.ctor*/ func_0x024076e8(uVar1,0xc,uRam0000000003d3b420);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkResultsStanding>_TypeInfo*/ uRam0000000003d1dc40);
  /*System.Collections.Generic.List<NetworkResultsStanding>$$.ctor*/ func_0x02415aa4(uVar1,0xc,uRam0000000003d3b560);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}



