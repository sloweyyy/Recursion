#include <iostream>
#include <cmath>
using namespace std;

int ChuSoNhoNhat(int);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int min = ChuSoNhoNhat(n);
	cout << "min(n) = " << min;
	return 1;
}

int ChuSoNhoNhat(int n) {
	n = abs(n);
	if (n < 10)
		return n;
	int lc = ChuSoNhoNhat(n / 10);
	int dv = n % 10;
	if (dv < lc)
		lc = dv;
	return lc;
}