#include <iostream>
using namespace std;
float Tinh(int);
float Tinh(int n)
{
	if (n == 0)
		return 1;
	float s = Tinh(n - 1);
	return 1/(1+s);
}
int main()
{
	int n;
	cout << " Nhap n ";
	cin >> n;
	float kq = Tinh(n);
	cout << " ket qua = " << kq;
}