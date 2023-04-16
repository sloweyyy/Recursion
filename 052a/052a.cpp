#include<iostream>;
using namespace std;
int Tinh(float, int);
int main()
{
	int y;
	int k;
	cout << "nhap so k:";
	cin >> k;
	cout << "nhap so y:";
	cin >> y;
	int kq = Tinh(k, y);
	cout << "ket qua la:" << kq;
}
int Tinh(float x, int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return x;
	float a = Tinh(x, n - 1);
	float b = Tinh(x, n - 2);
	return ((1 + x) * a - x * b);
}