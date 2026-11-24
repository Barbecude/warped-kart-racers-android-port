namespace Atlas.Input
{
	public class KartInputManager
	{
		private AtlasInput _atlasInput;
		private bool _inited;

		public AtlasInput.KartPhysicsActions KartPhysicsAction
		{
			get
			{
				if (_atlasInput == null)
				{
					Init(null);
				}
				return _atlasInput.KartPhysics;
			}
		}

		public void Init(object inputManager)
		{
			if (!_inited)
			{
				_atlasInput = new AtlasInput();
				_atlasInput.KartPhysics.Enable();
				_inited = true;
			}
		}

		public void DeInit()
		{
			if (_inited)
			{
				_inited = false;
			}
		}

		public void Update(object updateParams)
		{
		}

		public void ResetLeftJoystick()
		{
			if (_atlasInput != null)
			{
				_atlasInput.KartPhysics.LeftJoystick.Reset();
			}
		}
	}
}
