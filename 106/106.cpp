#include <iostream>
using namespace std;

float XaNhat(float[], int, int);

int main()
{
	float a[1000];
	int n, x;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap mang a: " << endl;
	for (int i = 0; i < n; i++) 
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	float lc = XaNhat(a, n, x);
	cout << "Gia tri trong mang xa gia tri " << x << " nhat la: " << lc;
	return 1;
}

float XaNhat(float a[], int n, int x)
{
	if (n == 1)
		return a[0];
	float lc = XaNhat(a, n-1, x);
	if (abs(x - a[n - 1]) > abs(lc - x))
		lc = a[n - 1];
	return lc;
}