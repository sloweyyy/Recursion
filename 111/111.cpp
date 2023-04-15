#include <iostream>
#include <iomanip>
using namespace std;

float AmDau(float a[], int n) {
	if (n == 0)
		return 0;
	float lc = AmDau(a, n - 1);
	if (lc != 0)
		return lc;
	if (a[n - 1] < 0)
		return a[n - 1];
	return 0;
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n; 
	float* a = new float[n];
	cout << "Nhap mang a: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	float amdau = AmDau(a, n);
	cout << "Gia tri am dau tien trong mang la " << amdau;
 	delete[]a;
	return 1;
}