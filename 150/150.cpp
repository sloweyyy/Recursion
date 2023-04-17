#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void TaoMang(int[], int, int[], int&);
void Xuat(int[], int);

int main()
{
	int a[1000];
	int n;
	cout << "Nhap mang cac so nguyen " << endl;
	Nhap(a, n);
	int b[1000];
	int k;
	TaoMang(a, n, b, k);
	Xuat(b, k);
	return 0;


}

void Nhap(int a[], int& n)
{
	cout << " Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] : ";
		cin >> a[i];
	}
}

void TaoMang(int a[], int n, int b[], int& k)
{
	if (n == 0)
	{
		k = 0;
		return;
	}
	TaoMang(a, n - 1, b, k);
	if (a[n - 1] % 2 != 0)
		b[k++] = a[n - 1];

}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << a[i] << "  ";
	}
}