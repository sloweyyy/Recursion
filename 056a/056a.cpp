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
	return 1;
}
float Tinh(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	float a = Tinh(n - 1);
	float b = Tinh(n - 2);
	return a + 1 / (n + 1 / (a - b));
}