#include <stdio.h>
int rev(int n)
{
    int r = 0;
    while (n != 0)
    {
        r = r * 10 + (n % 10);
        n = n / 10;
    }
    return r;
}
// int power(int m,int n)
// {
//     int p=1;
//     for(int i=1;i<=n;i++)
//     p=p*m;
//     return p;
// }
float power(int m, int n)
{
    if (n == 0)
        return 1;
    else
    {
        if (n >= 0)
        {
            if (n % 2 == 0)
                return power(m * m, n / 2);
            else
            return m*power(m*m,(n-1)/2);
        }
        else
        {
            n=n*-1;
            if (n % 2 == 0)
                return 1.0/power(m * m, n / 2);
            else
            return 1.0/m*power(m*m,(n-1)/2);
        }

    }
}
    int main()
    {
        int m, n;
        printf("Enter:");
        scanf("%d%d", &m, &n);
        // if(rev(n)%2==0)
        // printf("%d",power(n*n,rev(n)/2));
        // else
        // printf("%d",power(n*n*n,re))
        // if (n > 0)
        // {
        //     if (n % 2 == 0)
        //         printf("%d", power(m * m, n / 2));
        //     else
        //         printf("%d", power(m * m * m, (n - 1) / 2));
        // }
        // else
        // {
        //     n = n * -1;
        //     if (n % 2 == 0)
        //         printf("%f", 1.0 / power(m * m, n / 2));
        //     else
        //         printf("%f", 1.0 / power(m * m * m, (n - 1) / 2));
        // }
        printf("%f",power(m,n));
        return 0;
    }