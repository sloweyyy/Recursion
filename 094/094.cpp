#include <iostream>
using namespace std;

float TongGiaTri(float[], int);

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
	float s = TongGiaTri(a, n);
	cout << " Tong cac gia tri lon hon tri tuyet doi cua so lien sau trong mang la: " << s;
	return 1;
}

float TongGiaTri(float a[], int n)
{
	if (n <= 1)
		return 0;
	float s = TongGiaTri(a, n - 1);
	if (a[n - 2] > abs(a[n - 1]))
		s += a[n - 2];
	return s;
}