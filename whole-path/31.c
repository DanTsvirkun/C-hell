#include <stdio.h>
int main()
{
    int a[4][10] = {{-22, -4, 5, 8, 0, 23, 1, -9, 2, 35},
                    {-13, 5, 6, 9, 1, 0, 0, 0, 1, -13},
                    {12, 10, 8, 6, 15, -3, -3, 0, -3, 1},
                    {0, -45, 3, 12, 2, 0, -9, -7, 23, 21}};
    printf("%p\n\n", &a[3][4]); // Взятие адресса обычного элемента
    printf("%p\n", &a[3][0]);
    printf("%p\n\n", &a[3]); // Два разных способа взятия адреса первого элемента строки
    printf("%p\n", &a[0][0]);
    printf("%p\n", &a[0]);
    printf("%p\n", &a); // Три разных способа взятия адреса первого элемента первой строки
    return 0;
}