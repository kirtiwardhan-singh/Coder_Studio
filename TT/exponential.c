#include<stdio.h>
int expo(int m,int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return m;
    else
    return m*expo(m,n-1);
}
int main() 
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",expo(m,n));
    return 0;
}