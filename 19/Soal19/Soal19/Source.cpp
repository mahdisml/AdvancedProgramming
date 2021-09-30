#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi

int S(int Array[], int size) {

	int S = 0;
	for (int i = 0; i < size; i++)
		S += Array[i];

	return S;
}

void main() {

	int *Array, Size, Num;
	cout << "Adad ra vared konid :";
	cin >> Size;
	Array = new int[Size];
	cout << "Adad ha  " << Size << "  ast :" << endl;

	for (int i = 0; i < Size; i++)
		cin >> Array[i];

	cout << "Kolle aadad :" << S(Array, Size);
	delete[] Array;
}