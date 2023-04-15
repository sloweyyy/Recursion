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
void ThemViTri(int a[], int& n, int x, int vt) {
	if (vt == n)
	{
		a[n++] = x;
		return;
	}
	swap(a[vt], x);
	ThemViTri(a, n, x, vt + 1);
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	int x, vt;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap vt: ";
	cin >> vt;
	ThemViTri(a, n, x, vt);
	Xuat(a, n);
	delete[]a;
	return 1;
}