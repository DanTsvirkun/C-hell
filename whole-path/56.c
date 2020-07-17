#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(int args, char *argv[])
{
    if (args != 4)
    {
        printf("You need to enter 3 coefficients.");
        exit(EXIT_FAILURE);
    }

    for (int i = 1; i < 4; i++)
    {
        if (isalpha(argv[i][0]))
        {
            printf("You can't enter symbols");
            exit(EXIT_FAILURE);
        }
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);

    printf("%d*x^2 + %d*x + %d = 0\n", a, b, c);

    if (a == 0 && b == 0 && c == 0)
    {
        printf("You've entered all zeros.\n");
    }
    else if (a == 0 && b == 0 && c != 0)
    {
        printf("No roots.\n");
    }
    else if (a == 0 && b != 0 && c != 0)
    {
        printf("x=%d\n", -c);
    }
    else
    {
        int D = b * b - 4 * a * c;
        printf("D=%d\n", D);

        if (D < 0)
        {
            printf("D is negative -- there are no roots.\n");
        }
        else if (D == 0)
        {
            printf("x1=x2=%d\n", -b / (2 * a));
        }
        else
        {
            printf("x1=%.3f\n", (-b + pow(D, 0.5)) / (2 * a));
            printf("x2=%.3f\n", (-b - pow(D, 0.5)) / (2 * a));
        }
    }
}