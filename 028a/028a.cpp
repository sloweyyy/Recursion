#include <iostream>
#include <cmath>
using namespace std;

float Tong(int);

int main()
{
	int k;
	cout << "Nhap so nguyen: ";
	cin >> k;
	float kq = Tong(k);
	cout << "Tong la: " << kq;
	return 1;
}

float Tong(int n)
{
	if (n == 0)
		return 0;
	return pow((n + Tong(n - 1)), (float)1 / (n + 1));
}