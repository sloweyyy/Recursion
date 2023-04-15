#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

void Nhap(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int ktCon(int a[], int n, int vt, int l) {
	int flag = 1;
	for (int i = 0; i < l - 1; i++) {
		if (a[vt + i] > a[vt + i + 1])
			flag = 0;
	}
	return flag;
}

void LietKe(int a[], int n) {
	for (int l = 1; l <= n; l++) {
		for (int vt = 0; vt <= n - l; vt++) {
			if (ktCon(a, n, vt, l) == 1) {
				for (int i = vt; i < vt + l; i++)
					cout << a[i] << " ";
				cout << endl;
			}
		}
	}
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	int size = n;
	LietKe(a, n);
	delete[]a;
	return 1;
}