#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi
int MR(int A[], int size) {

	int max = INT_MIN, c;

	for (int i = 0; i < 1000; i++)
		if (A[i]>max) {
			max = A[i]; c = i;
		}
	return c;
}
double Average(int A[], int size) {

	double sum = 0, avrg;

	for (int i = 0; i < 1000; i++)
		if (A[i]) {
			sum += A[i] * i;
		}

	avrg = sum / size;

	return avrg;
}
void main() {

	int A[1000] = { 0 }, n, num;
	cout << "chanda addad vared mikonid  ? : ";
	cin >> n;

	system("cls");

	cout << "Adadha ro vared konid : \n";
	for (int i = 0; i < n; i++) {

		cin >> num;
		A[num]++;

	}

	system("cls");

	cout << "bishtarin tekrar = " << MR(A, n) << endl << "Miangin= " << Average(A, n);
}