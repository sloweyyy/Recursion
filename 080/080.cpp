#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
void LietKe(float[], int,float,float);
int main()
{
	float a[100];
	int n;
	float x, y;
	cout << "Nhap so phan tu cua mang:";
	cin >> n;
	cout << "nhap x:";
	cin >> x;
	cout << "nhap y:";
	cin >> y;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
	cout << "Cac gia tri la:";
	LietKe(a, n,x,y);
}
void LietKe(float a[], int n, float x, float y)
{
	if (n == 0)
		return;
	LietKe(a, n - 1, x, y);
	if (a[n - 1] >= x && a[n - 1] <= y)
		cout << setw(10)  << a[n - 1];
}