#include <iostream>
using namespace std;
int *f1(int *a){
	*a++;
	return a;
}
int f2(int *a){
	int *p = a;
	*p = *p**p;
	return *a;
}
int main()
{
	int x [5] = [1,2,3,4];
	cout << f2(f1(x)+2);
	system ("pause");
}