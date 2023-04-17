#include <iostream>
using namespace std;

float AmDauTien(float[], int);
float AmLonNhat(float[], int);

int main()
{
	float a[1000];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang a: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	float x = AmLonNhat(a, n);
	cout << "Gia tri am lon nhat trong mang la : " << x;
	return 1;
}

float AmDauTien(float a[], int n)
{
	if (n == 0)
		return 0;
	if (AmDauTien(a, n - 1) != 0)
		return (AmDauTien(a, n - 1));
	if (a[n - 1] < 0)
		return a[n - 1];
}

float AmLonNhat(float a[], int n)
{
	if (n == 0)
		return 0;
	float am = AmDauTien(a, n);
	if (am == 0)
		return 0;
	if (a[n-1] >= 0)
		return (AmLonNhat(a, n - 1));
	if (a[n - 1] > am && a[n-1]<0)
		am = a[n - 1];
	return am;
}