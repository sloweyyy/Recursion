#include <iostream>
using namespace std;

void Xuat(int* x, int k) {
	for (int i = 1; i <= k; i++)
		cout << x[i] << " ";
	cout << endl;
}

void ToHop(int i, int* x, int n, int k) {
	for (int j = x[i - 1] + 1; j <= n - k + i; j++) {
		x[i] = j;
		if (i == k)
			Xuat(x, k);
		else
			ToHop(i + 1, x, n, k);
	}
}

int main() {
	int n, k;
	cin >> n >> k;
	int* x = new int[k + 1];
	x[0] = 0;
	ToHop(1, x, n, k);
	delete[] x;
	return 0;
}

