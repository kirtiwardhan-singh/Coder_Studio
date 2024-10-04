#include<stdio.h>

int main() 
{
    int n,i,j,c,k=1;
    printf("Enter :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        printf(" ");
        c=i;
        for(j=1;j<=i;j++)
        {
            printf("%d",c);
            c++;
        c--;
        for(j=i-1;j<=i;j++)
        {
            printf("%d",c);
            c--;
        }
        printf("\n");
    }
    return 0;
}
}