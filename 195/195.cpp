#include <iostream>
#include <algorithm>
#include <cmath>
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

void LietKe(int a[][100], int m, int n) {
	if (m == 0 || n == 0)
		return;
	LietKe(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktNguyenTo(a[m - 1][j]))
			cout << a[m - 1][j] << " ";
}

int main() {
	int m, n;
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	int a[100][100];
	Nhap(a, m, n);
	LietKe(a, m, n);
	return 0;
}
