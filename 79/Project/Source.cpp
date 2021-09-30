#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream o ("o.txt");
	for (int i = 1 ; i < 11; i++){
		for (int j = 1 ; j < 11; j++){
			o << i*j << "   " ;
		}
		o << endl ;
	}
	system ("pause");
}