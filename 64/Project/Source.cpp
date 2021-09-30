#include <iostream>
using namespace std;
bool mt (char ch[])
{
	for (int i=0;i<(strlen(ch)/2);i++)
	if (ch[i]!=ch[strlen(ch)-1-i]) return false;
	return true;
}
int main()
{
	char ch[10001]={};
	cout<<" \t\t\t\t  \n reshte motegharen ... \n Enter string: ";
	gets(ch);
	if (mt (ch))
		cout<<"Yes"<<endl;
	else
		cout<<"No!"<<endl;
	system ("pause");
}