#include<stdio.h>

int main() 
{
    int a,b,i,n;
    printf("Enter size:");
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    a=ar[0];
    b=ar[0];
    for(i=1;i<n;i++)
    {
        if(a<ar[i])
        a=ar[i];
        if(b<ar[i]&&ar[i]!=a)
        b=ar[i];
    }
    if(a==b)
    b=-1;
    printf("%d and %d",a,b);
    return 0;
}