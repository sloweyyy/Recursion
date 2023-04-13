#include<iostream>

using namespace std;

float Tinh(int);

int main()
{
	int k;
	cout << "Nhap k: ";
	cin >> k;
	float kq = Tinh(k);
	cout << "Ket qua la: " << kq;
	return 0;
}

float Tinh(int n) {
	if (n == 1)
		return 0;
	return pow((n + Tinh(n - 1)), (float)1 / n);

}
