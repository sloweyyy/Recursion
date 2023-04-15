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

int TichChan(int a[][100], int m, int n, int c) {
    if (m == 0)
		return 1;
	int t = TichChan(a, m - 1, n, c);
	if (a[m - 1][c] % 2 == 0)
		return t * a[m - 1][c];
	return t;
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
    int c;
    cout << "Nhap cot: ";
    cin >> c;
    int kq = TichChan(a, m, n, c);
    cout << "Tich cac gia tri chan tren cot " << c << " la: " << kq;
    return 0;
}
