#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int ktBang(int[], int);


int main()
{
	int a[1000];
	int n;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n);
	int kq = ktBang(a, n);
	switch (kq)
	{
	case 1: cout << " mang ton tai cac phan tu bang nhau "; break;
	case 0: cout << " mang khong ton tai cac phan tu bang nhau "; break;
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

int ktBang(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	
	if (a[n - 1] == a[n-2] && ktBang(a, n - 1) == 1)
		return 1;
	return 0;
}

