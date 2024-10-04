#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int *p=(int*)malloc(10*sizeof(int));
    printf("Enter:");
    for(int i=0;i<10;i++)
    scanf("%d",&p[i]);
    printf("Display\n");
    for(int i=0;i<10;i++)
    printf("%d",p[i]);
    free(p);
    p=NULL;
    return 0;
}