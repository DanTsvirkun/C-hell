#include <stdio.h>
#include <stdlib.h>
int main()
{
    char food[] = "Yummy";
    char *ptr;
    ptr = food + strlen(food);
    while (--ptr >= food)
        puts(ptr);
    return 0;
}
