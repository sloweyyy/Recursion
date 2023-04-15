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

void DichPhai(int a[], int n) {
	if (n <= 1)
		return;
	swap(a[n - 1], a[n - 2]);
	DichPhai(a, n - 1);
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	DichPhai(a, n);
	Xuat(a, n);
	delete[]a;
	return 1;
}