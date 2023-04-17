#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int TongGiaTri(int[], int);
int ChuSoDau(int);
int main()
{
	int a[100];
	int n;
	cout << "nhap so phan tu cua mang:";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
	cout << "tong la:" << TongGiaTri(a, n);
}
int TongGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TongGiaTri(a, n - 1);
	if (ChuSoDau(a[n - 1]) % 2 == 0)
		s = s + a[n - 1];
	return s;
}
int ChuSoDau(int n)
{
	n = abs(n);
	if (n <= 9)
		return n;
	return ChuSoDau(n / 10);
}