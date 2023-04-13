#include <iostream>
using namespace std;
float TinhAn(int);
float TinhAn(int n)
{
	if (n == 1)
		return 2;
	float s = TinhAn(n - 1);
	return (s * s + 2) / (2 * s);
}
int main()
{
	int n;
	cout << " Nhap n ";
	cin >> n;
	float kq = TinhAn(n);
	cout << " ket qua = " << kq;
}