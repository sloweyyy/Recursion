#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int a[][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

void Xuat(int a[][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << setw(5) << a[i][j];
		cout << endl;
	}
}

void ThemDong(int a[][100], int& m, int n, int d) {
	if (n == 0) {
		m++;
		return;
	}
	ThemDong(a, m, n - 1, d);
	for (int i = m; i > d; i--)
		a[i][n - 1] = a[i - 1][n - 1];
	a[d][n - 1] = 1;
}





int main() {
	int m, n;
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	int a[100][100];
	Nhap(a, m, n);
	Xuat(a, m, n);
	int d;
	cout << "Nhap dong: ";
	cin >> d;
	ThemDong(a, m, n, d);
	cout << "Ma tran sau khi thay doi " << endl;
	Xuat(a, m, n);
	return 1;
}
