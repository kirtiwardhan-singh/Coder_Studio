#include <stdio.h>

int main()
{
    int n, low, high, mid, s, c = -1;
    printf("Enter the number of elements in array\n");
    scanf("%d", &n);
    int ar[n];
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    printf("Enter the search element\n");
    scanf("%d", &s);
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid=(low+high)/2;
        if (ar[mid] == s)
        {
            c = mid;
            break;
        }
        else
        {
            if (ar[mid] > s)
            {

                high = mid - 1;
                if(ar[high]<=s)
                c=high;
            }
            if (ar[mid] < s)
            {
                low = mid + 1;
                if(ar[low]>=s)
                c=low;
            }
        }
    }
    if (c != -1)
        printf("floor value is at index %d and position %d", c, c + 1);
    else
        printf("-1\n");
    return 0;
}