#include<stdio.h>
void ins(int ar[],int n)
{
    printf("Enter elements :\n");
    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);
}
int search(int ar[],int n,int s)
{
   for(int i=0;i<n;i++)
   {
    if(ar[i]==s)
    return i+1;
   }
   return -1;
}
int main() 
{
    int n,s;
    printf("Enter size:");
    scanf("%d",&n);
    int ar[n];
    ins(ar,n);
    printf("Enter search element :  ");
    scanf("%d",&s);
    int k=search(ar,n,s);
    if(k>=0)
    printf("Search successful....found at position %d\n",k);
    else
    printf("Search unsuccessful");
    return 0;
}