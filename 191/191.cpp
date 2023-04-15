#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

void Nhap(float a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}

void Xuat(float a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}


float GanNhat(float a[], int n, int& vt1, int& vt2) {
    float minDiff = abs(a[0] - a[1]);
    vt1 = 0;
    vt2 = 1;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            float diff = abs(a[i] - a[j]);
            if (diff < minDiff) {
                minDiff = diff;
                vt1 = i;
                vt2 = j;
            }
        }
    }
    return minDiff;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    float* a = new float[n];
    Nhap(a, n);
    int vt1, vt2;
    float minDiff = GanNhat(a, n, vt1, vt2);
    cout << "Vi tri gan nhau nhat la: " << vt1 << " " << vt2 << endl;
    cout << "Khoang cach nho nhat la: " << minDiff << endl;
    delete[] a;
    return 0;
}
