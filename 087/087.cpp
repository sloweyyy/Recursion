#include <iostream>
#include <iomanip>
using namespace std;

float TongDuong(float a[], int n) {
	if (n == 0)
		return 0;
	float S = TongDuong(a, n - 1);
	if (a[n - 1] > 0)
		S = S + a[n - 1];
	return S;
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float* a = new float[n];
	cout << "Nhap mang a: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	float s = TongDuong(a, n);
	cout << " Tong cac phan tu duong trong mang la: " << s;
	delete[]a;
	return 1;
}