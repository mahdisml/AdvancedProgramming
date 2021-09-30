#include <iostream>
using namespace std;
#include <math.h>

int End = 0; //for ending
int Temp;
int a; // voroodi

long double P(int a, int b) {

	int P = 1;
	while (b--)
		P *= a;
	return (P);

}
long long F(int a) {

	int R = 1;
	while (a) {

		R *= a;
		a--;

	}
	return (R);
}

float sinx(int n, int x) {

	int k = 1;
	float R = 0, Sum = 0;
	for (int i = 1; i <= n; i++, k += 2) {

		R = P(x, k) / F(k);
		if (i % 2 == 0)
			R *= -1;
		Sum += R;
	}
	return Sum;
}
void main() {

	int x, n;
	cout << "X ra vared konid : ";
	cin >> x;

	system("cls");

	cout << "tedad jomalat ra vared konid : ";
	cin >> n;

	system("cls");

	cout << sinx(n, x);
}