#include<stdio.h>

int main() 
{
    int n,i,j=0;
    printf("Enter size:");
    scanf("%d",&n);
    int ar[n],ar2[n];
    printf("Enter elements:");
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    for(i=0;i<n;i++)
    {
        if(ar[i]!=ar[i+1])
        {
            ar2[j]=ar[i];
            j++;
        }
    }
    for(i=0;i<j;i++)
    printf("%d ",ar2[i]);
    return 0;
}