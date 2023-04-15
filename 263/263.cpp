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

int ktDong(int a[][100], int m, int n, int d) {
	if (n == 0)
		return 0;
	if (n == 1) {
		if (a[d][0] % 2 == 0)
			return 1;
		else
			return 0;
	}
	if (a[d][n - 1] % 2 == 0 && ktDong(a, m, n - 1, d) == 1)
		return 1;
	return 0;
}

void LietKe(int a[][100], int m, int n) {
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	if (ktDong(a, m, n, m - 1) == 1)
		cout << setw(4) << (m - 1);
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
	LietKe(a, m, n);
	return 1;
}
