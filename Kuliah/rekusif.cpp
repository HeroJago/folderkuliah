#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0)
        return 2;

    if (n == 1 ||  n == 2)
        return 3;

    else 
        return (fib(n - 1) + fib(n - 2));
}

int main() {
    int n = 5;

    cout << "Fibonacci series of 5 numbers is : ";

    for (int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }

    return 0;
}