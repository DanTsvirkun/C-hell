#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int stack[100];
    int pos = 0;
    char c = ' ';
    while ((c = getchar()) != '\n')
    {
        int x;
        switch (c)
        {
        case ' ':
        case '\n':
            break;
        case '+':
            stack[pos - 2] = stack[pos - 2] + stack[pos - 1];
            pos--;
            break;
        case '-':
            stack[pos - 2] = stack[pos - 2] - stack[pos - 1];
            pos--;
            break;
        case '*':
            stack[pos - 2] = stack[pos - 1] * stack[pos - 2];
            pos--;
            break;
        case '/':
            stack[pos - 2] = stack[pos - 2] / stack[pos - 1];
            pos--;
            break;
        default:
            x = c - '0';
            stack[pos] = x;
            pos++;
        }
    }
    printf("Result = %d\n", stack[pos - 1]);

    return 0;
}

void exit_stack_overflow()
{
    printf("Stack overflow");
    exit(EXIT_FAILURE);
}

void exit_stack_underflow()
{
    printf("Stack underflow");
    exit(EXIT_FAILURE);
}