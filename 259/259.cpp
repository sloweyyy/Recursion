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

int ktDong(float a[][100], int m, int n, int d) {
    if (n == 0)
        return 0;
    if (a[d][n - 1] < 0)
        return 1;
    return ktDong(a, m, n - 1, d);
}

void LietKe(float a[][100], int m, int n) {
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
    float a[100][100];
    Nhap(a, m, n);
    Xuat(a, m, n);
    LietKe(a, m, n);
    return 1;
}
