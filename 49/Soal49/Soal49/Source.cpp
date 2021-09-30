#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi
#define M 100
int A[M];
int n;

int A(int A[], int size) {

	if (size == 1)return A[size - 1];
	return A(A, size - 1) + A[size - 1];

}
void main() {

	int A[M], n;
	cout << "Tedad anasor araye ra vared konid : ";
	cin >> n;

	system("cls");

	cout << "Anasor araye ra vared mkonid : ";
	for (int i = 0; i < n; i++)
		cin >> A[i];

	system("cls");

	cout << A(A, n);

}