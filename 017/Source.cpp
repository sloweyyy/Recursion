#include <iostream>
using namespace std;
float Tong(int);
float Tong(int n)
{
	if (n == 0)
		return 0;
	float s = Tong(n - 1);
	return (s + (float)1/n/(n+1)/(n+2)/(n+3));
}
int main()
{
	int n;
	cout << " Nhap n ";
	cin >> n;
	float kq = Tong(n);
	cout << " Tong = " << kq;
}