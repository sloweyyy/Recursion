#include <iostream>
using namespace std;

float Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = Tinh(n);
	cout << "S(n) = " << s;
	return 1;
}

float Tinh(int n)
{
	if (n == 0)
		return 0;
	return sqrt(n + Tinh(n - 1));
}