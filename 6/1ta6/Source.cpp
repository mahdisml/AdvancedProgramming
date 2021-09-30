#include <iostream>

using namespace std;

int k = 6;
int f(int x){
	static int k = 3;
	int p = x % 2 ? k++ : ::k++;
	return p,k;
}

void main() {

	int k = 2;
	for (int i= -2 ; i < 3;i++)
cout << ::k + f(i+k)<< endl;

}
