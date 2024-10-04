#include<stdio.h>
int binary(int ar[],int key,int low,int high)
{
    int mid=(low+high)/2;
    if(low>high)
    return -1;
    if(ar[mid]==key)
    return mid;
    else if(ar[mid]>key)
    return(ar,key,low,mid-1);
    else if(ar[mid]>key)
    return(ar,key,mid+1,high);
}
int main() 
{
    int ar[10]={1,2,3,4,5,6,7,8,9,10};
    int z=binary(ar,20,0,9);
    printf("%d",z);
    return 0;
}