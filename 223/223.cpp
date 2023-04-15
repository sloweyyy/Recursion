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

float TichDuong(float a[][100], int m, int n, int c) {
    if (m == 0)
		return 1;
	float t = TichDuong(a, m - 1, n, c);
	if (a[m - 1][c] > 0)
		return t * a[m - 1][c];
	return t;
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
    int c;
    cout << "Nhap cot: ";
    cin >> c;
    float kq = TichDuong(a, m, n, c);
    cout << "Tich cac gia tri duong tren cot " << c << " la: " << kq;
    return 0;
}
