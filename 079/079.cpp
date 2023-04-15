#include <iostream>
#include <iomanip>
using namespace std;

int ktChinhPhuong(int n) {
	int x = sqrt((float)n);
	if (x*x == n)
		return 1;
	return 0;
}


void LietKe(int a[], int n) {
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (ktChinhPhuong(a[n - 1]))
		cout << a[n - 1] << " ";
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
	LietKe(a, n);
	delete[]a;
	return 1;
}