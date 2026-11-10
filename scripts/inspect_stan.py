import UnityPy

bundle_path = r"C:\Users\Zevaldo\AppData\Local\Temp\rea-extracted-fc8a3516-3781-45b7-be25-04e71bd99943\Payload\Warped Kart Racers.app\Data\Raw\aa\iOS\definitions_assets_all_db99fdac7a48e63a813a69d2085ca536.bundle"
env = UnityPy.load(bundle_path)

for obj in env.objects:
    if obj.type.name == "MonoBehaviour":
        data = obj.read()
        name = getattr(data, "m_Name", None) or getattr(data, "name", None)
        if name == "Character_AD_Stan":
            print("Found Character_AD_Stan!")
            try:
                tree = obj.read_typetree()
                import pprint
                pprint.pprint(tree)
            except Exception as e:
                print("read_typetree exception:", e)
                # Raw bytes
                raw = obj.get_raw_data()
                print("Raw bytes length:", len(raw))
            break
