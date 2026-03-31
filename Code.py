import json
class VehicleTracker:
    def __init__(self):
        self.entries = []
    def add_entry(self, date, km):
        # Logica di validazione
        if any(e['date'] == date for e in self.entries):
            print("Errore: Data duplicata.")
            return

        if self.entries and km < self.entries[-1]['km']:
            print("Errore: Chilometraggio inferiore all'ultimo inserimento.")
            return
        self.entries.append({"date": date, "km": km})
        self.entries.sort(key=lambda x: x['date'])
    def calculate_stats(self):
        if not self.entries:
            print("Nessun dato disponibile.")
            return
        first_km = self.entries[0]['km']
        last_km = self.entries[-1]['km']
        total_session_km = last_km - first_km
        max_km = 0
        max_day = "--"
        diffs = []
        for i in range(1, len(self.entries)):
            diff = self.entries[i]['km'] - self.entries[i-1]['km']
            diffs.append(diff)
            if diff > max_km:
                max_km = diff
                max_day = self.entries[i]['date']
        avg = sum(diffs) / len(diffs) if diffs else 0
        print(f"\n{' STATUS VEHICLE ':=^30}")
        print(f"Media Giornaliera: {avg:.1f} km")
        print(f"Record Giorno:     {max_km} km ({max_day})")
        print(f"Odometro Totale:   {last_km} km (Parziale: {total_session_km})")
        print("-" * 30)
tracker.calculate_stats()