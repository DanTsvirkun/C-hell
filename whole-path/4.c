#include <stdio.h>
#define BOOK "Kobzar"
int main(void)
{
    float cost = 9.49;
    float percent = 80.0;
    printf("This copy of %s sells for $%.2f.\n", BOOK, cost);
    printf("That is %.0f%% of list", percent);
    return 0;
}