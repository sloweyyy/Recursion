#include <iostream>
using namespace std;

int TinhAn(int);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a = TinhAn(n);
	cout << "a(n) = " << a;
	return 1;
}

int TinhAn(int n) {
	if (n == 0)
		return -1;
	if (n == 1)
		return 3;
	return (5 * TinhAn(n - 1) - TinhAn(n - 2));
}
