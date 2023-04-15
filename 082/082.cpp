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
	float max = a[n - 1];
	for (int j =0; j < n; j++)
		if (LonNhat(a, n-1) < a[j])
			max = a[j];
	return max;
}

void LietKe(float a[], int n)
{
	if (n == 0)
		return;

	
	if (LonNhat(a, n - 1) >= a[n - 1])
		cout << n - 1 << " ";
	LietKe(a, n - 1);
}