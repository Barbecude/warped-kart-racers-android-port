// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Audio.MusicManager

// ============================================================
// RVA: 0x149bff8 | Atlas.Audio.MusicManager.PlayFrontEndMusicForMultiplayer
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x149cf70 | Atlas.Audio.MusicManager.get_AudioManager
// ============================================================

undefined8 Atlas_Audio_MusicManager__get_AudioManager(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x149cf78 | Atlas.Audio.MusicManager.get_MusicMode
// ============================================================

undefined4 Atlas_Audio_MusicManager__get_MusicMode(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x149cf80 | Atlas.Audio.MusicManager.Init
// ============================================================

void Atlas_Audio_MusicManager__Init(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb4a0d & 1) == 0) {
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d23600);
    func_0x00f78a20(0x3d404f0);
    func_0x00f78a20(0x3d1e8b8);
    func_0x00f78a20(0x3d78f90);
    bRam0000000003eb4a0d = 1;
  }
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x30) = 2;
  uVar1 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
  /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar1,/*STR('event:/Music/PrototypeMusic/RetentionLayer_Music')*/ uRam0000000003d78f90,0,0,0);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Stack<MusicManager.FrontEndMusicType>_TypeInfo*/ uRam0000000003d1e8b8);
  /*System.Collections.Generic.Stack<MusicManager.FrontEndMusicType>$$.ctor*/ func_0x028649ec(uVar1,uRam0000000003d404f0);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  if (((*(ushort *)(/*Atlas.Audio.MusicManager_TypeInfo*/ lRam0000000003d23600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.MusicManager_TypeInfo*/ lRam0000000003d23600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (**(long **)(/*Atlas.Audio.MusicManager_TypeInfo*/ lRam0000000003d23600 + 0xb8) != 0) {
    /*Atlas.Maths.NiceRandomSelection$$Init*/ func_0x014b0cac(param_1 + 0x44,*(int *)(**(long **)(/*Atlas.Audio.MusicManager_TypeInfo*/ lRam0000000003d23600 + 0xb8) + 0x18) + -1,0)
    ;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    return;
  }
  lVar2 = func_0x00f78af4();
  *(undefined4 *)(lVar2 + 0x5c) = 0;
  /*Atlas.Maths.NiceRandomSelection$$DeInit*/ func_0x014b0d8c(lVar2 + 0x44,0);
  /*Atlas.Audio.MusicManager$$StopFrontendEvent*/ func_0x0149d10c(lVar2);
  /*Atlas.Audio.MusicManager$$StopAndDestroyBaseLayerEvent*/ func_0x0149d180(lVar2);
  if (*(long *)(lVar2 + 0x18) != 0) {
    /*Core.Audio.AudioEvent$$DeInit*/ func_0x01638948(*(long *)(lVar2 + 0x18),0);
  }
  *(undefined8 *)(lVar2 + 0x18) = 0;
  return;
}



// ============================================================
// RVA: 0x149d0bc | Atlas.Audio.MusicManager.DeInit
// ============================================================

void Atlas_Audio_MusicManager__DeInit(long param_1)

{
  *(undefined4 *)(param_1 + 0x5c) = 0;
  /*Atlas.Maths.NiceRandomSelection$$DeInit*/ func_0x014b0d8c(param_1 + 0x44,0);
  /*Atlas.Audio.MusicManager$$StopFrontendEvent*/ func_0x0149d10c(param_1);
  /*Atlas.Audio.MusicManager$$StopAndDestroyBaseLayerEvent*/ func_0x0149d180(param_1);
  if (*(long *)(param_1 + 0x18) != 0) {
    /*Core.Audio.AudioEvent$$DeInit*/ func_0x01638948(*(long *)(param_1 + 0x18),0);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// ============================================================
// RVA: 0x149d10c | Atlas.Audio.MusicManager.StopFrontendEvent
// ============================================================

/* WARNING: Possible PIC construction at 0x0149d240: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0149d244) */
/* WARNING: Removing unreachable block (ram,0x0149d24c) */
/* WARNING: Removing unreachable block (ram,0x0149d258) */
/* WARNING: Removing unreachable block (ram,0x0149d260) */
/* WARNING: Removing unreachable block (ram,0x0149d268) */
/* WARNING: Removing unreachable block (ram,0x0149d270) */
/* WARNING: Removing unreachable block (ram,0x0149d290) */
/* WARNING: Removing unreachable block (ram,0x0149d2cc) */
/* WARNING: Removing unreachable block (ram,0x0149d298) */
/* WARNING: Removing unreachable block (ram,0x0149d2ac) */

void Atlas_Audio_MusicManager__StopFrontendEvent(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  puVar1 = &stack0xffffffffffffffe0;
  if ((bRam0000000003eb4a14 & 1) == 0) {
    func_0x00f78a20(0x3d404f8);
    bRam0000000003eb4a14 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(param_1 + 0x18),0,0);
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    puVar5 = &Atlas_Audio_MusicManager__StopAndDestroyBaseLayerEvent;
    uVar2 = func_0x00f78af4();
    auVar7._8_8_ = 0x3eb4000;
    auVar7._0_8_ = uVar2;
    while( true ) {
      uVar2 = auVar7._8_8_;
      lVar3 = auVar7._0_8_;
      *(undefined8 *)(puVar1 + -0x20) = uVar2;
      *(long *)(puVar1 + -0x18) = param_1;
      *(undefined1 **)(puVar1 + -0x10) = (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)(puVar1 + -8) = puVar5;
      if (*(long *)(lVar3 + 0x10) == 0) {
        return;
      }
      /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar3 + 0x10),0,0);
      if (*(long *)(lVar3 + 0x10) != 0) break;
      auVar6 = func_0x00f78af4();
      register0x00000008 = (BADSPACEBASE *)(puVar1 + -0x30);
      puVar4 = puVar1 + -0x30;
      *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
      *(undefined **)(puVar1 + -0x28) = &Atlas_Audio_MusicManager__PlayFrontEndMusic;
      if (auVar6._8_8_ == 0) {
        puVar5 = &Atlas_Audio_MusicManager__PlayFrontEndMusic;
        auVar7 = func_0x00f78af4();
      }
      else {
        auVar7._8_4_ = *(undefined4 *)(auVar6._8_8_ + 0x98);
        auVar7._0_8_ = auVar6._0_8_;
        auVar7._12_4_ = 0;
        register0x00000008 = (BADSPACEBASE *)(puVar1 + -0x20);
        puVar4 = *(undefined1 **)(puVar1 + -0x30);
        puVar5 = *(undefined **)(puVar1 + -0x28);
      }
      param_1 = auVar7._0_8_;
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x30);
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) = uVar2;
      *(long *)((long)register0x00000008 + -0x18) = lVar3;
      *(undefined1 **)((long)register0x00000008 + -0x10) = puVar4;
      *(undefined **)((long)register0x00000008 + -8) = puVar5;
      unaff_x22 = 0x3eb4000;
      if ((bRam0000000003eb4a12 & 1) == 0) {
        func_0x00f78a20(0x3d40508);
        func_0x00f78a20(0x3d71f20);
        bRam0000000003eb4a12 = 1;
      }
      if (auVar7._8_4_ == 0) {
        return;
      }
      puVar5 = &UNK_0149d244;
      unaff_x21 = 0;
    }
    /*Core.Audio.AudioEvent$$DeInit*/ func_0x01638948(*(long *)(lVar3 + 0x10),0);
    *(undefined8 *)(lVar3 + 0x10) = 0;
    return;
  }
  /*System.Collections.Generic.Stack<MusicManager.FrontEndMusicType>$$Clear*/ func_0x02864ba0(*(long *)(param_1 + 0x28),uRam0000000003d404f8);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}



// ============================================================
// RVA: 0x149d180 | Atlas.Audio.MusicManager.StopAndDestroyBaseLayerEvent
// ============================================================

void Atlas_Audio_MusicManager__StopAndDestroyBaseLayerEvent(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 **ppuVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **ppuVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  auVar2._8_8_ = unaff_x20;
  auVar2._0_8_ = param_1;
  auVar1._8_8_ = unaff_x20;
  auVar1._0_8_ = param_1;
  if (*(long *)(param_1 + 0x10) != 0) {
    /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(param_1 + 0x10),0,0);
    if (*(long *)(param_1 + 0x10) == 0) {
      auVar11 = func_0x00f78af4();
      ppuVar4 = &puStack_30;
      ppuVar9 = &puStack_30;
      puStack_28 = &Atlas_Audio_MusicManager__PlayFrontEndMusic;
      puStack_30 = &stack0xfffffffffffffff0;
      if (auVar11._8_8_ == 0) {
        puVar10 = &Atlas_Audio_MusicManager__PlayFrontEndMusic;
        auVar12 = func_0x00f78af4();
        uVar3 = 0;
      }
      else {
        auVar12._8_4_ = *(undefined4 *)(auVar11._8_8_ + 0x98);
        auVar12._0_8_ = auVar11._0_8_;
        auVar12._12_4_ = 0;
        puVar10 = &Atlas_Audio_MusicManager__PlayFrontEndMusic;
        ppuVar4 = (undefined1 **)&stack0xffffffffffffffe0;
        uVar3 = 0;
        ppuVar9 = (undefined1 **)&stack0xfffffffffffffff0;
        auVar2 = auVar1;
      }
      do {
        auVar1 = auVar12;
        uVar7 = uVar3;
        lVar5 = auVar1._0_8_;
        *(undefined8 *)((long)ppuVar4 + -0x30) = unaff_x22;
        *(undefined8 *)((long)ppuVar4 + -0x28) = unaff_x21;
        *(long *)((long)ppuVar4 + -0x20) = auVar2._8_8_;
        *(long *)((long)ppuVar4 + -0x18) = auVar2._0_8_;
        *(undefined1 ***)((long)ppuVar4 + -0x10) = ppuVar9;
        *(undefined **)((long)ppuVar4 + -8) = puVar10;
        ppuVar9 = (undefined1 **)((long)ppuVar4 + -0x10);
        unaff_x22 = 0x3eb4000;
        if ((bRam0000000003eb4a12 & 1) == 0) {
          func_0x00f78a20(0x3d40508);
          func_0x00f78a20(0x3d71f20);
          bRam0000000003eb4a12 = 1;
        }
        iVar8 = auVar1._8_4_;
        if (iVar8 == 0) {
          return;
        }
        Atlas_Audio_MusicManager__StopAndDestroyBaseLayerEvent(lVar5);
        if (*(long *)(lVar5 + 0x18) != 0) {
          uVar6 = /*Core.Audio.AudioEvent$$IsPlaying*/ func_0x01639214(*(long *)(lVar5 + 0x18),0);
          if ((uVar6 & 1) == 0) {
            if (*(long *)(lVar5 + 0x18) == 0) goto code_r0x0149d2cc;
            /*Core.Audio.AudioEvent$$Play*/ func_0x01638af0(*(long *)(lVar5 + 0x18),0);
          }
          if (*(long *)(lVar5 + 0x18) != 0) {
            /*Core.Audio.AudioEvent$$SetParameter*/ func_0x01638fc8((float)iVar8,*(long *)(lVar5 + 0x18),/*STR('RetentionMusic_Context')*/ uRam0000000003d71f20,0,0);
            if ((int)uVar7 == 0) goto code_r0x0149d2ac;
            if (*(long *)(lVar5 + 0x28) != 0) {
              /*System.Collections.Generic.Stack<MusicManager.FrontEndMusicType>$$Push*/ func_0x028650e4(*(long *)(lVar5 + 0x28),*(undefined4 *)(lVar5 + 0x20),
                              uRam0000000003d40508);
code_r0x0149d2ac:
              *(int *)(lVar5 + 0x20) = iVar8;
              *(undefined4 *)(lVar5 + 0x5c) = 0;
              *(undefined4 *)(lVar5 + 0x30) = 2;
              return;
            }
          }
        }
code_r0x0149d2cc:
        puVar10 = &Atlas_Audio_MusicManager__PlayFrontEndMusicPush;
        auVar12 = func_0x00f78af4();
        ppuVar4 = (undefined1 **)((long)ppuVar4 + -0x30);
        uVar3 = 1;
        unaff_x21 = uVar7;
        auVar2 = auVar1;
      } while( true );
    }
    /*Core.Audio.AudioEvent$$DeInit*/ func_0x01638948(*(long *)(param_1 + 0x10),0);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x149d1c8 | Atlas.Audio.MusicManager.PlayFrontEndMusic
// ============================================================

void Atlas_Audio_MusicManager__PlayFrontEndMusic(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x19;
  int iVar7;
  ulong unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar8;
  undefined *unaff_x30;
  undefined1 auVar9 [16];
  
  puVar2 = &stack0xfffffffffffffff0;
  puVar8 = &stack0xfffffffffffffff0;
  if (param_2 == 0) {
    unaff_x30 = &Atlas_Audio_MusicManager__PlayFrontEndMusic;
    auVar9 = func_0x00f78af4();
    param_1 = auVar9._0_8_;
    uVar4 = auVar9._8_8_;
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined1 *)register0x00000008;
    uVar4 = (ulong)*(uint *)(param_2 + 0x98);
    uVar1 = 0;
    puVar8 = unaff_x29;
  }
  do {
    uVar6 = uVar1;
    uVar5 = uVar4;
    lVar3 = param_1;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(ulong *)(puVar2 + -0x20) = unaff_x20;
    *(long *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar8;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    puVar8 = puVar2 + -0x10;
    unaff_x22 = 0x3eb4000;
    if ((bRam0000000003eb4a12 & 1) == 0) {
      func_0x00f78a20(0x3d40508);
      func_0x00f78a20(0x3d71f20);
      bRam0000000003eb4a12 = 1;
    }
    iVar7 = (int)uVar5;
    if (iVar7 == 0) {
      return;
    }
    Atlas_Audio_MusicManager__StopAndDestroyBaseLayerEvent(lVar3);
    if (*(long *)(lVar3 + 0x18) != 0) {
      uVar4 = /*Core.Audio.AudioEvent$$IsPlaying*/ func_0x01639214(*(long *)(lVar3 + 0x18),0);
      if ((uVar4 & 1) == 0) {
        if (*(long *)(lVar3 + 0x18) == 0) goto code_r0x0149d2cc;
        /*Core.Audio.AudioEvent$$Play*/ func_0x01638af0(*(long *)(lVar3 + 0x18),0);
      }
      if (*(long *)(lVar3 + 0x18) != 0) {
        /*Core.Audio.AudioEvent$$SetParameter*/ func_0x01638fc8((float)iVar7,*(long *)(lVar3 + 0x18),/*STR('RetentionMusic_Context')*/ uRam0000000003d71f20,0,0);
        if ((int)uVar6 == 0) goto code_r0x0149d2ac;
        if (*(long *)(lVar3 + 0x28) != 0) {
          /*System.Collections.Generic.Stack<MusicManager.FrontEndMusicType>$$Push*/ func_0x028650e4(*(long *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x20),uRam0000000003d40508
                         );
code_r0x0149d2ac:
          *(int *)(lVar3 + 0x20) = iVar7;
          *(undefined4 *)(lVar3 + 0x5c) = 0;
          *(undefined4 *)(lVar3 + 0x30) = 2;
          return;
        }
      }
    }
code_r0x0149d2cc:
    unaff_x30 = &Atlas_Audio_MusicManager__PlayFrontEndMusicPush;
    auVar9 = func_0x00f78af4();
    puVar2 = puVar2 + -0x30;
    param_1 = auVar9._0_8_;
    uVar4 = auVar9._8_8_;
    uVar1 = 1;
    unaff_x19 = lVar3;
    unaff_x20 = uVar5;
    unaff_x21 = uVar6;
  } while( true );
}



// ============================================================
// RVA: 0x149d1e8 | Atlas.Audio.MusicManager.PlayFrontEndMusic
// ============================================================

void Atlas_Audio_MusicManager__PlayFrontEndMusic(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 unaff_x19;
  int iVar8;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar9 [16];
  
  auVar2._8_8_ = unaff_x20;
  auVar2._0_8_ = unaff_x19;
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  puVar4 = (undefined1 *)register0x00000008;
  uVar3 = 0;
  do {
    auVar1 = auVar9;
    uVar7 = uVar3;
    lVar5 = auVar1._0_8_;
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
    *(long *)(puVar4 + -0x20) = auVar2._8_8_;
    *(long *)(puVar4 + -0x18) = auVar2._0_8_;
    *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
    *(undefined **)(puVar4 + -8) = unaff_x30;
    unaff_x29 = puVar4 + -0x10;
    unaff_x22 = 0x3eb4000;
    if ((bRam0000000003eb4a12 & 1) == 0) {
      func_0x00f78a20(0x3d40508);
      func_0x00f78a20(0x3d71f20);
      bRam0000000003eb4a12 = 1;
    }
    iVar8 = auVar1._8_4_;
    if (iVar8 == 0) {
      return;
    }
    Atlas_Audio_MusicManager__StopAndDestroyBaseLayerEvent(lVar5);
    if (*(long *)(lVar5 + 0x18) != 0) {
      uVar6 = /*Core.Audio.AudioEvent$$IsPlaying*/ func_0x01639214(*(long *)(lVar5 + 0x18),0);
      if ((uVar6 & 1) == 0) {
        if (*(long *)(lVar5 + 0x18) == 0) goto code_r0x0149d2cc;
        /*Core.Audio.AudioEvent$$Play*/ func_0x01638af0(*(long *)(lVar5 + 0x18),0);
      }
      if (*(long *)(lVar5 + 0x18) != 0) {
        /*Core.Audio.AudioEvent$$SetParameter*/ func_0x01638fc8((float)iVar8,*(long *)(lVar5 + 0x18),/*STR('RetentionMusic_Context')*/ uRam0000000003d71f20,0,0);
        if ((int)uVar7 == 0) goto code_r0x0149d2ac;
        if (*(long *)(lVar5 + 0x28) != 0) {
          /*System.Collections.Generic.Stack<MusicManager.FrontEndMusicType>$$Push*/ func_0x028650e4(*(long *)(lVar5 + 0x28),*(undefined4 *)(lVar5 + 0x20),uRam0000000003d40508
                         );
code_r0x0149d2ac:
          *(int *)(lVar5 + 0x20) = iVar8;
          *(undefined4 *)(lVar5 + 0x5c) = 0;
          *(undefined4 *)(lVar5 + 0x30) = 2;
          return;
        }
      }
    }
code_r0x0149d2cc:
    unaff_x30 = &Atlas_Audio_MusicManager__PlayFrontEndMusicPush;
    auVar9 = func_0x00f78af4();
    puVar4 = puVar4 + -0x30;
    uVar3 = 1;
    unaff_x21 = uVar7;
    auVar2 = auVar1;
  } while( true );
}



// ============================================================
// RVA: 0x149d1f0 | Atlas.Audio.MusicManager.PlayFrontEndMusic
// ============================================================

void Atlas_Audio_MusicManager__PlayFrontEndMusic
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 unaff_x19;
  int iVar6;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar7 [16];
  
  auVar2._8_8_ = unaff_x20;
  auVar2._0_8_ = unaff_x19;
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  do {
    auVar1 = auVar7;
    uVar5 = param_3;
    lVar3 = auVar1._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = auVar2._8_8_;
    *(long *)((long)register0x00000008 + -0x18) = auVar2._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x22 = 0x3eb4000;
    if ((bRam0000000003eb4a12 & 1) == 0) {
      func_0x00f78a20(0x3d40508);
      func_0x00f78a20(0x3d71f20);
      bRam0000000003eb4a12 = 1;
    }
    iVar6 = auVar1._8_4_;
    if (iVar6 == 0) {
      return;
    }
    Atlas_Audio_MusicManager__StopAndDestroyBaseLayerEvent(lVar3);
    if (*(long *)(lVar3 + 0x18) != 0) {
      uVar4 = /*Core.Audio.AudioEvent$$IsPlaying*/ func_0x01639214(*(long *)(lVar3 + 0x18),0);
      if ((uVar4 & 1) == 0) {
        if (*(long *)(lVar3 + 0x18) == 0) goto LAB_0149d2cc;
        /*Core.Audio.AudioEvent$$Play*/ func_0x01638af0(*(long *)(lVar3 + 0x18),0);
      }
      if (*(long *)(lVar3 + 0x18) != 0) {
        /*Core.Audio.AudioEvent$$SetParameter*/ func_0x01638fc8((float)iVar6,*(long *)(lVar3 + 0x18),/*STR('RetentionMusic_Context')*/ uRam0000000003d71f20,0,0);
        if ((int)uVar5 == 0) goto LAB_0149d2ac;
        if (*(long *)(lVar3 + 0x28) != 0) {
          /*System.Collections.Generic.Stack<MusicManager.FrontEndMusicType>$$Push*/ func_0x028650e4(*(long *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x20),uRam0000000003d40508
                         );
LAB_0149d2ac:
          *(int *)(lVar3 + 0x20) = iVar6;
          *(undefined4 *)(lVar3 + 0x5c) = 0;
          *(undefined4 *)(lVar3 + 0x30) = 2;
          return;
        }
      }
    }
LAB_0149d2cc:
    unaff_x30 = &Atlas_Audio_MusicManager__PlayFrontEndMusicPush;
    auVar7 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    param_3 = 1;
    unaff_x21 = uVar5;
    auVar2 = auVar1;
  } while( true );
}



// ============================================================
// RVA: 0x149d2d0 | Atlas.Audio.MusicManager.PlayFrontEndMusicPush
// ============================================================

void Atlas_Audio_MusicManager__PlayFrontEndMusicPush(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  long lVar4;
  undefined8 unaff_x19;
  int iVar5;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar6 [16];
  
  auVar2._8_8_ = unaff_x20;
  auVar2._0_8_ = unaff_x19;
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  do {
    auVar1 = auVar6;
    lVar4 = auVar1._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = auVar2._8_8_;
    *(long *)((long)register0x00000008 + -0x18) = auVar2._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x21 = 1;
    unaff_x22 = 0x3eb4000;
    if ((bRam0000000003eb4a12 & 1) == 0) {
      func_0x00f78a20(0x3d40508);
      func_0x00f78a20(0x3d71f20);
      bRam0000000003eb4a12 = 1;
    }
    iVar5 = auVar1._8_4_;
    if (iVar5 == 0) {
      return;
    }
    Atlas_Audio_MusicManager__StopAndDestroyBaseLayerEvent(lVar4);
    if (*(long *)(lVar4 + 0x18) != 0) {
      uVar3 = /*Core.Audio.AudioEvent$$IsPlaying*/ func_0x01639214(*(long *)(lVar4 + 0x18),0);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(lVar4 + 0x18) == 0) goto LAB_0149d2cc;
        /*Core.Audio.AudioEvent$$Play*/ func_0x01638af0(*(long *)(lVar4 + 0x18),0);
      }
      if (*(long *)(lVar4 + 0x18) != 0) {
        /*Core.Audio.AudioEvent$$SetParameter*/ func_0x01638fc8((float)iVar5,*(long *)(lVar4 + 0x18),/*STR('RetentionMusic_Context')*/ uRam0000000003d71f20,0,0);
        if (*(long *)(lVar4 + 0x28) != 0) {
          /*System.Collections.Generic.Stack<MusicManager.FrontEndMusicType>$$Push*/ func_0x028650e4(*(long *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x20),uRam0000000003d40508
                         );
          *(int *)(lVar4 + 0x20) = iVar5;
          *(undefined4 *)(lVar4 + 0x5c) = 0;
          *(undefined4 *)(lVar4 + 0x30) = 2;
          return;
        }
      }
    }
LAB_0149d2cc:
    unaff_x30 = Atlas_Audio_MusicManager__PlayFrontEndMusicPush;
    auVar6 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    auVar2 = auVar1;
  } while( true );
}



// ============================================================
// RVA: 0x149d2d8 | Atlas.Audio.MusicManager.PlayFrontEndMusicPop
// ============================================================

/* WARNING: Possible PIC construction at 0x0149d288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149d4ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0149d28c) */
/* WARNING: Removing unreachable block (ram,0x0149d290) */
/* WARNING: Removing unreachable block (ram,0x0149d298) */
/* WARNING: Removing unreachable block (ram,0x0149d2ac) */
/* WARNING: Removing unreachable block (ram,0x0149d4b0) */

long Atlas_Audio_MusicManager__PlayFrontEndMusicPop
               (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 uVar13;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar14;
  undefined8 unaff_x21;
  undefined8 uVar15;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 uVar16;
  code *unaff_x30;
  undefined *puVar17;
  float fVar18;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  puVar2 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4a0f & 1) == 0) {
    func_0x00f78a20(0x3d40500);
    func_0x00f78a20(0x3d40510);
    bRam0000000003eb4a0f = 1;
  }
  lVar8 = *(long *)(param_1 + 0x28);
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) < 1) {
      return lVar8;
    }
    uVar5 = /*System.Collections.Generic.Stack<MusicManager.FrontEndMusicType>$$Pop*/ func_0x02865068(lVar8,uRam0000000003d40500);
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    puVar2 = (undefined1 *)register0x00000008;
    uVar7 = (ulong)uVar5;
    uVar16 = 0;
    do {
      uVar15 = uVar16;
      uVar14 = uVar7;
      lVar12 = param_1;
      *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
      *(ulong *)(puVar2 + -0x20) = unaff_x20;
      *(long *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
      *(code **)(puVar2 + -8) = unaff_x30;
      unaff_x29 = puVar2 + -0x10;
      unaff_x22 = 0x3eb4000;
      lVar8 = lVar12;
      if ((bRam0000000003eb4a12 & 1) == 0) {
        func_0x00f78a20(0x3d40508);
        lVar8 = func_0x00f78a20(0x3d71f20);
        bRam0000000003eb4a12 = 1;
      }
      if ((int)uVar14 == 0) {
        return lVar8;
      }
      Atlas_Audio_MusicManager__StopAndDestroyBaseLayerEvent(lVar12);
      if (*(long *)(lVar12 + 0x18) != 0) {
        uVar7 = /*Core.Audio.AudioEvent$$IsPlaying*/ func_0x01639214(*(long *)(lVar12 + 0x18),0);
        if ((uVar7 & 1) == 0) {
          if (*(long *)(lVar12 + 0x18) == 0) goto LAB_0149d2cc;
          /*Core.Audio.AudioEvent$$Play*/ func_0x01638af0(*(long *)(lVar12 + 0x18),0);
        }
        lVar8 = *(long *)(lVar12 + 0x18);
        if (lVar8 != 0) goto code_r0x0149d270;
      }
LAB_0149d2cc:
      unaff_x30 = Atlas_Audio_MusicManager__PlayFrontEndMusicPush;
      auVar19 = func_0x00f78af4();
      puVar2 = puVar2 + -0x30;
      param_1 = auVar19._0_8_;
      uVar7 = auVar19._8_8_;
      uVar16 = 1;
      unaff_x19 = lVar12;
      unaff_x20 = uVar14;
      unaff_x21 = uVar15;
    } while( true );
  }
  auVar19 = func_0x00f78af4();
  if ((bRam0000000003eb4a10 & 1) == 0) {
    func_0x00f78a20(0x3d20050);
    bRam0000000003eb4a10 = 1;
  }
  if (auVar19._8_8_ == (long *)0x0) {
code_r0x0149d3cc:
    uVar5 = 0;
  }
  else {
    lVar8 = *auVar19._8_8_;
    if (*(byte *)(lVar8 + 300) < *(byte *)(/*Atlas.Contexts.BattleGameContext_TypeInfo*/ lRam0000000003d20050 + 300)) goto code_r0x0149d3cc;
    uVar5 = (uint)(*(long *)(*(long *)(lVar8 + 200) +
                             (ulong)*(byte *)(/*Atlas.Contexts.BattleGameContext_TypeInfo*/ lRam0000000003d20050 + 300) * 8 + -8) ==
                  /*Atlas.Contexts.BattleGameContext_TypeInfo*/ lRam0000000003d20050);
  }
  puVar17 = &Atlas_Audio_MusicManager__PlayBaseLayerMusic;
  uVar16 = 0x3eb4000;
  puVar3 = &stack0xffffffffffffffe0;
  lVar8 = auVar19._0_8_;
  while( true ) {
    auVar19._8_8_ = param_3;
    auVar19._0_8_ = param_4;
    puVar4 = puVar3 + -0x40;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x20) = uVar16;
    *(long *)(puVar3 + -0x18) = param_1;
    *(undefined1 **)(puVar3 + -0x10) = puVar2;
    *(undefined **)(puVar3 + -8) = puVar17;
    puVar2 = puVar3 + -0x10;
    unaff_x24 = 0x3eb4000;
    unaff_x23 = 0x3d1ff30;
    if ((bRam0000000003eb4a13 & 1) == 0) {
      func_0x00f78a20(0x3d1ff30);
      bRam0000000003eb4a13 = 1;
    }
    Atlas_Audio_MusicManager__StopFrontendEvent(lVar8);
    Atlas_Audio_MusicManager__StopAndDestroyBaseLayerEvent(lVar8);
    *(uint *)(lVar8 + 0x30) = uVar5;
    lVar9 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
    lVar12 = 0;
    /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(lVar9,param_3,0,0,0);
    *(long *)(lVar8 + 0x10) = lVar9;
    if (lVar9 != 0) {
      /*Core.Audio.AudioEvent$$Play*/ func_0x01638af0(lVar9,0);
      uVar13 = 10;
      if ((int)param_4 == 0) {
        uVar13 = 1;
      }
      auVar20._8_4_ = uVar13;
      auVar20._0_8_ = lVar8;
      auVar20._12_4_ = 0;
      puVar17 = &UNK_0149d4b0;
      lVar12 = lVar8;
      goto code_r0x0149d550;
    }
    auVar19 = func_0x00f78af4();
    puVar4 = puVar3 + -0x70;
    *(undefined8 *)(puVar3 + -0x70) = 0;
    *(undefined8 *)(puVar3 + -0x68) = param_3;
    *(ulong *)(puVar3 + -0x60) = param_4;
    *(long *)(puVar3 + -0x58) = lVar8;
    *(undefined1 **)(puVar3 + -0x50) = puVar2;
    *(undefined **)(puVar3 + -0x48) = &Atlas_Audio_MusicManager__PlayBaseLayerMusic;
    puVar2 = puVar3 + -0x50;
    lVar9 = 0x3eb4000;
    if ((bRam0000000003eb4a11 & 1) == 0) {
      func_0x00f78a20(0x3d69658);
      bRam0000000003eb4a11 = 1;
    }
    if ((auVar19._8_8_ == 0) ||
       (uVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(auVar19._8_8_ + 0x30),/*STR('BattleGameContext')*/ uRam0000000003d69658,0),
       lVar12 == 0)) break;
    param_3 = *(undefined8 *)(lVar12 + 0x98);
    param_4 = (ulong)*(byte *)(lVar12 + 0xa0);
    puVar2 = *(undefined1 **)(puVar3 + -0x50);
    puVar17 = *(undefined **)(puVar3 + -0x48);
    uVar16 = *(undefined8 *)(puVar3 + -0x60);
    param_1 = *(long *)(puVar3 + -0x58);
    unaff_x22 = *(undefined8 *)(puVar3 + -0x70);
    unaff_x21 = *(undefined8 *)(puVar3 + -0x68);
    puVar3 = puVar3 + -0x40;
    lVar8 = auVar19._0_8_;
  }
  puVar17 = &Atlas_Audio_MusicManager__SetParameter;
  auVar20 = func_0x00f78af4();
code_r0x0149d550:
  lVar10 = auVar20._0_8_;
  *(long *)(puVar4 + -0x30) = lVar9;
  *(long *)(puVar4 + -0x28) = auVar19._8_8_;
  *(long *)(puVar4 + -0x20) = auVar19._0_8_;
  *(long *)(puVar4 + -0x18) = lVar12;
  *(undefined1 **)(puVar4 + -0x10) = puVar2;
  *(undefined **)(puVar4 + -8) = puVar17;
  lVar8 = lVar10;
  if ((bRam0000000003eb4a17 & 1) == 0) {
    lVar8 = func_0x00f78a20(0x3d71930);
    bRam0000000003eb4a17 = 1;
  }
  if (((*(int *)(lVar10 + 0x30) != 0) || (lVar8 = 0, *(long *)(lVar10 + 0x10) == 0)) ||
     (lVar8 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(lVar10 + 0x10),0), (int)lVar8 == 0)) {
    return lVar8;
  }
  lVar8 = *(long *)(lVar10 + 0x10);
  if (lVar8 == 0) {
    auVar19 = func_0x00f78af4();
    lVar12 = auVar19._0_8_;
    *(long *)(puVar4 + -0x60) = lVar9;
    *(undefined8 *)(puVar4 + -0x58) = 0x3eb4000;
    *(undefined1 (*) [16])(puVar4 + -0x50) = auVar20;
    *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -0x38) = &Atlas_Audio_MusicManager__SetParameter;
    lVar8 = lVar12;
    if ((bRam0000000003eb4a18 & 1) == 0) {
      lVar8 = func_0x00f78a20(0x3d69668);
      bRam0000000003eb4a18 = 1;
    }
    if (((*(int *)(lVar12 + 0x30) != 1) || (lVar8 = 0, *(long *)(lVar12 + 0x10) == 0)) ||
       (lVar8 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(lVar12 + 0x10),0), (int)lVar8 == 0)) {
      return lVar8;
    }
    lVar8 = *(long *)(lVar12 + 0x10);
    if (lVar8 == 0) {
      lVar8 = func_0x00f78af4();
      *(undefined1 (*) [16])(puVar4 + -0x80) = auVar19;
      *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x40;
      *(undefined **)(puVar4 + -0x68) = &Atlas_Audio_MusicManager__SaveParameter;
      if ((bRam0000000003eb4a15 & 1) == 0) {
        func_0x00f78a20(0x3d71930);
        func_0x00f78a20(0x3d69668);
        bRam0000000003eb4a15 = 1;
      }
      lVar12 = 0;
      if (*(long *)(lVar8 + 0x10) != 0) {
        puVar1 = (undefined8 *)0x3d69668;
        if (*(int *)(lVar8 + 0x30) != 1) {
          puVar1 = (undefined8 *)0x3d71930;
        }
        lVar12 = /*Core.Audio.AudioEvent$$GetParameter*/ func_0x01639030(*(long *)(lVar8 + 0x10),*puVar1,0);
        *(undefined4 *)(lVar8 + 0x40) = extraout_s0;
      }
      return lVar12;
    }
    fVar18 = (float)auVar19._8_4_;
    unaff_x29 = *(undefined1 **)(puVar4 + -0x40);
    uVar16 = *(undefined8 *)(puVar4 + -0x38);
    uVar14 = *(ulong *)(puVar4 + -0x50);
    lVar12 = *(long *)(puVar4 + -0x48);
    unaff_x22 = *(undefined8 *)(puVar4 + -0x60);
    uVar15 = *(undefined8 *)(puVar4 + -0x58);
    puVar4 = puVar4 + -0x30;
    uVar11 = /*STR('BattleMusic_Context')*/ uRam0000000003d69668;
  }
  else {
    fVar18 = (float)auVar20._8_4_;
    unaff_x29 = *(undefined1 **)(puVar4 + -0x10);
    uVar16 = *(undefined8 *)(puVar4 + -8);
    uVar14 = *(ulong *)(puVar4 + -0x20);
    lVar12 = *(long *)(puVar4 + -0x18);
    unaff_x22 = *(undefined8 *)(puVar4 + -0x30);
    uVar15 = *(undefined8 *)(puVar4 + -0x28);
    uVar11 = /*STR('RaceMusic_Context')*/ uRam0000000003d71930;
  }
code_r0x01638fc8:
  *(undefined8 *)(puVar4 + -0x40) = unaff_d9;
  *(undefined8 *)(puVar4 + -0x38) = unaff_d8;
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x28) = uVar15;
  *(ulong *)(puVar4 + -0x20) = uVar14;
  *(long *)(puVar4 + -0x18) = lVar12;
  *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar4 + -8) = uVar16;
  iVar6 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar8 + 0x28,0,0,0);
  if (iVar6 != 0) {
    /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(fVar18,lVar8 + 0x28,uVar11,0,0);
  }
  return lVar8;
code_r0x0149d270:
  fVar18 = (float)(int)uVar14;
  uVar16 = 0x149d28c;
  puVar4 = puVar2 + -0x30;
  uVar11 = /*STR('RetentionMusic_Context')*/ uRam0000000003d71f20;
  goto code_r0x01638fc8;
}



// ============================================================
// RVA: 0x149d364 | Atlas.Audio.MusicManager.PlayBaseLayerMusic
// ============================================================

/* WARNING: Possible PIC construction at 0x0149d4ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0149d4b0) */

long Atlas_Audio_MusicManager__PlayBaseLayerMusic
               (long param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 unaff_x19;
  undefined8 uVar11;
  undefined8 unaff_x20;
  undefined8 uVar12;
  undefined8 unaff_x21;
  undefined8 uVar13;
  undefined8 unaff_x22;
  undefined8 uVar14;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined8 unaff_x30;
  undefined *puVar17;
  undefined8 uVar18;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  if ((bRam0000000003eb4a10 & 1) == 0) {
    func_0x00f78a20(0x3d20050);
    bRam0000000003eb4a10 = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_0149d3cc:
    uVar3 = 0;
  }
  else {
    if (*(byte *)(*param_2 + 300) < *(byte *)(/*Atlas.Contexts.BattleGameContext_TypeInfo*/ lRam0000000003d20050 + 300)) goto LAB_0149d3cc;
    uVar3 = (uint)(*(long *)(*(long *)(*param_2 + 200) +
                             (ulong)*(byte *)(/*Atlas.Contexts.BattleGameContext_TypeInfo*/ lRam0000000003d20050 + 300) * 8 + -8) ==
                  /*Atlas.Contexts.BattleGameContext_TypeInfo*/ lRam0000000003d20050);
  }
  while( true ) {
    auVar19._8_8_ = param_3;
    auVar19._0_8_ = param_4;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar15 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x24 = 0x3eb4000;
    unaff_x23 = 0x3d1ff30;
    if ((bRam0000000003eb4a13 & 1) == 0) {
      func_0x00f78a20(0x3d1ff30);
      bRam0000000003eb4a13 = 1;
    }
    Atlas_Audio_MusicManager__StopFrontendEvent(param_1);
    Atlas_Audio_MusicManager__StopAndDestroyBaseLayerEvent(param_1);
    *(uint *)(param_1 + 0x30) = uVar3;
    lVar5 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
    lVar8 = 0;
    /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(lVar5,param_3,0,0,0);
    *(long *)(param_1 + 0x10) = lVar5;
    if (lVar5 != 0) {
      /*Core.Audio.AudioEvent$$Play*/ func_0x01638af0(lVar5,0);
      uVar9 = 10;
      if ((int)param_4 == 0) {
        uVar9 = 1;
      }
      auVar20._8_4_ = uVar9;
      auVar20._0_8_ = param_1;
      auVar20._12_4_ = 0;
      puVar17 = &UNK_0149d4b0;
      lVar8 = param_1;
      goto code_r0x0149d550;
    }
    auVar19 = func_0x00f78af4();
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x68) = param_3;
    *(ulong *)((long)register0x00000008 + -0x60) = param_4;
    *(long *)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) = puVar15;
    *(undefined **)((long)register0x00000008 + -0x48) =
         &Atlas_Audio_MusicManager__PlayBaseLayerMusic;
    puVar15 = (undefined1 *)((long)register0x00000008 + -0x50);
    lVar5 = 0x3eb4000;
    if ((bRam0000000003eb4a11 & 1) == 0) {
      func_0x00f78a20(0x3d69658);
      bRam0000000003eb4a11 = 1;
    }
    if ((auVar19._8_8_ == 0) ||
       (uVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(auVar19._8_8_ + 0x30),/*STR('BattleGameContext')*/ uRam0000000003d69658,0),
       lVar8 == 0)) break;
    param_3 = *(undefined8 *)(lVar8 + 0x98);
    param_4 = (ulong)*(byte *)(lVar8 + 0xa0);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x68);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    param_1 = auVar19._0_8_;
  }
  puVar17 = &Atlas_Audio_MusicManager__SetParameter;
  auVar20 = func_0x00f78af4();
code_r0x0149d550:
  lVar6 = auVar20._0_8_;
  *(long *)(puVar2 + -0x30) = lVar5;
  *(long *)(puVar2 + -0x28) = auVar19._8_8_;
  *(long *)(puVar2 + -0x20) = auVar19._0_8_;
  *(long *)(puVar2 + -0x18) = lVar8;
  *(undefined1 **)(puVar2 + -0x10) = puVar15;
  *(undefined **)(puVar2 + -8) = puVar17;
  lVar8 = lVar6;
  if ((bRam0000000003eb4a17 & 1) == 0) {
    lVar8 = func_0x00f78a20(0x3d71930);
    bRam0000000003eb4a17 = 1;
  }
  if (*(int *)(lVar6 + 0x30) == 0) {
    lVar8 = 0;
    if ((*(long *)(lVar6 + 0x10) != 0) &&
       (lVar8 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(lVar6 + 0x10),0), (int)lVar8 != 0)) {
      lVar8 = *(long *)(lVar6 + 0x10);
      if (lVar8 != 0) {
        iVar10 = auVar20._8_4_;
        uVar16 = *(undefined8 *)(puVar2 + -0x10);
        uVar18 = *(undefined8 *)(puVar2 + -8);
        uVar12 = *(undefined8 *)(puVar2 + -0x20);
        uVar11 = *(undefined8 *)(puVar2 + -0x18);
        uVar14 = *(undefined8 *)(puVar2 + -0x30);
        uVar13 = *(undefined8 *)(puVar2 + -0x28);
        uVar7 = /*STR('RaceMusic_Context')*/ uRam0000000003d71930;
Core_Audio_AudioEvent__SetParameter:
        *(undefined8 *)(puVar2 + -0x40) = unaff_d9;
        *(undefined8 *)(puVar2 + -0x38) = unaff_d8;
        *(undefined8 *)(puVar2 + -0x30) = uVar14;
        *(undefined8 *)(puVar2 + -0x28) = uVar13;
        *(undefined8 *)(puVar2 + -0x20) = uVar12;
        *(undefined8 *)(puVar2 + -0x18) = uVar11;
        *(undefined8 *)(puVar2 + -0x10) = uVar16;
        *(undefined8 *)(puVar2 + -8) = uVar18;
        iVar4 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar8 + 0x28,0,0,0);
        if (iVar4 != 0) {
          /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34((float)iVar10,lVar8 + 0x28,uVar7,0,0);
        }
        return lVar8;
      }
      auVar19 = func_0x00f78af4();
      lVar6 = auVar19._0_8_;
      *(long *)(puVar2 + -0x60) = lVar5;
      *(undefined8 *)(puVar2 + -0x58) = 0x3eb4000;
      *(undefined1 (*) [16])(puVar2 + -0x50) = auVar20;
      *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x38) = &Atlas_Audio_MusicManager__SetParameter;
      lVar8 = lVar6;
      if ((bRam0000000003eb4a18 & 1) == 0) {
        lVar8 = func_0x00f78a20(0x3d69668);
        bRam0000000003eb4a18 = 1;
      }
      if (*(int *)(lVar6 + 0x30) == 1) {
        lVar8 = 0;
        if ((*(long *)(lVar6 + 0x10) != 0) &&
           (lVar8 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(lVar6 + 0x10),0), (int)lVar8 != 0)) {
          lVar8 = *(long *)(lVar6 + 0x10);
          if (lVar8 == 0) {
            lVar8 = func_0x00f78af4();
            *(undefined1 (*) [16])(puVar2 + -0x80) = auVar19;
            *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x40;
            *(undefined **)(puVar2 + -0x68) = &Atlas_Audio_MusicManager__SaveParameter;
            if ((bRam0000000003eb4a15 & 1) == 0) {
              func_0x00f78a20(0x3d71930);
              func_0x00f78a20(0x3d69668);
              bRam0000000003eb4a15 = 1;
            }
            lVar5 = 0;
            if (*(long *)(lVar8 + 0x10) != 0) {
              puVar1 = (undefined8 *)0x3d69668;
              if (*(int *)(lVar8 + 0x30) != 1) {
                puVar1 = (undefined8 *)0x3d71930;
              }
              lVar5 = /*Core.Audio.AudioEvent$$GetParameter*/ func_0x01639030(*(long *)(lVar8 + 0x10),*puVar1,0);
              *(undefined4 *)(lVar8 + 0x40) = extraout_s0;
            }
            return lVar5;
          }
          iVar10 = auVar19._8_4_;
          uVar16 = *(undefined8 *)(puVar2 + -0x40);
          uVar18 = *(undefined8 *)(puVar2 + -0x38);
          uVar12 = *(undefined8 *)(puVar2 + -0x50);
          uVar11 = *(undefined8 *)(puVar2 + -0x48);
          uVar14 = *(undefined8 *)(puVar2 + -0x60);
          uVar13 = *(undefined8 *)(puVar2 + -0x58);
          puVar2 = puVar2 + -0x30;
          uVar7 = /*STR('BattleMusic_Context')*/ uRam0000000003d69668;
          goto Core_Audio_AudioEvent__SetParameter;
        }
      }
      return lVar8;
    }
  }
  return lVar8;
}



// ============================================================
// RVA: 0x149d408 | Atlas.Audio.MusicManager.PlayBaseLayerMusic
// ============================================================

/* WARNING: Possible PIC construction at 0x0149d4ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0149d4b0) */

long Atlas_Audio_MusicManager__PlayBaseLayerMusic
               (long param_1,undefined4 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 unaff_x19;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uVar11;
  undefined8 unaff_x21;
  undefined8 uVar12;
  undefined8 unaff_x22;
  undefined8 uVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined8 unaff_x30;
  undefined *puVar16;
  undefined8 uVar17;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  while( true ) {
    auVar18._8_8_ = param_3;
    auVar18._0_8_ = param_4;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar14 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x24 = 0x3eb4000;
    unaff_x23 = 0x3d1ff30;
    if ((bRam0000000003eb4a13 & 1) == 0) {
      func_0x00f78a20(0x3d1ff30);
      bRam0000000003eb4a13 = 1;
    }
    Atlas_Audio_MusicManager__StopFrontendEvent(param_1);
    Atlas_Audio_MusicManager__StopAndDestroyBaseLayerEvent(param_1);
    *(undefined4 *)(param_1 + 0x30) = param_2;
    lVar4 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
    lVar7 = 0;
    /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(lVar4,param_3,0,0,0);
    *(long *)(param_1 + 0x10) = lVar4;
    if (lVar4 != 0) {
      /*Core.Audio.AudioEvent$$Play*/ func_0x01638af0(lVar4,0);
      uVar8 = 10;
      if ((int)param_4 == 0) {
        uVar8 = 1;
      }
      auVar19._8_4_ = uVar8;
      auVar19._0_8_ = param_1;
      auVar19._12_4_ = 0;
      puVar16 = (undefined *)0x149d4b0;
      lVar7 = param_1;
      goto code_r0x0149d550;
    }
    auVar18 = func_0x00f78af4();
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x68) = param_3;
    *(ulong *)((long)register0x00000008 + -0x60) = param_4;
    *(long *)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) = puVar14;
    *(undefined **)((long)register0x00000008 + -0x48) =
         &Atlas_Audio_MusicManager__PlayBaseLayerMusic;
    puVar14 = (undefined1 *)((long)register0x00000008 + -0x50);
    lVar4 = 0x3eb4000;
    if ((bRam0000000003eb4a11 & 1) == 0) {
      func_0x00f78a20(0x3d69658);
      bRam0000000003eb4a11 = 1;
    }
    if ((auVar18._8_8_ == 0) ||
       (param_2 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(auVar18._8_8_ + 0x30),/*STR('BattleGameContext')*/ uRam0000000003d69658,0),
       lVar7 == 0)) break;
    param_3 = *(undefined8 *)(lVar7 + 0x98);
    param_4 = (ulong)*(byte *)(lVar7 + 0xa0);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x68);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    param_1 = auVar18._0_8_;
  }
  puVar16 = &Atlas_Audio_MusicManager__SetParameter;
  auVar19 = func_0x00f78af4();
code_r0x0149d550:
  lVar5 = auVar19._0_8_;
  *(long *)(puVar2 + -0x30) = lVar4;
  *(long *)(puVar2 + -0x28) = auVar18._8_8_;
  *(long *)(puVar2 + -0x20) = auVar18._0_8_;
  *(long *)(puVar2 + -0x18) = lVar7;
  *(undefined1 **)(puVar2 + -0x10) = puVar14;
  *(undefined **)(puVar2 + -8) = puVar16;
  lVar7 = lVar5;
  if ((bRam0000000003eb4a17 & 1) == 0) {
    lVar7 = func_0x00f78a20(0x3d71930);
    bRam0000000003eb4a17 = 1;
  }
  if (((*(int *)(lVar5 + 0x30) != 0) || (lVar7 = 0, *(long *)(lVar5 + 0x10) == 0)) ||
     (lVar7 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(lVar5 + 0x10),0), (int)lVar7 == 0)) {
    return lVar7;
  }
  lVar7 = *(long *)(lVar5 + 0x10);
  if (lVar7 == 0) {
    auVar18 = func_0x00f78af4();
    lVar5 = auVar18._0_8_;
    *(long *)(puVar2 + -0x60) = lVar4;
    *(undefined8 *)(puVar2 + -0x58) = 0x3eb4000;
    *(undefined1 (*) [16])(puVar2 + -0x50) = auVar19;
    *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x38) = &Atlas_Audio_MusicManager__SetParameter;
    lVar7 = lVar5;
    if ((bRam0000000003eb4a18 & 1) == 0) {
      lVar7 = func_0x00f78a20(0x3d69668);
      bRam0000000003eb4a18 = 1;
    }
    if (((*(int *)(lVar5 + 0x30) != 1) || (lVar7 = 0, *(long *)(lVar5 + 0x10) == 0)) ||
       (lVar7 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(lVar5 + 0x10),0), (int)lVar7 == 0)) {
      return lVar7;
    }
    lVar7 = *(long *)(lVar5 + 0x10);
    if (lVar7 == 0) {
      lVar7 = func_0x00f78af4();
      *(undefined1 (*) [16])(puVar2 + -0x80) = auVar18;
      *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x40;
      *(undefined **)(puVar2 + -0x68) = &Atlas_Audio_MusicManager__SaveParameter;
      if ((bRam0000000003eb4a15 & 1) == 0) {
        func_0x00f78a20(0x3d71930);
        func_0x00f78a20(0x3d69668);
        bRam0000000003eb4a15 = 1;
      }
      lVar4 = 0;
      if (*(long *)(lVar7 + 0x10) != 0) {
        puVar1 = (undefined8 *)0x3d69668;
        if (*(int *)(lVar7 + 0x30) != 1) {
          puVar1 = (undefined8 *)0x3d71930;
        }
        lVar4 = /*Core.Audio.AudioEvent$$GetParameter*/ func_0x01639030(*(long *)(lVar7 + 0x10),*puVar1,0);
        *(undefined4 *)(lVar7 + 0x40) = extraout_s0;
      }
      return lVar4;
    }
    iVar9 = auVar18._8_4_;
    uVar15 = *(undefined8 *)(puVar2 + -0x40);
    uVar17 = *(undefined8 *)(puVar2 + -0x38);
    uVar11 = *(undefined8 *)(puVar2 + -0x50);
    uVar10 = *(undefined8 *)(puVar2 + -0x48);
    uVar13 = *(undefined8 *)(puVar2 + -0x60);
    uVar12 = *(undefined8 *)(puVar2 + -0x58);
    puVar2 = puVar2 + -0x30;
    uVar6 = /*STR('BattleMusic_Context')*/ uRam0000000003d69668;
  }
  else {
    iVar9 = auVar19._8_4_;
    uVar15 = *(undefined8 *)(puVar2 + -0x10);
    uVar17 = *(undefined8 *)(puVar2 + -8);
    uVar11 = *(undefined8 *)(puVar2 + -0x20);
    uVar10 = *(undefined8 *)(puVar2 + -0x18);
    uVar13 = *(undefined8 *)(puVar2 + -0x30);
    uVar12 = *(undefined8 *)(puVar2 + -0x28);
    uVar6 = /*STR('RaceMusic_Context')*/ uRam0000000003d71930;
  }
  *(undefined8 *)(puVar2 + -0x40) = unaff_d9;
  *(undefined8 *)(puVar2 + -0x38) = unaff_d8;
  *(undefined8 *)(puVar2 + -0x30) = uVar13;
  *(undefined8 *)(puVar2 + -0x28) = uVar12;
  *(undefined8 *)(puVar2 + -0x20) = uVar11;
  *(undefined8 *)(puVar2 + -0x18) = uVar10;
  *(undefined8 *)(puVar2 + -0x10) = uVar15;
  *(undefined8 *)(puVar2 + -8) = uVar17;
  iVar3 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar7 + 0x28,0,0,0);
  if (iVar3 != 0) {
    /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34((float)iVar9,lVar7 + 0x28,uVar6,0,0);
  }
  return lVar7;
}



// ============================================================
// RVA: 0x149d4d0 | Atlas.Audio.MusicManager.PlayBaseLayerMusic
// ============================================================

/* WARNING: Possible PIC construction at 0x0149d4ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0149d4b0) */

long Atlas_Audio_MusicManager__PlayBaseLayerMusic
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  long unaff_x19;
  undefined8 uVar10;
  ulong unaff_x20;
  undefined8 uVar11;
  undefined8 unaff_x21;
  undefined8 uVar12;
  undefined8 unaff_x22;
  long lVar13;
  undefined8 uVar14;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 uVar15;
  undefined *puVar16;
  code *unaff_x30;
  undefined8 uVar17;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = param_1;
  while( true ) {
    lVar7 = auVar18._0_8_;
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    lVar13 = 0x3eb4000;
    if ((bRam0000000003eb4a11 & 1) == 0) {
      func_0x00f78a20(0x3d69658);
      bRam0000000003eb4a11 = 1;
    }
    if ((auVar18._8_8_ == 0) ||
       (uVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(auVar18._8_8_ + 0x30),/*STR('BattleGameContext')*/ uRam0000000003d69658,0),
       param_3 == 0)) {
      puVar16 = &Atlas_Audio_MusicManager__SetParameter;
      auVar19 = func_0x00f78af4();
      goto code_r0x0149d550;
    }
    unaff_x21 = *(undefined8 *)(param_3 + 0x98);
    bVar2 = *(byte *)(param_3 + 0xa0);
    unaff_x20 = CONCAT71(0,bVar2);
    auVar18._8_8_ = unaff_x21;
    auVar18._0_8_ = unaff_x20;
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x24 = 0x3eb4000;
    unaff_x23 = 0x3d1ff30;
    if ((bRam0000000003eb4a13 & 1) == 0) {
      func_0x00f78a20(0x3d1ff30);
      bRam0000000003eb4a13 = 1;
    }
    Atlas_Audio_MusicManager__StopFrontendEvent(lVar7);
    Atlas_Audio_MusicManager__StopAndDestroyBaseLayerEvent(lVar7);
    *(undefined4 *)(lVar7 + 0x30) = uVar4;
    lVar13 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
    param_3 = 0;
    /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(lVar13,unaff_x21,0,0,0);
    *(long *)(lVar7 + 0x10) = lVar13;
    if (lVar13 != 0) break;
    unaff_x30 = Atlas_Audio_MusicManager__PlayBaseLayerMusic;
    auVar18 = func_0x00f78af4();
    unaff_x22 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    unaff_x19 = lVar7;
  }
  /*Core.Audio.AudioEvent$$Play*/ func_0x01638af0(lVar13,0);
  uVar4 = 10;
  if (bVar2 == 0) {
    uVar4 = 1;
  }
  auVar19._8_4_ = uVar4;
  auVar19._0_8_ = lVar7;
  auVar19._12_4_ = 0;
  puVar16 = (undefined *)0x149d4b0;
  param_3 = lVar7;
code_r0x0149d550:
  lVar6 = auVar19._0_8_;
  *(long *)(puVar3 + -0x30) = lVar13;
  *(long *)(puVar3 + -0x28) = auVar18._8_8_;
  *(long *)(puVar3 + -0x20) = auVar18._0_8_;
  *(long *)(puVar3 + -0x18) = param_3;
  *(undefined1 **)(puVar3 + -0x10) = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)(puVar3 + -8) = puVar16;
  lVar7 = lVar6;
  if ((bRam0000000003eb4a17 & 1) == 0) {
    lVar7 = func_0x00f78a20(0x3d71930);
    bRam0000000003eb4a17 = 1;
  }
  if (((*(int *)(lVar6 + 0x30) != 0) || (lVar7 = 0, *(long *)(lVar6 + 0x10) == 0)) ||
     (lVar7 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(lVar6 + 0x10),0), (int)lVar7 == 0)) {
    return lVar7;
  }
  lVar7 = *(long *)(lVar6 + 0x10);
  if (lVar7 == 0) {
    auVar18 = func_0x00f78af4();
    lVar7 = auVar18._0_8_;
    *(long *)(puVar3 + -0x60) = lVar13;
    *(undefined8 *)(puVar3 + -0x58) = 0x3eb4000;
    *(undefined1 (*) [16])(puVar3 + -0x50) = auVar19;
    *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x38) = &Atlas_Audio_MusicManager__SetParameter;
    lVar13 = lVar7;
    if ((bRam0000000003eb4a18 & 1) == 0) {
      lVar13 = func_0x00f78a20(0x3d69668);
      bRam0000000003eb4a18 = 1;
    }
    if (((*(int *)(lVar7 + 0x30) != 1) || (lVar13 = 0, *(long *)(lVar7 + 0x10) == 0)) ||
       (lVar13 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(lVar7 + 0x10),0), (int)lVar13 == 0)) {
      return lVar13;
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if (lVar7 == 0) {
      lVar13 = func_0x00f78af4();
      *(undefined1 (*) [16])(puVar3 + -0x80) = auVar18;
      *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x40;
      *(undefined **)(puVar3 + -0x68) = &Atlas_Audio_MusicManager__SaveParameter;
      if ((bRam0000000003eb4a15 & 1) == 0) {
        func_0x00f78a20(0x3d71930);
        func_0x00f78a20(0x3d69668);
        bRam0000000003eb4a15 = 1;
      }
      lVar7 = 0;
      if (*(long *)(lVar13 + 0x10) != 0) {
        puVar1 = (undefined8 *)0x3d69668;
        if (*(int *)(lVar13 + 0x30) != 1) {
          puVar1 = (undefined8 *)0x3d71930;
        }
        lVar7 = /*Core.Audio.AudioEvent$$GetParameter*/ func_0x01639030(*(long *)(lVar13 + 0x10),*puVar1,0);
        *(undefined4 *)(lVar13 + 0x40) = extraout_s0;
      }
      return lVar7;
    }
    iVar9 = auVar18._8_4_;
    uVar15 = *(undefined8 *)(puVar3 + -0x40);
    uVar17 = *(undefined8 *)(puVar3 + -0x38);
    uVar11 = *(undefined8 *)(puVar3 + -0x50);
    uVar10 = *(undefined8 *)(puVar3 + -0x48);
    uVar14 = *(undefined8 *)(puVar3 + -0x60);
    uVar12 = *(undefined8 *)(puVar3 + -0x58);
    puVar3 = puVar3 + -0x30;
    uVar8 = /*STR('BattleMusic_Context')*/ uRam0000000003d69668;
  }
  else {
    iVar9 = auVar19._8_4_;
    uVar15 = *(undefined8 *)(puVar3 + -0x10);
    uVar17 = *(undefined8 *)(puVar3 + -8);
    uVar11 = *(undefined8 *)(puVar3 + -0x20);
    uVar10 = *(undefined8 *)(puVar3 + -0x18);
    uVar14 = *(undefined8 *)(puVar3 + -0x30);
    uVar12 = *(undefined8 *)(puVar3 + -0x28);
    uVar8 = /*STR('RaceMusic_Context')*/ uRam0000000003d71930;
  }
  *(undefined8 *)(puVar3 + -0x40) = unaff_d9;
  *(undefined8 *)(puVar3 + -0x38) = unaff_d8;
  *(undefined8 *)(puVar3 + -0x30) = uVar14;
  *(undefined8 *)(puVar3 + -0x28) = uVar12;
  *(undefined8 *)(puVar3 + -0x20) = uVar11;
  *(undefined8 *)(puVar3 + -0x18) = uVar10;
  *(undefined8 *)(puVar3 + -0x10) = uVar15;
  *(undefined8 *)(puVar3 + -8) = uVar17;
  iVar5 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar7 + 0x28,0,0,0);
  if (iVar5 != 0) {
    /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34((float)iVar9,lVar7 + 0x28,uVar8,0,0);
  }
  return lVar7;
}



// ============================================================
// RVA: 0x149d550 | Atlas.Audio.MusicManager.SetParameter
// ============================================================

long Atlas_Audio_MusicManager__SetParameter(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar7;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar8 [12];
  undefined *puStack_38;
  
  puVar7 = &stack0xfffffffffffffff0;
  lVar3 = param_1;
  if ((bRam0000000003eb4a17 & 1) == 0) {
    lVar3 = func_0x00f78a20(0x3d71930);
    bRam0000000003eb4a17 = 1;
  }
  if (((*(int *)(param_1 + 0x30) != 0) || (lVar3 = 0, *(long *)(param_1 + 0x10) == 0)) ||
     (lVar3 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(param_1 + 0x10),0), (int)lVar3 == 0)) {
    return lVar3;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    auVar8 = func_0x00f78af4();
    iVar6 = auVar8._8_4_;
    lVar4 = auVar8._0_8_;
    puStack_38 = &Atlas_Audio_MusicManager__SetParameter;
    lVar3 = lVar4;
    if ((bRam0000000003eb4a18 & 1) == 0) {
      lVar3 = func_0x00f78a20(0x3d69668);
      bRam0000000003eb4a18 = 1;
    }
    if (((*(int *)(lVar4 + 0x30) != 1) || (lVar3 = 0, *(long *)(lVar4 + 0x10) == 0)) ||
       (lVar3 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(lVar4 + 0x10),0), (int)lVar3 == 0)) {
      return lVar3;
    }
    lVar3 = *(long *)(lVar4 + 0x10);
    if (lVar3 == 0) {
      lVar3 = func_0x00f78af4();
      if ((bRam0000000003eb4a15 & 1) == 0) {
        func_0x00f78a20(0x3d71930);
        func_0x00f78a20(0x3d69668);
        bRam0000000003eb4a15 = 1;
      }
      lVar4 = 0;
      if (*(long *)(lVar3 + 0x10) != 0) {
        puVar1 = (undefined8 *)0x3d69668;
        if (*(int *)(lVar3 + 0x30) != 1) {
          puVar1 = (undefined8 *)0x3d71930;
        }
        lVar4 = /*Core.Audio.AudioEvent$$GetParameter*/ func_0x01639030(*(long *)(lVar3 + 0x10),*puVar1,0);
        *(undefined4 *)(lVar3 + 0x40) = extraout_s0;
      }
      return lVar4;
    }
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x21 = 0x3eb4000;
    uVar5 = /*STR('BattleMusic_Context')*/ uRam0000000003d69668;
    unaff_x30 = puStack_38;
  }
  else {
    iVar6 = (int)param_2;
    uVar5 = /*STR('RaceMusic_Context')*/ uRam0000000003d71930;
    param_2 = unaff_x19;
    param_1 = unaff_x20;
    puVar7 = unaff_x29;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = param_1;
  *(undefined8 *)((long)register0x00000008 + -0x18) = param_2;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar7;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar3 + 0x28,0,0,0);
  if (iVar2 != 0) {
    /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34((float)iVar6,lVar3 + 0x28,uVar5,0,0);
  }
  return lVar3;
}



// ============================================================
// RVA: 0x149d5e8 | Atlas.Audio.MusicManager.SetParameter
// ============================================================

long Atlas_Audio_MusicManager__SetParameter(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 extraout_s0;
  
  lVar4 = param_1;
  if ((bRam0000000003eb4a18 & 1) == 0) {
    lVar4 = func_0x00f78a20(0x3d69668);
    bRam0000000003eb4a18 = 1;
  }
  if (((*(int *)(param_1 + 0x30) == 1) && (lVar4 = 0, *(long *)(param_1 + 0x10) != 0)) &&
     (lVar4 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(param_1 + 0x10),0), uVar2 = /*STR('BattleMusic_Context')*/ uRam0000000003d69668,
     (int)lVar4 != 0)) {
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 != 0) {
      iVar3 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar4 + 0x28,0,0,0);
      if (iVar3 != 0) {
        /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34((float)param_2,lVar4 + 0x28,uVar2,0,0);
      }
      return lVar4;
    }
    lVar4 = func_0x00f78af4();
    if ((bRam0000000003eb4a15 & 1) == 0) {
      func_0x00f78a20(0x3d71930);
      func_0x00f78a20(0x3d69668);
      bRam0000000003eb4a15 = 1;
    }
    lVar5 = 0;
    if (*(long *)(lVar4 + 0x10) != 0) {
      puVar1 = (undefined8 *)0x3d69668;
      if (*(int *)(lVar4 + 0x30) != 1) {
        puVar1 = (undefined8 *)0x3d71930;
      }
      lVar5 = /*Core.Audio.AudioEvent$$GetParameter*/ func_0x01639030(*(long *)(lVar4 + 0x10),*puVar1,0);
      *(undefined4 *)(lVar4 + 0x40) = extraout_s0;
    }
    return lVar5;
  }
  return lVar4;
}



// ============================================================
// RVA: 0x149d684 | Atlas.Audio.MusicManager.SaveParameter
// ============================================================

void Atlas_Audio_MusicManager__SaveParameter(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  if ((bRam0000000003eb4a15 & 1) == 0) {
    func_0x00f78a20(0x3d71930);
    func_0x00f78a20(0x3d69668);
    bRam0000000003eb4a15 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar1 = (undefined8 *)0x3d69668;
    if (*(int *)(param_1 + 0x30) != 1) {
      puVar1 = (undefined8 *)0x3d71930;
    }
    uVar2 = /*Core.Audio.AudioEvent$$GetParameter*/ func_0x01639030(*(long *)(param_1 + 0x10),*puVar1,0);
    *(undefined4 *)(param_1 + 0x40) = uVar2;
  }
  return;
}



// ============================================================
// RVA: 0x149d700 | Atlas.Audio.MusicManager.RestoreParam
// ============================================================

long Atlas_Audio_MusicManager__RestoreParam(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if ((bRam0000000003eb4a16 & 1) == 0) {
    func_0x00f78a20(0x3d71930);
    func_0x00f78a20(0x3d69668);
    bRam0000000003eb4a16 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x40);
    puVar1 = (undefined8 *)0x3d69668;
    if (*(int *)(param_1 + 0x30) != 1) {
      puVar1 = (undefined8 *)0x3d71930;
    }
    uVar4 = *puVar1;
    iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar3 + 0x28,0,0,0);
    if (iVar2 != 0) {
      /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(uVar5,lVar3 + 0x28,uVar4,0,0);
    }
    return lVar3;
  }
  return 0;
}



// ============================================================
// RVA: 0x149d788 | Atlas.Audio.MusicManager.SetFTUEPause
// ============================================================

long Atlas_Audio_MusicManager__SetFTUEPause(long param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 extraout_s0;
  
  if (param_2 == 0) {
    if ((bRam0000000003eb4a16 & 1) == 0) {
      func_0x00f78a20(0x3d71930);
      func_0x00f78a20(0x3d69668);
      bRam0000000003eb4a16 = 1;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
      return 0;
    }
    uVar6 = *(undefined4 *)(param_1 + 0x40);
    puVar1 = (undefined8 *)0x3d69668;
    if (*(int *)(param_1 + 0x30) != 1) {
      puVar1 = (undefined8 *)0x3d71930;
    }
    uVar5 = *puVar1;
  }
  else {
    Atlas_Audio_MusicManager__SaveParameter(param_1);
    Atlas_Audio_MusicManager__SetParameter(param_1,9);
    lVar3 = param_1;
    if ((bRam0000000003eb4a18 & 1) == 0) {
      lVar3 = func_0x00f78a20(0x3d69668);
      bRam0000000003eb4a18 = 1;
    }
    if (((*(int *)(param_1 + 0x30) != 1) || (lVar3 = 0, *(long *)(param_1 + 0x10) == 0)) ||
       (lVar3 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(param_1 + 0x10),0), (int)lVar3 == 0)) {
      return lVar3;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
      lVar3 = func_0x00f78af4();
      if ((bRam0000000003eb4a15 & 1) == 0) {
        func_0x00f78a20(0x3d71930);
        func_0x00f78a20(0x3d69668);
        bRam0000000003eb4a15 = 1;
      }
      lVar4 = 0;
      if (*(long *)(lVar3 + 0x10) != 0) {
        puVar1 = (undefined8 *)0x3d69668;
        if (*(int *)(lVar3 + 0x30) != 1) {
          puVar1 = (undefined8 *)0x3d71930;
        }
        lVar4 = /*Core.Audio.AudioEvent$$GetParameter*/ func_0x01639030(*(long *)(lVar3 + 0x10),*puVar1,0);
        *(undefined4 *)(lVar3 + 0x40) = extraout_s0;
      }
      return lVar4;
    }
    uVar6 = 0x40e00000;
    uVar5 = /*STR('BattleMusic_Context')*/ uRam0000000003d69668;
  }
  iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar3 + 0x28,0,0,0);
  if (iVar2 != 0) {
    /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(uVar6,lVar3 + 0x28,uVar5,0,0);
  }
  return lVar3;
}



// ============================================================
// RVA: 0x149d7d4 | Atlas.Audio.MusicManager..ctor
// ============================================================

void Atlas_Audio_MusicManager___ctor(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 2;
  return;
}



// ============================================================
// RVA: 0x149d7e4 | Atlas.Audio.MusicManager..cctor
// ============================================================

void Atlas_Audio_MusicManager___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4a19 & 1) == 0) {
    func_0x00f78a20(0x3d1f838);
    func_0x00f78a20(0x3d23600);
    func_0x00f78a20(0x3d653d8);
    bRam0000000003eb4a19 = 1;
  }
  uVar1 = func_0x00f78a34(/*Atlas.Audio.MusicManager.FrontEndMusicType[]_TypeInfo*/ uRam0000000003d1f838,4);
  /*System.Runtime.CompilerServices.RuntimeHelpers$$InitializeArray*/ func_0x02995384(uVar1,/*Field$<PrivateImplementationDetails>.0EDB951A90ED696D0B29CCA3F3323A2D22265B9EB74D5E14B56CA2FEF70AD73F*/ uRam0000000003d653d8,0);
  **(undefined8 **)(/*Atlas.Audio.MusicManager_TypeInfo*/ lRam0000000003d23600 + 0xb8) = uVar1;
  return;
}



