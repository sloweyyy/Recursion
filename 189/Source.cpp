#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int a[1000];
	int n;
	cout << "Nhap mang so nguyen\n ";
	Nhap(a, n);

	Xuat(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << " Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] : ";
		cin >> a[i];
	}
}
void Xuat(int a[], int n)
{
	if (n <= 1)
		return;
	Xuat(a, n - 1);
	if (a[n - 1] % 2 == 0)
	{
		if (a[n - 2] % 2 == 0 || a[n] % 2 == 0)
			cout << a[n - 1] << "  ";
	}
}

