#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Tiket {
    string namaKereta;
    string kelas;
    int harga;
    char idPrefix;
    int idCounter;
};

struct Penumpang {
    string nama;
    string idTiket;
    string kereta;
    int harga;
};

struct Pembelian {
    string namaPemesan;
    vector<Penumpang> daftarPenumpang;
    int total = 0;
};

int main() {
    Tiket tiket[3][5] = {
        {"Argo Bromo", "Ekonomi", 450000, 'A', 1},
        {"Malabar", "Bisnis", 350000, 'B', 1},
        {"Taksaka", "Executive", 300000, 'C', 1}
    };

    Pembelian data;

    cout << "Masukkan nama pemesan: ";
    getline(cin, data.namaPemesan);

    while (true) {
        cout << "\n=== Daftar Kelas Tiket ===\n";
        for (int i = 0; i < 3; i++) {
            cout << i + 1 << ". " << tiket[i].namaKereta
                << " | " << tiket[i].kelas
                << " | Rp " << tiket[i].harga << "\n";
        }
        cout << "Pilih kelas (1-3, 0 untuk selesai): ";
        int pilih;
        cin >> pilih;

        if (!cin || pilih < 0 || pilih > 3) {
            cout << "Input tidak valid.\n";
            return 1;
        }

        if (pilih == 0) break;

        int idx = pilih - 1;

        cout << "Jumlah tiket: ";
        int qty;
        cin >> qty;

        if (!cin || qty <= 0) {
            cout << "Jumlah tidak valid.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        cin.ignore();

        for (int i = 0; i < qty; i++) {
            Penumpang p;
            cout << "Nama penumpang ke-" << (i + 1) << ": ";
            getline(cin, p.nama);

            p.idTiket = tiket[idx].idPrefix + to_string(tiket[idx].idCounter++);
            p.kereta = tiket[idx].namaKereta;
            p.harga = tiket[idx].harga;

            data.total += p.harga;
            data.daftarPenumpang.push_back(p);
        }

        cout << "Subtotal: Rp " << tiket[idx].harga * qty << "\n";
    }

    cout << "\n\n=== RINGKASAN PEMBELIAN ===\n";
    cout << "Pemesan : " << data.namaPemesan << "\n";
    cout << "---------------------------------------------\n";

    for (auto &p : data.daftarPenumpang) {
        cout << left << setw(20) << p.nama
            << " | Kereta: " << setw(12) << p.kereta
            << " | ID: " << setw(4) << p.idTiket
            << "\n";
    }

    cout << "---------------------------------------------\n";
    cout << "Total bayar: Rp " << data.total << "\n";

    return 0;
}