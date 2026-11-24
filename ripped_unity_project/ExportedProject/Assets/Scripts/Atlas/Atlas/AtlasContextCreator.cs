using System.Collections.Generic;
using Atlas.Contexts;
using Atlas.FrontEnd;
using Core.Contexts;

namespace Atlas
{
	public static class AtlasContextCreator
	{
		public static List<IContext> CreateContexts()
		{
			List<IContext> list = new List<IContext>();
			list.Add(new RaceGameContext());
			list.Add(new BattleGameContext());
			list.Add(new FrontEndContext());
			return list;
		}
	}
}
