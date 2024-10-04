#include<stdio.h>
#include<stdlib.h>
void ins(int *p)
{
    printf("Enter:");
    for(int i=0;i<10;i++)
    scanf("%d",&p[i]);
}
void display(int *p)
{
    printf("Display\n");
    for(int i=0;i<10;i++)
    printf("%d",p[i]);
}
int main() 
{
    int *p=(int*)malloc(10*sizeof(int));
    ins(p);
    display(p);
    free(p);
   // p=NULL;
    return 0;
}