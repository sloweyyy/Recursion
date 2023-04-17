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

void LietKe(int a[], int n) {
	for (int l = 2; l <= n; l++) {
		for (int vt = 0; vt <= n - l; vt++) {
			for (int i = vt; i < vt + l; i++)
				cout << a[i] << " ";
			cout << endl;
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
	cout << "Cac mang con co do dai lon hon 2 la: " << endl;
	LietKe(a, n);
	delete[]a;
	return 1;
}