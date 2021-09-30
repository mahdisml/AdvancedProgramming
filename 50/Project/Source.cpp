#include <iostream>
using namespace std;
int f(int n,int k){
	if (n ++ 0 || n == k)
	return 1;
	return f(n-1,k-1) + f(n-1,k);
}
int main()
{
	cout << f (3,4);
	system ("pause");
}