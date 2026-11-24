// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Animations.AnimLauncherBehaviour.AnimHolder

// ============================================================
// RVA: 0x1531a24 | Atlas.Animations.AnimLauncherBehaviour.AnimHolder.PlayAnimation
// ============================================================

undefined8 * Atlas_Animations_AnimLauncherBehaviour_AnimHolder__PlayAnimation(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  if ((bRam0000000003eb4ead & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ead = 1;
  }
  uVar5 = *param_1;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar2 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
  if ((int)puVar2 != 0) {
    uVar5 = param_1[1];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar2 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
    if ((int)puVar2 != 0) {
      lVar3 = param_1[1];
      if (lVar3 != 0) {
        uVar5 = param_1[3];
        if (pcRam0000000003ebe3c0 == (code *)0x0) {
          pcRam0000000003ebe3c0 =
               (code *)func_0x00f789d4("UnityEngine.Animator::StringToHash(System.String)");
        }
        uVar5 = (*pcRam0000000003ebe3c0)(uVar5);
        if (pcRam0000000003ebe318 == (code *)0x0) {
          pcRam0000000003ebe318 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x032113b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar2 = (undefined8 *)(*pcRam0000000003ebe318)(0xff800000,lVar3,uVar5,0xffffffff);
        return puVar2;
      }
      puVar2 = (undefined8 *)func_0x00f78af4();
      if ((bRam0000000003eb4eae & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4eae = 1;
      }
      uVar5 = *puVar2;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar4 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
      if ((int)puVar4 != 0) {
        uVar5 = puVar2[1];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar4 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
        if ((int)puVar4 != 0) {
          if (puVar2[1] == 0) {
            puVar4 = (undefined8 *)func_0x00f78af4();
            puVar2 = puVar4;
            if ((bRam0000000003eb4eaf & 1) == 0) {
              puVar2 = (undefined8 *)func_0x00f78a20(0x3d24dd0);
              bRam0000000003eb4eaf = 1;
            }
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[3] = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            return puVar2;
          }
          /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_b8,puVar2[1],0,0);
          uStack_88 = uStack_b0;
          uStack_90 = uStack_b8;
          uStack_78 = uStack_a0;
          uStack_80 = uStack_a8;
          uStack_70 = uStack_98;
          uVar1 = /*UnityEngine.AnimatorStateInfo$$IsName*/ func_0x03213a20(&uStack_90,puVar2[3],0);
          puVar4 = (undefined8 *)(ulong)(uVar1 ^ 1);
        }
      }
      return puVar4;
    }
  }
  return puVar2;
}



// ============================================================
// RVA: 0x1531af4 | Atlas.Animations.AnimLauncherBehaviour.AnimHolder.IsPlayingAnimation
// ============================================================

undefined8 *
Atlas_Animations_AnimLauncherBehaviour_AnimHolder__IsPlayingAnimation(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam0000000003eb4eae & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4eae = 1;
  }
  uVar4 = *param_1;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar2 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
  if ((int)puVar2 != 0) {
    uVar4 = param_1[1];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar2 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
    if ((int)puVar2 != 0) {
      if (param_1[1] == 0) {
        puVar3 = (undefined8 *)func_0x00f78af4();
        puVar2 = puVar3;
        if ((bRam0000000003eb4eaf & 1) == 0) {
          puVar2 = (undefined8 *)func_0x00f78a20(0x3d24dd0);
          bRam0000000003eb4eaf = 1;
        }
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[3] = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        return puVar2;
      }
      /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_88,param_1[1],0,0);
      uStack_58 = uStack_80;
      uStack_60 = uStack_88;
      uStack_48 = uStack_70;
      uStack_50 = uStack_78;
      uStack_40 = uStack_68;
      uVar1 = /*UnityEngine.AnimatorStateInfo$$IsName*/ func_0x03213a20(&uStack_60,param_1[3],0);
      puVar2 = (undefined8 *)(ulong)(uVar1 ^ 1);
    }
  }
  return puVar2;
}



// ============================================================
// RVA: 0x1531bec | Atlas.Animations.AnimLauncherBehaviour.AnimHolder.Reset
// ============================================================

void Atlas_Animations_AnimLauncherBehaviour_AnimHolder__Reset(undefined8 *param_1)

{
  if ((bRam0000000003eb4eaf & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4eaf = 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  return;
}



