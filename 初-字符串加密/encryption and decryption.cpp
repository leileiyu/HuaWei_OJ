#include <iostream>
#include <string.h>
using namespace std;
#define MAX 100

void Encrypt(char aucPassword[],char aucResult[])
{
	int i;
	int len=0;
	 len=strlen(aucPassword);
	 
    for(i=0;i<len;i++){
        if(aucPassword[i]>='A' && aucPassword[i]<='Z'){
            aucResult[i]=(aucPassword[i]-'A'+1)%26+'a';
        }else if(aucPassword[i]>='a' && aucPassword[i]<='z'){
            aucResult[i]=(aucPassword[i]-'a'+1)%26+'A';
        }else if(aucPassword[i]>='0' && aucPassword[i]<='9'){
            aucResult[i]=(aucPassword[i]-'0'+1)%10+'0';
        }else{
            aucResult[i]=aucPassword[i];
        }
    }
    aucResult[len]='\0';
}
void unEncrypt(char result[],char password[])
{
    int i;
    int len=0;
    len=strlen(password);
  
    for(i=0;i<len;i++){
        if(password[i]>='A' && password[i]<='Z'){
            result[i]=(password[i]-'A'-1+26)%26+'a';
        }else if(password[i]>='a' && password[i]<='z'){
            result[i]=(password[i]-'a'-1+26)%26+'A';
        }else if(password[i]>='0' && password[i]<='9'){
            result[i]=(password[i]-'0'-1+10)%10+'0';
        }else{
            result[i]=password[i];
        }
    }
    result[len]='\0';
}

int main()
{
    char aucPassword[MAX],aucResult[MAX],password[MAX],result[MAX];
    scanf("%s %s",aucPassword,password);
    Encrypt( aucPassword,aucResult);
    puts(aucResult);
	unEncrypt( result, password);
    puts(result);
    
    return 0;
}





