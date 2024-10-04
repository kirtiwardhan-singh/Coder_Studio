#include<stdio.h>

int main() 
{
    int n,s=0;
    printf("Enter :");
    scanf("%d",&n);
    while(n>9)
    {
        while(n!=0)
        {
        s=s+n%10;
        n=n/10;
        }
        n=s;
        s=0;
    }
    printf("%d",n);
    return 0;
}