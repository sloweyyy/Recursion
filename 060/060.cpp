#include<iostream>

using namespace std;

int TimKiem(int[], int, int, int);

int main()
{
	int a[100];
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int kq = TimKiem(a, 0, n - 1, x);
	cout << kq;
	return 0;
}
int TimKiem(int a[], int Left, int Right, int x)
{
	int mid = Left + (Right - Left) / 2;
	if (a[mid] == x)
		return mid;
	if (a[mid] < x)
		return TimKiem(a, mid + 1, Right, x);
	return TimKiem(a, Left, mid, x);
	return -1;
}