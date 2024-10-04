#include<stdio.h>

int main() 
{
    int n,i,j,f=0;
    printf("Enter array size :");
    scanf("%d",&n);
    int ar[n];
    printf("Enter elements:");
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ar[i]<ar[j])
            {
                f=1;break;
            }
        }
        if(f!=1)
        printf("%d   ",ar[i]);
       f=0;
    }
    return 0;
}