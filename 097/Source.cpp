#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int Dem(int[], int);


int main()
{
	int a[1000];
	int n;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n);
	int kq = Dem(a, n);
	cout << " So cac so tan cung bang 5 la  = " << kq;
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

int Dem(int a[], int n)
{
	if (n == 0)
		return 0;
	float s = Dem(a, n - 1);
	if (a[n - 1] % 10 == 5)
		s++;
	return s;
}

