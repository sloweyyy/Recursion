#include <iostream>
#include <iomanip>
using namespace std;
int TinhAn(int);
int TinhBn(int);
int TinhAn(int n)
{
	if (n == 1)
		return 1;
	int x =  TinhAn(n - 1);
	int y = TinhBn(n - 1);
	return (3 * y + 2 * x);
}
int TinhBn(int n)
{if (n == 1)
		return 1;
	int x = TinhAn(n - 1);
	int y = TinhBn(n - 1);
	return (x + 3 * y);
}
int main()
{

	int n;
	cout << " Nhap n ";
	cin >> n;
	int A = TinhAn(n);
	cout << A << setw(4);
	int B = TinhBn(n);
	cout << B << setw(4);
	return 0;

}