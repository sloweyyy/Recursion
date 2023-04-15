#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void XoaViTri(float[], int&, int);
void Xuat(float[], int);

int main()
{
	float a[1000];
	int n;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n);
	int k; 
	cout << " chon vi tri can xoa ";
	cin >> k;
	XoaViTri(a, n, k);
	cout << " mang sau khi xoa la ";
	Xuat(a, n);
	return 0;


}

void Nhap(float a[], int& n)
{
	cout << " Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] : ";
		cin >> a[i];
	}
}

void XoaViTri(float a[], int& n , int vt)
{
	if (vt == n - 1)
	{
		n--;
		return;
	}
	a[vt] = a[vt + 1];
	XoaViTri(a, n, vt+1);
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << "  " << a[i];
	cout << endl;
}