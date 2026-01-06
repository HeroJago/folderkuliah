#include <iostream>
#include <cmath>
using namespace std;

double hitungT(double n1, double n2, double n3) {
    double hasil;

    hasil = (n1 + n2 + n3 / 2);

    return hasil;
}

double luas(double t, double n1, double n2, double n3) {
    double rumus = (t * (t - n1) * (t - n2) * (t - n3));

    double hasil = sqrt(rumus);
    return hasil;
}

int main() {
    double n1, n2, n3;

    cout << "masukkan n1, n2, n3 : ";
    cin >> n1 >> n2 >> n3;

    double t = hitungT(n1, n2, n3);

    double hasilAkhir = luas(t, n1, n2, n3);

    cout << "Hasil akhir : " << hasilAkhir;
    return 0;
}