#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi
int A[1000] = { 0 };
int n;
int  num;

void main() {

	int A[1000] = { 0 }, n, num;
	cout << "Tedad adad vared konid : ";
	cin >> n;

	system("cls");

	cout << "Adad vared konid : ";
	for (int i = 0; i < n; i++) {

		cin >> num;
		A[num]++;

	}

	system("cls");

	for (int i = 0; i < 1000; i++)
		if (A[i])
		{
			cout << i << " ";
		}


}