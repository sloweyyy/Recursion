#include<iomanip>
#include<iostream>
#include<math.h>
using namespace std;
void Xuat(float[], int);
int main()
{
	float a[100];
	int n;
	cout << "nhap so phan tu cua mang:";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "mang la:";
	Xuat(a, n);
}
void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}