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

int DemChan(int a[][100], int m, int n) {
    if (m == 0)
		return 0;
	int dem = DemChan(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] % 2 == 0)
			dem++;
    return dem;
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
    int dem = DemChan(a, m, n);
    cout << "So luong cac gia tri chan la: " << dem;
    return 0;
}
