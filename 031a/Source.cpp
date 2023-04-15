#include<iostream>

using namespace std;

int TinhAn(int);

int main()
{
	int k;
	cout << "Nhap k: ";
	cin >> k;
	int kq = TinhAn(k);
	cout << "Ket qua la: " << kq;
	return 0;
}

int TinhAn(int n)
{
	if (n == 1)
		return -2;
	return 5 * TinhAn(n - 1) + 12;
}