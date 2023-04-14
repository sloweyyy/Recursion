#include<iostream>

using namespace std;

int ChuSoDauTien(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = ChuSoDauTien(n);
	cout << "Chu so nguyen duong dau tien: " << kq;
	return 0;
}
int ChuSoDauTien(int n)
{
	n = abs(n);
	if (n <= 9)
		return n;
	return ChuSoDauTien(n / 10);
}