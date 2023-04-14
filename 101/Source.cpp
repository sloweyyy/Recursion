#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int Dem(int[], int);
int SoHoanThien(int);

int main()
{
	int a[1000];
	int n;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n);
	int kq = Dem(a, n);
	cout << " So luong cac so hoan thien la  = " << kq;
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

int Dem(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = Dem(a, n - 1);
	if (SoHoanThien( a[n - 1])  == 1)
		s++;
	return s;
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
