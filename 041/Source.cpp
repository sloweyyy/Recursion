#include <iostream>
using namespace std;
int TonTaiChan(int);
int TonTaiChan(int n)
{
	if (n <= 9)
	{
		if (n % 2 == 0)
			return 1;
		return 0;
	}
	int dv = n % 10;
	if (dv % 2 == 0)
		return  1;
	return TonTaiChan(n / 10);
}
int main()
{
	int n;
	cout << " Nhap n ";
	cin >> n;
	int kq = TonTaiChan(n);
	if (kq == 1)
		cout << " co ton tai so chan ";
	else
		cout << " khong ton tai so chan ";
	return 0;
}