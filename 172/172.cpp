#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

void Nhap(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int ktCon(int a[], int n, int b[], int m) {
	if (n == 0) return 1;
	if (m < n) return 0;
	if (a[0] != b[0]) return ktCon(a, n, b + 1, m - 1);
	else return ktCon(a + 1, n - 1, b + 1, m - 1);
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);

	int m;
	cout << "Nhap m: ";
	cin >> m;
	int* b = new int[m];
	Nhap(b, m);

	int kq = ktCon(a, n, b, m);
	cout << kq;
	delete[]a;
	return 1;
}

