import re
import json

bank_file = r"C:\wkr\extracted_audio\banks\Bank_Master.strings.bank"
with open(bank_file, "rb") as f:
    data = f.read()

# FMOD strings banks contain paths starting with 'event:/' or 'snapshot:/' or 'bus:/'
paths = re.findall(rb"(?:event|snapshot|bus):/[a-zA-Z0-9_\-/]+", data)
unique_paths = sorted(list(set(p.decode("utf-8", errors="replace") for p in paths)))

print(f"Found {len(unique_paths)} unique FMOD event/bus paths in Bank_Master.strings.bank:")
for p in unique_paths[:25]:
    print(f" - {p}")

out_json = r"C:\wkr\extracted_audio\event_paths.json"
with open(out_json, "w", encoding="utf-8") as f:
    json.dump(unique_paths, f, indent=2)

print(f"Saved event paths to {out_json}")
