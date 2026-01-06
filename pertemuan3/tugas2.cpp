#include <iostream>
#include <fstream>
#include <iomanip>  // setw

using namespace std;

int main() {
    int jumlahProduk;
    cout << "Masukkan jumlah produk yang terjual hari ini: ";
    cin >> jumlahProduk;
    cin.ignore(); // Membersihkan newline setelah input jumlahProduk

    string namaProduk[jumlahProduk];
    int jumlahTerjual[jumlahProduk];
    int hargaPerProduk[jumlahProduk];
    long long totalHarga[jumlahProduk];
    long long totalPendapatan = 0;

    for (int i = 0; i < jumlahProduk; i++) {
        cout << "\nMasukkan nama produk ke-" << i + 1 << " (tanpa spasi): ";
        getline(cin, namaProduk[i]);
        cout << "Masukkan jumlah produk terjual: ";
        cin >> jumlahTerjual[i];
        cout << "Masukkan harga per produk : Rp. ";
        cin >> hargaPerProduk[i];
        cin.ignore();  // membersihkan newline sebelum input nama produk berikutnya

        totalHarga[i] = (long long)jumlahTerjual[i] * hargaPerProduk[i];
        totalPendapatan += totalHarga[i];
    }

    cout << "\n\n====== DATA PENJUALAN TOKO KARYA BUNDO ======\n";
    cout << left << setw(10) << "Nama" 
         << right << setw(10) << "Jumlah" 
         << right << setw(10) << "Harga" 
         << right << setw(15) << "Total" << "\n";

    for (int i = 0; i < jumlahProduk; i++) {
        cout << left << setw(10) << namaProduk[i] 
             << right << setw(10) << jumlahTerjual[i]
             << right << setw(10) << hargaPerProduk[i]
             << right << setw(15) << totalHarga[i] << "\n";
    }

    cout << "\nTotal Pendapatan Toko Hari Ini: " << totalPendapatan << endl;

    // Menyimpan data ke file penjualan.txt
    ofstream file("penjualan.txt");
    if (file.is_open()) {
        file << "===== LAPORAN PENJUALAN TOKO =====\n";
        file << left << setw(10) << "Nama"
             << right << setw(10) << "Jumlah"
             << right << setw(10) << "Harga"
             << right << setw(15) << "Total" << "\n";

        for (int i = 0; i < jumlahProduk; i++) {
            file << left << setw(10) << namaProduk[i] 
                 << right << setw(10) << jumlahTerjual[i]
                 << right << setw(10) << hargaPerProduk[i]
                 << right << setw(15) << totalHarga[i] << "\n";
        }
        file << "\nTotal Pendapatan: " << totalPendapatan << "\n";
        file.close();
        cout << "\nData Penjualan Berhasil Disimpan Ke File 'penjualan.txt'!" << endl;
    } else {
        cout << "Gagal membuka file untuk menyimpan data!" << endl;
    }

    return 0;
}

