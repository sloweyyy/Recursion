#include <iostream>
using namespace std;

long TinhGiaiThua(int);

int main() {
	int k, n;
	cout << "Nhap k: ";
	cin >> k;
	cout << "Nhap n: ";
	cin >> n;
	long NGiaiThua = TinhGiaiThua(n);
	long N_KGiaiThua = TinhGiaiThua(n - k);
	long ChinhHop = NGiaiThua / N_KGiaiThua;
	cout << "Chinh hop chap k cua n phan tu la: " << ChinhHop;
	return 1;
}

long TinhGiaiThua(int k) {
	if (k == 0)
		return 1;
	return (TinhGiaiThua(k - 1) * k);
}