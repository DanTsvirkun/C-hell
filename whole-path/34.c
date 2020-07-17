#include <stdio.h>
void show1(const double ar1[], int n);
void show2(const double ar2[][3], int n);

int main(void)
{
    double *aI;
    double *aII;
    aI = (double[4]){8, 3, 9, 2};
    aII = (double[3][3]){{8, 3, 9}, {5, 4, 1}};
    show1(aI, 4);
    show2(aII, 2);
    return 0;
}

void show1(const double aI[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%lf ", aI[i]);
    }
    printf("\n\n");
}
void show2(const double aII[][3], int n)
{
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("%lf ", aII[k][i]);
        }
        printf("\n");
    }
}