#include<iostream>

using namespace std;

int Tong(int);

int main()
{
	int k;
	cout << "Nhap k: ";
	cin >> k;
	int kq = Tong(k);
	cout << "Ket qua la: " << kq;
	return 0;
}

int Tong(int n)
{
	if (n == 0)
		return 0;
	int s = Tong(n - 1);
	return (s + n * n * n * n);
}