#include <iostream>
#include <iomanip>
using namespace std;

bool ktHoanThien(int n) {
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s += i;
	if (s == n)
		return 1;
	return 0;
}

int ViTriCuoi(int a[], int n) {
	if (n==0)
		return -1;
	if (ktHoanThien(a[n - 1]))
		return n - 1;
	return ViTriCuoi(a, n - 1);
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
	int kq = ViTriCuoi(a, n);
	cout << "Vi tri cuoi cung cua so hoan thien trong mang la: " << kq;
	delete[]a;
	return 1;
}