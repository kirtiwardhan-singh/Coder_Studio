#include<stdio.h>
#include<stdlib.h>
void rotate(int *p)
{
    int d,i;
    printf("Enter d:");
    scanf("%d",&d);
    int c=d;
    int ar[d];
    for(i=0;i<d;i++)
    ar[i]=p[i];
    for(i=0;i<10-d;i++)
    p[i]=p[i+d];
    for(d=0;i<10;d++,i++)
    p[i]=ar[d];
}
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
    printf("%d\n",p[i]);
}
int main() 
{
    int *p=(int*)malloc(10*sizeof(int));
    ins(p);
    display(p);
   // free(p);
    rotate(p);
    display(p);
    free(p);
   // p=NULL;
    return 0;
}