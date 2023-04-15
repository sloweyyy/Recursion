#include <iostream>
using namespace std;

float DuongDauTien(float[], int);

int main()
{
	float a[1000];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang a: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	float x = DuongDauTien(a, n);
	if (x != 0) cout << "Gia tri duong dau tien trong mang la: " << x;
	else cout << "Mang khong co gia tri duong";
	return 1;
}

float DuongDauTien(float a[], int n)
{
	if (n == 1)
		return 0;
	if (DuongDauTien(a, n - 1)!=0)
		return DuongDauTien(a, n - 1);
	if (a[n - 1] > 0)
		return a[n - 1];
	return 0;
}