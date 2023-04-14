#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = Tinh(n);
	cout << "Ket qua la: " << kq;
	return 0;
}

int Tinh(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	return (1 + n) * Tinh(n - 1) - n * Tinh(n - 2);
}