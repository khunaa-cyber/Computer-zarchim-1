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

    int MaxEven, MaxOdd;
    int evenFound = 0, oddFound = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] % 2 == 0)
            { // тэгш
                if (!evenFound)
                {
                    MaxEven = a[i][j]; // анхны тэгш тоо
                    evenFound = 1;
                }
                else if (a[i][j] > MaxEven)
                {
                    MaxEven = a[i][j];
                }
            }
            else
            { // сондгой
                if (!oddFound)
                {
                    MaxOdd = a[i][j]; // анхны сондгой тоо
                    oddFound = 1;
                }
                else if (a[i][j] > MaxOdd)
                {
                    MaxOdd = a[i][j];
                }
            }
        }
    }

    if (evenFound)
        printf("Hamgiin ih tegsh too: %d\n", MaxEven);
    else
        printf("Matritsand tegsh too alga.\n");

    if (oddFound)
        printf("Hamgiin ih sondgoi too: %d\n", MaxOdd);
    else
        printf("Matritsand sondgoi too alga.\n");

    return 0;
}
