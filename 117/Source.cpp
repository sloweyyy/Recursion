#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
float CuoiCung(float[], int);

int main()
{
	float a[1000];
	int n;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n);
	float kq = CuoiCung(a, n);
	cout << " So am cuoi cung lon hon -1 la " << kq;
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

float CuoiCung(float a[], int n)
{
	if (n == 0)
		return -1;
	
	if (a[n - 1] < 0 && a[n-1] > -1)
		return a[n-1];
	return CuoiCung(a, n - 1);
}
