#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> number;

    number.push("T");
    number.push("Y");
    number.push("P");
    number.push("Z");
    number.push("K");

    number.pop();
    number.pop();

    number.push("30");
    number.push("35");

    stack<string> copy;
    stack<string> temp = number;

    cout << "Menampilkan Keseluruhan elemen: " << endl;
    while (!number.empty()) {
        cout << number.top() << " ";
        number.pop();
    }

    return 0; 
}