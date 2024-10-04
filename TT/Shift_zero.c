#include<stdio.h>

int main() 
{
    int n,i,j=0,f=0,c=0;
    printf("Enter array size :");
    scanf("%d",&n);
    int ar[n];
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&f);
    if(f==0)
    c++;
    else{
        ar[j]=f;
        j++;
    }
    }
    for(i=1;i<=c;i++)
    {
        ar[j]=0;
        j++;
    }
   
    
    for(i=0;i<n;i++)
    printf("%d",ar[i]);
    return 0;
}