#include<stdio.h>
void swap(int ar[],int i)
{
    int t= ar[i];
    ar[0]=ar[i];
    ar[i]=t;
}
int search(int ar[],int k,int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        if(ar[i]==k)
        {
            swap(ar,i);
            return i;
        }
    }
    return -1;
}
int main() 
{
    int n=8,k,i;
   // printf("Enter size:");
    //scanf("%d",&n);
    int ar[8]={5,10,2,8,1,10,25,45};
    printf("Enter search element :");
    scanf("%d",&k);
    int a=search(ar,k,n);
    if(a!=-1)
    printf("Element found at position %d",a+1);
    else
    printf("Element not found\n");
    return 0;
}