#include<stdio.h>
#include<string.h>
int main() 
{
   char str[100];
    printf("Enter string :");
    scanf("%s",str);
    int p,s=1,e=1,c=0,h;char ch;
    while(str[c]!='\0')
    {
        c++;
    }
    p=(c+1)/2;
    if(c%2==0)
    {
        ch=str[p];
        str[p]=str[p+1];
        str[p+1]=ch;
        for(;s<=p;s++,e++)
        {
            ch=str[p-s];
            str[p-s]=str[p+e+1];
            str[p+e+1]=ch;
        }
         for(int i=0;i<=c+1;i++)
    printf("%c",str[i]);
    }
    else
    {
        for(int i=0;i<p;i++)
        {
            h=str[p+i];
            str [p+i]=str[p-i];
            str[p-i]=h;
        }
          for(int i=0;i<c;i++)
     printf("%c",str[i]);
    
    }

    // for(int i=0;i<=c+1;i++)
    // printf("%c",str[i]);
   // printf("%s",str);
    
    return 0;
}