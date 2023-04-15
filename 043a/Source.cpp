#include<iostream>

using namespace std;

int ktTang(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (ktTang(n))
		cout << "Day la so nguyen duong co cac chu so tang dan";
	else
		cout << "Day khong phai la so nguyen duong co cac chu so tang dan";
	return 0;
}
int ktTang(int n) {
	n = abs(n);
	if (n < 10)
		return 1;
	int dv = n % 10;
	int hc = (n / 10) % 10;
	if (ktTang(n / 10) && hc <= dv)
		return 1;
	return 0;
}