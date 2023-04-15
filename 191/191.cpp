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

int GanNhat(int a[], int n, int &vt1, int &vt2) {
	if (n == 1)
		return;
	int min = abs(a[0] - a[1]);
	
	for (int i = 0; i < n - 1; i++) {
		if (abs(a[i] - a[n - 1]) < min) {
			min = abs(a[i] - a[n - 1]);
			vt1 = i;
			vt2 = n - 1;
		}
	}
	GanNhat(a, n - 1,vt1,vt2);
	return vt1, vt2;
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	int vt1, vt2;
	GanNhat(a, n, vt1, vt2);
	cout << "Vi tri gan nhau nhat la: " << vt1 << " " << vt2;
	delete[] a;
	return 0;
}
