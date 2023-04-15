#include <iostream>

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
void XayDung(float a[], int n, float b[], int& k)
{
	if (n == 0) {
		k = 0;
		return;
	}
	XayDung(a, n - 1, b, k);
	if (a[n - 1] < 0)
		b[k++] = a[n - 1];
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float* a = new float[n];
	Nhap(a, n);
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) k++;
	}
	float* b = new float[k];
	XayDung(a, n, b, k);
	Xuat(a, n);
	cout << endl;
	Xuat(b, k);
	delete[]a;
	delete[]b;
	return 1;
}