#include <iostream>
#include <conio.h>
using namespace std;

int End = 0; //for ending
int All = 0; //teedad A
char Temp;

void main() {

	while (End == 0) {

		cout << "\ncharacter vared konid : ";
		Temp = _getch();
		if (Temp == 'q')
			return void();
		if (Temp == 'a')
			All++;
		if (Temp == 'b')
		  cout << "\ncharacter a  " << All << " bar tekrar shod\n\n\n";

	}
}
