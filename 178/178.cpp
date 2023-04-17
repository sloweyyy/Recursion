#include <iostream>
using namespace std;

void DichTrai(int[], int);
void Xuat(int[], int);

int main()
{
	int a[1000];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang a: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Mang sau khi dich trai la : ";
	DichTrai(a, n);
	Xuat(a, n);
	return 1;
}

void DichTrai(int a[], int n)
{
	if (n <= 1)
		return;
	DichTrai(a, n - 1);
	swap(a[n - 1], a[n - 2]);
}

void Xuat(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}