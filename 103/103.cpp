#include <iostream>
#include <iomanip>
using namespace std;

float LonNhat(float a[], int n)
{
	if (n == 1)
		return a[0];
	float lc = LonNhat(a, n - 1);
	if (lc < a[n - 1])
		lc = a[n - 1];
	return lc;
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
	float max = LonNhat(a, n);
	cout << "Gia tri lon nhat trong mang la: " << max;
	delete[]a;
	return 1;
}