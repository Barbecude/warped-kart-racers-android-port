// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Settings.DeviceQualitySettings

// ============================================================
// RVA: 0x168b1dc | Core.Settings.DeviceQualitySettings.Init
// ============================================================

void Core_Settings_DeviceQualitySettings__Init(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5a81 & 1) == 0) {
    func_0x00f78a20(0x3d3d0a8);
    func_0x00f78a20(0x3d1e120);
    bRam0000000003eb5a81 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<DeviceQualitySettings.DeviceSpec>_TypeInfo*/ uRam0000000003d1e120);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3d0a8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}



// ============================================================
// RVA: 0x168b254 | Core.Settings.DeviceQualitySettings.DeInit
// ============================================================

void Core_Settings_DeviceQualitySettings__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// ============================================================
// RVA: 0x168b25c | Core.Settings.DeviceQualitySettings.GetDeviceInfo
// ============================================================

void Core_Settings_DeviceQualitySettings__GetDeviceInfo(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  ulong uVar7;
  int extraout_w1;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long *plStack_188;
  long lStack_180;
  long *plStack_178;
  undefined1 *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if ((bRam0000000003eb5a82 & 1) == 0) {
    func_0x00f78a20(0x3d21320);
    func_0x00f78a20(0x3d21c58);
    func_0x00f78a20(0x3d393b8);
    func_0x00f78a20(0x3d39a38);
    func_0x00f78a20(0x3d39a30);
    func_0x00f78a20(0x3d1d720);
    func_0x00f78a20(0x3d23a90);
    func_0x00f78a20(0x3d66490);
    func_0x00f78a20(0x3d71608);
    func_0x00f78a20(0x3d6d4d0);
    func_0x00f78a20(0x3d730d8);
    func_0x00f78a20(0x3d6f9c8);
    func_0x00f78a20(0x3d71e90);
    func_0x00f78a20(0x3d6d4d8);
    func_0x00f78a20(0x3d6d4b8);
    func_0x00f78a20(0x3d708e8);
    func_0x00f78a20(0x3d715f0);
    func_0x00f78a20(0x3d6d4c8);
    func_0x00f78a20(0x3d6d4e8);
    func_0x00f78a20(0x3d6d4e0);
    func_0x00f78a20(0x3d6bc90);
    func_0x00f78a20(0x3d6d4c0);
    func_0x00f78a20(0x3d708e0);
    func_0x00f78a20(0x3d6bc98);
    bRam0000000003eb5a82 = 1;
  }
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar2 = func_0x00f78aec(/*System.Collections.Generic.List<KeyValuePair<string, string>>_TypeInfo*/ uRam0000000003d1d720);
  /*System.Collections.Generic.List<KeyValuePair<string, string>>$$.ctor*/ func_0x0234e0f4(lVar2,uRam0000000003d39a30);
  *param_1 = lVar2;
  uStack_54 = /*UnityEngine.SystemInfo$$get_systemMemorySize*/ func_0x0326d4f0(0);
  uVar3 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_54,0);
  uStack_70 = 0;
  uStack_68 = 0;
  /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4(&uStack_70,/*STR('System mem(MB)')*/ uRam0000000003d730d8,uVar3,uRam0000000003d393b8);
  lVar8 = 0;
  plVar9 = (long *)0x3d730d8;
  uVar3 = 0x3d39a30;
  uVar4 = 0x3eb5000;
  if (lVar2 != 0) {
    uVar10 = 0x3d39a38;
    /*System.Collections.Generic.List<KeyValuePair<string, string>>$$Add*/ func_0x0234edbc(lVar2,uStack_70,uStack_68,uRam0000000003d39a38);
    lVar2 = *param_1;
    uStack_54 = /*UnityEngine.SystemInfo$$get_graphicsMemorySize*/ func_0x0326d690(0);
    uVar4 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_54,0);
    uStack_80 = 0;
    uStack_78 = 0;
    /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4(&uStack_80,/*STR('Graphics mem (MB)')*/ uRam0000000003d6d4d8,uVar4,uRam0000000003d393b8);
    lVar8 = 0;
    plVar9 = (long *)0x3d6d000;
    uVar4 = 0x3d39a38;
    if (lVar2 != 0) {
      /*System.Collections.Generic.List<KeyValuePair<string, string>>$$Add*/ func_0x0234edbc(lVar2,uStack_80,uStack_78,uRam0000000003d39a38);
      lVar2 = *param_1;
      uVar3 = /*UnityEngine.SystemInfo$$get_graphicsDeviceVendor*/ func_0x0326d760(0);
      uStack_90 = 0;
      uStack_88 = 0;
      /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4(&uStack_90,/*STR('Graphics vendor')*/ uRam0000000003d6d4e8,uVar3,uRam0000000003d393b8);
      lVar8 = 0;
      plVar9 = (long *)0x3d6d000;
      uVar3 = 0x3d39a30;
      if (lVar2 != 0) {
        /*System.Collections.Generic.List<KeyValuePair<string, string>>$$Add*/ func_0x0234edbc(lVar2,uStack_90,uStack_88,uRam0000000003d39a38);
        lVar8 = *param_1;
        uStack_58 = /*UnityEngine.SystemInfo$$get_graphicsDeviceType*/ func_0x0326d830(0);
        plVar5 = (long *)func_0x00f78ae0(/*UnityEngine.Rendering.GraphicsDeviceType_TypeInfo*/ uRam0000000003d21c58,&uStack_58);
        plVar9 = (long *)0x3d21000;
        uVar4 = uVar10;
        if (plVar5 != (long *)0x0) {
          uVar3 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          puVar6 = (undefined4 *)func_0x00f78ae4(plVar5);
          uStack_58 = *puVar6;
          uStack_a0 = 0;
          uStack_98 = 0;
          /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4(&uStack_a0,/*STR('Graphics device type')*/ uRam0000000003d6d4c8,uVar3,uRam0000000003d393b8);
          plVar9 = plVar5;
          if (lVar8 != 0) {
            /*System.Collections.Generic.List<KeyValuePair<string, string>>$$Add*/ func_0x0234edbc(lVar8,uStack_a0,uStack_98,uRam0000000003d39a38);
            lVar8 = *param_1;
            plVar5 = (long *)/*UnityEngine.SystemInfo$$get_graphicsDeviceVersion*/ func_0x0326d900(0);
            if (plVar5 != (long *)0x0) {
              uVar10 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
              uStack_b0 = 0;
              uStack_a8 = 0;
              /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4(&uStack_b0,/*STR('Graphics device version')*/ uRam0000000003d6d4d0,uVar10,uRam0000000003d393b8);
              plVar9 = (long *)0x3d6d000;
              if (lVar8 != 0) {
                /*System.Collections.Generic.List<KeyValuePair<string, string>>$$Add*/ func_0x0234edbc(lVar8,uStack_b0,uStack_a8,uRam0000000003d39a38);
                lVar2 = *param_1;
                uVar10 = /*UnityEngine.SystemInfo$$get_graphicsDeviceName*/ func_0x0326d6f8(0);
                uStack_c0 = 0;
                uStack_b8 = 0;
                /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4(&uStack_c0,/*STR('Graphics device name')*/ uRam0000000003d6d4c0,uVar10,uRam0000000003d393b8);
                lVar8 = 0;
                plVar9 = (long *)0x3d6d000;
                if (lVar2 != 0) {
                  /*System.Collections.Generic.List<KeyValuePair<string, string>>$$Add*/ func_0x0234edbc(lVar2,uStack_c0,uStack_b8,uRam0000000003d39a38);
                  lVar2 = *param_1;
                  uStack_54 = /*UnityEngine.SystemInfo$$get_graphicsDeviceID*/ func_0x0326d7c8(0);
                  uVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_54,0);
                  uStack_d0 = 0;
                  uStack_c8 = 0;
                  /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4(&uStack_d0,/*STR('Graphics device ID')*/ uRam0000000003d6d4b8,uVar10,uRam0000000003d393b8);
                  lVar8 = 0;
                  plVar9 = (long *)0x3d6d000;
                  if (lVar2 != 0) {
                    /*System.Collections.Generic.List<KeyValuePair<string, string>>$$Add*/ func_0x0234edbc(lVar2,uStack_d0,uStack_c8,uRam0000000003d39a38);
                    lVar2 = *param_1;
                    uStack_54 = /*UnityEngine.SystemInfo$$get_graphicsShaderLevel*/ func_0x0326d968(0);
                    uVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_54,0);
                    uStack_e0 = 0;
                    uStack_d8 = 0;
                    /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4(&uStack_e0,/*STR('Graphics shader level')*/ uRam0000000003d6d4e0,uVar10,uRam0000000003d393b8);
                    lVar8 = 0;
                    plVar9 = (long *)0x3d6d000;
                    if (lVar2 != 0) {
                      /*System.Collections.Generic.List<KeyValuePair<string, string>>$$Add*/ func_0x0234edbc(lVar2,uStack_e0,uStack_d8,uRam0000000003d39a38);
                      lVar2 = *param_1;
                      uStack_54 = /*UnityEngine.SystemInfo$$get_maxTextureSize*/ func_0x0326dfd0(0);
                      uVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_54,0);
                      uStack_f0 = 0;
                      uStack_e8 = 0;
                      /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4(&uStack_f0,/*STR('Max texture size')*/ uRam0000000003d6f9c8,uVar10,uRam0000000003d393b8);
                      lVar8 = 0;
                      plVar9 = (long *)0x3d6f000;
                      if (lVar2 != 0) {
                        /*System.Collections.Generic.List<KeyValuePair<string, string>>$$Add*/ func_0x0234edbc(lVar2,uStack_f0,uStack_e8,uRam0000000003d39a38);
                        lVar8 = *param_1;
                        uStack_5c = /*UnityEngine.SystemInfo$$get_deviceType*/ func_0x0326d628(0);
                        plVar5 = (long *)func_0x00f78ae0(/*UnityEngine.DeviceType_TypeInfo*/ uRam0000000003d21320,&uStack_5c);
                        plVar9 = (long *)0x3d21000;
                        if (plVar5 != (long *)0x0) {
                          uVar3 = (**(code **)(*plVar5 + 0x168))
                                            (plVar5,*(undefined8 *)(*plVar5 + 0x170));
                          puVar6 = (undefined4 *)func_0x00f78ae4(plVar5);
                          uStack_5c = *puVar6;
                          uStack_100 = 0;
                          uStack_f8 = 0;
                          /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4(&uStack_100,/*STR('Device type')*/ uRam0000000003d6bc98,uVar3,
                                          uRam0000000003d393b8);
                          plVar9 = plVar5;
                          if (lVar8 != 0) {
                            /*System.Collections.Generic.List<KeyValuePair<string, string>>$$Add*/ func_0x0234edbc(lVar8,uStack_100,uStack_f8,uRam0000000003d39a38);
                            lVar2 = *param_1;
                            uVar10 = /*UnityEngine.SystemInfo$$get_deviceModel*/ func_0x0326d5c0(0);
                            uStack_110 = 0;
                            uStack_108 = 0;
                            /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4(&uStack_110,/*STR('Device model')*/ uRam0000000003d6bc90,uVar10,
                                            uRam0000000003d393b8);
                            lVar8 = 0;
                            plVar9 = (long *)0x3d6b000;
                            if (lVar2 != 0) {
                              /*System.Collections.Generic.List<KeyValuePair<string, string>>$$Add*/ func_0x0234edbc(lVar2,uStack_110,uStack_108,uRam0000000003d39a38);
                              lVar2 = *param_1;
                              uVar10 = /*UnityEngine.SystemInfo$$get_operatingSystem*/ func_0x0326d350(0);
                              uStack_120 = 0;
                              uStack_118 = 0;
                              /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4(&uStack_120,/*STR('OS')*/ uRam0000000003d708e0,uVar10,
                                              uRam0000000003d393b8);
                              lVar8 = 0;
                              plVar9 = (long *)0x3d70000;
                              if (lVar2 != 0) {
                                /*System.Collections.Generic.List<KeyValuePair<string, string>>$$Add*/ func_0x0234edbc(lVar2,uStack_120,uStack_118,uRam0000000003d39a38);
                                lVar8 = *param_1;
                                uStack_60 = /*UnityEngine.SystemInfo$$get_operatingSystemFamily*/ func_0x0326d3b8(0);
                                plVar5 = (long *)func_0x00f78ae0(/*UnityEngine.OperatingSystemFamily_TypeInfo*/ uRam0000000003d23a90,&uStack_60);
                                plVar9 = (long *)0x3d23000;
                                if (plVar5 != (long *)0x0) {
                                  uVar3 = (**(code **)(*plVar5 + 0x168))
                                                    (plVar5,*(undefined8 *)(*plVar5 + 0x170));
                                  puVar6 = (undefined4 *)func_0x00f78ae4(plVar5);
                                  uStack_60 = *puVar6;
                                  uStack_130 = 0;
                                  uStack_128 = 0;
                                  /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4(&uStack_130,/*STR('OS family')*/ uRam0000000003d708e8,uVar3,
                                                  uRam0000000003d393b8);
                                  plVar9 = plVar5;
                                  if (lVar8 != 0) {
                                    plVar9 = (long *)0x3d71000;
                                    /*System.Collections.Generic.List<KeyValuePair<string, string>>$$Add*/ func_0x0234edbc(lVar8,uStack_130,uStack_128,uRam0000000003d39a38
                                                   );
                                    lVar2 = *param_1;
                                    uVar10 = /*UnityEngine.SystemInfo$$get_processorType*/ func_0x0326d420(0);
                                    uStack_140 = 0;
                                    uStack_138 = 0;
                                    /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4(&uStack_140,/*STR('Processor type')*/ uRam0000000003d71608,uVar10,
                                                    uRam0000000003d393b8);
                                    lVar8 = 0;
                                    if (lVar2 != 0) {
                                      plVar9 = (long *)0x3d71000;
                                      /*System.Collections.Generic.List<KeyValuePair<string, string>>$$Add*/ func_0x0234edbc(lVar2,uStack_140,uStack_138,
                                                      uRam0000000003d39a38);
                                      lVar2 = *param_1;
                                      uStack_54 = /*UnityEngine.SystemInfo$$get_processorCount*/ func_0x0326d488(0);
                                      uVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_54,0);
                                      uStack_150 = 0;
                                      uStack_148 = 0;
                                      /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4(&uStack_150,/*STR('Processor count')*/ uRam0000000003d715f0,uVar10,
                                                      uRam0000000003d393b8);
                                      lVar8 = 0;
                                      if (lVar2 != 0) {
                                        plVar9 = (long *)0x3d66000;
                                        uVar3 = 0x3d71000;
                                        /*System.Collections.Generic.List<KeyValuePair<string, string>>$$Add*/ func_0x0234edbc(lVar2,uStack_150,uStack_148,
                                                        uRam0000000003d39a38);
                                        lVar2 = *param_1;
                                        uStack_54 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
                                        lVar8 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_54,0);
                                        uStack_54 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
                                        uVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_54,0);
                                        uVar10 = /*System.String$$Concat*/ func_0x029be39c(lVar8,/*STR(' x ')*/ uRam0000000003d66490,uVar10,0
                                                                );
                                        uStack_160 = 0;
                                        uStack_158 = 0;
                                        /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4(&uStack_160,/*STR('Resolution')*/ uRam0000000003d71e90,uVar10,
                                                        uRam0000000003d393b8);
                                        param_1 = (long *)0x0;
                                        if (lVar2 != 0) {
                                          /*System.Collections.Generic.List<KeyValuePair<string, string>>$$Add*/ func_0x0234edbc(lVar2,uStack_160,uStack_158,
                                                          uRam0000000003d39a38);
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
  plVar5 = (long *)func_0x00f78af4();
  uStack_198 = 0x3d393b8;
  puStack_168 = &Core_Settings_DeviceQualitySettings__GetDeviceInfoCsv;
  uStack_1a0 = uVar4;
  uStack_190 = uVar3;
  plStack_188 = plVar9;
  lStack_180 = lVar8;
  plStack_178 = param_1;
  puStack_170 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5a83 & 1) == 0) {
    func_0x00f78a20(0x3d32060);
    func_0x00f78a20(0x3d32068);
    func_0x00f78a20(0x3d32070);
    func_0x00f78a20(0x3d393c0);
    func_0x00f78a20(0x3d393c8);
    func_0x00f78a20(0x3d39a40);
    func_0x00f78a20(0x3d24dd8);
    func_0x00f78a20(0x3d7ced0);
    bRam0000000003eb5a83 = 1;
  }
  lStack_1a8 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  Core_Settings_DeviceQualitySettings__GetDeviceInfo(&lStack_1a8);
  lVar8 = func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
  /*System.Text.StringBuilder$$.ctor*/ func_0x029d1794(lVar8,0x400,0);
  *plVar5 = lVar8;
  if (lStack_1a8 == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar9 = (long *)___cxa_begin_catch();
      lVar8 = *plVar9;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<KeyValuePair<string, string>>$$Dispose*/ func_0x01f61378(&uStack_1d0,uRam0000000003eb5000);
      if (lVar8 == 0) {
        return;
      }
      func_0x00f78ac0(lVar8,0);
    }
    __Unwind_Resume();
    return;
  }
  /*System.Collections.Generic.List<KeyValuePair<string, string>>$$GetEnumerator*/ func_0x0234f8c0(&uStack_1d0,lStack_1a8,uRam0000000003d39a40);
  while( true ) {
    uVar7 = /*System.Collections.Generic.List.Enumerator<KeyValuePair<string, string>>$$MoveNext*/ func_0x01f6137c(&uStack_1d0,uRam0000000003d32068);
    if ((uVar7 & 1) == 0) {
      /*System.Collections.Generic.List.Enumerator<KeyValuePair<string, string>>$$Dispose*/ func_0x01f61378(&uStack_1d0,uRam0000000003d32060);
      return;
    }
    lVar8 = *plVar5;
    uVar3 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0},"{1}"\n')*/ uRam0000000003d7ced0,uStack_1c0,uStack_1b8,0);
    if (lVar8 == 0) break;
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar8,uVar3,0);
  }
  func_0x00f78af4(uVar3,uVar3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x168bae8);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x168b984 | Core.Settings.DeviceQualitySettings.GetDeviceInfoCsv
// ============================================================

void Core_Settings_DeviceQualitySettings__GetDeviceInfoCsv(long *param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  int extraout_w1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  if ((bRam0000000003eb5a83 & 1) == 0) {
    func_0x00f78a20(0x3d32060);
    func_0x00f78a20(0x3d32068);
    func_0x00f78a20(0x3d32070);
    func_0x00f78a20(0x3d393c0);
    func_0x00f78a20(0x3d393c8);
    func_0x00f78a20(0x3d39a40);
    func_0x00f78a20(0x3d24dd8);
    func_0x00f78a20(0x3d7ced0);
    bRam0000000003eb5a83 = 1;
  }
  lStack_48 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  Core_Settings_DeviceQualitySettings__GetDeviceInfo(&lStack_48);
  lVar2 = func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
  /*System.Text.StringBuilder$$.ctor*/ func_0x029d1794(lVar2,0x400,0);
  *param_1 = lVar2;
  if (lStack_48 == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar5 = (long *)___cxa_begin_catch();
      lVar2 = *plVar5;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<KeyValuePair<string, string>>$$Dispose*/ func_0x01f61378(&uStack_70,uRam0000000003eb5000);
      if (lVar2 == 0) {
        return;
      }
      func_0x00f78ac0(lVar2,0);
    }
    __Unwind_Resume();
    return;
  }
  /*System.Collections.Generic.List<KeyValuePair<string, string>>$$GetEnumerator*/ func_0x0234f8c0(&uStack_70,lStack_48,uRam0000000003d39a40);
  while( true ) {
    uVar3 = /*System.Collections.Generic.List.Enumerator<KeyValuePair<string, string>>$$MoveNext*/ func_0x01f6137c(&uStack_70,uRam0000000003d32068);
    if ((uVar3 & 1) == 0) {
      /*System.Collections.Generic.List.Enumerator<KeyValuePair<string, string>>$$Dispose*/ func_0x01f61378(&uStack_70,uRam0000000003d32060);
      return;
    }
    lVar2 = *param_1;
    uVar4 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0},"{1}"\n')*/ uRam0000000003d7ced0,uStack_60,uStack_58,0);
    if (lVar2 == 0) break;
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar2,uVar4,0);
  }
  func_0x00f78af4(uVar4,uVar4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x168bae8);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x168bb2c | Core.Settings.DeviceQualitySettings.LogDeviceSpecs
// ============================================================

void Core_Settings_DeviceQualitySettings__LogDeviceSpecs(void)

{
  return;
}



// ============================================================
// RVA: 0x168bb30 | Core.Settings.DeviceQualitySettings.GenerateDeviceSpecsString
// ============================================================

/* WARNING: Possible PIC construction at 0x0168be84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0168becc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168be88) */
/* WARNING: Removing unreachable block (ram,0x0168bed0) */
/* WARNING: Removing unreachable block (ram,0x0168c714) */

ulong Core_Settings_DeviceQualitySettings__GenerateDeviceSpecsString(void)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  int extraout_w1;
  int extraout_w1_00;
  undefined4 *puVar13;
  long lVar14;
  long extraout_x1;
  long extraout_x1_00;
  ulong uVar15;
  undefined4 uVar16;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  undefined8 *unaff_x21;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong unaff_x27;
  undefined8 unaff_x28;
  undefined *puVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  undefined1 ****ppppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  long lStack_160;
  ulong uStack_158;
  undefined1 ***pppuStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined4 *puStack_118;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  if ((bRam0000000003eb5a84 & 1) == 0) {
    func_0x00f78a20(0x3d32060);
    func_0x00f78a20(0x3d32068);
    func_0x00f78a20(0x3d32070);
    func_0x00f78a20(0x3d393c0);
    func_0x00f78a20(0x3d393c8);
    func_0x00f78a20(0x3d39a40);
    func_0x00f78a20(0x3d24dd8);
    func_0x00f78a20(0x3d7cf98);
    bRam0000000003eb5a84 = 1;
  }
  lStack_38 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  plVar4 = (long *)func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
  /*System.Text.StringBuilder$$.ctor*/ func_0x029d1794(plVar4,0x800,0);
  Core_Settings_DeviceQualitySettings__GetDeviceInfo(&lStack_38);
  if (lStack_38 == 0) goto LAB_0168bc98;
  unaff_x21 = (undefined8 *)0x3d32068;
  /*System.Collections.Generic.List<KeyValuePair<string, string>>$$GetEnumerator*/ func_0x0234f8c0(&uStack_60,lStack_38,uRam0000000003d39a40);
  while (uVar5 = /*System.Collections.Generic.List.Enumerator<KeyValuePair<string, string>>$$MoveNext*/ func_0x01f6137c(&uStack_60,uRam0000000003d32068), (uVar5 & 1) != 0) {
    uVar6 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0}: {1}\n')*/ uRam0000000003d7cf98,uStack_50,uStack_48,0);
    if (plVar4 == (long *)0x0) {
      func_0x00f78af4(uVar6,uVar6);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x168bc98);
      (*pcVar1)();
    }
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(plVar4,uVar6,0);
  }
  /*System.Collections.Generic.List.Enumerator<KeyValuePair<string, string>>$$Dispose*/ func_0x01f61378(&uStack_60,uRam0000000003d32060);
  do {
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      return uVar5;
    }
LAB_0168bc98:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x0168bcdc;
    plVar7 = (long *)___cxa_begin_catch();
    lVar19 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<KeyValuePair<string, string>>$$Dispose*/ func_0x01f61378(&uStack_60,*unaff_x21);
  } while (lVar19 == 0);
  func_0x00f78ac0(lVar19,0);
code_r0x0168bcdc:
  auVar24 = __Unwind_Resume();
  puVar13 = auVar24._8_8_;
  uVar5 = auVar24._0_8_;
  puStack_68 = &Core_Settings_DeviceQualitySettings__TryGetParametersForDevice;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5a85 & 1) == 0) {
    func_0x00f78a20(0x3d65d08);
    func_0x00f78a20(0x3d79930);
    bRam0000000003eb5a85 = 1;
  }
  uVar21 = /*STR('iOS')*/ uRam0000000003d79930;
  uVar8 = /*UnityEngine.SystemInfo$$get_processorType*/ func_0x0326d420(0);
  uVar9 = /*UnityEngine.SystemInfo$$get_graphicsDeviceName*/ func_0x0326d6f8(0);
  uVar6 = /*UnityEngine.SystemInfo$$get_deviceModel*/ func_0x0326d5c0(0);
  lVar19 = /*UnityEngine.SystemInfo$$get_systemMemorySize*/ func_0x0326d4f0(0);
  uVar22 = 0x3eb5000;
  uVar10 = uVar8;
  if ((bRam0000000003eb5a86 & 1) == 0) {
    func_0x00f78a20(0x3d33420);
    func_0x00f78a20(0x3d33428);
    func_0x00f78a20(0x3d33430);
    func_0x00f78a20(0x3d3d0b8);
    func_0x00f78a20(0x3d3c000);
    bRam0000000003eb5a86 = 1;
  }
  if (*(long *)(uVar5 + 0x10) != 0) {
    unaff_x28 = 0x3d33428;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_f8,*(long *)(uVar5 + 0x10),uRam0000000003d3d0b8);
    uStack_d8 = uStack_f0;
    uStack_e0 = uStack_f8;
    uStack_d0 = uStack_e8;
    unaff_x27 = 0;
    while (uVar22 = unaff_x27, uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_e0,uRam0000000003d33428),
          unaff_x27 = uStack_d0, (uVar10 & 1) != 0) {
      if (uStack_d0 == 0) {
        func_0x00f78af4();
code_r0x0168bfa4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x168bfa8);
        (*pcVar1)();
      }
      lVar14 = *(long *)(uStack_d0 + 0x10);
      if (lVar14 == 0) {
        func_0x00f78af4();
        goto code_r0x0168bfa4;
      }
      if (0 < *(int *)(lVar14 + 0x18)) {
        puVar23 = &UNK_0168be88;
        uVar10 = uVar21;
        goto code_r0x0168c00c;
      }
      uVar5 = 1;
      lVar14 = *(long *)(uStack_d0 + 0x18);
      if (lVar14 == 0) {
        func_0x00f78af4();
        goto code_r0x0168bfa4;
      }
      if (0 < *(int *)(lVar14 + 0x18)) {
        uVar10 = /*Core.Settings.DeviceQualitySettings$$IsAnyStringIn*/ func_0x0168c00c(uVar10,lVar14,uVar8);
        uVar5 = (ulong)((uint)uVar10 & 1);
      }
      lVar14 = *(long *)(unaff_x27 + 0x20);
      if (lVar14 == 0) {
        func_0x00f78af4();
        goto code_r0x0168bfa4;
      }
      if (0 < *(int *)(lVar14 + 0x18)) {
        puVar23 = &UNK_0168bed0;
        uVar10 = uVar9;
        goto code_r0x0168c00c;
      }
      lVar14 = *(long *)(unaff_x27 + 0x28);
      if (lVar14 == 0) {
        func_0x00f78af4();
        goto code_r0x0168bfa4;
      }
      if (0 < *(int *)(lVar14 + 0x18)) {
        uVar2 = /*Core.Settings.DeviceQualitySettings$$IsAnyRegexIn*/ func_0x0168c0e8(uVar10,lVar14,uVar6);
        uVar5 = (ulong)((uint)uVar5 & uVar2);
      }
      uVar2 = (uint)uVar5;
      if (0 < *(int *)(unaff_x27 + 0x30)) {
        uVar2 = (uint)uVar5 & (uint)(*(int *)(unaff_x27 + 0x30) <= (int)lVar19);
      }
      if (0 < *(int *)(unaff_x27 + 0x34)) {
        uVar2 = uVar2 & (int)lVar19 <= *(int *)(unaff_x27 + 0x34);
      }
      if (uVar2 == 0) {
        unaff_x27 = uVar22;
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e0,uRam0000000003d33420);
code_r0x0168bf44:
    if (uVar22 == 0) {
      uVar16 = 2;
    }
    else {
      uVar16 = *(undefined4 *)(uVar22 + 0x38);
    }
    *puVar13 = uVar16;
    return (ulong)(uVar22 != 0);
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar4 = (long *)___cxa_begin_catch();
    lVar19 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e0,uRam0000000003d33420);
    if (lVar19 == 0) goto code_r0x0168bf44;
    func_0x00f78ac0(lVar19,0);
  }
  puVar23 = &Core_Settings_DeviceQualitySettings__IsAnyStringIn;
  __Unwind_Resume();
  lVar14 = extraout_x1;
code_r0x0168c00c:
  uStack_140 = uVar21;
  uVar20 = 0x3eb5000;
  uVar15 = uVar10;
  uStack_138 = uVar8;
  uStack_130 = uVar9;
  uStack_128 = uVar6;
  lStack_120 = lVar19;
  puStack_118 = puVar13;
  ppuStack_110 = &puStack_70;
  puStack_108 = puVar23;
  if ((bRam0000000003eb5a8a & 1) == 0) {
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    bRam0000000003eb5a8a = 1;
  }
  if (lVar14 != 0) {
    uVar20 = (ulong)*(uint *)(lVar14 + 0x18);
    if ((int)*(uint *)(lVar14 + 0x18) < 1) {
      return 0;
    }
    uVar8 = uVar20 - 1;
    uVar9 = 1;
    uVar17 = uVar20;
    uVar21 = 0;
    while( true ) {
      if (uVar17 <= uVar21) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (uVar10 == 0) break;
      uVar15 = 5;
      iVar3 = /*System.String$$IndexOf*/ func_0x029cd7cc(uVar10,*(undefined8 *)(*(long *)(lVar14 + 0x10) + uVar21 * 8 + 0x20),5
                              ,0);
      if (-1 < iVar3) {
        return uVar9;
      }
      uVar9 = (ulong)(uVar21 + 1 < uVar20);
      if (uVar8 == uVar21) {
        return uVar9;
      }
      uVar17 = (ulong)*(uint *)(lVar14 + 0x18);
      uVar21 = uVar21 + 1;
    }
  }
  func_0x00f78af4();
  puStack_148 = &Core_Settings_DeviceQualitySettings__IsAnyRegexIn;
  lVar19 = 0x3eb5000;
  uStack_1a0 = unaff_x28;
  uStack_198 = unaff_x27;
  uStack_190 = uVar22;
  uStack_188 = uVar5;
  uStack_180 = uVar21;
  uStack_178 = uVar8;
  uStack_170 = uVar9;
  uStack_168 = uVar20;
  lStack_160 = lVar14;
  uStack_158 = uVar10;
  pppuStack_150 = &ppuStack_110;
  if ((bRam0000000003eb5a8b & 1) == 0) {
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d24218);
    bRam0000000003eb5a8b = 1;
  }
  if (extraout_x1_00 != 0) {
    uVar8 = (ulong)*(uint *)(extraout_x1_00 + 0x18);
    if ((int)*(uint *)(extraout_x1_00 + 0x18) < 1) {
      return 0;
    }
    uVar21 = 0x3d24218;
    uVar22 = uVar8 - 1;
    uVar5 = 1;
    uVar10 = uVar8;
    unaff_x27 = 0;
    while( true ) {
      if (uVar10 <= unaff_x27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar9 = *(ulong *)(*(long *)(extraout_x1_00 + 0x10) + unaff_x27 * 8 + 0x20);
      lVar19 = func_0x00f78aec(/*System.Text.RegularExpressions.Regex_TypeInfo*/ uRam0000000003d24218);
      /*System.Text.RegularExpressions.Regex$$.ctor*/ func_0x02f0301c(lVar19,uVar9,1,0);
      if ((lVar19 == 0) || (lVar14 = /*System.Text.RegularExpressions.Regex$$Match*/ func_0x02f0484c(lVar19,uVar15,0), lVar14 == 0)) break;
      uVar10 = /*System.Text.RegularExpressions.Group$$get_Success*/ func_0x02ed20bc(lVar14,0);
      if ((uVar10 & 1) != 0) {
        return uVar5;
      }
      uVar5 = (ulong)(unaff_x27 + 1 < uVar8);
      if (uVar22 == unaff_x27) {
        return uVar5;
      }
      uVar10 = (ulong)*(uint *)(extraout_x1_00 + 0x18);
      unaff_x27 = unaff_x27 + 1;
    }
  }
  auVar24 = func_0x00f78af4();
  puStack_1a8 = &Core_Settings_DeviceQualitySettings__LoadFromConfigFileString;
  uStack_200 = unaff_x28;
  uStack_1f8 = unaff_x27;
  uStack_1f0 = uVar22;
  uStack_1e8 = uVar5;
  uStack_1e0 = uVar21;
  uStack_1d8 = uVar8;
  uStack_1d0 = uVar9;
  lStack_1c8 = lVar19;
  lStack_1c0 = extraout_x1_00;
  uStack_1b8 = uVar15;
  ppppuStack_1b0 = &pppuStack_150;
  if ((bRam0000000003eb5a87 & 1) == 0) {
    func_0x00f78a20(0x3d27270);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3d0b0);
    func_0x00f78a20(0x3d3bf88);
    func_0x00f78a20(0x3d1de30);
    func_0x00f78a20(0x3d24e28);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d66598);
    func_0x00f78a20(0x3d6fd10);
    func_0x00f78a20(0x3d6bca0);
    func_0x00f78a20(0x3d717b8);
    func_0x00f78a20(0x3d71610);
    func_0x00f78a20(0x3d6cca8);
    func_0x00f78a20(0x3d6fa08);
    func_0x00f78a20(0x3d6bc38);
    func_0x00f78a20(0x3d6d4f0);
    bRam0000000003eb5a87 = 1;
  }
  lStack_210 = 0;
  uStack_208 = 0;
  uStack_218 = 0;
  uVar5 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(auVar24._8_8_,0);
  if ((uVar5 & 1) == 0) {
    plVar4 = (long *)func_0x00f78aec(/*System.IO.StringReader_TypeInfo*/ uRam0000000003d24e28);
    /*System.IO.StringReader$$.ctor*/ func_0x029d57f8(plVar4,auVar24._8_8_,0);
    if (plVar4 == (long *)0x0) {
      func_0x00f78af4();
code_r0x0168c73c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x168c740);
      (*pcVar1)();
    }
    lVar19 = 0;
    while (lVar14 = lVar19,
          lVar19 = (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210)),
          lVar19 != 0) {
      lVar11 = /*System.String$$Trim*/ func_0x029bab94(lVar19,0);
      lVar19 = lVar14;
      if ((lVar11 != 0) &&
         (uVar5 = /*System.String$$StartsWith*/ func_0x029ce8f8(lVar11,/*STR('#')*/ uRam0000000003d66598,0), (uVar5 & 1) == 0)) {
        uVar5 = /*Core.Settings.DeviceQualitySettings$$TryGetSection*/ func_0x0168c7e4(uVar5,lVar11,&uStack_208);
        if ((uVar5 & 1) == 0) {
          lVar19 = 0;
          if ((lVar14 != 0) &&
             (uVar5 = /*Core.Settings.DeviceQualitySettings$$TryGetParameterKeyAndValue*/ func_0x0168c8d4(uVar5,lVar11,&lStack_210,&uStack_218), lVar11 = lStack_210,
             lVar19 = lVar14, (uVar5 & 1) != 0)) {
            if (lStack_210 == 0) {
              func_0x00f78af4();
              goto code_r0x0168c73c;
            }
            uVar5 = /*System.String$$Equals*/ func_0x029caa48(lStack_210,/*STR('Family')*/ uRam0000000003d6cca8,5,0);
            if ((uVar5 & 1) == 0) {
              uVar5 = /*System.String$$Equals*/ func_0x029caa48(lVar11,/*STR('ProcessorType')*/ uRam0000000003d71610,5,0);
              if ((uVar5 & 1) == 0) {
                uVar5 = /*System.String$$Equals*/ func_0x029caa48(lVar11,/*STR('GraphicsDevice')*/ uRam0000000003d6d4f0,5,0);
                if ((uVar5 & 1) == 0) {
                  uVar5 = /*System.String$$Equals*/ func_0x029caa48(lVar11,/*STR('MinMemoryMB')*/ uRam0000000003d6fd10,5,0);
                  if ((uVar5 & 1) == 0) {
                    uVar5 = /*System.String$$Equals*/ func_0x029caa48(lVar11,/*STR('MaxMemoryMB')*/ uRam0000000003d6fa08,5,0);
                    if ((uVar5 & 1) == 0) {
                      uVar5 = /*System.String$$Equals*/ func_0x029caa48(lVar11,/*STR('QualitySetting')*/ uRam0000000003d717b8,5,0);
                      if ((uVar5 & 1) == 0) {
                        uVar5 = /*System.String$$Equals*/ func_0x029caa48(lVar11,/*STR('DeviceModel')*/ uRam0000000003d6bca0,5,0);
                        if ((uVar5 & 1) != 0) {
                          if (*(long *)(lVar14 + 0x28) == 0) {
                            func_0x00f78af4();
                            goto code_r0x0168c73c;
                          }
                          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar14 + 0x28),uStack_218,uRam0000000003d3bfa0);
                        }
                      }
                      else {
                        /*System.Int32$$TryParse*/ func_0x02ae9d70(uStack_218,lVar14 + 0x38,0);
                      }
                    }
                    else {
                      /*System.Int32$$TryParse*/ func_0x02ae9d70(uStack_218,lVar14 + 0x34,0);
                    }
                  }
                  else {
                    /*System.Int32$$TryParse*/ func_0x02ae9d70(uStack_218,lVar14 + 0x30,0);
                  }
                }
                else {
                  if (*(long *)(lVar14 + 0x20) == 0) {
                    func_0x00f78af4();
                    goto code_r0x0168c73c;
                  }
                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar14 + 0x20),uStack_218,uRam0000000003d3bfa0);
                }
              }
              else {
                if (*(long *)(lVar14 + 0x18) == 0) {
                  func_0x00f78af4();
                  goto code_r0x0168c73c;
                }
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar14 + 0x18),uStack_218,uRam0000000003d3bfa0);
              }
            }
            else {
              if (*(long *)(lVar14 + 0x10) == 0) {
                func_0x00f78af4();
                goto code_r0x0168c73c;
              }
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar14 + 0x10),uStack_218,uRam0000000003d3bfa0);
            }
          }
        }
        else {
          uVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(uStack_208,/*STR('Device')*/ uRam0000000003d6bc38,0);
          if ((uVar5 & 1) != 0) {
            lVar19 = func_0x00f78aec(/*Core.Settings.DeviceQualitySettings.DeviceSpec_TypeInfo*/ uRam0000000003d27270);
            /*System.Object$$.ctor*/ func_0x0294d018(lVar19,0);
            uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar6,uRam0000000003d3bf88);
            if (lVar19 == 0) {
              func_0x00f78af4();
              goto code_r0x0168c73c;
            }
            *(undefined8 *)(lVar19 + 0x10) = uVar6;
            uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar6,uRam0000000003d3bf88);
            *(undefined8 *)(lVar19 + 0x18) = uVar6;
            uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar6,uRam0000000003d3bf88);
            *(undefined8 *)(lVar19 + 0x20) = uVar6;
            uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar6,uRam0000000003d3bf88);
            *(undefined8 *)(lVar19 + 0x28) = uVar6;
            lVar14 = *(long *)(auVar24._0_8_ + 0x10);
            if (lVar14 == 0) {
              func_0x00f78af4();
              goto code_r0x0168c73c;
            }
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar14,lVar19,uRam0000000003d3d0b0);
          }
        }
      }
    }
    lVar19 = *plVar4;
    uVar5 = (ulong)*(ushort *)(lVar19 + 0x12a);
    if (uVar5 != 0) {
      piVar18 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar12 = (undefined8 *)(lVar19 + (long)*piVar18 * 0x10 + 0x138);
          goto code_r0x0168c6c4;
        }
        piVar18 = piVar18 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    puVar12 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0168c6c4:
    uVar5 = (*(code *)*puVar12)(plVar4,puVar12[1]);
  }
  return uVar5;
}



// ============================================================
// RVA: 0x168bce0 | Core.Settings.DeviceQualitySettings.TryGetParametersForDevice
// ============================================================

/* WARNING: Possible PIC construction at 0x0168be84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0168becc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168be88) */
/* WARNING: Removing unreachable block (ram,0x0168bed0) */
/* WARNING: Removing unreachable block (ram,0x0168c714) */

ulong Core_Settings_DeviceQualitySettings__TryGetParametersForDevice
                (ulong param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  int extraout_w1;
  long lVar13;
  long extraout_x1;
  long extraout_x1_00;
  ulong uVar14;
  undefined4 uVar15;
  ulong uVar16;
  int *piVar17;
  ulong uVar18;
  ulong uVar19;
  ulong unaff_x27;
  undefined8 unaff_x28;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  undefined1 ***pppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  long lStack_100;
  ulong uStack_f8;
  undefined1 **ppuStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined4 *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  if ((bRam0000000003eb5a85 & 1) == 0) {
    func_0x00f78a20(0x3d65d08);
    func_0x00f78a20(0x3d79930);
    bRam0000000003eb5a85 = 1;
  }
  uVar10 = /*STR('iOS')*/ uRam0000000003d79930;
  uVar4 = /*UnityEngine.SystemInfo$$get_processorType*/ func_0x0326d420(0);
  uVar5 = /*UnityEngine.SystemInfo$$get_graphicsDeviceName*/ func_0x0326d6f8(0);
  uVar6 = /*UnityEngine.SystemInfo$$get_deviceModel*/ func_0x0326d5c0(0);
  lVar7 = /*UnityEngine.SystemInfo$$get_systemMemorySize*/ func_0x0326d4f0(0);
  uVar19 = 0x3eb5000;
  uVar8 = uVar4;
  if ((bRam0000000003eb5a86 & 1) == 0) {
    func_0x00f78a20(0x3d33420);
    func_0x00f78a20(0x3d33428);
    func_0x00f78a20(0x3d33430);
    func_0x00f78a20(0x3d3d0b8);
    func_0x00f78a20(0x3d3c000);
    bRam0000000003eb5a86 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    unaff_x28 = 0x3d33428;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,*(long *)(param_1 + 0x10),uRam0000000003d3d0b8);
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_70 = uStack_88;
    unaff_x27 = 0;
    while (uVar19 = unaff_x27, uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d33428),
          unaff_x27 = uStack_70, (uVar8 & 1) != 0) {
      if (uStack_70 == 0) {
        func_0x00f78af4();
code_r0x0168bfa4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x168bfa8);
        (*pcVar1)();
      }
      lVar13 = *(long *)(uStack_70 + 0x10);
      if (lVar13 == 0) {
        func_0x00f78af4();
        goto code_r0x0168bfa4;
      }
      if (0 < *(int *)(lVar13 + 0x18)) {
        puVar20 = &UNK_0168be88;
        uVar8 = uVar10;
        goto code_r0x0168c00c;
      }
      param_1 = 1;
      lVar13 = *(long *)(uStack_70 + 0x18);
      if (lVar13 == 0) {
        func_0x00f78af4();
        goto code_r0x0168bfa4;
      }
      if (0 < *(int *)(lVar13 + 0x18)) {
        uVar8 = /*Core.Settings.DeviceQualitySettings$$IsAnyStringIn*/ func_0x0168c00c(uVar8,lVar13,uVar4);
        param_1 = (ulong)((uint)uVar8 & 1);
      }
      lVar13 = *(long *)(unaff_x27 + 0x20);
      if (lVar13 == 0) {
        func_0x00f78af4();
        goto code_r0x0168bfa4;
      }
      if (0 < *(int *)(lVar13 + 0x18)) {
        puVar20 = &UNK_0168bed0;
        uVar8 = uVar5;
        goto code_r0x0168c00c;
      }
      lVar13 = *(long *)(unaff_x27 + 0x28);
      if (lVar13 == 0) {
        func_0x00f78af4();
        goto code_r0x0168bfa4;
      }
      if (0 < *(int *)(lVar13 + 0x18)) {
        uVar2 = /*Core.Settings.DeviceQualitySettings$$IsAnyRegexIn*/ func_0x0168c0e8(uVar8,lVar13,uVar6);
        param_1 = (ulong)((uint)param_1 & uVar2);
      }
      uVar2 = (uint)param_1;
      if (0 < *(int *)(unaff_x27 + 0x30)) {
        uVar2 = (uint)param_1 & (uint)(*(int *)(unaff_x27 + 0x30) <= (int)lVar7);
      }
      if (0 < *(int *)(unaff_x27 + 0x34)) {
        uVar2 = uVar2 & (int)lVar7 <= *(int *)(unaff_x27 + 0x34);
      }
      if (uVar2 == 0) {
        unaff_x27 = uVar19;
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d33420);
code_r0x0168bf44:
    if (uVar19 == 0) {
      uVar15 = 2;
    }
    else {
      uVar15 = *(undefined4 *)(uVar19 + 0x38);
    }
    *param_2 = uVar15;
    return (ulong)(uVar19 != 0);
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar9 = (long *)___cxa_begin_catch();
    lVar7 = *plVar9;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d33420);
    if (lVar7 == 0) goto code_r0x0168bf44;
    func_0x00f78ac0(lVar7,0);
  }
  puVar20 = &Core_Settings_DeviceQualitySettings__IsAnyStringIn;
  __Unwind_Resume();
  lVar13 = extraout_x1;
code_r0x0168c00c:
  uStack_e0 = uVar10;
  uVar18 = 0x3eb5000;
  uVar14 = uVar8;
  uStack_d8 = uVar4;
  uStack_d0 = uVar5;
  uStack_c8 = uVar6;
  lStack_c0 = lVar7;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  puStack_a8 = puVar20;
  if ((bRam0000000003eb5a8a & 1) == 0) {
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    bRam0000000003eb5a8a = 1;
  }
  if (lVar13 != 0) {
    uVar18 = (ulong)*(uint *)(lVar13 + 0x18);
    if ((int)*(uint *)(lVar13 + 0x18) < 1) {
      return 0;
    }
    uVar4 = uVar18 - 1;
    uVar5 = 1;
    uVar16 = uVar18;
    uVar10 = 0;
    while( true ) {
      if (uVar16 <= uVar10) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (uVar8 == 0) break;
      uVar14 = 5;
      iVar3 = /*System.String$$IndexOf*/ func_0x029cd7cc(uVar8,*(undefined8 *)(*(long *)(lVar13 + 0x10) + uVar10 * 8 + 0x20),5,
                              0);
      if (-1 < iVar3) {
        return uVar5;
      }
      uVar5 = (ulong)(uVar10 + 1 < uVar18);
      if (uVar4 == uVar10) {
        return uVar5;
      }
      uVar16 = (ulong)*(uint *)(lVar13 + 0x18);
      uVar10 = uVar10 + 1;
    }
  }
  func_0x00f78af4();
  puStack_e8 = &Core_Settings_DeviceQualitySettings__IsAnyRegexIn;
  lVar7 = 0x3eb5000;
  uStack_140 = unaff_x28;
  uStack_138 = unaff_x27;
  uStack_130 = uVar19;
  uStack_128 = param_1;
  uStack_120 = uVar10;
  uStack_118 = uVar4;
  uStack_110 = uVar5;
  uStack_108 = uVar18;
  lStack_100 = lVar13;
  uStack_f8 = uVar8;
  ppuStack_f0 = &puStack_b0;
  if ((bRam0000000003eb5a8b & 1) == 0) {
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d24218);
    bRam0000000003eb5a8b = 1;
  }
  if (extraout_x1_00 != 0) {
    uVar4 = (ulong)*(uint *)(extraout_x1_00 + 0x18);
    if ((int)*(uint *)(extraout_x1_00 + 0x18) < 1) {
      return 0;
    }
    uVar10 = 0x3d24218;
    uVar19 = uVar4 - 1;
    param_1 = 1;
    uVar8 = uVar4;
    unaff_x27 = 0;
    while( true ) {
      if (uVar8 <= unaff_x27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar5 = *(ulong *)(*(long *)(extraout_x1_00 + 0x10) + unaff_x27 * 8 + 0x20);
      lVar7 = func_0x00f78aec(/*System.Text.RegularExpressions.Regex_TypeInfo*/ uRam0000000003d24218);
      /*System.Text.RegularExpressions.Regex$$.ctor*/ func_0x02f0301c(lVar7,uVar5,1,0);
      if ((lVar7 == 0) || (lVar13 = /*System.Text.RegularExpressions.Regex$$Match*/ func_0x02f0484c(lVar7,uVar14,0), lVar13 == 0)) break;
      uVar8 = /*System.Text.RegularExpressions.Group$$get_Success*/ func_0x02ed20bc(lVar13,0);
      if ((uVar8 & 1) != 0) {
        return param_1;
      }
      param_1 = (ulong)(unaff_x27 + 1 < uVar4);
      if (uVar19 == unaff_x27) {
        return param_1;
      }
      uVar8 = (ulong)*(uint *)(extraout_x1_00 + 0x18);
      unaff_x27 = unaff_x27 + 1;
    }
  }
  auVar21 = func_0x00f78af4();
  puStack_148 = &Core_Settings_DeviceQualitySettings__LoadFromConfigFileString;
  uStack_1a0 = unaff_x28;
  uStack_198 = unaff_x27;
  uStack_190 = uVar19;
  uStack_188 = param_1;
  uStack_180 = uVar10;
  uStack_178 = uVar4;
  uStack_170 = uVar5;
  lStack_168 = lVar7;
  lStack_160 = extraout_x1_00;
  uStack_158 = uVar14;
  pppuStack_150 = &ppuStack_f0;
  if ((bRam0000000003eb5a87 & 1) == 0) {
    func_0x00f78a20(0x3d27270);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3d0b0);
    func_0x00f78a20(0x3d3bf88);
    func_0x00f78a20(0x3d1de30);
    func_0x00f78a20(0x3d24e28);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d66598);
    func_0x00f78a20(0x3d6fd10);
    func_0x00f78a20(0x3d6bca0);
    func_0x00f78a20(0x3d717b8);
    func_0x00f78a20(0x3d71610);
    func_0x00f78a20(0x3d6cca8);
    func_0x00f78a20(0x3d6fa08);
    func_0x00f78a20(0x3d6bc38);
    func_0x00f78a20(0x3d6d4f0);
    bRam0000000003eb5a87 = 1;
  }
  lStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1b8 = 0;
  uVar10 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(auVar21._8_8_,0);
  if ((uVar10 & 1) == 0) {
    plVar9 = (long *)func_0x00f78aec(/*System.IO.StringReader_TypeInfo*/ uRam0000000003d24e28);
    /*System.IO.StringReader$$.ctor*/ func_0x029d57f8(plVar9,auVar21._8_8_,0);
    if (plVar9 == (long *)0x0) {
      func_0x00f78af4();
code_r0x0168c73c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x168c740);
      (*pcVar1)();
    }
    lVar7 = 0;
    while (lVar13 = lVar7,
          lVar7 = (**(code **)(*plVar9 + 0x208))(plVar9,*(undefined8 *)(*plVar9 + 0x210)),
          lVar7 != 0) {
      lVar11 = /*System.String$$Trim*/ func_0x029bab94(lVar7,0);
      lVar7 = lVar13;
      if ((lVar11 != 0) &&
         (uVar10 = /*System.String$$StartsWith*/ func_0x029ce8f8(lVar11,/*STR('#')*/ uRam0000000003d66598,0), (uVar10 & 1) == 0)) {
        uVar10 = /*Core.Settings.DeviceQualitySettings$$TryGetSection*/ func_0x0168c7e4(uVar10,lVar11,&uStack_1a8);
        if ((uVar10 & 1) == 0) {
          lVar7 = 0;
          if ((lVar13 != 0) &&
             (uVar10 = /*Core.Settings.DeviceQualitySettings$$TryGetParameterKeyAndValue*/ func_0x0168c8d4(uVar10,lVar11,&lStack_1b0,&uStack_1b8), lVar11 = lStack_1b0,
             lVar7 = lVar13, (uVar10 & 1) != 0)) {
            if (lStack_1b0 == 0) {
              func_0x00f78af4();
              goto code_r0x0168c73c;
            }
            uVar10 = /*System.String$$Equals*/ func_0x029caa48(lStack_1b0,/*STR('Family')*/ uRam0000000003d6cca8,5,0);
            if ((uVar10 & 1) == 0) {
              uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar11,/*STR('ProcessorType')*/ uRam0000000003d71610,5,0);
              if ((uVar10 & 1) == 0) {
                uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar11,/*STR('GraphicsDevice')*/ uRam0000000003d6d4f0,5,0);
                if ((uVar10 & 1) == 0) {
                  uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar11,/*STR('MinMemoryMB')*/ uRam0000000003d6fd10,5,0);
                  if ((uVar10 & 1) == 0) {
                    uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar11,/*STR('MaxMemoryMB')*/ uRam0000000003d6fa08,5,0);
                    if ((uVar10 & 1) == 0) {
                      uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar11,/*STR('QualitySetting')*/ uRam0000000003d717b8,5,0);
                      if ((uVar10 & 1) == 0) {
                        uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar11,/*STR('DeviceModel')*/ uRam0000000003d6bca0,5,0);
                        if ((uVar10 & 1) != 0) {
                          if (*(long *)(lVar13 + 0x28) == 0) {
                            func_0x00f78af4();
                            goto code_r0x0168c73c;
                          }
                          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar13 + 0x28),uStack_1b8,uRam0000000003d3bfa0);
                        }
                      }
                      else {
                        /*System.Int32$$TryParse*/ func_0x02ae9d70(uStack_1b8,lVar13 + 0x38,0);
                      }
                    }
                    else {
                      /*System.Int32$$TryParse*/ func_0x02ae9d70(uStack_1b8,lVar13 + 0x34,0);
                    }
                  }
                  else {
                    /*System.Int32$$TryParse*/ func_0x02ae9d70(uStack_1b8,lVar13 + 0x30,0);
                  }
                }
                else {
                  if (*(long *)(lVar13 + 0x20) == 0) {
                    func_0x00f78af4();
                    goto code_r0x0168c73c;
                  }
                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar13 + 0x20),uStack_1b8,uRam0000000003d3bfa0);
                }
              }
              else {
                if (*(long *)(lVar13 + 0x18) == 0) {
                  func_0x00f78af4();
                  goto code_r0x0168c73c;
                }
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar13 + 0x18),uStack_1b8,uRam0000000003d3bfa0);
              }
            }
            else {
              if (*(long *)(lVar13 + 0x10) == 0) {
                func_0x00f78af4();
                goto code_r0x0168c73c;
              }
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar13 + 0x10),uStack_1b8,uRam0000000003d3bfa0);
            }
          }
        }
        else {
          uVar10 = /*System.String$$op_Equality*/ func_0x029bdf2c(uStack_1a8,/*STR('Device')*/ uRam0000000003d6bc38,0);
          if ((uVar10 & 1) != 0) {
            lVar7 = func_0x00f78aec(/*Core.Settings.DeviceQualitySettings.DeviceSpec_TypeInfo*/ uRam0000000003d27270);
            /*System.Object$$.ctor*/ func_0x0294d018(lVar7,0);
            uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar6,uRam0000000003d3bf88);
            if (lVar7 == 0) {
              func_0x00f78af4();
              goto code_r0x0168c73c;
            }
            *(undefined8 *)(lVar7 + 0x10) = uVar6;
            uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar6,uRam0000000003d3bf88);
            *(undefined8 *)(lVar7 + 0x18) = uVar6;
            uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar6,uRam0000000003d3bf88);
            *(undefined8 *)(lVar7 + 0x20) = uVar6;
            uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar6,uRam0000000003d3bf88);
            *(undefined8 *)(lVar7 + 0x28) = uVar6;
            lVar13 = *(long *)(auVar21._0_8_ + 0x10);
            if (lVar13 == 0) {
              func_0x00f78af4();
              goto code_r0x0168c73c;
            }
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar13,lVar7,uRam0000000003d3d0b0);
          }
        }
      }
    }
    lVar7 = *plVar9;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar10 != 0) {
      piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar12 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x0168c6c4;
        }
        piVar17 = piVar17 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar12 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0168c6c4:
    uVar10 = (*(code *)*puVar12)(plVar9,puVar12[1]);
  }
  return uVar10;
}



// ============================================================
// RVA: 0x168bd90 | Core.Settings.DeviceQualitySettings.TryGetParametersForDevice
// ============================================================

/* WARNING: Possible PIC construction at 0x0168be84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0168becc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168be88) */
/* WARNING: Removing unreachable block (ram,0x0168bed0) */
/* WARNING: Removing unreachable block (ram,0x0168c714) */

ulong Core_Settings_DeviceQualitySettings__TryGetParametersForDevice
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                long param_6,undefined4 *param_7)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int extraout_w1;
  long lVar9;
  long extraout_x1;
  long extraout_x1_00;
  ulong uVar10;
  undefined4 uVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong unaff_x27;
  undefined8 unaff_x28;
  undefined *puVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  undefined1 ***pppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  long lStack_100;
  ulong uStack_f8;
  undefined1 **ppuStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined4 *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  uVar16 = 0x3eb5000;
  uVar4 = param_3;
  if ((bRam0000000003eb5a86 & 1) == 0) {
    func_0x00f78a20(0x3d33420);
    func_0x00f78a20(0x3d33428);
    func_0x00f78a20(0x3d33430);
    func_0x00f78a20(0x3d3d0b8);
    func_0x00f78a20(0x3d3c000);
    bRam0000000003eb5a86 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    unaff_x28 = 0x3d33428;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,*(long *)(param_1 + 0x10),uRam0000000003d3d0b8);
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_70 = uStack_88;
    unaff_x27 = 0;
    while (uVar16 = unaff_x27, uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d33428),
          unaff_x27 = uStack_70, (uVar4 & 1) != 0) {
      if (uStack_70 == 0) {
        func_0x00f78af4();
code_r0x0168bfa4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x168bfa8);
        (*pcVar1)();
      }
      lVar9 = *(long *)(uStack_70 + 0x10);
      if (lVar9 == 0) {
        func_0x00f78af4();
        goto code_r0x0168bfa4;
      }
      if (0 < *(int *)(lVar9 + 0x18)) {
        puVar17 = (undefined *)0x168be88;
        uVar4 = param_2;
        goto code_r0x0168c00c;
      }
      param_1 = 1;
      lVar9 = *(long *)(uStack_70 + 0x18);
      if (lVar9 == 0) {
        func_0x00f78af4();
        goto code_r0x0168bfa4;
      }
      if (0 < *(int *)(lVar9 + 0x18)) {
        uVar4 = /*Core.Settings.DeviceQualitySettings$$IsAnyStringIn*/ func_0x0168c00c(uVar4,lVar9,param_3);
        param_1 = (ulong)((uint)uVar4 & 1);
      }
      lVar9 = *(long *)(unaff_x27 + 0x20);
      if (lVar9 == 0) {
        func_0x00f78af4();
        goto code_r0x0168bfa4;
      }
      if (0 < *(int *)(lVar9 + 0x18)) {
        puVar17 = &UNK_0168bed0;
        uVar4 = param_4;
        goto code_r0x0168c00c;
      }
      lVar9 = *(long *)(unaff_x27 + 0x28);
      if (lVar9 == 0) {
        func_0x00f78af4();
        goto code_r0x0168bfa4;
      }
      if (0 < *(int *)(lVar9 + 0x18)) {
        uVar2 = /*Core.Settings.DeviceQualitySettings$$IsAnyRegexIn*/ func_0x0168c0e8(uVar4,lVar9,param_5);
        param_1 = (ulong)((uint)param_1 & uVar2);
      }
      uVar2 = (uint)param_1;
      if (0 < *(int *)(unaff_x27 + 0x30)) {
        uVar2 = (uint)param_1 & (uint)(*(int *)(unaff_x27 + 0x30) <= (int)param_6);
      }
      if (0 < *(int *)(unaff_x27 + 0x34)) {
        uVar2 = uVar2 & (int)param_6 <= *(int *)(unaff_x27 + 0x34);
      }
      if (uVar2 == 0) {
        unaff_x27 = uVar16;
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d33420);
code_r0x0168bf44:
    if (uVar16 == 0) {
      uVar11 = 2;
    }
    else {
      uVar11 = *(undefined4 *)(uVar16 + 0x38);
    }
    *param_7 = uVar11;
    return (ulong)(uVar16 != 0);
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    param_6 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d33420);
    if (param_6 == 0) goto code_r0x0168bf44;
    func_0x00f78ac0(param_6,0);
  }
  puVar17 = &Core_Settings_DeviceQualitySettings__IsAnyStringIn;
  __Unwind_Resume();
  lVar9 = extraout_x1;
code_r0x0168c00c:
  uVar14 = 0x3eb5000;
  uVar10 = uVar4;
  uStack_e0 = param_2;
  uStack_d8 = param_3;
  uStack_d0 = param_4;
  uStack_c8 = param_5;
  lStack_c0 = param_6;
  puStack_b8 = param_7;
  puStack_b0 = &stack0xfffffffffffffff0;
  puStack_a8 = puVar17;
  if ((bRam0000000003eb5a8a & 1) == 0) {
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    bRam0000000003eb5a8a = 1;
  }
  if (lVar9 != 0) {
    uVar14 = (ulong)*(uint *)(lVar9 + 0x18);
    if ((int)*(uint *)(lVar9 + 0x18) < 1) {
      return 0;
    }
    param_3 = uVar14 - 1;
    param_4 = 1;
    uVar12 = uVar14;
    param_2 = 0;
    while( true ) {
      if (uVar12 <= param_2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (uVar4 == 0) break;
      uVar10 = 5;
      iVar3 = /*System.String$$IndexOf*/ func_0x029cd7cc(uVar4,*(undefined8 *)(*(long *)(lVar9 + 0x10) + param_2 * 8 + 0x20),5,
                              0);
      if (-1 < iVar3) {
        return param_4;
      }
      param_4 = (ulong)(param_2 + 1 < uVar14);
      if (param_3 == param_2) {
        return param_4;
      }
      uVar12 = (ulong)*(uint *)(lVar9 + 0x18);
      param_2 = param_2 + 1;
    }
  }
  func_0x00f78af4();
  puStack_e8 = &Core_Settings_DeviceQualitySettings__IsAnyRegexIn;
  lVar15 = 0x3eb5000;
  uStack_140 = unaff_x28;
  uStack_138 = unaff_x27;
  uStack_130 = uVar16;
  uStack_128 = param_1;
  uStack_120 = param_2;
  uStack_118 = param_3;
  uStack_110 = param_4;
  uStack_108 = uVar14;
  lStack_100 = lVar9;
  uStack_f8 = uVar4;
  ppuStack_f0 = &puStack_b0;
  if ((bRam0000000003eb5a8b & 1) == 0) {
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d24218);
    bRam0000000003eb5a8b = 1;
  }
  if (extraout_x1_00 != 0) {
    param_3 = (ulong)*(uint *)(extraout_x1_00 + 0x18);
    if ((int)*(uint *)(extraout_x1_00 + 0x18) < 1) {
      return 0;
    }
    param_2 = 0x3d24218;
    uVar16 = param_3 - 1;
    param_1 = 1;
    uVar4 = param_3;
    unaff_x27 = 0;
    while( true ) {
      if (uVar4 <= unaff_x27) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      param_4 = *(ulong *)(*(long *)(extraout_x1_00 + 0x10) + unaff_x27 * 8 + 0x20);
      lVar15 = func_0x00f78aec(/*System.Text.RegularExpressions.Regex_TypeInfo*/ uRam0000000003d24218);
      /*System.Text.RegularExpressions.Regex$$.ctor*/ func_0x02f0301c(lVar15,param_4,1,0);
      if ((lVar15 == 0) || (lVar9 = /*System.Text.RegularExpressions.Regex$$Match*/ func_0x02f0484c(lVar15,uVar10,0), lVar9 == 0)) break;
      uVar4 = /*System.Text.RegularExpressions.Group$$get_Success*/ func_0x02ed20bc(lVar9,0);
      if ((uVar4 & 1) != 0) {
        return param_1;
      }
      param_1 = (ulong)(unaff_x27 + 1 < param_3);
      if (uVar16 == unaff_x27) {
        return param_1;
      }
      uVar4 = (ulong)*(uint *)(extraout_x1_00 + 0x18);
      unaff_x27 = unaff_x27 + 1;
    }
  }
  auVar18 = func_0x00f78af4();
  puStack_148 = &Core_Settings_DeviceQualitySettings__LoadFromConfigFileString;
  uStack_1a0 = unaff_x28;
  uStack_198 = unaff_x27;
  uStack_190 = uVar16;
  uStack_188 = param_1;
  uStack_180 = param_2;
  uStack_178 = param_3;
  uStack_170 = param_4;
  lStack_168 = lVar15;
  lStack_160 = extraout_x1_00;
  uStack_158 = uVar10;
  pppuStack_150 = &ppuStack_f0;
  if ((bRam0000000003eb5a87 & 1) == 0) {
    func_0x00f78a20(0x3d27270);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3d0b0);
    func_0x00f78a20(0x3d3bf88);
    func_0x00f78a20(0x3d1de30);
    func_0x00f78a20(0x3d24e28);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d66598);
    func_0x00f78a20(0x3d6fd10);
    func_0x00f78a20(0x3d6bca0);
    func_0x00f78a20(0x3d717b8);
    func_0x00f78a20(0x3d71610);
    func_0x00f78a20(0x3d6cca8);
    func_0x00f78a20(0x3d6fa08);
    func_0x00f78a20(0x3d6bc38);
    func_0x00f78a20(0x3d6d4f0);
    bRam0000000003eb5a87 = 1;
  }
  lStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1b8 = 0;
  uVar4 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(auVar18._8_8_,0);
  if ((uVar4 & 1) == 0) {
    plVar5 = (long *)func_0x00f78aec(/*System.IO.StringReader_TypeInfo*/ uRam0000000003d24e28);
    /*System.IO.StringReader$$.ctor*/ func_0x029d57f8(plVar5,auVar18._8_8_,0);
    if (plVar5 == (long *)0x0) {
      func_0x00f78af4();
code_r0x0168c73c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x168c740);
      (*pcVar1)();
    }
    lVar9 = 0;
    while (lVar15 = lVar9,
          lVar9 = (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210)),
          lVar9 != 0) {
      lVar6 = /*System.String$$Trim*/ func_0x029bab94(lVar9,0);
      lVar9 = lVar15;
      if ((lVar6 != 0) && (uVar4 = /*System.String$$StartsWith*/ func_0x029ce8f8(lVar6,/*STR('#')*/ uRam0000000003d66598,0), (uVar4 & 1) == 0))
      {
        uVar4 = /*Core.Settings.DeviceQualitySettings$$TryGetSection*/ func_0x0168c7e4(uVar4,lVar6,&uStack_1a8);
        if ((uVar4 & 1) == 0) {
          lVar9 = 0;
          if ((lVar15 != 0) &&
             (uVar4 = /*Core.Settings.DeviceQualitySettings$$TryGetParameterKeyAndValue*/ func_0x0168c8d4(uVar4,lVar6,&lStack_1b0,&uStack_1b8), lVar6 = lStack_1b0,
             lVar9 = lVar15, (uVar4 & 1) != 0)) {
            if (lStack_1b0 == 0) {
              func_0x00f78af4();
              goto code_r0x0168c73c;
            }
            uVar4 = /*System.String$$Equals*/ func_0x029caa48(lStack_1b0,/*STR('Family')*/ uRam0000000003d6cca8,5,0);
            if ((uVar4 & 1) == 0) {
              uVar4 = /*System.String$$Equals*/ func_0x029caa48(lVar6,/*STR('ProcessorType')*/ uRam0000000003d71610,5,0);
              if ((uVar4 & 1) == 0) {
                uVar4 = /*System.String$$Equals*/ func_0x029caa48(lVar6,/*STR('GraphicsDevice')*/ uRam0000000003d6d4f0,5,0);
                if ((uVar4 & 1) == 0) {
                  uVar4 = /*System.String$$Equals*/ func_0x029caa48(lVar6,/*STR('MinMemoryMB')*/ uRam0000000003d6fd10,5,0);
                  if ((uVar4 & 1) == 0) {
                    uVar4 = /*System.String$$Equals*/ func_0x029caa48(lVar6,/*STR('MaxMemoryMB')*/ uRam0000000003d6fa08,5,0);
                    if ((uVar4 & 1) == 0) {
                      uVar4 = /*System.String$$Equals*/ func_0x029caa48(lVar6,/*STR('QualitySetting')*/ uRam0000000003d717b8,5,0);
                      if ((uVar4 & 1) == 0) {
                        uVar4 = /*System.String$$Equals*/ func_0x029caa48(lVar6,/*STR('DeviceModel')*/ uRam0000000003d6bca0,5,0);
                        if ((uVar4 & 1) != 0) {
                          if (*(long *)(lVar15 + 0x28) == 0) {
                            func_0x00f78af4();
                            goto code_r0x0168c73c;
                          }
                          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar15 + 0x28),uStack_1b8,uRam0000000003d3bfa0);
                        }
                      }
                      else {
                        /*System.Int32$$TryParse*/ func_0x02ae9d70(uStack_1b8,lVar15 + 0x38,0);
                      }
                    }
                    else {
                      /*System.Int32$$TryParse*/ func_0x02ae9d70(uStack_1b8,lVar15 + 0x34,0);
                    }
                  }
                  else {
                    /*System.Int32$$TryParse*/ func_0x02ae9d70(uStack_1b8,lVar15 + 0x30,0);
                  }
                }
                else {
                  if (*(long *)(lVar15 + 0x20) == 0) {
                    func_0x00f78af4();
                    goto code_r0x0168c73c;
                  }
                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar15 + 0x20),uStack_1b8,uRam0000000003d3bfa0);
                }
              }
              else {
                if (*(long *)(lVar15 + 0x18) == 0) {
                  func_0x00f78af4();
                  goto code_r0x0168c73c;
                }
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar15 + 0x18),uStack_1b8,uRam0000000003d3bfa0);
              }
            }
            else {
              if (*(long *)(lVar15 + 0x10) == 0) {
                func_0x00f78af4();
                goto code_r0x0168c73c;
              }
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar15 + 0x10),uStack_1b8,uRam0000000003d3bfa0);
            }
          }
        }
        else {
          uVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(uStack_1a8,/*STR('Device')*/ uRam0000000003d6bc38,0);
          if ((uVar4 & 1) != 0) {
            lVar9 = func_0x00f78aec(/*Core.Settings.DeviceQualitySettings.DeviceSpec_TypeInfo*/ uRam0000000003d27270);
            /*System.Object$$.ctor*/ func_0x0294d018(lVar9,0);
            uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar7,uRam0000000003d3bf88);
            if (lVar9 == 0) {
              func_0x00f78af4();
              goto code_r0x0168c73c;
            }
            *(undefined8 *)(lVar9 + 0x10) = uVar7;
            uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar7,uRam0000000003d3bf88);
            *(undefined8 *)(lVar9 + 0x18) = uVar7;
            uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar7,uRam0000000003d3bf88);
            *(undefined8 *)(lVar9 + 0x20) = uVar7;
            uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar7,uRam0000000003d3bf88);
            *(undefined8 *)(lVar9 + 0x28) = uVar7;
            lVar15 = *(long *)(auVar18._0_8_ + 0x10);
            if (lVar15 == 0) {
              func_0x00f78af4();
              goto code_r0x0168c73c;
            }
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar15,lVar9,uRam0000000003d3d0b0);
          }
        }
      }
    }
    lVar9 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar4 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x0168c6c4;
        }
        piVar13 = piVar13 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar8 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0168c6c4:
    uVar4 = (*(code *)*puVar8)(plVar5,puVar8[1]);
  }
  return uVar4;
}



// ============================================================
// RVA: 0x168c00c | Core.Settings.DeviceQualitySettings.IsAnyStringIn
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0168c714) */

ulong Core_Settings_DeviceQualitySettings__IsAnyStringIn
                (undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long extraout_x1;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  
  lVar7 = param_3;
  if ((bRam0000000003eb5a8a & 1) == 0) {
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    bRam0000000003eb5a8a = 1;
  }
  if (param_2 != 0) {
    uVar10 = (ulong)*(uint *)(param_2 + 0x18);
    if ((int)*(uint *)(param_2 + 0x18) < 1) {
      return 0;
    }
    uVar11 = 1;
    uVar8 = uVar10;
    uVar13 = 0;
    while( true ) {
      if (uVar8 <= uVar13) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (param_3 == 0) break;
      lVar7 = 5;
      iVar2 = /*System.String$$IndexOf*/ func_0x029cd7cc(param_3,*(undefined8 *)(*(long *)(param_2 + 0x10) + uVar13 * 8 + 0x20)
                              ,5,0);
      if (-1 < iVar2) {
        return uVar11;
      }
      uVar11 = (ulong)(uVar13 + 1 < uVar10);
      if (uVar10 - 1 == uVar13) {
        return uVar11;
      }
      uVar8 = (ulong)*(uint *)(param_2 + 0x18);
      uVar13 = uVar13 + 1;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb5a8b & 1) == 0) {
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d24218);
    bRam0000000003eb5a8b = 1;
  }
  if (extraout_x1 != 0) {
    uVar10 = (ulong)*(uint *)(extraout_x1 + 0x18);
    if ((int)*(uint *)(extraout_x1 + 0x18) < 1) {
      return 0;
    }
    uVar11 = 1;
    uVar8 = uVar10;
    uVar13 = 0;
    while( true ) {
      if (uVar8 <= uVar13) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar12 = *(undefined8 *)(*(long *)(extraout_x1 + 0x10) + uVar13 * 8 + 0x20);
      lVar3 = func_0x00f78aec(/*System.Text.RegularExpressions.Regex_TypeInfo*/ uRam0000000003d24218);
      /*System.Text.RegularExpressions.Regex$$.ctor*/ func_0x02f0301c(lVar3,uVar12,1,0);
      if ((lVar3 == 0) || (lVar3 = /*System.Text.RegularExpressions.Regex$$Match*/ func_0x02f0484c(lVar3,lVar7,0), lVar3 == 0)) break;
      uVar8 = /*System.Text.RegularExpressions.Group$$get_Success*/ func_0x02ed20bc(lVar3,0);
      if ((uVar8 & 1) != 0) {
        return uVar11;
      }
      uVar11 = (ulong)(uVar13 + 1 < uVar10);
      if (uVar10 - 1 == uVar13) {
        return uVar11;
      }
      uVar8 = (ulong)*(uint *)(extraout_x1 + 0x18);
      uVar13 = uVar13 + 1;
    }
  }
  auVar14 = func_0x00f78af4();
  if ((bRam0000000003eb5a87 & 1) == 0) {
    func_0x00f78a20(0x3d27270);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3d0b0);
    func_0x00f78a20(0x3d3bf88);
    func_0x00f78a20(0x3d1de30);
    func_0x00f78a20(0x3d24e28);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d66598);
    func_0x00f78a20(0x3d6fd10);
    func_0x00f78a20(0x3d6bca0);
    func_0x00f78a20(0x3d717b8);
    func_0x00f78a20(0x3d71610);
    func_0x00f78a20(0x3d6cca8);
    func_0x00f78a20(0x3d6fa08);
    func_0x00f78a20(0x3d6bc38);
    func_0x00f78a20(0x3d6d4f0);
    bRam0000000003eb5a87 = 1;
  }
  lStack_110 = 0;
  uStack_108 = 0;
  uStack_118 = 0;
  uVar10 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(auVar14._8_8_,0);
  if ((uVar10 & 1) == 0) {
    plVar4 = (long *)func_0x00f78aec(/*System.IO.StringReader_TypeInfo*/ uRam0000000003d24e28);
    /*System.IO.StringReader$$.ctor*/ func_0x029d57f8(plVar4,auVar14._8_8_,0);
    if (plVar4 == (long *)0x0) {
      func_0x00f78af4();
code_r0x0168c73c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x168c740);
      (*pcVar1)();
    }
    lVar7 = 0;
    while (lVar3 = lVar7,
          lVar7 = (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210)),
          lVar7 != 0) {
      lVar5 = /*System.String$$Trim*/ func_0x029bab94(lVar7,0);
      lVar7 = lVar3;
      if ((lVar5 != 0) &&
         (uVar10 = /*System.String$$StartsWith*/ func_0x029ce8f8(lVar5,/*STR('#')*/ uRam0000000003d66598,0), (uVar10 & 1) == 0)) {
        uVar10 = /*Core.Settings.DeviceQualitySettings$$TryGetSection*/ func_0x0168c7e4(uVar10,lVar5,&uStack_108);
        if ((uVar10 & 1) == 0) {
          lVar7 = 0;
          if ((lVar3 != 0) &&
             (uVar10 = /*Core.Settings.DeviceQualitySettings$$TryGetParameterKeyAndValue*/ func_0x0168c8d4(uVar10,lVar5,&lStack_110,&uStack_118), lVar5 = lStack_110,
             lVar7 = lVar3, (uVar10 & 1) != 0)) {
            if (lStack_110 == 0) {
              func_0x00f78af4();
              goto code_r0x0168c73c;
            }
            uVar10 = /*System.String$$Equals*/ func_0x029caa48(lStack_110,/*STR('Family')*/ uRam0000000003d6cca8,5,0);
            if ((uVar10 & 1) == 0) {
              uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar5,/*STR('ProcessorType')*/ uRam0000000003d71610,5,0);
              if ((uVar10 & 1) == 0) {
                uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar5,/*STR('GraphicsDevice')*/ uRam0000000003d6d4f0,5,0);
                if ((uVar10 & 1) == 0) {
                  uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar5,/*STR('MinMemoryMB')*/ uRam0000000003d6fd10,5,0);
                  if ((uVar10 & 1) == 0) {
                    uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar5,/*STR('MaxMemoryMB')*/ uRam0000000003d6fa08,5,0);
                    if ((uVar10 & 1) == 0) {
                      uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar5,/*STR('QualitySetting')*/ uRam0000000003d717b8,5,0);
                      if ((uVar10 & 1) == 0) {
                        uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar5,/*STR('DeviceModel')*/ uRam0000000003d6bca0,5,0);
                        if ((uVar10 & 1) != 0) {
                          if (*(long *)(lVar3 + 0x28) == 0) {
                            func_0x00f78af4();
                            goto code_r0x0168c73c;
                          }
                          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar3 + 0x28),uStack_118,uRam0000000003d3bfa0);
                        }
                      }
                      else {
                        /*System.Int32$$TryParse*/ func_0x02ae9d70(uStack_118,lVar3 + 0x38,0);
                      }
                    }
                    else {
                      /*System.Int32$$TryParse*/ func_0x02ae9d70(uStack_118,lVar3 + 0x34,0);
                    }
                  }
                  else {
                    /*System.Int32$$TryParse*/ func_0x02ae9d70(uStack_118,lVar3 + 0x30,0);
                  }
                }
                else {
                  if (*(long *)(lVar3 + 0x20) == 0) {
                    func_0x00f78af4();
                    goto code_r0x0168c73c;
                  }
                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar3 + 0x20),uStack_118,uRam0000000003d3bfa0);
                }
              }
              else {
                if (*(long *)(lVar3 + 0x18) == 0) {
                  func_0x00f78af4();
                  goto code_r0x0168c73c;
                }
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar3 + 0x18),uStack_118,uRam0000000003d3bfa0);
              }
            }
            else {
              if (*(long *)(lVar3 + 0x10) == 0) {
                func_0x00f78af4();
                goto code_r0x0168c73c;
              }
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar3 + 0x10),uStack_118,uRam0000000003d3bfa0);
            }
          }
        }
        else {
          uVar10 = /*System.String$$op_Equality*/ func_0x029bdf2c(uStack_108,/*STR('Device')*/ uRam0000000003d6bc38,0);
          if ((uVar10 & 1) != 0) {
            lVar7 = func_0x00f78aec(/*Core.Settings.DeviceQualitySettings.DeviceSpec_TypeInfo*/ uRam0000000003d27270);
            /*System.Object$$.ctor*/ func_0x0294d018(lVar7,0);
            uVar12 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar12,uRam0000000003d3bf88);
            if (lVar7 == 0) {
              func_0x00f78af4();
              goto code_r0x0168c73c;
            }
            *(undefined8 *)(lVar7 + 0x10) = uVar12;
            uVar12 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar12,uRam0000000003d3bf88);
            *(undefined8 *)(lVar7 + 0x18) = uVar12;
            uVar12 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar12,uRam0000000003d3bf88);
            *(undefined8 *)(lVar7 + 0x20) = uVar12;
            uVar12 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar12,uRam0000000003d3bf88);
            *(undefined8 *)(lVar7 + 0x28) = uVar12;
            lVar3 = *(long *)(auVar14._0_8_ + 0x10);
            if (lVar3 == 0) {
              func_0x00f78af4();
              goto code_r0x0168c73c;
            }
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar3,lVar7,uRam0000000003d3d0b0);
          }
        }
      }
    }
    lVar7 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar10 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto code_r0x0168c6c4;
        }
        piVar9 = piVar9 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0168c6c4:
    uVar10 = (*(code *)*puVar6)(plVar4,puVar6[1]);
  }
  return uVar10;
}



// ============================================================
// RVA: 0x168c0e8 | Core.Settings.DeviceQualitySettings.IsAnyRegexIn
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0168c714) */

ulong Core_Settings_DeviceQualitySettings__IsAnyRegexIn
                (undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  
  if ((bRam0000000003eb5a8b & 1) == 0) {
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d24218);
    bRam0000000003eb5a8b = 1;
  }
  if (param_2 != 0) {
    uVar10 = (ulong)*(uint *)(param_2 + 0x18);
    if ((int)*(uint *)(param_2 + 0x18) < 1) {
      return 0;
    }
    uVar11 = 1;
    uVar3 = uVar10;
    uVar12 = 0;
    while( true ) {
      if (uVar3 <= uVar12) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x10) + uVar12 * 8 + 0x20);
      lVar2 = func_0x00f78aec(/*System.Text.RegularExpressions.Regex_TypeInfo*/ uRam0000000003d24218);
      /*System.Text.RegularExpressions.Regex$$.ctor*/ func_0x02f0301c(lVar2,uVar9,1,0);
      if ((lVar2 == 0) || (lVar2 = /*System.Text.RegularExpressions.Regex$$Match*/ func_0x02f0484c(lVar2,param_3,0), lVar2 == 0)) break;
      uVar3 = /*System.Text.RegularExpressions.Group$$get_Success*/ func_0x02ed20bc(lVar2,0);
      if ((uVar3 & 1) != 0) {
        return uVar11;
      }
      uVar11 = (ulong)(uVar12 + 1 < uVar10);
      if (uVar10 - 1 == uVar12) {
        return uVar11;
      }
      uVar3 = (ulong)*(uint *)(param_2 + 0x18);
      uVar12 = uVar12 + 1;
    }
  }
  auVar13 = func_0x00f78af4();
  if ((bRam0000000003eb5a87 & 1) == 0) {
    func_0x00f78a20(0x3d27270);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3d0b0);
    func_0x00f78a20(0x3d3bf88);
    func_0x00f78a20(0x3d1de30);
    func_0x00f78a20(0x3d24e28);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d66598);
    func_0x00f78a20(0x3d6fd10);
    func_0x00f78a20(0x3d6bca0);
    func_0x00f78a20(0x3d717b8);
    func_0x00f78a20(0x3d71610);
    func_0x00f78a20(0x3d6cca8);
    func_0x00f78a20(0x3d6fa08);
    func_0x00f78a20(0x3d6bc38);
    func_0x00f78a20(0x3d6d4f0);
    bRam0000000003eb5a87 = 1;
  }
  lStack_d0 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  uVar10 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(auVar13._8_8_,0);
  if ((uVar10 & 1) == 0) {
    plVar4 = (long *)func_0x00f78aec(/*System.IO.StringReader_TypeInfo*/ uRam0000000003d24e28);
    /*System.IO.StringReader$$.ctor*/ func_0x029d57f8(plVar4,auVar13._8_8_,0);
    if (plVar4 == (long *)0x0) {
      func_0x00f78af4();
code_r0x0168c73c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x168c740);
      (*pcVar1)();
    }
    lVar2 = 0;
    while (lVar6 = lVar2,
          lVar2 = (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210)),
          lVar2 != 0) {
      lVar5 = /*System.String$$Trim*/ func_0x029bab94(lVar2,0);
      lVar2 = lVar6;
      if ((lVar5 != 0) &&
         (uVar10 = /*System.String$$StartsWith*/ func_0x029ce8f8(lVar5,/*STR('#')*/ uRam0000000003d66598,0), (uVar10 & 1) == 0)) {
        uVar10 = /*Core.Settings.DeviceQualitySettings$$TryGetSection*/ func_0x0168c7e4(uVar10,lVar5,&uStack_c8);
        if ((uVar10 & 1) == 0) {
          lVar2 = 0;
          if ((lVar6 != 0) &&
             (uVar10 = /*Core.Settings.DeviceQualitySettings$$TryGetParameterKeyAndValue*/ func_0x0168c8d4(uVar10,lVar5,&lStack_d0,&uStack_d8), lVar5 = lStack_d0,
             lVar2 = lVar6, (uVar10 & 1) != 0)) {
            if (lStack_d0 == 0) {
              func_0x00f78af4();
              goto code_r0x0168c73c;
            }
            uVar10 = /*System.String$$Equals*/ func_0x029caa48(lStack_d0,/*STR('Family')*/ uRam0000000003d6cca8,5,0);
            if ((uVar10 & 1) == 0) {
              uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar5,/*STR('ProcessorType')*/ uRam0000000003d71610,5,0);
              if ((uVar10 & 1) == 0) {
                uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar5,/*STR('GraphicsDevice')*/ uRam0000000003d6d4f0,5,0);
                if ((uVar10 & 1) == 0) {
                  uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar5,/*STR('MinMemoryMB')*/ uRam0000000003d6fd10,5,0);
                  if ((uVar10 & 1) == 0) {
                    uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar5,/*STR('MaxMemoryMB')*/ uRam0000000003d6fa08,5,0);
                    if ((uVar10 & 1) == 0) {
                      uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar5,/*STR('QualitySetting')*/ uRam0000000003d717b8,5,0);
                      if ((uVar10 & 1) == 0) {
                        uVar10 = /*System.String$$Equals*/ func_0x029caa48(lVar5,/*STR('DeviceModel')*/ uRam0000000003d6bca0,5,0);
                        if ((uVar10 & 1) != 0) {
                          if (*(long *)(lVar6 + 0x28) == 0) {
                            func_0x00f78af4();
                            goto code_r0x0168c73c;
                          }
                          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar6 + 0x28),uStack_d8,uRam0000000003d3bfa0);
                        }
                      }
                      else {
                        /*System.Int32$$TryParse*/ func_0x02ae9d70(uStack_d8,lVar6 + 0x38,0);
                      }
                    }
                    else {
                      /*System.Int32$$TryParse*/ func_0x02ae9d70(uStack_d8,lVar6 + 0x34,0);
                    }
                  }
                  else {
                    /*System.Int32$$TryParse*/ func_0x02ae9d70(uStack_d8,lVar6 + 0x30,0);
                  }
                }
                else {
                  if (*(long *)(lVar6 + 0x20) == 0) {
                    func_0x00f78af4();
                    goto code_r0x0168c73c;
                  }
                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar6 + 0x20),uStack_d8,uRam0000000003d3bfa0);
                }
              }
              else {
                if (*(long *)(lVar6 + 0x18) == 0) {
                  func_0x00f78af4();
                  goto code_r0x0168c73c;
                }
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar6 + 0x18),uStack_d8,uRam0000000003d3bfa0);
              }
            }
            else {
              if (*(long *)(lVar6 + 0x10) == 0) {
                func_0x00f78af4();
                goto code_r0x0168c73c;
              }
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar6 + 0x10),uStack_d8,uRam0000000003d3bfa0);
            }
          }
        }
        else {
          uVar10 = /*System.String$$op_Equality*/ func_0x029bdf2c(uStack_c8,/*STR('Device')*/ uRam0000000003d6bc38,0);
          if ((uVar10 & 1) != 0) {
            lVar2 = func_0x00f78aec(/*Core.Settings.DeviceQualitySettings.DeviceSpec_TypeInfo*/ uRam0000000003d27270);
            /*System.Object$$.ctor*/ func_0x0294d018(lVar2,0);
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf88);
            if (lVar2 == 0) {
              func_0x00f78af4();
              goto code_r0x0168c73c;
            }
            *(undefined8 *)(lVar2 + 0x10) = uVar9;
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf88);
            *(undefined8 *)(lVar2 + 0x18) = uVar9;
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf88);
            *(undefined8 *)(lVar2 + 0x20) = uVar9;
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf88);
            *(undefined8 *)(lVar2 + 0x28) = uVar9;
            lVar6 = *(long *)(auVar13._0_8_ + 0x10);
            if (lVar6 == 0) {
              func_0x00f78af4();
              goto code_r0x0168c73c;
            }
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar6,lVar2,uRam0000000003d3d0b0);
          }
        }
      }
    }
    lVar2 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar10 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar7 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
          goto code_r0x0168c6c4;
        }
        piVar8 = piVar8 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0168c6c4:
    uVar10 = (*(code *)*puVar7)(plVar4,puVar7[1]);
  }
  return uVar10;
}



// ============================================================
// RVA: 0x168c210 | Core.Settings.DeviceQualitySettings.LoadFromConfigFileString
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0168c714) */

void Core_Settings_DeviceQualitySettings__LoadFromConfigFileString(long param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb5a87 & 1) == 0) {
    func_0x00f78a20(0x3d27270);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3d0b0);
    func_0x00f78a20(0x3d3bf88);
    func_0x00f78a20(0x3d1de30);
    func_0x00f78a20(0x3d24e28);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d66598);
    func_0x00f78a20(0x3d6fd10);
    func_0x00f78a20(0x3d6bca0);
    func_0x00f78a20(0x3d717b8);
    func_0x00f78a20(0x3d71610);
    func_0x00f78a20(0x3d6cca8);
    func_0x00f78a20(0x3d6fa08);
    func_0x00f78a20(0x3d6bc38);
    func_0x00f78a20(0x3d6d4f0);
    bRam0000000003eb5a87 = 1;
  }
  lStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  uVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_2,0);
  if ((uVar2 & 1) == 0) {
    plVar3 = (long *)func_0x00f78aec(/*System.IO.StringReader_TypeInfo*/ uRam0000000003d24e28);
    /*System.IO.StringReader$$.ctor*/ func_0x029d57f8(plVar3,param_2,0);
    if (plVar3 == (long *)0x0) {
      func_0x00f78af4();
code_r0x0168c73c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x168c740);
      (*pcVar1)();
    }
    lVar4 = 0;
    while (lVar9 = lVar4,
          lVar4 = (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210)),
          lVar4 != 0) {
      lVar5 = /*System.String$$Trim*/ func_0x029bab94(lVar4,0);
      lVar4 = lVar9;
      if ((lVar5 != 0) && (uVar2 = /*System.String$$StartsWith*/ func_0x029ce8f8(lVar5,/*STR('#')*/ uRam0000000003d66598,0), (uVar2 & 1) == 0))
      {
        uVar2 = /*Core.Settings.DeviceQualitySettings$$TryGetSection*/ func_0x0168c7e4(uVar2,lVar5,&uStack_68);
        if ((uVar2 & 1) == 0) {
          lVar4 = 0;
          if ((lVar9 != 0) &&
             (uVar2 = /*Core.Settings.DeviceQualitySettings$$TryGetParameterKeyAndValue*/ func_0x0168c8d4(uVar2,lVar5,&lStack_70,&uStack_78), lVar5 = lStack_70,
             lVar4 = lVar9, (uVar2 & 1) != 0)) {
            if (lStack_70 == 0) {
              func_0x00f78af4();
              goto code_r0x0168c73c;
            }
            uVar2 = /*System.String$$Equals*/ func_0x029caa48(lStack_70,/*STR('Family')*/ uRam0000000003d6cca8,5,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar5,/*STR('ProcessorType')*/ uRam0000000003d71610,5,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar5,/*STR('GraphicsDevice')*/ uRam0000000003d6d4f0,5,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar5,/*STR('MinMemoryMB')*/ uRam0000000003d6fd10,5,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar5,/*STR('MaxMemoryMB')*/ uRam0000000003d6fa08,5,0);
                    if ((uVar2 & 1) == 0) {
                      uVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar5,/*STR('QualitySetting')*/ uRam0000000003d717b8,5,0);
                      if ((uVar2 & 1) == 0) {
                        uVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar5,/*STR('DeviceModel')*/ uRam0000000003d6bca0,5,0);
                        if ((uVar2 & 1) != 0) {
                          if (*(long *)(lVar9 + 0x28) == 0) {
                            func_0x00f78af4();
                            goto code_r0x0168c73c;
                          }
                          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar9 + 0x28),uStack_78,uRam0000000003d3bfa0);
                        }
                      }
                      else {
                        /*System.Int32$$TryParse*/ func_0x02ae9d70(uStack_78,lVar9 + 0x38,0);
                      }
                    }
                    else {
                      /*System.Int32$$TryParse*/ func_0x02ae9d70(uStack_78,lVar9 + 0x34,0);
                    }
                  }
                  else {
                    /*System.Int32$$TryParse*/ func_0x02ae9d70(uStack_78,lVar9 + 0x30,0);
                  }
                }
                else {
                  if (*(long *)(lVar9 + 0x20) == 0) {
                    func_0x00f78af4();
                    goto code_r0x0168c73c;
                  }
                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar9 + 0x20),uStack_78,uRam0000000003d3bfa0);
                }
              }
              else {
                if (*(long *)(lVar9 + 0x18) == 0) {
                  func_0x00f78af4();
                  goto code_r0x0168c73c;
                }
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar9 + 0x18),uStack_78,uRam0000000003d3bfa0);
              }
            }
            else {
              if (*(long *)(lVar9 + 0x10) == 0) {
                func_0x00f78af4();
                goto code_r0x0168c73c;
              }
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar9 + 0x10),uStack_78,uRam0000000003d3bfa0);
            }
          }
        }
        else {
          uVar2 = /*System.String$$op_Equality*/ func_0x029bdf2c(uStack_68,/*STR('Device')*/ uRam0000000003d6bc38,0);
          if ((uVar2 & 1) != 0) {
            lVar4 = func_0x00f78aec(/*Core.Settings.DeviceQualitySettings.DeviceSpec_TypeInfo*/ uRam0000000003d27270);
            /*System.Object$$.ctor*/ func_0x0294d018(lVar4,0);
            uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar6,uRam0000000003d3bf88);
            if (lVar4 == 0) {
              func_0x00f78af4();
              goto code_r0x0168c73c;
            }
            *(undefined8 *)(lVar4 + 0x10) = uVar6;
            uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar6,uRam0000000003d3bf88);
            *(undefined8 *)(lVar4 + 0x18) = uVar6;
            uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar6,uRam0000000003d3bf88);
            *(undefined8 *)(lVar4 + 0x20) = uVar6;
            uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar6,uRam0000000003d3bf88);
            *(undefined8 *)(lVar4 + 0x28) = uVar6;
            if (*(long *)(param_1 + 0x10) == 0) {
              func_0x00f78af4();
              goto code_r0x0168c73c;
            }
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x10),lVar4,uRam0000000003d3d0b0);
          }
        }
      }
    }
    lVar4 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto code_r0x0168c6c4;
        }
        piVar8 = piVar8 + 4;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0168c6c4:
    (*(code *)*puVar7)(plVar3,puVar7[1]);
  }
  return;
}



// ============================================================
// RVA: 0x168c7e4 | Core.Settings.DeviceQualitySettings.TryGetSection
// ============================================================

undefined8
Core_Settings_DeviceQualitySettings__TryGetSection
          (undefined8 param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb5a88 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d768b8);
    func_0x00f78a20(0x3d76b28);
    bRam0000000003eb5a88 = 1;
  }
  if (param_2 != 0) {
    iVar1 = /*System.String$$StartsWith*/ func_0x029ce958(param_2,/*STR('[')*/ uRam0000000003d768b8,5,0);
    if ((iVar1 == 0) || (iVar1 = /*System.String$$EndsWith*/ func_0x029cd7e4(param_2,/*STR(']')*/ uRam0000000003d76b28,5,0), iVar1 == 0)) {
      uVar3 = 0;
      uVar2 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    else {
      uVar3 = 1;
      uVar2 = /*System.String$$Substring*/ func_0x029cbbf0(param_2,1,*(int *)(param_2 + 0x10) + -2,0);
    }
    *param_3 = uVar2;
    return uVar3;
  }
  uVar2 = func_0x00f78af4();
  return uVar2;
}



// ============================================================
// RVA: 0x168c8d4 | Core.Settings.DeviceQualitySettings.TryGetParameterKeyAndValue
// ============================================================

undefined8
Core_Settings_DeviceQualitySettings__TryGetParameterKeyAndValue
          (undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000003eb5a89 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb5a89 = 1;
  }
  if (param_2 != 0) {
    uVar2 = /*System.String$$IndexOf*/ func_0x029cdad0(param_2,0x3d,0);
    iVar1 = (int)uVar2;
    if ((iVar1 < 1) || (*(int *)(param_2 + 0x10) + 1 <= iVar1)) {
      uVar5 = 0;
      *param_3 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      uVar2 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
LAB_0168c9c8:
      *param_4 = uVar2;
      return uVar5;
    }
    lVar3 = /*System.String$$Substring*/ func_0x029cbbf0(param_2,0,uVar2,0);
    lVar4 = /*System.String$$Substring*/ func_0x029cbd54(param_2,iVar1 + 1,0);
    if (lVar3 != 0) {
      uVar2 = /*System.String$$Trim*/ func_0x029bab94(lVar3,0);
      *param_3 = uVar2;
      if (lVar4 != 0) {
        uVar2 = /*System.String$$Trim*/ func_0x029bab94(lVar4,0);
        uVar5 = 1;
        goto LAB_0168c9c8;
      }
    }
  }
  uVar2 = func_0x00f78af4();
  return uVar2;
}



// ============================================================
// RVA: 0x168c9e4 | Core.Settings.DeviceQualitySettings..ctor
// ============================================================

void Core_Settings_DeviceQualitySettings___ctor(void)

{
  return;
}



