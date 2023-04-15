#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
float TimX(float[], int);

int main()
{
	float a[1000];
	int n;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n);
	float kq = TimX(a,n);
	cout << "[" << - kq << ";" << kq << "]";
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

float TimX(float a[], int n)
{
	if (n == 1)
		return abs(a[0]);
	int lc = TimX(a, n - 1);
	if (abs(a[n - 1]) > lc)
		lc = abs(a[n - 1]);
	return lc;
}

