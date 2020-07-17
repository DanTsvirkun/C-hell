#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if (argc > 2)
    {
        printf("Enter any file name or launch this withouth arguments.\n");
        exit(EXIT_FAILURE);
    }

    float n[250];
    int l;
    if (argc == 1)
    {
        printf("Quantity: ");
        fscanf(stdin, "%d", &l);
        printf("Numbers: ");
        for (int i = 0; i < l; i++)
        {
            fscanf(stdin, "%f", &n[i]);
        }
        float sum;
        for (int i = 0; i < l; i++)
        {
            sum += n[i];
        }
        printf("The average value is: %f\n", sum / l);
    }

    else
    {
        float sum;
        char ch;
        FILE *fp;
        fp = fopen(argv[1], "r");
        while ((ch = getc(fp)) != EOF)
            if (isdigit(ch))
            {
                sum += ch;
            }

        printf("%f", sum);
        return 0;
    }
}