#include <iostream>
#include <iomanip>
using namespace std;

int TimViTri(int a[], int n, int x) {
	if (n == 1)
		return 0;
	int lc = TimViTri(a, n - 1, x);
	if (abs(a[n - 1] - x) < abs(a[lc] - x))
		lc = n - 1;
	return lc;
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int x;
	cout << "Nhap x: ";
	cin >> x;
	int* a = new int[n];
	cout << "Nhap mang a: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	int vt = TimViTri(a, n, x);
	cout << "Vi tri gan x nhat la: " << vt;
	delete[]a;
	return 1;
}