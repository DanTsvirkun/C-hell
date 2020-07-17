#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp;
    int i, dim;
    printf("Enter a  string: ");
    scanf("%s", str);
    dim = strlen(str) - 1;
    for (i = 0; i < strlen(str) / 2; i++)
    {
        temp = str[i];
        str[i] = str[dim];
        str[dim--] = temp;
    }
    printf(str);
    return 0;
}
