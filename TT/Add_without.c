#include<stdio.h>
int add(int x,int y)
{
    int a,b;
    do
    {
        a=x&y;
        b=x^y;
        x=a<<1;
        y=b;
    }while(a);
    return b;
}
int main() 
{
    int a=11,b=12;
    
    printf("%d\n",add(a,b));
   // printf("%d",(a||b)^(a&&b));
    return 0;
}