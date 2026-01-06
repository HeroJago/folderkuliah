#include <iostream>
using namespace std;

int nSum(int n) {
    if (n == 0) {
        return 0;
    }

    int res = 5 + nSum(n - 1);
    return res;
}

int main() {
    int n = 1;

    int sum = nSum(n);

    cout << "Sum = " << sum;

    return 0;
}
