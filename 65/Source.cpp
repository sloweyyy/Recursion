#include<iostream>
using namespace std;

bool ok(int[],int, int);
void Xuat(int[], int);
void SapXep(int [],int, int);

bool Ok(int a[],int x2, int y2) {
	for (int i = 1; i < x2; i++)
		if (a[i] == y2 || abs(i - x2) == abs(a[i] - y2))
			return false;
	return true;
}

void Xuat(int a[],int n) {
	for (int i = 1; i <= n; i++)
		cout << " " << a[i];
	cout << "\n";
}

void SapXep(int a[],int i, int n)
{
	for (int j = 1; j <= n; j++) 
	{
		if (Ok(a,i, j))
		{
			a[i] = j;
			if (i == n) Xuat(a,n);
			SapXep(a,i + 1, n);
		}
	}
}

int main() {
	int n = 8;
	int a[20];
	SapXep(a,1, n);
	return 0;
}