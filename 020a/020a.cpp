#include<iostream>
using namespace std;
float Tong(int);
int main()
{
	int k;
	cout << "nhap k:";
	cin >> k;
	float kq = Tong(k);
	cout << "ket qua la:" << kq;
	return 0;
}
float Tong(int n)
{
	if (n == 0)
		return 0;
	float s = Tong(n - 1);
	return (s + sqrt(1 + (float)1 / n / n + (float)1 / (n + 1) / (n + 1)));
}