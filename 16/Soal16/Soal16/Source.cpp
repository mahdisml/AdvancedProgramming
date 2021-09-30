#include <iostream>
using namespace std;

int End = 0; //for ending
int Temp;
int a; // voroodi


void Fibonachi(int a){

	int s = 0;
	int temp1 = 0;
	int	temp2 = 1;


	if (a == 1)
		cout << "0";
	else if (a == 2)
		cout << "0 1";
	else
	{

		cout << "0 1";
		for (int i = 2; i < a; i++)
		{
			s = temp1 + temp2;
			cout << " " << s;
			temp1 = temp2;
			temp2 = s;
		}
	}
}
void main(){

	int a;
	cout << "Adad ra vared konid :";
	cin >> a;
	Fibonachi(a);

}