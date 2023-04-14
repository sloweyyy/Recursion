#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int ChanDau(int[], int);

int main()
{
	int a[1000];
	int n;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n);
	int kq = ChanDau(a, n);
	
	cout << "so chan dau tien cua mang " << kq;
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

int ChanDau(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = ChanDau(a, n - 1);
	if (lc != -1 )
		return lc;
	if (a[n - 1] % 2 == 0)
		return a[n - 1];
	return -1;
}

