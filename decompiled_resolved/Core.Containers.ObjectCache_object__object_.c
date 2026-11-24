// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.ObjectCache<object, object>

// ============================================================
// RVA: 0x2667d2c | Core.Containers.ObjectCache<object, object>.Init
// ============================================================

void Core_Containers_ObjectCache_object__object___Init(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  *(int *)(param_1 + 0x10) = param_2;
  lVar2 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
  if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar2);
  }
  uVar1 = func_0x00f78aec(lVar2);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 8))(uVar1,param_2 + 1);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



// ============================================================
// RVA: 0x2667da0 | Core.Containers.ObjectCache<object, object>.DeInit
// ============================================================

ulong Core_Containers_ObjectCache_object__object___DeInit
                (long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  undefined1 *puStack_140;
  undefined *puStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  ulong uStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  ulong uStack_a8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02667dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x10))();
    return uVar2;
  }
  auVar18 = func_0x00f78af4();
  lVar4 = auVar18._0_8_;
  puStack_18 = &Core_Containers_ObjectCache_object__object___Add;
  lVar13 = *(long *)(lVar4 + 0x18);
  lVar17 = *(long *)(*(long *)(param_4[3] + 0xc0) + 0x18);
  puVar8 = param_3;
  puVar11 = param_4;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00fac028(lVar17);
  }
  lVar17 = func_0x00f78aec(lVar17);
  (*(code *)**(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x20))();
  if (lVar17 != 0) {
    *(long *)(lVar17 + 0x10) = auVar18._8_8_;
    *(undefined8 **)(lVar17 + 0x18) = param_3;
    if (lVar13 != 0) {
      puVar8 = *(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x28);
      (*(code *)*puVar8)(lVar13,lVar17);
      while (*(long *)(lVar4 + 0x18) != 0) {
        uVar2 = (*(code *)**(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x38))();
        if ((int)uVar2 <= *(int *)(lVar4 + 0x10)) {
          return uVar2;
        }
        if (*(long *)(lVar4 + 0x18) == 0) break;
        puVar8 = *(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x30);
        (*(code *)*puVar8)(*(long *)(lVar4 + 0x18),0);
      }
    }
  }
  auVar19 = func_0x00f78af4();
  lVar16 = auVar19._8_8_;
  lVar3 = auVar19._0_8_;
  puStack_58 = &Core_Containers_ObjectCache_object__object___TryGet;
  lVar15 = *(long *)(*(long *)(puVar11[3] + 0xc0) + 0x40);
  puVar9 = puVar8;
  puVar12 = puVar11;
  lStack_90 = lVar17;
  puStack_80 = param_3;
  lStack_78 = lVar13;
  puStack_68 = param_4;
  ppuStack_60 = &puStack_20;
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    uStack_88 = auVar18._8_8_;
    lStack_70 = lVar4;
    func_0x00fac028(lVar15);
    auVar18._8_8_ = uStack_88;
    auVar18._0_8_ = lStack_70;
  }
  uStack_88 = auVar18._8_8_;
  lStack_70 = auVar18._0_8_;
  lVar4 = func_0x00f78aec(lVar15);
  (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x48))();
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x10) = lVar16;
    lVar16 = *(long *)(lVar3 + 0x18);
    lVar13 = *(long *)(*(long *)(puVar11[3] + 0xc0) + 0x58);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    lVar17 = func_0x00f78aec(lVar13);
    puVar12 = *(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x60);
    puVar9 = *(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x50);
    (*(code *)*puVar12)(lVar17,lVar4);
    if (lVar16 != 0) {
      puVar9 = *(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x68);
      lVar4 = (*(code *)*puVar9)(lVar16,lVar17);
      if ((int)lVar4 == -1) {
        *puVar8 = 0;
code_r0x02668014:
        return (ulong)((int)lVar4 != -1);
      }
      if (*(long *)(lVar3 + 0x18) != 0) {
        puVar9 = *(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x70);
        lVar16 = (*(code *)*puVar9)(*(long *)(lVar3 + 0x18),lVar4);
        if (*(long *)(lVar3 + 0x18) != 0) {
          puVar9 = *(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x30);
          (*(code *)*puVar9)(*(long *)(lVar3 + 0x18),lVar4);
          if (*(long *)(lVar3 + 0x18) != 0) {
            puVar9 = *(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x28);
            (*(code *)*puVar9)(*(long *)(lVar3 + 0x18),lVar16);
            if (lVar16 != 0) {
              *puVar8 = *(undefined8 *)(lVar16 + 0x18);
              goto code_r0x02668014;
            }
          }
        }
      }
    }
  }
  auVar18 = func_0x00f78af4();
  puStack_98 = &Core_Containers_ObjectCache_object__object___Get;
  ppuStack_c0 = &ppuStack_a0;
  uStack_a8 = 0;
  ppuStack_a0 = &ppuStack_60;
  if (auVar18._0_8_ != 0) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x78))
                      (auVar18._0_8_,auVar18._8_8_,&uStack_a8);
    if (iVar1 == 0) {
      uStack_a8 = 0;
    }
    return uStack_a8;
  }
  auVar18 = func_0x00f78af4();
  lVar15 = auVar18._8_8_;
  lVar13 = auVar18._0_8_;
  puStack_b8 = &Core_Containers_ObjectCache_object__object___Remove;
  lVar14 = *(long *)(*(long *)(puVar9[3] + 0xc0) + 0x80);
  puVar10 = puVar9;
  lStack_f0 = lVar17;
  lStack_e8 = lVar16;
  lStack_e0 = lVar4;
  lStack_d8 = lVar3;
  puStack_d0 = puVar11;
  puStack_c8 = puVar8;
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  uVar2 = func_0x00f78aec(lVar14);
  (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x88))();
  if (uVar2 != 0) {
    *(long *)(uVar2 + 0x10) = lVar15;
    lVar15 = *(long *)(lVar13 + 0x18);
    lVar4 = *(long *)(*(long *)(puVar9[3] + 0xc0) + 0x58);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    lVar16 = func_0x00f78aec(lVar4);
    puVar12 = *(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x60);
    puVar10 = *(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x90);
    (*(code *)*puVar12)(lVar16,uVar2);
    if (lVar15 != 0) {
      puVar10 = *(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x68);
      uVar2 = (*(code *)*puVar10)(lVar15,lVar16);
      if ((int)uVar2 != -1) {
        if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x02668190;
        (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x30))
                  (*(long *)(lVar13 + 0x18),uVar2);
      }
      return (ulong)((int)uVar2 != -1);
    }
  }
code_r0x02668190:
  auVar18 = func_0x00f78af4();
  puVar8 = auVar18._8_8_;
  lVar4 = auVar18._0_8_;
  puStack_f8 = &Core_Containers_ObjectCache_object__object___RemoveAll;
  lStack_120 = lVar15;
  uStack_118 = uVar2;
  lStack_110 = lVar13;
  puStack_108 = puVar9;
  ppuStack_100 = &ppuStack_c0;
  if (*(long *)(lVar4 + 0x18) != 0) {
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x38))();
    puVar9 = puVar8;
    if (*(long *)(lVar4 + 0x18) != 0) {
      (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x10))();
      return uVar2;
    }
  }
  uVar5 = func_0x00f78af4();
  if (uVar5 != 0) {
    return uVar5;
  }
  puStack_128 = &Core_Containers_ObjectCache_object__object____ctor;
  ppuStack_130 = &ppuStack_100;
  func_0x00f78af4();
  puStack_138 = &System_Collections_Generic_ObjectComparer_AsyncOperationHandle_object____Compare;
  puVar8 = puVar10;
  lStack_170 = lVar17;
  lStack_168 = lVar16;
  lStack_160 = lVar15;
  uStack_158 = uVar2;
  lStack_150 = lVar4;
  puStack_148 = puVar9;
  puStack_140 = (undefined1 *)&ppuStack_130;
  if ((bRam0000000003eb847c & 1) == 0) {
    puStack_140 = (undefined1 *)&ppuStack_130;
    func_0x00f78a20(0x3d208a0);
    bRam0000000003eb847c = 1;
  }
  if (((*(ushort *)(/*System.Collections.Comparer_TypeInfo*/ lRam0000000003d208a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Collections.Comparer_TypeInfo*/ lRam0000000003d208a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar4 = **(long **)(/*System.Collections.Comparer_TypeInfo*/ lRam0000000003d208a0 + 0xb8);
  uStack_188 = extraout_x1[1];
  uStack_190 = *extraout_x1;
  uStack_178 = extraout_x1[3];
  uStack_180 = extraout_x1[2];
  lVar13 = **(long **)(puVar12[3] + 0xc0);
  if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar13);
  }
  uVar6 = func_0x00f78ae0(lVar13,&uStack_190);
  uStack_1a8 = puVar10[1];
  uStack_1b0 = *puVar10;
  uStack_198 = puVar10[3];
  uStack_1a0 = puVar10[2];
  lVar13 = **(long **)(puVar12[3] + 0xc0);
  if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar13);
  }
  uVar7 = func_0x00f78ae0(lVar13,&uStack_1b0);
  if (lVar4 != 0) {
    uVar2 = /*System.Collections.Comparer$$Compare*/ func_0x02a29bcc(lVar4,uVar6,uVar7,0);
    return uVar2;
  }
  func_0x00f78af4();
  lVar4 = *(long *)(*(long *)(puVar8[3] + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  lVar4 = func_0x00f78adc(extraout_x1_00,lVar4);
  return (ulong)(lVar4 != 0);
}



// ============================================================
// RVA: 0x2667dd0 | Core.Containers.ObjectCache<object, object>.Add
// ============================================================

ulong Core_Containers_ObjectCache_object__object___Add
                (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  ulong uStack_148;
  long lStack_140;
  undefined8 *puStack_138;
  undefined1 *puStack_130;
  undefined *puStack_128;
  undefined8 **ppuStack_120;
  undefined *puStack_118;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  ulong uStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar12 = *(long *)(param_1 + 0x18);
  lVar17 = *(long *)(*(long *)(param_4[3] + 0xc0) + 0x18);
  puVar7 = param_3;
  puVar10 = param_4;
  if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar17);
  }
  lVar17 = func_0x00f78aec(lVar17);
  (*(code *)**(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x20))();
  if (lVar17 != 0) {
    *(undefined8 *)(lVar17 + 0x10) = param_2;
    *(undefined8 **)(lVar17 + 0x18) = param_3;
    if (lVar12 != 0) {
      puVar7 = *(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x28);
      (*(code *)*puVar7)(lVar12,lVar17);
      while (*(long *)(param_1 + 0x18) != 0) {
        uVar2 = (*(code *)**(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x38))();
        if ((int)uVar2 <= *(int *)(param_1 + 0x10)) {
          return uVar2;
        }
        if (*(long *)(param_1 + 0x18) == 0) break;
        puVar7 = *(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x30);
        (*(code *)*puVar7)(*(long *)(param_1 + 0x18),0);
      }
    }
  }
  auVar18 = func_0x00f78af4();
  lVar16 = auVar18._8_8_;
  lVar3 = auVar18._0_8_;
  puStack_48 = &Core_Containers_ObjectCache_object__object___TryGet;
  lVar14 = *(long *)(*(long *)(puVar10[3] + 0xc0) + 0x40);
  puVar8 = puVar7;
  puVar11 = puVar10;
  lStack_80 = lVar17;
  uStack_78 = param_2;
  puStack_70 = param_3;
  lStack_68 = lVar12;
  lStack_60 = param_1;
  puStack_58 = param_4;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  lVar12 = func_0x00f78aec(lVar14);
  (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x48))();
  if (lVar12 != 0) {
    *(long *)(lVar12 + 0x10) = lVar16;
    lVar16 = *(long *)(lVar3 + 0x18);
    lVar17 = *(long *)(*(long *)(puVar10[3] + 0xc0) + 0x58);
    if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar17);
    }
    lVar17 = func_0x00f78aec(lVar17);
    puVar11 = *(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x60);
    puVar8 = *(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x50);
    (*(code *)*puVar11)(lVar17,lVar12);
    if (lVar16 != 0) {
      puVar8 = *(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x68);
      lVar12 = (*(code *)*puVar8)(lVar16,lVar17);
      if ((int)lVar12 == -1) {
        *puVar7 = 0;
code_r0x02668014:
        return (ulong)((int)lVar12 != -1);
      }
      if (*(long *)(lVar3 + 0x18) != 0) {
        puVar8 = *(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x70);
        lVar16 = (*(code *)*puVar8)(*(long *)(lVar3 + 0x18),lVar12);
        if (*(long *)(lVar3 + 0x18) != 0) {
          puVar8 = *(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x30);
          (*(code *)*puVar8)(*(long *)(lVar3 + 0x18),lVar12);
          if (*(long *)(lVar3 + 0x18) != 0) {
            puVar8 = *(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x28);
            (*(code *)*puVar8)(*(long *)(lVar3 + 0x18),lVar16);
            if (lVar16 != 0) {
              *puVar7 = *(undefined8 *)(lVar16 + 0x18);
              goto code_r0x02668014;
            }
          }
        }
      }
    }
  }
  auVar18 = func_0x00f78af4();
  puStack_88 = &Core_Containers_ObjectCache_object__object___Get;
  ppuStack_b0 = &ppuStack_90;
  uStack_98 = 0;
  ppuStack_90 = &puStack_50;
  if (auVar18._0_8_ != 0) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x78))
                      (auVar18._0_8_,auVar18._8_8_,&uStack_98);
    if (iVar1 == 0) {
      uStack_98 = 0;
    }
    return uStack_98;
  }
  auVar18 = func_0x00f78af4();
  lVar15 = auVar18._8_8_;
  lVar14 = auVar18._0_8_;
  puStack_a8 = &Core_Containers_ObjectCache_object__object___Remove;
  lVar13 = *(long *)(*(long *)(puVar8[3] + 0xc0) + 0x80);
  puVar9 = puVar8;
  lStack_e0 = lVar17;
  lStack_d8 = lVar16;
  lStack_d0 = lVar12;
  lStack_c8 = lVar3;
  puStack_c0 = puVar10;
  puStack_b8 = puVar7;
  if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar13);
  }
  uVar2 = func_0x00f78aec(lVar13);
  (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x88))();
  if (uVar2 != 0) {
    *(long *)(uVar2 + 0x10) = lVar15;
    lVar15 = *(long *)(lVar14 + 0x18);
    lVar12 = *(long *)(*(long *)(puVar8[3] + 0xc0) + 0x58);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    lVar16 = func_0x00f78aec(lVar12);
    puVar11 = *(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x60);
    puVar9 = *(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x90);
    (*(code *)*puVar11)(lVar16,uVar2);
    if (lVar15 != 0) {
      puVar9 = *(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x68);
      uVar2 = (*(code *)*puVar9)(lVar15,lVar16);
      if ((int)uVar2 != -1) {
        if (*(long *)(lVar14 + 0x18) == 0) goto code_r0x02668190;
        (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x30))
                  (*(long *)(lVar14 + 0x18),uVar2);
      }
      return (ulong)((int)uVar2 != -1);
    }
  }
code_r0x02668190:
  auVar18 = func_0x00f78af4();
  puVar7 = auVar18._8_8_;
  lVar12 = auVar18._0_8_;
  puStack_e8 = &Core_Containers_ObjectCache_object__object___RemoveAll;
  lStack_110 = lVar15;
  uStack_108 = uVar2;
  lStack_100 = lVar14;
  puStack_f8 = puVar8;
  ppuStack_f0 = &ppuStack_b0;
  if (*(long *)(lVar12 + 0x18) != 0) {
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x38))();
    puVar8 = puVar7;
    if (*(long *)(lVar12 + 0x18) != 0) {
      (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x10))();
      return uVar2;
    }
  }
  uVar4 = func_0x00f78af4();
  if (uVar4 != 0) {
    return uVar4;
  }
  puStack_118 = &Core_Containers_ObjectCache_object__object____ctor;
  ppuStack_120 = &ppuStack_f0;
  func_0x00f78af4();
  puStack_128 = &System_Collections_Generic_ObjectComparer_AsyncOperationHandle_object____Compare;
  puVar7 = puVar9;
  lStack_160 = lVar17;
  lStack_158 = lVar16;
  lStack_150 = lVar15;
  uStack_148 = uVar2;
  lStack_140 = lVar12;
  puStack_138 = puVar8;
  puStack_130 = (undefined1 *)&ppuStack_120;
  if ((bRam0000000003eb847c & 1) == 0) {
    puStack_130 = (undefined1 *)&ppuStack_120;
    func_0x00f78a20(0x3d208a0);
    bRam0000000003eb847c = 1;
  }
  if (((*(ushort *)(/*System.Collections.Comparer_TypeInfo*/ lRam0000000003d208a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Collections.Comparer_TypeInfo*/ lRam0000000003d208a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar12 = **(long **)(/*System.Collections.Comparer_TypeInfo*/ lRam0000000003d208a0 + 0xb8);
  uStack_178 = extraout_x1[1];
  uStack_180 = *extraout_x1;
  uStack_168 = extraout_x1[3];
  uStack_170 = extraout_x1[2];
  lVar17 = **(long **)(puVar11[3] + 0xc0);
  if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar17);
  }
  uVar5 = func_0x00f78ae0(lVar17,&uStack_180);
  uStack_198 = puVar9[1];
  uStack_1a0 = *puVar9;
  uStack_188 = puVar9[3];
  uStack_190 = puVar9[2];
  lVar17 = **(long **)(puVar11[3] + 0xc0);
  if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar17);
  }
  uVar6 = func_0x00f78ae0(lVar17,&uStack_1a0);
  if (lVar12 != 0) {
    uVar2 = /*System.Collections.Comparer$$Compare*/ func_0x02a29bcc(lVar12,uVar5,uVar6,0);
    return uVar2;
  }
  func_0x00f78af4();
  lVar12 = *(long *)(*(long *)(puVar7[3] + 0xc0) + 8);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
  }
  lVar12 = func_0x00f78adc(extraout_x1_00,lVar12);
  return (ulong)(lVar12 != 0);
}



// ============================================================
// RVA: 0x2667ec0 | Core.Containers.ObjectCache<object, object>.TryGet
// ============================================================

ulong Core_Containers_ObjectCache_object__object___TryGet
                (long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 unaff_x24;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  ulong uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar11 = *(long *)(*(long *)(param_4[3] + 0xc0) + 0x40);
  puVar6 = param_3;
  puVar9 = param_4;
  if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar11);
  }
  lVar11 = func_0x00f78aec(lVar11);
  (*(code *)**(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x48))();
  if (lVar11 != 0) {
    *(long *)(lVar11 + 0x10) = param_2;
    param_2 = *(long *)(param_1 + 0x18);
    lVar13 = *(long *)(*(long *)(param_4[3] + 0xc0) + 0x58);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    unaff_x24 = func_0x00f78aec(lVar13);
    puVar9 = *(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x60);
    puVar6 = *(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x50);
    (*(code *)*puVar9)(unaff_x24,lVar11);
    if (param_2 != 0) {
      puVar6 = *(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x68);
      lVar11 = (*(code *)*puVar6)(param_2,unaff_x24);
      if ((int)lVar11 == -1) {
        *param_3 = 0;
LAB_02668014:
        return (ulong)((int)lVar11 != -1);
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        puVar6 = *(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x70);
        param_2 = (*(code *)*puVar6)(*(long *)(param_1 + 0x18),lVar11);
        if (*(long *)(param_1 + 0x18) != 0) {
          puVar6 = *(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x30);
          (*(code *)*puVar6)(*(long *)(param_1 + 0x18),lVar11);
          if (*(long *)(param_1 + 0x18) != 0) {
            puVar6 = *(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x28);
            (*(code *)*puVar6)(*(long *)(param_1 + 0x18),param_2);
            if (param_2 != 0) {
              *param_3 = *(undefined8 *)(param_2 + 0x18);
              goto LAB_02668014;
            }
          }
        }
      }
    }
  }
  auVar14 = func_0x00f78af4();
  puStack_48 = &Core_Containers_ObjectCache_object__object___Get;
  ppuStack_70 = &puStack_50;
  uStack_58 = 0;
  puStack_50 = &stack0xfffffffffffffff0;
  if (auVar14._0_8_ != 0) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x78))
                      (auVar14._0_8_,auVar14._8_8_,&uStack_58);
    if (iVar1 == 0) {
      uStack_58 = 0;
    }
    return uStack_58;
  }
  auVar14 = func_0x00f78af4();
  lVar12 = auVar14._8_8_;
  lVar13 = auVar14._0_8_;
  puStack_68 = &Core_Containers_ObjectCache_object__object___Remove;
  lVar10 = *(long *)(*(long *)(puVar6[3] + 0xc0) + 0x80);
  puVar7 = puVar6;
  uStack_a0 = unaff_x24;
  lStack_98 = param_2;
  lStack_90 = lVar11;
  lStack_88 = param_1;
  puStack_80 = param_4;
  puStack_78 = param_3;
  if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar10);
  }
  uVar2 = func_0x00f78aec(lVar10);
  (*(code *)**(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x88))();
  if (uVar2 != 0) {
    *(long *)(uVar2 + 0x10) = lVar12;
    lVar12 = *(long *)(lVar13 + 0x18);
    lVar11 = *(long *)(*(long *)(puVar6[3] + 0xc0) + 0x58);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    param_2 = func_0x00f78aec(lVar11);
    puVar9 = *(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x60);
    puVar7 = *(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x90);
    (*(code *)*puVar9)(param_2,uVar2);
    if (lVar12 != 0) {
      puVar7 = *(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x68);
      uVar2 = (*(code *)*puVar7)(lVar12,param_2);
      if ((int)uVar2 != -1) {
        if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x02668190;
        (*(code *)**(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x30))
                  (*(long *)(lVar13 + 0x18),uVar2);
      }
      return (ulong)((int)uVar2 != -1);
    }
  }
code_r0x02668190:
  auVar14 = func_0x00f78af4();
  puVar8 = auVar14._8_8_;
  lVar11 = auVar14._0_8_;
  puStack_a8 = &Core_Containers_ObjectCache_object__object___RemoveAll;
  lStack_d0 = lVar12;
  uStack_c8 = uVar2;
  lStack_c0 = lVar13;
  puStack_b8 = puVar6;
  ppuStack_b0 = &ppuStack_70;
  if (*(long *)(lVar11 + 0x18) != 0) {
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x38))();
    puVar6 = puVar8;
    if (*(long *)(lVar11 + 0x18) != 0) {
      (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x10))();
      return uVar2;
    }
  }
  uVar3 = func_0x00f78af4();
  if (uVar3 != 0) {
    return uVar3;
  }
  puStack_d8 = &Core_Containers_ObjectCache_object__object____ctor;
  ppuStack_e0 = &ppuStack_b0;
  func_0x00f78af4();
  puStack_e8 = &System_Collections_Generic_ObjectComparer_AsyncOperationHandle_object____Compare;
  puVar8 = puVar7;
  uStack_120 = unaff_x24;
  lStack_118 = param_2;
  lStack_110 = lVar12;
  uStack_108 = uVar2;
  lStack_100 = lVar11;
  puStack_f8 = puVar6;
  puStack_f0 = (undefined1 *)&ppuStack_e0;
  if ((bRam0000000003eb847c & 1) == 0) {
    puStack_f0 = (undefined1 *)&ppuStack_e0;
    func_0x00f78a20(0x3d208a0);
    bRam0000000003eb847c = 1;
  }
  if (((*(ushort *)(/*System.Collections.Comparer_TypeInfo*/ lRam0000000003d208a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Collections.Comparer_TypeInfo*/ lRam0000000003d208a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar11 = **(long **)(/*System.Collections.Comparer_TypeInfo*/ lRam0000000003d208a0 + 0xb8);
  uStack_138 = extraout_x1[1];
  uStack_140 = *extraout_x1;
  uStack_128 = extraout_x1[3];
  uStack_130 = extraout_x1[2];
  lVar13 = **(long **)(puVar9[3] + 0xc0);
  if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar13);
  }
  uVar4 = func_0x00f78ae0(lVar13,&uStack_140);
  uStack_158 = puVar7[1];
  uStack_160 = *puVar7;
  uStack_148 = puVar7[3];
  uStack_150 = puVar7[2];
  lVar13 = **(long **)(puVar9[3] + 0xc0);
  if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar13);
  }
  uVar5 = func_0x00f78ae0(lVar13,&uStack_160);
  if (lVar11 != 0) {
    uVar2 = /*System.Collections.Comparer$$Compare*/ func_0x02a29bcc(lVar11,uVar4,uVar5,0);
    return uVar2;
  }
  func_0x00f78af4();
  lVar11 = *(long *)(*(long *)(puVar8[3] + 0xc0) + 8);
  if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar11);
  }
  lVar11 = func_0x00f78adc(extraout_x1_00,lVar11);
  return (ulong)(lVar11 != 0);
}



// ============================================================
// RVA: 0x2668034 | Core.Containers.ObjectCache<object, object>.Get
// ============================================================

ulong Core_Containers_ObjectCache_object__object___Get
                (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_18;
  
  uStack_18 = 0;
  if (param_1 != 0) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x78))
                      (param_1,param_2,&uStack_18);
    if (iVar1 == 0) {
      uStack_18 = 0;
    }
    return uStack_18;
  }
  auVar10 = func_0x00f78af4();
  lVar7 = *(long *)(*(long *)(param_3[3] + 0xc0) + 0x80);
  puVar5 = param_3;
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  lVar7 = func_0x00f78aec(lVar7);
  (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x88))();
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x10) = auVar10._8_8_;
    lVar8 = *(long *)(auVar10._0_8_ + 0x18);
    lVar9 = *(long *)(*(long *)(param_3[3] + 0xc0) + 0x58);
    if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar9);
    }
    uVar2 = func_0x00f78aec(lVar9);
    param_4 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x60);
    puVar5 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x90);
    (*(code *)*param_4)(uVar2,lVar7);
    if (lVar8 != 0) {
      puVar5 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x68);
      uVar2 = (*(code *)*puVar5)(lVar8,uVar2);
      if ((int)uVar2 != -1) {
        lVar7 = *(long *)(auVar10._0_8_ + 0x18);
        if (lVar7 == 0) goto code_r0x02668190;
        (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x30))(lVar7,uVar2);
      }
      return (ulong)((int)uVar2 != -1);
    }
  }
code_r0x02668190:
  auVar10 = func_0x00f78af4();
  if (*(long *)(auVar10._0_8_ + 0x18) != 0) {
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar10._8_8_ + 0x18) + 0xc0) + 0x38))()
    ;
    if (*(long *)(auVar10._0_8_ + 0x18) != 0) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar10._8_8_ + 0x18) + 0xc0) + 0x10))();
      return uVar3;
    }
  }
  uVar3 = func_0x00f78af4();
  if (uVar3 != 0) {
    return uVar3;
  }
  func_0x00f78af4();
  puVar6 = puVar5;
  if ((bRam0000000003eb847c & 1) == 0) {
    func_0x00f78a20(0x3d208a0);
    bRam0000000003eb847c = 1;
  }
  if (((*(ushort *)(/*System.Collections.Comparer_TypeInfo*/ lRam0000000003d208a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Collections.Comparer_TypeInfo*/ lRam0000000003d208a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = **(long **)(/*System.Collections.Comparer_TypeInfo*/ lRam0000000003d208a0 + 0xb8);
  uStack_f8 = extraout_x1[1];
  uStack_100 = *extraout_x1;
  uStack_e8 = extraout_x1[3];
  uStack_f0 = extraout_x1[2];
  lVar8 = **(long **)(param_4[3] + 0xc0);
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar8);
  }
  uVar2 = func_0x00f78ae0(lVar8,&uStack_100);
  uStack_118 = puVar5[1];
  uStack_120 = *puVar5;
  uStack_108 = puVar5[3];
  uStack_110 = puVar5[2];
  lVar8 = **(long **)(param_4[3] + 0xc0);
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar8);
  }
  uVar4 = func_0x00f78ae0(lVar8,&uStack_120);
  if (lVar7 != 0) {
    uVar3 = /*System.Collections.Comparer$$Compare*/ func_0x02a29bcc(lVar7,uVar2,uVar4,0);
    return uVar3;
  }
  func_0x00f78af4();
  lVar7 = *(long *)(*(long *)(puVar6[3] + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  lVar7 = func_0x00f78adc(extraout_x1_00,lVar7);
  return (ulong)(lVar7 != 0);
}



// ============================================================
// RVA: 0x266807c | Core.Containers.ObjectCache<object, object>.Remove
// ============================================================

ulong Core_Containers_ObjectCache_object__object___Remove
                (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  
  lVar6 = *(long *)(*(long *)(param_3[3] + 0xc0) + 0x80);
  puVar4 = param_3;
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  lVar6 = func_0x00f78aec(lVar6);
  (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x88))();
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x10) = param_2;
    lVar7 = *(long *)(param_1 + 0x18);
    lVar8 = *(long *)(*(long *)(param_3[3] + 0xc0) + 0x58);
    if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar8);
    }
    uVar1 = func_0x00f78aec(lVar8);
    param_4 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x60);
    puVar4 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x90);
    (*(code *)*param_4)(uVar1,lVar6);
    if (lVar7 != 0) {
      puVar4 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x68);
      uVar1 = (*(code *)*puVar4)(lVar7,uVar1);
      if ((int)uVar1 != -1) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_02668190;
        (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x30))
                  (*(long *)(param_1 + 0x18),uVar1);
      }
      return (ulong)((int)uVar1 != -1);
    }
  }
LAB_02668190:
  auVar9 = func_0x00f78af4();
  if (*(long *)(auVar9._0_8_ + 0x18) != 0) {
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar9._8_8_ + 0x18) + 0xc0) + 0x38))();
    if (*(long *)(auVar9._0_8_ + 0x18) != 0) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar9._8_8_ + 0x18) + 0xc0) + 0x10))();
      return uVar2;
    }
  }
  uVar2 = func_0x00f78af4();
  if (uVar2 != 0) {
    return uVar2;
  }
  func_0x00f78af4();
  puVar5 = puVar4;
  if ((bRam0000000003eb847c & 1) == 0) {
    func_0x00f78a20(0x3d208a0);
    bRam0000000003eb847c = 1;
  }
  if (((*(ushort *)(/*System.Collections.Comparer_TypeInfo*/ lRam0000000003d208a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Collections.Comparer_TypeInfo*/ lRam0000000003d208a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = **(long **)(/*System.Collections.Comparer_TypeInfo*/ lRam0000000003d208a0 + 0xb8);
  uStack_d8 = extraout_x1[1];
  uStack_e0 = *extraout_x1;
  uStack_c8 = extraout_x1[3];
  uStack_d0 = extraout_x1[2];
  lVar7 = **(long **)(param_4[3] + 0xc0);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  uVar1 = func_0x00f78ae0(lVar7,&uStack_e0);
  uStack_f8 = puVar4[1];
  uStack_100 = *puVar4;
  uStack_e8 = puVar4[3];
  uStack_f0 = puVar4[2];
  lVar7 = **(long **)(param_4[3] + 0xc0);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  uVar3 = func_0x00f78ae0(lVar7,&uStack_100);
  if (lVar6 != 0) {
    uVar2 = /*System.Collections.Comparer$$Compare*/ func_0x02a29bcc(lVar6,uVar1,uVar3,0);
    return uVar2;
  }
  func_0x00f78af4();
  lVar6 = *(long *)(*(long *)(puVar5[3] + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  lVar6 = func_0x00f78adc(extraout_x1_00,lVar6);
  return (ulong)(lVar6 != 0);
}



// ============================================================
// RVA: 0x2668194 | Core.Containers.ObjectCache<object, object>.RemoveAll
// ============================================================

ulong Core_Containers_ObjectCache_object__object___RemoveAll
                (long param_1,long param_2,undefined8 *param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x38))();
    if (*(long *)(param_1 + 0x18) != 0) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x10))();
      return uVar1;
    }
  }
  uVar1 = func_0x00f78af4();
  if (uVar1 != 0) {
    return uVar1;
  }
  func_0x00f78af4();
  puVar4 = param_3;
  if ((bRam0000000003eb847c & 1) == 0) {
    func_0x00f78a20(0x3d208a0);
    bRam0000000003eb847c = 1;
  }
  if (((*(ushort *)(/*System.Collections.Comparer_TypeInfo*/ lRam0000000003d208a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Collections.Comparer_TypeInfo*/ lRam0000000003d208a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = **(long **)(/*System.Collections.Comparer_TypeInfo*/ lRam0000000003d208a0 + 0xb8);
  uStack_98 = extraout_x1[1];
  uStack_a0 = *extraout_x1;
  uStack_88 = extraout_x1[3];
  uStack_90 = extraout_x1[2];
  lVar6 = **(long **)(*(long *)(param_4 + 0x18) + 0xc0);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  uVar2 = func_0x00f78ae0(lVar6,&uStack_a0);
  uStack_b8 = param_3[1];
  uStack_c0 = *param_3;
  uStack_a8 = param_3[3];
  uStack_b0 = param_3[2];
  lVar6 = **(long **)(*(long *)(param_4 + 0x18) + 0xc0);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  uVar3 = func_0x00f78ae0(lVar6,&uStack_c0);
  if (lVar5 != 0) {
    uVar1 = /*System.Collections.Comparer$$Compare*/ func_0x02a29bcc(lVar5,uVar2,uVar3,0);
    return uVar1;
  }
  func_0x00f78af4();
  lVar5 = *(long *)(*(long *)(puVar4[3] + 0xc0) + 8);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  lVar5 = func_0x00f78adc(extraout_x1_00,lVar5);
  return (ulong)(lVar5 != 0);
}



// ============================================================
// RVA: 0x2668200 | Core.Containers.ObjectCache<object, object>..ctor
// ============================================================

undefined1  [16]
Core_Containers_ObjectCache_object__object____ctor
          (ulong param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_1 != 0) {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = param_1;
    return auVar6;
  }
  func_0x00f78af4();
  puVar3 = param_3;
  if ((bRam0000000003eb847c & 1) == 0) {
    func_0x00f78a20(0x3d208a0);
    bRam0000000003eb847c = 1;
  }
  if (((*(ushort *)(/*System.Collections.Comparer_TypeInfo*/ lRam0000000003d208a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Collections.Comparer_TypeInfo*/ lRam0000000003d208a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar4 = **(long **)(/*System.Collections.Comparer_TypeInfo*/ lRam0000000003d208a0 + 0xb8);
  uStack_68 = extraout_x1[1];
  uStack_70 = *extraout_x1;
  uStack_58 = extraout_x1[3];
  uStack_60 = extraout_x1[2];
  lVar5 = **(long **)(*(long *)(param_4 + 0x18) + 0xc0);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  uVar1 = func_0x00f78ae0(lVar5,&uStack_70);
  uStack_88 = param_3[1];
  uStack_90 = *param_3;
  uStack_78 = param_3[3];
  uStack_80 = param_3[2];
  lVar5 = **(long **)(*(long *)(param_4 + 0x18) + 0xc0);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  uVar2 = func_0x00f78ae0(lVar5,&uStack_90);
  if (lVar4 != 0) {
    auVar6 = /*System.Collections.Comparer$$Compare*/ func_0x02a29bcc(lVar4,uVar1,uVar2,0);
    return auVar6;
  }
  func_0x00f78af4();
  lVar4 = *(long *)(*(long *)(puVar3[3] + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  auVar6 = func_0x00f78adc(extraout_x1_00,lVar4);
  auVar7._8_8_ = auVar6._8_8_;
  auVar7._1_7_ = 0;
  auVar7[0] = auVar6._0_8_ != 0;
  return auVar7;
}



