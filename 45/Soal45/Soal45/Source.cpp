#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi
int b;
long long int Tavan(int p, int t) {

	if (t == 0) return 1;
	return p*Tavan(p, t - 1);

}
void main() {

	cout << "Paye vared konid : ";
	cin >> a;

	system("cls");

	cout << "Tavan vared konid : ";
	cin >> b;

	system("cls");

	cout << Tavan(a, b);
}