#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
char a [1000]; // voroodi
int result;

int length(char A [1000]) {
	for (int i = 0; i < 1000; i++) {
		if (A[i] == NULL) {
			return result;
		}
		result++;
	}
}
void main() {

	
	cin.get(a, 999);
	cout << length(a) ;
}