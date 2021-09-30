#include <iostream>
using namespace std;
void test (int a,int *b){
	int temp =a ;
	a = *b;
	*b = temp;
}
int main()
{
	int x = 6,y=3;
	test (x,&y);
	cout << x << endl << y ;
	system ("pause");
}