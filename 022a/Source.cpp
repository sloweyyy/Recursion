#include <iostream>
using namespace std;

int TongChuSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int s = TongChuSo(n);
	cout << "Tong cac chu so cua n la: " << s;
	return 1;
}

int TongChuSo(int n)
{
	n = abs(n);
	if (n == 0)
		return 0;
	int dv = n % 10;
	return (TongChuSo(n / 10) + dv);
}