#include <stdio.h>
#define DIM 4
void add();
int main()
{

    int a[DIM] = {2, 4, 5, 8};
    int b[DIM] = {1, 0, 4, 6};
    int c[DIM];

    for (int i = 0; i < DIM; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n"); // Вывод первого массива

    for (int i = 0; i < DIM; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n\n"); // Вывод второго массива

    add(a, b, c, DIM); // Вызов функции

    for (int i = 0; i < DIM; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n"); // Вывод нового массива

    return 0;
}

void add(int a[], int b[], int c[], int dim)
{
    for (int i = 0; i < DIM; i++)
    {
        c[i] = a[i] + b[i];
    }
}