#include <iostream>
using namespace std;

int main() {
    int quiz, absen, uts, uas, projek;
    string predikat, keputusan;
    float finalAbsen, penilaian;

    cout << "========= Data Nilai =========" << endl;
    cout << "Input Nilai Quiz : ";
    cin >> quiz;
    cout << "Input Nilai Absen : ";
    cin >> absen;
    cout << "Input Nilai UTS : ";
    cin >> uts;
    cout << "Input Nilai UAS : ";
    cin >> uas;
    cout << "Input Nilai Project : ";
    cin >> projek;

    finalAbsen = absen/14 * 100;
    penilaian = (quiz * 0.1) + (finalAbsen * 0.1) + (uts * 0.15) + (uas * 0.2) + (projek * 0.45);

    if (penilaian > 80) {
        predikat = "A";
        keputusan = "Lulus";
    } else if (penilaian > 70) {
        predikat = "B";
        keputusan = "Lulus";
    } else if (penilaian > 60) {
        predikat = "C";
        keputusan = "Lulus";
    } else if (penilaian < 60) {
        predikat = "D";
        keputusan = "Tidak Lulus";
    } else {
        cout << "ERROR!";
    }

    cout << "Kamu dinyatakan " << keputusan << " Dengan Predikat " << predikat << " Dengan Hasil " << penilaian;
    
    return 0;
}