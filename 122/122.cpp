#include <iostream>
using namespace std;

int ChuSoDau(int);
int TimChuSoDauLe(int[], int);

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
	int x= TimChuSoDauLe(a, n);
	cout << "Gia tri dau tien trong mang co chu so dau la so le la : " << x;
	return 1;
}

int ChuSoDau(int x)
{
	x = abs(x);
	if (x < 10)
		return x;
	return (ChuSoDau(x / 10));
}

int TimChuSoDauLe(int a[], int n)
{
	if (n == 0)
		return 0;
	if (TimChuSoDauLe(a, n - 1) != 0)
		return TimChuSoDauLe(a, n - 1);
	if (ChuSoDau(a[n - 1]) % 2 != 0)
		return a[n-1];
	return 0;
}