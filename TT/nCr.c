#include<stdio.h>
int fact(int n)
{
    if(n==0)
    return 1;
    else return n*fact(n-1);
}
int main() 
{
    int n,r;float c;
    printf("Enter n r:");
    scanf("%d%d",&n,&r);
int t1=fact(n);
int t2=fact(r);
int t3=fact(n-r);

printf("%d",t1/(t2*t3));
    return 0;
}