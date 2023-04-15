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
	if (n==0)
		return 0;
	if (n == 1)
		return 0;
	int dem = DemGiaTri(a, n - 1);
	int flag = 1;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] >= a[n - 1]) {
			flag = 0;
		}
	}
	if (flag == 1)
		dem++;
	return dem;
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