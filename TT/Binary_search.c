#include <stdio.h>
int search(int ar[], int l, int h, int k)
{

    if (l <= h)
    {
        int m = (l + h) / 2;
        if (ar[m] == k)
            return m;
        else if (ar[m] > k)
            return search(ar, l, m - 1, k); // h=m-1;
        else
            return search(ar, m + 1, h, k); // l=m+1;
    }
    else
        return -1;
}
int main()
{
    int n, l, h, k, i, m;
    printf("Enter size:");
    scanf("%d", &n);
    int ar[n];
    printf("Enter array:");
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    l = 0, h = n - 1;
    m = (l + h) / 2;
    printf("Enter search element :");
    scanf("%d", &k);
    int a = search(ar, l, h, k);
    if (a != -1)
        printf("Found at index %d", a);
    else
        printf("Not found");
    return 0;
}