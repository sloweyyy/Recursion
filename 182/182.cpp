#include <iostream>
#include <iomanip>
using namespace std;

void XuatBo3(float, float, float); 
void LietKe(float[], int);

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
	cout << "Cac bo ba la : " << endl;
	LietKe(a, n);
	return 1;
}

void LietKe(float a[], int n)
{
	if (n <= 2)
		return;
	for (int i = 0; i <= n - 3; i++)
		for (int j = i + 1; j <= n - 2; j++)
		{
			if (a[i] == (a[j] + a[n - 1]))
			{
				XuatBo3(a[i], a[j], a[n - 1]);
				XuatBo3(a[i], a[n - 1], a[j]);
			}
			if (a[j] == (a[i] + a[n - 1]))
				{
				XuatBo3(a[j], a[i], a[n - 1]);
				XuatBo3(a[j], a[n - 1], a[i]);
				}
			if (a[n - 1] == (a[i] + a[j]))
				{
				XuatBo3(a[n - 1], a[i], a[j]);
				XuatBo3(a[n - 1], a[j], a[i]);
				}
		}
	LietKe(a, n - 1);
}

void XuatBo3(float x, float y, float z) {
	cout << setw(10) << setprecision(3);
	cout << "(" << x << "," << y << "," << z << ")" << endl;
}