#include <iostream>
using namespace std;

int main() {
    double omset, gajiPokok;
    int totalAbsen, absen, libur;
    string nama;

    cout << "Masukan omset toko bulan ini: ";
    cin >> omset;

    cout << "Masukan total absen dari seluruh karyawan: ";
    cin >> totalAbsen;

    double komisiTotal = (omset - (omset * 0.11)) * 0.05;
    double komisiPerHari = komisiTotal / totalAbsen;

    cout << "Nama karyawan: ";
    cin >> nama;

    cout << "Masukan gaji pokok: ";
    cin >> gajiPokok;

    cout << "Masukan absen: ";
    cin >> absen;

    cout << "Masukan jumlah libur: ";
    cin >> libur;

    double bonus = 0, potongan = 0;
    int maxLibur = 2;

    if (libur == 0) {
        bonus = (gajiPokok / 30) * (30 - libur);
    } else if (libur > maxLibur) {
        potongan = (gajiPokok / 30) * (libur - maxLibur);
    }

    double komisiKaryawan = komisiPerHari * absen;

    double totalGaji = gajiPokok + komisiKaryawan + bonus - potongan;

    cout << "Gaji " << nama << " adalah " << (long long)totalGaji << endl;

    return 0;
}