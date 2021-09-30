#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
char a[20];
int Zarib = 1;
int shomarande = 0;
long int h = 0;

void main()
{
	cout << "maba 16 vared konid : ";
	cin >> a;

	for (int i = 0; a[i] != NULL; i++){

		shomarande++;

	}

	for (int i = shomarande - 1; i >= 0; i--){

		if (a[i] >= 'A' && a[i] <= 'F') {

			h += Zarib*(int(a[i]) - 55);

		}

		if (a[i] >= '0'&& a[i] <= '9') {

			h += Zarib*(int(a[i]) - 48);
		
		}

		Zarib = Zarib * 16;

	}

	cout << endl << "mabna 10 : " << h << "\n";
}