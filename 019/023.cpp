#include<iostream>

using namespace std;

int TichChuSo(int n);

int main()
{
	int k;
	cout << "Nhap k: ";
	cin >> k;
	int kq = TichChuSo(k);
	cout << "Ket qua la: " << kq;
	return 0;
}

int TichChuSo(int n)
{
	n = abs(n);
	if (n <= 9)
		return n;
	int T = TichChuSo(n / 10);
	int dv = n % 10;
	return T * dv;
}

