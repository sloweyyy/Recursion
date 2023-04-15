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

int DemAm(float a[][100], int m, int n, int c) {
    if (m == 0)
		return 0;
    int dem = DemAm(a, m - 1, n, c);
    if (a[m - 1][c] < 0)
		dem++;
    return dem;
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
    int kq = DemAm(a, m, n, c);
    cout << "So luong gia tri am tren cot " << c << " la: " << kq;
    return 0;
}
