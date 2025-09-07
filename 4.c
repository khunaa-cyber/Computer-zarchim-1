#include <stdio.h>

int main()
{
    int n, m;

    printf("Matristiin moriin toog oruulna uu: ");
    scanf("%d", &n);
    printf("Matritsiin baganiin toog oruulna uu: ");
    scanf("%d", &m);

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n Mor buriin niilber:\n");
    for (int i = 0; i < n; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < m; j++)
        {
            rowSum += a[i][j];
        }
        printf("Mor %d: %d\n", i, rowSum);
    }

    printf("\nBagana buriin niilber:\n");
    for (int j = 0; j < m; j++)
    {
        int colSum = 0;
        for (int i = 0; i < n; i++)
        {
            colSum += a[i][j];
        }
        printf("Bagana %d: %d\n", j, colSum);
    }

    return 0;
}
