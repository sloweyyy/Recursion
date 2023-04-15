#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);


int main()
{
	float a[1000];
	int n;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n);
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

void Xuat(float a[], int n)
{
	if (n <= 2)
		return;
	if (a[n-2]>a[n-3] && a[n-2] < abs(a[n-1]))
		cout << setw(6) << a[n - 2];
	Xuat(a, n - 1);
}

