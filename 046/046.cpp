#include <iostream>
using namespace std;

int TinhAn(int);
int TinhBn(int);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a = TinhAn(n);
	int b = TinhBn(n);
	cout << "a(n) = " << a << endl;
	cout << "b(n) = " << b;
}

int TinhAn(int n) {
	if (n == 1)
		return 2;
	return (3 * TinhBn(n-1) + 2 * TinhAn(n-1));
}

int TinhBn(int n) {
	if (n == 1)
		return 1;
	return (TinhAn(n - 1) + 3 * TinhBn(n - 1));
}