#include <iostream>
using namespace std;

int main() {
    // deklarasi array 5 bilangan bulat
    int arr[5] = {1, 2, 3, 4, 5};

    // deklarasi pointer yang menunjuk ke array
    int* ptr = arr;

    // gunakan pointer dan loop untuk mengubah nilai array
    for (int i = 0; i < 5; i++) {
        // ketikkan setiap elemn array dengan 2 menggunakan pointer
        *(ptr + i) = *(ptr + i) * 2;
    }

    // cetak hasil array yang diubah
    cout << "array setelah dikalikan 2: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}