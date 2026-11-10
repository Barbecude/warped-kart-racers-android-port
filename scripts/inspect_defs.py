import UnityPy

bundle_path = r"C:\Users\Zevaldo\AppData\Local\Temp\rea-extracted-fc8a3516-3781-45b7-be25-04e71bd99943\Payload\Warped Kart Racers.app\Data\Raw\aa\iOS\definitions_assets_all_db99fdac7a48e63a813a69d2085ca536.bundle"
env = UnityPy.load(bundle_path)

count = 0
for obj in env.objects:
    if obj.type.name == "MonoBehaviour":
        data = obj.read()
        name = getattr(data, "m_Name", None) or getattr(data, "name", None)
        print(f"[{count}] Name: {name}, script: {getattr(data, 'm_Script', None)}")
        count += 1
        if count >= 15:
            break
