#include <iostream>
using namespace std;

int End = 0; //for ending
int a; //adade avval
int b; //adade dovvom

int adadeAval(int b, int a) {

	for (int i = 2; i<100; i++)
		for (int j = 2; j*j <= i; j++)
		{
			if (i % j == 0)
				break;
			else if (j + 1 > sqrt(i)) {
				if (b <= i && i <= a)
					cout << i << "\n";

			}

		}
	return 0;
}
void main() {

	while (End == 0) {

		cout << "adad a ra vared konid (maximum 100) : ";
		cin >> a;
		while (1) {
			cout << "adad b ra vared konid : ";
			cin >> b;
			if (a > b)
				break ;
			cout << "adad b Bozorg tar az a bood ! \n";
		}
		cout << "Aaadade avale baine in do addad mishavad (bejoz 1 va 2 va 3) = \n\n";
		adadeAval(b, a);

	}
}
