#include <iostream>
using namespace std;

void LietKe(int[], int);
int ChuSoDau(int);

int main()
{
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

int ChuSoDau(int k) {
	while (k >= 10)
		k /= 10;
	return k;
}

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (ChuSoDau(a[n - 1]) % 2 == 0)
		cout << a[n - 1] << " ";
}
