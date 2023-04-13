#include<iostream>
using namespace std;
float Tinh(int);
int main()
{
	int k;
	cout << "nhap k:";
	cin >> k;
	float kq = Tinh(k);
	cout << "ket qua la:" << kq;
	return 0;
}
float Tinh(int n)
{
	if (n == 0)
		return 1;
	float t = Tinh(n - 1);
	return (t * (1 + (float)1 / (n * n)));
}