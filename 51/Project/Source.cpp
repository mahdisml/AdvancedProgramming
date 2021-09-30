#include <iostream>
using namespace std;
int f(int a,int b){
if (a % b ==0)
return b;
return f(b,a %b);
}
int main()
{
	cout << f (6,9);
	system ("pause");
}