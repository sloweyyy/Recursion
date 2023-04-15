#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void XuatCon(int[], int);
void XuatCon(int[], int, int);
void XuatCon(int[], int, int, int);
int main()
{
	int a[1000];
	int n;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n);
	
	XuatCon(a, n);
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

void XuatCon(int a[], int n)
{
	if (n == 0)
		return;
	XuatCon(a, n - 1);
	for (int l = 1;l <= n; l++)
	{
		XuatCon(a, n, n - l , l); cout << endl;
	}
}

void XuatCon(int a[], int n, int vt, int l)
{
	if (l == 0)
		return;
	XuatCon(a, n - 1, vt, l-1);
	cout << setw(5) << a[vt + l -1 ];
}
