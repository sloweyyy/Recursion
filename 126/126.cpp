#include <iostream>
using namespace std;


int ViTriChanDau(int[], int);

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
	int x = ViTriChanDau(a, n);
	cout << "Vi tri gia tri chan dau tien trong mang la vi tri thu: " << x;
	return 1;
}

int ViTriChanDau(int a[], int n)
{
	if (n == 0)
		return -1;
	if (ViTriChanDau(a, n - 1) != -1)
		return ViTriChanDau(a, n - 1);
	if (a[n - 1] % 2 == 0)
		return (n - 1);
	return -1;
}