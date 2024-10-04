#include<stdio.h>

int main() 
{
    char str[100];
    printf("Enter string :");
    scanf("%s",str);
    int i=0,j,c=0;char ch;
    while(str[c]!='\0')
    {
        c++;
    }
    for(i=0,j=c;i<j;i++,j--)
    {
        ch=str[i];
        str[i]=str[j];
        str[j]=ch;
    }
   // str[c]='\0';
    for(i=0;i<=c;i++)
    printf("%c",str[i]);
    printf("%s",str);
    return 0;
}