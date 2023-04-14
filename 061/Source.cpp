#include <iostream>
using namespace std;

void QuickSort(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);
void QuickSort(int[], int, int);
int Partition(int[], int, int);

int main()
{
	int a[1000];
	int n;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n);
	Xuat(a, n);
	QuickSort(a, n);
	Xuat(a, n);
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

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void QuickSort(int a[], int n)
{
	QuickSort(a, 0, n - 1);
}

void QuickSort(int a[], int left, int right)
{
	if (left < right)
	{
		int iPivot = Partition(a, left, right);
		QuickSort(a, left, iPivot - 1);
		QuickSort(a, iPivot + 1, right);
	}

}

int Partition(int a[], int left, int right)
{
	int vt = left - 1;
	int Pivot = a[right];
	for (int i = left; i <= right - 1; i++)
	{
		if (a[i] < Pivot)
		{
			vt++;
			swap(a[vt], a[i]);
		}
	}
	vt = vt + 1;
	swap(a[vt], a[right]);
	return vt;
}