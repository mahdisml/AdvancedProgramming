#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi
int moadele(int n, int m)
{
	if (n == 0 || m == n || m == 0) return 1;
	return moadele(n - 1, m) + moadele(n - 1, m - 1);
}
int main()
{
	int n, m;
	cout << "Enter n: ";
	cin >> n;
	system("cls");
	cout << "Enter m: ";
	cin >> m;
	system("cls");
	cout << " result: " << moadele(n, m) << endl;
	system("pause>n");
	return 0;
}