#include <iostream>
#include <iomanip>
using namespace std;

int ChuSoDau(int n) {
	while (n >= 10)
		n = n / 10;
	return n;
}

int TongGiaTri(int a[], int n) {
	if (n == 0)
		return 0;
	int s = TongGiaTri(a, n - 1);
	if (ChuSoDau(a[n-1]) % 2 != 0)
		s = s + a[n - 1];
	return s;
}
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	cout << "Nhap mang a: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	float s = TongGiaTri(a, n);
	cout << "Tong gia tri cac phan tu co chu so dau la so le: " << s;
	delete[]a;
	return 1;
}