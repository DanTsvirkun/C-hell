#include <stdio.h>
#include <string.h>

char *mystrncpy(char *result, const char *source, int n)
{
    int i;
    char *temp;
    temp = result;
    for (i = 0; i < n; i++)
        *result++ = *source++;
    return temp;
}

int main()
{
    char AI[100] = "()()()()";
    char AII[50];
    int n;
    scanf("%d%s", &n, AII);
    printf("%s\n", mystrncpy(AI, AII, n));
    return 0;
}
