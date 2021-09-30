#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi
#define M 100
int A[M];
int x;
int n;
int s = 0;

void  main() {

	cout << "Tedad anasor araye ";
	cin >> n;

	system("cls");

	cout << "Adad tedad tekrar dar araye ";
	cin >> x;

	system("cls");

	cout << "araye ra vared konid " << endl;
	for (int i = 0; i < n; i++) {

		cin >> A[i];
		if (A[i] == x)
			s++;

	}

	system("cls");

	cout << "Adad " << x << " dar araye vared shode " << s << " bar tekrar shode";
}