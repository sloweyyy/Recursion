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

float TongCot(float a[][100], int m, int n, int c) {
	if (m == 0)
		return 0;
	return TongCot(a,m-1,n,c) + a[m - 1][c];
}

float TongNhoNhat(float a[][100], int m, int n) {
	if (n == 1)
		return TongCot(a, m, n, 0);
	float lc = TongNhoNhat(a, m, n - 1);
	if (TongCot(a,m,n,n-1)<lc)
		lc = TongCot(a, m, n, n - 1);
	return lc;
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
    float kq = TongNhoNhat(a, m, n);
    cout << "Tong nho nhat la: " << kq;
    return 1;
}
