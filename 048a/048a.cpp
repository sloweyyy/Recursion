#include<iostream>;
using namespace std;
int Tinh(int);
int main()
{
	int k;
	cout << "nhap so k:";
	cin >> k;
	int kq = Tinh(k);
	cout << "ket qua la:" << kq;
}
int Tinh(int n)
{
	if (n == 0)
		return -1;
	if (n == 1)
		return 3;
	int x = Tinh(n - 1);
	int y = Tinh(n - 2);
	return (5 * x + 6 * y);
}