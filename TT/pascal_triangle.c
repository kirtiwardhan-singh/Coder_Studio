#include <stdio.h>
int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
int nCr(int n, int r)
{
    int num, dem;
    num = fact(n);
    dem = fact(r) * fact(n - r);
    int res = num / dem;
    return res;
}
int pascal(int n, int r)
{
    if (n == r || r == 0)
        return 1;
    else
        return (nCr(n - 1, r - 1) + nCr(n - 1, r));
}
int main()
{
    int n;
    printf("Enter rows :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
            printf(" ");
        for (int j = 0; j <= i; j++)
            printf("%d ", pascal(i, j));
        printf("\n");
    }
    return 0;
}