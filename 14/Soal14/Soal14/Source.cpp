#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi
int r;
int A[8] = { 0 };

int main()
{
	cout << "Adad Vared Konid : ";
	cin >> a;

	if (a > 255) {

		cout << "Ziade ! kamtar az 255 bayad bashe"; 
	
	}

	for (int i = 0; i < 8 && a; i++) {

		r = a % 2;
		A[i] = r;
		a = a / 2;
	
	}

	cout << "Binerysh mishe : " << "\n";

	for (int i = 7; i >= 0; i--) {

		cout << A[i];
	}
	cout << "\n";
}