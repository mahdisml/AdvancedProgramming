#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi
#define M 100
int A[M];
int B[M];
int C[M];
int n;

void main() {

	cout << "tedad Ansorhaye araye varedkonid ";
	cin >> n;

	system("cls");

	cout << "Ansorhaye araye avalvaredkonid ";
	for (int i = 0; i < n; i++)
		cin >> A[i];

	system("cls");

	cout << "Ansorhaye araye dovom vared koind ";
	for (int i = 0; i < n; i++)
		cin >> B[i];

	system("cls");

	for (int i = 0; i < n; i++) {
		C[i] = A[i] + B[i];
		cout << C[i] << " ";
	}

}