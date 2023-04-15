#include <iostream>
#include <cmath>
using namespace std;

float TinhAn(int);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float S = TinhAn(n);
	cout << "a(n) = " << S;
	return 1;
}

float TinhAn(int n) {
	if (n == 1)
		return 2;
	return (5 * TinhAn(n - 1) + sqrt(24 * TinhAn(n - 1) * TinhAn(n - 1) - 8));
}