#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_sorted(int *a, int n)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

void shuffle(int *a, int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        j = rand() % n;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

int main()
{
    int a[5];
    int i;
    int attempt_count = 0;

    srand(time(NULL));

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    while (!is_sorted(a, 5))
    {
        shuffle(a, 5);
        attempt_count++;
    }

    printf("sorted array:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
