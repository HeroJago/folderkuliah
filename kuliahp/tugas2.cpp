#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <string>
#include <set>
#include <stack>
using namespace std;

// Struktur data untuk menyimpan jaringan halte (graf)
class TransportasiKota {
private:
    map<string, vector<string>> graf; // adjacency list

public:
    // Tambah rute antar halte (dua arah)
    void tambahRute(const string& dari, const string& ke) {
        graf[dari].push_back(ke);
        graf[ke].push_back(dari);
    }

    // Tampilkan seluruh koneksi antar halte
    void tampilkanJaringan() {
        cout << "\n=== DAFTAR KONEKSI ANTAR HALTE ===\n";
        for (auto& pair : graf) {
            cout << pair.first << " -> ";
            for (auto& tetangga : pair.second)
                cout << tetangga << " ";
            cout << endl;
        }
    }

    // Cek konektivitas menggunakan DFS
    bool terhubungDFS(const string& awal, const string& tujuan) {
        set<string> dikunjungi;
        stack<string> tumpukan;
        tumpukan.push(awal);

        while (!tumpukan.empty()) {
            string halte = tumpukan.top();
            tumpukan.pop();

            if (halte == tujuan) return true;
            if (dikunjungi.count(halte)) continue;

            dikunjungi.insert(halte);

            for (auto& next : graf[halte]) {
                if (!dikunjungi.count(next))
                    tumpukan.push(next);
            }
        }
        return false;
    }

    // Cari jalur tercepat menggunakan BFS
    void jalurTercepatBFS(const string& awal, const string& tujuan) {
        map<string, string> parent; // untuk melacak jalur
        queue<string> antrian;
        set<string> dikunjungi;

        antrian.push(awal);
        dikunjungi.insert(awal);
        parent[awal] = "";

        bool ditemukan = false;

        while (!antrian.empty()) {
            string halte = antrian.front();
            antrian.pop();

            if (halte == tujuan) {
                ditemukan = true;
                break;
            }

            for (auto& next : graf[halte]) {
                if (!dikunjungi.count(next)) {
                    dikunjungi.insert(next);
                    parent[next] = halte;
                    antrian.push(next);
                }
            }
        }

        if (!ditemukan) {
            cout << "Tidak ada jalur dari " << awal << " ke " << tujuan << ".\n";
            return;
        }

        // Rekonstruksi jalur dari parent map
        vector<string> path;
        string current = tujuan;
        while (current != "") {
            path.push_back(current);
            current = parent[current];
        }
        reverse(path.begin(), path.end());

        cout << "\n=== JALUR TERCEPAT DARI " << awal << " KE " << tujuan << " ===\n";
        for (int i = 0; i < path.size(); i++) {
            cout << path[i];
            if (i != path.size() - 1) cout << " -> ";
        }
        cout << "\nJumlah halte yang dilewati: " << path.size() - 1 << endl;
    }
};

// ==================== FUNGSI UTAMA ====================
int main() {
    TransportasiKota kota;

    // Tambah rute antar halte (contoh data)
    kota.tambahRute("A", "B");
    kota.tambahRute("A", "C");
    kota.tambahRute("B", "D");
    kota.tambahRute("C", "E");
    kota.tambahRute("D", "E");
    kota.tambahRute("E", "F");

    kota.tampilkanJaringan();

    string asal, tujuan;
    cout << "\nMasukkan halte asal  : ";
    cin >> asal;
    cout << "Masukkan halte tujuan: ";
    cin >> tujuan;

    // ⿡ Cek apakah terhubung (DFS)
    if (kota.terhubungDFS(asal, tujuan))
        cout << asal << " dan " << tujuan << " saling terhubung.\n";
    else {
        cout << asal << " dan " << tujuan << " tidak terhubung.\n";
        return 0;
    }

    // ⿢ Jalur tercepat (BFS)
    kota.jalurTercepatBFS(asal, tujuan);

    return 0;
}
