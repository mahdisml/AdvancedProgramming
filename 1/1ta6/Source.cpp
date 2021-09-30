#include <iostream>

using namespace std;

int x = -1, a = 2, b = 3, c = 1;

void main() {

	x = ++a + b * (c++);
	cout << x << a << b << c << endl;
	//  3+3*1 6332
	x -= (b++)* (++b);
	cout << x << a << b << c << endl;
	//  -10 3 5 2
	x = a++ + ++a;
	cout << x << a << b << c << endl;
	// 4+4 8 5 5 2
	x = !a % 2 ? b++ : a;
	cout << x << a << b << c << endl;
	
}
