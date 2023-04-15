#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int ktToanChan(int[], int);


int main()
{
	int a[1000];
	int n;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n);
	int kq = ktToanChan(a, n);
	switch (kq)
	{
	case 1: cout << " mang ton tai toan so chan "; break;
	case 0: cout << " mang khong ton tai toan so chan "; break;
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

int ktToanChan(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
	{
		if (a[n - 1] % 2 == 0)
			return 1;
		return 0;
	}
	if (a[n - 1] % 2 == 0 && ktToanChan(a, n - 1) == 1)
		return 1;
	return 0;
}

