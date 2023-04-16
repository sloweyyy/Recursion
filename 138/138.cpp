#include <iostream>
using namespace std;

int ucln(int, int);
int TimUCLN(int[], int);

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
	float x = TimUCLN(a, n);
	cout << "Uoc chung lon nhat cua tat ca cac phan tu trong mang la : " << x;
	return 1;
}

int ucln(int a, int b)
{
	if (a == 0 || b == 0) {
		return a + b;
	}
	while (a != b) {
		if (a > b) {
			a -= b; 
		}
		else {
			b -= a;
		}
	}
	return a;
}

int TimUCLN(int a[], int n)
{
	if (n == 1)
		return a[n-1];
	int lc = TimUCLN(a, n - 1);
	lc = ucln(TimUCLN(a, n - 1), a[n - 1]);
	return lc;
}