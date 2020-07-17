#include <stdio.h>
#include <string.h>

int findSubstr(char *string, char *substring)
{
    while (string != '\0')
    {
        char *pString = string;
        char *pSubstring = substring;

        if (strlen(pString) < strlen(pSubstring))
        {
            return -1;
        }
        while (*pString++ == *pSubstring++)
        {
            if (*pSubstring == '\0')
            {
                return pString;
            }
            if (pString == '\0')
            {
                return -1;
            }
        }
        pSubstring = substring;
        string++;
    }
}
int main()
{
    char String[100];
    char Substring[100];
    scanf("%s%s", String, Substring);
    char *result = findSubstr(String, Substring);
    if (result == -1)
        printf("String 1 doesn't contain string 2\n");
    else
        printf("%x\n", result);
}