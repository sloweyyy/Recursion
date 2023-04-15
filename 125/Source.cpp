#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int HoanThienCuoi(int[], int);
int SoHoanThien(int);

int main()
{
	int a[1000];
	int n;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n);
	int kq = HoanThienCuoi(a, n);
	cout << " So hoan thien cuoi la  = " << kq;
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

int HoanThienCuoi(int a[], int n)
{
	if (n == 0)
		return -1;
	if (SoHoanThien(a[n - 1]) == 1)
		return a[n - 1];
	return HoanThienCuoi(a, n-1);
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