#include <stdio.h>
int index_of_largest(double arr[], int n)
{
    int i;
    int mi;
    int max = arr[0];
    for (i = 0; i < n; i++)
        if (arr[i] > max)
        {
            max = arr[i];
            mi = i;
        }
    return mi;
}

int main()
{
    double arr[] = {10.31311, 324.2, 45, 90.111, 9808.113, 0, -21.432};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Index of the largest element in given array is %d\n", index_of_largest(arr, n));
    return 0;
}