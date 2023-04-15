#include <iostream>
#include <iomanip>
using namespace std;

bool ktDoiXung(int n) {
	int m = n;
	int s = 0;
	while (m > 0) {
		s = s * 10 + m % 10;
		m = m / 10;
	}
	if (s == n)
		return true;
	return false;
}

int DemDoiXung(int a[], int n) {
	if (n==0)
		return 0;
	int dem = DemDoiXung(a, n - 1);
	if (ktDoiXung(a[n - 1]))
		dem++;
	return dem;
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
	float s = DemDoiXung(a, n);
	cout << "So luong so doi xung trong mang la: " << s;
	delete[]a;
	return 1;
}