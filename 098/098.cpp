#include <iostream>
using namespace std;

int SoLanXuatHien(float[], int, float);

int main()
{
	float a[1000], x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap mang a: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	float d = SoLanXuatHien(a, n, x);
	cout << " So lan xuat hien cua " << x << " trong mang la: " << d;
	return 1;
}

int SoLanXuatHien(float a[], int n, float x)
{
	if (n == 0)
		return 0;
	float d = SoLanXuatHien(a, n - 1, x);
	if (a[n-1]==x)
		d++;
	return d;
}