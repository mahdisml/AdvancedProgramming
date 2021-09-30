#include <iostream>
using namespace std;

int End = 0; //for ending
int a; //adade avval
int Temp;

int Maghsoom(int b) {

	for (int i = 1; i <= b; i++)
		if (b%i == 0)
			cout << i << "\n";

	return 0;
}
void main() {

	cout << "Adade morede nazar ra vared konid :";
	cin >> a;
	Maghsoom(a);
	
}