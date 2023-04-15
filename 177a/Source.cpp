#include <iostream>
using namespace std;
void DuaVeCuoi(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);
int ktNguyenTo(int);
int main()
{
	int a[1000];
	int n;
	cout << "Nhap mang so nguyen\n ";
	Nhap(a, n);
	DuaVeCuoi(a, n);
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
	for (int i = 0; i < n; i++)
		cout << "  " << a[i];
	cout << endl;
}

void DuaVeCuoi(int a[], int n)
{
	if (n == 0)
		return;
	if (ktNguyenTo(a[n - 1]) == 1)
	{
		DuaVeCuoi(a, n - 1);
		return;
	}
	for (int i = 0; i <= n - 2; i++)
		if (ktNguyenTo(a[i]) == 1)
		{
			swap(a[i], a[n - 1]);
			break;
		}
	DuaVeCuoi(a, n - 1);

}

int ktNguyenTo(int x)
{
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}