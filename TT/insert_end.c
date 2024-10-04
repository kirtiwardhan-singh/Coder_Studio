#include<stdio.h>
void insert(int ar[],int n,int element)
{
    ar[n]=element;
}
void ins(int ar[],int n)
{
    printf("Enter elements :\n");
    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);
}
void display(int ar[],int n)
{
    printf("Display\n");
    for(int i=0;i<n;i++)
    printf("%d\n",ar[i]);
}
int main() 
{
    int n,element;
    printf("Enter size:");
    scanf("%d",&n);
    int ar[n+1];
    ins(ar,n);
    printf("Enter element to be inserted:");
    scanf("%d",&element);
    insert(ar,n,element);
    display(ar,n+1);
    return 0;
}