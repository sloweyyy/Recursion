#include <iostream>
using namespace std;

float Tong(int);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float S = Tong(n);
	cout << "S(n) = " << S;
	return 1;
}

float Tong(int n) {
	if (n == 0)
		return 0;
	return (Tong(n - 1) + (float)n / (n + 1));
}
