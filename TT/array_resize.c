#include<stdio.h>
#include<stdlib.h>
void ins(int *p)
{
    printf("Enter:");
    for(int i=0;i<5;i++)
    scanf("%d",&p[i]);
}
void display(int *p,int n)
{
    printf("Display\n");
    for(int i=0;i<n;i++)
    printf("%d\n",p[i]);
}
void change_arr(int *p,int *q,int n)
{
    for(int i=0;i<5;i++)
    q[i]=p[i];
    printf("Enter new elements:\n");
    for(int i=5;i<n;i++)
    scanf("%d",&q[i]);
}
int main() 
{
    int s,ns;
    printf("Enter size:");
    scanf("%d",&s);
    int *p=(int *)malloc(s*sizeof(int));
    ins(p);
    display(p,s);
    printf("Enter new size:");
    scanf("%d",&ns);
    int *q=(int *)malloc(ns*sizeof(int));
    change_arr(p,q,ns);
    free(p);
    p=q;
    free(q);
    q=NULL;
    printf("Increased array\n");
    display(p,ns);
    
    free(p);
    q=NULL;
    p=NULL;
   
    return 0;
}