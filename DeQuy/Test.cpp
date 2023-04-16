#include <iostream>
#include <iomanip>
using namespace std;

void lietKeConToanDuong(int a[], int n, int doDai, int viTri) {
	if (viTri > n - doDai) {
		return;
	}
	bool flag = true;
	for (int i = viTri; i < viTri + doDai; i++) {
		if (a[i] <= 0) {
			flag = false;
			break;
		}
	}
	if (flag && doDai > 1) {
		for (int i = viTri; i < viTri + doDai; i++) {
			cout << setw(8) << a[i];
		}
		cout << "\n";
	}
	lietKeConToanDuong(a, n, doDai, viTri + 1);
}

void LietKe(int a[], int n) {
	for (int doDai = 2; doDai <= n; doDai++) {
		lietKeConToanDuong(a, n, doDai, 0);
	}
}

void nhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void xuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	nhapMang(a, n);
	LietKe(a, n);
	delete[] a;
	return 0;
}