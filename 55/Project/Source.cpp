#include <iostream>
using namespace std;
int main()
{
	int *p , *q;
	int a = 5,b=6;
	p = &a;
	q = &b;
	p = q;
	*p++;
	cout << a << endl << b;
	system ("pause");
}