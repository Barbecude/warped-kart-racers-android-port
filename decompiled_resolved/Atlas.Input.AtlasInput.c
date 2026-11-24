// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Input.AtlasInput

// ============================================================
// RVA: 0x14694f8 | Atlas.Input.AtlasInput.get_asset
// ============================================================

undefined8 Atlas_Input_AtlasInput__get_asset(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x1469500 | Atlas.Input.AtlasInput..ctor
// ============================================================

void Atlas_Input_AtlasInput___ctor(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb483c & 1) == 0) {
    func_0x00f78a20(0x3d6be58);
    func_0x00f78a20(0x3d7cc38);
    func_0x00f78a20(0x3d6ef00);
    func_0x00f78a20(0x3d6f430);
    func_0x00f78a20(0x3d75dd0);
    func_0x00f78a20(0x3d72008);
    bRam0000000003eb483c = 1;
  }
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  lVar1 = /*UnityEngine.InputSystem.InputActionAsset$$FromJson*/ func_0x03024d9c(/*STR('{\n    "name": "AtlasInput",\n    "maps": [\n        {\n            "name": "KartPhysics",\n            "id": "bfe51c73-9735-4a4a-b13e-195ea226c539",\n            "actions": [\n                {\n                    "name": "LeftJoystick",\n                    "type": "Value",\n                    "id": "73c39401-8456-45e0-8206-d9ec1f9d30cd",\n                    "expectedControlType": "Stick",\n                    "processors": "",\n                    "interactions": "",\n                    "initialStateCheck": true\n                },\n                {\n                    "name": "RightJoystick",\n                    "type": "Value",\n                    "id": "a0f08634-b56b-48d3-9e95-5a51765d6e2e",\n                    "expectedControlType": "Stick",\n                    "processors": "",\n                    "interactions": "",\n                    "initialStateCheck": true\n                },\n                {\n                    "name": "Drift",\n                    "type": "Button",\n                    "id": "629d4b67-47c1-4b8d-be4f-26f07687f8d6",\n                    "expectedControlType": "Button",\n                    "processors": "",\n                    "interactions": "",\n                    "initialStateCheck": false\n                },\n                {\n                    "name": "Use",\n                    "type": "Button",\n                    "id": "c01ae052-7aa1-4c7c-9b10-a3aeb2b8f899",\n                    "expectedControlType": "Button",\n                    "processors": "",\n                    "interactions": "",\n                    "initialStateCheck": false\n                }\n            ],\n            "bindings": [\n                {\n                    "name": "",\n                    "id": "383c9413-3c6f-4409-a394-d71523f618b9",\n                    "path": "<Gamepad>/leftStick",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "LeftJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": false\n                },\n                {\n                    "name": "WASD",\n                    "id": "a12c7a30-71c3-406c-b23c-0392b9f5aea7",\n                    "path": "2DVector",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "",\n                    "action": "LeftJoystick",\n                    "isComposite": true,\n                    "isPartOfComposite": false\n                },\n                {\n                    "name": "up",\n                    "id": "f5570c5b-6ed1-48b9-8ea6-773aee5a6aae",\n                    "path": "<Keyboard>/w",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "",\n                    "action": "LeftJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": true\n                },\n                {\n                    "name": "down",\n                    "id": "b34906cc-b027-418e-b054-6469d2b20219",\n                    "path": "<Keyboard>/s",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "",\n                    "action": "LeftJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": true\n                },\n                {\n                    "name": "left",\n                    "id": "9eda9265-5960-43fa-85e2-4f3029f0d767",\n                    "path": "<Keyboard>/a",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "",\n                    "action": "LeftJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": true\n                },\n                {\n                    "name": "right",\n                    "id": "317f40f6-45a3-4f98-a9d7-2bd61ab2714c",\n                    "path": "<Keyboard>/d",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "",\n                    "action": "LeftJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": true\n                },\n                {\n                    "name": "Arrow Keys",\n                    "id": "047189f7-ada8-4421-b75d-b2a09e588a36",\n                    "path": "2DVector",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "",\n                    "action": "LeftJoystick",\n                    "isComposite": true,\n                    "isPartOfComposite": false\n                },\n                {\n                    "name": "up",\n                    "id": "d80f91a6-5b66-49fc-a3b7-ad22ed14a05d",\n                    "path": "<Keyboard>/upArrow",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "LeftJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": true\n                },\n                {\n                    "name": "down",\n                    "id": "d5108d01-a7fe-4380-b9c3-e2e105aa1506",\n                    "path": "<Keyboard>/downArrow",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "LeftJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": true\n                },\n                {\n                    "name": "left",\n                    "id": "e1d482af-b82c-461c-a716-2f5431c19393",\n                    "path": "<Keyboard>/leftArrow",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "LeftJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": true\n                },\n                {\n                    "name": "right",\n                    "id": "268221c2-6f6b-4d81-af7f-6a47e7ed7636",\n                    "path": "<Keyboard>/rightArrow",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "LeftJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": true\n                },\n                {\n                    "name": "Face button brake",\n                    "id": "d40de4f6-7df8-4673-817a-0043af98fe7e",\n                    "path": "2DVector",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "",\n                    "action": "LeftJoystick",\n                    "isComposite": true,\n                    "isPartOfComposite": false\n                },\n                {\n                    "name": "up",\n                    "id": "e732310c-aecd-475a-a6e2-8ae2fb817399",\n                    "path": "",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "",\n                    "action": "LeftJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": true\n                },\n                {\n                    "name": "down",\n                    "id": "cf979db3-1c0a-4f9a-8bc1-97df022fd8b7",\n                    "path": "<Gamepad>/buttonEast",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "",\n                    "action": "LeftJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": true\n                },\n                {\n                    "name": "left",\n                    "id": "3dabd46f-72ee-4734-8c67-accdb41f3e82",\n                    "path": "",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "",\n                    "action": "LeftJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": true\n                },\n                {\n                    "name": "right",\n                    "id": "5832f35b-e414-47d9-ae39-07fa99034341",\n                    "path": "",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "",\n                    "action": "LeftJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": true\n                },\n                {\n                    "name": "",\n                    "id": "6fcb79ba-dcb5-4b7b-968e-c7ce941cf7da",\n                    "path": "<Gamepad>/rightStick",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "RightJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": false\n                },\n                {\n                    "name": "IJKL",\n                    "id": "19f56340-8531-46f3-9a75-e4d6fad7bb83",\n                    "path": "2DVector",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "",\n                    "action": "RightJoystick",\n                    "isComposite": true,\n                    "isPartOfComposite": false\n                },\n                {\n                    "name": "up",\n                    "id": "53c78ffa-f692-4b21-8099-2676a6a78ca0",\n                    "path": "<Keyboard>/i",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "RightJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": true\n                },\n                {\n                    "name": "down",\n                    "id": "d60e9907-1861-4471-a3f5-11e5a4d63a89",\n                    "path": "<Keyboard>/k",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "RightJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": true\n                },\n                {\n                    "name": "left",\n                    "id": "f168c2b1-996c-4169-97a3-069fd32d55ff",\n                    "path": "<Keyboard>/j",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "RightJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": true\n                },\n                {\n                    "name": "right",\n                    "id": "41520d75-f6c6-4012-a844-4b7bc750a6ab",\n                    "path": "<Keyboard>/l",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "RightJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": true\n                },\n                {\n                    "name": "NumPad",\n                    "id": "bf4822e5-776e-4a43-93e6-442971b9e4b1",\n                    "path": "2DVector",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "",\n                    "action": "RightJoystick",\n                    "isComposite": true,\n                    "isPartOfComposite": false\n                },\n                {\n                    "name": "up",\n                    "id": "9ef8d317-b950-426a-bfb2-4a7e865bdac8",\n                    "path": "<Keyboard>/numpad8",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "RightJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": true\n                },\n                {\n                    "name": "down",\n                    "id": "0f06e088-5097-4493-96f4-6a492a82ce5a",\n                    "path": "<Keyboard>/numpad2",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "RightJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": true\n                },\n                {\n                    "name": "left",\n                    "id": "6e5db3c4-85a6-498f-88d9-55541e593a14",\n                    "path": "<Keyboard>/numpad4",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "RightJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": true\n                },\n                {\n                    "name": "right",\n                    "id": "98c6fe1a-612c-4a61-b0bf-e2fc342bbe21",\n                    "path": "<Keyboard>/numpad6",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "RightJoystick",\n                    "isComposite": false,\n                    "isPartOfComposite": true\n                },\n                {\n                    "name": "",\n                    "id": "4cc340c9-2a08-4628-93bc-6876cca381ec",\n                    "path": "<Gamepad>/buttonSouth",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "Drift",\n                    "isComposite": false,\n                    "isPartOfComposite": false\n                },\n                {\n                    "name": "",\n                    "id": "55fea8cf-84d1-40c5-aff4-c657aa559d9d",\n                    "path": "<Gamepad>/rightTrigger",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "Drift",\n                    "isComposite": false,\n                    "isPartOfComposite": false\n                },\n                {\n                    "name": "",\n                    "id": "41b10125-a42e-4ac6-b075-89e9e811dbd9",\n                    "path": "<Gamepad>/rightShoulder",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "Drift",\n                    "isComposite": false,\n                    "isPartOfComposite": false\n                },\n                {\n                    "name": "",\n                    "id": "7eccc0af-42f0-4411-8088-e03d89decbd7",\n                    "path": "<Keyboard>/shift",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "Drift",\n                    "isComposite": false,\n                    "isPartOfComposite": false\n                },\n                {\n                    "name": "",\n                    "id": "2c6bac26-47cc-47e6-8053-fcee0e334d62",\n                    "path": "<Gamepad>/buttonWest",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "Use",\n                    "isComposite": false,\n                    "isPartOfComposite": false\n                },\n                {\n                    "name": "",\n                    "id": "c097484f-2642-4d2d-a284-690b3fec9639",\n                    "path": "<Gamepad>/leftTrigger",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "Use",\n                    "isComposite": false,\n                    "isPartOfComposite": false\n                },\n                {\n                    "name": "",\n                    "id": "04b6307c-eb7b-4061-ba21-d729d5afdb5f",\n                    "path": "<Gamepad>/leftShoulder",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "Use",\n                    "isComposite": false,\n                    "isPartOfComposite": false\n                },\n                {\n                    "name": "",\n                    "id": "88f73b73-d273-4669-8e83-094b762a9240",\n                    "path": "<Keyboard>/space",\n                    "interactions": "",\n                    "processors": "",\n                    "groups": "Atlas",\n                    "action": "Use",\n                    "isComposite": false,\n                    "isPartOfComposite": false\n                }\n            ]\n        }\n    ],\n    "controlSchemes": [\n        {\n            "name": "Atlas",\n            "bindingGroup": "Atlas",\n            "devices": [\n                {\n                    "devicePath": "<Keyboard>",\n                    "isOptional": true,\n                    "isOR": false\n                },\n                {\n                    "devicePath": "<Gamepad>",\n                    "isOptional": true,\n                    "isOR": false\n                },\n                {\n                    "devicePath": "<Joystick>",\n                    "isOptional": true,\n                    "isOR": false\n                },\n                {\n                    "devicePath": "<Touchscreen>",\n                    "isOptional": false,\n                    "isOR": false\n                }\n            ]\n        }\n    ]\n}')*/ uRam0000000003d7cc38,0);
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 != 0) {
    lVar1 = /*UnityEngine.InputSystem.InputActionAsset$$FindActionMap*/ func_0x03025174(lVar1,/*STR('KartPhysics')*/ uRam0000000003d6ef00,1,0);
    *(long *)(param_1 + 0x18) = lVar1;
    if (lVar1 != 0) {
      uVar2 = /*UnityEngine.InputSystem.InputActionMap$$FindAction*/ func_0x03024e58(lVar1,/*STR('LeftJoystick')*/ uRam0000000003d6f430,1,0);
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar2 = /*UnityEngine.InputSystem.InputActionMap$$FindAction*/ func_0x03024e58(*(long *)(param_1 + 0x18),/*STR('RightJoystick')*/ uRam0000000003d72008,1,0);
        *(undefined8 *)(param_1 + 0x30) = uVar2;
        if (*(long *)(param_1 + 0x18) != 0) {
          uVar2 = /*UnityEngine.InputSystem.InputActionMap$$FindAction*/ func_0x03024e58(*(long *)(param_1 + 0x18),/*STR('Drift')*/ uRam0000000003d6be58,1,0);
          *(undefined8 *)(param_1 + 0x38) = uVar2;
          if (*(long *)(param_1 + 0x18) != 0) {
            uVar2 = /*UnityEngine.InputSystem.InputActionMap$$FindAction*/ func_0x03024e58(*(long *)(param_1 + 0x18),/*STR('Use')*/ uRam0000000003d75dd0,1,0);
            *(undefined8 *)(param_1 + 0x40) = uVar2;
            return;
          }
        }
      }
    }
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb483d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb483d = 1;
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec0230 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0230 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (pcRam0000000003ec0228 == (code *)0x0) {
    pcRam0000000003ec0228 =
         (code *)func_0x00f789d4("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
  }
                    /* WARNING: Could not recover jumptable at 0x03249418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0228)(0,uVar2);
  return;
}



// ============================================================
// RVA: 0x146965c | Atlas.Input.AtlasInput.Dispose
// ============================================================

void Atlas_Input_AtlasInput__Dispose(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb483d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb483d = 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec0230 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0230 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (pcRam0000000003ec0228 == (code *)0x0) {
    pcRam0000000003ec0228 =
         (code *)func_0x00f789d4("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
  }
                    /* WARNING: Could not recover jumptable at 0x03249418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0228)(0,uVar1);
  return;
}



// ============================================================
// RVA: 0x14696cc | Atlas.Input.AtlasInput.get_bindingMask
// ============================================================

ulong Atlas_Input_AtlasInput__get_bindingMask
                (undefined8 *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar12;
  long lVar13;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar14;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  uint uVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  undefined8 *puVar11;
  
  lVar13 = *(long *)(param_2 + 0x10);
  if (lVar13 != 0) {
    uVar8 = *(undefined8 *)(lVar13 + 0x50);
    uVar10 = *(undefined8 *)(lVar13 + 0x68);
    uVar9 = *(undefined8 *)(lVar13 + 0x60);
    param_1[5] = *(undefined8 *)(lVar13 + 0x58);
    param_1[4] = uVar8;
    param_1[7] = uVar10;
    param_1[6] = uVar9;
    uVar8 = *(undefined8 *)(lVar13 + 0x70);
    uVar10 = *(undefined8 *)(lVar13 + 0x88);
    uVar9 = *(undefined8 *)(lVar13 + 0x80);
    param_1[9] = *(undefined8 *)(lVar13 + 0x78);
    param_1[8] = uVar8;
    param_1[0xb] = uVar10;
    param_1[10] = uVar9;
    uVar8 = *(undefined8 *)(lVar13 + 0x30);
    uVar10 = *(undefined8 *)(lVar13 + 0x48);
    uVar9 = *(undefined8 *)(lVar13 + 0x40);
    param_1[1] = *(undefined8 *)(lVar13 + 0x38);
    *param_1 = uVar8;
    param_1[3] = uVar10;
    param_1[2] = uVar9;
    return param_2;
  }
  auVar19 = func_0x00f78af4();
  puVar11 = auVar19._8_8_;
  puStack_18 = &Atlas_Input_AtlasInput__set_bindingMask;
  lVar13 = *(long *)(auVar19._0_8_ + 0x10);
  if (lVar13 != 0) {
    uStack_58 = puVar11[5];
    uStack_60 = puVar11[4];
    uStack_48 = puVar11[7];
    uStack_50 = puVar11[6];
    uStack_38 = puVar11[9];
    uStack_40 = puVar11[8];
    uStack_28 = puVar11[0xb];
    uStack_30 = puVar11[10];
    uStack_78 = puVar11[1];
    uStack_80 = *puVar11;
    uStack_68 = puVar11[3];
    uStack_70 = puVar11[2];
    puStack_20 = &stack0xfffffffffffffff0;
    uVar5 = /*UnityEngine.InputSystem.InputActionAsset$$set_bindingMask*/ func_0x03024690(lVar13,&uStack_80,0);
    return uVar5;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  lVar13 = func_0x00f78af4();
  puStack_88 = &Atlas_Input_AtlasInput__get_devices;
  ppuStack_90 = &puStack_20;
  if (*(long *)(lVar13 + 0x10) != 0) {
    uVar5 = /*UnityEngine.InputSystem.InputActionAsset$$get_devices*/ func_0x030247cc(&uStack_b8,*(long *)(lVar13 + 0x10),0);
    extraout_x8[1] = uStack_b0;
    *extraout_x8 = uStack_b8;
    extraout_x8[2] = uStack_a8;
    return uVar5;
  }
  auVar19 = func_0x00f78af4();
  puVar11 = auVar19._8_8_;
  puStack_c8 = &Atlas_Input_AtlasInput__set_devices;
  lVar13 = *(long *)(auVar19._0_8_ + 0x10);
  pppuStack_d0 = &ppuStack_90;
  if (lVar13 != 0) {
    uStack_e8 = puVar11[1];
    uStack_f0 = *puVar11;
    uStack_e0 = puVar11[2];
    uVar5 = /*UnityEngine.InputSystem.InputActionAsset$$set_devices*/ func_0x03024810(lVar13,&uStack_f0,0);
    return uVar5;
  }
  lVar13 = func_0x00f78af4();
  lVar13 = *(long *)(lVar13 + 0x10);
  if (lVar13 != 0) {
    if ((bRam0000000003ebcdde & 1) == 0) {
      func_0x00f78a20(0x3d3fb38,0);
      bRam0000000003ebcdde = 1;
    }
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<InputControlScheme>$$.ctor*/ func_0x02747d70(&stack0xfffffffffffffed0,*(undefined8 *)(lVar13 + 0x20),uRam0000000003d3fb38);
    return 0;
  }
  auVar19 = func_0x00f78af4();
  lVar14 = auVar19._8_8_;
  lVar13 = *(long *)(auVar19._0_8_ + 0x10);
  if (lVar13 != 0) {
    if ((bRam0000000003ebcdeb & 1) == 0) {
      func_0x00f78a20(0x3d23990,lVar14,0);
      bRam0000000003ebcdeb = 1;
    }
    if (((lVar14 != 0) && (lVar12 = *(long *)(lVar14 + 200), lVar12 != 0)) &&
       (*(long *)(lVar12 + 0x50) != lVar14)) {
      lVar14 = *(long *)(lVar12 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003ec027b & 1) == 0) {
        func_0x00f78a20(0x3d23990,lVar13,0);
        bRam0000000003ec027b = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003ec021b & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003ec021b = 1;
      }
      if (lVar14 == 0 && lVar13 == 0) {
        uVar5 = 1;
      }
      else {
        if (lVar13 == 0) {
          lVar13 = lVar14;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
        }
        else {
          if (lVar14 != 0) {
            return (ulong)(lVar14 == lVar13);
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
        }
        uVar4 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar13);
        uVar5 = (ulong)(uVar4 ^ 1);
      }
      return uVar5;
    }
    return 0;
  }
  lVar13 = func_0x00f78af4();
  puVar17 = &stack0xfffffffffffffee0;
  if (*(ulong *)(lVar13 + 0x10) != 0) {
    auVar19._8_8_ = 0;
    auVar19._0_8_ = *(ulong *)(lVar13 + 0x10);
    puVar18 = &Atlas_Input_AtlasInput__GetEnumerator;
    puVar2 = &stack0xfffffffffffffef0;
    puVar17 = &stack0xfffffffffffffef0;
UnityEngine_InputSystem_InputActionAsset__GetEnumerator:
    while( true ) {
      uVar8 = auVar19._0_8_;
      *(ulong *)(puVar2 + -0x30) = unaff_x22;
      *(ulong *)(puVar2 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
      *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = puVar17;
      *(undefined **)(puVar2 + -8) = puVar18;
      puVar17 = puVar2 + -0x10;
      unaff_x21 = 0x3d279e0;
      if ((bRam0000000003ebcdec & 1) == 0) {
        func_0x00f78a20(0x3d279e0,auVar19._8_8_);
        bRam0000000003ebcdec = 1;
      }
      uVar5 = func_0x00f78aec(/*UnityEngine.InputSystem.InputActionAsset.<GetEnumerator>d__31_TypeInfo*/ uRam0000000003d279e0);
      /*UnityEngine.InputSystem.InputActionAsset.<GetEnumerator>d__31$$.ctor*/ func_0x030a8708(uVar5,0,0);
      if (uVar5 != 0) break;
      puVar18 = &
                UnityEngine_InputSystem_InputActionAsset__System_Collections_IEnumerable_GetEnumerator
      ;
      auVar19 = func_0x00f78af4();
      unaff_x20 = 0;
      puVar2 = puVar2 + -0x30;
      unaff_x19 = uVar8;
    }
    *(undefined8 *)(uVar5 + 0x20) = uVar8;
    return uVar5;
  }
  lVar13 = func_0x00f78af4();
  if (*(ulong *)(lVar13 + 0x10) != 0) {
    auVar19._8_8_ = 0;
    auVar19._0_8_ = *(ulong *)(lVar13 + 0x10);
    puVar2 = &stack0xfffffffffffffee0;
    puVar18 = &Atlas_Input_AtlasInput__System_Collections_IEnumerable_GetEnumerator;
    goto UnityEngine_InputSystem_InputActionAsset__GetEnumerator;
  }
  lVar13 = func_0x00f78af4();
  lVar13 = *(long *)(lVar13 + 0x10);
  if (lVar13 != 0) {
    if ((bRam0000000003ebcde9 & 1) == 0) {
      func_0x00f78a20(0x3d32738,0);
      func_0x00f78a20(0x3d32740);
      func_0x00f78a20(0x3d32748);
      func_0x00f78a20(0x3d3fac0);
      bRam0000000003ebcde9 = 1;
    }
    /*UnityEngine.InputSystem.InputActionAsset$$get_actionMaps*/ func_0x03024518(lVar13);
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&stack0xfffffffffffffe78,&stack0xfffffffffffffe68,uRam0000000003d3fac0);
    while( true ) {
      uVar5 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&stack0xfffffffffffffe78,uRam0000000003d32740);
      if ((uVar5 & 1) == 0) {
        uVar5 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&stack0xfffffffffffffe78,uRam0000000003d32738);
        return uVar5;
      }
      lVar13 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&stack0xfffffffffffffe78,uRam0000000003d32748);
      if (lVar13 == 0) break;
      /*UnityEngine.InputSystem.InputActionMap$$Enable*/ func_0x03025c1c();
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3025be0);
    (*pcVar1)();
  }
  lVar13 = func_0x00f78af4();
  lVar13 = *(long *)(lVar13 + 0x10);
  if (lVar13 != 0) {
    if ((bRam0000000003ebcdea & 1) == 0) {
      func_0x00f78a20(0x3d32738,0);
      func_0x00f78a20(0x3d32740);
      func_0x00f78a20(0x3d32748);
      func_0x00f78a20(0x3d3fac0);
      bRam0000000003ebcdea = 1;
    }
    lStack_1a8 = /*UnityEngine.InputSystem.InputActionAsset$$get_actionMaps*/ func_0x03024518(lVar13);
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&stack0xfffffffffffffe68,&lStack_1a8,uRam0000000003d3fac0);
    while( true ) {
      uVar5 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&stack0xfffffffffffffe68,uRam0000000003d32740);
      if ((uVar5 & 1) == 0) {
        uVar5 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&stack0xfffffffffffffe68,uRam0000000003d32738);
        return uVar5;
      }
      lVar13 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&stack0xfffffffffffffe68,uRam0000000003d32748);
      if (lVar13 == 0) break;
      /*UnityEngine.InputSystem.InputActionMap$$Disable*/ func_0x03025da8();
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3025d6c);
    (*pcVar1)();
  }
  lVar13 = func_0x00f78af4();
  lVar13 = *(long *)(lVar13 + 0x10);
  if (lVar13 != 0) {
    if ((bRam0000000003ebcddf & 1) == 0) {
      func_0x00f78a20(0x3d279e8,0);
      bRam0000000003ebcddf = 1;
    }
    uVar5 = func_0x00f78aec(/*UnityEngine.InputSystem.InputActionAsset.<get_bindings>d__8_TypeInfo*/ uRam0000000003d279e8);
    /*UnityEngine.InputSystem.InputActionAsset.<get_bindings>d__8$$.ctor*/ func_0x030a88b0(uVar5,0xfffffffe,0);
    if (uVar5 != 0) {
      *(long *)(uVar5 + 0x78) = lVar13;
      return uVar5;
    }
    uVar5 = func_0x00f78af4();
    uVar8 = *(undefined8 *)(uVar5 + 0x50);
    uVar10 = *(undefined8 *)(uVar5 + 0x68);
    uVar9 = *(undefined8 *)(uVar5 + 0x60);
    extraout_x8_00[5] = *(undefined8 *)(uVar5 + 0x58);
    extraout_x8_00[4] = uVar8;
    extraout_x8_00[7] = uVar10;
    extraout_x8_00[6] = uVar9;
    uVar8 = *(undefined8 *)(uVar5 + 0x70);
    uVar10 = *(undefined8 *)(uVar5 + 0x88);
    uVar9 = *(undefined8 *)(uVar5 + 0x80);
    extraout_x8_00[9] = *(undefined8 *)(uVar5 + 0x78);
    extraout_x8_00[8] = uVar8;
    extraout_x8_00[0xb] = uVar10;
    extraout_x8_00[10] = uVar9;
    uVar8 = *(undefined8 *)(uVar5 + 0x30);
    uVar10 = *(undefined8 *)(uVar5 + 0x48);
    uVar9 = *(undefined8 *)(uVar5 + 0x40);
    extraout_x8_00[1] = *(undefined8 *)(uVar5 + 0x38);
    *extraout_x8_00 = uVar8;
    extraout_x8_00[3] = uVar10;
    extraout_x8_00[2] = uVar9;
    return uVar5;
  }
  auVar19 = func_0x00f78af4();
  lVar14 = auVar19._8_8_;
  lVar13 = *(long *)(auVar19._0_8_ + 0x10);
  if (lVar13 == 0) {
    auVar19 = func_0x00f78af4();
    puVar11 = auVar19._8_8_;
    lVar13 = *(long *)(auVar19._0_8_ + 0x10);
    if (lVar13 != 0) {
      uStack_1b8 = puVar11[5];
      uStack_1c0 = puVar11[4];
      lStack_1a8 = puVar11[7];
      uStack_1b0 = puVar11[6];
      uStack_1d8 = puVar11[1];
      uStack_1e0 = *puVar11;
      uStack_1c8 = puVar11[3];
      uStack_1d0 = puVar11[2];
      uVar5 = /*UnityEngine.InputSystem.InputActionAsset$$FindBinding*/ func_0x03024f80(lVar13,&uStack_1e0);
      return uVar5;
    }
    uVar5 = func_0x00f78af4();
    return uVar5;
  }
  lStack_1a8 = *(long *)PTR_03a5d648;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  if (lVar14 == 0) goto code_r0x03024b68;
  unaff_x21 = param_4;
  if (*(long *)(lVar13 + 0x18) == 0) {
code_r0x03024ad0:
    uVar5 = unaff_x22;
    if ((int)param_4 != 0) {
code_r0x03024b18:
      uVar8 = func_0x00f78a24(0x3d70368);
      uVar8 = /*System.String$$Format*/ func_0x029bcac4(uVar8,lVar14,lVar13,0);
      func_0x00f78a24(0x3d1fce8);
      uVar9 = func_0x00f78aec();
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar9,uVar8,0);
      goto code_r0x03024c04;
    }
    uVar6 = 0;
code_r0x03024ad8:
    uVar5 = uVar6;
    if (*(long *)PTR_03a5d648 == lStack_1a8) {
      return uVar6;
    }
    goto code_r0x03024bb0;
  }
  uVar5 = /*System.String$$IndexOf*/ func_0x029cdad0(lVar14,0x2f,0,0);
  if ((int)uVar5 == -1) {
    lVar12 = *(long *)(lVar13 + 0x18);
    if (lVar12 != 0) {
      lVar16 = 0;
      uVar5 = 0;
      do {
        if ((int)*(uint *)(lVar12 + 0x18) <= (int)(uint)lVar16) {
          uVar6 = uVar5;
          if ((uVar5 != 0) || ((param_4 & 1) == 0)) goto code_r0x03024ad8;
          goto code_r0x03024b18;
        }
        if (*(uint *)(lVar12 + 0x18) <= (uint)lVar16) goto code_r0x03024b5c;
        lVar12 = *(long *)(lVar12 + lVar16 * 8 + 0x20);
        unaff_x23 = uVar5;
        if (lVar12 == 0) break;
        uVar6 = /*UnityEngine.InputSystem.InputActionMap$$FindAction*/ func_0x03024e58(lVar12,lVar14,0);
        if (uVar6 != 0) {
          /*UnityEngine.InputSystem.InputAction$$get_currentState*/ func_0x03022910(&uStack_1d8);
          if (((char)uStack_1d8 != '\0') ||
             (uVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(uVar6 + 0x28),lVar14,0), (uVar7 & 1) != 0))
          goto code_r0x03024ad8;
          unaff_x22 = uVar6;
          unaff_x23 = uVar6;
          if (uVar5 != 0) {
            unaff_x23 = uVar5;
          }
        }
        lVar12 = *(long *)(lVar13 + 0x18);
        lVar16 = lVar16 + 1;
        uVar5 = unaff_x23;
      } while (lVar12 != 0);
    }
code_r0x03024a70:
    while( true ) {
      do {
        func_0x00f78af4();
code_r0x03024a74:
        unaff_x23 = *(ulong *)(unaff_x23 + 0x28);
      } while (unaff_x23 == 0);
      uVar4 = *(uint *)(unaff_x23 + 0x18);
      if ((int)uVar4 < 1) break;
      uVar15 = 0;
      while( true ) {
        if (uVar4 <= uVar15) goto code_r0x03024b5c;
        unaff_x22 = *(ulong *)(unaff_x23 + (long)(int)uVar15 * 8 + 0x20);
        if (unaff_x22 == 0) break;
        auVar19 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x22 + 0x10),0);
        iVar3 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar19._0_8_,auVar19._8_8_,uStack_1f8,uStack_1f0,3,0);
        uVar6 = unaff_x22;
        if (iVar3 == 0) goto code_r0x03024ad8;
        uVar15 = uVar15 + 1;
        uVar4 = *(uint *)(unaff_x23 + 0x18);
        if ((int)uVar4 <= (int)uVar15) goto code_r0x03024ad0;
      }
    }
    goto code_r0x03024ad0;
  }
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925e8(&uStack_1e8,lVar14,0,uVar5,0);
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925f4(&uStack_1f8,lVar14,(int)uVar5 + 1,0);
  uVar6 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_1e8,0);
  if (((uVar6 & 1) == 0) && (uVar6 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_1f8,0), (uVar6 & 1) == 0)) {
    lVar12 = *(long *)(lVar13 + 0x18);
    unaff_x22 = uVar5;
    if (lVar12 != 0) {
      unaff_x22 = 0;
      do {
        if ((int)*(uint *)(lVar12 + 0x18) <= (int)(uint)unaff_x22) goto code_r0x03024ad0;
        if (*(uint *)(lVar12 + 0x18) <= (uint)unaff_x22) goto code_r0x03024b5c;
        unaff_x23 = *(ulong *)(lVar12 + unaff_x22 * 8 + 0x20);
        if (unaff_x23 == 0) break;
        auVar19 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x23 + 0x10),0);
        iVar3 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar19._0_8_,auVar19._8_8_,uStack_1e8,uStack_1e0,3,0);
        if (iVar3 == 0) goto code_r0x03024a74;
        lVar12 = *(long *)(lVar13 + 0x18);
        unaff_x22 = unaff_x22 + 1;
      } while (lVar12 != 0);
    }
    goto code_r0x03024a70;
  }
code_r0x03024bb4:
  uVar8 = func_0x00f78a24(0x3d6f8e0);
  uVar8 = /*System.String$$Concat*/ func_0x029bdb88(uVar8,lVar14,0);
  func_0x00f78a24(0x3d1fce8);
  uVar9 = func_0x00f78aec();
  uVar10 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar9,uVar8,uVar10,0);
  param_4 = unaff_x21;
code_r0x03024c04:
  uVar10 = func_0x00f78a24(0x3d58100);
  lVar13 = func_0x00f78ac0(uVar9,uVar10);
  puStack_208 = &UnityEngine_InputSystem_InputActionAsset__ToJson;
  uStack_230 = uVar5;
  uStack_228 = param_4;
  uStack_220 = uVar9;
  uStack_218 = uVar8;
  puStack_210 = &stack0xfffffffffffffe90;
  if ((bRam0000000003ebcde1 & 1) == 0) {
    func_0x00f78a20(0x3d279f0);
    bRam0000000003ebcde1 = 1;
  }
  uVar8 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar13,0);
  uVar9 = /*UnityEngine.InputSystem.InputActionMap.WriteFileJson$$FromMaps*/ func_0x030aa3a0(*(undefined8 *)(lVar13 + 0x18),0);
  uStack_238 = /*UnityEngine.InputSystem.InputControlScheme.SchemeJson$$ToJson*/ func_0x030ba234(*(undefined8 *)(lVar13 + 0x20),0);
  uStack_248 = uVar8;
  uStack_240 = uVar9;
  uVar8 = func_0x00f78ae0(/*UnityEngine.InputSystem.InputActionAsset.WriteFileJson_TypeInfo*/ uRam0000000003d279f0,&uStack_248);
  uVar5 = /*UnityEngine.JsonUtility$$ToJson*/ func_0x03295ac8(uVar8,1,0);
  return uVar5;
code_r0x03024b5c:
  uVar8 = func_0x00f78b24();
  func_0x00f78ac0(uVar8,0);
code_r0x03024b68:
  func_0x00f78a24(0x3d1fcf0);
  lVar14 = func_0x00f78aec();
  uVar8 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(lVar14,uVar8,0);
  uVar8 = func_0x00f78a24(0x3d58100);
  func_0x00f78ac0(lVar14,uVar8);
  uVar5 = unaff_x22;
code_r0x03024bb0:
  ___stack_chk_fail();
  goto code_r0x03024bb4;
}



// ============================================================
// RVA: 0x1469700 | Atlas.Input.AtlasInput.set_bindingMask
// ============================================================

ulong Atlas_Input_AtlasInput__set_bindingMask(long param_1,undefined8 *param_2,ulong param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar13;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar14;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  uint uVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 *puVar12;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uStack_48 = param_2[5];
    uStack_50 = param_2[4];
    uStack_38 = param_2[7];
    uStack_40 = param_2[6];
    uStack_28 = param_2[9];
    uStack_30 = param_2[8];
    uStack_18 = param_2[0xb];
    uStack_20 = param_2[10];
    uStack_68 = param_2[1];
    uStack_70 = *param_2;
    uStack_58 = param_2[3];
    uStack_60 = param_2[2];
    uVar5 = /*UnityEngine.InputSystem.InputActionAsset$$set_bindingMask*/ func_0x03024690(*(long *)(param_1 + 0x10),&uStack_70,0);
    return uVar5;
  }
  lVar6 = func_0x00f78af4();
  puStack_78 = &Atlas_Input_AtlasInput__get_devices;
  puStack_80 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar6 + 0x10) != 0) {
    uVar5 = /*UnityEngine.InputSystem.InputActionAsset$$get_devices*/ func_0x030247cc(&uStack_a8,*(long *)(lVar6 + 0x10),0);
    extraout_x8[1] = uStack_a0;
    *extraout_x8 = uStack_a8;
    extraout_x8[2] = uStack_98;
    return uVar5;
  }
  auVar19 = func_0x00f78af4();
  puVar12 = auVar19._8_8_;
  puStack_b8 = &Atlas_Input_AtlasInput__set_devices;
  lVar6 = *(long *)(auVar19._0_8_ + 0x10);
  ppuStack_c0 = &puStack_80;
  if (lVar6 != 0) {
    uStack_d8 = puVar12[1];
    uStack_e0 = *puVar12;
    uStack_d0 = puVar12[2];
    uVar5 = /*UnityEngine.InputSystem.InputActionAsset$$set_devices*/ func_0x03024810(lVar6,&uStack_e0,0);
    return uVar5;
  }
  lVar6 = func_0x00f78af4();
  lVar6 = *(long *)(lVar6 + 0x10);
  if (lVar6 != 0) {
    if ((bRam0000000003ebcdde & 1) == 0) {
      func_0x00f78a20(0x3d3fb38,0);
      bRam0000000003ebcdde = 1;
    }
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<InputControlScheme>$$.ctor*/ func_0x02747d70(&stack0xfffffffffffffee0,*(undefined8 *)(lVar6 + 0x20),uRam0000000003d3fb38);
    return 0;
  }
  auVar19 = func_0x00f78af4();
  lVar14 = auVar19._8_8_;
  lVar6 = *(long *)(auVar19._0_8_ + 0x10);
  if (lVar6 != 0) {
    if ((bRam0000000003ebcdeb & 1) == 0) {
      func_0x00f78a20(0x3d23990,lVar14,0);
      bRam0000000003ebcdeb = 1;
    }
    if (((lVar14 != 0) && (lVar13 = *(long *)(lVar14 + 200), lVar13 != 0)) &&
       (*(long *)(lVar13 + 0x50) != lVar14)) {
      lVar14 = *(long *)(lVar13 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003ec027b & 1) == 0) {
        func_0x00f78a20(0x3d23990,lVar6,0);
        bRam0000000003ec027b = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003ec021b & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003ec021b = 1;
      }
      if (lVar14 == 0 && lVar6 == 0) {
        uVar5 = 1;
      }
      else {
        if (lVar6 == 0) {
          lVar6 = lVar14;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
        }
        else {
          if (lVar14 != 0) {
            return (ulong)(lVar14 == lVar6);
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
        }
        uVar4 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar6);
        uVar5 = (ulong)(uVar4 ^ 1);
      }
      return uVar5;
    }
    return 0;
  }
  lVar6 = func_0x00f78af4();
  puVar17 = &stack0xfffffffffffffef0;
  if (*(ulong *)(lVar6 + 0x10) != 0) {
    auVar19._8_8_ = 0;
    auVar19._0_8_ = *(ulong *)(lVar6 + 0x10);
    puVar18 = &Atlas_Input_AtlasInput__GetEnumerator;
    puVar2 = &stack0xffffffffffffff00;
    puVar17 = &stack0xffffffffffffff00;
UnityEngine_InputSystem_InputActionAsset__GetEnumerator:
    while( true ) {
      uVar9 = auVar19._0_8_;
      *(ulong *)(puVar2 + -0x30) = unaff_x22;
      *(ulong *)(puVar2 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
      *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = puVar17;
      *(undefined **)(puVar2 + -8) = puVar18;
      puVar17 = puVar2 + -0x10;
      unaff_x21 = 0x3d279e0;
      if ((bRam0000000003ebcdec & 1) == 0) {
        func_0x00f78a20(0x3d279e0,auVar19._8_8_);
        bRam0000000003ebcdec = 1;
      }
      uVar5 = func_0x00f78aec(/*UnityEngine.InputSystem.InputActionAsset.<GetEnumerator>d__31_TypeInfo*/ uRam0000000003d279e0);
      /*UnityEngine.InputSystem.InputActionAsset.<GetEnumerator>d__31$$.ctor*/ func_0x030a8708(uVar5,0,0);
      if (uVar5 != 0) break;
      puVar18 = &
                UnityEngine_InputSystem_InputActionAsset__System_Collections_IEnumerable_GetEnumerator
      ;
      auVar19 = func_0x00f78af4();
      unaff_x20 = 0;
      puVar2 = puVar2 + -0x30;
      unaff_x19 = uVar9;
    }
    *(undefined8 *)(uVar5 + 0x20) = uVar9;
    return uVar5;
  }
  lVar6 = func_0x00f78af4();
  if (*(ulong *)(lVar6 + 0x10) != 0) {
    auVar19._8_8_ = 0;
    auVar19._0_8_ = *(ulong *)(lVar6 + 0x10);
    puVar2 = &stack0xfffffffffffffef0;
    puVar18 = &Atlas_Input_AtlasInput__System_Collections_IEnumerable_GetEnumerator;
    goto UnityEngine_InputSystem_InputActionAsset__GetEnumerator;
  }
  lVar6 = func_0x00f78af4();
  lVar6 = *(long *)(lVar6 + 0x10);
  if (lVar6 != 0) {
    if ((bRam0000000003ebcde9 & 1) == 0) {
      func_0x00f78a20(0x3d32738,0);
      func_0x00f78a20(0x3d32740);
      func_0x00f78a20(0x3d32748);
      func_0x00f78a20(0x3d3fac0);
      bRam0000000003ebcde9 = 1;
    }
    /*UnityEngine.InputSystem.InputActionAsset$$get_actionMaps*/ func_0x03024518(lVar6);
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&stack0xfffffffffffffe88,&stack0xfffffffffffffe78,uRam0000000003d3fac0);
    while( true ) {
      uVar5 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&stack0xfffffffffffffe88,uRam0000000003d32740);
      if ((uVar5 & 1) == 0) {
        uVar5 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&stack0xfffffffffffffe88,uRam0000000003d32738);
        return uVar5;
      }
      lVar6 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&stack0xfffffffffffffe88,uRam0000000003d32748);
      if (lVar6 == 0) break;
      /*UnityEngine.InputSystem.InputActionMap$$Enable*/ func_0x03025c1c();
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3025be0);
    (*pcVar1)();
  }
  lVar6 = func_0x00f78af4();
  lVar6 = *(long *)(lVar6 + 0x10);
  if (lVar6 != 0) {
    if ((bRam0000000003ebcdea & 1) == 0) {
      func_0x00f78a20(0x3d32738,0);
      func_0x00f78a20(0x3d32740);
      func_0x00f78a20(0x3d32748);
      func_0x00f78a20(0x3d3fac0);
      bRam0000000003ebcdea = 1;
    }
    lStack_198 = /*UnityEngine.InputSystem.InputActionAsset$$get_actionMaps*/ func_0x03024518(lVar6);
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&stack0xfffffffffffffe78,&lStack_198,uRam0000000003d3fac0);
    while( true ) {
      uVar5 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&stack0xfffffffffffffe78,uRam0000000003d32740);
      if ((uVar5 & 1) == 0) {
        uVar5 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&stack0xfffffffffffffe78,uRam0000000003d32738);
        return uVar5;
      }
      lVar6 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&stack0xfffffffffffffe78,uRam0000000003d32748);
      if (lVar6 == 0) break;
      /*UnityEngine.InputSystem.InputActionMap$$Disable*/ func_0x03025da8();
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3025d6c);
    (*pcVar1)();
  }
  lVar6 = func_0x00f78af4();
  lVar6 = *(long *)(lVar6 + 0x10);
  if (lVar6 != 0) {
    if ((bRam0000000003ebcddf & 1) == 0) {
      func_0x00f78a20(0x3d279e8,0);
      bRam0000000003ebcddf = 1;
    }
    uVar5 = func_0x00f78aec(/*UnityEngine.InputSystem.InputActionAsset.<get_bindings>d__8_TypeInfo*/ uRam0000000003d279e8);
    /*UnityEngine.InputSystem.InputActionAsset.<get_bindings>d__8$$.ctor*/ func_0x030a88b0(uVar5,0xfffffffe,0);
    if (uVar5 != 0) {
      *(long *)(uVar5 + 0x78) = lVar6;
      return uVar5;
    }
    uVar5 = func_0x00f78af4();
    uVar9 = *(undefined8 *)(uVar5 + 0x50);
    uVar11 = *(undefined8 *)(uVar5 + 0x68);
    uVar10 = *(undefined8 *)(uVar5 + 0x60);
    extraout_x8_00[5] = *(undefined8 *)(uVar5 + 0x58);
    extraout_x8_00[4] = uVar9;
    extraout_x8_00[7] = uVar11;
    extraout_x8_00[6] = uVar10;
    uVar9 = *(undefined8 *)(uVar5 + 0x70);
    uVar11 = *(undefined8 *)(uVar5 + 0x88);
    uVar10 = *(undefined8 *)(uVar5 + 0x80);
    extraout_x8_00[9] = *(undefined8 *)(uVar5 + 0x78);
    extraout_x8_00[8] = uVar9;
    extraout_x8_00[0xb] = uVar11;
    extraout_x8_00[10] = uVar10;
    uVar9 = *(undefined8 *)(uVar5 + 0x30);
    uVar11 = *(undefined8 *)(uVar5 + 0x48);
    uVar10 = *(undefined8 *)(uVar5 + 0x40);
    extraout_x8_00[1] = *(undefined8 *)(uVar5 + 0x38);
    *extraout_x8_00 = uVar9;
    extraout_x8_00[3] = uVar11;
    extraout_x8_00[2] = uVar10;
    return uVar5;
  }
  auVar19 = func_0x00f78af4();
  lVar14 = auVar19._8_8_;
  lVar6 = *(long *)(auVar19._0_8_ + 0x10);
  if (lVar6 == 0) {
    auVar19 = func_0x00f78af4();
    puVar12 = auVar19._8_8_;
    lVar6 = *(long *)(auVar19._0_8_ + 0x10);
    if (lVar6 != 0) {
      uStack_1a8 = puVar12[5];
      uStack_1b0 = puVar12[4];
      lStack_198 = puVar12[7];
      uStack_1a0 = puVar12[6];
      uStack_1c8 = puVar12[1];
      uStack_1d0 = *puVar12;
      uStack_1b8 = puVar12[3];
      uStack_1c0 = puVar12[2];
      uVar5 = /*UnityEngine.InputSystem.InputActionAsset$$FindBinding*/ func_0x03024f80(lVar6,&uStack_1d0);
      return uVar5;
    }
    uVar5 = func_0x00f78af4();
    return uVar5;
  }
  lStack_198 = *(long *)PTR_03a5d648;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  if (lVar14 == 0) goto code_r0x03024b68;
  unaff_x21 = param_3;
  if (*(long *)(lVar6 + 0x18) == 0) {
code_r0x03024ad0:
    uVar5 = unaff_x22;
    if ((int)param_3 != 0) {
code_r0x03024b18:
      uVar9 = func_0x00f78a24(0x3d70368);
      uVar9 = /*System.String$$Format*/ func_0x029bcac4(uVar9,lVar14,lVar6,0);
      func_0x00f78a24(0x3d1fce8);
      uVar10 = func_0x00f78aec();
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar10,uVar9,0);
      goto code_r0x03024c04;
    }
    uVar7 = 0;
code_r0x03024ad8:
    uVar5 = uVar7;
    if (*(long *)PTR_03a5d648 == lStack_198) {
      return uVar7;
    }
    goto code_r0x03024bb0;
  }
  uVar5 = /*System.String$$IndexOf*/ func_0x029cdad0(lVar14,0x2f,0,0);
  if ((int)uVar5 == -1) {
    lVar13 = *(long *)(lVar6 + 0x18);
    if (lVar13 != 0) {
      lVar16 = 0;
      uVar5 = 0;
      do {
        if ((int)*(uint *)(lVar13 + 0x18) <= (int)(uint)lVar16) {
          uVar7 = uVar5;
          if ((uVar5 != 0) || ((param_3 & 1) == 0)) goto code_r0x03024ad8;
          goto code_r0x03024b18;
        }
        if (*(uint *)(lVar13 + 0x18) <= (uint)lVar16) goto code_r0x03024b5c;
        lVar13 = *(long *)(lVar13 + lVar16 * 8 + 0x20);
        unaff_x23 = uVar5;
        if (lVar13 == 0) break;
        uVar7 = /*UnityEngine.InputSystem.InputActionMap$$FindAction*/ func_0x03024e58(lVar13,lVar14,0);
        if (uVar7 != 0) {
          /*UnityEngine.InputSystem.InputAction$$get_currentState*/ func_0x03022910(&uStack_1c8);
          if (((char)uStack_1c8 != '\0') ||
             (uVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(uVar7 + 0x28),lVar14,0), (uVar8 & 1) != 0))
          goto code_r0x03024ad8;
          unaff_x22 = uVar7;
          unaff_x23 = uVar7;
          if (uVar5 != 0) {
            unaff_x23 = uVar5;
          }
        }
        lVar13 = *(long *)(lVar6 + 0x18);
        lVar16 = lVar16 + 1;
        uVar5 = unaff_x23;
      } while (lVar13 != 0);
    }
code_r0x03024a70:
    while( true ) {
      do {
        func_0x00f78af4();
code_r0x03024a74:
        unaff_x23 = *(ulong *)(unaff_x23 + 0x28);
      } while (unaff_x23 == 0);
      uVar4 = *(uint *)(unaff_x23 + 0x18);
      if ((int)uVar4 < 1) break;
      uVar15 = 0;
      while( true ) {
        if (uVar4 <= uVar15) goto code_r0x03024b5c;
        unaff_x22 = *(ulong *)(unaff_x23 + (long)(int)uVar15 * 8 + 0x20);
        if (unaff_x22 == 0) break;
        auVar19 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x22 + 0x10),0);
        iVar3 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar19._0_8_,auVar19._8_8_,uStack_1e8,uStack_1e0,3,0);
        uVar7 = unaff_x22;
        if (iVar3 == 0) goto code_r0x03024ad8;
        uVar15 = uVar15 + 1;
        uVar4 = *(uint *)(unaff_x23 + 0x18);
        if ((int)uVar4 <= (int)uVar15) goto code_r0x03024ad0;
      }
    }
    goto code_r0x03024ad0;
  }
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925e8(&uStack_1d8,lVar14,0,uVar5,0);
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925f4(&uStack_1e8,lVar14,(int)uVar5 + 1,0);
  uVar7 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_1d8,0);
  if (((uVar7 & 1) == 0) && (uVar7 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_1e8,0), (uVar7 & 1) == 0)) {
    lVar13 = *(long *)(lVar6 + 0x18);
    unaff_x22 = uVar5;
    if (lVar13 != 0) {
      unaff_x22 = 0;
      do {
        if ((int)*(uint *)(lVar13 + 0x18) <= (int)(uint)unaff_x22) goto code_r0x03024ad0;
        if (*(uint *)(lVar13 + 0x18) <= (uint)unaff_x22) goto code_r0x03024b5c;
        unaff_x23 = *(ulong *)(lVar13 + unaff_x22 * 8 + 0x20);
        if (unaff_x23 == 0) break;
        auVar19 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x23 + 0x10),0);
        iVar3 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar19._0_8_,auVar19._8_8_,uStack_1d8,uStack_1d0,3,0);
        if (iVar3 == 0) goto code_r0x03024a74;
        lVar13 = *(long *)(lVar6 + 0x18);
        unaff_x22 = unaff_x22 + 1;
      } while (lVar13 != 0);
    }
    goto code_r0x03024a70;
  }
code_r0x03024bb4:
  uVar9 = func_0x00f78a24(0x3d6f8e0);
  uVar9 = /*System.String$$Concat*/ func_0x029bdb88(uVar9,lVar14,0);
  func_0x00f78a24(0x3d1fce8);
  uVar10 = func_0x00f78aec();
  uVar11 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar10,uVar9,uVar11,0);
  param_3 = unaff_x21;
code_r0x03024c04:
  uVar11 = func_0x00f78a24(0x3d58100);
  lVar6 = func_0x00f78ac0(uVar10,uVar11);
  puStack_1f8 = &UnityEngine_InputSystem_InputActionAsset__ToJson;
  uStack_220 = uVar5;
  uStack_218 = param_3;
  uStack_210 = uVar10;
  uStack_208 = uVar9;
  puStack_200 = &stack0xfffffffffffffea0;
  if ((bRam0000000003ebcde1 & 1) == 0) {
    func_0x00f78a20(0x3d279f0);
    bRam0000000003ebcde1 = 1;
  }
  uVar9 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar6,0);
  uVar10 = /*UnityEngine.InputSystem.InputActionMap.WriteFileJson$$FromMaps*/ func_0x030aa3a0(*(undefined8 *)(lVar6 + 0x18),0);
  uStack_228 = /*UnityEngine.InputSystem.InputControlScheme.SchemeJson$$ToJson*/ func_0x030ba234(*(undefined8 *)(lVar6 + 0x20),0);
  uStack_238 = uVar9;
  uStack_230 = uVar10;
  uVar9 = func_0x00f78ae0(/*UnityEngine.InputSystem.InputActionAsset.WriteFileJson_TypeInfo*/ uRam0000000003d279f0,&uStack_238);
  uVar5 = /*UnityEngine.JsonUtility$$ToJson*/ func_0x03295ac8(uVar9,1,0);
  return uVar5;
code_r0x03024b5c:
  uVar9 = func_0x00f78b24();
  func_0x00f78ac0(uVar9,0);
code_r0x03024b68:
  func_0x00f78a24(0x3d1fcf0);
  lVar14 = func_0x00f78aec();
  uVar9 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(lVar14,uVar9,0);
  uVar9 = func_0x00f78a24(0x3d58100);
  func_0x00f78ac0(lVar14,uVar9);
  uVar5 = unaff_x22;
code_r0x03024bb0:
  ___stack_chk_fail();
  goto code_r0x03024bb4;
}



// ============================================================
// RVA: 0x1469748 | Atlas.Input.AtlasInput.get_devices
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1469794 | Atlas.Input.AtlasInput.set_devices
// ============================================================

ulong Atlas_Input_AtlasInput__set_devices(long param_1,undefined8 *param_2,ulong param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *extraout_x8;
  long lVar13;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar14;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  uint uVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  undefined *puStack_148;
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
  long lStack_e8;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uStack_28 = param_2[1];
    uStack_30 = *param_2;
    uStack_20 = param_2[2];
    uVar5 = /*UnityEngine.InputSystem.InputActionAsset$$set_devices*/ func_0x03024810(*(long *)(param_1 + 0x10),&uStack_30,0);
    return uVar5;
  }
  lVar6 = func_0x00f78af4();
  lVar6 = *(long *)(lVar6 + 0x10);
  if (lVar6 != 0) {
    if ((bRam0000000003ebcdde & 1) == 0) {
      func_0x00f78a20(0x3d3fb38,0);
      bRam0000000003ebcdde = 1;
    }
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<InputControlScheme>$$.ctor*/ func_0x02747d70(&stack0xffffffffffffff90,*(undefined8 *)(lVar6 + 0x20),uRam0000000003d3fb38);
    return 0;
  }
  auVar19 = func_0x00f78af4();
  lVar14 = auVar19._8_8_;
  lVar6 = *(long *)(auVar19._0_8_ + 0x10);
  if (lVar6 != 0) {
    if ((bRam0000000003ebcdeb & 1) == 0) {
      func_0x00f78a20(0x3d23990,lVar14,0);
      bRam0000000003ebcdeb = 1;
    }
    if (((lVar14 != 0) && (lVar13 = *(long *)(lVar14 + 200), lVar13 != 0)) &&
       (*(long *)(lVar13 + 0x50) != lVar14)) {
      lVar14 = *(long *)(lVar13 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003ec027b & 1) == 0) {
        func_0x00f78a20(0x3d23990,lVar6,0);
        bRam0000000003ec027b = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003ec021b & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003ec021b = 1;
      }
      if (lVar14 == 0 && lVar6 == 0) {
        uVar5 = 1;
      }
      else {
        if (lVar6 == 0) {
          lVar6 = lVar14;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
        }
        else {
          if (lVar14 != 0) {
            return (ulong)(lVar14 == lVar6);
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
        }
        uVar4 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar6);
        uVar5 = (ulong)(uVar4 ^ 1);
      }
      return uVar5;
    }
    return 0;
  }
  lVar6 = func_0x00f78af4();
  puVar17 = &stack0xffffffffffffffa0;
  if (*(ulong *)(lVar6 + 0x10) != 0) {
    auVar19._8_8_ = 0;
    auVar19._0_8_ = *(ulong *)(lVar6 + 0x10);
    puVar18 = &Atlas_Input_AtlasInput__GetEnumerator;
    puVar2 = &stack0xffffffffffffffb0;
    puVar17 = &stack0xffffffffffffffb0;
UnityEngine_InputSystem_InputActionAsset__GetEnumerator:
    while( true ) {
      uVar9 = auVar19._0_8_;
      *(ulong *)(puVar2 + -0x30) = unaff_x22;
      *(ulong *)(puVar2 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
      *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = puVar17;
      *(undefined **)(puVar2 + -8) = puVar18;
      puVar17 = puVar2 + -0x10;
      unaff_x21 = 0x3d279e0;
      if ((bRam0000000003ebcdec & 1) == 0) {
        func_0x00f78a20(0x3d279e0,auVar19._8_8_);
        bRam0000000003ebcdec = 1;
      }
      uVar5 = func_0x00f78aec(/*UnityEngine.InputSystem.InputActionAsset.<GetEnumerator>d__31_TypeInfo*/ uRam0000000003d279e0);
      /*UnityEngine.InputSystem.InputActionAsset.<GetEnumerator>d__31$$.ctor*/ func_0x030a8708(uVar5,0,0);
      if (uVar5 != 0) break;
      puVar18 = &
                UnityEngine_InputSystem_InputActionAsset__System_Collections_IEnumerable_GetEnumerator
      ;
      auVar19 = func_0x00f78af4();
      unaff_x20 = 0;
      puVar2 = puVar2 + -0x30;
      unaff_x19 = uVar9;
    }
    *(undefined8 *)(uVar5 + 0x20) = uVar9;
    return uVar5;
  }
  lVar6 = func_0x00f78af4();
  if (*(ulong *)(lVar6 + 0x10) != 0) {
    auVar19._8_8_ = 0;
    auVar19._0_8_ = *(ulong *)(lVar6 + 0x10);
    puVar2 = &stack0xffffffffffffffa0;
    puVar18 = &Atlas_Input_AtlasInput__System_Collections_IEnumerable_GetEnumerator;
    goto UnityEngine_InputSystem_InputActionAsset__GetEnumerator;
  }
  lVar6 = func_0x00f78af4();
  lVar6 = *(long *)(lVar6 + 0x10);
  if (lVar6 != 0) {
    if ((bRam0000000003ebcde9 & 1) == 0) {
      func_0x00f78a20(0x3d32738,0);
      func_0x00f78a20(0x3d32740);
      func_0x00f78a20(0x3d32748);
      func_0x00f78a20(0x3d3fac0);
      bRam0000000003ebcde9 = 1;
    }
    /*UnityEngine.InputSystem.InputActionAsset$$get_actionMaps*/ func_0x03024518(lVar6);
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&stack0xffffffffffffff38,&stack0xffffffffffffff28,uRam0000000003d3fac0);
    while( true ) {
      uVar5 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&stack0xffffffffffffff38,uRam0000000003d32740);
      if ((uVar5 & 1) == 0) {
        uVar5 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&stack0xffffffffffffff38,uRam0000000003d32738);
        return uVar5;
      }
      lVar6 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&stack0xffffffffffffff38,uRam0000000003d32748);
      if (lVar6 == 0) break;
      /*UnityEngine.InputSystem.InputActionMap$$Enable*/ func_0x03025c1c();
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3025be0);
    (*pcVar1)();
  }
  lVar6 = func_0x00f78af4();
  lVar6 = *(long *)(lVar6 + 0x10);
  if (lVar6 != 0) {
    if ((bRam0000000003ebcdea & 1) == 0) {
      func_0x00f78a20(0x3d32738,0);
      func_0x00f78a20(0x3d32740);
      func_0x00f78a20(0x3d32748);
      func_0x00f78a20(0x3d3fac0);
      bRam0000000003ebcdea = 1;
    }
    lStack_e8 = /*UnityEngine.InputSystem.InputActionAsset$$get_actionMaps*/ func_0x03024518(lVar6);
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&stack0xffffffffffffff28,&lStack_e8,uRam0000000003d3fac0);
    while( true ) {
      uVar5 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&stack0xffffffffffffff28,uRam0000000003d32740);
      if ((uVar5 & 1) == 0) {
        uVar5 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&stack0xffffffffffffff28,uRam0000000003d32738);
        return uVar5;
      }
      lVar6 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&stack0xffffffffffffff28,uRam0000000003d32748);
      if (lVar6 == 0) break;
      /*UnityEngine.InputSystem.InputActionMap$$Disable*/ func_0x03025da8();
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3025d6c);
    (*pcVar1)();
  }
  lVar6 = func_0x00f78af4();
  lVar6 = *(long *)(lVar6 + 0x10);
  if (lVar6 != 0) {
    if ((bRam0000000003ebcddf & 1) == 0) {
      func_0x00f78a20(0x3d279e8,0);
      bRam0000000003ebcddf = 1;
    }
    uVar5 = func_0x00f78aec(/*UnityEngine.InputSystem.InputActionAsset.<get_bindings>d__8_TypeInfo*/ uRam0000000003d279e8);
    /*UnityEngine.InputSystem.InputActionAsset.<get_bindings>d__8$$.ctor*/ func_0x030a88b0(uVar5,0xfffffffe,0);
    if (uVar5 != 0) {
      *(long *)(uVar5 + 0x78) = lVar6;
      return uVar5;
    }
    uVar5 = func_0x00f78af4();
    uVar9 = *(undefined8 *)(uVar5 + 0x50);
    uVar11 = *(undefined8 *)(uVar5 + 0x68);
    uVar10 = *(undefined8 *)(uVar5 + 0x60);
    extraout_x8[5] = *(undefined8 *)(uVar5 + 0x58);
    extraout_x8[4] = uVar9;
    extraout_x8[7] = uVar11;
    extraout_x8[6] = uVar10;
    uVar9 = *(undefined8 *)(uVar5 + 0x70);
    uVar11 = *(undefined8 *)(uVar5 + 0x88);
    uVar10 = *(undefined8 *)(uVar5 + 0x80);
    extraout_x8[9] = *(undefined8 *)(uVar5 + 0x78);
    extraout_x8[8] = uVar9;
    extraout_x8[0xb] = uVar11;
    extraout_x8[10] = uVar10;
    uVar9 = *(undefined8 *)(uVar5 + 0x30);
    uVar11 = *(undefined8 *)(uVar5 + 0x48);
    uVar10 = *(undefined8 *)(uVar5 + 0x40);
    extraout_x8[1] = *(undefined8 *)(uVar5 + 0x38);
    *extraout_x8 = uVar9;
    extraout_x8[3] = uVar11;
    extraout_x8[2] = uVar10;
    return uVar5;
  }
  auVar19 = func_0x00f78af4();
  lVar14 = auVar19._8_8_;
  lVar6 = *(long *)(auVar19._0_8_ + 0x10);
  if (lVar6 == 0) {
    auVar19 = func_0x00f78af4();
    puVar12 = auVar19._8_8_;
    lVar6 = *(long *)(auVar19._0_8_ + 0x10);
    if (lVar6 != 0) {
      uStack_f8 = puVar12[5];
      uStack_100 = puVar12[4];
      lStack_e8 = puVar12[7];
      uStack_f0 = puVar12[6];
      uStack_118 = puVar12[1];
      uStack_120 = *puVar12;
      uStack_108 = puVar12[3];
      uStack_110 = puVar12[2];
      uVar5 = /*UnityEngine.InputSystem.InputActionAsset$$FindBinding*/ func_0x03024f80(lVar6,&uStack_120);
      return uVar5;
    }
    uVar5 = func_0x00f78af4();
    return uVar5;
  }
  lStack_e8 = *(long *)PTR_03a5d648;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  if (lVar14 == 0) goto code_r0x03024b68;
  unaff_x21 = param_3;
  if (*(long *)(lVar6 + 0x18) == 0) {
code_r0x03024ad0:
    uVar5 = unaff_x22;
    if ((int)param_3 != 0) {
code_r0x03024b18:
      uVar9 = func_0x00f78a24(0x3d70368);
      uVar9 = /*System.String$$Format*/ func_0x029bcac4(uVar9,lVar14,lVar6,0);
      func_0x00f78a24(0x3d1fce8);
      uVar10 = func_0x00f78aec();
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar10,uVar9,0);
      goto code_r0x03024c04;
    }
    uVar7 = 0;
code_r0x03024ad8:
    uVar5 = uVar7;
    if (*(long *)PTR_03a5d648 == lStack_e8) {
      return uVar7;
    }
    goto code_r0x03024bb0;
  }
  uVar5 = /*System.String$$IndexOf*/ func_0x029cdad0(lVar14,0x2f,0,0);
  if ((int)uVar5 == -1) {
    lVar13 = *(long *)(lVar6 + 0x18);
    if (lVar13 != 0) {
      lVar16 = 0;
      uVar5 = 0;
      do {
        if ((int)*(uint *)(lVar13 + 0x18) <= (int)(uint)lVar16) {
          uVar7 = uVar5;
          if ((uVar5 != 0) || ((param_3 & 1) == 0)) goto code_r0x03024ad8;
          goto code_r0x03024b18;
        }
        if (*(uint *)(lVar13 + 0x18) <= (uint)lVar16) goto code_r0x03024b5c;
        lVar13 = *(long *)(lVar13 + lVar16 * 8 + 0x20);
        unaff_x23 = uVar5;
        if (lVar13 == 0) break;
        uVar7 = /*UnityEngine.InputSystem.InputActionMap$$FindAction*/ func_0x03024e58(lVar13,lVar14,0);
        if (uVar7 != 0) {
          /*UnityEngine.InputSystem.InputAction$$get_currentState*/ func_0x03022910(&uStack_118);
          if (((char)uStack_118 != '\0') ||
             (uVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(uVar7 + 0x28),lVar14,0), (uVar8 & 1) != 0))
          goto code_r0x03024ad8;
          unaff_x22 = uVar7;
          unaff_x23 = uVar7;
          if (uVar5 != 0) {
            unaff_x23 = uVar5;
          }
        }
        lVar13 = *(long *)(lVar6 + 0x18);
        lVar16 = lVar16 + 1;
        uVar5 = unaff_x23;
      } while (lVar13 != 0);
    }
code_r0x03024a70:
    while( true ) {
      do {
        func_0x00f78af4();
code_r0x03024a74:
        unaff_x23 = *(ulong *)(unaff_x23 + 0x28);
      } while (unaff_x23 == 0);
      uVar4 = *(uint *)(unaff_x23 + 0x18);
      if ((int)uVar4 < 1) break;
      uVar15 = 0;
      while( true ) {
        if (uVar4 <= uVar15) goto code_r0x03024b5c;
        unaff_x22 = *(ulong *)(unaff_x23 + (long)(int)uVar15 * 8 + 0x20);
        if (unaff_x22 == 0) break;
        auVar19 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x22 + 0x10),0);
        iVar3 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar19._0_8_,auVar19._8_8_,uStack_138,uStack_130,3,0);
        uVar7 = unaff_x22;
        if (iVar3 == 0) goto code_r0x03024ad8;
        uVar15 = uVar15 + 1;
        uVar4 = *(uint *)(unaff_x23 + 0x18);
        if ((int)uVar4 <= (int)uVar15) goto code_r0x03024ad0;
      }
    }
    goto code_r0x03024ad0;
  }
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925e8(&uStack_128,lVar14,0,uVar5,0);
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925f4(&uStack_138,lVar14,(int)uVar5 + 1,0);
  uVar7 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_128,0);
  if (((uVar7 & 1) == 0) && (uVar7 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_138,0), (uVar7 & 1) == 0)) {
    lVar13 = *(long *)(lVar6 + 0x18);
    unaff_x22 = uVar5;
    if (lVar13 != 0) {
      unaff_x22 = 0;
      do {
        if ((int)*(uint *)(lVar13 + 0x18) <= (int)(uint)unaff_x22) goto code_r0x03024ad0;
        if (*(uint *)(lVar13 + 0x18) <= (uint)unaff_x22) goto code_r0x03024b5c;
        unaff_x23 = *(ulong *)(lVar13 + unaff_x22 * 8 + 0x20);
        if (unaff_x23 == 0) break;
        auVar19 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x23 + 0x10),0);
        iVar3 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar19._0_8_,auVar19._8_8_,uStack_128,uStack_120,3,0);
        if (iVar3 == 0) goto code_r0x03024a74;
        lVar13 = *(long *)(lVar6 + 0x18);
        unaff_x22 = unaff_x22 + 1;
      } while (lVar13 != 0);
    }
    goto code_r0x03024a70;
  }
code_r0x03024bb4:
  uVar9 = func_0x00f78a24(0x3d6f8e0);
  uVar9 = /*System.String$$Concat*/ func_0x029bdb88(uVar9,lVar14,0);
  func_0x00f78a24(0x3d1fce8);
  uVar10 = func_0x00f78aec();
  uVar11 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar10,uVar9,uVar11,0);
  param_3 = unaff_x21;
code_r0x03024c04:
  uVar11 = func_0x00f78a24(0x3d58100);
  lVar6 = func_0x00f78ac0(uVar10,uVar11);
  puStack_148 = &UnityEngine_InputSystem_InputActionAsset__ToJson;
  uStack_170 = uVar5;
  uStack_168 = param_3;
  uStack_160 = uVar10;
  uStack_158 = uVar9;
  puStack_150 = &stack0xffffffffffffff50;
  if ((bRam0000000003ebcde1 & 1) == 0) {
    func_0x00f78a20(0x3d279f0);
    bRam0000000003ebcde1 = 1;
  }
  uVar9 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar6,0);
  uVar10 = /*UnityEngine.InputSystem.InputActionMap.WriteFileJson$$FromMaps*/ func_0x030aa3a0(*(undefined8 *)(lVar6 + 0x18),0);
  uStack_178 = /*UnityEngine.InputSystem.InputControlScheme.SchemeJson$$ToJson*/ func_0x030ba234(*(undefined8 *)(lVar6 + 0x20),0);
  uStack_188 = uVar9;
  uStack_180 = uVar10;
  uVar9 = func_0x00f78ae0(/*UnityEngine.InputSystem.InputActionAsset.WriteFileJson_TypeInfo*/ uRam0000000003d279f0,&uStack_188);
  uVar5 = /*UnityEngine.JsonUtility$$ToJson*/ func_0x03295ac8(uVar9,1,0);
  return uVar5;
code_r0x03024b5c:
  uVar9 = func_0x00f78b24();
  func_0x00f78ac0(uVar9,0);
code_r0x03024b68:
  func_0x00f78a24(0x3d1fcf0);
  lVar14 = func_0x00f78aec();
  uVar9 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(lVar14,uVar9,0);
  uVar9 = func_0x00f78a24(0x3d58100);
  func_0x00f78ac0(lVar14,uVar9);
  uVar5 = unaff_x22;
code_r0x03024bb0:
  ___stack_chk_fail();
  goto code_r0x03024bb4;
}



// ============================================================
// RVA: 0x14697d4 | Atlas.Input.AtlasInput.get_controlSchemes
// ============================================================

undefined1  [16]
Atlas_Input_AtlasInput__get_controlSchemes(long param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  long extraout_x1_03;
  ulong extraout_x1_04;
  ulong uVar12;
  undefined8 extraout_x1_05;
  long extraout_x1_06;
  long extraout_x1_07;
  undefined8 *extraout_x8;
  long lVar13;
  long lVar14;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long lVar15;
  long unaff_x23;
  uint uVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  undefined *puStack_118;
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
  long lStack_b8;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    if ((bRam0000000003ebcdde & 1) == 0) {
      func_0x00f78a20(0x3d3fb38,0);
      bRam0000000003ebcdde = 1;
    }
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<InputControlScheme>$$.ctor*/ func_0x02747d70(&stack0xffffffffffffffc0,*(undefined8 *)(lVar5 + 0x20),uRam0000000003d3fb38);
    return ZEXT816(0);
  }
  auVar20 = func_0x00f78af4();
  uVar10 = auVar20._8_8_;
  lVar5 = *(long *)(auVar20._0_8_ + 0x10);
  if (lVar5 != 0) {
    uVar12 = uVar10;
    if ((bRam0000000003ebcdeb & 1) == 0) {
      func_0x00f78a20(0x3d23990,uVar10,0);
      bRam0000000003ebcdeb = 1;
      uVar12 = extraout_x1_04;
    }
    if (((uVar10 == 0) || (lVar14 = *(long *)(uVar10 + 200), lVar14 == 0)) ||
       (*(ulong *)(lVar14 + 0x50) == uVar10)) {
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar12;
      return auVar20 << 0x40;
    }
    lVar14 = *(long *)(lVar14 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003ec027b & 1) == 0) {
      func_0x00f78a20(0x3d23990,lVar5,0);
      bRam0000000003ec027b = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = lVar5;
    if ((bRam0000000003ec021b & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003ec021b = 1;
      lVar6 = extraout_x1_06;
    }
    if (lVar14 == 0 && lVar5 == 0) {
      uVar10 = 1;
    }
    else {
      if (lVar5 == 0) {
        lVar5 = lVar14;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
      }
      else {
        if (lVar14 != 0) {
          uVar10 = (ulong)(lVar14 == lVar5);
          goto code_r0x032487f0;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
      }
      uVar4 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar5);
      uVar10 = (ulong)(uVar4 ^ 1);
      lVar6 = extraout_x1_07;
    }
code_r0x032487f0:
    auVar25._8_8_ = lVar6;
    auVar25._0_8_ = uVar10;
    return auVar25;
  }
  lVar5 = func_0x00f78af4();
  puVar18 = &stack0xffffffffffffffd0;
  if (*(ulong *)(lVar5 + 0x10) != 0) {
    auVar24._8_8_ = 0;
    auVar24._0_8_ = *(ulong *)(lVar5 + 0x10);
    puVar19 = &Atlas_Input_AtlasInput__GetEnumerator;
    puVar2 = &stack0xffffffffffffffe0;
    puVar18 = &stack0xffffffffffffffe0;
UnityEngine_InputSystem_InputActionAsset__GetEnumerator:
    while( true ) {
      uVar7 = auVar24._0_8_;
      *(long *)(puVar2 + -0x30) = unaff_x22;
      *(ulong *)(puVar2 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
      *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = puVar18;
      *(undefined **)(puVar2 + -8) = puVar19;
      puVar18 = puVar2 + -0x10;
      unaff_x21 = 0x3d279e0;
      if ((bRam0000000003ebcdec & 1) == 0) {
        func_0x00f78a20(0x3d279e0,auVar24._8_8_);
        bRam0000000003ebcdec = 1;
      }
      auVar23._0_8_ = func_0x00f78aec(/*UnityEngine.InputSystem.InputActionAsset.<GetEnumerator>d__31_TypeInfo*/ uRam0000000003d279e0);
      /*UnityEngine.InputSystem.InputActionAsset.<GetEnumerator>d__31$$.ctor*/ func_0x030a8708(auVar23._0_8_,0,0);
      if (auVar23._0_8_ != 0) break;
      puVar19 = &
                UnityEngine_InputSystem_InputActionAsset__System_Collections_IEnumerable_GetEnumerator
      ;
      auVar24 = func_0x00f78af4();
      unaff_x20 = 0;
      puVar2 = puVar2 + -0x30;
      unaff_x19 = uVar7;
    }
    *(undefined8 *)(auVar23._0_8_ + 0x20) = uVar7;
    auVar23._8_8_ = extraout_x1_05;
    return auVar23;
  }
  lVar5 = func_0x00f78af4();
  if (*(ulong *)(lVar5 + 0x10) != 0) {
    auVar24._8_8_ = 0;
    auVar24._0_8_ = *(ulong *)(lVar5 + 0x10);
    puVar2 = &stack0xffffffffffffffd0;
    puVar19 = &Atlas_Input_AtlasInput__System_Collections_IEnumerable_GetEnumerator;
    goto UnityEngine_InputSystem_InputActionAsset__GetEnumerator;
  }
  lVar5 = func_0x00f78af4();
  lVar5 = *(long *)(lVar5 + 0x10);
  if (lVar5 != 0) {
    if ((bRam0000000003ebcde9 & 1) == 0) {
      func_0x00f78a20(0x3d32738,0);
      func_0x00f78a20(0x3d32740);
      func_0x00f78a20(0x3d32748);
      func_0x00f78a20(0x3d3fac0);
      bRam0000000003ebcde9 = 1;
    }
    /*UnityEngine.InputSystem.InputActionAsset$$get_actionMaps*/ func_0x03024518(lVar5);
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&stack0xffffffffffffff68,&stack0xffffffffffffff58,uRam0000000003d3fac0);
    while( true ) {
      uVar10 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&stack0xffffffffffffff68,uRam0000000003d32740);
      if ((uVar10 & 1) == 0) {
        auVar20 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&stack0xffffffffffffff68,uRam0000000003d32738);
        return auVar20;
      }
      lVar5 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&stack0xffffffffffffff68,uRam0000000003d32748);
      if (lVar5 == 0) break;
      /*UnityEngine.InputSystem.InputActionMap$$Enable*/ func_0x03025c1c();
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3025be0);
    (*pcVar1)();
  }
  lVar5 = func_0x00f78af4();
  lVar5 = *(long *)(lVar5 + 0x10);
  if (lVar5 != 0) {
    if ((bRam0000000003ebcdea & 1) == 0) {
      func_0x00f78a20(0x3d32738,0);
      func_0x00f78a20(0x3d32740);
      func_0x00f78a20(0x3d32748);
      func_0x00f78a20(0x3d3fac0);
      bRam0000000003ebcdea = 1;
    }
    lStack_b8 = /*UnityEngine.InputSystem.InputActionAsset$$get_actionMaps*/ func_0x03024518(lVar5);
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&stack0xffffffffffffff58,&lStack_b8,uRam0000000003d3fac0);
    while( true ) {
      uVar10 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&stack0xffffffffffffff58,uRam0000000003d32740);
      if ((uVar10 & 1) == 0) {
        auVar20 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&stack0xffffffffffffff58,uRam0000000003d32738);
        return auVar20;
      }
      lVar5 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&stack0xffffffffffffff58,uRam0000000003d32748);
      if (lVar5 == 0) break;
      /*UnityEngine.InputSystem.InputActionMap$$Disable*/ func_0x03025da8();
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3025d6c);
    (*pcVar1)();
  }
  lVar5 = func_0x00f78af4();
  lVar5 = *(long *)(lVar5 + 0x10);
  if (lVar5 != 0) {
    if ((bRam0000000003ebcddf & 1) == 0) {
      func_0x00f78a20(0x3d279e8,0);
      bRam0000000003ebcddf = 1;
    }
    auVar21._0_8_ = func_0x00f78aec(/*UnityEngine.InputSystem.InputActionAsset.<get_bindings>d__8_TypeInfo*/ uRam0000000003d279e8);
    /*UnityEngine.InputSystem.InputActionAsset.<get_bindings>d__8$$.ctor*/ func_0x030a88b0(auVar21._0_8_,0xfffffffe,0);
    if (auVar21._0_8_ == 0) {
      auVar20 = func_0x00f78af4();
      lVar5 = auVar20._0_8_;
      uVar7 = *(undefined8 *)(lVar5 + 0x50);
      uVar9 = *(undefined8 *)(lVar5 + 0x68);
      uVar8 = *(undefined8 *)(lVar5 + 0x60);
      extraout_x8[5] = *(undefined8 *)(lVar5 + 0x58);
      extraout_x8[4] = uVar7;
      extraout_x8[7] = uVar9;
      extraout_x8[6] = uVar8;
      uVar7 = *(undefined8 *)(lVar5 + 0x70);
      uVar9 = *(undefined8 *)(lVar5 + 0x88);
      uVar8 = *(undefined8 *)(lVar5 + 0x80);
      extraout_x8[9] = *(undefined8 *)(lVar5 + 0x78);
      extraout_x8[8] = uVar7;
      extraout_x8[0xb] = uVar9;
      extraout_x8[10] = uVar8;
      uVar7 = *(undefined8 *)(lVar5 + 0x30);
      uVar9 = *(undefined8 *)(lVar5 + 0x48);
      uVar8 = *(undefined8 *)(lVar5 + 0x40);
      extraout_x8[1] = *(undefined8 *)(lVar5 + 0x38);
      *extraout_x8 = uVar7;
      extraout_x8[3] = uVar9;
      extraout_x8[2] = uVar8;
      return auVar20;
    }
    *(long *)(auVar21._0_8_ + 0x78) = lVar5;
    auVar21._8_8_ = extraout_x1;
    return auVar21;
  }
  auVar20 = func_0x00f78af4();
  lVar14 = auVar20._8_8_;
  lVar5 = *(long *)(auVar20._0_8_ + 0x10);
  if (lVar5 == 0) {
    auVar20 = func_0x00f78af4();
    puVar11 = auVar20._8_8_;
    lVar5 = *(long *)(auVar20._0_8_ + 0x10);
    if (lVar5 == 0) {
      auVar20 = func_0x00f78af4();
      return auVar20;
    }
    uStack_c8 = puVar11[5];
    uStack_d0 = puVar11[4];
    lStack_b8 = puVar11[7];
    uStack_c0 = puVar11[6];
    uStack_e8 = puVar11[1];
    uStack_f0 = *puVar11;
    uStack_d8 = puVar11[3];
    uStack_e0 = puVar11[2];
    auVar20 = /*UnityEngine.InputSystem.InputActionAsset$$FindBinding*/ func_0x03024f80(lVar5,&uStack_f0);
    return auVar20;
  }
  lStack_b8 = *(long *)PTR_03a5d648;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  if (lVar14 == 0) goto code_r0x03024b68;
  lVar6 = lVar14;
  unaff_x21 = param_3;
  if (*(long *)(lVar5 + 0x18) == 0) {
code_r0x03024ad0:
    lVar15 = unaff_x22;
    if ((int)param_3 != 0) {
code_r0x03024b18:
      uVar7 = func_0x00f78a24(0x3d70368);
      uVar7 = /*System.String$$Format*/ func_0x029bcac4(uVar7,lVar14,lVar5,0);
      func_0x00f78a24(0x3d1fce8);
      uVar8 = func_0x00f78aec();
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar7,0);
      goto code_r0x03024c04;
    }
    lVar13 = 0;
code_r0x03024ad8:
    lVar15 = lVar13;
    if (*(long *)PTR_03a5d648 == lStack_b8) {
      auVar22._8_8_ = lVar6;
      auVar22._0_8_ = lVar13;
      return auVar22;
    }
    goto code_r0x03024bb0;
  }
  auVar20 = /*System.String$$IndexOf*/ func_0x029cdad0(lVar14,0x2f,0,0);
  lVar6 = auVar20._8_8_;
  lVar15 = auVar20._0_8_;
  if (auVar20._0_4_ == -1) {
    lVar13 = *(long *)(lVar5 + 0x18);
    if (lVar13 != 0) {
      lVar17 = 0;
      lVar15 = 0;
      do {
        if ((int)*(uint *)(lVar13 + 0x18) <= (int)(uint)lVar17) {
          lVar13 = lVar15;
          if ((lVar15 != 0) || ((param_3 & 1) == 0)) goto code_r0x03024ad8;
          goto code_r0x03024b18;
        }
        if (*(uint *)(lVar13 + 0x18) <= (uint)lVar17) goto code_r0x03024b5c;
        lVar6 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
        unaff_x23 = lVar15;
        if (lVar6 == 0) break;
        auVar20 = /*UnityEngine.InputSystem.InputActionMap$$FindAction*/ func_0x03024e58(lVar6,lVar14,0);
        lVar6 = auVar20._8_8_;
        lVar13 = auVar20._0_8_;
        if (lVar13 != 0) {
          /*UnityEngine.InputSystem.InputAction$$get_currentState*/ func_0x03022910(&uStack_e8);
          lVar6 = extraout_x1_01;
          if ((char)uStack_e8 != '\0') goto code_r0x03024ad8;
          auVar20 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar13 + 0x28),lVar14,0);
          lVar6 = auVar20._8_8_;
          if ((auVar20._0_8_ & 1) != 0) goto code_r0x03024ad8;
          unaff_x22 = lVar13;
          unaff_x23 = lVar13;
          if (lVar15 != 0) {
            unaff_x23 = lVar15;
          }
        }
        lVar13 = *(long *)(lVar5 + 0x18);
        lVar17 = lVar17 + 1;
        lVar15 = unaff_x23;
      } while (lVar13 != 0);
    }
code_r0x03024a70:
    while( true ) {
      do {
        func_0x00f78af4();
        lVar6 = extraout_x1_02;
code_r0x03024a74:
        unaff_x23 = *(long *)(unaff_x23 + 0x28);
      } while (unaff_x23 == 0);
      uVar4 = *(uint *)(unaff_x23 + 0x18);
      if ((int)uVar4 < 1) break;
      uVar16 = 0;
      while( true ) {
        if (uVar4 <= uVar16) goto code_r0x03024b5c;
        unaff_x22 = *(long *)(unaff_x23 + (long)(int)uVar16 * 8 + 0x20);
        if (unaff_x22 == 0) break;
        auVar20 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x22 + 0x10),0);
        iVar3 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar20._0_8_,auVar20._8_8_,uStack_108,uStack_100,3,0);
        lVar6 = extraout_x1_03;
        lVar13 = unaff_x22;
        if (iVar3 == 0) goto code_r0x03024ad8;
        uVar16 = uVar16 + 1;
        uVar4 = *(uint *)(unaff_x23 + 0x18);
        if ((int)uVar4 <= (int)uVar16) goto code_r0x03024ad0;
      }
    }
    goto code_r0x03024ad0;
  }
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925e8(&uStack_f8,lVar14,0,lVar15,0);
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925f4(&uStack_108,lVar14,auVar20._0_4_ + 1,0);
  uVar10 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_f8,0);
  if ((uVar10 & 1) == 0) {
    auVar20 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_108,0);
    lVar6 = auVar20._8_8_;
    if ((auVar20._0_8_ & 1) == 0) {
      lVar13 = *(long *)(lVar5 + 0x18);
      unaff_x22 = lVar15;
      if (lVar13 != 0) {
        unaff_x22 = 0;
        do {
          if ((int)*(uint *)(lVar13 + 0x18) <= (int)(uint)unaff_x22) goto code_r0x03024ad0;
          if (*(uint *)(lVar13 + 0x18) <= (uint)unaff_x22) goto code_r0x03024b5c;
          unaff_x23 = *(long *)(lVar13 + unaff_x22 * 8 + 0x20);
          if (unaff_x23 == 0) break;
          auVar20 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x23 + 0x10),0);
          iVar3 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar20._0_8_,auVar20._8_8_,uStack_f8,uStack_f0,3,0);
          lVar6 = extraout_x1_00;
          if (iVar3 == 0) goto code_r0x03024a74;
          lVar13 = *(long *)(lVar5 + 0x18);
          unaff_x22 = unaff_x22 + 1;
        } while (lVar13 != 0);
      }
      goto code_r0x03024a70;
    }
  }
code_r0x03024bb4:
  uVar7 = func_0x00f78a24(0x3d6f8e0);
  uVar7 = /*System.String$$Concat*/ func_0x029bdb88(uVar7,lVar14,0);
  func_0x00f78a24(0x3d1fce8);
  uVar8 = func_0x00f78aec();
  uVar9 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar8,uVar7,uVar9,0);
  param_3 = unaff_x21;
code_r0x03024c04:
  uVar9 = func_0x00f78a24(0x3d58100);
  lVar5 = func_0x00f78ac0(uVar8,uVar9);
  puStack_118 = &UnityEngine_InputSystem_InputActionAsset__ToJson;
  lStack_140 = lVar15;
  uStack_138 = param_3;
  uStack_130 = uVar8;
  uStack_128 = uVar7;
  puStack_120 = &stack0xffffffffffffff80;
  if ((bRam0000000003ebcde1 & 1) == 0) {
    func_0x00f78a20(0x3d279f0);
    bRam0000000003ebcde1 = 1;
  }
  uVar7 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar5,0);
  uVar8 = /*UnityEngine.InputSystem.InputActionMap.WriteFileJson$$FromMaps*/ func_0x030aa3a0(*(undefined8 *)(lVar5 + 0x18),0);
  uStack_148 = /*UnityEngine.InputSystem.InputControlScheme.SchemeJson$$ToJson*/ func_0x030ba234(*(undefined8 *)(lVar5 + 0x20),0);
  uStack_158 = uVar7;
  uStack_150 = uVar8;
  uVar7 = func_0x00f78ae0(/*UnityEngine.InputSystem.InputActionAsset.WriteFileJson_TypeInfo*/ uRam0000000003d279f0,&uStack_158);
  auVar20 = /*UnityEngine.JsonUtility$$ToJson*/ func_0x03295ac8(uVar7,1,0);
  return auVar20;
code_r0x03024b5c:
  uVar7 = func_0x00f78b24();
  func_0x00f78ac0(uVar7,0);
code_r0x03024b68:
  func_0x00f78a24(0x3d1fcf0);
  lVar14 = func_0x00f78aec();
  uVar7 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(lVar14,uVar7,0);
  uVar7 = func_0x00f78a24(0x3d58100);
  func_0x00f78ac0(lVar14,uVar7);
  lVar15 = unaff_x22;
code_r0x03024bb0:
  ___stack_chk_fail();
  goto code_r0x03024bb4;
}



// ============================================================
// RVA: 0x14697f4 | Atlas.Input.AtlasInput.Contains
// ============================================================

ulong Atlas_Input_AtlasInput__Contains(long param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *extraout_x8;
  long lVar13;
  long lVar14;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  uint uVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  undefined *puStack_108;
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
  long lStack_a8;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    if ((bRam0000000003ebcdeb & 1) == 0) {
      func_0x00f78a20(0x3d23990,param_2,0);
      bRam0000000003ebcdeb = 1;
    }
    if (((param_2 != 0) && (lVar14 = *(long *)(param_2 + 200), lVar14 != 0)) &&
       (*(long *)(lVar14 + 0x50) != param_2)) {
      lVar14 = *(long *)(lVar14 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003ec027b & 1) == 0) {
        func_0x00f78a20(0x3d23990,lVar5,0);
        bRam0000000003ec027b = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003ec021b & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003ec021b = 1;
      }
      if (lVar14 == 0 && lVar5 == 0) {
        uVar11 = 1;
      }
      else {
        if (lVar5 == 0) {
          lVar5 = lVar14;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
        }
        else {
          if (lVar14 != 0) {
            return (ulong)(lVar14 == lVar5);
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
        }
        uVar4 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar5);
        uVar11 = (ulong)(uVar4 ^ 1);
      }
      return uVar11;
    }
    return 0;
  }
  lVar5 = func_0x00f78af4();
  puVar17 = &stack0xffffffffffffffe0;
  if (*(ulong *)(lVar5 + 0x10) != 0) {
    auVar19._8_8_ = 0;
    auVar19._0_8_ = *(ulong *)(lVar5 + 0x10);
    puVar18 = &Atlas_Input_AtlasInput__GetEnumerator;
    puVar2 = &stack0xfffffffffffffff0;
    puVar17 = &stack0xfffffffffffffff0;
UnityEngine_InputSystem_InputActionAsset__GetEnumerator:
    while( true ) {
      uVar8 = auVar19._0_8_;
      *(ulong *)(puVar2 + -0x30) = unaff_x22;
      *(ulong *)(puVar2 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
      *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = puVar17;
      *(undefined **)(puVar2 + -8) = puVar18;
      puVar17 = puVar2 + -0x10;
      unaff_x21 = 0x3d279e0;
      if ((bRam0000000003ebcdec & 1) == 0) {
        func_0x00f78a20(0x3d279e0,auVar19._8_8_);
        bRam0000000003ebcdec = 1;
      }
      uVar11 = func_0x00f78aec(/*UnityEngine.InputSystem.InputActionAsset.<GetEnumerator>d__31_TypeInfo*/ uRam0000000003d279e0);
      /*UnityEngine.InputSystem.InputActionAsset.<GetEnumerator>d__31$$.ctor*/ func_0x030a8708(uVar11,0,0);
      if (uVar11 != 0) break;
      puVar18 = &
                UnityEngine_InputSystem_InputActionAsset__System_Collections_IEnumerable_GetEnumerator
      ;
      auVar19 = func_0x00f78af4();
      unaff_x20 = 0;
      puVar2 = puVar2 + -0x30;
      unaff_x19 = uVar8;
    }
    *(undefined8 *)(uVar11 + 0x20) = uVar8;
    return uVar11;
  }
  lVar5 = func_0x00f78af4();
  if (*(ulong *)(lVar5 + 0x10) != 0) {
    auVar19._8_8_ = 0;
    auVar19._0_8_ = *(ulong *)(lVar5 + 0x10);
    puVar2 = &stack0xffffffffffffffe0;
    puVar18 = &Atlas_Input_AtlasInput__System_Collections_IEnumerable_GetEnumerator;
    goto UnityEngine_InputSystem_InputActionAsset__GetEnumerator;
  }
  lVar5 = func_0x00f78af4();
  lVar5 = *(long *)(lVar5 + 0x10);
  if (lVar5 != 0) {
    if ((bRam0000000003ebcde9 & 1) == 0) {
      func_0x00f78a20(0x3d32738,0);
      func_0x00f78a20(0x3d32740);
      func_0x00f78a20(0x3d32748);
      func_0x00f78a20(0x3d3fac0);
      bRam0000000003ebcde9 = 1;
    }
    /*UnityEngine.InputSystem.InputActionAsset$$get_actionMaps*/ func_0x03024518(lVar5);
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&stack0xffffffffffffff78,&stack0xffffffffffffff68,uRam0000000003d3fac0);
    while( true ) {
      uVar11 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&stack0xffffffffffffff78,uRam0000000003d32740);
      if ((uVar11 & 1) == 0) {
        uVar11 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&stack0xffffffffffffff78,uRam0000000003d32738);
        return uVar11;
      }
      lVar5 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&stack0xffffffffffffff78,uRam0000000003d32748);
      if (lVar5 == 0) break;
      /*UnityEngine.InputSystem.InputActionMap$$Enable*/ func_0x03025c1c();
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3025be0);
    (*pcVar1)();
  }
  lVar5 = func_0x00f78af4();
  lVar5 = *(long *)(lVar5 + 0x10);
  if (lVar5 != 0) {
    if ((bRam0000000003ebcdea & 1) == 0) {
      func_0x00f78a20(0x3d32738,0);
      func_0x00f78a20(0x3d32740);
      func_0x00f78a20(0x3d32748);
      func_0x00f78a20(0x3d3fac0);
      bRam0000000003ebcdea = 1;
    }
    lStack_a8 = /*UnityEngine.InputSystem.InputActionAsset$$get_actionMaps*/ func_0x03024518(lVar5);
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&stack0xffffffffffffff68,&lStack_a8,uRam0000000003d3fac0);
    while( true ) {
      uVar11 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&stack0xffffffffffffff68,uRam0000000003d32740);
      if ((uVar11 & 1) == 0) {
        uVar11 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&stack0xffffffffffffff68,uRam0000000003d32738);
        return uVar11;
      }
      lVar5 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&stack0xffffffffffffff68,uRam0000000003d32748);
      if (lVar5 == 0) break;
      /*UnityEngine.InputSystem.InputActionMap$$Disable*/ func_0x03025da8();
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3025d6c);
    (*pcVar1)();
  }
  lVar5 = func_0x00f78af4();
  lVar5 = *(long *)(lVar5 + 0x10);
  if (lVar5 != 0) {
    if ((bRam0000000003ebcddf & 1) == 0) {
      func_0x00f78a20(0x3d279e8,0);
      bRam0000000003ebcddf = 1;
    }
    uVar11 = func_0x00f78aec(/*UnityEngine.InputSystem.InputActionAsset.<get_bindings>d__8_TypeInfo*/ uRam0000000003d279e8);
    /*UnityEngine.InputSystem.InputActionAsset.<get_bindings>d__8$$.ctor*/ func_0x030a88b0(uVar11,0xfffffffe,0);
    if (uVar11 != 0) {
      *(long *)(uVar11 + 0x78) = lVar5;
      return uVar11;
    }
    uVar11 = func_0x00f78af4();
    uVar8 = *(undefined8 *)(uVar11 + 0x50);
    uVar10 = *(undefined8 *)(uVar11 + 0x68);
    uVar9 = *(undefined8 *)(uVar11 + 0x60);
    extraout_x8[5] = *(undefined8 *)(uVar11 + 0x58);
    extraout_x8[4] = uVar8;
    extraout_x8[7] = uVar10;
    extraout_x8[6] = uVar9;
    uVar8 = *(undefined8 *)(uVar11 + 0x70);
    uVar10 = *(undefined8 *)(uVar11 + 0x88);
    uVar9 = *(undefined8 *)(uVar11 + 0x80);
    extraout_x8[9] = *(undefined8 *)(uVar11 + 0x78);
    extraout_x8[8] = uVar8;
    extraout_x8[0xb] = uVar10;
    extraout_x8[10] = uVar9;
    uVar8 = *(undefined8 *)(uVar11 + 0x30);
    uVar10 = *(undefined8 *)(uVar11 + 0x48);
    uVar9 = *(undefined8 *)(uVar11 + 0x40);
    extraout_x8[1] = *(undefined8 *)(uVar11 + 0x38);
    *extraout_x8 = uVar8;
    extraout_x8[3] = uVar10;
    extraout_x8[2] = uVar9;
    return uVar11;
  }
  auVar19 = func_0x00f78af4();
  lVar14 = auVar19._8_8_;
  lVar5 = *(long *)(auVar19._0_8_ + 0x10);
  if (lVar5 == 0) {
    auVar19 = func_0x00f78af4();
    puVar12 = auVar19._8_8_;
    lVar5 = *(long *)(auVar19._0_8_ + 0x10);
    if (lVar5 != 0) {
      uStack_b8 = puVar12[5];
      uStack_c0 = puVar12[4];
      lStack_a8 = puVar12[7];
      uStack_b0 = puVar12[6];
      uStack_d8 = puVar12[1];
      uStack_e0 = *puVar12;
      uStack_c8 = puVar12[3];
      uStack_d0 = puVar12[2];
      uVar11 = /*UnityEngine.InputSystem.InputActionAsset$$FindBinding*/ func_0x03024f80(lVar5,&uStack_e0);
      return uVar11;
    }
    uVar11 = func_0x00f78af4();
    return uVar11;
  }
  lStack_a8 = *(long *)PTR_03a5d648;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  if (lVar14 == 0) goto code_r0x03024b68;
  unaff_x21 = param_3;
  if (*(long *)(lVar5 + 0x18) == 0) {
code_r0x03024ad0:
    uVar11 = unaff_x22;
    if ((int)param_3 != 0) {
code_r0x03024b18:
      uVar8 = func_0x00f78a24(0x3d70368);
      uVar8 = /*System.String$$Format*/ func_0x029bcac4(uVar8,lVar14,lVar5,0);
      func_0x00f78a24(0x3d1fce8);
      uVar9 = func_0x00f78aec();
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar9,uVar8,0);
      goto code_r0x03024c04;
    }
    uVar6 = 0;
code_r0x03024ad8:
    uVar11 = uVar6;
    if (*(long *)PTR_03a5d648 == lStack_a8) {
      return uVar6;
    }
    goto code_r0x03024bb0;
  }
  uVar11 = /*System.String$$IndexOf*/ func_0x029cdad0(lVar14,0x2f,0,0);
  if ((int)uVar11 == -1) {
    lVar13 = *(long *)(lVar5 + 0x18);
    if (lVar13 != 0) {
      lVar16 = 0;
      uVar11 = 0;
      do {
        if ((int)*(uint *)(lVar13 + 0x18) <= (int)(uint)lVar16) {
          uVar6 = uVar11;
          if ((uVar11 != 0) || ((param_3 & 1) == 0)) goto code_r0x03024ad8;
          goto code_r0x03024b18;
        }
        if (*(uint *)(lVar13 + 0x18) <= (uint)lVar16) goto code_r0x03024b5c;
        lVar13 = *(long *)(lVar13 + lVar16 * 8 + 0x20);
        unaff_x23 = uVar11;
        if (lVar13 == 0) break;
        uVar6 = /*UnityEngine.InputSystem.InputActionMap$$FindAction*/ func_0x03024e58(lVar13,lVar14,0);
        if (uVar6 != 0) {
          /*UnityEngine.InputSystem.InputAction$$get_currentState*/ func_0x03022910(&uStack_d8);
          if (((char)uStack_d8 != '\0') ||
             (uVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(uVar6 + 0x28),lVar14,0), (uVar7 & 1) != 0))
          goto code_r0x03024ad8;
          unaff_x22 = uVar6;
          unaff_x23 = uVar6;
          if (uVar11 != 0) {
            unaff_x23 = uVar11;
          }
        }
        lVar13 = *(long *)(lVar5 + 0x18);
        lVar16 = lVar16 + 1;
        uVar11 = unaff_x23;
      } while (lVar13 != 0);
    }
code_r0x03024a70:
    while( true ) {
      do {
        func_0x00f78af4();
code_r0x03024a74:
        unaff_x23 = *(ulong *)(unaff_x23 + 0x28);
      } while (unaff_x23 == 0);
      uVar4 = *(uint *)(unaff_x23 + 0x18);
      if ((int)uVar4 < 1) break;
      uVar15 = 0;
      while( true ) {
        if (uVar4 <= uVar15) goto code_r0x03024b5c;
        unaff_x22 = *(ulong *)(unaff_x23 + (long)(int)uVar15 * 8 + 0x20);
        if (unaff_x22 == 0) break;
        auVar19 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x22 + 0x10),0);
        iVar3 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar19._0_8_,auVar19._8_8_,uStack_f8,uStack_f0,3,0);
        uVar6 = unaff_x22;
        if (iVar3 == 0) goto code_r0x03024ad8;
        uVar15 = uVar15 + 1;
        uVar4 = *(uint *)(unaff_x23 + 0x18);
        if ((int)uVar4 <= (int)uVar15) goto code_r0x03024ad0;
      }
    }
    goto code_r0x03024ad0;
  }
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925e8(&uStack_e8,lVar14,0,uVar11,0);
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925f4(&uStack_f8,lVar14,(int)uVar11 + 1,0);
  uVar6 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_e8,0);
  if (((uVar6 & 1) == 0) && (uVar6 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_f8,0), (uVar6 & 1) == 0)) {
    lVar13 = *(long *)(lVar5 + 0x18);
    unaff_x22 = uVar11;
    if (lVar13 != 0) {
      unaff_x22 = 0;
      do {
        if ((int)*(uint *)(lVar13 + 0x18) <= (int)(uint)unaff_x22) goto code_r0x03024ad0;
        if (*(uint *)(lVar13 + 0x18) <= (uint)unaff_x22) goto code_r0x03024b5c;
        unaff_x23 = *(ulong *)(lVar13 + unaff_x22 * 8 + 0x20);
        if (unaff_x23 == 0) break;
        auVar19 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x23 + 0x10),0);
        iVar3 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar19._0_8_,auVar19._8_8_,uStack_e8,uStack_e0,3,0);
        if (iVar3 == 0) goto code_r0x03024a74;
        lVar13 = *(long *)(lVar5 + 0x18);
        unaff_x22 = unaff_x22 + 1;
      } while (lVar13 != 0);
    }
    goto code_r0x03024a70;
  }
code_r0x03024bb4:
  uVar8 = func_0x00f78a24(0x3d6f8e0);
  uVar8 = /*System.String$$Concat*/ func_0x029bdb88(uVar8,lVar14,0);
  func_0x00f78a24(0x3d1fce8);
  uVar9 = func_0x00f78aec();
  uVar10 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar9,uVar8,uVar10,0);
  param_3 = unaff_x21;
code_r0x03024c04:
  uVar10 = func_0x00f78a24(0x3d58100);
  lVar5 = func_0x00f78ac0(uVar9,uVar10);
  puStack_108 = &UnityEngine_InputSystem_InputActionAsset__ToJson;
  uStack_130 = uVar11;
  uStack_128 = param_3;
  uStack_120 = uVar9;
  uStack_118 = uVar8;
  puStack_110 = &stack0xffffffffffffff90;
  if ((bRam0000000003ebcde1 & 1) == 0) {
    func_0x00f78a20(0x3d279f0);
    bRam0000000003ebcde1 = 1;
  }
  uVar8 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar5,0);
  uVar9 = /*UnityEngine.InputSystem.InputActionMap.WriteFileJson$$FromMaps*/ func_0x030aa3a0(*(undefined8 *)(lVar5 + 0x18),0);
  uStack_138 = /*UnityEngine.InputSystem.InputControlScheme.SchemeJson$$ToJson*/ func_0x030ba234(*(undefined8 *)(lVar5 + 0x20),0);
  uStack_148 = uVar8;
  uStack_140 = uVar9;
  uVar8 = func_0x00f78ae0(/*UnityEngine.InputSystem.InputActionAsset.WriteFileJson_TypeInfo*/ uRam0000000003d279f0,&uStack_148);
  uVar11 = /*UnityEngine.JsonUtility$$ToJson*/ func_0x03295ac8(uVar8,1,0);
  return uVar11;
code_r0x03024b5c:
  uVar8 = func_0x00f78b24();
  func_0x00f78ac0(uVar8,0);
code_r0x03024b68:
  func_0x00f78a24(0x3d1fcf0);
  lVar14 = func_0x00f78aec();
  uVar8 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(lVar14,uVar8,0);
  uVar8 = func_0x00f78a24(0x3d58100);
  func_0x00f78ac0(lVar14,uVar8);
  uVar11 = unaff_x22;
code_r0x03024bb0:
  ___stack_chk_fail();
  goto code_r0x03024bb4;
}



// ============================================================
// RVA: 0x1469814 | Atlas.Input.AtlasInput.GetEnumerator
// ============================================================

long Atlas_Input_AtlasInput__GetEnumerator(long param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *extraout_x8;
  long lVar13;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  uint uVar14;
  long lVar15;
  undefined1 *unaff_x29;
  undefined1 *puVar16;
  undefined *unaff_x30;
  undefined1 auVar17 [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
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
  long lStack_98;
  
  puVar16 = &stack0xfffffffffffffff0;
  if (*(ulong *)(param_1 + 0x10) != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = *(ulong *)(param_1 + 0x10);
    puVar2 = (undefined1 *)register0x00000008;
    puVar16 = unaff_x29;
UnityEngine_InputSystem_InputActionAsset__GetEnumerator:
    while( true ) {
      uVar6 = auVar17._0_8_;
      *(long *)(puVar2 + -0x30) = unaff_x22;
      *(ulong *)(puVar2 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
      *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = puVar16;
      *(undefined **)(puVar2 + -8) = unaff_x30;
      puVar16 = puVar2 + -0x10;
      unaff_x21 = 0x3d279e0;
      if ((bRam0000000003ebcdec & 1) == 0) {
        func_0x00f78a20(0x3d279e0,auVar17._8_8_);
        bRam0000000003ebcdec = 1;
      }
      lVar10 = func_0x00f78aec(/*UnityEngine.InputSystem.InputActionAsset.<GetEnumerator>d__31_TypeInfo*/ uRam0000000003d279e0);
      /*UnityEngine.InputSystem.InputActionAsset.<GetEnumerator>d__31$$.ctor*/ func_0x030a8708(lVar10,0,0);
      if (lVar10 != 0) break;
      unaff_x30 = &
                  UnityEngine_InputSystem_InputActionAsset__System_Collections_IEnumerable_GetEnumerator
      ;
      auVar17 = func_0x00f78af4();
      unaff_x20 = 0;
      puVar2 = puVar2 + -0x30;
      unaff_x19 = uVar6;
    }
    *(undefined8 *)(lVar10 + 0x20) = uVar6;
    return lVar10;
  }
  lVar10 = func_0x00f78af4();
  if (*(ulong *)(lVar10 + 0x10) != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = *(ulong *)(lVar10 + 0x10);
    puVar2 = &stack0xfffffffffffffff0;
    unaff_x30 = &Atlas_Input_AtlasInput__System_Collections_IEnumerable_GetEnumerator;
    goto UnityEngine_InputSystem_InputActionAsset__GetEnumerator;
  }
  lVar10 = func_0x00f78af4();
  lVar10 = *(long *)(lVar10 + 0x10);
  if (lVar10 != 0) {
    if ((bRam0000000003ebcde9 & 1) == 0) {
      func_0x00f78a20(0x3d32738,0);
      func_0x00f78a20(0x3d32740);
      func_0x00f78a20(0x3d32748);
      func_0x00f78a20(0x3d3fac0);
      bRam0000000003ebcde9 = 1;
    }
    /*UnityEngine.InputSystem.InputActionAsset$$get_actionMaps*/ func_0x03024518(lVar10);
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&stack0xffffffffffffff88,&stack0xffffffffffffff78,uRam0000000003d3fac0);
    while( true ) {
      uVar9 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&stack0xffffffffffffff88,uRam0000000003d32740);
      if ((uVar9 & 1) == 0) {
        lVar10 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&stack0xffffffffffffff88,uRam0000000003d32738);
        return lVar10;
      }
      lVar10 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&stack0xffffffffffffff88,uRam0000000003d32748);
      if (lVar10 == 0) break;
      /*UnityEngine.InputSystem.InputActionMap$$Enable*/ func_0x03025c1c();
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3025be0);
    (*pcVar1)();
  }
  lVar10 = func_0x00f78af4();
  lVar10 = *(long *)(lVar10 + 0x10);
  if (lVar10 != 0) {
    if ((bRam0000000003ebcdea & 1) == 0) {
      func_0x00f78a20(0x3d32738,0);
      func_0x00f78a20(0x3d32740);
      func_0x00f78a20(0x3d32748);
      func_0x00f78a20(0x3d3fac0);
      bRam0000000003ebcdea = 1;
    }
    lStack_98 = /*UnityEngine.InputSystem.InputActionAsset$$get_actionMaps*/ func_0x03024518(lVar10);
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&stack0xffffffffffffff78,&lStack_98,uRam0000000003d3fac0);
    while( true ) {
      uVar9 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&stack0xffffffffffffff78,uRam0000000003d32740);
      if ((uVar9 & 1) == 0) {
        lVar10 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&stack0xffffffffffffff78,uRam0000000003d32738);
        return lVar10;
      }
      lVar10 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&stack0xffffffffffffff78,uRam0000000003d32748);
      if (lVar10 == 0) break;
      /*UnityEngine.InputSystem.InputActionMap$$Disable*/ func_0x03025da8();
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3025d6c);
    (*pcVar1)();
  }
  lVar10 = func_0x00f78af4();
  lVar10 = *(long *)(lVar10 + 0x10);
  if (lVar10 != 0) {
    if ((bRam0000000003ebcddf & 1) == 0) {
      func_0x00f78a20(0x3d279e8,0);
      bRam0000000003ebcddf = 1;
    }
    lVar4 = func_0x00f78aec(/*UnityEngine.InputSystem.InputActionAsset.<get_bindings>d__8_TypeInfo*/ uRam0000000003d279e8);
    /*UnityEngine.InputSystem.InputActionAsset.<get_bindings>d__8$$.ctor*/ func_0x030a88b0(lVar4,0xfffffffe,0);
    if (lVar4 == 0) {
      lVar10 = func_0x00f78af4();
      uVar6 = *(undefined8 *)(lVar10 + 0x50);
      uVar8 = *(undefined8 *)(lVar10 + 0x68);
      uVar7 = *(undefined8 *)(lVar10 + 0x60);
      extraout_x8[5] = *(undefined8 *)(lVar10 + 0x58);
      extraout_x8[4] = uVar6;
      extraout_x8[7] = uVar8;
      extraout_x8[6] = uVar7;
      uVar6 = *(undefined8 *)(lVar10 + 0x70);
      uVar8 = *(undefined8 *)(lVar10 + 0x88);
      uVar7 = *(undefined8 *)(lVar10 + 0x80);
      extraout_x8[9] = *(undefined8 *)(lVar10 + 0x78);
      extraout_x8[8] = uVar6;
      extraout_x8[0xb] = uVar8;
      extraout_x8[10] = uVar7;
      uVar6 = *(undefined8 *)(lVar10 + 0x30);
      uVar8 = *(undefined8 *)(lVar10 + 0x48);
      uVar7 = *(undefined8 *)(lVar10 + 0x40);
      extraout_x8[1] = *(undefined8 *)(lVar10 + 0x38);
      *extraout_x8 = uVar6;
      extraout_x8[3] = uVar8;
      extraout_x8[2] = uVar7;
      return lVar10;
    }
    *(long *)(lVar4 + 0x78) = lVar10;
    return lVar4;
  }
  auVar17 = func_0x00f78af4();
  lVar4 = auVar17._8_8_;
  lVar10 = *(long *)(auVar17._0_8_ + 0x10);
  if (lVar10 == 0) {
    auVar17 = func_0x00f78af4();
    puVar11 = auVar17._8_8_;
    lVar10 = *(long *)(auVar17._0_8_ + 0x10);
    if (lVar10 == 0) {
      lVar10 = func_0x00f78af4();
      return lVar10;
    }
    uStack_a8 = puVar11[5];
    uStack_b0 = puVar11[4];
    lStack_98 = puVar11[7];
    uStack_a0 = puVar11[6];
    uStack_c8 = puVar11[1];
    uStack_d0 = *puVar11;
    uStack_b8 = puVar11[3];
    uStack_c0 = puVar11[2];
    lVar10 = /*UnityEngine.InputSystem.InputActionAsset$$FindBinding*/ func_0x03024f80(lVar10,&uStack_d0);
    return lVar10;
  }
  lStack_98 = *(long *)PTR_03a5d648;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  if (lVar4 == 0) goto code_r0x03024b68;
  unaff_x21 = param_3;
  if (*(long *)(lVar10 + 0x18) == 0) {
code_r0x03024ad0:
    lVar5 = unaff_x22;
    if ((int)param_3 != 0) {
code_r0x03024b18:
      uVar6 = func_0x00f78a24(0x3d70368);
      uVar6 = /*System.String$$Format*/ func_0x029bcac4(uVar6,lVar4,lVar10,0);
      func_0x00f78a24(0x3d1fce8);
      uVar7 = func_0x00f78aec();
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar7,uVar6,0);
      goto code_r0x03024c04;
    }
    lVar13 = 0;
code_r0x03024ad8:
    lVar5 = lVar13;
    if (*(long *)PTR_03a5d648 == lStack_98) {
      return lVar13;
    }
    goto code_r0x03024bb0;
  }
  lVar5 = /*System.String$$IndexOf*/ func_0x029cdad0(lVar4,0x2f,0,0);
  if ((int)lVar5 == -1) {
    lVar13 = *(long *)(lVar10 + 0x18);
    if (lVar13 != 0) {
      lVar15 = 0;
      lVar5 = 0;
      do {
        if ((int)*(uint *)(lVar13 + 0x18) <= (int)(uint)lVar15) {
          lVar13 = lVar5;
          if ((lVar5 != 0) || ((param_3 & 1) == 0)) goto code_r0x03024ad8;
          goto code_r0x03024b18;
        }
        if (*(uint *)(lVar13 + 0x18) <= (uint)lVar15) goto code_r0x03024b5c;
        lVar13 = *(long *)(lVar13 + lVar15 * 8 + 0x20);
        unaff_x23 = lVar5;
        if (lVar13 == 0) break;
        lVar13 = /*UnityEngine.InputSystem.InputActionMap$$FindAction*/ func_0x03024e58(lVar13,lVar4,0);
        if (lVar13 != 0) {
          /*UnityEngine.InputSystem.InputAction$$get_currentState*/ func_0x03022910(&uStack_c8);
          if (((char)uStack_c8 != '\0') ||
             (uVar9 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar13 + 0x28),lVar4,0), (uVar9 & 1) != 0))
          goto code_r0x03024ad8;
          unaff_x22 = lVar13;
          unaff_x23 = lVar13;
          if (lVar5 != 0) {
            unaff_x23 = lVar5;
          }
        }
        lVar13 = *(long *)(lVar10 + 0x18);
        lVar15 = lVar15 + 1;
        lVar5 = unaff_x23;
      } while (lVar13 != 0);
    }
code_r0x03024a70:
    while( true ) {
      do {
        func_0x00f78af4();
code_r0x03024a74:
        unaff_x23 = *(long *)(unaff_x23 + 0x28);
      } while (unaff_x23 == 0);
      uVar12 = *(uint *)(unaff_x23 + 0x18);
      if ((int)uVar12 < 1) break;
      uVar14 = 0;
      while( true ) {
        if (uVar12 <= uVar14) goto code_r0x03024b5c;
        unaff_x22 = *(long *)(unaff_x23 + (long)(int)uVar14 * 8 + 0x20);
        if (unaff_x22 == 0) break;
        auVar17 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x22 + 0x10),0);
        iVar3 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar17._0_8_,auVar17._8_8_,uStack_e8,uStack_e0,3,0);
        lVar13 = unaff_x22;
        if (iVar3 == 0) goto code_r0x03024ad8;
        uVar14 = uVar14 + 1;
        uVar12 = *(uint *)(unaff_x23 + 0x18);
        if ((int)uVar12 <= (int)uVar14) goto code_r0x03024ad0;
      }
    }
    goto code_r0x03024ad0;
  }
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925e8(&uStack_d8,lVar4,0,lVar5,0);
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925f4(&uStack_e8,lVar4,(int)lVar5 + 1,0);
  uVar9 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_d8,0);
  if (((uVar9 & 1) == 0) && (uVar9 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_e8,0), (uVar9 & 1) == 0)) {
    lVar13 = *(long *)(lVar10 + 0x18);
    unaff_x22 = lVar5;
    if (lVar13 != 0) {
      unaff_x22 = 0;
      do {
        if ((int)*(uint *)(lVar13 + 0x18) <= (int)(uint)unaff_x22) goto code_r0x03024ad0;
        if (*(uint *)(lVar13 + 0x18) <= (uint)unaff_x22) goto code_r0x03024b5c;
        unaff_x23 = *(long *)(lVar13 + unaff_x22 * 8 + 0x20);
        if (unaff_x23 == 0) break;
        auVar17 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x23 + 0x10),0);
        iVar3 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar17._0_8_,auVar17._8_8_,uStack_d8,uStack_d0,3,0);
        if (iVar3 == 0) goto code_r0x03024a74;
        lVar13 = *(long *)(lVar10 + 0x18);
        unaff_x22 = unaff_x22 + 1;
      } while (lVar13 != 0);
    }
    goto code_r0x03024a70;
  }
  goto code_r0x03024bb4;
code_r0x03024b5c:
  uVar6 = func_0x00f78b24();
  func_0x00f78ac0(uVar6,0);
code_r0x03024b68:
  func_0x00f78a24(0x3d1fcf0);
  lVar4 = func_0x00f78aec();
  uVar6 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(lVar4,uVar6,0);
  uVar6 = func_0x00f78a24(0x3d58100);
  func_0x00f78ac0(lVar4,uVar6);
  lVar5 = unaff_x22;
code_r0x03024bb0:
  ___stack_chk_fail();
code_r0x03024bb4:
  uVar6 = func_0x00f78a24(0x3d6f8e0);
  uVar6 = /*System.String$$Concat*/ func_0x029bdb88(uVar6,lVar4,0);
  func_0x00f78a24(0x3d1fce8);
  uVar7 = func_0x00f78aec();
  uVar8 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar7,uVar6,uVar8,0);
  param_3 = unaff_x21;
code_r0x03024c04:
  uVar8 = func_0x00f78a24(0x3d58100);
  lVar10 = func_0x00f78ac0(uVar7,uVar8);
  puStack_f8 = &UnityEngine_InputSystem_InputActionAsset__ToJson;
  lStack_120 = lVar5;
  uStack_118 = param_3;
  uStack_110 = uVar7;
  uStack_108 = uVar6;
  puStack_100 = &stack0xffffffffffffffa0;
  if ((bRam0000000003ebcde1 & 1) == 0) {
    func_0x00f78a20(0x3d279f0);
    bRam0000000003ebcde1 = 1;
  }
  uVar6 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar10,0);
  uVar7 = /*UnityEngine.InputSystem.InputActionMap.WriteFileJson$$FromMaps*/ func_0x030aa3a0(*(undefined8 *)(lVar10 + 0x18),0);
  uStack_128 = /*UnityEngine.InputSystem.InputControlScheme.SchemeJson$$ToJson*/ func_0x030ba234(*(undefined8 *)(lVar10 + 0x20),0);
  uStack_138 = uVar6;
  uStack_130 = uVar7;
  uVar6 = func_0x00f78ae0(/*UnityEngine.InputSystem.InputActionAsset.WriteFileJson_TypeInfo*/ uRam0000000003d279f0,&uStack_138);
  lVar10 = /*UnityEngine.JsonUtility$$ToJson*/ func_0x03295ac8(uVar6,1,0);
  return lVar10;
}



// ============================================================
// RVA: 0x1469834 | Atlas.Input.AtlasInput.System.Collections.IEnumerable.GetEnumerator
// ============================================================

long Atlas_Input_AtlasInput__System_Collections_IEnumerable_GetEnumerator
               (long param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *extraout_x8;
  long lVar13;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  uint uVar14;
  long lVar15;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar16 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
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
  long lStack_88;
  
  if (*(ulong *)(param_1 + 0x10) != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = *(ulong *)(param_1 + 0x10);
    puVar2 = (undefined1 *)register0x00000008;
    while( true ) {
      uVar6 = auVar16._0_8_;
      *(long *)(puVar2 + -0x30) = unaff_x22;
      *(ulong *)(puVar2 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
      *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
      *(undefined **)(puVar2 + -8) = unaff_x30;
      unaff_x29 = puVar2 + -0x10;
      unaff_x21 = 0x3d279e0;
      if ((bRam0000000003ebcdec & 1) == 0) {
        func_0x00f78a20(0x3d279e0,auVar16._8_8_);
        bRam0000000003ebcdec = 1;
      }
      lVar10 = func_0x00f78aec(/*UnityEngine.InputSystem.InputActionAsset.<GetEnumerator>d__31_TypeInfo*/ uRam0000000003d279e0);
      /*UnityEngine.InputSystem.InputActionAsset.<GetEnumerator>d__31$$.ctor*/ func_0x030a8708(lVar10,0,0);
      if (lVar10 != 0) break;
      unaff_x30 = &
                  UnityEngine_InputSystem_InputActionAsset__System_Collections_IEnumerable_GetEnumerator
      ;
      auVar16 = func_0x00f78af4();
      unaff_x20 = 0;
      puVar2 = puVar2 + -0x30;
      unaff_x19 = uVar6;
    }
    *(undefined8 *)(lVar10 + 0x20) = uVar6;
    return lVar10;
  }
  lVar10 = func_0x00f78af4();
  lVar10 = *(long *)(lVar10 + 0x10);
  if (lVar10 != 0) {
    if ((bRam0000000003ebcde9 & 1) == 0) {
      func_0x00f78a20(0x3d32738,0);
      func_0x00f78a20(0x3d32740);
      func_0x00f78a20(0x3d32748);
      func_0x00f78a20(0x3d3fac0);
      bRam0000000003ebcde9 = 1;
    }
    /*UnityEngine.InputSystem.InputActionAsset$$get_actionMaps*/ func_0x03024518(lVar10);
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&stack0xffffffffffffff98,&stack0xffffffffffffff88,uRam0000000003d3fac0);
    while( true ) {
      uVar9 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&stack0xffffffffffffff98,uRam0000000003d32740);
      if ((uVar9 & 1) == 0) {
        lVar10 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&stack0xffffffffffffff98,uRam0000000003d32738);
        return lVar10;
      }
      lVar10 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&stack0xffffffffffffff98,uRam0000000003d32748);
      if (lVar10 == 0) break;
      /*UnityEngine.InputSystem.InputActionMap$$Enable*/ func_0x03025c1c();
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3025be0);
    (*pcVar1)();
  }
  lVar10 = func_0x00f78af4();
  lVar10 = *(long *)(lVar10 + 0x10);
  if (lVar10 != 0) {
    if ((bRam0000000003ebcdea & 1) == 0) {
      func_0x00f78a20(0x3d32738,0);
      func_0x00f78a20(0x3d32740);
      func_0x00f78a20(0x3d32748);
      func_0x00f78a20(0x3d3fac0);
      bRam0000000003ebcdea = 1;
    }
    lStack_88 = /*UnityEngine.InputSystem.InputActionAsset$$get_actionMaps*/ func_0x03024518(lVar10);
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&stack0xffffffffffffff88,&lStack_88,uRam0000000003d3fac0);
    while( true ) {
      uVar9 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&stack0xffffffffffffff88,uRam0000000003d32740);
      if ((uVar9 & 1) == 0) {
        lVar10 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&stack0xffffffffffffff88,uRam0000000003d32738);
        return lVar10;
      }
      lVar10 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&stack0xffffffffffffff88,uRam0000000003d32748);
      if (lVar10 == 0) break;
      /*UnityEngine.InputSystem.InputActionMap$$Disable*/ func_0x03025da8();
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3025d6c);
    (*pcVar1)();
  }
  lVar10 = func_0x00f78af4();
  lVar10 = *(long *)(lVar10 + 0x10);
  if (lVar10 != 0) {
    if ((bRam0000000003ebcddf & 1) == 0) {
      func_0x00f78a20(0x3d279e8,0);
      bRam0000000003ebcddf = 1;
    }
    lVar4 = func_0x00f78aec(/*UnityEngine.InputSystem.InputActionAsset.<get_bindings>d__8_TypeInfo*/ uRam0000000003d279e8);
    /*UnityEngine.InputSystem.InputActionAsset.<get_bindings>d__8$$.ctor*/ func_0x030a88b0(lVar4,0xfffffffe,0);
    if (lVar4 == 0) {
      lVar10 = func_0x00f78af4();
      uVar6 = *(undefined8 *)(lVar10 + 0x50);
      uVar8 = *(undefined8 *)(lVar10 + 0x68);
      uVar7 = *(undefined8 *)(lVar10 + 0x60);
      extraout_x8[5] = *(undefined8 *)(lVar10 + 0x58);
      extraout_x8[4] = uVar6;
      extraout_x8[7] = uVar8;
      extraout_x8[6] = uVar7;
      uVar6 = *(undefined8 *)(lVar10 + 0x70);
      uVar8 = *(undefined8 *)(lVar10 + 0x88);
      uVar7 = *(undefined8 *)(lVar10 + 0x80);
      extraout_x8[9] = *(undefined8 *)(lVar10 + 0x78);
      extraout_x8[8] = uVar6;
      extraout_x8[0xb] = uVar8;
      extraout_x8[10] = uVar7;
      uVar6 = *(undefined8 *)(lVar10 + 0x30);
      uVar8 = *(undefined8 *)(lVar10 + 0x48);
      uVar7 = *(undefined8 *)(lVar10 + 0x40);
      extraout_x8[1] = *(undefined8 *)(lVar10 + 0x38);
      *extraout_x8 = uVar6;
      extraout_x8[3] = uVar8;
      extraout_x8[2] = uVar7;
      return lVar10;
    }
    *(long *)(lVar4 + 0x78) = lVar10;
    return lVar4;
  }
  auVar16 = func_0x00f78af4();
  lVar4 = auVar16._8_8_;
  lVar10 = *(long *)(auVar16._0_8_ + 0x10);
  if (lVar10 == 0) {
    auVar16 = func_0x00f78af4();
    puVar11 = auVar16._8_8_;
    lVar10 = *(long *)(auVar16._0_8_ + 0x10);
    if (lVar10 == 0) {
      lVar10 = func_0x00f78af4();
      return lVar10;
    }
    uStack_98 = puVar11[5];
    uStack_a0 = puVar11[4];
    lStack_88 = puVar11[7];
    uStack_90 = puVar11[6];
    uStack_b8 = puVar11[1];
    uStack_c0 = *puVar11;
    uStack_a8 = puVar11[3];
    uStack_b0 = puVar11[2];
    lVar10 = /*UnityEngine.InputSystem.InputActionAsset$$FindBinding*/ func_0x03024f80(lVar10,&uStack_c0);
    return lVar10;
  }
  lStack_88 = *(long *)PTR_03a5d648;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  if (lVar4 == 0) goto code_r0x03024b68;
  unaff_x21 = param_3;
  if (*(long *)(lVar10 + 0x18) == 0) {
code_r0x03024ad0:
    lVar5 = unaff_x22;
    if ((int)param_3 != 0) {
code_r0x03024b18:
      uVar6 = func_0x00f78a24(0x3d70368);
      uVar6 = /*System.String$$Format*/ func_0x029bcac4(uVar6,lVar4,lVar10,0);
      func_0x00f78a24(0x3d1fce8);
      uVar7 = func_0x00f78aec();
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar7,uVar6,0);
      goto code_r0x03024c04;
    }
    lVar13 = 0;
code_r0x03024ad8:
    lVar5 = lVar13;
    if (*(long *)PTR_03a5d648 == lStack_88) {
      return lVar13;
    }
    goto code_r0x03024bb0;
  }
  lVar5 = /*System.String$$IndexOf*/ func_0x029cdad0(lVar4,0x2f,0,0);
  if ((int)lVar5 == -1) {
    lVar13 = *(long *)(lVar10 + 0x18);
    if (lVar13 != 0) {
      lVar15 = 0;
      lVar5 = 0;
      do {
        if ((int)*(uint *)(lVar13 + 0x18) <= (int)(uint)lVar15) {
          lVar13 = lVar5;
          if ((lVar5 != 0) || ((param_3 & 1) == 0)) goto code_r0x03024ad8;
          goto code_r0x03024b18;
        }
        if (*(uint *)(lVar13 + 0x18) <= (uint)lVar15) goto code_r0x03024b5c;
        lVar13 = *(long *)(lVar13 + lVar15 * 8 + 0x20);
        unaff_x23 = lVar5;
        if (lVar13 == 0) break;
        lVar13 = /*UnityEngine.InputSystem.InputActionMap$$FindAction*/ func_0x03024e58(lVar13,lVar4,0);
        if (lVar13 != 0) {
          /*UnityEngine.InputSystem.InputAction$$get_currentState*/ func_0x03022910(&uStack_b8);
          if (((char)uStack_b8 != '\0') ||
             (uVar9 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar13 + 0x28),lVar4,0), (uVar9 & 1) != 0))
          goto code_r0x03024ad8;
          unaff_x22 = lVar13;
          unaff_x23 = lVar13;
          if (lVar5 != 0) {
            unaff_x23 = lVar5;
          }
        }
        lVar13 = *(long *)(lVar10 + 0x18);
        lVar15 = lVar15 + 1;
        lVar5 = unaff_x23;
      } while (lVar13 != 0);
    }
code_r0x03024a70:
    while( true ) {
      do {
        func_0x00f78af4();
code_r0x03024a74:
        unaff_x23 = *(long *)(unaff_x23 + 0x28);
      } while (unaff_x23 == 0);
      uVar12 = *(uint *)(unaff_x23 + 0x18);
      if ((int)uVar12 < 1) break;
      uVar14 = 0;
      while( true ) {
        if (uVar12 <= uVar14) goto code_r0x03024b5c;
        unaff_x22 = *(long *)(unaff_x23 + (long)(int)uVar14 * 8 + 0x20);
        if (unaff_x22 == 0) break;
        auVar16 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x22 + 0x10),0);
        iVar3 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar16._0_8_,auVar16._8_8_,uStack_d8,uStack_d0,3,0);
        lVar13 = unaff_x22;
        if (iVar3 == 0) goto code_r0x03024ad8;
        uVar14 = uVar14 + 1;
        uVar12 = *(uint *)(unaff_x23 + 0x18);
        if ((int)uVar12 <= (int)uVar14) goto code_r0x03024ad0;
      }
    }
    goto code_r0x03024ad0;
  }
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925e8(&uStack_c8,lVar4,0,lVar5,0);
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925f4(&uStack_d8,lVar4,(int)lVar5 + 1,0);
  uVar9 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_c8,0);
  if (((uVar9 & 1) == 0) && (uVar9 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_d8,0), (uVar9 & 1) == 0)) {
    lVar13 = *(long *)(lVar10 + 0x18);
    unaff_x22 = lVar5;
    if (lVar13 != 0) {
      unaff_x22 = 0;
      do {
        if ((int)*(uint *)(lVar13 + 0x18) <= (int)(uint)unaff_x22) goto code_r0x03024ad0;
        if (*(uint *)(lVar13 + 0x18) <= (uint)unaff_x22) goto code_r0x03024b5c;
        unaff_x23 = *(long *)(lVar13 + unaff_x22 * 8 + 0x20);
        if (unaff_x23 == 0) break;
        auVar16 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x23 + 0x10),0);
        iVar3 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar16._0_8_,auVar16._8_8_,uStack_c8,uStack_c0,3,0);
        if (iVar3 == 0) goto code_r0x03024a74;
        lVar13 = *(long *)(lVar10 + 0x18);
        unaff_x22 = unaff_x22 + 1;
      } while (lVar13 != 0);
    }
    goto code_r0x03024a70;
  }
code_r0x03024bb4:
  uVar6 = func_0x00f78a24(0x3d6f8e0);
  uVar6 = /*System.String$$Concat*/ func_0x029bdb88(uVar6,lVar4,0);
  func_0x00f78a24(0x3d1fce8);
  uVar7 = func_0x00f78aec();
  uVar8 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar7,uVar6,uVar8,0);
  param_3 = unaff_x21;
code_r0x03024c04:
  uVar8 = func_0x00f78a24(0x3d58100);
  lVar10 = func_0x00f78ac0(uVar7,uVar8);
  puStack_e8 = &UnityEngine_InputSystem_InputActionAsset__ToJson;
  lStack_110 = lVar5;
  uStack_108 = param_3;
  uStack_100 = uVar7;
  uStack_f8 = uVar6;
  puStack_f0 = &stack0xffffffffffffffb0;
  if ((bRam0000000003ebcde1 & 1) == 0) {
    func_0x00f78a20(0x3d279f0);
    bRam0000000003ebcde1 = 1;
  }
  uVar6 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar10,0);
  uVar7 = /*UnityEngine.InputSystem.InputActionMap.WriteFileJson$$FromMaps*/ func_0x030aa3a0(*(undefined8 *)(lVar10 + 0x18),0);
  uStack_118 = /*UnityEngine.InputSystem.InputControlScheme.SchemeJson$$ToJson*/ func_0x030ba234(*(undefined8 *)(lVar10 + 0x20),0);
  uStack_128 = uVar6;
  uStack_120 = uVar7;
  uVar6 = func_0x00f78ae0(/*UnityEngine.InputSystem.InputActionAsset.WriteFileJson_TypeInfo*/ uRam0000000003d279f0,&uStack_128);
  lVar10 = /*UnityEngine.JsonUtility$$ToJson*/ func_0x03295ac8(uVar6,1,0);
  return lVar10;
code_r0x03024b5c:
  uVar6 = func_0x00f78b24();
  func_0x00f78ac0(uVar6,0);
code_r0x03024b68:
  func_0x00f78a24(0x3d1fcf0);
  lVar4 = func_0x00f78aec();
  uVar6 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(lVar4,uVar6,0);
  uVar6 = func_0x00f78a24(0x3d58100);
  func_0x00f78ac0(lVar4,uVar6);
  lVar5 = unaff_x22;
code_r0x03024bb0:
  ___stack_chk_fail();
  goto code_r0x03024bb4;
}



// ============================================================
// RVA: 0x1469854 | Atlas.Input.AtlasInput.Enable
// ============================================================

long Atlas_Input_AtlasInput__Enable(long param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *extraout_x8;
  long lVar12;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  uint uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
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
  long lStack_78;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    if ((bRam0000000003ebcde9 & 1) == 0) {
      func_0x00f78a20(0x3d32738,0);
      func_0x00f78a20(0x3d32740);
      func_0x00f78a20(0x3d32748);
      func_0x00f78a20(0x3d3fac0);
      bRam0000000003ebcde9 = 1;
    }
    /*UnityEngine.InputSystem.InputActionAsset$$get_actionMaps*/ func_0x03024518(lVar3);
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&stack0xffffffffffffffa8,&stack0xffffffffffffff98,uRam0000000003d3fac0);
    while( true ) {
      uVar9 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&stack0xffffffffffffffa8,uRam0000000003d32740);
      if ((uVar9 & 1) == 0) {
        lVar3 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&stack0xffffffffffffffa8,uRam0000000003d32738);
        return lVar3;
      }
      lVar3 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&stack0xffffffffffffffa8,uRam0000000003d32748);
      if (lVar3 == 0) break;
      /*UnityEngine.InputSystem.InputActionMap$$Enable*/ func_0x03025c1c();
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3025be0);
    (*pcVar1)();
  }
  lVar3 = func_0x00f78af4();
  lVar3 = *(long *)(lVar3 + 0x10);
  if (lVar3 != 0) {
    if ((bRam0000000003ebcdea & 1) == 0) {
      func_0x00f78a20(0x3d32738,0);
      func_0x00f78a20(0x3d32740);
      func_0x00f78a20(0x3d32748);
      func_0x00f78a20(0x3d3fac0);
      bRam0000000003ebcdea = 1;
    }
    lStack_78 = /*UnityEngine.InputSystem.InputActionAsset$$get_actionMaps*/ func_0x03024518(lVar3);
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&stack0xffffffffffffff98,&lStack_78,uRam0000000003d3fac0);
    while( true ) {
      uVar9 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&stack0xffffffffffffff98,uRam0000000003d32740);
      if ((uVar9 & 1) == 0) {
        lVar3 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&stack0xffffffffffffff98,uRam0000000003d32738);
        return lVar3;
      }
      lVar3 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&stack0xffffffffffffff98,uRam0000000003d32748);
      if (lVar3 == 0) break;
      /*UnityEngine.InputSystem.InputActionMap$$Disable*/ func_0x03025da8();
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3025d6c);
    (*pcVar1)();
  }
  lVar3 = func_0x00f78af4();
  lVar3 = *(long *)(lVar3 + 0x10);
  if (lVar3 != 0) {
    if ((bRam0000000003ebcddf & 1) == 0) {
      func_0x00f78a20(0x3d279e8,0);
      bRam0000000003ebcddf = 1;
    }
    lVar4 = func_0x00f78aec(/*UnityEngine.InputSystem.InputActionAsset.<get_bindings>d__8_TypeInfo*/ uRam0000000003d279e8);
    /*UnityEngine.InputSystem.InputActionAsset.<get_bindings>d__8$$.ctor*/ func_0x030a88b0(lVar4,0xfffffffe,0);
    if (lVar4 == 0) {
      lVar3 = func_0x00f78af4();
      uVar6 = *(undefined8 *)(lVar3 + 0x50);
      uVar8 = *(undefined8 *)(lVar3 + 0x68);
      uVar7 = *(undefined8 *)(lVar3 + 0x60);
      extraout_x8[5] = *(undefined8 *)(lVar3 + 0x58);
      extraout_x8[4] = uVar6;
      extraout_x8[7] = uVar8;
      extraout_x8[6] = uVar7;
      uVar6 = *(undefined8 *)(lVar3 + 0x70);
      uVar8 = *(undefined8 *)(lVar3 + 0x88);
      uVar7 = *(undefined8 *)(lVar3 + 0x80);
      extraout_x8[9] = *(undefined8 *)(lVar3 + 0x78);
      extraout_x8[8] = uVar6;
      extraout_x8[0xb] = uVar8;
      extraout_x8[10] = uVar7;
      uVar6 = *(undefined8 *)(lVar3 + 0x30);
      uVar8 = *(undefined8 *)(lVar3 + 0x48);
      uVar7 = *(undefined8 *)(lVar3 + 0x40);
      extraout_x8[1] = *(undefined8 *)(lVar3 + 0x38);
      *extraout_x8 = uVar6;
      extraout_x8[3] = uVar8;
      extraout_x8[2] = uVar7;
      return lVar3;
    }
    *(long *)(lVar4 + 0x78) = lVar3;
    return lVar4;
  }
  auVar15 = func_0x00f78af4();
  lVar4 = auVar15._8_8_;
  lVar3 = *(long *)(auVar15._0_8_ + 0x10);
  if (lVar3 == 0) {
    auVar15 = func_0x00f78af4();
    puVar10 = auVar15._8_8_;
    lVar3 = *(long *)(auVar15._0_8_ + 0x10);
    if (lVar3 == 0) {
      lVar3 = func_0x00f78af4();
      return lVar3;
    }
    uStack_88 = puVar10[5];
    uStack_90 = puVar10[4];
    lStack_78 = puVar10[7];
    uStack_80 = puVar10[6];
    uStack_a8 = puVar10[1];
    uStack_b0 = *puVar10;
    uStack_98 = puVar10[3];
    uStack_a0 = puVar10[2];
    lVar3 = /*UnityEngine.InputSystem.InputActionAsset$$FindBinding*/ func_0x03024f80(lVar3,&uStack_b0);
    return lVar3;
  }
  lStack_78 = *(long *)PTR_03a5d648;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  if (lVar4 == 0) goto code_r0x03024b68;
  unaff_x21 = param_3;
  if (*(long *)(lVar3 + 0x18) == 0) {
code_r0x03024ad0:
    lVar5 = unaff_x22;
    if ((int)param_3 != 0) {
code_r0x03024b18:
      uVar6 = func_0x00f78a24(0x3d70368);
      uVar6 = /*System.String$$Format*/ func_0x029bcac4(uVar6,lVar4,lVar3,0);
      func_0x00f78a24(0x3d1fce8);
      uVar7 = func_0x00f78aec();
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar7,uVar6,0);
      goto code_r0x03024c04;
    }
    lVar12 = 0;
code_r0x03024ad8:
    lVar5 = lVar12;
    if (*(long *)PTR_03a5d648 == lStack_78) {
      return lVar12;
    }
    goto code_r0x03024bb0;
  }
  lVar5 = /*System.String$$IndexOf*/ func_0x029cdad0(lVar4,0x2f,0,0);
  if ((int)lVar5 == -1) {
    lVar12 = *(long *)(lVar3 + 0x18);
    if (lVar12 != 0) {
      lVar14 = 0;
      lVar5 = 0;
      do {
        if ((int)*(uint *)(lVar12 + 0x18) <= (int)(uint)lVar14) {
          lVar12 = lVar5;
          if ((lVar5 != 0) || ((param_3 & 1) == 0)) goto code_r0x03024ad8;
          goto code_r0x03024b18;
        }
        if (*(uint *)(lVar12 + 0x18) <= (uint)lVar14) goto code_r0x03024b5c;
        lVar12 = *(long *)(lVar12 + lVar14 * 8 + 0x20);
        unaff_x23 = lVar5;
        if (lVar12 == 0) break;
        lVar12 = /*UnityEngine.InputSystem.InputActionMap$$FindAction*/ func_0x03024e58(lVar12,lVar4,0);
        if (lVar12 != 0) {
          /*UnityEngine.InputSystem.InputAction$$get_currentState*/ func_0x03022910(&uStack_a8);
          if (((char)uStack_a8 != '\0') ||
             (uVar9 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar12 + 0x28),lVar4,0), (uVar9 & 1) != 0))
          goto code_r0x03024ad8;
          unaff_x22 = lVar12;
          unaff_x23 = lVar12;
          if (lVar5 != 0) {
            unaff_x23 = lVar5;
          }
        }
        lVar12 = *(long *)(lVar3 + 0x18);
        lVar14 = lVar14 + 1;
        lVar5 = unaff_x23;
      } while (lVar12 != 0);
    }
code_r0x03024a70:
    while( true ) {
      do {
        func_0x00f78af4();
code_r0x03024a74:
        unaff_x23 = *(long *)(unaff_x23 + 0x28);
      } while (unaff_x23 == 0);
      uVar11 = *(uint *)(unaff_x23 + 0x18);
      if ((int)uVar11 < 1) break;
      uVar13 = 0;
      while( true ) {
        if (uVar11 <= uVar13) goto code_r0x03024b5c;
        unaff_x22 = *(long *)(unaff_x23 + (long)(int)uVar13 * 8 + 0x20);
        if (unaff_x22 == 0) break;
        auVar15 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x22 + 0x10),0);
        iVar2 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar15._0_8_,auVar15._8_8_,uStack_c8,uStack_c0,3,0);
        lVar12 = unaff_x22;
        if (iVar2 == 0) goto code_r0x03024ad8;
        uVar13 = uVar13 + 1;
        uVar11 = *(uint *)(unaff_x23 + 0x18);
        if ((int)uVar11 <= (int)uVar13) goto code_r0x03024ad0;
      }
    }
    goto code_r0x03024ad0;
  }
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925e8(&uStack_b8,lVar4,0,lVar5,0);
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925f4(&uStack_c8,lVar4,(int)lVar5 + 1,0);
  uVar9 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_b8,0);
  if (((uVar9 & 1) == 0) && (uVar9 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_c8,0), (uVar9 & 1) == 0)) {
    lVar12 = *(long *)(lVar3 + 0x18);
    unaff_x22 = lVar5;
    if (lVar12 != 0) {
      unaff_x22 = 0;
      do {
        if ((int)*(uint *)(lVar12 + 0x18) <= (int)(uint)unaff_x22) goto code_r0x03024ad0;
        if (*(uint *)(lVar12 + 0x18) <= (uint)unaff_x22) goto code_r0x03024b5c;
        unaff_x23 = *(long *)(lVar12 + unaff_x22 * 8 + 0x20);
        if (unaff_x23 == 0) break;
        auVar15 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x23 + 0x10),0);
        iVar2 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar15._0_8_,auVar15._8_8_,uStack_b8,uStack_b0,3,0);
        if (iVar2 == 0) goto code_r0x03024a74;
        lVar12 = *(long *)(lVar3 + 0x18);
        unaff_x22 = unaff_x22 + 1;
      } while (lVar12 != 0);
    }
    goto code_r0x03024a70;
  }
code_r0x03024bb4:
  uVar6 = func_0x00f78a24(0x3d6f8e0);
  uVar6 = /*System.String$$Concat*/ func_0x029bdb88(uVar6,lVar4,0);
  func_0x00f78a24(0x3d1fce8);
  uVar7 = func_0x00f78aec();
  uVar8 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar7,uVar6,uVar8,0);
  param_3 = unaff_x21;
code_r0x03024c04:
  uVar8 = func_0x00f78a24(0x3d58100);
  lVar3 = func_0x00f78ac0(uVar7,uVar8);
  puStack_d8 = &UnityEngine_InputSystem_InputActionAsset__ToJson;
  lStack_100 = lVar5;
  uStack_f8 = param_3;
  uStack_f0 = uVar7;
  uStack_e8 = uVar6;
  puStack_e0 = &stack0xffffffffffffffc0;
  if ((bRam0000000003ebcde1 & 1) == 0) {
    func_0x00f78a20(0x3d279f0);
    bRam0000000003ebcde1 = 1;
  }
  uVar6 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar3,0);
  uVar7 = /*UnityEngine.InputSystem.InputActionMap.WriteFileJson$$FromMaps*/ func_0x030aa3a0(*(undefined8 *)(lVar3 + 0x18),0);
  uStack_108 = /*UnityEngine.InputSystem.InputControlScheme.SchemeJson$$ToJson*/ func_0x030ba234(*(undefined8 *)(lVar3 + 0x20),0);
  uStack_118 = uVar6;
  uStack_110 = uVar7;
  uVar6 = func_0x00f78ae0(/*UnityEngine.InputSystem.InputActionAsset.WriteFileJson_TypeInfo*/ uRam0000000003d279f0,&uStack_118);
  lVar3 = /*UnityEngine.JsonUtility$$ToJson*/ func_0x03295ac8(uVar6,1,0);
  return lVar3;
code_r0x03024b5c:
  uVar6 = func_0x00f78b24();
  func_0x00f78ac0(uVar6,0);
code_r0x03024b68:
  func_0x00f78a24(0x3d1fcf0);
  lVar4 = func_0x00f78aec();
  uVar6 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(lVar4,uVar6,0);
  uVar6 = func_0x00f78a24(0x3d58100);
  func_0x00f78ac0(lVar4,uVar6);
  lVar5 = unaff_x22;
code_r0x03024bb0:
  ___stack_chk_fail();
  goto code_r0x03024bb4;
}



// ============================================================
// RVA: 0x1469874 | Atlas.Input.AtlasInput.Disable
// ============================================================

long Atlas_Input_AtlasInput__Disable(long param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *extraout_x8;
  long lVar12;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  uint uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
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
  long lStack_68;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    if ((bRam0000000003ebcdea & 1) == 0) {
      func_0x00f78a20(0x3d32738,0);
      func_0x00f78a20(0x3d32740);
      func_0x00f78a20(0x3d32748);
      func_0x00f78a20(0x3d3fac0);
      bRam0000000003ebcdea = 1;
    }
    lStack_68 = /*UnityEngine.InputSystem.InputActionAsset$$get_actionMaps*/ func_0x03024518(lVar3);
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&stack0xffffffffffffffa8,&lStack_68,uRam0000000003d3fac0);
    while( true ) {
      uVar9 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&stack0xffffffffffffffa8,uRam0000000003d32740);
      if ((uVar9 & 1) == 0) {
        lVar3 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&stack0xffffffffffffffa8,uRam0000000003d32738);
        return lVar3;
      }
      lVar3 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&stack0xffffffffffffffa8,uRam0000000003d32748);
      if (lVar3 == 0) break;
      /*UnityEngine.InputSystem.InputActionMap$$Disable*/ func_0x03025da8();
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3025d6c);
    (*pcVar1)();
  }
  lVar3 = func_0x00f78af4();
  lVar3 = *(long *)(lVar3 + 0x10);
  if (lVar3 != 0) {
    if ((bRam0000000003ebcddf & 1) == 0) {
      func_0x00f78a20(0x3d279e8,0);
      bRam0000000003ebcddf = 1;
    }
    lVar4 = func_0x00f78aec(/*UnityEngine.InputSystem.InputActionAsset.<get_bindings>d__8_TypeInfo*/ uRam0000000003d279e8);
    /*UnityEngine.InputSystem.InputActionAsset.<get_bindings>d__8$$.ctor*/ func_0x030a88b0(lVar4,0xfffffffe,0);
    if (lVar4 == 0) {
      lVar3 = func_0x00f78af4();
      uVar6 = *(undefined8 *)(lVar3 + 0x50);
      uVar8 = *(undefined8 *)(lVar3 + 0x68);
      uVar7 = *(undefined8 *)(lVar3 + 0x60);
      extraout_x8[5] = *(undefined8 *)(lVar3 + 0x58);
      extraout_x8[4] = uVar6;
      extraout_x8[7] = uVar8;
      extraout_x8[6] = uVar7;
      uVar6 = *(undefined8 *)(lVar3 + 0x70);
      uVar8 = *(undefined8 *)(lVar3 + 0x88);
      uVar7 = *(undefined8 *)(lVar3 + 0x80);
      extraout_x8[9] = *(undefined8 *)(lVar3 + 0x78);
      extraout_x8[8] = uVar6;
      extraout_x8[0xb] = uVar8;
      extraout_x8[10] = uVar7;
      uVar6 = *(undefined8 *)(lVar3 + 0x30);
      uVar8 = *(undefined8 *)(lVar3 + 0x48);
      uVar7 = *(undefined8 *)(lVar3 + 0x40);
      extraout_x8[1] = *(undefined8 *)(lVar3 + 0x38);
      *extraout_x8 = uVar6;
      extraout_x8[3] = uVar8;
      extraout_x8[2] = uVar7;
      return lVar3;
    }
    *(long *)(lVar4 + 0x78) = lVar3;
    return lVar4;
  }
  auVar15 = func_0x00f78af4();
  lVar4 = auVar15._8_8_;
  lVar3 = *(long *)(auVar15._0_8_ + 0x10);
  if (lVar3 == 0) {
    auVar15 = func_0x00f78af4();
    puVar10 = auVar15._8_8_;
    lVar3 = *(long *)(auVar15._0_8_ + 0x10);
    if (lVar3 == 0) {
      lVar3 = func_0x00f78af4();
      return lVar3;
    }
    uStack_78 = puVar10[5];
    uStack_80 = puVar10[4];
    lStack_68 = puVar10[7];
    uStack_70 = puVar10[6];
    uStack_98 = puVar10[1];
    uStack_a0 = *puVar10;
    uStack_88 = puVar10[3];
    uStack_90 = puVar10[2];
    lVar3 = /*UnityEngine.InputSystem.InputActionAsset$$FindBinding*/ func_0x03024f80(lVar3,&uStack_a0);
    return lVar3;
  }
  lStack_68 = *(long *)PTR_03a5d648;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  if (lVar4 == 0) goto code_r0x03024b68;
  unaff_x21 = param_3;
  if (*(long *)(lVar3 + 0x18) == 0) {
code_r0x03024ad0:
    lVar5 = unaff_x22;
    if ((int)param_3 != 0) {
code_r0x03024b18:
      uVar6 = func_0x00f78a24(0x3d70368);
      uVar6 = /*System.String$$Format*/ func_0x029bcac4(uVar6,lVar4,lVar3,0);
      func_0x00f78a24(0x3d1fce8);
      uVar7 = func_0x00f78aec();
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar7,uVar6,0);
      goto code_r0x03024c04;
    }
    lVar12 = 0;
code_r0x03024ad8:
    lVar5 = lVar12;
    if (*(long *)PTR_03a5d648 == lStack_68) {
      return lVar12;
    }
    goto code_r0x03024bb0;
  }
  lVar5 = /*System.String$$IndexOf*/ func_0x029cdad0(lVar4,0x2f,0,0);
  if ((int)lVar5 == -1) {
    lVar12 = *(long *)(lVar3 + 0x18);
    if (lVar12 != 0) {
      lVar14 = 0;
      lVar5 = 0;
      do {
        if ((int)*(uint *)(lVar12 + 0x18) <= (int)(uint)lVar14) {
          lVar12 = lVar5;
          if ((lVar5 != 0) || ((param_3 & 1) == 0)) goto code_r0x03024ad8;
          goto code_r0x03024b18;
        }
        if (*(uint *)(lVar12 + 0x18) <= (uint)lVar14) goto code_r0x03024b5c;
        lVar12 = *(long *)(lVar12 + lVar14 * 8 + 0x20);
        unaff_x23 = lVar5;
        if (lVar12 == 0) break;
        lVar12 = /*UnityEngine.InputSystem.InputActionMap$$FindAction*/ func_0x03024e58(lVar12,lVar4,0);
        if (lVar12 != 0) {
          /*UnityEngine.InputSystem.InputAction$$get_currentState*/ func_0x03022910(&uStack_98);
          if (((char)uStack_98 != '\0') ||
             (uVar9 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar12 + 0x28),lVar4,0), (uVar9 & 1) != 0))
          goto code_r0x03024ad8;
          unaff_x22 = lVar12;
          unaff_x23 = lVar12;
          if (lVar5 != 0) {
            unaff_x23 = lVar5;
          }
        }
        lVar12 = *(long *)(lVar3 + 0x18);
        lVar14 = lVar14 + 1;
        lVar5 = unaff_x23;
      } while (lVar12 != 0);
    }
code_r0x03024a70:
    while( true ) {
      do {
        func_0x00f78af4();
code_r0x03024a74:
        unaff_x23 = *(long *)(unaff_x23 + 0x28);
      } while (unaff_x23 == 0);
      uVar11 = *(uint *)(unaff_x23 + 0x18);
      if ((int)uVar11 < 1) break;
      uVar13 = 0;
      while( true ) {
        if (uVar11 <= uVar13) goto code_r0x03024b5c;
        unaff_x22 = *(long *)(unaff_x23 + (long)(int)uVar13 * 8 + 0x20);
        if (unaff_x22 == 0) break;
        auVar15 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x22 + 0x10),0);
        iVar2 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar15._0_8_,auVar15._8_8_,uStack_b8,uStack_b0,3,0);
        lVar12 = unaff_x22;
        if (iVar2 == 0) goto code_r0x03024ad8;
        uVar13 = uVar13 + 1;
        uVar11 = *(uint *)(unaff_x23 + 0x18);
        if ((int)uVar11 <= (int)uVar13) goto code_r0x03024ad0;
      }
    }
    goto code_r0x03024ad0;
  }
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925e8(&uStack_a8,lVar4,0,lVar5,0);
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925f4(&uStack_b8,lVar4,(int)lVar5 + 1,0);
  uVar9 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_a8,0);
  if (((uVar9 & 1) == 0) && (uVar9 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_b8,0), (uVar9 & 1) == 0)) {
    lVar12 = *(long *)(lVar3 + 0x18);
    unaff_x22 = lVar5;
    if (lVar12 != 0) {
      unaff_x22 = 0;
      do {
        if ((int)*(uint *)(lVar12 + 0x18) <= (int)(uint)unaff_x22) goto code_r0x03024ad0;
        if (*(uint *)(lVar12 + 0x18) <= (uint)unaff_x22) goto code_r0x03024b5c;
        unaff_x23 = *(long *)(lVar12 + unaff_x22 * 8 + 0x20);
        if (unaff_x23 == 0) break;
        auVar15 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x23 + 0x10),0);
        iVar2 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar15._0_8_,auVar15._8_8_,uStack_a8,uStack_a0,3,0);
        if (iVar2 == 0) goto code_r0x03024a74;
        lVar12 = *(long *)(lVar3 + 0x18);
        unaff_x22 = unaff_x22 + 1;
      } while (lVar12 != 0);
    }
    goto code_r0x03024a70;
  }
code_r0x03024bb4:
  uVar6 = func_0x00f78a24(0x3d6f8e0);
  uVar6 = /*System.String$$Concat*/ func_0x029bdb88(uVar6,lVar4,0);
  func_0x00f78a24(0x3d1fce8);
  uVar7 = func_0x00f78aec();
  uVar8 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar7,uVar6,uVar8,0);
  param_3 = unaff_x21;
code_r0x03024c04:
  uVar8 = func_0x00f78a24(0x3d58100);
  lVar3 = func_0x00f78ac0(uVar7,uVar8);
  puStack_c8 = &UnityEngine_InputSystem_InputActionAsset__ToJson;
  lStack_f0 = lVar5;
  uStack_e8 = param_3;
  uStack_e0 = uVar7;
  uStack_d8 = uVar6;
  puStack_d0 = &stack0xffffffffffffffd0;
  if ((bRam0000000003ebcde1 & 1) == 0) {
    func_0x00f78a20(0x3d279f0);
    bRam0000000003ebcde1 = 1;
  }
  uVar6 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar3,0);
  uVar7 = /*UnityEngine.InputSystem.InputActionMap.WriteFileJson$$FromMaps*/ func_0x030aa3a0(*(undefined8 *)(lVar3 + 0x18),0);
  uStack_f8 = /*UnityEngine.InputSystem.InputControlScheme.SchemeJson$$ToJson*/ func_0x030ba234(*(undefined8 *)(lVar3 + 0x20),0);
  uStack_108 = uVar6;
  uStack_100 = uVar7;
  uVar6 = func_0x00f78ae0(/*UnityEngine.InputSystem.InputActionAsset.WriteFileJson_TypeInfo*/ uRam0000000003d279f0,&uStack_108);
  lVar3 = /*UnityEngine.JsonUtility$$ToJson*/ func_0x03295ac8(uVar6,1,0);
  return lVar3;
code_r0x03024b5c:
  uVar6 = func_0x00f78b24();
  func_0x00f78ac0(uVar6,0);
code_r0x03024b68:
  func_0x00f78a24(0x3d1fcf0);
  lVar4 = func_0x00f78aec();
  uVar6 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(lVar4,uVar6,0);
  uVar6 = func_0x00f78a24(0x3d58100);
  func_0x00f78ac0(lVar4,uVar6);
  lVar5 = unaff_x22;
code_r0x03024bb0:
  ___stack_chk_fail();
  goto code_r0x03024bb4;
}



// ============================================================
// RVA: 0x1469894 | Atlas.Input.AtlasInput.get_bindings
// ============================================================

long Atlas_Input_AtlasInput__get_bindings(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *extraout_x8;
  long lVar11;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  uint uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    if ((bRam0000000003ebcddf & 1) == 0) {
      func_0x00f78a20(0x3d279e8,0);
      bRam0000000003ebcddf = 1;
    }
    lVar3 = func_0x00f78aec(/*UnityEngine.InputSystem.InputActionAsset.<get_bindings>d__8_TypeInfo*/ uRam0000000003d279e8);
    /*UnityEngine.InputSystem.InputActionAsset.<get_bindings>d__8$$.ctor*/ func_0x030a88b0(lVar3,0xfffffffe,0);
    if (lVar3 == 0) {
      lVar2 = func_0x00f78af4();
      uVar6 = *(undefined8 *)(lVar2 + 0x50);
      uVar8 = *(undefined8 *)(lVar2 + 0x68);
      uVar7 = *(undefined8 *)(lVar2 + 0x60);
      extraout_x8[5] = *(undefined8 *)(lVar2 + 0x58);
      extraout_x8[4] = uVar6;
      extraout_x8[7] = uVar8;
      extraout_x8[6] = uVar7;
      uVar6 = *(undefined8 *)(lVar2 + 0x70);
      uVar8 = *(undefined8 *)(lVar2 + 0x88);
      uVar7 = *(undefined8 *)(lVar2 + 0x80);
      extraout_x8[9] = *(undefined8 *)(lVar2 + 0x78);
      extraout_x8[8] = uVar6;
      extraout_x8[0xb] = uVar8;
      extraout_x8[10] = uVar7;
      uVar6 = *(undefined8 *)(lVar2 + 0x30);
      uVar8 = *(undefined8 *)(lVar2 + 0x48);
      uVar7 = *(undefined8 *)(lVar2 + 0x40);
      extraout_x8[1] = *(undefined8 *)(lVar2 + 0x38);
      *extraout_x8 = uVar6;
      extraout_x8[3] = uVar8;
      extraout_x8[2] = uVar7;
      return lVar2;
    }
    *(long *)(lVar3 + 0x78) = lVar2;
    return lVar3;
  }
  auVar14 = func_0x00f78af4();
  lVar3 = auVar14._8_8_;
  lVar2 = *(long *)(auVar14._0_8_ + 0x10);
  if (lVar2 == 0) {
    auVar14 = func_0x00f78af4();
    puVar9 = auVar14._8_8_;
    lVar2 = *(long *)(auVar14._0_8_ + 0x10);
    if (lVar2 == 0) {
      lVar2 = func_0x00f78af4();
      return lVar2;
    }
    uStack_68 = puVar9[5];
    uStack_70 = puVar9[4];
    lStack_58 = puVar9[7];
    uStack_60 = puVar9[6];
    uStack_88 = puVar9[1];
    uStack_90 = *puVar9;
    uStack_78 = puVar9[3];
    uStack_80 = puVar9[2];
    lVar2 = /*UnityEngine.InputSystem.InputActionAsset$$FindBinding*/ func_0x03024f80(lVar2,&uStack_90);
    return lVar2;
  }
  lStack_58 = *(long *)PTR_03a5d648;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  if (lVar3 == 0) goto code_r0x03024b68;
  unaff_x21 = param_3;
  if (*(long *)(lVar2 + 0x18) == 0) {
code_r0x03024ad0:
    lVar4 = unaff_x22;
    if ((int)param_3 != 0) {
code_r0x03024b18:
      uVar6 = func_0x00f78a24(0x3d70368);
      uVar6 = /*System.String$$Format*/ func_0x029bcac4(uVar6,lVar3,lVar2,0);
      func_0x00f78a24(0x3d1fce8);
      uVar7 = func_0x00f78aec();
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar7,uVar6,0);
      goto code_r0x03024c04;
    }
    lVar11 = 0;
code_r0x03024ad8:
    lVar4 = lVar11;
    if (*(long *)PTR_03a5d648 == lStack_58) {
      return lVar11;
    }
    goto code_r0x03024bb0;
  }
  lVar4 = /*System.String$$IndexOf*/ func_0x029cdad0(lVar3,0x2f,0,0);
  if ((int)lVar4 == -1) {
    lVar11 = *(long *)(lVar2 + 0x18);
    if (lVar11 != 0) {
      lVar13 = 0;
      lVar4 = 0;
      do {
        if ((int)*(uint *)(lVar11 + 0x18) <= (int)(uint)lVar13) {
          lVar11 = lVar4;
          if ((lVar4 != 0) || ((param_3 & 1) == 0)) goto code_r0x03024ad8;
          goto code_r0x03024b18;
        }
        if (*(uint *)(lVar11 + 0x18) <= (uint)lVar13) goto code_r0x03024b5c;
        lVar11 = *(long *)(lVar11 + lVar13 * 8 + 0x20);
        unaff_x23 = lVar4;
        if (lVar11 == 0) break;
        lVar11 = /*UnityEngine.InputSystem.InputActionMap$$FindAction*/ func_0x03024e58(lVar11,lVar3,0);
        if (lVar11 != 0) {
          /*UnityEngine.InputSystem.InputAction$$get_currentState*/ func_0x03022910(&uStack_88);
          if (((char)uStack_88 != '\0') ||
             (uVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar11 + 0x28),lVar3,0), (uVar5 & 1) != 0))
          goto code_r0x03024ad8;
          unaff_x22 = lVar11;
          unaff_x23 = lVar11;
          if (lVar4 != 0) {
            unaff_x23 = lVar4;
          }
        }
        lVar11 = *(long *)(lVar2 + 0x18);
        lVar13 = lVar13 + 1;
        lVar4 = unaff_x23;
      } while (lVar11 != 0);
    }
code_r0x03024a70:
    while( true ) {
      do {
        func_0x00f78af4();
code_r0x03024a74:
        unaff_x23 = *(long *)(unaff_x23 + 0x28);
      } while (unaff_x23 == 0);
      uVar10 = *(uint *)(unaff_x23 + 0x18);
      if ((int)uVar10 < 1) break;
      uVar12 = 0;
      while( true ) {
        if (uVar10 <= uVar12) goto code_r0x03024b5c;
        unaff_x22 = *(long *)(unaff_x23 + (long)(int)uVar12 * 8 + 0x20);
        if (unaff_x22 == 0) break;
        auVar14 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x22 + 0x10),0);
        iVar1 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar14._0_8_,auVar14._8_8_,uStack_a8,uStack_a0,3,0);
        lVar11 = unaff_x22;
        if (iVar1 == 0) goto code_r0x03024ad8;
        uVar12 = uVar12 + 1;
        uVar10 = *(uint *)(unaff_x23 + 0x18);
        if ((int)uVar10 <= (int)uVar12) goto code_r0x03024ad0;
      }
    }
    goto code_r0x03024ad0;
  }
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925e8(&uStack_98,lVar3,0,lVar4,0);
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925f4(&uStack_a8,lVar3,(int)lVar4 + 1,0);
  uVar5 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_98,0);
  if (((uVar5 & 1) == 0) && (uVar5 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_a8,0), (uVar5 & 1) == 0)) {
    lVar11 = *(long *)(lVar2 + 0x18);
    unaff_x22 = lVar4;
    if (lVar11 != 0) {
      unaff_x22 = 0;
      do {
        if ((int)*(uint *)(lVar11 + 0x18) <= (int)(uint)unaff_x22) goto code_r0x03024ad0;
        if (*(uint *)(lVar11 + 0x18) <= (uint)unaff_x22) goto code_r0x03024b5c;
        unaff_x23 = *(long *)(lVar11 + unaff_x22 * 8 + 0x20);
        if (unaff_x23 == 0) break;
        auVar14 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x23 + 0x10),0);
        iVar1 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar14._0_8_,auVar14._8_8_,uStack_98,uStack_90,3,0);
        if (iVar1 == 0) goto code_r0x03024a74;
        lVar11 = *(long *)(lVar2 + 0x18);
        unaff_x22 = unaff_x22 + 1;
      } while (lVar11 != 0);
    }
    goto code_r0x03024a70;
  }
code_r0x03024bb4:
  uVar6 = func_0x00f78a24(0x3d6f8e0);
  uVar6 = /*System.String$$Concat*/ func_0x029bdb88(uVar6,lVar3,0);
  func_0x00f78a24(0x3d1fce8);
  uVar7 = func_0x00f78aec();
  uVar8 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar7,uVar6,uVar8,0);
  param_3 = unaff_x21;
code_r0x03024c04:
  uVar8 = func_0x00f78a24(0x3d58100);
  lVar2 = func_0x00f78ac0(uVar7,uVar8);
  puStack_b8 = &UnityEngine_InputSystem_InputActionAsset__ToJson;
  lStack_e0 = lVar4;
  uStack_d8 = param_3;
  uStack_d0 = uVar7;
  uStack_c8 = uVar6;
  puStack_c0 = &stack0xffffffffffffffe0;
  if ((bRam0000000003ebcde1 & 1) == 0) {
    func_0x00f78a20(0x3d279f0);
    bRam0000000003ebcde1 = 1;
  }
  uVar6 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar2,0);
  uVar7 = /*UnityEngine.InputSystem.InputActionMap.WriteFileJson$$FromMaps*/ func_0x030aa3a0(*(undefined8 *)(lVar2 + 0x18),0);
  uStack_e8 = /*UnityEngine.InputSystem.InputControlScheme.SchemeJson$$ToJson*/ func_0x030ba234(*(undefined8 *)(lVar2 + 0x20),0);
  uStack_f8 = uVar6;
  uStack_f0 = uVar7;
  uVar6 = func_0x00f78ae0(/*UnityEngine.InputSystem.InputActionAsset.WriteFileJson_TypeInfo*/ uRam0000000003d279f0,&uStack_f8);
  lVar2 = /*UnityEngine.JsonUtility$$ToJson*/ func_0x03295ac8(uVar6,1,0);
  return lVar2;
code_r0x03024b5c:
  uVar6 = func_0x00f78b24();
  func_0x00f78ac0(uVar6,0);
code_r0x03024b68:
  func_0x00f78a24(0x3d1fcf0);
  lVar3 = func_0x00f78aec();
  uVar6 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(lVar3,uVar6,0);
  uVar6 = func_0x00f78a24(0x3d58100);
  func_0x00f78ac0(lVar3,uVar6);
  lVar4 = unaff_x22;
code_r0x03024bb0:
  ___stack_chk_fail();
  goto code_r0x03024bb4;
}



// ============================================================
// RVA: 0x14698b4 | Atlas.Input.AtlasInput.FindAction
// ============================================================

long Atlas_Input_AtlasInput__FindAction(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  uint uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    auVar13 = func_0x00f78af4();
    puVar8 = auVar13._8_8_;
    lVar2 = *(long *)(auVar13._0_8_ + 0x10);
    if (lVar2 == 0) {
      lVar2 = func_0x00f78af4();
      return lVar2;
    }
    uStack_58 = puVar8[5];
    uStack_60 = puVar8[4];
    lStack_48 = puVar8[7];
    uStack_50 = puVar8[6];
    uStack_78 = puVar8[1];
    uStack_80 = *puVar8;
    uStack_68 = puVar8[3];
    uStack_70 = puVar8[2];
    lVar2 = /*UnityEngine.InputSystem.InputActionAsset$$FindBinding*/ func_0x03024f80(lVar2,&uStack_80);
    return lVar2;
  }
  lStack_48 = *(long *)PTR_03a5d648;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  if (param_2 == 0) goto code_r0x03024b68;
  unaff_x21 = param_3;
  if (*(long *)(lVar2 + 0x18) == 0) {
code_r0x03024ad0:
    lVar3 = unaff_x22;
    if ((int)param_3 != 0) {
code_r0x03024b18:
      uVar5 = func_0x00f78a24(0x3d70368);
      uVar5 = /*System.String$$Format*/ func_0x029bcac4(uVar5,param_2,lVar2,0);
      func_0x00f78a24(0x3d1fce8);
      uVar6 = func_0x00f78aec();
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar6,uVar5,0);
      goto code_r0x03024c04;
    }
    lVar10 = 0;
code_r0x03024ad8:
    lVar3 = lVar10;
    if (*(long *)PTR_03a5d648 == lStack_48) {
      return lVar10;
    }
    goto code_r0x03024bb0;
  }
  lVar3 = /*System.String$$IndexOf*/ func_0x029cdad0(param_2,0x2f,0,0);
  if ((int)lVar3 == -1) {
    lVar10 = *(long *)(lVar2 + 0x18);
    if (lVar10 != 0) {
      lVar12 = 0;
      lVar3 = 0;
      do {
        if ((int)*(uint *)(lVar10 + 0x18) <= (int)(uint)lVar12) {
          lVar10 = lVar3;
          if ((lVar3 != 0) || ((param_3 & 1) == 0)) goto code_r0x03024ad8;
          goto code_r0x03024b18;
        }
        if (*(uint *)(lVar10 + 0x18) <= (uint)lVar12) goto code_r0x03024b5c;
        lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
        unaff_x23 = lVar3;
        if (lVar10 == 0) break;
        lVar10 = /*UnityEngine.InputSystem.InputActionMap$$FindAction*/ func_0x03024e58(lVar10,param_2,0);
        if (lVar10 != 0) {
          /*UnityEngine.InputSystem.InputAction$$get_currentState*/ func_0x03022910(&uStack_78);
          if (((char)uStack_78 != '\0') ||
             (uVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar10 + 0x28),param_2,0), (uVar4 & 1) != 0))
          goto code_r0x03024ad8;
          unaff_x22 = lVar10;
          unaff_x23 = lVar10;
          if (lVar3 != 0) {
            unaff_x23 = lVar3;
          }
        }
        lVar10 = *(long *)(lVar2 + 0x18);
        lVar12 = lVar12 + 1;
        lVar3 = unaff_x23;
      } while (lVar10 != 0);
    }
code_r0x03024a70:
    while( true ) {
      do {
        func_0x00f78af4();
code_r0x03024a74:
        unaff_x23 = *(long *)(unaff_x23 + 0x28);
      } while (unaff_x23 == 0);
      uVar9 = *(uint *)(unaff_x23 + 0x18);
      if ((int)uVar9 < 1) break;
      uVar11 = 0;
      while( true ) {
        if (uVar9 <= uVar11) goto code_r0x03024b5c;
        unaff_x22 = *(long *)(unaff_x23 + (long)(int)uVar11 * 8 + 0x20);
        if (unaff_x22 == 0) break;
        auVar13 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x22 + 0x10),0);
        iVar1 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar13._0_8_,auVar13._8_8_,uStack_98,uStack_90,3,0);
        lVar10 = unaff_x22;
        if (iVar1 == 0) goto code_r0x03024ad8;
        uVar11 = uVar11 + 1;
        uVar9 = *(uint *)(unaff_x23 + 0x18);
        if ((int)uVar9 <= (int)uVar11) goto code_r0x03024ad0;
      }
    }
    goto code_r0x03024ad0;
  }
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925e8(&uStack_88,param_2,0,lVar3,0);
  /*UnityEngine.InputSystem.Utilities.Substring$$.ctor*/ func_0x030925f4(&uStack_98,param_2,(int)lVar3 + 1,0);
  uVar4 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_88,0);
  if (((uVar4 & 1) == 0) && (uVar4 = /*UnityEngine.InputSystem.Utilities.Substring$$get_isEmpty*/ func_0x030925b8(&uStack_98,0), (uVar4 & 1) == 0)) {
    lVar10 = *(long *)(lVar2 + 0x18);
    unaff_x22 = lVar3;
    if (lVar10 != 0) {
      unaff_x22 = 0;
      do {
        if ((int)*(uint *)(lVar10 + 0x18) <= (int)(uint)unaff_x22) goto code_r0x03024ad0;
        if (*(uint *)(lVar10 + 0x18) <= (uint)unaff_x22) goto code_r0x03024b5c;
        unaff_x23 = *(long *)(lVar10 + unaff_x22 * 8 + 0x20);
        if (unaff_x23 == 0) break;
        auVar13 = /*UnityEngine.InputSystem.Utilities.Substring$$op_Implicit*/ func_0x03092b70(*(undefined8 *)(unaff_x23 + 0x10),0);
        iVar1 = /*UnityEngine.InputSystem.Utilities.Substring$$Compare*/ func_0x03092884(auVar13._0_8_,auVar13._8_8_,uStack_88,uStack_80,3,0);
        if (iVar1 == 0) goto code_r0x03024a74;
        lVar10 = *(long *)(lVar2 + 0x18);
        unaff_x22 = unaff_x22 + 1;
      } while (lVar10 != 0);
    }
    goto code_r0x03024a70;
  }
code_r0x03024bb4:
  uVar5 = func_0x00f78a24(0x3d6f8e0);
  uVar5 = /*System.String$$Concat*/ func_0x029bdb88(uVar5,param_2,0);
  func_0x00f78a24(0x3d1fce8);
  uVar6 = func_0x00f78aec();
  uVar7 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar6,uVar5,uVar7,0);
  param_3 = unaff_x21;
code_r0x03024c04:
  uVar7 = func_0x00f78a24(0x3d58100);
  lVar2 = func_0x00f78ac0(uVar6,uVar7);
  puStack_a8 = &UnityEngine_InputSystem_InputActionAsset__ToJson;
  lStack_d0 = lVar3;
  uStack_c8 = param_3;
  uStack_c0 = uVar6;
  uStack_b8 = uVar5;
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((bRam0000000003ebcde1 & 1) == 0) {
    func_0x00f78a20(0x3d279f0);
    bRam0000000003ebcde1 = 1;
  }
  uVar5 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar2,0);
  uVar6 = /*UnityEngine.InputSystem.InputActionMap.WriteFileJson$$FromMaps*/ func_0x030aa3a0(*(undefined8 *)(lVar2 + 0x18),0);
  uStack_d8 = /*UnityEngine.InputSystem.InputControlScheme.SchemeJson$$ToJson*/ func_0x030ba234(*(undefined8 *)(lVar2 + 0x20),0);
  uStack_e8 = uVar5;
  uStack_e0 = uVar6;
  uVar5 = func_0x00f78ae0(/*UnityEngine.InputSystem.InputActionAsset.WriteFileJson_TypeInfo*/ uRam0000000003d279f0,&uStack_e8);
  lVar2 = /*UnityEngine.JsonUtility$$ToJson*/ func_0x03295ac8(uVar5,1,0);
  return lVar2;
code_r0x03024b5c:
  uVar5 = func_0x00f78b24();
  func_0x00f78ac0(uVar5,0);
code_r0x03024b68:
  func_0x00f78a24(0x3d1fcf0);
  param_2 = func_0x00f78aec();
  uVar5 = func_0x00f78a24(0x3d77b00);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(param_2,uVar5,0);
  uVar5 = func_0x00f78a24(0x3d58100);
  func_0x00f78ac0(param_2,uVar5);
  lVar3 = unaff_x22;
code_r0x03024bb0:
  ___stack_chk_fail();
  goto code_r0x03024bb4;
}



// ============================================================
// RVA: 0x14698d4 | Atlas.Input.AtlasInput.FindBinding
// ============================================================

void Atlas_Input_AtlasInput__FindBinding(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uStack_48 = param_2[5];
    uStack_50 = param_2[4];
    uStack_38 = param_2[7];
    uStack_40 = param_2[6];
    uStack_28 = param_2[9];
    uStack_30 = param_2[8];
    uStack_20 = param_2[10];
    uStack_68 = param_2[1];
    uStack_70 = *param_2;
    uStack_58 = param_2[3];
    uStack_60 = param_2[2];
    /*UnityEngine.InputSystem.InputActionAsset$$FindBinding*/ func_0x03024f80(*(long *)(param_1 + 0x10),&uStack_70,param_3,0);
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1469924 | Atlas.Input.AtlasInput.get_KartPhysics
// ============================================================

void Atlas_Input_AtlasInput__get_KartPhysics(void)

{
  return;
}



// ============================================================
// RVA: 0x1469928 | Atlas.Input.AtlasInput.get_AtlasScheme
// ============================================================

ulong Atlas_Input_AtlasInput__get_AtlasScheme(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  int extraout_w1;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  long lStack_c8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  if ((bRam0000000003eb483e & 1) == 0) {
    func_0x00f78a20(0x3d3fb50);
    func_0x00f78a20(0x3d69360);
    bRam0000000003eb483e = 1;
  }
  if (*(int *)(param_2 + 0x48) == -1) {
    if (*(long *)(param_2 + 0x10) != 0) {
      uVar2 = /*UnityEngine.InputSystem.InputActionAsset$$FindControlSchemeIndex*/ func_0x03025624(*(long *)(param_2 + 0x10),/*STR('Atlas')*/ uRam0000000003d69360,0);
      *(undefined4 *)(param_2 + 0x48) = uVar2;
      goto LAB_0146999c;
    }
  }
  else {
LAB_0146999c:
    if (*(long *)(param_2 + 0x10) != 0) {
      auStack_40 = /*UnityEngine.InputSystem.InputActionAsset$$get_controlSchemes*/ func_0x03024594(*(long *)(param_2 + 0x10),0);
      uVar5 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<InputControlScheme>$$get_Item*/ func_0x02748194(&uStack_58,auStack_40,*(undefined4 *)(param_2 + 0x48),
                              uRam0000000003d3fb50);
      param_1[1] = uStack_50;
      *param_1 = uStack_58;
      param_1[2] = uStack_48;
      return uVar5;
    }
  }
  auVar14 = func_0x00f78af4();
  if ((bRam0000000003eb483f & 1) == 0) {
    func_0x00f78a20(0x3d57580);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22838);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb483f = 1;
  }
  lStack_c8 = 0;
  if (auVar14._8_8_ == 0) {
code_r0x01469cd0:
    func_0x00f78af4();
  }
  else {
    uVar5 = /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(auVar14._8_8_,&lStack_c8,uRam0000000003d57580);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if (lStack_c8 == 0) goto code_r0x01469cd0;
    plVar6 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_c8,uRam0000000003d3fe40);
    if (plVar6 != (long *)0x0) {
code_r0x01469ad4:
      lVar10 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar5 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x01469b20;
          }
          piVar13 = piVar13 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01469b20:
      uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar5 & 1) == 0) {
        lVar10 = 0;
        goto joined_r0x01469c14;
      }
      lVar10 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar5 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x01469b7c;
          }
          piVar13 = piVar13 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01469b7c:
      plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      if (plVar8 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x01469cd8;
      }
      if ((*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.Definitions.InputGlyphMappingDefinition_TypeInfo*/ lRam0000000003d22838 + 300)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.InputGlyphMappingDefinition_TypeInfo*/ lRam0000000003d22838 + 300) * 8 + -8
                   ) != /*Atlas.Definitions.InputGlyphMappingDefinition_TypeInfo*/ lRam0000000003d22838)) {
        func_0x00f78e5c(plVar8);
        goto code_r0x01469cd8;
      }
      lVar10 = plVar8[5];
      if (lVar10 != 0) {
        if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
          uVar5 = 0;
          uVar11 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
          do {
            if (uVar11 <= uVar5) {
              uVar9 = func_0x00f78b24();
              func_0x00f78ac0(uVar9,0);
              goto code_r0x01469cd8;
            }
            if (auVar14._0_8_ == 0) {
              func_0x00f78af4();
              goto code_r0x01469cd8;
            }
            /*Core.Input.InputManager$$AddGlyphMappingsForFamily*/ func_0x0164b168(auVar14._0_8_,*(undefined4 *)(lVar10 + 0x20 + uVar5 * 4),plVar8[6],0);
            uVar5 = uVar5 + 1;
            uVar11 = (ulong)*(uint *)(lVar10 + 0x18);
          } while ((long)uVar5 < (long)(int)*(uint *)(lVar10 + 0x18));
        }
        goto code_r0x01469ad4;
      }
      func_0x00f78af4();
      goto code_r0x01469cd8;
    }
  }
  func_0x00f78af4();
code_r0x01469cd8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1469cdc);
  (*pcVar1)();
joined_r0x01469c14:
  if (plVar6 != (long *)0x0) {
    lVar12 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x01469c6c;
        }
        piVar13 = piVar13 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01469c6c:
    uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  if (lVar10 == 0) {
    return uVar5;
  }
  func_0x00f78ac0(lVar10,0);
  if (extraout_w1 != 1) goto code_r0x01469d24;
  plVar8 = (long *)___cxa_begin_catch();
  lVar10 = *plVar8;
  uVar5 = ___cxa_end_catch();
  goto joined_r0x01469c14;
code_r0x01469d24:
  __Unwind_Resume();
  if ((bRam0000000003eb4840 & 1) == 0) {
    func_0x00f78a20(0x3d1fea8);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d6ba50);
    func_0x00f78a20(0x3d70a90);
    bRam0000000003eb4840 = 1;
  }
  puVar7 = *(undefined8 **)(/*Atlas.Gameplay.Kart.AtlasKartPhysicsConsts_TypeInfo*/ lRam0000000003d1fea8 + 0xb8);
  *(undefined8 *)((long)puVar7 + 0x24) = 0;
  *(undefined8 *)((long)puVar7 + 0x1c) = 0;
  puVar7[1] = 0;
  *puVar7 = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  plVar6 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
  if (plVar6 == (long *)0x0) {
LAB_01469e6c:
    func_0x00f78af4();
  }
  else {
    if ((/*STR('Default')*/ lRam0000000003d6ba50 != 0) &&
       (lVar10 = func_0x00f78adc(/*STR('Default')*/ lRam0000000003d6ba50,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0)
       ) {
LAB_01469e78:
      uVar9 = func_0x00f78b14();
      goto code_r0x01469e7c;
    }
    if ((int)plVar6[3] != 0) {
      plVar6[4] = /*STR('Default')*/ lRam0000000003d6ba50;
      uVar3 = /*UnityEngine.LayerMask$$GetMask*/ func_0x03232748(plVar6,0);
      plVar6 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
      if (plVar6 == (long *)0x0) goto LAB_01469e6c;
      if ((/*STR('Obstacle')*/ lRam0000000003d70a90 != 0) &&
         (lVar10 = func_0x00f78adc(/*STR('Obstacle')*/ lRam0000000003d70a90,*(undefined8 *)(*plVar6 + 0x40)),
         lVar10 == 0)) goto LAB_01469e78;
      if ((int)plVar6[3] != 0) {
        plVar6[4] = /*STR('Obstacle')*/ lRam0000000003d70a90;
        uVar4 = /*UnityEngine.LayerMask$$GetMask*/ func_0x03232748(plVar6,0);
        uVar5 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326fc(uVar4 | uVar3,0);
        *(int *)(*(long *)(/*Atlas.Gameplay.Kart.AtlasKartPhysicsConsts_TypeInfo*/ lRam0000000003d1fea8 + 0xb8) + 0x2c) = (int)uVar5;
        return uVar5;
      }
    }
  }
  uVar9 = func_0x00f78b24();
code_r0x01469e7c:
  lVar10 = func_0x00f78ac0(uVar9,0);
  return *(ulong *)(lVar10 + 0x10);
}



