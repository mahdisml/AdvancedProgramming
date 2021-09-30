#include <iostream>
using namespace std;

int End = 0; //for ending
int i = 1000; // shomarande
int Temp;

long Pcheck(int m, int n)
{

	int r = 1; //Result
	while (n){

		r *= m;
		n--;
	}

	return r;
}

int PorTavan(int a) {

	int b = 0, r;
	Temp = a;

	while (Temp){

		r = Temp % 10;
		b += Pcheck(r, 4);
		Temp /= 10;
	}

	if (b == a) {
		return 1;
	}
	else {
		return 0;
	}
}
void main() {

	cout << "Adade portavan chehar raghami :" << "\n";

	while (i < 10000) {
		i++;
		if (PorTavan(i) == 1) {

			cout << i << "\n";

		}

	}
}