#include <iostream>
using namespace std;

long TinhAn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	long a = TinhAn(n);
	cout << "a(n) = " << a;
	return 1;
}

long TinhAn(int n)
{
	if (n == 1)
		return 2;
	return TinhAn(n - 1) + 2 * n + 1;
}