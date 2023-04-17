#include <iostream>
using namespace std;

void NguyenHoa(float[], int);
void Xuat(float[], int);

int main()
{
	float a[1000];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang a: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Mang sau khi nguyen hoa la : ";
	NguyenHoa(a, n);
	Xuat(a, n);
	return 1;
}

void NguyenHoa(float a[], int n)
{
	if (n == 0)
		return;
	NguyenHoa(a, n - 1);
	if (a[n - 1] > 0)
		a[n - 1] = (float)int(a[n - 1] + 0.5);
	else 
		a[n - 1] = (float)int(a[n - 1] - 0.5);
}

void Xuat(float a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}