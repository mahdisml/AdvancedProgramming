#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi
#define M 100
int A[M];
int n;
int x;

int Srch(int A[], int size, int x)
{
	int i = 0, j = size - 1, mid = (i + j) / 2;
	for (; i <= j; mid = (i + j) / 2) {

		if (x > A[mid])
			i = mid + 1;
		else if (x < A[mid])
			j = mid - 1;
		else if (x == A[mid])
			return mid;

	}
	return -1;
}

void main() {

	cout << "Teedaad anasor araye vared konid : ";
	cin >> n;

	system("cls");

	cout << "Anasor araye vared konid : ";
	for (int i = 0; i < n; i++)
		cin >> A[i];

	system("cls");

	cout << "Adad vared konid : ";
	cin >> x;

	system("cls");

	cout << "Adadetoon " << Srch(A, n, x) << " hastesh";
}