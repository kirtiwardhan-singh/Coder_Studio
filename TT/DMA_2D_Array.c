#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int r,c,i,j;
    printf("Enter row amd column :");
    scanf("%d%d",&r,&c);
    int *p[r];
for(i=0;i<r;i++)
p[i]=(int*)malloc(c*sizeof(int));
printf("Enter elements: ");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    scanf("%d",&p[i][j]);
}
printf("Matrix :\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    printf("%d\t",p[i][j]);
    printf("\n");
}
    return 0;
}