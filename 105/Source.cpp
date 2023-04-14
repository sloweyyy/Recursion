#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
int TimViTri(float[], int);

int main()
{
	float a[1000];
	int n;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n);
	int kq = TimViTri(a, n);
	cout << " Vi tri so nho nhat  = " << kq;
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

int TimViTri(float a[], int n)
{
	if (n == 1)
		return 0;
	int lc = TimViTri(a, n - 1);
	if (a[n - 1] < a[lc])
		lc = n - 1;
	return lc;
}

