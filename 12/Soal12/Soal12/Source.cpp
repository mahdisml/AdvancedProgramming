#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi

void main()
{
	int m, baraks = 0;
	cout << "Adad ra vared konid : ";
	cin >> a;


	while (a){

		m = a % 10;
		baraks = baraks * 10 + m;
		a /= 10;
	
	}
	cout << baraks << "\n";

}