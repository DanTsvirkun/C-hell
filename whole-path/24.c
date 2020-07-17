#include <stdio.h>
#include <string.h>
#define SIZE 64
void scytale(char plain[SIZE], int key, char encrypted[SIZE])
{
    int length = strlen(plain);
    int idx = 0;
    for (int i = 0; i < key; i++)
    {
        for (int ii = i; ii < length; ii += key)
        {
            encrypted[idx++] = plain[ii];
        }
    }
}
int main(void)
{
    char plain[SIZE] = "IamhurtverybadlyHELP";
    char encrypted[SIZE] = {'\0'};
    char decrypted[SIZE] = {'\0'};
    int key = 5;

    printf("Plain text: %s\n", plain);
    scytale(plain, key, encrypted);
    printf("Encrypted text: %s\n", encrypted);
    scytale(encrypted, strlen(plain) / key, decrypted);
    printf("Decrypted: %s\n", decrypted);
    if (!strcmp(plain, decrypted))
    {
        puts("Encryption/decryption successful!");
    }
    else
    {
        puts("Encryption/decryption failed!");
    }

    return 0;
}