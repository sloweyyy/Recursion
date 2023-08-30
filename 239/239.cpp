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

float LonNhat(float a[][100], int m, int n, int d) {

    if (m == 0)
		return a[0][d];
	float max = LonNhat(a, m - 1, n, d);
	if (a[m - 1][d] > max)
		return a[m - 1][d];
	return max;
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
    int d;
    cout << "Nhap dong: ";
    cin >> d;
    float kq = LonNhat(a, m, n, d);
    cout << "Gia tri lon nhat tren dong " << d << " la: " << kq;
    return 1;
}
