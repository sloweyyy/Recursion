#include <iostream>
#include <iomanip>
using namespace std;

int ktToanLe(int n) {
	while (n > 0) {
		if ((n % 10) % 2 == 0)
			return 0;
		n /= 10;
	}
	return 1;
}

int TimGiaTri(int a[], int n) {
	if (n == 0)
		return 0;
	int lc = TimGiaTri(a, n - 1);
	if (!ktToanLe(a[n - 1]))
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
	int kq = TimGiaTri(a, n);
	cout << "Gia tri toan le lon nhat trong mang la: " << kq;
	delete[]a;
	return 1;
}