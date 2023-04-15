#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void HoanThienGiam(int[], int);
int SoHoanThien(int);
void Xuat(int[], int);

int main()
{
	int a[1000];
	int n;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n);
	HoanThienGiam(a, n);
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

void HoanThienGiam(int a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++) \
	{
		if (SoHoanThien(a[n - 1]) == 1 && SoHoanThien(a[i])== 1 && a[i] < a[n-1])
			swap(a[i], a[n-1]);
	}
	HoanThienGiam(a, n - 1);
}

int SoHoanThien(int x)
{
	int s = 0;
	for (int i = 1; i < x; i++)
	{
		if (x % i == 0)
			s = s + i;
	}
	if (s == x) return 1;
	return 0;
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << "  " << a[i];
	cout << endl;
}