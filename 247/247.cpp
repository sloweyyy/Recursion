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

float DuongNhoNhat(float a[][100], int m, int n)
{
    if (m == 0)
        return 0;
    float lc = DuongNhoNhat(a, m - 1, n);
    for (int j = 0; j < n; j++)
		if (a[m - 1][j] > 0)
			if (lc == 0 || a[m - 1][j] < lc)
				lc = a[m - 1][j];
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
    float kq = DuongNhoNhat(a, m, n);
    cout << "Gia tri duong nho nhat la: " << kq;
    return 1;
}
