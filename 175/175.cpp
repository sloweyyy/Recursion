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


void MotVeDau(int a[], int n) {
	if (n==0)
		return;
	if (a[n - 1] != 1) {
		MotVeDau(a, n - 1);
		return;
	}
	for (int i = 0; i < n - 1; i++) {
		if (a[i] != 1) {
			swap(a[i], a[n - 1]);
			break;
		}
	}
	MotVeDau(a, n - 1);
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	MotVeDau(a, n);
	Xuat(a, n);
	delete[]a;
	return 1;
}