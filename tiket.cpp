#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    string tiket[3][3] = {
        {"Argo Bromo", "Ekonomi", "450000"},
        {"Malabar", "Bisnis", "350000"},
        {"Taksaka", "Executive", "300000"}
    };

    struct {
        const int nKelas = 3;
        int total = 0;
    } varTiket;

    int purchased[3] = {0,0,0};
    bool demo = (argc > 1 && string(argv[1]) == "demo");
    if (demo) {
        purchased[0] = 2;
        purchased[2] = 1;

        cout << "=== Pemesanan Tiket Kereta Api ===\n";
        for (int i = 0; i < varTiket.nKelas; ++i) {
            int price = stoi(tiket[i][2]);
            if (purchased[i] > 0) {
                cout << tiket[i][0] << " x" << purchased[i]
                     << " = Rp " << purchased[i] * price << "\n";
                varTiket.total += purchased[i] * price;
            }
        }
        cout << "Total bayar: Rp " << varTiket.total << "\n";
        return 0;
    }

    while (true) {
        cout << "Daftar kelas tiket:\n";
        for (int i = 0; i < varTiket.nKelas; ++i) {
            cout << i + 1 << ". " << tiket[i][0] << " - Rp " << tiket[i][1] << "\n";
        }
        cout << "Pilih kelas (1-" << varTiket.nKelas << ", 0 untuk selesai): ";
        int pilih;
        if (!(cin >> pilih)) {
            cout << "Input tidak valid. Keluar.\n";
            return 1;
        }
        if (pilih == 0) break;
        if (pilih < 1 || pilih > varTiket.nKelas) {
            cout << "Pilihan tidak valid. Coba lagi.\n\n";
            continue;
        }

        cout << "Jumlah tiket: ";
        int qty;
        if (!(cin >> qty) || qty <= 0) {
            cout << "Jumlah tidak valid. Kembali ke menu.\n\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        purchased[pilih - 1] += qty;
        int price = stoi(tiket[pilih - 1][2]);
        cout << "Subtotal: Rp " << price * qty << "\n\n";
    }

    cout << "=== Ringkasan Pembelian ===\n";
    for (int i = 0; i < varTiket.nKelas; ++i) {
        int price = stoi(tiket[i][1]);
        if (purchased[i] > 0) {
            cout << tiket[i][0] << " x" << purchased[i]
                 << " = Rp " << price * purchased[i] << "\n";
            varTiket.total += price * purchased[i];
        }
    }
    cout << "Total bayar: Rp " << varTiket.total << "\n";
    return 0;
}
