#include <iostream>
using namespace std;

void Input(int[], int&);
void MergeSort(int[], int, int);
void Merge(int[], int, int, int);
void Output(int[], int);

int main() {
	int a[1000], n;
	cout << "Mang a:" << endl;
	Input(a, n);
	MergeSort(a, 0, n-1);
	Output(a, n);
	return 1;
}
void Input(int a[], int& n) {
	cout << " Nhap so phan tu cua mang: ";
	cin >> n;
	cout << " Nhap mang:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "  a[" << i << "]: ";
		cin >> a[i];
	}
}

void Merge(int a[], int left, int mid, int right) {
	int* temp = new int[right - left + 1];
	int m = 0;
	int i = left;
	int j = mid + 1;
	while (!(i > mid && j > right)) {
		if ((i <= mid && j <= right && a[i] < a[j]) || j > right)
			temp[m++] = a[i++];
		else
			temp[m++] = a[j++];
	}
	for (i = 0; i < m; i++)
		a[left + i] = temp[i];
	delete[]temp;
}

void MergeSort(int a[], int left, int right) {
	if (left < right)
	{
		int mid = (left + right) / 2;
		MergeSort(a, left, mid);
		MergeSort(a, mid+1, right);
		Merge(a, left, mid, right);
	}
}

void Output(int a[], int n) {
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}