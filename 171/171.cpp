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

int ktCon(float a[], int n, int vt, int l) {
	int flag = 1;
	for (int i = 0; i < l - 1; i++) {
		if (a[vt + i] < a[vt + i + 1])
			flag = 0;
	}
	return flag;
}

int DemConGiam(float a[], int n) {
	int dem = 0;
	for (int l = 1; l <= n; l++) {
		for (int vt = 0; vt <= n - l; vt++) {
			if (ktCon(a, n, vt, l) == 1) {
				dem++;
			}
		}
	}
	return dem;
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float* a = new float[n];
	Nhap(a, n);
	int kq = DemConGiam(a, n);
	cout << "So luong con giam: " << kq;
	delete[]a;
	return 1;
}