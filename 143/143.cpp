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

int ktTonTaiNguyenTo(int a[], int n) {
	if (n == 0)
		return 0;
	if (ktNguyenTo(a[n - 1]))
		return 1;
	return ktTonTaiNguyenTo(a, n - 1);
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
	int kq = ktTonTaiNguyenTo(a, n);
	cout << kq;
	delete[]a;
	return 1;
}