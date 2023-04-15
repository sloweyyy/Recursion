#include <iostream>
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
			cout << a[i][j] << " ";
		cout << endl;
	}
}


int ktNguyenTo(int n) {
	if (n < 2)
		return 0;
	for (int i = 2; i <= sqrt((float)n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}

int TongNguyenTo(int a[][100], int m, int n) {
		if (m == 0 || n == 0)
		return 0;
	int s = TongNguyenTo(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktNguyenTo(a[m - 1][j]))
			s += a[m - 1][j];
	return s;
}
int main() {
	int m, n;
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	int a[100][100];
	Nhap(a, m, n);
	int kq = TongNguyenTo(a, m, n);
	cout << "Tong cac so nguyen to trong ma tran: " << kq;
	return 0;
}


