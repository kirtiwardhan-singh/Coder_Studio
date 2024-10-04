#include<stdio.h>

int main() 
{
    int n,i,s;
    printf("Enter array size :");
    scanf("%d",&n);
    int ar[n];
    printf("Enter elements:");
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    s=ar[n-1];
    printf("%d  ",s);
    for(i=n-2;i>=0;i--)
    {
        
        if(s<ar[i])
        {
        s=ar[i];
        printf("%d   ",s);
        }

    }
    return 0;
}