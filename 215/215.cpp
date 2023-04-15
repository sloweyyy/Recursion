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

bool ktDongXung(int n) {
		int t = n;
	int s = 0;
	while (t != 0) {
		s = s * 10 + t % 10;
		t /= 10;
	}
	if (s == n)
		return true;
	return false;
}

int TongDong(float a[][100], int m, int n, int d) {
	if (n == 0)
		return 0;
	int s = TongDong(a, m, n - 1, d);
	if (ktDongXung(a[d][n - 1]))
		s += a[d][n - 1];
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
	int d;
	cout << "Nhap d: ";
	cin >> d;
	int kq = TongDong(a, m, n, d);
	cout << kq;
	return 0;
}


