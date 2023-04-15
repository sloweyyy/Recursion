#include <iostream>
using namespace std;

float Tinh(float, int);

int main()
{
	float y;
	int k;
	cout << "Nhap so nguyen: ";
	cin >> y;
	cout << "Nhap so mu: ";
	cin >> k;
	float kq = Tinh(y, k);
	cout << kq;
	return 1;
}

float Tinh(float x, int n)
{
	if (n == 0)
		return x;
	return (Tinh(x, n - 1) + pow(x, 2 * n + 1));
}