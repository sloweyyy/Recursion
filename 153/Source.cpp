#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void SapTang(float[], int);
void Xuat(float[], int);

int main()
{
	float a[1000];
	int n;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n);
	SapTang(a, n);
	cout << " mang sau khi sap tang la ";
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

void SapTang(float a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
	{
		if (a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
	}
	SapTang(a, n - 1);
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << "  " << a[i];
	cout << endl;
}