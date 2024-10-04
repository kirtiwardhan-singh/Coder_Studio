#include<stdio.h>
int divi(int n)
{
    int c=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    return c;
}
int main() 
{
    int n,i,k=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(divi(i)==3)
        k++;
    }
    printf("%d",k);
    return 0;
}