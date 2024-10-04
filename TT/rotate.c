#include<stdio.h>
#include<stdlib.h>
void rotate(int *p)
{
    int d,i;
    printf("Enter d:");
    scanf("%d",&d);
    int c=0;
    int ar[d];
   for(i=10-d;i<10;i++)
   {
    ar[c]=p[i];
    c++;
   }
   for(i=0;i<10-d;i++)
   {
    ar[c]=p[i];c++;
   }
   for(i=0;i<10;i++)
   p[i]=ar[i];
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