#include<iostream>  
#include<cstring>  
using namespace std;  
#define MAXSIZE 100  
int main()  

{  
    int getEnglishCharCount(string str);  
    int getBlankCharCount(string str);  
    int getNumberCharCount(string str);  
    int getOtherCharCount(string str);  
    char str[MAXSIZE];  
    gets(str);  
    int Eng_count,Bla_count,Num_count,Oth_count;  
    Eng_count=getEnglishCharCount(str);  
    Bla_count=getBlankCharCount(str);  
    Num_count=getNumberCharCount(str);  
    Oth_count=getOtherCharCount(str);  
    cout<<Eng_count<<' ';  
    cout<<Bla_count<<' ';  
    cout<<Num_count<<' ';  
    cout<<Oth_count;  
    return 0;  
}  
int getEnglishCharCount(string str)  
{  
    int i=0,engcount=0;  
    while(str[i]!='\0')  
    {  
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))  
            engcount++;  
        i++;  
    }  
    return engcount;  
}  
int getBlankCharCount(string str)  
{  
    int i=0,blacount=0;  
    while(str[i]!='\0')  
    {  
        if((str[i]==' '))  
            blacount++;  
        i++;  
    }  
    return blacount;  
}  
int getNumberCharCount(string str)  
{  
    int i=0,numcount=0;  
    while(str[i]!='\0')  
    {  
        if(str[i]>='0'&&str[i]<='9')  
            numcount++;  
        i++;  
    }  
    return numcount;  
}  
int getOtherCharCount(string str)  
{  
    int i=0;  
    int e,b,n;  
    int othcount;  
    e=getEnglishCharCount(str);  
    b=getBlankCharCount(str);  
    n=getNumberCharCount(str);  
    while(str[i]!='\0')  
        i++;  
    othcount=i-e-b-n;  
    return othcount;  
}
