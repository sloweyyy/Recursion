#include <iostream>
#include <iomanip>
using namespace std;

bool ktNguyenTo(int n) {
		for (int i = 2; i <= (n / 2); i++)
		if (n % i == 0)
			return false;
	return true;
}

int NguyenToDau(int a[], int n)
{
	if (n == 0)
		return -1;
	int kq = NguyenToDau(a, n - 1);
	if (kq != -1)
		return kq;
	if (ktNguyenTo(a[n - 1]))
		return a[n - 1];
	return -1;
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
	int ntd = NguyenToDau(a, n);
	cout << "So nguyen to dau tien trong mang la: " << ntd;
	delete[]a;
	return 1;
}