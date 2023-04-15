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
bool ktDang3m(int n) {
	int t = n;
	while (t != 1) {
		if (t % 3 != 0)
			return false;
		t /= 3;
	}
	return true;
}
void LietKe(int a[][100], int m, int n, int d) {
	if (m == 0 || n == 0)
		return;
	LietKe(a, m - 1, n, d);
	if (ktDang3m(a[m - 1][d]))
		cout << a[m - 1][d] << " ";

}
int main() {
	int m, n;
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	int a[100][100];
	Nhap(a, m, n);
	int d;
	cout << "Nhap d: ";
	cin >> d;
	LietKe(a, m, n, d);
	return 0;
}


