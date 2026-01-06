#include <iostream>
using namespace std;

int sequentialSearch(int *array, int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (array[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int result = sequentialSearch(arr, size, key);

    if (result != -1) {
        cout << "Elemen ditemukan di index : " << result << endl;
    } else {
        cout << "Elemen tidak ditemukan." << endl;
    }

    return 0;
}