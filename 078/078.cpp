#include <iostream>
using namespace std;

bool KiemTraNguyenTo(int);
void LietKe(int[], int);

int main() {
	int a[1000], n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang a: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	LietKe(a, n);
	return 1;
}

bool KiemTraNguyenTo(int k) {
	for (int i = 2; i <= (k / 2); i++)
		if (k % i == 0)
			return false;
	return true;
}

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (KiemTraNguyenTo(a[n - 1]))
		cout << a[n - 1] << " ";
}