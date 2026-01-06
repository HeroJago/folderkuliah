#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double N1, N2, N3;
	double T, L;
	
	cout << "Masukkan panjang sisi 1, 2, 3";
	cin >> N1 >> N2 >> N3;
	
	T = (N1 + N2 + N3) / 2;
	
	L = sqrt(T * (T - N1) * (T - N2) * (T - N3));
	
	cout << "\nLuas segitiga adalah: " << L << endl;
	
	
	return 0;
}
