#include <iostream>
using namespace std;

int GiaTriTrongKhoang(int[], int, int, int);

int main()
{
	int a[1000];
	int n, x, y;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap khoang (x, y) : ";
	cin >> x >> y;
	cout << "Nhap mang a: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	int lc = GiaTriTrongKhoang(a, n, x, y);
	if (lc != x) cout << "Gia tri dau tien trong khoang (" << x << "," << y << ") la: " << lc;
	else cout << x;
	return 1;
}

int GiaTriTrongKhoang(int a[], int n, int x, int y)
{
	if (n == 0)
		return x;
	if (GiaTriTrongKhoang(a, n - 1, x, y)!=x)
		return GiaTriTrongKhoang(a, n - 1, x, y);
	if (a[n - 1] > x && a[n - 1] < y)
		return a[n - 1];
	return x;
}