#include <iostream>
#include <iomanip>
using namespace std;

int bcnn(int a, int b) {
	int lc = a * b;
	while (a != b) {
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return lc / a;
}

int TimBCNN(int a[], int n) {
	if (n==1)
		return a[0];
	int lc = TimBCNN(a, n - 1);
	return bcnn(lc, a[n - 1]);
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
	int kq = TimBCNN(a, n);
	cout << "BCNN cua mang la: " << kq;
	delete[]a;
	return 1;
}