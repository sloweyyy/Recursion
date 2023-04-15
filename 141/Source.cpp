#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int GiaTriLienTiep(int[], int);


int main()
{
	int a[1000];
	int n;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n);
	int kq = GiaTriLienTiep(a, n);
	switch (kq) 
	{
	case 1: cout << " mang co ton tai 2 gia tri 0 lien tiep "; break;
	case 0: cout << " mang khong ton tai 2 gia tri 0 lien tiep "; break;
	}

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

int GiaTriLienTiep(int a[], int n)
{
	if (n <= 1)
		return 0;
	if (a[n - 1] == 0 && a[n-2] == 0)
		return 1;
	return GiaTriLienTiep(a, n - 1);
}

