#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi
int n;

int F(int n) {

	if (n == 0) return 0;
	else if (n == 1) return 2;
	else if (n % 3 == 0) return F(n - 1) + (n / 3);
	else return 2 * F(n - 1) + F(n - 2);
}
void main() {

	cout << "adad araye vared konid : ";
	cin >> n;

	system("cls");

	cout << F(n);

}