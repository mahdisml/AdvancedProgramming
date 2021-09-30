#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi
int n;
int r;
int c = 1;
int sum = 0;

void main() {

	cout << "Shomare vared konid : ";
	cin >> n;

	system("cls");

	for (int i = 1; i <= n; i++) {

		while (c) {

			r = c % 10;
			sum += r;
			c /= 10;
		}
		c += sum;
	}
	cout << "joomle " << n << " donbaleh " << sum << " ine";

}