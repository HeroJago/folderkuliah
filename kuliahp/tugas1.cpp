#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

struct Pegawai {
    string nama;
    string jabatan;
    long gaji;
    vector<Pegawai*> bawahans;

    Pegawai(string n, string j, long g) : nama(n), jabatan(j), gaji(g) {}
};

class Organisasi {
private:
    Pegawai* root;

public:
    Organisasi(string namaCEO, string jabatanCEO, long gajiCEO) {
        root = new Pegawai(namaCEO, jabatanCEO, gajiCEO);
    }

    Pegawai* getRoot() {
        return root;
    }

    // Tambah pegawai sebagai bawahan dari pegawai dengan nama tertentu
    bool tambahPegawai(string atasanNama, string nama, string jabatan, long gaji) {
        Pegawai* atasan = cariPegawai(root, atasanNama);
        if (atasan) {
            Pegawai* pegawaiBaru = new Pegawai(nama, jabatan, gaji);
            atasan->bawahans.push_back(pegawaiBaru);
            return true;
        }
        return false;
    }

    // Menampilkan struktur organisasi secara hierarki
    void tampilkanStruktur(Pegawai* node, int level = 0) {
        if (!node) return;
        cout << string(level * 4, ' ') << "- " << node->nama << " (" << node->jabatan << ", Gaji: " << node->gaji << ")\n";
        for (Pegawai* bawah : node->bawahans) {
            tampilkanStruktur(bawah, level + 1);
        }
    }

    // Mencari pegawai berdasarkan nama (rekursif DFS)
    Pegawai* cariPegawai(Pegawai* node, string nama) {
        if (!node) return nullptr;
        if (node->nama == nama) return node;

        for (Pegawai* bawah : node->bawahans) {
            Pegawai* found = cariPegawai(bawah, nama);
            if (found) return found;
        }
        return nullptr;
    }

    // Cari pegawai berdasarkan nama & jabatan dan tampilkan semua bawahannya
    void cariDanTampilkanBawahan(string nama, string jabatan) {
        Pegawai* target = cariPegawaiJabatan(root, nama, jabatan);
        if (target) {
            cout << "Ditemukan: " << target->nama << " (" << target->jabatan << ")\n";
            cout << "Bawahannya:\n";
            tampilkanStruktur(target, 1);
        } else {
            cout << "Pegawai tidak ditemukan.\n";
        }
    }

    Pegawai* cariPegawaiJabatan(Pegawai* node, string nama, string jabatan) {
        if (!node) return nullptr;
        if (node->nama == nama && node->jabatan == jabatan) return node;

        for (Pegawai* bawah : node->bawahans) {
            Pegawai* found = cariPegawaiJabatan(bawah, nama, jabatan);
            if (found) return found;
        }
        return nullptr;
    }

    // Hitung total gaji di satu departemen (subtree dari node)
    long hitungTotalGaji(Pegawai* node) {
        if (!node) return 0;
        long total = node->gaji;
        for (Pegawai* bawah : node->bawahans) {
            total += hitungTotalGaji(bawah);
        }
        return total;
    }

    // Tampilkan pegawai per level menggunakan queue (BFS)
    void tampilkanLevelOrder() {
        if (!root) return;

        queue<Pegawai*> q;
        q.push(root);

        int level = 0;
        while (!q.empty()) {
            int size = q.size();
            cout << "Level " << level << ":\n";
            for (int i = 0; i < size; ++i) {
                Pegawai* curr = q.front(); q.pop();
                cout << "  " << curr->nama << " (" << curr->jabatan << ", Gaji: " << curr->gaji << ")\n";
                for (Pegawai* bawah : curr->bawahans) {
                    q.push(bawah);
                }
            }
            level++;
        }
    }
};

// ----------------------------
// Demo Penggunaan Program
// ----------------------------
int main() {
    Organisasi org("Andi", "CEO", 20000000);

    org.tambahPegawai("Andi", "Budi", "Manajer Keuangan", 15000000);
    org.tambahPegawai("Andi", "Cici", "Manajer HRD", 14000000);
    org.tambahPegawai("Budi", "Dodi", "Staff Keuangan", 8000000);
    org.tambahPegawai("Budi", "Eka", "Staff Pajak", 7500000);
    org.tambahPegawai("Cici", "Fina", "Staff HR", 7000000);

    cout << "=== Struktur Organisasi ===\n";
    org.tampilkanStruktur(org.getRoot());

    cout << "\n=== Cari Pegawai dan Bawahannya ===\n";
    org.cariDanTampilkanBawahan("Budi", "Manajer Keuangan");

    cout << "\n=== Total Gaji di Departemen Budi ===\n";
    Pegawai* dept = org.cariPegawai(org.getRoot(), "Budi");
    cout << "Total Gaji: " << org.hitungTotalGaji(dept) << "\n";

    cout << "\n=== Tampilkan Pegawai Level per Level ===\n";
    org.tampilkanLevelOrder();

    return 0;
}
