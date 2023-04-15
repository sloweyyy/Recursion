#include <iostream>
using namespace std;

bool KiemTraDoiXung(int);
int TongDoiXung(int[], int);

int main()
{
	int a[1000], n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang a: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	int s = TongDoiXung(a, n);
	cout << " Tong cac phan tu la so doi xung trong mang la: " << s;
	return 1;
}

bool KiemTraDoiXung(int k)
{
	int dao = 0, k2 = k;
	while (k2 != 0)
	{
		dao = (dao * 10) + (k2%10);
		k2 /= 10;
	}
	if (dao == k) return true;
	return false;
}

int TongDoiXung(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TongDoiXung(a, n-1);
	if (KiemTraDoiXung(a[n - 1]))
		s += a[n - 1];
	return s;
}