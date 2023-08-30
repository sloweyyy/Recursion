#include <iostream>
using namespace std;

float LonNhat(float [], int);
void LietKe(float[], int);

int main()
{
	float a[1000];
	int n;
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

float LonNhat(float a[], int n)
{
	if (n == 1)
		return a[0];
	float max = LonNhat(a, n - 1);
	if (max < a[n - 1])
		return a[n - 1];
	return max;
}

void LietKe(float a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (a[n - 1] == LonNhat(a, n))
		cout << n - 1 << " ";
}
