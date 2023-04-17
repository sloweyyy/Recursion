#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void Xoa(float[], int, int&);


int main()
{
	float a[1000];
	int n;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n);
	Xoa(a, 0, n);
	cout << " mang sau khi xoa so am la ";
	Xuat(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << " Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] : ";
		cin >> a[i];
	}
}


void Xoa(float a[], int vt, int& n)
{
	if (vt == n)
		return;
	if (n == 1)
	{
		if (a[n - 1] < 0)
			n--;
		return;

	}
	if (a[vt] < 0)
	{
		for (int i = vt; i < n - 1; i++)
		{
			a[i] = a[i + 1];

		}
		n--;
		vt = vt - 1;
	}
	vt++;
	Xoa(a, vt, n);
	vt--;
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << "  " << a[i];
	cout << endl;
}
