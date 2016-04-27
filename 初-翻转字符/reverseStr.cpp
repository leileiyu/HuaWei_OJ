#include<iostream>
#include<string.h>
using namespace std;
char * reverse(char *str)
{
	char *p,*q;
	char temp;
	p=q=str;
	while(*q!='\0')
	{
		q++;
	}
	q--;
	while(p<=q)
	{
		temp=*p;
		*p=*q;
		*q=temp;
		p++;
		q--;
	}
	return str;
}
int main()
{
	char str[100];
	gets(str);
	reverse(str);
	cout<<str;
	
	return 0;
}
