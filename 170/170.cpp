#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

void Nhap(float a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int KiemTraMangTang(float a[], int n, int vt, int l) {
	int flag = 1;
	for (int i = 0; i < l - 1; i++) {
		if (a[vt + i] > a[vt + i + 1])
			flag = 0;
	}
	return flag;
}

void Dem(float a[], int n) {
	if (n == 0)
		return;
	int d = 0;
	Dem(a, n - 1);
	for (int vt = 0; vt <= n; vt++) {
		if (KiemTraMangTang(a, n, vt, n) == 1)
			for (int i = vt; i < vt + n; i++)
				d++;
	}
	cout << d;
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float* a = new float[n];
	Nhap(a, n);
	int size = n;
	cout << "Cac mang con co do dai lon hon 1 la: "; Dem(a, n);
	delete[]a;
	return 1;
}