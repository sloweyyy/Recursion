#include <iostream>
#include <iomanip>
using namespace std;

bool ktDang2m(int n) {
	while (n != 1) {
		if (n % 2 != 0)
			return false;
		n /= 2;
	}
	return true;
}

int TimGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = TimGiaTri(a, n - 1);
	if (lc != 0)
		return lc;
	if (ktDang2m(a[n - 1]))
		return a[n - 1];
	return 0;
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	cout << "Nhap mang a: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	int kq = TimGiaTri(a, n);
	cout << "Gia tri co dang 2^m trong mang la: " << kq;
	delete[]a;
	return 1;
}