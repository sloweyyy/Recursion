#include <iostream>
using namespace std;

int ktTonTaiChan(int[], int);

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
	cout << ktTonTaiChan(a, n);
	return 1;
}

int ktTonTaiChan(int a[], int n)
{
	if (n == 0)
		return 0;
	if (a[n - 1] % 2 == 0)
		return 1;
	return ktTonTaiChan(a, n-1);
}