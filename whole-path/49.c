#include <stdio.h>
#include <string.h>

char *a(char *word, char *space)
{
    char *temp;
    temp = word;
    for (int i = 0; i < strlen(word) - 1; i++)
        *space++ = *word;
    return temp;
}

int main()
{
    char word[50];
    char space[50];
    scanf("%s", word);
    printf("%s\n", a(word, space));
    return 0;
}
