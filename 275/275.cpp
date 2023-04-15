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

void SapCotTang(float a[][100], int m, int n, int c) {
	if (m == 1)
		return;
	for (int i = 0; i <= m - 2; i++)
		if (a[i][c] > a[m - 1][c])
			swap(a[i][c], a[m - 1][c]);
	SapCotTang(a, m - 1, n, c);
}

void SapCotGiam(float a[][100], int m, int n, int c) {
	if (m == 1)
		return;
	for (int i = 0; i <= m - 2; i++)
		if (a[i][c] < a[m - 1][c])
			swap(a[i][c], a[m - 1][c]);
	SapCotGiam(a, m - 1, n, c);
}

void SapXep(float a[][100], int m, int n) {
	if (n == 1)
		return;
	if ((n - 1) % 2 == 0)
		SapCotGiam(a, m, n, n - 1);
	else
		SapCotTang(a, m, n, n - 1);
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
	SapXep(a, m, n);
	cout << "Ma tran sau khi sap xep" << endl;
	Xuat(a, m, n);
	return 1;
}
