#include <iostream>
#include <cmath>
using namespace std;

double Tong(int);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	double S = Tong(n);
	cout << "S(n) = " << S;
	return 1;
}

double Tong(int n) {
	if (n == 0)
		return 0;
	return (Tong(n - 1) + 1 / (sqrt(n) + sqrt(n + 1)));
}
