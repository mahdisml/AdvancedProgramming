#include <iostream>
using namespace std;
int main()
{
	char a[10] = [0,1,2,3,4,5,6,7,8,9];
	int *p = (int*)a;
	char *q = a;
	q = q +9;
	cout<< *++p << endl << *(p-1)<< endl <<q[-2];
	system ("pause");
}