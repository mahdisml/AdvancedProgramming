#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi
int n;

unsigned long long int S(int n) {

	if (n == 1) return 1;
	return n*S(n - 1);
}

void main() {

	cout << "Adad ra vared konid : ";
	cin >> n;

	system("cls");

	cout << S(n);

}