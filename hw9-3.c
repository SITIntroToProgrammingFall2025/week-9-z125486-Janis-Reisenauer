#include <stdio.h>

int main()
{

    float a[2][3];
    float b[3][2];
    float c[2][2];
    int i, j, k;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%f", &b[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            c[i][j] = 0;
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The first matrix you entered is:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%.1f ", a[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix you entered is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%.1f ", b[i][j]);
        }
        printf("\n");
    }

    printf("The multiplication product of matrix A and matrix B :\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%.1f ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
