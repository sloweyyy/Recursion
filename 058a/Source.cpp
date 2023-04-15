#include <iostream>
using namespace std;

float TinhSn(float, int);

int main() {
	int n;
	long double x;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	float s = TinhSn(x, n);
	cout << "S(n) = " << s << endl;
	return 1;
}

float TinhSn(float x, int n) {
	if (n == 0)
		return 1;
	if (n == 1)
		return (1 + x * x / 2);
	float hs = x * x / (2 * n - 1) / (2 * n);
	return ((1 + hs) * TinhSn(x, n - 1) - hs * TinhSn(x, n - 2));
}

