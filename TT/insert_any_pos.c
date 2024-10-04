#include <stdio.h>
void insert(int ar[], int n)
{

    int pos, element;
    printf("Enter element and position :");
    scanf("%d%d", &element, &pos);
    if(pos>n)
    printf("Wrong position given\n");
    else if (pos == n)
        ar[pos] = element;
    else
    {
        for (int i = n - 1; i >= pos - 1; i--)
            ar[i + 1] = ar[i];
        ar[pos - 1] = element;
    }
}
void ins(int ar[], int n)
{
    printf("Enter elements :\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);
}
void display(int ar[], int n)
{
    printf("Display\n");
    for (int i = 0; i < n; i++)
        printf("%d\n", ar[i]);
}
int main()
{
    int n;
    printf("Enter size:");
    scanf("%d", &n);
    int ar[n + 1];
    ins(ar, n);
    printf("Before insertion\n");
    display(ar,n);
    printf("After insrtion\n");
    insert(ar, n);
    display(ar, n + 1);
    return 0;
}