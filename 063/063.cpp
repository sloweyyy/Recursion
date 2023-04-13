#include <iostream>
#include <vector>
using namespace std;

void Tower(unsigned n, unsigned start, unsigned des, unsigned aux)
{
	if (n == 1)
	{
		cout << "move " << start << " to " << des << endl;
		return;
	}
	else
	{
		Tower(n - 1, start, aux, des);
		cout << "move " << start << " to " << des << endl;
		Tower(n - 1, aux, des, start);
	}
}

int main()
{
	unsigned n = 0;
	cout << "nhap so dia:";
	cin >> n;
	Tower(n, 1, 3, 2);
	return 0;
}