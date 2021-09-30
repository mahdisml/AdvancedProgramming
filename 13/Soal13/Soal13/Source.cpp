#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi

int JAZ (int a){

	int r;//result
	int JAZ = 0;

	while (a){

		r = a % 10;
		if (r % 2 == 0)
			JAZ += r;
		a /= 10;

	}
	return JAZ;
}

void main(){

	cout << "Adad ra vared konid :";
	cin >> a;
	cout << "Natije : " << JAZ(a) << "\n ";

}