// assume n=20
#include <stdio.h>
void insert(int ar[], int n)
{
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);
}
void display(int ar[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d", ar[i]);
    printf("\n");
}
void delete(int ar[], int n)
{
    int a = 10;

    for (int i = 16; a <= 15; i++, a++)
        ar[a] = ar[i];
}
void insert_end(int ar[], int n)
{
    scanf("Enter to insert at end:");
    scanf("%d", ar[n + 1]);
}
int max_index(int ar[],int n)
{
    int t=ar[0],k=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>t)
        {
            t=ar[i];
            k=i;
        }
    }
    return k+1;
}
int main()
{
    int n;
    printf("Enter size :");
    scanf("%d", &n);
    int ar[n];
     insert(ar, n);
    // display(ar, n);
    // delete (ar, n);
    // display(ar, n - 6);
   printf("%d", max_index(ar,n));
    return 0;
}