#include <iostream>
using namespace std;

int nSum() {
    if (n == 0) {
        return 0;
    }

    int res = n + nSum(n - 1);
    return res;
}

int main() {
    int n = 5;

    int sum = nSum(n);

    cout << "Sum = " << sum;

    return 0;
}