#include <stdio.h>
int difference(int arr[], int n)
{
    int i;
    int max = arr[0];
    for (i = 0; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    int min = arr[0];
    for (i = 0; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    return max - min;
}

int main()
{
    int arr[] = {10, 324, 45, 90, 9808};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The difference between the largest and smallest elements is %d\n", difference(arr, n));
    return 0;
}