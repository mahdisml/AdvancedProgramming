#include <iostream>
using namespace std;
void strchange (char ch1[],char ch2[],char ch3[])
{
	int cg=strlen(ch3)-strlen(ch2),t=0;
	for (int i=0;i<strlen(ch1)+cg;i++)
	{
		bool check=false;
		int counter=0,point=0;
		for (int j=i;j<strlen(ch1);j++)
		{
			if (ch1[j]==ch2[point])
			{
				counter++;
				point++;
			}
			else if (ch1[j]!=ch2[point])
			{
				counter=0;
				point=0;
			}
			if (counter==strlen(ch2))
			{
				check=true;
				i=j;
				t++;
				break;
			}
		}
		if (cg>0&&check)
		{
			for (int j=strlen(ch1)-1;j>i;j--)
				ch1[j+cg]=ch1[j];
		}
		if (check)
		{
			for (int j=i-strlen(ch2)+1,point=0;point<strlen(ch3);j++,point++)
				ch1[j]=ch3[point];
		}
		if (cg<0&&check)
		{
			int len=strlen(ch1);
			for (int j=i+1;j<len;j++)
				ch1[j+cg]=ch1[j];
			for (int j=strlen(ch1)-1,point=0;point<-t*cg;j--,point++)
				ch1[j]=' ';
		}
	}

}
int main()
{
	char ch1[10001]={},ch2[10001]={},ch3[10001]={};
	cout<<" \n jaygozine reshte ha ... \n Enter your main string: ";
	gets(ch1);
	cout<<" Find string: ";
	gets(ch2);
	cout<<" Replace string: ";
	gets(ch3);
	strchange (ch1,ch2,ch3);
	cout<<" result: "<<ch1<<endl;
	system ("pause");
}
