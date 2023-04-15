#include <iostream>
using namespace std;
int Tong(int[], int);
int ktchinhphuong(int);
void Nhap(int[], int&);

int Tong(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = Tong(a,n - 1);
	if (ktchinhphuong(a[n - 1]) == 1)
		s = s + a[n - 1];
	return s;
}


int main()
{
	int a[1000];
	int n;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n);
	int kq = Tong(a, n);
	cout << " Tong cac so chinh phuong trong mang = " << kq;
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

int ktchinhphuong(int x)
{
	for (int i = 2; i < x; i++)
		if (sqrt(x) == i)
			return 1;
	return 0;
}
