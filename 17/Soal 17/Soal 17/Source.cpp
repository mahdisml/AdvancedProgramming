#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi


void op(int m, int n)
{
	char Input;
	cin >> Input;
	cout << "   Natije :";

	switch (Input){

	case '+':
		m += n;
		cout << m;
		break;
	case '-':
		m -= n;
		cout << m;
		break;
	case '/':
		float result;
		result = (float)m / n;
		cout << result;
		break;
	default:

		cout << "eshtebahe !";
	}
}
void main(){

	int m, n;
	cout << "2 adad ra vared konid :";
	cin >> m >> n;
	op(m, n);

}