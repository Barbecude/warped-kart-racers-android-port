// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Internal.<>c__DisplayClass181_1

// ============================================================
// RVA: 0x1687d7c | Core.Services.Internal.<>c__DisplayClass181_1..ctor
// ============================================================

void Core_Services_Internal___c__DisplayClass181_1___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x168813c | Core.Services.Internal.<>c__DisplayClass181_1.<SyncNetworkTime>b__3
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01688378) */

void Core_Services_Internal___c__DisplayClass181_1___SyncNetworkTime_b__3(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb5a36 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d23910);
    func_0x00f78a20(0x3d68610);
    func_0x00f78a20(0x3d67530);
    func_0x00f78a20(0x3d67cc0);
    bRam0000000003eb5a36 = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x00f78af4();
  }
  else {
    lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x20);
    uVar2 = /*System.String$$Format*/ func_0x029bc688(/*STR('>> NTP {0}')*/ uRam0000000003d68610,*(undefined8 *)(param_1 + 0x10),0);
    if (lVar7 == 0) {
      func_0x00f78af4(uVar2,uVar2);
    }
    else {
      Core_Services_Internal__LogDebug(lVar7,uVar2,0);
      if (*(long *)(param_1 + 0x18) == 0) {
        func_0x00f78af4();
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + 0x10);
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
        plVar3 = (long *)func_0x00f78aec(/*GuerrillaNtp.NtpClient_TypeInfo*/ uRam0000000003d23910);
        /*GuerrillaNtp.NtpClient$$.ctor*/ func_0x02904a90(plVar3,uVar2,uVar8,0x7b,0);
        if (plVar3 == (long *)0x0) {
          func_0x00f78af4();
        }
        else {
          uStack_38 = /*GuerrillaNtp.NtpClient$$GetCorrectionOffset*/ func_0x02904b38(plVar3,0);
          if (*(long *)(param_1 + 0x18) == 0) {
            func_0x00f78af4();
          }
          else {
            lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x20);
            uVar8 = *(undefined8 *)(param_1 + 0x10);
            uStack_40 = /*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(&uStack_38,0);
            uVar2 = /*System.Double$$ToString*/ func_0x02ab4984(&uStack_40,/*STR('0.000')*/ uRam0000000003d67530,0);
            uVar2 = /*System.String$$Format*/ func_0x029bcac4(/*STR('<< NTP {0} success, dt={1}')*/ uRam0000000003d67cc0,uVar8,uVar2,0);
            if (lVar7 != 0) {
              Core_Services_Internal__LogDebug(lVar7,uVar2,0);
              lVar7 = *plVar3;
              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                    goto LAB_016882f8;
                  }
                  piVar6 = piVar6 + 4;
                  uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
              }
              puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
LAB_016882f8:
              (*(code *)*puVar4)(plVar3,puVar4[1]);
              if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar2 = /*System.DateTime$$get_UtcNow*/ func_0x02a8e4d4(0);
              /*System.DateTime$$op_Addition*/ func_0x02a8f988(uVar2,uStack_38,0);
              return;
            }
            func_0x00f78af4(uVar2,uVar2);
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x16884a8);
  (*pcVar1)();
}



