#include <iostream>
using namespace std;

void menuUtama() {
    cout << "== Menu Utama ==\n";
    cout << "1. Pilih Menu Makanan";
    cout << "2. Pilih Menu Minuman";
    cout << "3. Total Keseluruhan Pembelanjaan";
    cout << "4. Exit";
    cout << "Masukkan Pilihan : ";
}

void menuMakanan() {
    cout << "== Menu Makanan ==";
    cout << "1. Nasi Goreng (Rp. 15.000)";
    cout << "2. Mie Ayam (Rp. 12.000)";
    cout << "3. Sate Ayam (Rp. 20.000)";
}

void menuMinuman() {
    cout << "== Menu Minuman ==";
    cout << "1. Es Teh (Rp. 5.000)";
    cout << "2. Kopi (Rp. 7.000)";
    cout << "3. Jus Jeruk (Rp. 10.000)";
}

int main() {
    int pilihan, makanan, Minuman

    switch (pilihanUtama) {
            case 1: {
                cout << "\n--- Menu Makanan ---" << endl;
                cout << "1. Nasi Goreng (Rp 15.000)" << endl;
                cout << "2. Mie Ayam (Rp 12.000)" << endl;
                cout << "3. Sate Ayam (Rp 20.000)" << endl;
                cout << "Pilih menu makanan (1-3): ";
                cin >> pilihanMenu;

                cout << "Masukkan jumlah yang ingin dibeli: ";
                cin >> jumlah;

                while (jumlah <= 0) {
                    cout << "Jumlah tidak boleh 0 atau negatif! Masukkan lagi: ";
                    cin >> jumlah;
                }

                if (pilihanMenu == 1) {
                    totalBelanja += 15000 * jumlah;
                    cout << "Kamu membeli " << jumlah << " Nasi Goreng." << endl;
                } else if (pilihanMenu == 2) {
                    totalBelanja += 12000 * jumlah;
                    cout << "Kamu membeli " << jumlah << " Mie Ayam." << endl;
                } else if (pilihanMenu == 3) {
                    totalBelanja += 20000 * jumlah;
                    cout << "Kamu membeli " << jumlah << " Sate Ayam." << endl;
                } else {
                    cout << "Pilihan makanan tidak valid!" << endl;
                }
                break;
            }

            case 2: {
                cout << "\n--- Menu Minuman ---" << endl;
                cout << "1. Es Teh (Rp 5.000)" << endl;
                cout << "2. Kopi (Rp 7.000)" << endl;
                cout << "3. Jus Jeruk (Rp 10.000)" << endl;
                cout << "Pilih menu minuman (1-3): ";
                cin >> pilihanMenu;

                cout << "Masukkan jumlah yang ingin dibeli: ";
                cin >> jumlah;

                while (jumlah <= 0) { // validasi input
                    cout << "Jumlah tidak boleh 0 atau negatif! Masukkan lagi: ";
                    cin >> jumlah;
                }

                if (pilihanMenu == 1) {
                    totalBelanja += 5000 * jumlah;
                    cout << "Kamu membeli " << jumlah << " Es Teh." << endl;
                } else if (pilihanMenu == 2) {
                    totalBelanja += 7000 * jumlah;
                    cout << "Kamu membeli " << jumlah << " Kopi." << endl;
                } else if (pilihanMenu == 3) {
                    totalBelanja += 10000 * jumlah;
                    cout << "Kamu membeli " << jumlah << " Jus Jeruk." << endl;
                } else {
                    cout << "Pilihan minuman tidak valid!" << endl;
                }
                break;
            }

            case 3:
                cout << "\n=== Total Keseluruhan Belanja ===" << endl;
                cout << "Total: Rp " << totalBelanja << endl;
                break;

            case 4:
                cout << "\nTerima kasih sudah berbelanja di Warung David!" << endl;
                return 0;

            default:
                cout << "Pilihan tidak valid! Silakan pilih 1-4." << endl;
        }

        cout << "\nApakah ingin kembali ke menu utama? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y'); // <-- do...while supaya menu utama terus muncul

    cout << "Masukkan Jumlah Yang Ingin Dibeli : ";



    return 0;
}