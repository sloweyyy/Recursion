#include <iostream>
using namespace std;

int TichSoLe(int);
int TichSoLe(int n)
{
	 n = abs(n);
	if (n <= 9)
	{
		if (n % 2 == 1)
			return n;
		 return 1;
	}
	int T = TichSoLe(n/10);
	int dv = n % 10;
	if (dv % 2 == 1)
		return (T * dv);
	return T;
}
int main()
{
	int n;
	cout << " nhap n ";
	cin >> n;
	int kq = TichSoLe(n);
	cout << " ket qua = " << kq;
	return 0;
}