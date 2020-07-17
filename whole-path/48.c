#include <stdio.h>
#define SPACE ' '
void function(const char *string, char a[]);

void function(const char *string, char a[])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == SPACE)
            return;
        a[i] = string[i];
    }
}

int main()
{
    const char *str = "abc defdef xy";
    char a[100] = {'\0'};
    puts(str);
    function(str, a);
    puts(a);
}