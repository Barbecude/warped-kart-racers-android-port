// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.ApplicationBehaviour

// ============================================================
// RVA: 0x1449f30 | Atlas.ApplicationBehaviour.get_IsRebooting
// ============================================================

undefined1 Atlas_ApplicationBehaviour__get_IsRebooting(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1c9);
}



// ============================================================
// RVA: 0x1449f38 | Atlas.ApplicationBehaviour.get_IsInitialised
// ============================================================

undefined1 Atlas_ApplicationBehaviour__get_IsInitialised(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x1449f40 | Atlas.ApplicationBehaviour.Start
// ============================================================

long Atlas_ApplicationBehaviour__Start(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000003eb4736 & 1) == 0) {
    func_0x00f78a20(0x3d26878);
    bRam0000000003eb4736 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.ApplicationBehaviour.<Start>d__66_TypeInfo*/ uRam0000000003d26878);
  /*Atlas.ApplicationBehaviour.<Start>d__66$$.ctor*/ func_0x015331ac(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    return lVar1;
  }
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4737 & 1) == 0) {
    func_0x00f78a20(0x3d26858);
    bRam0000000003eb4737 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.ApplicationBehaviour.<Init>d__67_TypeInfo*/ uRam0000000003d26858);
  /*Atlas.ApplicationBehaviour.<Init>d__67$$.ctor*/ func_0x01532124(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  lVar3 = /*Atlas.AtlasBuildInfo$$get_Current*/ func_0x014466cc(0);
  *(long *)(lVar1 + 0x18) = lVar3;
  return lVar3;
}



// ============================================================
// RVA: 0x1449fb4 | Atlas.ApplicationBehaviour.Init
// ============================================================

long Atlas_ApplicationBehaviour__Init(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if ((bRam0000000003eb4737 & 1) == 0) {
    func_0x00f78a20(0x3d26858);
    bRam0000000003eb4737 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.ApplicationBehaviour.<Init>d__67_TypeInfo*/ uRam0000000003d26858);
  /*Atlas.ApplicationBehaviour.<Init>d__67$$.ctor*/ func_0x01532124(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  lVar2 = /*Atlas.AtlasBuildInfo$$get_Current*/ func_0x014466cc(0);
  *(long *)(lVar1 + 0x18) = lVar2;
  return lVar2;
}



// ============================================================
// RVA: 0x144a028 | Atlas.ApplicationBehaviour.InitialiseBuildInfo
// ============================================================

void Atlas_ApplicationBehaviour__InitialiseBuildInfo(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = /*Atlas.AtlasBuildInfo$$get_Current*/ func_0x014466cc(0);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



// ============================================================
// RVA: 0x144a050 | Atlas.ApplicationBehaviour.CreateAndRegisterDependencies
// ============================================================

long Atlas_ApplicationBehaviour__CreateAndRegisterDependencies(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000003eb4738 & 1) == 0) {
    func_0x00f78a20(0x3d54ee8);
    func_0x00f78a20(0x3d54ef0);
    func_0x00f78a20(0x3d54ef8);
    func_0x00f78a20(0x3d54f00);
    func_0x00f78a20(0x3d54f08);
    func_0x00f78a20(0x3d54f10);
    func_0x00f78a20(0x3d54f18);
    func_0x00f78a20(0x3d54f20);
    func_0x00f78a20(0x3d54f28);
    func_0x00f78a20(0x3d54f30);
    func_0x00f78a20(0x3d54f38);
    func_0x00f78a20(0x3d54f40);
    func_0x00f78a20(0x3d54f48);
    func_0x00f78a20(0x3d54f58);
    func_0x00f78a20(0x3d54f50);
    func_0x00f78a20(0x3d54f60);
    func_0x00f78a20(0x3d54f68);
    func_0x00f78a20(0x3d54f70);
    func_0x00f78a20(0x3d54f78);
    func_0x00f78a20(0x3d54f80);
    func_0x00f78a20(0x3d54f88);
    func_0x00f78a20(0x3d54f90);
    func_0x00f78a20(0x3d54f98);
    func_0x00f78a20(0x3d54fa0);
    func_0x00f78a20(0x3d54fa8);
    func_0x00f78a20(0x3d54fb0);
    func_0x00f78a20(0x3d54fb8);
    func_0x00f78a20(0x3d54fc0);
    func_0x00f78a20(0x3d54fc8);
    func_0x00f78a20(0x3d54fd0);
    func_0x00f78a20(0x3d54fe0);
    func_0x00f78a20(0x3d54fd8);
    func_0x00f78a20(0x3d54fe8);
    func_0x00f78a20(0x3d54ff0);
    func_0x00f78a20(0x3d54ff8);
    func_0x00f78a20(0x3d55000);
    func_0x00f78a20(0x3d55008);
    func_0x00f78a20(0x3d55010);
    func_0x00f78a20(0x3d55018);
    func_0x00f78a20(0x3d55020);
    func_0x00f78a20(0x3d55028);
    func_0x00f78a20(0x3d55030);
    func_0x00f78a20(0x3d55038);
    func_0x00f78a20(0x3d55040);
    func_0x00f78a20(0x3d55048);
    func_0x00f78a20(0x3d55050);
    func_0x00f78a20(0x3d55058);
    func_0x00f78a20(0x3d55060);
    func_0x00f78a20(0x3d212b8);
    bRam0000000003eb4738 = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.Application.DependencyManager_TypeInfo*/ uRam0000000003d212b8);
  /*Core.Application.DependencyManager$$.ctor*/ func_0x01633db0(lVar1,0);
  *(long *)(param_1 + 0x28) = lVar1;
  if (lVar1 != 0) {
    uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(lVar1,uRam0000000003d55020);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),uRam0000000003d54f38);
      *(undefined8 *)(param_1 + 0x50) = uVar2;
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),uRam0000000003d55010);
        *(undefined8 *)(param_1 + 0x58) = uVar2;
        if (*(long *)(param_1 + 0x28) != 0) {
          uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),uRam0000000003d54ee8);
          *(undefined8 *)(param_1 + 0x60) = uVar2;
          if (*(long *)(param_1 + 0x28) != 0) {
            uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),uRam0000000003d54f68);
            *(undefined8 *)(param_1 + 0x68) = uVar2;
            if (*(long *)(param_1 + 0x28) != 0) {
              uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),uRam0000000003d54f60);
              *(undefined8 *)(param_1 + 0x70) = uVar2;
              if (*(long *)(param_1 + 0x28) != 0) {
                uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),uRam0000000003d54f28);
                *(undefined8 *)(param_1 + 0x78) = uVar2;
                if (*(long *)(param_1 + 0x28) != 0) {
                  uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),uRam0000000003d54f18);
                  *(undefined8 *)(param_1 + 0x80) = uVar2;
                  if (*(long *)(param_1 + 0x28) != 0) {
                    uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),uRam0000000003d54f48);
                    *(undefined8 *)(param_1 + 0x90) = uVar2;
                    if (*(long *)(param_1 + 0x28) != 0) {
                      uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),uRam0000000003d55008);
                      *(undefined8 *)(param_1 + 0x98) = uVar2;
                      if (*(long *)(param_1 + 0x28) != 0) {
                        uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),uRam0000000003d54f10);
                        *(undefined8 *)(param_1 + 0xa0) = uVar2;
                        if (*(long *)(param_1 + 0x28) != 0) {
                          uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),uRam0000000003d54f50);
                          *(undefined8 *)(param_1 + 0xa8) = uVar2;
                          if (*(long *)(param_1 + 0x28) != 0) {
                            uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),uRam0000000003d54ef8);
                            *(undefined8 *)(param_1 + 0x88) = uVar2;
                            if (*(long *)(param_1 + 0x28) != 0) {
                              uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),uRam0000000003d54f40
                                                     );
                              *(undefined8 *)(param_1 + 0xd8) = uVar2;
                              if (*(long *)(param_1 + 0x28) != 0) {
                                uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),
                                                        uRam0000000003d55040);
                                *(undefined8 *)(param_1 + 0xe8) = uVar2;
                                if (*(long *)(param_1 + 0x28) != 0) {
                                  uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),
                                                          uRam0000000003d54f78);
                                  *(undefined8 *)(param_1 + 0xf0) = uVar2;
                                  if (*(long *)(param_1 + 0x28) != 0) {
                                    uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),
                                                            uRam0000000003d55038);
                                    *(undefined8 *)(param_1 + 0xf8) = uVar2;
                                    if (*(long *)(param_1 + 0x28) != 0) {
                                      uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),
                                                              uRam0000000003d54f58);
                                      *(undefined8 *)(param_1 + 0x100) = uVar2;
                                      if (*(long *)(param_1 + 0x28) != 0) {
                                        uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),
                                                                uRam0000000003d54ff0);
                                        *(undefined8 *)(param_1 + 0xe0) = uVar2;
                                        if (*(long *)(param_1 + 0x28) != 0) {
                                          uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),
                                                                  uRam0000000003d54ff8);
                                          *(undefined8 *)(param_1 + 0xb0) = uVar2;
                                          if (*(long *)(param_1 + 0x28) != 0) {
                                            uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),
                                                                    uRam0000000003d54f20);
                                            *(undefined8 *)(param_1 + 0xb8) = uVar2;
                                            if (*(long *)(param_1 + 0x28) != 0) {
                                              uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),
                                                                      uRam0000000003d54f90);
                                              *(undefined8 *)(param_1 + 0x128) = uVar2;
                                              if (*(long *)(param_1 + 0x28) != 0) {
                                                uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),
                                                                        uRam0000000003d54fd8);
                                                *(undefined8 *)(param_1 + 0x108) = uVar2;
                                                if (*(long *)(param_1 + 0x28) != 0) {
                                                  uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28),
                                                                          uRam0000000003d54fe0);
                                                  *(undefined8 *)(param_1 + 0x110) = uVar2;
                                                  if (*(long *)(param_1 + 0x28) != 0) {
                                                    uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28
                                                                                     ),
                                                                            uRam0000000003d54fb8);
                                                    *(undefined8 *)(param_1 + 0x118) = uVar2;
                                                    if (*(long *)(param_1 + 0x28) != 0) {
                                                      uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 +
                                                                                       0x28),
                                                                              uRam0000000003d54f88);
                                                      *(undefined8 *)(param_1 + 0x120) = uVar2;
                                                      if (*(long *)(param_1 + 0x28) != 0) {
                                                        uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 +
                                                                                         0x28),
                                                                                uRam0000000003d54ef0
                                                                               );
                                                        *(undefined8 *)(param_1 + 0xc0) = uVar2;
                                                        if (*(long *)(param_1 + 0x28) != 0) {
                                                          uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 
                                                  + 0x28),uRam0000000003d55000);
                                                  *(undefined8 *)(param_1 + 200) = uVar2;
                                                  if (*(long *)(param_1 + 0x28) != 0) {
                                                    uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28
                                                                                     ),
                                                                            uRam0000000003d55058);
                                                    *(undefined8 *)(param_1 + 0xd0) = uVar2;
                                                    if (*(long *)(param_1 + 0x28) != 0) {
                                                      uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 +
                                                                                       0x28),
                                                                              uRam0000000003d54f08);
                                                      *(undefined8 *)(param_1 + 0x130) = uVar2;
                                                      if (*(long *)(param_1 + 0x28) != 0) {
                                                        uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 +
                                                                                         0x28),
                                                                                uRam0000000003d54fd0
                                                                               );
                                                        *(undefined8 *)(param_1 + 0x138) = uVar2;
                                                        if (*(long *)(param_1 + 0x28) != 0) {
                                                          uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 
                                                  + 0x28),uRam0000000003d55048);
                                                  *(undefined8 *)(param_1 + 0x140) = uVar2;
                                                  if (*(long *)(param_1 + 0x28) != 0) {
                                                    uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28
                                                                                     ),
                                                                            uRam0000000003d55060);
                                                    *(undefined8 *)(param_1 + 0x148) = uVar2;
                                                    if (*(long *)(param_1 + 0x28) != 0) {
                                                      uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 +
                                                                                       0x28),
                                                                              uRam0000000003d54fb0);
                                                      *(undefined8 *)(param_1 + 0x150) = uVar2;
                                                      if (*(long *)(param_1 + 0x28) != 0) {
                                                        uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 +
                                                                                         0x28),
                                                                                uRam0000000003d55050
                                                                               );
                                                        *(undefined8 *)(param_1 + 0x158) = uVar2;
                                                        if (*(long *)(param_1 + 0x28) != 0) {
                                                          uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 
                                                  + 0x28),uRam0000000003d54f30);
                                                  *(undefined8 *)(param_1 + 0x160) = uVar2;
                                                  if (*(long *)(param_1 + 0x28) != 0) {
                                                    uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28
                                                                                     ),
                                                                            uRam0000000003d55030);
                                                    *(undefined8 *)(param_1 + 0x168) = uVar2;
                                                    if (*(long *)(param_1 + 0x28) != 0) {
                                                      uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 +
                                                                                       0x28),
                                                                              uRam0000000003d54fc8);
                                                      *(undefined8 *)(param_1 + 0x170) = uVar2;
                                                      if (*(long *)(param_1 + 0x28) != 0) {
                                                        uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 +
                                                                                         0x28),
                                                                                uRam0000000003d54fe8
                                                                               );
                                                        *(undefined8 *)(param_1 + 0x178) = uVar2;
                                                        if (*(long *)(param_1 + 0x28) != 0) {
                                                          uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 
                                                  + 0x28),uRam0000000003d54f80);
                                                  *(undefined8 *)(param_1 + 0x180) = uVar2;
                                                  if (*(long *)(param_1 + 0x28) != 0) {
                                                    uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28
                                                                                     ),
                                                                            uRam0000000003d54f70);
                                                    *(undefined8 *)(param_1 + 0x188) = uVar2;
                                                    if (*(long *)(param_1 + 0x28) != 0) {
                                                      uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 +
                                                                                       0x28),
                                                                              uRam0000000003d54fc0);
                                                      *(undefined8 *)(param_1 + 400) = uVar2;
                                                      if (*(long *)(param_1 + 0x28) != 0) {
                                                        uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 +
                                                                                         0x28),
                                                                                uRam0000000003d55018
                                                                               );
                                                        *(undefined8 *)(param_1 + 0x198) = uVar2;
                                                        if (*(long *)(param_1 + 0x28) != 0) {
                                                          uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 
                                                  + 0x28),uRam0000000003d54f00);
                                                  *(undefined8 *)(param_1 + 0x1a0) = uVar2;
                                                  if (*(long *)(param_1 + 0x28) != 0) {
                                                    uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 + 0x28
                                                                                     ),
                                                                            uRam0000000003d55028);
                                                    *(undefined8 *)(param_1 + 0x1a8) = uVar2;
                                                    if (*(long *)(param_1 + 0x28) != 0) {
                                                      uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 +
                                                                                       0x28),
                                                                              uRam0000000003d54f98);
                                                      *(undefined8 *)(param_1 + 0x1b0) = uVar2;
                                                      if (*(long *)(param_1 + 0x28) != 0) {
                                                        uVar2 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 +
                                                                                         0x28),
                                                                                uRam0000000003d54fa0
                                                                               );
                                                        *(undefined8 *)(param_1 + 0x1b8) = uVar2;
                                                        if (*(long *)(param_1 + 0x28) != 0) {
                                                          lVar1 = /*Core.Application.DependencyManager$$CreateAndAddDependency<VotingManager>*/ func_0x01842de4(*(long *)(param_1 
                                                  + 0x28),uRam0000000003d54fa8);
                                                  *(long *)(param_1 + 0x1c0) = lVar1;
                                                  return lVar1;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4739 & 1) == 0) {
    func_0x00f78a20(0x3d26860);
    bRam0000000003eb4739 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.ApplicationBehaviour.<InitSystems>d__70_TypeInfo*/ uRam0000000003d26860);
  /*Atlas.ApplicationBehaviour.<InitSystems>d__70$$.ctor*/ func_0x01532308(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    return lVar1;
  }
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003eb473a & 1) == 0) {
    func_0x00f78a20(0x3d26850);
    bRam0000000003eb473a = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.ApplicationBehaviour.<DeInit>d__71_TypeInfo*/ uRam0000000003d26850);
  /*Atlas.ApplicationBehaviour.<DeInit>d__71$$.ctor*/ func_0x01531c4c(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    return lVar1;
  }
  lVar3 = func_0x00f78af4();
  lVar1 = 0;
  if (*(long *)(lVar3 + 0x40) != 0) {
    lVar1 = /*Atlas.Debugging.LogHandler$$DeInit*/ func_0x0148aa80(*(long *)(lVar3 + 0x40),0);
  }
  *(undefined8 *)(lVar3 + 0x40) = 0;
  return lVar1;
}



// ============================================================
// RVA: 0x144a838 | Atlas.ApplicationBehaviour.InitSystems
// ============================================================

long Atlas_ApplicationBehaviour__InitSystems(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000003eb4739 & 1) == 0) {
    func_0x00f78a20(0x3d26860);
    bRam0000000003eb4739 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.ApplicationBehaviour.<InitSystems>d__70_TypeInfo*/ uRam0000000003d26860);
  /*Atlas.ApplicationBehaviour.<InitSystems>d__70$$.ctor*/ func_0x01532308(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    return lVar1;
  }
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003eb473a & 1) == 0) {
    func_0x00f78a20(0x3d26850);
    bRam0000000003eb473a = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.ApplicationBehaviour.<DeInit>d__71_TypeInfo*/ uRam0000000003d26850);
  /*Atlas.ApplicationBehaviour.<DeInit>d__71$$.ctor*/ func_0x01531c4c(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    return lVar1;
  }
  lVar3 = func_0x00f78af4();
  lVar1 = 0;
  if (*(long *)(lVar3 + 0x40) != 0) {
    lVar1 = /*Atlas.Debugging.LogHandler$$DeInit*/ func_0x0148aa80(*(long *)(lVar3 + 0x40),0);
  }
  *(undefined8 *)(lVar3 + 0x40) = 0;
  return lVar1;
}



// ============================================================
// RVA: 0x144a8ac | Atlas.ApplicationBehaviour.DeInit
// ============================================================

long Atlas_ApplicationBehaviour__DeInit(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if ((bRam0000000003eb473a & 1) == 0) {
    func_0x00f78a20(0x3d26850);
    bRam0000000003eb473a = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.ApplicationBehaviour.<DeInit>d__71_TypeInfo*/ uRam0000000003d26850);
  /*Atlas.ApplicationBehaviour.<DeInit>d__71$$.ctor*/ func_0x01531c4c(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    return lVar1;
  }
  lVar2 = func_0x00f78af4();
  lVar1 = 0;
  if (*(long *)(lVar2 + 0x40) != 0) {
    lVar1 = /*Atlas.Debugging.LogHandler$$DeInit*/ func_0x0148aa80(*(long *)(lVar2 + 0x40),0);
  }
  *(undefined8 *)(lVar2 + 0x40) = 0;
  return lVar1;
}



// ============================================================
// RVA: 0x144a920 | Atlas.ApplicationBehaviour.StopHandlingLogs
// ============================================================

void Atlas_ApplicationBehaviour__StopHandlingLogs(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    /*Atlas.Debugging.LogHandler$$DeInit*/ func_0x0148aa80(*(long *)(param_1 + 0x40),0);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// ============================================================
// RVA: 0x144a950 | Atlas.ApplicationBehaviour.StopLoggingToFile
// ============================================================

void Atlas_ApplicationBehaviour__StopLoggingToFile(void)

{
  return;
}



// ============================================================
// RVA: 0x144a954 | Atlas.ApplicationBehaviour.Update
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x144acf0 | Atlas.ApplicationBehaviour.LateUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x01649e38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01649e3c) */
/* WARNING: Removing unreachable block (ram,0x01649e54) */
/* WARNING: Removing unreachable block (ram,0x01649e44) */
/* WARNING: Removing unreachable block (ram,0x0149d5e8) */
/* WARNING: Removing unreachable block (ram,0x0149d60c) */
/* WARNING: Removing unreachable block (ram,0x0149d620) */
/* WARNING: Removing unreachable block (ram,0x0149d62c) */
/* WARNING: Removing unreachable block (ram,0x0149d634) */
/* WARNING: Removing unreachable block (ram,0x0149d670) */
/* WARNING: Removing unreachable block (ram,0x0149d640) */
/* WARNING: Removing unreachable block (ram,0x0149d680) */
/* WARNING: Removing unreachable block (ram,0x0149d6a0) */
/* WARNING: Removing unreachable block (ram,0x0149d6c0) */
/* WARNING: Removing unreachable block (ram,0x0149d6c8) */
/* WARNING: Removing unreachable block (ram,0x0149d6e0) */
/* WARNING: Removing unreachable block (ram,0x0149d6f4) */
/* WARNING: Removing unreachable block (ram,0x0149d648) */

long Atlas_ApplicationBehaviour__LateUpdate(long param_1)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  int extraout_w1;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x20;
  long *plVar15;
  undefined8 *unaff_x23;
  undefined1 *puVar16;
  undefined4 uVar17;
  undefined1 auVar18 [12];
  undefined1 auVar19 [16];
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    return param_1;
  }
  if (*(long *)(param_1 + 0xa8) == 0) {
LAB_0144adb0:
    lVar6 = func_0x00f78af4();
    if (*(char *)(lVar6 + 0x30) == '\0') {
      return lVar6;
    }
    if (*(long *)(lVar6 + 0xc0) != 0) {
      /*Core.Actors.ActorManager$$FixedUpdate*/ func_0x016307bc(*(long *)(lVar6 + 0xc0),*(undefined8 *)(lVar6 + 0x38),0);
      lVar8 = *(long *)(lVar6 + 0xa8);
      if (lVar8 != 0) {
        uVar10 = *(undefined8 *)(lVar6 + 0x38);
        if ((bRam0000000003eb56f5 & 1) == 0) {
          func_0x00f78a20(0x3d20a18,uVar10,0);
          func_0x00f78a20(0x3d22018);
          bRam0000000003eb56f5 = 1;
        }
        if (((*(ushort *)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar12 = *(undefined8 *)(*(long *)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0xb8) + 8);
        /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar12,0);
        if ((*(char *)(lVar8 + 0x51) != '\0') &&
           (plVar15 = *(long **)(lVar8 + 0x68), plVar15 != (long *)0x0)) {
          lVar6 = *plVar15;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == /*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018) {
                puVar9 = (undefined8 *)(lVar6 + (long)(*piVar14 + 6) * 0x10 + 0x138);
                goto code_r0x0163d6ac;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar15,/*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018,6);
code_r0x0163d6ac:
          (*(code *)*puVar9)(plVar15,uVar10,puVar9[1]);
        }
        if (pcRam0000000003ec05a0 == (code *)0x0) {
          pcRam0000000003ec05a0 =
               (code *)func_0x00f789d4(
                                      "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar6 = (*pcRam0000000003ec05a0)(uVar12);
        return lVar6;
      }
    }
    auVar18 = func_0x00f78af4();
    lVar8 = auVar18._0_8_;
    puVar16 = &stack0xffffffffffffffb0;
    lVar6 = lVar8;
    if (*(char *)(lVar8 + 0x30) != '\0') {
      if (*(long *)(lVar8 + 0x130) == 0) {
        auVar19 = func_0x00f78af4();
        uVar13 = auVar19._8_8_;
        lVar6 = auVar19._0_8_;
        if (*(char *)(lVar6 + 0x30) != '\0') {
          if (*(long *)(lVar6 + 0x1a0) != 0) {
            Atlas_Analytics_AtlasAnalyticsManager__OnApplicationPause
                      (*(long *)(lVar6 + 0x1a0),uVar13);
          }
          if (*(long *)(lVar6 + 0x58) != 0) {
            Atlas_Save_SaveManager__StartSaveIfDirty(*(long *)(lVar6 + 0x58),0);
          }
          lVar7 = *(long *)(lVar6 + 0xe0);
          auVar19._8_8_ = uVar13;
          auVar19._0_8_ = lVar7;
          auVar18 = auVar19._0_12_;
          lVar6 = 0;
          if (lVar7 != 0) {
            uVar11 = 0;
            pcVar2 = (code *)&Atlas_ApplicationBehaviour__OnApplicationPause;
            if (*(char *)(lVar7 + 0x48) != '\0') {
              return lVar7;
            }
            lVar6 = *(long *)(lVar7 + 0x30);
            if (lVar6 == 0) {
              unaff_x20 = func_0x00f78af4();
              plVar3 = &lStack_a0;
              puVar16 = &stack0xffffffffffffff70;
              lVar6 = 0;
              if ((*(char *)(unaff_x20 + 0x48) == '\0') && (*(char *)(unaff_x20 + 0x49) == '\0')) {
                return unaff_x20;
              }
              *(undefined4 *)(unaff_x20 + 0x4c) = 3;
              *(undefined2 *)(unaff_x20 + 0x48) = 0;
              uVar13 = uVar11;
              lStack_a0 = lVar7;
              plStack_98 = (long *)lVar8;
              if (*(long *)(unaff_x20 + 0x20) != 0) {
                uVar13 = 0;
                Atlas_UI_AtlasUIManager__ClearLayer(*(long *)(unaff_x20 + 0x20),8);
                lVar8 = *(long *)(unaff_x20 + 0x28);
                if (lVar8 != 0) {
                  if ((bRam0000000003eb4a16 & 1) == 0) {
                    func_0x00f78a20(0x3d71930,0,0);
                    func_0x00f78a20(0x3d69668);
                    bRam0000000003eb4a16 = 1;
                  }
                  lVar6 = *(long *)(lVar8 + 0x10);
                  if (lVar6 == 0) {
                    return 0;
                  }
                  uVar17 = *(undefined4 *)(lVar8 + 0x40);
                  puVar9 = (undefined8 *)0x3d69668;
                  if (*(int *)(lVar8 + 0x30) != 1) {
                    puVar9 = (undefined8 *)0x3d71930;
                  }
                  uVar10 = *puVar9;
                  iVar5 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar6 + 0x28,0,0,0);
                  if (iVar5 != 0) {
                    /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(uVar17,lVar6 + 0x28,uVar10,0,0);
                  }
                  return lVar6;
                }
              }
              pcVar2 = Atlas_Gameplay_PauseManager__SetSystemsPaused;
              auVar19 = func_0x00f78af4();
              auVar18 = auVar19._0_12_;
            }
            else {
              if (*(char *)(lVar6 + 0x50) == '\0') {
                return lVar7;
              }
              if (((uVar13 & 1) == 0) && (*(long *)(lVar6 + 0x20) != 0)) {
                /*Core.Networking.NetworkSession$$OnSinglePlayerApplicationUnpaused*/ func_0x0165fdf0(*(long *)(lVar6 + 0x20),0);
              }
              plVar3 = (long *)&stack0xffffffffffffffa0;
              lVar6 = lVar8;
            }
            *(long *)((long)plVar3 + -0x20) = unaff_x20;
            *(long *)((long)plVar3 + -0x18) = lVar6;
            *(undefined1 **)((long)plVar3 + -0x10) = puVar16;
            *(code **)((long)plVar3 + -8) = pcVar2;
            uVar17 = 0;
            if (auVar18._8_4_ == 0) {
              uVar17 = 0x3f800000;
            }
            lVar6 = /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(uVar17,0);
            lVar8 = *(long *)(auVar18._0_8_ + 0x30);
            if (lVar8 != 0) {
              lVar8 = *(long *)(lVar8 + 0x20);
              lVar6 = 0;
              if (lVar8 != 0) {
                *(undefined8 *)((long)plVar3 + -0x10) = *(undefined8 *)((long)plVar3 + -0x10);
                *(undefined8 *)((long)plVar3 + -8) = *(undefined8 *)((long)plVar3 + -8);
                *(char *)(lVar8 + 0x1b8) = (char)uVar13;
                lVar6 = /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c((undefined1 *)((long)plVar3 + -0x28),lVar8,uVar13,0);
                return lVar6;
              }
            }
            return lVar6;
          }
        }
        return lVar6;
      }
      uVar1 = auVar18._8_4_ ^ 1;
      lVar6 = /*Core.Audio.AudioManager$$MuteAllEvents*/ func_0x01639dd0(*(long *)(lVar8 + 0x130),uVar1,0);
      if ((uVar1 & 1) == 0) {
        lVar8 = *(long *)(lVar8 + 0x180);
        lVar6 = 0;
        if (lVar8 != 0) {
          if ((bRam0000000003eb579b & 1) == 0) {
            func_0x00f78a20(0x3d20a50,0);
            bRam0000000003eb579b = 1;
          }
          if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          /*Core.Input.ControllerRemappingsNative$$PollForUpdatedMappings*/ func_0x016476b4();
          if ((bRam0000000003eb579c & 1) == 0) {
            func_0x00f78a20(0x3d32668);
            func_0x00f78a20(0x3d32670);
            func_0x00f78a20(0x3d32678);
            func_0x00f78a20(0x3d22230);
            func_0x00f78a20(0x3d3a938);
            bRam0000000003eb579c = 1;
          }
          uStack_a8 = 0;
          lStack_a0 = 0;
          plStack_98 = (long *)0x0;
          if (*(long *)(lVar8 + 0x58) == 0) {
            func_0x00f78af4();
            if (extraout_w1 == 1) {
              plVar15 = (long *)___cxa_begin_catch();
              lVar8 = *plVar15;
              ___cxa_end_catch();
              lVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a8,*unaff_x23);
              if (lVar8 == 0) {
                return lVar6;
              }
              func_0x00f78ac0(lVar8,0);
            }
            lVar6 = __Unwind_Resume();
            if ((bRam0000000003eb5780 & 1) == 0) {
              func_0x00f78a20(0x3d2a458);
              func_0x00f78a20(0x3d2a450);
              func_0x00f78a20(0x3d1b638);
              func_0x00f78a20(0x3d1b630);
              func_0x00f78a20(0x3d20a50);
              func_0x00f78a20(0x3d589d0);
              func_0x00f78a20(0x3d589d8);
              func_0x00f78a20(0x3d589e0);
              func_0x00f78a20(0x3d22848);
              func_0x00f78a20(0x3d22878);
              func_0x00f78a20(0x3d26d78);
              bRam0000000003eb5780 = 1;
            }
            if (*(char *)(lVar6 + 0x28) != '\0') {
              uVar10 = func_0x00f78aec(/*System.Action<InputDevice, InputDeviceChange>_TypeInfo*/ uRam0000000003d1b630);
              /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar10,lVar6,uRam0000000003d589d8,uRam0000000003d2a450);
              if (((*(ushort *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*UnityEngine.InputSystem.InputSystem$$remove_onDeviceChange*/ func_0x03066548(uVar10,0);
              uVar4 = /*UnityEngine.InputSystem.InputSystem$$get_onEvent*/ func_0x03068030(0);
              uVar10 = func_0x00f78aec(/*System.Action<InputEventPtr, InputDevice>_TypeInfo*/ uRam0000000003d1b638);
              /*System.Action<InputEventPtr, object>$$.ctor*/ func_0x01e6bce0(uVar10,lVar6,uRam0000000003d589e0,uRam0000000003d2a458);
              uVar4 = /*UnityEngine.InputSystem.LowLevel.InputEventListener$$op_Subtraction*/ func_0x0304e1cc(uVar4,uVar10,0);
              /*UnityEngine.InputSystem.InputSystem$$set_onEvent*/ func_0x03068038(uVar4,0);
              *(undefined1 *)(lVar6 + 0x28) = 0;
            }
            lVar8 = func_0x00f78aec(/*Core.Input.ControllerRemappingsNative.OnControllerMappingsChanged_TypeInfo*/ uRam0000000003d26d78);
            puVar9 = puRam0000000003d589d0;
            *(undefined8 *)(lVar8 + 0x10) = *puRam0000000003d589d0;
            *(long *)(lVar8 + 0x20) = lVar6;
            *(undefined8 **)(lVar8 + 0x28) = puVar9;
            if (((*(byte *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*Core.Input.ControllerRemappingsNative$$remove_ControllerMappingsChanged*/ func_0x016474b4(lVar8);
            lVar6 = /*Core.Input.ControllerRemappingsNative$$DeInit*/ func_0x01647acc();
            **(undefined8 **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) = 0;
            return lVar6;
          }
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,*(long *)(lVar8 + 0x58),uRam0000000003d3a938);
          do {
            uVar13 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_a8,uRam0000000003d32670);
            plVar15 = plStack_98;
            if ((uVar13 & 1) == 0) {
              lVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a8,uRam0000000003d32668);
              return lVar6;
            }
            uVar17 = *(undefined4 *)(lVar8 + 0x18);
            uVar10 = /*Core.Input.InputManager$$TryGetGlyphMappingsForFamily*/ func_0x0164a548(lVar8,uVar17);
            if (plVar15 == (long *)0x0) {
              func_0x00f78af4();
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1649de8);
              (*pcVar2)();
            }
            lVar6 = *plVar15;
            uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == /*Core.Input.IInputFamilyChangeListener_TypeInfo*/ lRam0000000003d22230) {
                  puVar9 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                  goto code_r0x01649da0;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar15,/*Core.Input.IInputFamilyChangeListener_TypeInfo*/ lRam0000000003d22230,0);
code_r0x01649da0:
            (*(code *)*puVar9)(plVar15,uVar17,uVar10,puVar9[1]);
          } while( true );
        }
      }
    }
    return lVar6;
  }
  /*Core.Contexts.ContextManager$$PreLateUpdate*/ func_0x0163d368(*(long *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x38),0);
  if (*(long *)(param_1 + 0xc0) == 0) goto LAB_0144adb0;
  /*Core.Actors.ActorManager$$LateUpdate*/ func_0x016305f8(*(long *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x38),0);
  if ((*(long *)(param_1 + 0xa8) == 0) ||
     (/*Core.Contexts.ContextManager$$LateUpdate*/ func_0x0163d498(*(long *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x38),0),
     *(long *)(param_1 + 0x60) == 0)) goto LAB_0144adb0;
  Atlas_Stats_AchievementManager__SubmitAchievementProgress();
  if (*(long *)(param_1 + 0x108) == 0) goto LAB_0144adb0;
  /*Atlas.Networking.Network$$LateUpdate*/ func_0x0149e38c(*(long *)(param_1 + 0x108),0);
  if (*(long *)(param_1 + 0x48) == 0) goto LAB_0144adb0;
  /*Core.Services.ServicesManager$$LateUpdate*/ func_0x01685aa8(*(long *)(param_1 + 0x48),0);
  if ((*(long *)(param_1 + 0x38) == 0) || (*(long *)(param_1 + 0xd8) == 0)) goto LAB_0144adb0;
  Atlas_UI_AtlasUIManager__LateUpdate
            (*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x10),*(long *)(param_1 + 0xd8),0);
  lVar6 = *(long *)(param_1 + 0xe0);
  if (lVar6 == 0) goto LAB_0144adb0;
  if (*(char *)(lVar6 + 0x50) == '\0') {
    return lVar6;
  }
  iVar5 = *(int *)(lVar6 + 0x4c);
  if (iVar5 == 3) {
    uVar10 = 0;
LAB_014b6d08:
    uVar12 = 0;
  }
  else {
    if (iVar5 != 2) {
      lVar8 = lVar6;
      if (iVar5 != 1) goto LAB_014b6d20;
      uVar10 = 1;
      goto LAB_014b6d08;
    }
    uVar10 = 1;
    uVar12 = 1;
  }
  lVar8 = Atlas_Gameplay_PauseManager__SetSystemsPaused(lVar6,uVar10,uVar12);
LAB_014b6d20:
  *(undefined4 *)(lVar6 + 0x4c) = 0;
  return lVar8;
}



// ============================================================
// RVA: 0x144adb4 | Atlas.ApplicationBehaviour.FixedUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x01649e38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01649e3c) */
/* WARNING: Removing unreachable block (ram,0x01649e54) */
/* WARNING: Removing unreachable block (ram,0x01649e44) */
/* WARNING: Removing unreachable block (ram,0x0149d5e8) */
/* WARNING: Removing unreachable block (ram,0x0149d60c) */
/* WARNING: Removing unreachable block (ram,0x0149d620) */
/* WARNING: Removing unreachable block (ram,0x0149d62c) */
/* WARNING: Removing unreachable block (ram,0x0149d634) */
/* WARNING: Removing unreachable block (ram,0x0149d670) */
/* WARNING: Removing unreachable block (ram,0x0149d640) */
/* WARNING: Removing unreachable block (ram,0x0149d680) */
/* WARNING: Removing unreachable block (ram,0x0149d6a0) */
/* WARNING: Removing unreachable block (ram,0x0149d6c0) */
/* WARNING: Removing unreachable block (ram,0x0149d6c8) */
/* WARNING: Removing unreachable block (ram,0x0149d6e0) */
/* WARNING: Removing unreachable block (ram,0x0149d6f4) */
/* WARNING: Removing unreachable block (ram,0x0149d648) */

long Atlas_ApplicationBehaviour__FixedUpdate(long param_1)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  int extraout_w1;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x20;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *unaff_x23;
  undefined1 *puVar16;
  undefined4 uVar17;
  undefined1 auVar18 [12];
  undefined1 auVar19 [16];
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    return param_1;
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    /*Core.Actors.ActorManager$$FixedUpdate*/ func_0x016307bc(*(long *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x38),0);
    lVar6 = *(long *)(param_1 + 0xa8);
    if (lVar6 != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x38);
      if ((bRam0000000003eb56f5 & 1) == 0) {
        func_0x00f78a20(0x3d20a18,uVar10,0);
        func_0x00f78a20(0x3d22018);
        bRam0000000003eb56f5 = 1;
      }
      if (((*(ushort *)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar14 = *(undefined8 *)(*(long *)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0xb8) + 8);
      /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar14,0);
      if ((*(char *)(lVar6 + 0x51) != '\0') &&
         (plVar15 = *(long **)(lVar6 + 0x68), plVar15 != (long *)0x0)) {
        lVar6 = *plVar15;
        uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018) {
              puVar9 = (undefined8 *)(lVar6 + (long)(*piVar13 + 6) * 0x10 + 0x138);
              goto code_r0x0163d6ac;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar15,/*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018,6);
code_r0x0163d6ac:
        (*(code *)*puVar9)(plVar15,uVar10,puVar9[1]);
      }
      if (pcRam0000000003ec05a0 == (code *)0x0) {
        pcRam0000000003ec05a0 =
             (code *)func_0x00f789d4(
                                    "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar6 = (*pcRam0000000003ec05a0)(uVar14);
      return lVar6;
    }
  }
  auVar18 = func_0x00f78af4();
  lVar7 = auVar18._0_8_;
  puVar16 = &stack0xffffffffffffffd0;
  lVar6 = lVar7;
  if (*(char *)(lVar7 + 0x30) != '\0') {
    if (*(long *)(lVar7 + 0x130) == 0) {
      auVar19 = func_0x00f78af4();
      uVar12 = auVar19._8_8_;
      lVar6 = auVar19._0_8_;
      if (*(char *)(lVar6 + 0x30) != '\0') {
        if (*(long *)(lVar6 + 0x1a0) != 0) {
          Atlas_Analytics_AtlasAnalyticsManager__OnApplicationPause(*(long *)(lVar6 + 0x1a0),uVar12)
          ;
        }
        if (*(long *)(lVar6 + 0x58) != 0) {
          Atlas_Save_SaveManager__StartSaveIfDirty(*(long *)(lVar6 + 0x58),0);
        }
        lVar8 = *(long *)(lVar6 + 0xe0);
        auVar19._8_8_ = uVar12;
        auVar19._0_8_ = lVar8;
        auVar18 = auVar19._0_12_;
        lVar6 = 0;
        if (lVar8 != 0) {
          uVar11 = 0;
          pcVar2 = (code *)&Atlas_ApplicationBehaviour__OnApplicationPause;
          if (*(char *)(lVar8 + 0x48) != '\0') {
            return lVar8;
          }
          lVar6 = *(long *)(lVar8 + 0x30);
          if (lVar6 == 0) {
            unaff_x20 = func_0x00f78af4();
            plVar3 = &lStack_80;
            puVar16 = &stack0xffffffffffffff90;
            lVar6 = 0;
            if ((*(char *)(unaff_x20 + 0x48) == '\0') && (*(char *)(unaff_x20 + 0x49) == '\0')) {
              return unaff_x20;
            }
            *(undefined4 *)(unaff_x20 + 0x4c) = 3;
            *(undefined2 *)(unaff_x20 + 0x48) = 0;
            uVar12 = uVar11;
            lStack_80 = lVar8;
            plStack_78 = (long *)lVar7;
            if (*(long *)(unaff_x20 + 0x20) != 0) {
              uVar12 = 0;
              Atlas_UI_AtlasUIManager__ClearLayer(*(long *)(unaff_x20 + 0x20),8);
              lVar7 = *(long *)(unaff_x20 + 0x28);
              if (lVar7 != 0) {
                if ((bRam0000000003eb4a16 & 1) == 0) {
                  func_0x00f78a20(0x3d71930,0,0);
                  func_0x00f78a20(0x3d69668);
                  bRam0000000003eb4a16 = 1;
                }
                lVar6 = *(long *)(lVar7 + 0x10);
                if (lVar6 == 0) {
                  return 0;
                }
                uVar17 = *(undefined4 *)(lVar7 + 0x40);
                puVar9 = (undefined8 *)0x3d69668;
                if (*(int *)(lVar7 + 0x30) != 1) {
                  puVar9 = (undefined8 *)0x3d71930;
                }
                uVar10 = *puVar9;
                iVar5 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar6 + 0x28,0,0,0);
                if (iVar5 != 0) {
                  /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(uVar17,lVar6 + 0x28,uVar10,0,0);
                }
                return lVar6;
              }
            }
            pcVar2 = Atlas_Gameplay_PauseManager__SetSystemsPaused;
            auVar19 = func_0x00f78af4();
            auVar18 = auVar19._0_12_;
          }
          else {
            if (*(char *)(lVar6 + 0x50) == '\0') {
              return lVar8;
            }
            if (((uVar12 & 1) == 0) && (*(long *)(lVar6 + 0x20) != 0)) {
              /*Core.Networking.NetworkSession$$OnSinglePlayerApplicationUnpaused*/ func_0x0165fdf0(*(long *)(lVar6 + 0x20),0);
            }
            plVar3 = (long *)&stack0xffffffffffffffc0;
            lVar6 = lVar7;
          }
          *(long *)((long)plVar3 + -0x20) = unaff_x20;
          *(long *)((long)plVar3 + -0x18) = lVar6;
          *(undefined1 **)((long)plVar3 + -0x10) = puVar16;
          *(code **)((long)plVar3 + -8) = pcVar2;
          uVar17 = 0;
          if (auVar18._8_4_ == 0) {
            uVar17 = 0x3f800000;
          }
          lVar6 = /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(uVar17,0);
          lVar7 = *(long *)(auVar18._0_8_ + 0x30);
          if (lVar7 != 0) {
            lVar7 = *(long *)(lVar7 + 0x20);
            lVar6 = 0;
            if (lVar7 != 0) {
              *(undefined8 *)((long)plVar3 + -0x10) = *(undefined8 *)((long)plVar3 + -0x10);
              *(undefined8 *)((long)plVar3 + -8) = *(undefined8 *)((long)plVar3 + -8);
              *(char *)(lVar7 + 0x1b8) = (char)uVar12;
              lVar6 = /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c((undefined1 *)((long)plVar3 + -0x28),lVar7,uVar12,0);
              return lVar6;
            }
          }
          return lVar6;
        }
      }
      return lVar6;
    }
    uVar1 = auVar18._8_4_ ^ 1;
    lVar6 = /*Core.Audio.AudioManager$$MuteAllEvents*/ func_0x01639dd0(*(long *)(lVar7 + 0x130),uVar1,0);
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(lVar7 + 0x180);
      lVar6 = 0;
      if (lVar7 != 0) {
        if ((bRam0000000003eb579b & 1) == 0) {
          func_0x00f78a20(0x3d20a50,0);
          bRam0000000003eb579b = 1;
        }
        if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*Core.Input.ControllerRemappingsNative$$PollForUpdatedMappings*/ func_0x016476b4();
        if ((bRam0000000003eb579c & 1) == 0) {
          func_0x00f78a20(0x3d32668);
          func_0x00f78a20(0x3d32670);
          func_0x00f78a20(0x3d32678);
          func_0x00f78a20(0x3d22230);
          func_0x00f78a20(0x3d3a938);
          bRam0000000003eb579c = 1;
        }
        uStack_88 = 0;
        lStack_80 = 0;
        plStack_78 = (long *)0x0;
        if (*(long *)(lVar7 + 0x58) == 0) {
          func_0x00f78af4();
          if (extraout_w1 == 1) {
            plVar15 = (long *)___cxa_begin_catch();
            lVar7 = *plVar15;
            ___cxa_end_catch();
            lVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_88,*unaff_x23);
            if (lVar7 == 0) {
              return lVar6;
            }
            func_0x00f78ac0(lVar7,0);
          }
          lVar6 = __Unwind_Resume();
          if ((bRam0000000003eb5780 & 1) == 0) {
            func_0x00f78a20(0x3d2a458);
            func_0x00f78a20(0x3d2a450);
            func_0x00f78a20(0x3d1b638);
            func_0x00f78a20(0x3d1b630);
            func_0x00f78a20(0x3d20a50);
            func_0x00f78a20(0x3d589d0);
            func_0x00f78a20(0x3d589d8);
            func_0x00f78a20(0x3d589e0);
            func_0x00f78a20(0x3d22848);
            func_0x00f78a20(0x3d22878);
            func_0x00f78a20(0x3d26d78);
            bRam0000000003eb5780 = 1;
          }
          if (*(char *)(lVar6 + 0x28) != '\0') {
            uVar10 = func_0x00f78aec(/*System.Action<InputDevice, InputDeviceChange>_TypeInfo*/ uRam0000000003d1b630);
            /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar10,lVar6,uRam0000000003d589d8,uRam0000000003d2a450);
            if (((*(ushort *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*UnityEngine.InputSystem.InputSystem$$remove_onDeviceChange*/ func_0x03066548(uVar10,0);
            uVar4 = /*UnityEngine.InputSystem.InputSystem$$get_onEvent*/ func_0x03068030(0);
            uVar10 = func_0x00f78aec(/*System.Action<InputEventPtr, InputDevice>_TypeInfo*/ uRam0000000003d1b638);
            /*System.Action<InputEventPtr, object>$$.ctor*/ func_0x01e6bce0(uVar10,lVar6,uRam0000000003d589e0,uRam0000000003d2a458);
            uVar4 = /*UnityEngine.InputSystem.LowLevel.InputEventListener$$op_Subtraction*/ func_0x0304e1cc(uVar4,uVar10,0);
            /*UnityEngine.InputSystem.InputSystem$$set_onEvent*/ func_0x03068038(uVar4,0);
            *(undefined1 *)(lVar6 + 0x28) = 0;
          }
          lVar7 = func_0x00f78aec(/*Core.Input.ControllerRemappingsNative.OnControllerMappingsChanged_TypeInfo*/ uRam0000000003d26d78);
          puVar9 = puRam0000000003d589d0;
          *(undefined8 *)(lVar7 + 0x10) = *puRam0000000003d589d0;
          *(long *)(lVar7 + 0x20) = lVar6;
          *(undefined8 **)(lVar7 + 0x28) = puVar9;
          if (((*(byte *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          /*Core.Input.ControllerRemappingsNative$$remove_ControllerMappingsChanged*/ func_0x016474b4(lVar7);
          lVar6 = /*Core.Input.ControllerRemappingsNative$$DeInit*/ func_0x01647acc();
          **(undefined8 **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) = 0;
          return lVar6;
        }
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_88,*(long *)(lVar7 + 0x58),uRam0000000003d3a938);
        do {
          uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_88,uRam0000000003d32670);
          plVar15 = plStack_78;
          if ((uVar12 & 1) == 0) {
            lVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_88,uRam0000000003d32668);
            return lVar6;
          }
          uVar17 = *(undefined4 *)(lVar7 + 0x18);
          uVar10 = /*Core.Input.InputManager$$TryGetGlyphMappingsForFamily*/ func_0x0164a548(lVar7,uVar17);
          if (plVar15 == (long *)0x0) {
            func_0x00f78af4();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1649de8);
            (*pcVar2)();
          }
          lVar6 = *plVar15;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*Core.Input.IInputFamilyChangeListener_TypeInfo*/ lRam0000000003d22230) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01649da0;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar15,/*Core.Input.IInputFamilyChangeListener_TypeInfo*/ lRam0000000003d22230,0);
code_r0x01649da0:
          (*(code *)*puVar9)(plVar15,uVar17,uVar10,puVar9[1]);
        } while( true );
      }
    }
  }
  return lVar6;
}



// ============================================================
// RVA: 0x144ae0c | Atlas.ApplicationBehaviour.OnApplicationFocus
// ============================================================

/* WARNING: Possible PIC construction at 0x01649e38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01649e3c) */
/* WARNING: Removing unreachable block (ram,0x01649e54) */
/* WARNING: Removing unreachable block (ram,0x01649e44) */
/* WARNING: Removing unreachable block (ram,0x0149d5e8) */
/* WARNING: Removing unreachable block (ram,0x0149d60c) */
/* WARNING: Removing unreachable block (ram,0x0149d620) */
/* WARNING: Removing unreachable block (ram,0x0149d62c) */
/* WARNING: Removing unreachable block (ram,0x0149d634) */
/* WARNING: Removing unreachable block (ram,0x0149d670) */
/* WARNING: Removing unreachable block (ram,0x0149d640) */
/* WARNING: Removing unreachable block (ram,0x0149d680) */
/* WARNING: Removing unreachable block (ram,0x0149d6a0) */
/* WARNING: Removing unreachable block (ram,0x0149d6c0) */
/* WARNING: Removing unreachable block (ram,0x0149d6c8) */
/* WARNING: Removing unreachable block (ram,0x0149d6e0) */
/* WARNING: Removing unreachable block (ram,0x0149d6f4) */
/* WARNING: Removing unreachable block (ram,0x0149d648) */

long Atlas_ApplicationBehaviour__OnApplicationFocus(long param_1,uint param_2)

{
  undefined1 auVar1 [12];
  code *pcVar2;
  long *plVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  int extraout_w1;
  ulong uVar12;
  int *piVar13;
  long unaff_x20;
  undefined8 *unaff_x23;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_58;
  
  puVar14 = &stack0xfffffffffffffff0;
  lVar6 = param_1;
  if (*(char *)(param_1 + 0x30) != '\0') {
    if (*(long *)(param_1 + 0x130) == 0) {
      auVar16 = func_0x00f78af4();
      uVar8 = auVar16._8_8_;
      lVar6 = auVar16._0_8_;
      if (*(char *)(lVar6 + 0x30) != '\0') {
        if (*(long *)(lVar6 + 0x1a0) != 0) {
          Atlas_Analytics_AtlasAnalyticsManager__OnApplicationPause(*(long *)(lVar6 + 0x1a0),uVar8);
        }
        if (*(long *)(lVar6 + 0x58) != 0) {
          Atlas_Save_SaveManager__StartSaveIfDirty(*(long *)(lVar6 + 0x58),0);
        }
        lVar7 = *(long *)(lVar6 + 0xe0);
        auVar16._8_8_ = uVar8;
        auVar16._0_8_ = lVar7;
        auVar1 = auVar16._0_12_;
        lVar6 = 0;
        if (lVar7 != 0) {
          uVar12 = 0;
          pcVar2 = (code *)&Atlas_ApplicationBehaviour__OnApplicationPause;
          if (*(char *)(lVar7 + 0x48) != '\0') {
            return lVar7;
          }
          lVar6 = *(long *)(lVar7 + 0x30);
          if (lVar6 == 0) {
            unaff_x20 = func_0x00f78af4();
            plVar3 = &lStack_60;
            puVar14 = &stack0xffffffffffffffb0;
            lVar6 = 0;
            if ((*(char *)(unaff_x20 + 0x48) == '\0') && (*(char *)(unaff_x20 + 0x49) == '\0')) {
              return unaff_x20;
            }
            *(undefined4 *)(unaff_x20 + 0x4c) = 3;
            *(undefined2 *)(unaff_x20 + 0x48) = 0;
            uVar8 = uVar12;
            lStack_60 = lVar7;
            plStack_58 = (long *)param_1;
            if (*(long *)(unaff_x20 + 0x20) != 0) {
              uVar8 = 0;
              Atlas_UI_AtlasUIManager__ClearLayer(*(long *)(unaff_x20 + 0x20),8);
              lVar7 = *(long *)(unaff_x20 + 0x28);
              if (lVar7 != 0) {
                if ((bRam0000000003eb4a16 & 1) == 0) {
                  func_0x00f78a20(0x3d71930,0,0);
                  func_0x00f78a20(0x3d69668);
                  bRam0000000003eb4a16 = 1;
                }
                lVar6 = *(long *)(lVar7 + 0x10);
                if (lVar6 == 0) {
                  return 0;
                }
                uVar15 = *(undefined4 *)(lVar7 + 0x40);
                puVar10 = (undefined8 *)0x3d69668;
                if (*(int *)(lVar7 + 0x30) != 1) {
                  puVar10 = (undefined8 *)0x3d71930;
                }
                uVar9 = *puVar10;
                iVar5 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar6 + 0x28,0,0,0);
                if (iVar5 != 0) {
                  /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(uVar15,lVar6 + 0x28,uVar9,0,0);
                }
                return lVar6;
              }
            }
            pcVar2 = Atlas_Gameplay_PauseManager__SetSystemsPaused;
            auVar16 = func_0x00f78af4();
            auVar1 = auVar16._0_12_;
          }
          else {
            if (*(char *)(lVar6 + 0x50) == '\0') {
              return lVar7;
            }
            if (((uVar8 & 1) == 0) && (*(long *)(lVar6 + 0x20) != 0)) {
              /*Core.Networking.NetworkSession$$OnSinglePlayerApplicationUnpaused*/ func_0x0165fdf0(*(long *)(lVar6 + 0x20),0);
            }
            plVar3 = (long *)&stack0xffffffffffffffe0;
            lVar6 = param_1;
          }
          *(long *)((long)plVar3 + -0x20) = unaff_x20;
          *(long *)((long)plVar3 + -0x18) = lVar6;
          *(undefined1 **)((long)plVar3 + -0x10) = puVar14;
          *(code **)((long)plVar3 + -8) = pcVar2;
          uVar15 = 0;
          if (auVar1._8_4_ == 0) {
            uVar15 = 0x3f800000;
          }
          lVar6 = /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(uVar15,0);
          lVar7 = *(long *)(auVar1._0_8_ + 0x30);
          if (lVar7 != 0) {
            lVar7 = *(long *)(lVar7 + 0x20);
            lVar6 = 0;
            if (lVar7 != 0) {
              *(undefined8 *)((long)plVar3 + -0x10) = *(undefined8 *)((long)plVar3 + -0x10);
              *(undefined8 *)((long)plVar3 + -8) = *(undefined8 *)((long)plVar3 + -8);
              *(char *)(lVar7 + 0x1b8) = (char)uVar8;
              lVar6 = /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c((undefined1 *)((long)plVar3 + -0x28),lVar7,uVar8,0);
              return lVar6;
            }
          }
          return lVar6;
        }
      }
      return lVar6;
    }
    lVar6 = /*Core.Audio.AudioManager$$MuteAllEvents*/ func_0x01639dd0(*(long *)(param_1 + 0x130),param_2 ^ 1,0);
    if (((param_2 ^ 1) & 1) == 0) {
      lVar7 = *(long *)(param_1 + 0x180);
      lVar6 = 0;
      if (lVar7 != 0) {
        if ((bRam0000000003eb579b & 1) == 0) {
          func_0x00f78a20(0x3d20a50,0);
          bRam0000000003eb579b = 1;
        }
        if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*Core.Input.ControllerRemappingsNative$$PollForUpdatedMappings*/ func_0x016476b4();
        if ((bRam0000000003eb579c & 1) == 0) {
          func_0x00f78a20(0x3d32668);
          func_0x00f78a20(0x3d32670);
          func_0x00f78a20(0x3d32678);
          func_0x00f78a20(0x3d22230);
          func_0x00f78a20(0x3d3a938);
          bRam0000000003eb579c = 1;
        }
        uStack_68 = 0;
        lStack_60 = 0;
        plStack_58 = (long *)0x0;
        if (*(long *)(lVar7 + 0x58) == 0) {
          func_0x00f78af4();
          if (extraout_w1 == 1) {
            plVar11 = (long *)___cxa_begin_catch();
            lVar7 = *plVar11;
            ___cxa_end_catch();
            lVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,*unaff_x23);
            if (lVar7 == 0) {
              return lVar6;
            }
            func_0x00f78ac0(lVar7,0);
          }
          lVar6 = __Unwind_Resume();
          if ((bRam0000000003eb5780 & 1) == 0) {
            func_0x00f78a20(0x3d2a458);
            func_0x00f78a20(0x3d2a450);
            func_0x00f78a20(0x3d1b638);
            func_0x00f78a20(0x3d1b630);
            func_0x00f78a20(0x3d20a50);
            func_0x00f78a20(0x3d589d0);
            func_0x00f78a20(0x3d589d8);
            func_0x00f78a20(0x3d589e0);
            func_0x00f78a20(0x3d22848);
            func_0x00f78a20(0x3d22878);
            func_0x00f78a20(0x3d26d78);
            bRam0000000003eb5780 = 1;
          }
          if (*(char *)(lVar6 + 0x28) != '\0') {
            uVar9 = func_0x00f78aec(/*System.Action<InputDevice, InputDeviceChange>_TypeInfo*/ uRam0000000003d1b630);
            /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar9,lVar6,uRam0000000003d589d8,uRam0000000003d2a450);
            if (((*(ushort *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*UnityEngine.InputSystem.InputSystem$$remove_onDeviceChange*/ func_0x03066548(uVar9,0);
            uVar4 = /*UnityEngine.InputSystem.InputSystem$$get_onEvent*/ func_0x03068030(0);
            uVar9 = func_0x00f78aec(/*System.Action<InputEventPtr, InputDevice>_TypeInfo*/ uRam0000000003d1b638);
            /*System.Action<InputEventPtr, object>$$.ctor*/ func_0x01e6bce0(uVar9,lVar6,uRam0000000003d589e0,uRam0000000003d2a458);
            uVar4 = /*UnityEngine.InputSystem.LowLevel.InputEventListener$$op_Subtraction*/ func_0x0304e1cc(uVar4,uVar9,0);
            /*UnityEngine.InputSystem.InputSystem$$set_onEvent*/ func_0x03068038(uVar4,0);
            *(undefined1 *)(lVar6 + 0x28) = 0;
          }
          lVar7 = func_0x00f78aec(/*Core.Input.ControllerRemappingsNative.OnControllerMappingsChanged_TypeInfo*/ uRam0000000003d26d78);
          puVar10 = puRam0000000003d589d0;
          *(undefined8 *)(lVar7 + 0x10) = *puRam0000000003d589d0;
          *(long *)(lVar7 + 0x20) = lVar6;
          *(undefined8 **)(lVar7 + 0x28) = puVar10;
          if (((*(byte *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          /*Core.Input.ControllerRemappingsNative$$remove_ControllerMappingsChanged*/ func_0x016474b4(lVar7);
          lVar6 = /*Core.Input.ControllerRemappingsNative$$DeInit*/ func_0x01647acc();
          **(undefined8 **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) = 0;
          return lVar6;
        }
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_68,*(long *)(lVar7 + 0x58),uRam0000000003d3a938);
        do {
          uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_68,uRam0000000003d32670);
          plVar11 = plStack_58;
          if ((uVar8 & 1) == 0) {
            lVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d32668);
            return lVar6;
          }
          uVar15 = *(undefined4 *)(lVar7 + 0x18);
          uVar9 = /*Core.Input.InputManager$$TryGetGlyphMappingsForFamily*/ func_0x0164a548(lVar7,uVar15);
          if (plVar11 == (long *)0x0) {
            func_0x00f78af4();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1649de8);
            (*pcVar2)();
          }
          lVar6 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*Core.Input.IInputFamilyChangeListener_TypeInfo*/ lRam0000000003d22230) {
                puVar10 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01649da0;
              }
              piVar13 = piVar13 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar11,/*Core.Input.IInputFamilyChangeListener_TypeInfo*/ lRam0000000003d22230,0);
code_r0x01649da0:
          (*(code *)*puVar10)(plVar11,uVar15,uVar9,puVar10[1]);
        } while( true );
      }
    }
  }
  return lVar6;
}



// ============================================================
// RVA: 0x144ae68 | Atlas.ApplicationBehaviour.OnApplicationPause
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0149d5e8) */
/* WARNING: Removing unreachable block (ram,0x0149d60c) */
/* WARNING: Removing unreachable block (ram,0x0149d620) */
/* WARNING: Removing unreachable block (ram,0x0149d62c) */
/* WARNING: Removing unreachable block (ram,0x0149d634) */
/* WARNING: Removing unreachable block (ram,0x0149d670) */
/* WARNING: Removing unreachable block (ram,0x0149d640) */
/* WARNING: Removing unreachable block (ram,0x0149d680) */
/* WARNING: Removing unreachable block (ram,0x0149d6a0) */
/* WARNING: Removing unreachable block (ram,0x0149d6c0) */
/* WARNING: Removing unreachable block (ram,0x0149d6c8) */
/* WARNING: Removing unreachable block (ram,0x0149d6e0) */
/* WARNING: Removing unreachable block (ram,0x0149d6f4) */
/* WARNING: Removing unreachable block (ram,0x0149d648) */

long Atlas_ApplicationBehaviour__OnApplicationPause(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined1 **unaff_x29;
  code *unaff_x30;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  long alStack_40 [2];
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    if (*(long *)(param_1 + 0x1a0) != 0) {
      Atlas_Analytics_AtlasAnalyticsManager__OnApplicationPause(*(long *)(param_1 + 0x1a0),param_2);
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      Atlas_Save_SaveManager__StartSaveIfDirty(*(long *)(param_1 + 0x58),0);
    }
    lVar3 = *(long *)(param_1 + 0xe0);
    param_1 = 0;
    if (lVar3 != 0) {
      uVar5 = 0;
      if (*(char *)(lVar3 + 0x48) != '\0') {
        return lVar3;
      }
      lVar6 = *(long *)(lVar3 + 0x30);
      if (lVar6 == 0) {
        unaff_x20 = func_0x00f78af4();
        pcStack_28 = Atlas_Gameplay_PauseManager__OnResumePressed;
        unaff_x29 = &puStack_30;
        unaff_x19 = 0;
        if ((*(char *)(unaff_x20 + 0x48) == '\0') && (*(char *)(unaff_x20 + 0x49) == '\0')) {
          return unaff_x20;
        }
        *(undefined4 *)(unaff_x20 + 0x4c) = 3;
        *(undefined2 *)(unaff_x20 + 0x48) = 0;
        alStack_40[0] = lVar3;
        puStack_30 = &stack0xfffffffffffffff0;
        if (*(long *)(unaff_x20 + 0x20) != 0) {
          uVar5 = 0;
          Atlas_UI_AtlasUIManager__ClearLayer(*(long *)(unaff_x20 + 0x20),8);
          lVar3 = *(long *)(unaff_x20 + 0x28);
          if (lVar3 != 0) {
            if ((bRam0000000003eb4a16 & 1) == 0) {
              func_0x00f78a20(0x3d71930,0,0);
              func_0x00f78a20(0x3d69668);
              bRam0000000003eb4a16 = 1;
            }
            lVar6 = *(long *)(lVar3 + 0x10);
            if (lVar6 != 0) {
              uVar7 = *(undefined4 *)(lVar3 + 0x40);
              puVar1 = (undefined8 *)0x3d69668;
              if (*(int *)(lVar3 + 0x30) != 1) {
                puVar1 = (undefined8 *)0x3d71930;
              }
              uVar4 = *puVar1;
              iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar6 + 0x28,0,0,0);
              if (iVar2 != 0) {
                /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(uVar7,lVar6 + 0x28,uVar4,0,0);
              }
              return lVar6;
            }
            return 0;
          }
        }
        unaff_x30 = Atlas_Gameplay_PauseManager__SetSystemsPaused;
        auVar8 = func_0x00f78af4();
        param_2 = auVar8._8_8_;
        lVar3 = auVar8._0_8_;
        register0x00000008 = (BADSPACEBASE *)alStack_40;
      }
      else {
        if (*(char *)(lVar6 + 0x50) == '\0') {
          return lVar3;
        }
        uVar5 = param_2;
        if (((param_2 & 1) == 0) && (*(long *)(lVar6 + 0x20) != 0)) {
          /*Core.Networking.NetworkSession$$OnSinglePlayerApplicationUnpaused*/ func_0x0165fdf0(*(long *)(lVar6 + 0x20),0);
        }
      }
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      uVar7 = 0;
      if ((int)param_2 == 0) {
        uVar7 = 0x3f800000;
      }
      lVar6 = /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(uVar7,0);
      if (*(long *)(lVar3 + 0x30) != 0) {
        lVar3 = *(long *)(*(long *)(lVar3 + 0x30) + 0x20);
        lVar6 = 0;
        if (lVar3 != 0) {
          *(undefined8 *)((long)register0x00000008 + -0x10) =
               *(undefined8 *)((long)register0x00000008 + -0x10);
          *(undefined8 *)((long)register0x00000008 + -8) =
               *(undefined8 *)((long)register0x00000008 + -8);
          *(char *)(lVar3 + 0x1b8) = (char)uVar5;
          lVar3 = /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c((undefined1 *)((long)register0x00000008 + -0x28),lVar3,uVar5,0);
          return lVar3;
        }
      }
      return lVar6;
    }
  }
  return param_1;
}



// ============================================================
// RVA: 0x144b050 | Atlas.ApplicationBehaviour.OnApplicationPause
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x144b0c4 | Atlas.ApplicationBehaviour.OnApplicationQuit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x144b0d4 | Atlas.ApplicationBehaviour.ApplicationClosed
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x144b128 | Atlas.ApplicationBehaviour.DidReceiveMemoryWarning
// ============================================================

/* WARNING: Possible PIC construction at 0x01631738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01631784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01632d60) */
/* WARNING: Removing unreachable block (ram,0x01632d70) */
/* WARNING: Removing unreachable block (ram,0x01632d7c) */
/* WARNING: Removing unreachable block (ram,0x01632d8c) */
/* WARNING: Removing unreachable block (ram,0x01632d14) */
/* WARNING: Removing unreachable block (ram,0x01632d1c) */
/* WARNING: Removing unreachable block (ram,0x01632ce8) */
/* WARNING: Removing unreachable block (ram,0x01632d2c) */
/* WARNING: Removing unreachable block (ram,0x01632d30) */
/* WARNING: Removing unreachable block (ram,0x01632d3c) */
/* WARNING: Removing unreachable block (ram,0x01632d64) */
/* WARNING: Removing unreachable block (ram,0x01632d68) */
/* WARNING: Removing unreachable block (ram,0x01632d48) */
/* WARNING: Removing unreachable block (ram,0x01632d4c) */
/* WARNING: Removing unreachable block (ram,0x01632cf0) */
/* WARNING: Removing unreachable block (ram,0x01632cf4) */
/* WARNING: Removing unreachable block (ram,0x01632d08) */
/* WARNING: Removing unreachable block (ram,0x01632cc0) */
/* WARNING: Removing unreachable block (ram,0x01632cc8) */
/* WARNING: Removing unreachable block (ram,0x01632cdc) */
/* WARNING: Removing unreachable block (ram,0x01632c50) */
/* WARNING: Removing unreachable block (ram,0x01632c5c) */
/* WARNING: Removing unreachable block (ram,0x01632d90) */
/* WARNING: Removing unreachable block (ram,0x01632d98) */
/* WARNING: Removing unreachable block (ram,0x01632c68) */
/* WARNING: Removing unreachable block (ram,0x01632c84) */
/* WARNING: Removing unreachable block (ram,0x01632c90) */
/* WARNING: Removing unreachable block (ram,0x01632c98) */
/* WARNING: Removing unreachable block (ram,0x01632ca0) */
/* WARNING: Removing unreachable block (ram,0x01632c20) */
/* WARNING: Removing unreachable block (ram,0x01632c28) */
/* WARNING: Removing unreachable block (ram,0x01632c44) */
/* WARNING: Removing unreachable block (ram,0x01632bd0) */
/* WARNING: Removing unreachable block (ram,0x01632bd8) */
/* WARNING: Removing unreachable block (ram,0x01632bf4) */
/* WARNING: Removing unreachable block (ram,0x01632c0c) */
/* WARNING: Removing unreachable block (ram,0x01632ba4) */
/* WARNING: Removing unreachable block (ram,0x01632bac) */
/* WARNING: Removing unreachable block (ram,0x01632bc4) */
/* WARNING: Removing unreachable block (ram,0x01632b74) */
/* WARNING: Removing unreachable block (ram,0x01632b7c) */
/* WARNING: Removing unreachable block (ram,0x01632b90) */
/* WARNING: Removing unreachable block (ram,0x01632b40) */
/* WARNING: Removing unreachable block (ram,0x01632b48) */
/* WARNING: Removing unreachable block (ram,0x01632b64) */
/* WARNING: Removing unreachable block (ram,0x01632adc) */
/* WARNING: Removing unreachable block (ram,0x01632aec) */
/* WARNING: Removing unreachable block (ram,0x01632af4) */
/* WARNING: Removing unreachable block (ram,0x01632af8) */
/* WARNING: Removing unreachable block (ram,0x01632b14) */
/* WARNING: Removing unreachable block (ram,0x01632b2c) */
/* WARNING: Removing unreachable block (ram,0x029d2cf4) */
/* WARNING: Removing unreachable block (ram,0x029d2e58) */
/* WARNING: Removing unreachable block (ram,0x029d2fa0) */
/* WARNING: Removing unreachable block (ram,0x01631788) */
/* WARNING: Removing unreachable block (ram,0x0163173c) */
/* WARNING: Removing unreachable block (ram,0x01631740) */
/* WARNING: Removing unreachable block (ram,0x01632dac) */
/* WARNING: Removing unreachable block (ram,0x01632db4) */
/* WARNING: Removing unreachable block (ram,0x01631734) */

long * Atlas_ApplicationBehaviour__DidReceiveMemoryWarning(long *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long extraout_x8;
  uint extraout_w9;
  uint uVar24;
  int iVar25;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  ulong uVar26;
  ulong uVar27;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar28;
  code *pcVar29;
  undefined *puVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  puVar28 = &stack0xfffffffffffffff0;
  if (*(char *)((long)param_1 + 0x1ca) != '\0') {
    return param_1;
  }
  lVar23 = param_1[0x34];
  plVar9 = param_1;
  if ((lVar23 == 0) || (*(char *)(lVar23 + 0x78) == '\0')) {
LAB_0144b168:
    *(undefined1 *)((long)param_1 + 0x1ca) = 1;
    return plVar9;
  }
  lVar23 = *(long *)(lVar23 + 0x48);
  /*UnityEngine.SystemInfo$$get_deviceModel*/ func_0x0326d5c0(0);
  if (lVar23 != 0) {
    plVar9 = (long *)Atlas_Analytics_AtlasAnalyticsEvents__MemoryWarningEvent(lVar23);
    goto LAB_0144b168;
  }
  lVar23 = func_0x00f78af4();
  if ((bRam0000000003eb47ac & 1) == 0) {
    func_0x00f78a20(0x3d6faf0);
    bRam0000000003eb47ac = 1;
  }
  pcVar29 = Atlas_Analytics_AtlasAnalyticsEvents__MemoryWarningEvent;
  uVar14 = 0;
  puVar4 = &stack0xffffffffffffffe0;
  lVar12 = /*STR('MemoryWarning')*/ lRam0000000003d6faf0;
  while( true ) {
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar4 + -0x20) = uVar14;
    *(long **)(puVar4 + -0x18) = param_1;
    *(undefined1 **)(puVar4 + -0x10) = puVar28;
    *(code **)(puVar4 + -8) = pcVar29;
    plVar9 = (long *)/*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar23 + 0x18),0);
    if (((ulong)plVar9 & 1) != 0) {
      return plVar9;
    }
    plVar9 = *(long **)(lVar23 + 0x10);
    if (plVar9 != (long *)0x0) break;
    lVar18 = func_0x00f78af4();
    *(undefined8 *)(puVar4 + -0x60) = unaff_x22;
    *(long *)(puVar4 + -0x58) = lVar23;
    *(long *)(puVar4 + -0x50) = lVar12;
    *(undefined8 *)(puVar4 + -0x48) = 0;
    *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
    *(code **)(puVar4 + -0x38) = Atlas_Analytics_AtlasAnalyticsEvents__NewSaveGameEvent;
    if ((bRam0000000003eb47a2 & 1) == 0) {
      func_0x00f78a20(0x3d702c8);
      bRam0000000003eb47a2 = 1;
    }
    puVar28 = *(undefined1 **)(puVar4 + -0x40);
    pcVar29 = *(code **)(puVar4 + -0x38);
    uVar14 = *(undefined8 *)(puVar4 + -0x50);
    param_1 = *(long **)(puVar4 + -0x48);
    unaff_x22 = *(undefined8 *)(puVar4 + -0x60);
    unaff_x21 = *(undefined8 *)(puVar4 + -0x58);
    puVar4 = puVar4 + -0x30;
    lVar23 = lVar18;
    lVar12 = /*STR('NewSaveGame')*/ lRam0000000003d702c8;
  }
  plVar19 = *(long **)(lVar23 + 0x18);
  plVar22 = (long *)0x0;
  puVar3 = puVar4 + -0x70;
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x30) = *(undefined8 *)(puVar4 + -0x30);
  *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)(puVar4 + -0x28);
  *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
  *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
  *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
  *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
  puVar28 = puVar4 + -0x10;
  uVar26 = 0;
  plVar10 = plVar9;
  plVar20 = plVar19;
  if ((bRam0000000003eb5655 & 1) == 0) {
    func_0x00f78a20(0x3d210a0);
    func_0x00f78a20(0x3d3cc08);
    func_0x00f78a20(0x3d3cc38);
    func_0x00f78a20(0x3d3cc58);
    func_0x00f78a20(0x3d3cc68);
    plVar10 = (long *)func_0x00f78a20(0x3d3cc70);
    bRam0000000003eb5655 = 1;
  }
  if (*(char *)((long)plVar9 + 0x6c) == '\0') {
    return plVar10;
  }
  if (((*(ushort *)(/*System.DateTimeOffset_TypeInfo*/ lRam0000000003d210a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTimeOffset_TypeInfo*/ lRam0000000003d210a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar31 = /*System.DateTimeOffset$$get_UtcNow*/ func_0x02a99f14(0);
  *(undefined1 (*) [16])(puVar4 + -0x70) = auVar31;
  uVar11 = /*System.DateTimeOffset$$ToUnixTimeSeconds*/ func_0x02a9afc0(puVar4 + -0x70,0);
  lVar23 = plVar9[7];
  if (lVar23 != 0) {
    if (*(int *)(lVar23 + 0x18) < 100) {
code_r0x016317ac:
      *(long *)(puVar4 + -0x60) = lVar12;
      *(long **)(puVar4 + -0x58) = plVar19;
      *(ulong *)(puVar4 + -0x50) = uVar11;
      *(undefined8 *)(puVar4 + -0x48) = 0;
      plVar19 = (long *)/*System.Collections.Generic.List<AnalyticsManager.Event>$$Add*/ func_0x024a78a4(lVar23,puVar4 + -0x60,uRam0000000003d3cc38);
      plVar9[0xf] = lVar12;
      return plVar19;
    }
    lVar18 = *(long *)(*(long *)(lVar23 + 0x10) + 0x38);
    if (lVar18 == 0) {
      plVar20 = plRam0000000003d3cc58;
      /*System.Collections.Generic.List<AnalyticsManager.Event>$$RemoveAt*/ func_0x024a91fc(lVar23,0);
      lVar23 = plVar9[7];
      if (lVar23 != 0) goto code_r0x016317ac;
      goto code_r0x016317e4;
    }
    puVar30 = &UNK_01631788;
    lVar23 = lVar12;
    plVar10 = plVar9;
code_r0x016328b4:
    lVar12 = 0;
    *(ulong *)(puVar3 + -0x30) = uVar26;
    *(long **)(puVar3 + -0x28) = plVar19;
    *(long **)(puVar3 + -0x20) = plVar10;
    *(long *)(puVar3 + -0x18) = lVar23;
    *(undefined1 **)(puVar3 + -0x10) = puVar28;
    *(undefined **)(puVar3 + -8) = puVar30;
    if ((bRam0000000003eb565e & 1) == 0) {
      func_0x00f78a20(0x3d3cc10);
      func_0x00f78a20(0x3d40350);
      bRam0000000003eb565e = 1;
    }
    if (lVar18 != 0) {
      /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Clear*/ func_0x024a4f04(lVar18,uRam0000000003d3cc10);
      auVar31._8_8_ = lVar18;
      auVar31._0_8_ = plVar9[5];
      if (plVar9[5] != 0) {
        puVar28 = *(undefined1 **)(puVar3 + -0x10);
        puVar30 = *(undefined **)(puVar3 + -8);
        uVar14 = *(undefined8 *)(puVar3 + -0x20);
        lVar12 = *(long *)(puVar3 + -0x18);
        uVar16 = *(undefined8 *)(puVar3 + -0x30);
        uVar17 = *(undefined8 *)(puVar3 + -0x28);
        plVar20 = plRam0000000003d40350;
        goto code_r0x02865908;
      }
    }
    lVar23 = func_0x00f78af4();
    *(long **)(puVar3 + -0x50) = plVar9;
    *(long *)(puVar3 + -0x48) = lVar18;
    *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x38) = &Core_Analytics_AnalyticsManager__StartEventBatch;
    if ((bRam0000000003eb565f & 1) == 0) {
      func_0x00f78a20(0x3d7cc48);
      bRam0000000003eb565f = 1;
    }
    plVar9 = *(long **)(lVar23 + 0x20);
    if (plVar9 == (long *)0x0) {
      auVar31 = func_0x00f78af4();
      plVar19 = auVar31._0_8_;
      puVar4 = puVar3 + -0xd0;
      puVar6 = puVar3 + -0xd0;
      *(undefined8 *)(puVar3 + -0xb0) = unaff_x28;
      *(undefined8 *)(puVar3 + -0xa8) = unaff_x27;
      *(undefined8 *)(puVar3 + -0xa0) = unaff_x26;
      *(undefined8 *)(puVar3 + -0x98) = unaff_x25;
      *(undefined8 *)(puVar3 + -0x90) = 0;
      *(ulong *)(puVar3 + -0x88) = uVar11;
      *(ulong *)(puVar3 + -0x80) = uVar26;
      *(undefined8 *)(puVar3 + -0x78) = 0x3eb5000;
      *(undefined8 *)(puVar3 + -0x70) = 0x3eb5000;
      *(long *)(puVar3 + -0x68) = lVar23;
      *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x40;
      *(undefined **)(puVar3 + -0x58) = &Core_Analytics_AnalyticsManager__AddEventToBatch;
      puVar28 = puVar3 + -0x60;
      *(long *)(puVar3 + -200) = auVar31._8_8_;
      lVar23 = 0x3eb5000;
      plVar10 = plVar20;
      if ((bRam0000000003eb5660 & 1) == 0) {
        func_0x00f78a20(0x3d21ce0);
        func_0x00f78a20(0x3d3cc20);
        func_0x00f78a20(0x3d3cc28);
        func_0x00f78a20(0x3d66538);
        func_0x00f78a20(0x3d7cc30);
        func_0x00f78a20(0x3d66570);
        func_0x00f78a20(0x3d66580);
        func_0x00f78a20(0x3d7d1e0);
        func_0x00f78a20(0x3d66568);
        func_0x00f78a20(0x3d66fd8);
        func_0x00f78a20(0x3d66578);
        func_0x00f78a20(0x3d66518);
        func_0x00f78a20(0x3d66548);
        func_0x00f78a20(0x3d66588);
        bRam0000000003eb5660 = 1;
      }
      if (((ulong)plVar20 & 1) == 0) {
        plVar9 = (long *)plVar19[4];
        if (plVar9 != (long *)0x0) {
          puVar30 = &UNK_01632a9c;
          puVar6 = puVar3 + -0xd0;
          uVar14 = /*STR(',')*/ uRam0000000003d66fd8;
          goto code_r0x029d2f8c;
        }
      }
      else {
        plVar9 = plVar19 + 4;
        plVar19 = plVar9;
        if (*plVar9 != 0) {
          uVar26 = 0x3d7cc30;
          plVar10 = (long *)0x0;
          /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f8c(*plVar9,/*STR('{')*/ uRam0000000003d7cc30,0);
          auVar32._8_8_ = /*STR('"event_id": "')*/ uRam0000000003d66570;
          auVar32._0_8_ = *plVar9;
          if (*plVar9 != 0) {
            lVar23 = 0x3d21ce0;
            plVar10 = (long *)0x0;
            puVar30 = &UNK_01632adc;
            goto code_r0x029d2c70;
          }
        }
      }
      lVar23 = func_0x00f78af4();
      *(undefined8 *)(puVar3 + -0xf0) = 0x3eb5000;
      *(long **)(puVar3 + -0xe8) = plVar19;
      *(undefined1 **)(puVar3 + -0xe0) = puVar28;
      *(undefined **)(puVar3 + -0xd8) = &Core_Analytics_AnalyticsManager__EndEventBatch;
      if ((bRam0000000003eb5661 & 1) == 0) {
        func_0x00f78a20(0x3d76b40);
        bRam0000000003eb5661 = 1;
      }
      plVar9 = *(long **)(lVar23 + 0x20);
      if (plVar9 == (long *)0x0) {
        auVar31 = func_0x00f78af4();
        lVar12 = auVar31._0_8_;
        *(undefined8 *)(puVar3 + -0x110) = 0x3eb5000;
        *(long *)(puVar3 + -0x108) = lVar23;
        *(undefined1 **)(puVar3 + -0x100) = puVar3 + -0xe0;
        *(undefined **)(puVar3 + -0xf8) = &Core_Analytics_AnalyticsManager__SendEventBatch;
        uVar14 = /*Core.Analytics.AnalyticsManager$$CreatePOSTRequest*/ func_0x01632e78(lVar12,*(undefined8 *)(lVar12 + 0x18),auVar31._8_8_,plVar10);
        /*Core.Analytics.AnalyticsManager$$SendEventBatch*/ func_0x01633008(lVar12,uVar14);
        return (long *)((long)&MACH_HEADER.magic + 1);
      }
      puVar28 = *(undefined1 **)(puVar3 + -0xe0);
      puVar30 = *(undefined **)(puVar3 + -0xd8);
      lVar23 = *(long *)(puVar3 + -0xf0);
      plVar19 = *(long **)(puVar3 + -0xe8);
      uVar14 = /*STR('] }')*/ uRam0000000003d76b40;
    }
    else {
      puVar28 = *(undefined1 **)(puVar3 + -0x40);
      puVar30 = *(undefined **)(puVar3 + -0x38);
      lVar23 = *(long *)(puVar3 + -0x50);
      plVar19 = *(long **)(puVar3 + -0x48);
      puVar6 = puVar3 + -0x30;
      uVar14 = /*STR('{ "events": [')*/ uRam0000000003d7cc48;
      plVar20 = (long *)0x3eb5000;
    }
code_r0x029d2f8c:
    auVar32._8_8_ = uVar14;
    auVar32._0_8_ = plVar9;
    plVar10 = (long *)0x0;
    *(long *)(puVar6 + -0x20) = lVar23;
    *(long **)(puVar6 + -0x18) = plVar19;
    *(undefined1 **)(puVar6 + -0x10) = puVar28;
    *(undefined **)(puVar6 + -8) = puVar30;
    puVar28 = puVar6 + -0x10;
    puVar30 = &UNK_029d2fa0;
    puVar4 = puVar6 + -0x20;
code_r0x029d2c70:
    do {
      lVar18 = auVar32._8_8_;
      plVar19 = auVar32._0_8_;
      *(long *)(puVar4 + -0x40) = lVar12;
      *(ulong *)(puVar4 + -0x38) = uVar11;
      *(ulong *)(puVar4 + -0x30) = uVar26;
      *(long **)(puVar4 + -0x28) = plVar20;
      *(long *)(puVar4 + -0x20) = lVar23;
      *(long **)(puVar4 + -0x18) = plVar9;
      *(undefined1 **)(puVar4 + -0x10) = puVar28;
      *(undefined **)(puVar4 + -8) = puVar30;
      if (lVar18 == 0) {
        return plVar19;
      }
      uVar11 = plVar19[2];
      if (uVar11 == 0) {
        func_0x00f78af4();
        lVar18 = lVar23;
        plVar9 = plVar20;
        uVar27 = uVar26;
code_r0x029d2d74:
        uVar14 = func_0x00f78b24();
        puVar30 = &System_Text_StringBuilder__AppendHelper;
        auVar32 = func_0x00f78ac0(uVar14,0);
        plVar20 = plVar10;
        plVar21 = plVar22;
      }
      else {
        uVar2 = *(uint *)(plVar19 + 4);
        lVar12 = (long)(int)uVar2;
        uVar1 = *(uint *)(lVar18 + 0x10);
        plVar9 = (long *)(ulong)uVar1;
        uVar24 = uVar1 + uVar2;
        uVar27 = (ulong)uVar24;
        if ((int)uVar24 < *(int *)(uVar11 + 0x18)) {
          if ((int)uVar1 < 3) {
            if ((int)uVar1 < 1) goto code_r0x029d2d54;
            plVar10 = (long *)0x0;
            uVar7 = /*System.String$$get_Chars*/ func_0x029c5420(lVar18,0);
            if (uVar2 < *(uint *)(uVar11 + 0x18)) {
              *(undefined2 *)(uVar11 + lVar12 * 2 + 0x20) = uVar7;
              if (uVar1 < 2) {
code_r0x029d2d54:
                *(uint *)(plVar19 + 4) = uVar24;
                return plVar19;
              }
              plVar10 = (long *)0x0;
              uVar7 = /*System.String$$get_Chars*/ func_0x029c5420(lVar18,1);
              if (uVar2 + 1 < *(uint *)(uVar11 + 0x18)) {
                *(undefined2 *)(uVar11 + (long)(int)(uVar2 + 1) * 2 + 0x20) = uVar7;
                goto code_r0x029d2d54;
              }
            }
          }
          else {
            iVar8 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
            if (uVar2 < *(uint *)(uVar11 + 0x18)) {
              /*System.String$$wstrcpy*/ func_0x029cb054(uVar11 + lVar12 * 2 + 0x20,lVar18 + iVar8,plVar9,0);
              goto code_r0x029d2d54;
            }
          }
          goto code_r0x029d2d74;
        }
        puVar30 = &UNK_029d2cf4;
        plVar20 = plVar10;
        plVar21 = plVar22;
      }
      lVar23 = auVar32._8_8_;
      plVar10 = auVar32._0_8_;
      *(long *)(puVar4 + -0x60) = lVar18;
      *(long **)(puVar4 + -0x58) = plVar19;
      *(undefined1 **)(puVar4 + -0x50) = puVar4 + -0x10;
      *(undefined **)(puVar4 + -0x48) = puVar30;
      if (lVar23 != 0) {
        iVar8 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
        lVar18 = lVar23 + iVar8;
        plVar21 = (long *)(ulong)*(uint *)(lVar23 + 0x10);
        puVar28 = *(undefined1 **)(puVar4 + -0x50);
        puVar30 = *(undefined **)(puVar4 + -0x48);
        puVar5 = puVar4 + -0x40;
        auVar33._8_8_ = uVar27;
        auVar33._0_8_ = *(undefined8 *)(puVar4 + -0x58);
        plVar19 = *(long **)(puVar4 + -0x60);
        plVar20 = plVar9;
code_r0x029d2b54:
        uVar26 = auVar33._8_8_;
        *(long *)(puVar5 + -0x40) = lVar12;
        *(ulong *)(puVar5 + -0x38) = uVar11;
        *(ulong *)(puVar5 + -0x30) = uVar26;
        *(long **)(puVar5 + -0x28) = plVar20;
        *(long **)(puVar5 + -0x20) = plVar19;
        *(long *)(puVar5 + -0x18) = auVar33._0_8_;
        *(undefined1 **)(puVar5 + -0x10) = puVar28;
        *(undefined **)(puVar5 + -8) = puVar30;
        puVar28 = puVar5 + -0x10;
        iVar8 = (int)plVar21;
        if (-1 < iVar8) {
          lVar23 = plVar10[2];
          if (lVar23 != 0) {
            iVar25 = (int)plVar10[4];
            uVar24 = iVar25 + iVar8;
            uVar26 = (ulong)uVar24;
            if ((int)uVar24 <= *(int *)(lVar23 + 0x18)) goto code_r0x029d2be8;
            uVar1 = *(int *)(lVar23 + 0x18) - iVar25;
            uVar11 = (ulong)uVar1;
            if (0 < (int)uVar1) {
              /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar18,lVar23,iVar25,uVar11);
              plVar20 = plVar21;
              if (plVar10[2] == 0) goto code_r0x029d2c08;
              *(int *)(plVar10 + 4) = (int)*(undefined8 *)(plVar10[2] + 0x18);
            }
            uVar24 = iVar8 - uVar1;
            plVar21 = (long *)(ulong)uVar24;
            /*System.Text.StringBuilder$$ExpandByABlock*/ func_0x029d27e8(plVar10,plVar21);
            lVar23 = plVar10[2];
            lVar18 = lVar18 + (long)(int)uVar1 * 2;
            iVar25 = 0;
code_r0x029d2be8:
            /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar18,lVar23,iVar25,plVar21);
            *(uint *)(plVar10 + 4) = uVar24;
            return plVar10;
          }
code_r0x029d2c08:
          func_0x00f78af4();
        }
        uVar14 = func_0x00f78a24(0x3d6b268);
        plVar9 = (long *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar14,0);
        func_0x00f78a24(0x3d1fcf8);
        lVar23 = func_0x00f78aec();
        uVar14 = func_0x00f78a24(0x3d7c5c8);
        plVar22 = (long *)0x0;
        plVar10 = plVar9;
        /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(lVar23,uVar14);
        uVar14 = func_0x00f78a24(0x3d5dbe8);
        puVar30 = &System_Text_StringBuilder__Append;
        auVar32 = func_0x00f78ac0(lVar23,uVar14);
        puVar4 = puVar5 + -0x40;
        goto code_r0x029d2c70;
      }
      auVar33 = func_0x00f78af4();
      uVar26 = auVar33._8_8_;
      plVar10 = auVar33._0_8_;
      puVar5 = puVar4 + -0xa0;
      *(long *)(puVar4 + -0xa0) = lVar12;
      *(ulong *)(puVar4 + -0x98) = uVar11;
      *(ulong *)(puVar4 + -0x90) = uVar27;
      *(long **)(puVar4 + -0x88) = plVar9;
      *(long *)(puVar4 + -0x80) = lVar18;
      *(long **)(puVar4 + -0x78) = plVar19;
      *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x50;
      *(undefined **)(puVar4 + -0x68) = &System_Text_StringBuilder__Append;
      puVar28 = puVar4 + -0x70;
      uVar11 = 0x3eb9000;
      plVar22 = plVar21;
      if ((bRam0000000003eb948a & 1) == 0) {
        func_0x00f78a20(0x3d208b0);
        bRam0000000003eb948a = 1;
      }
      iVar8 = (int)plVar20;
      if (iVar8 < 0) {
code_r0x029d2e7c:
        uVar14 = func_0x00f78a24(0x3d6de28);
        uVar16 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar14,0);
        func_0x00f78a24(0x3d1fcf8);
        plVar21 = (long *)func_0x00f78aec();
        uVar14 = 0x3d7b9d0;
code_r0x029d2ee8:
        uVar14 = func_0x00f78a24(uVar14);
        plVar22 = (long *)0x0;
        /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(plVar21,uVar14,uVar16);
        uVar14 = func_0x00f78a24(0x3d5dc00);
        func_0x00f78ac0(plVar21,uVar14);
      }
      else {
        iVar25 = (int)plVar21;
        if (iVar25 < 0) {
          uVar14 = func_0x00f78a24(0x3d75fa8);
          uVar16 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar14,0);
          func_0x00f78a24(0x3d1fcf8);
          plVar21 = (long *)func_0x00f78aec();
          uVar14 = 0x3d78638;
          goto code_r0x029d2ee8;
        }
        if ((iVar25 == 0) && (*(char *)(*(long *)(/*System.CompatibilitySwitches_TypeInfo*/ lRam0000000003d208b0 + 0xb8) + 1) != '\0')) {
          return plVar10;
        }
        if (uVar26 != 0) {
          if (iVar25 == 0) {
            return plVar10;
          }
          if (iVar8 <= *(int *)(uVar26 + 0x10) - iVar25) {
            iVar8 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
            lVar18 = uVar26 + ((ulong)plVar20 & 0xffffffff) * 2 + (long)iVar8;
            puVar30 = &UNK_029d2e58;
            plVar19 = plVar21;
            goto code_r0x029d2b54;
          }
          goto code_r0x029d2e7c;
        }
        if (iVar8 == 0 && iVar25 == 0) {
          return plVar10;
        }
      }
      func_0x00f78a24(0x3d1fcf0);
      uVar14 = func_0x00f78aec();
      uVar16 = func_0x00f78a24(0x3d7c5a0);
      plVar10 = (long *)0x0;
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar14,uVar16);
      uVar16 = func_0x00f78a24(0x3d5dc00);
      uVar16 = func_0x00f78ac0(uVar14,uVar16);
      *(long **)(puVar4 + -0xc0) = plVar21;
      *(undefined8 *)(puVar4 + -0xb8) = uVar14;
      *(undefined1 **)(puVar4 + -0xb0) = puVar28;
      *(undefined **)(puVar4 + -0xa8) = &System_Text_StringBuilder__AppendLine;
      uVar14 = /*System.Environment$$get_NewLine*/ func_0x02aca040(0);
      auVar32._8_8_ = uVar14;
      auVar32._0_8_ = uVar16;
      puVar28 = *(undefined1 **)(puVar4 + -0xb0);
      puVar30 = *(undefined **)(puVar4 + -0xa8);
      lVar23 = *(long *)(puVar4 + -0xc0);
      plVar9 = *(long **)(puVar4 + -0xb8);
      puVar4 = puVar4 + -0xa0;
    } while( true );
  }
code_r0x016317e4:
  lVar23 = func_0x00f78af4();
  puVar3 = puVar4 + -0xb0;
  *(undefined8 *)(puVar4 + -0xb0) = 0;
  *(ulong *)(puVar4 + -0xa8) = uVar11;
  *(undefined8 *)(puVar4 + -0xa0) = 0;
  *(long **)(puVar4 + -0x98) = plVar19;
  *(long **)(puVar4 + -0x90) = plVar9;
  *(long *)(puVar4 + -0x88) = lVar12;
  *(undefined1 **)(puVar4 + -0x80) = puVar28;
  *(undefined **)(puVar4 + -0x78) = &Core_Analytics_AnalyticsManager__GetCustomParmListFromPool;
  puVar28 = puVar4 + -0x80;
  uVar26 = 0x3eb5000;
  plVar10 = (long *)0x3d40348;
  plVar19 = (long *)0x3d40358;
  uVar11 = 1;
  while( true ) {
    if ((bRam0000000003eb565d & 1) == 0) {
      func_0x00f78a20(0x3d40348);
      func_0x00f78a20(0x3d40358);
      bRam0000000003eb565d = 1;
    }
    lVar12 = *(long *)(lVar23 + 0x28);
    if (lVar12 == 0) {
      puVar30 = &Core_Analytics_AnalyticsManager__ReturnPooledObjects;
      auVar31 = func_0x00f78af4();
      plVar9 = auVar31._0_8_;
      lVar18 = *(long *)(auVar31._8_8_ + 0x18);
      if (lVar18 == 0) {
        return plVar9;
      }
      goto code_r0x016328b4;
    }
    if (0 < *(int *)(lVar12 + 0x18)) break;
    /*Core.Analytics.AnalyticsManager$$FillCustomParamListPool*/ func_0x01631014(lVar23,0x19);
  }
  uVar14 = *(undefined8 *)(puVar4 + -0x90);
  uVar16 = *(undefined8 *)(puVar4 + -0xa0);
  uVar17 = *(undefined8 *)(puVar4 + -0x98);
  puVar3 = puVar4 + -0x90;
  *(undefined8 *)(puVar4 + -0x90) = uVar14;
  *(undefined8 *)(puVar4 + -0x88) = *(undefined8 *)(puVar4 + -0x88);
  *(undefined8 *)(puVar4 + -0x80) = *(undefined8 *)(puVar4 + -0x80);
  *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)(puVar4 + -0x78);
  puVar28 = puVar4 + -0x80;
  iVar8 = *(int *)(lVar12 + 0x18);
  if (iVar8 == 0) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d40348 + 0x18) + 0xc0) + 0x30))
              (lVar12);
    iVar8 = *(int *)(lVar12 + 0x18);
  }
  lVar23 = *(long *)(lVar12 + 0x10);
  uVar24 = iVar8 - 1;
  *(uint *)(lVar12 + 0x18) = uVar24;
  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
  if (lVar23 == 0) {
    func_0x00f78af4();
  }
  else if (uVar24 < *(uint *)(lVar23 + 0x18)) {
    lVar23 = lVar23 + (long)(int)uVar24 * 8;
    plVar9 = *(long **)(lVar23 + 0x20);
    *(undefined8 *)(lVar23 + 0x20) = 0;
    return plVar9;
  }
  uVar13 = func_0x00f78b24();
  puVar30 = &System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push;
  auVar31 = func_0x00f78ac0(uVar13,0);
code_r0x02865908:
  uVar13 = auVar31._8_8_;
  lVar18 = auVar31._0_8_;
  *(undefined8 *)(puVar3 + -0x20) = uVar14;
  *(long *)(puVar3 + -0x18) = lVar12;
  *(undefined1 **)(puVar3 + -0x10) = puVar28;
  *(undefined **)(puVar3 + -8) = puVar30;
  plVar9 = (long *)(lVar18 + 0x10);
  lVar23 = *plVar9;
  if (lVar23 == 0) {
code_r0x0286596c:
    uVar13 = uVar14;
    plVar9 = (long *)func_0x00f78af4();
    lVar23 = extraout_x8;
    uVar24 = extraout_w9;
  }
  else {
    uVar24 = *(uint *)(lVar18 + 0x18);
    if (uVar24 == (uint)*(long *)(lVar23 + 0x18)) {
      iVar8 = 4;
      if (*(long *)(lVar23 + 0x18) != 0) {
        iVar8 = uVar24 << 1;
      }
      plVar9 = (long *)(*(code *)**(undefined8 **)(*(long *)(plVar20[3] + 0xc0) + 0x38))
                                 (plVar9,iVar8);
      lVar23 = *(long *)(lVar18 + 0x10);
      uVar24 = *(uint *)(lVar18 + 0x18);
      *(uint *)(lVar18 + 0x18) = uVar24 + 1;
      uVar14 = uVar13;
      if (lVar23 != 0) goto code_r0x02865978;
      goto code_r0x0286596c;
    }
  }
  *(uint *)(lVar18 + 0x18) = uVar24 + 1;
code_r0x02865978:
  if (uVar24 < *(uint *)(lVar23 + 0x18)) {
    *(undefined8 *)(lVar23 + (long)(int)uVar24 * 8 + 0x20) = uVar13;
    *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
    return plVar9;
  }
  uVar14 = func_0x00f78b24();
  func_0x00f78ac0(uVar14,0);
  *(undefined8 *)(puVar3 + -0x40) = uVar13;
  *(long *)(puVar3 + -0x38) = lVar18;
  *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x28) = &System_Collections_Generic_Stack_object___ThrowForEmptyStack;
  func_0x00f78a24(0x3d22a38);
  uVar14 = func_0x00f78aec();
  uVar15 = func_0x00f78a24(0x3d72ca8);
  lVar12 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar15);
  uVar15 = func_0x00f78a24(0x3d40438);
  auVar31 = func_0x00f78ac0(uVar14,uVar15);
  lVar23 = auVar31._0_8_;
  *(undefined8 *)(puVar3 + -0x60) = uVar13;
  *(undefined8 *)(puVar3 + -0x58) = uVar14;
  *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x30;
  *(undefined **)(puVar3 + -0x48) =
       &System_Collections_Generic_Stack_SequenceNode_SequenceConstructPosContext____ctor;
  if (lVar23 == 0) {
    auVar31 = func_0x00f78af4();
    lVar23 = auVar31._0_8_;
    *(undefined8 *)(puVar3 + -0x90) = uVar16;
    *(undefined8 *)(puVar3 + -0x88) = uVar17;
    *(undefined8 *)(puVar3 + -0x80) = uVar13;
    *(undefined8 *)(puVar3 + -0x78) = uVar14;
    *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x50;
    *(undefined **)(puVar3 + -0x68) =
         &System_Collections_Generic_Stack_SequenceNode_SequenceConstructPosContext____ctor;
    if (lVar23 == 0) {
      func_0x00f78af4();
    }
    else {
      /*System.Object$$.ctor*/ func_0x0294d018(lVar23,0);
      uVar13 = auVar31._8_8_;
      if (-1 < auVar31._8_4_) {
        lVar12 = *(long *)(*(long *)(*(long *)(lVar12 + 0x18) + 0xc0) + 8);
        if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar12);
        }
        plVar9 = (long *)func_0x00f78a34(lVar12,auVar31._8_8_);
        *(long **)(lVar23 + 0x10) = plVar9;
        return plVar9;
      }
    }
    *(int *)(puVar3 + -0x94) = (int)uVar13;
    uVar14 = func_0x00f78a24(0x3d22910);
    uVar14 = func_0x00f78ae0(uVar14,puVar3 + -0x94);
    func_0x00f78a24(0x3d1fcf8);
    uVar16 = func_0x00f78aec();
    uVar17 = func_0x00f78a24(0x3d781d8);
    uVar13 = func_0x00f78a24(0x3d70548);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(uVar16,uVar17,uVar14,uVar13,0);
    uVar14 = func_0x00f78a24(0x3d40520);
    lVar23 = func_0x00f78ac0(uVar16,uVar14);
    return (long *)(ulong)*(uint *)(lVar23 + 0x18);
  }
  /*System.Object$$.ctor*/ func_0x0294d018(lVar23,0);
  plVar9 = (long *)(**(code **)**(undefined8 **)(*(long *)(auVar31._8_8_ + 0x18) + 0xc0))();
  *(long **)(lVar23 + 0x10) = plVar9;
  return plVar9;
}



// ============================================================
// RVA: 0x144b1d8 | Atlas.ApplicationBehaviour.StartGame
// ============================================================

long Atlas_ApplicationBehaviour__StartGame(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb473d & 1) == 0) {
    func_0x00f78a20(0x3d26880);
    bRam0000000003eb473d = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.ApplicationBehaviour.<StartGame>d__83_TypeInfo*/ uRam0000000003d26880);
  /*Atlas.ApplicationBehaviour.<StartGame>d__83$$.ctor*/ func_0x015333ac(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  if (*(char *)(lVar1 + 0x1c9) != '\0') {
    return lVar1;
  }
  *(undefined1 *)(lVar1 + 0x1c9) = 1;
  lVar2 = /*Atlas.ApplicationBehaviour$$RebootGameCoroutine*/ func_0x0144b294();
  if (lVar2 == 0) {
    func_0x00f78a24(0x3d23938,0,0);
    uVar4 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d7b500);
    /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar4,uVar5,0);
  }
  else {
    if (pcRam0000000003ec01d0 == (code *)0x0) {
      pcRam0000000003ec01d0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                  );
    }
    uVar3 = (*pcRam0000000003ec01d0)(lVar1);
    if ((uVar3 & 1) != 0) {
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (*pcRam0000000003ec01e0)(lVar1,lVar2);
      return lVar1;
    }
    func_0x00f78a24(0x3d1fce8);
    uVar4 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d6af80);
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar4,uVar5,0);
  }
  uVar5 = func_0x00f78a24(0x3d5a8a8);
  auVar6 = func_0x00f78ac0(uVar4,uVar5);
  if (pcRam0000000003ec01e0 == (code *)0x0) {
    pcRam0000000003ec01e0 =
         (code *)func_0x00f789d4(
                                "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*pcRam0000000003ec01e0)(auVar6._0_8_,auVar6._8_8_);
  return lVar1;
}



// ============================================================
// RVA: 0x144b24c | Atlas.ApplicationBehaviour.RebootGame
// ============================================================

void Atlas_ApplicationBehaviour__RebootGame(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if (*(char *)(param_1 + 0x1c9) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x1c9) = 1;
  lVar1 = /*Atlas.ApplicationBehaviour$$RebootGameCoroutine*/ func_0x0144b294();
  if (lVar1 == 0) {
    func_0x00f78a24(0x3d23938,0,0);
    uVar3 = func_0x00f78aec();
    uVar4 = func_0x00f78a24(0x3d7b500);
    /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar3,uVar4,0);
  }
  else {
    if (pcRam0000000003ec01d0 == (code *)0x0) {
      pcRam0000000003ec01d0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                  );
    }
    uVar2 = (*pcRam0000000003ec01d0)(param_1);
    if ((uVar2 & 1) != 0) {
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ec01e0)(param_1,lVar1);
      return;
    }
    func_0x00f78a24(0x3d1fce8);
    uVar3 = func_0x00f78aec();
    uVar4 = func_0x00f78a24(0x3d6af80);
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar3,uVar4,0);
  }
  uVar4 = func_0x00f78a24(0x3d5a8a8);
  auVar5 = func_0x00f78ac0(uVar3,uVar4);
  if (pcRam0000000003ec01e0 == (code *)0x0) {
    pcRam0000000003ec01e0 =
         (code *)func_0x00f789d4(
                                "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec01e0)(auVar5._0_8_,auVar5._8_8_);
  return;
}



// ============================================================
// RVA: 0x144b294 | Atlas.ApplicationBehaviour.RebootGameCoroutine
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x144b308 | Atlas.ApplicationBehaviour.StartMusic
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x144b488 | Atlas.ApplicationBehaviour.InitCameraManager
// ============================================================

ulong Atlas_ApplicationBehaviour__InitCameraManager(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  int extraout_w1;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar16;
  undefined1 **unaff_x24;
  undefined8 unaff_x25;
  undefined *unaff_x26;
  undefined1 auVar17 [16];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined1 **ppuStack_100;
  undefined1 **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar11 = *(long *)(param_1 + 0x90);
  uVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
  if (lVar11 != 0) {
    /*Core.Cameras.CameraManager$$Init*/ func_0x01639f10(lVar11,uVar5,0);
    if (*(long *)(param_1 + 0xa0) != 0) {
      /*Atlas.AtlasCameras$$Init*/ func_0x01461034(*(long *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x90),
                      *(undefined8 *)(param_1 + 0x88),0);
      lVar11 = *(long *)(param_1 + 0xa0);
      if (lVar11 != 0) {
        if ((bRam0000000003eb4811 & 1) == 0) {
          func_0x00f78a20(0x3d26968,0);
          func_0x00f78a20(0x3d52280);
          func_0x00f78a20(0x3d6ac38);
          func_0x00f78a20(0x3d6ba50);
          func_0x00f78a20(0x3d6ac30);
          bRam0000000003eb4811 = 1;
        }
        lVar12 = *(long *)(lVar11 + 0x18);
        uVar5 = func_0x00f78aec(/*Core.Assets.AssetManager.AssetLoadSuccessHandler_TypeInfo*/ uRam0000000003d26968);
        uVar8 = 0;
        /*Core.Assets.AssetManager.AssetLoadSuccessHandler$$.ctor*/ func_0x016378e4(uVar5,lVar11,uRam0000000003d52280,0);
        if (lVar12 != 0) {
          unaff_x24 = (undefined1 **)0x3d6ba50;
          uVar3 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635cb0(lVar12,/*STR('Common/Cameras/P_GameContextCamera.prefab')*/ uRam0000000003d6ac38,/*STR('Default')*/ uRam0000000003d6ba50,uVar5,0,0);
          *(undefined4 *)(lVar11 + 0x20) = uVar3;
          lVar12 = *(long *)(lVar11 + 0x18);
          uVar5 = func_0x00f78aec(/*Core.Assets.AssetManager.AssetLoadSuccessHandler_TypeInfo*/ uRam0000000003d26968);
          uVar8 = 0;
          /*Core.Assets.AssetManager.AssetLoadSuccessHandler$$.ctor*/ func_0x016378e4(uVar5,lVar11,uRam0000000003d52280,0);
          if (lVar12 != 0) {
            uVar8 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635cb0(lVar12,/*STR('Common/Cameras/P_FrontEndCamera.prefab')*/ uRam0000000003d6ac30,/*STR('Default')*/ uRam0000000003d6ba50,uVar5,0,0);
            *(int *)(lVar11 + 0x24) = (int)uVar8;
            return uVar8;
          }
        }
        uVar5 = func_0x00f78af4();
        puStack_48 = &Atlas_AtlasCameras__WaitOnLoad;
        puStack_50 = &stack0xfffffffffffffff0;
        if ((bRam0000000003eb4812 & 1) == 0) {
          func_0x00f78a20(0x3d26a00);
          bRam0000000003eb4812 = 1;
        }
        uVar6 = func_0x00f78aec(/*Atlas.AtlasCameras.<WaitOnLoad>d__14_TypeInfo*/ uRam0000000003d26a00);
        /*Atlas.AtlasCameras.<WaitOnLoad>d__14$$.ctor*/ func_0x0154581c(uVar6,0,0);
        if (uVar6 != 0) {
          *(undefined8 *)(uVar6 + 0x20) = uVar5;
          return uVar6;
        }
        auVar17 = func_0x00f78af4();
        plVar7 = auVar17._8_8_;
        lVar11 = auVar17._0_8_;
        puStack_a8 = (undefined *)0x3d26968;
        ppuStack_b0 = unaff_x24;
        if ((bRam0000000003eb4813 & 1) == 0) {
          func_0x00f78a20(0x3d1fdb0);
          func_0x00f78a20(0x3d21b60);
          func_0x00f78a20(0x3d5b098);
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d6d1b8);
          func_0x00f78a20(0x3d6d048);
          bRam0000000003eb4813 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)0x0;
        }
        else if (*plVar7 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60) {
          plVar7 = (long *)0x0;
        }
        uVar5 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar7,uRam0000000003d5b098);
        uVar3 = *(undefined4 *)(lVar11 + 0x20);
        if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*Core.Assets.AssetManagerHandle$$op_Equality*/ func_0x016365d4(uVar8 & 0xffffffff,uVar3,0);
        if (iVar4 == 0) {
          uVar3 = *(undefined4 *)(lVar11 + 0x24);
          if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*Core.Assets.AssetManagerHandle$$op_Equality*/ func_0x016365d4(uVar8 & 0xffffffff,uVar3,0);
          if (iVar4 == 0) goto code_r0x014614d0;
          puVar9 = (undefined8 *)(lVar11 + 0x30);
          puVar10 = (undefined8 *)0x3d6d048;
        }
        else {
          puVar9 = (undefined8 *)(lVar11 + 0x28);
          puVar10 = (undefined8 *)0x3d6d1b8;
        }
        *puVar9 = uVar5;
        /*Atlas.AtlasCameras$$RegisterCameraGameObject*/ func_0x01461574(lVar11,*puVar10,uVar5);
code_r0x014614d0:
        uVar5 = *(undefined8 *)(lVar11 + 0x28);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
        uVar2 = 0;
        if (iVar4 != 0) {
          uVar5 = *(undefined8 *)(lVar11 + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
        }
        *(undefined1 *)(lVar11 + 0x38) = uVar2;
        uVar5 = *(undefined8 *)(lVar11 + 0x28);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
        *(char *)(lVar11 + 0x38) = (char)uVar8;
        return uVar8;
      }
    }
  }
  lVar11 = func_0x00f78af4();
  if (*(long *)(lVar11 + 0xa0) != 0) {
    /*Atlas.AtlasCameras$$DeInit*/ func_0x0146103c(*(long *)(lVar11 + 0xa0),0);
    if (*(long *)(lVar11 + 0x90) != 0) {
      uVar8 = /*Core.Cameras.CameraManager$$DeInit*/ func_0x0163a030(*(long *)(lVar11 + 0x90),0);
      *(undefined8 *)(lVar11 + 0xa0) = 0;
      *(undefined8 *)(lVar11 + 0x90) = 0;
      return uVar8;
    }
  }
  auVar17 = func_0x00f78af4();
  uVar5 = auVar17._8_8_;
  lVar11 = auVar17._0_8_;
  puStack_48 = &Atlas_ApplicationBehaviour__InitNetwork;
  uVar14 = 0x3eb4000;
  puStack_50 = &stack0xffffffffffffffd0;
  if ((bRam0000000003eb4740 & 1) == 0) {
    func_0x00f78a20(0x3d43658);
    func_0x00f78a20(0x3d43660);
    func_0x00f78a20(0x3d43668);
    func_0x00f78a20(0x3d43670);
    func_0x00f78a20(0x3d43678);
    func_0x00f78a20(0x3d43680);
    func_0x00f78a20(0x3d43688);
    func_0x00f78a20(0x3d43690);
    func_0x00f78a20(0x3d43698);
    func_0x00f78a20(0x3d436a0);
    bRam0000000003eb4740 = 1;
  }
  if (*(long *)(lVar11 + 0x110) == 0) {
code_r0x0144b71c:
    lVar12 = func_0x00f78af4();
    puStack_a8 = &Atlas_ApplicationBehaviour__DeInitNetwork;
    ppuStack_b0 = &puStack_50;
    if (*(long *)(lVar12 + 0x108) != 0) {
      uStack_c0 = uVar5;
      lStack_b8 = lVar11;
      /*Atlas.Networking.Network$$DeInit*/ func_0x0149df24(*(long *)(lVar12 + 0x108),0);
      auVar17._8_8_ = uStack_c0;
      auVar17._0_8_ = lStack_b8;
      uVar8 = *(ulong *)(lVar12 + 0x110);
      if (uVar8 != 0) {
        *(undefined8 *)(uVar8 + 0x10) = 0;
        *(undefined8 *)(uVar8 + 0x18) = 0;
        *(undefined4 *)(uVar8 + 0x20) = 0;
        return uVar8;
      }
    }
    uStack_c0 = auVar17._8_8_;
    lStack_b8 = auVar17._0_8_;
    auVar17 = func_0x00f78af4();
    lVar11 = auVar17._0_8_;
    puStack_c8 = &Atlas_ApplicationBehaviour__InitUI;
    puStack_110 = unaff_x26;
    uStack_108 = unaff_x25;
    ppuStack_100 = unaff_x24;
    ppuStack_f8 = (undefined1 **)unaff_x23;
    uStack_f0 = unaff_x22;
    uStack_e8 = uVar14;
    uStack_e0 = uVar5;
    lStack_d8 = lVar12;
    pppuStack_d0 = &ppuStack_b0;
    if ((bRam0000000003eb4741 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d1fec8);
      func_0x00f78a20(0x3d52500);
      func_0x00f78a20(0x3d52508);
      func_0x00f78a20(0x3d52510);
      func_0x00f78a20(0x3d52518);
      func_0x00f78a20(0x3d52520);
      func_0x00f78a20(0x3d52528);
      func_0x00f78a20(0x3d52530);
      func_0x00f78a20(0x3d52538);
      func_0x00f78a20(0x3d52540);
      func_0x00f78a20(0x3d52548);
      func_0x00f78a20(0x3d52550);
      func_0x00f78a20(0x3d52558);
      func_0x00f78a20(0x3d52560);
      func_0x00f78a20(0x3d52568);
      func_0x00f78a20(0x3d52570);
      func_0x00f78a20(0x3d52578);
      func_0x00f78a20(0x3d52580);
      func_0x00f78a20(0x3d52588);
      func_0x00f78a20(0x3d52590);
      func_0x00f78a20(0x3d52598);
      func_0x00f78a20(0x3d525a0);
      func_0x00f78a20(0x3d525a8);
      func_0x00f78a20(0x3d525b0);
      func_0x00f78a20(0x3d525b8);
      func_0x00f78a20(0x3d525c0);
      func_0x00f78a20(0x3d525c8);
      func_0x00f78a20(0x3d525d0);
      func_0x00f78a20(0x3d525d8);
      func_0x00f78a20(0x3d525e0);
      func_0x00f78a20(0x3d525e8);
      func_0x00f78a20(0x3d525f0);
      func_0x00f78a20(0x3d525f8);
      func_0x00f78a20(0x3d52600);
      func_0x00f78a20(0x3d52608);
      func_0x00f78a20(0x3d52610);
      func_0x00f78a20(0x3d52618);
      func_0x00f78a20(0x3d52620);
      func_0x00f78a20(0x3d52628);
      func_0x00f78a20(0x3d52630);
      func_0x00f78a20(0x3d52638);
      func_0x00f78a20(0x3d52640);
      func_0x00f78a20(0x3d52648);
      func_0x00f78a20(0x3d72468);
      func_0x00f78a20(0x3d723f8);
      func_0x00f78a20(0x3d72408);
      func_0x00f78a20(0x3d72390);
      func_0x00f78a20(0x3d72428);
      func_0x00f78a20(0x3d723d8);
      func_0x00f78a20(0x3d6d100);
      func_0x00f78a20(0x3d723b0);
      func_0x00f78a20(0x3d72398);
      func_0x00f78a20(0x3d6d118);
      func_0x00f78a20(0x3d72348);
      func_0x00f78a20(0x3d72478);
      func_0x00f78a20(0x3d72328);
      func_0x00f78a20(0x3d72380);
      func_0x00f78a20(0x3d72330);
      func_0x00f78a20(0x3d72400);
      func_0x00f78a20(0x3d72448);
      func_0x00f78a20(0x3d72370);
      func_0x00f78a20(0x3d72410);
      func_0x00f78a20(0x3d72358);
      func_0x00f78a20(0x3d72460);
      func_0x00f78a20(0x3d723a8);
      func_0x00f78a20(0x3d72438);
      func_0x00f78a20(0x3d723e0);
      func_0x00f78a20(0x3d72440);
      func_0x00f78a20(0x3d72340);
      func_0x00f78a20(0x3d72458);
      func_0x00f78a20(0x3d723b8);
      func_0x00f78a20(0x3d72378);
      func_0x00f78a20(0x3d72360);
      func_0x00f78a20(0x3d72420);
      func_0x00f78a20(0x3d72450);
      func_0x00f78a20(0x3d72418);
      func_0x00f78a20(0x3d723e8);
      func_0x00f78a20(0x3d72470);
      func_0x00f78a20(0x3d72430);
      func_0x00f78a20(0x3d72388);
      func_0x00f78a20(0x3d723d0);
      func_0x00f78a20(0x3d72350);
      func_0x00f78a20(0x3d72368);
      func_0x00f78a20(0x3d723c0);
      func_0x00f78a20(0x3d72338);
      func_0x00f78a20(0x3d723f0);
      func_0x00f78a20(0x3d72480);
      func_0x00f78a20(0x3d723a0);
      func_0x00f78a20(0x3d723c8);
      bRam0000000003eb4741 = 1;
    }
    uVar14 = *(undefined8 *)(lVar11 + 0x28);
    uVar5 = func_0x00f78aec(/*Atlas.UI.AtlasSharedScreenParams_TypeInfo*/ uRam0000000003d1fec8);
    Atlas_UI_AtlasSharedScreenParams___ctor(uVar5,uVar14,0);
    plVar7 = (long *)(lVar11 + 0xd8);
    lVar12 = *plVar7;
    uVar16 = *(undefined8 *)(lVar11 + 0x28);
    uVar14 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar11,0);
    if (lVar12 != 0) {
      Atlas_UI_AtlasUIManager__Init(lVar12,uVar16,auVar17._8_8_,uVar14,0xd,uVar5,0);
      lVar12 = *plVar7;
      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar12 != 0) {
        Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                  (lVar12,**(undefined8 **)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8),/*STR('Screens/P_DebugOverlayScreen.prefab')*/ uRam0000000003d723c8,
                   /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52528);
        if (*plVar7 != 0) {
          Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                    (*plVar7,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 8),
                     /*STR('Screens/P_ModeSelectScreen.prefab')*/ uRam0000000003d72400,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525b8);
          if (*plVar7 != 0) {
            Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                      (*plVar7,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x10),
                       /*STR('Screens/GameContextScreens/GameInProgressScreen/P_GameInProgressScreen.prefab')*/ uRam0000000003d72360,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52550);
            if (*plVar7 != 0) {
              Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                        (*plVar7,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x18),
                         /*STR('Screens/GameContextScreens/FTUE/GameInProgressScreenFTUE/P_GameInProgressScreenFTUE.prefab')*/ uRam0000000003d72358,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52550);
              if (*plVar7 != 0) {
                Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                          (*plVar7,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x20),
                           /*STR('Screens/GameContextScreens/GameIntroScreen/P_GameIntroScreen.prefab')*/ uRam0000000003d72368,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52558);
                if (*plVar7 != 0) {
                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                            (*plVar7,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x28),
                             /*STR('Screens/GameContextScreens/GameOutroScreen/P_GameOutroScreen.prefab')*/ uRam0000000003d72370,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52560);
                  if (*plVar7 != 0) {
                    Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                              (*plVar7,*(undefined8 *)
                                        (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x30),
                               /*STR('Screens/MaskTransition/P_MaskTransitionScreen.prefab')*/ uRam0000000003d72398,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525a8);
                    if (*plVar7 != 0) {
                      Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                (*plVar7,*(undefined8 *)
                                          (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x38),
                                 /*STR('Screens/P_MultiplayerLobbyScreen.prefab')*/ uRam0000000003d72408,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525c0);
                      if (*plVar7 != 0) {
                        Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                  (*plVar7,*(undefined8 *)
                                            (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x40),
                                   /*STR('Screens/P_TopBarScreen.prefab')*/ uRam0000000003d72418,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52640);
                        if (*plVar7 != 0) {
                          Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                    (*plVar7,*(undefined8 *)
                                              (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x48),
                                     /*STR('Screens/MultiplayerModeSelectScreen/P_MultiplayerModeSelectScreen.prefab')*/ uRam0000000003d723a8,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525c8)
                          ;
                          if (*plVar7 != 0) {
                            Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                      (*plVar7,*(undefined8 *)
                                                (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x58),
                                       /*STR('Screens/KartSelect/P_KartSelectScreen.prefab')*/ uRam0000000003d72378,/*STR('Screens')*/ uRam0000000003d72328,
                                       uRam0000000003d52568);
                            if (*plVar7 != 0) {
                              Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                        (*plVar7,*(undefined8 *)
                                                  (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x50),
                                         /*STR('Screens/CharacterSelect/P_CharacterSelectScreen.prefab')*/ uRam0000000003d72338,/*STR('Screens')*/ uRam0000000003d72328,
                                         uRam0000000003d52518);
                              if (*plVar7 != 0) {
                                Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                          (*plVar7,*(undefined8 *)
                                                    (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x68),
                                           /*STR('Screens/VotingScreen/P_VotingScreen.prefab')*/ uRam0000000003d72480,/*STR('Screens')*/ uRam0000000003d72328,
                                           uRam0000000003d52648);
                                if (*plVar7 != 0) {
                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                            (*plVar7,*(undefined8 *)
                                                      (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x70
                                                      ),/*STR('Screens/ResultsScreen/P_ResultsScreen.prefab')*/ uRam0000000003d72438,/*STR('Screens')*/ uRam0000000003d72328,
                                             uRam0000000003d525f8);
                                  if (*plVar7 != 0) {
                                    Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                              (*plVar7,*(undefined8 *)
                                                        (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) +
                                                        0x78),/*STR('Screens/PostEventScreen/P_PostEventScreen.prefab')*/ uRam0000000003d72430,
                                               /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525f0);
                                    if (*plVar7 != 0) {
                                      Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                (*plVar7,*(undefined8 *)
                                                          (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) +
                                                          0x80),/*STR('Screens/PostArcadeScreen/P_PostArcadeScreen.prefab')*/ uRam0000000003d72428,
                                                 /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525e8);
                                      if (*plVar7 != 0) {
                                        Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                  (*plVar7,*(undefined8 *)
                                                            (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8)
                                                            + 0x88),/*STR('Screens/EndOfRoundScreen/P_EndOfRoundScreen.prefab')*/ uRam0000000003d72348,
                                                   /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52530);
                                        if (*plVar7 != 0) {
                                          Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                    (*plVar7,*(undefined8 *)
                                                              (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8
                                                                        ) + 0x90),
                                                     /*STR('Screens/RewardScreen/P_RewardScreen.prefab')*/ uRam0000000003d72440,/*STR('Screens')*/ uRam0000000003d72328,
                                                     uRam0000000003d52600);
                                          if (*plVar7 != 0) {
                                            Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                      (*plVar7,*(undefined8 *)
                                                                (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                          0xb8) + 0x98),
                                                       /*STR('Screens/Singleplayer/P_SingleplayerOverviewScreen.prefab')*/ uRam0000000003d72470,/*STR('Screens')*/ uRam0000000003d72328,
                                                       uRam0000000003d52630);
                                            if (*plVar7 != 0) {
                                              Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                        (*plVar7,*(undefined8 *)
                                                                  (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                            0xb8) + 0xa0),
                                                         /*STR('Screens/Singleplayer/P_SingleplayerCampaignScreen.prefab')*/ uRam0000000003d72460,/*STR('Screens')*/ uRam0000000003d72328,
                                                         uRam0000000003d52620);
                                              if (*plVar7 != 0) {
                                                Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                          (*plVar7,*(undefined8 *)
                                                                    (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8
                                                                              + 0xb8) + 0xa8),
                                                           /*STR('Screens/Singleplayer/P_SingleplayerChapterScreen.prefab')*/ uRam0000000003d72468,/*STR('Screens')*/ uRam0000000003d72328
                                                           ,uRam0000000003d52628);
                                                if (*plVar7 != 0) {
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xb0),
                                                  /*STR('Screens/PlayWithFriends/P_PlayWithFriendsCodeScreen.prefab')*/ uRam0000000003d72420,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525e0);
                                                  if (*plVar7 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xb8),
                                                  /*STR('Screens/SettingsScreen/P_SettingsScreen.prefab')*/ uRam0000000003d72458,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52618);
                                                  if (*plVar7 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xc0),
                                                  /*STR('Screens/CharacterRank/P_CharacterRankScreen.prefab')*/ uRam0000000003d72330,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52510);
                                                  if (*plVar7 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200),
                                                  /*STR('Screens/Seasons/P_SeasonsScreen.prefab')*/ uRam0000000003d72450,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52610);
                                                  if (*plVar7 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xd0),
                                                  /*STR('Screens/P_FreeplayScreen.prefab')*/ uRam0000000003d723d0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52540);
                                                  if (*plVar7 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xe0),
                                                  /*STR('Screens/P_PauseScreen.prefab')*/ uRam0000000003d72410,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525d8);
                                                  if (*plVar7 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xe8),
                                                  /*STR('Screens/CreditsScreen/P_CreditsScreen.prefab')*/ uRam0000000003d72340,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52520);
                                                  if (*plVar7 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xf0),
                                                  /*STR('Screens/SaveGameScreen/P_SaveGameScreen.prefab')*/ uRam0000000003d72448,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52608);
                                                  if (*plVar7 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xf8),
                                                  /*STR('Screens/MessageBoxScreen/P_MessageBoxScreen.prefab')*/ uRam0000000003d723a0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525b0);
                                                  if (*plVar7 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x100),
                                                  /*STR('Screens/ToolTipScreen/P_ToolTipScreen.prefab')*/ uRam0000000003d72478,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52638);
                                                  if (*plVar7 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xd8),
                                                  /*STR('Screens/FreeplayDifficultyScreen/P_FreeplayDifficultyScreen.prefab')*/ uRam0000000003d72350,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52538);
                                                  if (*plVar7 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x108),
                                                  /*STR('Screens/LicenseScreen/P_LicenseScreen.prefab')*/ uRam0000000003d72388,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52598);
                                                  if (*plVar7 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x110),
                                                  /*STR('Screens/NotificationBoxScreen/P_NotificationBoxScreen.prefab')*/ uRam0000000003d723b0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525d0);
                                                  if (*plVar7 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x118),
                                                  /*STR('Screens/LobbySettingsScreen/P_LobbySettingsScreen.prefab')*/ uRam0000000003d72390,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525a0);
                                                  if (*plVar7 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x128),
                                                  /*STR('Screens/P_ArcadeModeSelectScreen.prefab')*/ uRam0000000003d723c0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52508);
                                                  if (*plVar7 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x120),
                                                  /*STR('Screens/P_ArcadeMapSelectScreen.prefab')*/ uRam0000000003d723b8,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52500);
                                                  if (*plVar7 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x130),
                                                  /*STR('Screens/P_GameArcadeOutroScreen.prefab')*/ uRam0000000003d723d8,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52548);
                                                  if (*plVar7 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x138),
                                                  /*STR('Screens/P_LeagueWeeklyScheduleScreen.prefab')*/ uRam0000000003d723f8,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52590);
                                                  if (*plVar7 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140),
                                                  /*STR('Screens/P_LeagueLeaderboardScreen.prefab')*/ uRam0000000003d723e0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52570);
                                                  if (*plVar7 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x148),
                                                  /*STR('Screens/P_LeaguePodiumScreen.prefab')*/ uRam0000000003d723e8,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52578);
                                                  if (*plVar7 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x150),
                                                  /*STR('Screens/P_LeaguePromotionScreen.prefab')*/ uRam0000000003d723f0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52580);
                                                  if (*plVar7 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar7,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x158),
                                                  /*STR('Screens/LeagueStarsBoxScreen/P_LeagueStarsBoxScreen.prefab')*/ uRam0000000003d72380,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52588);
                                                  if (*(long *)(lVar11 + 0xe8) != 0) {
                                                    Atlas_UI_TransitionManager__Init
                                                              (*(long *)(lVar11 + 0xe8),
                                                               *(undefined8 *)(lVar11 + 0xd8),7,
                                                               *(undefined8 *)
                                                                (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                          0xb8) + 0x30),
                                                               /*STR('GENERIC_LOADING')*/ uRam0000000003d6d100,0);
                                                    if (*(long *)(lVar11 + 0xf0) != 0) {
                                                      Atlas_UI_HostMigrationTransitionManager__Init
                                                                (*(long *)(lVar11 + 0xf0),
                                                                 *(undefined8 *)(lVar11 + 0xd8),
                                                                 *(undefined8 *)(lVar11 + 0x170),
                                                                 *(undefined8 *)(lVar11 + 0x108),10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                            0xb8) + 0x30),
                                                                 /*STR('GENERIC_RECONNECTING')*/ uRam0000000003d6d118,0);
                                                      if (*(long *)(lVar11 + 0x100) != 0) {
                                                                                                                
                                                  Atlas_Contexts_ContextManagerTransitions__Init
                                                            (*(long *)(lVar11 + 0x100),
                                                             *(undefined8 *)(lVar11 + 0xa8),
                                                             *(undefined8 *)(lVar11 + 0xe8),
                                                             *(undefined8 *)(lVar11 + 0x80),
                                                             *(undefined8 *)(lVar11 + 0x88),0);
                                                  if (*(long *)(lVar11 + 0xf8) != 0) {
                                                    Atlas_UI_TopBarManager__Init
                                                              (*(long *)(lVar11 + 0xf8),
                                                               *(undefined8 *)(lVar11 + 0xd8),
                                                               *(undefined8 *)(lVar11 + 0x180),
                                                               *(undefined8 *)(lVar11 + 0x150),0);
                                                    plVar7 = *(long **)(lVar11 + 0x168);
                                                    if (plVar7 != (long *)0x0) {
                                                      (**(code **)(*plVar7 + 0x178))
                                                                (plVar7,uVar5,
                                                                 *(undefined8 *)
                                                                  (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                            0xb8) + 0x100),6,
                                                                 *(undefined8 *)(*plVar7 + 0x180));
                                                      plVar7 = *(long **)(lVar11 + 0x170);
                                                      if (plVar7 != (long *)0x0) {
                                                        (**(code **)(*plVar7 + 0x178))
                                                                  (plVar7,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8
                                                                              + 0xb8) + 0xf8),0xb,
                                                                   *(undefined8 *)(*plVar7 + 0x180))
                                                        ;
                                                        plVar7 = *(long **)(lVar11 + 0x178);
                                                        if (plVar7 != (long *)0x0) {
                                                          (**(code **)(*plVar7 + 0x178))
                                                                    (plVar7,uVar5,
                                                                     *(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x110),5,
                                                  *(undefined8 *)(*plVar7 + 0x180));
                                                  if (*(long *)(lVar11 + 0x1a8) != 0) {
                                                    Atlas_UI_ToastManager__Init
                                                              (*(long *)(lVar11 + 0x1a8),
                                                               *(undefined8 *)(lVar11 + 0xd8),0);
                                                    plVar7 = *(long **)(lVar11 + 0x1c0);
                                                    if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0144c66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                      uVar8 = (**(code **)(*plVar7 + 0x178))
                                                                        (plVar7,uVar5,
                                                                         *(undefined8 *)
                                                                          (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x158),5,
                                                  *(undefined8 *)(*plVar7 + 0x180));
                                                  return uVar8;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar11 = func_0x00f78af4();
    if ((bRam0000000003eb4742 & 1) == 0) {
      func_0x00f78a20(0x3d3e0c8);
      func_0x00f78a20(0x3d3e120);
      func_0x00f78a20(0x3d3e160);
      bRam0000000003eb4742 = 1;
    }
    if (*(long *)(lVar11 + 0x1a8) != 0) {
      Atlas_UI_ToastManager__DeInit(*(long *)(lVar11 + 0x1a8),0);
    }
    if (*(long *)(lVar11 + 0x178) != 0) {
      Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___DeInit
                (*(long *)(lVar11 + 0x178),uRam0000000003d3e120);
    }
    if (*(long *)(lVar11 + 0x170) != 0) {
      Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___DeInit
                (*(long *)(lVar11 + 0x170),uRam0000000003d3e0c8);
    }
    if (*(long *)(lVar11 + 0xf8) != 0) {
      Atlas_UI_TopBarManager__DeInit(*(long *)(lVar11 + 0xf8),0);
    }
    if (*(long *)(lVar11 + 0x168) != 0) {
      Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___DeInit
                (*(long *)(lVar11 + 0x168),uRam0000000003d3e160);
    }
    if (*(long *)(lVar11 + 0x100) != 0) {
      Atlas_Contexts_ContextManagerTransitions__DeInit(*(long *)(lVar11 + 0x100),0);
    }
    lVar12 = *(long *)(lVar11 + 0xe8);
    if (lVar12 != 0) {
      Atlas_UI_TransitionManager__DeInit(lVar12,0);
    }
    if (*(long *)(lVar11 + 0xf0) != 0) {
      Atlas_UI_HostMigrationTransitionManager__DeInit(*(long *)(lVar11 + 0xf0),0);
    }
    uVar8 = 0;
    if (*(long *)(lVar11 + 0xd8) != 0) {
      uVar8 = Atlas_UI_AtlasUIManager__DeInit(*(long *)(lVar11 + 0xd8),0);
    }
    *(undefined8 *)(lVar11 + 0xd8) = 0;
    *(undefined8 *)(lVar11 + 0xf0) = 0;
    *(long *)(lVar11 + 0xe8) = 0;
    *(undefined8 *)(lVar11 + 0x100) = 0;
    *(undefined8 *)(lVar11 + 0xf8) = 0;
    *(undefined8 *)(lVar11 + 0x170) = 0;
    *(undefined8 *)(lVar11 + 0x178) = 0;
    *(undefined8 *)(lVar11 + 0x168) = 0;
    return uVar8;
  }
  /*Atlas.Networking.NetworkIdentifiers$$Init*/ func_0x014a7420(*(long *)(lVar11 + 0x110),0);
  if (*(long *)(lVar11 + 0x108) == 0) goto code_r0x0144b71c;
  unaff_x24 = (undefined1 **)0x3d43000;
  unaff_x25 = 0x3d43000;
  unaff_x26 = (undefined *)0x3d43000;
  uVar14 = 0x3d43000;
  unaff_x22 = 0x3d43000;
  unaff_x23 = 0x3d43000;
  /*Atlas.Networking.Network$$Init*/ func_0x0149dcec(*(long *)(lVar11 + 0x108),*(undefined8 *)(lVar11 + 0x28),0);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(lVar11,uVar5,uRam0000000003d43698);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(lVar11,uVar5,uRam0000000003d43680);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(lVar11,uVar5,uRam0000000003d43668);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(lVar11,uVar5,uRam0000000003d43678);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(lVar11,uVar5,uRam0000000003d43658);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(lVar11,uVar5,uRam0000000003d436a0);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(lVar11,uVar5,uRam0000000003d43670);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(lVar11,uVar5,uRam0000000003d43688);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(lVar11,uVar5,uRam0000000003d43690);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(lVar11,uVar5,uRam0000000003d43660);
  lVar12 = *(long *)(lVar11 + 0x110);
  if (lVar12 == 0) goto code_r0x0144b71c;
  lVar11 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb4a5b & 1) == 0) {
    func_0x00f78a20(0x3d2cf10,0);
    func_0x00f78a20(0x3d1b950);
    func_0x00f78a20(0x3d2fc18);
    func_0x00f78a20(0x3d3bff0);
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d5da78);
    bRam0000000003eb4a5b = 1;
  }
  lVar13 = *(long *)(lVar12 + 0x10);
  uVar14 = func_0x00f78aec(/*System.Comparison<string>_TypeInfo*/ uRam0000000003d1b950);
  uVar5 = uRam0000000003d5da78;
  /*System.Comparison<TimeZoneInfo.AdjustmentRule>$$.ctor*/ func_0x01db3634(uVar14,0,uRam0000000003d5da78,uRam0000000003d2cf10);
  iVar4 = (int)uVar5;
  if (lVar13 != 0) {
    uVar8 = uRam0000000003d3bff0;
    uVar6 = /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$Sort*/ func_0x02428d14(lVar13,uVar14,uRam0000000003d3bff0);
    iVar4 = (int)uVar8;
    lVar13 = *(long *)(lVar12 + 0x10);
    if (lVar13 != 0) {
      uVar1 = *(uint *)(lVar13 + 0x18);
      if ((int)uVar1 < 1) goto code_r0x014a7704;
      uVar15 = 0;
      do {
        iVar4 = (int)uVar8;
        if (*(uint *)(lVar13 + 0x18) <= uVar15) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(lVar12 + 0x18) == 0) break;
        uVar5 = *(undefined8 *)(*(long *)(lVar13 + 0x10) + uVar15 * 8 + 0x20);
        uVar8 = (ulong)(uint)(int)(short)uVar15;
        /*System.Collections.Generic.Dictionary<string, short>$$set_Item*/ func_0x01ecb64c(*(long *)(lVar12 + 0x18),uVar5,uVar8,uRam0000000003d2fc18);
        /*Unity.Collections.FixedString64Bytes$$op_Implicit*/ func_0x02fd8c8c(&puStack_c8,uVar5,0);
        uStack_108 = uStack_c0;
        puStack_110 = puStack_c8;
        ppuStack_f8 = ppuStack_b0;
        ppuStack_100 = (undefined1 **)lStack_b8;
        uStack_f0 = puStack_a8;
        uVar6 = /*Core.Services.Client$$Hash*/ func_0x0166735c(&puStack_110,0);
        iVar4 = (int)uVar8;
        *(int *)(lVar12 + 0x20) = (int)uVar6 + *(int *)(lVar12 + 0x20) * 0x1f + 0x3fd1;
        if ((ulong)uVar1 - 1 == uVar15) goto code_r0x014a7704;
        lVar13 = *(long *)(lVar12 + 0x10);
        uVar15 = uVar15 + 1;
      } while (lVar13 != 0);
    }
  }
  uVar6 = func_0x00f78af4();
code_r0x014a7704:
  if (*(long *)PTR_03a5d648 != lVar11) {
    ___stack_chk_fail();
    return (ulong)(extraout_w1 * 0x1f + iVar4 + 0x3fd1);
  }
  return uVar6;
}



// ============================================================
// RVA: 0x144b4e8 | Atlas.ApplicationBehaviour.DeInitCameras
// ============================================================

ulong Atlas_ApplicationBehaviour__DeInitCameras(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int extraout_w1;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar11;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long *plVar12;
  undefined *unaff_x26;
  undefined1 auVar13 [16];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    /*Atlas.AtlasCameras$$DeInit*/ func_0x0146103c(*(long *)(param_1 + 0xa0),0);
    if (*(long *)(param_1 + 0x90) != 0) {
      uVar2 = /*Core.Cameras.CameraManager$$DeInit*/ func_0x0163a030(*(long *)(param_1 + 0x90),0);
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      return uVar2;
    }
  }
  auVar13 = func_0x00f78af4();
  uVar8 = auVar13._8_8_;
  lVar6 = auVar13._0_8_;
  puStack_28 = &Atlas_ApplicationBehaviour__InitNetwork;
  uVar9 = 0x3eb4000;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4740 & 1) == 0) {
    func_0x00f78a20(0x3d43658);
    func_0x00f78a20(0x3d43660);
    func_0x00f78a20(0x3d43668);
    func_0x00f78a20(0x3d43670);
    func_0x00f78a20(0x3d43678);
    func_0x00f78a20(0x3d43680);
    func_0x00f78a20(0x3d43688);
    func_0x00f78a20(0x3d43690);
    func_0x00f78a20(0x3d43698);
    func_0x00f78a20(0x3d436a0);
    bRam0000000003eb4740 = 1;
  }
  if (*(long *)(lVar6 + 0x110) == 0) {
code_r0x0144b71c:
    lVar3 = func_0x00f78af4();
    puStack_88 = &Atlas_ApplicationBehaviour__DeInitNetwork;
    ppuStack_90 = &puStack_30;
    if (*(long *)(lVar3 + 0x108) != 0) {
      uStack_a0 = uVar8;
      lStack_98 = lVar6;
      /*Atlas.Networking.Network$$DeInit*/ func_0x0149df24(*(long *)(lVar3 + 0x108),0);
      auVar13._8_8_ = uStack_a0;
      auVar13._0_8_ = lStack_98;
      uVar2 = *(ulong *)(lVar3 + 0x110);
      if (uVar2 != 0) {
        *(undefined8 *)(uVar2 + 0x10) = 0;
        *(undefined8 *)(uVar2 + 0x18) = 0;
        *(undefined4 *)(uVar2 + 0x20) = 0;
        return uVar2;
      }
    }
    uStack_a0 = auVar13._8_8_;
    lStack_98 = auVar13._0_8_;
    auVar13 = func_0x00f78af4();
    lVar6 = auVar13._0_8_;
    puStack_a8 = &Atlas_ApplicationBehaviour__InitUI;
    puStack_f0 = unaff_x26;
    uStack_e8 = unaff_x25;
    uStack_e0 = unaff_x24;
    puStack_d8 = (undefined8 *)unaff_x23;
    uStack_d0 = unaff_x22;
    uStack_c8 = uVar9;
    uStack_c0 = uVar8;
    lStack_b8 = lVar3;
    ppuStack_b0 = &ppuStack_90;
    if ((bRam0000000003eb4741 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d1fec8);
      func_0x00f78a20(0x3d52500);
      func_0x00f78a20(0x3d52508);
      func_0x00f78a20(0x3d52510);
      func_0x00f78a20(0x3d52518);
      func_0x00f78a20(0x3d52520);
      func_0x00f78a20(0x3d52528);
      func_0x00f78a20(0x3d52530);
      func_0x00f78a20(0x3d52538);
      func_0x00f78a20(0x3d52540);
      func_0x00f78a20(0x3d52548);
      func_0x00f78a20(0x3d52550);
      func_0x00f78a20(0x3d52558);
      func_0x00f78a20(0x3d52560);
      func_0x00f78a20(0x3d52568);
      func_0x00f78a20(0x3d52570);
      func_0x00f78a20(0x3d52578);
      func_0x00f78a20(0x3d52580);
      func_0x00f78a20(0x3d52588);
      func_0x00f78a20(0x3d52590);
      func_0x00f78a20(0x3d52598);
      func_0x00f78a20(0x3d525a0);
      func_0x00f78a20(0x3d525a8);
      func_0x00f78a20(0x3d525b0);
      func_0x00f78a20(0x3d525b8);
      func_0x00f78a20(0x3d525c0);
      func_0x00f78a20(0x3d525c8);
      func_0x00f78a20(0x3d525d0);
      func_0x00f78a20(0x3d525d8);
      func_0x00f78a20(0x3d525e0);
      func_0x00f78a20(0x3d525e8);
      func_0x00f78a20(0x3d525f0);
      func_0x00f78a20(0x3d525f8);
      func_0x00f78a20(0x3d52600);
      func_0x00f78a20(0x3d52608);
      func_0x00f78a20(0x3d52610);
      func_0x00f78a20(0x3d52618);
      func_0x00f78a20(0x3d52620);
      func_0x00f78a20(0x3d52628);
      func_0x00f78a20(0x3d52630);
      func_0x00f78a20(0x3d52638);
      func_0x00f78a20(0x3d52640);
      func_0x00f78a20(0x3d52648);
      func_0x00f78a20(0x3d72468);
      func_0x00f78a20(0x3d723f8);
      func_0x00f78a20(0x3d72408);
      func_0x00f78a20(0x3d72390);
      func_0x00f78a20(0x3d72428);
      func_0x00f78a20(0x3d723d8);
      func_0x00f78a20(0x3d6d100);
      func_0x00f78a20(0x3d723b0);
      func_0x00f78a20(0x3d72398);
      func_0x00f78a20(0x3d6d118);
      func_0x00f78a20(0x3d72348);
      func_0x00f78a20(0x3d72478);
      func_0x00f78a20(0x3d72328);
      func_0x00f78a20(0x3d72380);
      func_0x00f78a20(0x3d72330);
      func_0x00f78a20(0x3d72400);
      func_0x00f78a20(0x3d72448);
      func_0x00f78a20(0x3d72370);
      func_0x00f78a20(0x3d72410);
      func_0x00f78a20(0x3d72358);
      func_0x00f78a20(0x3d72460);
      func_0x00f78a20(0x3d723a8);
      func_0x00f78a20(0x3d72438);
      func_0x00f78a20(0x3d723e0);
      func_0x00f78a20(0x3d72440);
      func_0x00f78a20(0x3d72340);
      func_0x00f78a20(0x3d72458);
      func_0x00f78a20(0x3d723b8);
      func_0x00f78a20(0x3d72378);
      func_0x00f78a20(0x3d72360);
      func_0x00f78a20(0x3d72420);
      func_0x00f78a20(0x3d72450);
      func_0x00f78a20(0x3d72418);
      func_0x00f78a20(0x3d723e8);
      func_0x00f78a20(0x3d72470);
      func_0x00f78a20(0x3d72430);
      func_0x00f78a20(0x3d72388);
      func_0x00f78a20(0x3d723d0);
      func_0x00f78a20(0x3d72350);
      func_0x00f78a20(0x3d72368);
      func_0x00f78a20(0x3d723c0);
      func_0x00f78a20(0x3d72338);
      func_0x00f78a20(0x3d723f0);
      func_0x00f78a20(0x3d72480);
      func_0x00f78a20(0x3d723a0);
      func_0x00f78a20(0x3d723c8);
      bRam0000000003eb4741 = 1;
    }
    uVar9 = *(undefined8 *)(lVar6 + 0x28);
    uVar8 = func_0x00f78aec(/*Atlas.UI.AtlasSharedScreenParams_TypeInfo*/ uRam0000000003d1fec8);
    Atlas_UI_AtlasSharedScreenParams___ctor(uVar8,uVar9,0);
    plVar12 = (long *)(lVar6 + 0xd8);
    lVar3 = *plVar12;
    uVar11 = *(undefined8 *)(lVar6 + 0x28);
    uVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0);
    if (lVar3 != 0) {
      Atlas_UI_AtlasUIManager__Init(lVar3,uVar11,auVar13._8_8_,uVar9,0xd,uVar8,0);
      lVar3 = *plVar12;
      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar3 != 0) {
        Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                  (lVar3,**(undefined8 **)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8),/*STR('Screens/P_DebugOverlayScreen.prefab')*/ uRam0000000003d723c8,
                   /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52528);
        if (*plVar12 != 0) {
          Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                    (*plVar12,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 8),
                     /*STR('Screens/P_ModeSelectScreen.prefab')*/ uRam0000000003d72400,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525b8);
          if (*plVar12 != 0) {
            Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                      (*plVar12,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x10),
                       /*STR('Screens/GameContextScreens/GameInProgressScreen/P_GameInProgressScreen.prefab')*/ uRam0000000003d72360,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52550);
            if (*plVar12 != 0) {
              Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                        (*plVar12,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x18),
                         /*STR('Screens/GameContextScreens/FTUE/GameInProgressScreenFTUE/P_GameInProgressScreenFTUE.prefab')*/ uRam0000000003d72358,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52550);
              if (*plVar12 != 0) {
                Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                          (*plVar12,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x20),
                           /*STR('Screens/GameContextScreens/GameIntroScreen/P_GameIntroScreen.prefab')*/ uRam0000000003d72368,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52558);
                if (*plVar12 != 0) {
                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                            (*plVar12,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x28)
                             ,/*STR('Screens/GameContextScreens/GameOutroScreen/P_GameOutroScreen.prefab')*/ uRam0000000003d72370,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52560);
                  if (*plVar12 != 0) {
                    Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                              (*plVar12,*(undefined8 *)
                                         (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x30),
                               /*STR('Screens/MaskTransition/P_MaskTransitionScreen.prefab')*/ uRam0000000003d72398,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525a8);
                    if (*plVar12 != 0) {
                      Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                (*plVar12,*(undefined8 *)
                                           (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x38),
                                 /*STR('Screens/P_MultiplayerLobbyScreen.prefab')*/ uRam0000000003d72408,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525c0);
                      if (*plVar12 != 0) {
                        Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                  (*plVar12,*(undefined8 *)
                                             (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x40),
                                   /*STR('Screens/P_TopBarScreen.prefab')*/ uRam0000000003d72418,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52640);
                        if (*plVar12 != 0) {
                          Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                    (*plVar12,*(undefined8 *)
                                               (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x48),
                                     /*STR('Screens/MultiplayerModeSelectScreen/P_MultiplayerModeSelectScreen.prefab')*/ uRam0000000003d723a8,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525c8)
                          ;
                          if (*plVar12 != 0) {
                            Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                      (*plVar12,*(undefined8 *)
                                                 (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x58),
                                       /*STR('Screens/KartSelect/P_KartSelectScreen.prefab')*/ uRam0000000003d72378,/*STR('Screens')*/ uRam0000000003d72328,
                                       uRam0000000003d52568);
                            if (*plVar12 != 0) {
                              Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                        (*plVar12,*(undefined8 *)
                                                   (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x50),
                                         /*STR('Screens/CharacterSelect/P_CharacterSelectScreen.prefab')*/ uRam0000000003d72338,/*STR('Screens')*/ uRam0000000003d72328,
                                         uRam0000000003d52518);
                              if (*plVar12 != 0) {
                                Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                          (*plVar12,*(undefined8 *)
                                                     (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x68)
                                           ,/*STR('Screens/VotingScreen/P_VotingScreen.prefab')*/ uRam0000000003d72480,/*STR('Screens')*/ uRam0000000003d72328,
                                           uRam0000000003d52648);
                                if (*plVar12 != 0) {
                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                            (*plVar12,*(undefined8 *)
                                                       (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) +
                                                       0x70),/*STR('Screens/ResultsScreen/P_ResultsScreen.prefab')*/ uRam0000000003d72438,
                                             /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525f8);
                                  if (*plVar12 != 0) {
                                    Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                              (*plVar12,*(undefined8 *)
                                                         (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) +
                                                         0x78),/*STR('Screens/PostEventScreen/P_PostEventScreen.prefab')*/ uRam0000000003d72430,
                                               /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525f0);
                                    if (*plVar12 != 0) {
                                      Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                (*plVar12,*(undefined8 *)
                                                           (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) +
                                                           0x80),/*STR('Screens/PostArcadeScreen/P_PostArcadeScreen.prefab')*/ uRam0000000003d72428,
                                                 /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525e8);
                                      if (*plVar12 != 0) {
                                        Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                  (*plVar12,*(undefined8 *)
                                                             (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8)
                                                             + 0x88),/*STR('Screens/EndOfRoundScreen/P_EndOfRoundScreen.prefab')*/ uRam0000000003d72348,
                                                   /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52530);
                                        if (*plVar12 != 0) {
                                          Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                    (*plVar12,*(undefined8 *)
                                                               (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                         0xb8) + 0x90),
                                                     /*STR('Screens/RewardScreen/P_RewardScreen.prefab')*/ uRam0000000003d72440,/*STR('Screens')*/ uRam0000000003d72328,
                                                     uRam0000000003d52600);
                                          if (*plVar12 != 0) {
                                            Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                      (*plVar12,*(undefined8 *)
                                                                 (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                           0xb8) + 0x98),
                                                       /*STR('Screens/Singleplayer/P_SingleplayerOverviewScreen.prefab')*/ uRam0000000003d72470,/*STR('Screens')*/ uRam0000000003d72328,
                                                       uRam0000000003d52630);
                                            if (*plVar12 != 0) {
                                              Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                        (*plVar12,*(undefined8 *)
                                                                   (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                             0xb8) + 0xa0),
                                                         /*STR('Screens/Singleplayer/P_SingleplayerCampaignScreen.prefab')*/ uRam0000000003d72460,/*STR('Screens')*/ uRam0000000003d72328,
                                                         uRam0000000003d52620);
                                              if (*plVar12 != 0) {
                                                Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                          (*plVar12,*(undefined8 *)
                                                                     (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8
                                                                               + 0xb8) + 0xa8),
                                                           /*STR('Screens/Singleplayer/P_SingleplayerChapterScreen.prefab')*/ uRam0000000003d72468,/*STR('Screens')*/ uRam0000000003d72328
                                                           ,uRam0000000003d52628);
                                                if (*plVar12 != 0) {
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xb0),
                                                  /*STR('Screens/PlayWithFriends/P_PlayWithFriendsCodeScreen.prefab')*/ uRam0000000003d72420,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525e0);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xb8),
                                                  /*STR('Screens/SettingsScreen/P_SettingsScreen.prefab')*/ uRam0000000003d72458,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52618);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xc0),
                                                  /*STR('Screens/CharacterRank/P_CharacterRankScreen.prefab')*/ uRam0000000003d72330,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52510);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200),
                                                  /*STR('Screens/Seasons/P_SeasonsScreen.prefab')*/ uRam0000000003d72450,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52610);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xd0),
                                                  /*STR('Screens/P_FreeplayScreen.prefab')*/ uRam0000000003d723d0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52540);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xe0),
                                                  /*STR('Screens/P_PauseScreen.prefab')*/ uRam0000000003d72410,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525d8);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xe8),
                                                  /*STR('Screens/CreditsScreen/P_CreditsScreen.prefab')*/ uRam0000000003d72340,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52520);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xf0),
                                                  /*STR('Screens/SaveGameScreen/P_SaveGameScreen.prefab')*/ uRam0000000003d72448,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52608);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xf8),
                                                  /*STR('Screens/MessageBoxScreen/P_MessageBoxScreen.prefab')*/ uRam0000000003d723a0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525b0);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x100),
                                                  /*STR('Screens/ToolTipScreen/P_ToolTipScreen.prefab')*/ uRam0000000003d72478,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52638);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xd8),
                                                  /*STR('Screens/FreeplayDifficultyScreen/P_FreeplayDifficultyScreen.prefab')*/ uRam0000000003d72350,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52538);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x108),
                                                  /*STR('Screens/LicenseScreen/P_LicenseScreen.prefab')*/ uRam0000000003d72388,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52598);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x110),
                                                  /*STR('Screens/NotificationBoxScreen/P_NotificationBoxScreen.prefab')*/ uRam0000000003d723b0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525d0);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x118),
                                                  /*STR('Screens/LobbySettingsScreen/P_LobbySettingsScreen.prefab')*/ uRam0000000003d72390,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525a0);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x128),
                                                  /*STR('Screens/P_ArcadeModeSelectScreen.prefab')*/ uRam0000000003d723c0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52508);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x120),
                                                  /*STR('Screens/P_ArcadeMapSelectScreen.prefab')*/ uRam0000000003d723b8,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52500);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x130),
                                                  /*STR('Screens/P_GameArcadeOutroScreen.prefab')*/ uRam0000000003d723d8,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52548);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x138),
                                                  /*STR('Screens/P_LeagueWeeklyScheduleScreen.prefab')*/ uRam0000000003d723f8,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52590);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140),
                                                  /*STR('Screens/P_LeagueLeaderboardScreen.prefab')*/ uRam0000000003d723e0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52570);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x148),
                                                  /*STR('Screens/P_LeaguePodiumScreen.prefab')*/ uRam0000000003d723e8,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52578);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x150),
                                                  /*STR('Screens/P_LeaguePromotionScreen.prefab')*/ uRam0000000003d723f0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52580);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x158),
                                                  /*STR('Screens/LeagueStarsBoxScreen/P_LeagueStarsBoxScreen.prefab')*/ uRam0000000003d72380,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52588);
                                                  if (*(long *)(lVar6 + 0xe8) != 0) {
                                                    Atlas_UI_TransitionManager__Init
                                                              (*(long *)(lVar6 + 0xe8),
                                                               *(undefined8 *)(lVar6 + 0xd8),7,
                                                               *(undefined8 *)
                                                                (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                          0xb8) + 0x30),
                                                               /*STR('GENERIC_LOADING')*/ uRam0000000003d6d100,0);
                                                    if (*(long *)(lVar6 + 0xf0) != 0) {
                                                      Atlas_UI_HostMigrationTransitionManager__Init
                                                                (*(long *)(lVar6 + 0xf0),
                                                                 *(undefined8 *)(lVar6 + 0xd8),
                                                                 *(undefined8 *)(lVar6 + 0x170),
                                                                 *(undefined8 *)(lVar6 + 0x108),10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                            0xb8) + 0x30),
                                                                 /*STR('GENERIC_RECONNECTING')*/ uRam0000000003d6d118,0);
                                                      if (*(long *)(lVar6 + 0x100) != 0) {
                                                                                                                
                                                  Atlas_Contexts_ContextManagerTransitions__Init
                                                            (*(long *)(lVar6 + 0x100),
                                                             *(undefined8 *)(lVar6 + 0xa8),
                                                             *(undefined8 *)(lVar6 + 0xe8),
                                                             *(undefined8 *)(lVar6 + 0x80),
                                                             *(undefined8 *)(lVar6 + 0x88),0);
                                                  if (*(long *)(lVar6 + 0xf8) != 0) {
                                                    Atlas_UI_TopBarManager__Init
                                                              (*(long *)(lVar6 + 0xf8),
                                                               *(undefined8 *)(lVar6 + 0xd8),
                                                               *(undefined8 *)(lVar6 + 0x180),
                                                               *(undefined8 *)(lVar6 + 0x150),0);
                                                    plVar12 = *(long **)(lVar6 + 0x168);
                                                    if (plVar12 != (long *)0x0) {
                                                      (**(code **)(*plVar12 + 0x178))
                                                                (plVar12,uVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                            0xb8) + 0x100),6,
                                                                 *(undefined8 *)(*plVar12 + 0x180));
                                                      plVar12 = *(long **)(lVar6 + 0x170);
                                                      if (plVar12 != (long *)0x0) {
                                                        (**(code **)(*plVar12 + 0x178))
                                                                  (plVar12,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8
                                                                              + 0xb8) + 0xf8),0xb,
                                                                   *(undefined8 *)(*plVar12 + 0x180)
                                                                  );
                                                        plVar12 = *(long **)(lVar6 + 0x178);
                                                        if (plVar12 != (long *)0x0) {
                                                          (**(code **)(*plVar12 + 0x178))
                                                                    (plVar12,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x110),5,
                                                  *(undefined8 *)(*plVar12 + 0x180));
                                                  if (*(long *)(lVar6 + 0x1a8) != 0) {
                                                    Atlas_UI_ToastManager__Init
                                                              (*(long *)(lVar6 + 0x1a8),
                                                               *(undefined8 *)(lVar6 + 0xd8),0);
                                                    plVar12 = *(long **)(lVar6 + 0x1c0);
                                                    if (plVar12 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0144c66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                      uVar2 = (**(code **)(*plVar12 + 0x178))
                                                                        (plVar12,uVar8,
                                                                         *(undefined8 *)
                                                                          (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x158),5,
                                                  *(undefined8 *)(*plVar12 + 0x180));
                                                  return uVar2;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb4742 & 1) == 0) {
      func_0x00f78a20(0x3d3e0c8);
      func_0x00f78a20(0x3d3e120);
      func_0x00f78a20(0x3d3e160);
      bRam0000000003eb4742 = 1;
    }
    if (*(long *)(lVar6 + 0x1a8) != 0) {
      Atlas_UI_ToastManager__DeInit(*(long *)(lVar6 + 0x1a8),0);
    }
    if (*(long *)(lVar6 + 0x178) != 0) {
      Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___DeInit
                (*(long *)(lVar6 + 0x178),uRam0000000003d3e120);
    }
    if (*(long *)(lVar6 + 0x170) != 0) {
      Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___DeInit
                (*(long *)(lVar6 + 0x170),uRam0000000003d3e0c8);
    }
    if (*(long *)(lVar6 + 0xf8) != 0) {
      Atlas_UI_TopBarManager__DeInit(*(long *)(lVar6 + 0xf8),0);
    }
    if (*(long *)(lVar6 + 0x168) != 0) {
      Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___DeInit
                (*(long *)(lVar6 + 0x168),uRam0000000003d3e160);
    }
    if (*(long *)(lVar6 + 0x100) != 0) {
      Atlas_Contexts_ContextManagerTransitions__DeInit(*(long *)(lVar6 + 0x100),0);
    }
    lVar3 = *(long *)(lVar6 + 0xe8);
    if (lVar3 != 0) {
      Atlas_UI_TransitionManager__DeInit(lVar3,0);
    }
    if (*(long *)(lVar6 + 0xf0) != 0) {
      Atlas_UI_HostMigrationTransitionManager__DeInit(*(long *)(lVar6 + 0xf0),0);
    }
    uVar2 = 0;
    if (*(long *)(lVar6 + 0xd8) != 0) {
      uVar2 = Atlas_UI_AtlasUIManager__DeInit(*(long *)(lVar6 + 0xd8),0);
    }
    *(undefined8 *)(lVar6 + 0xd8) = 0;
    *(undefined8 *)(lVar6 + 0xf0) = 0;
    *(long *)(lVar6 + 0xe8) = 0;
    *(undefined8 *)(lVar6 + 0x100) = 0;
    *(undefined8 *)(lVar6 + 0xf8) = 0;
    *(undefined8 *)(lVar6 + 0x170) = 0;
    *(undefined8 *)(lVar6 + 0x178) = 0;
    *(undefined8 *)(lVar6 + 0x168) = 0;
    return uVar2;
  }
  /*Atlas.Networking.NetworkIdentifiers$$Init*/ func_0x014a7420(*(long *)(lVar6 + 0x110),0);
  if (*(long *)(lVar6 + 0x108) == 0) goto code_r0x0144b71c;
  unaff_x24 = 0x3d43000;
  unaff_x25 = 0x3d43000;
  unaff_x26 = (undefined *)0x3d43000;
  uVar9 = 0x3d43000;
  unaff_x22 = 0x3d43000;
  unaff_x23 = 0x3d43000;
  /*Atlas.Networking.Network$$Init*/ func_0x0149dcec(*(long *)(lVar6 + 0x108),*(undefined8 *)(lVar6 + 0x28),0);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(lVar6,uVar8,uRam0000000003d43698);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(lVar6,uVar8,uRam0000000003d43680);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(lVar6,uVar8,uRam0000000003d43668);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(lVar6,uVar8,uRam0000000003d43678);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(lVar6,uVar8,uRam0000000003d43658);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(lVar6,uVar8,uRam0000000003d436a0);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(lVar6,uVar8,uRam0000000003d43670);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(lVar6,uVar8,uRam0000000003d43688);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(lVar6,uVar8,uRam0000000003d43690);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(lVar6,uVar8,uRam0000000003d43660);
  lVar3 = *(long *)(lVar6 + 0x110);
  if (lVar3 == 0) goto code_r0x0144b71c;
  lVar6 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb4a5b & 1) == 0) {
    func_0x00f78a20(0x3d2cf10,0);
    func_0x00f78a20(0x3d1b950);
    func_0x00f78a20(0x3d2fc18);
    func_0x00f78a20(0x3d3bff0);
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d5da78);
    bRam0000000003eb4a5b = 1;
  }
  lVar7 = *(long *)(lVar3 + 0x10);
  uVar9 = func_0x00f78aec(/*System.Comparison<string>_TypeInfo*/ uRam0000000003d1b950);
  uVar8 = uRam0000000003d5da78;
  /*System.Comparison<TimeZoneInfo.AdjustmentRule>$$.ctor*/ func_0x01db3634(uVar9,0,uRam0000000003d5da78,uRam0000000003d2cf10);
  iVar5 = (int)uVar8;
  if (lVar7 != 0) {
    uVar2 = uRam0000000003d3bff0;
    uVar4 = /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$Sort*/ func_0x02428d14(lVar7,uVar9,uRam0000000003d3bff0);
    iVar5 = (int)uVar2;
    lVar7 = *(long *)(lVar3 + 0x10);
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if ((int)uVar1 < 1) goto code_r0x014a7704;
      uVar10 = 0;
      do {
        iVar5 = (int)uVar2;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(lVar3 + 0x18) == 0) break;
        uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + uVar10 * 8 + 0x20);
        uVar2 = (ulong)(uint)(int)(short)uVar10;
        /*System.Collections.Generic.Dictionary<string, short>$$set_Item*/ func_0x01ecb64c(*(long *)(lVar3 + 0x18),uVar8,uVar2,uRam0000000003d2fc18);
        /*Unity.Collections.FixedString64Bytes$$op_Implicit*/ func_0x02fd8c8c(&puStack_a8,uVar8,0);
        uStack_e8 = uStack_a0;
        puStack_f0 = puStack_a8;
        puStack_d8 = ppuStack_90;
        uStack_e0 = lStack_98;
        uStack_d0 = puStack_88;
        uVar4 = /*Core.Services.Client$$Hash*/ func_0x0166735c(&puStack_f0,0);
        iVar5 = (int)uVar2;
        *(int *)(lVar3 + 0x20) = (int)uVar4 + *(int *)(lVar3 + 0x20) * 0x1f + 0x3fd1;
        if ((ulong)uVar1 - 1 == uVar10) goto code_r0x014a7704;
        lVar7 = *(long *)(lVar3 + 0x10);
        uVar10 = uVar10 + 1;
      } while (lVar7 != 0);
    }
  }
  uVar4 = func_0x00f78af4();
code_r0x014a7704:
  if (*(long *)PTR_03a5d648 == lVar6) {
    return uVar4;
  }
  ___stack_chk_fail();
  return (ulong)(extraout_w1 * 0x1f + iVar5 + 0x3fd1);
}



// ============================================================
// RVA: 0x144b530 | Atlas.ApplicationBehaviour.InitNetwork
// ============================================================

ulong Atlas_ApplicationBehaviour__InitNetwork(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int extraout_w1;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar11;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long *plVar12;
  undefined *unaff_x26;
  undefined1 auVar13 [16];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  uVar9 = 0x3eb4000;
  if ((bRam0000000003eb4740 & 1) == 0) {
    func_0x00f78a20(0x3d43658);
    func_0x00f78a20(0x3d43660);
    func_0x00f78a20(0x3d43668);
    func_0x00f78a20(0x3d43670);
    func_0x00f78a20(0x3d43678);
    func_0x00f78a20(0x3d43680);
    func_0x00f78a20(0x3d43688);
    func_0x00f78a20(0x3d43690);
    func_0x00f78a20(0x3d43698);
    func_0x00f78a20(0x3d436a0);
    bRam0000000003eb4740 = 1;
  }
  if (*(long *)(param_1 + 0x110) == 0) {
LAB_0144b71c:
    lVar2 = func_0x00f78af4();
    puStack_68 = &Atlas_ApplicationBehaviour__DeInitNetwork;
    uStack_80 = param_2;
    lStack_78 = param_1;
    puStack_70 = &stack0xfffffffffffffff0;
    if (*(long *)(lVar2 + 0x108) != 0) {
      /*Atlas.Networking.Network$$DeInit*/ func_0x0149df24(*(long *)(lVar2 + 0x108),0);
      uVar6 = *(ulong *)(lVar2 + 0x110);
      if (uVar6 != 0) {
        *(undefined8 *)(uVar6 + 0x10) = 0;
        *(undefined8 *)(uVar6 + 0x18) = 0;
        *(undefined4 *)(uVar6 + 0x20) = 0;
        return uVar6;
      }
    }
    auVar13 = func_0x00f78af4();
    lVar7 = auVar13._0_8_;
    puStack_88 = &Atlas_ApplicationBehaviour__InitUI;
    puStack_d0 = unaff_x26;
    uStack_c8 = unaff_x25;
    uStack_c0 = unaff_x24;
    puStack_b8 = (undefined1 *)unaff_x23;
    uStack_b0 = unaff_x22;
    uStack_a8 = uVar9;
    uStack_a0 = param_2;
    lStack_98 = lVar2;
    ppuStack_90 = &puStack_70;
    if ((bRam0000000003eb4741 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d1fec8);
      func_0x00f78a20(0x3d52500);
      func_0x00f78a20(0x3d52508);
      func_0x00f78a20(0x3d52510);
      func_0x00f78a20(0x3d52518);
      func_0x00f78a20(0x3d52520);
      func_0x00f78a20(0x3d52528);
      func_0x00f78a20(0x3d52530);
      func_0x00f78a20(0x3d52538);
      func_0x00f78a20(0x3d52540);
      func_0x00f78a20(0x3d52548);
      func_0x00f78a20(0x3d52550);
      func_0x00f78a20(0x3d52558);
      func_0x00f78a20(0x3d52560);
      func_0x00f78a20(0x3d52568);
      func_0x00f78a20(0x3d52570);
      func_0x00f78a20(0x3d52578);
      func_0x00f78a20(0x3d52580);
      func_0x00f78a20(0x3d52588);
      func_0x00f78a20(0x3d52590);
      func_0x00f78a20(0x3d52598);
      func_0x00f78a20(0x3d525a0);
      func_0x00f78a20(0x3d525a8);
      func_0x00f78a20(0x3d525b0);
      func_0x00f78a20(0x3d525b8);
      func_0x00f78a20(0x3d525c0);
      func_0x00f78a20(0x3d525c8);
      func_0x00f78a20(0x3d525d0);
      func_0x00f78a20(0x3d525d8);
      func_0x00f78a20(0x3d525e0);
      func_0x00f78a20(0x3d525e8);
      func_0x00f78a20(0x3d525f0);
      func_0x00f78a20(0x3d525f8);
      func_0x00f78a20(0x3d52600);
      func_0x00f78a20(0x3d52608);
      func_0x00f78a20(0x3d52610);
      func_0x00f78a20(0x3d52618);
      func_0x00f78a20(0x3d52620);
      func_0x00f78a20(0x3d52628);
      func_0x00f78a20(0x3d52630);
      func_0x00f78a20(0x3d52638);
      func_0x00f78a20(0x3d52640);
      func_0x00f78a20(0x3d52648);
      func_0x00f78a20(0x3d72468);
      func_0x00f78a20(0x3d723f8);
      func_0x00f78a20(0x3d72408);
      func_0x00f78a20(0x3d72390);
      func_0x00f78a20(0x3d72428);
      func_0x00f78a20(0x3d723d8);
      func_0x00f78a20(0x3d6d100);
      func_0x00f78a20(0x3d723b0);
      func_0x00f78a20(0x3d72398);
      func_0x00f78a20(0x3d6d118);
      func_0x00f78a20(0x3d72348);
      func_0x00f78a20(0x3d72478);
      func_0x00f78a20(0x3d72328);
      func_0x00f78a20(0x3d72380);
      func_0x00f78a20(0x3d72330);
      func_0x00f78a20(0x3d72400);
      func_0x00f78a20(0x3d72448);
      func_0x00f78a20(0x3d72370);
      func_0x00f78a20(0x3d72410);
      func_0x00f78a20(0x3d72358);
      func_0x00f78a20(0x3d72460);
      func_0x00f78a20(0x3d723a8);
      func_0x00f78a20(0x3d72438);
      func_0x00f78a20(0x3d723e0);
      func_0x00f78a20(0x3d72440);
      func_0x00f78a20(0x3d72340);
      func_0x00f78a20(0x3d72458);
      func_0x00f78a20(0x3d723b8);
      func_0x00f78a20(0x3d72378);
      func_0x00f78a20(0x3d72360);
      func_0x00f78a20(0x3d72420);
      func_0x00f78a20(0x3d72450);
      func_0x00f78a20(0x3d72418);
      func_0x00f78a20(0x3d723e8);
      func_0x00f78a20(0x3d72470);
      func_0x00f78a20(0x3d72430);
      func_0x00f78a20(0x3d72388);
      func_0x00f78a20(0x3d723d0);
      func_0x00f78a20(0x3d72350);
      func_0x00f78a20(0x3d72368);
      func_0x00f78a20(0x3d723c0);
      func_0x00f78a20(0x3d72338);
      func_0x00f78a20(0x3d723f0);
      func_0x00f78a20(0x3d72480);
      func_0x00f78a20(0x3d723a0);
      func_0x00f78a20(0x3d723c8);
      bRam0000000003eb4741 = 1;
    }
    uVar3 = *(undefined8 *)(lVar7 + 0x28);
    uVar9 = func_0x00f78aec(/*Atlas.UI.AtlasSharedScreenParams_TypeInfo*/ uRam0000000003d1fec8);
    Atlas_UI_AtlasSharedScreenParams___ctor(uVar9,uVar3,0);
    plVar12 = (long *)(lVar7 + 0xd8);
    lVar2 = *plVar12;
    uVar11 = *(undefined8 *)(lVar7 + 0x28);
    uVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
    if (lVar2 != 0) {
      Atlas_UI_AtlasUIManager__Init(lVar2,uVar11,auVar13._8_8_,uVar3,0xd,uVar9,0);
      lVar2 = *plVar12;
      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar2 != 0) {
        Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                  (lVar2,**(undefined8 **)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8),/*STR('Screens/P_DebugOverlayScreen.prefab')*/ uRam0000000003d723c8,
                   /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52528);
        if (*plVar12 != 0) {
          Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                    (*plVar12,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 8),
                     /*STR('Screens/P_ModeSelectScreen.prefab')*/ uRam0000000003d72400,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525b8);
          if (*plVar12 != 0) {
            Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                      (*plVar12,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x10),
                       /*STR('Screens/GameContextScreens/GameInProgressScreen/P_GameInProgressScreen.prefab')*/ uRam0000000003d72360,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52550);
            if (*plVar12 != 0) {
              Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                        (*plVar12,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x18),
                         /*STR('Screens/GameContextScreens/FTUE/GameInProgressScreenFTUE/P_GameInProgressScreenFTUE.prefab')*/ uRam0000000003d72358,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52550);
              if (*plVar12 != 0) {
                Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                          (*plVar12,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x20),
                           /*STR('Screens/GameContextScreens/GameIntroScreen/P_GameIntroScreen.prefab')*/ uRam0000000003d72368,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52558);
                if (*plVar12 != 0) {
                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                            (*plVar12,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x28)
                             ,/*STR('Screens/GameContextScreens/GameOutroScreen/P_GameOutroScreen.prefab')*/ uRam0000000003d72370,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52560);
                  if (*plVar12 != 0) {
                    Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                              (*plVar12,*(undefined8 *)
                                         (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x30),
                               /*STR('Screens/MaskTransition/P_MaskTransitionScreen.prefab')*/ uRam0000000003d72398,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525a8);
                    if (*plVar12 != 0) {
                      Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                (*plVar12,*(undefined8 *)
                                           (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x38),
                                 /*STR('Screens/P_MultiplayerLobbyScreen.prefab')*/ uRam0000000003d72408,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525c0);
                      if (*plVar12 != 0) {
                        Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                  (*plVar12,*(undefined8 *)
                                             (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x40),
                                   /*STR('Screens/P_TopBarScreen.prefab')*/ uRam0000000003d72418,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52640);
                        if (*plVar12 != 0) {
                          Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                    (*plVar12,*(undefined8 *)
                                               (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x48),
                                     /*STR('Screens/MultiplayerModeSelectScreen/P_MultiplayerModeSelectScreen.prefab')*/ uRam0000000003d723a8,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525c8)
                          ;
                          if (*plVar12 != 0) {
                            Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                      (*plVar12,*(undefined8 *)
                                                 (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x58),
                                       /*STR('Screens/KartSelect/P_KartSelectScreen.prefab')*/ uRam0000000003d72378,/*STR('Screens')*/ uRam0000000003d72328,
                                       uRam0000000003d52568);
                            if (*plVar12 != 0) {
                              Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                        (*plVar12,*(undefined8 *)
                                                   (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x50),
                                         /*STR('Screens/CharacterSelect/P_CharacterSelectScreen.prefab')*/ uRam0000000003d72338,/*STR('Screens')*/ uRam0000000003d72328,
                                         uRam0000000003d52518);
                              if (*plVar12 != 0) {
                                Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                          (*plVar12,*(undefined8 *)
                                                     (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x68)
                                           ,/*STR('Screens/VotingScreen/P_VotingScreen.prefab')*/ uRam0000000003d72480,/*STR('Screens')*/ uRam0000000003d72328,
                                           uRam0000000003d52648);
                                if (*plVar12 != 0) {
                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                            (*plVar12,*(undefined8 *)
                                                       (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) +
                                                       0x70),/*STR('Screens/ResultsScreen/P_ResultsScreen.prefab')*/ uRam0000000003d72438,
                                             /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525f8);
                                  if (*plVar12 != 0) {
                                    Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                              (*plVar12,*(undefined8 *)
                                                         (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) +
                                                         0x78),/*STR('Screens/PostEventScreen/P_PostEventScreen.prefab')*/ uRam0000000003d72430,
                                               /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525f0);
                                    if (*plVar12 != 0) {
                                      Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                (*plVar12,*(undefined8 *)
                                                           (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) +
                                                           0x80),/*STR('Screens/PostArcadeScreen/P_PostArcadeScreen.prefab')*/ uRam0000000003d72428,
                                                 /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525e8);
                                      if (*plVar12 != 0) {
                                        Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                  (*plVar12,*(undefined8 *)
                                                             (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8)
                                                             + 0x88),/*STR('Screens/EndOfRoundScreen/P_EndOfRoundScreen.prefab')*/ uRam0000000003d72348,
                                                   /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52530);
                                        if (*plVar12 != 0) {
                                          Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                    (*plVar12,*(undefined8 *)
                                                               (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                         0xb8) + 0x90),
                                                     /*STR('Screens/RewardScreen/P_RewardScreen.prefab')*/ uRam0000000003d72440,/*STR('Screens')*/ uRam0000000003d72328,
                                                     uRam0000000003d52600);
                                          if (*plVar12 != 0) {
                                            Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                      (*plVar12,*(undefined8 *)
                                                                 (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                           0xb8) + 0x98),
                                                       /*STR('Screens/Singleplayer/P_SingleplayerOverviewScreen.prefab')*/ uRam0000000003d72470,/*STR('Screens')*/ uRam0000000003d72328,
                                                       uRam0000000003d52630);
                                            if (*plVar12 != 0) {
                                              Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                        (*plVar12,*(undefined8 *)
                                                                   (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                             0xb8) + 0xa0),
                                                         /*STR('Screens/Singleplayer/P_SingleplayerCampaignScreen.prefab')*/ uRam0000000003d72460,/*STR('Screens')*/ uRam0000000003d72328,
                                                         uRam0000000003d52620);
                                              if (*plVar12 != 0) {
                                                Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                          (*plVar12,*(undefined8 *)
                                                                     (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8
                                                                               + 0xb8) + 0xa8),
                                                           /*STR('Screens/Singleplayer/P_SingleplayerChapterScreen.prefab')*/ uRam0000000003d72468,/*STR('Screens')*/ uRam0000000003d72328
                                                           ,uRam0000000003d52628);
                                                if (*plVar12 != 0) {
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xb0),
                                                  /*STR('Screens/PlayWithFriends/P_PlayWithFriendsCodeScreen.prefab')*/ uRam0000000003d72420,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525e0);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xb8),
                                                  /*STR('Screens/SettingsScreen/P_SettingsScreen.prefab')*/ uRam0000000003d72458,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52618);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xc0),
                                                  /*STR('Screens/CharacterRank/P_CharacterRankScreen.prefab')*/ uRam0000000003d72330,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52510);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200),
                                                  /*STR('Screens/Seasons/P_SeasonsScreen.prefab')*/ uRam0000000003d72450,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52610);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xd0),
                                                  /*STR('Screens/P_FreeplayScreen.prefab')*/ uRam0000000003d723d0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52540);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xe0),
                                                  /*STR('Screens/P_PauseScreen.prefab')*/ uRam0000000003d72410,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525d8);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xe8),
                                                  /*STR('Screens/CreditsScreen/P_CreditsScreen.prefab')*/ uRam0000000003d72340,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52520);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xf0),
                                                  /*STR('Screens/SaveGameScreen/P_SaveGameScreen.prefab')*/ uRam0000000003d72448,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52608);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xf8),
                                                  /*STR('Screens/MessageBoxScreen/P_MessageBoxScreen.prefab')*/ uRam0000000003d723a0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525b0);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x100),
                                                  /*STR('Screens/ToolTipScreen/P_ToolTipScreen.prefab')*/ uRam0000000003d72478,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52638);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xd8),
                                                  /*STR('Screens/FreeplayDifficultyScreen/P_FreeplayDifficultyScreen.prefab')*/ uRam0000000003d72350,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52538);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x108),
                                                  /*STR('Screens/LicenseScreen/P_LicenseScreen.prefab')*/ uRam0000000003d72388,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52598);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x110),
                                                  /*STR('Screens/NotificationBoxScreen/P_NotificationBoxScreen.prefab')*/ uRam0000000003d723b0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525d0);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x118),
                                                  /*STR('Screens/LobbySettingsScreen/P_LobbySettingsScreen.prefab')*/ uRam0000000003d72390,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525a0);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x128),
                                                  /*STR('Screens/P_ArcadeModeSelectScreen.prefab')*/ uRam0000000003d723c0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52508);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x120),
                                                  /*STR('Screens/P_ArcadeMapSelectScreen.prefab')*/ uRam0000000003d723b8,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52500);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x130),
                                                  /*STR('Screens/P_GameArcadeOutroScreen.prefab')*/ uRam0000000003d723d8,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52548);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x138),
                                                  /*STR('Screens/P_LeagueWeeklyScheduleScreen.prefab')*/ uRam0000000003d723f8,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52590);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140),
                                                  /*STR('Screens/P_LeagueLeaderboardScreen.prefab')*/ uRam0000000003d723e0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52570);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x148),
                                                  /*STR('Screens/P_LeaguePodiumScreen.prefab')*/ uRam0000000003d723e8,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52578);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x150),
                                                  /*STR('Screens/P_LeaguePromotionScreen.prefab')*/ uRam0000000003d723f0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52580);
                                                  if (*plVar12 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar12,*(undefined8 *)
                                                                       (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x158),
                                                  /*STR('Screens/LeagueStarsBoxScreen/P_LeagueStarsBoxScreen.prefab')*/ uRam0000000003d72380,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52588);
                                                  if (*(long *)(lVar7 + 0xe8) != 0) {
                                                    Atlas_UI_TransitionManager__Init
                                                              (*(long *)(lVar7 + 0xe8),
                                                               *(undefined8 *)(lVar7 + 0xd8),7,
                                                               *(undefined8 *)
                                                                (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                          0xb8) + 0x30),
                                                               /*STR('GENERIC_LOADING')*/ uRam0000000003d6d100,0);
                                                    if (*(long *)(lVar7 + 0xf0) != 0) {
                                                      Atlas_UI_HostMigrationTransitionManager__Init
                                                                (*(long *)(lVar7 + 0xf0),
                                                                 *(undefined8 *)(lVar7 + 0xd8),
                                                                 *(undefined8 *)(lVar7 + 0x170),
                                                                 *(undefined8 *)(lVar7 + 0x108),10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                            0xb8) + 0x30),
                                                                 /*STR('GENERIC_RECONNECTING')*/ uRam0000000003d6d118,0);
                                                      if (*(long *)(lVar7 + 0x100) != 0) {
                                                                                                                
                                                  Atlas_Contexts_ContextManagerTransitions__Init
                                                            (*(long *)(lVar7 + 0x100),
                                                             *(undefined8 *)(lVar7 + 0xa8),
                                                             *(undefined8 *)(lVar7 + 0xe8),
                                                             *(undefined8 *)(lVar7 + 0x80),
                                                             *(undefined8 *)(lVar7 + 0x88),0);
                                                  if (*(long *)(lVar7 + 0xf8) != 0) {
                                                    Atlas_UI_TopBarManager__Init
                                                              (*(long *)(lVar7 + 0xf8),
                                                               *(undefined8 *)(lVar7 + 0xd8),
                                                               *(undefined8 *)(lVar7 + 0x180),
                                                               *(undefined8 *)(lVar7 + 0x150),0);
                                                    plVar12 = *(long **)(lVar7 + 0x168);
                                                    if (plVar12 != (long *)0x0) {
                                                      (**(code **)(*plVar12 + 0x178))
                                                                (plVar12,uVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                            0xb8) + 0x100),6,
                                                                 *(undefined8 *)(*plVar12 + 0x180));
                                                      plVar12 = *(long **)(lVar7 + 0x170);
                                                      if (plVar12 != (long *)0x0) {
                                                        (**(code **)(*plVar12 + 0x178))
                                                                  (plVar12,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8
                                                                              + 0xb8) + 0xf8),0xb,
                                                                   *(undefined8 *)(*plVar12 + 0x180)
                                                                  );
                                                        plVar12 = *(long **)(lVar7 + 0x178);
                                                        if (plVar12 != (long *)0x0) {
                                                          (**(code **)(*plVar12 + 0x178))
                                                                    (plVar12,uVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x110),5,
                                                  *(undefined8 *)(*plVar12 + 0x180));
                                                  if (*(long *)(lVar7 + 0x1a8) != 0) {
                                                    Atlas_UI_ToastManager__Init
                                                              (*(long *)(lVar7 + 0x1a8),
                                                               *(undefined8 *)(lVar7 + 0xd8),0);
                                                    plVar12 = *(long **)(lVar7 + 0x1c0);
                                                    if (plVar12 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0144c66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                      uVar6 = (**(code **)(*plVar12 + 0x178))
                                                                        (plVar12,uVar9,
                                                                         *(undefined8 *)
                                                                          (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x158),5,
                                                  *(undefined8 *)(*plVar12 + 0x180));
                                                  return uVar6;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar2 = func_0x00f78af4();
    if ((bRam0000000003eb4742 & 1) == 0) {
      func_0x00f78a20(0x3d3e0c8);
      func_0x00f78a20(0x3d3e120);
      func_0x00f78a20(0x3d3e160);
      bRam0000000003eb4742 = 1;
    }
    if (*(long *)(lVar2 + 0x1a8) != 0) {
      Atlas_UI_ToastManager__DeInit(*(long *)(lVar2 + 0x1a8),0);
    }
    if (*(long *)(lVar2 + 0x178) != 0) {
      Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___DeInit
                (*(long *)(lVar2 + 0x178),uRam0000000003d3e120);
    }
    if (*(long *)(lVar2 + 0x170) != 0) {
      Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___DeInit
                (*(long *)(lVar2 + 0x170),uRam0000000003d3e0c8);
    }
    if (*(long *)(lVar2 + 0xf8) != 0) {
      Atlas_UI_TopBarManager__DeInit(*(long *)(lVar2 + 0xf8),0);
    }
    if (*(long *)(lVar2 + 0x168) != 0) {
      Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___DeInit
                (*(long *)(lVar2 + 0x168),uRam0000000003d3e160);
    }
    if (*(long *)(lVar2 + 0x100) != 0) {
      Atlas_Contexts_ContextManagerTransitions__DeInit(*(long *)(lVar2 + 0x100),0);
    }
    lVar7 = *(long *)(lVar2 + 0xe8);
    if (lVar7 != 0) {
      Atlas_UI_TransitionManager__DeInit(lVar7,0);
    }
    if (*(long *)(lVar2 + 0xf0) != 0) {
      Atlas_UI_HostMigrationTransitionManager__DeInit(*(long *)(lVar2 + 0xf0),0);
    }
    uVar6 = 0;
    if (*(long *)(lVar2 + 0xd8) != 0) {
      uVar6 = Atlas_UI_AtlasUIManager__DeInit(*(long *)(lVar2 + 0xd8),0);
    }
    *(undefined8 *)(lVar2 + 0xd8) = 0;
    *(undefined8 *)(lVar2 + 0xf0) = 0;
    *(long *)(lVar2 + 0xe8) = 0;
    *(undefined8 *)(lVar2 + 0x100) = 0;
    *(undefined8 *)(lVar2 + 0xf8) = 0;
    *(undefined8 *)(lVar2 + 0x170) = 0;
    *(undefined8 *)(lVar2 + 0x178) = 0;
    *(undefined8 *)(lVar2 + 0x168) = 0;
    return uVar6;
  }
  /*Atlas.Networking.NetworkIdentifiers$$Init*/ func_0x014a7420(*(long *)(param_1 + 0x110),0);
  if (*(long *)(param_1 + 0x108) == 0) goto LAB_0144b71c;
  unaff_x24 = 0x3d43000;
  unaff_x25 = 0x3d43000;
  unaff_x26 = (undefined *)0x3d43000;
  uVar9 = 0x3d43000;
  unaff_x22 = 0x3d43000;
  unaff_x23 = 0x3d43000;
  /*Atlas.Networking.Network$$Init*/ func_0x0149dcec(*(long *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x28),0);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(param_1,param_2,uRam0000000003d43698);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(param_1,param_2,uRam0000000003d43680);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(param_1,param_2,uRam0000000003d43668);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(param_1,param_2,uRam0000000003d43678);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(param_1,param_2,uRam0000000003d43658);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(param_1,param_2,uRam0000000003d436a0);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(param_1,param_2,uRam0000000003d43670);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(param_1,param_2,uRam0000000003d43688);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(param_1,param_2,uRam0000000003d43690);
  /*Atlas.ApplicationBehaviour$$AddNetworkIdentifierDefinition<WheelsDefinition>*/ func_0x01722a98(param_1,param_2,uRam0000000003d43660);
  lVar2 = *(long *)(param_1 + 0x110);
  if (lVar2 == 0) goto LAB_0144b71c;
  lVar7 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb4a5b & 1) == 0) {
    func_0x00f78a20(0x3d2cf10,0);
    func_0x00f78a20(0x3d1b950);
    func_0x00f78a20(0x3d2fc18);
    func_0x00f78a20(0x3d3bff0);
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d5da78);
    bRam0000000003eb4a5b = 1;
  }
  lVar8 = *(long *)(lVar2 + 0x10);
  uVar3 = func_0x00f78aec(/*System.Comparison<string>_TypeInfo*/ uRam0000000003d1b950);
  uVar9 = uRam0000000003d5da78;
  /*System.Comparison<TimeZoneInfo.AdjustmentRule>$$.ctor*/ func_0x01db3634(uVar3,0,uRam0000000003d5da78,uRam0000000003d2cf10);
  iVar5 = (int)uVar9;
  if (lVar8 != 0) {
    uVar6 = uRam0000000003d3bff0;
    uVar4 = /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$Sort*/ func_0x02428d14(lVar8,uVar3,uRam0000000003d3bff0);
    iVar5 = (int)uVar6;
    lVar8 = *(long *)(lVar2 + 0x10);
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      if ((int)uVar1 < 1) goto code_r0x014a7704;
      uVar10 = 0;
      do {
        iVar5 = (int)uVar6;
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(lVar2 + 0x18) == 0) break;
        uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + uVar10 * 8 + 0x20);
        uVar6 = (ulong)(uint)(int)(short)uVar10;
        /*System.Collections.Generic.Dictionary<string, short>$$set_Item*/ func_0x01ecb64c(*(long *)(lVar2 + 0x18),uVar9,uVar6,uRam0000000003d2fc18);
        /*Unity.Collections.FixedString64Bytes$$op_Implicit*/ func_0x02fd8c8c(&puStack_88,uVar9,0);
        uStack_c8 = uStack_80;
        puStack_d0 = puStack_88;
        puStack_b8 = puStack_70;
        uStack_c0 = lStack_78;
        uStack_b0 = puStack_68;
        uVar4 = /*Core.Services.Client$$Hash*/ func_0x0166735c(&puStack_d0,0);
        iVar5 = (int)uVar6;
        *(int *)(lVar2 + 0x20) = (int)uVar4 + *(int *)(lVar2 + 0x20) * 0x1f + 0x3fd1;
        if ((ulong)uVar1 - 1 == uVar10) goto code_r0x014a7704;
        lVar8 = *(long *)(lVar2 + 0x10);
        uVar10 = uVar10 + 1;
      } while (lVar8 != 0);
    }
  }
  uVar4 = func_0x00f78af4();
code_r0x014a7704:
  if (*(long *)PTR_03a5d648 == lVar7) {
    return uVar4;
  }
  ___stack_chk_fail();
  return (ulong)(extraout_w1 * 0x1f + iVar5 + 0x3fd1);
}



// ============================================================
// RVA: 0x144b720 | Atlas.ApplicationBehaviour.DeInitNetwork
// ============================================================

void Atlas_ApplicationBehaviour__DeInitNetwork(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  if (*(long *)(param_1 + 0x108) != 0) {
    /*Atlas.Networking.Network$$DeInit*/ func_0x0149df24(*(long *)(param_1 + 0x108),0);
    lVar1 = *(long *)(param_1 + 0x110);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined8 *)(lVar1 + 0x18) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0;
      return;
    }
  }
  auVar7 = func_0x00f78af4();
  lVar1 = auVar7._0_8_;
  if ((bRam0000000003eb4741 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d1fec8);
    func_0x00f78a20(0x3d52500);
    func_0x00f78a20(0x3d52508);
    func_0x00f78a20(0x3d52510);
    func_0x00f78a20(0x3d52518);
    func_0x00f78a20(0x3d52520);
    func_0x00f78a20(0x3d52528);
    func_0x00f78a20(0x3d52530);
    func_0x00f78a20(0x3d52538);
    func_0x00f78a20(0x3d52540);
    func_0x00f78a20(0x3d52548);
    func_0x00f78a20(0x3d52550);
    func_0x00f78a20(0x3d52558);
    func_0x00f78a20(0x3d52560);
    func_0x00f78a20(0x3d52568);
    func_0x00f78a20(0x3d52570);
    func_0x00f78a20(0x3d52578);
    func_0x00f78a20(0x3d52580);
    func_0x00f78a20(0x3d52588);
    func_0x00f78a20(0x3d52590);
    func_0x00f78a20(0x3d52598);
    func_0x00f78a20(0x3d525a0);
    func_0x00f78a20(0x3d525a8);
    func_0x00f78a20(0x3d525b0);
    func_0x00f78a20(0x3d525b8);
    func_0x00f78a20(0x3d525c0);
    func_0x00f78a20(0x3d525c8);
    func_0x00f78a20(0x3d525d0);
    func_0x00f78a20(0x3d525d8);
    func_0x00f78a20(0x3d525e0);
    func_0x00f78a20(0x3d525e8);
    func_0x00f78a20(0x3d525f0);
    func_0x00f78a20(0x3d525f8);
    func_0x00f78a20(0x3d52600);
    func_0x00f78a20(0x3d52608);
    func_0x00f78a20(0x3d52610);
    func_0x00f78a20(0x3d52618);
    func_0x00f78a20(0x3d52620);
    func_0x00f78a20(0x3d52628);
    func_0x00f78a20(0x3d52630);
    func_0x00f78a20(0x3d52638);
    func_0x00f78a20(0x3d52640);
    func_0x00f78a20(0x3d52648);
    func_0x00f78a20(0x3d72468);
    func_0x00f78a20(0x3d723f8);
    func_0x00f78a20(0x3d72408);
    func_0x00f78a20(0x3d72390);
    func_0x00f78a20(0x3d72428);
    func_0x00f78a20(0x3d723d8);
    func_0x00f78a20(0x3d6d100);
    func_0x00f78a20(0x3d723b0);
    func_0x00f78a20(0x3d72398);
    func_0x00f78a20(0x3d6d118);
    func_0x00f78a20(0x3d72348);
    func_0x00f78a20(0x3d72478);
    func_0x00f78a20(0x3d72328);
    func_0x00f78a20(0x3d72380);
    func_0x00f78a20(0x3d72330);
    func_0x00f78a20(0x3d72400);
    func_0x00f78a20(0x3d72448);
    func_0x00f78a20(0x3d72370);
    func_0x00f78a20(0x3d72410);
    func_0x00f78a20(0x3d72358);
    func_0x00f78a20(0x3d72460);
    func_0x00f78a20(0x3d723a8);
    func_0x00f78a20(0x3d72438);
    func_0x00f78a20(0x3d723e0);
    func_0x00f78a20(0x3d72440);
    func_0x00f78a20(0x3d72340);
    func_0x00f78a20(0x3d72458);
    func_0x00f78a20(0x3d723b8);
    func_0x00f78a20(0x3d72378);
    func_0x00f78a20(0x3d72360);
    func_0x00f78a20(0x3d72420);
    func_0x00f78a20(0x3d72450);
    func_0x00f78a20(0x3d72418);
    func_0x00f78a20(0x3d723e8);
    func_0x00f78a20(0x3d72470);
    func_0x00f78a20(0x3d72430);
    func_0x00f78a20(0x3d72388);
    func_0x00f78a20(0x3d723d0);
    func_0x00f78a20(0x3d72350);
    func_0x00f78a20(0x3d72368);
    func_0x00f78a20(0x3d723c0);
    func_0x00f78a20(0x3d72338);
    func_0x00f78a20(0x3d723f0);
    func_0x00f78a20(0x3d72480);
    func_0x00f78a20(0x3d723a0);
    func_0x00f78a20(0x3d723c8);
    bRam0000000003eb4741 = 1;
  }
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  uVar2 = func_0x00f78aec(/*Atlas.UI.AtlasSharedScreenParams_TypeInfo*/ uRam0000000003d1fec8);
  Atlas_UI_AtlasSharedScreenParams___ctor(uVar2,uVar3,0);
  plVar6 = (long *)(lVar1 + 0xd8);
  lVar4 = *plVar6;
  uVar5 = *(undefined8 *)(lVar1 + 0x28);
  uVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar1,0);
  if (lVar4 != 0) {
    Atlas_UI_AtlasUIManager__Init(lVar4,uVar5,auVar7._8_8_,uVar3,0xd,uVar2,0);
    lVar4 = *plVar6;
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar4 != 0) {
      Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                (lVar4,**(undefined8 **)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8),/*STR('Screens/P_DebugOverlayScreen.prefab')*/ uRam0000000003d723c8,
                 /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52528);
      if (*plVar6 != 0) {
        Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                  (*plVar6,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 8),
                   /*STR('Screens/P_ModeSelectScreen.prefab')*/ uRam0000000003d72400,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525b8);
        if (*plVar6 != 0) {
          Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                    (*plVar6,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x10),
                     /*STR('Screens/GameContextScreens/GameInProgressScreen/P_GameInProgressScreen.prefab')*/ uRam0000000003d72360,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52550);
          if (*plVar6 != 0) {
            Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                      (*plVar6,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x18),
                       /*STR('Screens/GameContextScreens/FTUE/GameInProgressScreenFTUE/P_GameInProgressScreenFTUE.prefab')*/ uRam0000000003d72358,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52550);
            if (*plVar6 != 0) {
              Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                        (*plVar6,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x20),
                         /*STR('Screens/GameContextScreens/GameIntroScreen/P_GameIntroScreen.prefab')*/ uRam0000000003d72368,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52558);
              if (*plVar6 != 0) {
                Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                          (*plVar6,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x28),
                           /*STR('Screens/GameContextScreens/GameOutroScreen/P_GameOutroScreen.prefab')*/ uRam0000000003d72370,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52560);
                if (*plVar6 != 0) {
                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                            (*plVar6,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x30),
                             /*STR('Screens/MaskTransition/P_MaskTransitionScreen.prefab')*/ uRam0000000003d72398,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525a8);
                  if (*plVar6 != 0) {
                    Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                              (*plVar6,*(undefined8 *)
                                        (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x38),
                               /*STR('Screens/P_MultiplayerLobbyScreen.prefab')*/ uRam0000000003d72408,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525c0);
                    if (*plVar6 != 0) {
                      Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                (*plVar6,*(undefined8 *)
                                          (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x40),
                                 /*STR('Screens/P_TopBarScreen.prefab')*/ uRam0000000003d72418,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52640);
                      if (*plVar6 != 0) {
                        Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                  (*plVar6,*(undefined8 *)
                                            (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x48),
                                   /*STR('Screens/MultiplayerModeSelectScreen/P_MultiplayerModeSelectScreen.prefab')*/ uRam0000000003d723a8,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525c8);
                        if (*plVar6 != 0) {
                          Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                    (*plVar6,*(undefined8 *)
                                              (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x58),
                                     /*STR('Screens/KartSelect/P_KartSelectScreen.prefab')*/ uRam0000000003d72378,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52568)
                          ;
                          if (*plVar6 != 0) {
                            Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                      (*plVar6,*(undefined8 *)
                                                (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x50),
                                       /*STR('Screens/CharacterSelect/P_CharacterSelectScreen.prefab')*/ uRam0000000003d72338,/*STR('Screens')*/ uRam0000000003d72328,
                                       uRam0000000003d52518);
                            if (*plVar6 != 0) {
                              Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                        (*plVar6,*(undefined8 *)
                                                  (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x68),
                                         /*STR('Screens/VotingScreen/P_VotingScreen.prefab')*/ uRam0000000003d72480,/*STR('Screens')*/ uRam0000000003d72328,
                                         uRam0000000003d52648);
                              if (*plVar6 != 0) {
                                Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                          (*plVar6,*(undefined8 *)
                                                    (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x70),
                                           /*STR('Screens/ResultsScreen/P_ResultsScreen.prefab')*/ uRam0000000003d72438,/*STR('Screens')*/ uRam0000000003d72328,
                                           uRam0000000003d525f8);
                                if (*plVar6 != 0) {
                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                            (*plVar6,*(undefined8 *)
                                                      (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x78
                                                      ),/*STR('Screens/PostEventScreen/P_PostEventScreen.prefab')*/ uRam0000000003d72430,/*STR('Screens')*/ uRam0000000003d72328,
                                             uRam0000000003d525f0);
                                  if (*plVar6 != 0) {
                                    Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                              (*plVar6,*(undefined8 *)
                                                        (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) +
                                                        0x80),/*STR('Screens/PostArcadeScreen/P_PostArcadeScreen.prefab')*/ uRam0000000003d72428,
                                               /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525e8);
                                    if (*plVar6 != 0) {
                                      Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                (*plVar6,*(undefined8 *)
                                                          (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) +
                                                          0x88),/*STR('Screens/EndOfRoundScreen/P_EndOfRoundScreen.prefab')*/ uRam0000000003d72348,
                                                 /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52530);
                                      if (*plVar6 != 0) {
                                        Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                  (*plVar6,*(undefined8 *)
                                                            (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8)
                                                            + 0x90),/*STR('Screens/RewardScreen/P_RewardScreen.prefab')*/ uRam0000000003d72440,
                                                   /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52600);
                                        if (*plVar6 != 0) {
                                          Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                    (*plVar6,*(undefined8 *)
                                                              (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8
                                                                        ) + 0x98),
                                                     /*STR('Screens/Singleplayer/P_SingleplayerOverviewScreen.prefab')*/ uRam0000000003d72470,/*STR('Screens')*/ uRam0000000003d72328,
                                                     uRam0000000003d52630);
                                          if (*plVar6 != 0) {
                                            Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                      (*plVar6,*(undefined8 *)
                                                                (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                          0xb8) + 0xa0),
                                                       /*STR('Screens/Singleplayer/P_SingleplayerCampaignScreen.prefab')*/ uRam0000000003d72460,/*STR('Screens')*/ uRam0000000003d72328,
                                                       uRam0000000003d52620);
                                            if (*plVar6 != 0) {
                                              Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                        (*plVar6,*(undefined8 *)
                                                                  (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                            0xb8) + 0xa8),
                                                         /*STR('Screens/Singleplayer/P_SingleplayerChapterScreen.prefab')*/ uRam0000000003d72468,/*STR('Screens')*/ uRam0000000003d72328,
                                                         uRam0000000003d52628);
                                              if (*plVar6 != 0) {
                                                Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                          (*plVar6,*(undefined8 *)
                                                                    (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8
                                                                              + 0xb8) + 0xb0),
                                                           /*STR('Screens/PlayWithFriends/P_PlayWithFriendsCodeScreen.prefab')*/ uRam0000000003d72420,/*STR('Screens')*/ uRam0000000003d72328
                                                           ,uRam0000000003d525e0);
                                                if (*plVar6 != 0) {
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xb8),
                                                  /*STR('Screens/SettingsScreen/P_SettingsScreen.prefab')*/ uRam0000000003d72458,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52618);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xc0),
                                                  /*STR('Screens/CharacterRank/P_CharacterRankScreen.prefab')*/ uRam0000000003d72330,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52510);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200),
                                                  /*STR('Screens/Seasons/P_SeasonsScreen.prefab')*/ uRam0000000003d72450,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52610);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xd0),
                                                  /*STR('Screens/P_FreeplayScreen.prefab')*/ uRam0000000003d723d0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52540);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xe0),
                                                  /*STR('Screens/P_PauseScreen.prefab')*/ uRam0000000003d72410,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525d8);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xe8),
                                                  /*STR('Screens/CreditsScreen/P_CreditsScreen.prefab')*/ uRam0000000003d72340,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52520);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xf0),
                                                  /*STR('Screens/SaveGameScreen/P_SaveGameScreen.prefab')*/ uRam0000000003d72448,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52608);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xf8),
                                                  /*STR('Screens/MessageBoxScreen/P_MessageBoxScreen.prefab')*/ uRam0000000003d723a0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525b0);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x100),
                                                  /*STR('Screens/ToolTipScreen/P_ToolTipScreen.prefab')*/ uRam0000000003d72478,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52638);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xd8),
                                                  /*STR('Screens/FreeplayDifficultyScreen/P_FreeplayDifficultyScreen.prefab')*/ uRam0000000003d72350,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52538);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x108),
                                                  /*STR('Screens/LicenseScreen/P_LicenseScreen.prefab')*/ uRam0000000003d72388,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52598);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x110),
                                                  /*STR('Screens/NotificationBoxScreen/P_NotificationBoxScreen.prefab')*/ uRam0000000003d723b0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525d0);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x118),
                                                  /*STR('Screens/LobbySettingsScreen/P_LobbySettingsScreen.prefab')*/ uRam0000000003d72390,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525a0);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x128),
                                                  /*STR('Screens/P_ArcadeModeSelectScreen.prefab')*/ uRam0000000003d723c0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52508);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x120),
                                                  /*STR('Screens/P_ArcadeMapSelectScreen.prefab')*/ uRam0000000003d723b8,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52500);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x130),
                                                  /*STR('Screens/P_GameArcadeOutroScreen.prefab')*/ uRam0000000003d723d8,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52548);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x138),
                                                  /*STR('Screens/P_LeagueWeeklyScheduleScreen.prefab')*/ uRam0000000003d723f8,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52590);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140),
                                                  /*STR('Screens/P_LeagueLeaderboardScreen.prefab')*/ uRam0000000003d723e0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52570);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x148),
                                                  /*STR('Screens/P_LeaguePodiumScreen.prefab')*/ uRam0000000003d723e8,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52578);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x150),
                                                  /*STR('Screens/P_LeaguePromotionScreen.prefab')*/ uRam0000000003d723f0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52580);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x158),
                                                  /*STR('Screens/LeagueStarsBoxScreen/P_LeagueStarsBoxScreen.prefab')*/ uRam0000000003d72380,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52588);
                                                  if (*(long *)(lVar1 + 0xe8) != 0) {
                                                    Atlas_UI_TransitionManager__Init
                                                              (*(long *)(lVar1 + 0xe8),
                                                               *(undefined8 *)(lVar1 + 0xd8),7,
                                                               *(undefined8 *)
                                                                (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                          0xb8) + 0x30),
                                                               /*STR('GENERIC_LOADING')*/ uRam0000000003d6d100,0);
                                                    if (*(long *)(lVar1 + 0xf0) != 0) {
                                                      Atlas_UI_HostMigrationTransitionManager__Init
                                                                (*(long *)(lVar1 + 0xf0),
                                                                 *(undefined8 *)(lVar1 + 0xd8),
                                                                 *(undefined8 *)(lVar1 + 0x170),
                                                                 *(undefined8 *)(lVar1 + 0x108),10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                            0xb8) + 0x30),
                                                                 /*STR('GENERIC_RECONNECTING')*/ uRam0000000003d6d118,0);
                                                      if (*(long *)(lVar1 + 0x100) != 0) {
                                                                                                                
                                                  Atlas_Contexts_ContextManagerTransitions__Init
                                                            (*(long *)(lVar1 + 0x100),
                                                             *(undefined8 *)(lVar1 + 0xa8),
                                                             *(undefined8 *)(lVar1 + 0xe8),
                                                             *(undefined8 *)(lVar1 + 0x80),
                                                             *(undefined8 *)(lVar1 + 0x88),0);
                                                  if (*(long *)(lVar1 + 0xf8) != 0) {
                                                    Atlas_UI_TopBarManager__Init
                                                              (*(long *)(lVar1 + 0xf8),
                                                               *(undefined8 *)(lVar1 + 0xd8),
                                                               *(undefined8 *)(lVar1 + 0x180),
                                                               *(undefined8 *)(lVar1 + 0x150),0);
                                                    plVar6 = *(long **)(lVar1 + 0x168);
                                                    if (plVar6 != (long *)0x0) {
                                                      (**(code **)(*plVar6 + 0x178))
                                                                (plVar6,uVar2,
                                                                 *(undefined8 *)
                                                                  (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                            0xb8) + 0x100),6,
                                                                 *(undefined8 *)(*plVar6 + 0x180));
                                                      plVar6 = *(long **)(lVar1 + 0x170);
                                                      if (plVar6 != (long *)0x0) {
                                                        (**(code **)(*plVar6 + 0x178))
                                                                  (plVar6,uVar2,
                                                                   *(undefined8 *)
                                                                    (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8
                                                                              + 0xb8) + 0xf8),0xb,
                                                                   *(undefined8 *)(*plVar6 + 0x180))
                                                        ;
                                                        plVar6 = *(long **)(lVar1 + 0x178);
                                                        if (plVar6 != (long *)0x0) {
                                                          (**(code **)(*plVar6 + 0x178))
                                                                    (plVar6,uVar2,
                                                                     *(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x110),5,
                                                  *(undefined8 *)(*plVar6 + 0x180));
                                                  if (*(long *)(lVar1 + 0x1a8) != 0) {
                                                    Atlas_UI_ToastManager__Init
                                                              (*(long *)(lVar1 + 0x1a8),
                                                               *(undefined8 *)(lVar1 + 0xd8),0);
                                                    plVar6 = *(long **)(lVar1 + 0x1c0);
                                                    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0144c66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                      (**(code **)(*plVar6 + 0x178))
                                                                (plVar6,uVar2,
                                                                 *(undefined8 *)
                                                                  (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                            0xb8) + 0x158),5,
                                                                 *(undefined8 *)(*plVar6 + 0x180));
                                                      return;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4742 & 1) == 0) {
    func_0x00f78a20(0x3d3e0c8);
    func_0x00f78a20(0x3d3e120);
    func_0x00f78a20(0x3d3e160);
    bRam0000000003eb4742 = 1;
  }
  if (*(long *)(lVar1 + 0x1a8) != 0) {
    Atlas_UI_ToastManager__DeInit(*(long *)(lVar1 + 0x1a8),0);
  }
  if (*(long *)(lVar1 + 0x178) != 0) {
    Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___DeInit
              (*(long *)(lVar1 + 0x178),uRam0000000003d3e120);
  }
  if (*(long *)(lVar1 + 0x170) != 0) {
    Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___DeInit
              (*(long *)(lVar1 + 0x170),uRam0000000003d3e0c8);
  }
  if (*(long *)(lVar1 + 0xf8) != 0) {
    Atlas_UI_TopBarManager__DeInit(*(long *)(lVar1 + 0xf8),0);
  }
  if (*(long *)(lVar1 + 0x168) != 0) {
    Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___DeInit
              (*(long *)(lVar1 + 0x168),uRam0000000003d3e160);
  }
  if (*(long *)(lVar1 + 0x100) != 0) {
    Atlas_Contexts_ContextManagerTransitions__DeInit(*(long *)(lVar1 + 0x100),0);
  }
  lVar4 = *(long *)(lVar1 + 0xe8);
  if (lVar4 != 0) {
    Atlas_UI_TransitionManager__DeInit(lVar4,0);
  }
  if (*(long *)(lVar1 + 0xf0) != 0) {
    Atlas_UI_HostMigrationTransitionManager__DeInit(*(long *)(lVar1 + 0xf0),0);
  }
  if (*(long *)(lVar1 + 0xd8) != 0) {
    Atlas_UI_AtlasUIManager__DeInit(*(long *)(lVar1 + 0xd8),0);
  }
  *(undefined8 *)(lVar1 + 0xd8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(long *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x170) = 0;
  *(undefined8 *)(lVar1 + 0x178) = 0;
  *(undefined8 *)(lVar1 + 0x168) = 0;
  return;
}



// ============================================================
// RVA: 0x144b75c | Atlas.ApplicationBehaviour.InitUI
// ============================================================

void Atlas_ApplicationBehaviour__InitUI(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((bRam0000000003eb4741 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d1fec8);
    func_0x00f78a20(0x3d52500);
    func_0x00f78a20(0x3d52508);
    func_0x00f78a20(0x3d52510);
    func_0x00f78a20(0x3d52518);
    func_0x00f78a20(0x3d52520);
    func_0x00f78a20(0x3d52528);
    func_0x00f78a20(0x3d52530);
    func_0x00f78a20(0x3d52538);
    func_0x00f78a20(0x3d52540);
    func_0x00f78a20(0x3d52548);
    func_0x00f78a20(0x3d52550);
    func_0x00f78a20(0x3d52558);
    func_0x00f78a20(0x3d52560);
    func_0x00f78a20(0x3d52568);
    func_0x00f78a20(0x3d52570);
    func_0x00f78a20(0x3d52578);
    func_0x00f78a20(0x3d52580);
    func_0x00f78a20(0x3d52588);
    func_0x00f78a20(0x3d52590);
    func_0x00f78a20(0x3d52598);
    func_0x00f78a20(0x3d525a0);
    func_0x00f78a20(0x3d525a8);
    func_0x00f78a20(0x3d525b0);
    func_0x00f78a20(0x3d525b8);
    func_0x00f78a20(0x3d525c0);
    func_0x00f78a20(0x3d525c8);
    func_0x00f78a20(0x3d525d0);
    func_0x00f78a20(0x3d525d8);
    func_0x00f78a20(0x3d525e0);
    func_0x00f78a20(0x3d525e8);
    func_0x00f78a20(0x3d525f0);
    func_0x00f78a20(0x3d525f8);
    func_0x00f78a20(0x3d52600);
    func_0x00f78a20(0x3d52608);
    func_0x00f78a20(0x3d52610);
    func_0x00f78a20(0x3d52618);
    func_0x00f78a20(0x3d52620);
    func_0x00f78a20(0x3d52628);
    func_0x00f78a20(0x3d52630);
    func_0x00f78a20(0x3d52638);
    func_0x00f78a20(0x3d52640);
    func_0x00f78a20(0x3d52648);
    func_0x00f78a20(0x3d72468);
    func_0x00f78a20(0x3d723f8);
    func_0x00f78a20(0x3d72408);
    func_0x00f78a20(0x3d72390);
    func_0x00f78a20(0x3d72428);
    func_0x00f78a20(0x3d723d8);
    func_0x00f78a20(0x3d6d100);
    func_0x00f78a20(0x3d723b0);
    func_0x00f78a20(0x3d72398);
    func_0x00f78a20(0x3d6d118);
    func_0x00f78a20(0x3d72348);
    func_0x00f78a20(0x3d72478);
    func_0x00f78a20(0x3d72328);
    func_0x00f78a20(0x3d72380);
    func_0x00f78a20(0x3d72330);
    func_0x00f78a20(0x3d72400);
    func_0x00f78a20(0x3d72448);
    func_0x00f78a20(0x3d72370);
    func_0x00f78a20(0x3d72410);
    func_0x00f78a20(0x3d72358);
    func_0x00f78a20(0x3d72460);
    func_0x00f78a20(0x3d723a8);
    func_0x00f78a20(0x3d72438);
    func_0x00f78a20(0x3d723e0);
    func_0x00f78a20(0x3d72440);
    func_0x00f78a20(0x3d72340);
    func_0x00f78a20(0x3d72458);
    func_0x00f78a20(0x3d723b8);
    func_0x00f78a20(0x3d72378);
    func_0x00f78a20(0x3d72360);
    func_0x00f78a20(0x3d72420);
    func_0x00f78a20(0x3d72450);
    func_0x00f78a20(0x3d72418);
    func_0x00f78a20(0x3d723e8);
    func_0x00f78a20(0x3d72470);
    func_0x00f78a20(0x3d72430);
    func_0x00f78a20(0x3d72388);
    func_0x00f78a20(0x3d723d0);
    func_0x00f78a20(0x3d72350);
    func_0x00f78a20(0x3d72368);
    func_0x00f78a20(0x3d723c0);
    func_0x00f78a20(0x3d72338);
    func_0x00f78a20(0x3d723f0);
    func_0x00f78a20(0x3d72480);
    func_0x00f78a20(0x3d723a0);
    func_0x00f78a20(0x3d723c8);
    bRam0000000003eb4741 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = func_0x00f78aec(/*Atlas.UI.AtlasSharedScreenParams_TypeInfo*/ uRam0000000003d1fec8);
  Atlas_UI_AtlasSharedScreenParams___ctor(uVar1,uVar3,0);
  plVar6 = (long *)(param_1 + 0xd8);
  lVar4 = *plVar6;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
  if (lVar4 != 0) {
    Atlas_UI_AtlasUIManager__Init(lVar4,uVar5,param_2,uVar3,0xd,uVar1,0);
    lVar4 = *plVar6;
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar4 != 0) {
      Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                (lVar4,**(undefined8 **)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8),/*STR('Screens/P_DebugOverlayScreen.prefab')*/ uRam0000000003d723c8,
                 /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52528);
      if (*plVar6 != 0) {
        Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                  (*plVar6,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 8),
                   /*STR('Screens/P_ModeSelectScreen.prefab')*/ uRam0000000003d72400,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525b8);
        if (*plVar6 != 0) {
          Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                    (*plVar6,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x10),
                     /*STR('Screens/GameContextScreens/GameInProgressScreen/P_GameInProgressScreen.prefab')*/ uRam0000000003d72360,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52550);
          if (*plVar6 != 0) {
            Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                      (*plVar6,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x18),
                       /*STR('Screens/GameContextScreens/FTUE/GameInProgressScreenFTUE/P_GameInProgressScreenFTUE.prefab')*/ uRam0000000003d72358,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52550);
            if (*plVar6 != 0) {
              Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                        (*plVar6,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x20),
                         /*STR('Screens/GameContextScreens/GameIntroScreen/P_GameIntroScreen.prefab')*/ uRam0000000003d72368,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52558);
              if (*plVar6 != 0) {
                Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                          (*plVar6,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x28),
                           /*STR('Screens/GameContextScreens/GameOutroScreen/P_GameOutroScreen.prefab')*/ uRam0000000003d72370,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52560);
                if (*plVar6 != 0) {
                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                            (*plVar6,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x30),
                             /*STR('Screens/MaskTransition/P_MaskTransitionScreen.prefab')*/ uRam0000000003d72398,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525a8);
                  if (*plVar6 != 0) {
                    Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                              (*plVar6,*(undefined8 *)
                                        (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x38),
                               /*STR('Screens/P_MultiplayerLobbyScreen.prefab')*/ uRam0000000003d72408,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525c0);
                    if (*plVar6 != 0) {
                      Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                (*plVar6,*(undefined8 *)
                                          (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x40),
                                 /*STR('Screens/P_TopBarScreen.prefab')*/ uRam0000000003d72418,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52640);
                      if (*plVar6 != 0) {
                        Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                  (*plVar6,*(undefined8 *)
                                            (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x48),
                                   /*STR('Screens/MultiplayerModeSelectScreen/P_MultiplayerModeSelectScreen.prefab')*/ uRam0000000003d723a8,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525c8);
                        if (*plVar6 != 0) {
                          Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                    (*plVar6,*(undefined8 *)
                                              (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x58),
                                     /*STR('Screens/KartSelect/P_KartSelectScreen.prefab')*/ uRam0000000003d72378,/*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52568)
                          ;
                          if (*plVar6 != 0) {
                            Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                      (*plVar6,*(undefined8 *)
                                                (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x50),
                                       /*STR('Screens/CharacterSelect/P_CharacterSelectScreen.prefab')*/ uRam0000000003d72338,/*STR('Screens')*/ uRam0000000003d72328,
                                       uRam0000000003d52518);
                            if (*plVar6 != 0) {
                              Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                        (*plVar6,*(undefined8 *)
                                                  (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x68),
                                         /*STR('Screens/VotingScreen/P_VotingScreen.prefab')*/ uRam0000000003d72480,/*STR('Screens')*/ uRam0000000003d72328,
                                         uRam0000000003d52648);
                              if (*plVar6 != 0) {
                                Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                          (*plVar6,*(undefined8 *)
                                                    (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x70),
                                           /*STR('Screens/ResultsScreen/P_ResultsScreen.prefab')*/ uRam0000000003d72438,/*STR('Screens')*/ uRam0000000003d72328,
                                           uRam0000000003d525f8);
                                if (*plVar6 != 0) {
                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                            (*plVar6,*(undefined8 *)
                                                      (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x78
                                                      ),/*STR('Screens/PostEventScreen/P_PostEventScreen.prefab')*/ uRam0000000003d72430,/*STR('Screens')*/ uRam0000000003d72328,
                                             uRam0000000003d525f0);
                                  if (*plVar6 != 0) {
                                    Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                              (*plVar6,*(undefined8 *)
                                                        (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) +
                                                        0x80),/*STR('Screens/PostArcadeScreen/P_PostArcadeScreen.prefab')*/ uRam0000000003d72428,
                                               /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d525e8);
                                    if (*plVar6 != 0) {
                                      Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                (*plVar6,*(undefined8 *)
                                                          (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) +
                                                          0x88),/*STR('Screens/EndOfRoundScreen/P_EndOfRoundScreen.prefab')*/ uRam0000000003d72348,
                                                 /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52530);
                                      if (*plVar6 != 0) {
                                        Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                  (*plVar6,*(undefined8 *)
                                                            (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8)
                                                            + 0x90),/*STR('Screens/RewardScreen/P_RewardScreen.prefab')*/ uRam0000000003d72440,
                                                   /*STR('Screens')*/ uRam0000000003d72328,uRam0000000003d52600);
                                        if (*plVar6 != 0) {
                                          Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                    (*plVar6,*(undefined8 *)
                                                              (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8
                                                                        ) + 0x98),
                                                     /*STR('Screens/Singleplayer/P_SingleplayerOverviewScreen.prefab')*/ uRam0000000003d72470,/*STR('Screens')*/ uRam0000000003d72328,
                                                     uRam0000000003d52630);
                                          if (*plVar6 != 0) {
                                            Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                      (*plVar6,*(undefined8 *)
                                                                (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                          0xb8) + 0xa0),
                                                       /*STR('Screens/Singleplayer/P_SingleplayerCampaignScreen.prefab')*/ uRam0000000003d72460,/*STR('Screens')*/ uRam0000000003d72328,
                                                       uRam0000000003d52620);
                                            if (*plVar6 != 0) {
                                              Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                        (*plVar6,*(undefined8 *)
                                                                  (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                            0xb8) + 0xa8),
                                                         /*STR('Screens/Singleplayer/P_SingleplayerChapterScreen.prefab')*/ uRam0000000003d72468,/*STR('Screens')*/ uRam0000000003d72328,
                                                         uRam0000000003d52628);
                                              if (*plVar6 != 0) {
                                                Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                          (*plVar6,*(undefined8 *)
                                                                    (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8
                                                                              + 0xb8) + 0xb0),
                                                           /*STR('Screens/PlayWithFriends/P_PlayWithFriendsCodeScreen.prefab')*/ uRam0000000003d72420,/*STR('Screens')*/ uRam0000000003d72328
                                                           ,uRam0000000003d525e0);
                                                if (*plVar6 != 0) {
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xb8),
                                                  /*STR('Screens/SettingsScreen/P_SettingsScreen.prefab')*/ uRam0000000003d72458,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52618);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xc0),
                                                  /*STR('Screens/CharacterRank/P_CharacterRankScreen.prefab')*/ uRam0000000003d72330,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52510);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200),
                                                  /*STR('Screens/Seasons/P_SeasonsScreen.prefab')*/ uRam0000000003d72450,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52610);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xd0),
                                                  /*STR('Screens/P_FreeplayScreen.prefab')*/ uRam0000000003d723d0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52540);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xe0),
                                                  /*STR('Screens/P_PauseScreen.prefab')*/ uRam0000000003d72410,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525d8);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xe8),
                                                  /*STR('Screens/CreditsScreen/P_CreditsScreen.prefab')*/ uRam0000000003d72340,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52520);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xf0),
                                                  /*STR('Screens/SaveGameScreen/P_SaveGameScreen.prefab')*/ uRam0000000003d72448,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52608);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xf8),
                                                  /*STR('Screens/MessageBoxScreen/P_MessageBoxScreen.prefab')*/ uRam0000000003d723a0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525b0);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x100),
                                                  /*STR('Screens/ToolTipScreen/P_ToolTipScreen.prefab')*/ uRam0000000003d72478,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52638);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xd8),
                                                  /*STR('Screens/FreeplayDifficultyScreen/P_FreeplayDifficultyScreen.prefab')*/ uRam0000000003d72350,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52538);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x108),
                                                  /*STR('Screens/LicenseScreen/P_LicenseScreen.prefab')*/ uRam0000000003d72388,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52598);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x110),
                                                  /*STR('Screens/NotificationBoxScreen/P_NotificationBoxScreen.prefab')*/ uRam0000000003d723b0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525d0);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x118),
                                                  /*STR('Screens/LobbySettingsScreen/P_LobbySettingsScreen.prefab')*/ uRam0000000003d72390,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d525a0);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x128),
                                                  /*STR('Screens/P_ArcadeModeSelectScreen.prefab')*/ uRam0000000003d723c0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52508);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x120),
                                                  /*STR('Screens/P_ArcadeMapSelectScreen.prefab')*/ uRam0000000003d723b8,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52500);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x130),
                                                  /*STR('Screens/P_GameArcadeOutroScreen.prefab')*/ uRam0000000003d723d8,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52548);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x138),
                                                  /*STR('Screens/P_LeagueWeeklyScheduleScreen.prefab')*/ uRam0000000003d723f8,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52590);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140),
                                                  /*STR('Screens/P_LeagueLeaderboardScreen.prefab')*/ uRam0000000003d723e0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52570);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x148),
                                                  /*STR('Screens/P_LeaguePodiumScreen.prefab')*/ uRam0000000003d723e8,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52578);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x150),
                                                  /*STR('Screens/P_LeaguePromotionScreen.prefab')*/ uRam0000000003d723f0,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52580);
                                                  if (*plVar6 != 0) {
                                                                                                        
                                                  Atlas_UI_AtlasUIManager__RegisterScreen_ArcadeMapSelectScreen_
                                                            (*plVar6,*(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x158),
                                                  /*STR('Screens/LeagueStarsBoxScreen/P_LeagueStarsBoxScreen.prefab')*/ uRam0000000003d72380,/*STR('Screens')*/ uRam0000000003d72328,
                                                  uRam0000000003d52588);
                                                  if (*(long *)(param_1 + 0xe8) != 0) {
                                                    Atlas_UI_TransitionManager__Init
                                                              (*(long *)(param_1 + 0xe8),
                                                               *(undefined8 *)(param_1 + 0xd8),7,
                                                               *(undefined8 *)
                                                                (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                          0xb8) + 0x30),
                                                               /*STR('GENERIC_LOADING')*/ uRam0000000003d6d100,0);
                                                    if (*(long *)(param_1 + 0xf0) != 0) {
                                                      Atlas_UI_HostMigrationTransitionManager__Init
                                                                (*(long *)(param_1 + 0xf0),
                                                                 *(undefined8 *)(param_1 + 0xd8),
                                                                 *(undefined8 *)(param_1 + 0x170),
                                                                 *(undefined8 *)(param_1 + 0x108),10
                                                                 ,*(undefined8 *)
                                                                   (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                             0xb8) + 0x30),
                                                                 /*STR('GENERIC_RECONNECTING')*/ uRam0000000003d6d118,0);
                                                      if (*(long *)(param_1 + 0x100) != 0) {
                                                                                                                
                                                  Atlas_Contexts_ContextManagerTransitions__Init
                                                            (*(long *)(param_1 + 0x100),
                                                             *(undefined8 *)(param_1 + 0xa8),
                                                             *(undefined8 *)(param_1 + 0xe8),
                                                             *(undefined8 *)(param_1 + 0x80),
                                                             *(undefined8 *)(param_1 + 0x88),0);
                                                  if (*(long *)(param_1 + 0xf8) != 0) {
                                                    Atlas_UI_TopBarManager__Init
                                                              (*(long *)(param_1 + 0xf8),
                                                               *(undefined8 *)(param_1 + 0xd8),
                                                               *(undefined8 *)(param_1 + 0x180),
                                                               *(undefined8 *)(param_1 + 0x150),0);
                                                    plVar6 = *(long **)(param_1 + 0x168);
                                                    if (plVar6 != (long *)0x0) {
                                                      (**(code **)(*plVar6 + 0x178))
                                                                (plVar6,uVar1,
                                                                 *(undefined8 *)
                                                                  (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                            0xb8) + 0x100),6,
                                                                 *(undefined8 *)(*plVar6 + 0x180));
                                                      plVar6 = *(long **)(param_1 + 0x170);
                                                      if (plVar6 != (long *)0x0) {
                                                        (**(code **)(*plVar6 + 0x178))
                                                                  (plVar6,uVar1,
                                                                   *(undefined8 *)
                                                                    (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8
                                                                              + 0xb8) + 0xf8),0xb,
                                                                   *(undefined8 *)(*plVar6 + 0x180))
                                                        ;
                                                        plVar6 = *(long **)(param_1 + 0x178);
                                                        if (plVar6 != (long *)0x0) {
                                                          (**(code **)(*plVar6 + 0x178))
                                                                    (plVar6,uVar1,
                                                                     *(undefined8 *)
                                                                      (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x110),5,
                                                  *(undefined8 *)(*plVar6 + 0x180));
                                                  if (*(long *)(param_1 + 0x1a8) != 0) {
                                                    Atlas_UI_ToastManager__Init
                                                              (*(long *)(param_1 + 0x1a8),
                                                               *(undefined8 *)(param_1 + 0xd8),0);
                                                    plVar6 = *(long **)(param_1 + 0x1c0);
                                                    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0144c66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                      (**(code **)(*plVar6 + 0x178))
                                                                (plVar6,uVar1,
                                                                 *(undefined8 *)
                                                                  (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 +
                                                                            0xb8) + 0x158),5,
                                                                 *(undefined8 *)(*plVar6 + 0x180));
                                                      return;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4742 & 1) == 0) {
    func_0x00f78a20(0x3d3e0c8);
    func_0x00f78a20(0x3d3e120);
    func_0x00f78a20(0x3d3e160);
    bRam0000000003eb4742 = 1;
  }
  if (*(long *)(lVar4 + 0x1a8) != 0) {
    Atlas_UI_ToastManager__DeInit(*(long *)(lVar4 + 0x1a8),0);
  }
  if (*(long *)(lVar4 + 0x178) != 0) {
    Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___DeInit
              (*(long *)(lVar4 + 0x178),uRam0000000003d3e120);
  }
  if (*(long *)(lVar4 + 0x170) != 0) {
    Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___DeInit
              (*(long *)(lVar4 + 0x170),uRam0000000003d3e0c8);
  }
  if (*(long *)(lVar4 + 0xf8) != 0) {
    Atlas_UI_TopBarManager__DeInit(*(long *)(lVar4 + 0xf8),0);
  }
  if (*(long *)(lVar4 + 0x168) != 0) {
    Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___DeInit
              (*(long *)(lVar4 + 0x168),uRam0000000003d3e160);
  }
  if (*(long *)(lVar4 + 0x100) != 0) {
    Atlas_Contexts_ContextManagerTransitions__DeInit(*(long *)(lVar4 + 0x100),0);
  }
  lVar2 = *(long *)(lVar4 + 0xe8);
  if (lVar2 != 0) {
    Atlas_UI_TransitionManager__DeInit(lVar2,0);
  }
  if (*(long *)(lVar4 + 0xf0) != 0) {
    Atlas_UI_HostMigrationTransitionManager__DeInit(*(long *)(lVar4 + 0xf0),0);
  }
  if (*(long *)(lVar4 + 0xd8) != 0) {
    Atlas_UI_AtlasUIManager__DeInit(*(long *)(lVar4 + 0xd8),0);
  }
  *(undefined8 *)(lVar4 + 0xd8) = 0;
  *(undefined8 *)(lVar4 + 0xf0) = 0;
  *(long *)(lVar4 + 0xe8) = 0;
  *(undefined8 *)(lVar4 + 0x100) = 0;
  *(undefined8 *)(lVar4 + 0xf8) = 0;
  *(undefined8 *)(lVar4 + 0x170) = 0;
  *(undefined8 *)(lVar4 + 0x178) = 0;
  *(undefined8 *)(lVar4 + 0x168) = 0;
  return;
}



// ============================================================
// RVA: 0x144c674 | Atlas.ApplicationBehaviour.DeInitUI
// ============================================================

void Atlas_ApplicationBehaviour__DeInitUI(long param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb4742 & 1) == 0) {
    func_0x00f78a20(0x3d3e0c8);
    func_0x00f78a20(0x3d3e120);
    func_0x00f78a20(0x3d3e160);
    bRam0000000003eb4742 = 1;
  }
  if (*(long *)(param_1 + 0x1a8) != 0) {
    Atlas_UI_ToastManager__DeInit(*(long *)(param_1 + 0x1a8),0);
  }
  if (*(long *)(param_1 + 0x178) != 0) {
    Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___DeInit
              (*(long *)(param_1 + 0x178),uRam0000000003d3e120);
  }
  if (*(long *)(param_1 + 0x170) != 0) {
    Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___DeInit
              (*(long *)(param_1 + 0x170),uRam0000000003d3e0c8);
  }
  if (*(long *)(param_1 + 0xf8) != 0) {
    Atlas_UI_TopBarManager__DeInit(*(long *)(param_1 + 0xf8),0);
  }
  if (*(long *)(param_1 + 0x168) != 0) {
    Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___DeInit
              (*(long *)(param_1 + 0x168),uRam0000000003d3e160);
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    Atlas_Contexts_ContextManagerTransitions__DeInit(*(long *)(param_1 + 0x100),0);
  }
  lVar1 = *(long *)(param_1 + 0xe8);
  if (lVar1 != 0) {
    Atlas_UI_TransitionManager__DeInit(lVar1,0);
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    Atlas_UI_HostMigrationTransitionManager__DeInit(*(long *)(param_1 + 0xf0),0);
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    Atlas_UI_AtlasUIManager__DeInit(*(long *)(param_1 + 0xd8),0);
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(long *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  return;
}



// ============================================================
// RVA: 0x144c794 | Atlas.ApplicationBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_ApplicationBehaviour___ctor(ulong param_1)

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



// ============================================================
// RVA: 0x144c79c | Atlas.ApplicationBehaviour.<DeInit>b__71_0
// ============================================================

undefined1 Atlas_ApplicationBehaviour___DeInit_b__71_0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x1722a98 | Atlas.ApplicationBehaviour.AddNetworkIdentifierDefinition<AntennaDefinition>
// ============================================================

ulong Atlas_ApplicationBehaviour__AddNetworkIdentifierDefinition_AntennaDefinition_
                (long param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int extraout_w1;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long lStack_58;
  
  if ((bRam0000000003eb5fa6 & 1) == 0) {
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb5fa6 = 1;
  }
  lStack_58 = 0;
  if (((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) ||
     ((**(code **)**(undefined8 **)(param_3 + 0x30))(*(long *)(param_2 + 0x10),&lStack_58),
     lStack_58 == 0)) {
    func_0x00f78af4();
  }
  else {
    plVar2 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_58,uRam0000000003d3fe40);
    if (plVar2 != (long *)0x0) {
      do {
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01722bb8;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_01722bb8:
        uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar9 & 1) == 0) {
          lVar8 = 0;
          do {
            if (plVar2 != (long *)0x0) {
              lVar11 = *plVar2;
              uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                    goto code_r0x01722cf8;
                  }
                  piVar10 = piVar10 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01722cf8:
              uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
            }
            if (lVar8 == 0) {
              return uVar9;
            }
            func_0x00f78ac0(lVar8,0);
            if (extraout_w1 != 1) {
              auVar12 = __Unwind_Resume();
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43710);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43718);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43720);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01722fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43728);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01723048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              uVar7 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43738);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x017230cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(param_4 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,uVar7);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43748);
              func_0x00f78ac0(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x01723128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar9 = (**(code **)**(undefined8 **)(param_5 + 0x30))();
              return uVar9;
            }
            plVar4 = (long *)___cxa_begin_catch();
            lVar8 = *plVar4;
            uVar9 = ___cxa_end_catch();
          } while( true );
        }
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c14;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01722c14:
        plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01722d3c;
        }
        lVar11 = *(long *)(param_1 + 0x110);
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c78;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01722c78:
        uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if (lVar11 == 0) goto code_r0x01722d2c;
        /*Atlas.Networking.NetworkIdentifiers$$AddIdentifier*/ func_0x014a74f4(lVar11,uVar5,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x01722d3c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1722d40);
  (*pcVar1)();
code_r0x01722d2c:
  func_0x00f78af4(uVar5,uVar5);
  goto code_r0x01722d3c;
}



// ============================================================
// RVA: 0x1722a98 | Atlas.ApplicationBehaviour.AddNetworkIdentifierDefinition<BoostDefinition>
// ============================================================

ulong Atlas_ApplicationBehaviour__AddNetworkIdentifierDefinition_AntennaDefinition_
                (long param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int extraout_w1;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long lStack_58;
  
  if ((bRam0000000003eb5fa6 & 1) == 0) {
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb5fa6 = 1;
  }
  lStack_58 = 0;
  if (((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) ||
     ((**(code **)**(undefined8 **)(param_3 + 0x30))(*(long *)(param_2 + 0x10),&lStack_58),
     lStack_58 == 0)) {
    func_0x00f78af4();
  }
  else {
    plVar2 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_58,uRam0000000003d3fe40);
    if (plVar2 != (long *)0x0) {
      do {
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01722bb8;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_01722bb8:
        uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar9 & 1) == 0) {
          lVar8 = 0;
          do {
            if (plVar2 != (long *)0x0) {
              lVar11 = *plVar2;
              uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                    goto code_r0x01722cf8;
                  }
                  piVar10 = piVar10 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01722cf8:
              uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
            }
            if (lVar8 == 0) {
              return uVar9;
            }
            func_0x00f78ac0(lVar8,0);
            if (extraout_w1 != 1) {
              auVar12 = __Unwind_Resume();
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43710);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43718);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43720);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01722fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43728);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01723048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              uVar7 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43738);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x017230cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(param_4 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,uVar7);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43748);
              func_0x00f78ac0(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x01723128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar9 = (**(code **)**(undefined8 **)(param_5 + 0x30))();
              return uVar9;
            }
            plVar4 = (long *)___cxa_begin_catch();
            lVar8 = *plVar4;
            uVar9 = ___cxa_end_catch();
          } while( true );
        }
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c14;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01722c14:
        plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01722d3c;
        }
        lVar11 = *(long *)(param_1 + 0x110);
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c78;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01722c78:
        uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if (lVar11 == 0) goto code_r0x01722d2c;
        /*Atlas.Networking.NetworkIdentifiers$$AddIdentifier*/ func_0x014a74f4(lVar11,uVar5,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x01722d3c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1722d40);
  (*pcVar1)();
code_r0x01722d2c:
  func_0x00f78af4(uVar5,uVar5);
  goto code_r0x01722d3c;
}



// ============================================================
// RVA: 0x1722a98 | Atlas.ApplicationBehaviour.AddNetworkIdentifierDefinition<CharacterDefinition>
// ============================================================

ulong Atlas_ApplicationBehaviour__AddNetworkIdentifierDefinition_AntennaDefinition_
                (long param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int extraout_w1;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long lStack_58;
  
  if ((bRam0000000003eb5fa6 & 1) == 0) {
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb5fa6 = 1;
  }
  lStack_58 = 0;
  if (((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) ||
     ((**(code **)**(undefined8 **)(param_3 + 0x30))(*(long *)(param_2 + 0x10),&lStack_58),
     lStack_58 == 0)) {
    func_0x00f78af4();
  }
  else {
    plVar2 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_58,uRam0000000003d3fe40);
    if (plVar2 != (long *)0x0) {
      do {
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01722bb8;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_01722bb8:
        uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar9 & 1) == 0) {
          lVar8 = 0;
          do {
            if (plVar2 != (long *)0x0) {
              lVar11 = *plVar2;
              uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                    goto code_r0x01722cf8;
                  }
                  piVar10 = piVar10 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01722cf8:
              uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
            }
            if (lVar8 == 0) {
              return uVar9;
            }
            func_0x00f78ac0(lVar8,0);
            if (extraout_w1 != 1) {
              auVar12 = __Unwind_Resume();
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43710);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43718);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43720);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01722fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43728);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01723048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              uVar7 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43738);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x017230cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(param_4 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,uVar7);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43748);
              func_0x00f78ac0(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x01723128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar9 = (**(code **)**(undefined8 **)(param_5 + 0x30))();
              return uVar9;
            }
            plVar4 = (long *)___cxa_begin_catch();
            lVar8 = *plVar4;
            uVar9 = ___cxa_end_catch();
          } while( true );
        }
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c14;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01722c14:
        plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01722d3c;
        }
        lVar11 = *(long *)(param_1 + 0x110);
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c78;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01722c78:
        uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if (lVar11 == 0) goto code_r0x01722d2c;
        /*Atlas.Networking.NetworkIdentifiers$$AddIdentifier*/ func_0x014a74f4(lVar11,uVar5,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x01722d3c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1722d40);
  (*pcVar1)();
code_r0x01722d2c:
  func_0x00f78af4(uVar5,uVar5);
  goto code_r0x01722d3c;
}



// ============================================================
// RVA: 0x1722a98 | Atlas.ApplicationBehaviour.AddNetworkIdentifierDefinition<GameContextDefinition>
// ============================================================

ulong Atlas_ApplicationBehaviour__AddNetworkIdentifierDefinition_AntennaDefinition_
                (long param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int extraout_w1;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long lStack_58;
  
  if ((bRam0000000003eb5fa6 & 1) == 0) {
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb5fa6 = 1;
  }
  lStack_58 = 0;
  if (((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) ||
     ((**(code **)**(undefined8 **)(param_3 + 0x30))(*(long *)(param_2 + 0x10),&lStack_58),
     lStack_58 == 0)) {
    func_0x00f78af4();
  }
  else {
    plVar2 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_58,uRam0000000003d3fe40);
    if (plVar2 != (long *)0x0) {
      do {
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01722bb8;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_01722bb8:
        uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar9 & 1) == 0) {
          lVar8 = 0;
          do {
            if (plVar2 != (long *)0x0) {
              lVar11 = *plVar2;
              uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                    goto code_r0x01722cf8;
                  }
                  piVar10 = piVar10 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01722cf8:
              uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
            }
            if (lVar8 == 0) {
              return uVar9;
            }
            func_0x00f78ac0(lVar8,0);
            if (extraout_w1 != 1) {
              auVar12 = __Unwind_Resume();
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43710);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43718);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43720);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01722fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43728);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01723048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              uVar7 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43738);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x017230cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(param_4 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,uVar7);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43748);
              func_0x00f78ac0(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x01723128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar9 = (**(code **)**(undefined8 **)(param_5 + 0x30))();
              return uVar9;
            }
            plVar4 = (long *)___cxa_begin_catch();
            lVar8 = *plVar4;
            uVar9 = ___cxa_end_catch();
          } while( true );
        }
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c14;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01722c14:
        plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01722d3c;
        }
        lVar11 = *(long *)(param_1 + 0x110);
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c78;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01722c78:
        uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if (lVar11 == 0) goto code_r0x01722d2c;
        /*Atlas.Networking.NetworkIdentifiers$$AddIdentifier*/ func_0x014a74f4(lVar11,uVar5,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x01722d3c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1722d40);
  (*pcVar1)();
code_r0x01722d2c:
  func_0x00f78af4(uVar5,uVar5);
  goto code_r0x01722d3c;
}



// ============================================================
// RVA: 0x1722a98 | Atlas.ApplicationBehaviour.AddNetworkIdentifierDefinition<GliderDefinition>
// ============================================================

ulong Atlas_ApplicationBehaviour__AddNetworkIdentifierDefinition_AntennaDefinition_
                (long param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int extraout_w1;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long lStack_58;
  
  if ((bRam0000000003eb5fa6 & 1) == 0) {
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb5fa6 = 1;
  }
  lStack_58 = 0;
  if (((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) ||
     ((**(code **)**(undefined8 **)(param_3 + 0x30))(*(long *)(param_2 + 0x10),&lStack_58),
     lStack_58 == 0)) {
    func_0x00f78af4();
  }
  else {
    plVar2 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_58,uRam0000000003d3fe40);
    if (plVar2 != (long *)0x0) {
      do {
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01722bb8;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_01722bb8:
        uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar9 & 1) == 0) {
          lVar8 = 0;
          do {
            if (plVar2 != (long *)0x0) {
              lVar11 = *plVar2;
              uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                    goto code_r0x01722cf8;
                  }
                  piVar10 = piVar10 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01722cf8:
              uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
            }
            if (lVar8 == 0) {
              return uVar9;
            }
            func_0x00f78ac0(lVar8,0);
            if (extraout_w1 != 1) {
              auVar12 = __Unwind_Resume();
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43710);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43718);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43720);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01722fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43728);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01723048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              uVar7 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43738);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x017230cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(param_4 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,uVar7);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43748);
              func_0x00f78ac0(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x01723128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar9 = (**(code **)**(undefined8 **)(param_5 + 0x30))();
              return uVar9;
            }
            plVar4 = (long *)___cxa_begin_catch();
            lVar8 = *plVar4;
            uVar9 = ___cxa_end_catch();
          } while( true );
        }
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c14;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01722c14:
        plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01722d3c;
        }
        lVar11 = *(long *)(param_1 + 0x110);
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c78;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01722c78:
        uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if (lVar11 == 0) goto code_r0x01722d2c;
        /*Atlas.Networking.NetworkIdentifiers$$AddIdentifier*/ func_0x014a74f4(lVar11,uVar5,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x01722d3c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1722d40);
  (*pcVar1)();
code_r0x01722d2c:
  func_0x00f78af4(uVar5,uVar5);
  goto code_r0x01722d3c;
}



// ============================================================
// RVA: 0x1722a98 | Atlas.ApplicationBehaviour.AddNetworkIdentifierDefinition<KartDefinition>
// ============================================================

ulong Atlas_ApplicationBehaviour__AddNetworkIdentifierDefinition_AntennaDefinition_
                (long param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int extraout_w1;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long lStack_58;
  
  if ((bRam0000000003eb5fa6 & 1) == 0) {
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb5fa6 = 1;
  }
  lStack_58 = 0;
  if (((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) ||
     ((**(code **)**(undefined8 **)(param_3 + 0x30))(*(long *)(param_2 + 0x10),&lStack_58),
     lStack_58 == 0)) {
    func_0x00f78af4();
  }
  else {
    plVar2 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_58,uRam0000000003d3fe40);
    if (plVar2 != (long *)0x0) {
      do {
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01722bb8;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_01722bb8:
        uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar9 & 1) == 0) {
          lVar8 = 0;
          do {
            if (plVar2 != (long *)0x0) {
              lVar11 = *plVar2;
              uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                    goto code_r0x01722cf8;
                  }
                  piVar10 = piVar10 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01722cf8:
              uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
            }
            if (lVar8 == 0) {
              return uVar9;
            }
            func_0x00f78ac0(lVar8,0);
            if (extraout_w1 != 1) {
              auVar12 = __Unwind_Resume();
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43710);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43718);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43720);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01722fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43728);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01723048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              uVar7 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43738);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x017230cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(param_4 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,uVar7);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43748);
              func_0x00f78ac0(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x01723128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar9 = (**(code **)**(undefined8 **)(param_5 + 0x30))();
              return uVar9;
            }
            plVar4 = (long *)___cxa_begin_catch();
            lVar8 = *plVar4;
            uVar9 = ___cxa_end_catch();
          } while( true );
        }
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c14;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01722c14:
        plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01722d3c;
        }
        lVar11 = *(long *)(param_1 + 0x110);
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c78;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01722c78:
        uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if (lVar11 == 0) goto code_r0x01722d2c;
        /*Atlas.Networking.NetworkIdentifiers$$AddIdentifier*/ func_0x014a74f4(lVar11,uVar5,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x01722d3c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1722d40);
  (*pcVar1)();
code_r0x01722d2c:
  func_0x00f78af4(uVar5,uVar5);
  goto code_r0x01722d3c;
}



// ============================================================
// RVA: 0x1722a98 | Atlas.ApplicationBehaviour.AddNetworkIdentifierDefinition<MapDefinition>
// ============================================================

ulong Atlas_ApplicationBehaviour__AddNetworkIdentifierDefinition_AntennaDefinition_
                (long param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int extraout_w1;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long lStack_58;
  
  if ((bRam0000000003eb5fa6 & 1) == 0) {
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb5fa6 = 1;
  }
  lStack_58 = 0;
  if (((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) ||
     ((**(code **)**(undefined8 **)(param_3 + 0x30))(*(long *)(param_2 + 0x10),&lStack_58),
     lStack_58 == 0)) {
    func_0x00f78af4();
  }
  else {
    plVar2 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_58,uRam0000000003d3fe40);
    if (plVar2 != (long *)0x0) {
      do {
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01722bb8;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_01722bb8:
        uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar9 & 1) == 0) {
          lVar8 = 0;
          do {
            if (plVar2 != (long *)0x0) {
              lVar11 = *plVar2;
              uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                    goto code_r0x01722cf8;
                  }
                  piVar10 = piVar10 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01722cf8:
              uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
            }
            if (lVar8 == 0) {
              return uVar9;
            }
            func_0x00f78ac0(lVar8,0);
            if (extraout_w1 != 1) {
              auVar12 = __Unwind_Resume();
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43710);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43718);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43720);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01722fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43728);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01723048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              uVar7 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43738);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x017230cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(param_4 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,uVar7);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43748);
              func_0x00f78ac0(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x01723128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar9 = (**(code **)**(undefined8 **)(param_5 + 0x30))();
              return uVar9;
            }
            plVar4 = (long *)___cxa_begin_catch();
            lVar8 = *plVar4;
            uVar9 = ___cxa_end_catch();
          } while( true );
        }
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c14;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01722c14:
        plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01722d3c;
        }
        lVar11 = *(long *)(param_1 + 0x110);
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c78;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01722c78:
        uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if (lVar11 == 0) goto code_r0x01722d2c;
        /*Atlas.Networking.NetworkIdentifiers$$AddIdentifier*/ func_0x014a74f4(lVar11,uVar5,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x01722d3c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1722d40);
  (*pcVar1)();
code_r0x01722d2c:
  func_0x00f78af4(uVar5,uVar5);
  goto code_r0x01722d3c;
}



// ============================================================
// RVA: 0x1722a98 | Atlas.ApplicationBehaviour.AddNetworkIdentifierDefinition<PickupTableDefinition>
// ============================================================

ulong Atlas_ApplicationBehaviour__AddNetworkIdentifierDefinition_AntennaDefinition_
                (long param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int extraout_w1;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long lStack_58;
  
  if ((bRam0000000003eb5fa6 & 1) == 0) {
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb5fa6 = 1;
  }
  lStack_58 = 0;
  if (((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) ||
     ((**(code **)**(undefined8 **)(param_3 + 0x30))(*(long *)(param_2 + 0x10),&lStack_58),
     lStack_58 == 0)) {
    func_0x00f78af4();
  }
  else {
    plVar2 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_58,uRam0000000003d3fe40);
    if (plVar2 != (long *)0x0) {
      do {
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01722bb8;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_01722bb8:
        uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar9 & 1) == 0) {
          lVar8 = 0;
          do {
            if (plVar2 != (long *)0x0) {
              lVar11 = *plVar2;
              uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                    goto code_r0x01722cf8;
                  }
                  piVar10 = piVar10 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01722cf8:
              uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
            }
            if (lVar8 == 0) {
              return uVar9;
            }
            func_0x00f78ac0(lVar8,0);
            if (extraout_w1 != 1) {
              auVar12 = __Unwind_Resume();
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43710);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43718);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43720);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01722fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43728);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01723048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              uVar7 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43738);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x017230cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(param_4 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,uVar7);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43748);
              func_0x00f78ac0(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x01723128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar9 = (**(code **)**(undefined8 **)(param_5 + 0x30))();
              return uVar9;
            }
            plVar4 = (long *)___cxa_begin_catch();
            lVar8 = *plVar4;
            uVar9 = ___cxa_end_catch();
          } while( true );
        }
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c14;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01722c14:
        plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01722d3c;
        }
        lVar11 = *(long *)(param_1 + 0x110);
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c78;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01722c78:
        uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if (lVar11 == 0) goto code_r0x01722d2c;
        /*Atlas.Networking.NetworkIdentifiers$$AddIdentifier*/ func_0x014a74f4(lVar11,uVar5,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x01722d3c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1722d40);
  (*pcVar1)();
code_r0x01722d2c:
  func_0x00f78af4(uVar5,uVar5);
  goto code_r0x01722d3c;
}



// ============================================================
// RVA: 0x1722a98 | Atlas.ApplicationBehaviour.AddNetworkIdentifierDefinition<UsableDefinition>
// ============================================================

ulong Atlas_ApplicationBehaviour__AddNetworkIdentifierDefinition_AntennaDefinition_
                (long param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int extraout_w1;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long lStack_58;
  
  if ((bRam0000000003eb5fa6 & 1) == 0) {
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb5fa6 = 1;
  }
  lStack_58 = 0;
  if (((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) ||
     ((**(code **)**(undefined8 **)(param_3 + 0x30))(*(long *)(param_2 + 0x10),&lStack_58),
     lStack_58 == 0)) {
    func_0x00f78af4();
  }
  else {
    plVar2 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_58,uRam0000000003d3fe40);
    if (plVar2 != (long *)0x0) {
      do {
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01722bb8;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_01722bb8:
        uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar9 & 1) == 0) {
          lVar8 = 0;
          do {
            if (plVar2 != (long *)0x0) {
              lVar11 = *plVar2;
              uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                    goto code_r0x01722cf8;
                  }
                  piVar10 = piVar10 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01722cf8:
              uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
            }
            if (lVar8 == 0) {
              return uVar9;
            }
            func_0x00f78ac0(lVar8,0);
            if (extraout_w1 != 1) {
              auVar12 = __Unwind_Resume();
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43710);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43718);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43720);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01722fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43728);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01723048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              uVar7 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43738);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x017230cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(param_4 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,uVar7);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43748);
              func_0x00f78ac0(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x01723128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar9 = (**(code **)**(undefined8 **)(param_5 + 0x30))();
              return uVar9;
            }
            plVar4 = (long *)___cxa_begin_catch();
            lVar8 = *plVar4;
            uVar9 = ___cxa_end_catch();
          } while( true );
        }
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c14;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01722c14:
        plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01722d3c;
        }
        lVar11 = *(long *)(param_1 + 0x110);
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c78;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01722c78:
        uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if (lVar11 == 0) goto code_r0x01722d2c;
        /*Atlas.Networking.NetworkIdentifiers$$AddIdentifier*/ func_0x014a74f4(lVar11,uVar5,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x01722d3c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1722d40);
  (*pcVar1)();
code_r0x01722d2c:
  func_0x00f78af4(uVar5,uVar5);
  goto code_r0x01722d3c;
}



// ============================================================
// RVA: 0x1722a98 | Atlas.ApplicationBehaviour.AddNetworkIdentifierDefinition<WheelsDefinition>
// ============================================================

ulong Atlas_ApplicationBehaviour__AddNetworkIdentifierDefinition_AntennaDefinition_
                (long param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int extraout_w1;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long lStack_58;
  
  if ((bRam0000000003eb5fa6 & 1) == 0) {
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb5fa6 = 1;
  }
  lStack_58 = 0;
  if (((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) ||
     ((**(code **)**(undefined8 **)(param_3 + 0x30))(*(long *)(param_2 + 0x10),&lStack_58),
     lStack_58 == 0)) {
    func_0x00f78af4();
  }
  else {
    plVar2 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_58,uRam0000000003d3fe40);
    if (plVar2 != (long *)0x0) {
      do {
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01722bb8;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_01722bb8:
        uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar9 & 1) == 0) {
          lVar8 = 0;
          do {
            if (plVar2 != (long *)0x0) {
              lVar11 = *plVar2;
              uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                    goto code_r0x01722cf8;
                  }
                  piVar10 = piVar10 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01722cf8:
              uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
            }
            if (lVar8 == 0) {
              return uVar9;
            }
            func_0x00f78ac0(lVar8,0);
            if (extraout_w1 != 1) {
              auVar12 = __Unwind_Resume();
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43710);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43718);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43720);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01722fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43728);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01723048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              uVar7 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43738);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x017230cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(param_4 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,uVar7);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43748);
              func_0x00f78ac0(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x01723128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar9 = (**(code **)**(undefined8 **)(param_5 + 0x30))();
              return uVar9;
            }
            plVar4 = (long *)___cxa_begin_catch();
            lVar8 = *plVar4;
            uVar9 = ___cxa_end_catch();
          } while( true );
        }
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c14;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01722c14:
        plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01722d3c;
        }
        lVar11 = *(long *)(param_1 + 0x110);
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c78;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01722c78:
        uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if (lVar11 == 0) goto code_r0x01722d2c;
        /*Atlas.Networking.NetworkIdentifiers$$AddIdentifier*/ func_0x014a74f4(lVar11,uVar5,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x01722d3c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1722d40);
  (*pcVar1)();
code_r0x01722d2c:
  func_0x00f78af4(uVar5,uVar5);
  goto code_r0x01722d3c;
}



// ============================================================
// RVA: 0x1722a98 | Atlas.ApplicationBehaviour.AddNetworkIdentifierDefinition<object>
// ============================================================

ulong Atlas_ApplicationBehaviour__AddNetworkIdentifierDefinition_AntennaDefinition_
                (long param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int extraout_w1;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long lStack_58;
  
  if ((bRam0000000003eb5fa6 & 1) == 0) {
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb5fa6 = 1;
  }
  lStack_58 = 0;
  if (((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) ||
     ((**(code **)**(undefined8 **)(param_3 + 0x30))(*(long *)(param_2 + 0x10),&lStack_58),
     lStack_58 == 0)) {
    func_0x00f78af4();
  }
  else {
    plVar2 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_58,uRam0000000003d3fe40);
    if (plVar2 != (long *)0x0) {
      do {
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01722bb8;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_01722bb8:
        uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar9 & 1) == 0) {
          lVar8 = 0;
          do {
            if (plVar2 != (long *)0x0) {
              lVar11 = *plVar2;
              uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                    goto code_r0x01722cf8;
                  }
                  piVar10 = piVar10 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01722cf8:
              uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
            }
            if (lVar8 == 0) {
              return uVar9;
            }
            func_0x00f78ac0(lVar8,0);
            if (extraout_w1 != 1) {
              auVar12 = __Unwind_Resume();
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43710);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43718);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              if (auVar12._0_8_ != 0) {
                lVar8 = **(long **)(auVar12._8_8_ + 0x30);
                if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar8);
                }
                uVar9 = func_0x00f78aec(lVar8);
                (*(code *)**(undefined8 **)(*(long *)(auVar12._8_8_ + 0x30) + 8))
                          (uVar9,auVar12._0_8_);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43720);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01722fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              lVar11 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6);
              uVar6 = func_0x00f78a24(0x3d43728);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01723048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,0);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              uVar7 = 0;
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43738);
              auVar12 = func_0x00f78ac0(uVar5,uVar6);
              lVar8 = auVar12._0_8_;
              if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x017230cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)**(undefined8 **)(param_4 + 0x30))
                                  (lVar8,0,*(undefined4 *)(lVar8 + 0x18),auVar12._8_8_,uVar7);
                return uVar9;
              }
              func_0x00f78a24(0x3d1fcf0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d77d18);
              /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
              uVar6 = func_0x00f78a24(0x3d43748);
              func_0x00f78ac0(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x01723128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar9 = (**(code **)**(undefined8 **)(param_5 + 0x30))();
              return uVar9;
            }
            plVar4 = (long *)___cxa_begin_catch();
            lVar8 = *plVar4;
            uVar9 = ___cxa_end_catch();
          } while( true );
        }
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c14;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01722c14:
        plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01722d3c;
        }
        lVar11 = *(long *)(param_1 + 0x110);
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x01722c78;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01722c78:
        uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if (lVar11 == 0) goto code_r0x01722d2c;
        /*Atlas.Networking.NetworkIdentifiers$$AddIdentifier*/ func_0x014a74f4(lVar11,uVar5,0);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x01722d3c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1722d40);
  (*pcVar1)();
code_r0x01722d2c:
  func_0x00f78af4(uVar5,uVar5);
  goto code_r0x01722d3c;
}



