#include <iostream>
using namespace std;
int f(int &a){
	return ++a;
}
int main()
{
	int k = 6;
	cout << k + f(k++) + k;
	system ("pause");
}