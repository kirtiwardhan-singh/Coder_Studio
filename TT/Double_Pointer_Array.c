#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[3][4] = {{1, 2, 3, 4}, {10, 20, 30, 40}, {100, 200, 300, 400}};
    int *b[3][4];
    int *c[3];
    int **d;
    int i, j;
    for (i = 0; i < 3; i++)
        d = (int **)malloc(3 * sizeof(int *));
    for (j = 0; j < 4; j++)
    {
        c[j] = (int *)malloc(4 * sizeof(int));
        d[j] = (int *)malloc(4 * sizeof(int));
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            b[i][j] = &a[i][j];
            c[i][j] = a[i][j];
            d[i][j] = a[i][j];
        }
    }
     for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", *b[i][j]);
        }
        printf("\n");
    }
    printf("......................................\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
     printf("......................................\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", d[i][j]);
        }
        printf("\n");
    }
    return 0;
}