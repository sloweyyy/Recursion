#include <iostream>
#include <iomanip>
using namespace std;

int ChanCuoi(int a[], int n) {
	if (n == 0)
		return 0;
	if (a[n - 1] %2 ==  0)
		return a[n - 1];
	return ChanCuoi(a, n - 1);
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
	int cc = ChanCuoi(a, n);
	cout << "So chan cuoi cung: " << cc;
	delete[]a;
	return 1;
}