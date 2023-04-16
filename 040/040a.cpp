#include<iostream>
using namespace std;
int UocLeLonNhat(int);
int main()
{
	int n;
	cout << "Nhap so can xu ly:";
	cin >> n;
	int kq = UocLeLonNhat(n);
	cout << "Ket qua la:" << kq << endl;
}
int UocLeLonNhat(int n)
{
	n = abs(n);
	if (n % 2 != 0)
		return n;
	return UocLeLonNhat(n / 2);
}