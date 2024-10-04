#include<stdio.h>

int main() 
{
    int n,i,c=1,k;
    printf("Enter the size :");
    scanf("%d",&n);
    int ar[n];
    printf("Enter elements :");
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    for(i=0;i<n;)
    {
        if(ar[i]-ar[i+1]!=1)
        break;
    }
    k=ar[c+1]-ar[c];
    for(;c<=k;c++)
    printf("%d ",ar[i]+c);
    return 0;
}