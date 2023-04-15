#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int DoiXungDau(int[], int);
int ktDoiXung(int);

int main()
{
	int a[1000];
	int n;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n);
	int kq = DoiXungDau(a, n);
	cout << " So doi xung dau tien trong mang la  " << kq;
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

int DoiXungDau(int a[], int n)
{
	if (n == 0)
		return 10;
	int lc = DoiXungDau(a, n - 1);
	if (lc != 10)
		return lc;
	if (ktDoiXung(a[n - 1]) == 1)
		return a[n - 1];
	return 10;
}

int ktDoiXung(int x)
{
	int n = x;
	int s = 0;
	while (x > 0)
	{
		s = s * 10 + x % 10;
		x = x / 10;
	}
	if (s == n) return 1;
	return 0;
}