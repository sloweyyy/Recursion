#include <iostream>
using namespace std;

float Tong(float[], int);

int main()
{
	float a[1000];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang a: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	float s = Tong(a, n);
	cout << " Tong cac phan tu trong mang la: " << s;
	return 1;
}

float Tong(float a[], int n)
{
	if (n == 0)
		return 0;
	return (Tong(a, n - 1) + a[n - 1]);
}