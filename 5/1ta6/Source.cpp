#include <iostream>

using namespace std;

int x = -1, a = 2, b = 3, c = 1;

void main() {

int n , s = 10;
cin >> n;
while (n){
	s *= 10+n%10;
	n /= 10;
}
cout << s;
	
}
