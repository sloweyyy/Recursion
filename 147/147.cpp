#include <iostream>
#include <iomanip>
using namespace std;

int ktTang(int a[], int n) {
	if (n == 1)
		return 1;
	if (n == 0)
		return 0;
	if ((a[n - 2] <= a[n - 1]) && ktTang(a, n - 1) == 1)
		return 1;
	return 0;
}
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	cout << "Nhap mang a: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	if (ktTang(a, n))
		cout << "Mang tang dan";
	else cout << "Mang khong tang dan";
	delete[]a;
	return 1;
}