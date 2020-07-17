#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int args, char *argv[])
{

    FILE *fp;
    int ch;

    if (args < 2)
    {
        printf("Enter any file name first.");
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Try another file.");
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp)) != EOF)
        if (isdigit(ch))
        {
            putchar(ch);
        }

    fclose(fp);
    return 0;
}