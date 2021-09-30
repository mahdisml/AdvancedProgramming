#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi
int b;

int Zarb(int a, int b) {

	if (b == 1) return a;
	return a + Zarb(a, b - 1);
}
void main() {

	cout << "Adad aval  : ";
	cin >> a;

	system("cls");

	cout << "Adad dovom : ";
	cin >> b;

	system("cls");

	cout << Zarb(a, b);
}