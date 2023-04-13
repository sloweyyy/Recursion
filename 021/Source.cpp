#include <iostream>
using namespace std;
float Tinh(float,int);
float Tinh(float x,int n)
{
	if (n == 0)
		return x;
	float s = Tinh(x,n - 1);
	return (s * (x+n));
}
int main()
{
	float x;
	cout << " nhap x ";
	cin >> x;
	int n;
	cout << " Nhap n ";
	cin >> n;
	float kq = Tinh(x,n);
	cout << " ket qua = " << kq;
}