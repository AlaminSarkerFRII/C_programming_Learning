#include <stdio.h>
void arr2D();
void main()
{
    arr2D();

    getch();
}
void arr2D()
{
    int i, j;
    int arr[4][4] =
        {{1, 6, 8, 9},
         {1, 6, 3, 2},
         {7, 9, 5, 4},
         {3, 7, 9, 5}

        };
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    int sum = 0;
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {

            sum = sum + arr[i][j];
        }
    }
    printf("sum=%d\n", sum);
    int min = arr[0][0];
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {

            if (arr[i][j] < min)
                min = arr[i][j];
        }
    }
    printf("Min=%d\n", min);
}
