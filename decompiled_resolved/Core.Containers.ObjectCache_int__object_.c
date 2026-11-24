// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.ObjectCache<int, object>

// ============================================================
// RVA: 0x266783c | Core.Containers.ObjectCache<int, object>.Init
// ============================================================

void Core_Containers_ObjectCache_int__object___Init(long param_1,int param_2,long param_3)

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
// RVA: 0x26678b0 | Core.Containers.ObjectCache<int, object>.DeInit
// ============================================================

ulong Core_Containers_ObjectCache_int__object___DeInit
                (long param_1,long param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  ulong uStack_a8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x026678d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x10))();
    return uVar2;
  }
  auVar12 = func_0x00f78af4();
  lVar4 = auVar12._0_8_;
  puStack_18 = &Core_Containers_ObjectCache_int__object___Add;
  lVar8 = *(long *)(lVar4 + 0x18);
  lVar11 = *(long *)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x18);
  puVar6 = param_3;
  lVar9 = param_4;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00fac028(lVar11);
  }
  lVar11 = func_0x00f78aec(lVar11);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x20))();
  if (lVar11 != 0) {
    *(int *)(lVar11 + 0x10) = auVar12._8_4_;
    *(undefined8 **)(lVar11 + 0x18) = param_3;
    if (lVar8 != 0) {
      puVar6 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x28);
      (*(code *)*puVar6)(lVar8,lVar11);
      while (*(long *)(lVar4 + 0x18) != 0) {
        uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x38))();
        if ((int)uVar2 <= *(int *)(lVar4 + 0x10)) {
          return uVar2;
        }
        if (*(long *)(lVar4 + 0x18) == 0) break;
        puVar6 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x30);
        (*(code *)*puVar6)(*(long *)(lVar4 + 0x18),0);
      }
    }
  }
  auVar13 = func_0x00f78af4();
  lVar3 = auVar13._0_8_;
  puStack_58 = &Core_Containers_ObjectCache_int__object___TryGet;
  lVar10 = *(long *)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x40);
  puVar7 = puVar6;
  lStack_90 = lVar11;
  puStack_80 = param_3;
  lStack_78 = lVar8;
  lStack_68 = param_4;
  ppuStack_60 = &puStack_20;
  if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
    uStack_88 = auVar12._8_8_;
    lStack_70 = lVar4;
    func_0x00fac028(lVar10);
    auVar12._8_8_ = uStack_88;
    auVar12._0_8_ = lStack_70;
  }
  uStack_88 = auVar12._8_8_;
  lStack_70 = auVar12._0_8_;
  lVar4 = func_0x00f78aec(lVar10);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x48))();
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x10) = auVar13._8_4_;
    lVar8 = *(long *)(lVar3 + 0x18);
    lVar11 = *(long *)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x58);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    uVar5 = func_0x00f78aec(lVar11);
    lVar11 = *(long *)(*(long *)(lVar9 + 0x18) + 0xc0);
    puVar7 = *(undefined8 **)(lVar11 + 0x50);
    (*(code *)**(undefined8 **)(lVar11 + 0x60))(uVar5,lVar4);
    if (lVar8 != 0) {
      puVar7 = *(undefined8 **)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x68);
      uVar5 = (*(code *)*puVar7)(lVar8,uVar5);
      if ((int)uVar5 == -1) {
        *puVar6 = 0;
code_r0x02667b28:
        return (ulong)((int)uVar5 != -1);
      }
      if (*(long *)(lVar3 + 0x18) != 0) {
        puVar7 = *(undefined8 **)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x70);
        lVar4 = (*(code *)*puVar7)(*(long *)(lVar3 + 0x18),uVar5);
        if (*(long *)(lVar3 + 0x18) != 0) {
          puVar7 = *(undefined8 **)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x30);
          (*(code *)*puVar7)(*(long *)(lVar3 + 0x18),uVar5);
          if (*(long *)(lVar3 + 0x18) != 0) {
            puVar7 = *(undefined8 **)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x28);
            (*(code *)*puVar7)(*(long *)(lVar3 + 0x18),lVar4);
            if (lVar4 != 0) {
              *puVar6 = *(undefined8 *)(lVar4 + 0x18);
              goto code_r0x02667b28;
            }
          }
        }
      }
    }
  }
  auVar12 = func_0x00f78af4();
  puStack_98 = &Core_Containers_ObjectCache_int__object___Get;
  uStack_a8 = 0;
  ppuStack_a0 = &ppuStack_60;
  if (auVar12._0_8_ != 0) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x78))
                      (auVar12._0_8_,auVar12._8_8_,&uStack_a8);
    if (iVar1 == 0) {
      uStack_a8 = 0;
    }
    return uStack_a8;
  }
  auVar13 = func_0x00f78af4();
  lVar9 = *(long *)(*(long *)(puVar7[3] + 0xc0) + 0x80);
  puVar6 = puVar7;
  if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar9);
  }
  lVar9 = func_0x00f78aec(lVar9);
  (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x88))();
  if (lVar9 != 0) {
    *(int *)(lVar9 + 0x10) = auVar13._8_4_;
    lVar4 = *(long *)(auVar13._0_8_ + 0x18);
    lVar8 = *(long *)(*(long *)(puVar7[3] + 0xc0) + 0x58);
    if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar8);
    }
    uVar5 = func_0x00f78aec(lVar8);
    puVar6 = *(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x90);
    (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x60))(uVar5,lVar9);
    if (lVar4 != 0) {
      puVar6 = *(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x68);
      uVar5 = (*(code *)*puVar6)(lVar4,uVar5);
      if ((int)uVar5 != -1) {
        lVar9 = *(long *)(auVar13._0_8_ + 0x18);
        if (lVar9 == 0) goto code_r0x02667ca4;
        (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x30))(lVar9,uVar5);
      }
      return (ulong)((int)uVar5 != -1);
    }
  }
code_r0x02667ca4:
  auVar12 = func_0x00f78af4();
  if (*(long *)(auVar12._0_8_ + 0x18) != 0) {
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar12._8_8_ + 0x18) + 0xc0) + 0x38))()
    ;
    if (*(long *)(auVar12._0_8_ + 0x18) != 0) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar12._8_8_ + 0x18) + 0xc0) + 0x10))();
      return uVar2;
    }
  }
  uVar2 = func_0x00f78af4();
  if (uVar2 != 0) {
    return uVar2;
  }
  auVar13 = func_0x00f78af4();
  *(int *)(auVar13._0_8_ + 0x10) = auVar13._8_4_;
  lVar9 = **(long **)(puVar6[3] + 0xc0);
  if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar9);
  }
  uVar5 = func_0x00f78aec(lVar9);
  uVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 8))(uVar5,auVar13._8_4_ + 1);
  *(undefined8 *)(auVar13._0_8_ + 0x18) = uVar5;
  return uVar2;
}



// ============================================================
// RVA: 0x26678e0 | Core.Containers.ObjectCache<int, object>.Add
// ============================================================

ulong Core_Containers_ObjectCache_int__object___Add
                (long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  ulong uStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar7 = *(long *)(param_1 + 0x18);
  lVar10 = *(long *)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x18);
  puVar5 = param_3;
  lVar8 = param_4;
  if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar10);
  }
  lVar10 = func_0x00f78aec(lVar10);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x20))();
  if (lVar10 != 0) {
    *(int *)(lVar10 + 0x10) = (int)param_2;
    *(undefined8 **)(lVar10 + 0x18) = param_3;
    if (lVar7 != 0) {
      puVar5 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x28);
      (*(code *)*puVar5)(lVar7,lVar10);
      while (*(long *)(param_1 + 0x18) != 0) {
        uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x38))();
        if ((int)uVar2 <= *(int *)(param_1 + 0x10)) {
          return uVar2;
        }
        if (*(long *)(param_1 + 0x18) == 0) break;
        puVar5 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x30);
        (*(code *)*puVar5)(*(long *)(param_1 + 0x18),0);
      }
    }
  }
  auVar12 = func_0x00f78af4();
  lVar3 = auVar12._0_8_;
  puStack_48 = &Core_Containers_ObjectCache_int__object___TryGet;
  lVar9 = *(long *)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0x40);
  puVar6 = puVar5;
  lStack_80 = lVar10;
  uStack_78 = param_2;
  puStack_70 = param_3;
  lStack_68 = lVar7;
  lStack_60 = param_1;
  lStack_58 = param_4;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar9);
  }
  lVar7 = func_0x00f78aec(lVar9);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0x48))();
  if (lVar7 != 0) {
    *(int *)(lVar7 + 0x10) = auVar12._8_4_;
    lVar10 = *(long *)(lVar3 + 0x18);
    lVar9 = *(long *)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0x58);
    if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar9);
    }
    uVar4 = func_0x00f78aec(lVar9);
    lVar9 = *(long *)(*(long *)(lVar8 + 0x18) + 0xc0);
    puVar6 = *(undefined8 **)(lVar9 + 0x50);
    (*(code *)**(undefined8 **)(lVar9 + 0x60))(uVar4,lVar7);
    if (lVar10 != 0) {
      puVar6 = *(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0x68);
      uVar4 = (*(code *)*puVar6)(lVar10,uVar4);
      if ((int)uVar4 == -1) {
        *puVar5 = 0;
code_r0x02667b28:
        return (ulong)((int)uVar4 != -1);
      }
      if (*(long *)(lVar3 + 0x18) != 0) {
        puVar6 = *(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0x70);
        lVar7 = (*(code *)*puVar6)(*(long *)(lVar3 + 0x18),uVar4);
        if (*(long *)(lVar3 + 0x18) != 0) {
          puVar6 = *(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0x30);
          (*(code *)*puVar6)(*(long *)(lVar3 + 0x18),uVar4);
          if (*(long *)(lVar3 + 0x18) != 0) {
            puVar6 = *(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0x28);
            (*(code *)*puVar6)(*(long *)(lVar3 + 0x18),lVar7);
            if (lVar7 != 0) {
              *puVar5 = *(undefined8 *)(lVar7 + 0x18);
              goto code_r0x02667b28;
            }
          }
        }
      }
    }
  }
  auVar11 = func_0x00f78af4();
  puStack_88 = &Core_Containers_ObjectCache_int__object___Get;
  uStack_98 = 0;
  ppuStack_90 = &puStack_50;
  if (auVar11._0_8_ != 0) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x78))
                      (auVar11._0_8_,auVar11._8_8_,&uStack_98);
    if (iVar1 == 0) {
      uStack_98 = 0;
    }
    return uStack_98;
  }
  auVar12 = func_0x00f78af4();
  lVar8 = *(long *)(*(long *)(puVar6[3] + 0xc0) + 0x80);
  puVar5 = puVar6;
  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar8);
  }
  lVar8 = func_0x00f78aec(lVar8);
  (*(code *)**(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x88))();
  if (lVar8 != 0) {
    *(int *)(lVar8 + 0x10) = auVar12._8_4_;
    lVar7 = *(long *)(auVar12._0_8_ + 0x18);
    lVar10 = *(long *)(*(long *)(puVar6[3] + 0xc0) + 0x58);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    uVar4 = func_0x00f78aec(lVar10);
    puVar5 = *(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x90);
    (*(code *)**(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x60))(uVar4,lVar8);
    if (lVar7 != 0) {
      puVar5 = *(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x68);
      uVar4 = (*(code *)*puVar5)(lVar7,uVar4);
      if ((int)uVar4 != -1) {
        lVar8 = *(long *)(auVar12._0_8_ + 0x18);
        if (lVar8 == 0) goto code_r0x02667ca4;
        (*(code *)**(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x30))(lVar8,uVar4);
      }
      return (ulong)((int)uVar4 != -1);
    }
  }
code_r0x02667ca4:
  auVar11 = func_0x00f78af4();
  if (*(long *)(auVar11._0_8_ + 0x18) != 0) {
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar11._8_8_ + 0x18) + 0xc0) + 0x38))()
    ;
    if (*(long *)(auVar11._0_8_ + 0x18) != 0) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar11._8_8_ + 0x18) + 0xc0) + 0x10))();
      return uVar2;
    }
  }
  uVar2 = func_0x00f78af4();
  if (uVar2 != 0) {
    return uVar2;
  }
  auVar12 = func_0x00f78af4();
  *(int *)(auVar12._0_8_ + 0x10) = auVar12._8_4_;
  lVar8 = **(long **)(puVar5[3] + 0xc0);
  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar8);
  }
  uVar4 = func_0x00f78aec(lVar8);
  uVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar5[3] + 0xc0) + 8))(uVar4,auVar12._8_4_ + 1);
  *(undefined8 *)(auVar12._0_8_ + 0x18) = uVar4;
  return uVar2;
}



// ============================================================
// RVA: 0x26679d4 | Core.Containers.ObjectCache<int, object>.TryGet
// ============================================================

ulong Core_Containers_ObjectCache_int__object___TryGet
                (long param_1,undefined4 param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  ulong uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x40);
  puVar4 = param_3;
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  lVar6 = func_0x00f78aec(lVar6);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x48))();
  if (lVar6 != 0) {
    *(undefined4 *)(lVar6 + 0x10) = param_2;
    lVar7 = *(long *)(param_1 + 0x18);
    lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x58);
    if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar8);
    }
    uVar2 = func_0x00f78aec(lVar8);
    lVar8 = *(long *)(*(long *)(param_4 + 0x18) + 0xc0);
    puVar4 = *(undefined8 **)(lVar8 + 0x50);
    (*(code *)**(undefined8 **)(lVar8 + 0x60))(uVar2,lVar6);
    if (lVar7 != 0) {
      puVar4 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x68);
      uVar2 = (*(code *)*puVar4)(lVar7,uVar2);
      if ((int)uVar2 == -1) {
        *param_3 = 0;
LAB_02667b28:
        return (ulong)((int)uVar2 != -1);
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        puVar4 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x70);
        lVar6 = (*(code *)*puVar4)(*(long *)(param_1 + 0x18),uVar2);
        if (*(long *)(param_1 + 0x18) != 0) {
          puVar4 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x30);
          (*(code *)*puVar4)(*(long *)(param_1 + 0x18),uVar2);
          if (*(long *)(param_1 + 0x18) != 0) {
            puVar4 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x28);
            (*(code *)*puVar4)(*(long *)(param_1 + 0x18),lVar6);
            if (lVar6 != 0) {
              *param_3 = *(undefined8 *)(lVar6 + 0x18);
              goto LAB_02667b28;
            }
          }
        }
      }
    }
  }
  auVar9 = func_0x00f78af4();
  puStack_48 = &Core_Containers_ObjectCache_int__object___Get;
  uStack_58 = 0;
  puStack_50 = &stack0xfffffffffffffff0;
  if (auVar9._0_8_ != 0) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar4[3] + 0xc0) + 0x78))
                      (auVar9._0_8_,auVar9._8_8_,&uStack_58);
    if (iVar1 == 0) {
      uStack_58 = 0;
    }
    return uStack_58;
  }
  auVar10 = func_0x00f78af4();
  lVar6 = *(long *)(*(long *)(puVar4[3] + 0xc0) + 0x80);
  puVar5 = puVar4;
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  lVar6 = func_0x00f78aec(lVar6);
  (*(code *)**(undefined8 **)(*(long *)(puVar4[3] + 0xc0) + 0x88))();
  if (lVar6 != 0) {
    *(int *)(lVar6 + 0x10) = auVar10._8_4_;
    lVar7 = *(long *)(auVar10._0_8_ + 0x18);
    lVar8 = *(long *)(*(long *)(puVar4[3] + 0xc0) + 0x58);
    if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar8);
    }
    uVar2 = func_0x00f78aec(lVar8);
    puVar5 = *(undefined8 **)(*(long *)(puVar4[3] + 0xc0) + 0x90);
    (*(code *)**(undefined8 **)(*(long *)(puVar4[3] + 0xc0) + 0x60))(uVar2,lVar6);
    if (lVar7 != 0) {
      puVar5 = *(undefined8 **)(*(long *)(puVar4[3] + 0xc0) + 0x68);
      uVar2 = (*(code *)*puVar5)(lVar7,uVar2);
      if ((int)uVar2 != -1) {
        lVar6 = *(long *)(auVar10._0_8_ + 0x18);
        if (lVar6 == 0) goto code_r0x02667ca4;
        (*(code *)**(undefined8 **)(*(long *)(puVar4[3] + 0xc0) + 0x30))(lVar6,uVar2);
      }
      return (ulong)((int)uVar2 != -1);
    }
  }
code_r0x02667ca4:
  auVar9 = func_0x00f78af4();
  if (*(long *)(auVar9._0_8_ + 0x18) != 0) {
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar9._8_8_ + 0x18) + 0xc0) + 0x38))();
    if (*(long *)(auVar9._0_8_ + 0x18) != 0) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar9._8_8_ + 0x18) + 0xc0) + 0x10))();
      return uVar3;
    }
  }
  uVar3 = func_0x00f78af4();
  if (uVar3 != 0) {
    return uVar3;
  }
  auVar10 = func_0x00f78af4();
  *(int *)(auVar10._0_8_ + 0x10) = auVar10._8_4_;
  lVar6 = **(long **)(puVar5[3] + 0xc0);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  uVar2 = func_0x00f78aec(lVar6);
  uVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar5[3] + 0xc0) + 8))(uVar2,auVar10._8_4_ + 1);
  *(undefined8 *)(auVar10._0_8_ + 0x18) = uVar2;
  return uVar3;
}



// ============================================================
// RVA: 0x2667b48 | Core.Containers.ObjectCache<int, object>.Get
// ============================================================

ulong Core_Containers_ObjectCache_int__object___Get
                (long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
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
  auVar9 = func_0x00f78af4();
  lVar5 = *(long *)(*(long *)(param_3[3] + 0xc0) + 0x80);
  puVar4 = param_3;
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  lVar5 = func_0x00f78aec(lVar5);
  (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x88))();
  if (lVar5 != 0) {
    *(int *)(lVar5 + 0x10) = auVar9._8_4_;
    lVar6 = *(long *)(auVar9._0_8_ + 0x18);
    lVar7 = *(long *)(*(long *)(param_3[3] + 0xc0) + 0x58);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    uVar2 = func_0x00f78aec(lVar7);
    puVar4 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x90);
    (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x60))(uVar2,lVar5);
    if (lVar6 != 0) {
      puVar4 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x68);
      uVar2 = (*(code *)*puVar4)(lVar6,uVar2);
      if ((int)uVar2 != -1) {
        lVar5 = *(long *)(auVar9._0_8_ + 0x18);
        if (lVar5 == 0) goto code_r0x02667ca4;
        (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x30))(lVar5,uVar2);
      }
      return (ulong)((int)uVar2 != -1);
    }
  }
code_r0x02667ca4:
  auVar8 = func_0x00f78af4();
  if (*(long *)(auVar8._0_8_ + 0x18) != 0) {
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar8._8_8_ + 0x18) + 0xc0) + 0x38))();
    if (*(long *)(auVar8._0_8_ + 0x18) != 0) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar8._8_8_ + 0x18) + 0xc0) + 0x10))();
      return uVar3;
    }
  }
  uVar3 = func_0x00f78af4();
  if (uVar3 != 0) {
    return uVar3;
  }
  auVar9 = func_0x00f78af4();
  *(int *)(auVar9._0_8_ + 0x10) = auVar9._8_4_;
  lVar5 = **(long **)(puVar4[3] + 0xc0);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  uVar2 = func_0x00f78aec(lVar5);
  uVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar4[3] + 0xc0) + 8))(uVar2,auVar9._8_4_ + 1);
  *(undefined8 *)(auVar9._0_8_ + 0x18) = uVar2;
  return uVar3;
}



// ============================================================
// RVA: 0x2667b90 | Core.Containers.ObjectCache<int, object>.Remove
// ============================================================

ulong Core_Containers_ObjectCache_int__object___Remove
                (long param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  
  lVar4 = *(long *)(*(long *)(param_3[3] + 0xc0) + 0x80);
  puVar3 = param_3;
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  lVar4 = func_0x00f78aec(lVar4);
  (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x88))();
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x10) = param_2;
    lVar5 = *(long *)(param_1 + 0x18);
    lVar6 = *(long *)(*(long *)(param_3[3] + 0xc0) + 0x58);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    uVar1 = func_0x00f78aec(lVar6);
    puVar3 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x90);
    (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x60))(uVar1,lVar4);
    if (lVar5 != 0) {
      puVar3 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x68);
      uVar1 = (*(code *)*puVar3)(lVar5,uVar1);
      if ((int)uVar1 != -1) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_02667ca4;
        (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x30))
                  (*(long *)(param_1 + 0x18),uVar1);
      }
      return (ulong)((int)uVar1 != -1);
    }
  }
LAB_02667ca4:
  auVar7 = func_0x00f78af4();
  if (*(long *)(auVar7._0_8_ + 0x18) != 0) {
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar7._8_8_ + 0x18) + 0xc0) + 0x38))();
    if (*(long *)(auVar7._0_8_ + 0x18) != 0) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar7._8_8_ + 0x18) + 0xc0) + 0x10))();
      return uVar2;
    }
  }
  uVar2 = func_0x00f78af4();
  if (uVar2 != 0) {
    return uVar2;
  }
  auVar8 = func_0x00f78af4();
  *(int *)(auVar8._0_8_ + 0x10) = auVar8._8_4_;
  lVar4 = **(long **)(puVar3[3] + 0xc0);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  uVar1 = func_0x00f78aec(lVar4);
  uVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar3[3] + 0xc0) + 8))(uVar1,auVar8._8_4_ + 1);
  *(undefined8 *)(auVar8._0_8_ + 0x18) = uVar1;
  return uVar2;
}



// ============================================================
// RVA: 0x2667ca8 | Core.Containers.ObjectCache<int, object>.RemoveAll
// ============================================================

long Core_Containers_ObjectCache_int__object___RemoveAll(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [12];
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x38))();
    if (*(long *)(param_1 + 0x18) != 0) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x10))();
      return lVar1;
    }
  }
  lVar1 = func_0x00f78af4();
  if (lVar1 != 0) {
    return lVar1;
  }
  auVar3 = func_0x00f78af4();
  *(int *)(auVar3._0_8_ + 0x10) = auVar3._8_4_;
  lVar1 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
  if ((*(ushort *)(lVar1 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar1);
  }
  uVar2 = func_0x00f78aec(lVar1);
  lVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 8))
                    (uVar2,auVar3._8_4_ + 1);
  *(undefined8 *)(auVar3._0_8_ + 0x18) = uVar2;
  return lVar1;
}



// ============================================================
// RVA: 0x2667d14 | Core.Containers.ObjectCache<int, object>..ctor
// ============================================================

void Core_Containers_ObjectCache_int__object____ctor(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [12];
  
  if (param_1 != 0) {
    return;
  }
  auVar3 = func_0x00f78af4();
  *(int *)(auVar3._0_8_ + 0x10) = auVar3._8_4_;
  lVar2 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
  if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar2);
  }
  uVar1 = func_0x00f78aec(lVar2);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 8))
            (uVar1,auVar3._8_4_ + 1);
  *(undefined8 *)(auVar3._0_8_ + 0x18) = uVar1;
  return;
}



