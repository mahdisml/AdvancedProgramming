#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi
int M(int n, int m) {

	if (n == 0 || m == n || m == 0) return 1;
	return M(n - 1, m) + M(n - 1, m - 1);
}

void main() {

	int n, m;
	cout << "Enter n: ";
	cin >> n;

	system("cls");

	cout << "Enter m: ";
	cin >> m;

	system("cls");

	cout << " result: " << M(n, m) << endl;

}