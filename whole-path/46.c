#include <stdio.h>
#define DIM 50

char *my_gets2(char *st, int n)
{
    int i = 0;
    st = fgets(st, n, stdin);
    if (st[i])
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return st;
}

int main(void)
{
    char text[DIM + 1];
    printf("%s\n", my_gets2(text, DIM));
    return 0;
}