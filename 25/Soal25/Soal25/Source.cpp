#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi
#define M 100
int A[M];
int n;

void main() {

	cout << "Tedad Anasor araye ro type konid ";
	cin >> n;

	system("cls");

	for (int i = 0; i < n; i++)
		cin >> A[i];

	system("cls");

	for (int i = n - 1; i >= 0; i--)
		cout << A[i] << " ";

	system("pause>n");
}