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

int DemGiaTri(int a[], int n) {
	if (n == 1) {
		return 0;
	}
	else {
		int dem = DemGiaTri(a, n - 1);
		if (a[n - 1] < a[n - 2]) {
			dem++;
		}
		return dem;
	}
}
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	int kq = DemGiaTri(a, n);
	cout << "Co " << kq << " gia tri thoa man";
	delete[]a;
	return 1;
}