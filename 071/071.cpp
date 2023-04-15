#include <iostream>
#include <iomanip>
using namespace std;

void LietKe(float a[], int n) {
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (a[n - 1] > 0)
		cout << setprecision(3) << a[n - 1] << " ";
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float* a = new float[n];
	cout << "Nhap mang a: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	LietKe(a, n);
	delete[]a;
	return 1;
}