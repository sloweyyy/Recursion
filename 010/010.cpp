#include <iostream>
using namespace std;

long Tong(int);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	long S = Tong(n);
	cout << "S(n) = " << S;
	return 1;
}

long Tong(int n) {
	if (n == 0)
		return 0;
	return (Tong(n - 1) + n * n * n);
}