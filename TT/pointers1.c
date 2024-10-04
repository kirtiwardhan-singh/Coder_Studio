#include<stdio.h>

int main() 
{
    float b=10.5;
    int *ptr=&b;
    printf("%d",*ptr);
    return 0;
}