#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc > 2)
    {
        printf("Usage: ./ex4 or ./ex4 <filename>\n");
        exit(EXIT_FAILURE);
    }

    float numbers[255];
    int n = 0;
    if (argc == 1)
    {
        printf("Numbers count: ");
        scanf("%d", &n);
        printf("Enter numbers: ");
        for (int i = 0; i < n; i++)
        {
            scanf("%f", &numbers[i]);
        }
    }
    else
    {
        FILE *fp = fopen(argv[1], "r");
        while (!feof(fp))
        {
            fscanf(fp, "%f", &numbers[n]);
            n++;
        }
    }
    float sum;
    for (int i = 0; i < n; i++)
    {
        sum += numbers[i];
    }
    printf("Avg: %f\n", sum / n);
    return 0;
}