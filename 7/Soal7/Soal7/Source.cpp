#include <iostream>
using namespace std;

int End = 0; //for ending
int All; //jamee aadad
int Count; //teedad aadad
int Temp;

void main (){

	while (End == 0) {

		cout << "adad vared konid : ";
		cin >> Temp;
		if (Temp == -1)
			return void();
		All = All + Temp;
		Count++;
		Temp = All / Count;
		cout << "\nMiangine " << Count << " adad : " << Temp << "\n\n\n";

	}
}