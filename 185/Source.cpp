#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
int DemPhanBiet(float[], int);



int main()
{
	float a[1000];
	int n;
	cout << "Nhap mang so nguyen\n ";
	Nhap(a, n);
	int kq = DemPhanBiet(a, n);
	cout << kq;

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
int DemPhanBiet(float a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	int flat = 1;
	int Dem = DemPhanBiet(a, n - 1);
	for (int i = 0; i <= n - 2; i++)
		if (a[i] == a[n - 1])
			flat = 0;
	if (flat == 1)
		Dem++;
	return Dem;
}
