using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Utilities;

namespace Atlas.Input
{
	public class AtlasInput : IInputActionCollection2, IInputActionCollection, IEnumerable<InputAction>, IEnumerable, IDisposable
	{
		public interface IKartPhysicsActions
		{
			void OnLeftJoystick(InputAction.CallbackContext context);
			void OnRightJoystick(InputAction.CallbackContext context);
			void OnDrift(InputAction.CallbackContext context);
			void OnUse(InputAction.CallbackContext context);
		}

		public struct KartPhysicsActions
		{
			private AtlasInput m_Wrapper;

			public InputAction LeftJoystick => m_Wrapper.m_KartPhysics_LeftJoystick;
			public InputAction RightJoystick => m_Wrapper.m_KartPhysics_RightJoystick;
			public InputAction Drift => m_Wrapper.m_KartPhysics_Drift;
			public InputAction Use => m_Wrapper.m_KartPhysics_Use;
			public bool enabled => Get().enabled;

			public KartPhysicsActions(AtlasInput wrapper)
			{
				m_Wrapper = wrapper;
			}

			public InputActionMap Get()
			{
				return m_Wrapper.m_KartPhysics;
			}

			public void Enable()
			{
				Get().Enable();
			}

			public void Disable()
			{
				Get().Disable();
			}

			public static implicit operator InputActionMap(KartPhysicsActions set)
			{
				return set.Get();
			}

			public void SetCallbacks(IKartPhysicsActions instance)
			{
				if (m_Wrapper.m_KartPhysicsActionsCallbackInterface != null)
				{
					LeftJoystick.started -= m_Wrapper.m_KartPhysicsActionsCallbackInterface.OnLeftJoystick;
					LeftJoystick.performed -= m_Wrapper.m_KartPhysicsActionsCallbackInterface.OnLeftJoystick;
					LeftJoystick.canceled -= m_Wrapper.m_KartPhysicsActionsCallbackInterface.OnLeftJoystick;
					RightJoystick.started -= m_Wrapper.m_KartPhysicsActionsCallbackInterface.OnRightJoystick;
					RightJoystick.performed -= m_Wrapper.m_KartPhysicsActionsCallbackInterface.OnRightJoystick;
					RightJoystick.canceled -= m_Wrapper.m_KartPhysicsActionsCallbackInterface.OnRightJoystick;
					Drift.started -= m_Wrapper.m_KartPhysicsActionsCallbackInterface.OnDrift;
					Drift.performed -= m_Wrapper.m_KartPhysicsActionsCallbackInterface.OnDrift;
					Drift.canceled -= m_Wrapper.m_KartPhysicsActionsCallbackInterface.OnDrift;
					Use.started -= m_Wrapper.m_KartPhysicsActionsCallbackInterface.OnUse;
					Use.performed -= m_Wrapper.m_KartPhysicsActionsCallbackInterface.OnUse;
					Use.canceled -= m_Wrapper.m_KartPhysicsActionsCallbackInterface.OnUse;
				}
				m_Wrapper.m_KartPhysicsActionsCallbackInterface = instance;
				if (instance != null)
				{
					LeftJoystick.started += instance.OnLeftJoystick;
					LeftJoystick.performed += instance.OnLeftJoystick;
					LeftJoystick.canceled += instance.OnLeftJoystick;
					RightJoystick.started += instance.OnRightJoystick;
					RightJoystick.performed += instance.OnRightJoystick;
					RightJoystick.canceled += instance.OnRightJoystick;
					Drift.started += instance.OnDrift;
					Drift.performed += instance.OnDrift;
					Drift.canceled += instance.OnDrift;
					Use.started += instance.OnUse;
					Use.performed += instance.OnUse;
					Use.canceled += instance.OnUse;
				}
			}
		}

		public InputActionAsset asset { get; }
		private readonly InputActionMap m_KartPhysics;
		private IKartPhysicsActions m_KartPhysicsActionsCallbackInterface;
		private readonly InputAction m_KartPhysics_LeftJoystick;
		private readonly InputAction m_KartPhysics_RightJoystick;
		private readonly InputAction m_KartPhysics_Drift;
		private readonly InputAction m_KartPhysics_Use;
		private int m_AtlasSchemeIndex = -1;

		public InputBinding? bindingMask
		{
			get => asset.bindingMask;
			set => asset.bindingMask = value;
		}

		public ReadOnlyArray<InputDevice>? devices
		{
			get => asset.devices;
			set => asset.devices = value;
		}

		public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;

		public IEnumerable<InputBinding> bindings => asset.bindings;

		public KartPhysicsActions KartPhysics => new KartPhysicsActions(this);

		public InputControlScheme AtlasScheme
		{
			get
			{
				if (m_AtlasSchemeIndex == -1)
				{
					m_AtlasSchemeIndex = asset.FindControlSchemeIndex("Atlas");
				}
				return asset.controlSchemes[m_AtlasSchemeIndex];
			}
		}

		public AtlasInput()
		{
			asset = InputActionAsset.FromJson(@"{
    ""name"": ""AtlasInput"",
    ""maps"": [
        {
            ""name"": ""KartPhysics"",
            ""id"": ""bfe51c73-9735-4a4a-b13e-195ea226c539"",
            ""actions"": [
                {
                    ""name"": ""LeftJoystick"",
                    ""type"": ""Value"",
                    ""id"": ""73c39401-8456-45e0-8206-d9ec1f9d30cd"",
                    ""expectedControlType"": ""Stick"",
                    ""processors"": """",
                    ""interactions"": """",
                    ""initialStateCheck"": true
                },
                {
                    ""name"": ""RightJoystick"",
                    ""type"": ""Value"",
                    ""id"": ""a0f08634-b56b-48d3-9e95-5a51765d6e2e"",
                    ""expectedControlType"": ""Stick"",
                    ""processors"": """",
                    ""interactions"": """",
                    ""initialStateCheck"": true
                },
                {
                    ""name"": ""Drift"",
                    ""type"": ""Button"",
                    ""id"": ""629d4b67-47c1-4b8d-be4f-26f07687f8d6"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """",
                    ""initialStateCheck"": false
                },
                {
                    ""name"": ""Use"",
                    ""type"": ""Button"",
                    ""id"": ""c01ae052-7aa1-4c7c-9b10-a3aeb2b8f899"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """",
                    ""initialStateCheck"": false
                }
            ],
            ""bindings"": [
                {
                    ""name"": """",
                    ""id"": ""383c9413-3c6f-4409-a394-d71523f618b9"",
                    ""path"": ""<Gamepad>/leftStick"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""LeftJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": ""WASD"",
                    ""id"": ""a12c7a30-71c3-406c-b23c-0392b9f5aea7"",
                    ""path"": ""2DVector"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""LeftJoystick"",
                    ""isComposite"": true,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": ""up"",
                    ""id"": ""f5570c5b-6ed1-48b9-8ea6-773aee5a6aae"",
                    ""path"": ""<Keyboard>/w"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""LeftJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""down"",
                    ""id"": ""b34906cc-b027-418e-b054-6469d2b20219"",
                    ""path"": ""<Keyboard>/s"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""LeftJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""left"",
                    ""id"": ""9eda9265-5960-43fa-85e2-4f3029f0d767"",
                    ""path"": ""<Keyboard>/a"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""LeftJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""right"",
                    ""id"": ""317f40f6-45a3-4f98-a9d7-2bd61ab2714c"",
                    ""path"": ""<Keyboard>/d"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""LeftJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""Arrow Keys"",
                    ""id"": ""047189f7-ada8-4421-b75d-b2a09e588a36"",
                    ""path"": ""2DVector"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""LeftJoystick"",
                    ""isComposite"": true,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": ""up"",
                    ""id"": ""d80f91a6-5b66-49fc-a3b7-ad22ed14a05d"",
                    ""path"": ""<Keyboard>/upArrow"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""LeftJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""down"",
                    ""id"": ""d5108d01-a7fe-4380-b9c3-e2e105aa1506"",
                    ""path"": ""<Keyboard>/downArrow"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""LeftJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""left"",
                    ""id"": ""e1d482af-b82c-461c-a716-2f5431c19393"",
                    ""path"": ""<Keyboard>/leftArrow"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""LeftJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""right"",
                    ""id"": ""268221c2-6f6b-4d81-af7f-6a47e7ed7636"",
                    ""path"": ""<Keyboard>/rightArrow"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""LeftJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""Face button brake"",
                    ""id"": ""d40de4f6-7df8-4673-817a-0043af98fe7e"",
                    ""path"": ""2DVector"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""LeftJoystick"",
                    ""isComposite"": true,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": ""up"",
                    ""id"": ""e732310c-aecd-475a-a6e2-8ae2fb817399"",
                    ""path"": """",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""LeftJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""down"",
                    ""id"": ""cf979db3-1c0a-4f9a-8bc1-97df022fd8b7"",
                    ""path"": ""<Gamepad>/buttonEast"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""LeftJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""left"",
                    ""id"": ""3dabd46f-72ee-4734-8c67-accdb41f3e82"",
                    ""path"": """",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""LeftJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""right"",
                    ""id"": ""5832f35b-e414-47d9-ae39-07fa99034341"",
                    ""path"": """",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""LeftJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": """",
                    ""id"": ""6fcb79ba-dcb5-4b7b-968e-c7ce941cf7da"",
                    ""path"": ""<Gamepad>/rightStick"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""RightJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": ""IJKL"",
                    ""id"": ""19f56340-8531-46f3-9a75-e4d6fad7bb83"",
                    ""path"": ""2DVector"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""RightJoystick"",
                    ""isComposite"": true,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": ""up"",
                    ""id"": ""53c78ffa-f692-4b21-8099-2676a6a78ca0"",
                    ""path"": ""<Keyboard>/i"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""RightJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""down"",
                    ""id"": ""d60e9907-1861-4471-a3f5-11e5a4d63a89"",
                    ""path"": ""<Keyboard>/k"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""RightJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""left"",
                    ""id"": ""f168c2b1-996c-4169-97a3-069fd32d55ff"",
                    ""path"": ""<Keyboard>/j"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""RightJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""right"",
                    ""id"": ""41520d75-f6c6-4012-a844-4b7bc750a6ab"",
                    ""path"": ""<Keyboard>/l"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""RightJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""NumPad"",
                    ""id"": ""bf4822e5-776e-4a43-93e6-442971b9e4b1"",
                    ""path"": ""2DVector"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""RightJoystick"",
                    ""isComposite"": true,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": ""up"",
                    ""id"": ""9ef8d317-b950-426a-bfb2-4a7e865bdac8"",
                    ""path"": ""<Keyboard>/numpad8"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""RightJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""down"",
                    ""id"": ""0f06e088-5097-4493-96f4-6a492a82ce5a"",
                    ""path"": ""<Keyboard>/numpad2"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""RightJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""left"",
                    ""id"": ""6e5db3c4-85a6-498f-88d9-55541e593a14"",
                    ""path"": ""<Keyboard>/numpad4"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""RightJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""right"",
                    ""id"": ""98c6fe1a-612c-4a61-b0bf-e2fc342bbe21"",
                    ""path"": ""<Keyboard>/numpad6"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""RightJoystick"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": """",
                    ""id"": ""4cc340c9-2a08-4628-93bc-6876cca381ec"",
                    ""path"": ""<Gamepad>/buttonSouth"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""Drift"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""55fea8cf-84d1-40c5-aff4-c657aa559d9d"",
                    ""path"": ""<Gamepad>/rightTrigger"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""Drift"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""41b10125-a42e-4ac6-b075-89e9e811dbd9"",
                    ""path"": ""<Gamepad>/rightShoulder"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""Drift"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""7eccc0af-42f0-4411-8088-e03d89decbd7"",
                    ""path"": ""<Keyboard>/shift"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""Drift"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""2c6bac26-47cc-47e6-8053-fcee0e334d62"",
                    ""path"": ""<Gamepad>/buttonWest"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""Use"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""c097484f-2642-4d2d-a284-690b3fec9639"",
                    ""path"": ""<Gamepad>/leftTrigger"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""Use"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""04b6307c-eb7b-4061-ba21-d729d5afdb5f"",
                    ""path"": ""<Gamepad>/leftShoulder"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""Use"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""88f73b73-d273-4669-8e83-094b762a9240"",
                    ""path"": ""<Keyboard>/space"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Atlas"",
                    ""action"": ""Use"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                }
            ]
        }
    ],
    ""controlSchemes"": [
        {
            ""name"": ""Atlas"",
            ""bindingGroup"": ""Atlas"",
            ""devices"": [
                {
                    ""devicePath"": ""<Keyboard>"",
                    ""isOptional"": true,
                    ""isOR"": false
                },
                {
                    ""devicePath"": ""<Gamepad>"",
                    ""isOptional"": true,
                    ""isOR"": false
                },
                {
                    ""devicePath"": ""<Joystick>"",
                    ""isOptional"": true,
                    ""isOR"": false
                },
                {
                    ""devicePath"": ""<Touchscreen>"",
                    ""isOptional"": false,
                    ""isOR"": false
                }
            ]
        }
    ]
}");
			m_KartPhysics = asset.FindActionMap("KartPhysics", true);
			m_KartPhysics_LeftJoystick = m_KartPhysics.FindAction("LeftJoystick", true);
			m_KartPhysics_RightJoystick = m_KartPhysics.FindAction("RightJoystick", true);
			m_KartPhysics_Drift = m_KartPhysics.FindAction("Drift", true);
			m_KartPhysics_Use = m_KartPhysics.FindAction("Use", true);
		}

		public void Dispose()
		{
			UnityEngine.Object.Destroy(asset);
		}

		public bool Contains(InputAction action)
		{
			return asset.Contains(action);
		}

		public IEnumerator<InputAction> GetEnumerator()
		{
			return asset.GetEnumerator();
		}

		IEnumerator IEnumerable.GetEnumerator()
		{
			return GetEnumerator();
		}

		public void Enable()
		{
			asset.Enable();
		}

		public void Disable()
		{
			asset.Disable();
		}

		public InputAction FindAction(string actionNameOrId, bool throwIfNotFound = false)
		{
			return asset.FindAction(actionNameOrId, throwIfNotFound);
		}

		public int FindBinding(InputBinding bindingMask, out InputAction action)
		{
			return asset.FindBinding(bindingMask, out action);
		}
	}
}
