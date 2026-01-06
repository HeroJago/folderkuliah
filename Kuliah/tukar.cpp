#include <iostream>
using namespace std;

// fungsi untuk menukar dua nilai
void swap(int* a, int* b) {
    int sementara = *a;

    *a = *b;

    *b = sementara;
}

int main() {
    int a, b;

    // meminta input dari pengguna
    cout << "Masukkan dua bilangan bulat: ";
    cin >> a >> b;

    // menampilkan nilai sebelum ditukar
    cout << "Sebelum ditukar: \n";
    cout << "a = " << a << ", b = " << b << endl;

    // menukar nilai menggunakan pointer
    swap(&a, &b); // kirim alamat a dan b ke fungsi swap

    // menampilkan nilai setelah ditukar 
    cout << "Setelah ditukar: \n";
    cout << "a = " << a << ", b = " << b << endl;
    
    return 0;
}