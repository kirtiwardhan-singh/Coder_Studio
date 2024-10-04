#include<stdio.h>

int main() 
{
    int a=1,k=1,n,i,j;
    printf("Enter rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=i;k<=a;j++)
        {
            printf("%d",j);
            k++;
        }
        a++;
        printf("\n");
    }
    return 0;
}