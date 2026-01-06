#include <iostream>
using namespace std;

int main() {
    int pilihanUtama, pilihanMenu, jumlah;
    int totalBelanja = 0;
    char ulang;

    do {
        cout << "\n=== Menu Utama Warung Makan Esgul===" << endl;
        cout << "1. Pilih Menu Makanan" << endl;
        cout << "2. Pilih Menu Minuman" << endl;
        cout << "3. Lihat Total Keseluruhan Belanja" << endl;
        cout << "4. Exit" << endl;
        cout << "Masukkan pilihan Anda (1-4): ";
        cin >> pilihanUtama;

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

                while (jumlah <= 0) {
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

    } while (ulang == 'y' || ulang == 'Y');

    cout << "\n=== Program Kasir Selesai ===" << endl;
    cout << "Total akhir belanja Anda: Rp " << totalBelanja << endl;

    return 0;
}