#include <stdio.h>
int main()
{
    char str[sizeof(gets)];
    printf("Please, enter some symbols separated by a space ");
    gets(str);
    printf("The symbols are: %s\n", str);
    return 0;
}