#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XuatBo2(float, float);


int main()
{
	float a[1000];
	int n;
	cout << "Nhap mang so nguyen\n ";
	Nhap(a, n);

	Xuat(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << " Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] : ";
		cin >> a[i];
	}
}
void Xuat(float a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
	{
		if (a[i] <= a[n - 1])
			XuatBo2(a[i], a[n - 1]);
		if (a[i] >= a[n - 1])
			XuatBo2(a[n - 1], a[i]);
	}
	Xuat(a, n - 1);
}
void XuatBo2(float x, float y)
{
	cout << setw(10) << setprecision(3);
	cout << "(" << x << "," << y << ")" << endl;
}



