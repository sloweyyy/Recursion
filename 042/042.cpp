#include <iostream>
using namespace std;

bool KiemTraToanChan(int);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (KiemTraToanChan(n) == true)
		cout << "So nguyen duong " << n << " la so toan chan";
	else cout << "So nguyen duong " << n << " khong la so toan chan";
	return 1;
}

bool KiemTraToanChan(int n) {
	n = abs(n);
	if (n<=9)
	{
		if (n % 2 == 0)
			return true;
		return false;
	}
	int dv = n % 10;
	if (dv % 2 != 0)
		return false;
	return KiemTraToanChan(n/10);
}