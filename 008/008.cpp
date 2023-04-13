#include<iostream>
using namespace std;
int GiaiThua(int);
int main()
{
	int k;
	cout << "nhap k:";
	cin >> k;
	int kq = GiaiThua(k);
	cout << "ket qua la:" << kq;
	return 0;
}
int GiaiThua(int n)
{
	if (n == 0)
		return 1;
	int T = GiaiThua(n - 1);
	return (T * n);
}