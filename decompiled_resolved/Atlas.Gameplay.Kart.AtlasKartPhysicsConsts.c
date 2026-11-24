// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.AtlasKartPhysicsConsts

// ============================================================
// RVA: 0x1469d28 | Atlas.Gameplay.Kart.AtlasKartPhysicsConsts..cctor
// ============================================================

undefined8 Atlas_Gameplay_Kart_AtlasKartPhysicsConsts___cctor(void)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000003eb4840 & 1) == 0) {
    func_0x00f78a20(0x3d1fea8);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d6ba50);
    func_0x00f78a20(0x3d70a90);
    bRam0000000003eb4840 = 1;
  }
  puVar6 = *(undefined8 **)(/*Atlas.Gameplay.Kart.AtlasKartPhysicsConsts_TypeInfo*/ lRam0000000003d1fea8 + 0xb8);
  *(undefined8 *)((long)puVar6 + 0x24) = 0;
  *(undefined8 *)((long)puVar6 + 0x1c) = 0;
  puVar6[1] = 0;
  *puVar6 = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
  plVar3 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
  if (plVar3 == (long *)0x0) {
LAB_01469e6c:
    func_0x00f78af4();
  }
  else {
    if ((/*STR('Default')*/ lRam0000000003d6ba50 != 0) &&
       (lVar4 = func_0x00f78adc(/*STR('Default')*/ lRam0000000003d6ba50,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    {
LAB_01469e78:
      uVar5 = func_0x00f78b14();
      goto code_r0x01469e7c;
    }
    if ((int)plVar3[3] != 0) {
      plVar3[4] = /*STR('Default')*/ lRam0000000003d6ba50;
      uVar1 = /*UnityEngine.LayerMask$$GetMask*/ func_0x03232748(plVar3,0);
      plVar3 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
      if (plVar3 == (long *)0x0) goto LAB_01469e6c;
      if ((/*STR('Obstacle')*/ lRam0000000003d70a90 != 0) &&
         (lVar4 = func_0x00f78adc(/*STR('Obstacle')*/ lRam0000000003d70a90,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)
         ) goto LAB_01469e78;
      if ((int)plVar3[3] != 0) {
        plVar3[4] = /*STR('Obstacle')*/ lRam0000000003d70a90;
        uVar2 = /*UnityEngine.LayerMask$$GetMask*/ func_0x03232748(plVar3,0);
        uVar5 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326fc(uVar2 | uVar1,0);
        *(int *)(*(long *)(/*Atlas.Gameplay.Kart.AtlasKartPhysicsConsts_TypeInfo*/ lRam0000000003d1fea8 + 0xb8) + 0x2c) = (int)uVar5;
        return uVar5;
      }
    }
  }
  uVar5 = func_0x00f78b24();
code_r0x01469e7c:
  lVar4 = func_0x00f78ac0(uVar5,0);
  return *(undefined8 *)(lVar4 + 0x10);
}



