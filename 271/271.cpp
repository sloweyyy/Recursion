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

void SapDongGiam(float a[][100], int m, int n, int d) {
	if (n == 1)
		return;
	for (int j = 0; j <= n - 2; j++)
		if (a[d][j] < a[d][n - 1])
			swap(a[d][j], a[d][n - 1]);
	SapDongGiam(a, m, n - 1, d);
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
	int d;
	cout << "Nhap dong ";
	cin >> d;
	SapDongGiam(a, m, n,d);
	cout << "Ma tran sau khi sap xep" << endl;
	Xuat(a, m, n);
	return 1;
}
