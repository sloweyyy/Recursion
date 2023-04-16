#include<iostream>
#include<stdio.h>
#define MAX 8
using namespace std;

int A[MAX][MAX] = { 0 };
int X[8] = { -2,-2,-1,-1, 1, 1, 2, 2 };
int Y[8] = { -1, 1,-2, 2,-2, 2,-1, 1 };
int dem = 0;
int n;

void xuat() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}


bool diChuyen(int x, int y) {
    ++dem;
    A[x][y] = dem;
    if (dem == n * n) {
        cout << "Cac buoc di la: \n";
        xuat();
        return true;
    }
    for (int i = 0; i < 8; i++) {
        int u = x + X[i];
        int v = y + Y[i];
        if (u >= 0 && u < n && v >= 0 && v < n && A[u][v] == 0) {
            if (diChuyen(u, v)) {
                return true;
            }
        }
    }
    --dem;
    A[x][y] = 0;
    return false;
}


int main() {
    cout << "Nhap n: ";
    cin >> n;
    int a, b;
    cout << "Nhap vi tri ban dau.\nx: ";
    cin >> a;
    cout << "y: ";
    cin >> b;
    if (a < 0 || a >= n || b < 0 || b >= n) {
        cout << "Vi tri ban dau khong hop le.\n";
        return 0;
    }
    if (!diChuyen(a, b)) {
        cout << "Khong tim thay duong di.\n";
    }
    return 0;
}

