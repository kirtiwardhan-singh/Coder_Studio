#include<stdio.h>

int main() 
{
    // int n,i,sum=0;
    // printf("Enter the total number of elements :");
    // scanf("%d",&n);
    // int ar[n];
    // for(i=0;i<n-1;i++)
    // {
    // scanf("%d",&ar[i]);
    // sum =sum+ar[i];
    // }
    // printf("Missing element = %d",(n*(n+1)/2)-sum);
    // return 0;
    int n,i,sum=0,sum1=0;
    int ar[]={1,2,3,4,5};
    n=sizeof(ar)/sizeof(ar[0]);
    n=n+1;
    // for(i=0;i<n-1;i++)
    // sum=sum +ar[i];
    // printf("Missing element %d",(n*(n+1)/2)-sum);
    for(i=0;i<n-1;i++)
    sum=sum^i;
    for(i=0;i<n-1;i++)
    sum=sum^ar[i];
    printf("%d",sum);
}