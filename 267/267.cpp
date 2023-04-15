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

void XayDung(float a[][100], int m, int n, float b[][100], int& k, int& l) {
	if (m == 0) {
		k = 0;
		l = n;
		return;
	}
	XayDung(a, m - 1, n, b, k, l);
	for (int j = 0; j < l; j++)
		b[m - 1][j] = abs(a[m - 1][j]);
	k++;
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
	int k, l;
	float b[100][100];
	XayDung(a, m, n, b, k, l);
	Xuat(b, k, l);
	return 1;
}
