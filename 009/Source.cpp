#include <iostream>
using namespace std;
long double LuyThua(double, int );
long double LuyThua( double x, int n)
{
	if (n == 0)
		return 1;
	float t = LuyThua(x,n - 1);
	return (x * t);
}
int main()
{
	int n;
	cout << " Nhap n ";
	cin >> n;
	double x;
	cout << " nhap x ";
	cin >> x;
	float kq = LuyThua(x,n);
	cout << " ket qua = " << kq;
}