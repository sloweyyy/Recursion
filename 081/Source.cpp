#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&, int& ,int &);
void Xuat(int[], int, int, int );
int ChuSoDau(int);

int main()
{
	int a[1000];
	int n,x,y;
	cout << " nhap mang cac so nguyen ";
	Nhap(a, n,x ,y);
	Xuat(a, n, x, y);
	return 0;


}

void Nhap(int a[], int& n, int& x, int &y )
{
	cout << " Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] : ";
		cin >> a[i];
	}
	cout << " Nhap x ";
	cin >> x;
	cout << " nhap y ";
	cin >> y;
}

void Xuat(int a[], int n, int x, int y)
{
	if (n == 0)
		return;
	Xuat(a, n - 1, x, y);
	if (a[n-1] <= y && a[n-1] >= x && a[n-1]%2 == 0)
		cout << setw(6) << a[n - 1];

}

