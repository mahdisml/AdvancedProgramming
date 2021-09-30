#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi
int n;

int F(int n) {

	if ((n == 1) || (n == 2)) {

		return n;
	}
	else if (n == 0) {
		return 0;
	}
	else {
		return F(n - 1) + F(n - 2);
	}
}

void main() {
	cout << "Vared konid";
	cin >> n;

	system("cls");

	cout << F(n);
}