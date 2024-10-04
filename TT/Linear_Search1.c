#include<stdio.h>
struct array 
{
    int ar;
};
int Linear(struct array arr[],int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i].ar==key)
        return i;
    }
    return -1;
}
// int RLinear(int ar[],int key,int size)
// {
//     if(size==0)
//     return -1;
//     if(key==ar[size-1])
//     return size-1;
//     else
//     return RLinear(ar,key,size-1);
// }
int main() 
{
    int i,key,n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    struct array arr[n];
    int ar[n];
    printf("Enter the elements :");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i].ar);
    printf("Enter the key element:");
    scanf("%d",&key);
    int k= Linear(arr,key,n);
    if(k==-1)
    printf("Unsuccessful search\n");
    else
    printf("Search successful...found at index %d",k);
    return 0;
}