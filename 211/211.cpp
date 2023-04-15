#include <iostream>
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
			cout << a[i][j] << " ";
		cout << endl;
	}
}

float TongAm(float a[][100], int m, int n) {
	if (m == 0 || n == 0)
		return 0;
	float s = TongAm(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] < 0)
			s += a[m - 1][j];
	return s;
}

int main() {
	int m, n;
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	float a[100][100];
	Nhap(a, m, n);
	float kq = TongAm(a, m, n);
	cout << "Tong cac gia tri am trong ma tran: " << kq;
	return 0;
}


