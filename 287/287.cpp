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

void DichXuongCot(float a[][100], int m, int n, int c) {
	float temp = a[m - 1][c];
	for (int i = m - 1; i >= 1; i--)
		a[i][c] = a[i - 1][c];
	a[0][c] = temp;
}

void DichXuong(float a[][100], int m, int n) {
	if (n == 0)
		return;
	DichXuong(a, m, n - 1);
	DichXuongCot(a, m, n, n - 1);
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
	DichXuong(a, m, n);
	cout << "Ma tran sau khi thay doi " << endl;
	Xuat(a, m, n);
	return 1;
}
