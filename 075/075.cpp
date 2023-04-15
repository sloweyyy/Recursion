#include <iostream>
#include <iomanip>
using namespace std;

int ktToanLe(int n) {
	n = abs(n);
	if (n <= 9) {
		if (n&2!=0)
			return 1;
		else
			return 0;
	}
	int dv = n % 10;
	if (ktToanLe(n / 10) && dv % 2 != 0)
		return 1;
	return 0;
}

void LietKe(int a[], int n) {
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (ktToanLe(a[n-1]))
		cout <<  a[n - 1] << " ";
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int *a = new int[n];
	cout << "Nhap mang a: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	LietKe(a, n);
	delete[]a;
	return 1;
}