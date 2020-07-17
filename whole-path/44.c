#include <stdio.h>
#include <stdlib.h>
int main()
{
    char goldwyn[40] = "art of it all ";
    char samuel[40] = "I read p";
    const char *quote = "the way through.";
    strcat(goldwyn, quote);
    strcat(samuel, goldwyn);
    puts(samuel);
    return 0;
}