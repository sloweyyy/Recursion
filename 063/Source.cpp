#include <iostream>
using namespace std;
float Tinh(float, int);
float Tinh(float x, int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return (1 + x);
	float a = Tinh(x, n - 1);
	float b = Tinh(x, n - 2);
	return ((1 + x) * a - x * b);
}
int main()
{
	float x;
	int n;
	cout << " nhap x ";
	cin >> x;
	cout << " nhap n ";
	cin >> n;
	float kq = Tinh(x, n);
	cout << kq;
	return 0;
}