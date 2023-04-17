#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int LietKe(int[], int);
int ktDang3m(int);
int main()
{
	int a[100];
	int n;
	cout << "nhap so phan tu cua mang:";
	cin >> n;
	for (int i = 0; i <= n-1; i++)
		cin >> a[i];
	LietKe(a, n);
	if (LietKe(a, n) == 1)
		cout << "mang ton tai gia tri.";
	cout << "mang khong ton tai gia tri";
	return 1;
}
int LietKe(int a[], int n)
{
	if (n == 0)
		return 0;
	LietKe(a, n - 1);
	if (ktDang3m(a[n - 1]) == 1)
		return 1;
	return 0;
}
int ktDang3m(int n)
{
	for (int x=n; n <= 2; n / 3)
	{
		if (n % 3 == 0)
			return 1;
		return 0;
	}
}