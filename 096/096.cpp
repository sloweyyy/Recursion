#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int DemGiaTri(int[], int);
int main()
{
	int a[100];
	int n;
	cout << "nhap so phan tu cua mang:";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
	cout << "tong gia tri la:" << DemGiaTri(a, n);
}
int DemGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemGiaTri(a, n - 1);
	if (a[n - 1] > 0  && a[n - 1] % 7 == 0)
		dem++;
	return dem;
}