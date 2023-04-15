#include <iostream>
#include <iomanip>
using namespace std;

int DemChan(int a[], int n) {
	if (n == 0)
		return 0;
	int dem = DemChan(a, n - 1);
	if (a[n - 1] % 2 == 0)
		dem++;
	return dem;
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
	float s = DemChan(a, n);
	cout << "So luong so chan trong mang la: " << s;
	delete[]a;
	return 1;
}