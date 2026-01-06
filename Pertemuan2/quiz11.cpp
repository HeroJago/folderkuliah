#include <iostream>
using namespace std;

int main() {
    int pilihan, jam, tarif;
    char ulang = 'y';
    
    do {
        cout << "=== Parkir Mall Jati Permata ===" << endl;
        cout << "Silahkan Masukan Jenis Kendaraan" << endl;
        cout << "1. Motor" << endl;
        cout << "2. Mobil" << endl;
        cout << "3. Kendaraan Besar" << endl;
        cout << "Masukan Pilihan (1-3): ";
        cin >> pilihan;

        cout << "Masukkan lama parkir (jam): ";
        cin >> jam;

        switch (pilihan) {
            case 1:
                if (jam <= 2) {
                    tarif = 2000;
                } else if (jam > 10) {
                    tarif = 10000;
                } else {
                    tarif = 2000 + (jam - 2) * 1000;
                }
                cout << "Jenis Kendaraan: Motor" << endl;

            case 2:
                if (jam <= 2) {
                    tarif = 3000;
                } else if (jam > 10) {
                    tarif = 20000;
                } else {
                    tarif = 3000 + (jam - 2) * 2000;
                }
                cout << "Jenis Kendaraan: Mobil" << endl;
                
            case 3:
                if (jam <= 2) {
                    tarif = 5000;
                } else if (jam > 10) {
                    tarif = 30000;
                } else {
                    tarif = 5000 + (jam - 2) * 3000;
                }
                cout << "Jenis Kendaraan: Kendaraan Besar" << endl;

            default:
                cout << "Pilihan tidak valid!" << endl;

        cout << "Durasi Parkir Selama (jam) : " << jam << " jam" << endl;
        cout << "Total Biaya Parkir : Rp " << tarif << endl;

        cout << "Ulang? (Y/N) : ";
        cin >> ulang;
        }
    } while (ulang == 'Y' || ulang == 'y');

    return 0;
}
