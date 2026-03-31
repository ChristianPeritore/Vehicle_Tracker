#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
struct Entry {
    std::string date;
    double km;
};
class VehicleTracker {
private:
    std::vector<Entry> entries;
public:
    void addEntry(std::string date, double km) {
        // Controllo duplicati e chilometraggio inferiore (logica JS)
        for (const auto& e : entries) {
            if (e.date == date) {
                std::cout << "Errore: Esiste gia' un dato per questa data.\n";
                return;
            }
        }
        if (!entries.empty() && km < entries.back().km) {
            std::cout << "Errore: I km non possono essere inferiori all'ultima lettura.\n";
            return;
        }
        entries.push_back({date, km});
        std::sort(entries.begin(), entries.end(), [](const Entry& a, const Entry& b) {
            return a.date < b.date;
        });
    }
    void displayStats() {
        if (entries.empty()) return;
        double totalDiff = entries.back().km - entries.front().km;
        double maxInc = 0;
        std::string maxDay = "--";
        for (size_t i = 1; i < entries.size(); ++i) {
            double inc = entries[i].km - entries[i-1].size() ? entries[i].km - entries[i-1].km : 0; // Semplificato per brevità
            if (inc > maxInc) {
                maxInc = inc;
                maxDay = entries[i].date;
            }
        }
        double avg = (entries.size() > 1) ? totalDiff / (entries.size() - 1) : 0;
        std::cout << "\n--- DASHBOARD ---" << std::endl;
        std::cout << "Media Giornaliera: " << std::fixed << std::setprecision(1) << avg << " km" << std::endl;
        std::cout << "Record (Singolo Giorno): " << maxInc << " km (" << maxDay << ")" << std::endl;
        std::cout << "Odometro (Parziale): " << entries.back().km << " (" << totalDiff << ")" << std::endl;
    }
};
int main() {
    VehicleTracker tracker;
    tracker.addEntry("2023-10-01", 1000);
    tracker.addEntry("2023-10-02", 1050);
    tracker.addEntry("2023-10-03", 1120);
        tracker.displayStats();
    return 0;
}