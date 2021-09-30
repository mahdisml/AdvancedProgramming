#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi
int num;
char F, T, H;

void Hanoi(int n, char Fr, char Too, char Help) {

	if (n == 0)return;
	Hanoi(n - 1, Fr, Help, Too);
	cout << n << " : " << Fr << "=>" << Too << endl;
	Hanoi(n - 1, Help, To, Fr);
}
void main() {

	cout << "Tedad dicsks haye borj : ";
	cin >> num;

	system("cls");

	Hanoi(num, 'F', 'T', 'H');

}