#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
void LietKe(float[], int);
int main()
{
	float a[100];
	int n;
	cout << "Nhap so phan tu cua mang:";
	cin >> n;
	for (int i = 0; i <= n-1; i++)
		cin >> a[i];
	cout << "Cac gia tri la:";
	LietKe(a, n);
}
void LietKe(float a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (a[n - 1] > 0)
		cout << setw(10) << setprecision(3) << a[n - 1];
}