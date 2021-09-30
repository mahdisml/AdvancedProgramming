#include <iostream>
using namespace std;
int main()
{
int a [10];
for (int i =0;i<10;i++)
*(a+i)=i;
cout << *(a+3) << endl << *(a+6)<< endl << *a++;
	system ("pause");
}