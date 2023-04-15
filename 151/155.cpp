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
void ViTriLeTang(int a[], int n) {
	if (n == 1)
		return;
	for (int i = 0; i < n - 1; i++) {
		if (i%2!=0 && (n-1)%2!=0 && a[i]>a[n-1])
			swap(a[i], a[n-1]);
		ViTriLeTang(a, n - 1);
	}
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	ViTriLeTang(a, n);
	Xuat(a, n);
	delete[]a;
	return 1;
}