#include <iostream>
using namespace std;

int main() {
    int angka;
    
    cout << "Masukkan 5 digit bilangan: ";
    cin >> angka;

    int puluhRibuan = angka / 10000;
    int ribuan = (angka / 1000) % 10;
    int ratusan = (angka / 100) % 10;
    int puluhan = (angka / 10) % 10;
    int satuan = angka % 10;

    cout << "Digit puluh ribuan: " << puluhRibuan << endl;
    cout << "Digit ribuan: " << ribuan << endl;
    cout << "Digit ratusan: " << ratusan << endl;
    cout << "Digit puluhan: " << puluhan << endl;
    cout << "Digit satuan: " << satuan << endl;

    return 0;
}
