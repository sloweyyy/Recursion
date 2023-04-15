#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float a[][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

void Xuat(float a[][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << setw(5) << a[i][j];
		cout << endl;
	}
}

float TongCot(float a[][100], int m, int n, int c) {
	if (m == 0)
		return 0;
	return TongCot(a, m - 1, n, c) + a[m - 1][c];
}

void ThemDong(float a[][100], int& m, int n) {
	if (n == 0) {
		m++;
		return;
	}
	ThemDong(a, m, n - 1);
	a[m - 1][n - 1] = TongCot(a, m - 1, n, n - 1);
}

int main() {
	int m, n;
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	float a[100][100];
	Nhap(a, m, n);
	Xuat(a, m, n);
	ThemDong(a, m, n);
	cout << "Ma tran sau khi thay doi " << endl;
	Xuat(a, m, n);
	return 1;
}
