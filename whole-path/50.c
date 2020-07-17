#include <stdio.h>
#include <string.h>

char is_within(const char *str, char ch)
{
    while (*++str)
    {
        if (*str == ch)
            return 1;
    }
    return 0;
}

int main()
{
    char str[20], ch;
    gets(str);
    ch = getchar();
    printf("%d\n", is_within(str, ch));
    return 0;
}
