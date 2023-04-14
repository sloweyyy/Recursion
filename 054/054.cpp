#include <iostream>
using namespace std;

long double TinhSn(long double, int);

int main() {
	int n;
	long double x;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	long double s = TinhSn(x, n);
	cout << "S(n) = " << s << endl;
	return 1;
}

long double TinhSn(long double x, int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return (x * x);
	return ((1 + x * x)*TinhSn(x, n - 1) - x * x * TinhSn(x, n - 2));
}

