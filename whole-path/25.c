#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Enter number:\n");
        scanf("%d", &n);
        if (n < 0)
            printf("Factorial of a negative number doesn`t exist.\n");
    } while (n < 0);
    if (n == 0)
    {
        printf("1\n");
        return 0;
    }
    int factorial[2000];
    factorial[0] = 1;
    factorial[1] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = factorial[0]; j > 0; j--)
        {
            factorial[j] *= i;
            if (j == factorial[0] && factorial[j] > 9999)
            {
                factorial[0]++;
                factorial[j + 1] = factorial[j] / 10000;
                factorial[j] %= 10000;
            }
            else
            {
                factorial[j + 1] += factorial[j] / 10000;
            }
            factorial[j] %= 10000;
        }
    }

    printf("\n");
    printf("%d", factorial[factorial[0]]);
    for (int i = factorial[0] - 1; i > 0; i--)
    {
        if (factorial[i] < 10)
            printf("000");
        else if (factorial[i] < 100)
            printf("00");
        else if (factorial[i] < 1000)
            printf("0");
        printf("%d", factorial[i]);
    }
    return 0;
} 