#include <iostream>

int main() {
    // int nilai = 80;

    // if(nilai >= 80) {
    //     if(nilai >= 80 || nilai <= 85) {
    //         cout << "AnJAY WANGSAFF!";
    //     } else if (nilai >= 80 || nilai <= 85) {
    //         cout << "AnJAY GURINJAI";
    //     }
    // } else {
    //     cout << "AnJAY MABAR";
    // }

    string username, password;

    cout << "Masukkan Username : ";
    cin >> username;

    cout << "Masukkan Password : ";  
    cin >> password;

    if (username == "admin" && password == "admin123") {
        cout << "Kamu Berhasil Login";
    } else {
        cout << "Password kamu salah";
    }

    

    return 0;
}
