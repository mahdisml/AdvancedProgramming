#include <iostream>
using namespace std;
void add (char ch1[],char ch2[])
{
	int x=strlen(ch1);
	for (int i=0;i<strlen(ch2);i++)
	ch1[x+i]=ch2[i];
}
int main()
{
	char ch1[10001]={},ch2[10001]={};
	cout<<" \t\t\t\t  \n ezafe kardane reshte aval b dovom ... \n Enter string1: ";
	gets(ch1);
	cout<<" Enter string 2: ";
	gets(ch2);
	add(ch1,ch2);
	cout<<" result: "<<ch1<<endl;
	system ("pause");
}