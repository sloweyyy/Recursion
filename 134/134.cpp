#include <iostream>
using namespace std;

float ViTriAmLonNhat(float[], int);

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
	float x = ViTriAmLonNhat(a, n);
	cout << "Vi tri gia tri am lon nhat trong mang la : " << x;
	return 1;
}


float ViTriAmLonNhat(float a[], int n)
{
	if (n == 0)
		return -1;
	int am = ViTriAmLonNhat(a, n-1);
	if (a[n - 1] >= 0)
		return am;
	if (am == -1)
		return n-1;
	if (a[n - 1] > a[am])
		am = n - 1;
	return am;
}