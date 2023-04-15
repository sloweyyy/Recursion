#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int TimGiaTri(int[], int);
int TanSuat(int[], int, int);

int main()
{
	int a[1000];
	int n;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n);
	int kq = TimGiaTri(a, n);
	cout << " So co so lan xuat hien nhieu nhat la " << kq;
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

int TimGiaTri(int a[], int n)
{
	if (n == 1)
		return a[0];
	int lc = TimGiaTri(a, n - 1);
	
	if (TanSuat(a,n,a[n - 1]) > TanSuat(a, n, lc))
		lc = a[n - 1];
	return lc;
}

int TanSuat(int a[], int n, int lc)
{
	int dem = 0;
	for( int i = 0; i < n; i++)
	{
		if (a[i] == lc)
			dem++;
	}
	return dem;
}