#include <stdio.h>
int search(int ar[], int l, int h, int k)
{
    int c,d,j=1;
    if (l <= h)
    {
        int m = (l + h) / 2;
        if (ar[m] == k)
        {
            c=m;d=m;
            while(j)
            {
                if(ar[c+1]==k)
                c++;
                else 
                j=0;
            }
            j=1;
             while(j)
            {
                if(ar[d-1]==k)
                d--;
                else
                j=0;
            }
            printf("First :%d and last %d",d,c);
            return m;
            
        }
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
        printf("\nFound at index %d", a);
    else
        printf("\nNot found");
    return 0;
}