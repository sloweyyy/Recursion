#include <iostream>
using namespace std;
int DemSoChan(int);
int DemSoChan(int n)
{
	if (n <= 9)
	{
		if (n % 2 == 0)
			return 1;
		return 0;
	}
	int Dem = DemSoChan(n / 10);
	int dv = n % 10;
	if (dv % 2 == 0)
		return Dem + 1;
	return Dem;
}
int main()
{
	int n;
	cout << " Nhap n ";
	cin >> n;
	int kq = DemSoChan(n);
	cout << " ket qua = " << kq;
}