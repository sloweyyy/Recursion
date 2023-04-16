#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int DemNguyenTo(int[], int);
bool ktNguyenTo(int);
int main()
{
	int a[100];
	int n;
	cout << "nhap so phan tu cua mang:";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
	cout << "so luong so nguyen to la:" << DemNguyenTo(a, n);
}
int DemNguyenTo(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemNguyenTo(a, n - 1);
	if (ktNguyenTo(a[n - 1]))
		dem++;
	return dem;
}
bool ktNguyenTo(int n) 
{
	int i;
	if ((n == 2) || (n == 3)) 
		return true;
	for (i = 2; i <= sqrt(n); i++) 
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
