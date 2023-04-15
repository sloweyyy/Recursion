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
bool ktDang5m(int n) {
	int t = n;
	while (t != 1) {
		if (t % 5 != 0)
			return false;
		t /= 5;
	}
	return true;
}
void LietKe(int a[][100], int m, int n, int c) {
	if (m == 0 || n == 0)
		return;
	LietKe(a, m - 1, n, c);
	if (ktDang5m(a[m - 1][c]))
		cout << a[m - 1][c] << " ";
}
int main() {
	int m, n;
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	int a[100][100];
	Nhap(a, m, n);
	int c;
	cout << "Nhap c: ";
	cin >> c;
	LietKe(a, m, n, c);
	return 0;
}


