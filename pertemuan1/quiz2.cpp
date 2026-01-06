#include <iostream>
#include <string>
using namespace std;

int main() {
    double omset;
    int jumlahKaryawan;

    cout << "Masukkan omset toko bulan ini : ";
    cin >> omset;

    cout << "Masukkan total jumlah karyawan : ";
    cin >> jumlahKaryawan;

    double komisiToko = (omset - (omset * 0.11)) * 0.05;

    int totalHadir = 0;
    string nama[100];
    double gajiPokok[100];
    int hadir[100], libur[100];

    for (int i = 0; i < jumlahKaryawan; i++) {
        cout << "\nNama karyawan: ";
        cin >> nama[i];
        cout << "Masukkan gaji pokok: ";
        cin >> gajiPokok[i];
        cout << "Masukkan jumlah hadir: ";
        cin >> hadir[i];
        cout << "Masukkan jumlah libur: ";
        cin >> libur[i];

        totalHadir += hadir[i];
    }

    double komisiPerHari = komisiToko / totalHadir;

    cout << "\n=== Hasil Perhitungan Gaji Karyawan ===\n";

    for (int i = 0; i < jumlahKaryawan; i++) {
        double gajiTotal = 0, gajiDasar = 0, bonus = 0, potongan = 0, komisi = 0;

        if (hadir[i] < 20) {
            gajiDasar = (gajiPokok[i] / 30.0) * hadir[i];
        } else {
            gajiDasar = gajiPokok[i];
        }

        komisi = komisiPerHari * hadir[i];

        if (libur[i] <= 2) {
            int tidakAmbilLibur = 2 - libur[i];
            bonus = (gajiPokok[i] / 30.0) * tidakAmbilLibur;
        }

        if (libur[i] > 2) {
            potongan = (gajiPokok[i] / 30.0) * (libur[i] - 2);
        }

        gajiTotal = gajiDasar + komisi + bonus - potongan;

        cout << "Gaji " << nama[i] << " adalah Rp " << gajiTotal << endl;
    }

    return 0;
}

