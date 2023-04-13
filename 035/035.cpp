#include<iostream>
#include <iomanip>
using namespace std;

void LietKe(int);

int main()
{
	int k;
	cout << "Nhap k: ";
	cin >> k;
	cout << "Ket qua la: " << endl;
	LietKe(k);
	return 0;
}

void LietKe(int n)
{
	if (n == 1) {
		cout << setw(6) << n;
		return;
	}
	cout << setw(6) << n;
	if (n % 2 == 0)
		LietKe(n / 2);
	else
		LietKe(3 * n + 1);
}