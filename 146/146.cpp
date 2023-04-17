#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int ktChanLe(int[], int);


int main()
{
	int a[1000];
	int n;
	cout << "Nhap mang cac so nguyen ";
	Nhap(a, n);
	int kq = ktChanLe(a, n);
	switch (kq)
	{
	case 1: cout << "Mang co tinh chan le "; break;
	case 0: cout << "Mang khong co tinh chan le "; break;
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

int ktChanLe(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 0;
	if (n == 2)
	{
		if ((a[0] + a[1]) % 2 != 0)
			return 1;
		return 0;
	}
	if ((a[n - 1] + a[n - 2]) % 2 != 0 && ktChanLe(a, n - 1) == 1)
		return 1;
	return 0;
}