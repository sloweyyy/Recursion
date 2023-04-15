#include <iostream>
#include <iomanip>
using namespace std;

int ktNguyenTo(int n) {
	if (n < 2)
		return 0;
	for (int i = 2; i <= sqrt((float)n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}

int TimGiaTri(int a[], int n) {
	if (n == 0)
		return 0;
	int lc = TimGiaTri(a, n - 1);
	if (!ktNguyenTo(a[n - 1]))
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;
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
	int kq = ViTriCuoi(a, n);
	cout << "Vi tri cuoi cung cua so hoan thien trong mang la: " << kq;
	delete[]a;
	return 1;
}