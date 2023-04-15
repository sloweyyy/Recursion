#include <iostream>
using namespace std;

float LonNhat(float[], int);
int DemLonNhat(float[], int);

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
	int d = DemLonNhat(a, n);
	cout << "So luong gia tri lon nhat co trong mang la: " << d;
	return 1;
}

float LonNhat(float a[], int n)
{
	if (n <= 1)
		return a[0];
	float max = LonNhat(a, n - 1);
	if (max < a[n - 1])
		return a[n - 1];
	return max;
}

int DemLonNhat(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = LonNhat(a, n - 1);
	if (lc < a[n - 1])
		return 1;
	int d = DemLonNhat(a, n - 1);
	if (a[n - 1] == LonNhat(a, n))
		d++;
	return d;
}