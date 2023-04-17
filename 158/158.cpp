#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void DuongTang(float[], int);
void Xuat(float[], int);

int main()
{
	float a[1000];
	int n;
	cout << "Nhap mang cac so nguyen: " << endl;
	Nhap(a, n);
	DuongTang(a, n);
	cout << "Mang sau khi sap cac so duong tang la ";
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

void DuongTang(float a[], int n)
{
	if (n <= 1)
		return;
	for (int i = 0; i <= n - 2; i++)
	{
		if (a[n - 1] > 0 && a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
	}
	DuongTang(a, n - 1);
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << "  " << a[i];
	cout << endl;
}