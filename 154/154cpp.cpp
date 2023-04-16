#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void SapGiam(int[], int);
void Xuat(int[], int);

int main()
{
	int a[1000];
	int n;
	cout << "Nhap mang cac so nguyen " << endl;
	Nhap(a, n);
	SapGiam(a, n);
	cout << "Mang sau khi sap giam la ";
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

void SapGiam(int a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
	{
		if (a[i] < a[n - 1])
			swap(a[i], a[n - 1]);
	}
	SapGiam(a, n - 1);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << "  " << a[i];
	cout << endl;
}