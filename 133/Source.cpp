#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int ChanNhoNhat(int[], int);

int main()
{
	int a[1000];
	int n;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n);
	int kq = ChanNhoNhat(a, n);
	cout << " So chan nho nhat la " << kq;
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

int ChanNhoNhat(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = ChanNhoNhat(a, n - 1);
	if (a[n - 1] %2 != 0)
		return lc;
	if (lc == -1)
		return a[n-1];
	if (a[n - 1] <lc)
		lc = a[n - 1];
	return lc;
}
