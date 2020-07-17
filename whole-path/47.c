#include <stdio.h>
#include <stdlib.h>
void function(char *t, int n);

void function(char *t, int n)
{
    char a = getchar();
    for (int i = 1; i <= n + 1; i++)
    {
        t[i] = a;
        while (a != ' ')
        {
            a = getchar();
            break;
        }
    }
}

int main()
{
    printf("\nEnter a number of characters: ");
    int dim;
    scanf("%d", &dim);
    printf("Write any text here: ");
    char *text = malloc(dim - 1);
    function(text, dim);
    printf("Your text: %s", text);
    return 0;
}