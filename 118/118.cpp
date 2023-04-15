#include <iostream>
using namespace std;

bool KiemTraChinhPhuong(int);
int ChinhPhuongDauTien(int[], int);

int main()
{
	int a[1000], n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang a: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	int x = ChinhPhuongDauTien(a, n);
	if (x != -1) cout << "So chinh phuong duong dau tien trong mang la: " << x;
	else cout << x;
	return 1;
}

bool KiemTraChinhPhuong(int x)
{
	for (int i = 2; i <= sqrt(x); i++)
		if (i * i == x) return true;
	return false;
}

int ChinhPhuongDauTien(int a[], int n)
{
	if (n == 0)
		return -1;
	if (ChinhPhuongDauTien(a, n - 1) != -1)
		return ChinhPhuongDauTien(a, n - 1);
	if (KiemTraChinhPhuong(a[n-1]))
		return a[n - 1];
	return -1;
}