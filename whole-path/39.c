#include <stdio.h>
void reverseArray(int a[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

void printArray(int a[], int s)
{
    for (int i = 0; i < s; i++)
        printf("%d ", a[i]);

    printf("\n");
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);
    printArray(a, n);
    reverseArray(a, 0, n - 1);
    printf("Reversed array is \n");
    printArray(a, n);
    return 0;
}