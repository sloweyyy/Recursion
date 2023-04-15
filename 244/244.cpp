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

float NhoNhatCot(float a[][100], int m, int n, int c) {
    if (m==1)
        return a[0][c];
    float lc = NhoNhatCot(a, m - 1, n, c);
    if (a[m - 1][c] < lc)
		return a[m - 1][c];
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
    int c;
    cout << "Nhap cot: ";
    cin >> c;
    float kq = NhoNhatCot(a, m, n, c);
    cout << "Gia tri lon nhat tren cot " << c << " la: " << kq;
    return 1;
}
