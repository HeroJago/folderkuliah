#include <iostream>
using namespace std;

int main() {
    string nama[5], hp[5], asal[5];
    bool terisi[5] = {false, false, false, false, false};
    int menu;

    do {
        cout << "\n=== MENU KONTRAKAN ===" << endl;
        cout << "1. Tampilkan status kamar" << endl;
        cout << "2. Tambah penghuni" << endl;
        cout << "3. Hapus kamar" << endl;
        cout << "4. Edit kamar" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> menu;
        cin.ignore();

        if (menu == 1) {
            cout << "\nStatus kamar:" << endl;
            for (int i = 0; i < 5; i++) {
                if (terisi[i])
                    cout << "Kamar " << i << ": Terisi oleh " << nama[i]
                         << " | HP: " << hp[i]
                         << " | Asal: " << asal[i] << endl;
                else
                    cout << "Kamar " << i << ": Kosong" << endl;
            }

        } else if (menu == 2) {
            bool ada = false;
            for (int i = 0; i < 5; i++) {
                if (!terisi[i]) {
                    ada = true;
                    cout << "\nMasukkan nama penghuni untuk kamar " << i << ": ";
                    getline(cin, nama[i]);
                    cout << "Masukkan nomor HP: ";
                    getline(cin, hp[i]);
                    cout << "Masukkan asal kota: ";
                    getline(cin, asal[i]);
                    terisi[i] = true;
                    cout << "Kamar " << i << " berhasil diisi oleh " << nama[i] << "." << endl;
                    break;
                }
            }
            if (!ada)
                cout << "Semua kamar sudah terisi!" << endl;

        } else if (menu == 3) {
            int no;
            cout << "Masukkan nomor kamar yang ingin dihapus (0-4): ";
            cin >> no;
            cin.ignore();
            if (no < 0 || no > 4)
                cout << "Pilihan tidak valid!" << endl;
            else if (!terisi[no])
                cout << "Kamar sudah kosong!" << endl;
            else {
                terisi[no] = false;
                nama[no] = hp[no] = asal[no] = "";
                cout << "Kamar " << no << " berhasil dikosongkan." << endl;
            }

        } else if (menu == 4) {
            int no;
            cout << "Masukkan nomor kamar yang ingin diedit (0-4): ";
            cin >> no;
            cin.ignore();
            if (no < 0 || no > 4)
                cout << "Pilihan tidak valid!" << endl;
            else if (!terisi[no])
                cout << "Kamar masih kosong, tidak bisa diedit!" << endl;
            else {
                cout << "Masukkan nama baru: ";
                getline(cin, nama[no]);
                cout << "Masukkan nomor HP baru: ";
                getline(cin, hp[no]);
                cout << "Masukkan asal kota baru: ";
                getline(cin, asal[no]);
                cout << "Data kamar " << no << " berhasil diperbarui." << endl;
            }

        } else if (menu == 5) {
            cout << "Program selesai. Terima kasih!" << endl;

        } else {
            cout << "Pilihan tidak valid!" << endl;
        }

    } while (menu != 5);

    return 0;
}
